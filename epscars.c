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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
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
	struct<3> Local_38 = { 0, 0, 0 } ;
	struct<27> Local_41 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_68[5];
	int iLocal_84[5] = { 0, 0, 0, 0, 0 };
	int* iLocal_90 = NULL;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<3> Local_107[2];
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 16;
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
	int* iLocal_282 = NULL;
	int iLocal_283 = 0;
	var uLocal_284 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	Local_38 = { -690.93805f, 512.2703f, 109.36385f };
	iLocal_98 = -1;
	iLocal_106 = 60000;
	iLocal_283 = 99;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(146))
	{
		func_96();
	}
	if (func_95(90) == 1)
	{
		func_94();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_97 = Global_113969.f_10052.f_103;
	func_93();
	if (func_92())
	{
		func_96();
	}
	func_91(6);
	func_90(&Local_41, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, Local_38, -688.4919f, 507.25494f, 108.918564f, -691.8835f, 516.26886f, 113.43157f, 9.25f, -687.45526f, 507.51794f, 109.36351f, -690.94836f, 506.2783f, 109.36312f);
	func_89(&Local_41, 2);
	Local_41.f_4 = 3;
	MISC::CLEAR_AREA_OF_VEHICLES(Local_38, 5f, false, false, false, false, false, false, 0);
	func_88(&Local_107, -691.9059f, 515.8249f, 108.61385f, -684.06055f, 493.01712f, 110.850395f, 8.25f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_107[0 /*3*/], Local_107[1 /*3*/], 8.25f, false, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.99225f, 108.873665f, -688.8357f, 506.99966f, 112.19278f, 11.25f, false, false, true);
	func_87(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	iLocal_116 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, false, true, true, true, 1);
	if (func_95(90) == 1)
	{
		func_94();
		func_96();
	}
	if (Global_113969.f_10052.f_104 == 0)
	{
		Global_113969.f_10052.f_104 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	func_83(1);
	func_82(0);
	while (true)
	{
		if (func_95(90) == 1)
		{
			func_94();
			func_96();
		}
		func_81(PLAYER::PLAYER_PED_ID());
		if (MISC::GET_MISSION_FLAG() || func_75() != 0)
		{
			func_70();
		}
		switch (iLocal_92)
		{
			case 0:
				func_69(&iLocal_91);
				break;
			
			case 4:
				func_68(&iLocal_91);
				break;
			
			case 1:
				func_67(&iLocal_91);
				break;
			
			case 2:
				func_61(&iLocal_91);
				break;
			
			case 3:
				func_57(&iLocal_91);
				break;
			
			case 6:
				func_54(2, 6, 1);
				func_53(2, "EPS_LSTEMAIL" /* GXT: Brother Brother,~n~~n~Cris and the senior thesis holders are very happy with the vehicles you sourced to further Kraff's work.  You are firmly on the path to enlightenment and divinity but it is a long and expensive path, and there are many more trials ahead.  Are you ready to understand the technology of your existence?  Are you everything you need and less and more?  Until next time, brother.  ~n~~n~Kraff be praised! */, 1);
				func_52(2);
				func_96();
				break;
		}
		func_49(&Local_41);
		if (func_48(&Local_41))
		{
			if (func_42(&Local_41))
			{
				if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() == Global_79084)
				{
					Global_79084 = 0;
					Global_113969.f_32753.f_5588 = 0;
				}
				MISC::CLEAR_AREA_OF_VEHICLES(Local_41.f_14, 8.5f, false, false, false, false, false, false, 0);
				Global_113969.f_10052.f_103 = iLocal_97;
				func_40();
				func_39(&uLocal_117, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				func_22(&uLocal_117, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP" /* GXT: This vehicle is wanted by the Epsilon Program. Deliver it to the location marked ~HUD_COLOUR_MICHAEL~~BLIP_EPSILON~~s~ */))
				{
					HUD::CLEAR_HELP(true);
				}
				func_19();
			}
		}
		if (Global_113969.f_10052.f_104 != 0)
		{
			iLocal_95 = (Global_113969.f_10052.f_104 + 14 % func_18(CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR()));
			if (((CLOCK::GET_CLOCK_DAY_OF_MONTH() == iLocal_95 && !func_17(0)) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_282, &uLocal_284, &iLocal_283);
		if ((iLocal_105 > 0 && MISC::GET_GAME_TIMER() > iLocal_105) && iLocal_283 == 99)
		{
			iLocal_105 = 0;
			if (func_92())
			{
				func_82(6);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int* iParam0, var uParam1, int iParam2)//Position - 0x3E7
{
	int iVar0;
	
	switch (*iParam2)
	{
		case 0:
			*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				iVar0 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", true);
				*iParam2++;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("EPS_CAR_TITLE" /* GXT: Vehicle Delivered~s~ */);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("EPS_CAR_NOTE" /* GXT: ~1~/5 Epsilon Vehicles Delivered */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_3());
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam1 = MISC::GET_GAME_TIMER();
			*iParam2++;
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - *uParam1) > 7000)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - *uParam1) > 7500)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 4:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
			}
			*iParam2 = 99;
			break;
		
		case 99:
			break;
	}
}

int func_2()//Position - 0x53C
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x566
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (BitTest(iLocal_97, bVar0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void func_4(int iParam0)//Position - 0x596
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	func_54(2, Local_68[(5 - iParam0) /*3*/], 1);
	if (func_15(iLocal_98))
	{
		func_53(2, Local_68[(5 - iParam0) /*3*/].f_2, 0);
	}
	else
	{
		func_53(2, Local_68[(5 - iParam0) /*3*/].f_1, 0);
	}
	iParam0 = 0;
	iVar0 = 0;
	iParam0 = 0;
	while (iParam0 < iLocal_84)
	{
		if (!func_14(iParam0))
		{
			func_12(2, func_13(iLocal_84[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(2);
	Global_113969.f_10052.f_104 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	if (iVar0 == 0)
	{
	}
}

void func_5(int iParam0)//Position - 0x632
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54569[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_54569[iVar0 /*203*/].f_9 - 1);
	if (!Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_45269[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */;
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3" /* GXT: Hello Franklin,~n~The Southern San Andreas Tourist Board Young Amateur Wildlife Photographer of the Year Competition is over.~n~Some of our photographers fell off cli... */;
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2" /* GXT: Dear contestant,~n~Thank you for your recent photographic submission. Our image licensing department is already maximizing its profit-making potential. And you're a step clos... */;
				break;
		}
		func_6(1, Global_45269[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_45269[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_45269[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_45269[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_45269[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54569[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x99F
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_75();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */);
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */);
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */);
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_7(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_8(iParam1)), 0));
		}
		else
		{
			func_7(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_8(iParam1)), 0));
		}
		switch (Global_20930)
		{
			case 0:
				StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
				Global_45261++;
				if (Global_45261 > 16)
				{
					Global_45261 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
				Global_45263++;
				if (Global_45263 > 16)
				{
					Global_45263 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
				Global_45262++;
				if (Global_45262 > 16)
				{
					Global_45262 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20919, true);
	}
}

void func_7(int iParam0)//Position - 0xB85
{
	Global_45264[Global_45268] = iParam0;
	Global_23344 = 1;
	Global_23343 = iParam0;
	Global_45268++;
	if (Global_45268 == 3)
	{
		Global_45268 = 0;
	}
}

char* func_8(int iParam0)//Position - 0xBB3
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0" /* GXT: Mike */;
		
		case 3:
			return "EMSTR_3" /* GXT: Jimmy */;
		
		case 1:
			return "EMSTR_6" /* GXT: Franklin */;
		
		case 2:
			return "EMSTR_9" /* GXT: Trevor */;
		
		case 4:
			return "EMSTR_12" /* GXT: Marnie */;
		
		case 5:
			return "EMSTR_29" /* GXT: Epsilon Store */;
		
		case 6:
			return "EMSTR_36" /* GXT: Maude */;
		
		case 7:
			return "EMSTR_39" /* GXT: Lester */;
		
		case 8:
			return "EMSTR_52" /* GXT: Maze Bank */;
		
		case 9:
			return "EMSTR_55" /* GXT: Fleeca */;
		
		case 10:
			return "EMSTR_58" /* GXT: Bank of Liberty */;
		
		case 11:
			return "EMSTR_78" /* GXT: Legendary Motorsport Sales */;
		
		case 12:
			return "EMSTR_81" /* GXT: Elitas Sales */;
		
		case 13:
			return "EMSTR_84" /* GXT: Cache & Carry */;
		
		case 14:
			return "EMSTR_87" /* GXT: DockTease */;
		
		case 15:
			return "EMSTR_106" /* GXT: LSC */;
		
		case 16:
			return "EMSTR_114" /* GXT: AMMU-NATION */;
		
		case 17:
			return "EMSTR_142" /* GXT: Christian Feltz */;
		
		case 18:
			return "EMSTR_145" /* GXT: Paige Harris */;
		
		case 19:
			return "EMSTR_152" /* GXT: Los Santos Tourist Info */;
		
		case 20:
			return "EMSTR_157" /* GXT: Rickie Luckens */;
		
		case 21:
			return "EMSTR_163" /* GXT: Minotaur Property Management */;
		
		case 22:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		
		case 23:
			return "EMSTR_187" /* GXT: Vanilla Unicorn */;
		
		case 24:
			return "EMSTR_190" /* GXT: Dr Isiah Friedlander */;
		
		case 25:
			return "EMSTR_206" /* GXT: TRACEYHEARTSTEALER */;
		
		case 26:
			return "EMSTR_219" /* GXT: Dave Norton */;
		
		case 27:
			return "EMSTR_226" /* GXT: Amanda De Santa */;
		
		case 28:
			return "EMSTR_233" /* GXT: Donald Percival */;
		
		case 29:
			return "EMSTR_242" /* GXT: Ron */;
		
		case 30:
			return "EMSTR_249" /* GXT: Tanisha Marks */;
		
		case 31:
			return "EMSTR_262" /* GXT: Denise */;
		
		case 32:
			return "EMSTR_269" /* GXT: Lamar Davis */;
		
		case 33:
			return "EMSTR_319" /* GXT: Brad */;
		
		case 34:
			return "EMSTR_340" /* GXT: Patricia Madrazo */;
		
		case 35:
			return "EMSTR_348" /* GXT: Eileen Haworth */;
		
		case 36:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		
		case 37:
			return "EMSTR_357" /* GXT: Gray Nicholson */;
		
		case 38:
			return "EMSTR_360" /* GXT: Nigel */;
		
		case 39:
			return "EMSTR_369" /* GXT: Hookies */;
		
		case 40:
			return "EMSTR_376" /* GXT: Towing Impound */;
		
		case 41:
			return "EMSTR_379" /* GXT: Downtown Cab Co, */;
		
		case 42:
			return "EMSTR_382" /* GXT: McKenzie Field Hangar */;
		
		case 43:
			return "EMSTR_384" /* GXT: Sonar Collections Dock */;
		
		case 44:
			return "EMSTR_387" /* GXT: Los Santos Customs */;
		
		case 45:
			return "EMSTR_390" /* GXT: Cinema Doppler */;
		
		case 46:
			return "EMSTR_393" /* GXT: Ten Cent Theater */;
		
		case 47:
			return "EMSTR_396" /* GXT: Tivoli Cinema */;
		
		case 48:
			return "EMSTR_399" /* GXT: Los Santos Golf Club */;
		
		case 49:
			return "EMSTR_402" /* GXT: Car Scrap Yard */;
		
		case 50:
			return "EMSTR_405" /* GXT: Smoke on the Water */;
		
		case 51:
			return "EMSTR_408" /* GXT: Tequi-la-la */;
		
		case 52:
			return "EMSTR_411" /* GXT: Pitchers */;
		
		case 53:
			return "EMSTR_414" /* GXT: The Hen House */;
		
		case 54:
			return "EMSTR_465" /* GXT: Pedal & Metal Sales */;
		
		case 55:
			return "EMSTR_468" /* GXT: SSA Super Autos Sales */;
		
		case 56:
			return "EMSTR_489" /* GXT: Hush Smush */;
		
		case 57:
			return "EMSTR_492" /* GXT: foxymama21 */;
		
		case 58:
			return "EMSTR_495" /* GXT: Altarego12 */;
		
		case 59:
			return "EMSTR_498" /* GXT: BadKitty11 */;
		
		case 60:
			return "EMSTR_501" /* GXT: 7yearbitch */;
		
		case 61:
			return "EMSTR_504" /* GXT: Froggy69 */;
		
		case 62:
			return "EMSTR_507" /* GXT: Misscuddles */;
		
		case 63:
			return "EMSTR_640" /* GXT: Off-Road Events */;
		
		case 64:
			return "EMSTR_643" /* GXT: DockTease */;
		
		case 65:
			return "EMSTR_652" /* GXT: Brother Adrian */;
		
		default:
	}
	return "NULL";
}

char* func_9(int iParam0, int iParam1)//Position - 0xF1E
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[0 /*29*/].f_7));
		
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[1 /*29*/].f_7));
		
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[2 /*29*/].f_7));
		
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[12 /*29*/].f_7));
		
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[60 /*29*/].f_7));
		
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[62 /*29*/].f_7));
		
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[14 /*29*/].f_7));
		
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[97 /*29*/].f_7));
		
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[99 /*29*/].f_7));
		
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[15 /*29*/].f_7));
		
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[30 /*29*/].f_7));
		
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[17 /*29*/].f_7));
		
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[20 /*29*/].f_7));
		
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[43 /*29*/].f_7));
		
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[44 /*29*/].f_7));
		
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[19 /*29*/].f_7));
		
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[40 /*29*/].f_7));
		
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /* GXT: CHAR_SAEEDA */);
		
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[122 /*29*/].f_7));
		
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[125 /*29*/].f_7));
		
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[113 /*29*/].f_7));
		
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[126 /*29*/].f_7));
		
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[127 /*29*/].f_7));
		
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[124 /*29*/].f_7));
		
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[114 /*29*/].f_7));
		
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[115 /*29*/].f_7));
		
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[116 /*29*/].f_7));
		
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[123 /*29*/].f_7));
		
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[117 /*29*/].f_7));
		
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[118 /*29*/].f_7));
		
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[119 /*29*/].f_7));
		
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[120 /*29*/].f_7));
		
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_10(int iParam0)//Position - 0x12E9
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_11(int iParam0)//Position - 0x131A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_54569[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_54569[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_54569[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_12(int iParam0, char* sParam1)//Position - 0x137E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54569[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_13(int iParam0)//Position - 0x1433
{
	if (iParam0 == iLocal_84[0])
	{
		return "EPS_CARNME_0" /* GXT: ~n~Pegassi Vacca~nrt~~n~<img src='img://Epsilon_Cars/Eps3Vacca' vspace='0' height='128' width='244'/>~nrt~ */;
	}
	if (iParam0 == iLocal_84[1])
	{
		return "EPS_CARNME_1" /* GXT: ~n~Benefactor Surano~nrt~~n~<img src='img://Epsilon_Cars/Eps3Surano' vspace='0' height='128' width='244'/>~nrt~ */;
	}
	if (iParam0 == iLocal_84[2])
	{
		return "EPS_CARNME_2" /* GXT: ~n~Declasse Tornado~nrt~~n~<img src='img://Epsilon_Cars/Eps3Tornado2' vspace='0' height='128' width='244'/>~nrt~ */;
	}
	if (iParam0 == iLocal_84[3])
	{
		return "EPS_CARNME_3" /* GXT: ~n~Enus Super Diamond~nrt~~n~<img src='img://Epsilon_Cars/Eps3SuperD' vspace='0' height='128' width='244'/>~nrt~ */;
	}
	if (iParam0 == iLocal_84[4])
	{
		return "EPS_CARNME_4" /* GXT: ~n~Dinka Double-T~nrt~~n~<img src='img://Epsilon_Cars/Eps3Carbon' vspace='0' height='128' width='244'/>~nrt~ */;
	}
	return "EPS_CARNME_N" /* GXT: ~n~ */;
}

