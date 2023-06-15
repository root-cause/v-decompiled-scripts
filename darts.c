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
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_53 = 0f;
	struct<3> Local_54 = { 0, 0, 0 } ;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<9> Local_59 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	char* sLocal_100 = NULL;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	bool bLocal_131 = 0;
	float fLocal_132 = 0f;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	int iLocal_149[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_161 = 0;
	struct<68> Local_162 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	float fLocal_252 = 0f;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	struct<3> Local_259 = { 0, 0, 0 } ;
	int iLocal_262[2] = { 0, 0 };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	bool bLocal_272 = 0;
	bool bLocal_273 = 0;
	bool bLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	bool bLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	bool bLocal_280 = 0;
	bool bLocal_281 = 0;
	bool bLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	bool bLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
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
	struct<3> Local_333 = { 0, 0, 0 } ;
	struct<3> Local_336 = { 0, 0, 0 } ;
	struct<3> Local_339 = { 0, 0, 0 } ;
	struct<3> Local_342 = { 0, 0, 0 } ;
	struct<3> Local_345 = { 0, 0, 0 } ;
	struct<3> Local_348 = { 0, 0, 0 } ;
	float fLocal_351 = 0f;
	float fLocal_352 = 0f;
	float fLocal_353 = 0f;
	float fLocal_354 = 0f;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	char* sLocal_357 = NULL;
	char* sLocal_358 = NULL;
	int iLocal_359 = 0;
	char* sLocal_360 = NULL;
	char* sLocal_361 = NULL;
	char* sLocal_362[3] = { NULL, NULL, NULL };
	char* sLocal_366[3] = { NULL, NULL, NULL };
	char* sLocal_370[3] = { NULL, NULL, NULL };
	char* sLocal_374[3] = { NULL, NULL, NULL };
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<460> Var0;
	int iVar464;
	struct<4> Var465;
	struct<3> Var471;
	struct<25> Var477;
	struct<682> Var508;
	struct<532> Var1191;
	bool bVar1772;
	bool bVar1773;
	bool bVar1774;
	bool bVar1775;
	var uVar1776;
	int iVar1777;
	int iVar1778;
	int iVar1779;
	float fVar1780;
	float fVar1781;
	struct<3> Var1782;
	struct<3> Var1785;
	struct<3> Var1788;
	struct<3> Var1791;
	struct<3> Var1794;
	char* sVar1797;
	int* iVar1798;
	int* iVar1801;
	int* iVar1804;
	var* uVar1807[20];
	int iVar1828;
	int iVar1829;
	int iVar1830;
	int iVar1831;
	int iVar1832;
	int iVar1833;
	int iVar1834;
	float fVar1835;
	int iVar1836;
	
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
	iLocal_26 = joaat("prop_dart_1");
	iLocal_27 = joaat("prop_dart_2");
	iLocal_30 = joaat("prop_dart_bd_cab_01");
	fLocal_53 = 0.063f;
	Local_54 = { -0.0035f, 0f, -0.001f };
	iLocal_58 = joaat("prop_target_bull");
	Local_83 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_90 = 0.1f;
	iLocal_101 = 3;
	fLocal_104 = 80f;
	fLocal_105 = 140f;
	fLocal_106 = 180f;
	iLocal_112 = 1;
	iLocal_113 = 65;
	iLocal_114 = 49;
	iLocal_115 = 64;
	iLocal_138 = 65;
	iLocal_140 = 660;
	fLocal_145 = 0.27f;
	fLocal_146 = 0.1f;
	fLocal_147 = -120f;
	fLocal_148 = 127f;
	fLocal_252 = ((0.05f + 0.275f) - 0.01f);
	Local_259 = { 500f, 500f, 500f };
	bLocal_274 = true;
	Local_339 = { -573.1373f, 294.0269f, 78.1765f };
	Local_342 = { -574.1169f, 292.7964f, 78.1766f };
	Local_345 = { 1995.2952f, 3050.0845f, 46.91535f };
	Local_348 = { 1995.488f, 3047.3833f, 46.91535f };
	fLocal_351 = 172.6813f;
	fLocal_352 = 274.5094f;
	fLocal_353 = 142.6717f;
	fLocal_354 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var477.f_1 = 2;
	Var477.f_1.f_1 = 7;
	Var477.f_1.f_1.f_8 = 7;
	Var508.f_3 = 8;
	Var508.f_12 = 8;
	Var508.f_21 = 4;
	Var508.f_26.f_3 = 8;
	Var508.f_26.f_12 = 8;
	Var508.f_26.f_21 = 4;
	Var508.f_72 = 3;
	Var508.f_72.f_44.f_3.f_1 = 4;
	Var508.f_72.f_113 = 2;
	Var508.f_72.f_113.f_1.f_1 = 4;
	Var508.f_72.f_113.f_1.f_66.f_1 = 4;
	Var508.f_72.f_246.f_6 = 12;
	Var508.f_72.f_246.f_187 = 3;
	Var508.f_509.f_2 = 8;
	Var508.f_509.f_2.f_1.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_681 = 2;
	Var1191.f_32 = 3;
	Var1191.f_36 = 1;
	Var1191.f_53 = 2;
	Var1191.f_57 = 13;
	Var1191.f_71 = 13;
	Var1191.f_280 = 13;
	Var1191.f_489 = 13;
	Var1191.f_503 = 13;
	Var1191.f_517 = 13;
	Var1191.f_531 = 13;
	iVar1778 = 0;
	sLocal_360 = "facials@gen_female@variations@happy";
	switch (func_508(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			sLocal_361 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_361 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_361 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_362[0] = "mood_happy_1";
	sLocal_362[1] = "mood_happy_2";
	sLocal_362[2] = "mood_happy_3";
	sLocal_366[0] = "darts_outro_01_guy1";
	sLocal_366[1] = "darts_outro_02_guy2";
	sLocal_366[2] = "darts_outro_03_guy2";
	sLocal_370[0] = "darts_outro_01_guy2";
	sLocal_370[1] = "darts_outro_02_guy1";
	sLocal_370[2] = "darts_outro_03_guy1";
	sLocal_374[0] = "darts_outro_01_cam";
	sLocal_374[1] = "darts_outro_02_cam";
	sLocal_374[2] = "darts_outro_03_cam";
	iLocal_262[0] = PLAYER::PLAYER_PED_ID();
	bLocal_277 = true;
	Var1782 = { 1992.2932f, 3050.5828f, 47.98973f };
	Var1785 = { -572.04065f, 294.19577f, 79.9374f };
	func_507();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_301 = 1;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				iLocal_298 = joaat("A_F_M_Salton_01");
				break;
			
			case 1:
				iLocal_298 = joaat("A_F_O_Salton_01");
				break;
		}
		iLocal_296 = 10;
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_4))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_301 == 2)
			{
				ScriptParam_0 = { Var1785 };
				ScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_0 = { Var1782 };
				ScriptParam_0.f_3 = 57.783146f;
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), false))
			{
				ScriptParam_0.f_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), true, false, true);
				OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_0, &Var1788, 0);
				ScriptParam_0.f_3 = Var1788.f_2;
			}
		}
	}
	else
	{
		Var1788 = { ENTITY::GET_ENTITY_COORDS(ScriptParam_0.f_4, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_506(), false))
	{
		func_504(iLocal_296, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(func_506(), false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(func_506(), 0, 0);
		}
		iLocal_262[1] = func_506();
	}
	else
	{
		MISC::SET_MISSION_FLAG(true);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_495();
		func_477(&Var0, &Var508, &Var1191);
	}
	HUD::DISPLAY_AREA_NAME(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	func_475(1);
	iLocal_292 = func_472(func_508(iLocal_262[0]), 1);
	fVar1780 = (SYSTEM::TO_FLOAT(iLocal_292) / 100f);
	fVar1781 = (fVar1780 * 1200f);
	iLocal_140 = SYSTEM::ROUND(fVar1781);
	if (iLocal_140 < 660)
	{
		iLocal_140 = 660;
	}
	func_471(23, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
		if (iLocal_284 && Var0.f_0 < 13)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var477.f_0, Var477.f_18, Var477.f_21, Var477.f_24, Var477.f_24, 2);
		}
		if ((PED::IS_PED_INJURED(ScriptParam_0.f_5) && !ENTITY::DOES_ENTITY_EXIST(func_506())) || (ENTITY::DOES_ENTITY_EXIST(func_506()) && PED::IS_PED_INJURED(func_506())))
		{
			func_477(&Var0, &Var508, &Var1191);
		}
		if (!PED::IS_PED_INJURED(iLocal_262[0]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_262[0], 239, true);
			PED::SET_PED_RESET_FLAG(iLocal_262[0], 124, true);
			func_470();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			iVar1779 = 0;
			while (iVar1779 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1807, -1))
			{
				if (uVar1807[iVar1779] != iLocal_262[1])
				{
					if (!PED::IS_PED_INJURED(uVar1807[iVar1779]))
					{
						PED::SET_PED_RESET_FLAG(uVar1807[iVar1779], 240, true);
					}
				}
				iVar1779++;
			}
			switch (Var0.f_0)
			{
				case 0:
					HUD::CLEAR_HELP(true);
					func_469(&(Var0.f_243), &ScriptParam_0);
					func_468(Var0.f_243.f_1, Var0.f_243.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_243))
					{
						Local_333 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_336 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.191757f) };
						iLocal_127 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_333, Local_336, 65f, false, 2);
						CAM::SET_CAM_FOV(iLocal_127, 30f);
					}
					func_467();
					SYSTEM::SETTIMERA(0);
					Var0.f_0 = 1;
					break;
				
				case 1:
					if (SYSTEM::TIMERA() > 500 && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						MISC::CLEAR_AREA(ScriptParam_0, 0.5f, true, false, false, false);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_299);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_299);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_299);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_299);
						}
						Local_83 = { Local_83 };
						Var0.f_0 = 2;
					}
					break;
				
				case 2:
					iVar1829 = 0;
					while (iVar1829 < 2)
					{
						iVar1830 = 0;
						while (iVar1830 < 3)
						{
							func_466(&(Var0.f_5[iVar1829 /*79*/][iVar1830 /*26*/]), iVar1829);
							iVar1830++;
						}
						iVar1829++;
					}
					iVar1831 = 0;
					while (iVar1831 < 3)
					{
						func_466(&(Var0.f_164[iVar1831 /*26*/]), 0);
						iVar1831++;
					}
					iVar464 = 2;
					func_465(0);
					func_463(&Var477, iLocal_301, Var0.f_243.f_1, Var0.f_243.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_243))
					{
						Var1788 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Var0.f_243, Var477.f_18) };
					}
					func_460(&Var477, &Var508);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					Var0.f_0 = 3;
					break;
				
				case 3:
					if (func_457(&Var477, &Var508))
					{
						func_454(&(Var0.f_243), &Var465, &Var471, 0);
						iLocal_355 = func_508(iLocal_262[0]);
						switch (iLocal_355)
						{
							case 0:
								sLocal_357 = func_453("MICHAEL");
								if (!BitTest(Global_113771, 0))
								{
									sVar1797 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar1797 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_357 = func_453("FRANKLIN");
								bLocal_281 = true;
								if (!BitTest(Global_113771, 0))
								{
									sVar1797 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar1797 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_357 = func_453("TREVOR");
								if (!BitTest(Global_113771, 0))
								{
									sVar1797 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar1797 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!ENTITY::IS_ENTITY_DEAD(func_506(), false))
						{
							iLocal_356 = func_508(func_506());
							if (iLocal_356 == 145)
							{
								iLocal_356 = func_450(func_506());
							}
							switch (iLocal_356)
							{
								case 0:
									sLocal_358 = func_453("MICHAEL");
									break;
								
								case 1:
									sLocal_358 = func_453("FRANKLIN");
									break;
								
								case 2:
									sLocal_358 = func_453("TREVOR");
									break;
								
								case 19:
									sLocal_358 = func_453("LAMAR");
									PED::SET_PED_COMPONENT_VARIATION(func_506(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_358 = func_453("JIMMY");
									break;
								
								default:
									sLocal_358 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar1777 = MISC::GET_RANDOM_INT_IN_RANGE(0, 200);
							if (iLocal_301 == 2)
							{
								if (iVar1777 < 51)
								{
									sLocal_358 = func_453("RAYMOND");
									iLocal_359 = joaat("RAYMOND");
								}
								else if (iVar1777 < 101)
								{
									sLocal_358 = func_453("JOHAN");
									iLocal_359 = joaat("JOHAN");
								}
								else if (iVar1777 < 151)
								{
									sLocal_358 = func_453("STAN");
									iLocal_359 = joaat("STAN");
								}
								else
								{
									sLocal_358 = func_453("VINCE");
									iLocal_359 = joaat("VINCE");
								}
							}
							else if (iVar1777 < 51)
							{
								sLocal_358 = func_453("KRISTY");
								iLocal_359 = joaat("KRISTY");
							}
							else if (iVar1777 < 101)
							{
								sLocal_358 = func_453("MARLENE");
								iLocal_359 = joaat("MARLENE");
							}
							else if (iVar1777 < 151)
							{
								sLocal_358 = func_453("LORIE");
								iLocal_359 = joaat("LORIE");
							}
							else
							{
								sLocal_358 = func_453("SHELLEY");
								iLocal_359 = joaat("SHELLEY");
							}
						}
						iLocal_57 = OBJECT::CREATE_OBJECT(iLocal_58, Var471, true, true, false);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0.f_0 = 4;
					}
					break;
				
				case 4:
					if (!CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS())
					{
						iVar1828 = OBJECT::CREATE_OBJECT(joaat("prop_dart_1"), Var471, true, true, false);
						func_447(Var0.f_243.f_4, Var465, &uVar1807, &ScriptParam_0);
						func_446(&Var477, sLocal_357, sLocal_358);
						TASK::CLEAR_PED_TASKS(iLocal_262[1]);
						iLocal_300 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
						}
						func_445(&(Var0.f_257), 0, PLAYER::PLAYER_PED_ID(), sLocal_357, 0, 1);
						if (ENTITY::IS_ENTITY_DEAD(func_506(), false))
						{
							if (iLocal_301 == 2)
							{
								func_445(&(Var0.f_257), 3, iLocal_262[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_445(&(Var0.f_257), 3, iLocal_262[1], "DartsMelHick1", 0, 1);
							}
							iVar1778 = -1;
						}
						else
						{
							func_445(&(Var0.f_257), 3, func_506(), sLocal_358, 0, 1);
							func_443(&iVar1804);
							iVar1778 = 6;
						}
						if (!BitTest(Global_113771, 0))
						{
							iVar1778 = -1;
						}
						else
						{
							iVar1778 = 3;
						}
						func_442(&Var477, 0);
						Var0.f_0 = 5;
					}
					break;
				
				case 5:
					if ((((!PED::IS_PED_INJURED(iLocal_262[1]) && PED::IS_PED_ON_FOOT(iLocal_262[0])) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_262[0], true)) && PED::IS_PED_ON_FOOT(iLocal_262[1])) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_262[1], true))
					{
						bLocal_272 = func_440(&uLocal_288);
						if ((func_439() && MISC::GET_GAME_TIMER() >= iLocal_290 + 1000) && iVar1778 != 9)
						{
							if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(500);
							}
						}
						if (CAM::IS_SCREEN_FADED_OUT() && iVar1778 != 9)
						{
							func_435(0);
							func_433();
							iVar1778 = 9;
						}
						switch (iVar1778)
						{
							case -1:
								if (!PED::IS_PED_INJURED(iLocal_262[1]))
								{
									iLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_0.f_4) - 3.783146f), 2);
									iLocal_300 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_300, iLocal_294, "darts_ig_intro_cam", "mini@dartsintro");
									CAM::SET_CAM_ACTIVE(iLocal_300, true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_262[0]);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_262[1]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262[0]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262[1]);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[1], iLocal_294, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[0], iLocal_294, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1000f, 0);
									TASK::TASK_PLAY_ANIM(iLocal_262[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(iLocal_262[0], "mini@dartsintro", sVar1797, 8f, -8f, -1, 32, 0f, false, false, false);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iVar1828, iLocal_294, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 8f, 0, 1000f);
									func_432(&iVar1804);
									iVar1778++;
								}
								break;
							
							case 0:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294))
								{
									if (!bVar1774)
									{
										if (func_431(&iVar1804) > 1.5f)
										{
											func_430(iLocal_262[0], "DARTS_REQUEST_GAME", 6);
											bVar1774 = true;
											func_429(&iVar1804);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_262[0]))
									{
										if (!bVar1775)
										{
											if (!func_428(&iVar1804))
											{
												func_443(&iVar1804);
											}
											else if (func_431(&iVar1804) > 0.5f)
											{
												func_427(iLocal_262[1]);
												func_429(&iVar1804);
												bVar1775 = true;
											}
										}
									}
									switch (iLocal_29)
									{
										case 0:
											func_432(&iVar1804);
											func_426("DARTS_HOW_TO_2", -1);
											iLocal_29++;
											break;
										
										case 1:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) > 0.25f)
											{
												func_432(&iVar1804);
												func_426("DARTS_HOW_TO_3", -1);
												iLocal_29++;
											}
											break;
										
										case 2:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) > 0.55f)
											{
												func_426("DARTS_HOW_3A", -1);
												iLocal_29++;
											}
											break;
										
										case 3:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) > 0.85f)
											{
												func_426("DARTS_HOW_3A", -1);
												iLocal_29++;
											}
											break;
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) > 0.95f)
									{
										iLocal_284 = 1;
										iVar1778++;
									}
									else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(iLocal_262[1]))
									{
										func_423(Var0.f_243.f_1, Var0.f_243.f_4, func_425(2), func_424(0), 0, 1);
										iLocal_29 = 0;
										HUD::CLEAR_HELP(true);
										CAM::DESTROY_CAM(iLocal_300, false);
										TASK::CLEAR_PED_TASKS(iLocal_262[0]);
										TASK::CLEAR_PED_TASKS(iLocal_262[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iVar1828, -1000f, false);
										OBJECT::DELETE_OBJECT(&iVar1828);
										AUDIO::STOP_AUDIO_SCENE(func_422(0));
										func_429(&iVar1804);
										Var0.f_0 = 6;
										iVar1778 = 0;
									}
								}
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(iLocal_262[1]))
								{
									iLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_0.f_4) - 3.783146f), 2);
									iLocal_300 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_300, iLocal_294, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									CAM::SET_CAM_ACTIVE(iLocal_300, true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_262[0]);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_262[1]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262[0]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262[1]);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[1], iLocal_294, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[0], iLocal_294, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1000f, 0);
									TASK::TASK_PLAY_ANIM(iLocal_262[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(iLocal_262[0], "mini@dartsintro_alt1", sVar1797, 8f, -8f, -1, 32, 0f, false, false, false);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iVar1828, iLocal_294, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 8f, 0, 1000f);
									func_432(&iVar1804);
									iVar1778++;
								}
								break;
							
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294))
								{
									if (!bVar1774)
									{
										if (func_431(&iVar1804) > 0.5f)
										{
											func_430(iLocal_262[0], "DARTS_REQUEST_GAME", 6);
											bVar1774 = true;
											func_429(&iVar1804);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_262[0]))
									{
										if (!bVar1775)
										{
											if (!func_428(&iVar1804))
											{
												func_443(&iVar1804);
											}
											else if (func_431(&iVar1804) > 0.25f)
											{
												func_427(iLocal_262[1]);
												func_429(&iVar1804);
												bVar1775 = true;
											}
										}
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) > 0.95f)
									{
										iLocal_284 = 1;
										iVar1778++;
									}
									else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(iLocal_262[1]))
									{
										func_421();
										CAM::DESTROY_CAM(iLocal_300, false);
										TASK::CLEAR_PED_TASKS(iLocal_262[0]);
										TASK::CLEAR_PED_TASKS(iLocal_262[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iVar1828, -1000f, false);
										OBJECT::DELETE_OBJECT(&iVar1828);
										AUDIO::STOP_AUDIO_SCENE(func_422(0));
										func_429(&iVar1804);
										Var0.f_0 = 6;
										iVar1778 = 0;
									}
								}
								break;
							
							case 9:
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									iLocal_284 = 1;
									iLocal_29 = 0;
									HUD::CLEAR_HELP(true);
									if (!PED::IS_PED_INJURED(iLocal_262[1]))
									{
										ENTITY::SET_ENTITY_COORDS(iLocal_262[0], Var465, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(iLocal_262[0], Var0.f_243.f_4);
										ENTITY::SET_ENTITY_COORDS(iLocal_262[1], Var465.f_3, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(iLocal_262[1], Var0.f_243.f_4);
										TASK::CLEAR_PED_TASKS(iLocal_262[0]);
										TASK::CLEAR_PED_TASKS(iLocal_262[1]);
									}
									CAM::DESTROY_CAM(iLocal_300, false);
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iVar1828, -1000f, false);
									OBJECT::DELETE_OBJECT(&iVar1828);
									if (!BitTest(Global_113771, 0))
									{
										func_423(Var0.f_243.f_1, Var0.f_243.f_4, func_425(2), func_424(0), 0, 1);
									}
									else
									{
										func_421();
									}
									AUDIO::STOP_AUDIO_SCENE(func_422(0));
									func_429(&iVar1804);
									CAM::DO_SCREEN_FADE_IN(500);
									Var0.f_0 = 6;
									iVar1778 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar1778)
					{
						case 0:
							iLocal_290 = MISC::GET_GAME_TIMER();
							if (!PED::IS_PED_INJURED(iLocal_262[1]))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_262[0], Var465, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_262[0], Var0.f_243.f_4);
								ENTITY::SET_ENTITY_COORDS(iLocal_262[1], Var465.f_3, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_262[1], Var0.f_243.f_4);
							}
							AUDIO::START_AUDIO_SCENE(func_422(1));
							iVar1778 = 0;
							Var0.f_0 = 7;
							break;
						
						case 1:
							if ((MISC::GET_GAME_TIMER() - iLocal_290) > 1500)
							{
								func_419(&(Var508.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar1778++;
							}
							break;
						
						case 2:
							if (!func_418(&(Var508.f_57), 1, 0))
							{
								AUDIO::START_AUDIO_SCENE(func_422(1));
								iVar1778 = 0;
								Var0.f_0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!BitTest(Global_113771, 0))
					{
						if (func_415(&iVar464, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &iVar1801))
						{
							MISC::SET_BIT(&Global_113771, 0);
							Var0.f_0 = 8;
						}
					}
					else
					{
						CAM::SET_CAM_ACTIVE(iLocal_118, true);
						Var0.f_0 = 8;
					}
					break;
				
				case 8:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					switch (iVar1778)
					{
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(func_506()))
							{
								if (!BitTest(Global_113771, 10))
								{
									MISC::SET_BIT(&Global_113771, 10);
								}
								else
								{
									MISC::CLEAR_BIT(&Global_113771, 10);
								}
								func_413(&Var508);
								iVar1778++;
							}
							else
							{
								func_413(&Var508);
								iVar1778++;
							}
							break;
						
						case 1:
							if (MISC::IS_PC_VERSION())
							{
								if (fLocal_132 != GRAPHICS::GET_ASPECT_RATIO(false))
								{
									fLocal_132 = GRAPHICS::GET_ASPECT_RATIO(false);
									CAM::SET_CAM_FOV(iLocal_118, func_412(fLocal_132));
									CAM::SET_CAM_FOV(iLocal_119, func_412(fLocal_132));
								}
							}
							if (func_351(&Var508, &(Var0.f_452), &(Var0.f_453)))
							{
								AUDIO::STOP_AUDIO_SCENE(func_422(1));
								if (Var0.f_452 > 0)
								{
									iVar1778 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_350(&Var477, 0, 0, 0, 0);
										bVar1773 = true;
									}
									func_347(1, -1);
									Var0.f_0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0.f_0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_340(&Var0, &Var477, &Var508))
					{
						Var0.f_249.f_4 = 1;
						if (Global_113810.f_18973.f_5 >= 5 && Global_113810.f_18973.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_113810.f_18973.f_5 >= 3 && Global_113810.f_18973.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_339(Global_113810.f_18973.f_5, &iLocal_293))
						{
							func_338(&(Var508.f_666), 24, 1);
						}
						fLocal_88 = func_337(Global_113810.f_18973.f_5);
						fLocal_89 = func_336(Global_113810.f_18973.f_5);
						fLocal_86 = fLocal_88;
						fLocal_87 = fLocal_89;
						iLocal_149[4]++;
						if (!PED::IS_PED_INJURED(iLocal_262[1]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262[1]);
							ENTITY::SET_ENTITY_COORDS(iLocal_262[1], Var465.f_3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_262[1], Var0.f_243.f_4);
						}
						if (func_428(&iVar1798))
						{
							func_429(&iVar1798);
						}
						AUDIO::START_AUDIO_SCENE(func_422(2));
						func_335(iLocal_262[1]);
						Var0.f_0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (MISC::IS_PC_VERSION())
					{
						if (fLocal_132 != GRAPHICS::GET_ASPECT_RATIO(false))
						{
							fLocal_132 = GRAPHICS::GET_ASPECT_RATIO(false);
							CAM::SET_CAM_FOV(iLocal_118, func_412(fLocal_132));
							CAM::SET_CAM_FOV(iLocal_119, func_412(fLocal_132));
						}
					}
					if (!bLocal_282)
					{
						STREAMING::REQUEST_ANIM_DICT("mini@dartsoutro");
						bLocal_282 = true;
					}
					if (!iLocal_283)
					{
						if (bLocal_282)
						{
							if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_283 = 1;
							}
						}
					}
					func_253(&Var0, &Var471, &Var477, &Var508, &iVar1798);
					break;
				
				case 11:
					switch (iVar1778)
					{
						case 0:
							if (func_431(&(Var0.f_254)) > 0.5f)
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								func_252(PLAYER::PLAYER_PED_ID());
								func_350(&Var477, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar1832 = 0;
								while (iVar1832 < 2)
								{
									iVar1833 = 0;
									while (iVar1833 < 3)
									{
										func_251(&(Var0.f_5[iVar1832 /*79*/][iVar1833 /*26*/]));
										iVar1833++;
									}
									func_250(&Var477, iVar1832);
									iVar1832++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_248(&(Var508.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_248(&(Var508.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_248(&(Var508.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_248(&(Var508.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar1835 = GRAPHICS::GET_ASPECT_RATIO(true);
								if (fVar1835 > 2f)
								{
									Var1791 = { 1992.2941f, 3047.577f, 46.21517f };
									Var1794 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var1791 = { 1992.3357f, 3047.9243f, 46.21517f };
									Var1794 = { 0f, 0f, 136.74f };
								}
								iVar1834 = func_247();
								iLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(Var1791, Var1794, 2);
								iLocal_300 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_300, iLocal_294, sLocal_374[iVar1834], "mini@dartsoutro");
								CAM::SET_CAM_ACTIVE(iLocal_300, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								if (!PED::IS_PED_INJURED(iLocal_262[0]) && !PED::IS_PED_INJURED(iLocal_262[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar1836 = 1;
										}
										else
										{
											iVar1836 = 0;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "TENNIS_POINT_WON", "HUD_AWARDS", true);
										func_246(&iLocal_262, iVar1836);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[0], iLocal_294, "mini@dartsoutro", sLocal_366[iVar1834], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[1], iLocal_294, "mini@dartsoutro", sLocal_370[iVar1834], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_361, sLocal_362[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
										func_245(&iLocal_262);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[1], iLocal_294, "mini@dartsoutro", sLocal_366[iVar1834], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[0], iLocal_294, "mini@dartsoutro", sLocal_370[iVar1834], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_PLAY_ANIM(iLocal_262[1], sLocal_360, sLocal_362[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
									}
								}
								iVar1778++;
							}
							break;
						
						case 1:
							if (!func_243(&(Var508.f_62), 1))
							{
								iVar1778++;
							}
							break;
						
						case 2:
							func_429(&(Var0.f_254));
							iLocal_278 = 0;
							AUDIO::STOP_AUDIO_SCENE(func_422(3));
							func_421();
							if (CAM::DOES_CAM_EXIST(iLocal_300))
							{
								CAM::DESTROY_CAM(iLocal_300, false);
							}
							iVar1778 = 0;
							Var0.f_0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_431(&(Var0.f_254)) > 0.92f)
					{
						func_44(&Var0, &Var508, &Var477, &Var1191, bVar1773);
					}
					break;
				
				case 13:
					uVar1776 = func_10(&Var1191, 0, 1065353216, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(func_506(), false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_262[1]);
						Var0.f_0 = 15;
					}
					switch (iVar1778)
					{
						case 0:
							TASK::CLEAR_PED_TASKS(iLocal_262[0]);
							if (!bLocal_280)
							{
								CAM::RENDER_SCRIPT_CAMS(false, bLocal_280, 3000, true, false, 0);
							}
							else
							{
								CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							HUD::CLEAR_PRINTS();
							TASK::TASK_LOOK_AT_ENTITY(iLocal_262[0], iLocal_262[1], 5000, 2049, 3);
							func_443(&iVar1804);
							iVar1778++;
							break;
						
						case 1:
							if (func_7(&iVar1804) > 0.1f)
							{
								if (!bVar1772)
								{
								}
								func_443(&iVar1804);
								iVar1778++;
							}
							break;
						
						case 2:
							if (func_7(&iVar1804) > 0.3f)
							{
								if (!PED::IS_PED_INJURED(iLocal_262[1]))
								{
									if (!bVar1772)
									{
										func_4(iLocal_262[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_443(&iVar1804);
								iVar1778++;
							}
							break;
						
						case 3:
							if (uVar1776 || bVar1772)
							{
								Var0.f_0 = 15;
								iVar1778++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var508);
					if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						func_1(iLocal_262[1]);
						iLocal_297 = 2;
						bVar1772 = true;
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_422(2)))
						{
							AUDIO::STOP_AUDIO_SCENE(func_422(2));
						}
						Var0.f_0 = 13;
					}
					if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_98 = 0;
						}
						func_338(&(Var508.f_666), 8, 0);
						Var0.f_0 = 10;
					}
					break;
				
				case 15:
					func_477(&Var0, &Var508, &Var1191);
					break;
				}
		}
	}
}

void func_1(int iParam0)//Position - 0x1DCE
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)//Position - 0x1DEC
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_338(&(uParam0->f_666), 8, 1);
			func_338(&(uParam0->f_666), 15, 0);
			func_338(&(uParam0->f_666), 16, 0);
			func_338(&(uParam0->f_666), 17, 0);
		}
		HUD::CLEAR_SMALL_PRINTS();
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_338(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)//Position - 0x1E71
{
	return BitTest(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1E7F
{
	if (!ENTITY::IS_ENTITY_DEAD(func_506(), false) || iParam2)
	{
		func_430(iParam0, sParam1, iParam3);
	}
	else if (!PED::IS_PED_INJURED(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_100, iParam3);
	}
}

void func_5(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1EBF
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_6(iParam3), false);
}

int func_6(int iParam0)//Position - 0x1ED8
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

float func_7(int* iParam0)//Position - 0x20CD
{
	if (func_428(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)//Position - 0x2109
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

bool func_9(int* iParam0)//Position - 0x2161
{
	return BitTest(*iParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x216E
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_578)
	{
		return uParam0->f_579;
	}
	uParam0->f_578 = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true))
		{
			uParam0->f_579 = 1;
			return 1;
		}
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_579 = 1;
			return 1;
		}
	}
	if (!uParam0->f_568)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			uParam0->f_568 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 29 /*INPUT_SPECIAL_ABILITY_SECONDARY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 171 /*INPUT_SPECIAL_ABILITY_PC*/, true);
	func_41(0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PLAYER::GET_ARE_CAMERA_CONTROLS_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		}
	}
	Global_43927 = 1;
	if (!uParam0->f_567)
	{
		switch (func_508(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, false);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, false);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, false);
				break;
		}
		uParam0->f_567 = 1;
	}
	if (uParam0->f_562 == 0)
	{
		uParam0->f_562 = (uParam0->f_576 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_576 >= (uParam0->f_562 - 1500))
	{
		uParam0->f_562 = uParam0->f_576 + 3000;
	}
	if (uParam0->f_564 == 0f)
	{
		uParam0->f_564 = (uParam0->f_564 + func_40(30f));
		uParam0->f_564 = (uParam0->f_564 + (IntToFloat(uParam0->f_56) * func_40(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_564 = (uParam0->f_564 + func_40((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_564 = (uParam0->f_564 + (func_40(30f) - func_40(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_39(1);
		uParam0->f_576 = (uParam0->f_576 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_569)
				{
					uParam0->f_569 = 0;
					uParam0->f_570 = 0;
					uParam0->f_577 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_576;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_566)
		{
			if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_571)
					{
						func_11(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/) && uParam0->f_562 > uParam0->f_576 + 333)
		{
			if (((!uParam0->f_570 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_569)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					if (uParam0->f_576 > (uParam0->f_562 - 5000))
					{
						uParam0->f_562 = uParam0->f_576 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_569 = 0;
					uParam0->f_577 = 0.75f;
				}
				func_11(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_569 || uParam0->f_570) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_570 && !uParam0->f_569)
				{
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_563 = func_14((uParam0->f_563 + (((1f / 0.3f) * uParam0->f_577) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_577 = func_14((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_563 = func_14((uParam0->f_563 - ((((1f / 0.3f) * uParam0->f_577) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_577 = func_14((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_576 > uParam0->f_562)
		{
			if (uParam0->f_565)
			{
				if (!uParam0->f_571)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/))
					{
						uParam0->f_565 = 0;
					}
				}
			}
			else if ((uParam0->f_576 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_579 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_39(0);
			}
			return !bVar0;
		}
	}
	func_39(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)//Position - 0x27C9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/, true));
	func_12("ES_HELP" /* GXT: Continue */);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/, true));
		func_12("ES_XPAND" /* GXT: Expand */);
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_12(char* sParam0)//Position - 0x288D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_13(char* sParam0)//Position - 0x289F
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)//Position - 0x28AD
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

void func_15(var uParam0, float fParam1, bool bParam2)//Position - 0x28D4
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_38() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_560 == 4)
				{
					func_37(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(150);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				if (uParam0->f_560 == 4)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((uParam0->f_56 - 1));
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
				if (uParam0->f_560 == 4 || uParam0->f_560 == 3)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_576 > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_36();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_564 * uParam0->f_563) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_571)
	{
		fVar3 = (((0.13888888f + func_40((2f * 2f))) * uParam0->f_572) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_38());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_560 != 4)
	{
		fVar7 = func_35(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::GET_ASPECT_RATIO(false) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_554)))
		{
			fVar7 = func_34(&(uParam0->f_550), &(uParam0->f_554));
		}
		else
		{
			fVar7 = func_35(&(uParam0->f_550));
		}
		fVar8 = (((0.119f + 0.05f) / func_38()) / 2.5f);
		if ((uParam0->f_560 == 1 || uParam0->f_560 == 0) && uParam0->f_561 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_560 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (uParam0->f_566 || uParam0->f_571)
	{
		if ((IntToFloat(uParam0->f_562) - (14000f * fParam1)) < IntToFloat(uParam0->f_576) || ((uParam0->f_571 && uParam0->f_563 > 0.95f) && (uParam0->f_562 - 10000) < uParam0->f_576))
		{
			if (uParam0->f_571)
			{
				if (uParam0->f_574 < 0)
				{
					uParam0->f_574 = (uParam0->f_574 * -1);
					uParam0->f_574 = (uParam0->f_576 + uParam0->f_574);
				}
				if (uParam0->f_574 > 0)
				{
					if ((uParam0->f_574 - uParam0->f_576) > 0)
					{
						func_31((uParam0->f_574 - uParam0->f_576), "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_574 = 0;
						uParam0->f_573 = 1;
						uParam0->f_571 = 0;
						uParam0->f_565 = 0;
						uParam0->f_566 = 0;
						uParam0->f_562 = uParam0->f_576 + 500;
						uParam0->f_574 = 0;
					}
				}
				if (uParam0->f_572 < 1f)
				{
					uParam0->f_572 = (uParam0->f_572 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_572 > 1f)
					{
						uParam0->f_572 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_576 <= uParam0->f_562)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_571)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 3;
					uParam0->f_574 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 4;
					uParam0->f_574 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 2;
					uParam0->f_574 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_566)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_566 = 0;
					uParam0->f_565 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_40(6f));
	fVar1 = (fVar1 + (func_40(30f) - func_40((2f * 2f))));
	fVar11 = (fVar2 - func_40((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
		func_36();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_40((2f - 0.5f)) - 0.0013888889f)), fVar6, func_30(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), false);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_40((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_40((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_40(25f))), 0f, 1f);
			func_27(uParam0, iVar17, (fVar1 + func_40(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_40(25f));
		if (uParam0->f_560 == 4)
		{
			if (iVar17 == (uParam0->f_580 - 1))
			{
				fVar1 = (fVar1 + func_40((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_40(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
					func_36();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_40((2f * 0.5f))), fVar6, func_30(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), false);
					fVar1 = (fVar1 + func_40((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_40((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_560 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_40((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_40(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
			func_36();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_40((2f * 0.5f))), fVar6, func_30(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), false);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_40((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_40(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_19(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_38()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_38()) / 2.5f));
				if (uParam0->f_560 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_38()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_38()) / 2.5f));
				}
			}
			if (uParam0->f_561 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_560 != 3)
			{
				HUD::SET_TEXT_WRAP(fVar20, fVar21);
				HUD::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				HUD::SET_TEXT_JUSTIFICATION(0);
			}
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_554)))
			{
				func_18(&(uParam0->f_550), fVar20, (fVar1 + func_40((2f * 2f))), 0, 0, 0);
			}
			else
			{
				func_17(&(uParam0->f_550), &(uParam0->f_554), fVar20, (fVar1 + func_40((2f * 2f))), 0, 0);
			}
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(false);
			func_36();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_560)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE" /* GXT: ~1~% */);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM" /* GXT: ~1~/~1~ */);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_559);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO" /* GXT: ~1~RP */);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 5:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA" /* GXT: $~a~ */);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_558, true);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
			}
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar23, false);
			if (uParam0->f_561 != 0 && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar23))
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_561)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.0013888889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.0013888889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_40(10f)) + fVar39);
				if (uParam0->f_560 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), false, 0);
			}
			fVar1 = (fVar1 + (func_40(30f) - 2f));
		}
	}
}

float func_16(float fParam0)//Position - 0x35C4
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, char* sParam1, float fParam2, float fParam3, bool bParam4, int iParam5)//Position - 0x35D4
{
	HUD::SET_TEXT_CENTRE(bParam4);
	HUD::SET_TEXT_FONT(iParam5);
	func_36();
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
}

void func_18(char* sParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x3601
{
	HUD::SET_TEXT_CENTRE(bParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_36();
	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x363E
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_26(iParam0), 64);
	StringCopy(&cVar16, func_23(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_21(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_20(iParam0) / fVar34);
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
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/])) == joaat("CREW_LOGO"))
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
			if (*fParam3 > Global_23389)
			{
				*fParam4 = (*fParam4 * (Global_23389 / *fParam3));
				*fParam3 = Global_23389;
			}
		}
		return 1;
	}
	return 0;
}

float func_20(int iParam0)//Position - 0x376A
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
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 63:
			return 0.5f;
			break;
		
		case 62:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_21(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0x383E
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
	if (func_22(*iParam1, *iParam2))
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

bool func_22(int iParam0, int iParam1)//Position - 0x38C6
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

var func_23(int iParam0, bool bParam1)//Position - 0x38E1
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_7488[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23390.f_7488[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_25(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_24(&uVar3);
			}
		}
		else
		{
			return func_24(&(Global_23390.f_7488[iParam0 /*16*/]));
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
		
		case 52:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 53:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 55:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 56:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 61:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
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

var func_24(var uParam0)//Position - 0x3E0B
{
	return uParam0;
}

struct<13> func_25(int iParam0)//Position - 0x3E15
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_26(int iParam0)//Position - 0x3E2C
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6463[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23390.f_6463[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_25(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_24(&uVar0);
		}
		else
		{
			return func_24(&(Global_23390.f_6463[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 52)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_27(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x3EA1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_29(14f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_FONT(0);
	func_36();
	if (uParam0->f_531[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_19(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_23(7, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_19(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_23(5, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_19(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_23(6, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, false, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_29(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	func_28(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_28(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x4130
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_FONT(0);
	func_36();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.0013888889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_29(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("ESMINDOLLA" /* GXT: -$~a~ */);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), true);
				fVar1 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(false);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("ESDOLLA" /* GXT: $~a~ */);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, true);
				fVar1 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(false);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.0013888889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, false, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.0013888889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, false, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.0013888889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, false, 0);
			HUD::SET_TEXT_SCALE(1f, func_29(14f));
			break;
	}
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iVar0);
	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE" /* GXT: ~1~% */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM" /* GXT: ~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM" /* GXT: ~1~/~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_29(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA" /* GXT: -$~a~ */);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), true);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA" /* GXT: $~a~ */);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, true);
			}
			break;
		
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 20:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_29(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_29(float fParam0)//Position - 0x44BB
{
	return (fParam0 * 0.025f);
}

float func_30(float fParam0)//Position - 0x44CB
{
	return (fParam0 * 0.0009259259f);
}

void func_31(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x44DB
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_33(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_32(7, iVar0);
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

void func_32(int iParam0, int iParam1)//Position - 0x4638
{
	MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), iParam1);
}

int func_33(int iParam0, int iParam1)//Position - 0x4651
{
	return BitTest(Global_1655612.f_7009[iParam0], iParam1);
}

float func_34(char* sParam0, char* sParam1)//Position - 0x4667
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	return (HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true) / 2f);
}

float func_35(char* sParam0)//Position - 0x4682
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return (HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true) / 2f);
}

void func_36()//Position - 0x4697
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
}

void func_37(char* sParam0)//Position - 0x46BF
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

float func_38()//Position - 0x46CD
{
	float fVar0;
	
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

void func_39(int iParam0)//Position - 0x46E1
{
	Global_78950 = iParam0;
	Global_78951 = iParam0;
}

float func_40(float fParam0)//Position - 0x46F5
{
	return (fParam0 * 0.0013888889f);
}

void func_41(int iParam0)//Position - 0x4705
{
	if (func_43())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_42(0))
		{
			func_435(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

int func_42(int iParam0)//Position - 0x4738
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

bool func_43()//Position - 0x478F
{
	return BitTest(Global_1963795, 19);
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x479E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	}
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_285)
		{
			if (func_220(uParam1, 0, &iLocal_286))
			{
				func_338(&(uParam1->f_666), 9, 0);
				iLocal_285 = 1;
			}
		}
	}
	if (iLocal_267)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !PLAYER::IS_PLAYER_ONLINE())
			{
				uParam1->f_646 = func_211(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_338(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_128(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_124(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					uParam1->f_680 = 0;
					func_338(&(uParam1->f_666), 9, 0);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/))
				{
					iVar0 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/))
				{
					iVar0 = 1;
				}
			}
			if (func_123(&(uParam1->f_72)))
			{
				if (!bLocal_287)
				{
					bLocal_287 = true;
					func_122(&(uParam1->f_509), 0, 0, 1, 1);
					func_121(&(uParam1->f_509), "DARTS_CONT" /* GXT: Continue */, 2, 215, 1, 1, 0);
					func_121(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_121(&(uParam1->f_509), "IB_BACK" /* GXT: Back */, 2, 202, 1, 1, 0);
					func_121(&(uParam1->f_509), "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
					func_118(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_111(uParam1, 0, 0, iLocal_285);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) >= 0.995f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294))
		{
			bLocal_280 = true;
			if (CAM::DOES_CAM_EXIST(iLocal_300))
			{
				CAM::DESTROY_CAM(iLocal_300, false);
				if (!PED::IS_PED_INJURED(iLocal_262[0]) && !PED::IS_PED_INJURED(iLocal_262[1]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262[0]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262[1]);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_262[0], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_262[1], false, false);
				}
			}
			func_110();
		}
		if (func_431(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_278)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_246(&iLocal_262, iVar2);
				}
				else
				{
					func_245(&iLocal_262);
				}
				iLocal_278 = 1;
			}
		}
		if (iVar0 == 1)
		{
			HUD::CLEAR_HELP(true);
			AUDIO::STOP_AUDIO_SCENE(func_422(3));
			if (!PED::IS_PED_INJURED(iLocal_262[0]) && !PED::IS_PED_INJURED(iLocal_262[1]))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_262[0]);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_262[1]);
			}
			func_109(uParam3);
			if (bParam4)
			{
				func_350(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_28 = 1;
			func_429(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_278 = 0;
			iLocal_276 = 0;
			bLocal_280 = false;
			func_106();
			iLocal_285 = 0;
			iLocal_256 = 0;
			uParam1->f_680 = 0;
			iLocal_286 = 0;
			bLocal_287 = false;
			func_98(&(uParam1->f_72), 0);
			func_467();
		}
		else if (iVar0 == 2)
		{
			func_97(uParam3);
			AUDIO::STOP_AUDIO_SCENE(func_422(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_56(func_92(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			HUD::CLEAR_PRINTS();
			*uParam0 = 13;
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_266)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_289 /*26*/], true) };
				func_55(Var3, 0, iLocal_266);
				iLocal_266 = 0;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
			{
				iLocal_289++;
				if (iLocal_289 >= uParam0->f_436)
				{
					iLocal_289 = 0;
				}
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_289 /*26*/], true) };
				func_53(Var3);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
			{
				iLocal_289 = (iLocal_289 - 1);
				if (iLocal_289 < 0)
				{
					iLocal_289 = (uParam0->f_436 - 1);
				}
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_289 /*26*/], true) };
				func_53(Var3);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/)) && bVar1) && (iLocal_285 || !PLAYER::IS_PLAYER_ONLINE()))
		{
			uParam1->f_680 = 1;
			func_122(&(uParam1->f_509), 0, 0, 1, 1);
			func_121(&(uParam1->f_509), "DARTS_CONT" /* GXT: Continue */, 2, 215, 1, 1, 0);
			func_121(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_121(&(uParam1->f_509), "IB_BACK" /* GXT: Back */, 2, 202, 1, 1, 0);
			if (bLocal_287)
			{
				func_121(&(uParam1->f_509), "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
			}
			func_118(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		HUD::CLEAR_HELP(true);
		HUD::CLEAR_PRINTS();
		func_49(uParam3, uParam0->f_454, uParam0->f_429[iLocal_28], uParam0->f_432[iLocal_28], iLocal_149[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar6 = GRAPHICS::GET_ASPECT_RATIO(true);
		if (fVar6 > 2f)
		{
			Var7 = { 1992.2941f, 3047.577f, 46.21517f };
			Var10 = { 0f, 0f, 138.74f };
		}
		else
		{
			Var7 = { 1992.3357f, 3047.9243f, 46.21517f };
			Var10 = { 0f, 0f, 136.74f };
		}
		iVar13 = func_247();
		iLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(Var7, Var10, 2);
		iLocal_300 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_300, iLocal_294, sLocal_374[iVar13], "mini@dartsoutro");
		CAM::SET_CAM_ACTIVE(iLocal_300, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (!PED::IS_PED_INJURED(iLocal_262[0]) && !PED::IS_PED_INJURED(iLocal_262[1]))
		{
			if (uParam0->f_454)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[0], iLocal_294, "mini@dartsoutro", sLocal_366[iVar13], 1000f, -1.5f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[1], iLocal_294, "mini@dartsoutro", sLocal_370[iVar13], 1000f, -1.5f, 0, 0, 1000f, 0);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_361, sLocal_362[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[1], iLocal_294, "mini@dartsoutro", sLocal_366[iVar13], 1000f, -1.5f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_262[0], iLocal_294, "mini@dartsoutro", sLocal_370[iVar13], 1000f, -1.5f, 0, 0, 1000f, 0);
				TASK::TASK_PLAY_ANIM(iLocal_262[1], sLocal_360, sLocal_362[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
			}
		}
		bLocal_280 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = MISC::GET_GAME_TIMER();
		iVar14 = 0;
		while (iVar14 < 2)
		{
			iVar15 = 0;
			while (iVar15 < 3)
			{
				func_251(&(uParam0->f_5[iVar14 /*79*/][iVar15 /*26*/]));
				iVar15++;
			}
			func_250(uParam2, iVar14);
			iVar14++;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - uParam1->f_671) > 400 && func_45(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", true);
		}
		iLocal_267 = 1;
	}
}

int func_45(var uParam0, bool bParam1, int iParam2)//Position - 0x4F62
{
	uParam0->f_12 = iParam2;
	func_48(uParam0);
	func_47(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_570 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
		uParam0->f_1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_566 || uParam0->f_571)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_566)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_566)
	{
		if (uParam0->f_571)
		{
			func_46(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_78951 = 1;
	return 1;
}

void func_46(var uParam0)//Position - 0x5102
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true));
	func_12("ES_HELP_TU" /* GXT: Like */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true));
	func_12("ES_HELP_TD" /* GXT: Dislike */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true));
	func_12("ES_HELP_AB" /* GXT: Don't Vote */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_47(var uParam0)//Position - 0x51C7
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_29(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(uParam0->f_13));
			fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
		}
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_48(var uParam0)//Position - 0x52CF
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

void func_49(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x534E
{
	uParam0->f_565 = 1;
	if (bParam1)
	{
		func_52(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_52(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_51(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_51(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_51(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_51(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_51(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_51(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_50(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_39(1);
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x5420
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_51(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x5466
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_52(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x54D9
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_53(struct<3> Param0)//Position - 0x54FC
{
	struct<3> Var0;
	
	Var0 = { func_54(Param0) };
	if (bLocal_131)
	{
		CAM::SET_CAM_COORD(iLocal_129, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_129, iLocal_128, 500, 1, 1);
		bLocal_131 = false;
	}
	else
	{
		CAM::SET_CAM_COORD(iLocal_128, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_128, iLocal_129, 500, 1, 1);
		bLocal_131 = true;
	}
}

Vector3 func_54(struct<3> Param0)//Position - 0x554C
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var3 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var3 };
	return Var0;
}

void func_55(struct<3> Param0, bool bParam3, bool bParam4)//Position - 0x5578
{
	struct<3> Var0;
	
	Var0 = { func_54(Param0) };
	if (bParam3)
	{
		CAM::SET_CAM_COORD(iLocal_128, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_128, iLocal_127, 1500, 1, 1);
		CAM::SET_CAM_ACTIVE(iLocal_127, false);
		CAM::SET_CAM_COORD(iLocal_129, Var0);
		bLocal_131 = true;
	}
	else if (bParam4)
	{
		CAM::SET_CAM_COORD(iLocal_128, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_128, iLocal_120, 2000, 1, 1);
		bLocal_131 = true;
	}
	else
	{
		if (bLocal_131)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_127, iLocal_128, 1500, 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_127, iLocal_129, 1500, 1, 1);
		}
		CAM::SET_CAM_ACTIVE(iLocal_128, false);
	}
}

void func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x560A
{
	int iVar0;
	int iVar1;
	
	if (func_91(iParam0) == 3)
	{
		return;
	}
	if (func_91(iParam0) == 4)
	{
		return;
	}
	func_57(func_91(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
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
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
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

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x56DC
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_90();
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
					func_89(99, 1);
					func_88(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_88(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_88(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_72(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_69(5))
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
							func_88(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_69(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_88(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_88(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_69(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_68(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_89(95, iParam3);
					break;
				
				case 1:
					func_89(97, iParam3);
					break;
				
				case 2:
					func_89(96, iParam3);
					break;
			}
			func_89(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_60(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_60(bVar1);
	}
	iVar5 = (Global_60659[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60659[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60659[iVar2] = 2147483647;
				}
				else
				{
					Global_60659[iVar2] = (Global_60659[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_88(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_88(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_88(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60659[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60659[iVar2];
			Global_60659[iVar2] = (Global_60659[iVar2] - iParam3);
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
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113810.f_20567.f_233[iVar2 /*69*/]++;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_59(iParam0);
	if (Global_43377 == 15)
	{
		func_58(0);
	}
	return 1;
}

void func_58(bool bParam0)//Position - 0x5CDB
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
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60667[iVar0 /*3*/][0] = Global_113810.f_20567[iVar0];
		Global_60667.f_31[iVar0 /*3*/][0] = Global_113810.f_20567.f_11[iVar0];
		Global_60667.f_62[iVar0 /*3*/][0] = Global_113810.f_20567.f_22[iVar0];
		Global_60667.f_93[iVar0 /*3*/][0] = Global_113810.f_20567.f_33[iVar0];
		Global_60667.f_124[iVar0 /*3*/][0] = Global_113810.f_20567.f_44[iVar0];
		Global_60667.f_155[iVar0 /*3*/][0] = Global_113810.f_20567.f_55[iVar0];
		Global_60667.f_186[iVar0 /*3*/][0] = Global_113810.f_20567.f_66[iVar0];
		Global_60667.f_217[iVar0 /*3*/][0] = Global_113810.f_20567.f_77[iVar0];
		Global_60667.f_248[iVar0 /*3*/][0] = Global_113810.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_60667[iVar0 /*3*/][1] = Global_113810.f_20567[iVar0];
			Global_60667.f_31[iVar0 /*3*/][1] = Global_113810.f_20567.f_11[iVar0];
			Global_60667.f_62[iVar0 /*3*/][1] = Global_113810.f_20567.f_22[iVar0];
			Global_60667.f_93[iVar0 /*3*/][1] = Global_113810.f_20567.f_33[iVar0];
			Global_60667.f_124[iVar0 /*3*/][1] = Global_113810.f_20567.f_44[iVar0];
			Global_60667.f_155[iVar0 /*3*/][1] = Global_113810.f_20567.f_55[iVar0];
			Global_60667.f_186[iVar0 /*3*/][1] = Global_113810.f_20567.f_66[iVar0];
			Global_60667.f_217[iVar0 /*3*/][1] = Global_113810.f_20567.f_77[iVar0];
			Global_60667.f_248[iVar0 /*3*/][1] = Global_113810.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_59(int iParam0)//Position - 0x5F5D
{
	int iVar0;
	
	iVar0 = Global_60659[iParam0];
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

void func_60(bool bParam0)//Position - 0x5FB7
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_67(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_67(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_67(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_67(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_63(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_63(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_63(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_63(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_63(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_63(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113810.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113810.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_62() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_62() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_61(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_61(bool bParam0)//Position - 0x6131
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

int func_62()//Position - 0x6234
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_63(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6241
{
	int iVar0;
	
	iVar0 = func_64(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_64(int iParam0, var uParam1)//Position - 0x6264
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_65(uParam1));
}

int func_65(var uParam0)//Position - 0x6279
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_66();
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

int func_66()//Position - 0x62AD
{
	return Global_1574918;
}

void func_67(int iParam0, bool bParam1, int iParam2)//Position - 0x62B9
{
	if (iParam2 == -1)
	{
		iParam2 = func_66();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_68(int iParam0)//Position - 0x62D7
{
	func_89(93, iParam0);
	func_89(29, iParam0);
	func_89(30, iParam0);
}

int func_69(int iParam0)//Position - 0x62F7
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
		return func_71(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_71(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_71(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_71(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_70(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_70(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_70(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_70(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_70(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_70(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113810.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_62() /*5568*/].f_681.f_10, iParam0);
}

int func_70(int iParam0, int iParam1)//Position - 0x6497
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_64(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)//Position - 0x64C6
{
	if (iParam1 == -1)
	{
		iParam1 = func_66();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_72(bool bParam0)//Position - 0x64E2
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
		func_87(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_73(27, 1);
	return 1;
}

int func_73(int iParam0, int iParam1)//Position - 0x6599
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_74(iParam0, iParam1);
}

int func_74(int iParam0, int iParam1)//Position - 0x65B4
{
	if (func_86(14) && !func_85(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32534 != 0 && !Global_78689)
	{
		return 0;
	}
	if (func_84(&Global_4542602))
	{
		if (func_82(&Global_4542602, iParam0))
		{
			return 0;
		}
		if (func_75(&Global_4542602, iParam0))
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

int func_75(var uParam0, int iParam1)//Position - 0x6651
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_86(14) && !func_85(iParam1))
	{
		return 0;
	}
	if (func_82(uParam0, iParam1))
	{
		return 0;
	}
	if (func_81(uParam0) < 0f)
	{
		func_80(uParam0, 0);
	}
	func_78(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_76(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_76(var uParam0, int iParam1)//Position - 0x6702
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_86(14) && !func_85(iParam1))
	{
		return 0;
	}
	if (func_82(uParam0, iParam1))
	{
		return 0;
	}
	if (func_81(uParam0) < 0f)
	{
		func_80(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_77(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_77(var uParam0, int iParam1)//Position - 0x677D
{
	return (*uParam0)[iParam1] == 78;
}

void func_78(var uParam0)//Position - 0x678E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_79(uParam0, iVar0);
		iVar0++;
	}
	func_80(uParam0, (Global_4542601 - 0.5f));
}

void func_79(var uParam0, int iParam1)//Position - 0x67C2
{
	(*uParam0)[iParam1] = 78;
}

void func_80(var uParam0, float fParam1)//Position - 0x67D2
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

float func_81(var uParam0)//Position - 0x67EF
{
	return uParam0->f_80;
}

bool func_82(var uParam0, int iParam1)//Position - 0x67FB
{
	return func_83(uParam0, iParam1) != -1;
}

int func_83(var uParam0, int iParam1)//Position - 0x680D
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

bool func_84(var uParam0)//Position - 0x683A
{
	return uParam0->f_79 == 1;
}

int func_85(int iParam0)//Position - 0x6848
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

bool func_86(int iParam0)//Position - 0x6898
{
	return Global_43377 == iParam0;
}

int func_87(int iParam0, int iParam1)//Position - 0x68A6
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

void func_88(int iParam0, int iParam1)//Position - 0x68F7
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_89(int iParam0, int iParam1)//Position - 0x691A
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

void func_90()//Position - 0x6977
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[0] == iVar0)
		{
			Global_60659[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[1] == iVar0)
		{
			Global_60659[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[2] == iVar0)
		{
			Global_60659[2] = iVar0;
		}
	}
}

int func_91(int iParam0)//Position - 0x69EC
{
	return Global_2058[iParam0 /*29*/].f_17;
}

int func_92()//Position - 0x69FD
{
	func_93();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_93()//Position - 0x6A16
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_95(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_508(PLAYER::PLAYER_PED_ID());
			if (func_94(iVar0) && (!func_86(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_94(Global_113810.f_2366.f_539.f_4321))
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

bool func_94(int iParam0)//Position - 0x6B13
{
	return iParam0 < 3;
}

int func_95(int iParam0)//Position - 0x6B1F
{
	if (func_94(iParam0))
	{
		return func_96(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_96(int iParam0)//Position - 0x6B44
{
	return Global_2058[iParam0 /*29*/];
}

void func_97(var uParam0)//Position - 0x6B53
{
	if (uParam0->f_565 || uParam0->f_576 <= uParam0->f_562)
	{
		uParam0->f_565 = 0;
		uParam0->f_562 = (uParam0->f_576 - 1);
	}
}

void func_98(var uParam0, int iParam1)//Position - 0x6B86
{
	if (uParam0->f_4 != 0)
	{
		func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_104(uParam0);
		func_103(uParam0);
		func_102(&Global_2101867);
	}
	if (Global_2097536.f_2708 != 0 || Global_2097536.f_3184)
	{
		func_100();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_99(&(Global_2103068.f_49));
	}
	Global_2794162.f_4069 = 0;
}

void func_99(var uParam0)//Position - 0x6C31
{
	uParam0->f_1 = 0;
}

void func_100()//Position - 0x6C3E
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_2097536[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_2097536.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2708 = 0;
	Global_2097536.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_2097536.f_2710[iVar0] = 0;
		StringCopy(&(Global_2097536.f_2717[iVar0 /*6*/]), "", 24);
		Global_2097536.f_2754[iVar0] = 0;
		Global_2097536.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2768 = 0;
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2771[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2779 = 0;
	func_101(&(Global_2097536.f_2780));
	func_99(&(Global_2097536.f_2823));
	Global_2097536.f_2825 = -1;
	Global_2097536.f_2826 = 0;
	func_99(&(Global_2097536.f_2827));
	Global_2097536.f_2829 = 0;
	func_99(&(Global_2097536.f_2830));
	Global_2097536.f_2832 = 0;
	Global_2097536.f_2780.f_28 = 0;
	Global_2097536.f_2780.f_27 = 0;
	Global_2097536.f_3184 = 0;
}

void func_101(var uParam0)//Position - 0x6DAA
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_102(var uParam0)//Position - 0x6E02
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar13 /*100*/])->f_16), "", 64);
		(uParam0[iVar13 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_58 = 0;
		(uParam0[iVar13 /*100*/])->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			(uParam0[iVar13 /*100*/])->f_60[iVar14] = 0f;
			(uParam0[iVar13 /*100*/])->f_67[iVar14] = 0;
			iVar14++;
		}
		(uParam0[iVar13 /*100*/])->f_75 = 0;
		(uParam0[iVar13 /*100*/])->f_74 = 0;
		(uParam0[iVar13 /*100*/])->f_76 = 0;
		(uParam0[iVar13 /*100*/])->f_77 = 0;
		(uParam0[iVar13 /*100*/])->f_78 = 0;
		(uParam0[iVar13 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar13 /*100*/])->f_80), "", 16);
		iVar13++;
	}
	func_99(&(Global_2097536.f_2830));
}

void func_103(var uParam0)//Position - 0x6EE4
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_99(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_104(var uParam0)//Position - 0x6F6C
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_105(var uParam0, var uParam1, var uParam2)//Position - 0x703A
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_2097152 = 0;
	func_99(&(Global_2097152.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

void func_106()//Position - 0x7066
{
	struct<68> Var0;
	
	Global_2097157 = 0;
	Global_2097157.f_1 = 0;
	Global_2097157.f_2 = 0;
	Global_2097157.f_3 = 0;
	Global_2097157.f_4 = 0;
	func_108(&(Global_2097157.f_73));
	func_108(&(Global_2097157.f_142));
	func_108(&(Global_2097157.f_211));
	func_108(&(Global_2097157.f_280));
	StringCopy(&(Global_2097157.f_349), "", 24);
	StringCopy(&(Global_2097157.f_355), "", 24);
	func_107(&(Global_2097157.f_361));
	Global_2097157.f_374 = -1;
	Global_2097532 = 0;
	Global_2097533 = 0;
	Var0.f_2.f_1 = 4;
	Global_2097157.f_5 = { Var0 };
}

void func_107(var uParam0)//Position - 0x710A
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

void func_108(var uParam0)//Position - 0x7152
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_109(var uParam0)//Position - 0x718D
{
	func_48(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_110()//Position - 0x71B7
{
	CAM::SET_CAM_ACTIVE(iLocal_124, true);
}

int func_111(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x71C6
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_39(1);
			func_122(&(uParam0->f_509), 0, 0, 1, 1);
			func_121(&(uParam0->f_509), "DARTS_CONT" /* GXT: Continue */, 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_121(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_121(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !PLAYER::IS_PLAYER_ONLINE())
			{
				func_121(&(uParam0->f_509), "HUD_LBD_LBD" /* GXT: Leaderboard */, 2, 211, 1, 1, 0);
			}
			func_118(&(uParam0->f_509), 1);
			func_338(&(uParam0->f_666), 8, 0);
			func_338(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_114(func_117(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_116(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
					func_114(func_117(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_116(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_114(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				func_418(&(uParam0->f_57), 0, 0);
			}
			func_124(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_671) > 900)
			{
				if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					func_338(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					func_113();
					func_112();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			return 2;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			func_338(&(uParam0->f_666), 9, 0);
			func_338(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_112()//Position - 0x740A
{
	if (Global_2672524.f_2514[0 /*80*/].f_2 != 0)
	{
		Global_2672524.f_2514[0 /*80*/].f_2 = 5;
	}
}

void func_113()//Position - 0x742F
{
	Global_32428 = 1;
}

void func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x743B
{
	int iVar0;
	int iVar1;
	
	if (func_115(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_33(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_32(3, iVar0);
		Global_1655612.f_2839[iVar0] = iParam0;
		StringCopy(&(Global_1655612.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655612.f_2839.f_183[iVar0] = iParam3;
		Global_1655612.f_2839.f_172[iVar0] = iParam2;
		Global_1655612.f_2839.f_205[iVar0] = iParam4;
		Global_1655612.f_2839.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1655612.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1655612.f_2839.f_420[iVar0] = iParam7;
		Global_1655612.f_2839.f_453[iVar0] = iParam8;
		Global_1655612.f_2839.f_431[iVar0] = iParam9;
		Global_1655612.f_2839.f_442[iVar0] = iParam10;
		Global_1655612.f_2839.f_464[iVar0] = iParam11;
		Global_1655612.f_2839.f_475[iVar0] = iParam12;
		Global_1655612.f_2839.f_486[iVar0] = iParam13;
		Global_1655612.f_2839.f_497[iVar0] = iParam14;
	}
}

int func_115(char* sParam0)//Position - 0x757D
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

char* func_116(bool bParam0, char* sParam1, char* sParam2)//Position - 0x75B7
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_117(bool bParam0, int iParam1, int iParam2)//Position - 0x75CE
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_118(var uParam0, bool bParam1)//Position - 0x75E5
{
	if (bParam1)
	{
		func_120(&(uParam0->f_1), 1024);
	}
	else
	{
		func_119(&(uParam0->f_1), 1024);
	}
}

void func_119(var uParam0, int iParam1)//Position - 0x760B
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_120(var uParam0, int iParam1)//Position - 0x7620
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_121(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7631
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x76FA
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_120(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_120(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_120(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_120(&(uParam0->f_1), 8192);
	}
}

int func_123(var uParam0)//Position - 0x7774
{
	if ((BitTest(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_124(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x77A8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_127(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_126(uParam0->f_1, 256) || (func_126(uParam0->f_1, 8192) && PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_126(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/);
					break;
				
				case 2:
					bVar4 = !PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						bVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_13(sVar3);
						}
						bVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_126(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_125(bParam4, func_125(func_126(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_120(&(uParam0->f_1), 256);
		func_119(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

float func_125(bool bParam0, float fParam1, float fParam2)//Position - 0x7A62
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_126(var uParam0, int iParam1)//Position - 0x7A79
{
	return (uParam0 && iParam1) != 0;
}

int func_127(var uParam0)//Position - 0x7A88
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_120(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_128(var uParam0, var uParam1)//Position - 0x7AAF
{
	func_129(uParam1, uParam0);
}

void func_129(var uParam0, var uParam1)//Position - 0x7ABF
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	struct<8> Var9;
	char[] cVar25[8];
	int iVar27[3];
	int iVar31;
	struct<13> Var32;
	var uVar45;
	struct<3> Var51;
	struct<3> Var57;
	bool bVar63;
	
	func_210(&(Global_2103068.f_49), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_209();
	func_41(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_207(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_206(1);
	func_205(1);
	if (!func_202())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!BitTest(uParam1->f_42, 3))
	{
		*uParam0 = func_201();
		MISC::SET_BIT(&(uParam1->f_42), 3);
	}
	Var32 = { func_25(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) || Global_2097536.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_2097536.f_2829 != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
			{
				if (Global_2097536.f_2829 != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 3;
				}
			}
			else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			{
				if (Global_2097536.f_2829 != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 4;
				}
			}
			else if (Global_2097536.f_2832 != 0)
			{
				if (Global_2097536.f_2829 != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 5;
				}
			}
			if (!BitTest(uParam1->f_42, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_200(*uParam0, Global_2097536.f_2780);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
				{
					if (!func_199(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							Var9 = { Global_2097536.f_2780.f_9 };
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &Var9, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						StringCopy(&Var9, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var9, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					func_197(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
				iVar31 = 0;
				MISC::SET_BIT(&iVar31, 4);
				func_196(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				MISC::SET_BIT(&iVar31, 5);
				func_196(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				MISC::SET_BIT(&iVar31, 6);
				func_196(*uParam0, &iVar6, iVar31, 1, 1);
				MISC::SET_BIT(&(uParam1->f_42), 1);
				func_195(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				HUD::CLEAR_HELP(true);
			}
			else
			{
				func_195(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_2097536.f_2829 = 1;
			}
			if (!func_158(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!BitTest(uParam1->f_42, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_200(*uParam0, Global_2097536.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_199(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var9 = { Global_2097536.f_2780.f_9 };
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &Var9, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var9, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var9, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_197(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					MISC::SET_BIT(&(uParam1->f_42), 0);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_2097536.f_2825 == -1)
				{
					StringCopy(&Var51, "SC_LB_DL0" /* GXT: Downloading */, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 4);
							func_196(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 5);
							func_196(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 6);
							func_196(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 7);
						func_157(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_2097536.f_2825 = 1;
					func_99(&(Global_2097536.f_2823));
				}
				else if (func_155(&(Global_2097536.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_2097536.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 4);
							func_196(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 5);
							func_196(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							MISC::SET_BIT(&iVar31, 6);
							func_196(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 7);
						func_157(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_2097536.f_2825++;
					if (Global_2097536.f_2825 > 3)
					{
						Global_2097536.f_2825 = 0;
					}
					func_99(&(Global_2097536.f_2823));
				}
				func_195(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 0);
				if (!BitTest(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_200(*uParam0, Global_2097536.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_199(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var9 = { Global_2097536.f_2780.f_9 };
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &Var9, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var9, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var9, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &Var9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_197(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					if (!BitTest(uParam1->f_42, 6))
					{
						func_102(&Global_2101867);
						func_151(uParam1, &Global_2101867);
						func_150(uParam1, &Global_2101867);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && func_199(uParam1->f_44)) && Global_2097536.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_2101867[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									MISC::SET_BIT(&iVar31, 4);
									func_196(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									MISC::SET_BIT(&iVar31, 5);
									if ((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && func_199(uParam1->f_44)) && Global_2097536.f_2775[1] != -1))
									{
										func_196(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_196(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									MISC::SET_BIT(&iVar31, 6);
									if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
									{
										bVar63 = true;
									}
									else if (!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
									{
										bVar63 = true;
									}
									if ((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && func_199(uParam1->f_44)) && Global_2097536.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_196(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_196(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_149(Global_2101867[iVar0 /*100*/].f_32))
							{
								if (func_199(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar45);
									if (!Global_2101867[iVar0 /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_2097536.f_2780.f_27)
									{
										if (func_148(&(Global_2101867[iVar0 /*100*/].f_32), &Var32))
										{
											MISC::SET_BIT(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												MISC::SET_BIT(&iVar31, 3);
											}
										}
									}
									if (func_199(uParam1->f_44))
									{
										Var9 = { Global_2101867[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2101867[iVar0 /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_2101867[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var9, "/", 64);
											StringConCat(&Var9, &(Global_2101867[iVar0 /*100*/].f_84), 64);
										}
										func_147(*uParam0, iVar6, iVar31, Global_2101867[iVar0 /*100*/].f_59, &Var9, &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_147(*uParam0, iVar6, iVar31, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_2097536.f_2708)
									{
										bVar8 = false;
										if (BitTest(Global_2097536.f_2770, bVar1))
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2754[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_138(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
											}
											else
											{
												func_138(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2761[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_135(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												func_135(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									func_134();
									uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_2101867[iVar0 /*100*/].f_59 > 2)
										{
											MISC::SET_BIT(&iVar31, 2);
											MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_133(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 4);
						func_196(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 5);
						func_196(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						MISC::SET_BIT(&iVar31, 6);
						func_196(*uParam0, &iVar6, iVar31, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_42), 1);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
					func_195(*uParam0);
					HUD::CLEAR_HELP(true);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_133(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_195(*uParam0);
					func_130(uParam0, uParam1);
				}
			}
		}
	}
}

void func_130(var uParam0, var uParam1)//Position - 0x8A87
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
		{
			PAD::SET_CONTROL_VALUE_NEXT_FRAME(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, 1f);
		}
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
		{
			PAD::SET_CONTROL_VALUE_NEXT_FRAME(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, 1f);
		}
		if (HUD::GET_MOUSE_EVENT(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					bVar0 = true;
				}
				else
				{
					PAD::SET_CONTROL_VALUE_NEXT_FRAME(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/, 1f);
				}
			}
		}
	}
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		func_132(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!BitTest(uParam1->f_246, 0))
		{
			if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || iVar6 < -100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				MISC::SET_BIT(&(uParam1->f_246), 0);
				func_99(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_131(uParam1, 188))
		{
			MISC::CLEAR_BIT(&(uParam1->f_246), 0);
		}
		if (!BitTest(uParam1->f_246, 1))
		{
			if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || iVar6 > 100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1++;
				MISC::SET_BIT(&(uParam1->f_246), 1);
				func_99(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_131(uParam1, 187))
		{
			MISC::CLEAR_BIT(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!BitTest(uParam1->f_246, 3))
	{
		if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			MISC::SET_BIT(&(uParam1->f_246), 3);
			func_99(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_131(uParam1, 204))
	{
		MISC::CLEAR_BIT(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				MISC::CLEAR_BIT(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_133(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_133(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			MISC::CLEAR_BIT(&(uParam1->f_42), 2);
		}
		if (func_149(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!BitTest(uParam1->f_246, 2))
			{
				if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/))
				{
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_MP_SOUNDSET", true);
						MISC::SET_BIT(&(uParam1->f_246), 2);
						NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/))
			{
				MISC::CLEAR_BIT(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_131(var uParam0, int iParam1)//Position - 0x8E1D
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_132(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_155(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iParam1)) || func_155(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_132(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x8EBC
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

void func_133(int iParam0, int iParam1, int iParam2)//Position - 0x8F91
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_134()//Position - 0x8FB4
{
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_135(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, float fParam44, bool bParam45)//Position - 0x8FC0
{
	switch (Param0.f_29[bParam43])
	{
		case 4:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam44, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::FLOOR(fParam44));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 18 || Param0.f_29[bParam43] == 20)
				{
					fParam44 = (fParam44 * -1f);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_29[bParam43] == 19 || Param0.f_29[bParam43] == 20)
					{
						fParam44 = func_137(fParam44);
					}
					else
					{
						fParam44 = func_136(fParam44);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam44, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

float func_136(float fParam0)//Position - 0x90E2
{
	return (fParam0 / 0.3048f);
}

float func_137(float fParam0)//Position - 0x90F2
{
	return (fParam0 / 1609.344f);
}

void func_138(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, int iParam44, bool bParam45, bool bParam46)//Position - 0x9102
{
	struct<4> Var0;
	
	if (iParam44 == 2147483647 || iParam44 == -2147483647)
	{
		bParam45 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[bParam43])
	{
		case 5:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam44);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(-iParam44);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 11 && iParam44 < 0)
				{
					iParam44 = (iParam44 * -1);
				}
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_29[bParam43] == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_29[bParam43] == 10)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam44))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST" /* GXT: ~a~ (custom) */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam44));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam44))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam44));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 8:
			if (func_146(iParam44) != 0)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_143(func_146(iParam44), 0));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 14 || Param0.f_29[bParam43] == 16)
				{
					iParam44 = (iParam44 * -1);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_29[bParam43] == 15 || Param0.f_29[bParam43] == 16)
					{
						iParam44 = SYSTEM::FLOOR(func_137(SYSTEM::TO_FLOAT(iParam44)));
					}
					else
					{
						iParam44 = SYSTEM::FLOOR(func_136(SYSTEM::TO_FLOAT(iParam44)));
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam44);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 21:
			if (iParam44 > 20)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				Var0 = { func_142(iParam44) };
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var0);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 22:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(func_139(iParam44));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

int func_139(int iParam0)//Position - 0x950A
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	iVar0 = func_141(199);
	if (iParam0 < 100)
	{
		return 1;
	}
	else if (iParam0 > iVar0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam0) - SYSTEM::TO_FLOAT(iVar0));
		iVar2 = SYSTEM::FLOOR((fVar1 / SYSTEM::TO_FLOAT(Global_262145.f_31296 /* Tunable: 1335277880 */)));
		return (199 + iVar2);
	}
	fVar3 = (SYSTEM::TO_FLOAT(Global_262145.f_31295 /* Tunable: -1131555628 */) / 2f);
	fVar4 = (-(fVar3 * 3f) + fVar3);
	fVar5 = fVar3;
	fVar6 = ((-(fVar3 * 3f) + fVar4) + 100f);
	fVar7 = ((-3f * fVar4) - 100f);
	fVar7 = (IntToFloat(iParam0) - fVar7);
	return SYSTEM::FLOOR(func_140(-fVar5, -fVar6, fVar7, 1));
}

float func_140(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x95B0
{
	if (bParam3)
	{
		return ((-fParam1 - SYSTEM::SQRT(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + SYSTEM::SQRT(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_141(int iParam0)//Position - 0x95F4
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (SYSTEM::TO_FLOAT(Global_262145.f_31295 /* Tunable: -1131555628 */) / 2f);
	return SYSTEM::ROUND((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

struct<4> func_142(int iParam0)//Position - 0x9635
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_143(int iParam0, bool bParam1)//Position - 0x966E
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID" /* GXT: Invalid */;
			}
			break;
		
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
			{
				return "WTU_UNARMED" /* GXT: UNARMED */;
			}
			else
			{
				return "WT_UNARMED" /* GXT: Unarmed */;
			}
			break;
		
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_CBT" /* GXT: COMBAT PISTOL */;
			}
			else
			{
				return "WT_PIST_CBT" /* GXT: Combat Pistol */;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_AP" /* GXT: AP PISTOL */;
			}
			else
			{
				return "WT_PIST_AP" /* GXT: AP Pistol */;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			if (bParam1)
			{
				return "WTU_SMG" /* GXT: SMG */;
			}
			else
			{
				return "WT_SMG" /* GXT: SMG */;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
			{
				return "WTU_SMG_MCR" /* GXT: MICRO SMG */;
			}
			else
			{
				return "WT_SMG_MCR" /* GXT: Micro SMG */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL" /* GXT: ASSAULT RIFLE */;
			}
			else
			{
				return "WT_RIFLE_ASL" /* GXT: Assault Rifle */;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN" /* GXT: CARBINE RIFLE */;
			}
			else
			{
				return "WT_RIFLE_CBN" /* GXT: Carbine Rifle */;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV" /* GXT: ADVANCED RIFLE */;
			}
			else
			{
				return "WT_RIFLE_ADV" /* GXT: Advanced Rifle */;
			}
			break;
		
		case joaat("WEAPON_MG"):
			if (bParam1)
			{
				return "WTU_MG" /* GXT: MG */;
			}
			else
			{
				return "WT_MG" /* GXT: MG */;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
			{
				return "WTU_MG_CBT" /* GXT: COMBAT MG */;
			}
			else
			{
				return "WT_MG_CBT" /* GXT: Combat MG */;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_PMP" /* GXT: PUMP SHOTGUN */;
			}
			else
			{
				return "WT_SG_PMP" /* GXT: Pump Shotgun */;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_SOF" /* GXT: SAWED-OFF SHOTGUN */;
			}
			else
			{
				return "WT_SG_SOF" /* GXT: Sawed-Off Shotgun */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_ASL" /* GXT: ASSAULT SHOTGUN */;
			}
			else
			{
				return "WT_SG_ASL" /* GXT: Assault Shotgun */;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY" /* GXT: HEAVY SNIPER */;
			}
			else
			{
				return "WT_SNIP_HVY" /* GXT: Heavy Sniper */;
			}
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT" /* GXT: REMOTE SNIPER */;
			}
			else
			{
				return "WT_SNIP_RMT" /* GXT: Remote Sniper */;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF" /* GXT: SNIPER RIFLE */;
			}
			else
			{
				return "WT_SNIP_RIF" /* GXT: Sniper Rifle */;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
			{
				return "WTU_GL" /* GXT: GRENADE LAUNCHER */;
			}
			else
			{
				return "WT_GL" /* GXT: Grenade Launcher */;
			}
			break;
		
		case joaat("WEAPON_RPG"):
			if (bParam1)
			{
				return "WTU_RPG" /* GXT: RPG */;
			}
			else
			{
				return "WT_RPG" /* GXT: RPG */;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
			{
				return "WTU_MINIGUN" /* GXT: MINIGUN */;
			}
			else
			{
				return "WT_MINIGUN" /* GXT: Minigun */;
			}
			break;
		
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE" /* GXT: GRENADE */;
			}
			else
			{
				return "WT_GNADE" /* GXT: Grenade */;
			}
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK" /* GXT: TEAR GAS */;
			}
			else
			{
				return "WT_GNADE_SMK" /* GXT: Tear Gas */;
			}
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
			{
				return "WTU_GNADE_STK" /* GXT: STICKY BOMB */;
			}
			else
			{
				return "WT_GNADE_STK" /* GXT: Sticky Bomb */;
			}
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
			{
				return "WTU_MOLOTOV" /* GXT: MOLOTOV */;
			}
			else
			{
				return "WT_MOLOTOV" /* GXT: Molotov */;
			}
			break;
		
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
			{
				return "WTU_STUN" /* GXT: STUN GUN */;
			}
			else
			{
				return "WT_STUN" /* GXT: Stun Gun */;
			}
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
			{
				return "WTU_PETROL" /* GXT: JERRY CAN */;
			}
			else
			{
				return "WT_PETROL" /* GXT: Jerry Can */;
			}
			break;
		
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
			{
				return "WTU_V_TANK" /* GXT: TANK CANNON */;
			}
			else
			{
				return "WT_V_TANK" /* GXT: Tank Cannon */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT" /* GXT: ROCKETS */;
			}
			else
			{
				return "WT_V_SPACERKT" /* GXT: Rockets */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_V_PLRLSR" /* GXT: Laser */;
			}
			break;
		
		case joaat("OBJECT"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT" /* GXT: Object */;
			}
			break;
		
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
			{
				return "WTU_PARA" /* GXT: PARACHUTE */;
			}
			else
			{
				return "WT_PARA" /* GXT: Parachute */;
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG" /* GXT: ROCKET */;
			}
			else
			{
				return "WT_A_RPG" /* GXT: Rocket */;
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK" /* GXT: TANK */;
			}
			else
			{
				return "WT_A_TANK" /* GXT: Tank */;
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT" /* GXT: ROCKET */;
			}
			else
			{
				return "WT_A_SPACERKT" /* GXT: Rocket */;
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_A_PLRLSR" /* GXT: Laser */;
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_A_ENMYLSR" /* GXT: Laser */;
			}
			break;
		
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
			{
				return "WTU_KNIFE" /* GXT: KNIFE */;
			}
			else
			{
				return "WT_KNIFE" /* GXT: Knife */;
			}
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
			{
				return "WTU_NGTSTK" /* GXT: NIGHTSTICK */;
			}
			else
			{
				return "WT_NGTSTK" /* GXT: Nightstick */;
			}
			break;
		
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
			{
				return "WTU_HAMMER" /* GXT: HAMMER */;
			}
			else
			{
				return "WT_HAMMER" /* GXT: Hammer */;
			}
			break;
		
		case joaat("WEAPON_BAT"):
			if (bParam1)
			{
				return "WTU_BAT" /* GXT: BASEBALL BAT */;
			}
			else
			{
				return "WT_BAT" /* GXT: Baseball Bat */;
			}
			break;
		
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
			{
				return "WTU_CROWBAR" /* GXT: CROWBAR */;
			}
			else
			{
				return "WT_CROWBAR" /* GXT: Crowbar */;
			}
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB" /* GXT: GOLF CLUB */;
			}
			else
			{
				return "WT_GOLFCLUB" /* GXT: Golf Club */;
			}
			break;
		
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
			{
				return "WTU_SMG_ASL" /* GXT: ASSAULT SMG */;
			}
			else
			{
				return "WT_SMG_ASL" /* GXT: Assault SMG */;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_BLP" /* GXT: BULLPUP SHOTGUN */;
			}
			else
			{
				return "WT_SG_BLP" /* GXT: Bullpup Shotgun */;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
			{
				return "WTU_PIST_50" /* GXT: PISTOL .50 */;
			}
			else
			{
				return "WT_PIST_50" /* GXT: Pistol .50 */;
			}
			break;
		
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
			{
				return "WTU_BOTTLE" /* GXT: BOTTLE */;
			}
			else
			{
				return "WT_BOTTLE" /* GXT: Bottle */;
			}
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
			{
				return "WTU_GUSENBERG" /* GXT: GUSENBERG SWEEPER */;
			}
			else
			{
				return "WT_GUSENBERG" /* GXT: Gusenberg Sweeper */;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL" /* GXT: SNS PISTOL */;
			}
			else
			{
				return "WT_SNSPISTOL" /* GXT: SNS Pistol */;
			}
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			if (bParam1)
			{
				return "WTU_VPISTOL" /* GXT: VINTAGE PISTOL */;
			}
			else
			{
				return "WT_VPISTOL" /* GXT: Vintage Pistol */;
			}
			break;
		
		case joaat("WEAPON_DAGGER"):
			if (bParam1)
			{
				return "WTU_DAGGER" /* GXT: ANTIQUE CAVALRY DAGGER */;
			}
			else
			{
				return "WT_DAGGER" /* GXT: Antique Cavalry Dagger */;
			}
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			if (bParam1)
			{
				return "WTU_FLAREGUN" /* GXT: FLARE GUN */;
			}
			else
			{
				return "WT_FLAREGUN" /* GXT: Flare Gun */;
			}
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL" /* GXT: HEAVY PISTOL */;
			}
			else
			{
				return "WT_HEAVYPSTL" /* GXT: Heavy Pistol */;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN" /* GXT: SPECIAL CARBINE */;
			}
			else
			{
				return "WT_RIFLE_SCBN" /* GXT: Special Carbine */;
			}
			break;
		
		case joaat("WEAPON_MUSKET"):
			if (bParam1)
			{
				return "WTU_MUSKET" /* GXT: MUSKET */;
			}
			else
			{
				return "WT_MUSKET" /* GXT: Musket */;
			}
			break;
		
		case joaat("WEAPON_FIREWORK"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR" /* GXT: FIREWORK LAUNCHER */;
			}
			else
			{
				return "WT_FWRKLNCHR" /* GXT: Firework Launcher */;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (bParam1)
			{
				return "WTU_MKRIFLE" /* GXT: MARKSMAN RIFLE */;
			}
			else
			{
				return "WT_MKRIFLE" /* GXT: Marksman Rifle */;
			}
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			if (bParam1)
			{
				return "WTU_HVYSHOT" /* GXT: HEAVY SHOTGUN */;
			}
			else
			{
				return "WT_HVYSHOT" /* GXT: Heavy Shotgun */;
			}
			break;
		
		case joaat("WEAPON_PROXMINE"):
			if (bParam1)
			{
				return "WTU_PRXMINE" /* GXT: PROXIMITY MINE */;
			}
			else
			{
				return "WT_PRXMINE" /* GXT: Proximity Mine */;
			}
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			if (bParam1)
			{
				return "WTU_HOMLNCH" /* GXT: HOMING LAUNCHER */;
			}
			else
			{
				return "WT_HOMLNCH" /* GXT: Homing Launcher */;
			}
			break;
		
		case joaat("WEAPON_HATCHET"):
			if (bParam1)
			{
				return "WTU_HATCHET" /* GXT: HATCHET */;
			}
			else
			{
				return "WT_HATCHET" /* GXT: Hatchet */;
			}
			break;
		
		case joaat("WEAPON_RAILGUN"):
			if (bParam1)
			{
				return "WTU_RAILGUN" /* GXT: RAILGUN */;
			}
			else
			{
				return "WT_RAILGUN" /* GXT: Railgun */;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			if (bParam1)
			{
				return "WTU_COMBATPDW" /* GXT: COMBAT PDW */;
			}
			else
			{
				return "WT_COMBATPDW" /* GXT: Combat PDW */;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			if (bParam1)
			{
				return "WTU_KNUCKLE" /* GXT: KNUCKLE DUSTER */;
			}
			else
			{
				return "WT_KNUCKLE" /* GXT: Knuckle Duster */;
			}
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			if (bParam1)
			{
				return "WTU_MKPISTOL" /* GXT: MARKSMAN PISTOL */;
			}
			else
			{
				return "WT_MKPISTOL" /* GXT: Marksman Pistol */;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE" /* GXT: BULLPUP RIFLE */;
			}
			else
			{
				return "WT_BULLRIFLE" /* GXT: Bullpup Rifle */;
			}
			break;
		
		case joaat("WEAPON_MACHETE"):
			if (bParam1)
			{
				return "WTU_MACHETE" /* GXT: MACHETE */;
			}
			else
			{
				return "WT_MACHETE" /* GXT: Machete */;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			if (bParam1)
			{
				return "WTU_MCHPIST" /* GXT: MACHINE PISTOL */;
			}
			else
			{
				return "WT_MCHPIST" /* GXT: Machine Pistol */;
			}
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT" /* GXT: FLASHLIGHT */;
			}
			else
			{
				return "WT_FLASHLIGHT" /* GXT: Flashlight */;
			}
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			if (bParam1)
			{
				return "WTU_DBSHGN" /* GXT: DOUBLE BARREL SHOTGUN */;
			}
			else
			{
				return "WT_DBSHGN" /* GXT: Double Barrel Shotgun */;
			}
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE" /* GXT: COMPACT RIFLE */;
			}
			else
			{
				return "WT_CMPRIFLE" /* GXT: Compact Rifle */;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			if (bParam1)
			{
				return "WTU_SWBLADE" /* GXT: SWITCHBLADE */;
			}
			else
			{
				return "WT_SWBLADE" /* GXT: Switchblade */;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			if (bParam1)
			{
				return "WTU_REVOLVER" /* GXT: HEAVY REVOLVER */;
			}
			else
			{
				return "WT_REVOLVER" /* GXT: Heavy Revolver */;
			}
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN" /* GXT: SWEEPER SHOTGUN */;
			}
			else
			{
				return "WT_AUTOSHGN" /* GXT: Sweeper Shotgun */;
			}
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE" /* GXT: BATTLE AXE */;
			}
			else
			{
				return "WT_BATTLEAXE" /* GXT: Battle Axe */;
			}
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
			{
				return "WTU_CMPGL" /* GXT: COMPACT GRENADE LAUNCHER */;
			}
			else
			{
				return "WT_CMPGL" /* GXT: Compact Grenade Launcher */;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
			{
				return "WTU_MINISMG" /* GXT: MINI SMG */;
			}
			else
			{
				return "WT_MINISMG" /* GXT: Mini SMG */;
			}
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB" /* GXT: PIPE BOMB */;
			}
			else
			{
				return "WT_PIPEBOMB" /* GXT: Pipe Bomb */;
			}
			break;
		
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
			{
				return "WTU_POOLCUE" /* GXT: POOL CUE */;
			}
			else
			{
				return "WT_POOLCUE" /* GXT: Pool Cue */;
			}
			break;
		
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
			{
				return "WTU_WRENCH" /* GXT: PIPE WRENCH */;
			}
			else
			{
				return "WT_WRENCH" /* GXT: Pipe Wrench */;
			}
			break;
		
		case joaat("WEAPON_COUGAR"):
			return "WT_RAGE" /* GXT: Rage Pickup */;
			break;
		
		case joaat("VEHICLE_WEAPON_TORPEDO"):
			return "WT_VEH_WEP" /* GXT: Vehicle Weapon */;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_PIST2" /* GXT: PISTOL MK II */;
			}
			else
			{
				return "WT_PIST2" /* GXT: Pistol Mk II */;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
			{
				return "WTU_SMG2" /* GXT: SMG MK II */;
			}
			else
			{
				return "WT_SMG2" /* GXT: SMG Mk II */;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2" /* GXT: HEAVY SNIPER MK II */;
			}
			else
			{
				return "WT_SNIP_HVY2" /* GXT: Heavy Sniper Mk II */;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2" /* GXT: COMBAT MG MK II */;
			}
			else
			{
				return "WT_MG_CBT2" /* GXT: Combat MG Mk II */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2" /* GXT: ASSAULT RIFLE MK II */;
			}
			else
			{
				return "WT_RIFLE_ASL2" /* GXT: Assault Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2" /* GXT: CARBINE RIFLE MK II */;
			}
			else
			{
				return "WT_RIFLE_CBN2" /* GXT: Carbine Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2" /* GXT: PUMP SHOTGUN MK II */;
			}
			else
			{
				return "WT_SG_PMP2" /* GXT: Pump Shotgun Mk II */;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2" /* GXT: SPECIAL CARBINE MK II */;
			}
			else
			{
				return "WT_SPCARBINE2" /* GXT: Special Carbine Mk II */;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2" /* GXT: SNS PISTOL MK II */;
			}
			else
			{
				return "WT_SNSPISTOL2" /* GXT: SNS Pistol Mk II */;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2" /* GXT: MARKSMAN RIFLE MK II */;
			}
			else
			{
				return "WT_MKRIFLE2" /* GXT: Marksman Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2" /* GXT: HEAVY REVOLVER MK II */;
			}
			else
			{
				return "WT_REVOLVER2" /* GXT: Heavy Revolver Mk II */;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2" /* GXT: BULLPUP RIFLE MK II */;
			}
			else
			{
				return "WT_BULLRIFLE2" /* GXT: Bullpup Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
			{
				return "WTU_REV_DA" /* GXT: DOUBLE-ACTION REVOLVER */;
			}
			else
			{
				return "WT_REV_DA" /* GXT: Double-Action Revolver */;
			}
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
			{
				return "WTU_SHATCHET" /* GXT: STONE HATCHET */;
			}
			else
			{
				return "WT_SHATCHET" /* GXT: Stone Hatchet */;
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL" /* GXT: UP-N-ATOMIZER */;
			}
			else
			{
				return "WT_RAYPISTOL" /* GXT: Up-n-Atomizer */;
			}
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE" /* GXT: UNHOLY HELLBRINGER */;
			}
			else
			{
				return "WT_RAYCARBINE" /* GXT: Unholy Hellbringer */;
			}
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN" /* GXT: WIDOWMAKER */;
			}
			else
			{
				return "WT_RAYMINIGUN" /* GXT: Widowmaker */;
			}
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			if (bParam1)
			{
				return "WTU_REV_NV" /* GXT: NAVY REVOLVER */;
			}
			else
			{
				return "WT_REV_NV" /* GXT: Navy Revolver */;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			if (bParam1)
			{
				return "WTU_CERPST" /* GXT: CERAMIC PISTOL */;
			}
			else
			{
				return "WT_CERPST" /* GXT: Ceramic Pistol */;
			}
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			if (bParam1)
			{
				return "WTU_GDGTPST" /* GXT: PERICO PISTOL */;
			}
			else
			{
				return "WT_GDGTPST" /* GXT: Perico Pistol */;
			}
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			if (bParam1)
			{
				return "WTU_MLTRYRFL" /* GXT: MILITARY RIFLE */;
			}
			else
			{
				return "WT_MLTRYRFL" /* GXT: Military Rifle */;
			}
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			if (bParam1)
			{
				return "WTU_CMBSHGN" /* GXT: COMBAT SHOTGUN */;
			}
			else
			{
				return "WT_CMBSHGN" /* GXT: Combat Shotgun */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_TURRET_DINGHY5_50CAL"):
			if (bParam1)
			{
				return "WTU_VEH_DINGHY_50C";
			}
			else
			{
				return "WTU_VEH_DINGHY_50C";
			}
			break;
		
		case joaat("WEAPON_FERTILIZERCAN"):
			if (bParam1)
			{
				return "WTU_FERTCAN" /* GXT: FERTILIZER CAN */;
			}
			else
			{
				return "WT_FERTCAN" /* GXT: Fertilizer Can */;
			}
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			if (bParam1)
			{
				return "WTU_HEAVYRIFLE" /* GXT: HEAVY RIFLE */;
			}
			else
			{
				return "WT_HEAVYRIFLE" /* GXT: Heavy Rifle */;
			}
			break;
		
		case joaat("WEAPON_EMPLAUNCHER"):
			if (bParam1)
			{
				return "WTU_EMPL" /* GXT: COMPACT EMP LAUNCHER */;
			}
			else
			{
				return "WT_EMPL" /* GXT: Compact EMP Launcher */;
			}
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			if (bParam1)
			{
				return "WTU_STNGUNMP" /* GXT: STUN GUN */;
			}
			else
			{
				return "WT_STNGUNMP" /* GXT: Stun Gun */;
			}
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			if (bParam1)
			{
				return "WTU_TACRIFLE" /* GXT: SERVICE CARBINE */;
			}
			else
			{
				return "WT_TACRIFLE" /* GXT: Service Carbine */;
			}
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			if (bParam1)
			{
				return "WTU_PRCSRIFLE" /* GXT: PRECISION RIFLE */;
			}
			else
			{
				return "WT_PRCSRIFLE" /* GXT: Precision Rifle */;
			}
			break;
		
		case joaat("WEAPON_BZGAS"):
			if (bParam1)
			{
				return "WTU_BZGAS" /* GXT: BZ GAS */;
			}
			else
			{
				return "WTU_BZGAS" /* GXT: BZ GAS */;
			}
			break;
		
		case joaat("WEAPON_STINGER"):
			if (bParam1)
			{
				return "WTU_STINGER";
			}
			else
			{
				return "WTU_STINGER";
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			if (bParam1)
			{
				return "WTU_GR_LAUN_SM";
			}
			else
			{
				return "WTU_GR_LAUN_SM";
			}
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			if (bParam1)
			{
				return "WTU_PISTOLXM3" /* GXT: WM 29 Pistol */;
			}
			else
			{
				return "WT_PISTOLXM3" /* GXT: WM 29 Pistol */;
			}
			break;
		
		case joaat("WEAPON_CANDYCANE"):
			if (bParam1)
			{
				return "WTU_CANDYCANE" /* GXT: CANDY CANE */;
			}
			else
			{
				return "WT_CANDYCANE" /* GXT: Candy Cane */;
			}
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			if (bParam1)
			{
				return "WTU_RAILGUNXM3" /* GXT: RAILGUN */;
			}
			else
			{
				return "WT_RAILGUNXM3" /* GXT: Railgun */;
			}
			break;
		
		case joaat("WEAPON_TECPISTOL"):
			if (bParam1)
			{
				return "WTU_TECPISTOL" /* GXT: TACTICAL SMG */;
			}
			else
			{
				return "WT_TECPISTOL" /* GXT: Tactical SMG */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_TRAILER_DUALAA"):
			if (bParam1)
			{
				return "WT_UV_DUALAA" /* GXT: TRAILER DUAL AA */;
			}
			else
			{
				return "WT_V_DUALAA" /* GXT: Trailer Dual AA */;
			}
			break;
		
		default:
			if (func_145(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_144(&(Var0.f_31));
				}
				else
				{
					return func_144(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID" /* GXT: Invalid */;
}

var func_144(var uParam0)//Position - 0xA556
{
	return uParam0;
}

int func_145(int iParam0, var* uParam1)//Position - 0xA560
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_146(int iParam0)//Position - 0xA59B
{
	if (iParam0 == 600)
	{
		return joaat("WEAPON_RAILGUN");
	}
	else if (iParam0 == 500)
	{
		return joaat("WEAPON_MINIGUN");
	}
	else if (iParam0 == 400)
	{
		return joaat("WEAPON_MG");
	}
	else if (iParam0 == 401)
	{
		return joaat("WEAPON_COMBATMG");
	}
	else if (iParam0 == 402)
	{
		return joaat("WEAPON_ASSAULTMG");
	}
	else if (iParam0 == 300)
	{
		return joaat("WEAPON_ASSAULTRIFLE");
	}
	else if (iParam0 == 301)
	{
		return joaat("WEAPON_CARBINERIFLE");
	}
	else if (iParam0 == 302)
	{
		return joaat("WEAPON_ADVANCEDRIFLE");
	}
	else if (iParam0 == 303)
	{
		return joaat("WEAPON_HEAVYRIFLE");
	}
	else if (iParam0 == 200)
	{
		return joaat("WEAPON_PUMPSHOTGUN");
	}
	else if (iParam0 == 201)
	{
		return joaat("WEAPON_SAWNOFFSHOTGUN");
	}
	else if (iParam0 == 202)
	{
		return joaat("WEAPON_ASSAULTSHOTGUN");
	}
	else if (iParam0 == 203)
	{
		return joaat("WEAPON_BULLPUPSHOTGUN");
	}
	else if (iParam0 == 100)
	{
		return joaat("WEAPON_MICROSMG");
	}
	else if (iParam0 == 101)
	{
		return joaat("WEAPON_SMG");
	}
	else if (iParam0 == 102)
	{
		return joaat("WEAPON_ASSAULTSMG");
	}
	else if (iParam0 == 0)
	{
		return joaat("WEAPON_PISTOL");
	}
	else if (iParam0 == 1)
	{
		return joaat("WEAPON_COMBATPISTOL");
	}
	else if (iParam0 == 2)
	{
		return joaat("WEAPON_APPISTOL");
	}
	else if (iParam0 == 3)
	{
		return joaat("WEAPON_PISTOL50");
	}
	return 0;
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0xA70E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (iParam3 > 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam5);
}

int func_148(var* uParam0, var* uParam1)//Position - 0xA760
{
	if (!func_149(*uParam0))
	{
		return 0;
	}
	if (!func_149(*uParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xA79A
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_150(var uParam0, var uParam1)//Position - 0xA7AA
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar77 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar77;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar77 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar77;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_151(var uParam0, var uParam1)//Position - 0xA915
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_154(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_154(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_154(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_152(uParam1);
	}
}

void func_152(var uParam0)//Position - 0xA9C4
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2704[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_25(PLAYER::PLAYER_ID()) };
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826))
	{
		iVar16 = STATS::LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Global_2097536.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_153(&Global_2101737);
				iVar2 = 0;
				STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_2097536.f_2826, iVar0, &Global_2101737);
				*(uParam0[iVar0 /*100*/]) = { Global_2101737.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_2101737.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_2101737.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_2101737.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_2101737.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_2101737.f_60;
				Global_2097536.f_2708 = Global_2101737.f_62;
				Global_2097536.f_2769 = Global_2101737.f_63;
				iVar2 = 0;
				if (BitTest(Global_2101737.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (BitTest(Global_2101737.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (BitTest(Global_2101737.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_2097536.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (BitTest(Global_2101737.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_148(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_2097536.f_2775[(iVar2 - 1)] = 0;
					}
				}
				bVar1 = false;
				while (bVar1 < Global_2101737.f_62)
				{
					if (BitTest(Global_2101737.f_63, bVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[bVar1] = Global_2101737.f_97[bVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[bVar1] = Global_2101737.f_64[bVar1];
					}
					bVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_153(var uParam0)//Position - 0xABD5
{
	struct<13> Var0;
	int iVar13;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

int func_154(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0xAC4B
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_2097536[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680[iParam3 /*16*/] = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680.f_49[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_67[Global_2097536.f_2779];
			Global_2101680.f_53[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_60[Global_2097536.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_2097536.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_2097536.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_25(PLAYER::PLAYER_ID()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_2097536.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_2097536.f_2775[iParam3] + iVar0) < 12 && (Global_2097536.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_155(var uParam0, int iParam1, bool bParam2)//Position - 0xAEF4
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_156(uParam0, bParam2, 0);
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

void func_156(var uParam0, bool bParam1, bool bParam2)//Position - 0xAF52
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

void func_157(int iParam0, int iParam1, int iParam2, char* sParam3)//Position - 0xAF97
{
	MISC::SET_BIT(&iParam2, 7);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
	GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_158(var uParam0)//Position - 0xAFCB
{
	if (!Global_2097532)
	{
		if (!func_194(&(Global_2097536.f_2827)))
		{
			func_156(&(Global_2097536.f_2827), 1, 0);
			return 0;
		}
		else if (!func_155(&(Global_2097536.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) || Global_2097536.f_2832 != 0)
	{
		MISC::CLEAR_BIT(&(uParam0->f_42), 4);
		return 1;
	}
	if (!BitTest(uParam0->f_42, 4))
	{
		func_193(uParam0);
		MISC::SET_BIT(&(uParam0->f_42), 4);
		return 0;
	}
	else if (BitTest(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_191(uParam0))
	{
		return 0;
	}
	if (!func_189(uParam0))
	{
		return 0;
	}
	if (!func_176(uParam0))
	{
		return 0;
	}
	if (!BitTest(uParam0->f_42, 6))
	{
		func_102(&Global_2101867);
		func_151(uParam0, &Global_2101867);
		func_150(uParam0, &Global_2101867);
		MISC::SET_BIT(&(uParam0->f_42), 6);
	}
	if (!BitTest(uParam0->f_42, 7))
	{
		if (!func_194(&(Global_2097536.f_2830)))
		{
			func_156(&(Global_2097536.f_2830), 1, 0);
		}
		else if (func_155(&(Global_2097536.f_2830), 30000, 1))
		{
			MISC::SET_BIT(&(uParam0->f_42), 7);
		}
		if (func_173(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_170(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_163(&Global_2101867))
		{
			func_159(&Global_2101867);
			MISC::SET_BIT(&(uParam0->f_42), 7);
			func_159(&Global_2101867);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_159(var uParam0)//Position - 0xB184
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = func_162(Global_2097536.f_2826);
	if (Global_2100721.f_81[iVar2] != 0)
	{
		func_161(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_153(&Global_2101737);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_2101737 = Global_2097536.f_2826;
			Global_2101737.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_2101737.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_2101737.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_2101737.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_149((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_2101737.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_2101737.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_2101737.f_62 = Global_2097536.f_2708;
			Global_2101737.f_63 = Global_2097536.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				MISC::SET_BIT(&(Global_2101737.f_61), 0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2101737.f_61), 0);
			}
			MISC::SET_BIT(&(Global_2101737.f_61), (uParam0[iVar0 /*100*/])->f_75);
			bVar1 = false;
			while (bVar1 < Global_2101737.f_62)
			{
				if (BitTest(Global_2101737.f_63, bVar1))
				{
					Global_2101737.f_97[bVar1] = (uParam0[iVar0 /*100*/])->f_67[bVar1];
				}
				else
				{
					Global_2101737.f_64[bVar1] = (uParam0[iVar0 /*100*/])->f_60[bVar1];
				}
				bVar1++;
			}
			Global_2100721.f_81[iVar2] = Global_2097536.f_2826;
			STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_2101737);
		}
		iVar0++;
	}
	Global_2100721.f_87[iVar2 /*3*/] = { func_160(PLAYER::PLAYER_ID()) };
}

Vector3 func_160(int iParam0)//Position - 0xB36B
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_161(int iParam0, int iParam1)//Position - 0xB37E
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2100721.f_81[iParam1]))
		{
			STATS::LEADERBOARDS_CLEAR_CACHE_DATA_ID(Global_2100721.f_81[iParam1]);
		}
		Global_2100721.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
		{
			STATS::LEADERBOARDS_CLEAR_CACHE_DATA_ID(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_2100721.f_81[iVar0] == iParam0)
			{
				Global_2100721.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_162(int iParam0)//Position - 0xB3FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2100721.f_81[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2100721.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_163(var uParam0)//Position - 0xB48D
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_169(uParam0);
			if ((func_168() || func_167()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_149((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_166(&((uParam0[iVar0 /*100*/])->f_32), &Global_2103169))
					{
						Global_2103169[Global_2103169.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_2103169.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_2103169.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_164(&((uParam0[1 /*100*/])->f_76), &(Global_2103169.f_206), &Global_2103169, &(Global_2103169.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_2103169.f_206 > 12)
			{
				Global_2103169.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_2103169.f_206)
				{
					if (func_149((uParam0[iVar0 /*100*/])->f_32) && func_149(Global_2103169[iVar1 /*13*/]))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_32), &(Global_2103169[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_2103169.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_164(var uParam0, var uParam1, var* uParam2, var uParam3)//Position - 0xB63A
{
	var* uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_165(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_165(var* uParam0, char* sParam1)//Position - 0xB6F3
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

int func_166(var* uParam0, var uParam1)//Position - 0xB705
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_149(*(uParam1[iVar0 /*13*/])))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_167()//Position - 0xB744
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_168()//Position - 0xB75A
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_169(var uParam0)//Position - 0xB770
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_107(&(Global_2103169[iVar0 /*13*/]));
		StringCopy(&(Global_2103169.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		{
			NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		}
	}
	if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
	{
		NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
	}
	Global_2103169.f_206 = 0;
}

int func_170(var uParam0)//Position - 0xB7E1
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	else if (func_167() || func_168())
	{
		if (!func_172(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_171(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_171(var uParam0, var* uParam1, char* sParam2)//Position - 0xB84F
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_149(*uParam1))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
				{
					if (func_167() || func_168())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (MISC::IS_XBOX360_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (func_168())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_172(var uParam0)//Position - 0xB960
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_167() && !func_168())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_2097536.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_2097536.f_2833[iVar1 /*16*/]), "", 64);
				func_107(&(Global_2097536.f_3026[iVar1 /*13*/]));
				if (func_149((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_2097536.f_3026[Global_2097536.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_2097536.f_3183++;
				}
				iVar1++;
			}
			if (Global_2097536.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&(Global_2097536.f_3026), Global_2097536.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES((uParam0[0 /*100*/])->f_79, &(Global_2097536.f_2833), Global_2097536.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_149((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_2097536.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_173(var uParam0)//Position - 0xBAF6
{
	int iVar0;
	
	if (func_167() || func_168())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_175(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_2097536.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_174(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0xBB93
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_149(Var0))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
				{
					if ((MISC::IS_XBOX360_VERSION() || func_167()) || func_168())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (func_168())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_175(var uParam0, char* sParam1, char* sParam2, int iParam3, var uParam4)//Position - 0xBCB5
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!func_167() && !func_168())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(iParam3[0 /*16*/], "", 64);
			if (func_149(Var1[0 /*13*/]))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0 /*13*/])))
				{
					*uParam4 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(*uParam4, iParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(iParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_176(var uParam0)//Position - 0xBDBB
{
	struct<97> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	bool bVar114;
	int iVar115;
	struct<13> Var116;
	
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = { func_25(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_2097536.f_2775[iVar113] = -1;
			Global_2097536.f_2704[iVar113] = 0;
			Global_2097157.f_374 = -1;
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var116))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar113] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar113] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar113] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98.f_0 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_187(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_188(), 0, 0, 0))
			{
				func_186(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_188())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar111, &Var0);
								if (Global_2097157.f_374 < 0)
								{
									if (func_148(&Var0, &Var116) || func_148(&Var0, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_185(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_2097536.f_2704[iVar113] < 11)
							{
								if (func_188() && iVar109 == 0)
								{
									func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_2097536.f_2775[iVar113] = 0;
									Global_2097536.f_2704[iVar113]++;
								}
								if (func_188() && (func_148(&Var0, &Var116) || func_148(&Var0, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_148(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_2097536.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_183(uParam0->f_44))
									{
										iVar108 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
										if (iVar108 == 1)
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_199(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar107]))
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_67[iVar107] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar107]);
										}
										else
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_60[iVar107] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_2097536.f_2704[iVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_2097536.f_2704[iVar113]++;
						}
						if (!func_188())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_185(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar111, &Var0);
							if (Global_2097536.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_188() && iVar109 == iVar111)
								{
									if (!func_148(&(Global_2097536[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
										Global_2097536.f_2704[iVar113]++;
									}
								}
								if (func_188() && (func_148(&Var0, &Var116) || func_148(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[iVar113] < 11)
								{
									if (func_149(Var0) && !func_148(&Var0, &(Global_2097536[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_148(&Var0, &Var116))
										{
											if (Global_2097536.f_2775[iVar113] < 0)
											{
												Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
											}
										}
										MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_32 = { Var0 };
										Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
										Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_74 = 1;
										if (func_183(uParam0->f_44))
										{
											iVar108 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar111, Global_2097536.f_2709);
											if (iVar108 == 1)
											{
												Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_199(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar106]))
											{
												Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_67[iVar106] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar111, Global_2097536.f_2710[iVar106]);
											}
											else
											{
												Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_60[iVar106] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar111, Global_2097536.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_2097536.f_2704[iVar113]++;
									}
								}
							}
							func_185(&Var0);
							iVar111++;
						}
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_2097536.f_2775[iVar113] == -1 && func_188())
							{
								if (Global_2097536.f_2704[iVar113] >= 1)
								{
									func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Global_2097536[iVar113 /*901*/][(Global_2097536.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
								Global_2097536.f_2704[iVar113]++;
							}
							(*uParam0)[iVar113] = 3;
						}
						else
						{
							(*uParam0)[iVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_2097536.f_2704[iVar113]++;
						}
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					MISC::SET_BIT(&(Global_2097536.f_2832), iVar113);
				}
			}
			break;
		
		case 2:
			if (Global_2097536.f_2775[iVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98.f_0 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_186(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar106, &Var0);
							bVar114 = false;
							if (Global_2097536[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_2097536.f_2704[iVar113] < 11 || bVar114)
							{
								if (func_188() && (func_148(&Var0, &Var116) || func_148(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_2097536[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_2097536[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_183(uParam0->f_44))
									{
										iVar108 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
										if (iVar108 == 1)
										{
											Global_2097536[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_199(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar107]))
										{
											Global_2097536[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar107]);
										}
										else
										{
											Global_2097536[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_2097536.f_2704[iVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_2097536.f_2704[iVar113]++;
										}
									}
								}
								else if (Global_2097536.f_2704[iVar113] < 11)
								{
									MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									if (func_183(uParam0->f_44))
									{
										iVar108 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar106, Global_2097536.f_2709);
										if (iVar108 == 1)
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_199(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar107]))
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_67[iVar107] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar106, Global_2097536.f_2710[iVar107]);
										}
										else
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_60[iVar107] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar106, Global_2097536.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_2097536.f_2704[iVar113]++;
									}
								}
							}
							func_185(&Var0);
							iVar106++;
						}
					}
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					MISC::SET_BIT(&(Global_2097536.f_2832), iVar113);
					Global_2097536.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_2097536.f_2775[iVar113] == -1 && func_188())
				{
					if (Global_2097536.f_2704[iVar113] >= 1)
					{
						func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Global_2097536[iVar113 /*901*/][(Global_2097536.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
					}
					Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
					Global_2097536.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_177(iVar113, Global_2097157.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_177(int iParam0, int iParam1)//Position - 0xCBE1
{
	int iVar0;
	
	if ((func_188() && Global_2097536.f_2704[iParam0] > Global_2097536.f_2775[iParam0]) && Global_2097536.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_2097536.f_2704[iParam0])
			{
				if (iVar0 != Global_2097536.f_2775[iParam0])
				{
					if (Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_188())
		{
		}
		if (Global_2097536.f_2704[iParam0] <= Global_2097536.f_2775[iParam0])
		{
		}
		if (Global_2097536.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_178(var uParam0, var uParam1, var* uParam2, int iParam3, int iParam4)//Position - 0xCD06
{
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_179(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)//Position - 0xCDBC
{
	Global_2097152 = 1;
	func_210(&(Global_2097152.f_1), 1, 0);
	Global_2097152.f_3 = Param0.f_0;
	Global_2097152.f_4 = Param0.f_1;
}

int func_180()//Position - 0xCDE7
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_202())
	{
		return 1;
	}
	return 0;
}

int func_181()//Position - 0xCE05
{
	if (STATS::LEADERBOARDS_READ_ANY_PENDING() || Global_2097152)
	{
		func_182();
		return 1;
	}
	return 0;
}

void func_182()//Position - 0xCE27
{
	if (func_155(&(Global_2097152.f_1), 120000, 1))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_2097152.f_3, Global_2097152.f_4, -1);
		Global_2097152 = 0;
		func_99(&(Global_2097152.f_1));
	}
}

int func_183(int iParam0)//Position - 0xCE62
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_184(var uParam0, char* sParam1, int iParam2)//Position - 0xCEC0
{
	int iVar0;
	int iVar1;
	
	if (func_199(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_2097157.f_355}, 16);
		sParam1->f_32 = { Global_2097157.f_361 };
		MemCopy(&(sParam1->f_16), {Global_2097157.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
		sParam1->f_32 = { func_25(PLAYER::PLAYER_ID()) };
	}
	sParam1->f_59 = iParam2;
	if (func_183(uParam0->f_44))
	{
		iVar0 = Global_2097157.f_211.f_36[Global_2097536.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097157.f_142.f_2, Global_2097536.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_2097157.f_211.f_36[Global_2097536.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_2097157.f_211.f_3[Global_2097536.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_185(var uParam0)//Position - 0xCFCA
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_186(var uParam0, var uParam1)//Position - 0xD078
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_187(var uParam0, var uParam1, var* uParam2, int iParam3, var* uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0xD093
{
	int iVar0;
	float fVar1;
	
	iVar0 = Global_2097157.f_211.f_36[0];
	fVar1 = Global_2097157.f_211.f_3[0];
	if (bParam6)
	{
		iVar0 = iParam7;
		fVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*uParam2);
				if (bParam5)
				{
					if (BitTest(Global_2097157.f_142.f_2, 0))
					{
						if (STATS::LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, iVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, fVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (STATS::LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_188()//Position - 0xD1C8
{
	if (Global_2097532 && Global_2097533)
	{
		return 1;
	}
	return 0;
}

int func_189(var uParam0)//Position - 0xD1E5
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	struct<13> Var114;
	
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = 1;
	Var114 = { func_25(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_2097536.f_2775[1] = -1;
			Global_2097157.f_374 = -1;
			Global_2097536.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_188())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_190(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_186(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var98))
					{
						if (func_188())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar110, &Var0);
									if (func_199(uParam0->f_44))
									{
										if (Global_2097157.f_374 < 0)
										{
											if (func_148(&Var0, &(Global_2097157.f_361)))
											{
												Global_2097157.f_374 = Var0.f_96;
											}
										}
									}
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_185(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_188() && iVar108 == 0)
						{
							if (Global_2097536.f_2704[iVar113] < 11)
							{
								func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
								Global_2097536.f_2775[iVar113] = 0;
								Global_2097536.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
							if (func_188() && (func_148(&Var0, &Var114) || func_148(&Var0, &(Global_2097157.f_361))))
							{
							}
							else if (func_149(Var0) && Global_2097536.f_2704[iVar113] < 11)
							{
								if (func_148(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_2097536.f_2775[1] = 0;
								}
								MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_183(uParam0->f_44))
								{
									iVar111 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
									if (iVar111 == 1)
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_199(uParam0->f_44))
								{
									MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_2097536.f_2708)
								{
									if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar106]))
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_67[iVar106] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar106]);
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_60[iVar106] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_2097536.f_2704[1]++;
							}
							else
							{
								func_185(&Var0);
								STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
								func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_2097536.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_2097536.f_2775[iVar113] == -1 && func_188())
								{
									if (Global_2097536.f_2704[iVar113] >= 1)
									{
										func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Global_2097536[iVar113 /*901*/][(Global_2097536.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
									}
									Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
									Global_2097536.f_2704[iVar113]++;
								}
								return 0;
							}
							func_185(&Var0);
						}
						else
						{
							Global_2097536.f_2704[1] = 0;
							func_185(&Var0);
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
							func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_2097536.f_2775[iVar113] == -1 && func_188())
							{
								if (Global_2097536.f_2704[iVar113] >= 1)
								{
									func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Global_2097536[iVar113 /*901*/][(Global_2097536.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
								Global_2097536.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_188())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar110, &Var0);
							if (Global_2097536.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_188() && iVar108 == iVar110)
								{
									if (!func_148(&(Global_2097536[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
										Global_2097536.f_2704[iVar113]++;
									}
								}
								if (func_188() && (func_148(&Var0, &Var114) || func_148(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[1] < 12)
								{
									if (func_149(Var0) && !func_148(&Var0, &(Global_2097536[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_148(&Var0, &Var114))
										{
											if (Global_2097536.f_2775[1] < 0)
											{
												Global_2097536.f_2775[1] = Global_2097536.f_2704[1];
											}
										}
										MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_74 = 1;
										if (func_183(uParam0->f_44))
										{
											iVar111 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar110, Global_2097536.f_2709);
											if (iVar111 == 1)
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_199(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar106]))
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_67[iVar106] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar110, Global_2097536.f_2710[iVar106]);
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_60[iVar106] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar110, Global_2097536.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_2097536.f_2704[1]++;
									}
								}
							}
							func_185(&Var0);
							iVar110++;
						}
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_2097536.f_2775[iVar113] == -1 && func_188())
						{
							if (Global_2097536.f_2704[iVar113] >= 1)
							{
								func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Global_2097536[iVar113 /*901*/][(Global_2097536.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_184(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
							}
							Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
							Global_2097536.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						MISC::SET_BIT(&(Global_2097536.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_2097536.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_177(iVar113, Global_2097157.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_190(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0xDBDF
{
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_191(var uParam0)//Position - 0xDC9B
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	int iVar126;
	bool bVar127;
	int iVar128;
	
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = 0;
	Var0 = { func_25(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_2097536.f_2775[iVar126] = -1;
			Global_2097536.f_2704[iVar126] = 0;
			Global_2097157.f_374 = -1;
			Global_2097533 = 0;
			if (func_192(uParam0->f_44))
			{
				if (!Global_2097533)
				{
					Global_2097533 = 1;
				}
			}
			else if (Global_2097533)
			{
				Global_2097533 = 0;
			}
			if (!Global_2097533)
			{
			}
			if (func_187(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_188(), 0, 0, 0))
			{
				func_186(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_188())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar124, &Var13);
								if (Global_2097157.f_374 < 0)
								{
									if (func_148(&Var13, &Var0) || func_148(&Var13, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_185(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_2097536.f_2704[iVar126] < 11)
							{
								if (func_188() && iVar122 == 0)
								{
									func_184(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_2097536.f_2775[iVar126] = 0;
									Global_2097536.f_2704[iVar126]++;
								}
								if (func_188() && (func_148(&Var13, &Var0) || func_148(&Var13, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_148(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_2097536.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_183(uParam0->f_44))
									{
										iVar121 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
										if (iVar121 == 1)
										{
											Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_199(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar119]))
										{
											Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_67[iVar119] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar119]);
										}
										else
										{
											Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_60[iVar119] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_2097536.f_2704[iVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_2097536.f_2704[iVar126]++;
						}
						if (!func_188())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_185(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar124, &Var13);
							if (Global_2097536.f_2704[iVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_188() && iVar122 == iVar124)
								{
									if (!func_148(&(Global_2097536[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_184(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_2097536.f_2775[iVar126] = Global_2097536.f_2704[iVar126];
										Global_2097536.f_2704[iVar126]++;
									}
								}
								if (func_188() && (func_148(&Var13, &Var0) || func_148(&Var13, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[iVar126] < 11)
								{
									if (func_149(Var13) && !func_148(&(Global_2097536[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_148(&Var13, &Var0))
										{
											if (Global_2097536.f_2775[iVar126] < 0)
											{
												Global_2097536.f_2775[iVar126] = Global_2097536.f_2704[iVar126];
											}
										}
										MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_74 = 1;
										if (func_183(uParam0->f_44))
										{
											iVar121 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar124, Global_2097536.f_2709);
											if (iVar121 == 1)
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_199(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar119]))
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_67[iVar119] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar124, Global_2097536.f_2710[iVar119]);
											}
											else
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_60[iVar119] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar124, Global_2097536.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_2097536.f_2704[iVar126]++;
									}
								}
							}
							func_185(&Var13);
							iVar124++;
						}
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_2097536.f_2775[iVar126] == -1 && func_188())
							{
								if (Global_2097536.f_2704[iVar126] >= 1)
								{
									func_184(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), Global_2097536[iVar126 /*901*/][(Global_2097536.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_184(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar126] = Global_2097536.f_2704[iVar126];
								Global_2097536.f_2704[iVar126]++;
							}
							(*uParam0)[iVar126] = 2;
						}
						else
						{
							(*uParam0)[iVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_2097536.f_2704[iVar126]++;
						}
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					MISC::SET_BIT(&(Global_2097536.f_2832), iVar126);
				}
			}
			break;
		
		case 1:
			if (Global_2097536.f_2775[iVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_186(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar119, &Var13);
							if (func_188() && (func_148(&Var13, &Var0) || func_148(&Var13, &(Global_2097157.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_2097536[iVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[iVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_2097536.f_2704[iVar126] < 11 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_2097536[iVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_2097536[iVar126 /*901*/][0 /*75*/].f_32 = { Var13 };
										Global_2097536[iVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_183(uParam0->f_44))
										{
											iVar121 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
											if (iVar121 == 1)
											{
												Global_2097536[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_199(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar120]))
											{
												Global_2097536[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar119, Global_2097536.f_2710[iVar120]);
											}
											else
											{
												Global_2097536[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar119, Global_2097536.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_2097536.f_2704[iVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_2097536.f_2704[iVar126]++;
											}
										}
										else if (Global_2097536.f_2704[iVar126] == 1 && Global_2097536.f_2775[iVar126] == -1)
										{
											Global_2097536.f_2704[iVar126]++;
										}
									}
									else if (Global_2097536.f_2704[iVar126] < 11)
									{
										MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										if (func_183(uParam0->f_44))
										{
											iVar121 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar119, Global_2097536.f_2709);
											if (iVar121 == 1)
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_199(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar120]))
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_67[iVar120] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar119, Global_2097536.f_2710[iVar120]);
											}
											else
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_60[iVar120] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar119, Global_2097536.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_2097536.f_2704[iVar126]++;
										}
									}
								}
							}
							func_185(&Var13);
							iVar119++;
						}
					}
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					MISC::SET_BIT(&(Global_2097536.f_2832), iVar126);
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_2097536.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_2097536.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_2097536.f_2775[iVar126] == -1 && func_188())
			{
				if (Global_2097536.f_2704[iVar126] >= 1)
				{
					func_184(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), Global_2097536[iVar126 /*901*/][(Global_2097536.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_184(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), 1);
				}
				Global_2097536.f_2775[iVar126] = Global_2097536.f_2704[iVar126];
				Global_2097536.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_177(iVar126, Global_2097157.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_192(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)//Position - 0xEAC7
{
	int iVar0;
	
	if (Global_2097532)
	{
		if (Global_2097157.f_5 != 0)
		{
			if (Global_2097157.f_5 == Param0.f_0)
			{
				if (Global_2097157.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_193(var uParam0)//Position - 0xEB5F
{
	int iVar0;
	
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826))
	{
		iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2097536.f_2826);
		if (iVar0 < 300000)
		{
			MISC::SET_BIT(&(uParam0->f_42), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_42), 5);
			func_161(Global_2097536.f_2826, -1);
		}
	}
}

bool func_194(var uParam0)//Position - 0xEBAF
{
	return uParam0->f_1;
}

void func_195(int iParam0)//Position - 0xEBBB
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_196(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xEBDB
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var36;
	bool bVar52;
	struct<13> Var53;
	int iVar66;
	struct<13> Var67;
	int iVar80;
	
	sVar0 = "";
	if (BitTest(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL" /* GXT: GLOBAL */;
	}
	else if (BitTest(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS" /* GXT: FRIENDS */;
	}
	else if (BitTest(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if ((func_168() || func_167()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				sVar0 = "SCLB_CREW" /* GXT: CREW */;
			}
			else
			{
				Var53 = { func_25(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var53))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var53);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW" /* GXT: CREW */;
					}
				}
				else
				{
					sVar0 = "SCLB_CREW" /* GXT: CREW */;
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW" /* GXT: CREW */;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bVar52)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var36);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		MISC::SET_BIT(&iVar66, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar66);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL" /* GXT: Sign in to view leaderboard data. */;
		}
		else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			sVar0 = "SCLB_NO_ROS" /* GXT: The Rockstar game services are unavailable right now. Please try again later. */;
		}
		else if (Global_2097536.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL" /* GXT: Unable to retrieve leaderboard data. Please try again later. */;
		}
		else
		{
			sVar0 = "HUD_PERM" /* GXT: Your profile does not have the correct permissions to access Social Club functionality. */;
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (BitTest(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL" /* GXT: No data available yet for this leaderboard. */;
		}
		else if (BitTest(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS" /* GXT: No friends listed on this leaderboard. */;
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb" /* GXT: Search for friends on Social Club to add and compare your scores with. */;
			}
		}
		else if (BitTest(iParam2, 6))
		{
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				if (NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
					{
						if ((func_168() || func_167()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
						{
							sVar0 = "SCLB_NO_CREWc" /* GXT: No Crew members listed on this leaderboard. */;
						}
						else
						{
							Var67 = { func_25(PLAYER::PLAYER_ID()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var67))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var67);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb" /* GXT: No ~a~ members listed on this leaderboard. */;
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc" /* GXT: No Crew members listed on this leaderboard. */;
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa" /* GXT: Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to participate in a Crew. */;
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa" /* GXT: Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to participate in a Crew. */;
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe" /* GXT: ~HUD_COLOUR_SOCIAL_CLUB~Social Club~s~ policies have been updated. Visit the Players menu, and press ~INPUT_FRONTEND_Y~ to view and accept the updated policies. */;
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd" /* GXT: Sign up to Social Club to gain access to Crew leaderboards. */;
			}
		}
		iVar80 = 0;
		MISC::SET_BIT(&iVar80, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar80);
		if (bVar52)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var36);
			GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
}

void func_197(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0xEEB3
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		iVar0++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_198(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0xEEF5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MULTIPLAYER_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_199(int iParam0)//Position - 0xEF85
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_200(int iParam0, int iParam1)//Position - 0xEFA7
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_201()//Position - 0xEFC4
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SC_LEADERBOARD");
}

bool func_202()//Position - 0xEFD4
{
	return func_203(PLAYER::PLAYER_ID());
}

int func_203(int iParam0)//Position - 0xEFE4
{
	switch (func_204(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_204(int iParam0)//Position - 0xF044
{
	return Global_1853988[iParam0 /*867*/].f_192;
}

void func_205(int iParam0)//Position - 0xF057
{
	Global_1577917 = iParam0;
}

void func_206(int iParam0)//Position - 0xF065
{
	Global_1655612.f_1163 = iParam0;
}

void func_207(bool bParam0)//Position - 0xF076
{
	if (bParam0)
	{
		func_209();
	}
	func_208(4, -1);
	func_208(6, -1);
	func_208(7, -1);
	func_208(3, -1);
	func_208(1, -1);
	func_208(2, -1);
	func_208(11, -1);
	func_208(13, -1);
	func_208(14, -1);
	func_208(16, -1);
}

void func_208(int iParam0, int iParam1)//Position - 0xF0C7
{
	MISC::SET_BIT(&(Global_1654054.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1654054.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_209()//Position - 0xF0FD
{
	Global_2794162.f_4636 = 0;
}

void func_210(var uParam0, bool bParam1, bool bParam2)//Position - 0xF10D
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

int func_211(int* iParam0, bool bParam1)//Position - 0xF14A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_2103068.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_2103068.f_2 > 0)
	{
		func_99(&Global_2103068);
		func_99(&(Global_2103068.f_49));
		*iParam0 = 0;
		Global_2103068.f_2 = 0;
		func_219(0);
	}
	Global_2103068.f_2 = MISC::GET_FRAME_COUNT();
	iVar1 = -1;
	if (func_168())
	{
		if (NETWORK::NETWORK_IS_NP_AVAILABLE() == 0)
		{
			iVar1 = NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();
		}
	}
	if ((func_168() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_217() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::NETWORK_IS_REFRESHING_ROS_CREDENTIALS())
		{
			func_214(&(Global_2103068.f_3), func_216(&(Global_2103068.f_3)));
			if (!BitTest(*iParam0, 4))
			{
				MISC::SET_BIT(iParam0, 4);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_212(&(Global_2103068.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "HUD_PROFILECHNG" /* GXT: Please change to a profile with correct permissions. */, iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "HUD_GAMEUPD_G" /* GXT: The game requires an update to access this feature. */, iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 1)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "HUD_SYSTUPD_G" /* GXT: The system requires an update to access this feature. */, iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 5)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "SCLB_NO_INT" /* GXT: No internet connection detected, establish a connection to access this feature. */, iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (!func_217())
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "SCLB_NO_ROS" /* GXT: The Rockstar game services are unavailable right now. Please try again later. */, iVar0, 0, false, -1, 0, 0, true, 0);
			}
			if (!BitTest(*iParam0, 0))
			{
				if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					MISC::SET_BIT(iParam0, 0);
				}
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				func_99(&(Global_2103068.f_49));
				func_99(&Global_2103068);
				*iParam0 = 0;
				Global_2103068.f_2 = 0;
				func_219(0);
				return 1;
			}
		}
	}
	else
	{
		func_214(&(Global_2103068.f_3), func_216(&(Global_2103068.f_3)));
		if ((func_194(&(Global_2103068.f_49)) && !func_155(&(Global_2103068.f_49), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			MISC::SET_BIT(iParam0, 3);
			StringCopy(&(Global_2103068.f_3.f_1), "", 64);
			func_212(&(Global_2103068.f_3), 0);
		}
		else if (!BitTest(*iParam0, 3))
		{
			if (!BitTest(*iParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(false);
				MISC::SET_BIT(iParam0, 1);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_212(&(Global_2103068.f_3), 0);
			}
		}
		if (func_194(&Global_2103068))
		{
			if (!func_155(&Global_2103068, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "STORE_NOT_ONL" /* GXT: Sign in to the Rockstar Games Social Club to access the Store. */, iVar0, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "SCLB_NO_INT" /* GXT: No internet connection detected, establish a connection to access this feature. */, iVar0, 0, false, -1, 0, 0, true, 0);
					}
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!BitTest(*iParam0, 0))
						{
							if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
							{
								MISC::SET_BIT(iParam0, 0);
							}
						}
						else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							func_99(&Global_2103068);
							*iParam0 = 0;
							Global_2103068.f_2 = 0;
							func_219(0);
							return 1;
						}
					}
				}
				else
				{
					func_99(&Global_2103068);
					*iParam0 = 0;
					Global_2103068.f_2 = 0;
					func_219(0);
					return 1;
				}
			}
			else if (BitTest(*iParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "SCLB_NO_INT" /* GXT: No internet connection detected, establish a connection to access this feature. */, iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!BitTest(*iParam0, 0))
				{
					if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						MISC::SET_BIT(iParam0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					func_99(&(Global_2103068.f_49));
					func_99(&Global_2103068);
					*iParam0 = 0;
					Global_2103068.f_2 = 0;
					func_219(0);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "SCLB_NOT_ONL" /* GXT: Sign in to view leaderboard data. */, iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "SCLB_NO_INT" /* GXT: No internet connection detected, establish a connection to access this feature. */, iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!BitTest(*iParam0, 0))
					{
						if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							MISC::SET_BIT(iParam0, 0);
						}
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						func_99(&(Global_2103068.f_49));
						func_99(&Global_2103068);
						*iParam0 = 0;
						Global_2103068.f_2 = 0;
						func_219(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_212(var uParam0, bool bParam1)//Position - 0xF5A9
{
	func_213(uParam0);
	if (bParam1)
	{
		func_219(0);
	}
	uParam0->f_35 = 1;
}

void func_213(var uParam0)//Position - 0xF5C6
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_214(var uParam0, int iParam1)//Position - 0xF5E1
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_215(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_215(var uParam0)//Position - 0xF6DF
{
	uParam0->f_35 = 0;
}

int func_216(var uParam0)//Position - 0xF6EC
{
	return uParam0->f_35;
}

int func_217()//Position - 0xF6F8
{
	if (func_218())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_218()//Position - 0xF718
{
	return Global_2695084;
}

void func_219(bool bParam0)//Position - 0xF724
{
	HUD::BUSYSPINNER_OFF();
	if (bParam0)
	{
		HUD::PRELOAD_BUSYSPINNER();
	}
}

int func_220(var uParam0, bool bParam1, bool bParam2)//Position - 0xF739
{
	if (!iLocal_256)
	{
		func_232(&(uParam0->f_72), bParam1);
		iLocal_256 = 1;
		func_338(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_2097157.f_1 && !Global_2097157.f_2)
		{
			func_229(190, bParam1);
			Global_2097157.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_221(&(uParam0->f_72)))
		{
			Global_2097532 = 1;
			return 1;
		}
	}
	return 0;
}

int func_221(var uParam0)//Position - 0xF7A2
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_199(uParam0->f_44))
	{
		Var175 = { Global_2097157.f_361 };
	}
	else
	{
		Var175 = { func_25(PLAYER::PLAYER_ID()) };
	}
	switch (Global_2097157)
	{
		case 0:
			if (func_228(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_186(&Var98, &(uParam0->f_44));
				Global_2097157.f_142 = uParam0->f_44;
				Global_2097157.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_2097157.f_142.f_1)
				{
					if (!func_227(uParam0->f_44, iVar188))
					{
						if (func_226(uParam0->f_44, 4, iVar188))
						{
							MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar188);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
						if (Var0.f_97 != Global_2097157.f_142.f_1)
						{
						}
						if (!func_149(Var0))
						{
							Global_2097157.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_2097157.f_142.f_1)
							{
								if (!func_227(uParam0->f_44, iVar188))
								{
									if (func_226(uParam0->f_44, 4, iVar188))
									{
										Global_2097157.f_73.f_36[iVar188] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, iVar188);
										if (Global_2097157.f_73.f_36[iVar188] == -1)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_2097157.f_73.f_36[iVar188] = 0;
											}
										}
									}
									else
									{
										Global_2097157.f_73.f_3[iVar188] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, iVar188);
										if (Global_2097157.f_73.f_3[iVar188] == -1f)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_2097157.f_73.f_3[iVar188] = 0f;
											}
										}
									}
								}
								iVar188++;
							}
						}
					}
					else
					{
						Global_2097157.f_4 = 1;
					}
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
				}
				else
				{
					Global_2097157.f_4 = 1;
				}
				Global_2097157 = 1;
				func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_2097157.f_1 = 1;
			if (Global_2097157.f_2)
			{
				func_225();
				if (Global_2097157.f_4)
				{
					if (func_224(uParam0->f_44))
					{
						Global_2097157 = 3;
					}
					else
					{
						Global_2097157 = 2;
					}
				}
				else
				{
					Global_2097157 = 2;
				}
			}
			break;
		
		case 2:
			STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&(Global_2097157.f_73), &(Global_2097157.f_142), &(Global_2097157.f_211));
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_2097157.f_211 = { Global_2097157.f_142 };
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_223())
			{
				if (func_222())
				{
					Global_2097157 = 99;
				}
				else
				{
					Global_2097157 = 999;
					return 1;
				}
			}
			else
			{
				Global_2097157 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_224(uParam0->f_44))
			{
				Global_2097157.f_280 = { Global_2097157.f_142 };
			}
			else
			{
				Var106.f_0 = Global_2097157.f_142;
				Var106.f_1 = Global_2097157.f_142.f_1;
				Var106.f_2 = Global_2097157.f_142.f_2;
				STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&Var106, &(Global_2097157.f_142), &(Global_2097157.f_280));
			}
			Global_2097157 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_187(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_2097157.f_280.f_36[0], Global_2097157.f_280.f_3[0]))
			{
				func_186(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
						if (MISC::ARE_STRINGS_EQUAL(&(Var0.f_13), ""))
						{
							Global_1057163.f_1 = -1;
						}
						else
						{
							Global_1057163.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_1057163.f_1 = -1;
					}
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
				}
				else
				{
					Global_1057163.f_1 = -1;
				}
				Global_2097157 = 999;
				func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_222()//Position - 0xFBC6
{
	return BitTest(Global_1048576.f_10, 1);
}

var func_223()//Position - 0xFBD6
{
	return Global_2692776.f_3;
}

int func_224(int iParam0)//Position - 0xFBE4
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_225()//Position - 0xFCB5
{
	Global_2097157.f_73 = Global_2097157.f_142;
	Global_2097157.f_73.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_73.f_2 = Global_2097157.f_142.f_2;
	Global_2097157.f_211 = Global_2097157.f_142;
	Global_2097157.f_211.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_211.f_2 = Global_2097157.f_142.f_2;
}

int func_226(int iParam0, int iParam1, int iParam2)//Position - 0xFD15
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_227(int iParam0, int iParam1)//Position - 0xFE17
{
	if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_228(var uParam0, var uParam1, var* uParam2, var* uParam3)//Position - 0xFE72
{
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_HANDLE(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_229(int iParam0, bool bParam1)//Position - 0xFF26
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_231(iParam0, &Var0, &Var7, 1, -1, 1, 0))
	{
		func_230(190, 131, 0, 0f, 1);
		func_230(190, 103, iLocal_149[1], 0f, 0);
		func_230(190, 99, iLocal_149[2], 0f, 0);
		func_230(190, 109, iLocal_149[3], 0f, 0);
		func_230(190, 106, iLocal_149[5], 0f, 0);
		func_230(190, 2, iLocal_149[10], 0f, 0);
		func_230(190, 107, iLocal_149[8], 0f, 0);
		func_230(190, 116, iLocal_149[6], 0f, 0);
		iLocal_149[1] = 0;
		iLocal_149[2] = 0;
		iLocal_149[3] = 0;
		iLocal_149[5] = 0;
		iLocal_149[10] = 0;
		iLocal_149[8] = 0;
		iLocal_149[6] = 0;
	}
}

void func_230(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x10017
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(iParam1, iParam2, fParam3);
	}
	if (!Global_2097157.f_3)
	{
		Global_2097157.f_142 = iParam0;
		Global_2097157.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_2097157.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_2097157.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_226(iParam0, 4, iVar1))
				{
					MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar1);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar1);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_2097157.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_2097157.f_142.f_36[iVar0] = iParam2;
	Global_2097157.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		MISC::SET_BIT(&(Global_2097157.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), iVar0);
	}
}

int func_231(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x10132
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = uParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var69 = { func_25(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1936071.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

void func_232(var uParam0, bool bParam1)//Position - 0x10266
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_233(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_233(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x1028E
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	Global_2097536.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1" /* GXT: Race - ~a~ (~1~ Lap) */, 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM" /* GXT: Race - ~a~ (~1~ Laps) */, 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1" /* GXT: Race (~1~ Lap) */, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM" /* GXT: Race (~1~ Laps) */, 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE" /* GXT: Race - ~a~ */, 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN" /* GXT: Race */, 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_242())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT" /* GXT: RACE TIME */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_L1" /* GXT: GTA Race - ~a~ (~1~ Lap) */, 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_LM" /* GXT: GTA Race - ~a~ (~1~ Laps) */, 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_L1" /* GXT: GTA Race (~1~ Laps) */, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_LM" /* GXT: GTA Race (~1~ Laps) */, 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE" /* GXT: GTA Race - ~a~ */, 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN" /* GXT: GTA Race */, 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_242())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 5;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 6;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT" /* GXT: RACE TIME */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 5;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 6;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_2097536.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_L1" /* GXT: Rally Race - ~a~ - ~a~ (~1~ Lap) */, 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_LM" /* GXT: Rally Race - ~a~ - ~a~ (~1~ Laps) */, 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_L1" /* GXT: Rally Race (~1~ Lap) */, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_LM" /* GXT: Rally Race (~1~ Laps) */, 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE" /* GXT: Rally Race - ~a~ - ~a~ */, 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN" /* GXT: Rally Race - ~a~ */, 32);
					}
				}
				if (iParam5 <= 0 || func_242())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT" /* GXT: RACE TIME */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 4;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_L1" /* GXT: On Foot Race - ~a~ (~1~ Lap) */, 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_LM" /* GXT: On Foot Race - ~a~ (~1~ Laps) */, 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_L1" /* GXT: On Foot Race (~1~ Laps) */, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_LM" /* GXT: On Foot Race (~1~ Laps) */, 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE" /* GXT: On Foot Race - ~a~ */, 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN" /* GXT: On Foot Race */, 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_242())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 0;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 0;
					Global_2097536.f_2708 = 1;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT" /* GXT: RACE TIME */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_242())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_242())
				{
					Global_2097536.f_2780.f_26 = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1" /* GXT: Race - ~a~ (~1~ Lap) */, 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM" /* GXT: Race - ~a~ (~1~ Laps) */, 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1" /* GXT: Race (~1~ Lap) */, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM" /* GXT: Race (~1~ Laps) */, 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE" /* GXT: Race - ~a~ */, 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN" /* GXT: Race */, 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_242())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT" /* GXT: RACE TIME */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH" /* GXT: King Of The Hill - ~a~ */, 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH_NN" /* GXT: King Of The Hill */, 32);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM" /* GXT: Deathmatch - ~a~ */, 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM_NN" /* GXT: Deathmatch */, 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT" /* GXT: W/L RATIO */, 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS" /* GXT: WINS */, 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES" /* GXT: LOSSES */, 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD" /* GXT: K/D RATIO */, 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH" /* GXT: DEATHS */, 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH" /* GXT: Team King Of The Hill - ~a~ */, 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH_NN" /* GXT: Team King Of The Hill */, 32);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM" /* GXT: Team Deathmatch - ~a~ */, 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM_NN" /* GXT: Team Deathmatch */, 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT" /* GXT: W/L RATIO */, 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS" /* GXT: WINS */, 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES" /* GXT: LOSSES */, 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD" /* GXT: K/D RATIO */, 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH" /* GXT: DEATHS */, 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM" /* GXT: Vehicle Deathmatch - ~a~ */, 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM_NN" /* GXT: Vehicle Deathmatch */, 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT" /* GXT: W/L RATIO */, 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS" /* GXT: WINS */, 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES" /* GXT: LOSSES */, 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD" /* GXT: K/D RATIO */, 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH" /* GXT: DEATHS */, 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF" /* GXT: Golf */, 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0" /* GXT: BEST ROUND */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1" /* GXT: LONGEST DRIVE */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES" /* GXT: GAMES PLAYED */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF" /* GXT: Golf */, 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0" /* GXT: BEST ROUND */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1" /* GXT: LONGEST DRIVE */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES" /* GXT: GAMES PLAYED */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_HUNTING" /* GXT: Hunting */, 32);
			StringCopy(&(Global_2097536.f_2780.f_9), "CMSW" /* GXT: Chiliad Mountain State Wilderness */, 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_HSCORE" /* GXT: HIGH SCORE */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT" /* GXT: TIME TO GOLD */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_EKILLS" /* GXT: ELK KILLS */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_PHOTOS" /* GXT: PHOTOS SENT */, 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MONEY" /* GXT: MONEY MADE */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2710[4] = 6;
			Global_2097536.f_2708 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 6;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 6;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_ARM" /* GXT: Arm Wrestling */, 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS" /* GXT: WINS */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES" /* GXT: LOSSES */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_WLRAT" /* GXT: W/L RATIO */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_DARTS" /* GXT: Darts */, 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT" /* GXT: W/L RATIO */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS" /* GXT: WINS */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES" /* GXT: LOSSES */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2710[2] = 5;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS" /* GXT: Tennis ~a~ */, 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_TENNIS" /* GXT: Tennis ~a~ */, 64);
				StringIntConCat(&(Global_2097536.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS" /* GXT: WINS */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES" /* GXT: LOSSES */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1" /* GXT: SETS WON */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2" /* GXT: GAMES WON */, 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0" /* GXT: ACES */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS" /* GXT: Tennis ~a~ */, 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS" /* GXT: WINS */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES" /* GXT: LOSSES */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1" /* GXT: SETS WON */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2" /* GXT: GAMES WON */, 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0" /* GXT: ACES */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa" /* GXT: Shooting Range - Random Targets ~a~ */, 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEb" /* GXT: Shooting Range - Target Grid ~a~ */, 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEc" /* GXT: Shooting Range - Covered Targets ~a~ */, 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa" /* GXT: Shooting Range - Random Targets ~a~ */, 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL" /* GXT: Pistol */, 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SMG" /* GXT: Submachine Guns */, 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_ASSAULT" /* GXT: Assault Rifle */, 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SHOTGUN" /* GXT: Shotgun */, 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_LMG" /* GXT: Light Machine Gun */, 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_HEAVY" /* GXT: Heavy */, 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL" /* GXT: Pistol */, 64);
					break;
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT" /* GXT: W/L RATIO */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_HITS" /* GXT: HITS */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_SHOTS" /* GXT: SHOTS */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_ACC" /* GXT: ACCURACY */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 1;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGE" /* GXT: Shooting Range ~a~ */, 32);
			MemCopy(&(Global_2097536.f_2780.f_9), {func_241(iParam1)}, 16);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE" /* GXT: SCORE */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WEAP" /* GXT: WEAPON */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2708 = 2;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TRI" /* GXT: Triathlon - ~a~ */, 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME" /* GXT: TIME */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 0;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 1;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 0;
			Global_2097536.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME" /* GXT: TIME */, 24);
			Global_2097536.f_2710[0] = 3;
			Global_2097536.f_2708 = 1;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD" /* GXT: Survival - ~a~ */, 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD_NN" /* GXT: Survival */, 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE" /* GXT: SCORE */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WAVE" /* GXT: TOTAL WAVES */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TKILLS" /* GXT: TOTAL KILLS */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TDEATH" /* GXT: TOTAL DEATHS */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST" /* GXT: Heist - ~a~ */, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTP" /* GXT: Heist Setup - ~a~ */, 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST_NN" /* GXT: Heist */, 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE" /* GXT: SCORE */, 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME" /* GXT: TIME */, 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC" /* GXT: ACCURACY */, 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_HEADSHOT" /* GXT: HEADSHOTS */, 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 5;
				Global_2097536.f_2710[4] = 6;
				Global_2097536.f_2708 = 3;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				Global_2097536.f_2780.f_28 = 6;
				Global_2097536.f_2780.f_29[0] = 5;
				Global_2097536.f_2780.f_29[1] = 11;
				Global_2097536.f_2780.f_29[2] = 4;
				Global_2097536.f_2780.f_29[3] = 5;
				Global_2097536.f_2780.f_29[4] = 5;
			}
			else if (Global_4718592.f_1772 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS" /* GXT: LTS - ~a~ */, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS" /* GXT: Mission - ~a~ */, 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN" /* GXT: LTS - ~a~ */, 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN" /* GXT: Mission */, 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME" /* GXT: TIME */, 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH" /* GXT: DEATHS */, 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 2;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2708 = 3;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 2;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS" /* GXT: LTS - ~a~ */, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS" /* GXT: Mission - ~a~ */, 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN" /* GXT: LTS - ~a~ */, 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN" /* GXT: Mission */, 32);
				}
				if (func_240(Global_4718592.f_171044) || func_237(Global_4718592.f_171044))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE" /* GXT: SCORE */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH" /* GXT: DEATHS */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else if (func_236(Global_4718592.f_171044))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE" /* GXT: SCORE */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH" /* GXT: DEATHS */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE" /* GXT: SCORE */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH" /* GXT: DEATHS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ" /* GXT: Parachute Jump - ~a~ */, 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN" /* GXT: Parachute Jump */, 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE" /* GXT: SCORE */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME" /* GXT: TIME */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_JUMPS" /* GXT: JUMPS */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK" /* GXT: POSITION */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			MISC::SET_BIT(&(Global_2097536.f_2768), 1);
			Global_2097536.f_2754[1] = -1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 11;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ" /* GXT: Parachute Jump - ~a~ */, 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN" /* GXT: Parachute Jump */, 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_CASH" /* GXT: CASH */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_TOTCASH" /* GXT: TOTAL CASH */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 3;
			Global_2097536.f_2708 = 2;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME" /* GXT: TIME */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1" /* GXT: GOLD MEDALS */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2" /* GXT: SILVER MEDALS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3" /* GXT: BRONZE MEDALS */, 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST" /* GXT: DISTANCE */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1" /* GXT: GOLD MEDALS */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2" /* GXT: SILVER MEDALS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3" /* GXT: BRONZE MEDALS */, 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_AVG_HEI" /* GXT: AVERAGE HEIGHT */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1" /* GXT: GOLD MEDALS */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2" /* GXT: SILVER MEDALS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3" /* GXT: BRONZE MEDALS */, 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE" /* GXT: SCORE */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1" /* GXT: GOLD MEDALS */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2" /* GXT: SILVER MEDALS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3" /* GXT: BRONZE MEDALS */, 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 1;
					Global_2097536.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 12;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST" /* GXT: DISTANCE */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1" /* GXT: GOLD MEDALS */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2" /* GXT: SILVER MEDALS */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3" /* GXT: BRONZE MEDALS */, 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 4;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 17;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN" /* GXT: Mission */, 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME" /* GXT: TIME */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1" /* GXT: GOLD MEDALS */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2" /* GXT: SILVER MEDALS */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3" /* GXT: BRONZE MEDALS */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 2;
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 10;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN" /* GXT: Mission */, 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE" /* GXT: SCORE */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME" /* GXT: TIME */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC" /* GXT: ACCURACY */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL1" /* GXT: GOLD MEDALS */, 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL2" /* GXT: SILVER MEDALS */, 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL3" /* GXT: BRONZE MEDALS */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 4;
			Global_2097536.f_2710[5] = 3;
			Global_2097536.f_2708 = 6;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 9;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			Global_2097536.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME" /* GXT: TIME */, 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2708 = 1;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT" /* GXT: RACE TIME */, 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 1;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2709 = 6;
				Global_2097536.f_2708 = 2;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				Global_2097536.f_2780.f_28 = 4;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT" /* GXT: RACE TIME */, 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 2;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 1;
				Global_2097536.f_2709 = 4;
				Global_2097536.f_2708 = 3;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 1;
				Global_2097536.f_2780.f_29[2] = 3;
			}
			Global_2097536.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_1" /* GXT: South Los Santos */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1" /* GXT: South Los Santos */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_2" /* GXT: City Circuit */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2" /* GXT: City Circuit */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_4" /* GXT: Airport */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4" /* GXT: Airport */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_5" /* GXT: Freeway */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5" /* GXT: Freeway */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_6" /* GXT: Vespucci Canals */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6" /* GXT: Vespucci Canals */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_1" /* GXT: East Coast */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1" /* GXT: East Coast */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_2" /* GXT: North East Coast */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2" /* GXT: North East Coast */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_3" /* GXT: Raton Canyon */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3" /* GXT: Raton Canyon */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_4" /* GXT: Los Santos */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4" /* GXT: Los Santos */, 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS" /* GXT: WINS */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES" /* GXT: GAMES PLAYED */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_235(iParam4)}, 8);
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BUZZ" /* GXT: Buzzer Beater */, 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR" /* GXT: TIME SURVIVED */, 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CARN" /* GXT: Carnage */, 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT" /* GXT: DAMAGE DEALT */, 24);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_FLAGW" /* GXT: Flag War */, 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_FLAGS" /* GXT: FLAGS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_WRECK" /* GXT: Wreck It */, 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT" /* GXT: DAMAGE DEALT */, 24);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BOMBB" /* GXT: Bomb Ball */, 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_POINTS" /* GXT: POINTS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_GOALS" /* GXT: GOALS */, 24);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_GAMEM" /* GXT: Games Masters */, 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_CPOINTS" /* GXT: CHECKPOINTS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_MNSTR" /* GXT: Here Come the Monsters */, 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT" /* GXT: DAMAGE DEALT */, 24);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_HOTB" /* GXT: Hot Bomb */, 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_PASSES" /* GXT: PASSES */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR" /* GXT: TIME SURVIVED */, 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_TAGT" /* GXT: Tag Team */, 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS" /* GXT: KILLS */, 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TAGS" /* GXT: TAGS */, 24);
					break;
			}
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CAREER" /* GXT: Arena War Career */, 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CARPT" /* GXT: AP (POSITION) */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT" /* GXT: W/L RATIO */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MATCHES" /* GXT: MATCHES */, 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TITLE" /* GXT: SKILL LEVEL */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			Global_2097536.f_2780.f_28 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 21;
			break;
		
		case 890:
			uParam0->f_44 = 1203;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_CCM_CAREER" /* GXT: LS Car Meet Membership */, 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CCMLVL" /* GXT: LEVEL */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT" /* GXT: W/L RATIO */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RACES" /* GXT: RACES */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 22;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			break;
		
		case 276:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&Var0, "TUNER_SANDB_SVAR", 32);
			if (iParam4 == 2 || iParam4 == 3)
			{
				StringIntConCat(&Var0, 2, 32);
			}
			else
			{
				StringIntConCat(&Var0, iParam4, 32);
			}
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT" /* GXT: BEST TIME */, 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS" /* GXT: WINS */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_TT" /* GXT: Time Trial */, 32);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT" /* GXT: BEST TIME */, 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
					Global_2097536.f_2708 = 2;
					Global_2097536.f_2780.f_28 = 3;
					Global_2097536.f_2780.f_29[0] = 2;
					Global_2097536.f_2780.f_29[1] = 3;
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_CD" /* GXT: Scramble */, 32);
					break;
				
				case 2:
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_HH1" /* GXT: Head-to-Head */, 32);
					break;
			}
			break;
		
		case 278:
		case 279:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			if (iParam1 == 278)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_SRS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_SRS" /* GXT: Street Race Series - ~a~ */, 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL" /* GXT: BEST LAP */, 24);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_PS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_PURS" /* GXT: Pursuit Series - ~a~ */, 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT" /* GXT: BEST TIME */, 24);
			}
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS" /* GXT: WINS */, 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH" /* GXT: VEHICLE */, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			Global_2097536.f_2780 = 1;
			break;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar16]))
		{
			MISC::SET_BIT(&(Global_2097536.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_2097536.f_2826 = func_234(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_234(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)//Position - 0x152F5
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_199(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

struct<6> func_235(int iParam0)//Position - 0x15367
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_236(int iParam0)//Position - 0x15416
{
	return iParam0 == 74;
}

var func_237(int iParam0)//Position - 0x15423
{
	return (func_239(iParam0) || func_238(iParam0));
}

bool func_238(int iParam0)//Position - 0x1543D
{
	return iParam0 == 44;
}

bool func_239(int iParam0)//Position - 0x1544A
{
	return iParam0 == 45;
}

bool func_240(int iParam0)//Position - 0x15457
{
	return iParam0 == 12;
}

struct<6> func_241(int iParam0)//Position - 0x15464
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0" /* GXT: - Pistol Challenge 1 */, 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1" /* GXT: - Pistol Challenge 2 */, 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2" /* GXT: - Pistol Challenge 3 */, 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3" /* GXT: - Submachine Gun Challenge 1 */, 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4" /* GXT: - Submachine Gun Challenge 2 */, 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5" /* GXT: - Submachine Gun Challenge 3 */, 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6" /* GXT: - Shotgun Challenge 1 */, 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7" /* GXT: - Shotgun Challenge 2 */, 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8" /* GXT: - Shotgun Challenge 3 */, 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9" /* GXT: - Assault Rifle Challenge 1 */, 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10" /* GXT: - Assault Rifle Challenge 2 */, 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11" /* GXT: - Assault Rifle Challenge 3 */, 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12" /* GXT: - Light Machine Gun Challenge 1 */, 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13" /* GXT: - Light Machine Gun Challenge 2 */, 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14" /* GXT: - Light Machine Gun Challenge 3 */, 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15" /* GXT: - Heavy Weapon Challenge 1 */, 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16" /* GXT: - Heavy Weapon Challenge 2 */, 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17" /* GXT: - Heavy Weapon Challenge 3 */, 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18" /* GXT: - Rail Gun Challenge 1 */, 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19" /* GXT: - Rail Gun Challenge 2 */, 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20" /* GXT: - Rail Gun Challenge 3 */, 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21" /* GXT: - Rail Gun Challenge 4 */, 24);
			break;
	}
	return Var0;
}

int func_242()//Position - 0x155ED
{
	if ((((((((((((Global_4718592.f_108230 == 1 || Global_4718592.f_108230 == 3) || Global_4718592.f_108230 == 5) || Global_4718592.f_108230 == 7) || Global_4718592.f_108230 == 19) || Global_4718592.f_108230 == 8) || Global_4718592.f_108230 == 9) || Global_4718592.f_108230 == 11) || Global_4718592.f_108230 == 13) || Global_4718592.f_108230 == 21) || Global_4718592.f_108230 == 23) || Global_4718592.f_108230 == 25) || Global_4718592.f_108230 == 26)
	{
		return 1;
	}
	return 0;
}

int func_243(var uParam0, int iParam1)//Position - 0x156EA
{
	if (!func_428(&(uParam0->f_2)))
	{
		func_443(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || uParam0->f_8)
		{
			if (!func_428(&(uParam0->f_5)))
			{
				func_443(&(uParam0->f_5));
				func_244(uParam0, 1051260355);
			}
		}
		if (func_428(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_429(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_428(&(uParam0->f_5)))
		{
			func_443(&(uParam0->f_5));
			func_244(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_429(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_244(var uParam0, float fParam1)//Position - 0x157ED
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_245(int iParam0)//Position - 0x15813
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 40)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_246(int iParam0, int iParam1)//Position - 0x1588C
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_247()//Position - 0x15959
{
	int iVar0;
	
	if (!bLocal_281)
	{
		iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	}
	else
	{
		iLocal_295++;
		iVar0 = (iLocal_295 % 2);
	}
	return iVar0;
}

void func_248(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x15989
{
	char* sVar0;
	
	sVar0 = func_249(iParam4);
	if (iParam4 != 5)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_12(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_443(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_249(int iParam0)//Position - 0x159E9
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_250(var uParam0, int iParam1)//Position - 0x15A58
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_SCORES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_251(int* iParam0)//Position - 0x15A76
{
	iParam0->f_2 = { 0f, -2.3685f, -0.2f };
	iParam0->f_5 = { 0f, 0f, 0f };
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_20 = 0;
	iParam0->f_23 = 0;
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	return 1;
}

void func_252(int iParam0)//Position - 0x15AC6
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_120, iLocal_118, 1500, 1, 1);
	CAM::SET_CAM_ACTIVE(iLocal_121, true);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_120, iLocal_121, 8000, 1, 1);
	CAM::ATTACH_CAM_TO_ENTITY(iLocal_123, iParam0, -0.0301f, 1.498f, 0.7435f, true);
	CAM::POINT_CAM_AT_ENTITY(iLocal_123, iParam0, 0.0557f, -1.4905f, 0.4958f, true);
	CAM::SET_CAM_FOV(iLocal_123, 35f);
}

void func_253(var uParam0, var uParam1, var uParam2, var uParam3, int* iParam4)//Position - 0x15B2A
{
	bool bVar0;
	
	if (!CAM::IS_CAM_INTERPOLATING(iLocal_118))
	{
		bVar0 = false;
		func_334(uParam0);
		if (!bLocal_273)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					HUD::CLEAR_HELP(true);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_161)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!BitTest(Global_113771, 3))
						{
							func_426("DARTS_INSTR_W", -1);
							MISC::SET_BIT(&Global_113771, 3);
						}
						func_338(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!BitTest(Global_113771, 4))
						{
							func_426("DARTS_INSTR_B", -1);
							MISC::SET_BIT(&Global_113771, 4);
						}
						func_338(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				HUD::CLEAR_HELP(true);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_127) && uParam0->f_3 == 2)
			{
				func_333(uParam3);
			}
		}
		else
		{
			func_331(uParam3, iLocal_28);
		}
		func_330(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_327(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_319(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_312(uParam0->f_422[iLocal_28], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/) && iLocal_28 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_28 == 0)
			{
				func_311(iLocal_29, 0);
				if (((((!func_310("DARTS_SHT_USE") && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B")) && !func_310("DARTS_AIM_HLP")) && !func_310("DARTS_STD_HLP")) && !func_310("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_426("DARTS_LEVEL", -1);
						MISC::SET_BIT(&(Global_113810.f_18973.f_6), iLocal_293);
						func_338(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_28] % 2) == 0 && uParam0->f_422[iLocal_28] < 41) && iLocal_29 == 0) && !iLocal_271)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_338(&(uParam3->f_666), 6, 1);
					}
					iLocal_271 = 1;
				}
				else if (uParam0->f_422[iLocal_28] == 50 && !iLocal_271)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_338(&(uParam3->f_666), 6, 1);
					}
					iLocal_271 = 1;
				}
				else if (func_300(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					HUD::CLEAR_PRINTS();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_268)
				{
					if (!func_428(iParam4))
					{
						func_298(iParam4);
					}
					else if (func_7(iParam4) > 20f)
					{
						func_297(iLocal_262[(1 - iLocal_28)]);
						func_429(iParam4);
						iLocal_268 = 1;
					}
				}
			}
			else if (iLocal_29 == 0)
			{
				iLocal_291 = 0;
				func_296(&(uParam0->f_422), &(uParam0->f_249));
				func_293(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (SYSTEM::TIMERA() > MISC::GET_RANDOM_INT_IN_RANGE(1250, 2500))
			{
				func_296(&(uParam0->f_422), &(uParam0->f_249));
				func_293(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_280(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_279(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_277(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_262(uParam0, uParam3);
			break;
		
		case 5:
			func_255(uParam0, uParam2, uParam3);
			if (func_428(iParam4))
			{
				func_429(iParam4);
			}
			break;
		
		case 6:
			func_254(uParam0, uParam3);
			break;
	}
}

void func_254(var uParam0, var uParam1)//Position - 0x15F84
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	float fVar5;
	
	iLocal_291++;
	iLocal_28 = 1;
	iLocal_29 = 0;
	iLocal_275 = 1;
	while (iLocal_29 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_25)
			{
				iLocal_29++;
			}
			else
			{
				func_277(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), 0);
				func_262(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_24)
		{
			if (bLocal_274)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_24 = 0;
				Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11, (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_1 + fLocal_53), uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_2) };
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], Var0, true, false, false, true);
				}
			}
			func_277(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), 0);
			func_262(uParam0, uParam1);
			if (bLocal_274)
			{
				if (iLocal_276)
				{
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_1, Local_77, true, true, false);
					Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11, (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_1 + fLocal_53), uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_2) };
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], Var0, true, false, false, true);
					fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_17, 0, true);
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_296(&(uParam0->f_422), &(uParam0->f_249));
			func_293(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_277(&(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_28] == 0)
			{
				if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_28]++;
				}
				func_338(&(uParam1->f_666), 2, 0);
				func_338(&(uParam1->f_666), 3, 0);
				func_338(&(uParam1->f_666), 4, 0);
				func_338(&(uParam1->f_666), 5, 1);
				SYSTEM::SETTIMERB(0);
			}
			func_262(uParam0, uParam1);
			if (bLocal_274)
			{
				if (iLocal_276)
				{
					iVar4 = 0;
					while (iVar4 < iLocal_29 + 1)
					{
						if (!uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/].f_1, Local_77, true, true, false);
							Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/].f_11, (uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/].f_11.f_1 + fLocal_53), uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/].f_11.f_2) };
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/]))
							{
								ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/], Var0, true, false, false, true);
							}
							fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
							uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/].f_17 = { 90f, fVar5, uParam0->f_243.f_4 };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/], uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/].f_17, 0, true);
							uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_28 /*79*/][iVar4 /*26*/].f_24 = 0;
						}
						iVar4++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_291 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_255(var uParam0, var uParam1, var uParam2)//Position - 0x1640D
{
	struct<3> Var0;
	int iVar3;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_261();
			}
			if (iLocal_28 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_260("DARTS_PLR_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_259("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_260("DARTS_PLR_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_260("DARTS_SWITCH_C", uParam0->f_422[iLocal_28], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_260("DARTS_OPP_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_259("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_260("DARTS_OPP_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_260("DARTS_SWITCH_B", uParam0->f_422[iLocal_28], 5000, 0);
			}
			SYSTEM::SETTIMERB(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
			{
				iLocal_289++;
				if (iLocal_289 >= uParam0->f_436)
				{
					iLocal_289 = 0;
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_289 /*26*/], true) };
				func_53(Var0);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
			{
				iLocal_289 = (iLocal_289 - 1);
				if (iLocal_289 < 0)
				{
					iLocal_289 = (uParam0->f_436 - 1);
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_289 /*26*/], true) };
				func_53(Var0);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_289 /*26*/], true) };
				func_55(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				iLocal_265 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || (iLocal_275 && bLocal_274))
			{
				iLocal_265 = 1;
			}
			if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) && uParam0->f_248 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_289 /*26*/], true) };
				func_55(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_270)
				{
					if (func_258(iLocal_28 == 0, &(iLocal_262[1]), (uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_270 = 1;
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 500) < 50)
				{
				}
			}
			else if (!iLocal_270)
			{
				if (func_257(iLocal_28 == 0, &(iLocal_262[1]), (uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_270 = 1;
				}
			}
			else if ((MISC::GET_GAME_TIMER() % 500) < 50)
			{
			}
			if (iLocal_265 || SYSTEM::TIMERB() > 2000)
			{
				iLocal_275 = 0;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_251(&(uParam0->f_5[iLocal_28 /*79*/][iVar3 /*26*/]));
					iVar3++;
				}
				if (uParam0->f_425[iLocal_28] != uParam0->f_422[iLocal_28])
				{
					func_256(uParam1, iLocal_28, uParam0->f_422[iLocal_28]);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, false, 0, false);
				}
				uParam0->f_425[iLocal_28] = uParam0->f_422[iLocal_28];
				iLocal_29 = 0;
				uParam0->f_428 = 0;
				if (iLocal_28 == 0)
				{
					iLocal_28 = 1;
				}
				else
				{
					iLocal_28 = 0;
				}
				func_442(uParam1, iLocal_28);
				iLocal_97 = 0;
				func_421();
				if (!bLocal_274)
				{
					HUD::CLEAR_SMALL_PRINTS();
				}
				iLocal_91 = 0;
				uParam2->f_670 = 3;
				iLocal_271 = 0;
				iLocal_268 = 0;
				iLocal_270 = 0;
				iLocal_265 = 0;
				iLocal_289 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_256(var uParam0, int iParam1, int iParam2)//Position - 0x16826
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_DARTS_SCORE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_257(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1684A
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			MISC::SET_BIT(&uVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			MISC::SET_BIT(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			MISC::SET_BIT(&uVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			MISC::SET_BIT(&uVar0, 3);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 85)
	{
		if (BitTest(uVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_258(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16A3B
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			MISC::SET_BIT(&uVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			MISC::SET_BIT(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			MISC::SET_BIT(&uVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			MISC::SET_BIT(&uVar0, 3);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 75)
	{
		if (BitTest(uVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !ENTITY::DOES_ENTITY_EXIST(func_506()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_259(char* sParam0, int iParam1, int iParam2)//Position - 0x16C88
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_260(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16CA1
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

void func_261()//Position - 0x16CC0
{
	CAM::SET_CAM_ACTIVE(iLocal_127, true);
	CAM::SET_CAM_ACTIVE(iLocal_118, false);
}

void func_262(var uParam0, var uParam1)//Position - 0x16CD6
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_28] = (uParam0->f_422[iLocal_28] - uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_274(uParam0);
		func_338(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_28]++;
		if (iLocal_28 == 0)
		{
			func_272(4);
			iLocal_149[10]++;
		}
		if ((uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_28] == 0)
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_28]++;
				if (iLocal_28 == 0)
				{
					func_272(0);
					iLocal_149[1]++;
				}
			}
			func_338(&(uParam1->f_666), 2, 0);
			func_338(&(uParam1->f_666), 3, 0);
			func_338(&(uParam1->f_666), 4, 0);
			func_338(&(uParam1->f_666), 5, 1);
			func_274(uParam0);
			func_338(&(uParam1->f_666), 5, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if ((uParam0->f_422[iLocal_28] == 1 || uParam0->f_422[iLocal_28] < 0) || (uParam0->f_422[iLocal_28] == 0 && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_28] == 0 && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 != 2)
			{
				func_260("DARTS_PLR_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				func_338(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_28] == 1)
			{
				func_338(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_28 == 1)
			{
				func_260("DARTS_OPP_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_260("DARTS_PLR_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_270)
			{
				if (func_271(iLocal_262[(1 - iLocal_28)]))
				{
					iLocal_270 = 1;
				}
			}
			uParam0->f_422[iLocal_28] = uParam0->f_425[iLocal_28];
			if (uParam0->f_1 == 6)
			{
			}
			SYSTEM::SETTIMERA(0);
			uParam0->f_1 = 5;
			if (iLocal_28 == 0)
			{
				uParam0->f_435++;
			}
			func_338(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_28]++;
				if (iLocal_28 == 0)
				{
					func_270(uParam1, 1);
					func_272(0);
					iLocal_149[1]++;
				}
				if (!iLocal_270 && !iLocal_275)
				{
					if (func_269(iLocal_262[iLocal_28]))
					{
						iLocal_270 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 0)
			{
				if (!iLocal_270 && !iLocal_275)
				{
					func_268(iLocal_262[(1 - iLocal_28)]);
					iLocal_270 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_270 && !iLocal_275)
				{
					if (func_267(iLocal_262[1], iLocal_28 == 0))
					{
						iLocal_270 = 1;
					}
				}
				if (iLocal_28 == 0)
				{
					func_270(uParam1, 0);
					func_272(1);
					iLocal_149[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_270 && !iLocal_275)
				{
					if (func_265(iLocal_262[iLocal_28], iLocal_28 == 0))
					{
						iLocal_270 = 1;
					}
				}
			}
			if (iLocal_28 == 0)
			{
				if (iLocal_29 < 2)
				{
					if (uParam0->f_422[iLocal_28] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_338(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_338(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_28] < 41 && uParam0->f_422[iLocal_28] > 0) && (uParam0->f_422[iLocal_28] % 2) == 0) || uParam0->f_422[iLocal_28] == 50)
					{
						if (uParam0->f_422[iLocal_28] == 50)
						{
						}
						if (!iLocal_269)
						{
							func_264(iLocal_262[1]);
							iLocal_269 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_338(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_28 == 0 && iLocal_29 < 2)
			{
				func_263("DARTS_REMAIN", (uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28]), uParam0->f_422[iLocal_28], 7500, 0);
			}
			else if (iLocal_28 == 1 && iLocal_29 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_330(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_25 = 1;
			iLocal_29++;
			SYSTEM::SETTIMERA(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_29 == 3)
			{
				iLocal_29 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_28 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_338(&(uParam1->f_666), 3, 0);
			func_338(&(uParam1->f_666), 2, 0);
			func_338(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_263(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x17273
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, true);
}

void func_264(int iParam0)//Position - 0x17298
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_265(int iParam0, bool bParam1)//Position - 0x172B6
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_506()))
		{
			if (bParam1)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_506(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_266())
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_266()//Position - 0x17335
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_267(int iParam0, bool bParam1)//Position - 0x17353
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_506()))
		{
			if (bParam1)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_506(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_266())
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0)//Position - 0x173D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar1 = 1;
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_269(int iParam0)//Position - 0x17415
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_270(var uParam0, int iParam1)//Position - 0x17441
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_271(int iParam0)//Position - 0x17456
{
	int iVar0;
	
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		iVar0 = 1;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_272(int iParam0)//Position - 0x17482
{
	switch (iParam0)
	{
		case 0:
			Global_113810.f_18973++;
			func_273("DARTS_STAT_NUM_BULLSEYES", Global_113810.f_18973);
			break;
		
		case 1:
			Global_113810.f_18973.f_1++;
			func_273("DARTS_STAT_NUM_180S", Global_113810.f_18973.f_1);
			break;
		
		case 2:
			Global_113810.f_18973.f_2++;
			func_273("DARTS_STAT_NUM_WINS", Global_113810.f_18973.f_2);
			break;
		
		case 3:
			Global_113810.f_18973.f_3++;
			func_273("DARTS_STAT_NUM_LOSS", Global_113810.f_18973.f_3);
			break;
		
		case 4:
			Global_113810.f_18973.f_4++;
			func_273("DARTS_STAT_DARTS_THROWN", Global_113810.f_18973.f_4);
			break;
		
		case 5:
			Global_113810.f_18973.f_5++;
			func_273("DARTS_STAT_NUM_GAMES", Global_113810.f_18973.f_5);
			break;
		
		case 7:
			Global_113810.f_18973.f_7 = (SYSTEM::TO_FLOAT(Global_113810.f_18973.f_2) / SYSTEM::TO_FLOAT(Global_113810.f_18973.f_5));
			break;
		
		case 8:
			Global_113810.f_18973.f_8 = (SYSTEM::TO_FLOAT(Global_113810.f_18973.f_4) / SYSTEM::TO_FLOAT(Global_113810.f_18973.f_5));
			break;
	}
}

void func_273(char* sParam0, var uParam1)//Position - 0x175F9
{
}

void func_274(var uParam0)//Position - 0x17601
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_272(5);
	HUD::CLEAR_SMALL_PRINTS();
	HUD::CLEAR_HELP(true);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_422(2)))
	{
		AUDIO::STOP_AUDIO_SCENE(func_422(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_261();
	}
	if (iLocal_28 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_279 = 1;
		uParam0->f_446[iLocal_28]++;
		uParam0->f_437[iLocal_28]++;
		func_272(2);
		iLocal_149[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_28]++;
		uParam0->f_437[iLocal_28]++;
		func_272(3);
		iLocal_149[9]++;
	}
	func_272(7);
	func_443(&(uParam0->f_254));
	if (func_276(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_28]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_275(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_149[3]++;
			iLocal_297 = 0;
		}
		else
		{
			iLocal_149[5]++;
			iLocal_297 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	AUDIO::START_AUDIO_SCENE(func_422(3));
	iLocal_276 = 1;
	uParam0->f_428 = 0;
	iLocal_97 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_275(bool bParam0)//Position - 0x177AA
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_92())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

int func_276(var uParam0)//Position - 0x1781D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_117(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_149[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_277(var uParam0, var uParam1, bool bParam2)//Position - 0x178DF
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	
	Var3 = { uParam0->f_8 };
	Var3.f_0 = (Var3.f_0 + 0.0041f);
	Var3.f_2 = (Var3.f_2 + 0.0002f);
	fVar1 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = func_278(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, false, 0, false);
	}
	if (fVar0 < 0.009f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		else
		{
			uParam0->f_21 = 1;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, false, 0, false);
				}
				iVar7 = (iLocal_31[iVar6] * uParam0->f_21);
				uParam0->f_20 = iVar7;
			}
			fVar2 = (fVar2 + 18f);
			iVar6++;
		}
	}
}

float func_278(struct<3> Param0)//Position - 0x17B13
{
	return SYSTEM::SQRT(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

int func_279(var uParam0)//Position - 0x17B2E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_29)
	{
		if (((uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8 > (uParam0->f_5[iLocal_28 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8 < (uParam0->f_5[iLocal_28 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_28 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_28 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_280(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x17BF4
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_28 == 0 && iParam2 == 1)
	{
		func_281("Darts", "Dart_Reticules", &Local_68, 1, 0, 4, 0);
	}
	fVar6 = MISC::GET_FRAME_TIME();
	Var3 = { uParam0->f_5 * Vector(fVar6, fVar6, fVar6) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var3 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_53), uParam0->f_11.f_2) };
		ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, true, false, false, true);
		return 1;
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_53), uParam0->f_2.f_2) };
	ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, true, false, false, true);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar6));
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_281(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x17D14
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_292(&Var0);
			break;
		
		case 1:
			func_291(&Var0);
			break;
		
		case 5:
			func_290(&Var0);
			break;
		
		case 6:
			func_289(&Var0);
			break;
		
		case 7:
			func_288(&Var0);
			break;
		
		case 8:
			func_287(&Var0);
			break;
		
		case 9:
			func_286(&Var0);
			break;
	}
	if (func_284())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_283(Var0.f_0), func_282(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_283(Var0.f_0), func_282(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

var func_282(var uParam0)//Position - 0x17E1B
{
	return uParam0;
}

var func_283(var uParam0)//Position - 0x17E25
{
	return uParam0;
}

int func_284()//Position - 0x17E2F
{
	if (func_285())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_285()//Position - 0x17E6E
{
	return Global_1574604;
}

void func_286(var uParam0)//Position - 0x17E7A
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_287(var uParam0)//Position - 0x17E94
{
	uParam0->f_7 = 2;
}

void func_288(var uParam0)//Position - 0x17EA1
{
	uParam0->f_7 = 5;
}

void func_289(var uParam0)//Position - 0x17EAE
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_290(var uParam0)//Position - 0x17ECB
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_291(var uParam0)//Position - 0x17EE8
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_292(var uParam0)//Position - 0x17F11
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_293(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x17F39
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar13 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_31[iVar5])
			{
				fVar4 = fVar13;
			}
			fVar13 = (fVar13 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(func_295(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-60f, 60f);
		}
		else
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-200f, -60f);
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(func_295(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, -0.3f);
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (SYSTEM::SIN(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (SYSTEM::COS(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_294(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_294(uParam0);
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, Local_77, false, false, false);
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
		Var7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, Local_80) };
		Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_53), uParam0->f_8.f_2) };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D((Var7.f_0 - Var10.f_0), (Var7.f_1 - Var10.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
		uParam0->f_2 = { Local_80 };
		*uParam2 = 3;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
	}
}

void func_294(var uParam0)//Position - 0x18293
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_80 - uParam0->f_8 };
	fVar3 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
	fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar4 - 180f);
	fVar5 = (MISC::TAN(uParam0->f_17.f_2) * fVar6);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar5);
	Var0 = { Local_80 - uParam0->f_11 };
	fVar3 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
}

int func_295(var uParam0)//Position - 0x1833F
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_296(var uParam0, var uParam1)//Position - 0x18373
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_28] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_28] > 60)
	{
		if (((*uParam0)[iLocal_28] % 2) == 1)
		{
			if (func_266())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_28] < 61)
	{
		if ((*uParam0)[iLocal_28] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_28] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_28] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_28] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_28] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_28] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_28] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_28] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_28] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_297(int iParam0)//Position - 0x184C5
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 33)
	{
		func_4(iParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_298(int* iParam0)//Position - 0x184F1
{
	func_299(iParam0, 0f);
}

void func_299(int* iParam0, float fParam1)//Position - 0x18500
{
	iParam0->f_1 = (func_8(BitTest(*iParam0, 4)) + fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_300(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x1852B
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_95)
			{
				if (SYSTEM::TIMERB() > 50)
				{
					iLocal_96 = 0;
					iLocal_97 = 0;
					iLocal_99 = 0;
					if (func_309(uParam0, uParam1, 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						iLocal_95 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) && iLocal_99) && !bParam4)
				{
					iLocal_96 = 1;
					iLocal_97 = 1;
					if (!iLocal_98)
					{
						func_308(uParam0, *uParam2);
						iLocal_98 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_307();
						}
						func_306(uParam0, iParam6);
						func_305(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_80 };
						iLocal_96 = 1;
						iLocal_97 = 1;
					}
					if (iLocal_96 && iLocal_97)
					{
						if (!iLocal_95)
						{
							HUD::CLEAR_PRINTS();
							iLocal_95 = 1;
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_95)
			{
				func_281("Darts", "Dart_Reticules", &Local_59, 1, 0, 4, 0);
				if (SYSTEM::TIMERB() > 25)
				{
					if (func_309(uParam0, uParam1, 1))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						iLocal_95 = 0;
						return 1;
					}
				}
			}
			else if (!func_301(uParam0))
			{
				if (!iLocal_98)
				{
					func_308(uParam0, *uParam2);
				}
				else
				{
					func_307();
					func_306(uParam0, iParam6);
					func_305(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_95)
			{
				iLocal_95 = 1;
				SYSTEM::SETTIMERB(0);
			}
			break;
	}
	return 0;
}

int func_301(var uParam0)//Position - 0x187A0
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
	fVar2 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	iLocal_134 = SYSTEM::ROUND(fVar2);
	switch (iLocal_133)
	{
		case 0:
			if (iLocal_134 > 120)
			{
				iLocal_135 = MISC::GET_GAME_TIMER();
				iLocal_133 = 1;
			}
			if (iLocal_134 < -100)
			{
				iLocal_139 = SYSTEM::ROUND(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_134 > 120)
			{
				iLocal_135 = MISC::GET_GAME_TIMER();
			}
			else if ((iLocal_134 < 120 && iLocal_134 > -120) && (MISC::GET_GAME_TIMER() - iLocal_135) > 500)
			{
				iLocal_133 = 0;
			}
			else if (iLocal_134 < -100)
			{
				iLocal_136 = MISC::GET_GAME_TIMER();
				if ((iLocal_136 - iLocal_135) < 500)
				{
					iLocal_139 = SYSTEM::ROUND(fVar1);
					iLocal_137 = (iLocal_136 - iLocal_135);
					iLocal_133 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_137 > iLocal_138)
			{
				if (iLocal_137 > 100 && iLocal_137 < 150)
				{
					fLocal_142 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_142);
				}
				else
				{
					fLocal_141 = (SYSTEM::TO_FLOAT(iLocal_138) / SYSTEM::TO_FLOAT(iLocal_137));
					fLocal_142 = ((1f - fLocal_141) * fLocal_145);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_142);
				}
			}
			else
			{
				fLocal_142 = 0f;
			}
			if (iLocal_139 > 7)
			{
				fLocal_143 = (SYSTEM::TO_FLOAT(iLocal_139) / fLocal_148);
				fLocal_144 = (fLocal_146 * fLocal_143);
				uParam0->f_8 = (uParam0->f_8 + fLocal_144);
			}
			else if (iLocal_139 < -7)
			{
				fLocal_143 = (SYSTEM::TO_FLOAT(iLocal_139) / fLocal_147);
				fLocal_144 = (fLocal_146 * fLocal_143);
				uParam0->f_8 = (uParam0->f_8 - fLocal_144);
			}
			else
			{
				fLocal_144 = 0f;
			}
			if (fLocal_142 < 0.066477f && fLocal_144 == 0f)
			{
				func_304();
			}
			else if (fLocal_142 <= 0.066477f && fLocal_144 < 0.06f)
			{
				func_303();
			}
			else
			{
				func_302();
			}
			iVar0 = 1;
			iLocal_133 = 0;
			break;
	}
	return iVar0;
}

void func_302()//Position - 0x1895E
{
	Local_68.f_4 = 210;
	Local_68.f_5 = 23;
	Local_68.f_6 = 19;
}

void func_303()//Position - 0x18978
{
	Local_68.f_4 = 183;
	Local_68.f_5 = 137;
	Local_68.f_6 = 0;
}

void func_304()//Position - 0x18991
{
	Local_68.f_4 = 16;
	Local_68.f_5 = 184;
	Local_68.f_6 = 10;
}

void func_305(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x189AB
{
	struct<3> Var0;
	
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_53), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_53), uParam0->f_14.f_2) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_59, &(Local_59.f_1));
	if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_92)
		{
			func_281("Darts", "Dart_Reticules_Zoomed", &Local_59, 1, 0, 4, 0);
		}
		else
		{
			func_281("Darts", "Dart_Reticules", &Local_59, 1, 0, 4, 0);
		}
		if (!iLocal_99)
		{
			iLocal_99 = 1;
		}
	}
}

void func_306(var uParam0, int iParam1)//Position - 0x18A5A
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
	fVar4 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	fVar5 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
	fVar6 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (MISC::ABSF(fVar5) > MISC::ABSF(fVar3) || MISC::ABSF(fVar6) > MISC::ABSF(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 227 /*INPUT_SCRIPT_RB*/))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_90 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_90 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_90 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_90 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_90 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_90 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_90 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_90 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_87), (0f + fLocal_87));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_86), (0f + fLocal_86));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_87), (0f + fLocal_87));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_86), (0f + fLocal_86));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_90 = 0.5f;
		if (iLocal_133 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_307()//Position - 0x18E4C
{
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 227 /*INPUT_SCRIPT_RB*/))
	{
		fLocal_90 = 0.3f;
	}
	else
	{
		fLocal_90 = 0.1f;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
	{
		if (bLocal_92)
		{
			if (SYSTEM::TIMERA() > iLocal_140)
			{
				fLocal_86 = fLocal_88;
				fLocal_87 = fLocal_89;
				fLocal_90 = 0.1f;
				bLocal_92 = false;
			}
		}
		else if (iLocal_91 < 1)
		{
			fLocal_86 = 0.03f;
			fLocal_87 = 0.05f;
			fLocal_90 = 0.1f;
			SYSTEM::SETTIMERA(0);
			bLocal_92 = true;
			iLocal_91++;
		}
		else if ((((((!func_310("DARTS_FST_HLP") && !func_310("DARTS_AIM_HLP")) && !func_310("DARTS_CLOCK")) && !func_310("DARTS_STD_HLP")) && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B")) && !iLocal_93)
		{
			iLocal_93 = 1;
			if (!BitTest(Global_113771, 1))
			{
				func_426("DARTS_SHT_USE", -1);
				MISC::SET_BIT(&Global_113771, 1);
			}
		}
	}
	else if (bLocal_92)
	{
		fLocal_86 = fLocal_88;
		fLocal_87 = fLocal_89;
		fLocal_90 = 0.1f;
		bLocal_92 = false;
	}
}

void func_308(var uParam0, struct<4> Param1, var uParam5, var uParam6)//Position - 0x18F5B
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_80 };
}

int func_309(var uParam0, var uParam1, bool bParam2)//Position - 0x18FAF
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, Local_77, true, false, false, true);
	}
	else
	{
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, Local_77, false, false, false);
	}
	bLocal_92 = false;
	fLocal_90 = 0.1f;
	fLocal_86 = fLocal_88;
	fLocal_87 = fLocal_89;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_294(uParam0);
	fVar10 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
	Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, Local_80) };
	Var6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_53), uParam0->f_14.f_2) };
	fVar11 = MISC::GET_HEADING_FROM_VECTOR_2D((Var3.f_0 - Var6.f_0), (Var3.f_1 - Var6.f_1));
	fVar11 = (fVar11 - 180f);
	fVar9 = 90f;
	uParam0->f_17 = { fVar9, fVar10, fVar11 };
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
	iLocal_96 = 0;
	iLocal_98 = 0;
	if (bParam2)
	{
		func_281("Darts", "Dart_Reticules", &Local_59, 1, 0, 4, 0);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_53), uParam0->f_8.f_2) };
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_68, &(Local_68.f_1));
	return 1;
}

bool func_310(char* sParam0)//Position - 0x190E6
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_311(int iParam0, int iParam1)//Position - 0x190F9
{
	if (iParam0 == 0)
	{
		if (!BitTest(Global_113771, 9))
		{
			if ((!func_310("DARTS_SHT_USE") && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B"))
			{
				func_426("DARTS_AIM_HLP", -1);
				MISC::SET_BIT(&Global_113771, 9);
			}
		}
		else if (iParam1 && !BitTest(Global_113771, 7))
		{
			if ((!func_310("DARTS_AIM_HLP") && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B"))
			{
				func_426("DARTS_CLOCK", -1);
				MISC::SET_BIT(&Global_113771, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(Global_113771, 8))
		{
			if ((!func_310("DARTS_SHT_USE") && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B"))
			{
				func_426("DARTS_STD_HLP", -1);
				MISC::SET_BIT(&Global_113771, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_94 && !func_310("DARTS_SHT_USE")) && !func_310("DARTS_INSTR_W")) && !func_310("DARTS_INSTR_B"))
		{
			if (!BitTest(Global_113771, 2))
			{
				func_426("DARTS_FST_HLP", -1);
				MISC::SET_BIT(&Global_113771, 2);
			}
			iLocal_94 = 1;
		}
	}
}

int func_312(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x19242
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_315(iParam0) };
			*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, Var0) };
			func_314(*uParam3);
			SYSTEM::SETTIMERB(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (SYSTEM::TIMERB() > 3000 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				func_313();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_313()//Position - 0x192B3
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_118, iLocal_130, 2000, 1, 1);
	CAM::DESTROY_CAM(iLocal_130, false);
}

void func_314(struct<3> Param0)//Position - 0x192CF
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	iLocal_130 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Param0, Var0, 65f, false, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_130, iLocal_118, 2000, 1, 1);
}

Vector3 func_315(int iParam0)//Position - 0x19311
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_318(iParam0);
		Var1.f_1 = -0.5f;
		Var1.f_0 = func_317(fVar0);
		Var1.f_2 = func_316(fVar0);
	}
	return Var1;
}

float func_316(float fParam0)//Position - 0x19355
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::COS(fParam0) * fVar0);
	return fVar1;
}

float func_317(float fParam0)//Position - 0x19371
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::SIN(fParam0) * fVar0);
	return fVar1;
}

var func_318(int iParam0)//Position - 0x1938D
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_31[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_319(var uParam0)//Position - 0x193C9
{
	switch (*uParam0)
	{
		case 0:
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/))
			{
				func_326(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/))
			{
				if (!CAM::IS_CAM_INTERPOLATING(iLocal_127))
				{
					func_324();
					func_323(&iLocal_302, Local_333, Local_336, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/))
			{
				*uParam0 = 3;
			}
			else
			{
				func_320(&iLocal_302, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_326(0);
			func_507();
			if (CAM::DOES_CAM_EXIST(iLocal_302))
			{
				if (CAM::IS_CAM_ACTIVE(iLocal_302))
				{
					CAM::SET_CAM_ACTIVE(iLocal_302, false);
				}
				CAM::DESTROY_CAM(iLocal_302, false);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_320(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0x194BC
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	func_322(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar5 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
		fVar6 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar7 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/) * fParam5) * 127f));
		}
		iVar0[2] = func_321((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_321((iVar0[3] + uParam0->f_25), -127, 127);
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
	fVar9 = (30f * SYSTEM::TIMESTEP());
	Var10 = { uParam0->f_8 + uParam0->f_11 };
	if ((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14(((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14(((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14(((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
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
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
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
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
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

int func_321(int iParam0, int iParam1, int iParam2)//Position - 0x19A10
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

void func_322(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x19A35
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

void func_323(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)//Position - 0x19B39
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = fParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_324()//Position - 0x19C31
{
	if (iLocal_258)
	{
		return;
	}
	func_325();
	PAD::INIT_PC_SCRIPTED_CONTROLS("Darts Zoom");
	iLocal_258 = 1;
}

void func_325()//Position - 0x19C53
{
	if (iLocal_257 || iLocal_258)
	{
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		iLocal_257 = 0;
		iLocal_258 = 0;
	}
}

void func_326(bool bParam0)//Position - 0x19C76
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_127, iLocal_118, 1000, 1, 1);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_118, iLocal_127, 1000, 1, 1);
	}
}

void func_327(var uParam0)//Position - 0x19CA0
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_248(&(uParam0->f_62), func_329(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_243(&(uParam0->f_62), 0))
			{
				func_328(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_328(var uParam0)//Position - 0x19D25
{
	uParam0->f_8 = 0;
	func_429(&(uParam0->f_2));
	func_429(&(uParam0->f_5));
}

char* func_329(int iParam0)//Position - 0x19D42
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_330(var uParam0)//Position - 0x19D6F
{
	if (!iLocal_97)
	{
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			iLocal_97 = 1;
		}
	}
	if ((iLocal_28 == 1 && iLocal_29 < 3) && *uParam0 != 5)
	{
		if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && iLocal_97)
		{
			*uParam0 = 6;
		}
	}
}

void func_331(var uParam0, int iParam1)//Position - 0x19DC7
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_91 > 0)
			{
				func_122(&(uParam0->f_509), 0, 0, 0, 1);
				func_121(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_332(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_121(&(uParam0->f_509), "IB_ZOOM" /* GXT: Zoom */, 2, 228, 1, 1, 0);
				func_118(&(uParam0->f_509), 1);
				func_338(&(uParam0->f_666), 8, 0);
				func_338(&(uParam0->f_666), 16, 0);
				func_338(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_91 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_122(&(uParam0->f_509), 0, 0, 0, 1);
				func_121(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_332(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_121(&(uParam0->f_509), "IB_ZOOM" /* GXT: Zoom */, 2, 228, 1, 1, 0);
				func_118(&(uParam0->f_509), 1);
				func_338(&(uParam0->f_666), 8, 0);
				func_338(&(uParam0->f_666), 16, 0);
				func_338(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_122(&(uParam0->f_509), 1, 0, 0, 1);
			func_121(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_121(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_118(&(uParam0->f_509), 1);
			func_338(&(uParam0->f_666), 16, 1);
			func_338(&(uParam0->f_666), 8, 0);
			func_338(&(uParam0->f_666), 15, 0);
			func_338(&(uParam0->f_666), 17, 0);
			func_338(&(uParam0->f_666), 23, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		func_206(func_117(func_3(&(uParam0->f_666), 16), 1, 2));
		func_124(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_338(&(uParam0->f_666), 15, 0);
		func_338(&(uParam0->f_666), 16, 0);
		func_338(&(uParam0->f_666), 23, 0);
	}
}

int func_332(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1A083
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_333(var uParam0)//Position - 0x1A14E
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_122(&(uParam0->f_509), 0, 0, 0, 1);
			func_332(&(uParam0->f_509), "IB_MAPMOVE" /* GXT: Move */, 2, 21, 1, 0);
			func_121(&(uParam0->f_509), "IB_ZOOM" /* GXT: Zoom */, 2, 39, 1, 1, 0);
			func_118(&(uParam0->f_509), 1);
			func_338(&(uParam0->f_666), 23, 1);
			func_338(&(uParam0->f_666), 8, 0);
			func_338(&(uParam0->f_666), 16, 0);
			func_338(&(uParam0->f_666), 15, 0);
			func_338(&(uParam0->f_666), 17, 0);
		}
		func_124(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_338(&(uParam0->f_666), 15, 0);
		func_338(&(uParam0->f_666), 16, 0);
		func_338(&(uParam0->f_666), 23, 0);
		func_338(&(uParam0->f_666), 17, 0);
	}
}

void func_334(var uParam0)//Position - 0x1A260
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_97)
	{
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			iLocal_97 = 1;
		}
		else
		{
			iLocal_97 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_97 && iLocal_96 == 0)
			{
				iLocal_97 = 0;
				bVar0 = false;
				bLocal_273 = false;
				HUD::CLEAR_HELP(true);
			}
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/))
		{
			if (!bLocal_273)
			{
				*uParam0 = 14;
				bLocal_273 = true;
				HUD::CLEAR_HELP(true);
			}
		}
		else if (func_310("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_273 = false;
		}
	}
}

void func_335(int iParam0)//Position - 0x1A303
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_336(int iParam0)//Position - 0x1A321
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_337(int iParam0)//Position - 0x1A376
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_338(int* iParam0, int iParam1, bool bParam2)//Position - 0x1A3CB
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iParam1);
	}
}

int func_339(int iParam0, var uParam1)//Position - 0x1A3EB
{
	if (iParam0 >= 10)
	{
		if (!BitTest(Global_113810.f_18973.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_340(int iParam0, var uParam1, var uParam2)//Position - 0x1A414
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_251(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_250(uParam1, iVar0);
		func_256(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_28 = 0;
	iLocal_29 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_289 = 0;
	iParam0->f_436 = 0;
	iLocal_91 = 0;
	iLocal_266 = 1;
	iLocal_267 = 0;
	iLocal_269 = 0;
	iLocal_93 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_275 = 0;
	func_338(&(uParam2->f_666), 6, 0);
	func_346();
	func_344(uParam2);
	if (iParam0->f_457)
	{
		func_341(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_341(bool bParam0)//Position - 0x1A500
{
	HUD::DISPLAY_RADAR(false);
	if (CAM::IS_CAM_ACTIVE(iLocal_120))
	{
		CAM::SET_CAM_ACTIVE(iLocal_120, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_124))
	{
		CAM::SET_CAM_ACTIVE(iLocal_124, false);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_343();
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_342(bParam0);
}

void func_342(bool bParam0)//Position - 0x1A551
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE(iLocal_118, true);
	}
}

void func_343()//Position - 0x1A565
{
	CAM::SET_CAM_ACTIVE(iLocal_120, true);
}

void func_344(var uParam0)//Position - 0x1A574
{
	func_345();
	uParam0->f_670 = 3;
	func_338(&(uParam0->f_666), 15, 0);
	func_338(&(uParam0->f_666), 16, 0);
	func_338(&(uParam0->f_666), 17, 0);
}

void func_345()//Position - 0x1A5AA
{
	int iVar0;
	
	Local_162.f_66 = -1;
	Local_162.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_162.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_162.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_162.f_9[iVar0 /*7*/].f_5 = 0;
		Local_162.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_162.f_5 = 0;
	Local_162.f_5.f_1 = -1f;
	Local_162.f_5.f_2 = 0;
	Local_162.f_0 = 0;
	Local_162.f_1 = 0;
}

void func_346()//Position - 0x1A61A
{
	SYSTEM::SETTIMERA(0);
	iLocal_97 = 0;
	HUD::CLEAR_SMALL_PRINTS();
}

void func_347(bool bParam0, int iParam1)//Position - 0x1A62E
{
	int iVar0;
	
	if (!func_349(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23390.f_8892)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23390.f_8892 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23390.f_6071[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23390.f_6071[iVar0] = 0;
	}
	if (Global_23390.f_6057[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23390.f_6057[iVar0] = 0;
	}
	if (Global_23390.f_6064[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23390.f_6064[iVar0] = 0;
	}
	if (bParam0)
	{
		func_348(&(Global_23390.f_6103[iVar0 /*10*/]));
		Global_23390.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23390.f_6164[iVar0] = 0;
	}
}

void func_348(int* iParam0)//Position - 0x1A6EC
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

int func_349(var uParam0, bool bParam1, int iParam2)//Position - 0x1A718
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
		if (Global_23390.f_6164[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23390.f_6164[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23390.f_6164[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_350(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1A7B5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_351(var uParam0, var uParam1, var uParam2)//Position - 0x1A7E5
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_409(0, 0, 0, 1);
		func_408(0, -1, 1);
		if (func_407())
		{
			if (Global_4541034 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4541034;
				func_406(uParam0->f_660, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
				{
					func_405(sVar0, 0, 0);
				}
			}
			Global_4541035 = MISC::GET_GAME_TIMER() + 300;
		}
		else if (func_404() && MISC::GET_GAME_TIMER() > Global_4541035)
		{
			if (Global_4541034 == uParam0->f_660)
			{
				iVar2 = func_403(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4541035 = MISC::GET_GAME_TIMER() + 300;
		}
		if (func_402(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_406(uParam0->f_660, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_405(sVar0, 0, 0);
			}
		}
		if (func_401(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_406(uParam0->f_660, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_405(sVar0, 0, 0);
			}
		}
		if (func_400(&(uParam0->f_633)) || func_399(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_385(uParam0);
		}
		if (func_384(&(uParam0->f_636)) || func_382(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_385(uParam0);
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_381(uParam0->f_662 + 1, 1);
			*uParam2 = func_381(uParam0->f_664 + 1, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			return 1;
		}
		func_354(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || func_353())
		{
			func_352(0, 0);
			func_338(&(uParam0->f_666), 8, 0);
			func_338(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			func_39(0);
			*uParam1 = -1;
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			func_385(uParam0);
			func_338(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_352(bool bParam0, bool bParam1)//Position - 0x1ABF5
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23390.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23390.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2695123[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23390.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23390.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23390.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23390.f_5532[iVar0] = 0;
		Global_23390.f_5670[iVar0] = 0;
		Global_23390.f_5799[iVar0] = 0;
		Global_23390.f_6322[iVar0] = 0f;
		Global_23390.f_5928[iVar0] = 0;
		Global_23390.f_6188[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23390.f_5499[iVar0] = 0;
		Global_23390.f_5511[iVar0] = 0f;
		Global_23390.f_5505[iVar0] = -1f;
		Global_23390.f_5518[iVar0] = 0;
		Global_23390.f_5526[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23390.f_5393[iVar0 /*4*/]), "", 16);
		Global_23390.f_5450[iVar0] = -1;
		Global_23390.f_5465[iVar0] = 363;
		Global_23390.f_5480[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		StringCopy(&(Global_23390.f_6463[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23390.f_7488[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23390.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4540958.f_16), "", 16);
	Global_4540958.f_20 = -1;
	Global_23390 = 0;
	Global_23390.f_5661 = 0;
	Global_23390.f_5662 = 0;
	Global_23390.f_5663 = 0;
	Global_23390.f_5665 = 0;
	Global_23390.f_5666 = 0;
	Global_23390.f_5667 = 0;
	Global_23390.f_5664 = 0;
	Global_23390.f_6317 = 0;
	Global_23390.f_6457 = 0;
	Global_23390.f_6182 = 0;
	Global_23390.f_6181 = 0;
	Global_23390.f_6183 = 0;
	StringCopy(&(Global_23390.f_5081), "", 24);
	Global_23390.f_5159 = 0;
	Global_23390.f_5160 = 0;
	Global_23390.f_5161 = 0;
	Global_23390.f_5162 = 0;
	Global_23390.f_5163 = 0;
	Global_23390.f_5164 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5093[iVar0] = 0;
		iVar0++;
	}
	Global_23390.f_5165 = 0;
	StringCopy(&(Global_4540958.f_21), "", 16);
	Global_4540958.f_61 = 0;
	Global_4540958.f_62 = 0;
	Global_4540958.f_63 = 0;
	Global_4540958.f_64 = 0;
	Global_4540958.f_65 = 0;
	Global_4540958.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4540958.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4540958.f_67 = 0;
	StringCopy(&(Global_23390.f_1), "", 16);
	Global_23390.f_5517 = 0f;
	Global_23390.f_74 = 0;
	Global_23390.f_75 = 0;
	Global_23390.f_76 = 0;
	Global_23390.f_77 = 0;
	Global_23390.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23390.f_6187 = 0;
	Global_23390.f_6186 = 0;
	Global_23390.f_6184 = 0;
	Global_23390.f_6185 = 0;
	Global_23390.f_5166 = 0;
	Global_23390.f_5167 = 0;
	Global_23390.f_5668 = 10;
	Global_23390.f_5669 = 0;
	Global_23390.f_6319 = 0f;
	Global_23390.f_6320 = 0f;
	Global_23390.f_6171 = 0;
	Global_23390.f_6172 = 0;
	Global_23390.f_6173 = 0f;
	Global_23390.f_6174 = 0;
	Global_23390.f_6176 = 0;
	Global_23390.f_6175 = 0;
	Global_23390.f_6177 = 0;
	Global_23390.f_6178 = 0;
	Global_23390.f_6179 = 0;
	Global_23390.f_6180 = 0;
	Global_23390.f_8888 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23390.f_6451[iVar0] = -1;
		Global_23390.f_6454[iVar0] = -1;
		iVar0++;
	}
	Global_23390.f_5524 = 0f;
	Global_23390.f_5495 = 0;
	Global_23390.f_5525 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23390.f_6458)
	{
		Global_23390.f_6458[iVar0] = 0;
		iVar0++;
	}
	Global_23390.f_8867 = 0;
	Global_23390.f_8862 = 0;
	Global_23390.f_8872 = 0;
	Global_23390.f_8877 = 0;
	Global_23390.f_8882 = 0;
	Global_23390.f_8884 = 0;
	Global_23390.f_8890 = 0;
	Global_23387 = 0.05f;
	Global_23388 = 0.05f;
	Global_23389 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23389 = (0.225f * (1.7777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23389 = (0.225f * (1.7777778f / fVar2));
	}
	else
	{
		Global_23389 = 0.225f;
	}
}

int func_353()//Position - 0x1B0E8
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
		{
			return 1;
		}
	}
	return 0;
}

void func_354(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x1B107
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
	int iVar96;
	float fVar97;
	float fVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	char cVar105[16];
	float fVar109;
	float fVar110;
	float fVar111;
	float fVar112;
	float fVar113;
	
	if (!func_349(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_378(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23390)
	{
		if (func_19(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23390 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23389;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_23388;
	}
	else
	{
		fVar59 = (((Global_23388 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_21(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23390.f_5661 <= 1)
		{
			func_374(Global_23390.f_5661 + 1, "DFLT_MNU_OPT" /* GXT: Exit */, 0, 1, 0, 0, 0);
			Global_23390.f_6457 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23390.f_6171)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_23388;
			}
			else
			{
				if (Global_23390)
				{
					StringCopy(&cVar63, func_26(29), 64);
					StringCopy(&cVar79, func_23(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_373(Global_23387, Global_23388, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23387 + (fParam5 * 0.5f)), (Global_23388 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23387 + (fParam5 * 0.5f)), (Global_23388 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23390.f_8862)
				{
					iVar1 = Global_23390.f_8858;
					iVar2 = Global_23390.f_8859;
					iVar3 = Global_23390.f_8860;
					iVar4 = Global_23390.f_8861;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_373(Global_23387, (Global_23388 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23388 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) != 0)
				{
					func_372();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23390.f_74)
					{
						if (Global_23390.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23390.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_14[iVar16], Global_23390.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23390.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23390.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23390.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23390.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23390.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23390.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23387 + 0.00390625f), ((Global_23388 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23390.f_6178)
				{
					func_372();
					func_370((((Global_23387 + fParam5) - 0.00390625f) - func_371("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6179, Global_23390.f_6180)), ((Global_23388 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6179, Global_23390.f_6180);
				}
				else if (Global_23390.f_6174 > Global_23390.f_5668)
				{
					if (Global_23390.f_6177 != 0)
					{
						func_372();
						func_370((((Global_23387 + fParam5) - 0.00390625f) - func_371("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6177, Global_23390.f_6176)), ((Global_23388 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6177, Global_23390.f_6176);
					}
				}
			}
			iVar6 = Global_23390.f_6181;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23390.f_8872)
			{
				iVar1 = Global_23390.f_8868;
				iVar2 = Global_23390.f_8869;
				iVar3 = Global_23390.f_8870;
				iVar4 = Global_23390.f_8871;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23390.f_5668 && iVar6 <= Global_23390.f_5661)
			{
				if (iVar6 >= 0)
				{
					if (Global_23390.f_5928[iVar6])
					{
						if (Global_23390.f_5799[iVar6] && iVar6 != Global_23390.f_6181)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23390.f_6188[iVar6] != 0f)
						{
							fVar56 = Global_23390.f_6188[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23390.f_6174 > Global_23390.f_5668)
			{
				if (Global_23390.f_8877)
				{
					iVar1 = Global_23390.f_8873;
					iVar2 = Global_23390.f_8874;
					iVar3 = Global_23390.f_8875;
					iVar4 = Global_23390.f_8876;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_373(Global_23387, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23390.f_8890)
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
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23390.f_5081)) != 0 && Global_23390.f_5163 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23387 + 0.0046875f);
				if (Global_23390.f_5165 != 0)
				{
					func_19(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_369(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23390.f_5159)
				{
					if (Global_23390.f_5093[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23390.f_5093[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23390.f_5093[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_373(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23390.f_8882)
				{
					iVar1 = Global_23390.f_8878;
					iVar2 = Global_23390.f_8879;
					iVar3 = Global_23390.f_8880;
					iVar4 = Global_23390.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_369(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23390.f_5159)
				{
					if (Global_23390.f_5093[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23390.f_5093[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23390.f_5093[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23390.f_5165 != 0)
				{
					func_19(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					func_368(Global_23390.f_5165, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_26(Global_23390.f_5165), func_23(Global_23390.f_5165, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_369(fVar42);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_373(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23390.f_8882)
					{
						iVar1 = Global_23390.f_8878;
						iVar2 = Global_23390.f_8879;
						iVar3 = Global_23390.f_8880;
						iVar4 = Global_23390.f_8881;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
					func_369(fVar42);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23390.f_5163 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23390.f_5164) > Global_23390.f_5163)
					{
						StringCopy(&(Global_23390.f_5081), "", 24);
						Global_23390.f_5163 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23387 + 0.0046875f);
				func_369(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23390.f_5159)
				{
					if (Global_23390.f_5093[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23390.f_5093[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23390.f_5093[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_373(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23390.f_8882)
				{
					iVar1 = Global_23390.f_8878;
					iVar2 = Global_23390.f_8879;
					iVar3 = Global_23390.f_8880;
					iVar4 = Global_23390.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_369(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4540958.f_21)) != 0 && Global_4540958.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23387 + 0.0046875f);
				if (Global_4540958.f_67 != 0)
				{
					func_19(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_369(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540958.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540958.f_61)
				{
					if (Global_4540958.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540958.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540958.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540958.f_34[iVar16], Global_4540958.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540958.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_373(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23390.f_8882)
				{
					iVar1 = Global_23390.f_8878;
					iVar2 = Global_23390.f_8879;
					iVar3 = Global_23390.f_8880;
					iVar4 = Global_23390.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_369(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540958.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540958.f_61)
				{
					if (Global_4540958.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540958.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540958.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540958.f_34[iVar16], Global_4540958.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540958.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4540958.f_67 != 0)
				{
					func_19(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_368(Global_4540958.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_26(Global_4540958.f_67), func_23(Global_4540958.f_67, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4540958.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4540958.f_66) > Global_4540958.f_65)
					{
						StringCopy(&(Global_4540958.f_21), "", 16);
						Global_4540958.f_65 = -1;
					}
				}
			}
			func_362(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23390.f_6171)
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
			iVar96 = Global_23390.f_5661;
			if (Global_23390.f_6172)
			{
				iVar96 = (Global_23390.f_6175 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_23390.f_6188[iVar6] != 0f)
				{
					fVar56 = Global_23390.f_6188[iVar6];
				}
				if (Global_23390.f_6172)
				{
					iVar6 = Global_23390.f_8513[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23390.f_6181 && iVar9 < Global_23390.f_5668)
				{
					bVar33 = true;
					if (Global_23390.f_6182 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_23390.f_5799[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23390.f_6322[iVar6] = fVar35;
				fVar34 = (Global_23387 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23390.f_6182 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_23390.f_8884)
					{
						HUD::GET_HUD_COLOUR(Global_23390.f_8883, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23387 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, false, 0);
					Global_23390.f_6320 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23390.f_5669)
				{
					if (BitTest(Global_23390.f_5532[iVar6], iVar8) || Global_23390.f_5499[iVar8] == 5)
					{
						if (Global_23390.f_6172)
						{
							iVar19 = Global_23390.f_8529[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar20 = Global_23390.f_8570[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar21 = Global_23390.f_8611[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar22 = Global_23390.f_8652[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar23 = Global_23390.f_8693[((iVar9 * Global_23390.f_5669) + iVar8)];
						}
						else
						{
							Global_23390.f_8529[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar19;
							Global_23390.f_8570[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar20;
							Global_23390.f_8611[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar21;
							Global_23390.f_8652[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar22;
							Global_23390.f_8693[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_23390.f_6454[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23390.f_6451[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_23390.f_6454[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23390.f_6451[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_23390.f_5505[iVar8] != -1f)
						{
							fVar34 = ((Global_23387 + 0.0046875f) + Global_23390.f_5505[iVar8]);
						}
						if ((iVar8 < 4 && Global_23390.f_5505[iVar8 + 1] != -1f) && fVar34 < Global_23390.f_5505[iVar8 + 1])
						{
							fVar46 = (Global_23390.f_5505[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23387 + Global_23389) - 0.0046875f) - fVar34);
						}
						if ((Global_23390.f_5518[iVar8] && Global_23390.f_6317) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23390.f_5499[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23390.f_6172)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23390.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_360(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23390.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[(iVar21 + iVar27)], Global_23390.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_19(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23390.f_4824[(iVar22 + iVar14)] == 2 || Global_23390.f_4824[(iVar22 + iVar14)] == 52) || Global_23390.f_4824[(iVar22 + iVar14)] == 62)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23390.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
										Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar43;
										Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar44;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_23390.f_5526[iVar99] == 2)
												{
													Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar99)] = (Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar99)] - Global_23390.f_5511[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar43 = Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar44 = Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_26(26), func_23(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_26(27), func_23(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
									if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23390.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_360(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_359(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[(iVar21 + iVar27)], Global_23390.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23390.f_4824[(iVar22 + iVar28)] == 2 || Global_23390.f_4824[(iVar22 + iVar28)] == 52) || Global_23390.f_4824[(iVar22 + iVar28)] == 62)
											{
												if (func_19(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_19(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_368(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23390.f_5526[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_26(Global_23390.f_4824[(iVar22 + iVar28)]), func_23(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_26(Global_23390.f_4824[(iVar22 + iVar28)]), func_23(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
									if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23390.f_5526[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_358() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23390.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_360(0, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar110), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar105);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23390.f_6181 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar113), (fVar35 + fVar112), 0);
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
											if ((Global_23390.f_4824[(iVar22 + iVar14)] != 2 && Global_23390.f_4824[(iVar22 + iVar14)] != 52) && Global_23390.f_4824[(iVar22 + iVar14)] != 62)
											{
												if (func_19(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_19(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_368(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23390.f_4824[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_26(Global_23390.f_4824[(iVar22 + iVar14)]), func_23(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (Global_23387 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23390.f_5526[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_26(Global_23390.f_4824[(iVar22 + iVar14)]), func_23(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_26(Global_23390.f_4824[(iVar22 + iVar14)]), func_23(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
									if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23390.f_6172)
									{
										func_360(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_359(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[iVar20]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23390.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
										Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar43 = Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_26(26), func_23(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_26(27), func_23(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_360(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										func_357((fVar34 + fVar42), fVar35, "NUMBER", Global_23390.f_4309[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23390.f_6172)
									{
										func_360(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_359(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23390.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
										Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar43 = Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_26(26), func_23(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_26(27), func_23(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_360(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
									func_356((fVar34 + fVar42), fVar35, "NUMBER", Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_19(Global_23390.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23390.f_6172)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23390.f_5526[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
											Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
											fVar44 = Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)];
										}
										if (bVar54)
										{
											if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23390.f_5526[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_368(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_26(26), func_23(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_368(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_26(27), func_23(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_19(Global_23390.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(Global_23390.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_26(Global_23390.f_4824[iVar22]), func_23(Global_23390.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_355(Global_23390.f_4824[iVar22])), (fVar37 * func_355(Global_23390.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
						if (Global_23390.f_5499[iVar8] == 5)
						{
							if (Global_23390.f_5511[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23390.f_5511[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23390.f_5511[iVar8]);
							if (Global_23390.f_5518[iVar8])
							{
								if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23390.f_5511[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23390.f_8513[iVar9] = iVar6;
						Global_23390.f_6183 = iVar6;
						iVar9++;
						if (Global_23390.f_5799[iVar6])
						{
							iVar13++;
						}
						if (Global_23390.f_6188[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_23390.f_6188[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_23390.f_6171)
					{
						Global_23390.f_5928[iVar6] = 1;
						if (Global_23390.f_5670[iVar6])
						{
							if (bVar32)
							{
								Global_23390.f_6177 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23390.f_6177 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23390.f_6171)
			{
				Global_23390.f_6173 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_23390.f_6176 = iVar11;
				Global_23390.f_6174 = iVar10;
				Global_23390.f_6171 = 1;
			}
		}
		if (!Global_23390.f_6172)
		{
			Global_23390.f_6175 = iVar9;
			Global_23390.f_6172 = 1;
		}
		iVar5++;
	}
	Global_23390.f_6319 = fVar51;
	Global_23390.f_6321 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23390.f_6319);
	if (!Global_23390.f_8857)
	{
		func_41(0);
	}
	Global_23390.f_8857 = 0;
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
		func_206(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

float func_355(int iParam0)//Position - 0x1E266
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 54:
		case 45:
		case 46:
		case 47:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_356(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x1E2D5
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_357(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1E2F4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_358()//Position - 0x1E312
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_359(bool bParam0)//Position - 0x1E323
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23390.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23390.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_360(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1E369
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_361(Global_23390.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_361(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1E517
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

void func_362(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1E7A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_349(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_378(bParam4, bParam8))
	{
		return;
	}
	if (func_366())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_363(PLAYER::PLAYER_ID(), 0))
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
	if (Global_23390.f_5166 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23390.f_5166)
			{
				if (Global_23390.f_5465[iVar1] != 363)
				{
					StringCopy(&(Global_23390.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23390.f_5465[iVar1], true), 64);
				}
				else if (Global_23390.f_5480[iVar1] != 32)
				{
					StringCopy(&(Global_23390.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23390.f_5480[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23390.f_5167 = 0;
		}
		if (!Global_23390.f_5167)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23390.f_5524 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23390.f_5166)
			{
				if (MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_13(&(Global_23390.f_5168[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_13(&(Global_23390.f_5168[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23390.f_5450[iVar1] == -1)
					{
						func_12(&(Global_23390.f_5393[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23390.f_5450[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[iVar1 /*4*/]));
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
						if (Global_23390.f_5465[iVar1] != 363 && BitTest(Global_23390.f_5495, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5465[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4540958.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5166);
				func_13(&Global_4540958);
				if (Global_4540958.f_20 == -1)
				{
					func_12(&(Global_4540958.f_16));
				}
				else
				{
					iVar4 = Global_23390.f_5450[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540958.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23390.f_5525)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23390.f_5167 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23390.f_5166)
		{
			if (Global_23390.f_5450[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[iVar1 /*4*/]));
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
		if (Global_4540958.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540958.f_16));
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
			if (!Global_23390.f_8892)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23390.f_8892 = 1;
			}
		}
		else if (Global_23390.f_8892)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23390.f_8892 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23390.f_5498)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23390.f_6103[iVar0 /*10*/], Global_23390.f_5496, Global_23390.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23390.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_363(int iParam0, int iParam1)//Position - 0x1ECA6
{
	bool bVar0;
	
	if (!func_365(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_364(-1, 0) == 8;
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

int func_364(int iParam0, bool bParam1)//Position - 0x1ECFF
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_66();
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

int func_365(var uParam0)//Position - 0x1ED40
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

int func_366()//Position - 0x1ED62
{
	struct<3> Var0;
	
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	if (func_367())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20445 == 0)
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

int func_367()//Position - 0x1EDD0
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_368(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x1EDEA
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
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 54:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 45:
		case 46:
		case 47:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 55:
			*iParam5 = 100;
			break;
		
		case 63:
			*iParam5 = 100;
			break;
		
		case 56:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_369(float fParam0)//Position - 0x1EF0B
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
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23387 + Global_23389) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_370(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1EF6A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_371(char* sParam0, int iParam1, int iParam2)//Position - 0x1EF8D
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
	func_372();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_372()//Position - 0x1EFCF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23390.f_8867)
	{
		iVar0 = Global_23390.f_8863;
		iVar1 = Global_23390.f_8864;
		iVar2 = Global_23390.f_8865;
		iVar3 = Global_23390.f_8866;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23387 + 0.0046875f), ((Global_23387 + Global_23389) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_373(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1F059
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_374(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x1F088
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23390.f_5661 > iParam0)
	{
		return;
	}
	if (Global_23390.f_5661 >= 128)
	{
		return;
	}
	if (Global_23390.f_5663 >= 256)
	{
		return;
	}
	if (Global_23390.f_6186 < Global_23390.f_6184)
	{
		return;
	}
	if (Global_23390.f_5661 != iParam0)
	{
		Global_23390.f_5661 = iParam0;
		Global_23390.f_5662 = 0;
	}
	iVar0 = Global_23390.f_5499[Global_23390.f_5662];
	if (iVar0 != 1)
	{
		while (Global_23390.f_5662 < 4 && iVar0 != 1)
		{
			Global_23390.f_5662++;
			iVar0 = Global_23390.f_5499[Global_23390.f_5662];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23390.f_1616[Global_23390.f_5663] = bParam3;
	Global_23390.f_1873[Global_23390.f_5663] = iParam4;
	Global_23390.f_2130[Global_23390.f_5663] = iParam6;
	Global_23390.f_5663++;
	if (!bParam3)
	{
		func_377(Global_23390.f_5661, 1);
	}
	else
	{
		func_377(Global_23390.f_5661, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_376(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
		if (Global_23390.f_5518[Global_23390.f_5662])
		{
			func_19(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23390.f_5511[Global_23390.f_5662])
		{
			Global_23390.f_5511[Global_23390.f_5662] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_375(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
			if (fVar4 > Global_23390.f_6188[iParam0])
			{
				Global_23390.f_6188[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23390.f_5532[iParam0]), Global_23390.f_5662);
	Global_23390.f_5662++;
	Global_23390.f_6187 = 1;
	Global_23390.f_6185 = (Global_23390.f_5663 - 1);
	Global_23390.f_6186 = 0;
	Global_23390.f_6184 = iParam2;
}

float func_375(char* sParam0)//Position - 0x1F2A4
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_376(char* sParam0)//Position - 0x1F2C0
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
	func_360(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_377(int iParam0, bool bParam1)//Position - 0x1F2FD
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_378(bool bParam0, bool bParam1)//Position - 0x1F349
{
	if (Global_2672524.f_1685.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_380(8, -1) && func_379() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78950) || Global_23390.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100885.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_379()//Position - 0x1F3E6
{
	return Global_1574996;
}

var func_380(int iParam0, int iParam1)//Position - 0x1F3F2
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

int func_381(int iParam0, bool bParam1)//Position - 0x1F42A
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_382(int* iParam0, int iParam1, int iParam2)//Position - 0x1F4B1
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_403(0) == 1 && Global_4541034 == iParam1)
	{
		if (!func_428(iParam0))
		{
			func_383(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_443(iParam0);
			return 1;
		}
	}
	else if (func_428(iParam0))
	{
		func_429(iParam0);
	}
	return 0;
}

void func_383(int* iParam0)//Position - 0x1F529
{
	if (!func_428(iParam0))
	{
		func_443(iParam0);
	}
}

int func_384(int* iParam0)//Position - 0x1F541
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
	}
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
	{
		if (!func_428(iParam0))
		{
			func_383(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_443(iParam0);
			return 1;
		}
	}
	else if (func_428(iParam0))
	{
		func_429(iParam0);
	}
	return 0;
}

void func_385(var uParam0)//Position - 0x1F5C6
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_352(0, 0);
	HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_398(uVar0, uVar1, uVar2, uVar3, 1);
	func_397(1, 2, 0, 0, 0);
	func_396(1, 2, 1, 1, 1);
	func_395(0, 1, 0, 0, 0);
	func_394("DARTS_TITLE");
	func_392(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_374(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_389(0, func_381(uParam0->f_662 + 1, 1), 0);
	func_374(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_389(1, func_381(uParam0->f_664 + 1, 0), 0);
	func_388(2, 141, 141, 1);
	func_374(2, "DARTS_START", 0, 1, 0, 0, 0);
	func_387(0);
	func_406(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_405(func_116(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_386(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	func_386(202, "IB_QUIT" /* GXT: Quit */, -1, 0);
}

void func_386(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1F6C0
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23390.f_5166 >= 14)
	{
		StringCopy(&Global_4540958, sVar0, 64);
		StringCopy(&(Global_4540958.f_16), sParam1, 16);
		Global_4540958.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23390.f_5495), Global_23390.f_5166);
	}
	StringCopy(&(Global_23390.f_5168[Global_23390.f_5166 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23390.f_5393[Global_23390.f_5166 /*4*/]), sParam1, 16);
	Global_23390.f_5450[Global_23390.f_5166] = iParam2;
	Global_23390.f_5465[Global_23390.f_5166] = iParam0;
	Global_23390.f_5480[Global_23390.f_5166] = 32;
	Global_23390.f_5166++;
}

void func_387(int iParam0)//Position - 0x1F775
{
	Global_23390.f_6181 = iParam0;
}

void func_388(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1F785
{
	Global_23390.f_8888 = iParam3;
	Global_23390.f_8885[0] = iParam1;
	Global_23390.f_8885[1] = iParam2;
	Global_23390.f_8889 = iParam0;
}

void func_389(int iParam0, int iParam1, bool bParam2)//Position - 0x1F7B3
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23390.f_5661 > iParam0)
	{
		return;
	}
	if (Global_23390.f_5661 >= 128)
	{
		return;
	}
	if (Global_23390.f_5665 >= 256)
	{
		return;
	}
	if (Global_23390.f_6186 < Global_23390.f_6184)
	{
		return;
	}
	if (Global_23390.f_5661 != iParam0)
	{
		Global_23390.f_5661 = iParam0;
		Global_23390.f_5662 = 0;
	}
	iVar0 = Global_23390.f_5499[Global_23390.f_5662];
	if (iVar0 != 2)
	{
		while (Global_23390.f_5662 < 4 && iVar0 != 2)
		{
			Global_23390.f_5662++;
			iVar0 = Global_23390.f_5499[Global_23390.f_5662];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_23390.f_4309[Global_23390.f_5665] = iParam1;
	Global_23390.f_5665++;
	fVar1 = func_391("NUMBER", iParam1);
	if (Global_23390.f_5518[Global_23390.f_5662])
	{
		func_19(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_23390.f_5511[Global_23390.f_5662])
	{
		Global_23390.f_5511[Global_23390.f_5662] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_390("NUMBER", iParam1);
		if (fVar4 > Global_23390.f_6188[iParam0])
		{
			Global_23390.f_6188[iParam0] = fVar4;
		}
	}
	MISC::SET_BIT(&(Global_23390.f_5532[iParam0]), Global_23390.f_5662);
	Global_23390.f_5662++;
	Global_23390.f_6187 = 2;
}

float func_390(char* sParam0, int iParam1)//Position - 0x1F932
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_391(char* sParam0, int iParam1)//Position - 0x1F954
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0f;
	}
	func_360(1, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_392(int iParam0, char* sParam1, char* sParam2)//Position - 0x1F986
{
	Global_23390 = iParam0;
	func_393(29, sParam1, sParam2);
}

void func_393(int iParam0, char* sParam1, char* sParam2)//Position - 0x1F99D
{
	StringCopy(&(Global_23390.f_6463[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23390.f_7488[iParam0 /*16*/]), sParam2, 64);
}

void func_394(char* sParam0)//Position - 0x1F9C1
{
	int iVar0;
	
	StringCopy(&(Global_23390.f_1), sParam0, 16);
	Global_23390.f_74 = 0;
	Global_23390.f_75 = 0;
	Global_23390.f_76 = 0;
	Global_23390.f_77 = 0;
	Global_23390.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_395(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1FA0C
{
	Global_23390.f_5518[0] = iParam0;
	Global_23390.f_5518[1] = iParam1;
	Global_23390.f_5518[2] = iParam2;
	Global_23390.f_5518[3] = iParam3;
	Global_23390.f_5518[4] = iParam4;
}

void func_396(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1FA4B
{
	Global_23390.f_5526[0] = iParam0;
	Global_23390.f_5526[1] = iParam1;
	Global_23390.f_5526[2] = iParam2;
	Global_23390.f_5526[3] = iParam3;
	Global_23390.f_5526[4] = iParam4;
}

void func_397(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1FA8A
{
	Global_23390.f_5499[0] = iParam0;
	Global_23390.f_5499[1] = iParam1;
	Global_23390.f_5499[2] = iParam2;
	Global_23390.f_5499[3] = iParam3;
	Global_23390.f_5499[4] = iParam4;
	Global_23390.f_5669 = 0;
	if (iParam0 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam1 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam2 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam3 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam4 != 0)
	{
		Global_23390.f_5669++;
	}
}

void func_398(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x1FB34
{
	Global_23390.f_8862 = iParam4;
	Global_23390.f_8858 = uParam0;
	Global_23390.f_8859 = uParam1;
	Global_23390.f_8860 = uParam2;
	Global_23390.f_8861 = uParam3;
}

int func_399(int* iParam0, int iParam1, int iParam2)//Position - 0x1FB64
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_403(0) == -1 && Global_4541034 == iParam1)
	{
		if (!func_428(iParam0))
		{
			func_383(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_443(iParam0);
			return 1;
		}
	}
	else if (func_428(iParam0))
	{
		func_429(iParam0);
	}
	return 0;
}

int func_400(int* iParam0)//Position - 0x1FBDC
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
	}
	if (fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
	{
		if (!func_428(iParam0))
		{
			func_383(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_443(iParam0);
			return 1;
		}
	}
	else if (func_428(iParam0))
	{
		func_429(iParam0);
	}
	return 0;
}

int func_401(int* iParam0)//Position - 0x1FC54
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	}
	if (fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
	{
		if (!func_428(iParam0))
		{
			func_383(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_443(iParam0);
			return 1;
		}
	}
	else if (func_428(iParam0))
	{
		func_429(iParam0);
	}
	return 0;
}

int func_402(int* iParam0)//Position - 0x1FCCC
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	}
	if (fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
	{
		if (!func_428(iParam0))
		{
			func_383(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_443(iParam0);
			return 1;
		}
	}
	else if (func_428(iParam0))
	{
		func_429(iParam0);
	}
	return 0;
}

int func_403(float fParam0)//Position - 0x1FD44
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_23389);
	fVar1 = (Global_23390.f_6173 - (IntToFloat(Global_23390.f_6175) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4541028 >= fVar0 && Global_4541028 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4541028 >= fVar0 && Global_4541028 < fVar4)
	{
		return -1;
	}
	if (Global_4541028 >= fVar4 && Global_4541028 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_404()//Position - 0x1FE11
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
	}
	return 0;
}

void func_405(char* sParam0, int iParam1, int iParam2)//Position - 0x1FE2C
{
	int iVar0;
	
	StringCopy(&(Global_23390.f_5081), sParam0, 24);
	Global_23390.f_5159 = 0;
	Global_23390.f_5160 = 0;
	Global_23390.f_5161 = 0;
	Global_23390.f_5162 = 0;
	Global_23390.f_5163 = iParam1;
	Global_23390.f_5164 = MISC::GET_GAME_TIMER();
	Global_23390.f_5165 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5093[iVar0] = 0;
		iVar0++;
	}
}

void func_406(int iParam0, bool bParam1, int iParam2)//Position - 0x1FE91
{
	int iVar0;
	int iVar1;
	
	Global_23390.f_6182 = iParam0;
	Global_23390.f_6317 = iParam2;
	if (Global_23390.f_6182 < Global_23390.f_6181)
	{
		Global_23390.f_6181 = Global_23390.f_6182;
	}
	else if ((Global_23390.f_6172 && Global_23390.f_6182 > Global_23390.f_6183) || (!Global_23390.f_6172 && Global_23390.f_6182 >= (Global_23390.f_6181 + Global_23390.f_5668)))
	{
		iVar0 = Global_23390.f_6181;
		while (iVar0 <= Global_23390.f_6182)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23390.f_5532[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23390.f_5668 && Global_23390.f_6181 < 128)
		{
			Global_23390.f_6181++;
			iVar1 = 0;
			iVar0 = Global_23390.f_6181;
			while (iVar0 <= Global_23390.f_6182)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23390.f_5532[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23390.f_6171 = 0;
	Global_23390.f_6172 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23390.f_5081), "", 24);
		StringCopy(&(Global_4540958.f_21), "", 16);
	}
}

int func_407()//Position - 0x1FFE3
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4541034 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_408(int iParam0, int iParam1, bool bParam2)//Position - 0x2000B
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (Global_4541034 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			return 1;
		}
		else
		{
			Global_4541034 = -1;
			return 0;
		}
	}
	if (((Global_4541034 > -1 || Global_4541034 == -3) || Global_4541034 == -2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}
	if (Global_4541034 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4541034 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}
	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_409(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x200EB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		Global_4541034 = -1;
		return;
	}
	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	fVar0 = Global_23387;
	fVar2 = (fVar0 + Global_23389);
	fVar3 = Global_23390.f_6173;
	fVar1 = (Global_23390.f_6173 - (IntToFloat(Global_23390.f_6175) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23390.f_6175 < 1)
	{
		fVar1 = (Global_23390.f_6173 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_411();
	if (Global_4541034 == -6)
	{
		return;
	}
	Global_4541034 = -1;
	fVar7 = Global_4541028;
	fVar8 = Global_4541029;
	if (Global_23390.f_6176 > Global_23390.f_6175)
	{
		if (((Global_4541028 >= fVar0 && Global_4541028 <= fVar2) && Global_4541029 >= fVar3) && Global_4541029 < (fVar3 + fVar6))
		{
			Global_4541034 = -2;
			if (bParam3)
			{
				func_410(0);
			}
			return;
		}
		if (((Global_4541028 >= fVar0 && Global_4541028 <= fVar2) && Global_4541029 >= (fVar3 + fVar6)) && Global_4541029 < (fVar3 + 0.034722f))
		{
			Global_4541034 = -3;
			if (bParam3)
			{
				func_410(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_23390.f_6176 == -1)
		{
			Global_4541034 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23390.f_6175);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_373(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23389, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4541034 = Global_23390.f_8513[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4541034 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4541034 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4541034 = -4;
		return;
	}
	Global_4541034 = -1;
}

void func_410(bool bParam0)//Position - 0x20397
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23387;
	fVar1 = Global_23390.f_6173;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4541034 == -2)
	{
		func_373(fVar0, fVar1, Global_23389, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541034 == -3)
	{
		func_373(fVar0, (fVar1 + fVar2), Global_23389, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_411()//Position - 0x20420
{
	Global_4541030 = Global_4541028;
	Global_4541031 = Global_4541029;
	Global_4541028 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	Global_4541029 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	Global_4541032 = (Global_4541028 - Global_4541030);
	Global_4541033 = (Global_4541029 - Global_4541031);
}

float func_412(float fParam0)//Position - 0x20468
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_413(var uParam0)//Position - 0x2049E
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_352(0, 0);
	HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_398(uVar0, uVar1, uVar2, uVar3, 1);
	func_397(1, 2, 0, 0, 0);
	func_396(1, 2, 1, 1, 1);
	func_395(0, 1, 0, 0, 0);
	func_394("DARTS_TITLE");
	func_392(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_374(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_389(0, 1, 0);
	func_374(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_389(1, 1, 0);
	func_374(2, "DARTS_START", 0, 1, 0, 0, 0);
	func_388(2, 141, 141, 1);
	func_387(0);
	func_406(0, 1, 1);
	func_405("DARTS_LEGD", 0, 0);
	func_414();
	func_386(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	func_386(202, "IB_QUIT" /* GXT: Quit */, -1, 0);
}

void func_414()//Position - 0x2058E
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::SET_CURSOR_POSITION(0.325f, 0.3f);
	}
}

int func_415(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* iParam5)//Position - 0x205AC
{
	int iVar0;
	int iVar1;
	
	if ((func_439() && MISC::GET_GAME_TIMER() >= iLocal_290 + 1000) && *iParam0 != 8)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_29)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_290 = MISC::GET_GAME_TIMER();
						func_423(uParam1->f_1, uParam1->f_4, func_425(2), func_424(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_293(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_280(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
							iLocal_29++;
							func_443(iParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_431(iParam5) > 1f && !func_310("DARTS_DOUBLE_T"))
					{
						func_426("DARTS_DOUBLE_T", -1);
					}
					if (func_431(iParam5) > 5f)
					{
						func_443(iParam5);
						HUD::CLEAR_HELP(true);
						func_417(uParam1->f_1, uParam1->f_4, func_425(3), func_424(0), 1000);
						iLocal_29 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_29)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(iLocal_126))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_293(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_280(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_29++;
								func_443(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_431(iParam5) > 1f && !func_310("DARTS_TRIPLE_T"))
					{
						func_426("DARTS_TRIPLE_T", -1);
					}
					if (func_431(iParam5) > 5f)
					{
						func_443(iParam5);
						HUD::CLEAR_HELP(true);
						func_423(uParam1->f_1, uParam1->f_4, func_425(4), func_424(0), 1000, 0);
						iLocal_29 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_29)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(iLocal_125))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_293(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_280(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_29++;
								func_443(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_431(iParam5) > 1f && !func_310("DARTS_BULL_T"))
					{
						func_426("DARTS_BULL_T", -1);
					}
					if (func_431(iParam5) > 5f)
					{
						func_443(iParam5);
						HUD::CLEAR_HELP(true);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", true);
						func_417(uParam1->f_1, uParam1->f_4, func_425(5), func_424(1), 1500);
						iLocal_29 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_126) && !func_310("DARTS_DBL_WIN"))
			{
				func_426("DARTS_DBL_WIN", -1);
			}
			if (func_431(iParam5) > 6f)
			{
				func_443(iParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", true);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_118, iLocal_126, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_118))
			{
				iLocal_29 = 0;
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_416(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_29 = 0;
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_416(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				CAM::SET_CAM_ACTIVE(iLocal_118, true);
				CAM::DO_SCREEN_FADE_IN(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_416(int* iParam0)//Position - 0x209C8
{
	struct<3> Var0;
	
	Var0 = { -1668.0444f, -1056.4501f, 13.1063f };
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*iParam0, Var0, true, false, false, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_417(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10)//Position - 0x20A08
{
	CAM::STOP_CAM_POINTING(iLocal_126);
	CAM::SET_CAM_FOV(iLocal_126, 35f);
	CAM::SET_CAM_COORD(iLocal_126, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam3, Param4));
	CAM::SET_CAM_ROT(iLocal_126, Vector(fParam3, 0f, 0f) - Param7, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_126, iLocal_125, iParam10, 1, 1);
}

int func_418(var uParam0, bool bParam1, bool bParam2)//Position - 0x20A51
{
	if (!func_428(&(uParam0->f_2)))
	{
		func_443(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_429(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_419(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7)//Position - 0x20AE3
{
	char* sVar0;
	
	sVar0 = func_420(iParam5);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	func_443(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_420(int iParam0)//Position - 0x20B72
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_421()//Position - 0x20BED
{
	CAM::SET_CAM_ACTIVE(iLocal_118, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (CAM::IS_CAM_ACTIVE(iLocal_125))
	{
		CAM::SET_CAM_ACTIVE(iLocal_125, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_120))
	{
		CAM::SET_CAM_ACTIVE(iLocal_120, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_121))
	{
		CAM::SET_CAM_ACTIVE(iLocal_121, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_122))
	{
		CAM::SET_CAM_ACTIVE(iLocal_122, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_123))
	{
		CAM::SET_CAM_ACTIVE(iLocal_123, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_124))
	{
		CAM::SET_CAM_ACTIVE(iLocal_124, false);
	}
}

char* func_422(int iParam0)//Position - 0x20C68
{
	if (iLocal_301 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_301 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_423(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10, bool bParam11)//Position - 0x20CFB
{
	CAM::STOP_CAM_POINTING(iLocal_125);
	CAM::SET_CAM_FOV(iLocal_125, 35f);
	CAM::SET_CAM_COORD(iLocal_125, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam3, Param4));
	CAM::SET_CAM_ROT(iLocal_125, Vector(fParam3, 0f, 0f) - Param7, 2);
	if (bParam11)
	{
		CAM::SET_CAM_ACTIVE(iLocal_125, true);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_125, iLocal_126, iParam10, 1, 1);
	}
}

Vector3 func_424(bool bParam0)//Position - 0x20D53
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_425(int iParam0)//Position - 0x20D7C
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_426(char* sParam0, int iParam1)//Position - 0x20E06
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_427(int iParam0)//Position - 0x20E1D
{
	if (!ENTITY::IS_ENTITY_DEAD(func_506(), false))
	{
		func_4(func_506(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(iParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_428(int* iParam0)//Position - 0x20E50
{
	return BitTest(*iParam0, 1);
}

void func_429(int* iParam0)//Position - 0x20E5D
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_430(int iParam0, char* sParam1, int iParam2)//Position - 0x20E73
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_6(iParam2), 1);
}

float func_431(int* iParam0)//Position - 0x20E8A
{
	if (func_428(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_432(int* iParam0)//Position - 0x20EC3
{
	if (!func_428(iParam0))
	{
		func_383(iParam0);
	}
	else
	{
		func_443(iParam0);
	}
}

void func_433()//Position - 0x20EE4
{
	Global_20711 = 0;
	func_434();
}

void func_434()//Position - 0x20EF4
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

void func_435(int iParam0)//Position - 0x20F4B
{
	if (func_43())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_438())
		{
			func_437(1, 1);
		}
		else
		{
			func_437(0, 0);
		}
	}
	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8371, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21845 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 30);
	}
	if (!func_436())
	{
		Global_20500.f_1 = 3;
	}
}

int func_436()//Position - 0x20FD5
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_437(bool bParam0, bool bParam1)//Position - 0x20FFC
{
	if (bParam0)
	{
		if (func_42(0))
		{
			Global_20704 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
			}
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == 1)
	{
		Global_20704 = 0;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
}

bool func_438()//Position - 0x21070
{
	return BitTest(Global_1963795, 5);
}

int func_439()//Position - 0x2107E
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

int func_440(var uParam0)//Position - 0x210B0
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_441(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_259, false, true, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_441(int iParam0)//Position - 0x21123
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_442(var uParam0, int iParam1)//Position - 0x21166
{
	iParam1++;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_HIGHLIGHT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_443(int* iParam0)//Position - 0x2118A
{
	func_444(iParam0, 0f);
}

void func_444(int* iParam0, float fParam1)//Position - 0x21199
{
	iParam0->f_1 = (func_8(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_445(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x211C4
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

void func_446(var uParam0, char* sParam1, char* sParam2)//Position - 0x2125F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_37(sParam1);
	func_37(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_447(float fParam0, struct<4> Param1, var uParam5, var uParam6, var* uParam7, var uParam8)//Position - 0x21283
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_506()) && !PED::IS_PED_INJURED(func_506()))
	{
		PED::REMOVE_PED_FROM_GROUP(func_506());
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam8->f_5) && !PED::IS_PED_INJURED(uParam8->f_5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam8->f_5, true, true);
			iLocal_262[1] = uParam8->f_5;
			TASK::CLEAR_PED_TASKS(iLocal_262[1]);
		}
		else if (func_449(uParam7))
		{
			TASK::CLEAR_PED_TASKS(iLocal_262[1]);
		}
		else
		{
			iLocal_262[1] = PED::CREATE_PED(26, iLocal_298, Param1.f_3, fParam0, true, true);
		}
		if (DECORATOR::DECOR_EXIST_ON(iLocal_262[1], "Darts_name"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iLocal_262[1], "Darts_name");
			if (joaat("RAYMOND") == iVar0)
			{
				sLocal_358 = func_453("RAYMOND");
				iLocal_359 = joaat("RAYMOND");
			}
			else if (joaat("JOHAN") == iVar0)
			{
				sLocal_358 = func_453("JOHAN");
				iLocal_359 = joaat("JOHAN");
			}
			else if (joaat("STAN") == iVar0)
			{
				sLocal_358 = func_453("STAN");
				iLocal_359 = joaat("STAN");
			}
			else if (joaat("VINCE") == iVar0)
			{
				sLocal_358 = func_453("VINCE");
				iLocal_359 = joaat("VINCE");
			}
			else if (joaat("KRISTY") == iVar0)
			{
				sLocal_358 = func_453("KRISTY");
				iLocal_359 = joaat("KRISTY");
			}
			else if (joaat("MARLENE") == iVar0)
			{
				sLocal_358 = func_453("MARLENE");
				iLocal_359 = joaat("MARLENE");
			}
			else if (joaat("LORIE") == iVar0)
			{
				sLocal_358 = func_453("LORIE");
				iLocal_359 = joaat("LORIE");
			}
			else if (joaat("SHELLEY") == iVar0)
			{
				sLocal_358 = func_453("SHELLEY");
				iLocal_359 = joaat("SHELLEY");
			}
		}
		DECORATOR::DECOR_SET_INT(iLocal_262[1], "Darts_name", iLocal_359);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iLocal_262[1]);
	func_448(iVar1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_262[1], iLocal_262[0], 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_262[0], iLocal_262[1], 0);
}

void func_448(int iParam0)//Position - 0x2147C
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iParam0)
	{
		case joaat("A_F_M_Salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_100 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_100 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("A_F_O_Salton_01"):
			sLocal_100 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("A_M_Y_Vinewood_01"):
			sLocal_100 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("A_M_Y_Vinewood_03"):
			sLocal_100 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("A_M_Y_Vinewood_04"):
			sLocal_100 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("A_M_Y_StLat_01"):
			sLocal_100 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("A_M_Y_StWhi_02"):
			sLocal_100 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_449(var* uParam0)//Position - 0x2151B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), uParam0, -1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if ((((((ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_F_M_Salton_01") || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_F_O_Salton_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_M_Y_Vinewood_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_M_Y_StLat_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_M_Y_Vinewood_04")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_M_Y_StWhi_02")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_M_Y_Vinewood_03"))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], true, true);
				iLocal_262[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_450(int iParam0)//Position - 0x21604
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar2 = (func_452() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_451(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_451(int iParam0)//Position - 0x2164A
{
	if (!func_94(iParam0))
	{
		return func_96(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_452()//Position - 0x21670
{
	if (Global_32283 == 0 || Global_32283 == 2)
	{
		return 193;
	}
	return 161;
}

char* func_453(char* sParam0)//Position - 0x21692
{
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 7)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_454(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x217CC
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uParam0->f_4 = ENTITY::GET_ENTITY_HEADING(*uParam0);
	}
	if (!bParam3)
	{
		func_456(uParam1, uParam0);
	}
	Local_80 = { 0f, (-2.3685f + fLocal_53), 0.1f };
	Local_80 = { Local_80 + Local_54 };
	Local_77 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_4, Local_80) };
	func_455(uParam2, uParam0);
}

void func_455(var uParam0, var uParam1)//Position - 0x21834
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_54 };
	*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_456(var uParam0, var uParam1)//Position - 0x2186F
{
	*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_53), -1.7272f) };
	uParam0->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_53), -1.7272f) };
}

int func_457(var uParam0, var uParam1)//Position - 0x218C1
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\DARTS", false, -1))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAMILY1_2", false, -1))
	{
		return 0;
	}
	if ((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_26) || !STREAMING::HAS_MODEL_LOADED(iLocal_27)) || !STREAMING::HAS_MODEL_LOADED(iLocal_58)) || !STREAMING::HAS_MODEL_LOADED(iLocal_298)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_645)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_57)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_62)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3)) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_360)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_361)) || !func_458(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_458(char* sParam0, int iParam1, bool bParam2)//Position - 0x219A5
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_349(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23390.f_6078[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6078[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23390.f_6078[iVar0 /*4*/]), 9);
		Global_23390.f_6071[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23390.f_6078[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_23390.f_6057[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23390.f_6064[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23390.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_459(&(Global_23390.f_6103[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_459(var uParam0)//Position - 0x21A9B
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

void func_460(var uParam0, var uParam1)//Position - 0x21B3D
{
	STREAMING::REQUEST_MODEL(iLocal_26);
	STREAMING::REQUEST_MODEL(iLocal_27);
	STREAMING::REQUEST_MODEL(iLocal_58);
	STREAMING::REQUEST_MODEL(iLocal_298);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Darts", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("ShopUI_Title_Darts", false);
	STREAMING::REQUEST_ANIM_DICT(sLocal_360);
	STREAMING::REQUEST_ANIM_DICT(sLocal_361);
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("darts_scoreboard");
	uParam1->f_645 = func_201();
	uParam1->f_57 = func_462();
	uParam1->f_62 = func_461();
	HUD::REQUEST_ADDITIONAL_TEXT("DARTS", 3);
}

int func_461()//Position - 0x21BAB
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

int func_462()//Position - 0x21BBB
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}

void func_463(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x21BCB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			iParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		iParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		iParam0->f_21 = { 180f, 0f, 252.555f };
		iParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		iParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		iParam0->f_21 = { 180f, 0f, 87.77f };
		iParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!func_464(Param2) && fParam5 != 0f)
	{
		iParam0->f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param2, fParam5, -0.687645f, -0.350352f, 0.343273f) };
		iParam0->f_21 = { 180f, 0f, (fParam5 - -29.98685f) };
	}
	iParam0->f_27 = 0.885f;
	iParam0->f_28 = 0.244f;
	iParam0->f_29 = 0.17f;
	iParam0->f_30 = 0.415f;
}

int func_464(struct<3> Param0)//Position - 0x21CE7
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_465(int iParam0)//Position - 0x21D11
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_59.f_0 = 0.5f;
	Local_59.f_1 = 0.5f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Local_59.f_2 = 0.05f;
		Local_59.f_3 = 0.095f;
	}
	else
	{
		Local_59.f_2 = 0.065f;
		Local_59.f_3 = 0.09f;
	}
	Local_59.f_4 = 255;
	Local_59.f_5 = 250;
	Local_59.f_6 = 255;
	Local_59.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_59.f_4 = 255;
		Local_59.f_5 = 255;
		Local_59.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_59.f_4 = 255;
		Local_59.f_5 = 255;
		Local_59.f_6 = 255;
	}
	Local_59.f_8 = 0f;
	Local_68.f_0 = 0f;
	Local_68.f_1 = 0f;
	Local_68.f_2 = 0.061f;
	Local_68.f_3 = 0.105f;
	Local_68.f_4 = 200;
	Local_68.f_5 = 45;
	Local_68.f_6 = 40;
	Local_68.f_7 = 255;
	Local_68.f_8 = 0f;
}

void func_466(var uParam0, int iParam1)//Position - 0x21DE4
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_26;
	}
	else
	{
		uParam0->f_1 = iLocal_27;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_467()//Position - 0x21E0B
{
	int iVar0;
	
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_2100721.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_468(struct<3> Param0, float fParam3)//Position - 0x21E34
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	struct<3> Var35;
	struct<3> Var38;
	
	fLocal_132 = GRAPHICS::GET_ASPECT_RATIO(false);
	fVar21 = 30f;
	fVar21 = func_412(fLocal_132);
	Var22 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar25 = 1.7939f;
	fVar26 = -1.3346f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Var27 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar30 = -1.3023f;
		fVar31 = -12.4139f;
	}
	else
	{
		Var27 = { -0.112635f, -1.86963f, 0.45417f };
		fVar30 = -3.7542f;
		fVar31 = -14.4576f;
	}
	Var32 = { 0.261599f, -0.750354f, -0.392929f };
	Var38 = { 0.281314f, -0.573735f, -0.39603f };
	Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam3, Var22) };
	Var9 = { fVar26, 0f, (fParam3 - fVar25) };
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam3, Var27) };
	Var6 = { fVar31, 0f, (fParam3 - fVar30) };
	Var12 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam3, Var32) };
	Var15 = { 0.8351f, -0.0048f, (fParam3 - 186.50734f) };
	Var35 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam3, Var38) };
	Var18 = { 0.8351f, -0.0048f, (fParam3 - 186.50734f) };
	iLocal_118 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var0, Var6, fVar21, false, 2);
	iLocal_119 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var3, Var9, fVar21, false, 2);
	iLocal_120 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var12, Var15, 65f, false, 2);
	iLocal_121 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var35, Var18, 65f, false, 2);
	iLocal_122 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_123 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_125 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_126 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_124 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1996.235f, 3048.4558f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, false, 2);
	CAM::SET_CAM_FOV(iLocal_120, 43.35f);
	CAM::SET_CAM_FOV(iLocal_121, 42.35f);
	CAM::SHAKE_CAM(iLocal_120, "HAND_SHAKE", 0.1f);
	CAM::SHAKE_CAM(iLocal_121, "HAND_SHAKE", 0.1f);
}

void func_469(var uParam0, var uParam1)//Position - 0x22097
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_31[0] = 20;
	iLocal_31[10] = 3;
	iLocal_31[1] = 1;
	iLocal_31[11] = 19;
	iLocal_31[2] = 18;
	iLocal_31[12] = 7;
	iLocal_31[3] = 4;
	iLocal_31[13] = 16;
	iLocal_31[4] = 13;
	iLocal_31[14] = 8;
	iLocal_31[5] = 6;
	iLocal_31[15] = 11;
	iLocal_31[6] = 10;
	iLocal_31[16] = 14;
	iLocal_31[7] = 15;
	iLocal_31[17] = 9;
	iLocal_31[8] = 2;
	iLocal_31[18] = 12;
	iLocal_31[9] = 17;
	iLocal_31[19] = 5;
	iLocal_31[20] = 20;
}

void func_470()//Position - 0x22153
{
	Global_23251.f_6 = 1;
}

void func_471(int iParam0, bool bParam1)//Position - 0x22161
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_32532, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_32532, iParam0);
	}
}

var func_472(int iParam0, int iParam1)//Position - 0x22183
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_473(iParam0, iParam1);
	STATS::STAT_GET_INT(iVar1, &uVar0, -1);
	return uVar0;
}

var func_473(int iParam0, int iParam1)//Position - 0x221A1
{
	var uVar0;
	var uVar1;
	
	func_474(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_474(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x221B7
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_475(bool bParam0)//Position - 0x2240E
{
	if (bParam0)
	{
		func_476();
		if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8371, 16);
		}
		Global_20500.f_1 = 1;
		if (func_42(0))
		{
			func_435(0);
		}
	}
	else if (Global_20500.f_1 == 1)
	{
		if (!Global_20500.f_1 == 0)
		{
			Global_20500.f_1 = 3;
		}
	}
}

void func_476()//Position - 0x22471
{
	if (Global_20500.f_1 == 9 || Global_20500.f_1 == 10)
	{
		Global_21898 = 0;
		Global_21894 = 1;
	}
}

void func_477(int iParam0, var uParam1, var uParam2)//Position - 0x2249A
{
	int iVar0;
	int iVar1;
	
	HUD::DISPLAY_AREA_NAME(true);
	func_272(8);
	func_325();
	if (bLocal_272)
	{
		func_494(&uLocal_288);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_416(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_26);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27);
	if (!PED::IS_PED_INJURED(iLocal_262[0]) && !PED::IS_PED_INJURED(iLocal_262[1]))
	{
		TASK::TASK_CLEAR_LOOK_AT(iLocal_262[0]);
		TASK::TASK_CLEAR_LOOK_AT(iLocal_262[1]);
	}
	func_493();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_58);
	func_492();
	func_491(uParam1->f_645);
	func_490(&(uParam1->f_57));
	if (!ENTITY::IS_ENTITY_DEAD(func_506(), false))
	{
		PED::SET_PED_AS_GROUP_MEMBER(func_506(), func_489());
		func_488(iLocal_296, iLocal_297);
	}
	else
	{
		func_486(&(iLocal_262[1]));
	}
	func_475(0);
	func_485(uParam2, 0);
	func_39(0);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (iParam0->f_460 && !iLocal_286)
		{
			func_484(190, 0);
		}
	}
	func_106();
	func_467();
	func_98(&(uParam1->f_72), 0);
	SYSTEM::WAIT(200);
	if (iLocal_279)
	{
		func_481(130, 0, 0);
		func_478();
	}
	func_471(23, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_478()//Position - 0x225E9
{
	func_479();
}

int func_479()//Position - 0x225F6
{
	if (func_480(0))
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

int func_480(bool bParam0)//Position - 0x22641
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_481(int iParam0, int iParam1, int iParam2)//Position - 0x22669
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
		func_67((891 + iParam0), 1, -1);
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
		Global_113810.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113810.f_10197[iParam0 /*12*/].f_11 = iParam2;
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
		func_482();
	}
}

void func_482()//Position - 0x2274F
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
		func_87(13, SYSTEM::FLOOR(Global_113810.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78689)
		{
			if (func_483() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113544 = 0;
				}
				if (!Global_63485)
				{
					func_479();
				}
			}
		}
	}
}

int func_483()//Position - 0x22C0D
{
	return Global_32283;
}

void func_484(int iParam0, bool bParam1)//Position - 0x22C18
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_231(iParam0, &Var0, &Var7, 1, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(103, iLocal_149[1], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(99, iLocal_149[2], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(109, iLocal_149[3], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(106, iLocal_149[5], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, iLocal_149[10], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(107, iLocal_149[8], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(116, iLocal_149[6], 0f);
	}
}

void func_485(var uParam0, int iParam1)//Position - 0x22CC3
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78958)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78960)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_480(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_39(0);
}

void func_486(var uParam0)//Position - 0x22D72
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !PED::IS_PED_INJURED(*uParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_299);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_299);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_262[0]))
		{
			TASK::TASK_LOOK_AT_ENTITY(0, iLocal_262[0], 8000, 2049, 3);
		}
		TASK::TASK_STAND_STILL(0, 1000);
		if (bLocal_277)
		{
			if (!BitTest(Global_113771, 10))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_487(iLocal_301 == 2, Local_342, Local_348), 1f, 20000, 0.25f, 0, func_125(iLocal_301 == 2, fLocal_352, fLocal_354));
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_487(iLocal_301 == 2, Local_339, Local_345), 1f, 20000, 0.25f, 0, func_125(iLocal_301 == 2, fLocal_351, fLocal_353));
			}
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_487(iLocal_301 == 2, Local_339, Local_345), 1f, 20000, 0.25f, 0, func_125(iLocal_301 == 2, 172.6813f, 142.6717f));
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, true);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_299);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_299);
		PED::SET_PED_KEEP_TASK(*uParam0, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_298);
}

Vector3 func_487(bool bParam0, struct<3> Param1, struct<3> Param4)//Position - 0x22EAA
{
	if (bParam0)
	{
		return Param1;
	}
	return Param4;
}

void func_488(int iParam0, var uParam1)//Position - 0x22EC5
{
	if (Global_96639 == iParam0)
	{
		Global_96640 = Global_96639;
		Global_96641 = uParam1;
		Global_96639 = 23;
	}
}

int func_489()//Position - 0x22EED
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_490(int* iParam0)//Position - 0x22EFD
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
}

void func_491(var uParam0)//Position - 0x22F19
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_492()//Position - 0x22F27
{
	HUD::CLEAR_HELP(true);
	CAM::DESTROY_ALL_CAMS(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_RADAR(true);
}

void func_493()//Position - 0x22F48
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		OBJECT::DELETE_OBJECT(&iLocal_57);
	}
}

void func_494(var uParam0)//Position - 0x22F5F
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_441(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
		}
	}
}

void func_495()//Position - 0x22F96
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113810.f_9088 || func_480(0))
	{
		if (!func_503())
		{
			iVar0 = func_502();
			if (iVar0 != -1)
			{
				if (!func_497(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_496();
		}
	}
}

void func_496()//Position - 0x23007
{
	Global_100868 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922))
		{
			switch (func_92())
			{
				case 0:
					StringCopy(&Global_78922, "CMN_MARRE" /* GXT: ~s~Michael was arrested. */, 16);
					break;
				
				case 1:
					StringCopy(&Global_78922, "CMN_FARRE" /* GXT: ~s~Franklin was arrested. */, 16);
					break;
				
				case 2:
					StringCopy(&Global_78922, "CMN_TARRE" /* GXT: ~s~Trevor was arrested. */, 16);
					break;
			}
			StringCopy(&Global_78926, "", 16);
		}
		Global_100868 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922))
		{
			switch (func_92())
			{
				case 0:
					StringCopy(&Global_78922, "CMN_MDIED" /* GXT: ~s~Michael died. */, 16);
					break;
				
				case 1:
					StringCopy(&Global_78922, "CMN_FDIED" /* GXT: ~s~Franklin died. */, 16);
					break;
				
				case 2:
					StringCopy(&Global_78922, "CMN_TDIED" /* GXT: ~s~Trevor died. */, 16);
					break;
			}
			StringCopy(&Global_78926, "", 16);
		}
		Global_100868 = 0;
		MISC::SET_BIT(&(Global_100833.f_20), 25);
	}
}

int func_497(int iParam0)//Position - 0x230F6
{
	int iVar0;
	int iVar1;
	
	func_496();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91565[iParam0 /*5*/];
	iVar1 = Global_78960.f_109[iVar0 /*4*/];
	func_501(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_498(&(Global_113810.f_2366.f_539), iVar1);
	if (Global_94988 == Global_100870)
	{
		Global_113810.f_9088.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91601[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113810.f_9088.f_330[iVar1 /*6*/].f_2++;
	Global_94988 = Global_100870;
	if (iParam0 == -1)
	{
		if (Global_113810.f_9088)
		{
		}
		return 0;
	}
	if (BitTest(Global_91565[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91565[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_498(var uParam0, int iParam1)//Position - 0x23206
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113810.f_18536[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113810.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_500(Global_113810.f_18536[iVar0], &Var2, &fVar5))
			{
				Global_113810.f_18536[iVar0] = 318;
				func_499(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98203[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_9 = 0f;
				Global_98203[iVar0 /*29*/].f_12 = 0f;
				Global_98203[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_10 = 0f;
				Global_98203[iVar0 /*29*/].f_13 = 0f;
				Global_98203[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_11 = 0f;
				Global_98203[iVar0 /*29*/].f_14 = 0f;
				Global_98203[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_26 = 0f;
				Global_98203[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_27 = 0f;
				Global_98203[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_499(var uParam0)//Position - 0x233CC
{
	*uParam0 = -15;
}

int func_500(int iParam0, var uParam1, float fParam2)//Position - 0x233DA
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_500(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_500(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_501(int iParam0, bool bParam1)//Position - 0x23D49
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94798[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94798[iParam0 /*2*/] = 0;
	}
}

int func_502()//Position - 0x23D87
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91565[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_503()//Position - 0x23DB9
{
	if (((Global_100833 == 13 || Global_100833 == 10) || Global_100833 == 11) || Global_100833 == 12)
	{
		return 0;
	}
	return 1;
}

void func_504(int iParam0, bool bParam1)//Position - 0x23DF7
{
	if (PED::IS_PED_INJURED(func_506()))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::IS_PED_GROUP_MEMBER(func_506(), func_489()))
		{
			return;
		}
		if (!PED::IS_PED_INJURED(func_505()))
		{
			if (!PED::IS_PED_GROUP_MEMBER(func_505(), func_489()))
			{
				return;
			}
		}
	}
	if (Global_96639 == 23)
	{
		Global_96641 = 10;
		Global_96639 = iParam0;
	}
}

var func_505()//Position - 0x23E5C
{
	return Global_96646;
}

int func_506()//Position - 0x23E68
{
	return Global_96645;
}

void func_507()//Position - 0x23E74
{
	if (iLocal_257 == 1)
	{
		return;
	}
	func_325();
	PAD::INIT_PC_SCRIPTED_CONTROLS("Darts");
	iLocal_257 = 1;
}

int func_508(int iParam0)//Position - 0x23E97
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_95(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

