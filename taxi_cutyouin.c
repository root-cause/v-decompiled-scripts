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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int* iLocal_82 = NULL;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	struct<3> Local_230[1];
	struct<418> Local_231 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = -1;
	var uLocal_233 = -1;
	var uLocal_234 = -1;
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	struct<3> Local_246 = { 0, 0, 0 } ;
	struct<3> Local_247 = { 0, 0, 0 } ;
	struct<3> Local_248 = { 0, 0, 0 } ;
	struct<3> Local_249 = { 0, 0, 0 } ;
	struct<3> Local_250 = { 0, 0, 0 } ;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	char cLocal_269[24] = "";
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	char cLocal_273[24] = "";
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	char cLocal_277[24] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	char cLocal_281[24] = "";
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	char cLocal_285[24] = "";
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	char cLocal_289[24] = "";
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	char cLocal_293[24] = "";
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	char cLocal_297[24] = "";
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	char cLocal_301[24] = "";
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<6> Local_305 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 1097859072;
	var uLocal_309 = 1500;
	var uLocal_310 = 45;
	var uLocal_311 = 1103626240;
	var uLocal_312 = 5;
	int iLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	int iLocal_323[2] = { 0, 0 };
	int iLocal_324 = 0;
	var uLocal_325[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	bool bLocal_329 = 0;
	struct<28> Local_330 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 5;
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
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_71 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_72 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_77 = { 500f, 500f, 500f };
	Local_246 = { 342.6987f, -996.7599f, 28.2438f };
	Local_247 = { 321.1089f, -996.4285f, 28.20932f };
	Local_248 = { -1042.946f, -2689.55f, 12.7572f };
	Local_249 = { -1044.808f, -2694.138f, 12.728f };
	Local_250 = { 348.0136f, -993.6165f, 31.9655f };
	iLocal_262 = 1;
	iLocal_266 = -1;
	StringCopy(&cLocal_269, "txm8_thank1M_2", 24);
	StringCopy(&cLocal_273, "txm8_thank1T_2", 24);
	StringCopy(&cLocal_277, "txm8_thank1F_2", 24);
	StringCopy(&cLocal_281, "txm8_thank2M_2", 24);
	StringCopy(&cLocal_285, "txm8_thank2T_2", 24);
	StringCopy(&cLocal_289, "txm8_thank2F_2", 24);
	StringCopy(&cLocal_293, "txm8_thank3M_2", 24);
	StringCopy(&cLocal_297, "txm8_thank3T_2", 24);
	StringCopy(&cLocal_301, "txm8_thank3F_2", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_444(2);
		func_441();
	}
	MISC::SET_MISSION_FLAG(true);
	func_428(5);
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_231);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x185
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()//Position - 0x1A6
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)//Position - 0x1F1
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)//Position - 0x22E
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)//Position - 0x253
{
	return Global_1998[iParam0 /*29*/];
}

bool func_6(int iParam0)//Position - 0x262
{
	return iParam0 < 3;
}

void func_7(var uParam0)//Position - 0x26E
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2F6
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

void func_9()//Position - 0x391
{
	int iVar0;
	int iVar1;
	
	if (func_427(&Local_231))
	{
		if (func_426(&Local_231, bLocal_254))
		{
			func_424();
		}
	}
	else
	{
		func_423(&Local_231);
		func_389(&Local_231, &uLocal_306);
		if (Local_231.f_410 != 28 && Local_231.f_410 != 30)
		{
			func_388(&Local_231);
		}
		func_387(&Local_231, &uLocal_264, 0);
		if (Local_231.f_410 > 2)
		{
			if (((Local_231.f_410 == 21 || Local_231.f_410 == 25) || Local_231.f_410 == 9) || Local_231.f_410 == 22)
			{
				func_386(&Local_231);
			}
			if (!func_385(&Local_231))
			{
				func_355();
			}
			else
			{
				func_335(&Local_231, "Taxi Not Driveable", func_354(&Local_231));
			}
		}
		if (Local_231.f_410 == 9 || Local_231.f_410 == 22)
		{
			func_312(&Local_231, 0, 1);
		}
		if (Local_231.f_410 == 17 || Local_231.f_410 == 21)
		{
			if (func_311(&Local_231) && func_301(1, 1, 0))
			{
				func_288(&uLocal_45, Local_250, 0, 0, 1, 1, 1);
			}
			else
			{
				func_287(&uLocal_45, 0, 0);
			}
			if (func_286(&Local_231) && func_301(1, 1, 0))
			{
				if (!BitTest(uLocal_263, 3))
				{
					func_285("TAXI_HNT_CAM", -1);
					MISC::SET_BIT(&uLocal_263, 3);
					if (BitTest(uLocal_263, 4))
					{
						MISC::CLEAR_BIT(&uLocal_263, 4);
					}
				}
			}
			else if (!BitTest(uLocal_263, 4))
			{
				HUD::CLEAR_HELP(true);
				MISC::SET_BIT(&uLocal_263, 4);
			}
		}
		switch (Local_231.f_410)
		{
			case 0:
				func_282();
				func_281(&Local_231, 16, 4f, 0);
				func_278(&Local_231, Local_248, Local_249, "TaxiDerrick", func_280(0), 116.1366f, 10f);
				func_276(&Local_231);
				func_275(&Local_231, 1);
				break;
			
			case 1:
				if (func_273())
				{
					PED::ADD_RELATIONSHIP_GROUP("TAXI_Pursuers", &iLocal_328);
					func_272();
					func_252();
					func_251(&(Local_230[0 /*3*/]), "TAXI_SC_BN_07", 1000);
					func_250(&Local_231, &Local_230);
					func_249(&Local_231);
					Local_231.f_14 = { Local_248 };
					func_275(&Local_231, 3);
				}
				break;
			
			case 3:
				if (func_241(&Local_231, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 8, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_231.f_3, iLocal_328);
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_231.f_3, true);
					}
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1035.326f, -2703.305f, 12.8004f, -1056.08f, -2568.675f, 12.8181f, 125f, true, false, true);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, 1166638144, Local_231.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, -1865950624, Local_231.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("AMBIENT_GANG_MEXICAN"), Local_231.f_413);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_280(0));
					func_240(&Local_231, 1, 0);
					func_275(&Local_231, 5);
				}
				break;
			
			case 5:
				if (func_216(&Local_231, 0, 1109393408))
				{
					Local_231.f_17 = { func_215(0) };
					iLocal_251 = 1;
					func_275(&Local_231, 15);
				}
				break;
			
			case 15:
				if (func_214(&Local_231))
				{
					func_211(&Local_231, 9, 1, 0, 0);
					func_210(&Local_231);
					func_209();
					func_208(func_215(-1), 0, 1114636288);
					func_275(&Local_231, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, false))
					{
						func_203(&Local_231);
						func_275(&Local_231, 5);
					}
				}
				break;
			
			case 9:
				if (!func_202(Local_231.f_82, 16384) && func_201(&Local_231) != 35)
				{
					if (func_200(&Local_231))
					{
						if (func_286(&Local_231))
						{
							if (func_199(Local_231.f_4, Local_231.f_17, 1) <= 80f)
							{
								func_197(&uLocal_333);
								func_196(&Local_330, 4, 0);
								func_211(&Local_231, 35, 1, 1, 0);
								PED::SET_CREATE_RANDOM_COPS(false);
							}
						}
					}
				}
				if (!iLocal_261)
				{
					if (func_200(&Local_231))
					{
						if (func_286(&Local_231))
						{
							if (func_199(Local_231.f_4, Local_231.f_17, 1) <= 100f)
							{
								MISC::CLEAR_AREA_OF_COPS(333.6208f, -955.5027f, 28.4225f, 60f, 0);
								iLocal_261 = 1;
							}
						}
					}
				}
				if (func_179(&Local_231, 1086324736, 1097859072, 1117782016))
				{
					iLocal_251 = 0;
					HUD::SET_BLIP_ALPHA(Local_231.f_9, 0);
					Local_231.f_26 = { -1047.518f, -2722.114f, 19.0823f };
					Local_231.f_34 = 238.52f;
					func_281(&Local_231, 6, 0, 0);
					func_177(&(Local_231.f_81), 67108864);
					func_211(&Local_231, 28, 1, 1, 0);
					Local_231.f_417 = 29;
					func_275(&Local_231, 16);
				}
				break;
			
			case 16:
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
					if (func_200(&Local_231))
					{
						func_175(&Local_231, Local_246);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_231.f_3, 451360105) == 7)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_246, 1.5f, 40000, 0.25f, false, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 0.25f, false, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_247, 3f, 40000, 0.25f, false, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
						TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
						func_281(&Local_231, 6, 0, 0);
						func_275(&Local_231, 17);
						iLocal_252 = 0;
					}
				}
				break;
			
			case 17:
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
				}
				if (!iLocal_252)
				{
					func_167();
				}
				if (func_286(&Local_231))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0))
					{
						if (func_199(Local_231.f_4, Local_231.f_17, 1) > 250f)
						{
							func_335(&Local_231, "Player abandoned his accomplice while he at the jewelry store", 8);
						}
						if (func_165(Local_231.f_3, 1) > 10f)
						{
							if (HUD::GET_BLIP_ALPHA(Local_231.f_9) == 0 && !bLocal_254)
							{
								func_162(&Local_231, 1);
								HUD::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_01");
							}
							func_211(&Local_231, 57, 1, 0, 1);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(Local_231.f_9) && HUD::GET_BLIP_ALPHA(Local_231.f_9) > 0)
					{
						HUD::SET_BLIP_ALPHA(Local_231.f_9, 0);
						HUD::SET_BLIP_ROUTE(Local_231.f_9, false);
						func_211(&Local_231, 29, 1, 0, 1);
						HUD::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_1B");
					}
				}
				else
				{
					if (!iLocal_253)
					{
						iLocal_253 = 1;
					}
					func_151(&Local_231, 1);
				}
				if (((ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_231.f_3, Local_247, 5f, 5f, 5f, false, true, 0)) && func_311(&Local_231)) && !iLocal_252)
				{
					if (!PED::IS_PED_INJURED(Local_231.f_3))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(Local_231.f_3))
						{
							MISC::SET_BIT(&uLocal_306, 8);
							WEAPON::GIVE_WEAPON_TO_PED(Local_231.f_3, joaat("weapon_combatpistol"), 50, false, true);
							TASK::TASK_SHOOT_AT_COORD(Local_231.f_3, 335.5314f, -992.4785f, 28.38245f, 10000, joaat("FIRING_PATTERN_BURST_FIRE"));
							ENTITY::SET_ENTITY_VISIBLE(Local_231.f_3, false, false);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_231.f_3, false);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_231.f_3, true);
							ENTITY::SET_ENTITY_COORDS(Local_231.f_3, 339.9392f, -992.9357f, 28.3731f, true, false, false, true);
							iLocal_252 = 1;
							func_281(&Local_231, 6, 0, 0);
						}
					}
				}
				if (iLocal_252)
				{
					if ((func_149(&Local_231, 6) > 8f && ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0)) && func_311(&Local_231))
					{
						if (!PED::IS_PED_INJURED(Local_231.f_3))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(Local_231.f_3))
							{
								MISC::CLEAR_BIT(&uLocal_306, 8);
								ENTITY::SET_ENTITY_VISIBLE(Local_231.f_3, true, false);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_231.f_3, true);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_231.f_3, false);
								ENTITY::SET_ENTITY_COORDS(Local_231.f_3, Local_247, true, false, false, true);
								PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 8, 1, 0, 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
								{
									PED::SET_PED_CONFIG_FLAG(Local_231.f_3, 118, false);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_231.f_3);
									iVar0 = func_148(Local_231.f_4, Local_231.f_3);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
									TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 343.9973f, -998.308f, 28.2314f, 3f, 0, false, 786603, -1f);
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
									TASK::TASK_SWAP_WEAPON(0, false);
									TASK::TASK_ENTER_VEHICLE(0, Local_231.f_4, 40000, iVar0, 2f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
									TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
									func_281(&Local_231, 6, 0, 0);
									if (HUD::DOES_BLIP_EXIST(Local_231.f_9))
									{
										HUD::SET_BLIP_ALPHA(Local_231.f_9, 0);
										HUD::SET_BLIP_ROUTE(Local_231.f_9, false);
									}
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_231.f_3, "MOVE_P_M_ZERO_RUCKSACK");
									func_275(&Local_231, 21);
								}
							}
						}
					}
				}
				break;
			
			case 21:
				if (func_149(&Local_231, 6) > 23f)
				{
					if (!PED::IS_PED_INJURED(Local_231.f_3))
					{
						TASK::CLEAR_PED_TASKS(Local_231.f_3);
						TASK::TASK_SHOOT_AT_ENTITY(Local_231.f_3, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					func_335(&Local_231, "player didn't let teh Passenger in", 8);
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if ((ENTITY::IS_ENTITY_AT_COORD(Local_231.f_3, 347.8621f, -983.6118f, 31.30889f, 4f, 3f, 3f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0)) && iLocal_252)
				{
					FIRE::ADD_EXPLOSION(344.5906f, -996.409f, 28.30219f, 4, 0.5f, true, false, 1f, false);
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_266, "Burglar_Bell", 340.8f, -965.4f, 28.4f, "Generic_Alarms", false, 0, false);
					iLocal_252 = 0;
				}
				if (func_200(&Local_231))
				{
					PED::SET_CREATE_RANDOM_COPS(true);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::GET_PLAYER_INDEX(), 2, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
					AUDIO::START_AUDIO_SCENE("TAXI_CUT_U_IN");
					func_208(func_215(0), 1, 1114636288);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_231.f_413, joaat("COP"));
					func_146(6, 2);
					func_211(&Local_231, 49, 1, 0, 0);
					if (HUD::DOES_BLIP_EXIST(Local_231.f_9))
					{
						HUD::SET_BLIP_ROUTE(Local_231.f_9, false);
						HUD::REMOVE_BLIP(&(Local_231.f_9));
					}
					func_287(&uLocal_45, 0, 0);
					func_281(&Local_231, 6, 0, 0);
					func_281(&Local_231, 9, 0, 0);
					func_281(&Local_231, 7, 0, 0);
					func_275(&Local_231, 25);
				}
				break;
			
			case 25:
				func_145(&Local_231, &(Local_231.f_43));
				if (func_202(Local_231.f_44, 4))
				{
					func_143(&(Local_231.f_44), 4);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
				{
					if (!func_142(&Local_231))
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if ((func_149(&Local_231, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f) && iLocal_268 < 8) || func_149(&Local_231, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(25f, 35f))
							{
								if (func_201(&Local_231) != 51)
								{
									func_211(&Local_231, 51, 1, 0, 0);
									iLocal_268++;
								}
								else
								{
									func_240(&Local_231, 1, 0);
								}
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1 && func_149(&Local_231, 6) > 10f)
				{
					AUDIO::STOP_AUDIO_SCENE("TAXI_CUT_U_IN");
					func_275(&Local_231, 26);
					func_177(&(Local_231.f_44), 1);
				}
				break;
			
			case 26:
				func_145(&Local_231, &(Local_231.f_43));
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
				{
					if (!func_142(&Local_231))
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if ((func_149(&Local_231, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f) && iLocal_268 < 8) || func_149(&Local_231, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(25f, 35f))
							{
								if (func_201(&Local_231) != 51)
								{
									func_211(&Local_231, 51, 1, 0, 0);
									iLocal_268++;
								}
								else
								{
									func_240(&Local_231, 1, 0);
								}
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1 && func_149(&Local_231, 9) > 2f)
				{
					if (func_149(&Local_231, 9) <= 180f)
					{
						func_141(&Local_231, 0);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, Local_231.f_413, joaat("COP"));
					Local_231.f_17 = { func_215(5) };
					func_146(7, 2);
					func_140(&Local_231);
					func_139(&Local_231, 9, 0);
					func_139(&Local_231, 2, 0);
					func_139(&Local_231, 3, 0);
					if (!func_202(Local_231.f_44, 4))
					{
						func_177(&(Local_231.f_44), 4);
					}
					Local_231.f_116 = 1;
					func_275(&Local_231, 14);
				}
				break;
			
			case 14:
				if (!func_137(&Local_231))
				{
					func_134();
					func_162(&Local_231, 1);
					func_133();
					func_275(&Local_231, 22);
				}
				break;
			
			case 22:
				if (!bLocal_256)
				{
					if (Local_231.f_417 == 33 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
					{
						bLocal_256 = true;
						func_177(&(Local_231.f_44), 4);
						func_132(&iLocal_266);
						Local_330.f_27++;
					}
				}
				if (bLocal_256)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
					{
						if (HUD::DOES_BLIP_EXIST(Local_231.f_9))
						{
							HUD::SET_BLIP_ROUTE(Local_231.f_9, false);
							HUD::REMOVE_BLIP(&(Local_231.f_9));
						}
					}
					else
					{
						func_162(&Local_231, 1);
					}
				}
				if (func_202(Local_231.f_44, 1) && bLocal_256)
				{
					func_143(&(Local_231.f_44), 1);
					if (bLocal_329)
					{
					}
				}
				if (!func_202(Local_231.f_82, 32768) && func_201(&Local_231) != 36)
				{
					if (func_200(&Local_231))
					{
						if (func_286(&Local_231))
						{
							if (func_199(Local_231.f_4, Local_231.f_17, 1) <= 300f)
							{
								if (!func_131())
								{
									func_211(&Local_231, 36, 1, 1, 0);
								}
								else
								{
									func_129();
								}
								if (iLocal_255 && !iLocal_258)
								{
									MISC::CLEAR_AREA(Local_231.f_17, 3f, false, false, false, false);
									iLocal_326 = PED::ADD_SCENARIO_BLOCKING_AREA(-1033.188f, -2743.18f, 19f, -1047.948f, -2739.18f, 20.20066f, false, true, true, true);
									iLocal_323[0] = PED::CREATE_PED(6, func_280(3), -1036.502f, -2742.986f, 20.16969f, 0f, true, true);
									iLocal_323[1] = PED::CREATE_PED(6, func_280(3), -1043.706f, -2739.234f, 19.16969f, 0f, true, true);
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_323[0], joaat("weapon_carbinerifle"), -1, true, true);
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_323[1], joaat("weapon_carbinerifle"), -1, true, true);
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1036.502f, -2742.986f, 20.16969f, 5f, true))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_323[0], -1036.502f, -2742.986f, 20.16969f, 2.5f, 0);
									}
									else
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_323[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
									}
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1043.706f, -2739.234f, 19.16969f, 5f, true))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_323[1], -1043.706f, -2739.234f, 19.16969f, 2.5f, 0);
									}
									else
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_323[1], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
									}
									iLocal_258 = 1;
								}
							}
						}
					}
				}
				if (func_179(&Local_231, 1086324736, 1097859072, 1117782016))
				{
					Local_330.f_0 = 0;
					HUD::REMOVE_BLIP(&(Local_231.f_9));
					func_127(&Local_231);
					func_123(&Local_231);
					func_122();
					func_275(&Local_231, 27);
				}
				break;
			
			case 27:
				if (func_120() && !iLocal_257)
				{
					func_119(&Local_231, &iVar1);
					iLocal_244 = OBJECT::CREATE_OBJECT(joaat("p_banknote_s"), ENTITY::GET_ENTITY_COORDS(Local_231.f_3, true), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_244, Local_231.f_3, 57005, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					if (!PED::IS_PED_INJURED(Local_231.f_3) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_PLAY_ANIM(Local_231.f_3, "oddjobs@taxi@cyi", func_118(iVar1), 2f, -2f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@taxi@cyi", func_117(iVar1), 2f, -2f, -1, 0, 0f, false, false, false);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_244, func_116(iVar1), "oddjobs@taxi@cyi", 1f, false, false, false, 0f, 0);
					}
					iLocal_257 = 1;
				}
				if (func_108(&Local_231, 1))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_231.f_29, 1f, 20000, 0.25f, false, 40000f);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
					TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
					PED::SET_PED_KEEP_TASK(Local_231.f_3, true);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_231.f_3, "MOVE_P_M_ZERO_RUCKSACK");
					func_275(&Local_231, 29);
				}
				break;
			
			case 29:
				if (func_75(&Local_231, &iLocal_313))
				{
					if (iLocal_255 || iLocal_265 == -1)
					{
						func_275(&Local_231, 28);
					}
					else
					{
						func_12(1, &Local_231, 1);
						func_275(&Local_231, 30);
					}
				}
				break;
			
			case 28:
				if (func_10())
				{
					func_12(1, &Local_231, 1);
					func_275(&Local_231, 30);
				}
				break;
			
			case 30:
				func_441();
				break;
			}
	}
}