bool func_14(int iParam0)//Position - 0x1494
{
	return BitTest(iLocal_97, iParam0);
}

int func_15(int iParam0)//Position - 0x14A1
{
	if (iParam0 < 0)
	{
		return 1;
	}
	return BitTest(iLocal_97, iParam0 + 5);
}

int func_16()//Position - 0x14BA
{
	return (5 - func_3());
}

int func_17(int iParam0)//Position - 0x14C8
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

int func_18(int iParam0, int iParam1)//Position - 0x151F
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

void func_19()//Position - 0x15C1
{
	int iVar0;
	
	iLocal_283 = 0;
	STATS::STAT_GET_INT(joaat("NUM_EPSILON_STEP"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		STATS::STAT_SET_INT(joaat("NUM_EPSILON_STEP"), (6 + func_3()), true);
		func_20(23, (6 + func_3()));
	}
}

int func_20(int iParam0, int iParam1)//Position - 0x1603
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

bool func_21(char* sParam0)//Position - 0x1654
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1667
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)//Position - 0x16B5
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
					func_37();
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
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_35();
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
				func_33();
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
				if (func_32())
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
			if (func_31())
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
			func_30();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_29();
		func_24();
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
		func_37();
	}
	return 0;
}

void func_24()//Position - 0x1983
{
	if (!func_25())
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

int func_25()//Position - 0x19BA
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_28())
	{
		return 0;
	}
	if (func_26(PLAYER::PLAYER_ID()))
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

