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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
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
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114[3] = { 0, 0, 0 };
	var uLocal_118 = 16;
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
	var uLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291 = 3;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	struct<3> Local_295 = { 0, 0, 0 } ;
	int iLocal_298 = 0;
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
	struct<42> Var0;
	struct<3> Var61;
	
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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_80 = 1;
	iLocal_81 = 65;
	iLocal_82 = 49;
	iLocal_83 = 64;
	iLocal_87 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_88 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_105 = { 1180.969f, -402.381f, 67.2f };
	Local_108 = { 5f, 0f, 57.33f };
	iLocal_112 = -1;
	iLocal_285 = 77;
	iLocal_286 = -1;
	iLocal_287 = -1;
	iLocal_288 = 1;
	iLocal_289 = 1;
	iLocal_290 = 1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	func_397();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	Global_98085 = 1;
	func_396(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_395(" Force cleanup [TERMINATING]");
		func_380(&Var0, 1);
	}
	if (!func_379(108))
	{
		func_238(&Var0, Var61);
	}
	else
	{
		func_1(&Var0, Var61);
	}
}

void func_1(var* uParam0, struct<3> Param1)//Position - 0x12B
{
	while (true)
	{
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			func_395("  Ambient - Player isn't within World Point Range");
			func_380(uParam0, 1);
		}
		if (func_237() != 2)
		{
			func_395("  Ambient - Player is not Trevor");
			func_380(uParam0, 1);
		}
		iLocal_287 = func_236(5f);
		if (iLocal_287 != -1)
		{
			if (!func_230())
			{
				*uParam0 = func_229(iLocal_287);
				StringCopy(&(uParam0->f_1), func_228(iLocal_287), 32);
				uParam0->f_16 = 3;
				uParam0->f_15 = 5f;
				if (*uParam0 == -1)
				{
					func_395("  -  Ambient Rampage Mission ID is invalid");
					func_380(uParam0, 1);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
				{
					func_395("  -  Ambient Rampage Mission ID is invalid");
					func_380(uParam0, 1);
				}
				MISC::SET_BIT(&(Global_113810.f_18577[*uParam0 /*6*/]), 0);
				MISC::SET_BIT(&(Global_113810.f_18577[*uParam0 /*6*/]), 2);
				MISC::CLEAR_BIT(&(Global_113810.f_18577[*uParam0 /*6*/]), 3);
				Global_112897[*uParam0 /*10*/].f_1 = 0;
				if (!func_227(0))
				{
					Global_112897[*uParam0 /*10*/].f_3 = 0;
				}
				if (!func_219(*uParam0))
				{
					func_395(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_380(uParam0, 1);
				}
				else if (!func_5(uParam0))
				{
					func_395(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_380(uParam0, 1);
				}
				else
				{
					func_4(500, 1);
					MISC::CLEAR_AREA(Param1, uParam0->f_15, true, false, false, false);
					func_395(" RC Ambient Launcher Waiting To Terminate");
					Global_112897[*uParam0 /*10*/].f_1 = 0;
					if (func_3(uParam0))
					{
						func_395(" Ambient - Ready To Terminate");
						func_380(uParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to start this Rampage. */))
			{
				HUD::CLEAR_HELP(true);
			}
			iLocal_290 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_2(char* sParam0)//Position - 0x2B7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_3(var* uParam0)//Position - 0x2CA
{
	while (!Global_112897[*uParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

void func_4(int iParam0, bool bParam1)//Position - 0x2E8
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
			if (bParam1)
			{
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
}

int func_5(var* uParam0)//Position - 0x31A
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_218())
	{
		while (!func_213(*uParam0))
		{
			if (func_212(*uParam0))
			{
				func_201();
			}
			if (!func_158(uParam0, *uParam0 != 2))
			{
				func_395("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (func_157())
	{
		func_155();
	}
	if (!func_123(uParam0))
	{
		func_395("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_120(*uParam0, &Var0);
	MemCopy(&sVar32, {func_119(*uParam0)}, 4);
	func_118(&sVar32, Var0.f_3, 0);
	func_115(*uParam0);
	if (!func_218())
	{
		if (uParam0->f_16 == 2)
		{
			func_25(&(uParam0->f_1), 0);
		}
		else
		{
			func_25(&(uParam0->f_1), 1);
		}
	}
	func_6(*uParam0, Var0.f_0);
	return 1;
}

void func_6(int iParam0, char* sParam1)//Position - 0x3DD
{
	func_24(sParam1);
	MISC::CLEAR_BIT(&(Global_113810.f_18577[iParam0 /*6*/]), 5);
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
		{
			func_22();
			SYSTEM::WAIT(0);
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1)
	{
		Global_63486 = 0;
		SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", 1828);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
	}
	while (!BitTest(Global_113810.f_18577[iParam0 /*6*/], 5))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
		{
			MISC::SET_BIT(&(Global_113810.f_18577[iParam0 /*6*/]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)//Position - 0x499
{
	int iVar0;
	int iVar1;
	
	if (Global_63483 == 1)
	{
		func_21();
		Global_63483 = 0;
		if (Global_63478)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_63486 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_63500, {func_12(iParam0)}, 4);
	Global_63488 = 0;
	Global_63487 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_63475 = 1;
			Global_63478 = 1;
			Global_63481 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_63486 = 1;
			Global_63487 = 1;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_75730;
	Global_75730 = 1;
	iVar1 = Global_75731;
	Global_75731 = iParam0;
	if (!Global_63475)
	{
		if ((Global_75731 != iVar1 || Global_75580 == 0) || iVar0 != Global_75730)
		{
			Global_32537 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_63478 = 1;
		}
	}
	Global_63513 = MISC::GET_GAME_TIMER();
	func_8();
	Global_63485 = 0;
}

void func_8()//Position - 0x5F3
{
	int iVar0;
	
	if (!Global_63482)
	{
		return;
	}
	if (Global_75580 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75580)
	{
		switch (Global_63710[Global_75581[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_75581[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_63493)
				{
					Global_75581[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_63710[Global_75581[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_75581[iVar0 /*9*/].f_1 != 0)
					{
						Global_75581[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_63482 = 0;
}

void func_9(int iParam0)//Position - 0x6A6
{
	switch (iParam0)
	{
		case 2:
			func_10(741);
			func_10(742);
			return;
		
		case 3:
			func_10(743);
			func_10(744);
			return;
		
		case 5:
			func_10(745);
			func_10(746);
			return;
		
		case 6:
			func_10(747);
			func_10(748);
			return;
		
		case 8:
			func_10(749);
			return;
		
		case 12:
			func_10(750);
			return;
		
		case 14:
			func_10(751);
			func_10(752);
			return;
		
		case 16:
			func_10(753);
			func_10(754);
			return;
		
		case 17:
			func_10(755);
			func_10(756);
			func_10(757);
			return;
		
		case 18:
			func_10(758);
			func_10(759);
			return;
		
		case 19:
			func_10(760);
			func_10(761);
			return;
		
		case 20:
			func_10(762);
			return;
		
		case 21:
			func_10(763);
			return;
		
		case 22:
			func_10(764);
			func_10(765);
			return;
		
		case 23:
			func_10(766);
			return;
		
		case 25:
			func_10(767);
			func_10(768);
			func_10(769);
			return;
		
		case 26:
			func_10(770);
			func_10(771);
			return;
		
		case 28:
			func_10(772);
			func_10(773);
			return;
		
		case 29:
			func_10(774);
			func_10(775);
			return;
		
		case 30:
			func_10(776);
			func_10(777);
			return;
		
		case 32:
			func_10(778);
			func_10(779);
			return;
		
		case 33:
			func_10(780);
			func_10(781);
			func_10(782);
			return;
		
		case 34:
			func_10(783);
			func_10(784);
			return;
		
		case 38:
			func_10(785);
			func_10(786);
			return;
		
		case 39:
			func_10(787);
			func_10(788);
			return;
		
		case 40:
			func_10(789);
			return;
		
		case 41:
			func_10(790);
			func_10(791);
			func_10(792);
			return;
		
		case 42:
			func_10(793);
			func_10(794);
			func_10(795);
			return;
		
		case 43:
			func_10(796);
			func_10(797);
			return;
		
		case 46:
			func_10(798);
			func_10(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_10(800);
			func_10(801);
			return;
		
		case 49:
			func_10(802);
			func_10(803);
			return;
		
		case 50:
			func_10(804);
			func_10(805);
			return;
		
		case 51:
			func_10(806);
			return;
		
		case 57:
			func_10(807);
			func_10(808);
			func_10(809);
			return;
		
		case 58:
			func_10(828);
			func_10(829);
			func_10(830);
			return;
		
		case 59:
			func_10(831);
			func_10(832);
			func_10(833);
			return;
		
		case 60:
			func_10(834);
			func_10(835);
			func_10(836);
			return;
		
		case 61:
			func_10(837);
			func_10(838);
			func_10(839);
			return;
		
		case 62:
			func_10(840);
			func_10(841);
			func_10(842);
			return;
		
		case 24:
			func_10(843);
			func_10(844);
			func_10(845);
			return;
		
		default:
	}
}

void func_10(int iParam0)//Position - 0xA8E
{
	Global_63478 = 1;
	Global_63481 = 1;
	if (Global_75580 > 15)
	{
		return;
	}
	func_11(Global_75580);
	Global_75581[Global_75580 /*9*/] = iParam0;
	Global_75580++;
	if (Global_63710[iParam0 /*13*/] == 16)
	{
		Global_75732 = 1;
	}
}

void func_11(int iParam0)//Position - 0xAD9
{
	Global_75581[iParam0 /*9*/].f_1 = 0;
	Global_75581[iParam0 /*9*/].f_2 = 0f;
	Global_75581[iParam0 /*9*/].f_3 = 0;
	Global_75581[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_12(int iParam0)//Position - 0xB0D
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_119(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

void func_13()//Position - 0xB45
{
	if (Global_63485)
	{
		return;
	}
	Global_63494 = 0;
	Global_75580 = 0;
	Global_63496 = 0;
	if (Global_63493)
	{
	}
	Global_63493 = 0;
	func_20(0);
	func_19();
	Global_75732 = 0;
	Global_63484 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_63475 = 0;
	Global_63505 = 0;
	Global_63513 = -1;
}

void func_14()//Position - 0xB9B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_75767[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75776 = 0;
}

void func_15()//Position - 0xBC8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_75733[iVar0 /*2*/] = 0;
		Global_75733[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75766 = 0;
}

void func_16()//Position - 0xBFF
{
	Global_63644 = 0;
}

void func_17()//Position - 0xC0B
{
	Global_63504 = 0;
	Global_63508 = func_18(joaat("SP0_SHOTS"));
	Global_63507 = func_18(joaat("SP0_HITS"));
	Global_63510 = func_18(joaat("SP1_SHOTS"));
	Global_63509 = func_18(joaat("SP1_HITS"));
	Global_63512 = func_18(joaat("SP2_SHOTS"));
	Global_63511 = func_18(joaat("SP2_HITS"));
}

var func_18(int iParam0)//Position - 0xC5F
{
	var uVar0;
	
	STATS::STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()//Position - 0xC73
{
	int iVar0;
	
	Global_63514 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_63515[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)//Position - 0xC9D
{
	Global_78950 = iParam0;
	Global_78951 = iParam0;
}

void func_21()//Position - 0xCB1
{
	int iVar0;
	
	Global_63483 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75580)
	{
		Global_75581[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_63493)
	{
	}
	Global_63493 = 0;
}

void func_22()//Position - 0xCEA
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (func_23())
		{
			if (Global_63480 && !Global_63479)
			{
				Global_63480 = 0;
				MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
			}
		}
		else
		{
			MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
		}
	}
}

int func_23()//Position - 0xD2C
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_63478)
	{
		return 0;
	}
	return Global_63490;
}

void func_24(char* sParam0)//Position - 0xD56
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)//Position - 0xD69
{
	MISC::CLEAR_BIT(&(Global_100833.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)//Position - 0xD86
{
	if (Global_100833 != 10 && Global_100833 != 9)
	{
		StringCopy(&Global_104365, cParam0, 32);
		func_28(&Global_104373, cParam0, 0, "Start", iParam1, iParam2);
		func_27();
		Global_94991 = 0;
	}
}

void func_27()//Position - 0xDCB
{
	int iVar0;
	int iVar1;
	
	Global_107357 = Global_104373;
	Global_107357.f_1 = Global_104373.f_1;
	Global_107357.f_6 = Global_104373.f_6;
	Global_107357.f_7 = Global_104373.f_7;
	Global_107357.f_8 = Global_104373.f_8;
	Global_107357.f_2 = Global_104373.f_2;
	Global_107357.f_3 = Global_104373.f_3;
	Global_107357.f_4 = Global_104373.f_4;
	Global_107357.f_5 = Global_104373.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_107357.f_9[iVar1] = Global_104373.f_9[iVar1];
		Global_107357.f_13[iVar1] = Global_104373.f_13[iVar1];
		Global_107357.f_17[iVar1] = Global_104373.f_17[iVar1];
		Global_107357.f_21[iVar1] = Global_104373.f_21[iVar1];
		Global_107357.f_25[0 /*295*/][iVar1 /*98*/] = { Global_104373.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_107357.f_25[1 /*295*/][iVar1 /*98*/] = { Global_104373.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_107357.f_616[iVar1 /*65*/][iVar0] = Global_104373.f_616[iVar1 /*65*/][iVar0];
			Global_107357.f_616[iVar1 /*65*/].f_13[iVar0] = Global_104373.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_107357.f_616[iVar1 /*65*/].f_26[iVar0] = Global_104373.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_107357.f_616[iVar1 /*65*/].f_59 = Global_104373.f_616[iVar1 /*65*/].f_59;
		Global_107357.f_616[iVar1 /*65*/].f_60 = Global_104373.f_616[iVar1 /*65*/].f_60;
		Global_107357.f_616[iVar1 /*65*/].f_61 = Global_104373.f_616[iVar1 /*65*/].f_61;
		Global_107357.f_616[iVar1 /*65*/].f_62 = Global_104373.f_616[iVar1 /*65*/].f_62;
		Global_107357.f_616[iVar1 /*65*/].f_63 = Global_104373.f_616[iVar1 /*65*/].f_63;
		Global_107357.f_616[iVar1 /*65*/].f_64 = Global_104373.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_107357.f_616[iVar1 /*65*/].f_39[iVar0] = Global_104373.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_107357.f_616[iVar1 /*65*/].f_49[iVar0] = Global_104373.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_107357.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_104373.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_107357.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_104373.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_107357.f_2244[iVar1 /*32*/][iVar0] = Global_104373.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_107357.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_104373.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_107357.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_104373.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_107357.f_2341[iVar1] = Global_104373.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_107357.f_2838[iVar1 /*15*/][iVar0] = Global_104373.f_2838[iVar1 /*15*/][iVar0];
			Global_107357.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_104373.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_107357.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_104373.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_107357.f_2345[iVar1 /*164*/][iVar0] = Global_104373.f_2345[iVar1 /*164*/][iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_107357.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_104373.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_107357.f_2884 = { Global_104373.f_2884 };
	Global_107357.f_2884.f_3 = Global_104373.f_2884.f_3;
	Global_107357.f_2890 = { Global_104373.f_2890 };
	Global_107357.f_2890.f_3 = { Global_104373.f_2890.f_3 };
	Global_107357.f_2890.f_6 = Global_104373.f_2890.f_6;
	Global_107357.f_2890.f_8 = Global_107357.f_2890.f_8;
	Global_107357.f_2890.f_7 = Global_104373.f_2890.f_7;
	Global_107357.f_2890.f_9 = Global_104373.f_2890.f_9;
	Global_107357.f_2890.f_11 = Global_104373.f_2890.f_11;
	Global_107357.f_2890.f_10 = Global_104373.f_2890.f_10;
	Global_107357.f_2890.f_12 = Global_104373.f_2890.f_12;
	Global_107357.f_2890.f_12.f_1 = { Global_104373.f_2890.f_12.f_1 };
	Global_107357.f_2890.f_12.f_5 = Global_104373.f_2890.f_12.f_5;
	Global_107357.f_2890.f_12.f_6 = Global_104373.f_2890.f_12.f_6;
	Global_107357.f_2890.f_12.f_7 = Global_104373.f_2890.f_12.f_7;
	Global_107357.f_2890.f_12.f_8 = Global_104373.f_2890.f_12.f_8;
	Global_107357.f_2890.f_12.f_9 = { Global_104373.f_2890.f_12.f_9 };
	Global_107357.f_2890.f_12.f_59 = { Global_104373.f_2890.f_12.f_59 };
	Global_107357.f_2890.f_12.f_62 = Global_104373.f_2890.f_12.f_62;
	Global_107357.f_2890.f_12.f_63 = Global_104373.f_2890.f_12.f_63;
	Global_107357.f_2890.f_12.f_64 = Global_104373.f_2890.f_12.f_64;
	Global_107357.f_2890.f_12.f_65 = Global_104373.f_2890.f_12.f_65;
	Global_107357.f_2890.f_12.f_77 = Global_104373.f_2890.f_12.f_77;
	Global_107357.f_2890.f_12.f_66 = Global_104373.f_2890.f_12.f_66;
	Global_107357.f_2890.f_12.f_67 = Global_104373.f_2890.f_12.f_67;
	Global_107357.f_2890.f_12.f_68 = Global_104373.f_2890.f_12.f_68;
	Global_107357.f_2890.f_12.f_69 = Global_104373.f_2890.f_12.f_69;
	Global_107357.f_2890.f_12.f_71 = Global_104373.f_2890.f_12.f_71;
	Global_107357.f_2890.f_12.f_72 = Global_104373.f_2890.f_12.f_72;
	Global_107357.f_2890.f_12.f_73 = Global_104373.f_2890.f_12.f_73;
	Global_107357.f_2890.f_12.f_74 = Global_104373.f_2890.f_12.f_74;
	Global_107357.f_2890.f_12.f_75 = Global_104373.f_2890.f_12.f_75;
	Global_107357.f_2890.f_12.f_76 = Global_104373.f_2890.f_12.f_76;
	Global_107357.f_2980 = Global_104373.f_2980;
	Global_107357.f_2980.f_1 = Global_104373.f_2980.f_1;
	Global_107357.f_2980.f_2 = Global_104373.f_2980.f_2;
	Global_107357.f_2980.f_3 = Global_104373.f_2980.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1A5F
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_237();
	uParam0->f_1 = func_104();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_71(&(uParam0->f_2884), 0);
		func_70(PLAYER::PLAYER_PED_ID());
		func_63(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113810.f_2366.f_539.f_294[iVar1];
		if (iVar1 == func_60())
		{
			func_51(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100558[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100558[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100558[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100558[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100558[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100558[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100558[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100558[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100558[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100558[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113810.f_2366.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113810.f_2366.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113810.f_20567.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60659[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113810.f_2366.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113810.f_2366.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113810.f_2366.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113810.f_2366.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113810.f_2366.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113810.f_2366[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_30(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_29(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_29(var uParam0)//Position - 0x28E8
{
	*uParam0 = Global_96662;
	uParam0->f_1 = Global_96663;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x290A
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_48(iParam2);
	}
	if (func_45(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2992
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
	{
		func_33(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_32(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x29D2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100833.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(var uParam0, int iParam1, int iParam2)//Position - 0x2A00
{
	func_40(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_36(iParam1, 145, 0);
	uParam0->f_11 = func_35(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_34(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78384 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_34(int iParam0)//Position - 0x2ADC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0]))
		{
			if (iParam0 == Global_77479.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x2B1E
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]))
		{
			if (Global_98144[iVar0] == iParam0)
			{
				return Global_98154[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_36(int iParam0, bool bParam1, int iParam2)//Position - 0x2B81
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]))
		{
			if (Global_98144[iVar0] == iParam0)
			{
				if (bParam1 == 145 || bParam1 == Global_98154[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_37(bParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(bool bParam0, int iParam1)//Position - 0x2C0F
{
	struct<82> Var0;
	
	if (func_39(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_38(bParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_38(bool bParam0, var uParam1, int iParam2)//Position - 0x2C51
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (bParam0)
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

bool func_39(bool bParam0)//Position - 0x2EAD
{
	return bParam0 < 3;
}

void func_40(int iParam0, var uParam1)//Position - 0x2EB9
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_44(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_41(int iParam0)//Position - 0x3164
{
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
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2)//Position - 0x3214
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_43(int iParam0)//Position - 0x3407
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_44(var uParam0)//Position - 0x3427
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_45(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x34D8
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_46(*uParam1, func_237(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_46(int iParam0, bool bParam1, bool bParam2)//Position - 0x3607
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_47(bParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113810.f_7232[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3675
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)//Position - 0x374E
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)//Position - 0x378B
{
	if (func_39(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_50(int iParam0)//Position - 0x37B0
{
	return Global_2058[iParam0 /*29*/];
}

void func_51(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x37BF
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_48(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_59(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_58(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_39(bVar0))
		{
			uParam1->f_59 = Global_113810.f_2366.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113810.f_2366.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113810.f_2366.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113810.f_2366.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113810.f_2366.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113810.f_2366.f_539[bVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_56(161, iParam3))
			{
				uParam1->f_59 = func_52(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_52(753, iParam3);
			}
			uParam1->f_60 = func_52(754, iParam3);
			uParam1->f_61 = func_52(755, iParam3);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_56(161, iParam3))
			{
				uParam1->f_59 = func_52(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_52(753, iParam3);
			}
		}
	}
}

int func_52(int iParam0, int iParam1)//Position - 0x3959
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_53(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_53(int iParam0, var uParam1)//Position - 0x3988
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_54(uParam1));
}

int func_54(var uParam0)//Position - 0x399D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_55();
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

int func_55()//Position - 0x39D1
{
	return Global_1574918;
}

int func_56(int iParam0, int iParam1)//Position - 0x39DD
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_57(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_57(int iParam0, var uParam1)//Position - 0x3A01
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_54(uParam1));
}

void func_58(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x3A16
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_59(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x3F5F
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_60()//Position - 0x41A0
{
	func_61();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_61()//Position - 0x41B9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_49(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_48(PLAYER::PLAYER_PED_ID());
			if (func_39(iVar0) && (!func_62(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_39(Global_113810.f_2366.f_539.f_4321))
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

bool func_62(int iParam0)//Position - 0x42B6
{
	return Global_43377 == iParam0;
}

void func_63(int iParam0, bool bParam1)//Position - 0x42C4
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = func_48(iParam0);
	if (func_39(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_64(iParam0, &(Global_113810.f_2366.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113810.f_2366.f_539.f_1730[iVar2 /*4*/][bVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_113810.f_2366.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_113810.f_2366.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (bVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (bVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (bVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
		}
	}
}

void func_64(int iParam0, var uParam1)//Position - 0x43B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_69(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_69(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
					Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_67(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_67(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = FILES::GET_NUM_DLC_WEAPONS_SP();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((FILES::GET_DLC_WEAPON_DATA_SP(iVar9, &Var11) && !func_66(Var11.f_1)) && iVar72 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
						Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar9))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar9, iVar1, &Var50))
						{
							if (!func_65(Var50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var50.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_65(int iParam0)//Position - 0x463F
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x46E0
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return 0;
				break;
			
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return 0;
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return 0;
				break;
			
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case joaat("WEAPON_PISTOLXM3"):
			case joaat("WEAPON_CANDYCANE"):
			case joaat("WEAPON_RAILGUNXM3"):
			case joaat("WEAPON_TECPISTOL"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_67(int iParam0, int iParam1)//Position - 0x48C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_XM3");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_FRN");
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
				
				case 10:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH");
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_04");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_05");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_06");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_07");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_08");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_09");
					break;
			}
			break;
		
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_RPG_VARMOD_TVR");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_68(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_65(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_68(int iParam0, var* uParam1)//Position - 0x5571
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

int func_69(int iParam0)//Position - 0x55AC
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

void func_70(int iParam0)//Position - 0x5820
{
	bool bVar0;
	
	bVar0 = func_48(iParam0);
	if (func_39(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113810.f_2366.f_539.f_294[bVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_71(var uParam0, int iParam1)//Position - 0x585C
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	bool bVar5;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78938, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78938, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78938, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78938, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_75(&iVar0))
		{
			if (func_73(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			bVar5 = func_237();
			if (bVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (bVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (bVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_72(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_72(struct<3> Param0, char* sParam3, struct<3> Param4)//Position - 0x5DAB
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

bool func_73(int iParam0, var uParam1, var uParam2)//Position - 0x5DEF
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_74(*uParam1, 0f, 0f, 0f, 0);
}

bool func_74(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x656E
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_75(var uParam0)//Position - 0x65B5
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_103())
		{
			*uParam0 = func_81(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, 0, 1, -1);
			if (func_80(*uParam0) && !func_76(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_76(int iParam0)//Position - 0x6610
{
	return func_77(iParam0, 0, 1);
}

int func_77(int iParam0, int iParam1, bool bParam2)//Position - 0x6620
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
		if (func_79() == 0)
		{
			return BitTest(func_52(func_78(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x6680
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

int func_79()//Position - 0x6A28
{
	return Global_32283;
}

int func_80(int iParam0)//Position - 0x6A33
{
	return func_77(iParam0, 5, 1);
}

int func_81(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6A43
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (iParam3 == 6 || iParam3 == func_102(iVar0))
		{
			if (!bParam5 || func_101(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_82(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
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

Vector3 func_82(int iParam0, bool bParam1)//Position - 0x6AE5
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
			return func_98(Global_102986);
			break;
		
		case 46:
			if (Global_1853823 != func_97())
			{
				if (func_96(Global_1853823))
				{
					return func_89(2, 2);
				}
				else if (func_88(Global_1853823))
				{
					return func_89(45, 3);
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
			return func_86(-9.9f, -0.5f, 1f);
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
			return Global_1971274;
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
			switch (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_7)
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
			return func_83();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
		
		case 60:
			return -1299.6909f, -3017.1646f, -48.2612f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_83()//Position - 0x7250
{
	if (!func_85(Global_1956855))
	{
		return Global_1956855;
	}
	switch (func_84())
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

int func_84()//Position - 0x754B
{
	return Global_2652364.f_2650;
}

int func_85(struct<3> Param0)//Position - 0x755A
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_86(struct<3> Param0)//Position - 0x7584
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_87(), 0f, Param0);
}

Vector3 func_87()//Position - 0x7599
{
	return -880f, -2770f, -50f;
}

int func_88(int iParam0)//Position - 0x75B0
{
	if (iParam0 != func_97())
	{
		if ((BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 0) || BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 1)) || BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_89(int iParam0, int iParam1)//Position - 0x7608
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853823 != func_97())
	{
		if (iParam1 == 3)
		{
			if (func_90(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 4))
			{
				if (func_90(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 5))
			{
				if (func_90(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_90(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x76B2
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_95(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_95(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_93(iParam0) };
	}
	else
	{
		Var12 = { func_92(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_91(Var18, -Var0.f_3.f_2) };
	Var18 = { func_91(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_91(struct<3> Param0, float fParam3)//Position - 0x7747
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

struct<6> func_92(int iParam0)//Position - 0x778B
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

struct<6> func_93(int iParam0)//Position - 0x790F
{
	return func_94(iParam0);
}

struct<6> func_94(int iParam0)//Position - 0x791D
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

int func_95(int iParam0, var uParam1)//Position - 0x83E5
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

int func_96(int iParam0)//Position - 0x8467
{
	if (iParam0 != func_97())
	{
		if ((BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 3) || BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 4)) || BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_97()//Position - 0x84BF
{
	return -1;
}

Vector3 func_98(int iParam0)//Position - 0x84C8
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
			return func_87();
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
		
		case 17:
			if (func_99() == 0)
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

int func_99()//Position - 0x8734
{
	return func_100(PLAYER::PLAYER_ID());
}

int func_100(int iParam0)//Position - 0x8744
{
	return MISC::GET_BITS_IN_RANGE(Global_2657704[iParam0 /*463*/].f_321.f_3, 28, 31);
}

int func_101(int iParam0)//Position - 0x8761
{
	return func_77(iParam0, 0, 0);
}

int func_102(int iParam0)//Position - 0x8771
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

bool func_103()//Position - 0x8AA7
{
	return Global_100885.f_393 > 0;
}

var func_104()//Position - 0x8AB8
{
	var uVar0;
	
	func_114(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_113(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_112(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_107(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_106(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_105(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_105(var uParam0, int iParam1)//Position - 0x8AFE
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

void func_106(var uParam0, int iParam1)//Position - 0x8B84
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_107(var uParam0, int iParam1)//Position - 0x8BB7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_111(*uParam0);
	iVar1 = func_109(*uParam0);
	if (iParam1 < 1 || iParam1 > func_108(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_108(int iParam0, int iParam1)//Position - 0x8C08
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

var func_109(int iParam0)//Position - 0x8CAA
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_110(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_110(bool bParam0, int iParam1, int iParam2)//Position - 0x8CCC
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_111(int iParam0)//Position - 0x8CE3
{
	return iParam0 & 15;
}

void func_112(var uParam0, int iParam1)//Position - 0x8CF0
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_113(var uParam0, int iParam1)//Position - 0x8D2A
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_114(var uParam0, int iParam1)//Position - 0x8D65
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_115(int iParam0)//Position - 0x8DA1
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_117())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(9, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_116())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(9, &cVar1);
	}
}

bool func_116()//Position - 0x8DFA
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_117()//Position - 0x8E10
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_118(char* sParam0, int iParam1, int iParam2)//Position - 0x8E26
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97883))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_97883, 0, 0, false, true, false);
		StringCopy(&Global_97883, "", 64);
	}
	StringCopy(&Global_97883, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_227(0));
}

struct<2> func_119(int iParam0)//Position - 0x8E68
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_120(int iParam0, var uParam1)//Position - 0x92B5
{
	switch (iParam0)
	{
		case 0:
			func_121(uParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 1:
			func_121(uParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 2:
			func_121(uParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 3:
			func_121(uParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 4:
			func_121(uParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 5:
			func_121(uParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 6:
			func_121(uParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 7:
			func_121(uParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_122(iParam0), 0, 0);
			break;
		
		case 8:
			func_121(uParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 9:
			func_121(uParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 10:
			func_121(uParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 11:
			func_121(uParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 12:
			func_121(uParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 13:
			func_121(uParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 14:
			func_121(uParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 15:
			func_121(uParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 16:
			func_121(uParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 17:
			func_121(uParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 18:
			func_121(uParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 19:
			func_121(uParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 20:
			func_121(uParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 21:
			func_121(uParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_122(iParam0), 1, 0);
			break;
		
		case 22:
			func_121(uParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_122(iParam0), 1, 0);
			break;
		
		case 23:
			func_121(uParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_122(iParam0), 0, 1);
			break;
		
		case 24:
			func_121(uParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_122(iParam0), 0, 1);
			break;
		
		case 25:
			func_121(uParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 26:
			func_121(uParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 27:
			func_121(uParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 28:
			func_121(uParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 29:
			func_121(uParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 30:
			func_121(uParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 31:
			func_121(uParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 32:
			func_121(uParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 33:
			func_121(uParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 34:
			func_121(uParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 35:
			func_121(uParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 36:
			func_121(uParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 37:
			func_121(uParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 38:
			func_121(uParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 39:
			func_121(uParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 40:
			func_121(uParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 41:
			func_121(uParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 42:
			func_121(uParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 43:
			func_121(uParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 44:
			func_121(uParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 45:
			func_121(uParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 46:
			func_121(uParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 47:
			func_121(uParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 48:
			func_121(uParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 49:
			func_121(uParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 50:
			func_121(uParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 51:
			func_121(uParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 52:
			func_121(uParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 54:
			func_121(uParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 55:
			func_121(uParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 56:
			func_121(uParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 53:
			func_121(uParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 57:
			func_121(uParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 58:
			func_121(uParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 59:
			func_121(uParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 60:
			func_121(uParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 61:
			func_121(uParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 62:
			func_121(uParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_121(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xA4FC
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_122(int iParam0)//Position - 0xA58D
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_123(var* uParam0)//Position - 0xA8D3
{
	int iVar0;
	
	if (func_154(&(uParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_9)))
		{
			func_143(1);
			func_141(uParam0, 1, func_142(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_140(*uParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_201();
					SYSTEM::WAIT(0);
				}
			}
		}
		func_124(*uParam0);
		iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(uParam0->f_1), uParam0, 61, 57500);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_395("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::SET_SCRIPT_CAN_START_CUTSCENE(iVar0);
		}
		else
		{
			func_395("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
		return 1;
	}
	return 0;
}

void func_124(int iParam0)//Position - 0xA978
{
	struct<2> Var0;
	
	func_139();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
	}
	if (func_138(iParam0))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	HUD::CLEAR_ADDITIONAL_TEXT(2, true);
	if (Global_44569 == 1)
	{
		if (func_136(PLAYER::PLAYER_PED_ID()))
		{
			func_127(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!func_218())
	{
		if (iParam0 < 63)
		{
			func_125(iParam0);
			Var0 = { func_12(iParam0) };
			HUD::SET_MISSION_NAME(true, &Var0);
		}
	}
}

void func_125(int iParam0)//Position - 0xAA13
{
	if (iParam0 < 63)
	{
		func_126();
		Global_78945 = iParam0;
		Global_78944 = 0;
		Global_78947 = 7;
	}
}

void func_126()//Position - 0xAA39
{
	if (Global_78944 != 6)
	{
	}
	if (Global_78949)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_78949 = 0;
		Global_23390.f_8892 = 0;
	}
	Global_78944 = 6;
	Global_78946 = -1;
	Global_78945 = -1;
}

void func_127(int iParam0)//Position - 0xAA71
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
	iVar0 = func_135(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44355[iVar0 /*5*/];
		func_130(1, iVar1, 1);
		return;
	}
	iVar2 = func_129(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_128(iVar2);
}

void func_128(int iParam0)//Position - 0xAACA
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44329[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44329[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_44567 = 0;
		}
	}
	Global_44329[iParam0 /*5*/] = 13;
	Global_44329[iParam0 /*5*/].f_1 = 0;
	Global_44329[iParam0 /*5*/].f_2 = 0;
	Global_44329[iParam0 /*5*/].f_3 = 0;
	Global_44329[iParam0 /*5*/].f_4 = 0;
	Global_44327 = (Global_44327 - 1);
	if (Global_44327 < 0)
	{
		Global_44327 = 0;
	}
}

int func_129(int iParam0)//Position - 0xAB4D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44329[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_130(int iParam0, int iParam1, int iParam2)//Position - 0xAB7E
{
	func_131(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xAB93
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
	if (func_133(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_132();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44436[iVar0 /*6*/] = iParam0;
	Global_44436[iVar0 /*6*/].f_1 = iParam1;
	Global_44436[iVar0 /*6*/].f_2 = iParam2;
	Global_44436[iVar0 /*6*/].f_3 = iParam3;
	Global_44436[iVar0 /*6*/].f_4 = iParam4;
	Global_44436[iVar0 /*6*/].f_5 = iParam5;
}

int func_132()//Position - 0xAC15
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44436[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_133(int iParam0, int iParam1, int iParam2)//Position - 0xAC46
{
	if (func_134(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_134(int iParam0, int iParam1, int iParam2)//Position - 0xAC61
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44436[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44436[iVar0 /*6*/])
			{
				if (iParam1 == Global_44436[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_135(int iParam0)//Position - 0xACAD
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
		if (!Global_44355[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44355[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_136(int iParam0)//Position - 0xACF6
{
	if (func_137(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_137(int iParam0)//Position - 0xAD16
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

int func_138(int iParam0)//Position - 0xAD37
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_139()//Position - 0xAD8A
{
	if (Global_9175[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9175[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9175[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9175[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9175[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9175[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8370, 25);
	MISC::SET_BIT(&Global_8371, 11);
}

int func_140(int iParam0)//Position - 0xAE07
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_141(var uParam0, bool bParam1, bool bParam2)//Position - 0xAE5A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_137(uParam0->f_28[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_137(uParam0->f_35[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_137(uParam0->f_41[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), bParam1);
		if (bParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		}
	}
}

int func_142(int iParam0)//Position - 0xAF4F
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_143(bool bParam0)//Position - 0xAFBA
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
	}
	func_144(1, 1, 0, 0, 0, 0, 0);
}

void func_144(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xAFF9
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_153(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_152())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_151(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_153(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_151(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID())) && !func_146(PLAYER::PLAYER_ID(), 0)) && !func_145()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_145()//Position - 0xB146
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

bool func_146(int iParam0, int iParam1)//Position - 0xB160
{
	bool bVar0;
	
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_147(-1, 0) == 8;
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

int func_147(int iParam0, bool bParam1)//Position - 0xB1B9
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
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

int func_148(var uParam0)//Position - 0xB1FA
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

int func_149(int iParam0)//Position - 0xB21C
{
	if (func_146(iParam0, 0))
	{
		return 1;
	}
	if (func_150())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657704[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_150()//Position - 0xB25B
{
	return BitTest(Global_2621446, 3);
}

int func_151(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xB269
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

int func_152()//Position - 0xB29C
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_153(int iParam0)//Position - 0xB2C3
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 13);
	}
}

int func_154(char* sParam0)//Position - 0xB2E6
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		SCRIPT::REQUEST_SCRIPT(sParam0);
		while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			SCRIPT::REQUEST_SCRIPT(sParam0);
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	func_395("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_155()//Position - 0xB323
{
	Global_20711 = 0;
	func_156();
}

void func_156()//Position - 0xB333
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

int func_157()//Position - 0xB38A
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_158(var uParam0, bool bParam1)//Position - 0xB3AC
{
	struct<27> Var0;
	
	if (Global_78689)
	{
		func_395("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_120(*uParam0, &Var0);
	if ((func_200(*uParam0) || func_198(*uParam0)) || Global_78935 == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		func_395("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_190(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_189(uParam0->f_28[0]);
		}
		func_395("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_169(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_169(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_166(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_165(uParam0);
			}
			else
			{
				func_163(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_166(uParam0, 0, 1))
		{
			func_163(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_166(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_166(uParam0, 1, 0))
		{
			func_163(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_166(uParam0, 0, 0))
		{
			func_163(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_137(uParam0->f_35[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_395("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!BitTest(Var0.f_26, func_237()))
		{
			func_395("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_162(&(uParam0->f_48)) && bParam1)
	{
		func_159(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_159(int iParam0, var uParam1, int iParam2)//Position - 0xB61C
{
	int iVar0;
	int iVar1;
	
	if (func_137(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_162(uParam1))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
						if (iParam2 != 21)
						{
							if (func_74(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0f, false, false, false);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								if (func_161(uParam1))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0f, 2, 0);
								}
								else
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0f, 2, 0);
								}
								TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_161(uParam1) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_160(iParam2) && !PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 25f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_161(uParam1) && uParam1->f_4 == 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (func_74(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				uParam1->f_4 = 1;
				if (func_160(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_160(iParam2) || PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 10f))
				{
					if (func_74(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0f, false, false, false);
					}
					else
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_160(int iParam0)//Position - 0xB974
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_161(var uParam0)//Position - 0xB994
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_162(var uParam0)//Position - 0xB9AC
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_163(var uParam0)//Position - 0xB9D1
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 52)
	{
		func_164(&(uParam0->f_41[1]));
		func_164(&(uParam0->f_41[2]));
	}
	if (func_137(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_136(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_28[iVar0], false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[iVar0], true, false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], false);
				}
				PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], true);
				if (*uParam0 == 34)
				{
					if (func_137(uParam0->f_41[0]))
					{
						ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], true, false);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_189(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						STREAMING::REQUEST_ANIM_DICT("rcmcollect_paperleadinout@");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0f, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					case 0:
					case 1:
						STREAMING::REQUEST_ANIM_DICT("rcmabigail");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0f, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					case 32:
						STREAMING::REQUEST_ANIM_DICT("rcmminute1");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (iVar0 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0f, false, false, false);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					case 24:
						STREAMING::REQUEST_ANIM_DICT("special_ped@hao@base");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_PLAY_ANIM(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0f, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					default:
						TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_28[iVar0]);
						TASK::TASK_SMART_FLEE_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_164(int* iParam0)//Position - 0xBCD5
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_165(var uParam0)//Position - 0xBD00
{
	int iVar0;
	
	if (func_137(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_136(uParam0->f_28[iVar0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[iVar0], 1, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar0], false);
				PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], true);
				TASK::TASK_COMBAT_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_166(var uParam0, bool bParam1, bool bParam2)//Position - 0xBD80
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_136(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_35[iVar0], false))
				{
					func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_35[iVar0], false))
				{
					func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID(), false))
				{
					func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (ENTITY::GET_ENTITY_HEALTH(uParam0->f_35[iVar0]) < 850)
				{
					func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
						{
							func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_168(iVar2))
						{
							if (ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("towtruck2"))
							{
								if (func_168(uParam0->f_35[iVar0]))
								{
									if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, uParam0->f_35[iVar0]))
									{
										func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_168(iVar3))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], iVar3) && ENTITY::GET_ENTITY_SPEED(iVar3) > 6f)
							{
								func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_167(PLAYER::PLAYER_PED_ID(), uParam0->f_35[iVar0]))
							{
								func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_167(int iParam0, int iParam1)//Position - 0xBF3E
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_168(int iParam0)//Position - 0xBF6E
{
	if (func_137(iParam0))
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

int func_169(var uParam0, bool bParam1, int iParam2)//Position - 0xBF98
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_136(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_28[iVar0]))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_163(uParam0);
							}
							else
							{
								func_165(uParam0);
							}
							if (func_157())
							{
								func_155();
							}
							func_395("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_163(uParam0);
						}
						else
						{
							func_165(uParam0);
						}
						func_395("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_28[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
						{
							if (iParam2 == 0)
							{
								func_163(uParam0);
							}
							else
							{
								func_165(uParam0);
							}
							func_395("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_188(*uParam0))
					{
						if (!func_212(*uParam0))
						{
							if (func_183(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_163(uParam0);
								}
								else
								{
									func_165(uParam0);
								}
								func_395("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], true), 15f))
						{
							if (iParam2 == 0)
							{
								func_163(uParam0);
							}
							else
							{
								func_165(uParam0);
							}
							func_395("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_171(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_163(uParam0);
							}
							else
							{
								func_165(uParam0);
							}
							func_395("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_170(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], true), 5f))
						{
							if (iParam2 == 0)
							{
								func_163(uParam0);
							}
							else
							{
								func_165(uParam0);
							}
							func_395("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
							{
								func_163(uParam0);
							}
							else
							{
								func_165(uParam0);
							}
							func_395("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_395("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_137(uParam0->f_41[0]))
						{
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], true, false);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_170(int iParam0)//Position - 0xC256
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0, float fParam1)//Position - 0xC28A
{
	float fVar0;
	
	if (func_137(PLAYER::PLAYER_PED_ID()) && func_137(iParam0))
	{
		if (func_182(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
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
				if (func_172(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_172(int iParam0, float fParam1)//Position - 0xC300
{
	return func_173(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_173(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xC318
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_181(iParam0, iParam1);
	if (!func_137(iParam0) || !func_137(iParam1))
	{
		if (iVar4 != -1)
		{
			func_180(&(Local_35[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_177(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_176();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_35[iVar4 /*4*/].f_1 = iParam0;
		Local_35[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_174(&(Local_35[iVar4 /*4*/]), Var1, iParam1, &(Local_35[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_35[iVar4 /*4*/].f_3) < iParam4);
}

int func_174(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0xC3D9
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_137(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_175(iParam4, iParam7) };
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
		func_137(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_76)
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
		func_137(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, false))
			{
				if (bLocal_76)
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

Vector3 func_175(int iParam0, int iParam1)//Position - 0xC505
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

int func_176()//Position - 0xC5CA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if ((Local_35[iVar0 /*4*/] == 0 && Local_35[iVar0 /*4*/].f_1 == 0) && Local_35[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_177(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xC614
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_179(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
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
		Var3 = { func_179(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_178(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_178(struct<3> Param0, struct<3> Param3)//Position - 0xC6A5
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_179(struct<3> Param0)//Position - 0xC6C6
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

void func_180(var uParam0)//Position - 0xC705
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_181(int iParam0, int iParam1)//Position - 0xC720
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if (Local_35[iVar0 /*4*/].f_1 == iParam0 && Local_35[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_182(int iParam0)//Position - 0xC75F
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xC787
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
	if (func_137(PLAYER::PLAYER_PED_ID()) && func_137(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_187(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_184(iParam0, fVar1, bParam3, bParam4))
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
				if (func_187(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_184(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_184(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xC882
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
				if (func_185(iParam0, fParam1))
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
			if (func_185(iParam0, fParam1))
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

int func_185(int iParam0, float fParam1)//Position - 0xC98E
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_GRENADE"), fParam1, &Var1, &uVar0, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_BZGAS"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_MOLOTOV"), fParam1, &Var1, &uVar0, false))
	{
		if (func_186(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_186(int iParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0xCA23
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_179(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
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
		Var3 = { func_179(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_178(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_187(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xCAB1
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

int func_188(int iParam0)//Position - 0xCAF9
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_189(int iParam0)//Position - 0xCB43
{
	int iVar0;
	
	if (func_137(PLAYER::PLAYER_PED_ID()) && func_137(iParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0f, false, false, false);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		TASK::TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

int func_190(int iParam0)//Position - 0xCBE0
{
	if (iParam0 == -1)
	{
		iParam0 = func_196();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_200(iParam0))
	{
		return 0;
	}
	if (!func_194(4))
	{
		if (func_198(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_193() && !func_192())
	{
		return 1;
	}
	if (!func_191(iParam0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			{
				return 1;
			}
		}
	}
	if (!BitTest(Global_113810.f_18577[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)//Position - 0xCC75
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_192()//Position - 0xCCB4
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

int func_193()//Position - 0xCCD1
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_194(int iParam0)//Position - 0xCCF4
{
	return func_195(iParam0, Global_43377);
}

int func_195(int iParam0, int iParam1)//Position - 0xCD05
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

int func_196()//Position - 0xCEE6
{
	return func_197(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_197(char* sParam0, int iParam1)//Position - 0xCEF7
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = MISC::GET_HASH_KEY(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_120(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_198(int iParam0)//Position - 0xCF40
{
	if ((func_199() && Global_100833.f_11 == 6) && iParam0 == func_197(&(Global_100833.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_199()//Position - 0xCF74
{
	if (((Global_100833 == 13 || Global_100833 == 10) || Global_100833 == 11) || Global_100833 == 12)
	{
		return 0;
	}
	return 1;
}

int func_200(int iParam0)//Position - 0xCFB2
{
	if (func_227(0))
	{
		if (Global_78936.f_1 == 7)
		{
			if (Global_78936 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_201()//Position - 0xCFDA
{
	func_206(0);
	func_205();
	func_202();
}

void func_202()//Position - 0xCFEF
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_203(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
	}
}

int func_203(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xD047
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam6)
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
	func_204(iParam0);
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

void func_204(int iParam0)//Position - 0xD1DF
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

void func_205()//Position - 0xD20B
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
}

void func_206(int iParam0)//Position - 0xD25C
{
	if (func_211())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_210(0))
		{
			func_207(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

void func_207(int iParam0)//Position - 0xD28F
{
	if (func_211())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_209())
		{
			func_208(1, 1);
		}
		else
		{
			func_208(0, 0);
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
	if (!func_152())
	{
		Global_20500.f_1 = 3;
	}
}

void func_208(bool bParam0, bool bParam1)//Position - 0xD319
{
	if (bParam0)
	{
		if (func_210(0))
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

bool func_209()//Position - 0xD38D
{
	return BitTest(Global_1963795, 5);
}

int func_210(int iParam0)//Position - 0xD39B
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

bool func_211()//Position - 0xD3F2
{
	return BitTest(Global_1963795, 19);
}

int func_212(int iParam0)//Position - 0xD401
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)//Position - 0xD442
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_196();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_215(&(Global_112897[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_214(iParam0);
	return 1;
}

void func_214(int iParam0)//Position - 0xD487
{
	Global_112897[iParam0 /*10*/].f_4 = 1;
	Global_112897[iParam0 /*10*/].f_5 = 0;
	Global_112897[iParam0 /*10*/].f_6 = 0;
	Global_112897[iParam0 /*10*/] = 0;
}

int func_215(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xD4B9
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98291.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_217(0))
		{
			return 0;
		}
		Global_43341++;
		*uParam0 = Global_43341;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23251.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43377 = iParam2;
		Global_43339 = *uParam0;
		Global_43340 = iParam4;
		Global_43338 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43338 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43338)
			{
				if (Global_43344[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43339 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_194(iParam2))
		{
			return 0;
		}
		if (Global_43338 == 8)
		{
			return 0;
		}
		Global_43341++;
		*uParam0 = Global_43341;
		Global_43344[Global_43338 /*4*/] = Global_43341;
		Global_43344[Global_43338 /*4*/].f_1 = iParam1;
		Global_43344[Global_43338 /*4*/].f_2 = iParam2;
		Global_43344[Global_43338 /*4*/].f_3 = 0;
		Global_43338++;
		if (iParam4 != 0)
		{
			func_216(uParam0, iParam4);
		}
	}
	return 2;
}

void func_216(var uParam0, int iParam1)//Position - 0xD5F0
{
	int iVar0;
	
	if (Global_43338 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43338)
	{
		if (Global_43344[iVar0 /*4*/] == *uParam0)
		{
			Global_43344[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_217(int iParam0)//Position - 0xD63F
{
	if (Global_43377 == 15)
	{
		return 0;
	}
	if (func_194(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_218()//Position - 0xD661
{
	if (Global_100833 == 10 || Global_100833 == 9)
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xD685
{
	char* sVar0;
	
	if (Global_78689)
	{
		func_395("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113810.f_9088 && !func_227(1))
	{
		func_395("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_220(iParam0))
	{
		Global_112897[iParam0 /*10*/].f_1 = 1;
		func_395("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100833.f_11 == 6)
	{
		if (Global_100833 < 9)
		{
			func_120(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100833.f_3), sVar0))
			{
				func_395("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112897[iParam0 /*10*/].f_1 = 1;
		func_395("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_220(int iParam0)//Position - 0xD73E
{
	var uVar0;
	
	func_120(iParam0, &uVar0);
	if (!func_194(4))
	{
		if (func_198(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_193() && !func_192())
	{
		return 0;
	}
	if (func_226(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_196();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_200(iParam0))
	{
		if (!func_225(iParam0))
		{
			return 0;
		}
		if (!func_224(iParam0))
		{
			return 0;
		}
		if (func_223(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_221(5))
		{
			Global_112897[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112897[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_221(int iParam0)//Position - 0xD7FF
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_100885.f_391 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_221(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_222(iParam0, &sVar1);
		iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95851[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_100885.f_391 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_222(int iParam0, char* sParam1)//Position - 0xD884
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_223(int iParam0)//Position - 0xD966
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113810.f_18577[iParam0 /*6*/], 3);
}

int func_224(int iParam0)//Position - 0xD991
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113810.f_18577[iParam0 /*6*/], 2);
}

int func_225(int iParam0)//Position - 0xD9BC
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113810.f_18577[iParam0 /*6*/], 0);
}

int func_226(int iParam0)//Position - 0xD9E7
{
	if (func_191(iParam0))
	{
		return 0;
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_227(bool bParam0)//Position - 0xDA1C
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

char* func_228(int iParam0)//Position - 0xDA44
{
	switch (iParam0)
	{
		case 0:
			return "Rampage1";
		
		case 1:
			return "Rampage3";
		
		case 2:
			return "Rampage4";
		
		case 3:
			return "Rampage5";
		
		case 4:
			return "Rampage2";
		
		default:
	}
	return "";
}

int func_229(int iParam0)//Position - 0xDA98
{
	switch (iParam0)
	{
		case 0:
			return 52;
		
		case 1:
			return 54;
		
		case 2:
			return 55;
		
		case 3:
			return 56;
		
		case 4:
			return 53;
		
		default:
	}
	return -1;
}

bool func_230()//Position - 0xDADF
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_235(PLAYER::PLAYER_PED_ID()))
	{
		return bVar0;
	}
	if (Global_112897[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_289)
		{
			HUD::CLEAR_HELP(true);
			func_234("RAMP_HELP_CRIM" /* GXT: Rampages can't be triggered while wanted. Lose your wanted rating! */, -1);
			iLocal_289 = 0;
		}
		bVar0 = true;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iLocal_288)
		{
			HUD::CLEAR_HELP(true);
			func_234("RAMP_HELP_FOOT" /* GXT: This rampage has to be triggered on-foot. */, -1);
			iLocal_288 = 0;
		}
		bVar0 = true;
	}
	else if ((func_233(0) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_232())
	{
		if (func_2("RAMP_HELP_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to start this Rampage. */))
		{
			if (func_233(0))
			{
			}
			else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
			}
			else if (func_232())
			{
			}
			HUD::CLEAR_HELP(true);
			iLocal_290 = 0;
		}
		bVar0 = true;
	}
	else if (func_379(108))
	{
		if (!iLocal_290)
		{
			if (!func_2("RAMP_HELP_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to start this Rampage. */))
			{
				HUD::CLEAR_HELP(true);
				func_231("RAMP_HELP_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to start this Rampage. */);
			}
			iLocal_290 = 1;
		}
		bVar0 = !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
	}
	return bVar0;
}

void func_231(char* sParam0)//Position - 0xDBEC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_232()//Position - 0xDC02
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98291.f_44 == 1;
	}
	return 0;
}

bool func_233(bool bParam0)//Position - 0xDC1E
{
	if (bParam0)
	{
		return (Global_23251.f_4 && Global_23251.f_104 == 4);
	}
	return Global_23251.f_4;
}

void func_234(char* sParam0, int iParam1)//Position - 0xDC47
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_235(int iParam0)//Position - 0xDC5E
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

int func_236(float fParam0)//Position - 0xDC7C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!func_235(PLAYER::PLAYER_PED_ID()))
	{
		return -1;
	}
	Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_32663[(iLocal_285 + iVar0) /*23*/][0 /*3*/] };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var1, true) <= fParam0 && MISC::ABSF((Var4.f_2 - Var1.f_2)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_237()//Position - 0xDCF8
{
	func_61();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_238(var* uParam0, struct<3> Param1)//Position - 0xDD11
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	
	iVar0 = 0;
	iVar1[0] = 52;
	iVar1[1] = 53;
	iVar1[2] = 54;
	iVar1[3] = 55;
	iVar1[4] = 56;
	if (!func_376(&iVar1, uParam0, Param1, 5f))
	{
		func_395(" Didn't know which RC To Launch");
		func_380(uParam0, 1);
	}
	if (!func_219(*uParam0))
	{
		func_395(" RC Can't Launch");
		func_380(uParam0, 1);
	}
	if (func_375(*uParam0))
	{
		while (true)
		{
			SYSTEM::WAIT(0);
			if (func_374(*uParam0))
			{
				func_380(uParam0, 1);
			}
		}
	}
	func_284(uParam0);
	MISC::CLEAR_AREA(Param1, uParam0->f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (*uParam0 == 52 || *uParam0 == 53)
		{
			if (func_137(uParam0->f_28[0]))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar7]))
							{
								if ((func_137(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_137(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, true, true, false);
					PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, true, 0);
					if (func_137(uParam0->f_28[1]))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, true, true, false);
						PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, true, 0);
					}
					func_395("Sitting Rampage attacked with explosives, cleaning up");
					func_380(uParam0, 1);
				}
			}
			if (func_137(uParam0->f_28[1]))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[1], true), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar7]))
							{
								if ((func_137(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_137(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, true, true, false);
					PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, true, 0);
					if (func_137(uParam0->f_28[0]))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, true, true, false);
						PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, true, 0);
					}
					func_395("Sitting Rampage attacked with explosives, cleaning up");
					func_380(uParam0, 1);
				}
			}
		}
		if (func_283(uParam0))
		{
			func_282(uParam0);
			func_395(" RC combat happening in area, tell peds to flee");
			func_163(uParam0);
			func_380(uParam0, 1);
		}
		if (!func_158(uParam0, 1))
		{
			func_395(" RC Is Not Fine And In Range");
			func_380(uParam0, 1);
		}
		if (func_281(52))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("Rampage1"))
			{
				func_395(" Turning Off Scenario Group For Rampage 1");
				TASK::SET_SCENARIO_GROUP_ENABLED("Rampage1", false);
			}
		}
		func_280(*uParam0);
		func_272(&iLocal_286, &(uParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_286 != -1)
		{
			func_271(uParam0, &uLocal_291);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_395(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_295 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if ((!(*uParam0 == 52 && Local_295.f_2 > 34f) && !(*uParam0 == 53 && Local_295.f_2 > 71f)) && !(*uParam0 == 54 && Local_295.f_2 > 30f))
		{
			if (func_259(uParam0, 0))
			{
				if (*uParam0 == 53)
				{
					if (func_256(uParam0))
					{
						func_395(" Trigger Conditions Met");
						func_201();
						if (!func_5(uParam0))
						{
							func_395(" RC Can't Launch");
							func_380(uParam0, 1);
						}
						func_395(" RC Launcher Waiting To Terminate");
						if (func_3(uParam0))
						{
							func_395(" Ready To Terminate");
							func_380(uParam0, 0);
						}
					}
				}
				else if (func_255(uParam0))
				{
					func_395(" Trigger Conditions Met");
					func_201();
					if (!func_5(uParam0))
					{
						func_395(" RC Can't Launch");
						func_380(uParam0, 1);
					}
					func_395(" RC Launcher Waiting To Terminate");
					if (func_3(uParam0))
					{
						func_395(" Ready To Terminate");
						func_380(uParam0, 0);
					}
				}
			}
			else
			{
				if (*uParam0 == 53)
				{
					func_239(uParam0);
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					iLocal_112 = -1;
					CAM::STOP_GAMEPLAY_HINT(false);
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
}

void func_239(var* uParam0)//Position - 0xE1E4
{
	char* sVar0;
	
	sVar0 = "misstrvram_2";
	switch (iLocal_113)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
			{
				iLocal_113++;
			}
			break;
		
		case 1:
			if (func_137(uParam0->f_28[0]))
			{
				if (func_254(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), 1) < 30f && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_28[0]))
				{
					func_253(&uLocal_118, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_113++;
				}
			}
			break;
		
		case 2:
			iLocal_114[0] = PED::CREATE_SYNCHRONIZED_SCENE(Local_105, Local_108, 2);
			if (func_137(uParam0->f_28[0]))
			{
				func_240(&uLocal_118, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_114[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1000f, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_114[0], false);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_114[0], true);
			iLocal_113++;
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114[0]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114[0]) >= 0.95f)
				{
					iLocal_113++;
				}
			}
			break;
		
		case 4:
			iLocal_114[1] = PED::CREATE_SYNCHRONIZED_SCENE(Local_105, Local_108, 2);
			if (func_137(uParam0->f_28[0]))
			{
				func_240(&uLocal_118, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_114[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1000f, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_114[1], false);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_114[1], true);
			iLocal_113++;
			break;
		
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114[1]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114[1]) >= 0.95f)
				{
					iLocal_113++;
				}
			}
			break;
		
		case 6:
			iLocal_114[2] = PED::CREATE_SYNCHRONIZED_SCENE(Local_105, Local_108, 2);
			if (func_137(uParam0->f_28[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_114[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1000f, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_114[2], true);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_114[2], false);
			iLocal_113++;
			break;
		
		case 7:
			break;
	}
}

bool func_240(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE447
{
	func_252(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21852 = 0;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 1;
	Global_22838 = 0;
	Global_22842 = 0;
	StringCopy(&Global_22849, sParam3, 24);
	Global_2883585 = 0;
	return func_241(sParam2, iParam4, 0);
}

int func_241(char* sParam0, int iParam1, bool bParam2)//Position - 0xE49B
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
					func_156();
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
		if (func_251(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_250();
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
				func_249();
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
				if (func_248())
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
			if (func_152())
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
			func_247();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_246();
		func_242();
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
		func_156();
	}
	return 0;
}

void func_242()//Position - 0xE769
{
	if (!func_243())
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

int func_243()//Position - 0xE7A0
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_97())
	{
		return 0;
	}
	if (func_244(PLAYER::PLAYER_ID()))
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

bool func_244(int iParam0)//Position - 0xE803
{
	return func_245(iParam0, 20);
}

var func_245(int iParam0, int iParam1)//Position - 0xE813
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

void func_246()//Position - 0xE82B
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

void func_247()//Position - 0xE85D
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

int func_248()//Position - 0xE8F2
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

void func_249()//Position - 0xE98B
{
	if (func_62(14))
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
		Global_20500 = func_237();
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

void func_250()//Position - 0xEA2D
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

bool func_251(int iParam0, int iParam1)//Position - 0xEA85
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

void func_252(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xEABD
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

void func_253(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xEB13
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

float func_254(int iParam0, int iParam1, bool bParam2)//Position - 0xEBAE
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

int func_255(var* uParam0)//Position - 0xEC0C
{
	func_201();
	if (iLocal_112 < 0)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[1], true)) < 25f)
		{
			return 1;
		}
		switch (*uParam0)
		{
			case 52:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0.1f, 0f, 0.9f, true, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-5f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.1f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			
			case 54:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0f, -0.1f, 0.9f, true, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-10f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.9f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			
			case 55:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[1], 0f, 0f, 0.9f, true, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[1], -1, 0, 2);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-8f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.9f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
			
			case 56:
				CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[1], 0f, 0f, 0f, true, -1, 2500, 2000, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[1], -1, 0, 2);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-5f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.15f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
				CAM::SET_GAMEPLAY_HINT_FOV(40f);
				break;
		}
		iLocal_112 = MISC::GET_GAME_TIMER() + 2500;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_112)
	{
		iLocal_112 = -1;
		return 1;
	}
	return 0;
}

int func_256(var uParam0)//Position - 0xEE01
{
	func_201();
	switch (iLocal_283)
	{
		case 0:
			if (func_137(uParam0->f_28[0]))
			{
				func_257();
				iLocal_283++;
			}
			break;
		
		case 1:
			if (func_137(uParam0->f_28[0]))
			{
				if (!func_157())
				{
					if (func_240(&uLocal_118, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						iLocal_284 = PED::CREATE_SYNCHRONIZED_SCENE(Local_105, Local_108, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_284, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1000f, 0);
						CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0f, 0f, 0.5f, true, -1, 2500, 2000, 0);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
						CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
						CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.1f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
						CAM::SET_GAMEPLAY_HINT_FOV(40f);
						iLocal_283++;
					}
				}
			}
			break;
		
		case 2:
			if (func_137(uParam0->f_28[0]))
			{
				if (!func_157())
				{
					iLocal_283++;
				}
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_257()//Position - 0xEF3E
{
	Global_20711 = 0;
	func_258();
}

void func_258()//Position - 0xEF4E
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
	}
}

int func_259(var uParam0, int iParam1)//Position - 0xEF6F
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.6306f, 4699.115f, 35.38089f, 1812.8776f, 4710.457f, 42.053535f, 23.75f, false, true, 0))
				{
					if (func_137(uParam0->f_28[0]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < 3f)
						{
							if (func_264(2))
							{
								if (func_263(uParam0->f_27))
								{
									func_262(uParam0->f_27, *uParam0);
									func_395("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_137(uParam0->f_28[0]))
				{
					if (func_261(uParam0))
					{
						if (func_264(2))
						{
							if (func_263(uParam0->f_27))
							{
								func_262(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*uParam0 == 21)
			{
				if ((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1895.788f, -434.01923f, 40.301258f, -1883.0376f, -444.08112f, 50.24509f, 8.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.5764f, -443.64337f, 36.405807f, -1874.8258f, -448.0797f, 49.15162f, 8.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.3427f, -446.2214f, 35.64637f, -1866.9519f, -456.56006f, 49.044197f, 8.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.9973f, -438.99216f, 44.172462f, -1874.0793f, -443.34204f, 48.691788f, 0.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.8223f, -441.7655f, 44.917503f, -1877.9409f, -439.9522f, 47.289818f, 1.25f, false, true, 0))
				{
					if (func_137(uParam0->f_28[0]))
					{
						if (func_261(uParam0))
						{
							if (func_264(2))
							{
								if (func_263(uParam0->f_27))
								{
									func_262(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (*uParam0 == 22)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 837.07306f, 1261.0862f, 366.15918f, 780.83826f, 1260.8286f, 351.405f, 17.75f, false, true, 0))
				{
					if (func_137(uParam0->f_28[0]))
					{
						if (func_261(uParam0))
						{
							if (func_264(2))
							{
								if (func_263(uParam0->f_27))
								{
									func_262(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (func_137(uParam0->f_28[0]))
			{
				if (func_261(uParam0))
				{
					if (func_264(2))
					{
						if (func_263(uParam0->f_27))
						{
							func_262(uParam0->f_27, *uParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_137(uParam0->f_35[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_35[0], false))
				{
					if (func_264(3))
					{
						func_262(uParam0->f_27, *uParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_260();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35[0], false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_35[0], true), true) < uParam0->f_15)
					{
						if (func_264(2))
						{
							if (func_263(uParam0->f_27))
							{
								func_262(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_17[0 /*3*/], true) < uParam0->f_15)
			{
				if (func_264(2))
				{
					if (func_263(uParam0->f_27))
					{
						func_262(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], false, true, 0))
			{
				if (func_264(2))
				{
					if (func_263(uParam0->f_27))
					{
						func_262(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*uParam0 == 6)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_137(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck2")))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), uParam0->f_35[0]))
							{
								if (func_264(3))
								{
									return 1;
								}
							}
						}
						else if ((VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("cargobob")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("cargobob2"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("cargobob3")))
						{
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), uParam0->f_35[0]))
							{
								if (func_264(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == 10)
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >= 2f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 245.88849f, 371.9034f, 103.98843f, 241.58984f, 359.64575f, 107.34612f, 1.25f, false, true, 0))
					{
						if (func_264(2))
						{
							if (func_263(uParam0->f_27))
							{
								func_262(uParam0->f_27, *uParam0);
								func_395("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -164.20456f, 277.48663f, 91.553215f, -153.59996f, 277.40607f, 97.338135f, 10f, false, true, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2728.9482f, 4143.44f, 42.292946f, 2722.2134f, 4144.5215f, 45.431824f, 10f, false, true, 0))
				{
					if (func_264(2))
					{
						if (func_263(1))
						{
							func_262(1, *uParam0);
							func_395("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -992.49945f, 358.74545f, 96.373505f, -1021.9401f, 361.88876f, 65.36148f, 30f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.5426f, 369.11035f, 68.460175f, -1028.5663f, 395.46133f, 94.57245f, 15f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.875f, 346.75565f, 68.02096f, -1021.4514f, 336.34583f, 93.18714f, 14.5f, false, true, 0))
						{
							if (func_264(2))
							{
								if (func_263(uParam0->f_27))
								{
									func_262(uParam0->f_27, *uParam0);
									func_395("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, false, true, 0))
			{
				if (*uParam0 == 45)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2338.6965f, 2597.0374f, 45.39052f, 2324.0034f, 2597.185f, 47.749607f, 8.5f, false, true, 0))
					{
						return 0;
					}
				}
				if (func_264(2))
				{
					if (func_263(uParam0->f_27))
					{
						func_262(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_260()//Position - 0xF752
{
	func_30(&(Global_104373.f_2890), &Global_104373, 0, 1, 1, 0);
}

int func_261(var uParam0)//Position - 0xF76D
{
	float fVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_262(int iParam0, int iParam1)//Position - 0xF7FB
{
	if (iParam0 == 1)
	{
		if (!func_140(iParam1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			func_395("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				func_395("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				VEHICLE::SET_VEHICLE_ENGINE_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true, false);
			}
			func_201();
		}
	}
}

int func_263(bool bParam0)//Position - 0xF85F
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (func_168(iVar0))
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if ((!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && !ENTITY::IS_ENTITY_IN_AIR(iVar0)) && ENTITY::GET_ENTITY_SPEED(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_264(int iParam0)//Position - 0xF8F6
{
	bool bVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				bVar0 = func_237();
				if (!func_39(bVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_232()) || Global_112857) || Global_32286) || func_270()) || func_251(8, -1)) || func_103()) || func_269()) || func_268()) || func_267()) || Global_113810.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_232()) || Global_32286) || func_270()) || func_251(8, -1)) || func_268()) || func_103()) || func_269()) || func_267()) || Global_113810.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_232()) || Global_112857) || Global_32286) || func_270()) || func_251(8, -1)) || func_268()) || func_103()) || func_269()) || func_267()) || Global_113810.f_7691.f_919[bVar0] == 5) || Global_43924 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_232()) || Global_112857) || Global_32286) || func_270()) || func_251(8, -1)) || func_103()) || func_269()) || func_267()) || Global_113810.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_232() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_251(8, -1)) || func_267()) || func_266()) || Global_113810.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_251(8, -1) || func_103()) || func_269()) || func_266()) || func_265())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_232()) || Global_32286) || func_270()) || func_251(8, -1)) || func_269()) || func_268()) || func_267()) || Global_113810.f_7691.f_919[bVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_232()) || func_269()) || Global_112857) || Global_32286) || func_270()) || Global_44569) || func_251(8, -1)) || func_268()) || func_266()) || func_267()) || Global_113810.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_232()) || Global_112857) || Global_32286) || func_270()) || func_251(8, -1)) || func_268()) || func_266()) || func_103()) || func_269()) || func_267())
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

var func_265()//Position - 0x10015
{
	return Global_100872.f_1;
}

int func_266()//Position - 0x10023
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 13);
	}
	return 0;
}

int func_267()//Position - 0x10046
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_268()//Position - 0x10060
{
	if (Global_78950)
	{
		return 1;
	}
	else if (Global_63479 && !Global_63485)
	{
		return 1;
	}
	return 0;
}

bool func_269()//Position - 0x1008A
{
	return Global_100885.f_394 > 0;
}

var func_270()//Position - 0x1009B
{
	return Global_1575063;
}

void func_271(var uParam0, var uParam1)//Position - 0x100A7
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (func_137(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_137(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_137(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 53:
				if (func_137(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			
			case 54:
				if (func_137(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 8, 1, 0, 0);
				}
				if (func_137(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 55:
				if (func_137(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 10, 0, 1, 0);
				}
				if (func_137(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			
			case 56:
				if (func_137(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_137(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

void func_272(int iParam0, char* sParam1, struct<3> Param2)//Position - 0x1029C
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (Global_43377 == 17)
			{
				if (*iParam0 != -1)
				{
					func_278(iParam0);
				}
			}
			else if (func_277())
			{
				if (*iParam0 != -1)
				{
					func_278(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_276(PLAYER::PLAYER_PED_ID(), Param2, 1) <= 100f)
				{
					func_275(iParam0, 1);
				}
			}
			else
			{
				switch (func_274(*iParam0))
				{
					case 1:
						if (MISC::ARE_STRINGS_EQUAL(sParam1, "JOSH_1_INT_CONCAT"))
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam1, 14, 8);
						}
						else
						{
							CUTSCENE::REQUEST_CUTSCENE(sParam1, 8);
						}
						STREAMING::SET_SRL_FORCE_PRESTREAM(2);
						func_273(*iParam0, 1);
						break;
					
					case 2:
						CUTSCENE::STOP_CUTSCENE(false);
						CUTSCENE::REMOVE_CUTSCENE();
						STREAMING::SET_SRL_FORCE_PRESTREAM(0);
						func_273(*iParam0, 0);
						break;
				}
				if (func_276(PLAYER::PLAYER_PED_ID(), Param2, 1) > 120f)
				{
					func_278(iParam0);
				}
			}
		}
	}
}

void func_273(int iParam0, bool bParam1)//Position - 0x1038D
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_78685 == iParam0)
		{
			Global_78686 = iParam0;
		}
	}
	else if (Global_78686 == iParam0)
	{
		Global_78686 = -1;
	}
}

int func_274(int iParam0)//Position - 0x103C9
{
	if (Global_78685 == iParam0)
	{
		if (Global_78686 == -1)
		{
			if (Global_78684 < MISC::GET_FRAME_COUNT())
			{
				return 1;
			}
		}
	}
	else if (Global_78686 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_275(int iParam0, int iParam1)//Position - 0x10402
{
	bool bVar0;
	int iVar1;
	
	if (Global_78682 < 5)
	{
		Global_78671[Global_78682 /*2*/] = 0;
		Global_78671[Global_78682 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_78682)
			{
				if (Global_78671[iVar1 /*2*/] == Global_78671[Global_78682 /*2*/])
				{
					Global_78671[Global_78682 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_78671[Global_78682 /*2*/];
		Global_78682++;
		Global_78683 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_276(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x104A0
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
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

bool func_277()//Position - 0x104DA
{
	return Global_98122;
}

void func_278(int iParam0)//Position - 0x104E6
{
	CUTSCENE::STOP_CUTSCENE(false);
	CUTSCENE::REMOVE_CUTSCENE();
	func_279(iParam0);
}

void func_279(int iParam0)//Position - 0x104FD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_78686 == *iParam0)
	{
		func_273(*iParam0, 0);
	}
	if (Global_78685 == *iParam0)
	{
		Global_78685 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_78682)
	{
		if (Global_78671[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_78682 - 2))
	{
		Global_78671[iVar2 /*2*/] = Global_78671[iVar2 + 1 /*2*/];
		Global_78671[iVar2 /*2*/].f_1 = Global_78671[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_78671[(Global_78682 - 1) /*2*/] = -1;
	Global_78671[(Global_78682 - 1) /*2*/].f_1 = 3;
	Global_78682 = (Global_78682 - 1);
	Global_78683 = 1;
	Global_78684 = MISC::GET_FRAME_COUNT();
	*iParam0 = -1;
}

void func_280(int iParam0)//Position - 0x105E5
{
	if (iParam0 == -1)
	{
		iParam0 = func_196();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_112897[iParam0 /*10*/].f_1 = 1;
}

bool func_281(int iParam0)//Position - 0x1060D
{
	return Global_112897[iParam0 /*10*/].f_1;
}

void func_282(var uParam0)//Position - 0x1061F
{
	if (*uParam0 == 52)
	{
		func_395(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], true);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[4]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], true);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_283(var uParam0)//Position - 0x10691
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID()) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_284(var uParam0)//Position - 0x106CB
{
	switch (*uParam0)
	{
		case 52:
			func_373(uParam0);
			iLocal_298 = func_372();
			break;
		
		case 53:
			func_366(uParam0);
			iLocal_298 = func_364();
			break;
		
		case 54:
			func_363(uParam0);
			break;
		
		case 55:
			func_362(uParam0);
			iLocal_298 = func_361();
			break;
		
		case 56:
			func_285(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_298 != 0)
	{
	}
	uParam0->f_16 = 0;
	if (*uParam0 == 53)
	{
		uParam0->f_15 = 15f;
	}
	else
	{
		uParam0->f_15 = 12f;
	}
	uParam0->f_25 = 1;
}

void func_285(var uParam0)//Position - 0x1076C
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "misstvrram_5";
	iVar1 = joaat("S_M_Y_Marine_03");
	iVar2 = joaat("crusader");
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_GRENADELAUNCHER"), 31, 0);
	while ((!STREAMING::HAS_MODEL_LOADED(iVar1) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_359(&(uParam0->f_28[0]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_358(&(uParam0->f_28[0]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 0, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 1, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 2, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 3, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 4, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 5, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 6, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 7, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[0], 8, 1);
	while (!func_359(&(uParam0->f_28[1]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_358(&(uParam0->f_28[1]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 0, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 1, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 2, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 3, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 4, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 5, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 6, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 7, 1);
	PED::CLEAR_PED_PROP(uParam0->f_28[1], 8, 1);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
	while (!func_357(&(uParam0->f_35[0]), iVar2, -1298.1597f, 2504.1533f, 21.062f, 165.48f))
	{
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0], 5f);
	func_356(&(uParam0->f_35[0]));
	VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, false);
	VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, true);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_35[0], true);
	if (!func_286(&(uParam0->f_41[0]), joaat("WEAPON_GRENADELAUNCHER"), -1297.84f, 2505.91f, 19.34f, func_355(-0.5f)))
	{
	}
	else
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], false, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_41[0], func_355(-0.5f));
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}

int func_286(int* iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x10C07
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		*iParam0 = 0;
	}
	iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(iParam1);
	STREAMING::REQUEST_MODEL(iVar0);
	iVar1 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar1)
	{
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			*iParam0 = WEAPON::CREATE_WEAPON_OBJECT(iParam1, -1, Param2, true, 1f, 0, 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			if (func_354(iParam1, joaat("gun_root")) && !func_352(iParam1))
			{
				iVar3 = func_287(iParam1, joaat("gun_root"), iVar2);
				while (iVar3 != 0)
				{
					if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*iParam0, iVar3))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*iParam0, iVar3);
					}
					iVar2++;
					iVar3 = func_287(iParam1, joaat("gun_root"), iVar2);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				ENTITY::SET_ENTITY_COORDS(*iParam0, Param2, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(*iParam0, fParam5);
				return 1;
			}
		}
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	return 0;
}

int func_287(int iParam0, int iParam1, int iParam2)//Position - 0x10CFA
{
	struct<5> Var0;
	int iVar7;
	int iVar8;
	
	iVar8 = 0;
	while (func_288(&Var0, iParam0, iVar7, 0))
	{
		if (Var0.f_4 == iParam1)
		{
			if (iParam2 == iVar8)
			{
				return Var0.f_0;
			}
			iVar8++;
		}
		iVar7++;
	}
	return 0;
}

bool func_288(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x10D38
{
	int iVar0[37];
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	var* uVar54;
	struct<4> Var93;
	
	func_351(uParam0, 0, joaat("WAPInvalid"), 0, 0);
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					
					case 6:
						func_351(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
					
					case 7:
						func_351(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_XM3"), joaat("gun_root"), 3, 0);
						break;
					
					case 8:
						func_351(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_FRN"), joaat("gun_root"), 4, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_SMG"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_351(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_ASSAULTRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_CARBINERIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
						
						case 9:
							func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					
					case 8:
						func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_MG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_MG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_MG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_COMBATMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_SNIPERRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_HEAVYSNIPER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_MINIGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_PISTOL50_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_PISTOL50_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_PISTOL50_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_351(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_351(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_351(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_351(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_351(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_351(uParam0, joaat("COMPONENT_AT_AR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 24:
					func_351(uParam0, joaat("COMPONENT_AT_AR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				
				case 25:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_351(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_351(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_351(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_351(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_351(uParam0, joaat("COMPONENT_AT_CR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 24:
					func_351(uParam0, joaat("COMPONENT_AT_CR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				
				case 25:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_351(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_351(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_AT_MG_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_AT_MG_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				
				case 22:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 23:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 24:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 25:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 26:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 27:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 28:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 29:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 30:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 31:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 32:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 33:
					func_351(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_MK2"), joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_NV"), joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_THERMAL"), joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_351(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_09"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_351(uParam0, joaat("COMPONENT_AT_SR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_AT_SR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				
				case 16:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 23:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 24:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 25:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 26:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 27:
					func_351(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_PI_RAIL"), joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_351(uParam0, joaat("COMPONENT_AT_PI_COMP"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
				
				case 25:
					func_351(uParam0, joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"), joaat("gun_root"), 13, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_351(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_SIGHTS_SMG"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_351(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_AT_SB_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_AT_SB_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				
				case 23:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 24:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 25:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 26:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 27:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 28:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 29:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 30:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 31:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 32:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 33:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 34:
					func_351(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PUMPSHOTGUN"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"), joaat("gun_root"), 3, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"), joaat("gun_root"), 3, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SPECIALCARBINE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SNSPISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_MARKSMANRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_REVOLVER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (func_350(iLocal_104))
			{
				if (!func_347(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_BULLPUPRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 3:
							func_351(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_351(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_351(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_351(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 14:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 23:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 24:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 25:
					func_351(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_351(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_351(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_351(uParam0, joaat("COMPONENT_AT_SC_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 24:
					func_351(uParam0, joaat("COMPONENT_AT_SC_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				
				case 25:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_351(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_351(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_PI_RAIL_02"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_351(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_351(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_351(uParam0, joaat("COMPONENT_AT_PI_COMP_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 13:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_351(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_351(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"), joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_351(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_351(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 23:
					func_351(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				
				case 24:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 25:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 26:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 27:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 28:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 29:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 30:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 31:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 32:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 33:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 34:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 35:
					func_351(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_351(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_351(uParam0, joaat("COMPONENT_AT_PI_COMP_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 13:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 14:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 23:
					func_351(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_351(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_351(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_351(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_351(uParam0, joaat("COMPONENT_AT_BP_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 13:
					func_351(uParam0, joaat("COMPONENT_AT_BP_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				
				case 14:
					func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_351(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_351(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 25:
					func_351(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_351(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_CERAMICPISTOL_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_351(uParam0, joaat("COMPONENT_HEAVYRIFLE_CAMO1"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_351(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_351(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_351(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_351(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_351(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_351(uParam0, joaat("COMPONENT_AT_AR_FLSH_REH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_351(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_351(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_KNIFE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar38 = func_335(iParam1, &iVar0);
				if ((iVar38 > 0 && iParam2 >= 0) && iParam2 < iVar0)
				{
					switch (iVar0[iParam2])
					{
						case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 1, 0);
							break;
						
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 2, 0);
							break;
						
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 3, 0);
							break;
						
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 4, 0);
							break;
						
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 5, 0);
							break;
						
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 6, 0);
							break;
						
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 7, 0);
							break;
						
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 8, 0);
							break;
						
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 9, 0);
							break;
						
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 10, 0);
							break;
						}
					}
			}
			break;
		
		case joaat("WEAPON_BAT"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar38 = func_335(iParam1, &iVar0);
				if ((iVar38 > 0 && iParam2 >= 0) && iParam2 < iVar0)
				{
					switch (iVar0[iParam2])
					{
						case joaat("COMPONENT_BAT_VARMOD_XM3"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 1, 0);
							break;
						
						case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 2, 0);
							break;
						
						case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 3, 0);
							break;
						
						case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 4, 0);
							break;
						
						case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 5, 0);
							break;
						
						case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 6, 0);
							break;
						
						case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 7, 0);
							break;
						
						case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 8, 0);
							break;
						
						case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 9, 0);
							break;
						
						case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
							func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 10, 0);
							break;
						}
					}
			}
			break;
		
		case joaat("WEAPON_RPG"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_351(uParam0, joaat("COMPONENT_RPG_VARMOD_TVR"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		default:
			iVar51 = func_68(iParam1, &uVar54);
			if (iVar51 != -1)
			{
				iVar52 = 0;
				while (iVar52 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar51))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar51, iVar52, &Var93))
					{
						if (!func_65(Var93.f_3))
						{
							if (Var93.f_0 == joaat("WAPClip") || Var93.f_0 == joaat("WAPClip_2"))
							{
								iVar40++;
							}
							else if (Var93.f_0 == joaat("WAPFlshLasr") || Var93.f_0 == joaat("WAPFlshLasr_2"))
							{
								iVar41++;
							}
							else if (Var93.f_0 == joaat("WAPScop") || Var93.f_0 == joaat("WAPScop_2"))
							{
								iVar42++;
							}
							else if (Var93.f_0 == joaat("WAPRail") || Var93.f_0 == joaat("WAPRail_2"))
							{
								iVar43++;
							}
							else if (Var93.f_0 == joaat("WAPGrip") || Var93.f_0 == joaat("WAPGrip_2"))
							{
								iVar44++;
							}
							else if (Var93.f_0 == joaat("WAPSupp") || Var93.f_0 == joaat("WAPSupp_2"))
							{
								iVar45++;
							}
							else if (Var93.f_0 == 1731751835)
							{
								iVar46++;
							}
							else if (Var93.f_0 == joaat("gun_root"))
							{
								iVar47++;
							}
							else if (Var93.f_0 == joaat("Gun_GripR"))
							{
								iVar48++;
							}
							else if (Var93.f_0 == joaat("WAPBarrel"))
							{
								iVar49++;
							}
							else
							{
								iVar50++;
							}
							if (iVar53 == iParam2)
							{
								if (Var93.f_0 == joaat("WAPClip") || Var93.f_0 == joaat("WAPClip_2"))
								{
									iVar39 = iVar40;
								}
								else if (Var93.f_0 == joaat("WAPFlshLasr") || Var93.f_0 == joaat("WAPFlshLasr_2"))
								{
									iVar39 = iVar41;
								}
								else if (Var93.f_0 == joaat("WAPScop") || Var93.f_0 == joaat("WAPScop_2"))
								{
									iVar39 = iVar42;
								}
								else if (Var93.f_0 == joaat("WAPRail") || Var93.f_0 == joaat("WAPRail_2"))
								{
									iVar39 = iVar43;
								}
								else if (Var93.f_0 == joaat("WAPGrip") || Var93.f_0 == joaat("WAPGrip_2"))
								{
									iVar39 = iVar44;
								}
								else if (Var93.f_0 == joaat("WAPSupp") || Var93.f_0 == joaat("WAPSupp_2"))
								{
									iVar39 = iVar45;
								}
								else if (Var93.f_0 == 1731751835)
								{
									iVar39 = iVar46;
								}
								else if (Var93.f_0 == joaat("gun_root"))
								{
									iVar39 = iVar47;
								}
								else if (Var93.f_0 == joaat("Gun_GripR"))
								{
									iVar39 = iVar48;
								}
								else if (Var93.f_0 == joaat("WAPBarrel"))
								{
									iVar39 = iVar49;
								}
								else
								{
									iVar39 = iVar50;
								}
								func_351(uParam0, Var93.f_3, Var93.f_0, iVar39, Var93.f_1);
							}
							iVar53++;
						}
					}
					iVar52++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_289(iParam1, *uParam0);
	}
	return uParam0->f_4 != joaat("WAPInvalid");
}

int func_289(int iParam0, int iParam1)//Position - 0x162BE
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<6> Var43;
	int iVar65;
	int iVar66;
	var* uVar67;
	struct<6> Var106;
	char* sVar128;
	struct<4> Var144;
	float fVar148;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 155;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 729;
						break;
					
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = 159;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 735;
						break;
					
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 165;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 185;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 730;
						break;
					
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 137;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 190;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 549;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 775;
						break;
					
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 134;
						break;
					
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 210;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 549;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 815;
						break;
					
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 129;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 159;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 565;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 810;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 105;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 132;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 150;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 450;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 815;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 124;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 159;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 450;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 812;
						break;
					
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 145;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 450;
						break;
					
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 126;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 129;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 559;
						break;
					
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 975;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 139;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 150;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 225;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 559;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 975;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 920;
						break;
					
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 575;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 128;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 185;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						break;
					
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = 17600;
						break;
				}
				if (func_334() && (func_333() || func_332()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						break;
				}
				if (func_334() && (func_333() || func_332()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						break;
					
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = 20000;
						break;
				}
				if (func_334() && (func_333() || func_332()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = 3612;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1020;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 5000;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 1760;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 710;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4800;
						break;
					
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = 4900;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = 5600;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = 5500;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = 5200;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = 4600;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = 4700;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = 4800;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = 4300;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 108;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = 9950;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2575;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 11350;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 29;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = 9150;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 108;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = 9975;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2525;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 11550;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_68(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var43))
						{
							if (!func_65(Var43.f_3))
							{
								if (Var43.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_330(iParam1))
									{
										Var43.f_5 = -1;
									}
									if (Var43.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var43.f_5;
									}
									if (iParam0 == joaat("WEAPON_HAMMER"))
									{
										if (func_334() && (func_333() || func_332()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2895 /* Tunable: WEAPONADDON_PISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347 /* Tunable: WEAPONADDON_PISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348 /* Tunable: WEAPONADDON_PISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11212 /* Tunable: LUXE1_ADDONSPISTOL_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4425));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_UPGRADES_PISTOL_MK_II */;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_21259 /* Tunable: -1714511790 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2896 /* Tunable: WEAPONADDON_COMBATPISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349 /* Tunable: WEAPONADDON_COMBATPISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_21260 /* Tunable: -83416429 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350 /* Tunable: WEAPONADDON_COMBATPISTOL_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12604 /* Tunable: WEAPONADDONCOMBAT_PISTOL_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4420 /* Tunable: WEAPONADDON_COMBATPISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2898 /* Tunable: WEAPONADDON_APPISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351 /* Tunable: WEAPONADDON_APPISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352 /* Tunable: WEAPONADDON_APPISTOL_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11211 /* Tunable: LUXE1_ADDONSAP_PISTOL_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4414 /* Tunable: WEAPONADDON_APPPISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_32220 /* Tunable: FIXER_THE_STUDIO_FINISH */;
						break;
				}
				break;
			
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2899 /* Tunable: WEAPONADDON_MICROSMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4355 /* Tunable: WEAPONADDON_MICROSMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357 /* Tunable: WEAPONADDON_MICROSMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4356 /* Tunable: WEAPONADDON_MICROSMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11215 /* Tunable: LUXE1_ADDONSMICRO_SMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4424 /* Tunable: WEAPONADDON_MICROSMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_32219 /* Tunable: FIXER_THE_WEED_FINISH */;
						break;
					
					case joaat("COMPONENT_MICROSMG_VARMOD_XM3"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MICROSMG_VARMOD_FRN"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2900 /* Tunable: WEAPONADDON_SMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = Global_262145.f_16767 /* Tunable: ADDONS_SMG_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358 /* Tunable: WEAPONADDON_SMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4360 /* Tunable: WEAPONADDON_SMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4359 /* Tunable: WEAPONADDON_SMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11214 /* Tunable: LUXE1_ADDONSSMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4429 /* Tunable: WEAPONADDON_SMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_UPGRADES_SMG_MK_II */;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2902 /* Tunable: WEAPONADDON_ASSAULTRIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16762 /* Tunable: ADDONS_ASSAULT_RIFLE_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4368 /* Tunable: WEAPONADDON_ASSRIFLE_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4365 /* Tunable: WEAPONADDON_ASSRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4367 /* Tunable: WEAPONADDON_ASSRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4366 /* Tunable: WEAPONADDON_ASSRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11208 /* Tunable: LUXE1_KIT_ASSAULT_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4415 /* Tunable: WEAPONADDON_ASSAULTRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_UPGRADES_ASSAULT_RIFLE_MK_II */;
						break;
				}
				break;
			
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2903 /* Tunable: WEAPONADDON_CARBINERIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16761 /* Tunable: ADDONS_CARBINE_RIFLE_BOX_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4376 /* Tunable: WEAPONADDON_CARBINERRIFLE_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4373 /* Tunable: WEAPONADDON_CARBINERRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4375 /* Tunable: WEAPONADDON_CARBINERRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4374 /* Tunable: WEAPONADDON_CARBINERRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11210 /* Tunable: LUXE1_ADDONSCARBINE_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4418 /* Tunable: WEAPONADDON_CARBINERILE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_UPGRADES_CARBINE_RIFLE_MK_II */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2905 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4378 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4379 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11209 /* Tunable: LUXE1_ADDONSADVANCED_RIFLE_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4413 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2906 /* Tunable: WEAPONADDON_MG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4381 /* Tunable: WEAPONADDON_MACHINEGUN_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12605 /* Tunable: WEAPONADDONMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4423 /* Tunable: WEAPONADDON_MG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2907 /* Tunable: WEAPONADDON_COMBATMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4403 /* Tunable: WEAPONADDON_COMBATMG_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4404 /* Tunable: WEAPONADDON_COMBATMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12606 /* Tunable: WEAPONADDONCOMBAT_MG_ETCHED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4419 /* Tunable: WEAPONADDON_COMBATMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_UPGRADES_COMBAT_MG_MK_II */;
						break;
				}
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385 /* Tunable: WEAPONADDON_PUMPSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386 /* Tunable: WEAPONADDON_PUMPSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12601 /* Tunable: WEAPONADDONPUMP_SHOTGUN_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4427 /* Tunable: WEAPONADDON_PUMPSHOTGUN_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_23113 /* Tunable: GO_WEAPON_UPGRADES_PUMP_SHOTGUN_MK_II */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_32217 /* Tunable: FIXER_THE_BONE_FINISH */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2909 /* Tunable: WEAPONADDON_ASSAULTSHOTGUN_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4389 /* Tunable: WEAPONADDON_ASSHOTGUN_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4390 /* Tunable: WEAPONADDON_ASSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4391 /* Tunable: WEAPONADDON_ASSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4392 /* Tunable: WEAPONADDON_SNIPER_SCOPE1_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4393 /* Tunable: WEAPONADDON_SNIPER_SCOPE2_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4394 /* Tunable: WEAPONADDON_SNIPER_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11217 /* Tunable: LUXE1_ADDONSSNIPER_RIFLE_ETCHED_WOOD_GRIP_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4430 /* Tunable: WEAPONADDON_SNIPERRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4395 /* Tunable: WEAPONADDON_HEAVYSNIPER_SCOPE1_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4396 /* Tunable: WEAPONADDON_HEAVYSNIPER_SCOPE2_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_UPGRADES_HEAVY_SNIPER_MK_II */;
						break;
				}
				break;
			
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4405 /* Tunable: WEAPONADDON_GRENADELAUNCHER_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4401 /* Tunable: WEAPONADDON_GRENADELAUNCHER_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4402 /* Tunable: WEAPONADDON_GRENADELAUNCHER_SCOPE_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2901 /* Tunable: WEAPONADDON_ASSAULTSMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4361 /* Tunable: WEAPONADDON_ASSSMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4364 /* Tunable: WEAPONADDON_ASSSMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4362 /* Tunable: WEAPONADDON_ASSSMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12602 /* Tunable: WEAPONADDONASSAULT_SMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4363));
						break;
				}
				break;
			
			case joaat("WEAPON_GUSENBERG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GUSENBERG_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_GUSENBERG_CLIP_02"):
						iVar0 = Global_262145.f_7144 /* Tunable: VALENTINE_GUSENBERG_WEAPONMOD_EXTENDED_CLIP */;
						break;
				}
				break;
			
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7811 /* Tunable: DLC_WEAPON_ADDON_SNS_PISTOL_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12603 /* Tunable: WEAPONADDONSNS_PISTOL_ETCHED_WOOD_GRIP_FINISH */;
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_23118 /* Tunable: GO_WEAPON_UPGRADES_SNS_PISTOL_MK_II */;
						break;
				}
				break;
			
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = Global_262145.f_7816 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = Global_262145.f_16764 /* Tunable: ADDONS_SPECIAL_CARBINE_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7819 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_7815 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_SCOPE */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_7813 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7818 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_GRIP */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12607 /* Tunable: WEAPONADDONSPECIAL_CARBINE_ETCHED_GUN_METAL_FINISH */;
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_23114 /* Tunable: GO_WEAPON_UPGRADES_SPECIAL_CARBINE_MK_II */;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7817 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_7821 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_7814 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_7841 /* Tunable: LUXE1_ADDONSHEAVY_PISTOL_ETCHED_WOOD_GRIP_FINISH */;
						break;
				}
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_7824 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7827 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_7822 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_7823 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_SCOPE */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7825 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_GRIP */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = Global_262145.f_12608 /* Tunable: WEAPONADDONBULLPUP_RIFLE_GILDED_GUN_METAL_FINISH */;
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_23117 /* Tunable: GO_WEAPON_UPGRADES_BULLPUP_RIFLE_MK_II */;
						break;
				}
				break;
			
			case joaat("WEAPON_VINTAGEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_8299 /* Tunable: DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_8300 /* Tunable: DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_SUPPRESSOR */;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
						iVar0 = Global_262145.f_9029 /* Tunable: LTS_HEAVY_SHOTGUN_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
						iVar0 = Global_262145.f_16768 /* Tunable: ADDONS_HEAVY_SHOTGUN_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_9030 /* Tunable: LTS_HEAVY_SHOTGUN_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_9031 /* Tunable: LTS_HEAVY_SHOTGUN_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_9032 /* Tunable: LTS_HEAVY_SHOTGUN_GRIP */;
						break;
				}
				break;
			
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_9035 /* Tunable: LTS_MARKSMAN_RIFLE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_9036 /* Tunable: LTS_MARKSMAN_RIFLE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_9038 /* Tunable: LTS_MARKSMAN_RIFLE_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_9039 /* Tunable: LTS_MARKSMAN_RIFLE_GRIP */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_9040 /* Tunable: LUXE1_ADDONSMARKSMAN_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_23115 /* Tunable: GO_WEAPON_UPGRADES_MARKSMAN_RIFLE_MK_II */;
						break;
				}
				break;
			
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_15312 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4387 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4388 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
				}
				if (func_334() && (func_333() || func_332()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2897 /* Tunable: WEAPONADDON_PISTOL50_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4353 /* Tunable: WEAPONADDON_DLCPISTOL50_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4354 /* Tunable: WEAPONADDON_DLCPISTOL50_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11213 /* Tunable: LUXE1_ADDONSPISTOL_50_PLATINUM_PEARL_DELUXE_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4426 /* Tunable: WEAPONADDON_PISTOL50_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				if (func_334() && (func_333() || func_332()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11216 /* Tunable: LUXE1_ADDONSSAWED_OFF_SHOTGUN_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4428 /* Tunable: WEAPONADDON_SAWNOFFSHOTGUN_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = Global_262145.f_11540 /* Tunable: LUXE2_THE_PIMP_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4433 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_PIMP_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = Global_262145.f_11541 /* Tunable: LUXE2_THE_BALLAS_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4434 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_BALLAS_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = Global_262145.f_11542 /* Tunable: LUXE2_THE_HUSTLER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4435 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_HUSTLER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = Global_262145.f_11543 /* Tunable: LUXE2_THE_ROCK_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4436 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_ROCK_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = Global_262145.f_11544 /* Tunable: LUXE2_THE_HATER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4437 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_HATER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = Global_262145.f_11545 /* Tunable: LUXE2_THE_LOVER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4438 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_LOVER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = Global_262145.f_11546 /* Tunable: LUXE2_THE_PLAYER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4439 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_PLAYER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = Global_262145.f_11547 /* Tunable: LUXE2_THE_KING_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4440 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_KING_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = Global_262145.f_11548 /* Tunable: LUXE2_THE_VAGOS_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4441 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_VAGOS_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_11565 /* Tunable: LOWRIDER_MACHINEPISTOL_CLIP02 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4443));
						break;
					
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = Global_262145.f_16766 /* Tunable: ADDONS_MACHINE_PISTOL_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_11566 /* Tunable: LOWRIDER_MACHINEPISTOL_SUPP */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4444));
						break;
				}
				break;
			
			case joaat("WEAPON_SWITCHBLADE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
						iVar0 = Global_262145.f_13449 /* Tunable: APARTMENT_ADDONS_SWITCHBLADE_ENGRAVED_BOSS_VARIANT */;
						break;
					
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
						iVar0 = Global_262145.f_13450 /* Tunable: APARTMENT_ADDONS_SWITCHBLADE_ENGRAVED_GOON_VARIANT */;
						break;
				}
				break;
			
			case joaat("WEAPON_REVOLVER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
						iVar0 = Global_262145.f_13507 /* Tunable: APARTMENT_ADDONS_HEAVY_REVOLVER_ENGRAVED_BOSS_VARIANT */;
						break;
					
					case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
						iVar0 = Global_262145.f_13448 /* Tunable: APARTMENT_ADDONS_HEAVY_REVOLVER_ENGRAVED_GOON_VARIANT */;
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_23116 /* Tunable: GO_WEAPON_UPGRADES_HEAVY_REVOVLER_MK_II */;
						break;
				}
				break;
			
			case joaat("WEAPON_COMPACTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_15242 /* Tunable: ADDONS_COMPACT_RIFLE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16763 /* Tunable: ADDONS_COMPACT_RIFLE_DRUM_MAGAZINE */;
						break;
				}
				break;
			
			case joaat("WEAPON_DBSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_DBSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						iVar0 = Global_262145.f_19222 /* Tunable: 1482389140 */;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATPDW"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPDW_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_COMBATPDW_CLIP_02"):
						iVar0 = Global_262145.f_21255 /* Tunable: LUXE1_COMBATPDW_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_COMBATPDW_CLIP_03"):
						iVar0 = Global_262145.f_16765 /* Tunable: ADDONS_PDW_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21256 /* Tunable: LUXE1_COMBATPDW_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_21258 /* Tunable: LUXE1_COMBATPDW_SCOPE */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_21257 /* Tunable: LUXE1_COMBATPDW_GRIP */;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21379 /* Tunable: -1550181012 */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21380 /* Tunable: 599186436 */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21381 /* Tunable: 1538620212 */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21382 /* Tunable: -170097190 */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21383 /* Tunable: -1387455740 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21384 /* Tunable: -325408568 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21385 /* Tunable: -82364995 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21386 /* Tunable: -229542830 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21387 /* Tunable: 1327976003 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21388 /* Tunable: -618034935 */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_21389 /* Tunable: -1721486303 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21390 /* Tunable: -240242887 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21391 /* Tunable: 1111019601 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21392 /* Tunable: 1417573596 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21393 /* Tunable: 648354090 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21394 /* Tunable: -1500342013 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21395 /* Tunable: -80395705 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21396 /* Tunable: 225896138 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21397 /* Tunable: -946948419 */;
						break;
					
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						iVar0 = Global_262145.f_21398 /* Tunable: 628289383 */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21399 /* Tunable: 1286553594 */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21400 /* Tunable: -1398112727 */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21401 /* Tunable: 1311192953 */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21402 /* Tunable: -577265450 */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21403 /* Tunable: 441926214 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21404 /* Tunable: -1137873158 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21405 /* Tunable: 757231685 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21406 /* Tunable: 1743852487 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21407 /* Tunable: 1889225718 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21408 /* Tunable: 1808408105 */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_21409 /* Tunable: 998096574 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21410 /* Tunable: 42291623 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21411 /* Tunable: 918075921 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21412 /* Tunable: -253841830 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21413 /* Tunable: -554038639 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21414 /* Tunable: -851712235 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21415 /* Tunable: -1149353062 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21416 /* Tunable: -1211679700 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21417 /* Tunable: -1770903800 */;
						break;
					
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						iVar0 = Global_262145.f_21418 /* Tunable: 120043539 */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21419 /* Tunable: 1898572754 */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21420 /* Tunable: -980014447 */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21421 /* Tunable: 954938707 */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21422 /* Tunable: 1734159338 */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21423 /* Tunable: 994554097 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21424 /* Tunable: 320273484 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21425 /* Tunable: -300742141 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21426 /* Tunable: -1429921876 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21427 /* Tunable: 1509305655 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21428 /* Tunable: -49677055 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21429 /* Tunable: 2089647114 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21430 /* Tunable: 1816386423 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21431 /* Tunable: -1717619155 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21432 /* Tunable: -2014801216 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21433 /* Tunable: 902950516 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21434 /* Tunable: 562283992 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21435 /* Tunable: 1292930355 */;
						break;
					
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						iVar0 = Global_262145.f_21436 /* Tunable: 1947193436 */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21437 /* Tunable: 330899918 */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21438 /* Tunable: 917018525 */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21440 /* Tunable: 884234768 */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21441 /* Tunable: 1088190767 */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_21439 /* Tunable: -1206093715 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						iVar0 = Global_262145.f_21442 /* Tunable: 579562015 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_NV"):
						iVar0 = Global_262145.f_21443 /* Tunable: 544428193 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						iVar0 = Global_262145.f_21444 /* Tunable: -707213005 */;
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_21445 /* Tunable: 1674324405 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_21446 /* Tunable: 291821001 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_09"):
						iVar0 = Global_262145.f_21447 /* Tunable: 1067332155 */;
						break;
					
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						iVar0 = Global_262145.f_21448 /* Tunable: 2037426926 */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21449 /* Tunable: 1430566154 */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_21451 /* Tunable: -1046185578 */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21450 /* Tunable: -506102803 */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21452 /* Tunable: 1296166421 */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21453 /* Tunable: 1866512725 */;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						iVar0 = Global_262145.f_21454 /* Tunable: -1999312528 */;
						break;
					
					case joaat("COMPONENT_AT_PI_RAIL"):
						iVar0 = Global_262145.f_21455 /* Tunable: 1055846757 */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_21456 /* Tunable: 1378860015 */;
						break;
					
					case joaat("COMPONENT_AT_PI_COMP"):
						iVar0 = Global_262145.f_21457 /* Tunable: 1792089868 */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21458 /* Tunable: -220053906 */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_21460 /* Tunable: -952131423 */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21459 /* Tunable: -1897517534 */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21461 /* Tunable: -977321503 */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21462 /* Tunable: -1188309354 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21463 /* Tunable: -2017541960 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						iVar0 = Global_262145.f_21464 /* Tunable: 1261888316 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						iVar0 = Global_262145.f_21465 /* Tunable: 735171511 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						iVar0 = Global_262145.f_21466 /* Tunable: -1290434805 */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_21467 /* Tunable: 662271695 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21468 /* Tunable: 1781046189 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21469 /* Tunable: -1288131124 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21470 /* Tunable: -1129922392 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21471 /* Tunable: 129226433 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21472 /* Tunable: -1594095277 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21473 /* Tunable: -444427681 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21474 /* Tunable: -137611534 */;
						break;
					
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						iVar0 = Global_262145.f_21475 /* Tunable: 946764522 */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_23145 /* Tunable: 1652287555 */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_23146 /* Tunable: -535703975 */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_23144 /* Tunable: 95511928 */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23143 /* Tunable: -665155806 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23172 /* Tunable: 307884450 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23173 /* Tunable: 1712943577 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23174 /* Tunable: -1605498735 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_23175 /* Tunable: -1766164400 */;
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_23176 /* Tunable: 1535840470 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_23177 /* Tunable: 179346571 */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23147 /* Tunable: -1133159623 */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_23151 /* Tunable: 884315323 */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23149 /* Tunable: 117177146 */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23150 /* Tunable: 1711440619 */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23148 /* Tunable: 1515067404 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23178 /* Tunable: -675401976 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23179 /* Tunable: 1348404810 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23180 /* Tunable: 1661135184 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_23181 /* Tunable: -622756256 */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_23182 /* Tunable: 1005673153 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23183 /* Tunable: -2043761976 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23184 /* Tunable: 1467944449 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23185 /* Tunable: 2104462570 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23186 /* Tunable: -686370155 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23187 /* Tunable: 1322082777 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23188 /* Tunable: -189707864 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23189 /* Tunable: 1794058860 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23190 /* Tunable: -77140556 */;
						break;
					
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						iVar0 = Global_262145.f_23191 /* Tunable: 1028863717 */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_24063 /* Tunable: -1086352658 */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23167 /* Tunable: -1789606801 */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_23169 /* Tunable: -843751922 */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23168 /* Tunable: 839487066 */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23166 /* Tunable: -1383425686 */;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						iVar0 = Global_262145.f_23223 /* Tunable: -291501777 */;
						break;
					
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						iVar0 = Global_262145.f_23224 /* Tunable: -1122806840 */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_23225 /* Tunable: -353555220 */;
						break;
					
					case joaat("COMPONENT_AT_PI_COMP_02"):
						iVar0 = Global_262145.f_23226 /* Tunable: -537982964 */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23152 /* Tunable: -1378447114 */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_23156 /* Tunable: -402362564 */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23154 /* Tunable: -901067049 */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23155 /* Tunable: 148273883 */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23153 /* Tunable: -1383428803 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23192 /* Tunable: -852920589 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23193 /* Tunable: -235285662 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_23194 /* Tunable: 947508682 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_23195 /* Tunable: -829621681 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23196 /* Tunable: -1449227090 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23197 /* Tunable: -1300374254 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23198 /* Tunable: 989071156 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23199 /* Tunable: 1338637515 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23200 /* Tunable: -1766547494 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23201 /* Tunable: -1090214635 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23202 /* Tunable: 532703720 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23203 /* Tunable: -2106260249 */;
						break;
					
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						iVar0 = Global_262145.f_23204 /* Tunable: -249998032 */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23157 /* Tunable: 1955558754 */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23158 /* Tunable: 38016460 */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_23160 /* Tunable: 784593552 */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23159 /* Tunable: 1408548101 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23205 /* Tunable: 1857338618 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23206 /* Tunable: 1760541515 */;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_23207 /* Tunable: 141245052 */;
						break;
					
					case joaat("COMPONENT_AT_PI_COMP_03"):
						iVar0 = Global_262145.f_23208 /* Tunable: -1827907706 */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23161 /* Tunable: -316590252 */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_23165 /* Tunable: -2001892987 */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23163 /* Tunable: 545820391 */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23164 /* Tunable: 794018680 */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23162 /* Tunable: -493624257 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23209 /* Tunable: 1592341943 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23210 /* Tunable: 2078892836 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						iVar0 = Global_262145.f_23211 /* Tunable: 1554127006 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_23212 /* Tunable: -1314225140 */;
						break;
					
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						iVar0 = Global_262145.f_23222 /* Tunable: -2119010024 */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_23213 /* Tunable: -1948594273 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23214 /* Tunable: 21146921 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23215 /* Tunable: 1358418183 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23216 /* Tunable: 1464361534 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23217 /* Tunable: -268389376 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23218 /* Tunable: -1823864223 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23219 /* Tunable: -574324148 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23220 /* Tunable: 999664111 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23221 /* Tunable: -1915566950 */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21507 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21508 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21509 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21510 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21511 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21512 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21513 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21514 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21515 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21516 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21517 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_28904 /* Tunable: 453457679 */;
						break;
					
					case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
						iVar0 = Global_262145.f_28905 /* Tunable: 143602352 */;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_31043 /* Tunable: IH_COMBAT_SHOTGUN_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_31044 /* Tunable: IH_COMBAT_SHOTGUN_SUPPRESSOR */;
						break;
				}
				break;
			
			case joaat("WEAPON_GADGETPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_MILITARYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
						iVar0 = Global_262145.f_31029 /* Tunable: IH_MILITARY_RIFLE_DEFAULT_CLIP */;
						break;
					
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_31030 /* Tunable: IH_MILITARY_RIFLE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
						iVar0 = Global_262145.f_31031 /* Tunable: IH_MILITARY_RIFLE_IRON_SIGHTS */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_31032 /* Tunable: IH_MILITARY_RIFLE_SCOPE */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_31033 /* Tunable: IH_MILITARY_RIFLE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_31034 /* Tunable: IH_MILITARY_RIFLE_SUPPRESSOR */;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
						iVar0 = Global_262145.f_32185 /* Tunable: FIXER_HEAVY_RIFLE_DEFAULT_CLIP */;
						break;
					
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_32186 /* Tunable: FIXER_HEAVY_RIFLE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
						iVar0 = Global_262145.f_32218 /* Tunable: FIXER_THE_FAMILIES_FINISH */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_32191 /* Tunable: FIXER_HEAVY_RIFLE_GRIP */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_32189 /* Tunable: FIXER_HEAVY_RIFLE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_32188 /* Tunable: FIXER_HEAVY_RIFLE_SCOPE */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_32190 /* Tunable: FIXER_HEAVY_RIFLE_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
						iVar0 = Global_262145.f_32187 /* Tunable: FIXER_HEAVY_RIFLE_IRON_SIGHTS */;
						break;
				}
				break;
			
			case joaat("WEAPON_TACTICALRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_33437 /* Tunable: SU22_SERVICE_CARBINE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH_REH"):
						iVar0 = Global_262145.f_33439 /* Tunable: SU22_SERVICE_CARBINE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_33440 /* Tunable: SU22_SERVICE_CARBINE_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_33438 /* Tunable: SU22_SERVICE_CARBINE_GRIP */;
						break;
				}
				break;
			
			case joaat("WEAPON_KNIFE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
						iVar0 = Global_262145.f_34353 /* Tunable: XM22_KNIFE_EYES */;
						break;
					
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
						iVar0 = Global_262145.f_34357 /* Tunable: XM22_KNIFE_SPATTER */;
						break;
					
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
						iVar0 = Global_262145.f_34354 /* Tunable: XM22_KNIFE_FLAMES */;
						break;
					
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
						iVar0 = Global_262145.f_34355 /* Tunable: XM22_KNIFE_LIGHTNING */;
						break;
					
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
						iVar0 = Global_262145.f_34358 /* Tunable: XM22_KNIFE_PILLS */;
						break;
					
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
						iVar0 = Global_262145.f_34356 /* Tunable: XM22_KNIFE_SNAKESKIN */;
						break;
					
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
						iVar0 = Global_262145.f_34360 /* Tunable: XM22_KNIFE_LUCHA_LIBRE */;
						break;
					
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
						iVar0 = Global_262145.f_34359 /* Tunable: XM22_KNIFE_TRIPPY */;
						break;
					
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
						iVar0 = Global_262145.f_34361 /* Tunable: XM22_KNIFE_TEQUILYA */;
						break;
					
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
						iVar0 = Global_262145.f_34362 /* Tunable: XM22_KNIFE_ORANGOTANG */;
						break;
				}
				break;
			
			case joaat("WEAPON_BAT"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BAT_VARMOD_XM3"):
						iVar0 = Global_262145.f_34343 /* Tunable: XM22_BASEBALL_BAT_BLAGUEURS */;
						break;
					
					case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
						iVar0 = Global_262145.f_34344 /* Tunable: XM22_BASEBALL_BAT_SPATTER */;
						break;
					
					case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
						iVar0 = Global_262145.f_34346 /* Tunable: XM22_BASEBALL_BAT_BULLET_HOLES */;
						break;
					
					case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
						iVar0 = Global_262145.f_34347 /* Tunable: XM22_BASEBALL_BAT_BURGER_SHOT */;
						break;
					
					case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
						iVar0 = Global_262145.f_34348 /* Tunable: XM22_BASEBALL_BAT_CLUCKIN_BELL */;
						break;
					
					case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
						iVar0 = Global_262145.f_34349 /* Tunable: XM22_BASEBALL_BAT_FATAL_INCURSION */;
						break;
					
					case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
						iVar0 = Global_262145.f_34350 /* Tunable: XM22_BASEBALL_BAT_LUCHA_LIBRE */;
						break;
					
					case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
						iVar0 = Global_262145.f_34351 /* Tunable: XM22_BASEBALL_BAT_TRIPPY */;
						break;
					
					case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
						iVar0 = Global_262145.f_34352 /* Tunable: XM22_BASEBALL_BAT_TIE_DYE */;
						break;
					
					case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
						iVar0 = Global_262145.f_34345 /* Tunable: XM22_BASEBALL_BAT_WALL */;
						break;
				}
				break;
			
			case joaat("WEAPON_PISTOLXM3"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOLXM3_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PISTOLXM3_SUPP"):
						iVar0 = Global_262145.f_34326 /* Tunable: XM22_WM29_SUPPRESSOR */;
						break;
				}
				break;
			
			case joaat("WEAPON_TECPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_TECPISTOL_CLIP_01"):
						iVar0 = Global_262145.f_35799 /* Tunable: SU23_TACTICAL_SMG_DEFAULT_CLIP */;
						break;
					
					case joaat("COMPONENT_TECPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_35800 /* Tunable: SU23_TACTICAL_SMG_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_35804 /* Tunable: SU23_TACTICAL_SMG_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = Global_262145.f_35802 /* Tunable: SU23_TACTICAL_SMG_SCOPE */;
						break;
				}
				break;
			
			case joaat("WEAPON_RPG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RPG_VARMOD_TVR"):
						iVar0 = 0;
						break;
				}
				break;
			
			default:
				iVar65 = func_68(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar65))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar65, iVar66, &Var106))
						{
							if (!func_65(Var106.f_3))
							{
								if (Var106.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var106.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var106.f_5;
									}
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_328())
	{
		StringCopy(&Var144, func_326(iParam1, iParam0), 16);
		func_317(&sVar128, Var144, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_324(iParam0), func_323(iParam0), -1, 0, 0, 2);
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar128))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar128), joaat("CATEGORY_WEAPON_MOD"), true);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_290(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_290(int iParam0, int iParam1, float fParam2)//Position - 0x19E8C
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_328())
	{
		fVar1 = (fVar1 + func_316());
		fVar0 = (1f - fVar1);
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
		return fVar0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_78689)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_313(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_103 == 1)
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_133 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
		}
		if (iLocal_103 == 0)
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
			if (func_291())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_133 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
				iLocal_103 = 1;
			}
			else
			{
				iLocal_103 = -1;
			}
		}
		fVar1 = (fVar1 + func_316());
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

int func_291()//Position - 0x19FC5
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_310())
	{
		if (func_295())
		{
			iVar0 = func_294();
			iVar1 = func_292();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_132 /* Tunable: SHOP_DISCOUNT_PERCENT */) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_292()//Position - 0x1A023
{
	int iVar0;
	
	iVar0 = (iVar0 + func_293(joaat("MPPLY_FRIENDLY")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_HELPFUL")));
	return iVar0;
}

int func_293(int iParam0)//Position - 0x1A049
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

int func_294()//Position - 0x1A067
{
	int iVar0;
	
	iVar0 = (iVar0 + func_293(joaat("MPPLY_OFFENSIVE_LANGUAGE")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_GRIEFING")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_FRIENDLY")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_HELPFUL")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_OFFENSIVE_UGC")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_OFFENSIVE_TAGPLATE")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_EXPLOITS")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_VC_ANNOYINGME")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_VC_HATE")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_BAD_CREW_NAME")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_BAD_CREW_MOTTO")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_BAD_CREW_STATUS")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_BAD_CREW_EMBLEM")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_PLAYERMADE_TITLE")));
	iVar0 = (iVar0 + func_293(joaat("MPPLY_PLAYERMADE_DESC")));
	return iVar0;
}

int func_295()//Position - 0x1A143
{
	struct<7> Var0;
	struct<7> Var7;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_309(joaat("MPPLY_STARTED_MP")) };
	if (func_296(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_296(struct<7> Param0, struct<7> Param7, int iParam14)//Position - 0x1A187
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_307(Param7);
	iVar1 = func_303(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_297(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_297(int iParam0, int iParam1)//Position - 0x1A1C2
{
	int iVar0;
	int iVar1;
	
	if (!func_302(iParam1) || !func_302(iParam0))
	{
		return 1;
	}
	iVar0 = func_109(iParam0);
	iVar1 = func_109(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_111(iParam0);
	iVar1 = func_111(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_301(iParam0);
	iVar1 = func_301(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_300(iParam0);
	iVar1 = func_300(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_299(iParam0);
	iVar1 = func_299(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_298(iParam0);
	iVar1 = func_298(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_298(int iParam0)//Position - 0x1A2CE
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_299(int iParam0)//Position - 0x1A2E1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_300(int iParam0)//Position - 0x1A2F4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_301(int iParam0)//Position - 0x1A307
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_302(int iParam0)//Position - 0x1A319
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
	iVar0 = func_298(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_299(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_300(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_109(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_111(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_301(iParam0);
	if (iVar5 < 1 || iVar5 > func_108(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

var func_303(struct<7> Param0, int iParam7)//Position - 0x1A3F5
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_306(Param0) == 0)
	{
		uVar0 = func_307(Param0);
		uVar1 = uVar0;
		func_304(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_304(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A435
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_109(*uParam0);
	iVar1 = func_111(*uParam0);
	iVar2 = func_301(*uParam0);
	iVar3 = func_300(*uParam0);
	iVar4 = func_299(*uParam0);
	iVar5 = func_298(*uParam0);
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
	iVar6 = func_108(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_108(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_305(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_305(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A5B7
{
	func_114(uParam0, iParam1);
	func_113(uParam0, iParam2);
	func_112(uParam0, iParam3);
	func_106(uParam0, iParam5);
	func_107(uParam0, iParam4);
	func_105(uParam0, iParam6);
}

int func_306(struct<7> Param0)//Position - 0x1A5EF
{
	if ((((((Param0.f_0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_307(struct<6> Param0, var uParam6)//Position - 0x1A645
{
	var uVar0;
	
	if (Param0.f_0 > 0)
	{
		func_105(&uVar0, Param0.f_0);
	}
	if (Param0.f_1 > 0)
	{
		func_106(&uVar0, func_308(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_107(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_112(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_113(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_114(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_308(int iParam0)//Position - 0x1A6BB
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

struct<7> func_309(int iParam0)//Position - 0x1A780
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

int func_310()//Position - 0x1A7A4
{
	if (func_312() && func_311(0))
	{
		return 1;
	}
	return 0;
}

var func_311(int iParam0)//Position - 0x1A7C2
{
	return Global_1574538[iParam0];
}

var func_312()//Position - 0x1A7D2
{
	return func_311(func_55() + 1);
}

int func_313(int iParam0)//Position - 0x1A7E4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar10;
	
	iVar0 = func_237();
	if (iParam0 == 0 || !func_39(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			break;
		
		case joaat("GADGET_PARACHUTE"):
			break;
		
		case joaat("WEAPON_MICROSMG"):
			iVar1 = 1;
			break;
		
		case joaat("WEAPON_SMG"):
			iVar1 = 1;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			iVar1 = 3;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar1 = 3;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			iVar1 = 3;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			iVar1 = 2;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			iVar1 = 2;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			iVar1 = 2;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			break;
		
		case joaat("WEAPON_MG"):
			iVar1 = 4;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			iVar1 = 4;
			break;
		
		case joaat("WEAPON_RPG"):
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			break;
		
		case joaat("WEAPON_MINIGUN"):
			iVar1 = 5;
			break;
		
		case joaat("WEAPON_KNIFE"):
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			break;
		
		case joaat("WEAPON_STUNGUN"):
			break;
		
		case joaat("WEAPON_APPISTOL"):
			iVar1 = 0;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			iVar1 = 0;
			break;
		
		case joaat("WEAPON_PISTOL"):
			iVar1 = 0;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			break;
		
		case joaat("WEAPON_GRENADE"):
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_314(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_314(1, iVar0);
		iVar3[1] = func_314(3, iVar0);
		iVar3[2] = func_314(2, iVar0);
		iVar3[3] = func_314(4, iVar0);
		iVar3[4] = func_314(5, iVar0);
		iVar3[5] = func_314(0, iVar0);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_314(int iParam0, int iParam1)//Position - 0x1AA40
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_315(iVar0, iParam1);
	if (func_315(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_315(iVar1, iParam1);
	}
	if (func_315(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_315(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_315(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_315(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_315(int iParam0, int iParam1)//Position - 0x1AB44
{
	return Global_113810.f_19150[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

float func_316()//Position - 0x1AB60
{
	return Global_100885.f_2096;
}

void func_317(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, int iParam13)//Position - 0x1AB6F
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case joaat("GSA_TYPE_R1"):
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case joaat("GSA_TYPE_C1"):
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case joaat("GSA_TYPE_RO1"):
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case joaat("GSA_TYPE_CH1"):
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case joaat("GSA_TYPE_G1"):
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case joaat("GSA_TYPE_B1"):
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case joaat("GSA_TYPE_FW1"):
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW" /* GXT: Fireworks */, 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("MP_M_Freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("MP_F_Freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 1:
			if (iParam5 == joaat("MP_M_Freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("MP_F_Freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam10 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam10, 64);
			}
			break;
		
		case 2:
			if (iParam5 == joaat("MP_M_Freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("MP_F_Freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 4:
			if (iParam5 == Global_75777)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_75778)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_75779)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_75780)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam5 == Global_75781)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == func_322())
			{
				StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (iParam5 == func_321())
			{
				if (iParam7 == 40)
				{
					StringCopy(sParam0, "VEU_BRICKADE2_t0_v0", 64);
				}
				else if (iParam7 == 2)
				{
					StringCopy(sParam0, "VE_BRICKADE2_t2_v38", 64);
				}
				else if (iParam7 == 1)
				{
					StringCopy(sParam0, "VE_BRICKADE2_t1_v38", 64);
				}
				else
				{
					StringCopy(sParam0, "VE_BRICKADE2_t0_v38", 64);
				}
			}
			else if (iParam5 == func_320())
			{
				if (iParam7 == 1)
				{
					StringCopy(sParam0, "VE_MANCHEZ3_t1_v4", 64);
				}
				else
				{
					StringCopy(sParam0, "VE_MANCHEZ3_t0_v4", 64);
				}
			}
			else if (iParam5 == joaat("avenger3"))
			{
				if (iParam7 == 40)
				{
					if (iParam13 == 61)
					{
						StringCopy(sParam0, "VEU_AVENGER3_t0_v0", 64);
					}
					else if (iParam13 == 103)
					{
						if (!func_318())
						{
							StringCopy(sParam0, "VEU_AVENGER3_t1_v0", 64);
						}
						else
						{
							StringCopy(sParam0, "VEU_AVENGER3_t1_v1", 64);
						}
					}
				}
				else
				{
					StringCopy(sParam0, "VE_AVENGER_t0_v33", 64);
				}
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 7)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == joaat("carnotfound"))
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam7 == 40)
			{
				switch (iParam5)
				{
					case joaat("fcr2"):
						StringCopy(&cParam1, "FCR2" /* GXT: FCR 1000 Custom */, 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2" /* GXT: Diabolus Custom */, 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3" /* GXT: Comet Retro Custom */, 16);
						break;
					
					default:
						StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5), 16);
						if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
				if (iParam10 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam10, 64);
				}
			}
			break;
	}
	if (bParam12)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

bool func_318()//Position - 0x1B21C
{
	return func_319();
}

bool func_319()//Position - 0x1B228
{
	return Global_1586488[189 /*142*/].f_66 == joaat("thruster");
}

int func_320()//Position - 0x1B240
{
	return joaat("manchez3");
}

int func_321()//Position - 0x1B24D
{
	return joaat("brickade2");
}

int func_322()//Position - 0x1B25A
{
	return joaat("kosatka");
}

int func_323(int iParam0)//Position - 0x1B267
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 2;
			break;
	}
	return -1;
}

int func_324(int iParam0)//Position - 0x1B2C6
{
	return func_325(iParam0);
}

int func_325(int iParam0)//Position - 0x1B2D4
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
			break;
		
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 3;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return 4;
			break;
		
		case joaat("WEAPON_SMG"):
			return 5;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 7;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
			break;
		
		case joaat("WEAPON_MG"):
			return 12;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 13;
			break;
		
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 16;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
			break;
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
			break;
		
		case joaat("WEAPON_RPG"):
			return 27;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 28;
			break;
		
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
			break;
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return 31;
			break;
		
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return 33;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 34;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
			break;
		
		case joaat("WEAPON_HAMMER"):
			return 36;
			break;
		
		case joaat("WEAPON_BAT"):
			return 37;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 38;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return 41;
			break;
		
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 43;
			break;
		
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
			break;
		
		case joaat("WEAPON_BOTTLE"):
			return 45;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			return 50;
			break;
		
		case joaat("WEAPON_DAGGER"):
			return 51;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			return 57;
			break;
		
		case joaat("WEAPON_MUSKET"):
			return 53;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			return 54;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return 60;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
			break;
		
		case joaat("WEAPON_HATCHET"):
			return 58;
			break;
		
		case joaat("WEAPON_RAILGUN"):
			return 59;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			return 64;
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			return 62;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
			break;
		
		case joaat("WEAPON_MACHETE"):
			return 65;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return 70;
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 73;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 77;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 78;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 5;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 86;
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return 88;
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			return 87;
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
			break;
		
		case joaat("WEAPON_EMPLAUNCHER"):
			return 89;
			break;
		
		case joaat("WEAPON_FERTILIZERCAN"):
			return 90;
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			return 91;
			break;
		
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			return 95;
			break;
		
		case joaat("WEAPON_CANDYCANE"):
			return 96;
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			return 97;
			break;
		
		case joaat("WEAPON_TECPISTOL"):
			return 98;
			break;
	}
	return 0;
}

char* func_326(int iParam0, int iParam1)//Position - 0x1B8EC
{
	int iVar0;
	int iVar1;
	var* uVar2;
	struct<7> Var41;
	
	if (iParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE" /* GXT: Knuckle Duster */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02" /* GXT: The Pimp */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG" /* GXT: The Ballas */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR" /* GXT: The Hustler */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD" /* GXT: The Rock */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT" /* GXT: The Hater */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV" /* GXT: The Lover */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC" /* GXT: The Player */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG" /* GXT: The King */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG" /* GXT: The Vagos */;
				break;
		}
	}
	else if (iParam1 == joaat("WEAPON_BAT"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_BAT_VARMOD_XM3"):
				return "WCT_BAT_XM3" /* GXT: Blagueurs */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
				return "WCT_BAT_XM301" /* GXT: Spatter */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
				return "WCT_BAT_XM302" /* GXT: Bullet Holes */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
				return "WCT_BAT_XM303" /* GXT: Burger Shot */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
				return "WCT_BAT_XM304" /* GXT: Cluckin' Bell */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
				return "WCT_BAT_XM305" /* GXT: Fatal Incursion */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
				return "WCT_BAT_XM306" /* GXT: Lucha Libre */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
				return "WCT_BAT_XM307" /* GXT: Trippy */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
				return "WCT_BAT_XM308" /* GXT: Tie-Dye */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
				return "WCT_BAT_XM309" /* GXT: Wall */;
				break;
		}
	}
	else if (iParam1 == joaat("WEAPON_KNIFE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
				return "WCT_KNIFE_XM3" /* GXT: Eyes */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
				return "WCT_KNIFE_XM301" /* GXT: Spatter */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
				return "WCT_KNIFE_XM302" /* GXT: Flames */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
				return "WCT_KNIFE_XM303" /* GXT: Lightning */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
				return "WCT_KNIFE_XM304" /* GXT: Pills */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
				return "WCT_KNIFE_XM305" /* GXT: Snakeskin */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
				return "WCT_KNIFE_XM306" /* GXT: Lucha Libre */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
				return "WCT_KNIFE_XM307" /* GXT: Trippy */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
				return "WCT_KNIFE_XM308" /* GXT: Tequilya */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
				return "WCT_KNIFE_XM309" /* GXT: Orang-O-Tang */;
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /* GXT: No Attachment */;
			break;
		
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP" /* GXT: Grip */;
			break;
		
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
			break;
		
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX" /* GXT: Advanced Scope */;
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL" /* GXT: Platinum Pearl Deluxe Finish */;
			break;
		
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM" /* GXT: Etched Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM" /* GXT: Etched Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE" /* GXT: Default Handle */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1" /* GXT: VIP Variant */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2" /* GXT: Bodyguard Variant */;
			break;
		
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB" /* GXT: VIP Variant */;
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG" /* GXT: Bodyguard Variant */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX" /* GXT: Box magazine */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN" /* GXT: Mk II */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND" /* GXT: Patriotic */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND" /* GXT: Patriotic */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2" /* GXT: Small Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2" /* GXT: Medium Scope */;
			break;
		
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18" /* GXT: Festive tint */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM" /* GXT: Families Finish */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCT_VAR_WEED" /* GXT: Organics Finish */;
			break;
		
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCT_VAR_STUD" /* GXT: Record A Finish */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCT_VAR_BONE" /* GXT: Bone Finish */;
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
			return "WCT_PISTMK2_XM3" /* GXT: Season's Greetings */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_XM3"):
			return "WCT_MSMG_XM3" /* GXT: Dildodude Camo */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"):
			return "WCT_PUMPSHT_XM3" /* GXT: Dildodude Camo */;
			break;
		
		case joaat("COMPONENT_PISTOLXM3_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PISTOLXM3_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_FRN"):
			return "WCT_MSMGFRN_VAR" /* GXT: Employee of the Month Finish */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"):
			return "WCT_CRBNMIC_VAR" /* GXT: Suede Bucks Finish */;
			break;
		
		case joaat("COMPONENT_RPG_VARMOD_TVR"):
			return "WCT_RPGTVR_VAR" /* GXT: Uncle T Finish */;
			break;
		
		case joaat("COMPONENT_TECPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_TECPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_68(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_327(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_327(var uParam0)//Position - 0x1C2F9
{
	return uParam0;
}

int func_328()//Position - 0x1C303
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_329())
	{
		return 1;
	}
	return 0;
}

int func_329()//Position - 0x1C320
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_330(int iParam0)//Position - 0x1C337
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			case joaat("COMPONENT_SMG_CLIP_03"):
			case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
				return 0;
			
			default:
		}
	}
	else if (func_331(iParam0))
	{
		return Global_262145.f_21368 /* Tunable: ENABLE_INDEPENDENCE_LIVERY_WEAPONS */;
	}
	return 1;
}

int func_331(int iParam0)//Position - 0x1C399
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return 1;
			break;
	}
	return 0;
}

int func_332()//Position - 0x1C3F8
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (BitTest(Global_25, 6))
	{
		if (BitTest(Global_25, 2) || BitTest(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1))
	{
		if (BitTest(uVar0, 6))
		{
			if (BitTest(uVar0, 2) || BitTest(uVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152688.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (BitTest(iVar3, 2) || BitTest(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_333()//Position - 0x1C4AE
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (BitTest(Global_25, 5))
	{
		if (BitTest(Global_25, 1) || BitTest(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152688.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (BitTest(iVar3, 1) || BitTest(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_334()//Position - 0x1C5E7
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

int func_335(int iParam0, int iParam1)//Position - 0x1C69F
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_336(joaat("COMPONENT_KNIFE_VARMOD_XM3"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_KNIFE_VARMOD_XM3_01"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_01");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_KNIFE_VARMOD_XM3_02"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_02");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_KNIFE_VARMOD_XM3_03"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_03");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_KNIFE_VARMOD_XM3_04"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_04");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_KNIFE_VARMOD_XM3_05"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_05");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_KNIFE_VARMOD_XM3_06"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_06");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_KNIFE_VARMOD_XM3_07"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_07");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_KNIFE_VARMOD_XM3_08"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_08");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_KNIFE_VARMOD_XM3_09"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_09");
					iVar0++;
				}
			}
			break;
		
		case joaat("WEAPON_BAT"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_336(joaat("COMPONENT_BAT_VARMOD_XM3"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_BAT_VARMOD_XM3_01"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_01");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_BAT_VARMOD_XM3_02"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_02");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_BAT_VARMOD_XM3_03"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_03");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_BAT_VARMOD_XM3_04"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_04");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_BAT_VARMOD_XM3_05"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_05");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_BAT_VARMOD_XM3_06"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_06");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_BAT_VARMOD_XM3_07"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_07");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_BAT_VARMOD_XM3_08"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_08");
					iVar0++;
				}
				if (func_336(joaat("COMPONENT_BAT_VARMOD_XM3_09"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_09");
					iVar0++;
				}
			}
			break;
	}
	return iVar0;
}

int func_336(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1CA1B
{
	*uParam2 = 1;
	*uParam3 = 0;
	switch (iParam1)
	{
		case joaat("WEAPON_BAT"):
			if ((!Global_262145.f_34131 /* Tunable: 1490225691 */ && func_346(iLocal_104, 0)) || func_337(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
			if (Global_262145.f_34131 /* Tunable: 1490225691 */ || !func_346(iLocal_104, 0))
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
			return 1;
			break;
		
		case joaat("WEAPON_KNIFE"):
			if ((!Global_262145.f_34131 /* Tunable: 1490225691 */ && func_346(iLocal_104, 0)) || func_337(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
			if (Global_262145.f_34131 /* Tunable: 1490225691 */)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
			return 1;
			break;
	}
	return 0;
}

int func_337(int iParam0, int iParam1, int iParam2)//Position - 0x1CAF7
{
	var uVar0;
	int iVar1;
	
	if (func_345())
	{
		return 0;
	}
	uVar0 = func_341(iParam0, iParam1, iParam2);
	iVar1 = func_339(iParam0, iParam1);
	return BitTest(uVar0, func_338(iVar1));
}

int func_338(int iParam0)//Position - 0x1CB29
{
	return (iParam0 % 32);
}

int func_339(int iParam0, int iParam1)//Position - 0x1CB36
{
	return func_340(iParam0, iParam1);
}

int func_340(int iParam0, int iParam1)//Position - 0x1CB46
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
					break;
				
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
					break;
				
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
					break;
				
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
					break;
				
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
					break;
				
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
					break;
				
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
					break;
				
				case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
					return 569;
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
					break;
				
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
					break;
				
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
					break;
				
				case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
					return 570;
					break;
				
				case joaat("COMPONENT_MICROSMG_VARMOD_FRN"):
					return 605;
					break;
				
				case joaat("COMPONENT_MICROSMG_VARMOD_XM3"):
					return 602;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
					break;
				
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
					break;
				
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
					break;
				
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
					break;
				
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"):
					return 604;
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
					break;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
					break;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
					break;
				
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
					break;
				
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
					break;
				
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
					break;
				
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
					return 571;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"):
					return 603;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
					break;
				
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
					break;
				
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
					break;
				
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
					break;
				
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
					break;
				
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
					break;
				
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
					return 95;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
					return 105;
					break;
				
				case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
					return 106;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
					break;
			}
			break;
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
					return 109;
					break;
				
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
					return 110;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
					break;
				
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
					break;
				
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
					break;
			}
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
					break;
				
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
					break;
				
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
					break;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
					break;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
					break;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
					break;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
					break;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
					break;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
					break;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
					break;
				
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
					break;
				
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
					break;
				
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
					break;
			}
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
					break;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
					break;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
					break;
				
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
					return 601;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
					break;
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
					break;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
					break;
				
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
					break;
				
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
					return 559;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 560;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 561;
					break;
			}
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
					return 562;
					break;
				
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
					return 563;
					break;
				
				case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
					return 564;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 565;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 566;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 567;
					break;
			}
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
					return 558;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
					return 99;
					break;
				
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
					return 100;
					break;
				
				case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
					return 568;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
					break;
				
				case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
					return 572;
					break;
			}
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
					return 573;
					break;
				
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
					return 574;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH_REH"):
					return 575;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 576;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 577;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOLXM3_CLIP_01"):
					return 578;
					break;
				
				case joaat("COMPONENT_PISTOLXM3_SUPP"):
					return 579;
					break;
			}
			break;
		
		case joaat("WEAPON_TECPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_TECPISTOL_CLIP_01"):
					return 607;
					break;
				
				case joaat("COMPONENT_TECPISTOL_CLIP_02"):
					return 608;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 609;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 610;
					break;
			}
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAILGUNXM3_CLIP_01"):
					return 580;
					break;
			}
			break;
		
		case joaat("WEAPON_BAT"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BAT_VARMOD_XM3"):
					return 581;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
					return 583;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
					return 584;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
					return 585;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
					return 586;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
					return 587;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
					return 588;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
					return 589;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
					return 590;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
					return 591;
					break;
			}
			break;
		
		case joaat("WEAPON_KNIFE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
					return 582;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
					return 592;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
					return 593;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
					return 594;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
					return 595;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
					return 596;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
					return 597;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
					return 598;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
					return 599;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
					return 600;
					break;
			}
			break;
		
		case joaat("WEAPON_RPG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RPG_VARMOD_TVR"):
					return 606;
					break;
			}
			break;
	}
	return 0;
}

var func_341(int iParam0, int iParam1, var uParam2)//Position - 0x1F09F
{
	var uVar0;
	
	uVar0 = func_52(func_342(iParam0, iParam1), uParam2);
	return uVar0;
}

int func_342(int iParam0, int iParam1)//Position - 0x1F0B9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_339(iParam0, iParam1);
	iVar1 = func_344(iVar0);
	if ((func_79() == 0 || func_343() == 0) || (func_79() == 999 && func_343() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 811;
				break;
			
			case 1:
				return 812;
				break;
			
			case 2:
				return 813;
				break;
			
			case 3:
				return 814;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2828;
				break;
			
			case 7:
				return 5502;
				break;
			
			case 8:
				return 5506;
				break;
			
			case 9:
				return 5510;
				break;
			
			case 10:
				return 5623;
				break;
			
			case 11:
				return 5627;
				break;
			
			case 12:
				return 5631;
				break;
			
			case 13:
				return 5635;
				break;
			
			case 14:
				return 6374;
				break;
			
			case 15:
				return 6497;
				break;
			
			case 16:
				return 6517;
				break;
			
			case 17:
				return 6523;
				break;
			
			case 18:
				return 10272;
				break;
			
			case 19:
				return 12005;
				break;
			}
	}
	return 14385;
}

int func_343()//Position - 0x1F239
{
	return Global_32284;
}

int func_344(int iParam0)//Position - 0x1F244
{
	return (iParam0 / 32);
}

bool func_345()//Position - 0x1F251
{
	return Global_1575042;
}

int func_346(int iParam0, bool bParam1)//Position - 0x1F25D
{
	if (iParam0 == 58)
	{
		if (bParam1)
		{
			return Global_100885.f_329[58] < 5f;
		}
		return 1;
	}
	return 0;
}

int func_347(int iParam0, int iParam1, int iParam2)//Position - 0x1F286
{
	var uVar0;
	int iVar1;
	
	if (func_345())
	{
		return 0;
	}
	uVar0 = func_348(iParam0, iParam1, iParam2);
	iVar1 = func_339(iParam0, iParam1);
	return BitTest(uVar0, func_338(iVar1));
}

var func_348(int iParam0, int iParam1, var uParam2)//Position - 0x1F2B8
{
	var uVar0;
	
	uVar0 = func_52(func_349(iParam0, iParam1), uParam2);
	return uVar0;
}

int func_349(int iParam0, int iParam1)//Position - 0x1F2D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_339(iParam0, iParam1);
	iVar1 = func_344(iVar0);
	if ((func_79() == 0 || func_343() == 0) || (func_79() == 999 && func_343() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 688;
				break;
			
			case 1:
				return 689;
				break;
			
			case 2:
				return 690;
				break;
			
			case 3:
				return 691;
				break;
			
			case 4:
				return 1755;
				break;
			
			case 5:
				return 2437;
				break;
			
			case 6:
				return 2830;
				break;
			
			case 7:
				return 5504;
				break;
			
			case 8:
				return 5508;
				break;
			
			case 9:
				return 5512;
				break;
			
			case 10:
				return 5625;
				break;
			
			case 11:
				return 5629;
				break;
			
			case 12:
				return 5633;
				break;
			
			case 13:
				return 5637;
				break;
			
			case 14:
				return 6376;
				break;
			
			case 15:
				return 6499;
				break;
			
			case 16:
				return 6519;
				break;
			
			case 17:
				return 6525;
				break;
			
			case 18:
				return 10274;
				break;
			
			case 19:
				return 12007;
				break;
		}
	}
	return 1755;
}

int func_350(int iParam0)//Position - 0x1F455
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
		case 59:
		case 60:
			return 1;
		
		default:
	}
	return 0;
}

void func_351(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1F49F
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_352(int iParam0)//Position - 0x1F4BE
{
	if (func_353(iParam0) || iParam0 == joaat("WEAPON_HEAVYRIFLE"))
	{
		return 1;
	}
	return 0;
}

int func_353(int iParam0)//Position - 0x1F4E2
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_354(int iParam0, int iParam1)//Position - 0x1F541
{
	struct<5> Var0;
	int iVar7;
	
	while (func_288(&Var0, iParam0, iVar7, 0))
	{
		if (Var0.f_4 == iParam1)
		{
			return 1;
		}
		iVar7++;
	}
	return 0;
}

float func_355(float fParam0)//Position - 0x1F56E
{
	return (fParam0 * 57.29578f);
}

int func_356(var uParam0)//Position - 0x1F57E
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
	return 1;
}

int func_357(int* iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x1F59E
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		VEHICLE::DELETE_VEHICLE(iParam0);
		*iParam0 = 0;
	}
	*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, true, true, false);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	return 1;
}

int func_358(var uParam0)//Position - 0x1F5DC
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_NAME_DEBUG(*uParam0, "RAMP:SCENE PED");
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	return 1;
}

int func_359(int* iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x1F617
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		PED::DELETE_PED(iParam0);
		*iParam0 = 0;
	}
	*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, true, true);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		func_360(*iParam0, Param2);
		ENTITY::SET_ENTITY_HEADING(*iParam0, fParam5);
	}
	PED::SET_PED_MONEY(*iParam0, 0);
	PED::SET_PED_NAME_DEBUG(*iParam0, "RAMP:SCENE PED");
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	return 1;
}

Vector3 func_360(int iParam0, struct<3> Param1)//Position - 0x1F695
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0, false, false))
	{
		Param1.f_2 = uVar0;
	}
	if (func_235(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
	}
	return Param1;
}

int func_361()//Position - 0x1F6DB
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-177.0628f, -1679.7155f, 33.16263f, -157.0628f, -1659.7155f, 37.16263f, false, true, true, true);
}

void func_362(var uParam0)//Position - 0x1F709
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("IG_Ramp_Gang");
	sVar1 = "misstrvram_4";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_ANIM_DICT(sVar1);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
	while (!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_359(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, func_355(1.03f), 1))
	{
		SYSTEM::WAIT(0);
	}
	func_358(&(uParam0->f_28[0]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RP0_NOGUN");
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
	while (!func_359(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, func_355(0.2f), 1))
	{
		SYSTEM::WAIT(0);
	}
	func_358(&(uParam0->f_28[1]));
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RP1_GUN");
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[1]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("WEAPON_ASSAULTRIFLE"), 100, true, true);
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}

void func_363(var uParam0)//Position - 0x1F9E0
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("IG_Ramp_Mex");
	sVar1 = "misstrvram_3";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_ANIM_DICT(sVar1);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_MICROSMG"), 31, 10);
	while ((!STREAMING::HAS_MODEL_LOADED(iVar0) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_MICROSMG"))) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_359(&(uParam0->f_28[0]), iVar0, 464.6125f, -1848.7673f, 27.816f, 177.39f, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_358(&(uParam0->f_28[0]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
	while (!func_359(&(uParam0->f_28[1]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_358(&(uParam0->f_28[1]));
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
	PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
	TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
	if (func_286(&(uParam0->f_41[0]), joaat("WEAPON_MICROSMG"), 467f, -1855.4f, 32f, func_355(-0.85f)))
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0->f_41[0], joaat("COMPONENT_AT_SCOPE_MACRO"));
		WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0->f_41[0], joaat("COMPONENT_MICROSMG_CLIP_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}

int func_364()//Position - 0x1FCE0
{
	return func_365(1182.1375f, -400.4787f, 66.92414f, 8f);
}

int func_365(struct<3> Param0, float fParam3)//Position - 0x1FD00
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0, Param0 + Var0, false, true, true, true);
}

void func_366(var uParam0)//Position - 0x1FD32
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	
	iVar0 = joaat("IG_Ramp_Hipster");
	iVar1 = joaat("prop_chair_01a");
	iVar2 = joaat("prop_npc_phone");
	sVar3 = "misstrvram_2";
	iVar4 = 60309;
	Var5 = { 0f, 0f, 0f };
	Var8 = { 0f, 0f, 0f };
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_SAWNOFFSHOTGUN"), 31, 0);
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_ANIM_DICT(sVar3);
	func_370(&uLocal_111);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_MODEL_LOADED(iVar1)) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3)) || !func_369(&uLocal_111))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA_OF_OBJECTS(1180.0205f, -401.7374f, 66.8767f, 0.75f, 0);
	uParam0->f_41[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), true, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[2]))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], 0f, 0f, 50f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], true);
	}
	uParam0->f_41[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1181.2432f, -402.5309f, 67.2564f, 1f, joaat("prop_table_01"), true, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], true);
	}
	while (!func_359(&(uParam0->f_28[0]), iVar0, 1181.5474f, -400.0954f, 67.5757f, -124.292786f, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_358(&(uParam0->f_28[0]));
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
	PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
	func_368(&(uParam0->f_41[1]), iVar2, 1181.5474f, -400.0954f, 65.5757f, 0f);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], iVar4), Var8, Var5, true, false, false, false, 2, true, 0);
	func_367(&uLocal_111, 0, 3);
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(Local_105, Local_108, 2);
		if (func_137(uParam0->f_28[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1000f, 0);
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, true);
	}
	if (!func_286(&(uParam0->f_41[0]), joaat("WEAPON_SAWNOFFSHOTGUN"), 1162.2f, -395.4f, 72.9f, func_355(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}

void func_367(var uParam0, bool bParam1, int iParam2)//Position - 0x1FFFE
{
	int iVar0;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (bParam1)
		{
			MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iVar0);
		}
		else
		{
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("npcphone"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("npcphone", false);
				HUD::LINK_NAMED_RENDERTARGET(joaat("prop_npc_phone"));
			}
			iVar0 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("npcphone");
		}
		HUD::SET_TEXT_RENDER_ID(iVar0);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, Global_20420, Global_20421, Global_20422, Global_20423, 255, 255, 255, 255, 0);
	}
}

void func_368(int* iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x2007F
{
	func_164(iParam0);
	*iParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
	ENTITY::SET_ENTITY_HEADING(*iParam0, fParam5);
}

int func_369(var uParam0)//Position - 0x200A6
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_370(var uParam0)//Position - 0x200BD
{
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_371());
}

char* func_371()//Position - 0x200D0
{
	return "CELLPHONE_CUTSCENE";
}

int func_372()//Position - 0x200DC
{
	return func_365(911.5349f, 3642.1108f, 31.647379f, 8f);
}

void func_373(var uParam0)//Position - 0x200FC
{
	struct<3> Var0;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	int iVar13;
	
	sVar3 = "misstrvram_1";
	iVar4 = 28422;
	Var5 = { 0f, 0f, 0f };
	Var8 = { 0f, 0f, -0.1f };
	iVar11 = joaat("IG_Ramp_Hic");
	iVar12 = joaat("prop_table_03b_chr");
	iVar13 = joaat("prop_beer_bottle");
	STREAMING::REQUEST_MODEL(iVar11);
	STREAMING::REQUEST_MODEL(iVar12);
	STREAMING::REQUEST_MODEL(iVar13);
	STREAMING::REQUEST_ANIM_DICT(sVar3);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
	while ((((!STREAMING::HAS_MODEL_LOADED(iVar11) || !STREAMING::HAS_MODEL_LOADED(iVar12)) || !STREAMING::HAS_MODEL_LOADED(iVar13)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3)) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE")))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_359(&(uParam0->f_28[0]), iVar11, 907.998f, 3643.8264f, 32.292427f, -173.04526f, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (func_137(uParam0->f_28[0]))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
		Var0 = { PED::GET_PED_BONE_COORDS(uParam0->f_28[0], iVar4, 0f, 0f, 0f) };
		PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
		func_368(&(uParam0->f_41[1]), iVar13, Var0, 0f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], iVar4), Var8, Var5, true, true, false, false, 2, true, 0);
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_41[1], true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], joaat("PLAYER"));
	}
	while (!func_359(&(uParam0->f_28[1]), iVar11, 909.3126f, 3643.5066f, 32.2952f, 153.0127f, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (func_137(uParam0->f_28[1]))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
		Var0 = { PED::GET_PED_BONE_COORDS(uParam0->f_28[1], iVar4, 0f, 0f, 0f) };
		PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
		func_368(&(uParam0->f_41[2]), iVar13, Var0, 0f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[2], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], iVar4), Var8, Var5, true, true, false, false, 2, true, 0);
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_41[2], true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[1], true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 208, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], joaat("PLAYER"));
	}
	uParam0->f_41[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(909.3884f, 3643.6523f, 31.699f, 1f, joaat("prop_table_03b_chr"), true, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], true);
	}
	uParam0->f_41[4] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(908.0437f, 3643.682f, 31.7073f, 1f, joaat("prop_table_03b_chr"), true, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[4]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], true);
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(910.13f, 3643.74f, 31.69f, 0f, 0f, func_355(-0.26f), 2);
		if (func_137(uParam0->f_28[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1000f, 0);
		}
		if (func_137(uParam0->f_28[1]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uParam0->f_59, sVar3, "redneck_idle_b", 8f, -8f, 513, 0, 1000f, 0);
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, true);
	}
	if (!func_286(&(uParam0->f_41[0]), joaat("WEAPON_ASSAULTRIFLE"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar11);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar12);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_374(int iParam0)//Position - 0x20623
{
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	if (func_190(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0)//Position - 0x20650
{
	struct<27> Var0;
	bool bVar32;
	
	func_120(iParam0, &Var0);
	bVar32 = func_237();
	if (bVar32 == 145)
	{
		return 1;
	}
	else if ((bVar32 != 1 && bVar32 != 0) && bVar32 != 2)
	{
		return 1;
	}
	if (!BitTest(Var0.f_26, bVar32))
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0, var uParam1, struct<3> Param2, float fParam5)//Position - 0x206A1
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_377((*iParam0)[0], Param2, fParam5, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_377((*iParam0)[iVar0], Param2, fParam5, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_395("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_377(int iParam0, struct<3> Param1, float fParam4, var uParam5)//Position - 0x20706
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_120(iParam0, &Var1);
	if (func_378(Var1.f_6, Param1, fParam4, 0))
	{
		if (BitTest(Global_113810.f_18577[iParam0 /*6*/], 0))
		{
			if (!BitTest(Global_113810.f_18577[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_200(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam5 = iParam0;
		StringCopy(&(uParam5->f_1), Var1.f_0, 32);
		return 1;
	}
	return 0;
}

int func_378(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x2077E
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

int func_379(int iParam0)//Position - 0x207F9
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113810.f_9088.f_99.f_58[iParam0];
}

void func_380(var* uParam0, bool bParam1)//Position - 0x20826
{
	func_282(uParam0);
	if (bParam1)
	{
		func_395(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_383(uParam0, 0, 0, 0);
	}
	func_382(&(uParam0->f_48));
	if (iLocal_286 != -1)
	{
		func_395("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_279(&iLocal_286);
	}
	if (iLocal_298 != 0)
	{
		if (*uParam0 == 55 || *uParam0 == 53)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_298, false);
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	if (iLocal_290)
	{
		if (func_2("RAMP_HELP_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to start this Rampage. */))
		{
			HUD::CLEAR_HELP(true);
			iLocal_290 = 0;
		}
	}
	func_381();
	func_395("SCRIPT TERMINATED");
	Global_98085 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_381()//Position - 0x208CE
{
	func_395("Running end routines.");
	Global_113528 = (Global_113528 - 1);
}

int func_382(var uParam0)//Position - 0x208E8
{
	if (func_162(uParam0))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			STREAMING::REMOVE_ANIM_DICT(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_383(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2091E
{
	func_391(uParam0, iParam1);
	func_387(uParam0, bParam2);
	func_384(uParam0, bParam3);
}

void func_384(var uParam0, bool bParam1)//Position - 0x2093E
{
	func_385(&(uParam0->f_41), bParam1);
}

void func_385(var uParam0, bool bParam1)//Position - 0x20950
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_164(uParam0[iVar0]);
		}
		else
		{
			func_386(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_386(int* iParam0, bool bParam1)//Position - 0x2098E
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*iParam0);
		}
	}
}

void func_387(var uParam0, bool bParam1)//Position - 0x209C9
{
	func_388(&(uParam0->f_35), bParam1);
}

void func_388(var uParam0, bool bParam1)//Position - 0x209DB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_390(uParam0[iVar0]);
		}
		else
		{
			func_389(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_389(int* iParam0)//Position - 0x20A18
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

void func_390(int* iParam0)//Position - 0x20A50
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		if (func_168(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
			{
				if (func_137(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(iParam0);
			}
		}
		else
		{
			if (func_137(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
	}
}

void func_391(var uParam0, int iParam1)//Position - 0x20AEC
{
	func_392(&(uParam0->f_28), iParam1);
}

void func_392(var uParam0, int iParam1)//Position - 0x20AFE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_394(uParam0[iVar0]);
		}
		else
		{
			func_393(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_393(int* iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x20B3F
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_394(int* iParam0)//Position - 0x20B8F
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		PED::DELETE_PED(iParam0);
	}
}

void func_395(char* sParam0)//Position - 0x20BD0
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_396(var uParam0)//Position - 0x20BE2
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_397()//Position - 0x20C15
{
	func_395("Running start routines.");
	Global_113528++;
}

