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
	var uLocal_85 = -1;
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
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_116[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_117 = NULL;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
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
	var uLocal_132 = 16;
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
	var uLocal_297[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_298[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<16> Local_299[31];
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
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
	iLocal_111 = -1;
	sLocal_117 = "";
	iLocal_121 = 8;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("appSmuggler")) > 1)
	{
		func_392(0, 1);
	}
	func_382();
	while (func_381())
	{
		func_380();
		if (!BitTest(uLocal_109, 5) && func_379())
		{
			func_377();
			func_354();
		}
		if (!BitTest(uLocal_109, 8) && BitTest(uLocal_109, 5))
		{
			func_348();
		}
		func_342();
		func_325();
		func_320();
		func_312();
		func_310();
		func_272();
		if (!BitTest(uLocal_109, 2))
		{
			func_6();
		}
		else if (!func_5(&uLocal_122))
		{
			func_4(&uLocal_122, 0, 0);
		}
		else if (func_3(&uLocal_122, 200, 0))
		{
			if (!Global_1946250.f_3364 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_1(1);
				Global_1946108 = 1;
				func_392(0, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x155
{
	if (!func_2())
	{
		Global_1946250.f_3364 = 1;
		Global_1946250.f_3365 = iParam0;
	}
}

bool func_2()//Position - 0x176
{
	return Global_1946250.f_519;
}

int func_3(var uParam0, int iParam1, bool bParam2)//Position - 0x185
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)//Position - 0x1E3
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

bool func_5(var uParam0)//Position - 0x228
{
	return uParam0->f_1;
}

void func_6()//Position - 0x234
{
	int iVar0;
	
	func_270();
	if (BitTest(uLocal_109, 0))
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_301))
		{
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_301);
			switch (iVar0)
			{
				case 0:
					func_269();
					func_268();
					break;
				
				case 1:
					func_221();
					break;
				
				case 35:
					if (iLocal_119 != 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_119 = 0;
					break;
				
				case 36:
					if (iLocal_119 != 1)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_119 = 1;
					break;
				
				case 37:
					if (iLocal_119 != 2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_119 = 2;
					break;
				
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
					func_203(func_220(iVar0), 0);
					break;
				
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
					if (func_202(15964, -1))
					{
						func_203(func_220(iVar0), 0);
					}
					else
					{
						iLocal_119 = 2;
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SHOW_SCREEN", 2f, -1f, -1f, -1f, -1f);
					}
					break;
				
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					func_7(func_220(iVar0));
					break;
			}
			MISC::CLEAR_BIT(&uLocal_109, 0);
		}
	}
}

void func_7(int iParam0)//Position - 0x3D5
{
	struct<2> Var0;
	struct<4> Var1;
	
	if (func_201(PLAYER::PLAYER_ID()))
	{
		func_198("HAPP_STEAL_T", "HAPP_STEAL_D", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (iParam0 != 8 && func_196(iParam0))
	{
		func_198("HAPP_STEAL_T", "HAPP_STEAL_D1", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (!func_12(229))
	{
		func_198("HAPP_STEAL_T", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else
	{
		func_10(iParam0);
		StringCopy(&Var0, "HAPP_STEAL_C1", 16);
		StringCopy(&Var1, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var0, "HAPP_STEAL_C0", 16);
			Var1 = { func_9(iParam0) };
		}
		func_198("HAPP_STEAL_T", &Var0, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 2, -1, &Var1);
	}
	func_8();
}

void func_8()//Position - 0x493
{
	sLocal_117 = "";
}

struct<4> func_9(int iParam0)//Position - 0x49F
{
	struct<4> Var0;
	
	StringCopy(&Var0, "INVALID", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPPT_ANIMAL", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPPT_ART", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPPT_CHEMS", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPPT_GOODS", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPPT_JEWEL", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPPT_MEDS", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPPT_NARC", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPPT_TOBAC", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPPT_MIXED", 16);
			break;
	}
	return Var0;
}

void func_10(int iParam0)//Position - 0x54F
{
	iLocal_121 = iParam0;
}

char* func_11()//Position - 0x55B
{
	return sLocal_117;
}

int func_12(int iParam0)//Position - 0x565
{
	int iVar0;
	
	if (!func_195(PLAYER::PLAYER_ID(), iParam0, 0))
	{
		iVar0 = func_21(PLAYER::PLAYER_ID(), iParam0, 0);
		if (iVar0 == 7)
		{
			if (func_19(PLAYER::PLAYER_ID()))
			{
				func_18("UA_ML_F_GOON1");
			}
			else if (func_17(PLAYER::PLAYER_ID()))
			{
				func_18("UA_ML_F_GOON2");
			}
			else
			{
				func_18("UA_ML_F_GOON3");
			}
		}
		else if (iVar0 == 15)
		{
			if (func_19(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G1");
			}
			else if (func_17(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G2");
			}
			else
			{
				func_18("GENERAL_MLF_G3");
			}
		}
		else if (iVar0 == 16)
		{
			if (func_19(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G4");
			}
			else if (func_17(PLAYER::PLAYER_ID()))
			{
				func_18("GENERAL_MLF_G5");
			}
			else
			{
				func_18("GENERAL_MLF_G6");
			}
		}
		else
		{
			func_18("BKR_TF_R6");
		}
		return 0;
	}
	if (!func_15(PLAYER::PLAYER_ID()))
	{
		func_18("DBG_BUN_NB");
		return 0;
	}
	if (func_13(PLAYER::PLAYER_ID()))
	{
		func_18("BKR_TF_R3");
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_18("BKR_TF_R3");
		return 0;
	}
	return 1;
}

int func_13(int iParam0)//Position - 0x691
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_14(iParam0, 9);
	}
	return 0;
}

bool func_14(int iParam0, int iParam1)//Position - 0x6AF
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_15(int iParam0)//Position - 0x6C7
{
	if (iParam0 != func_16())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_16())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_16()//Position - 0x6FC
{
	return -1;
}

int func_17(int iParam0)//Position - 0x705
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 26);
}

void func_18(char* sParam0)//Position - 0x728
{
	sLocal_117 = sParam0;
}

bool func_19(int iParam0)//Position - 0x734
{
	return func_20(iParam0, 1);
}

int func_20(int iParam0, int iParam1)//Position - 0x743
{
	if (iParam0 != func_16())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_16())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, bool bParam2)//Position - 0x792
{
	int iVar0;
	int iVar1;
	
	if (!func_58(func_167(iParam1, -1, -1, -1), func_121(iParam1, -1, 1, -1, -1, iParam0), func_67(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_19(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_56(iParam1) >= func_55(iVar0))
	{
		return 5;
	}
	if (func_54(iParam0))
	{
		return 6;
	}
	if (func_53(iParam0))
	{
		return 14;
	}
	if (func_52(iParam0) && !func_49(iParam0))
	{
		return 17;
	}
	iVar1 = func_44(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_43(iParam1) == 1)
	{
		if ((func_42() || func_41()) || ((!bParam2 && func_40() != 0) && func_43(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_43(iParam1) == 2)
	{
		if (!func_37(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1892703[iParam0 /*599*/].f_10.f_34 != func_16())
			{
				return 9;
			}
		}
		if (func_36(iParam0))
		{
			return 10;
		}
	}
	else if (func_34(iParam1))
	{
		if (func_32(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_31(iParam1))
	{
		if (func_30())
		{
			return 13;
		}
		if (func_27())
		{
			return 12;
		}
	}
	if (func_32(iParam0) + 1 < func_26(iVar0))
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
			if (!func_23(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_22(iParam0, 21) || func_22(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

var func_22(int iParam0, int iParam1)//Position - 0x981
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

int func_23(int iParam0, int iParam1)//Position - 0x997
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_24(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_14(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_24(int iParam0, int iParam1, bool bParam2)//Position - 0x9E9
{
	if (iParam1 != func_16())
	{
		if (!bParam2)
		{
			if (func_25(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1892703[iParam0 /*599*/].f_10 != func_16())
		{
			return iParam1 == Global_1892703[iParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)//Position - 0xA33
{
	if (iParam1 != func_16())
	{
		if (iParam0 != func_16())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 != func_16())
			{
				if (Global_1892703[iParam0 /*599*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_26(int iParam0)//Position - 0xA78
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18680;
		
		case 183:
			return Global_262145.f_18688;
		
		case 185:
			return Global_262145.f_18697;
		
		case 182:
			return Global_262145.f_18708;
		
		case 186:
			return Global_262145.f_18717;
		
		case 195:
			return Global_262145.f_18735;
		
		case 198:
			return Global_262145.f_18745;
		
		case 197:
			return Global_262145.f_18757;
		
		case 207:
			return Global_262145.f_18765;
		
		case 209:
			return Global_262145.f_18778;
		
		case 208:
			return Global_262145.f_18786;
		
		case 201:
			return Global_262145.f_18819;
		
		case 211:
			return Global_262145.f_18887;
		
		case 193:
			return Global_262145.f_18910;
		
		case 205:
			return Global_262145.f_18928;
		
		case 189:
			return Global_262145.f_18893;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_27()//Position - 0xB9C
{
	if (Global_1946113)
	{
		return 0;
	}
	return func_28();
}

int func_28()//Position - 0xBB3
{
	if (func_29())
	{
		return 1;
	}
	return Global_2714762.f_744;
}

bool func_29()//Position - 0xBCD
{
	return Global_1575016 == 10;
}

bool func_30()//Position - 0xBDC
{
	return Global_262145.f_15734;
}

int func_31(int iParam0)//Position - 0xBEB
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

int func_32(int iParam0)//Position - 0xC11
{
	if (func_33(iParam0) == func_16())
	{
		return 0;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_19;
}

int func_33(int iParam0)//Position - 0xC37
{
	if (iParam0 != func_16())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_16();
}

int func_34(int iParam0)//Position - 0xC5A
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
	return func_35(iParam0, 0);
	return 0;
}

int func_35(int iParam0, int iParam1)//Position - 0xCB4
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

int func_36(int iParam0)//Position - 0xD09
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1892703[iParam0 /*599*/].f_10.f_34 != func_16() && Global_1892703[iParam0 /*599*/].f_10.f_34 == iVar1) && Global_1892703[iVar1 /*599*/].f_10.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0)//Position - 0xD79
{
	switch (iParam0)
	{
		case 179:
			if (func_39() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_38() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_38() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_38()//Position - 0xDC2
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
			if (func_15(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_39()//Position - 0xDFF
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
			if (func_19(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_40()//Position - 0xE3C
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_103;
}

bool func_41()//Position - 0xE53
{
	return Global_1920255.f_11.f_144 != -1;
}

bool func_42()//Position - 0xE65
{
	return Global_1920255.f_11.f_143 != -1;
}

int func_43(int iParam0)//Position - 0xE77
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

int func_44(int iParam0)//Position - 0x10B9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		iVar1 = Global_1892703[iParam0 /*599*/].f_10.f_11[iVar0];
		if (iVar1 != func_16())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_54(iVar1))
				{
					return 7;
				}
				if (func_53(iVar1))
				{
					return 15;
				}
				if (func_45(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)//Position - 0x1125
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (((((BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 2) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 3)) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 5)) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 6)) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 7)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_46()//Position - 0x11C3
{
	return (func_47() - 1);
}

int func_47()//Position - 0x11D1
{
	return func_48(PLAYER::PLAYER_ID());
}

int func_48(int iParam0)//Position - 0x11E1
{
	int iVar0;
	
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_16() && Global_1892703[iVar0 /*599*/].f_10.f_428 == 1)
	{
		return 8;
	}
	return 4;
}

int func_49(int iParam0)//Position - 0x121B
{
	if (iParam0 != func_16())
	{
		if (func_51(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_50(Global_2689235[iParam0 /*453*/].f_318.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x1262
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
	}
	return -1;
}

int func_51(int iParam0, bool bParam1, bool bParam2)//Position - 0x16E9
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

int func_52(int iParam0)//Position - 0x1749
{
	if (iParam0 != func_16())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 4);
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x176E
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
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

int func_54(int iParam0)//Position - 0x17DA
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x17FD
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_13038;
		
		case 155:
			return Global_262145.f_13063;
		
		case 153:
			return Global_262145.f_13027;
		
		case 163:
			return Global_262145.f_13003;
		
		case 160:
			return Global_262145.f_13016;
		
		case 154:
			return Global_262145.f_13073;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15561;
		
		case 172:
			return Global_262145.f_15580;
		
		case 148:
			return Global_262145.f_18794;
		
		case 179:
			return Global_262145.f_18802;
		
		case 201:
			return Global_262145.f_18816;
		
		case 200:
			return Global_262145.f_18856;
		
		case 211:
			return Global_262145.f_18885;
		
		case 194:
			return Global_262145.f_18897;
		
		case 193:
			return Global_262145.f_18908;
		
		case 210:
			return Global_262145.f_18920;
		
		case 205:
			return Global_262145.f_18926;
		
		case 199:
			return Global_262145.f_18939;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_56(int iParam0)//Position - 0x194F
{
	return Global_1920255.f_11.f_147[func_57(iParam0)];
}

int func_57(int iParam0)//Position - 0x1967
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
		
		default:
	}
	return -1;
}

int func_58(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1D63
{
	if ((func_66(iParam0, bParam3, bParam4) || func_65(iParam1, bParam3, bParam4)) || func_59(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)//Position - 0x1D9D
{
	return func_60(2, iParam0, 0, bParam1, bParam2);
}

int func_60(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1DB1
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_64(iParam0) - func_63(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_63(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_64(iParam0) - func_62(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_63(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_64(iParam0) - func_63(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_61(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x1E77
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

int func_62(int iParam0)//Position - 0x1EB1
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_63(int iParam0, bool bParam1)//Position - 0x1EF7
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x1F94
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

int func_65(int iParam0, bool bParam1, bool bParam2)//Position - 0x1FD4
{
	return func_60(1, iParam0, 0, bParam1, bParam2);
}

int func_66(int iParam0, bool bParam1, bool bParam2)//Position - 0x1FE8
{
	return func_60(0, iParam0, 0, bParam1, bParam2);
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1FFC
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
			return func_120(iParam1);
		
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
			return func_118(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_112(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_100(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 233:
			return func_93(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
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
			return func_84(iParam1, iParam2);
		
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
			return func_81(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_80(iParam1);
		
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
			return func_76(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_71(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_68(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22CF
{
	int iVar0;
	
	iVar0 = func_70(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_69(iParam0, iParam2));
	return iVar0;
}

int func_69(int iParam0, var uParam1)//Position - 0x22F2
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_70(int iParam0, var uParam1, var uParam2)//Position - 0x230C
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2326
{
	int iVar0;
	
	iVar0 = func_75(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_72(iParam0, iParam2));
	return iVar0;
}

int func_72(int iParam0, int iParam1)//Position - 0x2349
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
			if (func_74(iParam1, 1))
			{
				Var0 = { func_73(iParam1) };
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

Vector3 func_73(int iParam0)//Position - 0x24B0
{
	return Global_1892703[iParam0 /*599*/].f_10.f_305;
}

bool func_74(int iParam0, bool bParam1)//Position - 0x24C8
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_16();
}

int func_75(int iParam0, int iParam1, var uParam2)//Position - 0x24F3
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

int func_76(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2756
{
	int iVar0;
	
	iVar0 = func_79(iParam0, iParam1, iParam3);
	if (!func_78(iParam0))
	{
		iVar0 = (iVar0 + func_77(iParam0, iParam2));
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1)//Position - 0x2783
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
			if (func_32(iParam1) + 1 == 1)
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

int func_78(int iParam0)//Position - 0x27D5
{
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2)//Position - 0x27DE
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

int func_80(int iParam0)//Position - 0x298D
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

int func_81(int iParam0, int iParam1, int iParam2)//Position - 0x29D9
{
	int iVar0;
	
	iVar0 = func_83(iParam0, iParam1);
	if (func_82(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_82(int iParam0)//Position - 0x29FD
{
	return 1;
}

int func_83(int iParam0, int iParam1)//Position - 0x2A06
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

int func_84(int iParam0, int iParam1)//Position - 0x2B55
{
	int iVar0;
	
	iVar0 = func_92(iParam0, iParam1);
	if (!func_91(iParam0))
	{
		iVar0 = (iVar0 + func_85(iParam0, func_89() + 1));
	}
	if (iParam0 == 14 || ((((func_91(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_85(iParam0, func_89() + 1));
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

int func_85(int iParam0, int iParam1)//Position - 0x2BE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_88(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_87(iParam0, iParam1);
			iVar2 = func_86(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_91(iParam0))
		{
			if (iVar0 > Global_262145.f_18431)
			{
				iVar0 = Global_262145.f_18431;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18430)
			{
				iVar0 = Global_262145.f_18430;
			}
			if (iVar0 > Global_262145.f_18429)
			{
				iVar0 = Global_262145.f_18429;
			}
		}
	}
	return iVar0;
}

int func_86(int iParam0)//Position - 0x2C82
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18468;
		
		case 10:
			return Global_262145.f_18493;
		
		default:
	}
	return 1;
}

int func_87(int iParam0, int iParam1)//Position - 0x2CB2
{
	if (func_91(iParam0))
	{
		if (iParam1 >= Global_262145.f_18432)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18469;
		
		case 10:
			return Global_262145.f_18494;
		
		default:
	}
	return 8;
}

int func_88(int iParam0)//Position - 0x2D00
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

int func_89()//Position - 0x2D32
{
	if (func_90() == func_16())
	{
		return 0;
	}
	return func_32(func_90());
}

int func_90()//Position - 0x2D51
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
}

int func_91(int iParam0)//Position - 0x2D66
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

int func_92(int iParam0, int iParam1)//Position - 0x2DBC
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

int func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x304E
{
	int iVar0;
	
	iVar0 = func_99(iParam0, iParam1, iParam2, iParam4);
	if (!func_98(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_95(iParam0, func_32(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_94(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_94(int iParam0)//Position - 0x30A1
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

int func_95(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x30C7
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
			if (func_98(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_97(iParam0))
	{
		iVar0 = func_97(iParam0);
	}
	else if (iVar0 < func_96(iParam0))
	{
		iVar0 = func_96(iParam0);
	}
	return iVar0;
}

int func_96(int iParam0)//Position - 0x3163
{
	return 1;
}

int func_97(int iParam0)//Position - 0x316C
{
	return 4;
}

int func_98(int iParam0)//Position - 0x3175
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

int func_99(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x31B3
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

int func_100(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x326E
{
	int iVar0;
	
	iVar0 = func_111(iParam0, iParam1, iParam2, iParam4);
	if (!func_110(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_102(iParam0, func_32(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_101(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_101(int iParam0)//Position - 0x32C1
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_102(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x32DB
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_109(iParam0))
	{
		iVar1 = func_108(iParam3);
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
	else if (func_107(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_106(iParam2))
		{
			iVar0 = func_106(iParam2);
		}
	}
	if (iVar0 > func_104(iParam0))
	{
		iVar0 = func_104(iParam0);
	}
	else if (iVar0 < func_103(iParam0))
	{
		iVar0 = func_103(iParam0);
	}
	return iVar0;
}

int func_103(int iParam0)//Position - 0x3459
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_104(int iParam0)//Position - 0x3473
{
	if (!func_109(iParam0))
	{
		if (func_110(iParam0))
		{
			if (func_105(iParam0))
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

int func_105(int iParam0)//Position - 0x34CD
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_106(int iParam0)//Position - 0x34E7
{
	if (iParam0 == func_16() || Global_1853348[iParam0 /*834*/].f_267.f_278 == 0)
	{
		return 50;
	}
	return (50 - Global_1853348[iParam0 /*834*/].f_267.f_278.f_3);
}

int func_107(int iParam0)//Position - 0x3529
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x3543
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

int func_109(int iParam0)//Position - 0x3565
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

int func_110(int iParam0)//Position - 0x35BB
{
	if (func_109(iParam0) || func_107(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x35DD
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

int func_112(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x370F
{
	int iVar0;
	
	iVar0 = func_117(iParam0, iParam1, iParam2, iParam3);
	if (!func_116(iParam0))
	{
		iVar0 = (iVar0 + func_114(iParam0, func_89() + 1, -1, iParam2));
	}
	if (func_113(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_113(int iParam0)//Position - 0x3755
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

int func_114(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3799
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_115(iParam0))
	{
		if (iParam2 <= Global_262145.f_21727)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21728)
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
	else if (func_116(iParam0))
	{
		if (iParam1 < Global_262145.f_21687)
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

int func_115(int iParam0)//Position - 0x3876
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

int func_116(int iParam0)//Position - 0x38AE
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

int func_117(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3910
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

int func_118(int iParam0, int iParam1, var uParam2)//Position - 0x3C5C
{
	int iVar0;
	
	iVar0 = func_119(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_119(int iParam0, int iParam1)//Position - 0x3C7D
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

int func_120(int iParam0)//Position - 0x3E3D
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

int func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3F15
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
			return func_166(iParam1);
		
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
			return func_162(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_158(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_152(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		
		case 233:
			return func_143(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_142(iParam1, iParam3);
		
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
			return func_141(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_140(iParam1);
		
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
			return func_134(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_128(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_122(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_122(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x42E8
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
		iVar0 = (iVar0 + func_127(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_126(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_125(func_32(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_124(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_123(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_123(int iParam0, int iParam1)//Position - 0x435E
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_124(int iParam0, int iParam1)//Position - 0x4378
{
	return func_123(iParam0, iParam1) > 0;
}

int func_125(var uParam0, int iParam1, int iParam2)//Position - 0x438A
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_126(int iParam0, int iParam1)//Position - 0x43A4
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

int func_127(int iParam0, int iParam1)//Position - 0x43D8
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_128(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x43F2
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
		iVar0 = (iVar0 + func_133(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_132(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_131(func_32(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_130(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_129(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_129(int iParam0, int iParam1)//Position - 0x477D
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

bool func_130(int iParam0, int iParam1)//Position - 0x4803
{
	return func_129(iParam0, iParam1) > 0;
}

int func_131(int iParam0, int iParam1, int iParam2)//Position - 0x4815
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
			if (iParam2 != func_16())
			{
				if (func_74(iParam2, 1))
				{
					Var0 = { func_73(iParam2) };
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

int func_132(int iParam0, int iParam1)//Position - 0x48AD
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

int func_133(int iParam0, int iParam1)//Position - 0x4B8C
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_134(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x4BA6
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
		if (func_78(iParam0))
		{
			iVar0 = (iVar0 + func_77(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_139(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_138(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_137(func_32(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_136(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_135(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_135(int iParam0, int iParam1)//Position - 0x4E81
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

bool func_136(int iParam0, int iParam1)//Position - 0x4EB8
{
	return func_135(iParam0, iParam1) > 0;
}

int func_137(int iParam0, int iParam1)//Position - 0x4ECA
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

int func_138(int iParam0, int iParam1)//Position - 0x4EF4
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

int func_139(int iParam0, int iParam1)//Position - 0x5026
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x5040
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

int func_141(int iParam0, int iParam1, int iParam2)//Position - 0x508C
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
	if (func_82(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_142(int iParam0, int iParam1)//Position - 0x522D
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
	if ((func_91(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_85(iParam0, func_89() + 1));
	}
	return iVar0;
}

int func_143(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x5814
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
		if (func_98(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_95(iParam0, func_32(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_148(iParam0, func_32(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_147(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_146(func_32(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_145(iParam0))
		{
			iVar0 = (iVar0 + func_144(iParam0));
		}
	}
	return iVar0;
}

int func_144(int iParam0)//Position - 0x598A
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

bool func_145(int iParam0)//Position - 0x59CE
{
	return func_144(iParam0) > 0;
}

int func_146(var uParam0, int iParam1)//Position - 0x59DE
{
	return 2;
}

int func_147(int iParam0, int iParam1)//Position - 0x59E7
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

int func_148(int iParam0, int iParam1)//Position - 0x5A2F
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
			uVar0 = func_149(5329, -1, 0);
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

int func_149(int iParam0, int iParam1, int iParam2)//Position - 0x5A8F
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_150(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_150(var uParam0)//Position - 0x5ACC
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_151();
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

int func_151()//Position - 0x5B00
{
	return Global_1574918;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x5B0C
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
		if (func_110(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_102(iParam0, func_32(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_157(iParam0, func_32(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_156(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_155(func_32(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_154(iParam0))
		{
			iVar0 = (iVar0 + func_153(iParam0));
		}
	}
	return iVar0;
}

int func_153(int iParam0)//Position - 0x5DD2
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

bool func_154(int iParam0)//Position - 0x5E44
{
	return func_153(iParam0) > 0;
}

int func_155(int iParam0, int iParam1)//Position - 0x5E54
{
	switch (iParam0)
	{
		case 1:
			if (func_105(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_105(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_105(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_105(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_105(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_105(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_105(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_105(iParam1))
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

int func_156(int iParam0, int iParam1)//Position - 0x5F4C
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

int func_157(int iParam0, int iParam1)//Position - 0x62EC
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

int func_158(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x63E5
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
			if (func_114(iParam0, func_89() + 1, -1, iParam2) == 1)
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
		if (func_116(iParam0))
		{
			iVar0 = (iVar0 + func_114(iParam0, func_89() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_161(iParam0, func_89() + 1));
	}
	if (!bParam3)
	{
		if (func_160(iParam0))
		{
			iVar0 = (iVar0 + func_159(iParam0));
		}
	}
	return iVar0;
}

int func_159(int iParam0)//Position - 0x6768
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

bool func_160(int iParam0)//Position - 0x67DC
{
	return func_159(iParam0) > 0;
}

int func_161(int iParam0, int iParam1)//Position - 0x67EC
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

int func_162(int iParam0, int iParam1, int iParam2)//Position - 0x6838
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
	iVar0 = (iVar0 + func_165(iParam0, func_89() + 1, iParam2));
	iVar0 = (iVar0 + func_163(iParam0));
	return iVar0;
}

int func_163(int iParam0)//Position - 0x6B41
{
	if (func_164(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_164(int iParam0)//Position - 0x6B57
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

int func_165(int iParam0, var uParam1, int iParam2)//Position - 0x6BA1
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

int func_166(int iParam0)//Position - 0x6BCB
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

int func_167(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6CA4
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
			return func_194(iParam1);
		
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
			return func_191(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_188(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_185(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_182(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_181(iParam1, iParam2);
		
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
			return func_180();
		
		case 218:
			return func_179();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_178(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_177(iParam1, iParam2);
		
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
			return func_174(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_171(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_168(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_168(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x6F6C
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
		if (func_124(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_169(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_169(int iParam0, var uParam1)//Position - 0x6FAA
{
	if (func_124(iParam0, uParam1))
	{
		return (func_123(iParam0, uParam1) + func_170(iParam0, uParam1));
	}
	return 0;
}

int func_170(int iParam0, var uParam1)//Position - 0x6FD2
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_171(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x6FEC
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
		if (func_130(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_172(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_172(int iParam0, int iParam1)//Position - 0x737A
{
	if (func_130(iParam0, iParam1))
	{
		return (func_129(iParam0, iParam1) + func_173(iParam0, iParam1));
	}
	return 0;
}

int func_173(int iParam0, int iParam1)//Position - 0x73A2
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

int func_174(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x7430
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
		if (func_136(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_175(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_175(int iParam0, int iParam1)//Position - 0x7653
{
	if (func_136(iParam0, iParam1))
	{
		return (func_135(iParam0, iParam1) + func_176(iParam0, iParam1));
	}
	return 0;
}

int func_176(int iParam0, int iParam1)//Position - 0x767B
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

int func_177(int iParam0, int iParam1)//Position - 0x76B2
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

int func_178(int iParam0, int iParam1, int iParam2)//Position - 0x7723
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

int func_179()//Position - 0x78DC
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_180()//Position - 0x78EA
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_181(int iParam0, int iParam1)//Position - 0x78F8
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
		iVar0 = (iVar0 + func_85(iParam0, func_89() + 1));
	}
	return iVar0;
}

int func_182(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7ED5
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
		if (func_145(iParam0))
		{
			iVar0 = (iVar0 + func_183(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_183(int iParam0, var uParam1)//Position - 0x7FD4
{
	if (func_145(iParam0))
	{
		return (func_144(iParam0) + func_184(iParam0, uParam1));
	}
	return 0;
}

int func_184(int iParam0, var uParam1)//Position - 0x7FF8
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

int func_185(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x803F
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
		if (func_154(iParam0))
		{
			iVar0 = (iVar0 + func_186(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_186(int iParam0, int iParam1)//Position - 0x81B9
{
	if (func_154(iParam0))
	{
		return (func_153(iParam0) + func_187(iParam0, iParam1));
	}
	return 0;
}

int func_187(int iParam0, int iParam1)//Position - 0x81DD
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

int func_188(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8257
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
		if (func_160(iParam0))
		{
			iVar0 = (iVar0 + func_189(iParam0));
		}
	}
	return iVar0;
}

int func_189(int iParam0)//Position - 0x858C
{
	if (func_160(iParam0))
	{
		return (func_159(iParam0) + func_190(iParam0));
	}
	return 0;
}

int func_190(int iParam0)//Position - 0x85AE
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

int func_191(int iParam0, int iParam1, var uParam2)//Position - 0x862A
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
	iVar0 = (iVar0 + func_192(iParam0));
	return iVar0;
}

int func_192(int iParam0)//Position - 0x88F2
{
	if (func_164(iParam0))
	{
		if (func_193(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_193(int iParam0)//Position - 0x8915
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

int func_194(int iParam0)//Position - 0x895F
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

bool func_195(int iParam0, int iParam1, bool bParam2)//Position - 0x8A41
{
	return func_21(iParam0, iParam1, bParam2) == -1;
}

int func_196(int iParam0)//Position - 0x8A55
{
	if (func_5(&(Global_2789376[iParam0 /*2*/])) && func_3(&(Global_2789376[iParam0 /*2*/]), Global_2789376.f_17[iParam0], 0))
	{
		func_197(&(Global_2789376[iParam0 /*2*/]));
		return 0;
	}
	return func_5(&(Global_2789376[iParam0 /*2*/]));
}

void func_197(var uParam0)//Position - 0x8AA4
{
	uParam0->f_1 = 0;
}

void func_198(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9)//Position - 0x8AB1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "SHOW_OVERLAY");
	func_200(sParam0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		if (iParam6 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
		if (iParam8 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
		}
	}
	else if (iParam6 != -1)
	{
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_200(sParam2);
	func_200(sParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam5)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	else if (bParam4)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	MISC::SET_BIT(&uLocal_109, 1);
	func_199(iParam7);
}

void func_199(int iParam0)//Position - 0x8B50
{
	if (iLocal_120 != iParam0)
	{
		iLocal_120 = iParam0;
	}
}

void func_200(char* sParam0)//Position - 0x8B63
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_201(int iParam0)//Position - 0x8B75
{
	return 0 == func_106(iParam0);
}

bool func_202(int iParam0, int iParam1)//Position - 0x8B85
{
	if (iParam1 == -1)
	{
		iParam1 = func_151();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

void func_203(int iParam0, bool bParam1)//Position - 0x8BA1
{
	int iVar0;
	struct<2> Var1;
	struct<4> Var2;
	struct<2> Var3;
	struct<4> Var4;
	int iVar5;
	int iVar6;
	float fVar7;
	
	iVar0 = func_218(PLAYER::PLAYER_ID());
	if (iParam0 != 8)
	{
		iVar0 = uLocal_297[func_217(iParam0)];
	}
	if (!func_215(iParam0))
	{
		StringCopy(&Var1, "HAPP_SELL_D1", 16);
		StringCopy(&Var2, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var1, "HAPP_SELL_D0", 16);
			Var2 = { func_9(iParam0) };
		}
		func_198("HAPP_SELL_T", &Var1, "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, &Var2);
	}
	else if (func_214())
	{
		func_198("HAPP_SELL_T", "HAPP_SELL_C3", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (!func_12(230))
	{
		func_198("HAPP_SELL_T", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (func_108(iVar0) != 1 && !bParam1)
	{
		func_10(iParam0);
		func_198("HAPP_SELL_T", "HAPP_SELL_GDB", "OR_OVRLY_OK", "", 0, 1, -1, 4, -1, 0);
	}
	else
	{
		StringCopy(&Var3, "HAPP_SELL_C2", 16);
		StringCopy(&Var4, "", 16);
		iVar5 = -1;
		iVar6 = -1;
		if ((func_213() && func_211() != -1) || iParam0 != 8)
		{
			if (func_213())
			{
				iParam0 = func_211();
				iVar0 = uLocal_297[func_217(iParam0)];
			}
			iVar6 = func_209(iParam0, iVar0);
			StringCopy(&Var3, "HAPP_SELL_C0", 16);
			fVar7 = (func_208(iParam0, iVar0) * 100f);
			if (fVar7 > 0f)
			{
				iVar5 = func_207(iParam0, iVar0);
				iVar6 = (iVar6 + iVar5);
				StringCopy(&Var3, "HAPP_SELL_C1", 16);
				iVar5 = SYSTEM::ROUND(fVar7);
			}
			Var4 = { func_9(iParam0) };
		}
		else if (iParam0 == 8)
		{
			MISC::SET_BIT(&uLocal_109, 11);
		}
		func_10(iParam0);
		if (func_28())
		{
			if (!func_202(34710, -1))
			{
				if (!func_206("APP_SG_HELP", 0, 0))
				{
					func_205("APP_SG_HELP", -1);
				}
				func_204(34710, 1, -1);
			}
		}
		if (iVar5 > 0)
		{
			MISC::SET_BIT(&uLocal_109, 12);
			func_198("HAPP_SELL_T", &Var3, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, iVar5, 1, iVar6, &Var4);
		}
		else
		{
			func_198("HAPP_SELL_T", &Var3, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, iVar6, 1, iVar5, &Var4);
		}
	}
	func_8();
}

void func_204(int iParam0, bool bParam1, int iParam2)//Position - 0x8DBC
{
	if (iParam2 == -1)
	{
		iParam2 = func_151();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_205(char* sParam0, int iParam1)//Position - 0x8DDA
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_206(char* sParam0, int iParam1, char* sParam2)//Position - 0x8DF1
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_207(int iParam0, int iParam1)//Position - 0x8E0F
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_208(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_209(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

float func_208(int iParam0, int iParam1)//Position - 0x8E38
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22848);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22850;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22847);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22850;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22847);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22851;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22851;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22851;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22852;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22849);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22852;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22849);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22852;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22849);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_209(int iParam0, int iParam1)//Position - 0x8F50
{
	return (func_210(iParam0) * iParam1);
}

int func_210(int iParam0)//Position - 0x8F61
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22838;
		
		case 0:
			return Global_262145.f_22839;
		
		case 1:
			return Global_262145.f_22840;
		
		case 2:
			return Global_262145.f_22841;
		
		case 3:
			return Global_262145.f_22842;
		
		case 4:
			return Global_262145.f_22843;
		
		case 5:
			return Global_262145.f_22844;
		
		case 6:
			return Global_262145.f_22845;
		
		case 7:
			return Global_262145.f_22846;
		
		default:
	}
	return 0;
}

int func_211()//Position - 0x9001
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_297[iVar0] > 0 && iVar0 != 0)
		{
			return func_212(iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_212(int iParam0)//Position - 0x903B
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 6;
		
		case 2:
			return 2;
		
		case 3:
			return 5;
		
		case 4:
			return 0;
		
		case 5:
			return 1;
		
		case 6:
			return 4;
		
		case 7:
			return 7;
		
		case 8:
			return 3;
		
		default:
	}
	return -1;
}

bool func_213()//Position - 0x90A6
{
	return BitTest(uLocal_109, 10);
}

int func_214()//Position - 0x90B3
{
	if (func_5(&(Global_2789376.f_26)) && func_3(&(Global_2789376.f_26), Global_2789376.f_28, 0))
	{
		func_197(&(Global_2789376.f_26));
		return 0;
	}
	return func_5(&(Global_2789376.f_26));
}

int func_215(int iParam0)//Position - 0x90F6
{
	switch (iParam0)
	{
		case 8:
			return !func_216(PLAYER::PLAYER_ID());
		
		default:
	}
	return uLocal_297[func_217(iParam0)] > 0;
	return 0;
}

bool func_216(int iParam0)//Position - 0x9128
{
	return func_218(iParam0) == 0;
}

int func_217(int iParam0)//Position - 0x9138
{
	switch (iParam0)
	{
		case 8:
			return 0;
		
		case 6:
			return 1;
		
		case 2:
			return 2;
		
		case 5:
			return 3;
		
		case 0:
			return 4;
		
		case 1:
			return 5;
		
		case 4:
			return 6;
		
		case 7:
			return 7;
		
		case 3:
			return 8;
		
		default:
	}
	return 0;
}

int func_218(int iParam0)//Position - 0x91A3
{
	if (iParam0 != func_16() && func_219(iParam0))
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_278.f_3;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x91D5
{
	if (iParam0 != func_16())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_278 != 0;
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x91FB
{
	switch (iParam0)
	{
		case 2:
		case 13:
			return 8;
			break;
		
		case 3:
		case 14:
		case 22:
			return 6;
			break;
		
		case 4:
		case 15:
		case 23:
			return 2;
			break;
		
		case 5:
		case 16:
		case 24:
			return 5;
			break;
		
		case 6:
		case 17:
		case 25:
			return 0;
			break;
		
		case 7:
		case 18:
		case 26:
			return 1;
			break;
		
		case 8:
		case 19:
		case 27:
			return 4;
			break;
		
		case 9:
		case 20:
		case 28:
			return 7;
			break;
		
		case 10:
		case 21:
		case 29:
			return 3;
			break;
	}
	return -1;
}

void func_221()//Position - 0x92E7
{
	switch (func_267())
	{
		case 2:
			if (func_246(0))
			{
				func_245();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_226(229, 0);
			}
			else
			{
				func_198("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		case 1:
			if (func_246(1))
			{
				func_223();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_226(230, 0);
			}
			else
			{
				func_198("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		case 3:
			break;
		
		case 4:
			func_268();
			func_203(func_222(), 1);
			return;
		
		case 5:
			if (!func_12(229))
			{
				func_198("HAPP_T1", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			else if (func_246(0))
			{
				func_245();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_226(229, 1);
				return;
			}
			else
			{
				func_198("HAPP_T1", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		default:
			func_269();
			break;
	}
	func_268();
}

int func_222()//Position - 0x940E
{
	return iLocal_121;
}

void func_223()//Position - 0x9418
{
	func_224(1, 6117);
}

void func_224(int iParam0, int iParam1)//Position - 0x9428
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_149(iParam1, -1, 0);
	func_225(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_225(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x9451
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_150(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_226(int iParam0, bool bParam1)//Position - 0x9481
{
	int iVar0;
	
	iVar0 = func_222();
	if (iVar0 == 8 && iParam0 == 229)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		func_244(18);
	}
	else
	{
		func_243(18);
	}
	if (bParam1)
	{
		func_242(26);
	}
	if ((iParam0 == 230 && func_213()) && iVar0 == 8)
	{
		iVar0 = func_211();
	}
	Global_1944113.f_53 = 0;
	func_227(iParam0, 0, iVar0);
	func_1(1);
	Global_1946108 = 1;
	MISC::SET_BIT(&uLocal_109, 2);
}

void func_227(int iParam0, int iParam1, int iParam2)//Position - 0x9506
{
	var uVar0;
	
	uVar0 = iParam2;
	if (iParam0 != 229 && iParam0 != 230)
	{
	}
	func_241(iParam1, uVar0);
	func_228(iParam0, -1);
}

void func_228(int iParam0, int iParam1)//Position - 0x9533
{
	if ((func_240() || !func_239(1)) || func_43(iParam0) == 3)
	{
		if (!func_237(PLAYER::PLAYER_ID(), 0) && !func_237(PLAYER::PLAYER_ID(), 3))
		{
			func_236(iParam0);
			func_229(iParam0, func_233(1, 1), func_232(), func_231(), func_230(), iParam1);
		}
	}
}

void func_229(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x959B
{
	struct<7> Var0;
	
	Var0.f_0 = 360408846;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 7, iParam1);
	}
}

var func_230()//Position - 0x95E5
{
	return Global_2815059.f_5195.f_346;
}

var func_231()//Position - 0x95F7
{
	return Global_2815059.f_5195.f_345;
}

var func_232()//Position - 0x9609
{
	return Global_2815059.f_5195.f_344;
}

int func_233(int iParam0, bool bParam1)//Position - 0x961B
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_51(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_234(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_234(int iParam0, int iParam1)//Position - 0x9680
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_235(-1, 0) == 8;
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

int func_235(int iParam0, bool bParam1)//Position - 0x96CB
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_151();
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

void func_236(int iParam0)//Position - 0x970C
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_32 = iParam0;
}

int func_237(int iParam0, int iParam1)//Position - 0x9725
{
	if (func_238(iParam0, 0))
	{
		return func_43(Global_1892703[iParam0 /*599*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_238(int iParam0, int iParam1)//Position - 0x974F
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_239(bool bParam0)//Position - 0x978A
{
	return func_74(PLAYER::PLAYER_ID(), bParam0);
}

int func_240()//Position - 0x979C
{
	return func_15(PLAYER::PLAYER_ID());
}

void func_241(var uParam0, var uParam1)//Position - 0x97AC
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_234 = uParam0;
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_234.f_22 = uParam1;
}

void func_242(int iParam0)//Position - 0x97D8
{
	if (Global_2815059.f_5195.f_344 != iParam0)
	{
		Global_2815059.f_5195.f_344 = iParam0;
	}
}

void func_243(int iParam0)//Position - 0x97FB
{
	MISC::CLEAR_BIT(&(Global_2815059.f_5195.f_47), iParam0);
}

void func_244(int iParam0)//Position - 0x9812
{
	MISC::SET_BIT(&(Global_2815059.f_5195.f_47), iParam0);
}

void func_245()//Position - 0x9829
{
	func_224(1, 6115);
}

bool func_246(bool bParam0)//Position - 0x9839
{
	int iVar0;
	
	if (!func_266())
	{
		return 1;
	}
	while (!func_247(&iVar0, bParam0))
	{
		func_325();
		SYSTEM::WAIT(0);
	}
	func_325();
	return iVar0 == 2;
}

bool func_247(var uParam0, bool bParam1)//Position - 0x986D
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 != 0 && *uParam0 != 1)
	{
		*uParam0 = 0;
	}
	if (bParam1)
	{
		iVar0 = 244232650;
	}
	else
	{
		iVar0 = 357925343;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_265() != -1)
			{
				return 0;
			}
			iVar1 = MISC::GET_HASH_KEY("MP_STAT_HANGAR_CONTRABAND_MISSION_v0");
			if (func_261(78225582, -1799524201, iVar0, -1018905335, 1, 0, 1, 4, iVar1, 3))
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
			if (*uParam0 == 1 && func_255())
			{
			}
			else
			{
				*uParam0 = 3;
				func_251(func_265());
			}
			break;
		
		case 1:
			if (func_250(func_265()))
			{
				if (func_249(func_265()) == 2)
				{
					*uParam0 = 2;
					func_251(func_265());
					func_248(iVar0);
				}
				else
				{
					*uParam0 = 3;
					func_251(func_265());
				}
			}
			break;
	}
	return *uParam0 != 1;
}

void func_248(int iParam0)//Position - 0x9958
{
	Global_4535597 = iParam0;
}

int func_249(int iParam0)//Position - 0x9966
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0x998F
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_251(int iParam0)//Position - 0x99BA
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_266())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_254(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_252(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_252(var uParam0)//Position - 0x9A0E
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_253(&(uParam0->f_14));
	func_253(&(uParam0->f_14.f_13));
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

void func_253(var uParam0)//Position - 0x9B16
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

int func_254(int iParam0)//Position - 0x9B5E
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_255()//Position - 0x9B89
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_266())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_265();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_151()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_260(Global_4534105[iVar2 /*85*/].f_66.f_6, Global_4534105[iVar2 /*85*/].f_66.f_4, Global_4534105[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4535607 = 1;
			}
			return 0;
		}
		if (Global_2726699)
		{
			if (Global_4534105[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4534105[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_259(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4534105[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4534105[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4534105[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4534105[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4534105[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_256(Global_4534105[iVar2 /*85*/], iVar2);
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	return 0;
}

void func_256(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x9CE9
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_258(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_257();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar1);
	}
}

void func_257()//Position - 0x9D7B
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_258(int iParam0)//Position - 0x9D8B
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_259(int iParam0)//Position - 0x9DA3
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_260(int iParam0, int iParam1, int iParam2)//Position - 0x9DCA
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_261(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xA3B2
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_266())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_151()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_265();
	if (iVar1 == -1)
	{
		if (!func_263(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_262(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4534105[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4534105[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4534105[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_262(int iParam0)//Position - 0xA4D4
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_263(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0xA563
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_266())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_151()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4534105[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4534105[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xE547E9114277098F())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_264(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0xA660
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_266())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = uParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_256(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_265()//Position - 0xA79D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_259(iVar0) != 2147483647)
		{
			if (func_254(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_266()//Position - 0xA7D8
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_267()//Position - 0xA7EF
{
	return iLocal_120;
}

void func_268()//Position - 0xA7F9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "HIDE_OVERLAY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_199(0);
	MISC::CLEAR_BIT(&uLocal_109, 1);
}

void func_269()//Position - 0xA81D
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", true);
}

void func_270()//Position - 0xA832
{
	if (func_271())
	{
		if (!BitTest(uLocal_109, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "GET_CURRENT_SELECTION");
			iLocal_301 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			MISC::SET_BIT(&uLocal_109, 0);
		}
	}
}

int func_271()//Position - 0xA863
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
	{
		return 1;
	}
	return 0;
}

void func_272()//Position - 0xA887
{
	if (iLocal_113 != func_309())
	{
		if (!func_5(&uLocal_130))
		{
			func_4(&uLocal_130, 0, 0);
		}
		else if (func_3(&uLocal_130, 750, 0))
		{
			func_197(&uLocal_130);
			func_273();
		}
	}
}

void func_273()//Position - 0xA8C4
{
	int iVar0;
	
	func_301();
	if (func_300())
	{
		MISC::SET_BIT(&uLocal_109, 10);
	}
	func_279();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_278(iVar0);
		iVar0++;
	}
	func_277();
	func_274();
	func_4(&uLocal_126, 0, 0);
}

void func_274()//Position - 0xA90F
{
	if (func_214())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "UPDATE_SELL_COOLDOWN");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_276(Global_2789376.f_26, Global_2789376.f_28));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_275(Global_2789376.f_28));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "UPDATE_SELL_COOLDOWN");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_275(int iParam0)//Position - 0xA96F
{
	return (iParam0 / 1000);
}

int func_276(int iParam0, var uParam1, int iParam2)//Position - 0xA97D
{
	int iVar0;
	
	iVar0 = (iParam2 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)));
	iVar0 = (iVar0 / 1000);
	return iVar0;
}

void func_277()//Position - 0xA9A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "UPDATE_STEAL_COOLDOWN");
	iVar0 = 1;
	while (iVar0 <= 8)
	{
		iVar1 = func_212(iVar0);
		iVar2 = iVar1;
		if (func_196(iVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_276(Global_2789376[iVar2 /*2*/], Global_2789376.f_17[iVar2]));
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		iVar0++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_278(int iParam0)//Position - 0xAA06
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = uLocal_297[iParam0];
	iVar1 = 50;
	iVar2 = func_209(func_212(iParam0), iVar0);
	iVar3 = SYSTEM::ROUND((func_208(func_212(iParam0), iVar0) * 100f));
	if (IntToFloat(iVar3) > 0f)
	{
		iVar4 = func_207(func_212(iParam0), iVar0);
		iVar2 = (iVar2 + iVar4);
		MISC::SET_BIT(&uLocal_109, 14);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "ADD_CARGO");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar3));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_279()//Position - 0xAA98
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	
	sVar0 = func_290(PLAYER::PLAYER_ID());
	iVar1 = 0;
	iVar2 = func_289();
	iVar3 = func_288();
	iVar4 = func_287();
	iVar5 = func_286();
	iVar6 = func_285();
	iLocal_113 = func_309();
	iVar7 = 50;
	iVar8 = (iLocal_113 * func_210(8));
	fVar9 = func_283(iVar2, func_284());
	fVar10 = func_283(iVar3, func_282());
	fVar9 = func_281(fVar9, 0f, 100f);
	fVar10 = func_281(fVar10, 0f, 100f);
	if (func_280(iLocal_118))
	{
		iVar1 = 1;
	}
	if (func_213())
	{
		iVar11 = func_211();
		iVar8 = (iLocal_113 * func_210(iVar11));
		fVar12 = (func_208(iVar11, iLocal_113) * 100f);
		if (fVar12 > 0f)
		{
			iVar13 = func_207(iVar11, iLocal_113);
			iVar8 = (iVar8 + iVar13);
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "SET_STATS");
	GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_113);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_280(int iParam0)//Position - 0xABB8
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

float func_281(float fParam0, float fParam1, float fParam2)//Position - 0xABDE
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

int func_282()//Position - 0xAC05
{
	return func_149(6117, -1, 0);
}

float func_283(int iParam0, int iParam1)//Position - 0xAC16
{
	return ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
}

int func_284()//Position - 0xAC31
{
	return func_149(6115, -1, 0);
}

int func_285()//Position - 0xAC42
{
	return func_149(6120, -1, 0);
}

int func_286()//Position - 0xAC53
{
	return func_149(6119, -1, 0);
}

int func_287()//Position - 0xAC64
{
	return func_149(6121, -1, 0);
}

int func_288()//Position - 0xAC75
{
	return func_149(6118, -1, 0);
}

int func_289()//Position - 0xAC86
{
	return func_149(6116, -1, 0);
}

char* func_290(int iParam0)//Position - 0xAC97
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_299(&(Global_1892703[iParam0 /*599*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1892703[iParam0 /*599*/].f_10.f_121 != Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121)
	{
		sVar0 = func_295(iParam0, 0);
		return sVar0;
	}
	if (((func_14(iParam0, 28) || func_14(PLAYER::PLAYER_ID(), 28)) || func_294(iParam0)) && !func_292(iParam0))
	{
		return func_295(iParam0, 0);
	}
	iVar1 = func_33(iParam0);
	if (iVar1 != func_16())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_291() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_295(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_16())
	{
		sVar0 = func_299(&(Global_1892703[iVar1 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_295(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_291()//Position - 0xAD9C
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

int func_292(int iParam0)//Position - 0xADB2
{
	struct<13> Var0;
	
	Var0 = { func_293(iParam0) };
	if (func_291())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_293(int iParam0)//Position - 0xADF2
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_294(int iParam0)//Position - 0xAE09
{
	struct<13> Var0;
	
	if (iParam0 != func_16())
	{
		Var0 = { func_293(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::_0x807ABE1AB65C24D2()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_291() || MISC::_0x807ABE1AB65C24D2())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_295(int iParam0, bool bParam1)//Position - 0xAE76
{
	if (!bParam1)
	{
		if (func_297(iParam0, 1))
		{
			return func_296();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_296()//Position - 0xAE9D
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_297(int iParam0, bool bParam1)//Position - 0xAEAD
{
	return func_298(iParam0, bParam1, 1);
}

int func_298(int iParam0, bool bParam1, int iParam2)//Position - 0xAEBE
{
	int iVar0;
	
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_20(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_16() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

var func_299(var uParam0)//Position - 0xAF1A
{
	return uParam0;
}

bool func_300()//Position - 0xAF24
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_297[iVar0] > 0)
		{
			iVar1++;
			if (iVar1 > 2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return iVar1 <= 2;
}

void func_301()//Position - 0xAF61
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = func_212(iVar0);
		uLocal_297[iVar0] = func_302(iVar1);
		iVar0++;
	}
}

int func_302(int iParam0)//Position - 0xAF91
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_307())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_218(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_304(func_305(func_306(iVar0), -1));
		if (func_303(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_303(int iParam0)//Position - 0xAFEE
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_304(int iParam0)//Position - 0xB09E
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_305(int iParam0, int iParam1)//Position - 0xB18E
{
	if (iParam1 == -1)
	{
		iParam1 = func_151();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

int func_306(int iParam0)//Position - 0xB1AA
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_307()//Position - 0xB414
{
	return func_308() != 0;
}

int func_308()//Position - 0xB422
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_278;
}

int func_309()//Position - 0xB43B
{
	return func_218(PLAYER::PLAYER_ID());
}

void func_310()//Position - 0xB44B
{
	if (func_5(&uLocal_126))
	{
		if (func_3(&uLocal_126, 1000, 0))
		{
			func_277();
			func_274();
			func_311(&uLocal_126, 0, 0);
		}
	}
	else
	{
		func_4(&uLocal_126, 0, 0);
	}
}

void func_311(var uParam0, bool bParam1, bool bParam2)//Position - 0xB484
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

void func_312()//Position - 0xB4C1
{
	int iVar0;
	
	bLocal_110++;
	if (bLocal_110 == 32)
	{
		bLocal_110 = false;
	}
	iVar0 = bLocal_110;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && func_219(iVar0)) && !func_74(iVar0, 0)) && !func_319())
	{
		if (!func_318())
		{
			func_315(iVar0, bLocal_110);
		}
	}
	else if (func_318())
	{
		func_313();
	}
	if (BitTest(uLocal_114, bLocal_110))
	{
		if (!func_15(iVar0) && func_318())
		{
			func_313();
		}
	}
	else if (func_15(iVar0) && func_318())
	{
		func_313();
	}
}

void func_313()//Position - 0xB56A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_298[iVar0] == bLocal_110)
		{
			iLocal_298[iVar0] = -1;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar1 < 31)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "REMOVE_ACTIVE_ORGANISATION");
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&(Local_299[iVar1 /*16*/]));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		StringCopy(&(Local_299[iVar1 /*16*/]), "", 64);
		MISC::CLEAR_BIT(&uLocal_114, bLocal_110);
		func_314(PLAYER::INT_TO_PLAYERINDEX(bLocal_110));
	}
}

void func_314(int iParam0)//Position - 0xB5EF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_116[iVar0] == iParam0)
		{
			iLocal_115[iVar0] = 0;
			iLocal_116[iVar0] = -1;
			return;
		}
		iVar0++;
	}
}

void func_315(int iParam0, int iParam1)//Position - 0xB626
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4[7];
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	sVar1 = PLAYER::GET_PLAYER_NAME(iParam0);
	if (MISC::ARE_STRINGS_EQUAL(sVar1, "**Invalid**"))
	{
		return;
	}
	iVar3 = 7;
	if (func_15(iParam0))
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar5 = Global_1892703[iParam1 /*599*/].f_10.f_11[iVar2];
			if (iVar5 != func_16())
			{
				StringCopy(&(Var4[iVar2 /*16*/]), PLAYER::GET_PLAYER_NAME(iVar5), 64);
			}
			else
			{
				StringCopy(&(Var4[iVar2 /*16*/]), "", 64);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar2 /*16*/])))
			{
				if (iVar2 != iVar3)
				{
					iVar6 = iVar2;
					while (iVar6 <= (iVar3 - 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar6 /*16*/])))
						{
							Var4[iVar2 /*16*/] = { Var4[iVar6 /*16*/] };
							StringCopy(&(Var4[iVar6 /*16*/]), "", 64);
							iVar6 = (iVar3 - 1);
						}
						iVar6++;
					}
				}
			}
			iVar2++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "ADD_ACTIVE_ORGANISATION");
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(func_317(iParam0));
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(sVar1);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&(Var4[iVar2 /*16*/]));
			iVar2++;
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		sVar1 = func_317(iParam0);
		func_316(iParam0, func_32(iParam0));
		MISC::SET_BIT(&uLocal_114, iParam1);
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "ADD_ACTIVE_ORGANISATION");
		GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(sVar1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_298[iVar0] == -1)
		{
			iLocal_298[iVar0] = iParam1;
			StringCopy(&(Local_299[iVar0 /*16*/]), sVar1, 64);
			return;
		}
		iVar0++;
	}
}

void func_316(int iParam0, int iParam1)//Position - 0xB7B8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_116[iVar0] == -1)
		{
			iLocal_115[iVar0] = iParam1;
			iLocal_116[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

char* func_317(int iParam0)//Position - 0xB7F0
{
	int iVar0;
	char* sVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = func_33(iParam0);
		if (iVar0 != func_16())
		{
			sVar1 = func_299(&(Global_1892703[iVar0 /*599*/].f_10.f_105));
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				return func_295(iVar0, 0);
			}
			else
			{
				return sVar1;
			}
		}
	}
	return func_290(iParam0);
}

int func_318()//Position - 0xB846
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_298[iVar0] == bLocal_110)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_319()//Position - 0xB875
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_116[iVar0] == bLocal_110)
		{
			if (!func_15(PLAYER::INT_TO_PLAYERINDEX(bLocal_110)))
			{
				return 1;
			}
			else
			{
				return iLocal_115[iVar0] != func_32(PLAYER::INT_TO_PLAYERINDEX(bLocal_110));
			}
		}
		iVar0++;
	}
	return 0;
}

void func_320()//Position - 0xB8C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	func_323(2, 205, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 205))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(205), -1f, -1f, -1f, -1f);
		if (iLocal_119 == 1)
		{
			iLocal_119 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
		else if (iLocal_119 == 2)
		{
			iLocal_119 = 1;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
	}
	func_323(2, 206, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 206))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(206), -1f, -1f, -1f, -1f);
		if (iLocal_119 == 0)
		{
			iLocal_119 = 1;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
		else if (iLocal_119 == 1)
		{
			iLocal_119 = 2;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
	}
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		func_323(2, 188, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(301), -1f, -1f, -1f, -1f);
		}
		func_323(2, 187, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(300), -1f, -1f, -1f, -1f);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 187))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(300), -1f, -1f, -1f, -1f);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 188))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(301), -1f, -1f, -1f, -1f);
		}
	}
	else
	{
		func_323(2, 188, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(188), -1f, -1f, -1f, -1f);
		}
		func_323(2, 187, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(187), -1f, -1f, -1f, -1f);
		}
	}
	func_323(2, 189, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(189), -1f, -1f, -1f, -1f);
	}
	func_323(2, 190, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(190), -1f, -1f, -1f, -1f);
	}
	func_323(2, 201, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1f, -1f, -1f, -1f);
	}
	func_323(2, 202, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
	{
		func_321();
	}
	func_323(2, 203, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(203), -1f, -1f, -1f, -1f);
	}
	func_323(2, 204, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(204), -1f, -1f, -1f, -1f);
	}
	if (PAD::_IS_USING_KEYBOARD_2(2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "SET_MOUSE_INPUT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_323(2, 237, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1f, -1f, -1f, -1f);
		}
		func_323(2, 238, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			func_321();
		}
	}
	else
	{
		func_323(2, 195, 1);
		func_323(2, 196, 1);
		iVar0 = PAD::GET_CONTROL_VALUE(2, 195);
		iVar1 = PAD::GET_CONTROL_VALUE(2, 196);
		if (((iVar0 != 127 || iLocal_302 != 127) || iVar1 != 127) || iLocal_303 != 127)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "SET_ANALOG_STICK_INPUT");
			iLocal_302 = iVar0;
			iLocal_303 = iVar1;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_302);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_303);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	func_323(2, 197, 1);
	func_323(2, 198, 1);
	iVar2 = PAD::GET_CONTROL_VALUE(2, 197);
	iVar3 = PAD::GET_CONTROL_VALUE(2, 198);
	if (((iVar2 != 127 || iLocal_304 != 127) || iVar3 != 127) || iLocal_305 != 127)
	{
		bVar4 = (PAD::IS_CONTROL_PRESSED(2, 242) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 242));
		if (!bVar4)
		{
			bVar4 = (PAD::IS_CONTROL_PRESSED(2, 241) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 241));
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_300, "SET_ANALOG_STICK_INPUT");
		iLocal_304 = iVar2;
		iLocal_305 = iVar3;
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_304);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_305);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) && !PAD::_IS_USING_KEYBOARD(2))
	{
		func_392(0, 1);
	}
}

void func_321()//Position - 0xBDD9
{
	if (!func_379())
	{
		func_392(0, 1);
	}
	if (iLocal_119 == 0)
	{
		if (!func_322())
		{
			func_392(0, 1);
		}
	}
	else if (!func_322())
	{
		iLocal_119 = 0;
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SHOW_SCREEN", 0f, -1f, -1f, -1f, -1f);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		return;
	}
	if (func_322())
	{
		func_268();
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_300, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1f, -1f, -1f, -1f);
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Back", "GTAO_SMG_Hangar_Computer_Sounds", true);
}

bool func_322()//Position - 0xBE82
{
	return BitTest(uLocal_109, 1);
}

void func_323(int iParam0, int iParam1, bool bParam2)//Position - 0xBE8E
{
	if (!func_324())
	{
		PAD::SET_INPUT_EXCLUSIVE(iParam0, iParam1);
		PAD::ENABLE_CONTROL_ACTION(iParam0, iParam1, bParam2);
	}
}

bool func_324()//Position - 0xBEB0
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_325()//Position - 0xBEBE
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	func_339();
	if (Global_78319)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	}
	HUD::THEFEED_HIDE_THIS_FRAME();
	func_323(2, 199, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	func_338(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_300, 255, 255, 255, 255, 0);
	func_336();
	func_329(0);
	func_326(1);
	Global_1964706.f_5 = MISC::GET_FRAME_COUNT();
}

void func_326(bool bParam0)//Position - 0xBF48
{
	if (bParam0)
	{
		func_328();
	}
	func_327(4, -1);
	func_327(6, -1);
	func_327(7, -1);
	func_327(3, -1);
	func_327(1, -1);
	func_327(2, -1);
	func_327(11, -1);
	func_327(13, -1);
	func_327(14, -1);
	func_327(16, -1);
}

void func_327(int iParam0, int iParam1)//Position - 0xBF99
{
	MISC::SET_BIT(&(Global_1648034.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1648034.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_328()//Position - 0xBFCF
{
	Global_2815059.f_4599 = 0;
}

void func_329(int iParam0)//Position - 0xBFDF
{
	if (func_335())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_334(0))
		{
			func_330(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_330(int iParam0)//Position - 0xC014
{
	if (func_335())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_333())
		{
			func_332(1, 1);
		}
		else
		{
			func_332(0, 0);
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
	if (!func_331())
	{
		Global_20266.f_1 = 3;
	}
}

int func_331()//Position - 0xC09E
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_332(bool bParam0, bool bParam1)//Position - 0xC0C5
{
	if (bParam0)
	{
		if (func_334(0))
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

bool func_333()//Position - 0xC139
{
	return BitTest(Global_1958711, 5);
}

int func_334(int iParam0)//Position - 0xC147
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

bool func_335()//Position - 0xC19E
{
	return BitTest(Global_1958711, 19);
}

void func_336()//Position - 0xC1AD
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_337();
}

void func_337()//Position - 0xC1BD
{
	Global_23011.f_134 = 1;
}

void func_338(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC1CB
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_339()//Position - 0xC1FA
{
	func_340(1);
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
	}
}

void func_340(bool bParam0)//Position - 0xC226
{
	if (bParam0)
	{
		if (func_341())
		{
			Global_2714762.f_41 = 1;
		}
	}
	else
	{
		Global_2714762.f_41 = 0;
	}
}

bool func_341()//Position - 0xC24B
{
	return BitTest(Global_2714762.f_2, 11);
}

void func_342()//Position - 0xC25C
{
	if (!BitTest(uLocal_109, 9))
	{
		if (!func_322())
		{
			if (!func_379())
			{
				MISC::SET_BIT(&uLocal_109, 13);
				func_198("HAPP_T1", "HAPP_D1", "HAPP_SU", "", 0, 0, -1, 5, -1, 0);
				if ((!func_346(2) && !BitTest(Global_1946102, 2)) && BitTest(uLocal_109, 13))
				{
					func_345("HAPP_HELP_3", 14000);
					MISC::SET_BIT(&Global_1946102, 2);
					func_343(2);
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_109, 9);
			}
		}
	}
}

void func_343(int iParam0)//Position - 0xC2E0
{
	switch (iParam0)
	{
		case 0:
			func_344(15967);
			break;
		
		case 1:
			func_344(15970);
			break;
		
		case 2:
			func_344(15973);
			break;
		
		case 3:
			func_344(15976);
			break;
		
		case 4:
			func_344(15979);
			break;
		
		case 5:
			func_344(15982);
			break;
		
		case 6:
			func_344(15985);
			break;
		
		case 7:
			func_344(15988);
			break;
		
		case 8:
			func_344(15991);
			break;
	}
}

void func_344(int iParam0)//Position - 0xC37F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = (iParam0 + iVar0);
		if (!func_202(iVar1, -1))
		{
			func_204(iVar1, 1, -1);
			return;
		}
		iVar0++;
	}
}

void func_345(char* sParam0, int iParam1)//Position - 0xC3B6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_346(int iParam0)//Position - 0xC3CD
{
	switch (iParam0)
	{
		case 0:
			return func_347(15967);
		
		case 1:
			return func_347(15970);
		
		case 2:
			return func_347(15973);
		
		case 3:
			return func_347(15976);
		
		case 4:
			return func_347(15979);
		
		case 5:
			return func_347(15982);
		
		case 6:
			return func_347(15985);
		
		case 7:
			return func_347(15988);
		
		case 8:
			return func_347(15991);
		
		default:
	}
	return 0;
}

int func_347(int iParam0)//Position - 0xC46D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = (iParam0 + iVar0);
		if (!func_202(iVar1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_348()//Position - 0xC49E
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 8 + 1;
	if (!BitTest(uLocal_109, 7) && !func_353())
	{
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			iVar3 = iVar1;
			if (func_352(iVar3))
			{
				Var0 = { func_351(iVar3) };
				iLocal_112 = func_350(iVar3);
				MISC::SET_BIT(&Global_1946102, iVar1);
				func_343(iVar3);
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (!BitTest(uLocal_109, 7) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		func_345(&Var0, iLocal_112);
		MISC::SET_BIT(&uLocal_109, 7);
	}
	else if (BitTest(uLocal_109, 7))
	{
		if (!func_5(&uLocal_128))
		{
			func_4(&uLocal_128, 0, 0);
		}
		else if (func_3(&uLocal_128, iLocal_112, 0))
		{
			MISC::CLEAR_BIT(&uLocal_109, 7);
			iLocal_112 = 0;
			func_197(&uLocal_128);
			if (func_349())
			{
				MISC::SET_BIT(&uLocal_109, 8);
			}
		}
	}
}

int func_349()//Position - 0xC570
{
	if (((((((func_346(0) && func_346(1)) && func_346(2)) && func_346(3)) && func_346(4)) && func_346(6)) && func_346(7)) && func_346(8))
	{
		return 1;
	}
	return 0;
}

int func_350(int iParam0)//Position - 0xC5CC
{
	switch (iParam0)
	{
		case 0:
			return 14000;
		
		case 1:
			return 15000;
		
		case 2:
			return 14000;
		
		case 3:
			return 14500;
		
		case 4:
			return 14000;
		
		case 5:
			return 14000;
		
		case 6:
			return 14000;
		
		case 7:
			return 15000;
		
		case 8:
			return 14500;
		
		default:
	}
	return 0;
}

struct<4> func_351(int iParam0)//Position - 0xC648
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPP_HELP_1", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPP_HELP_2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPP_HELP_3", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPP_HELP_4", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPP_HELP_5", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPP_HELP_6", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPP_HELP_7", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPP_HELP_8", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPP_HELP_9", 16);
			break;
	}
	return Var0;
}

int func_352(int iParam0)//Position - 0xC6FA
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!BitTest(uLocal_109, 9) && iParam0 != 2)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if ((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && BitTest(uLocal_109, 11))
			{
				return 1;
			}
			break;
		
		case 1:
			if ((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && BitTest(uLocal_109, 12))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && BitTest(uLocal_109, 13))
			{
				return 1;
			}
			break;
		
		case 3:
			if (((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && BitTest(uLocal_109, 9)) && iLocal_119 == 0)
			{
				return 1;
			}
			break;
		
		case 4:
			if ((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && iLocal_119 == 1)
			{
				return 1;
			}
			break;
		
		case 5:
			if (((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && iLocal_119 == 1) && (BitTest(Global_1946102, 4) || func_346(4)))
			{
				return 1;
			}
			break;
		
		case 6:
			if ((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && iLocal_119 == 2)
			{
				return 1;
			}
			break;
		
		case 7:
			if (((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && iLocal_119 == 2) && (BitTest(Global_1946102, 6) || func_346(6)))
			{
				return 1;
			}
			break;
		
		case 8:
			if (((((!func_346(iParam0) && !BitTest(Global_1946102, bVar0)) && BitTest(uLocal_109, 14)) && iLocal_119 == 2) && (BitTest(Global_1946102, 6) || func_346(6))) && (BitTest(Global_1946102, 7) || func_346(7)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_353()//Position - 0xC928
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_354()//Position - 0xC94A
{
	if (iLocal_111 != -1)
	{
		func_355(iLocal_111);
	}
}

void func_355(int iParam0)//Position - 0xC95E
{
	if (func_356(&uLocal_132, "SMGCAUD", func_376(iParam0), 8, 0, 0, 0))
	{
		iLocal_111 = -1;
	}
}

bool func_356(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC981
{
	func_375(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_357(sParam2, iParam3, 0);
}

int func_357(char* sParam0, int iParam1, bool bParam2)//Position - 0xC9CF
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
					func_374();
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
		if (func_373(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_372();
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
				func_364();
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
				if (func_363())
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
			if (func_331())
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
			func_362();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_361();
		func_358();
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
		func_374();
	}
	return 0;
}

void func_358()//Position - 0xCC9D
{
	if (!func_359())
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

int func_359()//Position - 0xCCD4
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_16())
	{
		return 0;
	}
	if (func_360(PLAYER::PLAYER_ID()))
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

bool func_360(int iParam0)//Position - 0xCD37
{
	return func_14(iParam0, 20);
}

void func_361()//Position - 0xCD47
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

void func_362()//Position - 0xCD77
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

int func_363()//Position - 0xCE0C
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

void func_364()//Position - 0xCEA5
{
	if (func_371(14))
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
		Global_20266 = func_365();
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

var func_365()//Position - 0xCF47
{
	func_366();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_366()//Position - 0xCF60
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_369(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_368(PLAYER::PLAYER_PED_ID());
			if (func_367(iVar0) && (!func_371(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_367(Global_113386.f_2363.f_539.f_4321))
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

bool func_367(int iParam0)//Position - 0xD05D
{
	return iParam0 < 3;
}

int func_368(int iParam0)//Position - 0xD069
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_369(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_369(int iParam0)//Position - 0xD0A6
{
	if (func_367(iParam0))
	{
		return func_370(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_370(int iParam0)//Position - 0xD0CB
{
	return Global_1998[iParam0 /*29*/];
}

bool func_371(int iParam0)//Position - 0xD0DA
{
	return Global_43052 == iParam0;
}

void func_372()//Position - 0xD0E8
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

bool func_373(int iParam0, int iParam1)//Position - 0xD13E
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

void func_374()//Position - 0xD176
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

void func_375(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xD1CD
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
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

char* func_376(int iParam0)//Position - 0xD223
{
	switch (iParam0)
	{
		case 0:
			return "SMGC_LAPTUT1";
		
		case 1:
			return "SMGC_LAPTUT2";
		
		case 2:
			return "SMGC_LAPTUT3";
		
		default:
	}
	return "SMGC_LAPTUT1";
}

void func_377()//Position - 0xD25D
{
	bool bVar0;
	
	if (!BitTest(uLocal_109, 4) && !func_353())
	{
		if (iLocal_119 == 0)
		{
			if (!func_202(15963, -1))
			{
				bVar0 = true;
				iLocal_112 = 9000;
				iLocal_111 = 0;
				func_204(15963, 1, -1);
			}
		}
		else if (iLocal_119 == 2)
		{
			if (!func_202(15964, -1))
			{
				bVar0 = true;
				iLocal_112 = 9000;
				iLocal_111 = 2;
				func_204(15964, 1, -1);
			}
		}
		else if (iLocal_119 == 1)
		{
			if (!func_202(15965, -1))
			{
				bVar0 = true;
				iLocal_112 = 9000;
				iLocal_111 = 1;
				func_204(15965, 1, -1);
			}
		}
	}
	if (bVar0)
	{
		MISC::SET_BIT(&uLocal_109, 4);
	}
	else if (BitTest(uLocal_109, 4))
	{
		if (!func_5(&uLocal_124))
		{
			func_4(&uLocal_124, 0, 0);
		}
		else if (func_3(&uLocal_124, iLocal_112, 0))
		{
			MISC::CLEAR_BIT(&uLocal_109, 4);
			iLocal_112 = 0;
			func_197(&uLocal_124);
			if (func_378())
			{
				MISC::SET_BIT(&uLocal_109, 5);
			}
		}
	}
}

int func_378()//Position - 0xD344
{
	if ((func_202(15963, -1) && func_202(15964, -1)) && func_202(15965, -1))
	{
		return 1;
	}
	return 0;
}

bool func_379()//Position - 0xD376
{
	return func_202(15966, -1);
}

void func_380()//Position - 0xD386
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_392(0, 1);
	}
	else if (func_324())
	{
		func_392(0, 1);
	}
	else if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_392(0, 1);
	}
}

bool func_381()//Position - 0xD3C1
{
	return Global_75485;
}

void func_382()//Position - 0xD3CD
{
	func_380();
	iLocal_300 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("HANGAR_CARGO");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_300))
	{
		SYSTEM::WAIT(0);
	}
	func_330(1);
	func_390(1);
	func_389();
	HUD::THEFEED_PAUSE();
	func_388(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3) || Global_2815059.f_1917)
	{
		if (Global_2815059.f_1917)
		{
		}
		func_392(0, 1);
	}
	func_388(1);
	iLocal_118 = func_308();
	func_273();
	func_385();
	if (func_349())
	{
		MISC::SET_BIT(&uLocal_109, 8);
	}
	func_384();
	if (func_379())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	if (MISC::IS_PC_VERSION())
	{
		func_383(1, 1, 1, 1);
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Computer_Screen_Active_Scene"))
	{
		AUDIO::START_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	}
}

int func_383(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xD494
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_384()//Position - 0xD4C7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		iLocal_298[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_116[iVar0] = -1;
		iLocal_115[iVar0] = 0;
		iVar0++;
	}
}

void func_385()//Position - 0xD511
{
	if (func_378())
	{
		MISC::SET_BIT(&uLocal_109, 5);
	}
	else
	{
		MISC::SET_BIT(&uLocal_109, 4);
		iLocal_112 = 800;
		func_387(1);
		func_386(&uLocal_132, 2, 0, "NERVOUSRON", 0, 1);
	}
}

void func_386(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xD549
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

void func_387(bool bParam0)//Position - 0xD5E4
{
	if (bParam0)
	{
		Global_1835497 = 1;
	}
	else
	{
		Global_1835497 = 0;
	}
}

void func_388(int iParam0)//Position - 0xD5FE
{
	if (Global_75485 != iParam0)
	{
		Global_75485 = iParam0;
	}
}

void func_389()//Position - 0xD618
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574747.f_9 = MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}

void func_390(bool bParam0)//Position - 0xD641
{
	if (bParam0)
	{
		func_391();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_334(0))
		{
			func_330(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_391()//Position - 0xD6A4
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_392(int iParam0, bool bParam1)//Position - 0xD6CD
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_300);
	func_388(iParam0);
	func_390(0);
	func_393();
	AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(1000);
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Exit", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	if (MISC::IS_PC_VERSION())
	{
		func_383(0, 1, 1, 1);
	}
	HUD::THEFEED_RESUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Computer_Screen_Active_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	}
	Global_1964706.f_5 = -1;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_393()//Position - 0xD736
{
	if (!Global_1574747)
	{
		return;
	}
	func_394();
}

void func_394()//Position - 0xD74D
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

