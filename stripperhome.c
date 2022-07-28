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
	int iLocal_45 = 0;
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
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
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
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
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
	int* iLocal_243 = NULL;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int* iLocal_246 = NULL;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int* iLocal_249 = NULL;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int* iLocal_252 = NULL;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int* iLocal_255 = NULL;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int* iLocal_258 = NULL;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int* iLocal_261 = NULL;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1097859072;
	var uLocal_267 = 1500;
	var uLocal_268 = 45;
	var uLocal_269 = 1103626240;
	var uLocal_270 = 5;
	int iLocal_271[1] = { 0 };
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278[1] = { 0 };
	int iLocal_279[4] = { 0, 0, 0, 0 };
	struct<9> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	struct<3> Local_285 = { 0, 0, 0 } ;
	struct<3> Local_286 = { 0, 0, 0 } ;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	struct<3> Local_290 = { 0, 0, 0 } ;
	struct<3> Local_291 = { 0, 0, 0 } ;
	struct<3> Local_292 = { 0, 0, 0 } ;
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<5> Local_308 = { 1, 0, 0, 0, 0 } ;
	var uLocal_309 = 0;
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
	Local_63 = { 500f, 500f, 500f };
	fLocal_296 = -1f;
	iLocal_299 = -1;
	bLocal_303 = true;
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
	MISC::SET_MISSION_FLAG(true);
	PLAYER::_0xDE45D1A1EF45EE61(PLAYER::PLAYER_ID(), true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(75))
	{
		func_303();
	}
	bLocal_304 = ScriptParam_308.f_5;
	if (bLocal_304)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
		func_298(0, -1, 0);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	uLocal_74[0] = ScriptParam_308[0];
	Global_112411.f_1 = uLocal_74[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (func_297() && ScriptParam_308.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_268(&ScriptParam_308, bVar0) && iLocal_72 != 6) && iLocal_72 != 5) && (iLocal_72 != -1 || !func_267(uLocal_300, 1024)))
	{
		func_259(0);
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_258(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_258(1, 0));
	if (!bVar1)
	{
		iLocal_72 = 2;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_302 > 0)
		{
			func_256();
			iLocal_302 = (iLocal_302 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		}
		switch (iLocal_72)
		{
			case -1:
				func_255();
				break;
			
			case 0:
				func_215(1);
				break;
			
			case 1:
				func_108();
				break;
			
			case 2:
				func_215(0);
				break;
			
			case 3:
				func_90();
				break;
			
			case 4:
				func_38(bLocal_303);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&iLocal_258))
				{
					func_7(&iLocal_258);
				}
				else if (func_1(&iLocal_258, 7.5f))
				{
					func_303();
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
	if (!func_267(uLocal_300, 8192))
	{
		if (func_37())
		{
			func_26();
		}
		else
		{
			iLocal_72 = 6;
		}
	}
	if (func_267(uLocal_300, 16384))
	{
		if (func_12())
		{
			iLocal_72 = 6;
		}
	}
}

int func_12()//Position - 0x3DF
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
	{
		return 1;
	}
	if (func_267(uLocal_300, 8192))
	{
		PED::SET_PED_RESET_FLAG(iLocal_271[0], 60, true);
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_271[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(PLAYER::PLAYER_PED_ID(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, true, 0f, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_279[0]))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_279[0]))
				{
					func_13(1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(iLocal_279[0], true);
				}
			}
			PED::DELETE_PED(&(iLocal_271[0]));
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
	CUTSCENE::_0xC61B86C9F61EB404(true);
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
		MISC::SET_BIT(&Global_32207, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_32207, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x53B
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_24(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_23())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_22(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_24(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_22(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(PLAYER::PLAYER_ID())) && !func_17(PLAYER::PLAYER_ID(), 0)) && !func_16()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_16()//Position - 0x67E
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_17(int iParam0, int iParam1)//Position - 0x698
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0x6E3
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0x724
{
	return Global_1574918;
}

int func_20(int iParam0)//Position - 0x730
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

bool func_21()//Position - 0x76F
{
	return BitTest(Global_2621446, 3);
}

int func_22(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x77D
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

int func_23()//Position - 0x7B0
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)//Position - 0x7D7
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

float func_25(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x7FA
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

void func_26()//Position - 0x834
{
	int iVar0;
	
	func_29();
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, false, 0f, false);
	}
	func_27(&uLocal_300, 16384);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_271[0], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_271[0], 104, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, true, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, false, 40000f);
	TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_271[0], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_27(&uLocal_300, 8192);
}

void func_27(var uParam0, int iParam1)//Position - 0x921
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)//Position - 0x931
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()//Position - 0x942
{
	if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_271[0]) && func_36(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_279[0] = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, true, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_30(int iParam0, bool bParam1, int iParam2)//Position - 0x9A8
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(bParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_14(23, 1);
}

void func_31(int iParam0)//Position - 0xA01
{
	if (func_35())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_34())
		{
			func_32(1, 1);
		}
		else
		{
			func_32(0, 0);
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
	if (!func_23())
	{
		Global_20266.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)//Position - 0xA8B
{
	if (bParam0)
	{
		if (func_33(0))
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

int func_33(int iParam0)//Position - 0xAFF
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

bool func_34()//Position - 0xB56
{
	return BitTest(Global_1958711, 5);
}

bool func_35()//Position - 0xB64
{
	return BitTest(Global_1958711, 19);
}

int func_36(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB73
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

int func_37()//Position - 0xC58
{
	if ((uLocal_74[0] == 8 || uLocal_74[0] == 9) || func_25(iLocal_271[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_38(bool bParam0)//Position - 0xCA4
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	
	func_65();
	if (bParam0)
	{
		Var0 = { Local_287 };
	}
	else
	{
		func_64(&Var0, &uVar1, 0);
	}
	func_61(Var0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
			{
				if (iLocal_305)
				{
					if (func_59(iVar2, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_58();
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_271[0], 0, 16777216);
						func_39();
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_305 = 1;
				}
			}
		}
	}
}

void func_39()//Position - 0xD5A
{
	func_57();
	func_50(295, 0, 0);
	func_40(0);
	func_303();
}

void func_40(bool bParam0)//Position - 0xD78
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	
	if (!func_47())
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
		StringCopy(&(Var1[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var1[1 /*6*/]), "City", 24);
	StringCopy(&(Var1[2 /*6*/]), "????", 24);
	if (func_45(200, &Var1, &Var0, 3, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, func_44(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(108, func_43(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(102, func_42(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(8, func_41(), 0f);
	}
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
}

int func_41()//Position - 0xE35
{
	return iLocal_65;
}

int func_42()//Position - 0xE3F
{
	return iLocal_66;
}

int func_43()//Position - 0xE49
{
	return iLocal_64;
}

int func_44()//Position - 0xE53
{
	return 0;
}

int func_45(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xE5C
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var2 = { func_46(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723612.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1931618.f_10));
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
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

struct<13> func_46(int iParam0)//Position - 0xF90
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_47()//Position - 0xFA7
{
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()//Position - 0xFCD
{
	if (func_49())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_49()//Position - 0xFED
{
	return Global_2725911;
}

void func_50(int iParam0, int iParam1, int iParam2)//Position - 0xFF9
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
		func_56((891 + iParam0), 1, -1);
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
		func_51();
	}
}

void func_51()//Position - 0x10DF
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
		func_55(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_54() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_52();
				}
			}
		}
	}
}

int func_52()//Position - 0x159D
{
	if (func_53(0))
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

int func_53(bool bParam0)//Position - 0x15E8
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_54()//Position - 0x1610
{
	return Global_31959;
}

int func_55(int iParam0, int iParam1)//Position - 0x161B
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

void func_56(int iParam0, bool bParam1, int iParam2)//Position - 0x166C
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_57()//Position - 0x168A
{
	iLocal_66++;
	iLocal_67 = 1;
}

void func_58()//Position - 0x169B
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_271[0], true);
		if (PED::IS_PED_IN_GROUP(iLocal_271[0]))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_271[0]);
		}
	}
}

int func_59(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x16E3
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
	func_60(iParam0);
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

void func_60(int iParam0)//Position - 0x187B
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

void func_61(struct<3> Param0)//Position - 0x18A7
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iLocal_277))
	{
		HUD::REMOVE_BLIP(&iLocal_277);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_271[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_276))
				{
					iLocal_276 = func_62(Param0, 1);
				}
			}
		}
	}
}

int func_62(struct<3> Param0, bool bParam1)//Position - 0x192D
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)//Position - 0x1959
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, var uParam1, bool bParam2)//Position - 0x1970
{
	Local_290 = { Local_290 };
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
				*uParam0 = { Local_289 };
				*uParam1 = fLocal_293;
			}
			Local_290 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { Local_289 };
				*uParam1 = fLocal_293;
			}
			Local_290 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { Local_289 };
				*uParam1 = fLocal_293;
			}
			Local_290 = { *uParam0 };
			break;
	}
}