int func_10()//Position - 0x1564
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	
	Var1 = { Var1 };
	if (iLocal_265 > 2)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (iLocal_265)
	{
		case -1:
			iLocal_265++;
			break;
		
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			PED::SET_CREATE_RANDOM_COPS(false);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1041.9f, -2745.113f, 20.3644f, 1.25f, 20000, 0.25f, false, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			iLocal_327 = VEHICLE::CREATE_VEHICLE(func_280(4), -1067.146f, -2579.632f, 19.7762f, 150f, true, true, false);
			iLocal_324 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_327, 26, func_280(3), -1, true, true);
			func_281(&Local_231, 9, 0, 0);
			iLocal_265++;
			break;
		
		case 1:
			if (func_149(&Local_231, 9) > 0.5f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[0], false))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_323[0], Local_231.f_3, -1, 2049, 3);
						func_8(&(Local_231.f_244), 4, iLocal_323[0], "TaxiOJCop1", 0, 1);
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_323[0], "TaxiOJCop1");
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[1], false))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_323[1], Local_231.f_3, -1, 2049, 3);
					}
				}
				iLocal_265++;
			}
			break;
		
		case 2:
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_323[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_323[1], false)) && !ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_231.f_3, -1032.675f, -2738.775f, 19.16969f, -1041.51f, -2733.615f, 21.54504f, 2f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_231.f_3, Local_231.f_3, 1f, false, 4f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_231.f_3, -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_323[0], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK(iLocal_323[0], true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_STAND_STILL(0, 1500);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_231.f_3, 2000, false);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_231.f_3, Local_231.f_3, 1f, false, 4f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_231.f_3, -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_323[1], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK(iLocal_323[1], true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_323[0], 3);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_323[0], -1, 2049, 3);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_HANDS_UP(0, -1, 0, -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					func_211(&Local_231, 54, 1, 0, 0);
					iLocal_267 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uLocal_325, -1);
					iVar2 = 0;
					while (iVar2 < iLocal_267)
					{
						if (((((uLocal_325[iVar2] != PLAYER::PLAYER_PED_ID() && uLocal_325[iVar2] != Local_231.f_3) && uLocal_325[iVar2] != iLocal_323[1]) && uLocal_325[iVar2] != iLocal_323[0]) && uLocal_325[iVar2] != iLocal_324) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_325[iVar2]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_325[iVar2], true, true);
							TASK::TASK_SMART_FLEE_PED(uLocal_325[iVar2], Local_231.f_3, 100f, -1, false, false);
						}
						iVar2++;
					}
					func_281(&Local_231, 9, 0, 0);
					iLocal_265++;
				}
			}
			break;
		
		case 3:
			if (func_149(&Local_231, 9) > 5f && !func_131())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_328, joaat("COP"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_328);
				WEAPON::GET_CURRENT_PED_WEAPON(Local_231.f_3, &iVar3, true);
				if (iVar3 == joaat("weapon_unarmed"))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_231.f_3, joaat("weapon_combatpistol"), -1, false, true);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_231.f_3, 13, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_231.f_3, 24, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_231.f_3, 2);
				PED::SET_PED_CAN_EVASIVE_DIVE(Local_231.f_3, true);
				PED::SET_PED_ACCURACY(Local_231.f_3, 80);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_231.f_3, 50f, 0);
				func_281(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_323[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_323[1], PLAYER::PLAYER_PED_ID(), true)) && !PED::IS_PED_INJURED(Local_231.f_3))
			{
				TASK::TASK_SMART_FLEE_PED(Local_231.f_3, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				func_281(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[0], false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_323[0]);
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1036.502f, -2742.986f, 20.16969f, 5f, true))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_323[0], -1036.502f, -2742.986f, 20.16969f, 1f, 0);
					}
					else
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_323[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
					}
					PED::SET_PED_KEEP_TASK(iLocal_323[0], true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[1], false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_323[1]);
					Var1 = { ENTITY::GET_ENTITY_COORDS(Local_231.f_3, false) };
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var1, Var1, 1f, false, 3f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, Var1, 500, false, false);
					TASK::TASK_LOOK_AT_COORD(0, Var1, -1, 2049, 3);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_323[1], iVar0);
					PED::SET_PED_KEEP_TASK(iLocal_323[0], true);
				}
				return 1;
			}
			else
			{
				if (func_149(&Local_231, 9) > 6f)
				{
					func_211(&Local_231, 140, 1, 0, 1);
					func_281(&Local_231, 9, 0, 0);
				}
				if (ENTITY::IS_ENTITY_DEAD(iLocal_323[0], false) && ENTITY::IS_ENTITY_DEAD(iLocal_323[1], false))
				{
					TASK::CLEAR_PED_TASKS(Local_231.f_3);
					TASK::TASK_SMART_FLEE_PED(Local_231.f_3, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				}
				if (func_165(Local_231.f_3, 1) > 50f)
				{
					return 1;
				}
			}
			func_281(&Local_231, 9, 0, 0);
			iLocal_265++;
			break;
		
		case 5:
			if (func_149(&Local_231, 9) > 2f)
			{
				func_281(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		
		case 6:
			if (func_149(&Local_231, 9) > 2f)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_327, func_11(5)) };
				func_281(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		
		case 7:
			if (func_149(&Local_231, 9) >= 1f)
			{
				iLocal_265++;
			}
			break;
		
		case 8:
			iLocal_265++;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

Vector3 func_11(int iParam0)//Position - 0x1C7F
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1040.486f, -2726.058f, 21.4491f };
			break;
		
		case 4:
			Var0 = { -1044.847f, -2726.239f, 20.2197f };
			break;
		
		case 6:
			Var0 = { -1045.252f, -2733.154f, 23.9084f };
			break;
		
		case 5:
			Var0 = { -1053.653f, -2720.5f, 20.1615f };
			break;
		
		case 1:
			Var0 = { -1042.008f, -2729.232f, 21.2022f };
			break;
		
		case 2:
			Var0 = { -1049.799f, -2725.069f, 20.7481f };
			break;
		
		case 3:
			Var0 = { -1043.888f, -2723.783f, 20.6874f };
			break;
		
		case 7:
			Var0 = { -1041.917f, -2746.239f, 22.2494f };
			break;
		
		case 8:
			Var0 = { -1041.811f, -2739.353f, 21.2173f };
			break;
	}
	return Var0;
}

