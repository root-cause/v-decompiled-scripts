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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[4] = { 0, 0, 0, 0 };
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 4;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 4;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 4;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 4;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 4;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<485> Local_91 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	iLocal_90 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_347();
	}
	func_346(0);
	func_334(&(Local_91.f_1), func_345(Global_96470[6 /*19*/], Global_96470[7 /*19*/]));
	func_333(&Local_91, 3);
	while (!func_332(2))
	{
		if (!Global_78588)
		{
			func_330();
			if (func_329(3, 0))
			{
				if (!func_328(66))
				{
					if (!BitTest(uLocal_41, 8))
					{
						Local_91.f_1.f_141[0 /*2*/] = 302;
						Local_91.f_1.f_141[0 /*2*/].f_1 = 191;
						Local_91.f_1.f_141[1 /*2*/] = 309;
						Local_91.f_1.f_141[1 /*2*/].f_1 = 109;
						Local_91.f_1.f_141[2 /*2*/] = 196;
						Local_91.f_1.f_141[2 /*2*/].f_1 = 318;
						Local_91.f_1.f_141[3 /*2*/] = 220;
						Local_91.f_1.f_141[3 /*2*/].f_1 = 227;
						MISC::SET_BIT(&uLocal_41, 8);
					}
				}
				else if (!BitTest(uLocal_41, 9))
				{
					Local_91.f_1.f_141[0 /*2*/] = 0;
					Local_91.f_1.f_141[0 /*2*/].f_1 = 0;
					Local_91.f_1.f_141[1 /*2*/] = 0;
					Local_91.f_1.f_141[1 /*2*/].f_1 = 0;
					Local_91.f_1.f_141[2 /*2*/] = 0;
					Local_91.f_1.f_141[2 /*2*/].f_1 = 0;
					Local_91.f_1.f_141[3 /*2*/] = 0;
					Local_91.f_1.f_141[3 /*2*/].f_1 = 0;
					MISC::SET_BIT(&uLocal_41, 9);
				}
			}
			func_329(3, 0);
			if (Global_113386.f_7261.f_227[71] == 1 && !func_327(14))
			{
				func_316(&Local_91, 40f, 50f);
				func_314(&Local_91);
				func_291();
				func_156();
			}
			else if (BitTest(Local_91.f_449, 0))
			{
				func_152(&Local_91);
			}
			if (func_150(0) || BitTest(Local_91.f_449, 2))
			{
				func_68(&Local_91);
				func_6(&Local_91);
				func_5(&Local_91);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("agency_heist3a")) > 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("agency_heist3b")) > 0)
		{
			func_4();
		}
		if (func_332(12))
		{
			if (!func_3(0))
			{
				if (!BitTest(Global_113386.f_1.f_120[3], 8))
				{
					func_2(3, 8, 1);
				}
			}
			else if (BitTest(Global_113386.f_1.f_120[3], 8))
			{
				func_2(3, 8, 0);
			}
		}
		else if (BitTest(Global_113386.f_1.f_120[3], 8))
		{
			func_2(3, 8, 0);
		}
		SYSTEM::WAIT(0);
	}
	func_1(0);
	func_347();
}

int func_1(int iParam0)//Position - 0x2D5
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_2(int iParam0, int iParam1, bool bParam2)//Position - 0x32C
{
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113386.f_1.f_120[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[iParam0]), iParam1);
	}
	MISC::SET_BIT(&Global_96449, iParam0);
}

int func_3(bool bParam0)//Position - 0x36A
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_4()//Position - 0x392
{
	int iVar0;
	
	if (Global_78579)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_96661.f_8 = (Global_96661.f_8 + iVar0);
}

void func_5(var uParam0)//Position - 0x3D4
{
	if (BitTest(Global_96449, *uParam0))
	{
		if (BitTest(uParam0->f_449, 1))
		{
			MISC::SET_BIT(&(uParam0->f_449), 15);
			MISC::SET_BIT(&(uParam0->f_449), 16);
			MISC::SET_BIT(&(uParam0->f_449), 14);
			MISC::CLEAR_BIT(&Global_96449, *uParam0);
		}
	}
}

void func_6(var uParam0)//Position - 0x41D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(func_67(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (BitTest(uParam0->f_449, 2))
		{
			func_7(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_7(var uParam0, int iParam1, int iParam2)//Position - 0x4A8
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_65(uParam0);
			uParam0->f_464 = iParam1;
			func_8(uParam0, iParam1, iParam2);
		}
	}
}