bool func_26(int iParam0)//Position - 0x1A1D
{
	return func_27(iParam0, 20);
}

var func_27(int iParam0, int iParam1)//Position - 0x1A2D
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_28()//Position - 0x1A45
{
	return -1;
}

void func_29()//Position - 0x1A4E
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

void func_30()//Position - 0x1A80
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

int func_31()//Position - 0x1B15
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()//Position - 0x1B3C
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

void func_33()//Position - 0x1BD5
{
	if (func_34(14))
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
		Global_20930 = func_75();
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

bool func_34(int iParam0)//Position - 0x1C77
{
	return Global_44042 == iParam0;
}

void func_35()//Position - 0x1C85
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

bool func_36(int iParam0, int iParam1)//Position - 0x1CDD
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

void func_37()//Position - 0x1D15
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

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1D6C
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = uParam5;
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

void func_39(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1DC2
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

int func_40()//Position - 0x1E5D
{
	if (func_41(0))
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

int func_41(bool bParam0)//Position - 0x1EA8
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_42(var uParam0)//Position - 0x1ED0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];
	
	iVar2 = 0;
	iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar3);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_81(uVar3[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/], uParam0->f_6.f_7, false, true, 0) && !uParam0->f_26)
			{
				if (func_43(uVar3[iVar0]))
				{
					iVar2 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		Global_113969.f_10052.f_104 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
		iLocal_105 = (MISC::GET_GAME_TIMER() + iLocal_106);
	}
	return iVar2;
}

int func_43(int iParam0)//Position - 0x1F77
{
	int iVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_47(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_46(iVar1, iVar0))
		{
			if (!func_14(iVar0))
			{
				func_45(iVar0, ENTITY::GET_ENTITY_HEALTH(iParam0) < 875);
				func_44(iVar0, 1);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_44(int iParam0, bool bParam1)//Position - 0x1FD7
{
	if (bParam1)
	{
		MISC::SET_BIT(&iLocal_97, iParam0);
		iLocal_98 = iParam0;
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_97, iParam0);
	}
}

void func_45(int iParam0, bool bParam1)//Position - 0x1FFB
{
	if (bParam1)
	{
		MISC::SET_BIT(&iLocal_97, iParam0 + 5);
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_97, iParam0 + 5);
	}
}

int func_46(int iParam0, int iParam1)//Position - 0x201F
{
	if (iParam0 == iLocal_84[iParam1])
	{
		return 1;
	}
	if (iLocal_84[iParam1] != joaat("tornado2"))
	{
		return 0;
	}
	if (iParam0 == joaat("tornado"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado2"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado3"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado4"))
	{
		return 1;
	}
	return 0;
}

bool func_47(int iParam0)//Position - 0x2081
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 750)
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, true) || VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, false))
	{
		return 1;
	}
	return VEHICLE::GET_VEHICLE_NUM_OF_BROKEN_OFF_PARTS(iParam0) > 0;
}

