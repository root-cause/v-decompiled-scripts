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
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74[1] = { 0 };
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 16;
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
	int* iLocal_244 = NULL;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	int* iLocal_247 = NULL;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	int* iLocal_250 = NULL;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	int* iLocal_253 = NULL;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	int* iLocal_256 = NULL;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	int* iLocal_259 = NULL;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int* iLocal_262 = NULL;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 1097859072;
	var uLocal_268 = 1500;
	var uLocal_269 = 45;
	var uLocal_270 = 1103626240;
	var uLocal_271 = 5;
	int iLocal_272[1] = { 0 };
	char* sLocal_274 = NULL;
	char* sLocal_275 = NULL;
	var uLocal_276 = 1;
	var uLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	var uLocal_280[1] = { 0 };
	int iLocal_282[4] = { 0, 0, 0, 0 };
	struct<9> Local_287 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	struct<3> Local_300 = { 0, 0, 0 } ;
	struct<3> Local_303 = { 0, 0, 0 } ;
	struct<3> Local_306 = { 0, 0, 0 } ;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	struct<3> Local_315 = { 0, 0, 0 } ;
	struct<3> Local_318 = { 0, 0, 0 } ;
	struct<3> Local_321 = { 0, 0, 0 } ;
	float fLocal_324 = 0f;
	float fLocal_325 = 0f;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	int iLocal_328 = 0;
	var uLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	bool bLocal_334 = 0;
	bool bLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	struct<5> ScriptParam_0 = { 1, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	Local_61 = { 500f, 500f, 500f };
	fLocal_327 = -1f;
	iLocal_330 = -1;
	bLocal_334 = true;
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
	MISC::SET_MISSION_FLAG(true);
	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(75))
	{
		func_306();
	}
	bLocal_335 = ScriptParam_0.f_5;
	if (bLocal_335)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
		func_301(0, -1, 0);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	uLocal_74[0] = ScriptParam_0[0];
	Global_112993.f_1 = uLocal_74[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (func_300() && ScriptParam_0.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_271(&ScriptParam_0, bVar0) && iLocal_72 != 6) && iLocal_72 != 5) && (iLocal_72 != -1 || !func_270(uLocal_331, 1024)))
	{
		func_262(0);
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_261(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_261(1, 0));
	if (!bVar1)
	{
		iLocal_72 = 2;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_333 > 0)
		{
			func_259();
			iLocal_333 = (iLocal_333 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		}
		switch (iLocal_72)
		{
			case -1:
				func_258();
				break;
			
			case 0:
				func_217(1);
				break;
			
			case 1:
				func_110();
				break;
			
			case 2:
				func_217(0);
				break;
			
			case 3:
				func_92();
				break;
			
			case 4:
				func_39(bLocal_334);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&iLocal_259))
				{
					func_7(&iLocal_259);
				}
				else if (func_1(&iLocal_259, 7.5f))
				{
					func_306();
				}
				break;
		}
	}
}

int func_1(int* iParam0, float fParam1)//Position - 0x24B
{
	if (func_3(iParam0, fParam1))
	{
		func_2(iParam0);
		return 1;
	}
	return 0;
}

void func_2(int* iParam0)//Position - 0x269
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_3(int* iParam0, float fParam1)//Position - 0x27F
{
	if (func_10(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(int* iParam0)//Position - 0x2A1
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)//Position - 0x2DD
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

bool func_6(var uParam0)//Position - 0x335
{
	return BitTest(*uParam0, 2);
}

void func_7(int* iParam0)//Position - 0x342
{
	if (!func_10(iParam0))
	{
		func_8(iParam0);
	}
}

void func_8(int* iParam0)//Position - 0x35A
{
	func_9(iParam0, 0f);
}

void func_9(int* iParam0, float fParam1)//Position - 0x369
{
	iParam0->f_1 = (func_5(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_10(var uParam0)//Position - 0x394
{
	return BitTest(*uParam0, 1);
}

void func_11()//Position - 0x3A1
{
	if (!func_270(uLocal_331, 8192))
	{
		if (func_38())
		{
			func_27();
		}
		else
		{
			iLocal_72 = 6;
		}
	}
	if (func_270(uLocal_331, 16384))
	{
		if (func_12())
		{
			iLocal_72 = 6;
		}
	}
}

int func_12()//Position - 0x3DF
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_272[0], false))
	{
		return 1;
	}
	if (func_270(uLocal_331, 8192))
	{
		PED::SET_PED_RESET_FLAG(iLocal_272[0], 60, true);
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_272[0], 96.8033f, -1287.5966f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_26(PLAYER::PLAYER_PED_ID(), 96.8033f, -1287.5966f, 28.2688f, 1) > 100f)
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, true, 0f, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_282[0]))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_282[0]))
				{
					func_13(1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(iLocal_282[0], true);
				}
			}
			PED::DELETE_PED(&(iLocal_272[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)//Position - 0x4DB
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	func_15(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)//Position - 0x519
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_33197, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_33197, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x53B
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_25(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_24())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_23(1, bParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_25(0);
		HUD::THEFEED_RESUME();
		Global_64172 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_23(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_21(PLAYER::PLAYER_ID())) && !func_17(PLAYER::PLAYER_ID(), 0)) && !func_16()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_21(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79387 = 0;
	}
}

bool func_16()//Position - 0x688
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_17(int iParam0, int iParam1)//Position - 0x6A2
{
	bool bVar0;
	
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0x6FB
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0x73C
{
	return Global_1574926;
}

int func_20(var uParam0)//Position - 0x748
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

int func_21(int iParam0)//Position - 0x76A
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_22())
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

bool func_22()//Position - 0x7A9
{
	return BitTest(Global_2621446, 3);
}

int func_23(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x7B7
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

int func_24()//Position - 0x7EA
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_25(int iParam0)//Position - 0x811
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

float func_26(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x834
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

void func_27()//Position - 0x86E
{
	int iVar0;
	
	func_30();
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, false, 0f, false);
	}
	func_28(&uLocal_331, 16384);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_272[0], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_272[0], 104, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 98.2041f, -1291.2522f, 28.2688f, 1f, -1, 0.25f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 107.6303f, -1304.7424f, 27.7688f, 1f, -1, 0.25f, 0, 40000f);
	TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_272[0], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_28(&uLocal_331, 8192);
}

void func_28(var uParam0, int iParam1)//Position - 0x95B
{
	func_29(uParam0, iParam1);
}

void func_29(var uParam0, var uParam1)//Position - 0x96B
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_30()//Position - 0x97C
{
	if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_272[0]) && func_37(1, 0, 1))
	{
		func_31(0, 0, 0);
		iLocal_282[0] = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.5734f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, true, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_31(int iParam0, bool bParam1, int iParam2)//Position - 0x9E2
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(bParam1);
	func_32(0);
	func_15(1, 1, iParam2, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_14(23, 1);
}

void func_32(int iParam0)//Position - 0xA3B
{
	if (func_36())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_35())
		{
			func_33(1, 1);
		}
		else
		{
			func_33(0, 0);
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
	if (!func_24())
	{
		Global_20930.f_1 = 3;
	}
}

void func_33(bool bParam0, bool bParam1)//Position - 0xAC5
{
	if (bParam0)
	{
		if (func_34(0))
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

int func_34(int iParam0)//Position - 0xB39
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

bool func_35()//Position - 0xB90
{
	return BitTest(Global_1956920, 5);
}

bool func_36()//Position - 0xB9E
{
	return BitTest(Global_1956920, 19);
}

int func_37(bool bParam0, bool bParam1, bool bParam2)//Position - 0xBAD
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

int func_38()//Position - 0xC92
{
	if ((uLocal_74[0] == 8 || uLocal_74[0] == 9) || func_26(iLocal_272[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_39(bool bParam0)//Position - 0xCDE
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	func_67();
	if (bParam0)
	{
		Var0 = { Local_306 };
	}
	else
	{
		func_66(&Var0, &uVar3, 0);
	}
	func_63(Var0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_272[0], false))
		{
			iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, false))
			{
				if (iLocal_336)
				{
					if (func_60(iVar4, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_59();
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_272[0], 0, 16777216);
						func_40();
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_336 = 1;
				}
			}
		}
	}
}

void func_40()//Position - 0xD94
{
	func_58();
	func_51(295, 0, 0);
	func_41(0);
	func_306();
}

void func_41(bool bParam0)//Position - 0xDB2
{
	struct<8> Var0[3];
	struct<6> Var25[3];
	
	if (!func_48())
	{
		return;
	}
	if (!iLocal_67)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var25[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var25[1 /*6*/]), "City", 24);
	StringCopy(&(Var25[2 /*6*/]), "????", 24);
	if (func_46(200, &Var25, &Var0, 3, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, func_45(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(108, func_44(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(102, func_43(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(8, func_42(), 0f);
	}
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
}

int func_42()//Position - 0xE6F
{
	return iLocal_65;
}

int func_43()//Position - 0xE79
{
	return iLocal_66;
}

int func_44()//Position - 0xE83
{
	return iLocal_64;
}

int func_45()//Position - 0xE8D
{
	return 0;
}

int func_46(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xE96
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
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var69 = { func_47(PLAYER::PLAYER_ID()) };
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
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693440.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1928632.f_10));
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

struct<13> func_47(int iParam0)//Position - 0xFCA
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_48()//Position - 0xFE1
{
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && func_49())
	{
		return 1;
	}
	return 0;
}

int func_49()//Position - 0x1007
{
	if (func_50())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_50()//Position - 0x1027
{
	return Global_2696683;
}

void func_51(int iParam0, int iParam1, int iParam2)//Position - 0x1033
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
		func_57((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
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
		func_52();
	}
}

void func_52()//Position - 0x1119
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
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113969.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113705++;
					fVar1 = (fVar1 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113706++;
					fVar2 = (fVar2 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113707++;
					fVar3 = (fVar3 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113708++;
					fVar4 = (fVar4 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113709++;
					fVar5 = (fVar5 + (Global_113969.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113710++;
					fVar6 = (fVar6 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113711++;
					fVar7 = (fVar7 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113688 > 0)
	{
		if (Global_113705 == Global_113688)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113689 > 0)
	{
		if (Global_113706 == Global_113689)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113690 > 0)
	{
		if (Global_113707 == Global_113690)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113691 > 0)
	{
		if (Global_113708 == Global_113691)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113692 > 0)
	{
		if (((Global_113709 == Global_113692 || (Global_113692 * 10 / Global_113709) < 41) || Global_113709 > Global_113695) || Global_113709 == Global_113695)
		{
			if (!BitTest(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113692, 0);
					MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113693 > 0)
	{
		if (Global_113710 == Global_113693)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113694 > 0)
	{
		if (Global_113711 == Global_113694)
		{
			fVar7 = 5f;
		}
	}
	Global_113969.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
	{
		iVar9 = Global_113695;
	}
	else
	{
		iVar9 = Global_113709;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113705, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113688, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113706, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113689, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113707, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113690, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113708, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113691, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113695, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113711 + Global_113710), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113694 + Global_113693), true);
	Global_113712 = (Global_113705 * 100 / Global_113688);
	Global_113714 = ((Global_113707 + Global_113706) * 100 / (Global_113690 + Global_113689));
	Global_113713 = ((Global_113708 + iVar9) * 100 / (Global_113691 + Global_113695));
	Global_113715 = ((Global_113710 + Global_113711) * 100 / (Global_113693 + Global_113694));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113969.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113712, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113713, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113714, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113969.f_10197.f_3853))
	{
		func_56(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_55() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_53();
				}
			}
		}
	}
}

int func_53()//Position - 0x15D7
{
	if (func_54(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

int func_54(bool bParam0)//Position - 0x1622
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_55()//Position - 0x164A
{
	return Global_32948;
}

int func_56(int iParam0, int iParam1)//Position - 0x1655
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

void func_57(int iParam0, bool bParam1, int iParam2)//Position - 0x16A6
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_58()//Position - 0x16C4
{
	iLocal_66++;
	iLocal_67 = 1;
}

void func_59()//Position - 0x16D5
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_272[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_272[0], false))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_272[0], true);
		if (PED::IS_PED_IN_GROUP(iLocal_272[0]))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_272[0]);
		}
	}
}

int func_60(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x171D
{
	func_62(bParam5, bParam6);
	func_61(iParam0);
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

void func_61(int iParam0)//Position - 0x1774
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

void func_62(bool bParam0, bool bParam1)//Position - 0x17A0
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

void func_63(struct<3> Param0)//Position - 0x18F1
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iLocal_279))
	{
		HUD::REMOVE_BLIP(&iLocal_279);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_272[0], false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_272[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_278))
				{
					iLocal_278 = func_64(Param0, 1);
				}
			}
		}
	}
}

int func_64(struct<3> Param0, bool bParam3)//Position - 0x1977
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_65(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_65(bool bParam0, float fParam1, float fParam2)//Position - 0x19A3
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_66(var uParam0, var uParam1, bool bParam2)//Position - 0x19BA
{
	Local_315 = { Local_315 };
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { Local_312 };
				*uParam1 = fLocal_324;
			}
			Local_315 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.9908f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { Local_312 };
				*uParam1 = fLocal_324;
			}
			Local_315 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.4315f, 3776.8496f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { Local_312 };
				*uParam1 = fLocal_324;
			}
			Local_315 = { *uParam0 };
			break;
	}
}