void func_8(var uParam0, int iParam1, int iParam2)//Position - 0x4DA
{
	switch (iParam1)
	{
		case 0:
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_36(uParam0, uParam0->f_417, iParam2);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
		
		case 3:
			func_19(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			MISC::SET_BIT(&(uParam0->f_449), 9);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
		
		case 4:
			func_15(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_15(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_113386.f_1.f_6[*uParam0] = 1;
			HUD::CLEAR_HELP(false);
			func_13(uParam0, 0);
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::SET_BIT(&(uParam0->f_449), 4);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
	}
	func_9(uParam0);
}

void func_9(var uParam0)//Position - 0x607
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 13, true);
	sVar1 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 11, true);
	sVar2 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 32, true);
	sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true);
	sVar4 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, true);
	sVar5 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 6, true);
		sVar1 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 7, true);
		sVar2 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 29, true);
	}
	bVar6 = func_12(1, *uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.6f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	switch (uParam0->f_464)
	{
		case 0:
			if (BitTest(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(sVar2);
					func_10("PB_H_ZOOM");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_11(sVar2);
					func_10("PB_H_ZOOM");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(sVar5);
					func_10("PB_H_EXIT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 2:
			if (BitTest(uParam0->f_449, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				if (*uParam0 == 2)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_11(sVar0);
					func_10("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(sVar4);
					func_10("PB_H_TRIG");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					func_11(sVar0);
					func_10("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(sVar5);
					func_10("PB_H_UNDO");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(sVar4);
					func_10("PB_H_TRIG");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 3:
			if (BitTest(uParam0->f_449, 2))
			{
				if (BitTest(uParam0->f_449, 9))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(sVar1);
					func_10("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_11(sVar1);
					func_10("PB_H_SELCT");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(sVar4);
					func_10("PB_H_TRIG");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 4:
			if (BitTest(uParam0->f_449, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				func_11(sVar2);
				func_10("PB_H_ZOOM");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				func_11(sVar3);
				func_10("PB_H_LOOK");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_11(sVar5);
				func_10("PB_H_UNDO");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_11(sVar4);
				func_10("PB_H_CONF");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	}
}

void func_10(char* sParam0)//Position - 0xAD4
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_11(char* sParam0)//Position - 0xAE6
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_12(int iParam0, int iParam1)//Position - 0xAF4
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
	iVar0 = BitTest(Global_113386.f_9085.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

void func_13(var uParam0, bool bParam1)//Position - 0xB3E
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_449), 18);
		if (((!func_14(&(uParam0->f_1.f_20[0 /*4*/])) && !func_14(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_14(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_14(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			HUD::CLEAR_HELP(false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_449), 18);
	}
}

bool func_14(char* sParam0)//Position - 0xBB3
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_15(char* sParam0, int iParam1)//Position - 0xBC6
{
	int iVar0;
	int iVar1;
	
	if (Global_112026 && iParam1)
	{
		if (func_14(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_113386.f_20410[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_113386.f_20410.f_145 - 2))
			{
				func_18(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_17((Global_113386.f_20410.f_145 - 1));
			Global_113386.f_20410.f_145 = (Global_113386.f_20410.f_145 - 1);
			func_16();
			return;
		}
		iVar0++;
	}
}

void func_16()//Position - 0xC73
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_17(int iParam0)//Position - 0xD8A
{
	StringCopy(&(Global_113386.f_20410[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113386.f_20410[iParam0 /*16*/].f_4), "", 16);
	Global_113386.f_20410[iParam0 /*16*/].f_8 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_9 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_11 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_10 = -1;
	Global_113386.f_20410[iParam0 /*16*/].f_12 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_13 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_14 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_15 = 0;
}

void func_18(int iParam0, int iParam1)//Position - 0xE24
{
	Global_113386.f_20410[iParam0 /*16*/] = { Global_113386.f_20410[iParam1 /*16*/] };
	Global_113386.f_20410[iParam0 /*16*/].f_4 = { Global_113386.f_20410[iParam1 /*16*/].f_4 };
	Global_113386.f_20410[iParam0 /*16*/].f_8 = Global_113386.f_20410[iParam1 /*16*/].f_8;
	Global_113386.f_20410[iParam0 /*16*/].f_10 = Global_113386.f_20410[iParam1 /*16*/].f_10;
	Global_113386.f_20410[iParam0 /*16*/].f_9 = Global_113386.f_20410[iParam1 /*16*/].f_9;
	Global_113386.f_20410[iParam0 /*16*/].f_11 = Global_113386.f_20410[iParam1 /*16*/].f_11;
	Global_113386.f_20410[iParam0 /*16*/].f_12 = Global_113386.f_20410[iParam1 /*16*/].f_12;
	Global_113386.f_20410[iParam0 /*16*/].f_13 = Global_113386.f_20410[iParam1 /*16*/].f_13;
	Global_113386.f_20410[iParam0 /*16*/].f_14 = Global_113386.f_20410[iParam1 /*16*/].f_14;
	Global_113386.f_20410[iParam0 /*16*/].f_15 = Global_113386.f_20410[iParam1 /*16*/].f_15;
}

void func_19(var uParam0)//Position - 0xF34
{
	int iVar0;
	struct<2> Var1;
	
	func_35(uParam0);
	func_33(uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = func_66(func_32(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_31(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (iVar0 == func_31(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	Var1.f_0 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_27(uParam0, &Var1, uParam0->f_1.f_10);
	func_25(uParam0, 1, 1);
	func_13(uParam0, 0);
	func_20(uParam0);
}

void func_20(var uParam0)//Position - 0x1007
{
	int iVar0;
	
	if (BitTest(uParam0->f_449, 7))
	{
		if (!BitTest(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_113386.f_1[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_20[0 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_113386.f_1[*uParam0] = 1;
					}
					else if (func_22() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (((!BitTest(uParam0->f_449, 11) && !BitTest(uParam0->f_449, 10)) && !func_21()) && uParam0->f_483 == 0)
						{
							HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_CHOICE");
							HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_113386.f_1.f_6[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_108[0 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_113386.f_1.f_6[*uParam0] = 1;
					}
					else if (func_22() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!BitTest(uParam0->f_449, 10))
						{
							if ((!func_14("PB_H_GUNM") && !func_14("PB_H_HACK")) && !func_14("PB_H_DRIV"))
							{
								iVar0 = func_66(func_32(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!BitTest(uParam0->f_449, 11) && !BitTest(uParam0->f_449, 10)) && !func_21()) && uParam0->f_483 == 0)
									{
										switch (Global_96470[iVar0 /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_GUNM");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
											
											case 2:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_HACK");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
											
											case 3:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_DRIV");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_21()//Position - 0x1267
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_22()//Position - 0x1289
{
	if (Global_113386.f_20410.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

void func_23(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x12A6
{
	func_24(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_24(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x12C7
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
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_16();
	}
}

void func_25(var uParam0, bool bParam1, int iParam2)//Position - 0x149A
{
	if (!BitTest(uParam0->f_1.f_303, bParam1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_280[bParam1 /*2*/]), ""))
		{
			func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[bParam1 /*2*/], iParam2);
			MISC::SET_BIT(&(uParam0->f_1.f_303), bParam1);
		}
	}
}

void func_26(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)//Position - 0x14F1
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Param2))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param2 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam3;
		uParam0->f_483++;
	}
}

void func_27(var uParam0, var uParam1, float fParam2)//Position - 0x1551
{
	struct<3> Var0;
	
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = MISC::GET_GAME_TIMER() + 1000;
	Var0 = { func_29(uParam0, &(uParam0->f_411)) };
	func_28(&(uParam0->f_649), Var0, fParam2);
}

void func_28(var uParam0, struct<3> Param1, float fParam2)//Position - 0x1596
{
	uParam0->f_11 = { Param1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

Vector3 func_29(var uParam0, var uParam1)//Position - 0x15B5
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_30(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	fVar8 = fVar4;
	fVar9 = MISC::ATAN((fVar8 / uParam0->f_1.f_8));
	fVar10 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar11 = (Var7.f_2 - uParam0->f_649.f_1.f_2);
	fVar12 = (fVar11 - fVar10);
	fVar13 = MISC::ATAN((fVar12 / uParam0->f_1.f_8));
	fVar14 = ((fVar9 * 3f) / 18f);
	return (fVar13 * 0.95f), fVar14, (-fVar9 * 0.85f);
}

void func_30(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x169A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*uParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_31(int iParam0, int iParam1)//Position - 0x1705
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x17EB
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_33(var uParam0)//Position - 0x183C
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_16));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_16.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_34(uParam0);
	switch (*uParam0)
	{
		case 0:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 4:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_329(*uParam0, uParam0->f_1.f_29));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = func_66(func_32(*uParam0));
	if (iVar0 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (iVar0 == func_31(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (iVar0 == func_31(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_34(var uParam0)//Position - 0x1AA9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_LABELS");
	func_10("H_CRW_NAME");
	func_10("H_CRW_TYPE");
	func_10("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_10("H_LBL_JWL");
			break;
		
		case 1:
			func_10("H_LBL_DOC");
			break;
		
		case 2:
			func_10("H_LBL_RUR");
			break;
		
		case 3:
			func_10("H_LBL_AGN");
			break;
		
		case 4:
			func_10("H_LBL_FA");
			func_10("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_10("H_LBL_CRW");
	}
	func_10("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_10("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_10("H_LBL_J1");
			func_10("H_LBL_J2");
			func_10("H_LBL_J3");
			func_10("H_LBL_J4");
			func_10("HC_J_IMPACT");
			func_10("HC_J_STEALTH");
			break;
		
		case 1:
			func_10("HC_D_BLOW_UP");
			func_10("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_10("H_LBL_R1");
			func_10("H_LBL_R2");
			func_10("H_LBL_R3");
			func_10("H_LBL_R4");
			func_10("H_LBL_R5");
			func_10("H_LBL_R6");
			func_10("H_LBL_R7");
			func_10("H_LBL_R8");
			func_10("H_LBL_R9");
			func_10("H_LBL_R10");
			func_10("H_LBL_R11");
			func_10("H_LBL_R12");
			break;
		
		case 3:
			func_10("H_LBL_A1");
			func_10("H_LBL_A2");
			func_10("H_LBL_A3");
			func_10("H_LBL_A4");
			func_10("H_LBL_A5");
			func_10("HC_A_FIRETRUCK");
			func_10("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_10("H_LBL_F1");
			func_10("H_LBL_F2");
			func_10("H_LBL_F3");
			func_10("H_LBL_F4");
			func_10("H_LBL_F5");
			func_10("HC_F_TRAFFCONT");
			func_10("HC_F_HELI");
			break;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_35(var uParam0)//Position - 0x1CAB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_36(var uParam0, int iParam1, int iParam2)//Position - 0x1CCD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_25(uParam0, 2, 1);
	iVar0 = func_66(func_32(*uParam0));
	iVar1 = Global_96470[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_63(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_63(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_63(uParam0, iVar0, 2);
			break;
	}
	func_62(uParam0, uParam0->f_417);
	func_37(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_27(uParam0, &(uParam0->f_1.f_97[iParam1 /*2*/]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_13(uParam0, 0);
	func_20(uParam0);
}

void func_37(var uParam0, int iParam1)//Position - 0x1E03
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_32(*uParam0);
	iVar1 = func_66(iVar0);
	iVar2 = Global_96470[iVar1 /*19*/].f_1[iParam1];
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[iParam1 /*2*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_34(uParam0);
	iVar3 = 0;
	if (Global_113386.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_113386.f_1.f_12[iVar1 /*6*/][iParam1];
		func_42(uParam0->f_413, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_41(iVar6) == iVar2)
			{
				if (func_40(iVar6))
				{
					if (!func_39(iVar6))
					{
						if (!func_38(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_42(uParam0->f_413, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_418[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_113386.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_38(var uParam0, bool bParam1)//Position - 0x1F8D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(func_32(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_113386.f_1.f_12[iVar0 /*6*/][iVar1] == bParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_39(int iParam0)//Position - 0x1FD2
{
	return BitTest(Global_113386.f_1.f_118, iParam0);
}

bool func_40(int iParam0)//Position - 0x1FE5
{
	return BitTest(Global_113386.f_1.f_116, iParam0);
}

int func_41(int iParam0)//Position - 0x1FF8
{
	return Global_96316[iParam0 /*5*/];
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2008
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	func_10(func_60(iParam1));
	func_10(func_59(iParam1));
	switch (func_41(iParam1))
	{
		case 1:
			func_10(func_58(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 0));
			func_10(func_58(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 1));
			func_10(func_58(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 2));
			func_10(func_58(3));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 3));
			break;
		
		case 2:
			func_10(func_54(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 0));
			func_10(func_54(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 1));
			func_10(func_54(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 2));
			break;
		
		case 3:
			func_10(func_49(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 0));
			func_10(func_49(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 1));
			func_10(func_49(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 2));
			break;
	}
	func_10("H_CRW_CUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

var func_43(int iParam0)//Position - 0x2144
{
	return Global_96316[iParam0 /*5*/].f_1;
}

int func_44(int iParam0, int iParam1)//Position - 0x2156
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_46(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_45(iParam1))) * 100f));
}

int func_45(int iParam0)//Position - 0x217F
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)//Position - 0x21B9
{
	if (func_41(iParam0) != 3)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

int func_47(int iParam0, int iParam1)//Position - 0x21D7
{
	return func_48(iParam1, Global_113386.f_1.f_73[iParam0 /*3*/].f_1, Global_113386.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x2201
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

char* func_49(int iParam0)//Position - 0x2255
{
	return func_50(3, iParam0);
}

char* func_50(int iParam0, int iParam1)//Position - 0x2264
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_51(int iParam0, int iParam1)//Position - 0x2347
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_53(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_52(iParam1))) * 100f));
}

int func_52(int iParam0)//Position - 0x2370
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_53(int iParam0, int iParam1)//Position - 0x23AA
{
	if (func_41(iParam0) != 2)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

char* func_54(int iParam0)//Position - 0x23C8
{
	return func_50(2, iParam0);
}

int func_55(int iParam0, int iParam1)//Position - 0x23D7
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_57(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_56(iParam1))) * 100f));
}

int func_56(int iParam0)//Position - 0x2400
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)//Position - 0x2449
{
	if (func_41(iParam0) != 1)
	{
		return -1;
	}
	return func_47(iParam0, iParam1);
}

char* func_58(int iParam0)//Position - 0x2467
{
	return func_50(1, iParam0);
}

char* func_59(int iParam0)//Position - 0x2476
{
	switch (Global_96316[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_60(int iParam0)//Position - 0x24BF
{
	return func_61(iParam0);
}

char* func_61(int iParam0)//Position - 0x24CD
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_62(var uParam0, int iParam1)//Position - 0x25B0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_63(var uParam0, int iParam1, bool bParam2)//Position - 0x25CF
{
	int iVar0;
	
	if (!BitTest(Global_96470[iParam1 /*19*/].f_18, bParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(Global_96470[iParam1 /*19*/].f_7[bParam2 /*2*/]), ""))
		{
			func_26(uParam0, uParam0->f_1.f_276, Global_96470[iParam1 /*19*/].f_7[bParam2 /*2*/], 1);
			MISC::SET_BIT(&(Global_96470[iParam1 /*19*/].f_18), bParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_96470[iParam1 /*19*/].f_7[bParam2 /*2*/]), &(Global_96470[iVar0 /*19*/].f_7[bParam2 /*2*/])))
				{
					MISC::SET_BIT(&(Global_96470[iVar0 /*19*/].f_18), bParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_64(var uParam0)//Position - 0x2677
{
	func_27(uParam0, &(uParam0->f_1.f_12), 45f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_20(uParam0);
}

void func_65(var uParam0)//Position - 0x26AD
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	HUD::CLEAR_HELP(false);
}

int func_66(int iParam0)//Position - 0x26F0
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_205[iParam0];
}

int func_67(int iParam0)//Position - 0x271D
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_68(var uParam0)//Position - 0x276E
{
	if (BitTest(uParam0->f_449, 1))
	{
		func_69(uParam0);
	}
}

void func_69(var uParam0)//Position - 0x2786
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!BitTest(uParam0->f_449, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_149(0))
			{
				if (func_140(8))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_401) < 4f)
					{
						Var1 = { uParam0->f_401 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						fVar3 = MISC::ABSF((uParam0->f_404 - fVar2));
						if (fVar3 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar4 = uParam0->f_404;
							if (fVar4 > 180f)
							{
								fVar4 = (fVar4 - 360f);
							}
							else if (fVar4 < -180f)
							{
								fVar4 = (fVar4 + 360f);
							}
							if ((fVar4 - fVar2) < fVar3)
							{
								fVar3 = MISC::ABSF((fVar4 - fVar2));
							}
							if (fVar3 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar2 > 180f)
								{
									fVar2 = (fVar2 - 360f);
								}
								else if (fVar2 < -180f)
								{
									fVar2 = (fVar2 + 360f);
								}
								if ((uParam0->f_404 - fVar2) < fVar3)
								{
									fVar3 = MISC::ABSF((uParam0->f_404 - fVar2));
								}
								if (fVar3 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar4 - fVar2) < fVar3)
									{
										fVar3 = MISC::ABSF((fVar4 - fVar2));
									}
									if (fVar3 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				func_139(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_138(uParam0->f_451, 1))
			{
				func_136(&(uParam0->f_451));
				func_122(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_136(&(uParam0->f_451));
		}
	}
	else
	{
		bVar5 = func_12(1, *uParam0);
		func_80(uParam0);
		if (((!bVar5 && uParam0->f_453 > 15) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || PAD::IS_CONTROL_JUST_PRESSED(2, 238))) || BitTest(uParam0->f_449, 8))
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 8);
			func_70(uParam0, 0);
		}
	}
}

void func_70(var uParam0, bool bParam1)//Position - 0x299F
{
	struct<3> Var0;
	int iVar1;
	
	uParam0->f_453 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		if (!bParam1)
		{
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_404))), (1f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 134);
	}
	HUD::DISPLAY_RADAR(true);
	func_73(0);
	func_72();
	HUD::THEFEED_RESUME();
	HUD::RESET_HUD_COMPONENT_VALUES(17);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(false);
	func_71(&(uParam0->f_649), 0, 1);
	func_15(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_15(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_15(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_15(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	HUD::CLEAR_HELP(true);
	while (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
		SYSTEM::WAIT(0);
	}
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);
	if (iVar1 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iVar1);
	}
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_65(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 7);
	MISC::CLEAR_BIT(&(uParam0->f_449), 2);
	Global_96448 = 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2)//Position - 0x2B24
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (bParam2)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, bParam1, 0);
		}
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, bParam1);
	}
	if (uParam0->f_23)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_72()//Position - 0x2BBE
{
	Global_23011.f_5 = 0;
}

void func_73(bool bParam0)//Position - 0x2BCC
{
	if (bParam0)
	{
		func_79();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_149(0))
		{
			func_74(0);
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

void func_74(int iParam0)//Position - 0x2C2F
{
	if (func_78())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_77())
		{
			func_76(1, 1);
		}
		else
		{
			func_76(0, 0);
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
	if (!func_75())
	{
		Global_20266.f_1 = 3;
	}
}

int func_75()//Position - 0x2CB9
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_76(bool bParam0, bool bParam1)//Position - 0x2CE0
{
	if (bParam0)
	{
		if (func_149(0))
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

bool func_77()//Position - 0x2D54
{
	return BitTest(Global_1958711, 5);
}

bool func_78()//Position - 0x2D62
{
	return BitTest(Global_1958711, 19);
}

void func_79()//Position - 0x2D71
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_80(var uParam0)//Position - 0x2D9A
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, true);
	if (!MISC::ARE_STRINGS_EQUAL(sVar0, uParam0->f_466))
	{
		func_9(uParam0);
	}
	uParam0->f_466 = sVar0;
	func_120();
	func_110(uParam0);
	func_88(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_85(uParam0);
	}
	if (func_22())
	{
		func_20(uParam0);
	}
	bVar1 = uParam0->f_454 > MISC::GET_GAME_TIMER();
	func_81(&(uParam0->f_649), BitTest(uParam0->f_449, 4), (BitTest(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
	if (BitTest(uParam0->f_449, 7))
	{
		if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!BitTest(uParam0->f_449, 11) && !BitTest(uParam0->f_449, 10)) && !func_21()) && uParam0->f_483 == 0))
				{
					if (!BitTest(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	HUD::DISPLAY_RADAR(false);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::THEFEED_HIDE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 201);
	}
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	if (!BitTest(uParam0->f_449, 7))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			Var2 = { uParam0->f_401 };
			Var2 = { Var2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &(Var2.f_2), false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 134);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			MISC::SET_BIT(&(uParam0->f_449), 7);
		}
	}
}

void func_81(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0x2FD7
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	PAD::_0x7F4724035FDCA1DD(2);
	func_84(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		fVar1 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
		fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
		fVar3 = (fVar1 - iParam0->f_29);
		fVar4 = (fVar2 - iParam0->f_30);
		iParam0->f_29 = fVar1;
		iParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar3 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_83((iVar0[2] + iParam0->f_24), -127, 127);
		iVar0[3] = func_83((iVar0[3] + iParam0->f_25), -127, 127);
	}
	if (iParam0->f_24 == iVar0[2] && iParam0->f_25 == iVar0[3])
	{
		if (iParam0->f_27 < MISC::GET_GAME_TIMER())
		{
			iParam0->f_24 = 0;
			iParam0->f_25 = 0;
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				iParam0->f_28 = 1;
			}
		}
	}
	else
	{
		iParam0->f_24 = iVar0[2];
		iParam0->f_25 = iVar0[3];
		iParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
		iParam0->f_28 = 0;
	}
	if (bParam2)
	{
		iParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(iParam0->f_20));
		iParam0->f_8.f_1 = ((-iParam0->f_8.f_2 * IntToFloat(iParam0->f_22)) / IntToFloat(iParam0->f_20));
		iParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(iParam0->f_21));
	}
	else
	{
		iParam0->f_8 = { 0f, 0f, 0f };
		iParam0->f_24 = 0;
		iParam0->f_25 = 0;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	Var6 = { iParam0->f_8 + iParam0->f_11 };
	if ((PAD::_IS_USING_KEYBOARD(2) && bParam2) && !iParam0->f_28)
	{
		iParam0->f_14 = Var6.f_0;
		iParam0->f_14.f_1 = Var6.f_1;
		iParam0->f_14.f_2 = Var6.f_2;
	}
	else
	{
		iParam0->f_14 = (iParam0->f_14 + func_82(((((Var6.f_0 - iParam0->f_14) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		iParam0->f_14.f_1 = (iParam0->f_14.f_1 + func_82(((((Var6.f_1 - iParam0->f_14.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		iParam0->f_14.f_2 = (iParam0->f_14.f_2 + func_82(((((Var6.f_2 - iParam0->f_14.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (iParam0->f_26)
	{
		iParam0->f_14 = func_82(iParam0->f_14, SYSTEM::TO_FLOAT(-iParam0->f_21), SYSTEM::TO_FLOAT(iParam0->f_21));
		iParam0->f_14.f_1 = func_82(iParam0->f_14.f_1, SYSTEM::TO_FLOAT(-iParam0->f_22), SYSTEM::TO_FLOAT(iParam0->f_22));
		iParam0->f_14.f_2 = func_82(iParam0->f_14.f_2, SYSTEM::TO_FLOAT(-iParam0->f_20), SYSTEM::TO_FLOAT(iParam0->f_20));
	}
	if (PAD::_IS_USING_KEYBOARD(0) && bParam1)
	{
		if (iParam0->f_28)
		{
			iParam0->f_17 = iParam0->f_7;
		}
	}
	else
	{
		iParam0->f_17 = iParam0->f_7;
	}
	if (bParam1)
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar7))
			{
				iParam0->f_17 = (iParam0->f_17 - 5f);
				iParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				iParam0->f_28 = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar8))
			{
				iParam0->f_17 = (iParam0->f_17 + 5f);
				iParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				iParam0->f_28 = 0;
			}
			if (bParam3)
			{
				iParam0->f_17 = func_82(iParam0->f_17, (iParam0->f_7 - iParam0->f_19), iParam0->f_7);
			}
			else
			{
				iParam0->f_17 = func_82(iParam0->f_17, (iParam0->f_7 - iParam0->f_19), (iParam0->f_7 + iParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = PAD::GET_CONTROL_VALUE(2, 207);
			iVar0[3] = PAD::GET_CONTROL_VALUE(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					iParam0->f_17 = (iParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (iParam0->f_19 / 2f)))));
				}
			}
			else
			{
				iParam0->f_17 = (iParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * iParam0->f_19))));
				iParam0->f_17 = (iParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * iParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				iParam0->f_17 = (iParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * iParam0->f_19))));
			}
		}
		else
		{
			iParam0->f_17 = (iParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * iParam0->f_19))));
		}
	}
	iParam0->f_18 = (iParam0->f_18 + (((iParam0->f_17 - iParam0->f_18) * 0.06f) * fVar5));
	CAM::SET_CAM_PARAMS(*iParam0, iParam0->f_1, iParam0->f_4 + iParam0->f_14, iParam0->f_18, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*iParam0))
		{
			if (CAM::IS_CAM_RENDERING(*iParam0))
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
		}
	}
}

float func_82(float fParam0, float fParam1, float fParam2)//Position - 0x352B
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

int func_83(int iParam0, int iParam1, int iParam2)//Position - 0x3552
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

void func_84(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x3577
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_85(var uParam0)//Position - 0x367B
{
	bool bVar0;
	bool bVar1;
	
	if (!func_12(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (BitTest(uParam0->f_449, 19))
				{
					uParam0->f_452 = MISC::GET_GAME_TIMER() + 500;
				}
				else
				{
					uParam0->f_452 = MISC::GET_GAME_TIMER();
				}
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_452)
			{
				bVar0 = false;
				bVar1 = false;
				while (bVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!BitTest(uParam0->f_1.f_303, bVar1 + 4))
						{
							func_87(uParam0, bVar1);
							if (BitTest(uParam0->f_1.f_370, bVar1))
							{
								MISC::SET_BIT(&(uParam0->f_449), 19);
							}
							else
							{
								MISC::CLEAR_BIT(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					bVar1++;
				}
				if (!bVar0)
				{
					func_86(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_86(int iParam0, int iParam1, bool bParam2)//Position - 0x3751
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	iVar0 = BitTest(Global_113386.f_9085.f_99.f_219[iParam0], iParam1);
	if (iVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113386.f_9085.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_9085.f_99.f_219[iParam0]), iParam1);
	}
}

void func_87(var uParam0, int iParam1)//Position - 0x37D3
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_27(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
	func_25(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_88(var uParam0)//Position - 0x381A
{
	int iVar0;
	int iVar1;
	
	if ((!func_21() && CAM::IS_SCREEN_FADED_IN()) && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (uParam0->f_483 > 0)
		{
			if (!BitTest(uParam0->f_449, 13))
			{
				if (func_89(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0 /*5*/].f_4)
					{
						MISC::CLEAR_BIT(&(uParam0->f_449), 11);
					}
					else
					{
						MISC::SET_BIT(&(uParam0->f_449), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_467[iVar0 /*5*/] = { uParam0->f_467[iVar0 + 1 /*5*/] };
						uParam0->f_467[iVar0 /*5*/].f_2 = { uParam0->f_467[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_467[iVar0 /*5*/].f_4 = uParam0->f_467[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_483 = (uParam0->f_483 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_467[iVar1 /*5*/] = { uParam0->f_467[iVar1 + 1 /*5*/] };
					uParam0->f_467[iVar1 /*5*/].f_2 = { uParam0->f_467[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_467[iVar1 /*5*/].f_4 = uParam0->f_467[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_483 = (uParam0->f_483 - 1);
				MISC::CLEAR_BIT(&(uParam0->f_449), 13);
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (BitTest(uParam0->f_449, 11))
			{
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
			}
			if (BitTest(uParam0->f_449, 13))
			{
				MISC::CLEAR_BIT(&(uParam0->f_449), 13);
			}
			uParam0->f_455++;
		}
	}
}

bool func_89(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x39C8
{
	func_109(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_90(sParam2, iParam3, 0);
}

int func_90(char* sParam0, int iParam1, bool bParam2)//Position - 0x3A16
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
					func_108();
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
		Global_21681 = { Global_21675 };
		func_106();
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
				func_99();
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
				if (func_98())
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
			if (func_75())
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
			func_97();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_96();
		func_91();
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
		func_108();
	}
	return 0;
}

void func_91()//Position - 0x3CE4
{
	if (!func_92())
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

int func_92()//Position - 0x3D1B
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_95())
	{
		return 0;
	}
	if (func_93(PLAYER::PLAYER_ID()))
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

bool func_93(int iParam0)//Position - 0x3D7E
{
	return func_94(iParam0, 20);
}

var func_94(int iParam0, int iParam1)//Position - 0x3D8E
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_95()//Position - 0x3DA6
{
	return -1;
}

void func_96()//Position - 0x3DAF
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

void func_97()//Position - 0x3DE0
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

int func_98()//Position - 0x3E75
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

void func_99()//Position - 0x3F0E
{
	if (func_327(14))
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
		Global_20266 = func_100();
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

int func_100()//Position - 0x3FB0
{
	func_101();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_101()//Position - 0x3FC9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_104(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_103(PLAYER::PLAYER_PED_ID());
			if (func_102(iVar0) && (!func_327(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_102(Global_113386.f_2363.f_539.f_4321))
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

bool func_102(bool bParam0)//Position - 0x40C7
{
	return bParam0 < 3;
}

int func_103(int iParam0)//Position - 0x40D3
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_104(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_104(int iParam0)//Position - 0x4110
{
	if (func_102(iParam0))
	{
		return func_105(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_105(int iParam0)//Position - 0x4135
{
	return Global_1998[iParam0 /*29*/];
}

void func_106()//Position - 0x4144
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

bool func_107(int iParam0, int iParam1)//Position - 0x419B
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

void func_108()//Position - 0x41D3
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

void func_109(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x422A
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

void func_110(var uParam0)//Position - 0x4280
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	
	uParam0->f_453++;
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_9(uParam0);
	}
	if (!BitTest(uParam0->f_449, 11))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39)) || (PAD::_IS_USING_KEYBOARD(2) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_40))))
		{
			func_118();
			if (BitTest(uParam0->f_449, 12))
			{
				MISC::SET_BIT(&(uParam0->f_449), 13);
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
				MISC::CLEAR_BIT(&(uParam0->f_449), 10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_449), 12);
		}
	}
	func_84(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_83((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_83((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > MISC::GET_GAME_TIMER())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			MISC::SET_BIT(&(uParam0->f_449), 4);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
		}
	}
	if (!BitTest(uParam0->f_449, 10))
	{
		if (!BitTest(uParam0->f_449, 11))
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_457) > 25000)
					{
						func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_PRESSED(2, 189)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_PRESSED(2, 190)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || PAD::IS_CONTROL_PRESSED(2, 188)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 40)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_416 != 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_416 = 0;
						if (BitTest(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							func_9(uParam0);
						}
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || PAD::IS_CONTROL_PRESSED(2, 187)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 41)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_416 != 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_416 = 1;
						if (BitTest(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							func_9(uParam0);
						}
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_21() || BitTest(uParam0->f_449, 13))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_21())
								{
									if (!BitTest(uParam0->f_449, 9))
									{
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										iVar0 = func_32(*uParam0);
										if (iVar0 != -1)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
											func_13(uParam0, 1);
											func_15(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_15(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_113386.f_1[*uParam0] = 1;
											HUD::CLEAR_HELP(false);
										}
									}
								}
								break;
							
							case 2:
								if (!func_12(4, *uParam0))
								{
									iVar0 = func_32(*uParam0);
									iVar1 = func_66(iVar0);
									if (uParam0->f_450 < Global_96470[iVar1 /*19*/])
									{
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
										func_13(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_86(4, *uParam0, 1);
									if (!func_3(0))
									{
										func_116(*uParam0);
									}
								}
								else
								{
									func_86(5, *uParam0, 1);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iVar0 = func_32(*uParam0);
								iVar1 = func_66(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_96470[iVar1 /*19*/])
								{
									if (Global_113386.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_41(Global_113386.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_96470[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												bVar3 = iVar5;
												if (bVar3 != 0)
												{
													if (Global_96316[bVar3 /*5*/] != Global_96470[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!BitTest(Global_113386.f_1.f_116, bVar3))
													{
														bVar4 = false;
													}
													if (BitTest(Global_113386.f_1.f_118, bVar3))
													{
														bVar4 = false;
													}
													if (bVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_38(uParam0, bVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_113386.f_1.f_12[iVar1 /*6*/][iVar2] = bVar3;
									}
									iVar2++;
								}
								func_13(uParam0, 1);
								func_63(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_40)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_32(*uParam0);
								iVar1 = func_66(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_13(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_113386.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_113386.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_96470[iVar1 /*19*/].f_1[uParam0->f_450];
									func_36(uParam0, uParam0->f_450, iVar6);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									uParam0->f_427 = 0;
									uParam0->f_456 = MISC::GET_GAME_TIMER();
								}
								else if (!func_332(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											iVar7++;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												func_2(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_13(uParam0, 1);
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										uParam0->f_465 = 0;
										func_115(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_32(*uParam0);
									iVar1 = func_66(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_113386.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_113386.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_96470[iVar1 /*19*/].f_1[uParam0->f_450];
									func_7(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_2(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_114(8, 0);
									func_86(5, 1, 0);
									uParam0->f_427 = 0;
									func_13(uParam0, 1);
									uParam0->f_456 = MISC::GET_GAME_TIMER();
									func_7(uParam0, 3, 0);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_32(*uParam0);
		iVar1 = func_66(iVar0);
		if (uParam0->f_450 >= Global_96470[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			func_25(uParam0, 0, 1);
			func_7(uParam0, 4, 0);
		}
		else
		{
			if (!BitTest(uParam0->f_449, 17))
			{
				iVar10 = Global_113386.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_113386.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_96470[iVar1 /*19*/].f_1[uParam0->f_450];
				func_36(uParam0, uParam0->f_450, iVar10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = MISC::GET_GAME_TIMER();
		MISC::CLEAR_BIT(&(uParam0->f_449), 10);
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (((!func_14(&(uParam0->f_1.f_108[0 /*4*/])) && !func_14(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_14(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_14(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_680))
		{
			iVar11 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_680);
			iVar1 = func_31(*uParam0, iVar11);
			iVar0 = func_32(*uParam0);
			func_114(iVar0, iVar1);
			if (!func_3(0))
			{
				func_113(*uParam0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_63(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_2(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_62(uParam0, iVar12);
				if (iVar12 < Global_96470[iVar1 /*19*/])
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_86(5, *uParam0, 1);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			HUD::CLEAR_HELP(false);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_681))
		{
			iVar13 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_681);
			iVar0 = func_32(*uParam0);
			iVar1 = func_66(iVar0);
			Global_113386.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[iVar13];
			bVar14 = Global_113386.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "UPDATE_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_450);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar14);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
			func_112(uParam0, bVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = MISC::GET_GAME_TIMER();
			uParam0->f_457 = uParam0->f_456;
			MISC::SET_BIT(&(uParam0->f_449), 10);
			if (!func_14(&(uParam0->f_1.f_108[0 /*4*/])) && !func_14(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				HUD::CLEAR_HELP(false);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_682))
		{
			iVar15 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		func_111(uParam0, uParam0->f_427);
	}
}

void func_111(var uParam0, int iParam1)//Position - 0x5028
{
	if (!func_21())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (BitTest(Global_113386.f_1.f_119, 14))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 14);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (BitTest(Global_113386.f_1.f_119, 16))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 16);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (BitTest(Global_113386.f_1.f_119, 15))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 15);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (BitTest(Global_113386.f_1.f_119, 17))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 17);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_112(var uParam0, bool bParam1)//Position - 0x5238
{
	if (!BitTest(uParam0->f_463, bParam1))
	{
		if (!BitTest(Global_113386.f_1.f_119, bParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[bParam1 /*2*/]), ""))
			{
				func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[bParam1 /*2*/], 1);
				MISC::SET_BIT(&(Global_113386.f_1.f_119), bParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (bParam1)
					{
						case 1:
							if (BitTest(Global_113386.f_1.f_117, 0))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (BitTest(Global_113386.f_1.f_117, 1))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (bParam1)
					{
						case 12:
							if (BitTest(Global_113386.f_1.f_117, 3))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (BitTest(Global_113386.f_1.f_117, 6))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (BitTest(Global_113386.f_1.f_117, 0))
							{
								if (BitTest(Global_113386.f_1.f_117, 7))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113386.f_1.f_117, 7))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (BitTest(Global_113386.f_1.f_117, 1))
							{
								if (BitTest(Global_113386.f_1.f_117, 8))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113386.f_1.f_117, 8))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (BitTest(Global_113386.f_1.f_117, 4))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (BitTest(Global_113386.f_1.f_117, 2))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (BitTest(Global_113386.f_1.f_117, 5))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (bParam1)
					{
						case 12:
							if (BitTest(Global_113386.f_1.f_117, 15))
							{
								if (BitTest(Global_113386.f_1.f_117, 3))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (BitTest(Global_113386.f_1.f_117, 2))
							{
								if (BitTest(Global_113386.f_1.f_117, 14))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113386.f_1.f_117, 14))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (BitTest(Global_113386.f_1.f_117, 18))
							{
								if (BitTest(Global_113386.f_1.f_117, 6))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (BitTest(Global_113386.f_1.f_117, 17))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (BitTest(Global_113386.f_1.f_117, 12))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (BitTest(Global_113386.f_1.f_117, 10))
							{
								if (BitTest(Global_113386.f_1.f_117, 0))
								{
									if (BitTest(Global_113386.f_1.f_117, 7))
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (BitTest(Global_113386.f_1.f_117, 11))
							{
								if (BitTest(Global_113386.f_1.f_117, 1))
								{
									if (BitTest(Global_113386.f_1.f_117, 8))
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (BitTest(Global_113386.f_1.f_117, 13))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (BitTest(Global_113386.f_1.f_117, 19))
							{
								if (BitTest(Global_113386.f_1.f_117, 4))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (BitTest(Global_113386.f_1.f_117, 16))
							{
								if (BitTest(Global_113386.f_1.f_117, 5))
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (BitTest(Global_113386.f_1.f_117, 20))
							{
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		MISC::SET_BIT(&(uParam0->f_463), bParam1);
	}
}

void func_113(int iParam0)//Position - 0x5963
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_113386.f_9085.f_99.f_205[7];
			if (iVar0 == 1)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_jewel_stealth"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_jewel_stealth"), false, true);
			}
			break;
		
		case 1:
			iVar0 = Global_113386.f_9085.f_99.f_205[8];
			if (iVar0 == 3)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_docks_sink_ship"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_docks_sink_ship"), false, true);
			}
			break;
		
		case 3:
			iVar0 = Global_113386.f_9085.f_99.f_205[10];
			if (iVar0 == 6)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bureau_firecrew"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bureau_firecrew"), false, true);
			}
			break;
		
		case 4:
			iVar0 = Global_113386.f_9085.f_99.f_205[11];
			if (iVar0 == 8)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bigs_traffic"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bigs_traffic"), false, true);
			}
			break;
	}
}

void func_114(int iParam0, int iParam1)//Position - 0x5A5E
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_113386.f_9085.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_113386.f_9085.f_99.f_205[iParam0] = iParam1;
}

void func_115(int iParam0, int iParam1)//Position - 0x5AA3
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113386.f_9085.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113386.f_9085.f_99.f_58[iParam0] = iParam1;
}

void func_116(int iParam0)//Position - 0x5AE8
{
	int iVar0;
	int iVar1;
	
	func_117(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_113386.f_9085.f_99.f_205[7];
			iVar0 = 0;
			while (iVar0 < Global_96470[iVar1 /*19*/])
			{
				switch (Global_113386.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 0);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 1);
						MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 14);
						break;
					
					case 7:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 2);
						break;
					
					case 12:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 3);
						MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 15);
						break;
					
					case 6:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 4);
						break;
					
					case 8:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 5);
						break;
					
					case 9:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 6);
						break;
				}
				MISC::SET_BIT(&(Global_113386.f_1.f_119), Global_113386.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_113386.f_9085.f_99.f_205[9];
			iVar0 = 0;
			while (iVar0 < Global_96470[iVar1 /*19*/])
			{
				switch (Global_113386.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 7);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 8);
						MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 14);
						break;
					
					case 11:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 9);
						MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 17);
						break;
				}
				MISC::SET_BIT(&(Global_113386.f_1.f_119), Global_113386.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_113386.f_9085.f_99.f_205[10];
			iVar0 = 0;
			while (iVar0 < Global_96470[iVar1 /*19*/])
			{
				switch (Global_113386.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 10);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 11);
						MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 14);
						break;
					
					case 5:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 12);
						break;
					
					case 3:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 13);
						break;
					
					case 4:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 17);
						break;
					
					case 7:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 14);
						break;
					
					case 12:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 15);
						MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 15);
						break;
					
					case 6:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 19);
						break;
					
					case 8:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 16);
						break;
					
					case 9:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 18);
						break;
					
					case 13:
						MISC::SET_BIT(&(Global_113386.f_1.f_117), 20);
						MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 16);
						break;
				}
				MISC::SET_BIT(&(Global_113386.f_1.f_119), Global_113386.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_117(int iParam0)//Position - 0x5E65
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 0);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 1);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 2);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 3);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 4);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 5);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 6);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 7);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 8);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 9);
			break;
		
		case 3:
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 10);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 11);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 12);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 13);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 14);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 15);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 16);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 17);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 18);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 19);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 20);
			break;
	}
}

void func_118()//Position - 0x5FAD
{
	Global_20471 = 0;
	func_119();
}

void func_119()//Position - 0x5FBD
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

void func_120()//Position - 0x5FDE
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_121();
}

void func_121()//Position - 0x5FEE
{
	Global_23011.f_134 = 1;
}

void func_122(var uParam0)//Position - 0x5FFC
{
	struct<3> Var0;
	int iVar1;
	
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	MISC::SET_BIT(&(uParam0->f_449), 9);
	func_13(uParam0, 0);
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_44238 == 1)
			{
				func_127(PLAYER::PLAYER_PED_ID());
			}
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 134);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		}
		MISC::SET_BIT(&(uParam0->f_449), 7);
	}
	HUD::DISPLAY_RADAR(false);
	func_73(1);
	func_126();
	HUD::THEFEED_PAUSE();
	MISC::CLEAR_AREA(uParam0->f_401, 5f, true, true, false, false);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam0->f_401, 5f);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(true);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_125(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);
	if (iVar1 != 0)
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
	}
	INTERIOR::_0xAF348AFCB575A441(&(Global_96387[uParam0->f_1.f_1 /*15*/].f_7));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		INTERIOR::_0x405DC2AEF6AF95B9(INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(PLAYER::PLAYER_PED_ID()));
	}
	func_124(0);
	func_123();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	uParam0->f_466 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 10, true);
	MISC::SET_BIT(&(uParam0->f_449), 2);
	Global_96448 = 1;
	func_8(uParam0, uParam0->f_464, 0);
}

void func_123()//Position - 0x61EE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		func_17(iVar0);
		iVar0++;
	}
	Global_113386.f_20410.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_124(bool bParam0)//Position - 0x624C
{
	if (!bParam0)
	{
		Global_112028 = MISC::GET_GAME_TIMER() + 250;
	}
	Global_112025 = bParam0;
}

void func_125(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x626A
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = uParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_126()//Position - 0x6362
{
	Global_23011.f_5 = 1;
}

void func_127(int iParam0)//Position - 0x6370
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
		iVar1 = Global_44024[iVar0 /*5*/];
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

void func_128(int iParam0)//Position - 0x63C9
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

int func_129(int iParam0)//Position - 0x644C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_130(int iParam0, int iParam1, int iParam2)//Position - 0x647D
{
	func_131(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6492
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
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = iParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

int func_132()//Position - 0x6514
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_133(int iParam0, int iParam1, int iParam2)//Position - 0x6545
{
	if (func_134(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_134(int iParam0, int iParam1, int iParam2)//Position - 0x6560
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_135(int iParam0)//Position - 0x65AC
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
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_136(var uParam0)//Position - 0x65F5
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_137(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_137(int iParam0)//Position - 0x664C
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
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_138(int iParam0, bool bParam1)//Position - 0x6687
{
	int iVar0;
	
	iVar0 = func_137(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_149(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_139(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x673F
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_136(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_140(int iParam0)//Position - 0x686A
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_100();
				if (!func_102(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_148()) || Global_112433) || Global_31962) || func_147()) || func_107(8, -1)) || func_146()) || func_145()) || func_144()) || func_143()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_148()) || Global_31962) || func_147()) || func_107(8, -1)) || func_144()) || func_146()) || func_145()) || func_143()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_148()) || Global_112433) || Global_31962) || func_147()) || func_107(8, -1)) || func_144()) || func_146()) || func_145()) || func_143()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_148()) || Global_112433) || Global_31962) || func_147()) || func_107(8, -1)) || func_146()) || func_145()) || func_143()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_148() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_107(8, -1)) || func_143()) || func_142()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_107(8, -1) || func_146()) || func_145()) || func_142()) || func_141())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_148()) || Global_31962) || func_147()) || func_107(8, -1)) || func_145()) || func_144()) || func_143()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_148()) || func_145()) || Global_112433) || Global_31962) || func_147()) || Global_44238) || func_107(8, -1)) || func_144()) || func_142()) || func_143()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_148()) || Global_112433) || Global_31962) || func_147()) || func_107(8, -1)) || func_144()) || func_142()) || func_146()) || func_145()) || func_143())
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