bool func_48(var uParam0)//Position - 0x20CA
{
	return (uParam0->f_5 == 2 && uParam0->f_4 == 2);
}

void func_49(var uParam0)//Position - 0x20E3
{
	struct<3> Var0;
	
	uParam0->f_26 = 0;
	if (MISC::IS_POSITION_OCCUPIED(uParam0->f_19[0 /*3*/], 1.2f, false, true, true, false, false, PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_26 = 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(uParam0->f_19[1 /*3*/], 1.2f, false, true, true, false, false, PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_26 = 1;
	}
	else
	{
		Var0 = { func_50(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0.5f, 1) };
		uParam0->f_26 = MISC::IS_POSITION_OCCUPIED(Var0, 1.2f, false, true, true, false, false, PLAYER::PLAYER_PED_ID(), false);
		if (uParam0->f_26)
		{
		}
	}
	if (uParam0->f_5 == 2 && (uParam0->f_4 != 2 || uParam0->f_4 == 3))
	{
		uParam0->f_17 = (uParam0->f_17 - uParam0->f_18);
		if (uParam0->f_17 <= 0f)
		{
			uParam0->f_17 = 0f;
			uParam0->f_4 = 2;
			AUDIO::STOP_SOUND(iLocal_93);
			iLocal_94 = 0;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "CLOSED", *uParam0, "DOOR_GARAGE", false, 0, true);
		}
		else if (!iLocal_94)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_93, "CLOSING", *uParam0, "DOOR_GARAGE", false, 0, true);
			iLocal_94 = 1;
		}
	}
	if (uParam0->f_5 == 1 && (uParam0->f_4 != 1 || uParam0->f_4 == 4))
	{
		uParam0->f_17 = (uParam0->f_17 + uParam0->f_18);
		if (uParam0->f_17 >= 1f)
		{
			uParam0->f_17 = 1f;
			uParam0->f_4 = 1;
			AUDIO::STOP_SOUND(iLocal_93);
			iLocal_94 = 0;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "OPENED", *uParam0, "DOOR_GARAGE", false, 0, true);
		}
		else if (!iLocal_94)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_93, "OPENING", *uParam0, "DOOR_GARAGE", false, 0, true);
			iLocal_94 = 1;
		}
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 20f, uParam0->f_3, false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uParam0->f_3, *uParam0, true, uParam0->f_17, false);
	}
}