void func_67()//Position - 0x1ACF
{
	if (PED::IS_PED_INJURED(iLocal_272[0]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_272[0]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_272[0], false))
		{
		}
		func_68(0);
	}
}

void func_68(int iParam0)//Position - 0x1B08
{
	if ((uLocal_74[0] > -1 && uLocal_74[0] < 10) && iParam0 != 2)
	{
		func_90(uLocal_74[0], (func_91(uLocal_74[0]) / 2));
	}
	func_88();
	switch (iParam0)
	{
		case 0:
			func_86("SCLUB_HOME_D" /* GXT: ~r~~a~ died. */, uLocal_74[0]);
			func_90(uLocal_74[0], 0);
			func_74(uLocal_74[0], 1);
			iLocal_72 = 6;
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			func_69("SCLUB_HOME_A" /* GXT: ~a~ was abandoned. */, uLocal_74[0], 0);
			iLocal_72 = 5;
			break;
		
		case 2:
			iLocal_72 = 5;
			break;
		
		case 4:
			func_86("SCLUB_HOME_D3" /* GXT: ~r~~a~ was scared. */, uLocal_74[0]);
			iLocal_72 = 6;
			break;
		
		case 3:
			if (func_26(iLocal_272[0], 92.5861f, -1282.8604f, 28.2548f, 1) < 10f)
			{
				iLocal_72 = 5;
			}
			else
			{
				iLocal_72 = 6;
			}
			break;
	}
}

void func_69(char* sParam0, int iParam1, bool bParam2)//Position - 0x1BF1
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_73(iParam1)}, 6);
	if (!func_72(sParam0, &sVar0))
	{
		if (!bParam2)
		{
			func_71(sParam0, &sVar0, -1);
		}
		else
		{
			func_70(sParam0, &sVar0);
		}
	}
}

void func_70(char* sParam0, char* sParam1)//Position - 0x1C2A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_71(char* sParam0, char* sParam1, int iParam2)//Position - 0x1C46
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

bool func_72(char* sParam0, char* sParam1)//Position - 0x1C63
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