var func_141()//Position - 0x6F87
{
	return Global_100480.f_1;
}

int func_142()//Position - 0x6F95
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_143()//Position - 0x6FB8
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_144()//Position - 0x6FD2
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_145()//Position - 0x6FFC
{
	return Global_100493.f_376 > 0;
}

bool func_146()//Position - 0x700D
{
	return Global_100493.f_375 > 0;
}

var func_147()//Position - 0x701E
{
	return Global_1575058;
}

int func_148()//Position - 0x702A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x7046
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

bool func_150(int iParam0)//Position - 0x709D
{
	return func_151(iParam0, Global_43052);
}

int func_151(int iParam0, int iParam1)//Position - 0x70AE
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

int func_152(var uParam0)//Position - 0x728F
{
	if (BitTest(uParam0->f_449, 1))
	{
		func_154(uParam0);
	}
	if (BitTest(uParam0->f_449, 0))
	{
		func_153(uParam0);
	}
	return 1;
}

void func_153(var uParam0)//Position - 0x72B8
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_413 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_414));
	}
	HUD::CLEAR_ADDITIONAL_TEXT(5, false);
	MISC::CLEAR_BIT(&Global_96451, *uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 0);
}

void func_154(var uParam0)//Position - 0x7322
{
	if (BitTest(uParam0->f_449, 1))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (BitTest(uParam0->f_449, 2))
			{
				func_70(uParam0, 0);
			}
		}
		func_155(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_449), 1);
		MISC::CLEAR_BIT(&Global_96450, *uParam0);
	}
}