void func_65()//Position - 0x1A85
{
	if (PED::IS_PED_INJURED(iLocal_271[0]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
		{
		}
		func_66(0);
	}
}

void func_66(int iParam0)//Position - 0x1ABE
{
	if ((uLocal_74[0] > -1 && uLocal_74[0] < 10) && iParam0 != 2)
	{
		func_88(uLocal_74[0], (func_89(uLocal_74[0]) / 2));
	}
	func_86();
	switch (iParam0)
	{
		case 0:
			func_84("SCLUB_HOME_D", uLocal_74[0]);
			func_88(uLocal_74[0], 0);
			func_72(uLocal_74[0], 1);
			iLocal_72 = 6;
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			func_67("SCLUB_HOME_A", uLocal_74[0], 0);
			iLocal_72 = 5;
			break;
		
		case 2:
			iLocal_72 = 5;
			break;
		
		case 4:
			func_84("SCLUB_HOME_D3", uLocal_74[0]);
			iLocal_72 = 6;
			break;
		
		case 3:
			if (func_25(iLocal_271[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
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

void func_67(char* sParam0, int iParam1, bool bParam2)//Position - 0x1BA7
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_71(iParam1)}, 6);
	if (!func_70(sParam0, &sVar0))
	{
		if (!bParam2)
		{
			func_69(sParam0, &sVar0, -1);
		}
		else
		{
			func_68(sParam0, &sVar0);
		}
	}
}

void func_68(char* sParam0, char* sParam1)//Position - 0x1BE0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_69(char* sParam0, char* sParam1, int iParam2)//Position - 0x1BFC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

bool func_70(char* sParam0, char* sParam1)//Position - 0x1C19
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

struct<4> func_71(int iParam0)//Position - 0x1C32
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_72(int iParam0, bool bParam1)//Position - 0x1C4B
{
	if (bParam1)
	{
		func_27(&(Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_73(&(Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_73(var uParam0, int iParam1)//Position - 0x1C8D
{
	func_74(uParam0, iParam1);
}

void func_74(var uParam0, var uParam1)//Position - 0x1C9D
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_75()//Position - 0x1CB2
{
	int iVar0;
	
	iVar0 = func_77();
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
			switch (func_76(-1))
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

int func_76(int iParam0)//Position - 0x1D40
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_77()//Position - 0x1D74
{
	func_78();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_78()//Position - 0x1D8D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_82(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_81(PLAYER::PLAYER_PED_ID());
			if (func_80(iVar0) && (!func_79(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_80(Global_113386.f_2363.f_539.f_4321))
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

bool func_79(int iParam0)//Position - 0x1E8A
{
	return Global_43052 == iParam0;
}

bool func_80(int iParam0)//Position - 0x1E98
{
	return iParam0 < 3;
}

int func_81(int iParam0)//Position - 0x1EA4
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)//Position - 0x1EE1
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)//Position - 0x1F06
{
	return Global_1998[iParam0 /*29*/];
}

void func_84(char* sParam0, int iParam1)//Position - 0x1F15
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_71(iParam1)}, 6);
	func_85(sParam0, &sVar0, 7500, 1);
}

void func_85(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1F34
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

void func_86()//Position - 0x1F53
{
	if (HUD::DOES_BLIP_EXIST(iLocal_277))
	{
		HUD::REMOVE_BLIP(&iLocal_277);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_276))
	{
		HUD::REMOVE_BLIP(&iLocal_276);
	}
	func_87();
}

void func_87()//Position - 0x1F81
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_278[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_278[iVar0]));
		}
		iVar0++;
	}
}

void func_88(int iParam0, int iParam1)//Position - 0x1FB4
{
	Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_89(int iParam0)//Position - 0x1FD0
{
	return Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/];
}

void func_90()//Position - 0x1FEA
{
	func_65();
	func_86();
	switch (iLocal_77)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], false))
				{
					if (!func_107("SCLUB_SECLUDED"))
					{
						func_106("SCLUB_SECLUDED");
					}
					if (func_105() && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) == 0f)
					{
						HUD::CLEAR_HELP(true);
						STREAMING::REQUEST_ANIM_DICT(func_100(iLocal_271[0], 0, 0));
						iLocal_77 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_93())
			{
				iLocal_77 = 2;
			}
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) != 1)
			{
				func_256();
				if (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 4)
				{
					bLocal_303 = false;
				}
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_45);
				func_91(bLocal_303);
				iLocal_72 = 4;
			}
			break;
	}
}