struct<4> func_73(int iParam0)//Position - 0x1C7C
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_74(int iParam0, bool bParam1)//Position - 0x1C95
{
	if (bParam1)
	{
		func_28(&(Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_75(&(Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_75(var uParam0, int iParam1)//Position - 0x1CD7
{
	func_76(uParam0, iParam1);
}

void func_76(var uParam0, var uParam1)//Position - 0x1CE7
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_77()//Position - 0x1CFC
{
	int iVar0;
	
	iVar0 = func_79();
	switch (iVar0)
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
		
		default:
			switch (func_78(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_78(int iParam0)//Position - 0x1D8A
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_79()//Position - 0x1DBE
{
	func_80();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_80()//Position - 0x1DD7
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_84(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_83(PLAYER::PLAYER_PED_ID());
			if (func_82(iVar0) && (!func_81(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_82(Global_113969.f_2366.f_539.f_4321))
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

bool func_81(int iParam0)//Position - 0x1ED4
{
	return Global_44042 == iParam0;
}

bool func_82(int iParam0)//Position - 0x1EE2
{
	return iParam0 < 3;
}

int func_83(int iParam0)//Position - 0x1EEE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_84(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_84(int iParam0)//Position - 0x1F2B
{
	if (func_82(iParam0))
	{
		return func_85(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_85(int iParam0)//Position - 0x1F50
{
	return Global_2169[iParam0 /*29*/];
}

void func_86(char* sParam0, int iParam1)//Position - 0x1F5F
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_73(iParam1)}, 6);
	func_87(sParam0, &sVar0, 7500, 1);
}

void func_87(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1F7E
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

void func_88()//Position - 0x1F9D
{
	if (HUD::DOES_BLIP_EXIST(iLocal_279))
	{
		HUD::REMOVE_BLIP(&iLocal_279);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_278))
	{
		HUD::REMOVE_BLIP(&iLocal_278);
	}
	func_89();
}

void func_89()//Position - 0x1FCB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_280[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_280[iVar0]));
		}
		iVar0++;
	}
}

void func_90(int iParam0, int iParam1)//Position - 0x1FFE
{
	Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_91(int iParam0)//Position - 0x201A
{
	return Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/];
}

void func_92()//Position - 0x2034
{
	func_67();
	func_88();
	switch (iLocal_78)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_272[0], false))
				{
					if (!func_109("SCLUB_SECLUDED"))
					{
						func_108("SCLUB_SECLUDED");
					}
					if (func_107() && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) == 0f)
					{
						HUD::CLEAR_HELP(true);
						STREAMING::REQUEST_ANIM_DICT(func_102(iLocal_272[0], 0, 0));
						iLocal_78 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_95())
			{
				iLocal_78 = 2;
			}
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
			{
				func_259();
				if (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 4)
				{
					bLocal_334 = false;
				}
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_43);
				func_93(bLocal_334);
				iLocal_72 = 4;
			}
			break;
	}
}

void func_93(bool bParam0)//Position - 0x2109
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_86("SCLUB_HOME_GO" /* GXT: Take ~a~ ~y~home.~s~ */, uLocal_74[0]);
			}
			else
			{
				func_94("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_94("SCLUB_HOME_GO3" /* GXT: Take her ~y~home. */, 7500, 1);
			break;
	}
}

void func_94(char* sParam0, int iParam1, int iParam2)//Position - 0x2187
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_95()//Position - 0x21A0
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_102(iLocal_272[0], 0, 0)))
	{
		func_96(iLocal_272[0], 0, 1, -1, 1);
		func_96(PLAYER::PLAYER_PED_ID(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_96(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x21DA
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return;
	}
	iLocal_43 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && func_101(0, 1))
	{
		if (iLocal_43 != 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
		}
	}
	bVar1 = func_100(iVar0);
	sVar2 = func_102(iParam0, 0, 0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar2);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_97(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_97(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_97(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_97(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_97(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar3);
		if (bParam4)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
}

char* func_97(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x231F
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_99(18);
					}
					else
					{
						sVar0 = func_99(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_99(8);
				}
				else
				{
					sVar0 = func_99(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_98(18);
				}
				else
				{
					sVar0 = func_98(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(8);
			}
			else
			{
				sVar0 = func_98(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_99(19);
					}
					else
					{
						sVar0 = func_99(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_99(9);
				}
				else
				{
					sVar0 = func_99(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_98(19);
				}
				else
				{
					sVar0 = func_98(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(9);
			}
			else
			{
				sVar0 = func_98(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_99(20);
					}
					else
					{
						sVar0 = func_99(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_99(10);
				}
				else
				{
					sVar0 = func_99(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_98(20);
				}
				else
				{
					sVar0 = func_98(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(10);
			}
			else
			{
				sVar0 = func_98(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_99(21);
					}
					else
					{
						sVar0 = func_99(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_99(11);
				}
				else
				{
					sVar0 = func_99(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_98(21);
				}
				else
				{
					sVar0 = func_98(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(11);
			}
			else
			{
				sVar0 = func_98(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_99(22);
					}
					else
					{
						sVar0 = func_99(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_99(12);
				}
				else
				{
					sVar0 = func_99(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_98(22);
				}
				else
				{
					sVar0 = func_98(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(12);
			}
			else
			{
				sVar0 = func_98(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_99(3);
				}
				else
				{
					sVar0 = func_99(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_98(3);
			}
			else
			{
				sVar0 = func_98(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_98(int iParam0)//Position - 0x2600
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_99(int iParam0)//Position - 0x27BC
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_100(int iParam0)//Position - 0x2979
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
				return 1;
				break;
			}
	}
	return 0;
}

bool func_101(bool bParam0, bool bParam1)//Position - 0x2A82
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4;
		}
	}
	return bVar0;
}

char* func_102(int iParam0, bool bParam1, int iParam2)//Position - 0x2AB1
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (func_100(iVar0))
			{
				if ((!func_101(0, 1) || iParam2) && !bParam1)
				{
					return func_106();
				}
				else
				{
					return func_105();
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("vstr"))
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_101(0, 1) || iParam2) && !bParam1)
	{
		return func_104();
	}
	return func_103();
}

char* func_103()//Position - 0x2B4B
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_104()//Position - 0x2B57
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_105()//Position - 0x2B63
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_106()//Position - 0x2B6F
{
	return "mini@prostitutes@sexlow_veh";
}

int func_107()//Position - 0x2B7B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	var uVar10;
	struct<3> Var11;
	float fVar14;
	int iVar15;
	
	fVar6 = 25f;
	func_66(&Var7, &uVar10, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var3, &Var11, 3f, 0f))
		{
			fVar14 = SYSTEM::VDIST(Var3, Var11);
			if (fVar14 <= 10f)
			{
				return 0;
			}
		}
		if (SYSTEM::VDIST(Var3, Local_306) < 20f || SYSTEM::VDIST(Var3, Var7) < 20f)
		{
			return 0;
		}
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		PED::GET_CLOSEST_PED(Var3, fVar6, true, true, &iVar0, false, false, -1);
		if (!iVar0 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Var3, fVar6, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
					{
						iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar15 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (!iVar15 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_108(char* sParam0)//Position - 0x2CED
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_109(char* sParam0)//Position - 0x2D03
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_110()//Position - 0x2D16
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_73 < 12 && iLocal_73 >= 2)
	{
		if (func_215(3000))
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			iLocal_73 = 12;
		}
	}
	if (!bLocal_69 && iLocal_73 >= 5)
	{
		iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blimp2"))
			{
				bLocal_69 = false;
			}
			else if (VEHICLE::IS_BIG_VEHICLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) && uLocal_74[0] == 5)
			{
				bLocal_69 = func_212(&uLocal_68, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_211(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
			{
				bLocal_69 = func_212(&uLocal_68, Local_321, 1, fLocal_325);
			}
			else
			{
				bLocal_69 = func_212(&uLocal_68, Local_306, 1, fLocal_325);
			}
		}
	}
	if (iLocal_73 > 0 && iLocal_73 < 13)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	switch (iLocal_73)
	{
		case 0:
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			func_88();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1);
			func_31(56, 1, 0);
			if (!func_270(uLocal_331, 131072))
			{
				func_28(&uLocal_331, 131072);
			}
			if (!func_270(uLocal_331, 256))
			{
				func_210();
				func_28(&uLocal_331, 256);
			}
			if (!func_270(uLocal_331, 32768))
			{
				STREAMING::REQUEST_ANIM_DICT(func_209());
				func_28(&uLocal_331, 32768);
			}
			if (!func_270(uLocal_331, 256))
			{
				STREAMING::REQUEST_ANIM_DICT(func_208());
				func_28(&uLocal_331, 256);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_338 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_207(PLAYER::PLAYER_PED_ID(), iLocal_338);
				iLocal_73 = 1;
			}
			else
			{
				func_59();
				func_205(PLAYER::PLAYER_PED_ID(), Local_300);
				func_205(iLocal_272[0], Local_303);
				iLocal_73 = 2;
			}
			func_203();
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_338, false))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_338, true), Local_306) < 2f)
				{
					func_59();
					func_205(PLAYER::PLAYER_PED_ID(), Local_300);
					func_205(iLocal_272[0], Local_303);
					STREAMING::NEW_LOAD_SCENE_STOP();
					iLocal_73 = 2;
				}
				else if (MISC::GET_GAME_TIMER() >= 10000)
				{
					iLocal_73 = 13;
				}
			}
			break;
		
		case 2:
			if (!CAM::IS_CAM_RENDERING(iLocal_282[0]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_282[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_338, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_338) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_338, false, false);
					}
				}
				func_8(&iLocal_253);
				iLocal_73 = 3;
			}
			break;
		
		case 3:
			if (func_202(&iLocal_253) > 1f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_282[1], iLocal_282[0], 6000, 1, 1);
				func_201(&Local_287, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = CLOCK::GET_CLOCK_HOURS();
				iLocal_328 = iVar1 + 8;
				if (iLocal_328 > 23)
				{
					iLocal_328 = (iLocal_328 - 24);
				}
				Local_287.f_7 = iVar1;
				Local_287.f_8 = iLocal_328;
				func_2(&iLocal_253);
				iLocal_73 = 4;
			}
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_282[1]) && CAM::IS_CAM_RENDERING(iLocal_282[1]))
			{
				if (!func_270(uLocal_329, 512))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_338) && !ENTITY::IS_ENTITY_DEAD(iLocal_338, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_338, true);
					}
					func_198(PLAYER::PLAYER_PED_ID(), func_200());
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_197());
					func_174();
					func_28(&uLocal_329, 512);
				}
				else if (!func_270(uLocal_329, 2048))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_272[0], false))
					{
					}
					if (!func_173() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_272[0]))
					{
						func_174();
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_28(&uLocal_329, 2048);
						func_8(&iLocal_253);
						sLocal_275 = func_172();
						iLocal_73 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_202(&iLocal_253) > 1f)
			{
				if (func_147(iLocal_328, 0, sLocal_275, "", &Local_287, (func_202(&iLocal_253) * 0.2f), 0))
				{
					if (!func_173())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_338))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_338) != joaat("blimp2"))
							{
								MISC::CLEAR_AREA(Local_303, 20f, true, false, false, false);
							}
						}
						else
						{
							MISC::CLEAR_AREA(Local_303, 20f, true, false, false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_272[0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_272[0], false, false);
						}
						TASK::SET_PED_PATH_AVOID_FIRE(PLAYER::PLAYER_PED_ID(), false);
						func_8(&iLocal_253);
						iLocal_73 = 6;
					}
				}
			}
			break;
		
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			if (func_202(&iLocal_253) > 1.5f)
			{
				if (bLocal_69)
				{
					func_145(&uLocal_68);
				}
				func_8(&iLocal_253);
				iLocal_73 = 7;
			}
			break;
		
		case 7:
			if (!CAM::IS_CAM_RENDERING(iLocal_282[2]))
			{
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_282[2], iLocal_282[1], 6000, 1, 1);
				func_8(&iLocal_253);
				iLocal_73 = 8;
			}
			break;
		
		case 8:
			if (!func_270(uLocal_331, 262144))
			{
				if (func_202(&iLocal_253) >= 1.25f)
				{
					func_144();
				}
			}
			if (func_202(&iLocal_253) > 6f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_282[3], true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_338, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_338) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_338, true, false);
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_338, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_338, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_338, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_338);
				}
				func_8(&iLocal_253);
				iLocal_73 = 10;
			}
			break;
		
		case 10:
			if (func_202(&iLocal_253) > 2f)
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				iLocal_73 = 13;
			}
			break;
		
		case 12:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (!func_270(uLocal_331, 262144))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Local_312, fLocal_324, false, true, true);
					func_144();
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_338, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_338) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_338, true, false);
					}
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_338, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_338, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_338, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_338, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_338);
				}
				func_8(&iLocal_253);
				iLocal_73 = 13;
			}
			break;
		
		case 13:
			if (!CAM::IS_SCREEN_FADING_OUT() && func_202(&iLocal_253) >= 1f)
			{
				func_13(1, 1, 0);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0, 0);
				PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 30, true, 0);
				if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), func_84(0)))
				{
					func_143();
				}
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_306 - Vector(3f, 3f, 3f), Local_306 + Vector(3f, 3f, 3f), 15f, 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_338, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_338, true, true);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_338) != joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_338, Local_306, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_338, fLocal_325);
						if (VEHICLE::IS_BIG_VEHICLE(iLocal_338) && uLocal_74[0] == 5)
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_338, -865f, 516.3f, 90f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_338, 15f);
						}
						else if (func_211(iLocal_338))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_338, Local_321, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_338, fLocal_326);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_338, 5f);
					}
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					func_201(&Local_287, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					CLOCK::ADD_TO_CLOCK_TIME(8, 0, 0);
					func_141(SYSTEM::TO_FLOAT(8));
					CAM::DO_SCREEN_FADE_IN(2000);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_201(&Local_287, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_272[0]))
				{
					PED::DELETE_PED(&(iLocal_272[0]));
				}
				if (!func_140(uLocal_74[0], -1))
				{
					if (uLocal_74[0] == 5)
					{
						func_69("SCLUB_PHON_HELP_ALT" /* GXT: ~a~' number has been added to your phone. */, uLocal_74[0], 0);
					}
					else
					{
						func_69("SCLUB_PHON_HELP" /* GXT: ~a~'s number has been added to your phone. */, uLocal_74[0], 0);
					}
					func_121(uLocal_74[0], 1, -1);
					SYSTEM::WAIT(4000);
				}
				func_119(uLocal_74[0]);
				iVar2 = func_118(uLocal_74[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_117(uLocal_74[0]);
					iVar4 = func_116(iVar2);
					func_111(joaat("TEXT_SEXT"), iVar3, iVar4, 3, func_115(), func_114(uLocal_74[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_40();
			}
			break;
	}
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x35D6
{
	struct<14> Var0;
	
	if (func_54(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (bParam5 < 3)
	{
		if (BitTest(iParam4, bParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_113969.f_7691.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_113(iParam3);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = bParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_113969.f_7691.f_651[Global_113969.f_7691.f_764 /*14*/] = { Var0 };
		Global_113969.f_7691.f_764++;
		func_112(0);
		func_112(1);
		func_112(2);
		return 1;
	}
	return 0;
}

void func_112(bool bParam0)//Position - 0x3711
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_82(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_136)
	{
		if (BitTest(Global_113969.f_7691[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113969.f_7691[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113969.f_7691[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113969.f_7691.f_764)
	{
		if (BitTest(Global_113969.f_7691.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113969.f_7691.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113969.f_7691.f_919[bParam0] = iVar1;
}

int func_113(int iParam0)//Position - 0x37CF
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_114(int iParam0)//Position - 0x3839
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_115()//Position - 0x38D6
{
	func_80();
	switch (Global_113969.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_116(int iParam0)//Position - 0x391C
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_117(int iParam0)//Position - 0x3956
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_118(int iParam0)//Position - 0x39B4
{
	return Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_119(int iParam0)//Position - 0x39D0
{
	if (func_118(iParam0) < 0)
	{
		func_120(iParam0, 0);
	}
	Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_120(int iParam0, int iParam1)//Position - 0x3A13
{
	Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_121(int iParam0, bool bParam1, int iParam2)//Position - 0x3A31
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_77();
	}
	if (func_139(iParam2) == 4)
	{
	}
	bVar0 = Global_113969.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_138(func_114(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_138(func_114(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_113969.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_137(iParam0, 0);
			func_131(func_114(iParam0), func_139(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2359296[func_130() /*5570*/].f_681.f_1273), iParam0);
					func_127(-60084924, 15, 0);
					break;
			}
			func_126(iVar1);
			func_125(iParam0, iVar1);
			Global_112962.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_122(func_114(iParam0), func_139(iParam2));
	}
}

void func_122(bool bParam0, int iParam1)//Position - 0x3B5A
{
	int iVar0;
	
	if (Global_118[bParam0 /*10*/].f_8 != 181)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_124(bParam0, iVar0, 0);
			func_123(bParam0, iVar0, 0);
		}
	}
}

void func_123(int iParam0, int iParam1, int iParam2)//Position - 0x3B8F
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_124(int iParam0, int iParam1, int iParam2)//Position - 0x3BD4
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_125(int iParam0, int iParam1)//Position - 0x3C19
{
	if (iParam1 > -1)
	{
		Global_112962.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_112962.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_126(int iParam0)//Position - 0x3C56
{
	if (iParam0 != -1)
	{
		Global_112962.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_112962.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_127(int iParam0, int iParam1, int iParam2)//Position - 0x3C8D
{
	int iVar0;
	
	if (func_129(iParam1, iParam2))
	{
		iVar0 = func_128();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_128()//Position - 0x3CBA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_129(int iParam0, var uParam1)//Position - 0x3CEF
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_130()//Position - 0x3D75
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_131(bool bParam0, int iParam1, bool bParam2)//Position - 0x3D82
{
	int iVar0;
	
	Global_9486 = bParam0;
	if (Global_118[bParam0 /*10*/].f_8 != 181)
	{
		func_136();
		if (iParam1 == 4)
		{
			func_124(bParam0, 0, 1);
			func_124(bParam0, 1, 1);
			func_124(bParam0, 2, 1);
			func_123(bParam0, 0, 1);
			func_123(bParam0, 1, 1);
			func_123(bParam0, 2, 1);
		}
		else
		{
			if (func_135(bParam0, iParam1) == 1 && func_134(bParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_124(bParam0, iVar0, 1);
			func_123(bParam0, iVar0, 1);
			if (bParam0 == 172 && !BitTest(Global_2738934.f_6969, 4))
			{
				bParam2 = false;
			}
			if (bParam0 == 171 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
			if (bParam0 == 173 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (iParam1 != 4)
				{
					if (Global_20930 != iParam1)
					{
						Global_9459[iParam1 /*4*/] = { func_133(bParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = bParam0;
					}
					else if (bParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_133(bParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_132();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_133(bParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_132();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_133(bParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_132();
			}
		}
	}
}

void func_132()//Position - 0x3F00
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_9486 /*29*/].f_7)), 64);
	if (Global_9505 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_9410[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_9410[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8800, 0);
}

struct<4> func_133(int iParam0)//Position - 0x3F7B
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_134(int iParam0, int iParam1)//Position - 0x3F8E
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

int func_135(int iParam0, int iParam1)//Position - 0x3FB8
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

void func_136()//Position - 0x3FE2
{
	if (func_81(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_79();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

void func_137(int iParam0, int iParam1)//Position - 0x4087
{
	Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_138(bool bParam0, int iParam1)//Position - 0x40A5
{
	if (func_135(bParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)//Position - 0x40C1
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_140(int iParam0, int iParam1)//Position - 0x411D
{
	if (iParam1 < 0)
	{
		iParam1 = func_77();
	}
	return Global_113969.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_141(float fParam0)//Position - 0x4143
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_113969.f_18106.f_175[iVar0 /*19*/].f_5)))
		{
			func_142(&(Global_113969.f_18106.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_113969.f_18106.f_362[iVar1 /*3*/])))
		{
			func_142(&(Global_113969.f_18106.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_142(int* iParam0, float fParam1)//Position - 0x41D4
{
	if (func_10(iParam0))
	{
		func_9(iParam0, (func_4(iParam0) + fParam1));
	}
}

void func_143()//Position - 0x41F7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_97975[iVar0] = Global_97975[iVar0 + 1];
		}
		else
		{
			Global_97975[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_144()//Position - 0x4238
{
	int iVar0;
	int iVar1;
	
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_274))
	{
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 50000);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_312, 1f, -1, 0.25f, 0, fLocal_324);
		if (iVar0 < 15000)
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_274, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_274, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		else
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_274, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		func_28(&uLocal_331, 262144);
	}
}

void func_145(var uParam0)//Position - 0x430E
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_146(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
		}
	}
}

int func_146(int iParam0)//Position - 0x4345
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

int func_147(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)//Position - 0x4388
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_171();
			iVar4 = func_171();
			func_170(&iVar4, iParam0);
			func_169(&iVar4, iParam1);
			func_168(&iVar4, 0);
			if (func_166(*uParam4, iVar4))
			{
				func_161(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_158(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_141((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
			func_157();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_156();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (MISC::GET_HASH_KEY(sParam2) != 0)
					{
						MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, 1f);
					}
					if (MISC::GET_HASH_KEY(sParam3) != 0)
					{
						MISC::UNLOAD_ALL_CLOUD_HATS();
						MISC::LOAD_CLOUD_HAT(sParam3, 0f);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_161(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_155(iVar4), func_154(iVar4), func_153(iVar4));
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_152(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_161(&iVar4, iVar3, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_155(iVar4), func_154(iVar4), func_153(iVar4));
			if (func_151(iVar4) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(func_151(iVar4), func_150(iVar4), func_148(iVar4));
			}
			func_259();
			GRAPHICS::RESET_ADAPTATION(6);
			break;
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x4586
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_149(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_149(bool bParam0, int iParam1, int iParam2)//Position - 0x45A8
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_150(int iParam0)//Position - 0x45BF
{
	return iParam0 & 15;
}

int func_151(int iParam0)//Position - 0x45CC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_152(float fParam0, float fParam1, float fParam2)//Position - 0x45DE
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

int func_153(int iParam0)//Position - 0x4605
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_154(int iParam0)//Position - 0x4618
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_155(int iParam0)//Position - 0x462B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_156()//Position - 0x463E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_113969.f_14144[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_157()//Position - 0x466A
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return 1;
}

void func_158(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x46B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_166(iParam0, iParam1))
	{
		iVar0 = func_150(iParam1);
		iVar1 = func_148(iParam0);
		iVar2 = (func_148(iParam0) - func_148(iParam1));
		iVar3 = (func_150(iParam0) - func_150(iParam1));
		iVar4 = (func_151(iParam0) - func_151(iParam1));
		iVar5 = (func_155(iParam0) - func_155(iParam1));
		iVar6 = (func_154(iParam0) - func_154(iParam1));
		iVar7 = (func_153(iParam0) - func_153(iParam1));
	}
	else
	{
		iVar0 = func_150(iParam0);
		iVar1 = func_148(iParam1);
		iVar2 = (func_148(iParam1) - func_148(iParam0));
		iVar3 = (func_150(iParam1) - func_150(iParam0));
		iVar4 = (func_151(iParam1) - func_151(iParam0));
		iVar5 = (func_155(iParam1) - func_155(iParam0));
		iVar6 = (func_154(iParam1) - func_154(iParam0));
		iVar7 = (func_153(iParam1) - func_153(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_160(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_159(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_159(float fParam0, float fParam1, float fParam2)//Position - 0x48B9
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_160(int iParam0, int iParam1)//Position - 0x48FB
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

void func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x499D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_148(*iParam0);
	iVar1 = func_150(*iParam0);
	iVar2 = func_151(*iParam0);
	iVar3 = func_155(*iParam0);
	iVar4 = func_154(*iParam0);
	iVar5 = func_153(*iParam0);
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
	iVar6 = func_160(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_160(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_162(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4B1F
{
	func_168(uParam0, iParam1);
	func_169(uParam0, iParam2);
	func_170(uParam0, iParam3);
	func_165(uParam0, iParam5);
	func_164(uParam0, iParam4);
	func_163(uParam0, iParam6);
}

void func_163(var uParam0, int iParam1)//Position - 0x4B57
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

void func_164(var uParam0, int iParam1)//Position - 0x4BDD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_150(*uParam0);
	iVar1 = func_148(*uParam0);
	if (iParam1 < 1 || iParam1 > func_160(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_165(var uParam0, int iParam1)//Position - 0x4C2E
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_166(int iParam0, int iParam1)//Position - 0x4C61
{
	int iVar0;
	int iVar1;
	
	if (!func_167(iParam1) || !func_167(iParam0))
	{
		return 1;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_155(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_154(iParam0);
	iVar1 = func_154(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_153(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0)//Position - 0x4D6D
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
	iVar0 = func_153(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_154(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_155(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_148(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_150(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_151(iParam0);
	if (iVar5 < 1 || iVar5 > func_160(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_168(int iParam0, int iParam1)//Position - 0x4E49
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_169(int iParam0, int iParam1)//Position - 0x4E85
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_170(int iParam0, int iParam1)//Position - 0x4EC0
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

int func_171()//Position - 0x4EFA
{
	var uVar0;
	
	func_168(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_169(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_170(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_164(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_165(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_163(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

char* func_172()//Position - 0x4F40
{
	char* sVar0;
	
	switch (uLocal_74[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_173()//Position - 0x4FB7
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_174()//Position - 0x4FD9
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_272[0], false))
	{
		if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
		{
			func_195(&uLocal_79, 1, 0, func_196(uLocal_74[0]), 0, 1);
			func_177("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_175(iLocal_272[0], "SEX_ORAL", 10);
		}
	}
}

void func_175(int iParam0, char* sParam1, int iParam2)//Position - 0x503B
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_176(iParam2), 1);
}

int func_176(int iParam0)//Position - 0x5052
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

int func_177(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x5247
{
	struct<6> Var0;
	char[] cVar6[8];
	
	if (func_194())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_193(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_192(Var0) };
		}
		if (bParam3)
		{
			cVar6 = "SCAUD";
		}
		else
		{
			cVar6 = "SHAUD";
		}
		if (func_178(&uLocal_79, cVar6, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_178(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x52A2
{
	func_191(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_179(sParam2, iParam3, 0);
}

int func_179(char* sParam0, int iParam1, bool bParam2)//Position - 0x52F0
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_190();
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
		if (func_189(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_188();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
			if (bParam2)
			{
				func_136();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_187())
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
				if (!Global_79389)
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
			if (func_24())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_186();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_185();
		func_180();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_190();
	}
	return 0;
}

void func_180()//Position - 0x55BE
{
	if (!func_181())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_181()//Position - 0x55F5
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_184())
	{
		return 0;
	}
	if (func_182(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_182(int iParam0)//Position - 0x5658
{
	return func_183(iParam0, 20);
}

var func_183(int iParam0, int iParam1)//Position - 0x5668
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_184()//Position - 0x5680
{
	return -1;
}

void func_185()//Position - 0x5689
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
}

void func_186()//Position - 0x56BA
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	MISC::CLEAR_BIT(&Global_8801, 16);
}

int func_187()//Position - 0x574F
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
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

void func_188()//Position - 0x57E8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_189(int iParam0, int iParam1)//Position - 0x583F
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

void func_190()//Position - 0x5877
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

void func_191(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x58CE
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

struct<6> func_192(char[24] cParam0)//Position - 0x5924
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_74[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_193(char* sParam0, bool bParam1)//Position - 0x5945
{
	StringConCat(sParam0, "_", 24);
	if (func_79() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_79() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_79() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_192(*sParam0) };
	}
}

int func_194()//Position - 0x599C
{
	if ((HUD::IS_MESSAGE_BEING_DISPLAYED() || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) || Global_22286 != 0)
	{
		return 0;
	}
	return 1;
}

void func_195(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x59C5
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
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

char* func_196(int iParam0)//Position - 0x5A60
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah" /* GXT: Cheetah */;
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus" /* GXT: Infernus */;
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_197()//Position - 0x5B13
{
	switch (uLocal_74[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_198(int iParam0, struct<3> Param1)//Position - 0x5B8C
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0, false, false))
	{
		Param1.f_2 = uVar0;
	}
	if (func_199(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
	}
	return Param1;
}

bool func_199(int iParam0)//Position - 0x5BD2
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

Vector3 func_200()//Position - 0x5BF0
{
	switch (uLocal_74[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.1072f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.7926f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_201(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5CA7
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(true);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			}
			CAM::DESTROY_CAM(uParam0->f_4, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0, 0, 0);
	func_156();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113969.f_32753.f_4801 != -15)
		{
			Global_113969.f_32753.f_4801 = func_171();
		}
	}
}

float func_202(int* iParam0)//Position - 0x5E1B
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_203()//Position - 0x5E54
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14[4];
	var uVar27[4];
	
	func_204(&Var1, &Var14, &uVar27);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_282[iVar0]))
		{
			iLocal_282[iVar0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var1[iVar0 /*3*/], Var14[iVar0 /*3*/], uVar27[iVar0], false, 2);
			CAM::SHAKE_CAM(iLocal_282[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_287.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
	CAM::ADD_CAM_SPLINE_NODE(Local_287.f_4, Var1[0 /*3*/], Var14[0 /*3*/], 6000, 3, 2);
	CAM::ADD_CAM_SPLINE_NODE(Local_287.f_4, Var1[1 /*3*/], Var14[1 /*3*/], 6000, 3, 2);
	CAM::SET_CAM_FOV(Local_287.f_4, uVar27[0]);
}

void func_204(var uParam0, var uParam1, var uParam2)//Position - 0x5F26
{
	switch (uLocal_74[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.5271f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.18987f, -1885.8654f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.13081f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.2922f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.3278f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.5049f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.1932f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.67564f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.2499f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.23572f, 106.94099f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.97023f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.61206f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.906235f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.6459f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.6459f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.639044f, -1579.7404f, 30.824232f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.330508f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.0903f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.6306f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.9038f, 5157.8184f, 20.579899f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.448088f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.3682f, 5171.7715f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_205(int iParam0, struct<3> Param1)//Position - 0x645A
{
	float fVar0;
	float fVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(iParam0, true);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_337);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_337);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16777216);
			}
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), Local_300);
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), Local_303);
				if (fVar1 < fVar0)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_272[0], 0);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_206()))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_206(), 0, 552, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_300, 1f, -1, 0.25f, 64, 40000f);
				}
			}
			if (iParam0 != PLAYER::PLAYER_PED_ID())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_206()))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_206(), 0, 546, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, 1f, -1, 0.25f, 1, 40000f);
				}
				if (func_26(iParam0, Param1, 1) > 5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0f, false, false, false);
				}
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_337);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_337);
		}
	}
}

char* func_206()//Position - 0x6628
{
	char* sVar0;
	
	if (uLocal_74[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_207(int iParam0, int iParam1)//Position - 0x6641
{
	if (!PED::IS_PED_INJURED(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		TASK::TASK_VEHICLE_PARK(iParam0, iParam1, Local_306, fLocal_325, 3, 10f, false);
	}
}

char* func_208()//Position - 0x6677
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_209()//Position - 0x6683
{
	if (func_79() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_79() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_79() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_210()//Position - 0x66C2
{
	sLocal_274 = "move_p_m_one_idles@generic";
	STREAMING::REQUEST_ANIM_DICT(sLocal_274);
}

int func_211(int iParam0)//Position - 0x66D8
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0, struct<3> Param1, bool bParam4, float fParam5)//Position - 0x67C5
{
	if (func_214(uParam0))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(*uParam0);
		if (!func_213(Param1))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, Param1, true, false, false, true);
			if (bParam4)
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
		}
		return 1;
	}
	return 0;
}

int func_213(struct<3> Param0)//Position - 0x6818
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_214(var uParam0)//Position - 0x6842
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_146(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_61, false, true, 0))
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

int func_215(int iParam0)//Position - 0x68B4
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_29) > iParam0)
		{
			Global_28 = MISC::GET_GAME_TIMER();
		}
		Global_29 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			if (func_216())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_216()//Position - 0x68FE
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

void func_217(bool bParam0)//Position - 0x6930
{
	struct<4> Var0;
	float fVar4;
	
	func_67();
	if (ENTITY::IS_ENTITY_DEAD(iLocal_272[0], false))
	{
		return;
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_306 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_306 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, true);
	fVar4 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_272[0], true));
	if (iLocal_76 != 9)
	{
		if (((fVar4 >= (200f / 2f) && func_194()) && !func_270(uLocal_331, 2)) || func_257(iLocal_272[0], 0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_279))
			{
				HUD::REMOVE_BLIP(&iLocal_279);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_278))
			{
				HUD::REMOVE_BLIP(&iLocal_278);
			}
			func_254(0);
			func_86("SCLUB_HOME_R" /* GXT: Return to ~b~~a~.~s~ */, uLocal_74[0]);
			iLocal_76 = 9;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_76 != 8)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_279))
			{
				HUD::REMOVE_BLIP(&iLocal_279);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_278))
			{
				HUD::REMOVE_BLIP(&iLocal_278);
			}
			iLocal_76 = 8;
		}
	}
	if (func_243(iLocal_272[0], &uLocal_265, &iLocal_262))
	{
		func_68(4);
	}
	if (iLocal_76 <= 1)
	{
		func_262(1);
	}
	switch (iLocal_76)
	{
		case 0:
			iLocal_77 = 0;
			if (func_194())
			{
				if (!func_270(uLocal_331, 1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_272[0], true);
					func_86("SCLUB_HOME_MEET" /* GXT: Meet ~b~~a~~s~ behind the club. */, uLocal_74[0]);
					func_254(0);
					func_28(&uLocal_331, 1);
				}
				iLocal_76 = 1;
			}
			break;
		
		case 1:
			iLocal_77 = 1;
			Var0 = { func_73(uLocal_74[0]) };
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_338 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				iLocal_332 = ENTITY::GET_ENTITY_HEALTH(iLocal_338);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_272[0], true), 3f, 3f, 3f, false, true, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_338, false) && func_242(iLocal_338, iLocal_272[0], 1) <= 10f))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_272[0], false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_338) && (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_338) < 1 || (!bParam0 && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_338)))))
				{
					if (!func_72("SCLUB_SMALL_CAR" /* GXT: Get a larger vehicle to take ~a~ home. */, &Var0))
					{
						func_69("SCLUB_SMALL_CAR" /* GXT: Get a larger vehicle to take ~a~ home. */, uLocal_74[0], 0);
						func_175(iLocal_272[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					HUD::CLEAR_HELP(true);
					TASK::CLEAR_PED_TASKS(iLocal_272[0]);
					func_240();
					if (!func_270(uLocal_331, 2))
					{
						func_28(&uLocal_331, 2);
					}
					func_239();
					func_88();
					func_231(39, 1);
					func_231(40, 1);
					func_231(41, 1);
					func_231(42, 1);
					func_231(43, 1);
					func_231(44, 1);
					iLocal_76 = 2;
				}
			}
			else if (func_72("SCLUB_SMALL_CAR" /* GXT: Get a larger vehicle to take ~a~ home. */, &Var0))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		
		case 2:
			iLocal_77 = 2;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_272[0], false))
				{
					iLocal_76 = 3;
				}
			}
			else
			{
				func_175(iLocal_272[0], "NEED_A_VEHICLE", 10);
				iLocal_76 = 3;
			}
			break;
		
		case 3:
			iLocal_77 = 3;
			func_228();
			if (!func_173())
			{
				if (func_194())
				{
					PATHFIND::SET_ROADS_IN_AREA(Local_306 - Vector(3f, 3f, 3f), Local_306 + Vector(3f, 3f, 3f), false, true);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_306 - Vector(3f, 3f, 3f), Local_306 + Vector(3f, 3f, 3f), false, true);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_306, 10f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_306, 10f, 0);
					iLocal_299 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_306 - Vector(35f, 35f, 35f), Local_306 + Vector(35f, 35f, 35f), false, true, true, true, 1);
					func_8(&iLocal_244);
					if (bParam0)
					{
						func_93(1);
						func_227();
					}
					else
					{
						iLocal_72 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_77 = 4;
			func_224(fVar4, Local_309);
			func_218();
			if ((func_4(&iLocal_256) > 45f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_318) > (100f * 100f)) && func_26(PLAYER::PLAYER_PED_ID(), Local_309, 1) > 100f)
			{
				if (uLocal_74[0] == 8)
				{
					func_177("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_175(iLocal_272[0], "GENERIC_FUCK_YOU", 10);
				}
				func_68(3);
			}
			else if (func_257(iLocal_272[0], 1))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_279))
				{
					HUD::REMOVE_BLIP(&iLocal_279);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_278))
				{
					HUD::REMOVE_BLIP(&iLocal_278);
				}
				func_254(0);
				func_86("SCLUB_HOME_R" /* GXT: Return to ~b~~a~.~s~ */, uLocal_74[0]);
				iLocal_76 = 9;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_306, 3f, 3f, 2f, true, true, 2) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_303, 5f, 5f, 2f, true, true, 1))
			{
				if (func_37(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			else if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				func_227();
			}
			break;
		
		case 5:
			iLocal_77 = 5;
			func_224(fVar4, Local_306);
			func_218();
			func_240();
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_306, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_76 = 6;
			}
			else
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_227();
				}
				else
				{
					func_63(Local_306);
				}
				if (func_109("SCLUB_HOME_WALK" /* GXT: Walk her to the door. */))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (func_60(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_59();
						func_205(iLocal_272[0], Local_303);
						if (uLocal_74[0] == 9 || uLocal_74[0] == 8)
						{
							func_177("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_177("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_76 = 7;
					}
				}
			}
			else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_272[0]);
				func_227();
				HUD::CLEAR_HELP(true);
			}
			break;
		
		case 7:
			iLocal_77 = 7;
			if ((!func_173() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_270(uLocal_331, 2048))
			{
				Var0 = { func_73(uLocal_74[0]) };
				func_87("SCLUB_FOLLOW_H" /* GXT: Follow ~b~~a~~s~ to her home. */, &Var0, 7500, 1);
				func_88();
				func_254(0);
				func_28(&uLocal_331, 2048);
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_309, 5f, 5f, 2f, false, true, 1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_303, 5f, 5f, 2f, false, true, 1)) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (func_37(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_270(uLocal_329, 4096) && !func_173()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_272[0]))
			{
				if (iLocal_77 > 1 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_272[0], true)) < (3f * 3f))
				{
					func_175(iLocal_272[0], "GENERIC_FRIGHTENED_MED", 10);
					func_28(&uLocal_329, 4096);
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_76 = iLocal_77;
			}
			break;
		
		case 9:
			if (fVar4 > 200f)
			{
				func_68(1);
			}
			else if (fVar4 <= (200f / 2f) && !func_257(iLocal_272[0], 1))
			{
				HUD::CLEAR_PRINTS();
				iLocal_76 = iLocal_77;
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_227();
				}
			}
			break;
	}
}

void func_218()//Position - 0x70C4
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_270(uLocal_331, 16))
	{
		if (func_219())
		{
			func_28(&uLocal_331, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_102(iLocal_272[0], 0, 0);
	if (!func_270(uLocal_331, 8))
	{
		if (!func_270(uLocal_331, 4))
		{
			if (!func_270(uLocal_329, 256))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					func_177("SC_BJ", 0, 0, 0);
				}
				func_28(&uLocal_329, 256);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(sVar0);
				func_28(&uLocal_331, 4);
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			func_96(iLocal_272[0], 1, 1, -1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_272[0], true);
			func_7(&iLocal_253);
			func_28(&uLocal_331, 8);
		}
	}
	else if (func_270(uLocal_331, 4))
	{
		iVar1 = 0;
		bVar2 = ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_272[0], sVar0, func_97(4, 1, 1, func_100(iLocal_338)), 3);
		bVar3 = PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID());
		bVar4 = TASK::GET_SCRIPT_TASK_STATUS(iLocal_272[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7;
		bVar5 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
		bVar6 = false;
		if (bVar5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				bVar6 = (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 5f);
			}
		}
		if ((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_4(&iLocal_253) > 35f) || SYSTEM::VDIST(Local_306, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				TASK::TASK_PLAY_ANIM(iLocal_272[0], sVar0, func_97(4, 1, 1, func_100(iLocal_338)), 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (bVar3)
			{
				iLocal_333 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_259();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) - SYSTEM::CEIL((IntToFloat(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) * 0.1f))), 0, 0);
					func_175(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_175(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", 10);
				}
				func_28(&uLocal_329, 128);
			}
			STREAMING::REMOVE_ANIM_DICT(sVar0);
			func_75(&uLocal_331, 4);
		}
		if (!func_270(uLocal_329, 64))
		{
			if (func_4(&iLocal_253) > 10f)
			{
				func_175(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", 10);
				func_175(iLocal_272[0], "SEX_ORAL", 10);
				func_28(&uLocal_329, 64);
			}
		}
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		func_259();
	}
}

int func_219()//Position - 0x73B1
{
	struct<3> Var0;
	var uVar3;
	
	if (!func_194())
	{
		return 0;
	}
	func_66(&Var0, &uVar3, 0);
	if (((SYSTEM::VDIST(Local_306, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (75f * 2f) && SYSTEM::VDIST(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (75f / 2f)) && func_118(uLocal_74[0]) > 1) && func_220())
	{
		return 1;
	}
	return 0;
}

int func_220()//Position - 0x7427
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_223(iVar1, 0) && func_221(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_221(int iParam0)//Position - 0x7477
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (func_222(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			return 0;
		}
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
						iVar2 = MISC::GET_HASH_KEY(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == MISC::GET_HASH_KEY("SABRE_CAG" /* GXT: Stunt Cage */))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("peyote2"):
				if ((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
				{
					return 0;
				}
				break;
			
			case joaat("peyote3"):
				if (((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("coquette4"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("coquette5"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("zorrusso"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == -1)
				{
					return 0;
				}
				break;
			
			case joaat("manana2"):
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("rt3000"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == -1 || VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == 3)
				{
					return 0;
				}
				break;
			
			case joaat("entity3"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == 0)
				{
					return 0;
				}
				break;
		}
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_STANDARD"):
			case joaat("LAYOUT_STD_EXITFIXUP"):
			case joaat("LAYOUT_STD_HABANERO"):
			case joaat("LAYOUT_STD_STRETCH"):
			case joaat("LAYOUT_STD_HIGHWINDOW"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_STD_LOWROOF"):
			case joaat("LAYOUT_STD_STRATUM"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
			case joaat("LAYOUT_STD_HUNTLEY"):
			case joaat("LAYOUT_STD_WARRENER"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_STD_KURUMA"):
			case joaat("LAYOUT_STD_BLISTA2"):
			case joaat("LAYOUT_STD_CHINO"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_STD_LOWRIDER"):
			case joaat("LAYOUT_STD_LOWRIDER_CHINO"):
			case joaat("LAYOUT_STD_LOWRIDER_SIDEDOOR"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_STD_BALLER4"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_STD_LOWRIDER2"):
			case joaat("LAYOUT_STD_LOWRIDER2_SIDEDOOR"):
			case joaat("LAYOUT_STD_LOWRIDER2_SLAMVAN"):
			case joaat("LAYOUT_STD_WINDSOR2"):
			case joaat("LAYOUT_STD_XLS"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_STD_OMNIS"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_STD_NEON"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_RANGER_TOROS"):
			case joaat("LAYOUT_STD_DEVIANT"):
			case joaat("LAYOUT_STD_DRAFTER"):
			case joaat("LAYOUT_STD_DYNASTY"):
			case joaat("LAYOUT_STD_PARAGON"):
			case joaat("LAYOUT_STD_ZION3"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_RANGER_NOVAK"):
			case joaat("LAYOUT_RANGER_EVERON"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_RANGER_SEMINOLE2"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_STD_CYPHER"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_STANDARD_SULTAN3"):
			case joaat("LAYOUT_STD_WARRENER2"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_STANDARD_BUFFALO4"):
			case joaat("LAYOUT_STD_ASTRON"):
			case joaat("LAYOUT_STD_CINQUEMILA"):
			case joaat("LAYOUT_STD_DEITY"):
			case joaat("LAYOUT_STD_GRANGER2"):
			case joaat("LAYOUT_STD_I-WAGEN"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_STD_S95"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
			case joaat("LAYOUT_STD_RHINEHART"):
			case joaat("LAYOUT_STANDARD_SENTINEL4"):
			case joaat("LAYOUT_LOW_TORERO2"):
			case joaat("LAYOUT_STD_GREENWOOD"):
			case joaat("LAYOUT_LOW_ENTITY3"):
			case joaat("LAYOUT_STD_BOOR"):
			case joaat("LAYOUT_STD_TAHOMA"):
			case joaat("LAYOUT_STD_ISSI8"):
			case joaat("LAYOUT_STD_BRIGHAM"):
			case joaat("LAYOUT_STD_COUREUR"):
			case joaat("LAYOUT_STD_ALEUTIAN"):
			case joaat("LAYOUT_STD_BALLER8"):
			case joaat("LAYOUT_STD_IMPALER5"):
			case joaat("LAYOUT_STD_ASTEROPE2"):
			case joaat("LAYOUT_VAN_VIVANITE"):
			case joaat("LAYOUT_STD_CASTIGATOR"):
			case joaat("LAYOUT_STD_ENVISAGE"):
			case joaat("LAYOUT_STD_DOMINATOR10"):
			case 1433728330:
			case joaat("LAYOUT_LOW_EUROSX32"):
				return 1;
				break;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_RIPLEY") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("weevil")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("brioso2"))
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("brioso3"))
		{
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0)//Position - 0x7965
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

int func_223(int iParam0, bool bParam1)//Position - 0x79F5
{
	if ((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 0;
	}
	if (func_222(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("barrage")) || iParam0 == joaat("kamacho")) || iParam0 == joaat("gb200")) || iParam0 == joaat("fagaloa")) || iParam0 == joaat("tezeract")) || iParam0 == joaat("swinger")) || iParam0 == joaat("imperator")) || iParam0 == joaat("locust")) || iParam0 == joaat("schlagen")) || iParam0 == joaat("outlaw")) || iParam0 == joaat("comet7")) || iParam0 == joaat("youga4")) || iParam0 == joaat("sm722")) || iParam0 == joaat("broadway"))
	{
		return 0;
	}
	return 1;
}

void func_224(float fParam0, struct<3> Param1)//Position - 0x7BD8
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_270(uLocal_329, 262144))
	{
		if (func_226(iLocal_272[0]))
		{
			if (uLocal_74[0] == 8)
			{
				func_177("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_175(iLocal_272[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&iLocal_247);
			func_28(&uLocal_329, 262144);
		}
	}
	else if (func_4(&iLocal_247) > 10f)
	{
		func_75(&uLocal_329, 262144);
		func_8(&iLocal_247);
	}
	if ((fParam0 > 5f || !func_194()) || func_270(uLocal_331, 4))
	{
		return;
	}
	if (!func_270(uLocal_329, 1) && !func_270(uLocal_329, 128))
	{
		if (SYSTEM::VDIST(Param1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f)
		{
			if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
			{
				if (func_177("SC_NEAR", 0, 0, 0))
				{
					func_28(&uLocal_329, 1);
				}
			}
			else
			{
				func_28(&uLocal_329, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(Local_306, 5f, false, false, false, false, false, false, 0);
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (!func_270(uLocal_329, 16))
		{
			func_175(iLocal_272[0], "NEED_A_VEHICLE", 10);
			func_28(&uLocal_329, 16);
			func_8(&iLocal_244);
		}
		if (!func_270(uLocal_329, 4))
		{
			func_75(&uLocal_329, 4);
		}
		if (!func_270(uLocal_329, 8))
		{
			func_75(&uLocal_329, 8);
		}
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		fVar2 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&iLocal_250);
		}
		if (!func_270(uLocal_329, 4))
		{
			if (func_4(&iLocal_244) > 15f && func_4(&iLocal_250) > 5f)
			{
				func_175(iLocal_272[0], "DRIVEN_FAST", 10);
				func_28(&uLocal_329, 4);
				func_8(&iLocal_244);
			}
		}
		else if (func_4(&iLocal_244) < 5f)
		{
			func_75(&uLocal_329, 4);
			func_8(&iLocal_244);
		}
		if (!func_270(uLocal_329, 8))
		{
			if (func_4(&iLocal_244) > 15f && func_4(&iLocal_250) > 5f)
			{
				func_175(iLocal_272[0], "DRIVEN_SLOW", 10);
				func_28(&uLocal_329, 4);
				func_8(&iLocal_244);
			}
		}
		else if (func_4(&iLocal_244) < 5f)
		{
			func_75(&uLocal_329, 8);
			func_8(&iLocal_244);
		}
		if (!func_270(uLocal_329, 131072))
		{
			if (func_225(iLocal_272[0], &iLocal_332))
			{
				if (func_4(&iLocal_247) > 5f)
				{
					func_175(iLocal_272[0], "CRASH_GENERIC_DRIVEN", 10);
					func_28(&uLocal_329, 131072);
					func_8(&iLocal_244);
				}
			}
		}
		else if (func_4(&iLocal_247) > 5f)
		{
			func_75(&uLocal_329, 131072);
			func_8(&iLocal_247);
		}
		if (!func_270(uLocal_329, 65536))
		{
			if (func_4(&iLocal_244) > 30f || (func_4(&iLocal_244) > 10f && !func_270(uLocal_329, 32)))
			{
				func_175(iLocal_272[0], "BOOTY_FLIRT", 10);
				func_28(&uLocal_329, 32);
				func_28(&uLocal_329, 524288);
				func_8(&iLocal_244);
			}
			else if (func_270(uLocal_329, 524288))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_272[0]) && func_4(&iLocal_244) > 4f)
				{
					func_175(PLAYER::PLAYER_PED_ID(), "BOOTY_FLIRT_RESP", 10);
					func_75(&uLocal_329, 524288);
				}
			}
		}
	}
}

int func_225(int iParam0, int iParam1)//Position - 0x7F8E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iVar0))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0))
			{
				iVar1 = ENTITY::GET_ENTITY_HEALTH(iVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x7FE6
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(110 /*EVENT_SHOCKING_SEEN_CAR_STOLEN*/, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_227()//Position - 0x8027
{
	func_89();
	func_8(&iLocal_244);
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_278))
		{
			HUD::REMOVE_BLIP(&iLocal_278);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_279))
		{
			iLocal_279 = func_64(Local_309, 0);
		}
		func_8(&iLocal_256);
		Local_318 = { ENTITY::GET_ENTITY_COORDS(iLocal_272[0], true) };
		iLocal_76 = 4;
	}
	else
	{
		func_8(&iLocal_247);
		func_63(Local_306);
		iLocal_76 = 5;
	}
}

void func_228()//Position - 0x809C
{
	if (!func_270(uLocal_329, 1024))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_229(uLocal_74[0]))
			{
				if (!func_173())
				{
					func_175(iLocal_272[0], "NICE_CAR", 10);
					func_28(&uLocal_329, 1024);
				}
			}
		}
	}
}

int func_229(int iParam0)//Position - 0x80FB
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_230(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_230(int iParam0, int iParam1)//Position - 0x8130
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_231(int iParam0, bool bParam1)//Position - 0x839F
{
	if (bParam1)
	{
		if (!func_238(iParam0, 2, 1))
		{
			func_237(iParam0, 2, 1);
		}
	}
	else if (func_238(iParam0, 2, 1))
	{
		func_232(iParam0, 2, 1);
	}
}

void func_232(int iParam0, int iParam1, bool bParam2)//Position - 0x83D6
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_55() == 0)
		{
			iVar0 = func_235(func_236(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_233(func_236(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

void func_233(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8446
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_234(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_234(int iParam0, var uParam1)//Position - 0x8474
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_78(uParam1));
}

int func_235(int iParam0, int iParam1)//Position - 0x8489
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_234(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_236(int iParam0)//Position - 0x84B8
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
			return 12924;
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
		
		default:
			break;
	}
	return 14835;
}

void func_237(int iParam0, int iParam1, bool bParam2)//Position - 0x8860
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_55() == 0)
		{
			iVar0 = func_235(func_236(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_233(func_236(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_238(int iParam0, int iParam1, bool bParam2)//Position - 0x88D0
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_55() == 0)
		{
			return BitTest(func_235(func_236(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_239()//Position - 0x8930
{
	if (uLocal_74[0] == 8)
	{
		func_177("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_175(iLocal_272[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_240()//Position - 0x8961
{
	if (!PED::IS_PED_IN_GROUP(iLocal_272[0]) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_272[0], true)) < 10f)
	{
		PED::SET_PED_AS_GROUP_MEMBER(iLocal_272[0], func_241());
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_272[0], 0);
	}
}

int func_241()//Position - 0x89B3
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

float func_242(int iParam0, int iParam1, bool bParam2)//Position - 0x89C3
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

int func_243(int iParam0, var uParam1, int* iParam2)//Position - 0x8A21
{
	var uVar0;
	int iVar1;
	
	if (!func_10(iParam2))
	{
		func_7(iParam2);
	}
	if (func_4(iParam2) > 3f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		if (func_246(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_244(&uVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
				{
					if (!PED::DOES_RELATIONSHIP_GROUP_EXIST(iLocal_70))
					{
						PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_70);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_70);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_70);
					TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
			}
			func_8(iParam2);
			return 1;
		}
	}
	return 0;
}

void func_244(var uParam0)//Position - 0x8ADB
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_245(1);
			break;
		
		case 2:
			break;
	}
}

void func_245(bool bParam0)//Position - 0x8B0E
{
	Global_112962 = 0;
	Global_112962.f_1 = -1;
	Global_112962.f_2 = -1;
	if (bParam0)
	{
		func_126(-1);
	}
}

int func_246(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x8B33
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_270(*uParam2, 1))
		{
			if (func_253(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_270(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_270(*uParam2, 4))
		{
			if (func_251(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_270(*uParam2, 8))
		{
			if (func_250(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_270(*uParam2, 128);
		if (bParam4)
		{
			if (func_247(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_270(*uParam2, 16))
		{
			if (func_247(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_247(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8C5D
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_57)
		{
			iLocal_58 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_57 = true;
		}
		iLocal_59 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_60 = (iLocal_58 - iLocal_59);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_60) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_57)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_60) > 100f)
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
	if (func_249(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_248(iParam0, 1) < 1.5f)
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

float func_248(int iParam0, bool bParam1)//Position - 0x8E25
{
	return func_242(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

int func_249(int iParam0, int iParam1)//Position - 0x8E3D
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
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

int func_250(int iParam0, int iParam1, var uParam2)//Position - 0x8E92
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

int func_251(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x8EE0
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
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
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_252(iVar3))
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

int func_252(int iParam0)//Position - 0x9059
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
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_242(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)))
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

int func_253(int iParam0, var uParam1)//Position - 0x9127
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_248(iParam0, 1) < uParam1->f_2)
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

void func_254(int iParam0)//Position - 0x91AC
{
	struct<4> Var0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_280[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_280[iParam0]));
	}
	uLocal_280[iParam0] = func_255(iLocal_272[iParam0], 0, 145);
	Var0 = { func_73(uLocal_74[iParam0]) };
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_280[iParam0], &Var0);
}

int func_255(int iParam0, bool bParam1, int iParam2)//Position - 0x91FD
{
	int iVar0;
	
	iVar0 = func_256(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_256(int iParam0, bool bParam1, bool bParam2)//Position - 0x9247
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_65(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_65(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_65(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_257(int iParam0, int iParam1)//Position - 0x92EB
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	float fVar7;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PED::GET_PED_GROUP_INDEX(iParam0) == func_241())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(iParam0, iVar6, false) && SYSTEM::VDIST(Var0, Var3) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_270(uLocal_331, 2))
	{
		fVar7 = MISC::ABSF((Var0.f_2 - Var3.f_2));
		if (fVar7 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_258()//Position - 0x9392
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_272[0], false))
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			func_198(iLocal_272[0], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0f, 2f, 0f));
			iLocal_72 = 1;
			iLocal_73 = 0;
		}
	}
}

void func_259()//Position - 0x93E2
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_260();
}

void func_260()//Position - 0x93F2
{
	Global_23692.f_134 = 1;
}

int func_261(int iParam0, bool bParam1)//Position - 0x9400
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("CSB_Stripper_01");
		}
		else
		{
			return joaat("S_F_Y_Stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("CSB_Stripper_02");
		}
		else
		{
			return joaat("S_F_Y_Stripper_02");
		}
	}
	return 0;
}

void func_262(bool bParam0)//Position - 0x9448
{
	struct<8> Var0;
	
	if (!func_167(iLocal_71))
	{
		iLocal_71 = func_171();
		func_161(&iLocal_71, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_270(uLocal_331, 512))
		{
			if (func_269(iLocal_71) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_272[0]))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_74[0], 64);
					func_195(&uLocal_79, 1, 0, func_196(uLocal_74[0]), 0, 1);
					func_268(&uLocal_79, func_114(uLocal_74[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_266();
				}
				func_265(iLocal_272[0]);
				func_28(&uLocal_331, 512);
			}
		}
		else if (func_264())
		{
			func_75(&uLocal_331, 512);
		}
		else if ((!func_173() && func_263()) && !func_264())
		{
			func_245(1);
			func_68(2);
		}
	}
}

int func_263()//Position - 0x954D
{
	if (Global_22286 == 0)
	{
		return 1;
	}
	return 0;
}

int func_264()//Position - 0x9564
{
	if (Global_22335 == 1 || Global_23302 == 1)
	{
		return 1;
	}
	return 0;
}

void func_265(int iParam0)//Position - 0x9587
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(iParam0, true);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_337);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_337);
			TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_303, 1.5f, -1, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_337);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_337);
		}
	}
}

void func_266()//Position - 0x95F0
{
	int iVar0;
	
	if (func_267())
	{
		return;
	}
	iVar0 = func_117(uLocal_74[0]);
	func_111(joaat("TEXT_SEXT"), iVar0, 6, 3, func_115(), func_114(uLocal_74[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_267()//Position - 0x9631
{
	if (func_55() == 0)
	{
		return 1;
	}
	return 0;
}

int func_268(var uParam0, bool bParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x9646
{
	func_191(uParam0, bParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 1;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return func_179(sParam3, iParam4, bParam7);
}

bool func_269(int iParam0)//Position - 0x9694
{
	return func_166(func_171(), iParam0);
}

bool func_270(var uParam0, int iParam1)//Position - 0x96A6
{
	return (uParam0 && iParam1) != 0;
}

int func_271(var uParam0, bool bParam1)//Position - 0x96B5
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	char cVar5[64];
	struct<16> Var21;
	struct<8> Var37;
	
	func_299();
	func_66(&Var0, &fVar3, bParam1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fLocal_327 == -1f)
		{
			fLocal_327 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		}
		if (iLocal_330 == -1)
		{
			iLocal_330 = uParam0->f_3;
		}
		if (!func_270(uLocal_331, 32))
		{
			func_295(&uLocal_276, func_297((*uParam0)[0], 0));
			func_294(&uLocal_276);
			func_28(&uLocal_331, 32);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@stripper");
			STREAMING::REQUEST_ANIM_DICT("gestures@f@standing@casual");
			func_293();
			return 0;
		}
		else if ((!func_292(&uLocal_276) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@stripper")) || !func_291())
		{
			return 0;
		}
		if (bLocal_335)
		{
			if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				return 0;
			}
		}
		if (!func_270(uLocal_331, 1024))
		{
			uLocal_74[0] = (*uParam0)[0];
			iLocal_272[0] = PED::CREATE_PED(26, func_297((*uParam0)[0], 0), Var0, fVar3, true, true);
			func_285(iLocal_272[0], uLocal_74[0], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_272[iVar4], true);
			PED::SET_PED_KEEP_TASK(iLocal_272[0], true);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_272[0], true);
			func_281(iLocal_272[0]);
			TASK::TASK_PLAY_ANIM(iLocal_272[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0f, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_272[iVar4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_272[0], 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_272[0], func_196((*uParam0)[0]));
			func_195(&uLocal_79, 1, iLocal_272[0], func_196((*uParam0)[0]), 0, 1);
			func_28(&uLocal_331, 1024);
		}
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) > 100f)
		{
			if (func_194())
			{
				if (!func_270(uLocal_331, 1))
				{
					func_280(bParam1);
					func_254(0);
					func_28(&uLocal_331, 1);
				}
			}
			if (!func_270(uLocal_331, 64) && !func_270(uLocal_331, 512))
			{
				if (func_279(func_114((*uParam0)[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_79() == 2)
					{
						func_195(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_79() == 0)
					{
						func_195(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_79() == 1)
					{
						func_195(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_195(&uLocal_79, 3, 0, func_196((*uParam0)[0]), 0, 1);
					Var21 = { func_278() };
					func_273(&uLocal_79, func_114((*uParam0)[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_28(&uLocal_331, 64);
				}
				if (func_167(iLocal_71))
				{
					if (func_269(iLocal_71))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var37, "SC_CANCEL_", 64);
							StringIntConCat(&Var37, (*uParam0)[0], 64);
							func_195(&uLocal_79, 1, 0, func_196((*uParam0)[0]), 0, 1);
							func_268(&uLocal_79, func_114((*uParam0)[0]), "SHAUD", &Var37, 12, 0, 0, 1);
						}
						else
						{
							func_266();
						}
						func_28(&uLocal_331, 512);
					}
				}
			}
			else if (func_264())
			{
				func_75(&uLocal_331, 64);
				func_75(&uLocal_331, 512);
			}
			else if ((!func_173() && func_263()) && !func_264())
			{
				func_272((*uParam0)[0]);
				func_245(1);
				func_68(2);
			}
			if (!func_270(uLocal_331, 128))
			{
				if (!func_34(0))
				{
					func_69("SCLUB_HOME_C_H" /* GXT: To cancel the booty call, call ~a~ back. */, uLocal_74[0], 0);
					func_28(&uLocal_331, 128);
				}
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) > (fLocal_327 + (200f * 3f)))
			{
				func_68(1);
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) < fLocal_327)
			{
				fLocal_327 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_79() == 2)
	{
		func_195(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (func_79() == 0)
	{
		func_195(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_79() == 1)
	{
		func_195(&uLocal_79, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_272(int iParam0)//Position - 0x9B38
{
	if (Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_113969.f_243[func_77() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_273(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x9B97
{
	var uVar0;
	var uVar11;
	
	func_191(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_277();
	if (iParam8 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_275(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_274(&uVar0, &uVar11, iParam7, bParam11);
}

int func_274(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x9BF6
{
	int iVar0;
	
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam2 > Global_22288)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
				}
				else
				{
					func_190();
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
		if (func_189(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_188();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23282 = Global_23283;
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_21905.f_370 = Global_23275;
		Global_22282 = Global_22283;
		Global_22284 = Global_22285;
		if (Global_22544 == 0)
		{
			Global_22440[0 /*6*/] = { Global_22466[0 /*6*/] };
			Global_22440[1 /*6*/] = { Global_22466[1 /*6*/] };
			Global_22492[0 /*6*/] = { Global_22518[0 /*6*/] };
			Global_22492[1 /*6*/] = { Global_22518[1 /*6*/] };
			Global_22453[0 /*6*/] = { Global_22479[0 /*6*/] };
			Global_22453[1 /*6*/] = { Global_22479[1 /*6*/] };
			Global_22505[0 /*6*/] = { Global_22531[0 /*6*/] };
			Global_22505[1 /*6*/] = { Global_22531[1 /*6*/] };
		}
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
			if (bParam3)
			{
				func_136();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_187())
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
				if (!Global_79389)
				{
					if (Global_22544 == 0)
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
			}
			if (func_24())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
			}
			func_186();
			Global_22296 = bParam3;
		}
		Global_22288 = iParam2;
		if (Global_22282 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_22282)
			{
				StringCopy(&(Global_21905.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21905.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_21152 = 0;
		func_185();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_22288 || iParam2 == Global_22288)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_190();
	}
	return 0;
}

void func_275(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x9F61
{
	func_276(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_276(var uParam0)//Position - 0x9FD1
{
	Global_22283 = uParam0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
}

void func_277()//Position - 0x9FF7
{
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_22300 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
}

struct<16> func_278()//Position - 0xA030
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_74[0], 64);
	return Var0;
}

int func_279(int iParam0)//Position - 0xA04E
{
	if ((Global_23400 || Global_23399) || Global_23401)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		if (Global_20930.f_1 == 10)
		{
			if (Global_8115 == iParam0)
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
	return 0;
}

void func_280(bool bParam0)//Position - 0xA0B2
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_86("SCLUB_HOME_MEE4" /* GXT: Meet ~b~~a~~s~ at her home. */, uLocal_74[0]);
			}
			else
			{
				func_86("SCLUB_HOME_MEET" /* GXT: Meet ~b~~a~~s~ behind the club. */, uLocal_74[0]);
			}
			break;
		
		case 8:
			func_86("SCLUB_HOME_LIZ" /* GXT: Meet ~b~~a~~s~ at the college. */, uLocal_74[0]);
			break;
		
		case 9:
			func_86("SCLUB_HOME_HITCH" /* GXT: Meet ~b~~a~~s~ at the marina. */, uLocal_74[0]);
			break;
	}
}

void func_281(int iParam0)//Position - 0xA145
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("S_F_Y_Stripper_02"))
	{
		func_284(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_283(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_282(iParam0, 0, 0);
	}
}

void func_282(int iParam0, int iParam1, int iParam2)//Position - 0xA17D
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 6, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_283(int iParam0, int iParam1, int iParam2)//Position - 0xA1A2
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 3, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_284(int iParam0, int iParam1, int iParam2)//Position - 0xA1C7
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 8, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_285(int iParam0, int iParam1, bool bParam2)//Position - 0xA1EE
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
		bVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_StripperLite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 1, 0);
					func_283(iParam0, 1, 0);
					func_288(iParam0, 1, 0);
					func_287(iParam0, 1, -1, -1);
				}
				else
				{
					func_290(iParam0, 1, 1);
					func_289(iParam0, 2, 0);
					func_283(iParam0, 0, 0);
					func_288(iParam0, 0, 0);
					func_284(iParam0, 1, 0);
					func_286(iParam0, 0, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 0, 0);
					func_283(iParam0, 0, 0);
					func_288(iParam0, 0, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 0, 0);
					func_283(iParam0, 0, 0);
					func_288(iParam0, 0, 0);
					func_282(iParam0, 4, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 1, 1);
					func_283(iParam0, 1, 0);
					func_288(iParam0, 1, 0);
					func_287(iParam0, 1, -1, -1);
				}
				else
				{
					func_290(iParam0, 0, 1);
					func_289(iParam0, 1, 1);
					func_283(iParam0, 1, 0);
					func_288(iParam0, 1, 1);
					func_284(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 0, 1);
					func_283(iParam0, 0, 1);
					func_288(iParam0, 0, 1);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 2, 0);
					func_283(iParam0, 0, 2);
					func_288(iParam0, 1, 1);
					func_282(iParam0, 0, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 1, 0);
					func_283(iParam0, 1, 0);
					func_288(iParam0, 1, 0);
					func_287(iParam0, 1, -1, -1);
				}
				else
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 2, 1);
					func_283(iParam0, 1, 2);
					func_288(iParam0, 0, 2);
					func_284(iParam0, 1, 0);
					func_286(iParam0, 1, 2);
					func_287(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 0, 0);
					func_283(iParam0, 0, 0);
					func_288(iParam0, 0, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(iParam0, 1, 1);
					func_289(iParam0, 1, 0);
					func_283(iParam0, 0, 1);
					func_288(iParam0, 0, 2);
					func_282(iParam0, 2, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 1, 0);
					func_283(iParam0, 1, 0);
					func_288(iParam0, 1, 0);
					func_287(iParam0, 1, -1, -1);
				}
				else
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 1, 0);
					func_283(iParam0, 0, 1);
					func_288(iParam0, 0, 1);
					func_284(iParam0, 1, 0);
					func_286(iParam0, 0, 1);
					func_287(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_290(iParam0, 0, 0);
					func_289(iParam0, 0, 1);
					func_283(iParam0, 0, 0);
					func_288(iParam0, 0, 0);
					func_284(iParam0, 0, 0);
					func_287(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_290(iParam0, 1, 0);
					func_289(iParam0, 0, 2);
					func_283(iParam0, 1, 1);
					func_288(iParam0, 0, 1);
					func_282(iParam0, 0, 0);
					func_284(iParam0, 1, 0);
					func_287(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_286(int iParam0, int iParam1, int iParam2)//Position - 0xA649
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 11, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_287(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA670
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == func_261(0, 0) || iVar0 == func_261(0, 1))
	{
		if (bParam1)
		{
			func_283(iParam0, 2, 0);
			func_284(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_261(1, 0) || iVar0 == func_261(1, 1))
	{
		if (bParam1)
		{
			func_283(iParam0, 0, iParam2);
			func_282(iParam0, iParam3, 0);
			func_284(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("MP_F_StripperLite"))
	{
		if (bParam1)
		{
			func_284(iParam0, 1, 0);
		}
	}
}

void func_288(int iParam0, int iParam1, int iParam2)//Position - 0xA714
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 4, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_289(int iParam0, int iParam1, int iParam2)//Position - 0xA739
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 2, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_290(int iParam0, int iParam1, int iParam2)//Position - 0xA75E
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 0, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, iParam1, iParam2, 0);
	}
}

int func_291()//Position - 0xA783
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_206()))
	{
		return 1;
	}
	else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_206()))
	{
		return 1;
	}
	return 0;
}

int func_292(var uParam0)//Position - 0xA7B0
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

void func_293()//Position - 0xA7F7
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_206()))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_206());
	}
}

void func_294(var uParam0)//Position - 0xA813
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

int func_295(var uParam0, int iParam1)//Position - 0xA843
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
	iVar1 = func_296(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_296(var uParam0)//Position - 0xA8A0
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

int func_297(int iParam0, bool bParam1)//Position - 0xA8CC
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("MP_F_StripperLite");
	}
	iVar0 = func_114(iParam0);
	if (iVar0 != 145)
	{
		return func_298(iVar0);
	}
	return func_261(0, 0);
}

int func_298(int iParam0)//Position - 0xA8FF
{
	if (!func_82(iParam0))
	{
		return func_85(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_299()//Position - 0xA925
{
	switch (uLocal_74[0])
	{
		case 1:
			Local_300 = { 128.1002f, -1895.0007f, 22.4811f };
			Local_303 = { 128.1059f, -1896.8188f, 22.6792f };
			Local_306 = { 133.9411f, -1881.8903f, 22.5257f };
			Local_309 = { 130.1663f, -1893.0575f, 22.3748f };
			Local_312 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_324 = 330.5705f;
			fLocal_325 = 244f;
			Local_321 = { 146.293f, -1888.0493f, 22.2193f };
			fLocal_326 = fLocal_325;
			break;
		
		case 0:
			Local_300 = { -161.9628f, -1636.501f, 33.0339f };
			Local_303 = { -159.9415f, -1637.307f, 33.0339f };
			Local_306 = { -178.6316f, -1629.5216f, 32.1789f };
			Local_309 = { -166.1453f, -1633.1024f, 32.6574f };
			Local_312 = { -166.6636f, -1633.2289f, 32.6567f };
			fLocal_324 = 108.072f;
			fLocal_325 = 180.9811f;
			Local_321 = { Local_306 };
			fLocal_326 = fLocal_325;
			break;
		
		case 4:
			Local_300 = { -198.3824f, 87.8785f, 68.7436f };
			Local_303 = { -197.2292f, 86.3497f, 68.7561f };
			Local_306 = { -200.9078f, 113.537f, 68.5518f };
			Local_309 = { -200.1384f, 96.9809f, 68.5203f };
			Local_312 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_324 = 48.99f;
			fLocal_325 = 64.3f;
			Local_321 = { Local_306 };
			fLocal_326 = fLocal_325;
			break;
		
		case 5:
			Local_300 = { -849.0348f, 510.6906f, 89.8218f };
			Local_303 = { -849.0408f, 508.5767f, 89.8218f };
			Local_306 = { -846.1005f, 520.2202f, 89.6217f };
			Local_309 = { -851.8972f, 512.73f, 89.6217f };
			Local_312 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_324 = 92.365f;
			fLocal_325 = 293f;
			Local_321 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_326 = fLocal_325;
			break;
		
		case 8:
			Local_300 = { -28.2427f, -1555.8925f, 29.6918f };
			Local_303 = { -24.8589f, -1556.8461f, 29.6819f };
			Local_306 = { -41.8174f, -1575.6086f, 28.2831f };
			Local_309 = { -25.3404f, -1556.3406f, 29.6919f };
			Local_312 = { -27.7382f, -1570.5724f, 29.3f };
			fLocal_324 = 181.352f;
			fLocal_325 = 47.9206f;
			Local_321 = { Local_306 };
			fLocal_326 = fLocal_325;
			break;
		
		case 9:
			Local_300 = { 3313.487f, 5175.8306f, 18.619f };
			Local_303 = { 3310.8157f, 5176.3306f, 18.619f };
			Local_306 = { 3334.3206f, 5161.122f, 17.2996f };
			Local_309 = { 3317.7876f, 5171.707f, 17.4471f };
			Local_312 = { 3318.0757f, 5171.805f, 17.4385f };
			fLocal_324 = 236.4579f;
			Local_321 = { 3322.9268f, 5148.6074f, 17.3141f };
			fLocal_326 = 310.8648f;
			break;
	}
}

int func_300()//Position - 0xAC9D
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_335)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_301(int iParam0, int iParam1, bool bParam2)//Position - 0xACFB
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_305();
			}
			else
			{
				return 0;
			}
		}
		if (!func_304(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_305();
					}
					else
					{
						return 0;
					}
				}
				if (func_303())
				{
					if (!bParam2)
					{
						func_305();
					}
					else
					{
						return 0;
					}
				}
				if (func_302(157))
				{
					if (!bParam2)
					{
						func_305();
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
					func_305();
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
				func_305();
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
			func_305();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_302(int iParam0)//Position - 0xAE11
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_303()//Position - 0xAE28
{
	return Global_2684504.f_695;
}

bool func_304(bool bParam0)//Position - 0xAE37
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_305()//Position - 0xAE48
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_306()//Position - 0xAE54
{
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_88();
	HUD::CLEAR_PRINTS();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_299, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_306 - Vector(3f, 3f, 3f), Local_306 + Vector(3f, 3f, 3f), true, true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_306 - Vector(3f, 3f, 3f), Local_306 + Vector(3f, 3f, 3f), 15f, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_272[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_272[0], false))
		{
			if (!func_270(uLocal_331, 8192))
			{
				TASK::TASK_WANDER_STANDARD(iLocal_272[0], 40000f, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_272[0], true);
			if (!PED::DOES_RELATIONSHIP_GROUP_EXIST(iLocal_70))
			{
				PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_70);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_70);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_272[0], iLocal_70);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_272[0]));
	}
	if (iLocal_330 != -1)
	{
		func_308(&iLocal_330);
	}
	if (bLocal_69)
	{
		func_145(&uLocal_68);
	}
	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	func_125(uLocal_74[0], -1);
	Global_112962 = 0;
	func_307(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_307(bool bParam0)//Position - 0xAF8C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_231(iVar0, bParam0);
		iVar0++;
	}
}

void func_308(int iParam0)//Position - 0xAFAF
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_44004)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