void func_155(var uParam0)//Position - 0x7368
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_156()//Position - 0x73A4
{
	int iVar0;
	int iVar1;
	
	if (func_332(7))
	{
		if (!BitTest(uLocal_41, 7))
		{
			CUTSCENE::REQUEST_CUTSCENE("AH_2_EXT_P4", 8);
			SCRIPT::REQUEST_SCRIPT("lesterHandler");
			STREAMING::REQUEST_MODEL(joaat("prop_laptop_01a"));
			MISC::SET_BIT(&uLocal_41, 7);
		}
		else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_332(8))
	{
		if (func_332(7))
		{
			if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("AH_2_EXT_P4") && SCRIPT::HAS_SCRIPT_LOADED("lesterHandler")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_laptop_01a")))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!func_3(0) || func_100() == 0)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, joaat("player_zero"), 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_49[0], "MICHAEL", 2, joaat("player_zero"), 0);
						MISC::SET_BIT(&uLocal_41, 12);
					}
				}
				if (func_3(0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_45, "FRANKLIN", 1, joaat("player_one"), 0);
					}
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_46, "LESTER", 2, joaat("ig_lestercrest"), 0);
				MISC::SET_BIT(&uLocal_41, 10);
				func_290(0);
				func_124(1);
				func_282(1, 1, 1, 0, 0, 0, 0);
				func_73(1);
				iVar0 = 0;
				while (iVar0 < func_281(3))
				{
					if (func_279(3, iVar0) == 12)
					{
						func_265(406771743);
					}
					iVar0++;
				}
				CUTSCENE::START_CUTSCENE(256);
				if (func_3(0))
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				}
				func_115(7, 0);
				iLocal_44 = MISC::GET_GAME_TIMER();
			}
		}
		else if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			func_120();
			if (BitTest(uLocal_41, 5))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero"))))
				{
					ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero")), true, false);
				}
				MISC::CLEAR_BIT(&uLocal_41, 5);
			}
			if (func_100() != 0)
			{
				if (BitTest(uLocal_41, 12))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero"))))
					{
						iLocal_49[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero")));
						MISC::CLEAR_BIT(&uLocal_41, 12);
					}
				}
			}
			if (BitTest(uLocal_41, 10))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", joaat("ig_lestercrest"))))
				{
					iLocal_46 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", joaat("ig_lestercrest")));
					MISC::CLEAR_BIT(&uLocal_41, 10);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				if (func_100() != 0)
				{
					iLocal_45 = PLAYER::PLAYER_PED_ID();
					func_260(&iLocal_49, 0);
					func_198(&iLocal_49, 1, 0, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
					}
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 208, false);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 118, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 213, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
					iLocal_43 = MISC::GET_GAME_TIMER();
				}
			}
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", joaat("ig_lestercrest")))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_46, false))
				{
					iVar1 = iLocal_46;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar1, 1, 1424);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("lesterHandler");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				func_290(1);
			}
		}
		else
		{
			if (func_3(0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
				{
					PED::DELETE_PED(&iLocal_45);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
				{
					PED::DELETE_PED(&iLocal_46);
				}
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			else
			{
				Global_63154 = 0;
				Global_100480 = 0;
				func_197();
			}
			func_282(0, 1, 1, 0, 0, 0, 0);
			func_73(0);
			func_196(20000);
			func_194(&(Global_113386.f_2363.f_539), 67);
			func_164(&(Global_113386.f_2363.f_539), 67);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_laptop_01a"));
			func_163(&iLocal_42);
			MISC::CLEAR_BIT(&uLocal_41, 2);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_89, false);
			if (iLocal_90 != -1)
			{
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_90))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_90);
				}
			}
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_91.f_1.f_394 - Local_91.f_1.f_397, Local_91.f_1.f_394 + Local_91.f_1.f_397, true, 0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_157(3, 0);
			func_115(8, 0);
		}
	}
	else if (!func_332(7))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("AH_2_EXT_P4"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	if (iLocal_43 != -1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_43) > 2000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			iLocal_43 = -1;
		}
	}
}

void func_157(int iParam0, bool bParam1)//Position - 0x7824
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) || func_39(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_160(4, 1);
						break;
					
					case 4:
						func_160(8, 1);
						break;
					
					case 6:
						func_160(10, 1);
						break;
					
					case 7:
						func_160(1, 1);
						break;
					
					case 8:
						func_160(3, 1);
						break;
					
					case 9:
						func_160(6, 1);
						break;
					
					case 10:
						func_160(9, 1);
						break;
					
					case 12:
						func_160(11, 1);
						break;
					
					case 13:
						func_160(12, 1);
						break;
					
					case 11:
						if (func_328(91))
						{
							func_160(0, 1);
						}
						break;
					
					case 5:
						if (func_328(91))
						{
							func_160(2, 1);
						}
						break;
					
					case 3:
						if (func_328(67))
						{
							func_160(5, 1);
						}
						break;
					
					case 2:
						if (func_328(77))
						{
							func_160(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_40(10) && BitTest(Global_113386.f_24995.f_8[4], 0))
	{
		func_160(9, 1);
	}
	if (!func_40(13) && BitTest(Global_113386.f_24995.f_8[16], 0))
	{
		func_160(12, 1);
	}
	if (!func_40(12))
	{
		if (iParam0 == 4)
		{
			func_160(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_159(69))
		{
			func_23("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_158("DI_FEED_HST");
	}
}

void func_158(char* sParam0)//Position - 0x79EA
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::_END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_GXT_ENTRY("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR", sParam0);
}

int func_159(int iParam0)//Position - 0x7A0E
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_160(int iParam0, bool bParam1)//Position - 0x7A4E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_162(iParam0))
		{
			MISC::SET_BIT(&(Global_113386.f_26434.f_1), iVar0);
			if (!bParam1)
			{
				func_158(func_161(iParam0));
			}
		}
	}
}

char* func_161(int iParam0)//Position - 0x7A97
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_162(int iParam0)//Position - 0x7B7A
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return BitTest(Global_113386.f_26434.f_1, iParam0);
	}
	return 0;
}

void func_163(int iParam0)//Position - 0x7BA6
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