Vector3 func_50(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x22A3
{
	if (bParam7)
	{
		fParam6 = func_51(fParam6, 0f, 1f);
	}
	return Param0 + Vector(fParam6, fParam6, fParam6) * Param3 - Param0;
}

float func_51(float fParam0, float fParam1, float fParam2)//Position - 0x22CC
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

void func_52(int iParam0)//Position - 0x22F3
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!BitTest(Global_113969.f_24989, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_54569[iVar0 /*203*/] = 0;
}

void func_53(int iParam0, char* sParam1, bool bParam2)//Position - 0x232D
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54569[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_54569[iVar0 /*203*/].f_10[(Global_54569[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_5(iParam0);
	}
}

int func_54(int iParam0, int iParam1, bool bParam2)//Position - 0x2454
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_56(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_54569[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_54569[iVar0 /*203*/].f_2 = iParam0;
	Global_54569[iVar0 /*203*/].f_10[Global_54569[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_54569[iVar0 /*203*/].f_10[Global_54569[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_54569[iVar0 /*203*/].f_10[Global_54569[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_54569[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_54569[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_54569[iVar0 /*203*/].f_4[iVar1] == Global_45269[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_54569[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_54569[iVar0 /*203*/].f_4[Global_54569[iVar0 /*203*/].f_3] = Global_45269[iParam1 /*12*/].f_3;
			Global_54569[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_54569[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_54569[iVar0 /*203*/].f_4[iVar1] == Global_45269[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_54569[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_54569[iVar0 /*203*/].f_4[Global_54569[iVar0 /*203*/].f_3] = Global_45269[iParam1 /*12*/].f_2;
			Global_54569[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_54569[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_54569[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_55(Global_54569[iVar0 /*203*/].f_4[iVar1], Global_54569[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_55(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2650
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_48594[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_48594[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_10(Global_45269[iVar20 /*12*/].f_1) };
		if (Global_45269[iVar20 /*12*/].f_2 == iParam0 && !Global_45269[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_45269[iVar20 /*12*/].f_2;
		iVar0 = Global_54207[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_54207[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_45261 = (Global_45261 - 1);
						if (Global_45261 < 0)
						{
							Global_45261 = 0;
						}
						break;
					
					case 1:
						Global_45262 = (Global_45262 - 1);
						if (Global_45262 < 0)
						{
							Global_45262 = 0;
						}
						break;
					
					case 2:
						Global_45263 = (Global_45263 - 1);
						if (Global_45263 < 0)
						{
							Global_45263 = 0;
						}
						break;
					}
				}
		}
		Global_54207[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_54207[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_54207[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_54207[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_54207[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_54207[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_54207[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_54207[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_45261 = (Global_45261 - 1);
						if (Global_45261 < 0)
						{
							Global_45261 = 0;
						}
						break;
					
					case 1:
						Global_45262 = (Global_45262 - 1);
						if (Global_45262 < 0)
						{
							Global_45262 = 0;
						}
						break;
					
					case 2:
						Global_45263 = (Global_45263 - 1);
						if (Global_45263 < 0)
						{
							Global_45263 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_54569[iVar24 /*203*/].f_1 == iParam1 && Global_54569[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_54207[iParam0 /*120*/].f_18[iVar0] = Global_54569[iVar23 /*203*/].f_1;
		Global_54207[iParam0 /*120*/].f_1[iVar0] = (Global_54569[iVar23 /*203*/].f_9 - 1);
		Global_54207[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_54207[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_54207[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_54207[iParam0 /*120*/]++;
		iVar25 = Global_54207[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_54569[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_45269[iVar26 /*12*/].f_2;
		if (Global_54569[iVar23 /*203*/].f_10[(Global_54569[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_54569[iVar23 /*203*/].f_10[(Global_54569[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_10(Global_45269[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_54207[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_6(1, iVar1, iVar2, "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_56(int iParam0, bool bParam1)//Position - 0x2A24
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 > -1)
	{
		if (Global_54569[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_54569[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_54569[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_54569[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_54569[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_54569[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_54569[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_54569[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_54207[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_54207[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_54207[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_54207[iVar6 /*120*/].f_18[iVar8] == Global_54569[iVar4 /*203*/].f_1)
							{
								if (Global_54207[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_45261 = (Global_45261 - 1);
											break;
										
										case 1:
											Global_45262 = (Global_45262 - 1);
											break;
										
										case 2:
											Global_45263 = (Global_45263 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_54569[iVar4 /*203*/].f_2 = iParam0;
	Global_54569[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_54569[iVar4 /*203*/] = 1;
	}
	Global_113969.f_21040.f_310++;
	if (Global_113969.f_21040.f_310 == 0)
	{
		Global_113969.f_21040.f_310 = 1;
	}
	Global_54569[iVar4 /*203*/].f_1 = Global_113969.f_21040.f_310;
	Global_54569[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_57(int iParam0)//Position - 0x2C3C
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_60(&iLocal_90);
			func_59("EPS_DROP_PERSON" /* GXT: This vehicle can't be delivered while there are passengers in it. */, -1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (!func_58())
			{
				*iParam0 = 4;
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
				if (func_81(iVar0))
				{
					if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) == 0)
					{
						*iParam0 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (!func_58())
			{
				func_82(0);
			}
			else
			{
				func_59("EPS_DROP_ESCAPE" /* GXT: Deliver the vehicle to the location marked ~HUD_COLOUR_MICHAEL~~BLIP_EPSILON~~s~ */, -1);
				func_82(2);
			}
			break;
	}
}

int func_58()//Position - 0x2CD7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!func_81(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_100 = 0;
		return 0;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	if (!func_81(iVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_14(iVar0))
		{
			if (func_46(ENTITY::GET_ENTITY_MODEL(iVar1), iVar0))
			{
				if (func_47(iVar1))
				{
					if (!iLocal_100)
					{
						func_59("EPS_DROP_FAIL" /* GXT: The vehicle is too damaged for the Epsilon Program. Find another one or repair it. */, -1);
						iLocal_100 = 1;
					}
					return 0;
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_59(char* sParam0, int iParam1)//Position - 0x2D6D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_60(int* iParam0)//Position - 0x2D84
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_61(int iParam0)//Position - 0x2DA4
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_89(&Local_41, 1);
			Local_41.f_4 = 4;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1.5f);
			}
			*iParam0 = 2;
			iLocal_96 = 0;
			iLocal_104 = 0;
			break;
		
		case 2:
			switch (iLocal_96)
			{
				case 0:
					if (iLocal_101 == 1 && !Local_41.f_26)
					{
						if (func_21("EPS_DROP_MESS" /* GXT: Clear obstructions away from the garage or park closer to the wall. */))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						func_82(4);
						return;
					}
					if (func_66(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
					}
					if (func_81(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) > 0)
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false) != PLAYER::PLAYER_PED_ID())
						{
							func_82(3);
							return;
						}
					}
					if (!Local_41.f_26)
					{
						if (iLocal_102 == 0)
						{
							if (func_65(iVar0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_41.f_6[0 /*3*/], Local_41.f_6[1 /*3*/], Local_41.f_6.f_7, false, true, 0))
								{
									func_64("EPS_DROP_EXIT" /* GXT: Exit the vehicle. */, 7500, 1);
									iLocal_104 = 0;
									iLocal_102 = 1;
									iLocal_101 = 0;
								}
							}
						}
						if (func_63(PLAYER::PLAYER_PED_ID(), Local_41.f_14, 0) < 3f)
						{
							func_60(&iLocal_90);
						}
						if (func_63(PLAYER::PLAYER_PED_ID(), Local_41, 0) > (15f + 5f))
						{
							func_89(&Local_41, 2);
							Local_41.f_4 = 3;
							iLocal_102 = 0;
							iLocal_101 = 0;
							iLocal_104 = 0;
							func_82(1);
							return;
						}
						if (func_62(&Local_41) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							func_89(&Local_41, 2);
							Local_41.f_4 = 3;
							iLocal_104 = 0;
							func_82(0);
							return;
						}
					}
					if ((Local_41.f_26 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_104 == 0)
						{
							iLocal_104 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_104) > 500)
						{
							if (iLocal_101 == 0)
							{
								HUD::CLEAR_PRINTS();
								func_59("EPS_DROP_MESS" /* GXT: Clear obstructions away from the garage or park closer to the wall. */, -1);
								iLocal_101 = 1;
								iLocal_102 = 0;
							}
						}
					}
					break;
			}
			break;
	}
}

bool func_62(var uParam0)//Position - 0x2FB8
{
	return (!uParam0->f_26 && !MISC::IS_POSITION_OCCUPIED(uParam0->f_14, 6.2f, false, false, true, false, false, 0, false));
}

float func_63(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x2FE1
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

void func_64(char* sParam0, int iParam1, int iParam2)//Position - 0x301B
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_65(int iParam0)//Position - 0x3034
{
	if (func_66(iParam0))
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

int func_66(int iParam0)//Position - 0x305E
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

void func_67(int iParam0)//Position - 0x307F
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			if (!HUD::DOES_BLIP_EXIST(iLocal_90))
			{
				iLocal_90 = HUD::ADD_BLIP_FOR_COORD(Local_38);
				if (HUD::DOES_BLIP_EXIST(iLocal_90))
				{
					HUD::SET_BLIP_SPRITE(iLocal_90, 206 /*RADAR_EPSILON*/);
					HUD::SET_BLIP_COLOUR(iLocal_90, 42);
				}
			}
			*iParam0 = 2;
			iLocal_96 = 0;
			break;
		
		case 2:
			if (!func_58())
			{
				func_82(0);
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_82(4);
				return;
			}
			if (func_66(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			}
			if (func_81(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) > 0)
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false) != PLAYER::PLAYER_PED_ID())
				{
					func_82(3);
					return;
				}
			}
			if (func_63(PLAYER::PLAYER_PED_ID(), Local_41, 0) < 15f)
			{
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			func_82(2);
			break;
	}
}

void func_68(int iParam0)//Position - 0x3177
{
	switch (*iParam0)
	{
		case 1:
			func_60(&iLocal_90);
			if (iLocal_103 == 0)
			{
				func_59("EPS_DROP_WANTED" /* GXT: This vehicle can't be delivered while wanted. Lose your wanted rating. */, -1);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (!func_58())
			{
				func_82(0);
			}
			else
			{
				if (iLocal_103 == 0)
				{
					func_59("EPS_DROP_ESCAPE" /* GXT: Deliver the vehicle to the location marked ~HUD_COLOUR_MICHAEL~~BLIP_EPSILON~~s~ */, -1);
				}
				func_82(2);
			}
			iLocal_103 = 1;
			break;
	}
}

void func_69(int iParam0)//Position - 0x31F2
{
	switch (*iParam0)
	{
		case 1:
			*iParam0 = 2;
			iLocal_99 = 0;
			iLocal_101 = 0;
			func_60(&iLocal_90);
			break;
		
		case 2:
			if (func_66(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41.f_6[0 /*3*/], Local_41.f_6[1 /*3*/], Local_41.f_6.f_7, false, true, 0) && func_48(&Local_41))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -687.6668f, 500.598f, 109.0364f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 200.7367f);
				}
			}
			if (func_63(PLAYER::PLAYER_PED_ID(), Local_41, 0) > (15f + 5f))
			{
				func_89(&Local_41, 2);
				if (Local_41.f_4 != 2)
				{
					Local_41.f_4 = 3;
				}
			}
			if (func_58())
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_82(4);
					return;
				}
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			if (iLocal_99 == 0 && func_66(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_115 != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_115 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
					func_59("EPS_DROP_HELP" /* GXT: This vehicle is wanted by the Epsilon Program. Deliver it to the location marked ~HUD_COLOUR_MICHAEL~~BLIP_EPSILON~~s~ */, -1);
					iLocal_99 = 1;
				}
			}
			iLocal_100 = 0;
			func_82(1);
			break;
	}
}

void func_70()//Position - 0x331F
{
	func_72();
	while (MISC::GET_MISSION_FLAG() || func_75() != 0)
	{
		SYSTEM::WAIT(0);
	}
	func_71();
}

void func_71()//Position - 0x334A
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_81(PLAYER::PLAYER_PED_ID()))
	{
	}
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.99225f, 108.873665f, -688.8357f, 506.99966f, 112.19278f, 11.25f, false, false, true);
	func_87(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	iLocal_116 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, false, true, true, true, 1);
	iLocal_97 = Global_113969.f_10052.f_103;
	func_93();
	if (func_92())
	{
		func_96();
	}
	func_83(1);
	if (func_11(2) == -1)
	{
		func_4(func_16());
	}
	func_82(0);
}

void func_72()//Position - 0x33EF
{
	if (HUD::DOES_BLIP_EXIST(iLocal_90))
	{
		func_60(&iLocal_90);
		iLocal_90 = 0;
	}
	Global_113969.f_10052.f_103 = iLocal_97;
	func_60(&iLocal_90);
	func_83(0);
	func_74();
	func_73(&Local_41);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_116, false);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-683.4503f, 492.99225f, 108.873665f, -688.8357f, 506.99966f, 112.19278f, 11.25f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_107[0 /*3*/], Local_107[1 /*3*/], 8.25f, 1);
}

void func_73(var uParam0)//Position - 0x3470
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 20f, uParam0->f_3, false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uParam0->f_3, *uParam0, true, 0f, false);
	}
}

void func_74()//Position - 0x349C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_84[iVar0]);
		iVar0++;
	}
}

int func_75()//Position - 0x34C3
{
	func_76();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_76()//Position - 0x34DC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_79(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_78(PLAYER::PLAYER_PED_ID());
			if (func_77(iVar0) && (!func_34(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_77(Global_113969.f_2366.f_539.f_4321))
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

bool func_77(int iParam0)//Position - 0x35D9
{
	return iParam0 < 3;
}

int func_78(int iParam0)//Position - 0x35E5
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_79(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_79(int iParam0)//Position - 0x3622
{
	if (func_77(iParam0))
	{
		return func_80(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_80(int iParam0)//Position - 0x3647
{
	return Global_2169[iParam0 /*29*/];
}

bool func_81(int iParam0)//Position - 0x3656
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_82(int iParam0)//Position - 0x3674
{
	iLocal_92 = iParam0;
	iLocal_91 = 1;
}

void func_83(bool bParam0)//Position - 0x3683
{
	func_84(44, bParam0);
	func_84(45, bParam0);
	func_84(46, bParam0);
	func_84(47, bParam0);
	func_84(48, bParam0);
	func_84(49, bParam0);
	func_84(50, bParam0);
}

void func_84(int iParam0, bool bParam1)//Position - 0x36C3
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_86(iParam0, 0))
		{
			func_85(iParam0, 1, 0);
			func_85(iParam0, 2, 0);
			func_85(iParam0, 3, 0);
			func_85(iParam0, 4, 0);
			func_85(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_85(iParam0, 0, 0);
	}
}

void func_85(int iParam0, int iParam1, bool bParam2)//Position - 0x3720
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113969.f_32753[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_32753[iParam0]), iParam1);
	}
}

int func_86(int iParam0, int iParam1)//Position - 0x375B
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

void func_87(struct<3> Param0, float fParam3, var uParam4, var uParam5)//Position - 0x377B
{
	struct<3> Var0;
	
	Var0 = { fParam3, fParam3, fParam3 };
	*uParam4 = { Param0 - Var0 };
	*uParam5 = { Param0 + Var0 };
}

void func_88(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x37A7
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param4 };
	uParam0->f_7 = fParam7;
}

void func_89(var uParam0, int iParam1)//Position - 0x37CB
{
	uParam0->f_5 = iParam1;
}

void func_90(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8, struct<3> Param11, float fParam14, struct<3> Param15, struct<3> Param18)//Position - 0x37D9
{
	uParam0->f_3 = iParam1;
	*uParam0 = { Param2 };
	uParam0->f_5 = 2;
	uParam0->f_4 = 0;
	uParam0->f_19[0 /*3*/] = { Param15 };
	uParam0->f_19[1 /*3*/] = { Param18 };
	uParam0->f_14 = { Param5 };
	func_88(&(uParam0->f_6), Param8, Param11, fParam14);
}

int func_91(int iParam0)//Position - 0x382F
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
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
	return 1;
}

bool func_92()//Position - 0x3886
{
	return func_3() == 5;
}

void func_93()//Position - 0x3894
{
	iLocal_84[0] = joaat("vacca");
	iLocal_84[1] = joaat("surano");
	iLocal_84[2] = joaat("tornado2");
	iLocal_84[3] = joaat("superd");
	iLocal_84[4] = joaat("double");
	Local_68[0 /*3*/] = 1;
	Local_68[0 /*3*/].f_1 = "EPS_GMAIL_G5" /* GXT: Brother,~n~~n~These are the vehicles that the higher beings require:~a~ ~a~ ~a~ ~a~ ~a~ ~n~Make sure these vehicles are delivered in a condition befitting the level of divine understanding that our thesis holders have reached.  Carry out this small task for us and you will be rewarded with knowledge of infinitely greater value.  Kraff be praised! */;
	Local_68[0 /*3*/].f_2 = "EPS_BMAIL_G5" /* GXT: Brother, ~n~~n~These are the vehicles that the higher beings require:~a~ ~a~ ~a~ ~a~ ~a~ ~n~Make sure these vehicles are delivered in a condition befitting the level of divine understanding that our thesis holders have reached.  Carry out this small task for us and you will be rewarded with knowledge of infinitely greater value.  Kraff be praised! */;
	Local_68[1 /*3*/] = 2;
	Local_68[1 /*3*/].f_1 = "EPS_GMAIL_G4" /* GXT: Kifflom Brother,~n~~n~The higher beings now require these vehicles:~a~ ~a~ ~a~ ~a~ ~n~The color is of no consequence.  We will judge you in many ways but none so superficial. ~n~~n~Kraff be praised! */;
	Local_68[1 /*3*/].f_2 = "EPS_BMAIL_G4" /* GXT: Very disappointing, Brother,~n~~n~The offering you made was not what we were expecting of you.  The higher beings have now requested these vehicles:~a~ ~a~ ~a~ ~a~ ~n~Accomplish this and you might still be Saveable.  Unlimit your limitations! ~n~~n~Kraff be praised! */;
	Local_68[2 /*3*/] = 3;
	Local_68[2 /*3*/].f_1 = "EPS_GMAIL_G3" /* GXT: Brother,~n~~n~Kraff desires these vehicles:~a~ ~a~ ~a~ ~n~Know that Cris and the other higher beings recognize your commitment to the divine truth.  Find these vehicles and you will be richly rewarded with powerful tools that you do not understand. ~n~~n~Kraff be praised! */;
	Local_68[2 /*3*/].f_2 = "EPS_BMAIL_G3" /* GXT: Have we over-estimated your capabilities? ~n~~n~Your last offering was not received well and the senior thesis holders now requested these vehicles:~a~ ~a~ ~a~ ~n~Carry out these wishes and prove that you are not an Objectionable Person.~n~~n~Kraff be praised! */;
	Local_68[3 /*3*/] = 4;
	Local_68[3 /*3*/].f_1 = "EPS_GMAIL_G2" /* GXT: Dear Brother,~n~~n~Cris has requested delivery of these vehicles as swiftly as possible:~a~ ~a~ ~n~Many are relying on you to fulfill these requirements.  Do not disappoint.~n~~n~Kraff be praised! */;
	Local_68[3 /*3*/].f_2 = "EPS_BMAIL_G2" /* GXT: Brother,~n~~n~All evidence points to you being an Unsaveable.  You have one more chance to prove us wrong by sourcing these vehicles:~a~ ~a~ ~n~Spare yourself the wrath of Kraff, for it will not spare you! */;
	Local_68[4 /*3*/] = 5;
	Local_68[4 /*3*/].f_1 = "EPS_GMAIL_G1" /* GXT: Kifflom Brother,~n~~n~One of our highest thesis holders has requested this vehicle:~a~ ~n~Prove to us that you are ready to understand the technology of your existence with this act of selflessness.~n~~n~Kraff be praised! */;
	Local_68[4 /*3*/].f_2 = "EPS_BMAIL_G1" /* GXT: Brother,~n~~n~Cris demands that you deliver this vehicle as a sign of your commitment to the divine truth:~a~ ~n~What would you rather do?  Carry out this simple task or die without ever knowing your eternal self?  The choice is yours.~n~~n~Kraff be praised! */;
}

void func_94()//Position - 0x395A
{
	int iVar0;
	
	iLocal_97 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		MISC::SET_BIT(&iLocal_97, iVar0);
		iVar0++;
	}
}

int func_95(int iParam0)//Position - 0x397F
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

void func_96()//Position - 0x39AC
{
	int iVar0;
	
	func_60(&iLocal_90);
	func_83(0);
	func_74();
	func_73(&Local_41);
	Global_113969.f_10052.f_103 = iLocal_97;
	if (func_92() || func_95(90) == 1)
	{
		func_98(90, 1);
		func_97(6);
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-683.4503f, 492.99225f, 108.873665f, -688.8357f, 506.99966f, 112.19278f, 11.25f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_107[0 /*3*/], Local_107[1 /*3*/], 8.25f, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_116, false);
	if (iLocal_282 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_282);
		iLocal_282 = 0;
	}
	STATS::STAT_GET_INT(joaat("NUM_EPSILON_STEP"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		STATS::STAT_SET_INT(joaat("NUM_EPSILON_STEP"), (6 + func_3()), true);
		func_20(23, (6 + func_3()));
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_97(int iParam0)//Position - 0x3A89
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
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_98(int iParam0, int iParam1)//Position - 0x3AE0
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113969.f_9088.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113969.f_9088.f_99.f_58[iParam0] = iParam1;
}