void func_91(bool bParam0)//Position - 0x20BF
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
				func_84("SCLUB_HOME_GO", uLocal_74[0]);
			}
			else
			{
				func_92("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_92("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_92(char* sParam0, int iParam1, int iParam2)//Position - 0x213D
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_93()//Position - 0x2156
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_100(iLocal_271[0], 0, 0)))
	{
		func_94(iLocal_271[0], 0, 1, -1, 1);
		func_94(PLAYER::PLAYER_PED_ID(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_94(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x2190
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
	iLocal_45 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && func_99(0, 1))
	{
		if (iLocal_45 != 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
		}
	}
	bVar1 = func_98(iVar0);
	sVar2 = func_100(iParam0, 0, 0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar2);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_95(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_95(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_95(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_95(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_95(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar3);
		if (bParam4)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
}

char* func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x22D5
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
						sVar0 = func_97(18);
					}
					else
					{
						sVar0 = func_97(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(8);
				}
				else
				{
					sVar0 = func_97(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(18);
				}
				else
				{
					sVar0 = func_96(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(8);
			}
			else
			{
				sVar0 = func_96(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(19);
					}
					else
					{
						sVar0 = func_97(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(9);
				}
				else
				{
					sVar0 = func_97(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(19);
				}
				else
				{
					sVar0 = func_96(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(9);
			}
			else
			{
				sVar0 = func_96(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(20);
					}
					else
					{
						sVar0 = func_97(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(10);
				}
				else
				{
					sVar0 = func_97(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(20);
				}
				else
				{
					sVar0 = func_96(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(10);
			}
			else
			{
				sVar0 = func_96(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(21);
					}
					else
					{
						sVar0 = func_97(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(11);
				}
				else
				{
					sVar0 = func_97(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(21);
				}
				else
				{
					sVar0 = func_96(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(11);
			}
			else
			{
				sVar0 = func_96(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(22);
					}
					else
					{
						sVar0 = func_97(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(12);
				}
				else
				{
					sVar0 = func_97(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(22);
				}
				else
				{
					sVar0 = func_96(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(12);
			}
			else
			{
				sVar0 = func_96(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_97(3);
				}
				else
				{
					sVar0 = func_97(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(3);
			}
			else
			{
				sVar0 = func_96(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_96(int iParam0)//Position - 0x25B6
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

char* func_97(int iParam0)//Position - 0x2772
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

int func_98(int iParam0)//Position - 0x292F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
			case -508485403:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -1297908787:
			case -1901288301:
			case -1949393167:
			case 1509896619:
			case -2093548880:
			case 801538932:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_99(bool bParam0, bool bParam1)//Position - 0x2A38
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

char* func_100(int iParam0, bool bParam1, int iParam2)//Position - 0x2A67
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (func_98(iVar0))
			{
				if ((!func_99(0, 1) || iParam2) && !bParam1)
				{
					return func_104();
				}
				else
				{
					return func_103();
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("vstr"))
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_99(0, 1) || iParam2) && !bParam1)
	{
		return func_102();
	}
	return func_101();
}

char* func_101()//Position - 0x2B01
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_102()//Position - 0x2B0D
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_103()//Position - 0x2B19
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_104()//Position - 0x2B25
{
	return "mini@prostitutes@sexlow_veh";
}

int func_105()//Position - 0x2B31
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	
	fVar4 = 25f;
	func_64(&Var5, &uVar6, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var3, &Var7, 3f, 0))
		{
			fVar8 = SYSTEM::VDIST(Var3, Var7);
			if (fVar8 <= 10f)
			{
				return 0;
			}
		}
		if (SYSTEM::VDIST(Var3, Local_287) < 20f || SYSTEM::VDIST(Var3, Var5) < 20f)
		{
			return 0;
		}
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		PED::GET_CLOSEST_PED(Var3, fVar4, true, true, &iVar0, false, false, -1);
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
			iVar1 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Var3, fVar4, 0, -1);
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
		iVar9 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (!iVar9 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_106(char* sParam0)//Position - 0x2CA3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_107(char* sParam0)//Position - 0x2CB9
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_108()//Position - 0x2CCC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_73 < 12 && iLocal_73 >= 2)
	{
		if (func_213(3000))
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
				bLocal_69 = func_210(&uLocal_68, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_209(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
			{
				bLocal_69 = func_210(&uLocal_68, Local_292, 1, fLocal_294);
			}
			else
			{
				bLocal_69 = func_210(&uLocal_68, Local_287, 1, fLocal_294);
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
			func_86();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1);
			func_30(56, 1, 0);
			if (!func_267(uLocal_300, 131072))
			{
				func_27(&uLocal_300, 131072);
			}
			if (!func_267(uLocal_300, 256))
			{
				func_208();
				func_27(&uLocal_300, 256);
			}
			if (!func_267(uLocal_300, 32768))
			{
				STREAMING::REQUEST_ANIM_DICT(func_207());
				func_27(&uLocal_300, 32768);
			}
			if (!func_267(uLocal_300, 256))
			{
				STREAMING::REQUEST_ANIM_DICT(func_206());
				func_27(&uLocal_300, 256);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_307 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_205(PLAYER::PLAYER_PED_ID(), iLocal_307);
				iLocal_73 = 1;
			}
			else
			{
				func_58();
				func_203(PLAYER::PLAYER_PED_ID(), Local_285);
				func_203(iLocal_271[0], Local_286);
				iLocal_73 = 2;
			}
			func_201();
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_307, true), Local_287) < 2f)
				{
					func_58();
					func_203(PLAYER::PLAYER_PED_ID(), Local_285);
					func_203(iLocal_271[0], Local_286);
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
			if (!CAM::IS_CAM_RENDERING(iLocal_279[0]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_279[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_307, false, false);
					}
				}
				func_8(&iLocal_252);
				iLocal_73 = 3;
			}
			break;
		
		case 3:
			if (func_200(&iLocal_252) > 1f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_279[1], iLocal_279[0], 6000, 1, 1);
				func_199(&Local_280, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = CLOCK::GET_CLOCK_HOURS();
				iLocal_297 = iVar1 + 8;
				if (iLocal_297 > 23)
				{
					iLocal_297 = (iLocal_297 - 24);
				}
				Local_280.f_7 = iVar1;
				Local_280.f_8 = iLocal_297;
				func_2(&iLocal_252);
				iLocal_73 = 4;
			}
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_279[1]) && CAM::IS_CAM_RENDERING(iLocal_279[1]))
			{
				if (!func_267(uLocal_298, 512))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_307) && !ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_307, true);
					}
					func_196(PLAYER::PLAYER_PED_ID(), func_198());
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_195());
					func_172();
					func_27(&uLocal_298, 512);
				}
				else if (!func_267(uLocal_298, 2048))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
					{
					}
					if (!func_171() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_271[0]))
					{
						func_172();
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_298, 2048);
						func_8(&iLocal_252);
						sLocal_273 = func_170();
						iLocal_73 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_200(&iLocal_252) > 1f)
			{
				if (func_145(iLocal_297, 0, sLocal_273, "", &Local_280, (func_200(&iLocal_252) * 0.2f), 0))
				{
					if (!func_171())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_307))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_307) != joaat("blimp2"))
							{
								MISC::CLEAR_AREA(Local_286, 20f, true, false, false, false);
							}
						}
						else
						{
							MISC::CLEAR_AREA(Local_286, 20f, true, false, false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_271[0], false, false);
						}
						TASK::SET_PED_PATH_AVOID_FIRE(PLAYER::PLAYER_PED_ID(), false);
						func_8(&iLocal_252);
						iLocal_73 = 6;
					}
				}
			}
			break;
		
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			if (func_200(&iLocal_252) > 1.5f)
			{
				if (bLocal_69)
				{
					func_143(&uLocal_68);
				}
				func_8(&iLocal_252);
				iLocal_73 = 7;
			}
			break;
		
		case 7:
			if (!CAM::IS_CAM_RENDERING(iLocal_279[2]))
			{
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				GRAPHICS::_0x0AE73D8DF3A762B2(true);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_279[2], iLocal_279[1], 6000, 1, 1);
				func_8(&iLocal_252);
				iLocal_73 = 8;
			}
			break;
		
		case 8:
			if (!func_267(uLocal_300, 262144))
			{
				if (func_200(&iLocal_252) >= 1.25f)
				{
					func_142();
				}
			}
			if (func_200(&iLocal_252) > 6f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_279[3], true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_307, true, false);
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_307, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_307, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_307, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 10;
			}
			break;
		
		case 10:
			if (func_200(&iLocal_252) > 2f)
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				iLocal_73 = 13;
			}
			break;
		
		case 12:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (!func_267(uLocal_300, 262144))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Local_289, fLocal_293, false, true, true);
					func_142();
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) == joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_307, true, false);
					}
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_307, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_307, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_307, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 13;
			}
			break;
		
		case 13:
			if (!CAM::IS_SCREEN_FADING_OUT() && func_200(&iLocal_252) >= 1f)
			{
				func_13(1, 1, 0);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
				PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 30, true, 0);
				if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), func_82(0)))
				{
					func_141();
				}
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), 15f, 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_307, true, true);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_307) != joaat("blimp2"))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_307, Local_287, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_307, fLocal_294);
						if (VEHICLE::IS_BIG_VEHICLE(iLocal_307) && uLocal_74[0] == 5)
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_307, -865f, 516.3f, 90f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_307, 15f);
						}
						else if (func_209(iLocal_307))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_307, Local_292, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_307, fLocal_295);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_307, 5f);
					}
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					func_199(&Local_280, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					CLOCK::ADD_TO_CLOCK_TIME(8, 0, 0);
					func_139(SYSTEM::TO_FLOAT(8));
					CAM::DO_SCREEN_FADE_IN(2000);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_199(&Local_280, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
				{
					PED::DELETE_PED(&(iLocal_271[0]));
				}
				if (!func_138(uLocal_74[0], -1))
				{
					if (uLocal_74[0] == 5)
					{
						func_67("SCLUB_PHON_HELP_ALT", uLocal_74[0], 0);
					}
					else
					{
						func_67("SCLUB_PHON_HELP", uLocal_74[0], 0);
					}
					func_119(uLocal_74[0], 1, -1);
					SYSTEM::WAIT(4000);
				}
				func_117(uLocal_74[0]);
				iVar2 = func_116(uLocal_74[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_115(uLocal_74[0]);
					iVar4 = func_114(iVar2);
					func_109(-384575792, iVar3, iVar4, 3, func_113(), func_112(uLocal_74[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_39();
			}
			break;
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x358B
{
	struct<14> Var0;
	
	if (func_53(0))
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
	if (Global_113386.f_7688.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_111(iParam3);
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
		Global_113386.f_7688.f_651[Global_113386.f_7688.f_764 /*14*/] = { Var0 };
		Global_113386.f_7688.f_764++;
		func_110(0);
		func_110(1);
		func_110(2);
		return 1;
	}
	return 0;
}

void func_110(bool bParam0)//Position - 0x36C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_80(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113386.f_7688[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113386.f_7688[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113386.f_7688.f_764)
	{
		if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113386.f_7688.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113386.f_7688.f_919[bParam0] = iVar1;
}

int func_111(int iParam0)//Position - 0x3784
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

int func_112(int iParam0)//Position - 0x37EE
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

int func_113()//Position - 0x388B
{
	func_78();
	switch (Global_113386.f_2363.f_539.f_4321)
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

int func_114(int iParam0)//Position - 0x38D1
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

int func_115(int iParam0)//Position - 0x390B
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

int func_116(int iParam0)//Position - 0x3969
{
	return Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_117(int iParam0)//Position - 0x3985
{
	if (func_116(iParam0) < 0)
	{
		func_118(iParam0, 0);
	}
	Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_118(int iParam0, int iParam1)//Position - 0x39C8
{
	Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_119(int iParam0, bool bParam1, int iParam2)//Position - 0x39E6
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_75();
	}
	if (func_137(iParam2) == 4)
	{
	}
	bVar0 = Global_113386.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_136(func_112(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_136(func_112(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_113386.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_135(iParam0, 0);
			func_129(func_112(iParam0), func_137(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2359296[func_128() /*5567*/].f_681.f_1273), iParam0);
					func_125(-60084924, 15, 0);
					break;
			}
			func_124(iVar1);
			func_123(iParam0, iVar1);
			Global_112380.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_120(func_112(iParam0), func_137(iParam2));
	}
}

void func_120(bool bParam0, int iParam1)//Position - 0x3B0F
{
	int iVar0;
	
	if (Global_117[bParam0 /*10*/].f_8 != 166)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_122(bParam0, iVar0, 0);
			func_121(bParam0, iVar0, 0);
		}
	}
}

void func_121(int iParam0, int iParam1, int iParam2)//Position - 0x3B44
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_122(int iParam0, int iParam1, int iParam2)//Position - 0x3B89
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_123(int iParam0, int iParam1)//Position - 0x3BCE
{
	if (iParam1 > -1)
	{
		Global_112380.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_112380.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_124(int iParam0)//Position - 0x3C0B
{
	if (iParam0 != -1)
	{
		Global_112380.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_112380.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_125(int iParam0, int iParam1, int iParam2)//Position - 0x3C42
{
	int iVar0;
	
	if (func_127(iParam1, iParam2))
	{
		iVar0 = func_126();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_126()//Position - 0x3C6F
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

int func_127(int iParam0, var uParam1)//Position - 0x3CA4
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

int func_128()//Position - 0x3D2A
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_129(bool bParam0, int iParam1, bool bParam2)//Position - 0x3D37
{
	int iVar0;
	
	Global_8822 = bParam0;
	if (Global_117[bParam0 /*10*/].f_8 != 166)
	{
		func_134();
		if (iParam1 == 4)
		{
			func_122(bParam0, 0, 1);
			func_122(bParam0, 1, 1);
			func_122(bParam0, 2, 1);
			func_121(bParam0, 0, 1);
			func_121(bParam0, 1, 1);
			func_121(bParam0, 2, 1);
		}
		else
		{
			if (func_133(bParam0, iParam1) == 1 && func_132(bParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_122(bParam0, iVar0, 1);
			func_121(bParam0, iVar0, 1);
			if (bParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (bParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (bParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { func_131(bParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = bParam0;
					}
					else if (bParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { func_131(bParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						func_130();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { func_131(bParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					func_130();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { func_131(bParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				func_130();
			}
		}
	}
}

void func_130()//Position - 0x3EAF
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
	if (Global_8841 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_8746[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8746[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8136, 0);
}

struct<4> func_131(int iParam0)//Position - 0x3F2A
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_132(int iParam0, int iParam1)//Position - 0x3F3D
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

int func_133(int iParam0, int iParam1)//Position - 0x3F67
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_12[iParam1];
}

void func_134()//Position - 0x3F91
{
	if (func_79(14))
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
		Global_20266 = func_77();
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

void func_135(int iParam0, int iParam1)//Position - 0x4033
{
	Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_136(bool bParam0, int iParam1)//Position - 0x4051
{
	if (func_133(bParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)//Position - 0x406D
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

bool func_138(int iParam0, int iParam1)//Position - 0x40C9
{
	if (iParam1 < 0)
	{
		iParam1 = func_75();
	}
	return Global_113386.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_139(float fParam0)//Position - 0x40EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_5)))
		{
			func_140(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_113386.f_18103.f_362[iVar1 /*3*/])))
		{
			func_140(&(Global_113386.f_18103.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_140(int* iParam0, float fParam1)//Position - 0x4180
{
	if (func_10(iParam0))
	{
		func_9(iParam0, (func_4(iParam0) + fParam1));
	}
}

void func_141()//Position - 0x41A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_96903[iVar0] = Global_96903[iVar0 + 1];
		}
		else
		{
			Global_96903[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_142()//Position - 0x41E4
{
	int iVar0;
	int iVar1;
	
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_272))
	{
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 50000);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_289, 1f, -1, 0.25f, false, fLocal_293);
		if (iVar0 < 15000)
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_272, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_272, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		else
		{
			TASK::TASK_PLAY_ANIM(0, sLocal_272, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0f, false, false, false);
		}
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		func_27(&uLocal_300, 262144);
	}
}

void func_143(var uParam0)//Position - 0x42BA
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_144(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
		}
	}
}

int func_144(int iParam0)//Position - 0x42F1
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

int func_145(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)//Position - 0x4334
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
			*uParam4 = func_169();
			iVar4 = func_169();
			func_168(&iVar4, iParam0);
			func_167(&iVar4, iParam1);
			func_166(&iVar4, 0);
			if (func_164(*uParam4, iVar4))
			{
				func_159(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_156(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_139((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
			GRAPHICS::_0x0AE73D8DF3A762B2(false);
			func_155();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_154();
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
				func_159(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_153(iVar4), func_152(iVar4), func_151(iVar4));
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_150(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_159(&iVar4, iVar3, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_153(iVar4), func_152(iVar4), func_151(iVar4));
			if (func_149(iVar4) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(func_149(iVar4), func_148(iVar4), func_146(iVar4));
			}
			func_256();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}

int func_146(int iParam0)//Position - 0x4532
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_147(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)//Position - 0x4554
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_148(int iParam0)//Position - 0x456B
{
	return iParam0 & 15;
}

int func_149(int iParam0)//Position - 0x4578
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_150(float fParam0, float fParam1, float fParam2)//Position - 0x458A
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

int func_151(int iParam0)//Position - 0x45B1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_152(int iParam0)//Position - 0x45C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_153(int iParam0)//Position - 0x45D7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_154()//Position - 0x45EA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_113386.f_14141[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_155()//Position - 0x4616
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

void func_156(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x4664
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_164(iParam0, iParam1))
	{
		iVar0 = func_148(iParam1);
		iVar1 = func_146(iParam0);
		iVar2 = (func_146(iParam0) - func_146(iParam1));
		iVar3 = (func_148(iParam0) - func_148(iParam1));
		iVar4 = (func_149(iParam0) - func_149(iParam1));
		iVar5 = (func_153(iParam0) - func_153(iParam1));
		iVar6 = (func_152(iParam0) - func_152(iParam1));
		iVar7 = (func_151(iParam0) - func_151(iParam1));
	}
	else
	{
		iVar0 = func_148(iParam0);
		iVar1 = func_146(iParam1);
		iVar2 = (func_146(iParam1) - func_146(iParam0));
		iVar3 = (func_148(iParam1) - func_148(iParam0));
		iVar4 = (func_149(iParam1) - func_149(iParam0));
		iVar5 = (func_153(iParam1) - func_153(iParam0));
		iVar6 = (func_152(iParam1) - func_152(iParam0));
		iVar7 = (func_151(iParam1) - func_151(iParam0));
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
		iVar4 = (iVar4 + func_158(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_157(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_157(float fParam0, float fParam1, float fParam2)//Position - 0x4865
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

int func_158(int iParam0, int iParam1)//Position - 0x48A7
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

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4949
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_146(*iParam0);
	iVar1 = func_148(*iParam0);
	iVar2 = func_149(*iParam0);
	iVar3 = func_153(*iParam0);
	iVar4 = func_152(*iParam0);
	iVar5 = func_151(*iParam0);
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
	iVar6 = func_158(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_158(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_160(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4ACB
{
	func_166(uParam0, iParam1);
	func_167(uParam0, iParam2);
	func_168(uParam0, iParam3);
	func_163(uParam0, iParam5);
	func_162(uParam0, iParam4);
	func_161(uParam0, iParam6);
}

void func_161(var uParam0, int iParam1)//Position - 0x4B03
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

void func_162(var uParam0, int iParam1)//Position - 0x4B89
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_146(*uParam0);
	if (iParam1 < 1 || iParam1 > func_158(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_163(var uParam0, int iParam1)//Position - 0x4BDA
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_164(int iParam0, int iParam1)//Position - 0x4C0D
{
	int iVar0;
	int iVar1;
	
	if (!func_165(iParam1) || !func_165(iParam0))
	{
		return 1;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
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
	return 0;
}

int func_165(int iParam0)//Position - 0x4D19
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
	iVar0 = func_151(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_152(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_153(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_146(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_148(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_149(iParam0);
	if (iVar5 < 1 || iVar5 > func_158(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_166(int iParam0, int iParam1)//Position - 0x4DF5
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_167(int iParam0, int iParam1)//Position - 0x4E31
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_168(int iParam0, int iParam1)//Position - 0x4E6C
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

int func_169()//Position - 0x4EA6
{
	var uVar0;
	
	func_166(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_167(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_168(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_162(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_163(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_161(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

char* func_170()//Position - 0x4EEC
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

int func_171()//Position - 0x4F63
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_172()//Position - 0x4F85
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
	{
		if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
		{
			func_193(&uLocal_78, 1, 0, func_194(uLocal_74[0]), 0, 1);
			func_175("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_173(iLocal_271[0], "SEX_ORAL", 10);
		}
	}
}

void func_173(int iParam0, char* sParam1, int iParam2)//Position - 0x4FE7
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_174(iParam2), 1);
}

int func_174(int iParam0)//Position - 0x4FFE
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

int func_175(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x51F3
{
	struct<6> Var0;
	char[] cVar1[8];
	
	if (func_192())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_191(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_190(Var0) };
		}
		if (bParam3)
		{
			cVar1 = "SCAUD";
		}
		else
		{
			cVar1 = "SHAUD";
		}
		if (func_176(&uLocal_78, cVar1, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x524E
{
	func_189(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_177(sParam2, iParam3, 0);
}

int func_177(char* sParam0, int iParam1, bool bParam2)//Position - 0x529C
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
					func_188();
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
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_186();
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
				func_134();
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
				if (func_185())
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
			if (func_23())
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
			func_184();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_183();
		func_178();
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
		func_188();
	}
	return 0;
}

void func_178()//Position - 0x556A
{
	if (!func_179())
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

int func_179()//Position - 0x55A1
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_182())
	{
		return 0;
	}
	if (func_180(PLAYER::PLAYER_ID()))
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

bool func_180(int iParam0)//Position - 0x5604
{
	return func_181(iParam0, 20);
}

var func_181(int iParam0, int iParam1)//Position - 0x5614
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_182()//Position - 0x562C
{
	return -1;
}

void func_183()//Position - 0x5635
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

void func_184()//Position - 0x5666
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

int func_185()//Position - 0x56FB
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

void func_186()//Position - 0x5794
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

bool func_187(int iParam0, int iParam1)//Position - 0x57EB
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

void func_188()//Position - 0x5823
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

void func_189(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x587A
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

struct<6> func_190(char[24] cParam0)//Position - 0x58D0
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_74[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_191(char* sParam0, bool bParam1)//Position - 0x58F1
{
	StringConCat(sParam0, "_", 24);
	if (func_77() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_77() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_77() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_190(*sParam0) };
	}
}

int func_192()//Position - 0x5948
{
	if ((HUD::IS_MESSAGE_BEING_DISPLAYED() || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) || Global_21605 != 0)
	{
		return 0;
	}
	return 1;
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5971
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

char* func_194(int iParam0)//Position - 0x5A0C
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
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
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

float func_195()//Position - 0x5ABF
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

Vector3 func_196(int iParam0, struct<3> Param1)//Position - 0x5B38
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0, false, false))
	{
		Param1.f_2 = uVar0;
	}
	if (func_197(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
	}
	return Param1;
}

bool func_197(int iParam0)//Position - 0x5B7E
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

Vector3 func_198()//Position - 0x5B9C
{
	switch (uLocal_74[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5C53
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
	func_154();
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
		if (Global_113386.f_32749.f_4801 != -15)
		{
			Global_113386.f_32749.f_4801 = func_169();
		}
	}
}

float func_200(int* iParam0)//Position - 0x5DC7
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

void func_201()//Position - 0x5E00
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var2[4];
	var uVar3[4];
	
	func_202(&Var1, &Var2, &uVar3);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_279[iVar0]))
		{
			iLocal_279[iVar0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var1[iVar0 /*3*/], Var2[iVar0 /*3*/], uVar3[iVar0], false, 2);
			CAM::SHAKE_CAM(iLocal_279[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_280.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
	CAM::ADD_CAM_SPLINE_NODE(Local_280.f_4, Var1[0 /*3*/], Var2[0 /*3*/], 6000, 3, 2);
	CAM::ADD_CAM_SPLINE_NODE(Local_280.f_4, Var1[1 /*3*/], Var2[1 /*3*/], 6000, 3, 2);
	CAM::SET_CAM_FOV(Local_280.f_4, uVar3[0]);
}

void func_202(var uParam0, var uParam1, var uParam2)//Position - 0x5ED2
{
	switch (uLocal_74[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
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
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
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
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_203(int iParam0, struct<3> Param1)//Position - 0x6406
{
	float fVar0;
	float fVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(iParam0, true);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_306);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_306);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16777216);
			}
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), Local_285);
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), Local_286);
				if (fVar1 < fVar0)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_271[0], 0);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_204(), 0, 552, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_285, 1f, -1, 0.25f, 64, 40000f);
				}
			}
			if (iParam0 != PLAYER::PLAYER_PED_ID())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_204(), 0, 546, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, 1f, -1, 0.25f, true, 40000f);
				}
				if (func_25(iParam0, Param1, 1) > 5f)
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
			TASK::CLOSE_SEQUENCE_TASK(iLocal_306);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_306);
		}
	}
}

char* func_204()//Position - 0x65D4
{
	char* sVar0;
	
	if (uLocal_74[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_205(int iParam0, int iParam1)//Position - 0x65ED
{
	if (!PED::IS_PED_INJURED(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		TASK::TASK_VEHICLE_PARK(iParam0, iParam1, Local_287, fLocal_294, 3, 10f, false);
	}
}

char* func_206()//Position - 0x6623
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_207()//Position - 0x662F
{
	if (func_77() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_77() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_77() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_208()//Position - 0x666E
{
	sLocal_272 = "move_p_m_one_idles@generic";
	STREAMING::REQUEST_ANIM_DICT(sLocal_272);
}

int func_209(int iParam0)//Position - 0x6684
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

int func_210(var uParam0, struct<3> Param1, bool bParam2, float fParam3)//Position - 0x6771
{
	if (func_212(uParam0))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(*uParam0);
		if (!func_211(Param1))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, Param1, true, false, false, true);
			if (bParam2)
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
		}
		return 1;
	}
	return 0;
}

int func_211(struct<3> Param0)//Position - 0x67C4
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0)//Position - 0x67EE
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_144(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_63, false, true, 0))
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

int func_213(int iParam0)//Position - 0x6860
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_214())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_214()//Position - 0x68AA
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

void func_215(bool bParam0)//Position - 0x68DC
{
	struct<4> Var0;
	float fVar1;
	
	func_65();
	if (ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
	{
		return;
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_287 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_287 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, true);
	fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_271[0], true));
	if (iLocal_75 != 9)
	{
		if (((fVar1 >= (200f / 2f) && func_192()) && !func_267(uLocal_300, 2)) || func_254(iLocal_271[0], 0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_277))
			{
				HUD::REMOVE_BLIP(&iLocal_277);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_276))
			{
				HUD::REMOVE_BLIP(&iLocal_276);
			}
			func_251(0);
			func_84("SCLUB_HOME_R", uLocal_74[0]);
			iLocal_75 = 9;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_75 != 8)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_277))
			{
				HUD::REMOVE_BLIP(&iLocal_277);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_276))
			{
				HUD::REMOVE_BLIP(&iLocal_276);
			}
			iLocal_75 = 8;
		}
	}
	if (func_240(iLocal_271[0], &uLocal_264, &iLocal_261))
	{
		func_66(4);
	}
	if (iLocal_75 <= 1)
	{
		func_259(1);
	}
	switch (iLocal_75)
	{
		case 0:
			iLocal_76 = 0;
			if (func_192())
			{
				if (!func_267(uLocal_300, 1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_271[0], true);
					func_84("SCLUB_HOME_MEET", uLocal_74[0]);
					func_251(0);
					func_27(&uLocal_300, 1);
				}
				iLocal_75 = 1;
			}
			break;
		
		case 1:
			iLocal_76 = 1;
			Var0 = { func_71(uLocal_74[0]) };
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_307 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				iLocal_301 = ENTITY::GET_ENTITY_HEALTH(iLocal_307);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_271[0], true), 3f, 3f, 3f, false, true, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_307, false) && func_239(iLocal_307, iLocal_271[0], 1) <= 10f))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_271[0], false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_307) && (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_307) < 1 || (!bParam0 && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_307)))))
				{
					if (!func_70("SCLUB_SMALL_CAR", &Var0))
					{
						func_67("SCLUB_SMALL_CAR", uLocal_74[0], 0);
						func_173(iLocal_271[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					HUD::CLEAR_HELP(true);
					TASK::CLEAR_PED_TASKS(iLocal_271[0]);
					func_237();
					if (!func_267(uLocal_300, 2))
					{
						func_27(&uLocal_300, 2);
					}
					func_236();
					func_86();
					func_229(39, 1);
					func_229(40, 1);
					func_229(41, 1);
					func_229(42, 1);
					func_229(43, 1);
					func_229(44, 1);
					iLocal_75 = 2;
				}
			}
			else if (func_70("SCLUB_SMALL_CAR", &Var0))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		
		case 2:
			iLocal_76 = 2;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_271[0], false))
				{
					iLocal_75 = 3;
				}
			}
			else
			{
				func_173(iLocal_271[0], "NEED_A_VEHICLE", 10);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			iLocal_76 = 3;
			func_226();
			if (!func_171())
			{
				if (func_192())
				{
					PATHFIND::SET_ROADS_IN_AREA(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), false, true);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), false, true);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_287, 10f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_287, 10f, 0);
					iLocal_284 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_287 - Vector(35f, 35f, 35f), Local_287 + Vector(35f, 35f, 35f), false, true, true, true);
					func_8(&iLocal_243);
					if (bParam0)
					{
						func_91(1);
						func_225();
					}
					else
					{
						iLocal_72 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_76 = 4;
			func_222(fVar1, Local_288);
			func_216();
			if ((func_4(&iLocal_255) > 45f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_291) > (100f * 100f)) && func_25(PLAYER::PLAYER_PED_ID(), Local_288, 1) > 100f)
			{
				if (uLocal_74[0] == 8)
				{
					func_175("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_173(iLocal_271[0], "GENERIC_FUCK_YOU", 10);
				}
				func_66(3);
			}
			else if (func_254(iLocal_271[0], 1))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_277))
				{
					HUD::REMOVE_BLIP(&iLocal_277);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_276))
				{
					HUD::REMOVE_BLIP(&iLocal_276);
				}
				func_251(0);
				func_84("SCLUB_HOME_R", uLocal_74[0]);
				iLocal_75 = 9;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_287, 3f, 3f, 2f, true, true, 2) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_286, 5f, 5f, 2f, true, true, 1))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			else if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				func_225();
			}
			break;
		
		case 5:
			iLocal_76 = 5;
			func_222(fVar1, Local_287);
			func_216();
			func_237();
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_287, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_75 = 6;
			}
			else
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_225();
				}
				else
				{
					func_61(Local_287);
				}
				if (func_107("SCLUB_HOME_WALK"))
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
					if (func_59(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_58();
						func_203(iLocal_271[0], Local_286);
						if (uLocal_74[0] == 9 || uLocal_74[0] == 8)
						{
							func_175("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_175("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_75 = 7;
					}
				}
			}
			else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_271[0]);
				func_225();
				HUD::CLEAR_HELP(true);
			}
			break;
		
		case 7:
			iLocal_76 = 7;
			if ((!func_171() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_267(uLocal_300, 2048))
			{
				Var0 = { func_71(uLocal_74[0]) };
				func_85("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_86();
				func_251(0);
				func_27(&uLocal_300, 2048);
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_288, 5f, 5f, 2f, false, true, 1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_286, 5f, 5f, 2f, false, true, 1)) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_267(uLocal_298, 4096) && !func_171()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_271[0]))
			{
				if (iLocal_76 > 1 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_271[0], true)) < (3f * 3f))
				{
					func_173(iLocal_271[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_298, 4096);
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_75 = iLocal_76;
			}
			break;
		
		case 9:
			if (fVar1 > 200f)
			{
				func_66(1);
			}
			else if (fVar1 <= (200f / 2f) && !func_254(iLocal_271[0], 1))
			{
				HUD::CLEAR_PRINTS();
				iLocal_75 = iLocal_76;
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_225();
				}
			}
			break;
	}
}

void func_216()//Position - 0x706F
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_267(uLocal_300, 16))
	{
		if (func_217())
		{
			func_27(&uLocal_300, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_100(iLocal_271[0], 0, 0);
	if (!func_267(uLocal_300, 8))
	{
		if (!func_267(uLocal_300, 4))
		{
			if (!func_267(uLocal_298, 256))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					func_175("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_298, 256);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(sVar0);
				func_27(&uLocal_300, 4);
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			func_94(iLocal_271[0], 1, 1, -1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_271[0], true);
			func_7(&iLocal_252);
			func_27(&uLocal_300, 8);
		}
	}
	else if (func_267(uLocal_300, 4))
	{
		iVar1 = 0;
		bVar2 = ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_271[0], sVar0, func_95(4, 1, 1, func_98(iLocal_307)), 3);
		bVar3 = PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID());
		bVar4 = TASK::GET_SCRIPT_TASK_STATUS(iLocal_271[0], 242628503) == 7;
		bVar5 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
		bVar6 = false;
		if (bVar5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				bVar6 = (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 5f);
			}
		}
		if ((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_4(&iLocal_252) > 35f) || SYSTEM::VDIST(Local_287, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				TASK::TASK_PLAY_ANIM(iLocal_271[0], sVar0, func_95(4, 1, 1, func_98(iLocal_307)), 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (bVar3)
			{
				iLocal_302 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_256();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) - SYSTEM::CEIL((IntToFloat(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) * 0.1f))), 0);
					func_173(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_173(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_298, 128);
			}
			STREAMING::REMOVE_ANIM_DICT(sVar0);
			func_73(&uLocal_300, 4);
		}
		if (!func_267(uLocal_298, 64))
		{
			if (func_4(&iLocal_252) > 10f)
			{
				func_173(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", 10);
				func_173(iLocal_271[0], "SEX_ORAL", 10);
				func_27(&uLocal_298, 64);
			}
		}
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		func_256();
	}
}

int func_217()//Position - 0x735B
{
	struct<3> Var0;
	var uVar1;
	
	if (!func_192())
	{
		return 0;
	}
	func_64(&Var0, &uVar1, 0);
	if (((SYSTEM::VDIST(Local_287, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (75f * 2f) && SYSTEM::VDIST(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (75f / 2f)) && func_116(uLocal_74[0]) > 1) && func_218())
	{
		return 1;
	}
	return 0;
}

int func_218()//Position - 0x73D1
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
		if (func_220(iVar1, 0) && func_219(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x7421
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
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
							if (iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
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
		}
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
			case -508485403:
			case 237329608:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -541039502:
			case 2126816039:
			case -1297908787:
			case -1901288301:
			case 1830236137:
			case -1707715210:
			case -1236346590:
			case -428411780:
			case -1149121978:
			case -1282491670:
			case -1949393167:
			case -201773865:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case 1478163132:
			case -1920284504:
			case -1174301217:
			case -1736391383:
				return 1;
				break;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == 931866387 && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("weevil")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("brioso2"))
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BRIOSO3"))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0, bool bParam1)//Position - 0x786D
{
	if ((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 0;
	}
	if (func_221(iParam0))
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
	if ((((((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("barrage")) || iParam0 == joaat("kamacho")) || iParam0 == joaat("gb200")) || iParam0 == joaat("fagaloa")) || iParam0 == joaat("tezeract")) || iParam0 == joaat("swinger")) || iParam0 == joaat("imperator")) || iParam0 == joaat("locust")) || iParam0 == joaat("schlagen")) || iParam0 == joaat("outlaw")) || iParam0 == joaat("comet7")) || iParam0 == joaat("youga4")) || iParam0 == joaat("SM722"))
	{
		return 0;
	}
	return 1;
}

int func_221(int iParam0)//Position - 0x7A42
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

void func_222(float fParam0, struct<3> Param1)//Position - 0x7A9B
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_267(uLocal_298, 262144))
	{
		if (func_224(iLocal_271[0]))
		{
			if (uLocal_74[0] == 8)
			{
				func_175("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_173(iLocal_271[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&iLocal_246);
			func_27(&uLocal_298, 262144);
		}
	}
	else if (func_4(&iLocal_246) > 10f)
	{
		func_73(&uLocal_298, 262144);
		func_8(&iLocal_246);
	}
	if ((fParam0 > 5f || !func_192()) || func_267(uLocal_300, 4))
	{
		return;
	}
	if (!func_267(uLocal_298, 1) && !func_267(uLocal_298, 128))
	{
		if (SYSTEM::VDIST(Param1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f)
		{
			if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
			{
				if (func_175("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_298, 1);
				}
			}
			else
			{
				func_27(&uLocal_298, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(Local_287, 5f, false, false, false, false, false, false, 0);
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (!func_267(uLocal_298, 16))
		{
			func_173(iLocal_271[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_298, 16);
			func_8(&iLocal_243);
		}
		if (!func_267(uLocal_298, 4))
		{
			func_73(&uLocal_298, 4);
		}
		if (!func_267(uLocal_298, 8))
		{
			func_73(&uLocal_298, 8);
		}
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		fVar2 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&iLocal_249);
		}
		if (!func_267(uLocal_298, 4))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_173(iLocal_271[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_73(&uLocal_298, 4);
			func_8(&iLocal_243);
		}
		if (!func_267(uLocal_298, 8))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_173(iLocal_271[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_73(&uLocal_298, 8);
			func_8(&iLocal_243);
		}
		if (!func_267(uLocal_298, 131072))
		{
			if (func_223(iLocal_271[0], &iLocal_301))
			{
				if (func_4(&iLocal_246) > 5f)
				{
					func_173(iLocal_271[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_298, 131072);
					func_8(&iLocal_243);
				}
			}
		}
		else if (func_4(&iLocal_246) > 5f)
		{
			func_73(&uLocal_298, 131072);
			func_8(&iLocal_246);
		}
		if (!func_267(uLocal_298, 65536))
		{
			if (func_4(&iLocal_243) > 30f || (func_4(&iLocal_243) > 10f && !func_267(uLocal_298, 32)))
			{
				func_173(iLocal_271[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_298, 32);
				func_27(&uLocal_298, 524288);
				func_8(&iLocal_243);
			}
			else if (func_267(uLocal_298, 524288))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_271[0]) && func_4(&iLocal_243) > 4f)
				{
					func_173(PLAYER::PLAYER_PED_ID(), "BOOTY_FLIRT_RESP", 10);
					func_73(&uLocal_298, 524288);
				}
			}
		}
	}
}

int func_223(int iParam0, int iParam1)//Position - 0x7E51
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

int func_224(int iParam0)//Position - 0x7EA9
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(110, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_225()//Position - 0x7EE7
{
	func_87();
	func_8(&iLocal_243);
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_276))
		{
			HUD::REMOVE_BLIP(&iLocal_276);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_277))
		{
			iLocal_277 = func_62(Local_288, 0);
		}
		func_8(&iLocal_255);
		Local_291 = { ENTITY::GET_ENTITY_COORDS(iLocal_271[0], true) };
		iLocal_75 = 4;
	}
	else
	{
		func_8(&iLocal_246);
		func_61(Local_287);
		iLocal_75 = 5;
	}
}

void func_226()//Position - 0x7F5C
{
	if (!func_267(uLocal_298, 1024))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_227(uLocal_74[0]))
			{
				if (!func_171())
				{
					func_173(iLocal_271[0], "NICE_CAR", 10);
					func_27(&uLocal_298, 1024);
				}
			}
		}
	}
}

int func_227(int iParam0)//Position - 0x7FBB
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_228(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_228(int iParam0, int iParam1)//Position - 0x7FF0
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

void func_229(int iParam0, bool bParam1)//Position - 0x8268
{
	if (bParam1)
	{
		if (!func_235(iParam0, 2, 1))
		{
			func_234(iParam0, 2, 1);
		}
	}
	else if (func_235(iParam0, 2, 1))
	{
		func_230(iParam0, 2, 1);
	}
}

void func_230(int iParam0, int iParam1, bool bParam2)//Position - 0x829F
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
		if (func_54() == 0)
		{
			iVar0 = func_232(func_233(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_231(func_233(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

void func_231(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8311
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_232(int iParam0, int iParam1, int iParam2)//Position - 0x8341
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_76(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_233(int iParam0)//Position - 0x837E
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

void func_234(int iParam0, int iParam1, bool bParam2)//Position - 0x86F9
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
		if (func_54() == 0)
		{
			iVar0 = func_232(func_233(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_231(func_233(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

int func_235(int iParam0, int iParam1, bool bParam2)//Position - 0x876B
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
		if (func_54() == 0)
		{
			return BitTest(func_232(func_233(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_236()//Position - 0x87CC
{
	if (uLocal_74[0] == 8)
	{
		func_175("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_173(iLocal_271[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_237()//Position - 0x87FD
{
	if (!PED::IS_PED_IN_GROUP(iLocal_271[0]) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_271[0], true)) < 10f)
	{
		PED::SET_PED_AS_GROUP_MEMBER(iLocal_271[0], func_238());
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_271[0], 0);
	}
}

int func_238()//Position - 0x884F
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

float func_239(int iParam0, int iParam1, bool bParam2)//Position - 0x885F
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

int func_240(int iParam0, var uParam1, int* iParam2)//Position - 0x88BD
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
		if (func_243(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_241(&uVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
				{
					if (!PED::_DOES_RELATIONSHIP_GROUP_EXIST(iLocal_70))
					{
						PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_70);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, joaat("player"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("player"), iLocal_70);
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

void func_241(var uParam0)//Position - 0x8977
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_242(1);
			break;
		
		case 2:
			break;
	}
}

void func_242(bool bParam0)//Position - 0x89AA
{
	Global_112380 = 0;
	Global_112380.f_1 = -1;
	Global_112380.f_2 = -1;
	if (bParam0)
	{
		func_124(-1);
	}
}

int func_243(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x89CF
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_267(*uParam2, 1))
		{
			if (func_250(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_267(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_267(*uParam2, 4))
		{
			if (func_248(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_267(*uParam2, 8))
		{
			if (func_247(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_267(*uParam2, 128);
		if (bParam4)
		{
			if (func_244(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_267(*uParam2, 16))
		{
			if (func_244(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8AF9
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_62) > 100f)
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
	if (func_246(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_245(iParam0, 1) < 1.5f)
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

float func_245(int iParam0, bool bParam1)//Position - 0x8CC1
{
	return func_239(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

int func_246(int iParam0, int iParam1)//Position - 0x8CD9
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

int func_247(int iParam0, int iParam1, var uParam2)//Position - 0x8D2E
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

int func_248(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x8D7C
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
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_249(iVar1))
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

int func_249(int iParam0)//Position - 0x8EF5
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
						if (func_239(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
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

int func_250(int iParam0, var uParam1)//Position - 0x8FC3
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_245(iParam0, 1) < uParam1->f_2)
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

void func_251(int iParam0)//Position - 0x9048
{
	struct<4> Var0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_278[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_278[iParam0]));
	}
	uLocal_278[iParam0] = func_252(iLocal_271[iParam0], 0, 145);
	Var0 = { func_71(uLocal_74[iParam0]) };
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_278[iParam0], &Var0);
}

int func_252(int iParam0, bool bParam1, int iParam2)//Position - 0x9099
{
	int iVar0;
	
	iVar0 = func_253(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_253(int iParam0, bool bParam1, bool bParam2)//Position - 0x90E3
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_254(int iParam0, int iParam1)//Position - 0x9187
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PED::GET_PED_GROUP_INDEX(iParam0) == func_238())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(iParam0, iVar2, false) && SYSTEM::VDIST(Var0, Var1) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_267(uLocal_300, 2))
	{
		fVar3 = MISC::ABSF((Var0.f_2 - Var1.f_2));
		if (fVar3 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_255()//Position - 0x922E
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			func_196(iLocal_271[0], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0f, 2f, 0f));
			iLocal_72 = 1;
			iLocal_73 = 0;
		}
	}
}

void func_256()//Position - 0x927E
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_257();
}

void func_257()//Position - 0x928E
{
	Global_23011.f_134 = 1;
}

int func_258(int iParam0, bool bParam1)//Position - 0x929C
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_259(bool bParam0)//Position - 0x92E4
{
	struct<8> Var0;
	
	if (!func_165(iLocal_71))
	{
		iLocal_71 = func_169();
		func_159(&iLocal_71, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_267(uLocal_300, 512))
		{
			if (func_266(iLocal_71) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_271[0]))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_74[0], 64);
					func_193(&uLocal_78, 1, 0, func_194(uLocal_74[0]), 0, 1);
					func_265(&uLocal_78, func_112(uLocal_74[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_263();
				}
				func_262(iLocal_271[0]);
				func_27(&uLocal_300, 512);
			}
		}
		else if (func_261())
		{
			func_73(&uLocal_300, 512);
		}
		else if ((!func_171() && func_260()) && !func_261())
		{
			func_242(1);
			func_66(2);
		}
	}
}

int func_260()//Position - 0x93E9
{
	if (Global_21605 == 0)
	{
		return 1;
	}
	return 0;
}

int func_261()//Position - 0x9400
{
	if (Global_21654 == 1 || Global_22621 == 1)
	{
		return 1;
	}
	return 0;
}

void func_262(int iParam0)//Position - 0x9423
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(iParam0, true);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_306);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_306);
			TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_286, 1.5f, -1, 0.25f, false, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_306);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_306);
		}
	}
}

void func_263()//Position - 0x948C
{
	int iVar0;
	
	if (func_264())
	{
		return;
	}
	iVar0 = func_115(uLocal_74[0]);
	func_109(-384575792, iVar0, 6, 3, func_113(), func_112(uLocal_74[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_264()//Position - 0x94CD
{
	if (func_54() == 0)
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, bool bParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x94E2
{
	func_189(uParam0, bParam1, sParam2, iParam5, iParam6, 0);
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
	return func_177(sParam3, iParam4, bParam7);
}

bool func_266(int iParam0)//Position - 0x9530
{
	return func_164(func_169(), iParam0);
}

bool func_267(var uParam0, int iParam1)//Position - 0x9542
{
	return (uParam0 && iParam1) != 0;
}

int func_268(var uParam0, bool bParam1)//Position - 0x9551
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	char cVar3[64];
	struct<16> Var4;
	struct<8> Var5;
	
	func_296();
	func_64(&Var0, &fVar1, bParam1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fLocal_296 == -1f)
		{
			fLocal_296 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		}
		if (iLocal_299 == -1)
		{
			iLocal_299 = uParam0->f_3;
		}
		if (!func_267(uLocal_300, 32))
		{
			func_292(&uLocal_274, func_294((*uParam0)[0], 0));
			func_291(&uLocal_274);
			func_27(&uLocal_300, 32);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@stripper");
			STREAMING::REQUEST_ANIM_DICT("gestures@f@standing@casual");
			func_290();
			return 0;
		}
		else if ((!func_289(&uLocal_274) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@stripper")) || !func_288())
		{
			return 0;
		}
		if (bLocal_304)
		{
			if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				return 0;
			}
		}
		if (!func_267(uLocal_300, 1024))
		{
			uLocal_74[0] = (*uParam0)[0];
			iLocal_271[0] = PED::CREATE_PED(26, func_294((*uParam0)[0], 0), Var0, fVar1, true, true);
			func_282(iLocal_271[0], uLocal_74[0], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_271[iVar2], true);
			PED::SET_PED_KEEP_TASK(iLocal_271[0], true);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_271[0], true);
			func_278(iLocal_271[0]);
			TASK::TASK_PLAY_ANIM(iLocal_271[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0f, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_271[iVar2], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_271[0], 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_271[0], func_194((*uParam0)[0]));
			func_193(&uLocal_78, 1, iLocal_271[0], func_194((*uParam0)[0]), 0, 1);
			func_27(&uLocal_300, 1024);
		}
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) > 100f)
		{
			if (func_192())
			{
				if (!func_267(uLocal_300, 1))
				{
					func_277(bParam1);
					func_251(0);
					func_27(&uLocal_300, 1);
				}
			}
			if (!func_267(uLocal_300, 64) && !func_267(uLocal_300, 512))
			{
				if (func_276(func_112((*uParam0)[0])))
				{
					StringCopy(&cVar3, "BC_PLYRC_", 64);
					if (func_77() == 2)
					{
						func_193(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						StringConCat(&cVar3, "T", 64);
					}
					else if (func_77() == 0)
					{
						func_193(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						StringConCat(&cVar3, "M", 64);
					}
					else if (func_77() == 1)
					{
						func_193(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						StringConCat(&cVar3, "F", 64);
					}
					func_193(&uLocal_78, 3, 0, func_194((*uParam0)[0]), 0, 1);
					Var4 = { func_275() };
					func_270(&uLocal_78, func_112((*uParam0)[0]), "BCAUD", &cVar3, &cVar3, &Var4, &Var4, 12, 1, 0, 0, 0);
					func_27(&uLocal_300, 64);
				}
				if (func_165(iLocal_71))
				{
					if (func_266(iLocal_71))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var5, "SC_CANCEL_", 64);
							StringIntConCat(&Var5, (*uParam0)[0], 64);
							func_193(&uLocal_78, 1, 0, func_194((*uParam0)[0]), 0, 1);
							func_265(&uLocal_78, func_112((*uParam0)[0]), "SHAUD", &Var5, 12, 0, 0, 1);
						}
						else
						{
							func_263();
						}
						func_27(&uLocal_300, 512);
					}
				}
			}
			else if (func_261())
			{
				func_73(&uLocal_300, 64);
				func_73(&uLocal_300, 512);
			}
			else if ((!func_171() && func_260()) && !func_261())
			{
				func_269((*uParam0)[0]);
				func_242(1);
				func_66(2);
			}
			if (!func_267(uLocal_300, 128))
			{
				if (!func_33(0))
				{
					func_67("SCLUB_HOME_C_H", uLocal_74[0], 0);
					func_27(&uLocal_300, 128);
				}
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) > (fLocal_296 + (200f * 3f)))
			{
				func_66(1);
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) < fLocal_296)
			{
				fLocal_296 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_77() == 2)
	{
		func_193(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (func_77() == 0)
	{
		func_193(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_77() == 1)
	{
		func_193(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_269(int iParam0)//Position - 0x99D4
{
	if (Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_113386.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_270(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x9A33
{
	var uVar0;
	var uVar1;
	
	func_189(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_274();
	if (iParam8 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_272(2, &uVar0, &uVar1, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_271(&uVar0, &uVar1, iParam7, bParam11);
}

int func_271(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x9A92
{
	int iVar0;
	
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam2 > Global_21607)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
				}
				else
				{
					func_188();
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
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_186();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22601 = Global_22602;
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21224.f_370 = Global_22594;
		Global_21601 = Global_21602;
		Global_21603 = Global_21604;
		if (Global_21863 == 0)
		{
			Global_21759[0 /*6*/] = { Global_21785[0 /*6*/] };
			Global_21759[1 /*6*/] = { Global_21785[1 /*6*/] };
			Global_21811[0 /*6*/] = { Global_21837[0 /*6*/] };
			Global_21811[1 /*6*/] = { Global_21837[1 /*6*/] };
			Global_21772[0 /*6*/] = { Global_21798[0 /*6*/] };
			Global_21772[1 /*6*/] = { Global_21798[1 /*6*/] };
			Global_21824[0 /*6*/] = { Global_21850[0 /*6*/] };
			Global_21824[1 /*6*/] = { Global_21850[1 /*6*/] };
		}
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam3)
			{
				func_134();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_185())
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
					if (Global_21863 == 0)
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
			if (func_23())
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
			}
			func_184();
			Global_21615 = bParam3;
		}
		Global_21607 = iParam2;
		if (Global_21601 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21601)
			{
				StringCopy(&(Global_21224.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21224.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20471 = 0;
		func_183();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21607 || iParam2 == Global_21607)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_188();
	}
	return 0;
}

void func_272(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x9DFD
{
	func_273(iParam0);
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

void func_273(var uParam0)//Position - 0x9E6D
{
	Global_21602 = uParam0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
}

void func_274()//Position - 0x9E93
{
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_21619 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
}

struct<16> func_275()//Position - 0x9ECC
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_74[0], 64);
	return Var0;
}

int func_276(int iParam0)//Position - 0x9EEA
{
	if ((Global_22719 || Global_22718) || Global_22720)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (Global_20266.f_1 == 10)
		{
			if (Global_7451 == iParam0)
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

void func_277(bool bParam0)//Position - 0x9F4E
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
				func_84("SCLUB_HOME_MEE4", uLocal_74[0]);
			}
			else
			{
				func_84("SCLUB_HOME_MEET", uLocal_74[0]);
			}
			break;
		
		case 8:
			func_84("SCLUB_HOME_LIZ", uLocal_74[0]);
			break;
		
		case 9:
			func_84("SCLUB_HOME_HITCH", uLocal_74[0]);
			break;
	}
}

void func_278(int iParam0)//Position - 0x9FE1
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_f_y_stripper_02"))
	{
		func_281(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_280(iParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_279(iParam0, 0, 0);
	}
}

void func_279(int iParam0, int iParam1, int iParam2)//Position - 0xA019
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 6, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_280(int iParam0, int iParam1, int iParam2)//Position - 0xA03E
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 3, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_281(int iParam0, int iParam1, int iParam2)//Position - 0xA063
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 8, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_282(int iParam0, int iParam1, bool bParam2)//Position - 0xA08A
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
		bVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 1);
					func_286(iParam0, 2, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_279(iParam0, 4, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 1);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 1);
					func_286(iParam0, 1, 1);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 1);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 1, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 1);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 1);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 2, 0);
					func_280(iParam0, 0, 2);
					func_285(iParam0, 1, 1);
					func_279(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 2, 1);
					func_280(iParam0, 1, 2);
					func_285(iParam0, 0, 2);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 1, 2);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 1);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 2);
					func_279(iParam0, 2, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 1);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 0, 1);
					func_284(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 1);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 0, 2);
					func_280(iParam0, 1, 1);
					func_285(iParam0, 0, 1);
					func_279(iParam0, 0, 0);
					func_281(iParam0, 1, 0);
					func_284(iParam0, bParam2, 0, 0);
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

void func_283(int iParam0, int iParam1, int iParam2)//Position - 0xA4E5
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 11, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_284(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA50C
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == func_258(0, 0) || iVar0 == func_258(0, 1))
	{
		if (bParam1)
		{
			func_280(iParam0, 2, 0);
			func_281(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_258(1, 0) || iVar0 == func_258(1, 1))
	{
		if (bParam1)
		{
			func_280(iParam0, 0, iParam2);
			func_279(iParam0, iParam3, 0);
			func_281(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_281(iParam0, 1, 0);
		}
	}
}

void func_285(int iParam0, int iParam1, int iParam2)//Position - 0xA5B0
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 4, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_286(int iParam0, int iParam1, int iParam2)//Position - 0xA5D5
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 2, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_287(int iParam0, int iParam1, int iParam2)//Position - 0xA5FA
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 0, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, iParam1, iParam2, 0);
	}
}

int func_288()//Position - 0xA61F
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
	{
		return 1;
	}
	else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_204()))
	{
		return 1;
	}
	return 0;
}

int func_289(var uParam0)//Position - 0xA64C
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

void func_290()//Position - 0xA693
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_204());
	}
}

void func_291(var uParam0)//Position - 0xA6AF
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

int func_292(var uParam0, int iParam1)//Position - 0xA6DF
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
	iVar1 = func_293(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_293(var uParam0)//Position - 0xA73C
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

int func_294(int iParam0, bool bParam1)//Position - 0xA768
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_112(iParam0);
	if (iVar0 != 145)
	{
		return func_295(iVar0);
	}
	return func_258(0, 0);
}

int func_295(int iParam0)//Position - 0xA79B
{
	if (!func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_296()//Position - 0xA7C1
{
	switch (uLocal_74[0])
	{
		case 1:
			Local_285 = { 128.1002f, -1895.001f, 22.4811f };
			Local_286 = { 128.1059f, -1896.819f, 22.6792f };
			Local_287 = { 133.9411f, -1881.89f, 22.5257f };
			Local_288 = { 130.1663f, -1893.057f, 22.3748f };
			Local_289 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_293 = 330.5705f;
			fLocal_294 = 244f;
			Local_292 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_295 = fLocal_294;
			break;
		
		case 0:
			Local_285 = { -161.9628f, -1636.501f, 33.0339f };
			Local_286 = { -159.9415f, -1637.307f, 33.0339f };
			Local_287 = { -178.6316f, -1629.522f, 32.1789f };
			Local_288 = { -166.1453f, -1633.102f, 32.6574f };
			Local_289 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_293 = 108.072f;
			fLocal_294 = 180.9811f;
			Local_292 = { Local_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 4:
			Local_285 = { -198.3824f, 87.8785f, 68.7436f };
			Local_286 = { -197.2292f, 86.3497f, 68.7561f };
			Local_287 = { -200.9078f, 113.537f, 68.5518f };
			Local_288 = { -200.1384f, 96.9809f, 68.5203f };
			Local_289 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_293 = 48.99f;
			fLocal_294 = 64.3f;
			Local_292 = { Local_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 5:
			Local_285 = { -849.0348f, 510.6906f, 89.8218f };
			Local_286 = { -849.0408f, 508.5767f, 89.8218f };
			Local_287 = { -846.1005f, 520.2202f, 89.6217f };
			Local_288 = { -851.8972f, 512.73f, 89.6217f };
			Local_289 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_293 = 92.365f;
			fLocal_294 = 293f;
			Local_292 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_295 = fLocal_294;
			break;
		
		case 8:
			Local_285 = { -28.2427f, -1555.892f, 29.6918f };
			Local_286 = { -24.8589f, -1556.846f, 29.6819f };
			Local_287 = { -41.8174f, -1575.609f, 28.2831f };
			Local_288 = { -25.3404f, -1556.341f, 29.6919f };
			Local_289 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_293 = 181.352f;
			fLocal_294 = 47.9206f;
			Local_292 = { Local_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 9:
			Local_285 = { 3313.487f, 5175.831f, 18.619f };
			Local_286 = { 3310.816f, 5176.331f, 18.619f };
			Local_287 = { 3334.321f, 5161.122f, 17.2996f };
			Local_288 = { 3317.788f, 5171.707f, 17.4471f };
			Local_289 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_293 = 236.4579f;
			Local_292 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_295 = 310.8648f;
			break;
	}
}

int func_297()//Position - 0xAB39
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
			if (bLocal_304)
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

int func_298(int iParam0, int iParam1, bool bParam2)//Position - 0xAB97
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0;
			}
		}
		if (!func_301(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_300())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_299(157))
				{
					if (!bParam2)
					{
						func_302();
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
					func_302();
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
				func_302();
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
			func_302();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_299(int iParam0)//Position - 0xACAD
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_300()//Position - 0xACC4
{
	return Global_2714762.f_693;
}

bool func_301(bool bParam0)//Position - 0xACD3
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_302()//Position - 0xACE4
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_303()//Position - 0xACF0
{
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_86();
	HUD::CLEAR_PRINTS();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_284, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), true, true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_287 - Vector(3f, 3f, 3f), Local_287 + Vector(3f, 3f, 3f), 15f, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_271[0], false))
		{
			if (!func_267(uLocal_300, 8192))
			{
				TASK::TASK_WANDER_STANDARD(iLocal_271[0], 40000f, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_271[0], true);
			if (!PED::_DOES_RELATIONSHIP_GROUP_EXIST(iLocal_70))
			{
				PED::ADD_RELATIONSHIP_GROUP("BootyCall", &iLocal_70);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_70, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("player"), iLocal_70);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_271[0], iLocal_70);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_271[0]));
	}
	if (iLocal_299 != -1)
	{
		func_305(&iLocal_299);
	}
	if (bLocal_69)
	{
		func_143(&uLocal_68);
	}
	PLAYER::_0xDE45D1A1EF45EE61(PLAYER::PLAYER_ID(), false);
	func_123(uLocal_74[0], -1);
	Global_112380 = 0;
	func_304(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_304(bool bParam0)//Position - 0xAE28
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_229(iVar0, bParam0);
		iVar0++;
	}
}

void func_305(int iParam0)//Position - 0xAE4B
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43014)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