void func_164(var uParam0, int iParam1)//Position - 0x7BE3
{
	switch (iParam1)
	{
		case 17:
			func_165(uParam0, 0, 12);
			break;
		
		case 19:
			func_165(uParam0, 1, 13);
			break;
		
		case 29:
			func_165(uParam0, 1, 14);
			break;
		
		case 30:
			func_165(uParam0, 2, 15);
			func_165(uParam0, 1, 29);
			break;
		
		case 32:
			func_165(uParam0, 1, 16);
			func_165(uParam0, 0, 17);
			break;
		
		case 39:
			func_165(uParam0, 0, 21);
			func_165(uParam0, 1, 20);
			break;
		
		case 31:
			func_165(uParam0, 0, 18);
			break;
		
		case 20:
			func_165(uParam0, 2, 22);
			break;
		
		case 66:
			func_165(uParam0, 1, 23);
			break;
		
		case 68:
			func_165(uParam0, 1, 24);
			break;
		
		case 70:
			func_165(uParam0, 1, 67);
			break;
		
		case 8:
			func_165(uParam0, 1, 25);
			func_165(uParam0, 2, 26);
			break;
		
		case 67:
			func_165(uParam0, 1, 27);
			break;
		
		case 9:
			func_165(uParam0, 2, 28);
			break;
		
		case 38:
			func_165(uParam0, 2, 30);
			func_165(uParam0, 1, 19);
			break;
		
		case 83:
			func_165(uParam0, 2, 33);
			break;
		
		case 45:
			func_165(uParam0, 1, 35);
			break;
		
		case 64:
			func_165(uParam0, 0, 36);
			func_165(uParam0, 1, 37);
			break;
		
		case 91:
			func_165(uParam0, 0, 41);
			break;
		
		case 42:
			func_165(uParam0, 0, 58);
			Global_99845[0 /*98*/] = 0;
			func_165(uParam0, 2, 59);
			Global_99845[2 /*98*/] = 0;
			break;
		
		case 41:
			func_165(uParam0, 1, 42);
			func_165(uParam0, 2, 42);
			break;
		
		case 15:
			func_165(uParam0, 0, 46);
			func_165(uParam0, 1, 47);
			break;
		
		case 16:
			func_165(uParam0, 0, 48);
			break;
		
		case 48:
			func_165(uParam0, 1, 50);
			func_165(uParam0, 2, 51);
			break;
		
		case 74:
			func_165(uParam0, 0, 52);
			func_165(uParam0, 1, 66);
			break;
		
		case 76:
			func_165(uParam0, 1, 53);
			func_165(uParam0, 2, 54);
			func_165(uParam0, 0, 62);
			break;
		
		case 75:
			func_165(uParam0, 0, 61);
			func_165(uParam0, 1, 31);
			break;
		
		case 69:
			func_165(uParam0, 1, 63);
			break;
		
		case 84:
			func_165(uParam0, 0, 68);
			func_165(uParam0, 2, 69);
			break;
		
		case 85:
			func_165(uParam0, 0, 64);
			func_165(uParam0, 2, 65);
			break;
		
		case 93:
			func_165(uParam0, 1, 38);
			func_165(uParam0, 2, 39);
			break;
		
		case 11:
			func_165(uParam0, 2, 55);
			break;
		
		case 77:
			func_165(uParam0, 1, 56);
			func_165(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_165(var uParam0, int iParam1, int iParam2)//Position - 0x7F2C
{
	int iVar0;
	struct<98> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
	{
		iVar0 = Global_113386.f_18533[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_113386.f_18533[iParam1] = iParam2;
	uParam0->f_2296[iParam1] = func_183();
	if (!func_182(iParam2, &(uParam0->f_2300[iParam1 /*3*/]), &(uParam0->f_2310[iParam1])))
	{
		return 0;
	}
	if (!func_181(uParam0->f_2300[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_181(Global_98880[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_166(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_99845[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_2314[iParam1] = 0;
	uParam0->f_2318[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2328[iParam1] = 0;
	return 1;
}

int func_166(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x804B
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_99845[iParam0 /*98*/] };
			if (Global_100140[iParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_100148[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, false, true))
				{
					if (Global_100140[iParam0] == 1)
					{
						*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_99845[iParam0 /*98*/] };
			if (Global_100140[iParam0] != 2)
			{
				*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_99845[iParam0 /*98*/] };
			if (Global_100140[iParam0] != 2)
			{
				*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_166(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_166(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_168(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_166(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_168(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_168(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_168(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_166(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_166(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_166(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_168(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_166(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_166(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_166(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_166(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_166(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_166(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_166(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_166(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_166(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_166(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_166(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_168(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_166(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_166(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_167(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_166(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_166(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_166(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_166(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_166(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_166(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_166(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_166(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_166(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_166(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_166(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_166(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_166(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_166(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_166(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_167(int iParam0, var uParam1, int iParam2)//Position - 0xB4BD
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
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
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
					if (Global_113386.f_9085.f_99.f_58[119])
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
			else if (Global_113386.f_9085.f_99.f_58[118])
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

int func_168(int iParam0, var uParam1, int iParam2)//Position - 0xB719
{
	if (Global_99845[iParam0 /*98*/] == 0)
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("blimp"))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_180(iParam0))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_99845[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_99845[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_99845[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_99845[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_99845[iParam0 /*98*/]))
		{
			func_167(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_99845[iParam0 /*98*/]))
		{
			func_167(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_169(Global_99845[iParam0 /*98*/], 0))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_99845[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_99845[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_167(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_99845[iParam0 /*98*/] == *uParam1)
		{
			func_167(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_167(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_99845[iParam0 /*98*/] == *uParam1)
		{
			func_167(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_99845[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_167(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_169(int iParam0, bool bParam1)//Position - 0xB950
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_179())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_178() && !func_177()) && !func_176()) && !func_175()) && !func_179())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_174() || MISC::IS_PC_VERSION()) || func_173())
		{
		}
		else if (!func_176())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_172(iParam0))
		{
			return 0;
		}
	}
	if (!func_170(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0)//Position - 0xBAD0
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_171())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_171()//Position - 0xBB9C
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_172(int iParam0)//Position - 0xBBB3
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO3"))
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CORSITA"))
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DRAUGUR"))
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GREENWOOD"))
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KANJOSJ"))
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LM87"))
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POSTLUDE"))
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RHINEHART"))
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SM722"))
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TENF"))
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TENF2"))
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO2"))
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGERO2"))
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WEEVIL2"))
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER4"))
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL4"))
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONADA"))
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNISEGT"))
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_173()//Position - 0xEE85
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

bool func_174()//Position - 0xEE9B
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

int func_175()//Position - 0xEEB1
{
	return 0;
}

int func_176()//Position - 0xEEBA
{
	return 1;
}

int func_177()//Position - 0xEEC3
{
	return 1;
}

int func_178()//Position - 0xEECC
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_179()//Position - 0xEEE5
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
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

int func_180(int iParam0)//Position - 0xEF9D
{
	if (Global_99845[iParam0 /*98*/] == joaat("blimp") || Global_99845[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("submersible") || Global_99845[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("burrito2") || Global_99845[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("entityxf") && !Global_113386.f_9085.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("cheetah") && !Global_113386.f_9085.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("policeb") && !Global_113386.f_9085.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("ztype") && !Global_113386.f_9085.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("polmav") && !Global_113386.f_9085.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("jb700") && !Global_113386.f_9085.f_330[10 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("monroe") && !Global_113386.f_9085.f_330[11 /*6*/])
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("firetruk"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_99845[iParam0 /*98*/] == joaat("gauntlet") && !Global_113386.f_9085.f_330[80 /*6*/]) && !Global_113386.f_9085.f_330[81 /*6*/]) && !Global_113386.f_9085.f_330[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_181(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0xF21D
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_182(int iParam0, var uParam1, float fParam2)//Position - 0xF264
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_182(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_182(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
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
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
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
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
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
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
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
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
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
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
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
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
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
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
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
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
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

var func_183()//Position - 0xFBD3
{
	var uVar0;
	
	func_193(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_192(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_191(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_186(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_185(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_184(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_184(var uParam0, int iParam1)//Position - 0xFC19
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

void func_185(var uParam0, int iParam1)//Position - 0xFC9F
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_186(var uParam0, int iParam1)//Position - 0xFCD2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_190(*uParam0);
	iVar1 = func_188(*uParam0);
	if (iParam1 < 1 || iParam1 > func_187(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_187(int iParam0, int iParam1)//Position - 0xFD23
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

var func_188(int iParam0)//Position - 0xFDC5
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_189(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_189(bool bParam0, int iParam1, int iParam2)//Position - 0xFDE7
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_190(var uParam0)//Position - 0xFDFE
{
	return uParam0 & 15;
}

void func_191(var uParam0, int iParam1)//Position - 0xFE0B
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_192(var uParam0, int iParam1)//Position - 0xFE45
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_193(var uParam0, int iParam1)//Position - 0xFE80
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_194(var uParam0, int iParam1)//Position - 0xFEBC
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_182(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_195(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_195(var uParam0)//Position - 0x10083
{
	*uParam0 = -15;
}

void func_196(int iParam0)//Position - 0x10091
{
	Global_43603 = (MISC::GET_GAME_TIMER() + iParam0);
}

int func_197()//Position - 0x100A3
{
	if (func_3(0))
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

int func_198(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x100EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	
	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*iParam0)[iParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*iParam0)[iParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*iParam0)[iParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*iParam0)[iParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = func_100();
		if (!iParam0->f_23)
		{
			func_247(iVar0, 0);
		}
		func_245(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = func_244(iParam0->f_7);
		func_247((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (func_103(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (func_102(func_100()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*iParam0)[iParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (func_243(0) || func_243(3))
		{
			if (Global_23011.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (BitTest(Global_91193[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_91193[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_91229[Global_78588.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_23011.f_13 = 0;
		iParam0->f_5 = func_242(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = func_242(iVar2);
		iParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		func_241(iVar7);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar7, false, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
				func_241(iVar0);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar0, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_97723 = 1;
		func_239(PLAYER::PLAYER_PED_ID());
		func_238();
		func_237(iVar2);
		func_228();
		func_222(iVar2);
		func_205(func_220(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), func_332(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), func_332(68));
		}
		func_202(iVar2, &iVar7);
		if (((func_327(0) || func_327(3)) || func_327(2)) || func_327(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!func_201())
		{
			func_199();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}

void func_199()//Position - 0x105DD
{
	if (Global_97753)
	{
		func_101();
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_200(Global_113386.f_2363.f_539.f_4321));
	}
	else
	{
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
	}
}

char* func_200(var uParam0)//Position - 0x1060F
{
	uParam0 = uParam0;
	return "";
}

bool func_201()//Position - 0x1061E
{
	return Global_23009;
}

void func_202(int iParam0, int iParam1)//Position - 0x10629
{
	switch (iParam0)
	{
		case 0:
			func_203(4, *iParam1);
			func_203(7, *iParam1);
			func_203(8, *iParam1);
			func_203(11, *iParam1);
			break;
		
		case 1:
			if (Global_113386.f_9085.f_330[2 /*6*/])
			{
				func_203(4, *iParam1);
			}
			func_203(7, *iParam1);
			func_203(8, *iParam1);
			func_203(11, *iParam1);
			if (Global_113386.f_9085.f_99.f_58[126])
			{
				func_203(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_113386.f_9085.f_330[20 /*6*/])
			{
				func_203(4, *iParam1);
			}
			func_203(7, *iParam1);
			func_203(8, *iParam1);
			func_203(11, *iParam1);
			break;
	}
}

void func_203(int iParam0, int iParam1)//Position - 0x106F5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (func_204(iParam0, iParam1))
	{
		return;
	}
	if (Global_41748[iParam0 /*31*/].f_24 < 5)
	{
		Global_41748[iParam0 /*31*/].f_25[Global_41748[iParam0 /*31*/].f_24] = iParam1;
		Global_41748[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_41748[iParam0 /*31*/].f_25[iVar0];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_INJURED(iVar1))
			{
				Global_41748[iParam0 /*31*/].f_25[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_204(int iParam0, int iParam1)//Position - 0x107A7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_41748[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_41748[iParam0 /*31*/].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_205(int iParam0)//Position - 0x107E0
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_38412[(38 / 32)]), (38 % 32));
			func_206(38, 0);
			MISC::SET_BIT(&(Global_38412[(41 / 32)]), (41 % 32));
			func_206(41, 0);
			MISC::SET_BIT(&(Global_38412[(43 / 32)]), (43 % 32));
			func_206(43, 0);
			MISC::SET_BIT(&(Global_38412[(42 / 32)]), (42 % 32));
			func_206(42, 0);
			MISC::SET_BIT(&(Global_38412[(44 / 32)]), (44 % 32));
			func_206(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_38412[(51 / 32)]), (51 % 32));
			func_206(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_38412[(51 / 32)]), (51 % 32));
			func_206(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_38412[(53 / 32)]), (53 % 32));
			func_206(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_38412[(81 / 32)]), (81 % 32));
			func_206(81, 0);
			MISC::SET_BIT(&(Global_38412[(82 / 32)]), (82 % 32));
			func_206(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_38412[(47 / 32)]), (47 % 32));
			func_206(47, 0);
			MISC::SET_BIT(&(Global_38412[(50 / 32)]), (50 % 32));
			func_206(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_38412[(50 / 32)]), (50 % 32));
			func_206(50, 0);
			break;
	}
}

void func_206(int iParam0, int iParam1)//Position - 0x10970
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_78319)
		{
			iVar0 = Global_42586[iParam0];
		}
		else
		{
			iVar0 = Global_113386.f_7261[iParam0];
		}
		if (iVar0 != iParam1 || BitTest(Global_38412[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
				Global_38884[iParam0] = iParam1;
			}
			else if (Global_78319)
			{
				Global_42586[iParam0] = iParam1;
			}
			else
			{
				Global_113386.f_7261[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
			func_208(iParam0);
			if (BitTest(Global_38412[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_207(iParam0);
			}
		}
	}
}

void func_207(int iParam0)//Position - 0x10A5D
{
	if (!BitTest(Global_39355.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_39355.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_39355[Global_39355.f_227] = iParam0;
		Global_39355.f_227++;
	}
}

void func_208(int iParam0)//Position - 0x10AA8
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_217())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { func_216(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		func_213(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	if ((BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] == 2) && fVar4 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
		Global_38430[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_38657[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_100493.f_373 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_100493.f_373 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar5 = Global_100493.f_373;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
					Global_38884[iParam0] = 3;
					MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_38657[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_38884[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113386.f_9085)
		{
			iVar3 = func_210(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_327(14))
		{
			iVar3 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_209())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_113386.f_7261[iParam0];
	}
	if (Global_39111[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (BitTest(Global_38412[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) || (Global_38430[iParam0] == 0 && Global_38884[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_38411)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, false, false, false);
			}
			switch (iVar3)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, true);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			MISC::CLEAR_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
			Global_39111[iParam0] = iVar3;
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
		func_207(iParam0);
		if (Global_38430[iParam0] < 2)
		{
			Global_38430[iParam0]++;
		}
	}
}

int func_209()//Position - 0x10F6D
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	switch (func_100())
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_113386.f_9085.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_113386.f_9085.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_210(int iParam0)//Position - 0x10FEC
{
	bool bVar0;
	
	bVar0 = func_100();
	if (func_211(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (BitTest(Global_113386.f_7229[5], 0) || BitTest(Global_113386.f_7229[6], 0))
			{
				return 0;
			}
		}
		if (func_102(bVar0))
		{
			if (BitTest(Global_95468[5], bVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (bVar0 == 0)
			{
				if (BitTest(Global_113386.f_7229[0], 0))
				{
					return 0;
				}
			}
			if (func_102(bVar0))
			{
				if (BitTest(Global_95468[0], bVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113386.f_7229[5], 0))
				{
					return 0;
				}
			}
			if (func_102(bVar0))
			{
				if (BitTest(Global_95468[5], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113386.f_7229[6], 0))
				{
					return 0;
				}
			}
			if (func_102(bVar0))
			{
				if (BitTest(Global_95468[6], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113386.f_7229[2], 0))
				{
					return 0;
				}
				if (func_102(bVar0))
				{
					if (BitTest(Global_95468[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (BitTest(Global_113386.f_7229[1], 0))
				{
					return 0;
				}
				if (func_102(bVar0))
				{
					if (BitTest(Global_95468[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113386.f_7229[3], 0))
				{
					return 0;
				}
			}
			if (func_102(bVar0))
			{
				if (BitTest(Global_95468[3], bVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_211(int iParam0)//Position - 0x11214
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_212(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_212(int iParam0)//Position - 0x11280
{
	return iParam0;
}

void func_213(int iParam0, var uParam1)//Position - 0x1128A
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_183();
	iVar1 = func_215(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_214(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_113386.f_7261[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_214(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_113386.f_7261[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_214(iParam0))
			{
				if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0) && !Global_113386.f_9085.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_113386.f_7261[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_113386.f_9085.f_99.f_58[4])
				{
					Global_113386.f_7261[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else if (Global_113386.f_9085.f_99.f_58[4])
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_113386.f_7261[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_113386.f_7261[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_214(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_113386.f_7261[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_214(iParam0))
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_214(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 0)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0)
			{
				Global_113386.f_7261[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[70 /*34*/].f_6) == 0)
			{
				if (!func_214(iParam0))
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2")) == 0)
			{
				if (!func_214(iParam0))
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_214(iParam0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[26 /*34*/].f_6) == 0)
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_214(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[43 /*34*/].f_6) == 0)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_214(iParam0))
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		
		case 193:
			if (!func_214(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[93 /*34*/].f_6) > 0)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_214(iParam0))
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		
		case 80:
			if (!func_214(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[10 /*34*/].f_6) == 0)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_214(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[47 /*34*/].f_6) == 0)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[70 /*34*/].f_6) == 0)
			{
				if (!func_214(iParam0))
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[48 /*34*/].f_6) == 0)
			{
				if (!func_214(iParam0))
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[39 /*34*/].f_6) == 0)
			{
				if (!func_214(iParam0))
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		
		case 216:
			if (!func_214(iParam0))
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		
		case 217:
		case 218:
			if (!func_214(iParam0))
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_214(iParam0))
			{
				Global_113386.f_7261[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
	}
}

bool func_214(int iParam0)//Position - 0x11C22
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_216(iParam0) };
	iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_215(int iParam0)//Position - 0x11C56
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

struct<7> func_216(int iParam0)//Position - 0x11C69
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_217()//Position - 0x14873
{
	if ((func_219() == -1 || func_219() == 999) && !func_218() == 0)
	{
		return 1;
	}
	return 0;
}

int func_218()//Position - 0x148A3
{
	return Global_31960;
}

int func_219()//Position - 0x148AE
{
	return Global_31959;
}

int func_220(struct<3> Param0, int iParam1, int iParam2)//Position - 0x148B9
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95479[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95479[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_221(iVar0) || iParam2 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95479[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_221(int iParam0)//Position - 0x14948
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

void func_222(int iParam0)//Position - 0x1495D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_223(iParam0, iVar0);
		iVar0++;
	}
}

void func_223(int iParam0, int iParam1)//Position - 0x14980
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_227(iParam0, iParam1, &iVar2, &iVar3);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_224(iVar3, -1, 0);
	}
	else
	{
		STATS::STAT_GET_INT(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), fVar1, true);
			break;
		
		case 7:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("armenian3")) != 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("trevor3")) != 0)
			{
				Global_97724 = 1;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), fVar1);
			}
			break;
	}
}

int func_224(int iParam0, int iParam1, int iParam2)//Position - 0x14A6D
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_225(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_225(var uParam0)//Position - 0x14AAA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_226();
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

int func_226()//Position - 0x14ADE
{
	return Global_1574918;
}

void func_227(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x14AEA
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
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

void func_228()//Position - 0x14D41
{
	struct<50> Var0;
	
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !func_102(func_100())) || !func_234())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_230(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
	func_229(1306, Var0[0], -1);
	func_229(1307, Var0[1], -1);
	func_229(1308, Var0[2], -1);
	func_229(1309, Var0[3], -1);
	func_229(1310, Var0[4], -1);
	func_229(1311, Var0[5], -1);
	func_229(1312, Var0[6], -1);
	func_229(1313, Var0[7], -1);
	func_229(1314, Var0[8], -1);
	func_229(1315, Var0[9], -1);
	func_229(1316, Var0[10], -1);
	func_229(1317, Var0[11], -1);
	func_229(1318, Var0.f_13[0], -1);
	func_229(1319, Var0.f_13[1], -1);
	func_229(1320, Var0.f_13[2], -1);
	func_229(1321, Var0.f_13[3], -1);
	func_229(1322, Var0.f_13[4], -1);
	func_229(1323, Var0.f_13[5], -1);
	func_229(1324, Var0.f_13[6], -1);
	func_229(1325, Var0.f_13[7], -1);
	func_229(1326, Var0.f_13[8], -1);
	func_229(1327, Var0.f_13[9], -1);
	func_229(1328, Var0.f_13[10], -1);
	func_229(1329, Var0.f_13[11], -1);
	func_229(1330, Var0.f_26[0], -1);
	func_229(1331, Var0.f_26[1], -1);
	func_229(1332, Var0.f_26[2], -1);
	func_229(1333, Var0.f_26[3], -1);
	func_229(1334, Var0.f_26[4], -1);
	func_229(1335, Var0.f_26[5], -1);
	func_229(1336, Var0.f_26[6], -1);
	func_229(1337, Var0.f_26[7], -1);
	func_229(1338, Var0.f_26[8], -1);
	func_229(1339, Var0.f_26[9], -1);
	func_229(1340, Var0.f_26[10], -1);
	func_229(1341, Var0.f_26[11], -1);
	func_229(1342, Var0.f_39[0], -1);
	func_229(1343, Var0.f_39[1], -1);
	func_229(1344, Var0.f_39[2], -1);
	func_229(1345, Var0.f_39[3], -1);
	func_229(1346, Var0.f_39[4], -1);
	func_229(1347, Var0.f_39[5], -1);
	func_229(1348, Var0.f_39[6], -1);
	func_229(1349, Var0.f_39[7], -1);
	func_229(1350, Var0.f_39[8], -1);
	func_229(1351, Var0.f_49[0], -1);
	func_229(1352, Var0.f_49[1], -1);
	func_229(1353, Var0.f_49[2], -1);
	func_229(1354, Var0.f_49[3], -1);
	func_229(1355, Var0.f_49[4], -1);
	func_229(1356, Var0.f_49[5], -1);
	func_229(1357, Var0.f_49[6], -1);
	func_229(1358, Var0.f_49[7], -1);
	func_229(1359, Var0.f_49[8], -1);
	func_229(1360, func_100(), -1);
	STATS::STAT_SET_BOOL(joaat("clo_stored_initial"), true, true);
	Global_113386.f_2363.f_539.f_4315 = 1;
}

void func_229(int iParam0, int iParam1, int iParam2)//Position - 0x150E7
{
	if (iParam2 == -1)
	{
		iParam2 = func_226();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::_SET_PACKED_STAT_INT(iParam0, iParam1, iParam2);
}

void func_230(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1510F
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_103(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_233(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_232(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_102(iVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_231(161, iParam3))
			{
				uParam1->f_59 = func_224(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_224(753, iParam3, 0);
			}
			uParam1->f_60 = func_224(754, iParam3, 0);
			uParam1->f_61 = func_224(755, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_231(161, iParam3))
			{
				uParam1->f_59 = func_224(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_224(753, iParam3, 0);
			}
		}
	}
}

int func_231(int iParam0, var uParam1)//Position - 0x152AF
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_225(uParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_232(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x152DB
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
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

void func_233(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x15823
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
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

int func_234()//Position - 0x15A64
{
	if (func_236() && func_235(0))
	{
		return 1;
	}
	return 0;
}

var func_235(int iParam0)//Position - 0x15A82
{
	return Global_1574538[iParam0];
}

var func_236()//Position - 0x15A92
{
	return func_235(func_226() + 1);
}

void func_237(int iParam0)//Position - 0x15AA4
{
	switch (iParam0)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("player"), -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1865950624, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95444, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95444);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95445, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95445);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95446, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95446);
			break;
		
		case 1:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("player"), -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1865950624, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95444, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95444);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95445, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95445);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95446, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95446);
			break;
		
		case 2:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1865950624, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95444, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95444);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95445, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95445);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95446, joaat("player"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), Global_95446);
			break;
		
		default:
			break;
	}
}

void func_238()//Position - 0x15C58
{
	int iVar0;
	int iVar1;
	
	func_101();
	iVar0 = HUD::GET_MAIN_PLAYER_BLIP_ID();
	if (HUD::DOES_BLIP_EXIST(iVar0))
	{
		iVar1 = Global_113386.f_2363.f_539.f_4321;
		if (func_327(14))
		{
			iVar1 = func_103(PLAYER::PLAYER_PED_ID());
		}
		if (iVar1 == 0)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_TREV");
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_239(int iParam0)//Position - 0x15CDB
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_240(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) == -1)
				{
					if (WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1))
					{
						WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = FILES::GET_NUM_DLC_WEAPONS();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) == -1)
			{
				if (WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1))
				{
					WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_240(int iParam0)//Position - 0x15D9D
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

void func_241(int iParam0)//Position - 0x16011
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID() && PED::GET_PED_MAX_HEALTH(iParam0) == 200)
		{
			PED::SET_PED_MAX_HEALTH(iParam0, SYSTEM::ROUND((IntToFloat(PED::GET_PED_MAX_HEALTH(iParam0)) * Global_262145.f_106)));
		}
		if (Global_113386.f_2363.f_539.f_290[iVar0] <= 0f)
		{
			Global_113386.f_2363.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_113386.f_2363.f_539.f_290[iVar0] <= 10f)
		{
			Global_113386.f_2363.f_539.f_290[iVar0] = 10f;
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, SYSTEM::ROUND((((Global_113386.f_2363.f_539.f_290[iVar0] / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)), 0);
	}
}

int func_242(int iParam0)//Position - 0x160FE
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_243(int iParam0)//Position - 0x16139
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_150(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_244(int iParam0)//Position - 0x1615B
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

void func_245(int iParam0, int iParam1)//Position - 0x16189
{
	switch (iParam0)
	{
		case 0:
			func_246(4, *iParam1, 0);
			func_246(7, *iParam1, 0);
			func_246(8, *iParam1, 0);
			func_246(11, *iParam1, 0);
			break;
		
		case 1:
			func_246(4, *iParam1, 0);
			func_246(7, *iParam1, 0);
			func_246(8, *iParam1, 0);
			func_246(11, *iParam1, 0);
			if (Global_113386.f_9085.f_99.f_58[126])
			{
				func_246(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_246(4, *iParam1, 0);
			func_246(7, *iParam1, 0);
			func_246(8, *iParam1, 0);
			func_246(11, *iParam1, 0);
			break;
	}
}

void func_246(int iParam0, int iParam1, bool bParam2)//Position - 0x16241
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
	}
	if (Global_41748[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_41748[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_41748[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_41748[iParam0 /*31*/].f_25[iVar0];
			Global_41748[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_41748[iParam0 /*31*/].f_25[iVar0])
		{
			Global_41748[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_41748[iParam0 /*31*/].f_24 = (Global_41748[iParam0 /*31*/].f_24 - 1);
	}
}

void func_247(int iParam0, bool bParam1)//Position - 0x162FD
{
	func_259(iParam0);
	func_253(iParam0, bParam1);
	func_252(iParam0);
	func_251(iParam0);
	func_250(iParam0);
	func_249(iParam0);
	func_248(iParam0);
}

void func_248(int iParam0)//Position - 0x16331
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			Global_113386.f_2363.f_539.f_2328[iVar0] = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
	}
}

void func_249(int iParam0)//Position - 0x16378
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/] = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	}
}

void func_250(int iParam0)//Position - 0x163B6
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
			{
				return;
			}
		}
		Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		Global_113386.f_2363.f_539.f_2310[iVar0] = ENTITY::GET_ENTITY_HEADING(iParam0);
		Global_113386.f_2363.f_539.f_2314[iVar0] = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
		if (Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] >= 8000f)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = 7500f;
		}
		else if (Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] <= -8000f)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = -7500f;
		}
		if (Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_251(int iParam0)//Position - 0x16543
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_252(int iParam0)//Position - 0x1657F
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_290[iVar0] = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
	}
}

void func_253(int iParam0, bool bParam1)//Position - 0x165DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_254(iParam0, &(Global_113386.f_2363.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, true);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, true);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, true);
			}
		}
	}
}

void func_254(int iParam0, var uParam1)//Position - 0x166CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
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
			iVar3 = func_240(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_240(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
					Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_257(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_257(Var4.f_0, iVar1);
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
		iVar6 = FILES::_GET_NUM_DLC_WEAPONS_SP();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::_GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_256(Var7.f_1)) && iVar9 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
						Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::_GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar5))
					{
						if (FILES::_GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar5, iVar1, &Var8))
						{
							if (!func_255(Var8.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var8.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar10);
								}
								iVar10++;
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
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_255(int iParam0)//Position - 0x16957
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
			return 1;
			break;
	}
	return 0;
}

int func_256(int iParam0)//Position - 0x169F2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_257(int iParam0, int iParam1)//Position - 0x16BBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_258(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_255(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
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

int func_258(int iParam0, var* uParam1)//Position - 0x1775B
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

void func_259(int iParam0)//Position - 0x17796
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2296[iVar0] = func_183();
	}
}

int func_260(int iParam0, bool bParam1)//Position - 0x177D0
{
	bool bVar0;
	bool bVar1;
	
	if (!iParam0->f_39)
	{
		iParam0->f_7 = 4;
		iParam0->f_39 = 1;
	}
	if ((bParam1 != 0 && bParam1 != 2) && bParam1 != 1)
	{
	}
	else
	{
		bVar0 = iParam0->f_34[bParam1] == 2;
		if (func_242(func_100()) != bParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_24[bParam1] != 0) || ((func_264(bParam1) && func_261(bParam1)) && !iParam0->f_18[bParam1]))
			{
				if (!iParam0->f_23)
				{
					if (!PED::IS_PED_INJURED((*iParam0)[bParam1]) || bVar0)
					{
						if (iParam0->f_34[bParam1] != 1 && iParam0->f_34[bParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)) && !BitTest(Global_97919.f_47, bParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((BitTest(Global_113386.f_9085.f_2[27 /*3*/], 1) && !Global_3) && !func_3(0)))
			{
				if (iParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				iParam0->f_7 = bParam1;
				return 1;
			}
		}
	}
	iParam0->f_39 = 0;
	return 0;
}

int func_261(int iParam0)//Position - 0x17925
{
	if (Global_113386.f_9085 || Global_3)
	{
		if (!Global_78319 || (Global_78319 && iParam0 != func_242(func_263())))
		{
			if (!func_262(func_244(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_262(int iParam0)//Position - 0x17975
{
	if (func_102(iParam0))
	{
		if ((Global_113386.f_9085 || Global_3) || func_3(0))
		{
			return Global_113386.f_2363.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_263()//Position - 0x179C3
{
	return Global_113386.f_2363.f_539.f_4323;
}

int func_264(int iParam0)//Position - 0x179D8
{
	if ((Global_113386.f_9085 || Global_3) || func_3(0))
	{
		if (!Global_78319 || (Global_78319 && iParam0 != func_242(func_263())))
		{
			if (((iParam0 == 0 && !func_332(115)) || (iParam0 == 1 && !func_332(116))) || (iParam0 == 2 && !func_332(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_265(int iParam0)//Position - 0x17A64
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (Global_113386.f_7688[iVar0 /*15*/] == iParam0)
		{
			if (Global_43599 != iVar0)
			{
				func_278(iVar0);
				func_270(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_198)
	{
		if (Global_113386.f_7688.f_137[iVar0 /*15*/] == iParam0)
		{
			func_270(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_650)
	{
		if (Global_113386.f_7688.f_199[iVar0 /*15*/] == iParam0)
		{
			func_269(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (Global_113386.f_7688.f_651[iVar0 /*14*/] == iParam0)
		{
			func_267(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if (Global_113386.f_7688.f_765[iVar0 /*10*/] == iParam0)
		{
			func_266(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_266(int iParam0)//Position - 0x17B8B
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_113386.f_7688.f_866)
	{
		return;
	}
	if (Global_113386.f_7688.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_113386.f_7688.f_866 - 2))
		{
			Global_113386.f_7688.f_765[iVar0 /*10*/] = { Global_113386.f_7688.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_113386.f_7688.f_866 > 0)
	{
		Global_113386.f_7688.f_765[(Global_113386.f_7688.f_866 - 1) /*10*/] = { Var1 };
		Global_113386.f_7688.f_866 = (Global_113386.f_7688.f_866 - 1);
	}
}

void func_267(int iParam0)//Position - 0x17C44
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_113386.f_7688.f_764)
	{
		return;
	}
	if (Global_113386.f_7688.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_113386.f_7688.f_764 - 2))
		{
			Global_113386.f_7688.f_651[iVar0 /*14*/] = { Global_113386.f_7688.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_113386.f_7688.f_764 > 0)
	{
		Global_113386.f_7688.f_651[(Global_113386.f_7688.f_764 - 1) /*14*/] = { Var1 };
		Global_113386.f_7688.f_764 = (Global_113386.f_7688.f_764 - 1);
	}
	func_268(0);
	func_268(1);
	func_268(2);
}

void func_268(bool bParam0)//Position - 0x17D0C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_102(bParam0))
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

void func_269(int iParam0)//Position - 0x17DCA
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_650)
	{
		if (Global_113386.f_7688.f_199[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_113386.f_7688.f_650 - 2))
			{
				Global_113386.f_7688.f_199[iVar2 /*15*/] = { Global_113386.f_7688.f_199[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_113386.f_7688.f_199[(Global_113386.f_7688.f_650 - 1) /*15*/] = { Var0 };
			Global_113386.f_7688.f_650 = (Global_113386.f_7688.f_650 - 1);
			return;
		}
		iVar1++;
	}
}

void func_270(int iParam0)//Position - 0x17E77
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_198)
	{
		if (Global_113386.f_7688.f_137[iVar1 /*15*/] == iParam0)
		{
			func_271(Global_113386.f_7688.f_137[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_113386.f_7688.f_198 - 2))
			{
				Global_113386.f_7688.f_137[iVar2 /*15*/] = { Global_113386.f_7688.f_137[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_113386.f_7688.f_137[(Global_113386.f_7688.f_198 - 1) /*15*/] = { Var0 };
			Global_113386.f_7688.f_198 = (Global_113386.f_7688.f_198 - 1);
			return;
		}
		iVar1++;
	}
}

int func_271(int iParam0)//Position - 0x17F33
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (func_277(iParam0, Global_20266) == 1)
		{
			func_276(iParam0, Global_20266, 0);
			if (func_275(iParam0, Global_20266) == 0)
			{
				iVar0 = Global_20266;
				func_272(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_272(int iParam0, int iParam1)//Position - 0x17F89
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_274(iParam0, iVar0, 0);
			func_273(iParam0, iVar0, 0);
		}
	}
}

void func_273(int iParam0, int iParam1, int iParam2)//Position - 0x17FBE
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

void func_274(int iParam0, int iParam1, int iParam2)//Position - 0x18005
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

int func_275(int iParam0, int iParam1)//Position - 0x1804A
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_276(int iParam0, int iParam1, int iParam2)//Position - 0x18074
{
	Global_1998[iParam0 /*29*/].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_19[iParam1] = iParam2;
	}
}

int func_277(int iParam0, int iParam1)//Position - 0x180A5
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_19[iParam1];
}

void func_278(int iParam0)//Position - 0x180CF
{
	bool bVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_113386.f_7688.f_136)
	{
		return;
	}
	uVar1 = Global_113386.f_7688[iParam0 /*15*/].f_2;
	if (Global_113386.f_7688.f_136 > 1)
	{
		bVar0 = iParam0;
		while (bVar0 <= (Global_113386.f_7688.f_136 - 2))
		{
			Global_113386.f_7688[bVar0 /*15*/] = { Global_113386.f_7688[bVar0 + 1 /*15*/] };
			bVar0++;
		}
	}
	if (Global_113386.f_7688.f_136 > 0)
	{
		Global_113386.f_7688[(Global_113386.f_7688.f_136 - 1) /*15*/] = { Var2 };
		Global_113386.f_7688.f_136 = (Global_113386.f_7688.f_136 - 1);
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (BitTest(uVar1, bVar0))
		{
			func_268(bVar0);
		}
		bVar0++;
	}
}

int func_279(int iParam0, int iParam1)//Position - 0x181A7
{
	int iVar0;
	
	iVar0 = func_66(func_280(iParam0));
	if (iVar0 < 0)
	{
		return 15;
	}
	if (iVar0 >= 10)
	{
		return 15;
	}
	return Global_113386.f_1.f_12[iVar0 /*6*/][iParam1];
}

int func_280(int iParam0)//Position - 0x181E8
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_281(int iParam0)//Position - 0x1823D
{
	int iVar0;
	
	iVar0 = func_66(func_280(iParam0));
	return Global_96470[iVar0 /*19*/];
}

void func_282(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x18259
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_289(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_75())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_288(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_289(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_288(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_286(PLAYER::PLAYER_ID())) && !func_284(PLAYER::PLAYER_ID(), 0)) && !func_283()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_286(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_283()//Position - 0x1839C
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_284(int iParam0, int iParam1)//Position - 0x183B6
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_285(-1, 0) == 8;
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

int func_285(int iParam0, bool bParam1)//Position - 0x18401
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_226();
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

int func_286(int iParam0)//Position - 0x18442
{
	if (func_284(iParam0, 0))
	{
		return 1;
	}
	if (func_287())
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

bool func_287()//Position - 0x18481
{
	return BitTest(Global_2621446, 3);
}

int func_288(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x1848F
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

void func_289(int iParam0)//Position - 0x184C2
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

void func_290(bool bParam0)//Position - 0x184E5
{
	if (!bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
		{
			OBJECT::DELETE_OBJECT(&iLocal_48);
		}
		ENTITY::CREATE_MODEL_HIDE(707.3041f, -967.6456f, 30.376f, 1f, joaat("prop_laptop_01a"), false);
	}
	else
	{
		ENTITY::REMOVE_MODEL_HIDE(707.3041f, -967.6456f, 30.376f, 1f, joaat("prop_laptop_01a"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_laptop_01a")))
		{
			iLocal_48 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_01a"), 707.3041f, -967.6456f, 30.376f, true, true, false);
			ENTITY::SET_ENTITY_HEADING(iLocal_48, 183.14f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_48, true);
		}
	}
}

void func_291()//Position - 0x18574
{
	if (func_332(6))
	{
		if (!func_3(0))
		{
			if (!BitTest(uLocal_41, 6))
			{
				CUTSCENE::REQUEST_CUTSCENE("AH_2_EXT_ALT", 8);
				STREAMING::REQUEST_MODEL(joaat("prop_laptop_01a"));
				Local_91.f_1.f_141[2 /*2*/] = 0;
				Local_91.f_1.f_141[2 /*2*/].f_1 = 0;
				Local_91.f_1.f_141[3 /*2*/] = 0;
				Local_91.f_1.f_141[3 /*2*/].f_1 = 0;
				Local_91.f_1.f_141[7 /*2*/] = 0;
				Local_91.f_1.f_141[7 /*2*/].f_1 = 0;
				Local_91.f_1.f_141[8 /*2*/] = 0;
				Local_91.f_1.f_141[8 /*2*/].f_1 = 0;
				MISC::SET_BIT(&uLocal_41, 6);
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
			}
			if (func_328(67))
			{
				if (!func_243(0))
				{
					if (func_312(&iLocal_42, 0, 0, 0, 0) == 1)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_311();
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							PLAYER::SET_MAX_WANTED_LEVEL(0);
						}
						iLocal_89 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_91.f_1.f_394 - Local_91.f_1.f_397, Local_91.f_1.f_394 + Local_91.f_1.f_397, false, true, true, true);
						iLocal_90 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_91.f_1.f_394, Local_91.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, false, 7);
						PED::SET_PED_NON_CREATION_AREA(Local_91.f_1.f_394 - Local_91.f_1.f_397, Local_91.f_1.f_394 + Local_91.f_1.f_397);
						PATHFIND::SET_PED_PATHS_IN_AREA(Local_91.f_1.f_394 - Local_91.f_1.f_397, Local_91.f_1.f_394 + Local_91.f_1.f_397, false, 0);
						MISC::SET_BIT(&uLocal_41, 2);
					}
				}
			}
			if (BitTest(uLocal_41, 2))
			{
				if (func_310("AH_2_EXT_ALT") && STREAMING::HAS_MODEL_LOADED(joaat("prop_laptop_01a")))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
						{
							iLocal_46 = Global_96938.f_9[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_46, false, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_46, "LESTER", 1, joaat("ig_lestercrest"), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_28[0], false))
						{
							iLocal_47 = Global_96938.f_28[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[0], false, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_47, "WALKINGSTICK_LESTER", 1, joaat("prop_cs_walking_stick"), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[1], false))
						{
							iLocal_49[0] = Global_96938.f_9[1];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_49[0], false, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_49[0], "MICHAEL", 0, joaat("player_zero"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_49[0], "MICHAEL", 2, joaat("player_zero"), 0);
							MISC::SET_BIT(&uLocal_41, 12);
						}
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_45 = PLAYER::PLAYER_PED_ID();
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_45, "FRANKLIN", 1, joaat("player_one"), 0);
						}
						func_309(&(Local_91.f_484), 0, 0, "MICHAEL", 1, 1);
						func_309(&(Local_91.f_484), 1, 0, "FRANKLIN", 1, 1);
						func_309(&(Local_91.f_484), 3, 0, "LESTER", 1, 1);
						func_73(1);
						func_282(1, 1, 1, 0, 0, 0, 0);
						func_290(0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 3, true, false);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(949391213, 0f, true, false);
						CUTSCENE::START_CUTSCENE(2048);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						iLocal_44 = MISC::GET_GAME_TIMER();
					}
					else
					{
						func_120();
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]) && !ENTITY::IS_ENTITY_DEAD(Global_96938[0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], false, true);
							func_293(Global_96938[0], 0, 1);
							VEHICLE::DELETE_VEHICLE(&(Global_96938[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							Global_96938[0] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], false, true);
							func_293(Global_96938[0], 0, func_100());
							VEHICLE::DELETE_VEHICLE(&(Global_96938[0]));
						}
						if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) == 7)
						{
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						}
						if (!BitTest(uLocal_41, 13))
						{
							if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							MISC::SET_BIT(&uLocal_41, 13);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							MISC::SET_BIT(&uLocal_41, 14);
						}
						if (BitTest(uLocal_41, 14))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (!BitTest(uLocal_41, 1))
								{
									func_292();
									MISC::SET_BIT(&uLocal_41, 1);
								}
								if (!BitTest(uLocal_41, 3))
								{
									func_2(3, 3, 1);
									MISC::SET_BIT(&uLocal_41, 3);
								}
							}
						}
						if (BitTest(uLocal_41, 12))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero"))))
							{
								iLocal_49[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero")));
								MISC::CLEAR_BIT(&uLocal_41, 12);
							}
						}
						if (!BitTest(uLocal_41, 3))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_44) > 15848)
							{
								func_2(3, 3, 1);
								MISC::SET_BIT(&uLocal_41, 3);
							}
						}
						if (!BitTest(uLocal_41, 1))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_44) > 5000)
							{
								func_292();
								MISC::SET_BIT(&uLocal_41, 1);
							}
						}
						if (!BitTest(uLocal_41, 4))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_44) > 71550)
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0)))
								{
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0), false))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0), false, false);
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0)))
								{
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0), false))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0), false, false);
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0), false, false);
									}
								}
								MISC::SET_BIT(&uLocal_41, 4);
							}
						}
						if (!BitTest(uLocal_41, 5))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_44) > 73900)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_49[0], false, false);
								}
								MISC::SET_BIT(&uLocal_41, 5);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", joaat("player_zero")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
							{
								PED::SET_PED_CONFIG_FLAG(iLocal_49[0], 208, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_49[0], 118, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_49[0], 213, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[0], true);
							}
							if (func_100() != 0)
							{
								func_260(&iLocal_49, 0);
								func_198(&iLocal_49, 0, 0, 0);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
								func_309(&(Local_91.f_484), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 1, 1);
							}
							if (!BitTest(uLocal_41, 1))
							{
								func_292();
								MISC::SET_BIT(&uLocal_41, 1);
							}
							func_115(6, 0);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
						{
							func_290(1);
							if (!BitTest(uLocal_41, 4))
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0)))
								{
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0), false))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0), false, false);
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0)))
								{
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0), false))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0), false, false);
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0), false, false);
									}
								}
								MISC::SET_BIT(&uLocal_41, 4);
							}
							if (!BitTest(uLocal_41, 5))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_49[0], false, false);
								}
								MISC::SET_BIT(&uLocal_41, 5);
							}
						}
					}
				}
			}
		}
		else
		{
			if (func_150(0))
			{
				if (func_312(&iLocal_42, 0, 0, 0, 0) == 1)
				{
					MISC::SET_BIT(&uLocal_41, 2);
				}
			}
			if (BitTest(uLocal_41, 2))
			{
				func_309(&(Local_91.f_484), 0, 0, "MICHAEL", 1, 1);
				func_309(&(Local_91.f_484), 1, 0, "FRANKLIN", 1, 1);
				func_309(&(Local_91.f_484), 3, 0, "LESTER", 1, 1);
				func_292();
				func_115(6, 0);
			}
		}
	}
	else
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("AH_2_EXT_ALT"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (BitTest(uLocal_41, 6))
		{
			MISC::CLEAR_BIT(&uLocal_41, 6);
		}
	}
}

void func_292()//Position - 0x18D50
{
	func_86(1, 3, 1);
	func_86(2, 3, 1);
	func_314(&Local_91);
	func_68(&Local_91);
}

int func_293(int iParam0, int iParam1, int iParam2)//Position - 0x18D72
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_294(iParam0, iParam2);
	return 1;
}

void func_294(int iParam0, int iParam1)//Position - 0x18DB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_300(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_295(iParam0, &(Global_113386.f_32749.f_5510));
}

void func_295(int iParam0, var uParam1)//Position - 0x18FB4
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_299(uParam1);
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
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_298(uParam1->f_66))
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
		func_297(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_296(iVar0 + 1));
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

int func_296(int iParam0)//Position - 0x1925F
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

int func_297(int iParam0, var uParam1, var uParam2)//Position - 0x1930F
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
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
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

int func_298(int iParam0)//Position - 0x19502
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

void func_299(var uParam0)//Position - 0x19522
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

int func_300(int iParam0)//Position - 0x195D2
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_307(iParam0, 0, 0)) || func_307(iParam0, 1, 0)) || func_307(iParam0, 2, 0)) || func_306(iParam0) != 145) || func_305(iParam0)) || func_304(iParam0)) || func_303(iParam0)) || func_302(iParam0)) || !func_301(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_304(iParam0))
		{
		}
		if (func_304(iParam0))
		{
		}
		if (func_307(iParam0, 0, 0))
		{
		}
		if (func_307(iParam0, 1, 0))
		{
		}
		if (func_307(iParam0, 2, 0))
		{
		}
		if (func_306(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_301(int iParam0)//Position - 0x196AF
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_169(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_302(int iParam0)//Position - 0x19860
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_169(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0)//Position - 0x198A6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_304(int iParam0)//Position - 0x198E1
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_305(int iParam0)//Position - 0x1995D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_306(int iParam0)//Position - 0x19A45
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_307(int iParam0, int iParam1, bool bParam2)//Position - 0x19AA8
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_308(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
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

int func_308(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x19B16
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

void func_309(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x19BEE
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

bool func_310(char* sParam0)//Position - 0x19C89
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sParam0);
	if (!Global_78318)
	{
		if (!bVar0)
		{
			Global_78318 = 1;
		}
	}
	return bVar0;
}

void func_311()//Position - 0x19CAE
{
	Global_100480 = 1;
}

int func_312(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x19CBB
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_243(0))
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *iParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_150(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_313(iParam0, iParam4);
		}
	}
	return 2;
}

void func_313(var uParam0, int iParam1)//Position - 0x19DF2
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_314(var uParam0)//Position - 0x19E41
{
	if (func_12(2, *uParam0))
	{
		if (BitTest(uParam0->f_449, 1))
		{
			if (BitTest(uParam0->f_449, 2))
			{
				func_70(uParam0, func_315(*uParam0));
				func_86(2, *uParam0, 0);
			}
			else
			{
				func_122(uParam0);
				func_86(2, *uParam0, 0);
			}
		}
	}
}

int func_315(int iParam0)//Position - 0x19E90
{
	switch (iParam0)
	{
		case 0:
			return func_332(18);
			break;
		
		case 1:
			return func_332(22);
			break;
		
		case 2:
			return func_332(40);
			break;
		
		case 3:
			return func_332(8);
			break;
		
		case 4:
			return func_332(26);
			break;
		
		default:
			break;
	}
	return 0;
}

void func_316(var uParam0, float fParam1, float fParam2)//Position - 0x19EFD
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_401, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		if (BitTest(uParam0->f_449, 1))
		{
			func_324(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || BitTest(Global_96450, *uParam0))
		{
			if (BitTest(uParam0->f_449, 0))
			{
				if (func_323(uParam0))
				{
					if (BitTest(Global_96450, *uParam0))
					{
						if (BitTest(Global_96452, *uParam0))
						{
							func_318(uParam0);
						}
					}
					else
					{
						func_318(uParam0);
					}
				}
			}
			else
			{
				func_317(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !BitTest(Global_96450, *uParam0))
		{
			if (BitTest(uParam0->f_449, 0))
			{
				if (BitTest(uParam0->f_449, 1))
				{
					func_154(uParam0);
				}
				func_153(uParam0);
			}
		}
	}
}

void func_317(var uParam0)//Position - 0x19FCE
{
	if (!AUDIO::_HAS_MULTIPLAYER_AUDIO_DATA_UNLOADED())
	{
		return;
	}
	HUD::REQUEST_ADDITIONAL_TEXT(&(uParam0->f_1.f_272), 5);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1);
	if (*uParam0 != 1)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_413 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE(&(uParam0->f_1.f_268));
	uParam0->f_414 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	MISC::SET_BIT(&Global_96449, *uParam0);
	MISC::SET_BIT(&(uParam0->f_449), 0);
}

void func_318(var uParam0)//Position - 0x1A04C
{
	int iVar0;
	
	if (!BitTest(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_37(uParam0, iVar0);
			iVar0++;
		}
		func_34(uParam0);
		func_33(uParam0);
		func_322(uParam0);
		func_321(uParam0);
		func_319(uParam0);
		MISC::SET_BIT(&(uParam0->f_449), 1);
	}
}

void func_319(var uParam0)//Position - 0x1A0A6
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_329(*uParam0, uParam0->f_1.f_75[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
			fVar3 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
			Var4 = { func_320(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
			uParam0->f_428[iVar0] = OBJECT::CREATE_OBJECT(iVar1, Var4, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_428[iVar0], true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_428[iVar0], true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_428[iVar0], false, false);
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_428[iVar0], false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_428[iVar0], true);
		}
		iVar0++;
	}
	MISC::CLEAR_BIT(&Global_96452, *uParam0);
}

Vector3 func_320(var uParam0, var uParam1)//Position - 0x1A1DB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_30(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return Var7;
}

void func_321(var uParam0)//Position - 0x1A259
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_117)
	{
		uVar2 = uParam0->f_1.f_186[iVar0];
		bVar3 = BitTest(Global_113386.f_1.f_120[iVar1], uVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[iVar0 /*2*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar0++;
	}
}

void func_322(var uParam0)//Position - 0x1A336
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_14));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_14.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_329(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_329(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			func_10(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar1++;
		}
		iVar2++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (func_329(*uParam0, uParam0->f_1.f_210))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_323(var uParam0)//Position - 0x1A476
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_413))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_414))
	{
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(5))
	{
		return 0;
	}
	if (AUDIO::_HAS_MULTIPLAYER_AUDIO_DATA_UNLOADED())
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	MISC::SET_BIT(&Global_96451, *uParam0);
	return 1;
}

void func_324(var uParam0)//Position - 0x1A511
{
	float fVar0;
	float fVar1;
	
	if (func_329(*uParam0, 0))
	{
		func_325(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * SYSTEM::COS((90f - uParam0->f_404))), (fVar0 * SYSTEM::SIN((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_325(var uParam0)//Position - 0x1A59A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	if (BitTest(Global_96449, *uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_449), 16);
		MISC::SET_BIT(&(uParam0->f_449), 15);
		MISC::SET_BIT(&(uParam0->f_449), 14);
		MISC::CLEAR_BIT(&Global_96449, *uParam0);
	}
	if (BitTest(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			iVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_329(*uParam0, iVar1);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_449), 16);
	}
	if (BitTest(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_329(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
					fVar5 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
					Var6 = { func_320(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
					uParam0->f_428[iVar0] = OBJECT::CREATE_OBJECT(iVar3, Var6, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_428[iVar0], true, false);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_428[iVar0], true);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_428[iVar0], false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_428[iVar0], false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_428[iVar0], true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_449), 15);
	}
	if (BitTest(uParam0->f_449, 14))
	{
		func_326(uParam0);
		func_34(uParam0);
		func_322(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_449), 14);
	}
}

void func_326(var uParam0)//Position - 0x1A7DA
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_327(int iParam0)//Position - 0x1A7FE
{
	return Global_43052 == iParam0;
}

int func_328(int iParam0)//Position - 0x1A80C
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

bool func_329(int iParam0, int iParam1)//Position - 0x1A838
{
	return BitTest(Global_113386.f_1.f_120[iParam0], iParam1);
}

void func_330()//Position - 0x1A84F
{
	int iVar0;
	
	iVar0 = func_100();
	if (func_102(iVar0))
	{
		if (!func_243(0))
		{
			if (!func_328(69) && !func_328(70))
			{
				if (func_331(69) || func_331(70))
				{
					if (Global_113386.f_7261.f_227[70] != 1)
					{
						Global_113386.f_7261.f_227[70] = 1;
						Global_39592[70] = 0;
						Global_39791[70] = 1;
					}
					if (Global_113386.f_7261.f_227[71] != 2)
					{
						Global_113386.f_7261.f_227[71] = 2;
						Global_39592[71] = 0;
						Global_39791[71] = 1;
					}
					if (Global_113386.f_7261.f_227[73] != 1)
					{
						Global_113386.f_7261.f_227[73] = 1;
						Global_39592[73] = 0;
						Global_39791[73] = 1;
					}
					if (Global_113386.f_7261.f_227[72] != 0)
					{
						Global_113386.f_7261.f_227[72] = 0;
						Global_39592[72] = 0;
						Global_39791[72] = 1;
					}
					if (Global_113386.f_7261.f_227[74] != 0)
					{
						Global_113386.f_7261.f_227[74] = 0;
						Global_39592[74] = 0;
						Global_39791[74] = 1;
					}
				}
			}
		}
	}
}

int func_331(int iParam0)//Position - 0x1A985
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_94426[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_91193)
	{
		if (Global_91193[iVar0 /*5*/] != -1)
		{
			if (Global_78588.f_109[Global_91193[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_332(int iParam0)//Position - 0x1A9ED
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

void func_333(var uParam0, int iParam1)//Position - 0x1AA1A
{
	struct<3> Var0;
	float fVar1;
	
	*uParam0 = iParam1;
	Var0 = { Global_96387[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_96387[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { Var0 };
	uParam0->f_404 = fVar1;
	uParam0->f_405 = { Var0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar1))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar1)))) };
	uParam0->f_408 = { -0.85f, 0f, fVar1 };
	MISC::SET_BIT(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	MISC::CLEAR_BIT(&(uParam0->f_449), 0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 1);
	MISC::CLEAR_BIT(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_334(var uParam0, var uParam1)//Position - 0x1AAE6
{
	func_344(uParam0, 1, "HEIST_AGENCY", "BOARD5", "AHFAUD", "CRWAUD", 3, 0, 6, 13, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 2f);
	func_343(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 136, 411, 268, 415, 401, 418, 482, 413, 0, 0, 670, 350, 0, 85, 684, 106);
	func_342(uParam0, 20f, 22f, 28f);
	func_341(uParam0, "", "", "", "", "AHP12", "", "AHP13", "AHLONG");
	func_340(uParam0, 1, "CRW_GM", "");
	func_340(uParam0, 3, "CRW_HW", "");
	func_340(uParam0, 4, "CRW_NR", "");
	func_340(uParam0, 5, "CRW_DJ", "");
	func_340(uParam0, 6, "CRW_PH", "");
	func_340(uParam0, 7, "CRW_CF", "");
	func_340(uParam0, 8, "CRW_ET", "");
	func_340(uParam0, 9, "CRW_KD", "");
	func_340(uParam0, 10, "CRW_PM", "CRM_PM");
	func_340(uParam0, 12, "CRW_RL", "CRM_RL");
	func_340(uParam0, 13, "CRW_TM", "CRM_TM");
	func_339(uParam0, 24, "AHRIC1");
	func_339(uParam0, 26, "AHKAR1");
	func_339(uParam0, 18, "AHJH");
	func_339(uParam0, 19, "AHPAL");
	func_339(uParam0, 21, "AHBOTH");
	func_338(uParam0, 3, 0, 0, 0);
	func_338(uParam0, 2, 0, 0, 0);
	func_338(uParam0, 7, 0, 0, 0);
	func_338(uParam0, 8, 0, 0, 0);
	func_338(uParam0, 5, 2, 0, 0);
	func_338(uParam0, 6, 2, 0, 0);
	func_338(uParam0, 4, 2, 0, 0);
	func_338(uParam0, 9, 2, 0, 0);
	func_338(uParam0, 0, 3, 0, 0);
	func_338(uParam0, 1, 3, 0, 0);
	func_337(uParam0, 0, 1, "H_TD_JANI");
	func_337(uParam0, 1, 3, "H_TD_BLUP");
	func_337(uParam0, 2, 4, "H_TD_PLAN");
	func_337(uParam0, 2, 5, "H_TD_CREW");
	func_337(uParam0, 6, 7, "H_TD_FIRE");
	func_337(uParam0, 6, 8, "H_TD_GETA");
	func_336(uParam0, 2, 70, 71);
	func_336(uParam0, 2, 44, 174);
	func_336(uParam0, 2, 45, 209);
	func_336(uParam0, 3, 178, 68);
	func_336(uParam0, 3, 321, 65);
	func_336(uParam0, 2, 538, 52);
	func_336(uParam0, 2, 470, 82);
	func_336(uParam0, 2, 455, 207);
	func_336(uParam0, 2, 566, 207);
	func_336(uParam0, 2, 673, 339);
	func_336(uParam0, 2, 679, 442);
	func_336(uParam0, 2, 689, 63);
	func_335(uParam0, 2, "AHP8", 55, 197, 1);
	func_335(uParam0, 2, "AHP9", 252, 150, 1);
	func_335(uParam0, 2, "AHP10", 70, 97, 1);
	func_335(uParam0, 2, "AHP11", 504, 106, 1);
}

void func_335(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1ADFD
{
	struct<2> Var0;
	
	if (uParam0->f_369 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			MISC::SET_BIT(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_336(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1AE76
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_337(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x1AEBA
{
	struct<8> Var0;
	
	if (uParam0->f_209 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		MemCopy(&(uParam0->f_211[uParam0->f_209 /*4*/]), {Var0}, 4);
		uParam0->f_209++;
	}
}

void func_338(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1AF0A
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117++;
	}
}

void func_339(var uParam0, int iParam1, char* sParam2)//Position - 0x1AF5A
{
	struct<2> Var0;
	
	StringCopy(&Var0, sParam2, 8);
	if (MISC::ARE_STRINGS_EQUAL(sParam2, ""))
	{
		return;
	}
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
}

void func_340(var uParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x1AF86
{
	struct<2> Var0;
	struct<2> Var1;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!MISC::ARE_STRINGS_EQUAL(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { Var1 };
				break;
			
			case 13:
				uParam0->f_304[16 /*2*/] = { Var1 };
				break;
			
			case 12:
				uParam0->f_304[15 /*2*/] = { Var1 };
				break;
			
			case 11:
				uParam0->f_304[17 /*2*/] = { Var1 };
				break;
			
			default:
				break;
			}
	}
}

void func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)//Position - 0x1B020
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { Var0 };
	uParam0->f_20[1 /*4*/] = { Var1 };
	uParam0->f_108[0 /*4*/] = { Var2 };
	uParam0->f_108[1 /*4*/] = { Var3 };
	uParam0->f_280[1 /*2*/] = { Var4 };
	uParam0->f_280[2 /*2*/] = { Var5 };
	uParam0->f_280[0 /*2*/] = { Var6 };
	uParam0->f_280[3 /*2*/] = { Var7 };
}

void func_342(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x1B0C4
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_343(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x1B0DE
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
}

void func_344(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param12)//Position - 0x1B1AC
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_268), sParam2, 16);
	StringCopy(&(uParam0->f_272), sParam3, 16);
	StringCopy(&(uParam0->f_276), sParam4, 8);
	StringCopy(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = uParam10;
	uParam0->f_394 = { Param11 };
	uParam0->f_397 = { Param12 };
}

int func_345(int iParam0, int iParam1)//Position - 0x1B218
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_346(int iParam0)//Position - 0x1B22E
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_347()//Position - 0x1B285
{
	while (!func_152(&Local_91))
	{
		SYSTEM::WAIT(0);
	}
	func_115(6, 0);
	func_115(8, 0);
	func_115(7, 0);
	func_86(1, 3, 0);
	func_86(2, 3, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_89, false);
	if (iLocal_90 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_90))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_90);
		}
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_91.f_1.f_394 - Local_91.f_1.f_397, Local_91.f_1.f_394 + Local_91.f_1.f_397, true, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_42 != -1)
	{
		func_163(&iLocal_42);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