void func_12(bool bParam0, var uParam1, bool bParam2)//Position - 0x1D8E
{
	if (bParam0)
	{
		func_51(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_146(1, 0);
	}
	func_13(uParam1, bParam2);
}

void func_13(var uParam0, bool bParam1)//Position - 0x1DCA
{
	func_50(uParam0);
	if (func_131())
	{
		func_48();
	}
	func_46();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_41(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_37(uParam0->f_14, 1);
	func_208(uParam0->f_14, 1, 1114636288);
	func_36(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (func_33())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_23(0, 1, 1, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (func_202(Global_113386.f_19097, 4))
	{
		func_143(&(Global_113386.f_19097), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_22(), false);
	}
	if (bParam1)
	{
		func_21(uParam0);
	}
	func_20(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_18(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_14(&iLocal_82) * 1000f)), 12, 0);
}

float func_14(var uParam0)//Position - 0x1F21
{
	if (func_17(uParam0))
	{
		if (func_16(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_15(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_15(bool bParam0)//Position - 0x1F5A
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

bool func_16(var uParam0)//Position - 0x1FB2
{
	return BitTest(*uParam0, 2);
}

bool func_17(var uParam0)//Position - 0x1FBF
{
	return BitTest(*uParam0, 1);
}

void func_18(int iParam0)//Position - 0x1FCC
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_19(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_19(int iParam0)//Position - 0x1FF3
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_20(var uParam0)//Position - 0x20BC
{
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uParam0->f_51[0]);
}

void func_21(var uParam0)//Position - 0x20D0
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
			{
				PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_413, joaat("player"));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_22()//Position - 0x21CD
{
	return joaat("taxi");
}

void func_23(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x21DA
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_32(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_31())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_30(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_32(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_30(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID())) && !func_25(PLAYER::PLAYER_ID(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_24()//Position - 0x231D
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_25(int iParam0, int iParam1)//Position - 0x2337
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)//Position - 0x2382
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()//Position - 0x23C3
{
	return Global_1574918;
}

int func_28(int iParam0)//Position - 0x23CF
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
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

bool func_29()//Position - 0x240E
{
	return BitTest(Global_2621446, 3);
}

int func_30(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x241C
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_31()//Position - 0x244F
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)//Position - 0x2476
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 13);
	}
}

int func_33()//Position - 0x2499
{
	if (!func_35() && !func_34())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()//Position - 0x24C4
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x24DE
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1)//Position - 0x24F8
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_37(struct<3> Param0, bool bParam1)//Position - 0x2515
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_39(Param0, func_40(), 0))
	{
		Var0 = { func_38(Param0, 1f, -30f, -30f, -10f) };
		Var1 = { func_38(Param0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, bParam1, true);
	}
}

Vector3 func_38(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x2575
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	Var0.f_0 = ((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

bool func_39(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x25C2
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_40()//Position - 0x2609
{
	struct<3> Var0;
	
	return Var0;
}

void func_41(int iParam0)//Position - 0x2615
{
	if (func_45())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_44())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8137, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 30);
	}
	if (!func_31())
	{
		Global_20266.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)//Position - 0x269F
{
	if (bParam0)
	{
		if (func_43(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20203);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
}

int func_43(int iParam0)//Position - 0x2713
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

bool func_44()//Position - 0x276A
{
	return BitTest(Global_1958711, 5);
}

bool func_45()//Position - 0x2778
{
	return BitTest(Global_1958711, 19);
}

void func_46()//Position - 0x2787
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/] && !Global_97374[iVar0 /*17*/].f_1)
		{
			if (Global_97374[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_97374[iVar0 /*17*/].f_5 != 88 && Global_97374[iVar0 /*17*/].f_5 != 89) && Global_97374[iVar0 /*17*/].f_5 != 92)
				{
					func_47(Global_97374[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)//Position - 0x280E
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

void func_48()//Position - 0x284C
{
	Global_20471 = 0;
	func_49();
}

void func_49()//Position - 0x285C
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

void func_50(var uParam0)//Position - 0x287D
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
}

void func_51(var uParam0)//Position - 0x28BE
{
	func_146(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_444(1);
		func_61(15, 1);
	}
	func_177(&(Global_113386.f_19097), 1024);
	if (!func_202(Global_113386.f_19097, 64))
	{
		func_52(func_59(func_60(uParam0)), 0, 0);
	}
}

void func_52(int iParam0, int iParam1, int iParam2)//Position - 0x2912
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
		func_58((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_53();
	}
}

void func_53()//Position - 0x29F8
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
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113109, 0);
					MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113122, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113105, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113123, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113106, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113124, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113107, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113125, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113108, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113112, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113129, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113130, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113131, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113386.f_10194.f_3853))
	{
		func_57(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_56() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_54();
				}
			}
		}
	}
}

int func_54()//Position - 0x2EB6
{
	if (func_55(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_55(bool bParam0)//Position - 0x2F01
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_56()//Position - 0x2F29
{
	return Global_31959;
}

int func_57(int iParam0, int iParam1)//Position - 0x2F34
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
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_58(int iParam0, bool bParam1, int iParam2)//Position - 0x2F85
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_59(int iParam0)//Position - 0x2FA3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_60(var uParam0)//Position - 0x3039
{
	return uParam0->f_411;
}

int func_61(int iParam0, int iParam1)//Position - 0x3046
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_62(iParam0, iParam1);
}

int func_62(int iParam0, int iParam1)//Position - 0x3061
{
	if (func_74(14) && !func_73(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_72(&Global_4541529))
	{
		if (func_70(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_63(&Global_4541529, iParam0))
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

int func_63(var uParam0, int iParam1)//Position - 0x30FE
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_74(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	func_66(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_64(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_64(var uParam0, int iParam1)//Position - 0x31AF
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_74(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_65(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_65(var uParam0, int iParam1)//Position - 0x322A
{
	return (*uParam0)[iParam1] == 78;
}

void func_66(var uParam0)//Position - 0x323B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0, iVar0);
		iVar0++;
	}
	func_68(uParam0, (Global_4541528 - 0.5f));
}

void func_67(var uParam0, int iParam1)//Position - 0x326F
{
	(*uParam0)[iParam1] = 78;
}

void func_68(var uParam0, float fParam1)//Position - 0x327F
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

float func_69(var uParam0)//Position - 0x329C
{
	return uParam0->f_80;
}

bool func_70(var uParam0, int iParam1)//Position - 0x32A8
{
	return func_71(uParam0, iParam1) != -1;
}

int func_71(var uParam0, int iParam1)//Position - 0x32BA
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

bool func_72(var uParam0)//Position - 0x32E7
{
	return uParam0->f_79 == 1;
}

int func_73(int iParam0)//Position - 0x32F5
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

bool func_74(int iParam0)//Position - 0x3345
{
	return Global_43052 == iParam0;
}

int func_75(var uParam0, int iParam1)//Position - 0x3353
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_131() && func_149(uParam0, 0) > 1f)
			{
				if (func_33())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				func_107(uParam0);
				func_143(&(Global_113386.f_19097), 4096);
				func_104(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_106(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_103(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_97(iParam1, 0))
			{
				func_76(uParam0);
				func_281(uParam0, 0, 0, 0);
				func_103(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_76(var uParam0)//Position - 0x3425
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_77(func_95(), 21, iVar0, 0, 0);
		func_146(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3463
{
	int iVar0;
	int iVar1;
	
	if (func_94(iParam0) == 3)
	{
		return;
	}
	if (func_94(iParam0) == 4)
	{
		return;
	}
	func_78(func_94(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
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
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
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

int func_78(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3535
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_93();
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
					func_92(99, 1);
					func_91(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_91(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_91(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_90(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_87(5))
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
							func_91(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_91(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_91(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_87(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_91(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_91(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_91(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_91(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_91(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_91(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_91(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_91(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_91(joaat("sp2_money_spent_property"), iParam3);
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
									func_91(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_91(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_91(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_91(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_91(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_91(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_87(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_91(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_91(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_91(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_91(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_91(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_91(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_86(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_92(95, iParam3);
					break;
				
				case 1:
					func_92(97, iParam3);
					break;
				
				case 2:
					func_92(96, iParam3);
					break;
			}
			func_92(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_81(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_81(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_91(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_91(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_91(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
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
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_80(iParam0);
	if (Global_43052 == 15)
	{
		func_79(0);
	}
	return 1;
}

void func_79(bool bParam0)//Position - 0x3B34
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
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_80(int iParam0)//Position - 0x3DB6
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_81(bool bParam0)//Position - 0x3E10
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_58(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_58(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_58(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_58(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_84(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_84(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_84(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_84(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_84(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_84(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_83() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_83() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_82(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_82(bool bParam0)//Position - 0x3F90
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_83()//Position - 0x40FC
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_84(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x4109
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_85(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_85(var uParam0)//Position - 0x4139
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

void func_86(int iParam0)//Position - 0x416D
{
	func_92(93, iParam0);
	func_92(29, iParam0);
	func_92(30, iParam0);
}

int func_87(int iParam0)//Position - 0x418D
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
		return func_89(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_89(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_89(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_89(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_88(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_88(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_88(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_88(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_88(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_88(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_83() /*5567*/].f_681.f_10, iParam0);
}

int func_88(int iParam0, int iParam1, int iParam2)//Position - 0x4333
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_85(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_89(int iParam0, int iParam1)//Position - 0x4370
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_90(bool bParam0)//Position - 0x438C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, true);
		func_57(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_61(27, 1);
	return 1;
}

void func_91(int iParam0, int iParam1)//Position - 0x4443
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_92(int iParam0, int iParam1)//Position - 0x4466
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_58896[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_93()//Position - 0x44C3
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_94(int iParam0)//Position - 0x4538
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_95()//Position - 0x4549
{
	func_96();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_96()//Position - 0x4562
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_4(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_3(PLAYER::PLAYER_PED_ID());
			if (func_6(iVar0) && (!func_74(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_6(Global_113386.f_2363.f_539.f_4321))
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

int func_97(var uParam0, int iParam1)//Position - 0x465F
{
	if (!func_17(&(uParam0->f_2)))
	{
		func_101(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_17(&(uParam0->f_5)))
			{
				func_101(&(uParam0->f_5));
				func_100(uParam0, 1051260355);
			}
		}
		if (func_17(&(uParam0->f_5)))
		{
			if (func_99(&(uParam0->f_5)) > 0.33f)
			{
				func_98(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_99(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_17(&(uParam0->f_5)))
		{
			func_101(&(uParam0->f_5));
			func_100(uParam0, 1051260355);
		}
		else if (func_99(&(uParam0->f_5)) > 0.33f)
		{
			func_98(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_98(var uParam0)//Position - 0x4762
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_99(var uParam0)//Position - 0x4778
{
	if (func_17(uParam0))
	{
		if (func_16(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_15(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_100(var uParam0, float fParam1)//Position - 0x47B4
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_101(int* iParam0)//Position - 0x47DA
{
	func_102(iParam0, 0f);
}

void func_102(int* iParam0, float fParam1)//Position - 0x47E9
{
	iParam0->f_1 = (func_15(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_103(int iParam0)//Position - 0x4814
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

void func_104(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x4828
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, func_105());
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam9);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_101(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_105()//Position - 0x4893
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_106(var uParam0)//Position - 0x48AD
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_107(var uParam0)//Position - 0x4948
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(uParam0->f_50);
	Local_161.f_2 = SYSTEM::TO_FLOAT(uParam0->f_56);
	func_146(11, uParam0->f_56);
	func_146(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (BitTest(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161.f_0 = uParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

int func_108(var uParam0, bool bParam1)//Position - 0x49F4
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_200(uParam0) && func_112(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_111(uParam0, 2097152))
				{
					func_109(uParam0);
				}
			}
			else
			{
				func_109(uParam0);
			}
		}
		else if (!func_200(uParam0))
		{
			if (bParam1)
			{
				if (func_111(uParam0, 2097152))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_109(var uParam0)//Position - 0x4A91
{
	struct<3> Var0;
	
	if (func_110(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_175(uParam0, Var0);
}

int func_110(struct<3> Param0)//Position - 0x4AC7
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_111(var uParam0, int iParam1)//Position - 0x4AF1
{
	if (iParam1 != 1073741824)
	{
		return (func_202(uParam0->f_81, iParam1) && !func_131());
	}
	return func_131();
}

int func_112(var uParam0, bool bParam1, float fParam2)//Position - 0x4B1E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (func_43(1))
			{
				func_41(0);
			}
			if (func_33())
			{
				func_115();
				return 1;
			}
			else if (func_113(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, true);
		}
	}
	return 0;
}

int func_113(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x4B9F
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 352, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::_0x17FCA7199A530203();
	func_114(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_114(int iParam0)//Position - 0x4D37
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_115()//Position - 0x4D63
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
}

char* func_116(int iParam0)//Position - 0x4D80
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_money";
		
		case 2:
			return "std_hand_off_rps_money";
		
		case 1:
			return "std_hand_off_rds_money";
		
		default:
	}
	return "";
}

char* func_117(int iParam0)//Position - 0x4DBA
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_driver";
		
		case 2:
			return "std_hand_off_rps_driver";
		
		case 1:
			return "std_hand_off_rds_driver";
		
		default:
	}
	return "";
}

char* func_118(int iParam0)//Position - 0x4DF4
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_passenger";
		
		case 2:
			return "std_hand_off_rps_passenger";
		
		case 1:
			return "std_hand_off_rds_passenger";
		
		default:
	}
	return "";
}

int func_119(var uParam0, var uParam1)//Position - 0x4E2E
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_120()//Position - 0x4EA3
{
	Local_305 = { func_121() };
	if ((((((((MISC::ARE_STRINGS_EQUAL(&cLocal_269, &Local_305) || MISC::ARE_STRINGS_EQUAL(&cLocal_273, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_277, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_281, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_285, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_289, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_293, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_297, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_301, &Local_305))
	{
		return 1;
	}
	return 0;
}

struct<6> func_121()//Position - 0x4F46
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_22615);
		if (iVar1 > -1)
		{
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_122()//Position - 0x4F8C
{
	if (Local_231.f_56 >= Local_231.f_59)
	{
		Local_231.f_56 = 10000;
	}
	else if (Local_231.f_56 <= 0)
	{
		Local_231.f_56 = 0;
	}
	else
	{
		Local_231.f_56 = 5000;
	}
}

void func_123(var uParam0)//Position - 0x4FC6
{
	func_125();
	HUD::CLEAR_PRINTS();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_211(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_211(uParam0, 103, 1, 0, 0);
		}
		func_124(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_211(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_211(uParam0, 102, 1, 0, 0);
	}
	func_281(uParam0, 16, 4f, 0);
}

void func_124(int iParam0)//Position - 0x5039
{
	Global_112096.f_221 = iParam0;
}

void func_125()//Position - 0x5049
{
	Global_20471 = 0;
	func_126();
}

void func_126()//Position - 0x5059
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22616 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

void func_127(var uParam0)//Position - 0x507D
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_128(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_146(4, SYSTEM::CEIL(fVar0));
	func_146(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_128(float fParam0)//Position - 0x50CF
{
	return (fParam0 * 0.0006213712f);
}

void func_129()//Position - 0x50DF
{
	Global_20471 = 0;
	func_130();
}

void func_130()//Position - 0x50EF
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

int func_131()//Position - 0x5146
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_132(int iParam0)//Position - 0x5168
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

void func_133()//Position - 0x5189
{
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@cyi");
	STREAMING::REQUEST_MODEL(joaat("p_banknote_s"));
}

void func_134()//Position - 0x51A2
{
	if (func_149(&Local_231, 7) < 75f && !iLocal_255)
	{
		Local_231.f_57 += 12;
		func_211(&Local_231, 30, 1, 0, 1);
	}
	else if (func_149(&Local_231, 7) > 150f || iLocal_255)
	{
		Local_231.f_57 = -10;
		func_211(&Local_231, 32, 1, 0, 1);
		iLocal_255 = 1;
		func_135();
	}
	else
	{
		Local_231.f_57 += 5;
		func_211(&Local_231, 31, 1, 0, 1);
	}
}

void func_135()//Position - 0x5230
{
	STREAMING::REQUEST_MODEL(func_280(3));
	STREAMING::REQUEST_MODEL(func_280(4));
	VEHICLE::REQUEST_VEHICLE_RECORDING(0, func_136(1));
}

char* func_136(int iParam0)//Position - 0x5254
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "txm8_pol1_A";
			break;
	}
	return sVar0;
}

int func_137(var uParam0)//Position - 0x5274
{
	if (func_131())
	{
		return 1;
	}
	if (func_138(uParam0, 17))
	{
		return 1;
	}
	if (func_138(uParam0, 14))
	{
		return 1;
	}
	if (func_142(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_138(var uParam0, int iParam1)//Position - 0x52B3
{
	return func_17(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_139(var uParam0, int iParam1, bool bParam2)//Position - 0x52C7
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_98(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_98(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_140(var uParam0)//Position - 0x5310
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_17(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_101(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_281(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_141(var uParam0, int iParam1)//Position - 0x5358
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_142(var uParam0)//Position - 0x5386
{
	return uParam0->f_110;
}

void func_143(var uParam0, int iParam1)//Position - 0x5392
{
	func_144(uParam0, iParam1);
}

void func_144(var uParam0, int iParam1)//Position - 0x53A2
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_145(var uParam0, float* fParam1)//Position - 0x53B7
{
	STATS::STAT_GET_FLOAT(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

void func_146(int iParam0, int iParam1)//Position - 0x53D8
{
	switch (iParam0)
	{
		case 0:
			Global_113386.f_19097.f_22[0]++;
			func_147("Fares Completed ++ = ", Global_113386.f_19097.f_22[0]);
			break;
		
		case 1:
			Global_113386.f_19097.f_22[1]++;
			func_147("Fares Failed ++ = ", Global_113386.f_19097.f_22[1]);
			break;
		
		case 2:
			Global_113386.f_19097.f_22[2]++;
			func_147("Fares Accepted ++ ", Global_113386.f_19097.f_22[2]);
			break;
		
		case 3:
			Global_113386.f_19097.f_22[3]++;
			func_147("Fares Expired ++ ", Global_113386.f_19097.f_22[3]);
			break;
		
		case 13:
			Global_113386.f_19097.f_22[13]++;
			func_147("Passengers run ++ = ", Global_113386.f_19097.f_22[13]);
			break;
		
		case 14:
			Global_113386.f_19097.f_22[14]++;
			func_147("Passenger Forced to Pay ++ = ", Global_113386.f_19097.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113386.f_19097.f_22[4])
				{
					Global_113386.f_19097.f_22[4] = iParam1;
					func_147("This distance ", iParam1);
					func_147(" is longer than current best", Global_113386.f_19097.f_22[4]);
				}
				else
				{
					func_147("Longest Distance Not Beat ", Global_113386.f_19097.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_113386.f_19097.f_22[5] = (Global_113386.f_19097.f_22[5] + iParam1);
			func_147("Total Distance w/ Passenger = ", Global_113386.f_19097.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_113386.f_19097.f_22[6]++;
			}
			else
			{
				Global_113386.f_19097.f_22[6] = (Global_113386.f_19097.f_22[6] + iParam1);
			}
			func_147("Wanted Levels ++ = ", Global_113386.f_19097.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_113386.f_19097.f_22[7] = (Global_113386.f_19097.f_22[7] + iParam1);
			}
			else
			{
				Global_113386.f_19097.f_22[7]++;
			}
			func_147("Wanted Levels Lost = ", Global_113386.f_19097.f_22[7]);
			break;
		
		case 8:
			Global_113386.f_19097.f_22[8]++;
			func_147("Taxis wrecked ++ = ", Global_113386.f_19097.f_22[8]);
			break;
		
		case 9:
			Global_113386.f_19097.f_22[9]++;
			func_147("Horn Honked ++ = ", Global_113386.f_19097.f_22[9]);
			break;
		
		case 10:
			Global_113386.f_19097.f_22[10] = (Global_113386.f_19097.f_22[10] + iParam1);
			func_147("Total Money Earned = ", Global_113386.f_19097.f_22[10]);
			break;
		
		case 11:
			Global_113386.f_19097.f_22[11] = (Global_113386.f_19097.f_22[11] + iParam1);
			func_147("Total Tips Earned = ", Global_113386.f_19097.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_113386.f_19097.f_22[12])
			{
				Global_113386.f_19097.f_22[12] = iParam1;
				func_147("New Highest Tip = ", Global_113386.f_19097.f_22[12]);
			}
			else
			{
				func_147("Highest Tip Not Reached = ", Global_113386.f_19097.f_22[12]);
			}
			break;
	}
}

void func_147(char* sParam0, int iParam1)//Position - 0x57C9
{
}

int func_148(int iParam0, int iParam1)//Position - 0x57D1
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("vacca"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 2, false, false))
		{
			iVar1 = 2;
		}
		else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 1, false, false))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 1, false, false))
	{
		iVar1 = 1;
	}
	else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 2, false, false))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

float func_149(var uParam0, int iParam1)//Position - 0x5889
{
	if (!func_17(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_150(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_99(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_150(int* iParam0)//Position - 0x58B9
{
	if (!func_17(iParam0))
	{
		func_101(iParam0);
	}
}

void func_151(var uParam0, bool bParam1)//Position - 0x58D1
{
	func_161(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!func_138(uParam0, 14))
			{
				if (func_131())
				{
					func_160(1);
				}
				func_159(uParam0, 11, 1);
				func_152(uParam0, 1);
				func_281(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_200(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
					{
						if (func_149(uParam0, 15) > 5f)
						{
							func_281(uParam0, 15, 0f, 1);
						}
					}
					if (func_149(uParam0, 14) > 20f)
					{
						func_335(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_149(uParam0, 14) > 20f)
				{
					if (func_165(uParam0->f_4, 1) > 40f)
					{
						func_335(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_335(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_152(var uParam0, bool bParam1)//Position - 0x59DC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				func_158(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (func_200(uParam0))
				{
					func_211(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_158(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_153(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_153(var uParam0, bool bParam1, bool bParam2)//Position - 0x5AFA
{
	if (bParam1)
	{
		func_50(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = func_156(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_10, true);
		func_154(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_211(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_154(var uParam0)//Position - 0x5B55
{
	func_281(uParam0, 14, 0, 0);
	func_155();
}

void func_155()//Position - 0x5B6B
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

int func_156(int iParam0, bool bParam1, bool bParam2)//Position - 0x5B94
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_157(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_157(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_157(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_157(bool bParam0, float fParam1, float fParam2)//Position - 0x5C38
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_158(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5C4F
{
	if (!func_202(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_211(uParam0, iParam3, 1, 0, 0);
		func_177(uParam1, iParam2);
	}
}

void func_159(var uParam0, int iParam1, bool bParam2)//Position - 0x5C7B
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_160(int iParam0)//Position - 0x5C8F
{
	Global_22616 = iParam0;
}

void func_161(var uParam0, int iParam1)//Position - 0x5C9C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_335(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

void func_162(var uParam0, bool bParam1)//Position - 0x5D01
{
	func_164(uParam0);
	if (bParam1)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
		{
			uParam0->f_9 = func_163(uParam0->f_17, 1);
		}
		else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
		{
			HUD::SET_GPS_FLAGS(1, 0f);
			HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
			HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
			HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
		}
	}
}

int func_163(struct<3> Param0, bool bParam1)//Position - 0x5D65
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_157(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_164(var uParam0)//Position - 0x5D91
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

float func_165(int iParam0, bool bParam1)//Position - 0x5DB5
{
	return func_166(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_166(int iParam0, int iParam1, bool bParam2)//Position - 0x5DCD
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

void func_167()//Position - 0x5E2B
{
	if (bLocal_329)
	{
		func_174("TAXI_CYI_HANDLE_PLAYER_NEAR_JEWELRY_STORE", &iLocal_262, 1000);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
	{
		switch (iLocal_374)
		{
			case 0:
				if (func_199(Local_231.f_3, Local_246, 1) < 16f)
				{
					iLocal_374 = 1;
				}
				break;
			
			case 1:
				if (func_165(Local_231.f_3, 1) < 10f)
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_231.f_3, joaat("weapon_combatpistol"), 50, true, true);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
					TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					func_281(&Local_231, 12, 0, 0);
					iLocal_374 = 2;
				}
				break;
			
			case 2:
				if (func_149(&Local_231, 12) > 1.5f)
				{
					if (iLocal_375 != 5)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_2, false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, false))
								{
									func_211(&Local_231, 56, 1, 0, 0);
								}
								else
								{
									func_211(&Local_231, 55, 1, 1, 0);
								}
							}
						}
						iLocal_259 = 0;
						iLocal_253 = 1;
						func_281(&Local_231, 12, 0, 0);
						func_172(&Local_231, 6);
						iLocal_374 = 3;
					}
					else
					{
						func_139(&Local_231, 12, 0);
						iLocal_374 = 9;
					}
				}
				break;
			
			case 3:
				if (func_165(Local_231.f_3, 1) >= 10f)
				{
					iLocal_374 = 5;
				}
				else if (iLocal_260)
				{
					if (!func_131() && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!iLocal_259)
						{
							func_281(&Local_231, 12, 0, 0);
							iLocal_259 = 1;
						}
						else if (func_149(&Local_231, 12) > 5f)
						{
							func_139(&Local_231, 12, 0);
							iLocal_374 = 9;
						}
					}
				}
				else if (!iLocal_260)
				{
					if (func_170("txm8_lvMe1") || func_170("txm8_lvMe2"))
					{
						iLocal_260 = 1;
					}
				}
				break;
			
			case 5:
				func_168(&Local_231, 6);
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_231.f_3, 242628503) != 7)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_246, 1f, 40000, 0.25f, false, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 0.25f, false, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_247, 3f, 40000, 0.25f, false, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
					TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					iLocal_375 = 5;
					iLocal_374 = 0;
				}
				break;
			
			case 9:
				if (func_138(&Local_231, 12))
				{
					if (func_149(&Local_231, 12) > 2f)
					{
						func_281(&Local_231, 6, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
						TASK::TASK_SHOOT_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
						TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_231.f_413, joaat("player"));
						PED::SET_PED_KEEP_TASK(Local_231.f_3, true);
						bLocal_254 = true;
						if (HUD::DOES_BLIP_EXIST(Local_231.f_9) && HUD::GET_BLIP_ALPHA(Local_231.f_9) > 0)
						{
							HUD::SET_BLIP_ALPHA(Local_231.f_9, 0);
							HUD::SET_BLIP_ROUTE(Local_231.f_9, false);
							HUD::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_1B");
						}
						iLocal_374 = 10;
					}
				}
				else
				{
					func_281(&Local_231, 12, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_2, false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, false))
							{
								func_211(&Local_231, 56, 1, 0, 0);
							}
							else
							{
								func_211(&Local_231, 55, 1, 1, 0);
							}
						}
					}
				}
				break;
			
			case 10:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && func_149(&Local_231, 6) > 2f)
				{
					func_335(&Local_231, "Passenger shoots player", 9);
				}
				break;
			}
	}
}

void func_168(var uParam0, int iParam1)//Position - 0x6212
{
	if (func_17(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_169(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_169(int* iParam0)//Position - 0x6244
{
	if (func_17(iParam0))
	{
		if (func_16(iParam0))
		{
			iParam0->f_1 = (func_15(BitTest(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			MISC::CLEAR_BIT(iParam0, 2);
		}
	}
}

int func_170(char* sParam0)//Position - 0x627F
{
	var uVar0;
	
	if (func_131())
	{
		MemCopy(&uVar0, {func_171()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_171()//Position - 0x62A7
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

void func_172(var uParam0, int iParam1)//Position - 0x62CB
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_16(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_173(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_17(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_173(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_173(int* iParam0)//Position - 0x6337
{
	if (func_17(iParam0))
	{
		if (!func_16(iParam0))
		{
			iParam0->f_2 = (func_15(BitTest(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

void func_174(char* sParam0, int iParam1, int iParam2)//Position - 0x636E
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_175(var uParam0, struct<3> Param1)//Position - 0x638D
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_176(uParam0->f_3, uParam0->f_4) == 0)
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 1, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 2, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_176(int iParam0, int iParam1)//Position - 0x64AE
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_177(var uParam0, int iParam1)//Position - 0x6520
{
	func_178(uParam0, iParam1);
}

void func_178(var uParam0, int iParam1)//Position - 0x6530
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_179(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x6541
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_195(uParam0))
		{
			func_145(uParam0, &(uParam0->f_43));
			func_191(uParam0);
			func_190(uParam0);
			func_187(uParam0);
			func_185(uParam0, fParam2, fParam3);
			func_183(uParam0);
			return func_180(uParam0, fParam1);
		}
	}
	return 0;
}

int func_180(var uParam0, float fParam1)//Position - 0x65B9
{
	if (func_60(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_182(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_181(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return func_112(uParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_181(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return func_112(uParam0, 1, fParam1);
	}
	return 0;
}

int func_181(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6690
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

float func_182(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x6775
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam2);
}

void func_183(var uParam0)//Position - 0x67AF
{
	float fVar0;
	
	if ((func_200(uParam0) && func_202(uParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_89) >= 10000)
		{
			fVar0 = func_184(uParam0->f_17, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_88 >= 2 && !func_131())
		{
			func_211(uParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!func_200(uParam0))
			{
			}
			if (!func_202(uParam0->f_81, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

float func_184(struct<3> Param0, bool bParam1)//Position - 0x6885
{
	return func_199(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, bParam1);
}

void func_185(var uParam0, float fParam1, float fParam2)//Position - 0x689F
{
	if (func_200(uParam0) && func_202(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && func_311(uParam0))
		{
			if (!func_138(uParam0, 2))
			{
				func_186(uParam0, 2);
			}
			else if (func_200(uParam0))
			{
				if (func_149(uParam0, 2) > fParam1 && !func_138(uParam0, 14))
				{
					if (func_35())
					{
						func_211(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_211(uParam0, 48, 1, 0, 0);
					}
					func_281(uParam0, 2, 0, 0);
					if (func_138(uParam0, 10))
					{
						func_281(uParam0, 10, 0, 0);
					}
				}
				if (!func_138(uParam0, 3))
				{
					func_281(uParam0, 3, 0, 0);
				}
				else if (func_149(uParam0, 3) >= fParam2)
				{
					func_139(uParam0, 3, 0);
					func_335(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_138(uParam0, 2))
			{
				func_139(uParam0, 2, 0);
			}
			if (func_138(uParam0, 3))
			{
				func_139(uParam0, 3, 0);
			}
		}
	}
}

void func_186(var uParam0, int iParam1)//Position - 0x69BA
{
	func_150(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_187(var uParam0)//Position - 0x69CE
{
	if (func_189(uParam0))
	{
		func_188(uParam0);
	}
}

void func_188(var uParam0)//Position - 0x69E5
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_139(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_149(uParam0, 20) > 3f)
				{
					func_211(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_202(uParam0->f_81, 262144) || !func_202(uParam0->f_81, 1048576))
				{
					if (func_149(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_211(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_202(uParam0->f_82, 67108864))
				{
					if (func_149(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_211(uParam0, 85, 1, 0, 0);
						func_139(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_149(uParam0, 20) > 8f)
				{
					func_211(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_202(uParam0->f_81, 262144) || func_202(uParam0->f_82, 67108864))
			{
				if (!func_138(uParam0, 22))
				{
					func_186(uParam0, 22);
				}
			}
			if (func_138(uParam0, 22) && func_149(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_202(uParam0->f_81, 1048576))
					{
						func_211(uParam0, 84, 1, 0, 0);
						func_139(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_202(uParam0->f_82, 134217728))
					{
						func_211(uParam0, 85, 1, 0, 0);
						func_139(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_189(var uParam0)//Position - 0x6C60
{
	return uParam0->f_120;
}

void func_190(var uParam0)//Position - 0x6C6C
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !func_202(uParam0->f_44, 2))
	{
		func_177(&(uParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_202(uParam0->f_44, 2))
	{
		func_143(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_146(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_211(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_191(var uParam0)//Position - 0x6CF5
{
	if (!func_202(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_149(uParam0, 9) > 1f)
					{
						func_194(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							func_211(uParam0, 50, 1, 1, 0);
						}
						func_281(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_131() && func_149(uParam0, 9) > 4f)
				{
					func_211(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_193("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_211(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_192(uParam0)))
				{
					func_194(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_146(6, 0);
				}
				if (!func_142(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_149(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_211(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_193("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_131())
				{
					if (uParam0->f_410 != 22)
					{
						func_211(uParam0, 53, 1, 0, 1);
					}
					func_146(7, func_192(uParam0));
					func_194(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_131())
				{
					func_139(uParam0, 9, 0);
					func_281(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

int func_192(var uParam0)//Position - 0x6F19
{
	return uParam0->f_106;
}

bool func_193(char* sParam0, int iParam1, char* sParam2)//Position - 0x6F25
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_194(var uParam0, int iParam1)//Position - 0x6F43
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_195(var uParam0)//Position - 0x6F5A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_335(uParam0, "Passenger left car.", 9);
			}
			else if (func_286(uParam0))
			{
				if (func_193("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_151(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_196(var uParam0, int iParam1, bool bParam2)//Position - 0x6FE9
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_197(var uParam0)//Position - 0x700D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_198(), 24);
		iVar0++;
	}
	HUD::CLEAR_PRINTS();
	func_48();
}

var func_198()//Position - 0x704D
{
	var uVar0;
	
	return uVar0;
}

float func_199(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x7057
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1, bParam2);
}

int func_200(var uParam0)//Position - 0x7081
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_201(var uParam0)//Position - 0x70B6
{
	return uParam0->f_416;
}

bool func_202(var uParam0, int iParam1)//Position - 0x70C3
{
	return (uParam0 && iParam1) != 0;
}

void func_203(var uParam0)//Position - 0x70D2
{
	func_207(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	func_129();
	func_204(uParam0);
}

void func_204(var uParam0)//Position - 0x711E
{
	func_139(uParam0, 14, 0);
	func_139(uParam0, 15, 0);
	func_206();
	if (func_205())
	{
		func_160(0);
	}
}

int func_205()//Position - 0x7148
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

void func_206()//Position - 0x715F
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_207(var uParam0, int iParam1)//Position - 0x7188
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
}

void func_208(struct<3> Param0, bool bParam1, float fParam2)//Position - 0x71C2
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_38(Param0, 1f, -fParam2, -fParam2, -fParam2) };
	Var1 = { func_38(Param0, 1f, fParam2, fParam2, fParam2) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam1)
	{
		PATHFIND::SET_ROADS_IN_AREA(Var0, Var1, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var1, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

void func_209()//Position - 0x7237
{
	func_177(&(Local_231.f_55), 2);
	func_177(&(Local_231.f_55), 4);
	func_177(&(Local_231.f_55), 16);
	func_177(&(Local_231.f_55), 64);
	func_177(&(Local_231.f_55), 256);
	func_177(&(Local_231.f_55), 512);
	func_177(&(Local_231.f_55), 1024);
	func_177(&(Local_231.f_55), 2048);
	func_177(&(Local_231.f_55), 4096);
	func_177(&(Local_231.f_100), 8);
	func_177(&(Local_231.f_100), 2048);
	func_177(&(Local_231.f_100), 256);
	func_177(&uLocal_306, 2);
}

void func_210(var uParam0)//Position - 0x72D0
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	func_207(uParam0, 1000);
}

void func_211(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x72F3
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_281(uParam0, 16, 4f, 0);
		if (func_212(uParam0))
		{
			func_48();
		}
	}
	func_240(uParam0, iParam2, bParam3);
}

int func_212(var uParam0)//Position - 0x7328
{
	struct<3> Var0;
	struct<6> Var1;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_131())
	{
		Var1 = { func_171() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_213(&Var0);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_213(char* sParam0)//Position - 0x738E
{
	StringConCat(sParam0, "F", 24);
}

int func_214(var uParam0)//Position - 0x739E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_81) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_215(int iParam0)//Position - 0x73F1
{
	switch (iParam0)
	{
		case -1:
			return 335.4227f, -956.4223f, 28.3588f;
			break;
		
		case 0:
			return 349.926f, -958.3827f, 28.3033f;
			break;
		
		case 1:
			return -1020.581f, -2743.842f, 18.4049f;
			break;
		
		case 2:
			return -1043.947f, -2748.683f, 20.3594f;
			break;
		
		case 3:
			return -1042.391f, -2731.644f, 19.1701f;
			break;
		
		case 4:
			return -1045.677f, -2730.109f, 19.1701f;
			break;
		
		case 5:
			return -1032.295f, -2731.449f, 19.0458f;
			break;
		
		case 6:
			return -1051.045f, -2722.934f, 19.1693f;
			break;
		
		case 7:
			return -1052.905f, -2723.375f, 19.1693f;
			break;
		
		case 8:
			return -1042.812f, -2743.095f, 20.362f;
			break;
		
		default:
			return 354.5381f, -947.7332f, 28.359f;
			break;
	}
	return func_40();
}

int func_216(var uParam0, bool bParam1, float fParam2)//Position - 0x7527
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_151(uParam0, 1);
			if (func_33())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_79 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_238(uParam0);
			if (uParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, false, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_138(uParam0, 14))
			{
				func_204(uParam0);
				func_152(uParam0, 0);
			}
			if (func_138(uParam0, 9))
			{
				func_139(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_237(uParam0, uParam0->f_3) > 300f)
				{
					func_335(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((func_166(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && func_182(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_182(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_234(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_233(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = func_148(uParam0->f_4, uParam0->f_3);
								iVar0 = func_119(uParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 0, false, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(uParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_311(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 7) && func_237(uParam0, uParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (uParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_86)
						{
							if (func_166(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_232(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_335(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_231(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_335(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_229(uParam0);
						if (func_237(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
							{
								if (func_217(uParam0))
								{
									func_164(uParam0);
									iLocal_81 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, true);
									func_139(uParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(uParam0->f_428, &(uParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, false);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

int func_217(var uParam0)//Position - 0x7A3A
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	
	func_174("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		func_228();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_226(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_112(uParam0, 0, 1084227584) && func_181(1, 1, 1))
			{
				if (func_232(uParam0, 1))
				{
					iLocal_80 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					func_335(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_148(uParam0->f_4, uParam0->f_3);
				iVar3 = func_119(uParam0, &iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, iVar5);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 0, false, false))
					{
						uParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var2 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var2 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var2 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = func_225(&(uParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0), 1);
			if (iVar6 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				func_224(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_125();
				func_240(uParam0, 0, 0);
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, Var7, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, func_222(uParam0));
				func_221(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0));
				CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, Var1, true);
				CAM::SET_CAM_ACTIVE(*uParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_3, false, false);
				TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		
		case 5:
			func_174("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, func_220(uParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*uParam0, false);
				CAM::DESTROY_CAM(uParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_125();
				func_240(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_218(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*uParam0, false);
			CAM::DESTROY_CAM(uParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_218(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, true))
				{
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_218(bool bParam0, bool bParam1, int iParam2)//Position - 0x7F47
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(true);
	func_23(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_219(23, 0);
}

void func_219(int iParam0, bool bParam1)//Position - 0x7F85
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_32207, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_32207, iParam0);
	}
}

int func_220(int iParam0)//Position - 0x7FA7
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_221(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x7FDF
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Param1, Param2, fParam3, false, 2);
	}
}

float func_222(var uParam0)//Position - 0x800B
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_40() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_223(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), Var1);
	return fVar0;
}

float func_223(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)//Position - 0x8074
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_224(int iParam0, bool bParam1, int iParam2)//Position - 0x808E
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(bParam1);
	func_41(0);
	func_23(1, 1, iParam2, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_219(23, 1);
}

int func_225(var uParam0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x80E7
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_226(int iParam0)//Position - 0x8161
{
	if (func_227() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_41(0);
		func_129();
		return 1;
	}
	return 0;
}

int func_227()//Position - 0x81A4
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_228()//Position - 0x81D6
{
	if (func_35())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_34())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_43(1))
	{
		func_41(0);
	}
}

void func_229(var uParam0)//Position - 0x8209
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (func_165(uParam0->f_3, 1) > 30f || func_230(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, -1794415470) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) == 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					TASK::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, false, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
					func_335(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_230(var uParam0)//Position - 0x82DA
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_149(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0)//Position - 0x8314
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_232(var uParam0, bool bParam1)//Position - 0x83D0
{
	int iVar0[3];
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar1], false))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_233(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x848A
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && func_165(uParam0->f_3, 1) < fParam2)
		{
			if (!func_138(uParam0, 5))
			{
				func_281(uParam0, 5, 0, 0);
			}
		}
		else if (func_138(uParam0, 5))
		{
			func_139(uParam0, 5, 0);
		}
		if (((func_149(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || func_165(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_234(var uParam0, float fParam1)//Position - 0x8528
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar8) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var2) };
		Var2.f_1 = (Var2.f_1 + 1f);
	}
	else
	{
		Var2 = { 0f, 1f, 1f };
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(Var0, Var1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_166(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var1.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var1, 511, 0, 7);
				}
				else
				{
					iVar7 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_409, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uParam0->f_243, true);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			if (uParam0->f_411 != 9)
			{
				if (!func_202(uParam0->f_44, 128))
				{
					func_211(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_235(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			iLocal_79 = 3;
			break;
		
		case 3:
			iLocal_79 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_235(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x8809
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_236(iParam3), false);
}

int func_236(int iParam0)//Position - 0x8822
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

float func_237(var uParam0, int iParam1)//Position - 0x8A17
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (func_311(uParam0))
		{
			return func_166(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_238(var uParam0)//Position - 0x8A42
{
	func_161(uParam0, uParam0->f_3);
	if (func_311(uParam0))
	{
		if (func_138(uParam0, 14))
		{
			func_204(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!func_138(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		}
		func_281(uParam0, 9, 0, 0);
		func_239("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_239(char* sParam0, int iParam1, int iParam2)//Position - 0x8AC0
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_240(var uParam0, int iParam1, bool bParam2)//Position - 0x8AD9
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_48();
		func_281(uParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_241(var uParam0, int iParam1)//Position - 0x8AFE
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	func_246(12);
	if (func_202(uParam0->f_44, 8))
	{
		if (!func_202(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !func_202(uParam0->f_44, 256))
			{
				func_177(&(uParam0->f_44), 256);
			}
			if (func_202(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_211(uParam0, 135, 1, 0, 1);
				func_177(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_244(uParam0, iParam1))
	{
		if (func_165(uParam0->f_3, 1) < 35f)
		{
			if (!func_202(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_211(uParam0, 133, 1, 0, 1);
				func_177(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || func_165(uParam0->f_3, 1) > 400f)
		{
			func_335(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			func_242(uParam0);
			func_146(2, 0);
			bLocal_86 = true;
			func_150(&iLocal_82);
			return 1;
		}
		else
		{
			func_335(uParam0, "No Taxi", 21);
			func_285("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_242(var uParam0)//Position - 0x8C77
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (func_243())
		{
		}
	}
}

int func_243()//Position - 0x8C93
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_244(var uParam0, int iParam1)//Position - 0x8CB1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = func_231(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_202(uParam0->f_44, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_285("TX_VIP_DMGD", -1);
							if (func_245("TX_VIP_DMGD"))
							{
								func_177(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_202(uParam0->f_44, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_285("TX_VIP_CAR", -1);
							if (func_245("TX_VIP_CAR"))
							{
								func_177(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_202(uParam0->f_44, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_285("TX_VIP_SMALL", -1);
							if (func_245("TX_VIP_SMALL"))
							{
								func_177(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_143(&(uParam0->f_44), 16);
			func_143(&(uParam0->f_44), 64);
			func_143(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_245(char* sParam0)//Position - 0x92C6
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_246(int iParam0)//Position - 0x92D9
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_248())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_247())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

bool func_247()//Position - 0x9332
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

bool func_248()//Position - 0x9348
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

void func_249(var uParam0)//Position - 0x935E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_144(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_250(var uParam0, var uParam1)//Position - 0x9383
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			MISC::SET_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_251(var uParam0, char* sParam1, int iParam2)//Position - 0x93FA
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_252()//Position - 0x9412
{
	Local_165.f_0 = 0;
	func_269(38853/*func_271*/, 38828/*func_270*/, 1);
	func_269(38589/*func_267*/, 38566/*func_266*/, 1);
	func_269(38504/*func_265*/, 38479/*func_264*/, 1);
	func_269(38407/*func_263*/, 38383/*func_262*/, 1);
	func_269(38273/*func_261*/, 38252/*func_260*/, 1);
	func_269(38199/*func_258*/, 38174/*func_257*/, 1);
	func_269(38032/*func_254*/, 38009/*func_253*/, 1);
}

int func_253(var uParam0, var uParam1)//Position - 0x9479
{
	uParam1 = uParam1;
	func_335(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_254(var uParam0)//Position - 0x9490
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_256(uParam0->f_4))
		{
			func_255(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_255(var uParam0, int iParam1)//Position - 0x94BA
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_256(int iParam0)//Position - 0x94CD
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_257(var uParam0, var uParam1)//Position - 0x951E
{
	uParam1 = uParam1;
	func_335(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_258(var uParam0)//Position - 0x9537
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_259(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_259(var uParam0, int iParam1)//Position - 0x955D
{
	return (uParam0 && iParam1) != 0;
}

int func_260(var uParam0, var uParam1)//Position - 0x956C
{
	uParam1 = uParam1;
	func_255(uParam0, 11);
	return 1;
}

int func_261(var uParam0)//Position - 0x9581
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!func_138(uParam0, 25))
			{
				func_281(uParam0, 25, 0, 0);
			}
			else if (func_149(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_138(uParam0, 25))
		{
			func_139(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_262(var uParam0, var uParam1)//Position - 0x95EF
{
	uParam1 = uParam1;
	func_335(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_263(var uParam0)//Position - 0x9607
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_264(var uParam0, var uParam1)//Position - 0x964F
{
	uParam1 = uParam1;
	func_335(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_265(var uParam0)//Position - 0x9668
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_259(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_266(var uParam0, var uParam1)//Position - 0x96A6
{
	uParam1 = uParam1;
	func_335(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_267(var uParam0)//Position - 0x96BD
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_268(uParam0->f_4))
		{
			func_255(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0)//Position - 0x96E7
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
		}
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_269(int iParam0, int iParam1, bool bParam2)//Position - 0x9742
{
	if (Local_165.f_0 >= 16)
	{
		Local_165.f_0 = 16;
		return;
	}
	Local_165.f_1[Local_165.f_0 /*4*/] = 0;
	func_178(&(Local_165.f_1[Local_165.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_178(&(Local_165.f_1[Local_165.f_0 /*4*/]), 2);
	}
	Local_165.f_1[Local_165.f_0 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165.f_0 /*4*/].f_3 = iParam1;
	Local_165.f_0++;
}

int func_270(var uParam0, var uParam1)//Position - 0x97AC
{
	uParam1 = uParam1;
	func_335(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_271(var uParam0)//Position - 0x97C5
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_272()//Position - 0x9805
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_273()//Position - 0x99DD
{
	if (!func_274(&iLocal_262, 1))
	{
		func_174("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_262, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_313))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_280(0)))
	{
		func_174("TAXI_ASSETS_STREAMED - Loading U_M_M_JewelThief", &iLocal_262, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MOVE_P_M_ZERO_RUCKSACK"))
	{
		func_174("TAXI_ASSETS_STREAMED - Loading MOVE_P_M_ZERO_RUCKSACK", &iLocal_262, 1000);
		return 0;
	}
	return 1;
}

int func_274(int iParam0, bool bParam1)//Position - 0x9A50
{
	if (!STREAMING::HAS_MODEL_LOADED(func_22()))
	{
		func_174("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_174("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_174("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_174("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_174("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_174("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_275(var uParam0, int iParam1)//Position - 0x9B09
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_276(var uParam0)//Position - 0x9D28
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_277(uParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0f);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

int func_277(int iParam0, bool bParam1, bool bParam2)//Position - 0x9D77
{
	return func_156(iParam0, !bParam1, bParam2);
}

int func_278(var uParam0, struct<3> Param1, struct<3> Param2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0x9D8A
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_279(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param2 };
		func_37(uParam0->f_14, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_14, 2f, 0);
		func_208(uParam0->f_14, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = PED::CREATE_RANDOM_PED(uParam0->f_11);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[0]))
		{
			uParam0->f_3 = Global_112096.f_225[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
		}
		else
		{
			uParam0->f_3 = PED::CREATE_PED(26, iParam4, uParam0->f_11, fParam5, true, true);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, sParam3, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam3);
		PED::SET_PED_RESET_FLAG(uParam0->f_3, 112, true);
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 32, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 104, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 177, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 116, false);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_413, joaat("COP"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_279(var uParam0, struct<3> Param1)//Position - 0x9EDF
{
	uParam0->f_51[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param1, 20f, 5f, false);
}

int func_280(int iParam0)//Position - 0x9EFD
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
		
		case 1:
			iVar0 = joaat("manana");
			break;
		
		case 2:
			iVar0 = joaat("issi2");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_cop_01");
			break;
		
		case 4:
			iVar0 = joaat("police2");
			break;
		
		default:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
	}
	return iVar0;
}

void func_281(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x9F68
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_102(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_101(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_102(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_101(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_282()//Position - 0x9FDA
{
	func_284(1);
	STREAMING::REQUEST_MODEL(func_280(0));
	iLocal_313 = func_283();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Alarms", false, -1);
	STREAMING::REQUEST_ANIM_DICT("MOVE_P_M_ZERO_RUCKSACK");
}

int func_283()//Position - 0xA00A
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

void func_284(bool bParam0)//Position - 0xA01A
{
	STREAMING::REQUEST_MODEL(func_22());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_202(Global_113386.f_19097, 128))
	{
		func_177(&(Global_113386.f_19097), 128);
	}
}

void func_285(char* sParam0, int iParam1)//Position - 0xA076
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_286(var uParam0)//Position - 0xA08D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (func_138(uParam0, 14))
			{
				func_204(uParam0);
			}
			func_152(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_287(var uParam0, int iParam1, bool bParam2)//Position - 0xA0CF
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2815059.f_4660, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_245(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_245(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_288(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xA1A9
{
	int iVar0;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam2;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_245(iVar0))
	{
		func_300();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_295(uParam0, bParam4, bParam6, 0))
		{
			func_294(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_293(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam5)
					{
						if (!func_245(iVar0))
						{
							func_285(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_292(1);
							}
						}
					}
				}
			}
		}
		else if (func_293(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam5)
				{
					if (!func_245(iVar0))
					{
						func_285(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							func_292(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (func_245(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					func_287(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					func_287(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					func_287(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					func_287(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					func_287(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_287(uParam0, iVar0, 1);
			}
		}
		if (!func_295(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_291(uParam0))
			{
				func_289(uParam0);
			}
		}
	}
}

void func_289(var uParam0)//Position - 0xA483
{
	if (func_290(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_290(int iParam0)//Position - 0xA4EC
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_291(var uParam0)//Position - 0xA547
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_292(bool bParam0)//Position - 0xA572
{
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113386.f_10049.f_100++;
			}
			return Global_113386.f_10049.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113386.f_10049.f_101++;
			}
			return Global_113386.f_10049.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113386.f_10049.f_102++;
			}
			return Global_113386.f_10049.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_293(char* sParam0)//Position - 0xA61C
{
	if (!func_301(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_245(sParam0)) || func_245("CMN_HINT"))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_292(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_292(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_292(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_294(var uParam0, struct<3> Param1, int iParam2)//Position - 0xA6B5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_295(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA751
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_298(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_298(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_299(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_291(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_299(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_298(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_298(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_298(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_298(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_299(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_297(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_296(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_296(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_297(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_291(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_301(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_300();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_296(bool bParam0, bool bParam1, bool bParam2)//Position - 0xAABD
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_297(bool bParam0, bool bParam1, bool bParam2)//Position - 0xAB0F
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_298(bool bParam0, bool bParam1, bool bParam2)//Position - 0xAB58
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_299(bool bParam0, bool bParam1, bool bParam2)//Position - 0xABB7
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_300()//Position - 0xAC0D
{
	MISC::SET_BIT(&Global_8137, 4);
}

int func_301(bool bParam0, bool bParam1, bool bParam2)//Position - 0xAC1D
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_310())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60335)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_309() || func_308(Global_4718592.f_168757)) || func_307())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_306(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_305(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_302(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_302(int iParam0)//Position - 0xAE76
{
	if (iParam0 != func_304())
	{
		if (func_303(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == PLAYER::PLAYER_ID()) && func_303(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_303(int iParam0, bool bParam1, bool bParam2)//Position - 0xAEDC
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

int func_304()//Position - 0xAF3C
{
	return -1;
}

int func_305(int iParam0, int iParam1)//Position - 0xAF45
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_306(int iParam0, bool bParam1)//Position - 0xAFA7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_307()//Position - 0xB02C
{
	return Global_2714762.f_19;
}

bool func_308(int iParam0)//Position - 0xB03A
{
	return iParam0 == 51;
}

var func_309()//Position - 0xB047
{
	return Global_2714762.f_18;
}

bool func_310()//Position - 0xB055
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_311(var uParam0)//Position - 0xB06A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

void func_312(var uParam0, int iParam1, bool bParam2)//Position - 0xB094
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_149(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_211(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_211(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_281(uParam0, 10, 0f, 1);
				}
			}
			else if (func_149(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_211(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_211(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_281(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_149(uParam0, 10) > 30f)
		{
			if (!func_131())
			{
				if (uParam0->f_112)
				{
					func_211(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_211(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_281(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_202(uParam0->f_100, 64))
	{
		if (!func_17(&(Local_162[5 /*10*/].f_6)))
		{
			func_150(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_334(uParam0))
			{
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0, 1);
				func_331(5, uParam0);
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 1))
	{
		if (!func_17(&(Local_162[0 /*10*/].f_6)))
		{
			func_150(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_330(uParam0))
			{
				func_333(uParam0, 1);
				func_331(0, uParam0);
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 2))
	{
		if (!func_17(&(Local_162[1 /*10*/].f_6)))
		{
			func_150(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_329(uParam0))
			{
				func_333(uParam0, 1);
				func_331(1, uParam0);
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 2048))
	{
		if (!func_17(&(Local_162[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				func_150(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_99(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_328(uParam0))
			{
				func_333(uParam0, 1);
				func_331(8, uParam0);
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 128))
	{
		if (!func_17(&(Local_162[6 /*10*/].f_6)))
		{
			func_150(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_327(uParam0))
			{
				func_333(uParam0, 1);
				func_331(6, uParam0);
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 32))
	{
		if (!func_17(&(Local_162[4 /*10*/].f_6)))
		{
			func_150(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_326(uParam0))
			{
				func_333(uParam0, 1);
				func_331(4, uParam0);
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 256))
	{
		if (!func_17(&(Local_162[7 /*10*/].f_6)))
		{
			func_150(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_325(uParam0))
			{
				func_331(7, uParam0);
				func_333(uParam0, 1);
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 8))
	{
		if (!func_17(&(Local_162[9 /*10*/].f_6)))
		{
			func_150(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_99(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_324(uParam0))
			{
				func_333(uParam0, 1);
				func_331(9, uParam0);
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 16384))
	{
		if (!func_17(&(Local_162[13 /*10*/].f_6)))
		{
			func_150(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_318(uParam0))
			{
				func_333(uParam0, 1);
				func_331(13, uParam0);
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 32768))
	{
		if (!func_17(&(Local_162[14 /*10*/].f_6)))
		{
			func_150(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_317(uParam0))
			{
				func_333(uParam0, 1);
				func_331(14, uParam0);
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 4096))
	{
		if (!func_17(&(Local_162[11 /*10*/].f_6)))
		{
			func_150(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_316(uParam0))
			{
				func_333(uParam0, 1);
				func_331(11, uParam0);
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 8192))
	{
		if (!func_17(&(Local_162[12 /*10*/].f_6)))
		{
			func_150(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_99(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_315(uParam0))
			{
				func_333(uParam0, 1);
				func_331(12, uParam0);
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_140(uParam0);
			}
		}
	}
	if (func_202(uParam0->f_100, 4))
	{
		if (!func_17(&(Local_162[2 /*10*/].f_6)))
		{
			func_314(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_99(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_313(uParam0))
			{
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0, 1);
				func_331(2, uParam0);
				func_140(uParam0);
			}
		}
	}
}

int func_313(var uParam0)//Position - 0xB88E
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !func_17(&(Local_162[0 /*10*/].f_3))) && !func_17(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_150(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_99(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_98(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_98(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_314(int* iParam0, float fParam1)//Position - 0xB971
{
	if (!func_17(iParam0))
	{
		func_102(iParam0, fParam1);
	}
}

int func_315(var uParam0)//Position - 0xB98B
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !func_17(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[12 /*10*/].f_3)))
			{
				func_150(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_99(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_98(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_316(var uParam0)//Position - 0xBA1A
{
	struct<3> Var0;
	
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_17(&(Local_162[0 /*10*/].f_3))) && !func_17(&(Local_162[1 /*10*/].f_3))) && !func_17(&(Local_162[5 /*10*/].f_3))) && !func_17(&(Local_162[9 /*10*/].f_3))) && !func_17(&(Local_162[7 /*10*/].f_3))) && !func_17(&(Local_162[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 2.5f && !func_17(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[11 /*10*/].f_3)))
			{
				func_150(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = Var0.f_0;
			}
			else if (func_99(&(Local_162[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_164) - MISC::ABSF(Var0.f_0)) < 0f)
			{
				func_98(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_99(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_98(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_317(var uParam0)//Position - 0xBB4A
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_17(&(Local_162[0 /*10*/].f_3))) && !func_17(&(Local_162[8 /*10*/].f_3))) && !func_17(&(Local_162[5 /*10*/].f_3))) && !func_17(&(Local_162[9 /*10*/].f_3))) && !func_17(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_17(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_166(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, false)))
				{
					func_150(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_99(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_166(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_98(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_99(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_98(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_98(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_318(var uParam0)//Position - 0xBCCF
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_17(&(Local_162[9 /*10*/].f_3))) && !func_17(&(Local_162[7 /*10*/].f_3))) && !func_17(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_319(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_17(&(Local_162[13 /*10*/].f_3)))
			{
				func_150(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_99(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_98(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_319(int iParam0)//Position - 0xBD86
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &Var0, 1, 1077936128, 0);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &Var1, 1, 1077936128, 0);
	PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, -1, &Var2);
	fVar9 = SYSTEM::VMAG(Var2 - Var0);
	Var3 = { func_323((Var1.f_0 - Var0.f_0), (Var1.f_1 - Var0.f_1), 0f) };
	Var4 = { func_322(Var3, 0) * Vector(fVar9, fVar9, fVar9) };
	Var3 = { Var3 * Vector(2f, 2f, 2f) };
	Var5 = { Var0 - Var3 + Var4 };
	Var6 = { Var0 - Var3 - Var4 };
	Var7 = { Var1 + Var3 + Var4 };
	Var8 = { Var1 + Var3 - Var4 };
	Var8 = { Var8 };
	return func_320(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var5, Var6, Var7);
}

int func_320(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xBE6F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	Param2.f_2 = 0f;
	Param3.f_2 = 0f;
	Var0 = { func_323(Param2 - Param1) };
	Var1 = { func_323(Param3 - Param1) };
	fVar2 = func_321(Param0, Var0);
	fVar3 = func_321(Param1, Var0);
	fVar4 = func_321(Param2, Var0);
	fVar5 = func_321(Param0, Var1);
	fVar6 = func_321(Param1, Var1);
	fVar7 = func_321(Param3, Var1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_321(struct<3> Param0, struct<3> Param1)//Position - 0xBF58
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_322(struct<3> Param0, int iParam1)//Position - 0xBF79
{
	struct<3> Var0;
	
	switch (iParam1)
	{
		case 0:
			Var0.f_0 = -Param0.f_1;
			Var0.f_1 = Param0.f_0;
			break;
		
		case 1:
			Var0.f_0 = -Param0.f_0;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.f_0 = Param0.f_1;
			Var0.f_1 = -Param0.f_0;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_323(struct<3> Param0)//Position - 0xBFD7
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

int func_324(var uParam0)//Position - 0xC017
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_325(var uParam0)//Position - 0xC04C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_326(var uParam0)//Position - 0xC0E2
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_17(&(Local_162[4 /*10*/].f_3)))
			{
				func_150(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_99(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_98(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_327(var uParam0)//Position - 0xC154
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_17(&(Local_162[6 /*10*/].f_3)))
			{
				func_150(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_99(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_98(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_328(var uParam0)//Position - 0xC1CA
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_211(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_211(uParam0, 72, 1, 0, 1);
				}
				func_98(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_329(var uParam0)//Position - 0xC24B
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 3f && !func_17(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[1 /*10*/].f_3)))
			{
				func_150(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_99(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_98(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_330(var uParam0)//Position - 0xC2D7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_17(&(Local_162[0 /*10*/].f_3)))
			{
				func_150(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_99(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_98(&(Local_162[0 /*10*/].f_3));
				func_101(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_331(int iParam0, var uParam1)//Position - 0xC361
{
	Local_162[iParam0 /*10*/].f_1++;
	func_332(uParam1, iParam0);
	func_98(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_332(var uParam0, int iParam1)//Position - 0xC394
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_333(var uParam0, int iParam1)//Position - 0xC3AB
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_334(var uParam0)//Position - 0xC3BE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_17(&(Local_162[5 /*10*/].f_3)))
			{
				func_150(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_99(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_98(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_98(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_335(var uParam0, char* sParam1, int iParam2)//Position - 0xC435
{
	struct<3> Var0;
	
	func_129();
	func_444(2);
	Var0 = { func_121() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && func_131()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!func_200(uParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_281(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_352(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_235(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_200(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					func_350(uParam0, 4096, 0);
				}
				else
				{
					func_350(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_352(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_235(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_352(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_352(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_146(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_352(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_235(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_350(uParam0, 0, 0);
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_146(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_352(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_235(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_146(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_352(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_235(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_349(&Var0);
			func_336(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_352(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_352(uParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_235(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_146(3, 0);
		}
		func_281(uParam0, 3, 0f, 1);
	}
}

int func_336(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC9E6
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
	return func_337(sParam2, iParam3, 0);
}

int func_337(char* sParam0, int iParam1, bool bParam2)//Position - 0xCA34
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
					func_130();
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
		if (func_347(8, -1))
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
				func_345();
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
				if (func_344())
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
			if (func_31())
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
		func_338();
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
		func_130();
	}
	return 0;
}

void func_338()//Position - 0xCD02
{
	if (!func_339())
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

int func_339()//Position - 0xCD39
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_304())
	{
		return 0;
	}
	if (func_340(PLAYER::PLAYER_ID()))
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

bool func_340(int iParam0)//Position - 0xCD9C
{
	return func_341(iParam0, 20);
}

var func_341(int iParam0, int iParam1)//Position - 0xCDAC
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

void func_342()//Position - 0xCDC4
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

void func_343()//Position - 0xCDF6
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

int func_344()//Position - 0xCE8B
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

void func_345()//Position - 0xCF24
{
	if (func_74(14))
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
		Global_20266 = func_95();
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

void func_346()//Position - 0xCFC6
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

bool func_347(int iParam0, int iParam1)//Position - 0xD01E
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

void func_348(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD056
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

void func_349(char* sParam0)//Position - 0xD0AC
{
	switch (func_3(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_350(var uParam0, int iParam1, bool bParam2)//Position - 0xD0FF
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((func_199(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_110(uParam0->f_29)) && !bParam2)
		{
			func_351(uParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

void func_351(var uParam0)//Position - 0xD1F3
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_39(func_40(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(uParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_29, 1f, -1, 0.25f, false, 40000f);
			if (uParam0->f_411 == 2)
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (uParam0->f_411 == 0)
			{
				TASK::TASK_CLIMB_LADDER(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 0.25f, false, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (uParam0->f_411 == 4)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 20000);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_29, 15f, true))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

void func_352(var uParam0, char* sParam1)//Position - 0xD3DA
{
	if (func_353(uParam0))
	{
		func_336(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_353(var uParam0)//Position - 0xD402
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_166(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_354(var uParam0)//Position - 0xD440
{
	return uParam0->f_118;
}

void func_355()//Position - 0xD44C
{
	func_384(&Local_231);
	if (func_383(&Local_231, &Local_330))
	{
		switch (Local_330.f_27)
		{
			case 0:
				if (Local_231.f_410 == 9)
				{
					if (!func_137(&Local_231))
					{
						if (func_382("TX_OBJ_CYI_DO") || HUD::DOES_BLIP_EXIST(Local_231.f_9))
						{
							Local_330.f_27++;
						}
						else if (func_201(&Local_231) != 10)
						{
							func_211(&Local_231, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_201(&Local_231) > 10 && func_201(&Local_231) != 15) && !func_137(&Local_231))
				{
					func_211(&Local_231, 15, 1, 0, 0);
					func_186(&Local_231, 7);
				}
				break;
			
			case 2:
				if (func_149(&Local_231, 18) > 2f)
				{
					func_211(&Local_231, 16, 1, 0, 0);
				}
				break;
			
			case 3:
				if (func_149(&Local_231, 18) > 2f)
				{
					func_211(&Local_231, 17, 1, 0, 0);
				}
				break;
			
			case 5:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if ((((func_201(&Local_231) != 33 && !func_381(&Local_231)) && !func_137(&Local_231)) && !bLocal_256) && Local_231.f_410 > 9)
					{
						if (func_149(&Local_231, 18) > 2f)
						{
							func_211(&Local_231, 33, 1, 0, 1);
							func_281(&Local_231, 16, 4f, 0);
							if (bLocal_329)
							{
							}
						}
					}
					else
					{
						if (func_201(&Local_231) != 33)
						{
						}
						if (!func_381(&Local_231))
						{
						}
						if (!func_137(&Local_231))
						{
						}
						if (!bLocal_256)
						{
						}
						if (Local_231.f_410 > 9)
						{
						}
					}
				}
				break;
			
			case 6:
				if (((func_149(&Local_231, 16) > 4f && func_201(&Local_231) != 34) && !func_137(&Local_231)) && !func_381(&Local_231))
				{
					func_211(&Local_231, 34, 1, 0, 0);
					if (bLocal_329)
					{
					}
				}
				break;
			
			case 7:
				Local_330.f_27++;
				break;
			}
	}
	func_356(&Local_231, &uLocal_333, &Local_330, bLocal_329);
}

int func_356(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xD68E
{
	func_363(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_138(uParam0, 2))
	{
		if (func_362(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_381(uParam0))
				{
					uParam2->f_7 = { func_361(uParam1) };
					func_336(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_131())
				{
					uParam2->f_13 = { func_171() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_178(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_359(uParam1);
					func_281(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_142(uParam0))
				{
					if (func_131())
					{
						func_281(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_358() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_131())
				{
					uParam2->f_19 = { func_121() };
				}
				else
				{
					func_178(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_359(uParam1);
					func_281(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_138(uParam0, 14) && !func_131()) && !func_142(uParam0)) && func_149(uParam0, 18) > 1f)
				{
					func_281(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_131())
				{
					if (func_149(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_357(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_131())
				{
					func_178(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_359(uParam1);
					func_281(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_357(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD92E
{
	func_348(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_337(sParam2, iParam4, 0);
}

struct<6> func_358()//Position - 0xD982
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_22615);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar2 /*6*/])))
			{
				return Global_20473[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar3 /*6*/])))
					{
						return Global_20473[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_359(var uParam0)//Position - 0xDA2E
{
	int iVar0;
	
	iVar0 = func_360(uParam0);
	if (iVar0 > -1)
	{
		func_143(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_143(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_177(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_198(), 24);
	}
}

int func_360(var uParam0)//Position - 0xDA78
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_202((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_361(var uParam0)//Position - 0xDAA8
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_202((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_177(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_362(var uParam0)//Position - 0xDAEF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_202((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_363(var uParam0, var uParam1)//Position - 0xDB1E
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_381(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_138(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_201(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				func_380(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_378(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_131())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_377(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_374(uParam0, Var0, func_376(uParam0, 2));
				}
				if (func_202(uParam0->f_98, 4))
				{
					func_281(uParam0, 16, 0, 0);
					func_240(uParam0, 0, 0);
				}
				func_158(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_149(uParam0, 16) > 1f)
				{
					func_160(1);
					if (uParam0->f_411 == 9)
					{
						func_239("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_239("TAXI_VIP_RETURN", 7500, 1);
					}
					func_281(uParam0, 16, 0, 0);
					func_240(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_235(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_149(uParam0, 16) > func_157(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_131()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_201(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_377(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				func_380(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_378(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_336(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_211(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_281(uParam0, 16, 0, 0);
				func_211(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!func_202(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_380(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_377(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_281(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_239("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_239("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_163(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_211(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				func_213(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_235(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_163(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_211(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_373(uParam0, 33554432, Var0, "", 1, 8);
				func_281(uParam0, 16, 0, 0);
				func_211(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_131())
				{
					func_372(uParam0, 0);
					func_177(&(uParam0->f_44), 4);
					func_281(uParam0, 16, 0, 0);
					func_211(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				func_213(&Var0);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_149(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_213(&Var0);
					}
					func_370(Var0, uParam1);
					func_177(&(uParam0->f_81), 67108864);
					func_281(uParam0, 16, 0, 0);
					func_281(uParam0, 11, 0, 0);
					func_240(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_149(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_213(&Var0);
						}
					}
					func_370(Var0, uParam1);
					func_281(uParam0, 11, 0, 0);
					func_281(uParam0, 16, 0, 0);
					func_240(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					func_213(&Var0);
				}
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				func_213(&Var0);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				func_213(&Var0);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_213(&Var0);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				func_177(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_211(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_213(&Var0);
				func_377(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_369(&(uParam0->f_90), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_369(&(uParam0->f_90), 3, &Var0, &iVar5, 1, 0);
				}
				func_370(Var0, uParam1);
				func_378(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 6, 0f, 1);
				func_240(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_369(&(uParam0->f_89), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_369(&(uParam0->f_89), 3, &Var0, &iVar5, 1, 0);
				}
				func_370(Var0, uParam1);
				func_378(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 6, 0f, 1);
				func_240(uParam0, 0, 0);
				break;
			
			case 12:
				func_239("TAXI_OBJ_GYB", 3500, 1);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_239("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_239("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_239("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				func_377(uParam0, &Var0, 0, 0, 8);
				func_211(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_202(uParam0->f_98, 268435456))
				{
					func_239("TAXI_OBJ_CYI_01", 7500, 1);
					func_177(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_213(&Var0);
				func_370(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_213(&Var0);
				func_370(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_213(&Var0);
				func_370(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 33:
				func_239("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_202(uParam0->f_82, 8192))
				{
					if (func_149(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_213(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_370(Var0, uParam1);
						}
						else
						{
							func_377(uParam0, &Var0, 0, 0, 8);
						}
						func_177(&(uParam0->f_82), 8192);
						func_281(uParam0, 16, 0, 0);
						func_281(uParam0, 11, 0, 0);
						func_240(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_202(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_213(&Var0);
					func_377(uParam0, &Var0, 0, 0, 8);
					func_177(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_202(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_213(&Var0);
					func_377(uParam0, &Var0, 0, 0, 8);
					func_177(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_211(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				func_213(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_211(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_240(uParam0, 0, 0);
				break;
			
			case 139:
				func_239("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_211(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_202(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_177(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_202(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_177(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_211(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_239("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_240(uParam0, 0, 0);
				func_211(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_211(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_131())
				{
					func_239("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_240(uParam0, 0, 0);
					func_211(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_239("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_240(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_202(uParam0->f_81, 1))
				{
					func_368(uParam0, 1, Var0, "_sick1", 8);
					func_143(&(uParam0->f_81), 2);
				}
				else if (!func_202(uParam0->f_81, 2))
				{
					func_368(uParam0, 2, Var0, "_sick2", 8);
					func_143(&(uParam0->f_81), 1);
				}
				func_378(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_202(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_202(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_177(&(uParam0->f_81), 2097152);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_281(uParam0, 16, 0, 0);
				func_378(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_240(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_378(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_378(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_378(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_213(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_202(uParam0->f_81, 4))
				{
					func_368(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_202(uParam0->f_81, 8))
				{
					func_368(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_368(uParam0, 8, Var0, "_turns3", 8);
					func_143(&(uParam0->f_81), 4);
					func_143(&(uParam0->f_81), 8);
				}
				func_378(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_367(uParam0))
				{
					func_374(uParam0, Var0, func_376(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_235(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					func_380(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_336(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_380(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_380(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				func_378(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_202(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_177(&(uParam0->f_83), 128);
					func_143(&(uParam0->f_83), 256);
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_202(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_177(&(uParam0->f_83), 256);
					func_143(&(uParam0->f_83), 512);
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_202(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_177(&(uParam0->f_83), 512);
					func_143(&(uParam0->f_83), 128);
					func_281(uParam0, 16, 0, 0);
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_202(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						func_213(&Var0);
					}
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_177(&(uParam0->f_83), 1);
					func_143(&(uParam0->f_83), 2);
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_202(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						func_213(&Var0);
					}
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_177(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_143(&(uParam0->f_83), 4);
					}
					else
					{
						func_143(&(uParam0->f_83), 1);
					}
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_202(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						func_213(&Var0);
					}
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_177(&(uParam0->f_83), 4);
					func_143(&(uParam0->f_83), 1);
					func_281(uParam0, 16, 0, 0);
				}
				func_378(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_202(uParam0->f_81, 4096))
				{
					func_373(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!func_202(uParam0->f_81, 8192))
				{
					func_373(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				func_378(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_202(uParam0->f_81, 16384))
				{
					func_373(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!func_202(uParam0->f_81, 32768))
				{
					func_373(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				func_378(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_202(uParam0->f_82, 8))
					{
						func_366(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_202(uParam0->f_82, 16))
					{
						func_366(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_202(uParam0->f_82, 32))
					{
						func_366(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_378(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_240(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					func_380(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					func_378(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_281(uParam0, 16, 0, 0);
					func_240(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				func_380(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_378(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				func_380(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_378(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_202(uParam0->f_81, 65536))
				{
					func_373(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_202(uParam0->f_81, 131072))
				{
					func_373(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_367(uParam0))
				{
					func_374(uParam0, Var0, func_376(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_235(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_202(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_213(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_177(&(uParam0->f_83), 8);
					func_143(&(uParam0->f_83), 16);
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_202(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_213(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_177(&(uParam0->f_83), 16);
					func_143(&(uParam0->f_83), 32);
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_202(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_213(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_177(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_143(&(uParam0->f_83), 64);
					}
					else
					{
						func_143(&(uParam0->f_83), 8);
					}
					func_281(uParam0, 16, 0, 0);
				}
				else if (!func_202(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_213(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_177(&(uParam0->f_83), 64);
					func_143(&(uParam0->f_83), 8);
					func_281(uParam0, 16, 0, 0);
				}
				func_378(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_131())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_377(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_374(uParam0, Var0, func_376(uParam0, 65));
					func_240(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_131())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					func_377(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_374(uParam0, Var0, func_376(uParam0, 66));
					func_240(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_131())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								func_378(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								func_378(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								func_380(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
								func_378(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_281(uParam0, 16, 0, 0);
								func_240(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									func_377(uParam0, &Var0, 0, 0, 8);
									func_281(uParam0, 16, 0, 0);
									func_281(uParam0, 11, 0, 0);
									func_240(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_60 = 1;
									}
									func_213(&Var0);
									func_377(uParam0, &Var0, 0, 0, 8);
									func_281(uParam0, 16, 0, 0);
									func_281(uParam0, 11, 0, 0);
									func_240(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_377(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_211(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				func_380(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_378(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_202(uParam0->f_82, 1))
				{
					func_366(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_202(uParam0->f_82, 2))
				{
					func_366(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_202(uParam0->f_82, 4))
				{
					func_366(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar1 = { Var0 };
				func_380(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_235(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_281(uParam0, 16, 0, 0);
				func_378(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_367(uParam0))
				{
					func_374(uParam0, Var0, func_376(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_235(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_365(uParam0, Var0, 8);
				}
				func_378(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_202(uParam0->f_83, 1024))
				{
					func_177(&(uParam0->f_83), 1024);
					func_281(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_213(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_202(uParam0->f_83, 2048))
				{
					func_177(&(uParam0->f_83), 2048);
					func_281(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_213(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_202(uParam0->f_83, 4096))
				{
					func_177(&(uParam0->f_83), 4096);
					func_281(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_213(&Var0);
					func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_202(uParam0->f_82, 1024))
				{
					func_366(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_143(&(uParam0->f_82), 2048);
				}
				else if (!func_202(uParam0->f_82, 2048))
				{
					func_366(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				func_380(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_378(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_211(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_235(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_367(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						func_377(uParam0, &Var0, 0, 0, 8);
						func_211(uParam0, 52, 1, 0, 0);
						func_281(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar1 = { Var0 };
						func_377(uParam0, &Var0, 0, 0, 8);
						func_281(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					func_380(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					func_281(uParam0, 16, 0, 0);
					func_240(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_378(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_281(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_239("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_213(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_202(uParam0->f_81, 262144))
				{
					func_373(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_202(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_373(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_373(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_378(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_202(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_364(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_202(uParam0->f_82, 134217728))
				{
					func_364(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_378(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 100:
				func_239("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_240(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_213(&Var0);
				}
				func_177(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_213(&Var0);
				}
				func_177(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_213(&Var0);
				}
				func_177(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_202(uParam0->f_82, 65536))
				{
					if (func_149(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						func_213(&Var0);
						func_370(Var0, uParam1);
						func_177(&(uParam0->f_82), 65536);
						func_281(uParam0, 16, 0, 0);
						func_281(uParam0, 11, 0, 0);
						func_240(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_202(uParam0->f_82, 131072))
				{
					if (func_149(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_213(&Var0);
						func_370(Var0, uParam1);
						func_177(&(uParam0->f_82), 131072);
						func_281(uParam0, 16, 0, 0);
						func_281(uParam0, 11, 0, 0);
						func_240(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_202(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_177(&(uParam0->f_82), 8388608);
				}
				else if (!func_202(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_177(&(uParam0->f_82), 16777216);
				}
				else if (!func_202(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_177(&(uParam0->f_82), 33554432);
				}
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					func_380(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_213(&Var0);
					func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_377(uParam0, &Var0, 0, 0, 8);
				}
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_370(Var0, uParam1);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_213(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_213(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				func_380(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				func_380(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_379(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_213(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_213(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_211(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_177(&(uParam0->f_81), 2097152);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_213(&Var0);
				func_370(Var0, uParam1);
				func_177(&(uParam0->f_81), 67108864);
				func_281(uParam0, 16, 0, 0);
				func_281(uParam0, 11, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_202(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_373(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_235(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_211(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_202(uParam0->f_81, 268435456))
				{
					func_373(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_211(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_239("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_240(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_202(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_373(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_235(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_373(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_211(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_239("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_240(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_336(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_281(uParam0, 16, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_202(uParam0->f_81, 16777216))
				{
					func_373(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_240(uParam0, 0, 0);
				break;
			
			case 88:
				func_239("TAXI_TIEFLEE", 7500, 1);
				func_240(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_202(uParam0->f_98, 536870912))
				{
					func_239("TAXI_OBJ_CYI_1B", 7500, 1);
					func_177(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_240(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_213(&Var0);
				func_377(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				func_377(uParam0, &Var0, 0, 0, 8);
				func_240(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_377(uParam0, &Var0, 0, 0, 8);
				func_240(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				func_377(uParam0, &Var0, 0, 0, 8);
				func_240(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_377(uParam0, &Var0, 1, 0, 8);
				func_211(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_239("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_211(uParam0, 0, 0, 0, 0);
				func_240(uParam0, 0, 0);
				break;
			}
	}
}

void func_364(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x10DDE
{
	func_177(&(uParam0->f_82), iParam1);
	func_281(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_213(&Param2);
	}
	func_336(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_365(var uParam0, struct<6> Param1, int iParam2)//Position - 0x10E1F
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_202(uParam0->f_82, 64))
	{
		func_177(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_202(uParam0->f_82, 128))
	{
		func_177(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_379(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_281(uParam0, 16, 0, 0);
}

void func_366(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x10EA6
{
	func_177(&(uParam0->f_82), iParam1);
	func_281(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_213(&Param2);
		}
	}
	func_336(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

int func_367(var uParam0)//Position - 0x10F26
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_368(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x10F8C
{
	func_177(&(uParam0->f_81), iParam1);
	func_281(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	func_336(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_369(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x10FC2
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_259(*uParam0, iVar1))
		{
			func_178(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_213(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_370(char[24] cParam0, var uParam1)//Position - 0x11043
{
	int iVar0;
	
	iVar0 = func_371(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_177(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_371(var uParam0)//Position - 0x11072
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_372(var uParam0, bool bParam1)//Position - 0x1109F
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_239("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_239("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_239("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_239("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_239("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_239("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_239("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_239("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_239("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_239("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_239("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_239("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_239("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_239("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_239("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_239("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_239("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_239("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_239("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_239("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_373(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x11256
{
	func_177(&(uParam0->f_81), iParam1);
	func_281(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_213(&Param2);
	}
	func_336(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_374(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x11297
{
	func_281(uParam0, 16, 0, 0);
	func_281(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_375(uParam0));
	}
}

char* func_375(var uParam0)//Position - 0x112D5
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_376(var uParam0, int iParam1)//Position - 0x1136F
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_377(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x11718
{
	func_281(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_281(uParam0, 17, 0f, 1);
	}
	func_240(uParam0, iParam2, 0);
	return func_336(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_378(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x11755
{
	if (iParam0 == 0)
	{
		if (func_202(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_202(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_202(*uParam2, 4))
		{
			if (!func_202(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_143(uParam2, 4096);
			}
		}
		else if (func_202(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_202(*uParam2, 512))
		{
			if (!func_202(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_143(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_202(*uParam2, 16))
		{
			if (!func_202(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_143(uParam2, 4096);
			}
		}
		else if (func_202(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_202(*uParam2, 64))
		{
			if (!func_202(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_143(uParam2, 4096);
			}
		}
		else if (func_202(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_202(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_202(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_202(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_202(*uParam2, 8192))
		{
			if (func_202(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_202(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_202(*uParam2, 16384))
		{
			if (func_202(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_202(*uParam2, 32768))
		{
			if (func_202(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_202(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_202(*uParam2, 65536))
		{
			if (func_202(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_202(*uParam2, 131072))
		{
			if (func_202(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_202(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_202(*uParam2, 262144))
		{
			if (func_202(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_202(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_202(*uParam2, 524288))
		{
			if (func_202(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_202(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_202(*uParam2, 1048576))
		{
			if (func_202(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_202(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_202(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_202(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_202(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_202(*uParam2, 67108864))
		{
			if (func_202(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_202(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_202(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_202(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_202(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_379(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11D5F
{
	func_348(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_337(sParam2, iParam4, 0);
}

void func_380(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x11DB3
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_259(*uParam0, iVar1))
		{
			func_178(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_213(sParam2);
				}
				else
				{
					func_213(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_381(var uParam0)//Position - 0x11E4A
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_193("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_193("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_193("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_193("TX_OBJ_GYB_DO", 0, 0) || func_193("TAXI_OBJ_GYB", 0, 0)) || func_193("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_193("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_193("TX_OBJ_CYI_DO", 0, 0) || func_193("TAXI_OBJ_CYI_01", 0, 0)) || func_193("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_193("TX_OBJ_GYN_DO", 0, 0) || func_193("TAXI_OBJ_GYN", 0, 0)) || func_193("TAXI_OBJ_GYN_TG", 0, 0)) || func_193("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_193("TAXI_OBJ_CC1", 0, 0) || func_193("TAXI_OBJ_CC2", 0, 0)) || func_193("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_193("TAXI_OBJ_FTC1", 0, 0) || func_193("TAXI_OBJ_FTC2", 0, 0)) || func_193("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_193("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_193("TAXI_OBJ_GETRUN", 0, 0) || func_193("TAXI_OBJ_DRIVE", 0, 0)) || func_193("TAXI_OBJ_RETURN", 0, 0)) || func_193("TAXI_OBJ_POL", 0, 0)) || func_193("TAXI_OBJ_RUNOUT", 0, 0)) || func_193("TAXI_OBJ_POL", 0, 0));
}

int func_382(char* sParam0)//Position - 0x1206A
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_193(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_383(var uParam0, var uParam1)//Position - 0x1208C
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_138(uParam0, 9));
}

void func_384(var uParam0)//Position - 0x120B3
{
	if (func_138(uParam0, 17))
	{
		if (!func_138(uParam0, 14))
		{
			if (!func_142(uParam0))
			{
				if (!func_131())
				{
					func_139(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_385(var uParam0)//Position - 0x120ED
{
	return uParam0->f_117;
}

void func_386(var uParam0)//Position - 0x120F9
{
	if (!func_311(uParam0))
	{
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
		func_151(uParam0, 1);
	}
	else if (func_138(uParam0, 14))
	{
		func_204(uParam0);
		func_152(uParam0, 0);
	}
}

void func_387(var uParam0, var uParam1, bool bParam2)//Position - 0x1213A
{
	if (!func_202(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && func_131())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_131())
				{
					StringCopy(&(uParam0->f_124), func_198(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_388(var uParam0)//Position - 0x121C0
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_165.f_0 > 0 && !func_259(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165.f_0 - 1))
				{
					if (func_259(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_259(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_178(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_144(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_259(Local_165.f_1[iVar0 /*4*/], 4) && !func_259(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_178(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_335(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_389(var uParam0, var uParam1)//Position - 0x122D3
{
	var uVar0;
	
	if (!func_138(uParam0, 27))
	{
		func_186(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_149(uParam0, 27) > 5f)
	{
		if (func_416(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_281(uParam0, 27, 0, 0);
			func_281(uParam0, 10, 0, 0);
			func_414(uParam0, &uVar0, uParam1);
		}
		func_411(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_390(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_131())
	{
		if (func_149(uParam0, 26) > 10f)
		{
			func_139(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (func_138(uParam0, 26))
	{
		func_139(uParam0, 26, 0);
	}
	return 0;
}

void func_390(var uParam0)//Position - 0x123FD
{
	if (!func_410(uParam0->f_429))
	{
		uParam0->f_429 = func_409();
		func_400(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_391(uParam0->f_429))
	{
		func_335(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_391(int iParam0)//Position - 0x1244A
{
	return func_392(func_409(), iParam0);
}

int func_392(int iParam0, int iParam1)//Position - 0x1245C
{
	int iVar0;
	int iVar1;
	
	if (!func_410(iParam1) || !func_410(iParam0))
	{
		return 1;
	}
	iVar0 = func_398(iParam0);
	iVar1 = func_398(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_397(iParam0);
	iVar1 = func_397(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_396(iParam0);
	iVar1 = func_396(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_395(iParam0);
	iVar1 = func_395(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_394(iParam0);
	iVar1 = func_394(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_393(iParam0);
	iVar1 = func_393(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0)//Position - 0x12568
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_394(int iParam0)//Position - 0x1257B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_395(int iParam0)//Position - 0x1258E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_396(int iParam0)//Position - 0x125A1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_397(int iParam0)//Position - 0x125B3
{
	return iParam0 & 15;
}

var func_398(int iParam0)//Position - 0x125C0
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_399(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_399(bool bParam0, int iParam1, int iParam2)//Position - 0x125E2
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_400(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x125F9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_398(*uParam0);
	iVar1 = func_397(*uParam0);
	iVar2 = func_396(*uParam0);
	iVar3 = func_395(*uParam0);
	iVar4 = func_394(*uParam0);
	iVar5 = func_393(*uParam0);
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
	iVar6 = func_408(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_408(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_401(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_401(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1277B
{
	func_407(uParam0, iParam1);
	func_406(uParam0, iParam2);
	func_405(uParam0, iParam3);
	func_404(uParam0, iParam5);
	func_403(uParam0, iParam4);
	func_402(uParam0, iParam6);
}

void func_402(var uParam0, int iParam1)//Position - 0x127B3
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

void func_403(var uParam0, int iParam1)//Position - 0x12839
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_397(*uParam0);
	iVar1 = func_398(*uParam0);
	if (iParam1 < 1 || iParam1 > func_408(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_404(var uParam0, int iParam1)//Position - 0x1288A
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_405(var uParam0, int iParam1)//Position - 0x128BD
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_406(var uParam0, int iParam1)//Position - 0x128F7
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_407(var uParam0, int iParam1)//Position - 0x12932
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_408(int iParam0, int iParam1)//Position - 0x1296E
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

int func_409()//Position - 0x12A10
{
	var uVar0;
	
	func_407(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_406(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_405(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_403(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_404(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_402(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_410(int iParam0)//Position - 0x12A56
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
	iVar0 = func_393(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_394(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_395(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_398(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_397(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_396(iParam0);
	if (iVar5 < 1 || iVar5 > func_408(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_411(var uParam0)//Position - 0x12B32
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_413()) && !func_311(uParam0)) || ((uParam0->f_411 != 9 && func_244(uParam0, 1)) && !func_311(uParam0)))
		{
			uVar0 = func_412(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, false);
			func_204(uParam0);
			func_152(uParam0, 0);
		}
	}
}

var func_412(var uParam0)//Position - 0x12BC8
{
	return uParam0;
}

int func_413()//Position - 0x12BD2
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_22()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_414(var uParam0, var uParam1, var uParam2)//Position - 0x12C29
{
	switch (*uParam1)
	{
		case 1:
			if (func_415(uParam0, 0, 1))
			{
				func_335(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_415(uParam0, 0, 4))
			{
				func_335(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_415(uParam0, 0, 8))
			{
				func_335(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_415(uParam0, 1, 1))
			{
				func_335(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_415(uParam0, 0, 1))
			{
				func_335(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_202(*uParam2, 2) && func_200(uParam0))
			{
				func_335(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_415(var uParam0, int iParam1, int iParam2)//Position - 0x12D04
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_211(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_211(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_416(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x12D81
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_202(*uParam2, 1))
		{
			if (func_422(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_202(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_202(*uParam2, 4))
		{
			if (func_420(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_202(*uParam2, 8))
		{
			if (func_419(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_202(*uParam2, 128);
		if (bParam4)
		{
			if (func_417(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_202(*uParam2, 16))
		{
			if (func_417(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_417(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x12EAB
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_76) > 100f)
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
	if (func_418(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_165(iParam0, 1) < 1.5f)
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

int func_418(int iParam0, int iParam1)//Position - 0x13073
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("weapon_petrolcan"))
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

int func_419(int iParam0, int iParam1, var uParam2)//Position - 0x130C8
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

int func_420(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x13116
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
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
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_421(iVar1))
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

int func_421(int iParam0)//Position - 0x1328F
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
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_166(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0, 69)))
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

int func_422(int iParam0, var uParam1)//Position - 0x1335D
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_165(iParam0, 1) < uParam1->f_2)
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

void func_423(var uParam0)//Position - 0x133E2
{
	if (!func_202(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (func_199(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, false, false, false, false, false, false, 0);
				func_177(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_424()//Position - 0x1343A
{
	func_425(&Local_231);
	func_441();
}

void func_425(var uParam0)//Position - 0x1344D
{
	func_12(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_444(2);
	}
}

int func_426(var uParam0, bool bParam1)//Position - 0x1346C
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_131() && func_149(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
				{
					if (func_60(uParam0) == 0 || func_259(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_350(uParam0, 4160, 0);
						}
						else
						{
							func_350(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_350(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_350(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_350(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

int func_427(var uParam0)//Position - 0x1356B
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_428(int iParam0)//Position - 0x1358C
{
	func_430(&Local_231, iParam0);
	Local_231.f_410 = 0;
	func_429(&Local_231, 2, 8);
	Local_231.f_23 = { -1069.277f, -2666.156f, 12.665f };
	Local_231.f_33 = 202.9f;
	Local_231.f_26 = { 323.9376f, -956.7155f, 28.346f };
	Local_231.f_34 = 262.6098f;
	Local_231.f_29 = { -1037.711f, -2748.463f, 20.3642f };
}

void func_429(var uParam0, int iParam1, int iParam2)//Position - 0x13604
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_430(var uParam0, var uParam1)//Position - 0x13618
{
	func_440(1);
	func_206();
	func_7(&(uParam0->f_244));
	func_439(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_202(Global_113386.f_19097, 4))
	{
		func_177(&(Global_113386.f_19097), 4);
	}
	func_434(uParam0);
	func_432(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	uParam0->f_102 = (func_431(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_431(int iParam0)//Position - 0x1369A
{
	return Global_113386.f_19097.f_39[iParam0];
}

void func_432(var uParam0)//Position - 0x136AF
{
	switch (func_60(uParam0))
	{
		case 0:
			func_433(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_433(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_433(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_433(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_433(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_433(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_433(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_433(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_433(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_433(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_433(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x13802
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_434(var uParam0)//Position - 0x1381C
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_438(uParam0, 3);
			func_437(uParam0, 14);
			break;
		
		case 1:
			func_438(uParam0, 14);
			func_437(uParam0, 8);
			break;
		
		case 2:
			func_438(uParam0, 8);
			func_437(uParam0, 7);
			break;
		
		case 3:
			func_438(uParam0, 15);
			func_437(uParam0, 6);
			break;
		
		case 4:
			func_438(uParam0, 0);
			func_437(uParam0, 3);
			break;
		
		case 5:
			func_438(uParam0, 6);
			func_437(uParam0, 7);
			break;
		
		case 6:
			func_438(uParam0, 8);
			func_437(uParam0, 15);
			break;
		
		case 7:
			func_438(uParam0, 8);
			func_437(uParam0, 14);
			break;
		
		case 8:
			func_438(uParam0, 7);
			func_437(uParam0, 15);
			break;
		
		case 9:
			func_438(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_436((uParam0->f_418.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_437(uParam0, iVar0);
			func_435(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_435(var uParam0)//Position - 0x13953
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_436(int iParam0, int iParam1, int iParam2)//Position - 0x13A14
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_437(var uParam0, int iParam1)//Position - 0x13AB6
{
	uParam0->f_418.f_1 = iParam1;
}

void func_438(var uParam0, int iParam1)//Position - 0x13AC7
{
	uParam0->f_418.f_2 = iParam1;
}

void func_439(var uParam0)//Position - 0x13AD8
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_40() };
	uParam0->f_17 = { func_40() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_139(uParam0, 32, 0);
}

void func_440(bool bParam0)//Position - 0x13B36
{
	if (bParam0)
	{
		StringCopy(&Global_112442, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_112436 = 1;
	}
	else
	{
		StringCopy(&Global_112442, "NULL", 24);
		Global_112436 = 0;
	}
}

void func_441()//Position - 0x13B62
{
	int iVar0;
	
	func_208(func_215(-1), 1, 1114636288);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[iVar0], false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_323[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_280(0));
	func_132(&iLocal_266);
	AUDIO::DISTANT_COP_CAR_SIRENS(false);
	PED::SET_CREATE_RANDOM_COPS(true);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::STOP_AUDIO_SCENE("TAXI_CUT_U_IN");
	STREAMING::REMOVE_ANIM_DICT("MOVE_P_M_ZERO_RUCKSACK");
	func_443();
	func_442();
	func_287(&uLocal_45, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_326, false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
	{
		OBJECT::DELETE_OBJECT(&iLocal_244);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_442()//Position - 0x13C01
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_280(3));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_280(4));
	VEHICLE::REMOVE_VEHICLE_RECORDING(0, func_136(1));
}

void func_443()//Position - 0x13C25
{
}

void func_444(int iParam0)//Position - 0x13C2D
{
	Global_112096.f_22 = iParam0;
}

