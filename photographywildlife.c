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
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
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
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_84 = 20;
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
	int* iLocal_205 = NULL;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int* iLocal_208 = NULL;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	bool bLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	struct<3> Local_218 = { 0, 0, 0 } ;
	struct<3> Local_219 = { 0, 0, 0 } ;
	struct<3> Local_220 = { 0, 0, 0 } ;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
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
	Local_218 = { 0f, 0f, 0f };
	Local_219 = { Local_218 };
	Local_220 = { Local_218 };
	iLocal_223 = 3;
	iLocal_228 = 24818;
	iLocal_231 = 24816;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(178))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_82();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_81())
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (func_80(0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (func_79(14))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if ((!BitTest(Global_113386.f_10049.f_99, 0) && func_73() == 1) && !func_72())
		{
			func_1();
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1()//Position - 0xF8
{
	switch (iLocal_221)
	{
		case 0:
			func_46();
			func_42();
			func_32();
			func_30();
			func_21();
			if (BitTest(Global_113386.f_10049.f_99, 1) && !bLocal_214)
			{
				iLocal_221++;
			}
			break;
		
		case 1:
			if (func_17(&iLocal_208) > 5f)
			{
				if (!BitTest(Global_113386.f_10049.f_99, 3))
				{
					func_14(28, iLocal_83[20], 1);
					func_7(28);
					MISC::SET_BIT(&(Global_113386.f_10049.f_99), 3);
					func_5(63, 1);
					iLocal_221++;
				}
			}
			break;
		
		case 2:
			if (func_3(63))
			{
				iLocal_221++;
			}
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_113386.f_10049.f_99), 0);
			func_2();
			break;
	}
}

int func_2()//Position - 0x1C5
{
	if (func_80(0))
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

bool func_3(int iParam0)//Position - 0x210
{
	return func_4(iParam0, 0);
}

int func_4(int iParam0, int iParam1)//Position - 0x21F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_5(int iParam0, bool bParam1)//Position - 0x23F
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_4(iParam0, 0))
		{
			func_6(iParam0, 1, 0);
			func_6(iParam0, 2, 0);
			func_6(iParam0, 3, 0);
			func_6(iParam0, 4, 0);
			func_6(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_6(iParam0, 0, 0);
	}
}

void func_6(int iParam0, int iParam1, bool bParam2)//Position - 0x29C
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
	}
}

void func_7(int iParam0)//Position - 0x2D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53557[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_53557[iVar0 /*203*/].f_9 - 1);
	if (!Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_12(Global_44257[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_8(1, Global_44257[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_44257[iVar1 /*12*/].f_3)
		{
			case 0:
				func_8(0, Global_44257[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_8(1, Global_44257[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_8(2, Global_44257[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_8(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x643
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_73();
	bVar1 = false;
	StringCopy(&cVar2, func_11(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
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
			func_9(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::_GET_LABEL_TEXT(func_10(iParam1)), 0));
		}
		else
		{
			func_9(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::_GET_LABEL_TEXT(func_10(iParam1)), 0));
		}
		switch (Global_20266)
		{
			case 0:
				StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
				Global_44249++;
				if (Global_44249 > 16)
				{
					Global_44249 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
				Global_44251++;
				if (Global_44251 > 16)
				{
					Global_44251 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
				Global_44250++;
				if (Global_44250 > 16)
				{
					Global_44250 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20255, true);
	}
}

void func_9(int iParam0)//Position - 0x821
{
	Global_44252[Global_44256] = iParam0;
	Global_22663 = 1;
	Global_22662 = iParam0;
	Global_44256++;
	if (Global_44256 == 3)
	{
		Global_44256 = 0;
	}
}

char* func_10(int iParam0)//Position - 0x84F
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_11(int iParam0, int iParam1)//Position - 0xBB4
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[0 /*29*/].f_7));
		
		case 1:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[1 /*29*/].f_7));
		
		case 2:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[2 /*29*/].f_7));
		
		case 7:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[12 /*29*/].f_7));
		
		case 4:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[60 /*29*/].f_7));
		
		case 6:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[62 /*29*/].f_7));
		
		case 3:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[14 /*29*/].f_7));
		
		case 16:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[97 /*29*/].f_7));
		
		case 19:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[99 /*29*/].f_7));
		
		case 15:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[96 /*29*/].f_7));
		
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
			return HUD::_GET_LABEL_TEXT(&(Global_1998[15 /*29*/].f_7));
		
		case 26:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[30 /*29*/].f_7));
		
		case 27:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[17 /*29*/].f_7));
		
		case 29:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[20 /*29*/].f_7));
		
		case 30:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[43 /*29*/].f_7));
		
		case 31:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[44 /*29*/].f_7));
		
		case 32:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[19 /*29*/].f_7));
		
		case 34:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[40 /*29*/].f_7));
		
		case 36:
			return HUD::_GET_LABEL_TEXT("CELL_E_381");
		
		case 38:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[64 /*29*/].f_7));
		
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
			return HUD::_GET_LABEL_TEXT(&(Global_1998[122 /*29*/].f_7));
		
		case 40:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[125 /*29*/].f_7));
		
		case 41:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[113 /*29*/].f_7));
		
		case 42:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[126 /*29*/].f_7));
		
		case 43:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[127 /*29*/].f_7));
		
		case 44:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[124 /*29*/].f_7));
		
		case 45:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[114 /*29*/].f_7));
		
		case 46:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[115 /*29*/].f_7));
		
		case 47:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[116 /*29*/].f_7));
		
		case 48:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[123 /*29*/].f_7));
		
		case 49:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[117 /*29*/].f_7));
		
		case 50:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[118 /*29*/].f_7));
		
		case 51:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[119 /*29*/].f_7));
		
		case 52:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[120 /*29*/].f_7));
		
		case 53:
			return HUD::_GET_LABEL_TEXT(&(Global_1998[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_12(int iParam0)//Position - 0xF7F
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_13(int iParam0)//Position - 0xFB0
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
		if (Global_53557[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_53557[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_53557[iVar0 /*203*/].f_1;
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

int func_14(int iParam0, int iParam1, bool bParam2)//Position - 0x1014
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_16(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_53557[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_53557[iVar0 /*203*/].f_2 = iParam0;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_53557[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53557[iVar0 /*203*/].f_4[iVar1] == Global_44257[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53557[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53557[iVar0 /*203*/].f_4[Global_53557[iVar0 /*203*/].f_3] = Global_44257[iParam1 /*12*/].f_3;
			Global_53557[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53557[iVar0 /*203*/].f_4[iVar1] == Global_44257[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53557[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53557[iVar0 /*203*/].f_4[Global_53557[iVar0 /*203*/].f_3] = Global_44257[iParam1 /*12*/].f_2;
			Global_53557[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_53557[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_15(Global_53557[iVar0 /*203*/].f_4[iVar1], Global_53557[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1210
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_47582[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_47582[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_12(Global_44257[iVar5 /*12*/].f_1) };
		if (Global_44257[iVar5 /*12*/].f_2 == iParam0 && !Global_44257[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_44257[iVar5 /*12*/].f_2;
		iVar0 = Global_53195[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_53195[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44249 = (Global_44249 - 1);
						if (Global_44249 < 0)
						{
							Global_44249 = 0;
						}
						break;
					
					case 1:
						Global_44250 = (Global_44250 - 1);
						if (Global_44250 < 0)
						{
							Global_44250 = 0;
						}
						break;
					
					case 2:
						Global_44251 = (Global_44251 - 1);
						if (Global_44251 < 0)
						{
							Global_44251 = 0;
						}
						break;
					}
				}
		}
		Global_53195[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_53195[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_53195[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53195[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_53195[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_53195[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44249 = (Global_44249 - 1);
						if (Global_44249 < 0)
						{
							Global_44249 = 0;
						}
						break;
					
					case 1:
						Global_44250 = (Global_44250 - 1);
						if (Global_44250 < 0)
						{
							Global_44250 = 0;
						}
						break;
					
					case 2:
						Global_44251 = (Global_44251 - 1);
						if (Global_44251 < 0)
						{
							Global_44251 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_53557[iVar9 /*203*/].f_1 == iParam1 && Global_53557[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_53195[iParam0 /*120*/].f_18[iVar0] = Global_53557[iVar8 /*203*/].f_1;
		Global_53195[iParam0 /*120*/].f_1[iVar0] = (Global_53557[iVar8 /*203*/].f_9 - 1);
		Global_53195[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_53195[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53195[iParam0 /*120*/]++;
		iVar10 = Global_53195[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_53557[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_44257[iVar11 /*12*/].f_2;
		if (Global_53557[iVar8 /*203*/].f_10[(Global_53557[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53557[iVar8 /*203*/].f_10[(Global_53557[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_12(Global_44257[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_53195[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_8(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_8(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_8(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_8(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_16(int iParam0, bool bParam1)//Position - 0x15E3
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
	
	iVar0 = func_13(iParam0);
	if (iVar0 > -1)
	{
		if (Global_53557[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53557[iVar1 /*203*/] == 0)
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
		if (Global_53557[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_53557[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_53557[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_53557[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_53557[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_53557[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_53195[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_53195[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_53195[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_53195[iVar6 /*120*/].f_18[iVar8] == Global_53557[iVar4 /*203*/].f_1)
							{
								if (Global_53195[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_44249 = (Global_44249 - 1);
											break;
										
										case 1:
											Global_44250 = (Global_44250 - 1);
											break;
										
										case 2:
											Global_44251 = (Global_44251 - 1);
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
	Global_53557[iVar4 /*203*/].f_2 = iParam0;
	Global_53557[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_53557[iVar4 /*203*/] = 1;
	}
	Global_113386.f_21037.f_310++;
	if (Global_113386.f_21037.f_310 == 0)
	{
		Global_113386.f_21037.f_310 = 1;
	}
	Global_53557[iVar4 /*203*/].f_1 = Global_113386.f_21037.f_310;
	Global_53557[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

float func_17(int* iParam0)//Position - 0x17FB
{
	if (func_20(iParam0))
	{
		if (func_19(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_18(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

float func_18(bool bParam0)//Position - 0x1834
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

bool func_19(var uParam0)//Position - 0x188C
{
	return BitTest(*uParam0, 2);
}

bool func_20(var uParam0)//Position - 0x1899
{
	return BitTest(*uParam0, 1);
}

void func_21()//Position - 0x18A6
{
	switch (iLocal_81)
	{
		case 0:
			if (bLocal_214)
			{
				if (!func_29())
				{
					iLocal_211 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_211))
					{
						SYSTEM::WAIT(0);
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_211, "SHOW_BRIDGES_KNIVES_PROGRESS");
					func_28("PW_TITLE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
					func_28("PW_PASS");
					func_28("PW_CHALLENGE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_26());
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_222 = func_26();
					Global_32195 = iLocal_222;
					SYSTEM::SETTIMERB(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
				}
				iLocal_81 = 1;
			}
			break;
		
		case 1:
			if ((((((SYSTEM::TIMERB() > 7500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_29()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_25()) || func_24())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_211, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				SYSTEM::SETTIMERB(0);
				iLocal_81 = 2;
			}
			else
			{
				func_23();
				if (Global_32195 > iLocal_222)
				{
					iLocal_81 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((SYSTEM::TIMERB() > 500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_29()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_25()) || func_24())
			{
				iLocal_81 = 3;
			}
			else
			{
				func_23();
				if (Global_32195 > iLocal_222)
				{
					iLocal_81 = 3;
				}
			}
			break;
		
		case 3:
			func_22();
			bLocal_214 = false;
			iLocal_81 = 0;
			break;
	}
}

void func_22()//Position - 0x1A50
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_211))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_211);
	}
}

void func_23()//Position - 0x1A67
{
	if (!func_29())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_211))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_211, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_24()//Position - 0x1A99
{
	if (Global_43052 == 9 || Global_43052 == 10)
	{
		return Global_112036;
	}
	Global_112036 = 0;
	return 0;
}

int func_25()//Position - 0x1AC6
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

int func_26()//Position - 0x1B04
{
	int iVar0;
	
	iVar0 = func_27();
	if (iVar0 == 20)
	{
		MISC::SET_BIT(&(Global_113386.f_10049.f_99), 1);
	}
	return iVar0;
}

int func_27()//Position - 0x1B29
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (bVar1 > 3)
		{
			if (BitTest(Global_113386.f_10049.f_99, bVar1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	if (iVar0 > 20)
	{
		iVar0 = 20;
	}
	return iVar0;
}

void func_28(char* sParam0)//Position - 0x1B6C
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_29()//Position - 0x1B7E
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

void func_30()//Position - 0x1BA8
{
	if (func_31() && !iLocal_216)
	{
		iLocal_216 = 1;
		iLocal_79 = 7;
	}
	if (!func_31() && iLocal_216)
	{
		iLocal_216 = 0;
	}
}

int func_31()//Position - 0x1BD7
{
	if (Global_20251)
	{
		return 1;
	}
	return 0;
}

void func_32()//Position - 0x1BED
{
	if (func_17(&iLocal_205) > 3f)
	{
		func_37(0);
		func_36(&iLocal_205, 0f);
		func_35(&iLocal_205);
	}
	if ((func_17(&iLocal_205) <= 3f && func_34(0)) && func_33(PLAYER::PLAYER_PED_ID()))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(0, 177) || (PAD::IS_CONTROL_JUST_PRESSED(0, 24) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))) || (func_31() && !iLocal_216))
		{
			func_36(&iLocal_205, 0f);
			func_35(&iLocal_205);
		}
	}
}

int func_33(int iParam0)//Position - 0x1C79
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

int func_34(int iParam0)//Position - 0x1C9A
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

void func_35(int* iParam0)//Position - 0x1CF1
{
	if (func_20(iParam0))
	{
		if (!func_19(iParam0))
		{
			iParam0->f_2 = (func_18(BitTest(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

void func_36(int* iParam0, float fParam1)//Position - 0x1D28
{
	iParam0->f_1 = (func_18(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_37(int iParam0)//Position - 0x1D53
{
	if (func_41())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_40())
		{
			func_39(1, 1);
		}
		else
		{
			func_39(0, 0);
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
	if (!func_38())
	{
		Global_20266.f_1 = 3;
	}
}

int func_38()//Position - 0x1DDD
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_39(bool bParam0, bool bParam1)//Position - 0x1E04
{
	if (bParam0)
	{
		if (func_34(0))
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

bool func_40()//Position - 0x1E78
{
	return BitTest(Global_1958711, 5);
}

bool func_41()//Position - 0x1E86
{
	return BitTest(Global_1958711, 19);
}

void func_42()//Position - 0x1E95
{
	if (iLocal_217)
	{
		if ((func_17(&iLocal_208) > 5f && func_45() >= 1) && !BitTest(Global_113386.f_10049.f_99, 1))
		{
			switch (iLocal_224)
			{
				case 0:
					func_14(28, iLocal_83[(20 - func_45())], 1);
					iLocal_225 = 0;
					iLocal_224++;
					break;
				
				case 1:
					if (iLocal_225 < 10)
					{
						func_43(28, func_44(iLocal_225));
						iLocal_225++;
					}
					else
					{
						iLocal_224++;
					}
					break;
				
				case 2:
					func_7(28);
					iLocal_224++;
					break;
				
				case 3:
					func_36(&iLocal_208, 0f);
					func_35(&iLocal_208);
					iLocal_217 = 0;
					iLocal_224 = 0;
					func_2();
					break;
				}
			}
	}
}

void func_43(int iParam0, char* sParam1)//Position - 0x1F55
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53557[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_53557[iVar0 /*203*/].f_10[(Global_53557[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_44(int iParam0)//Position - 0x200A
{
	switch (iParam0)
	{
		case 0:
			if (!BitTest(Global_113386.f_10049.f_99, 4) && !BitTest(Global_113386.f_10049.f_99, 29))
			{
				return "PW_STRING_1_1";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 4) && !BitTest(Global_113386.f_10049.f_99, 29))
			{
				return "PW_STRING_1_2";
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 4) && BitTest(Global_113386.f_10049.f_99, 29))
			{
				return "PW_STRING_1_3";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 4) && BitTest(Global_113386.f_10049.f_99, 29))
			{
				return "PW_STRING_1_4";
			}
			break;
		
		case 1:
			if (!BitTest(Global_113386.f_10049.f_99, 5) && !BitTest(Global_113386.f_10049.f_99, 6))
			{
				return "PW_STRING_2_1";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 5) && !BitTest(Global_113386.f_10049.f_99, 6))
			{
				return "PW_STRING_2_2";
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 5) && BitTest(Global_113386.f_10049.f_99, 6))
			{
				return "PW_STRING_2_3";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 5) && BitTest(Global_113386.f_10049.f_99, 6))
			{
				return "PW_STRING_2_4";
			}
			break;
		
		case 2:
			if (!BitTest(Global_113386.f_10049.f_99, 7) && !BitTest(Global_113386.f_10049.f_99, 8))
			{
				return "PW_STRING_3_1";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 7) && !BitTest(Global_113386.f_10049.f_99, 8))
			{
				return "PW_STRING_3_2";
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 7) && BitTest(Global_113386.f_10049.f_99, 8))
			{
				return "PW_STRING_3_3";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 7) && BitTest(Global_113386.f_10049.f_99, 8))
			{
				return "PW_STRING_3_4";
			}
			break;
		
		case 3:
			if (!BitTest(Global_113386.f_10049.f_99, 9) && !BitTest(Global_113386.f_10049.f_99, 10))
			{
				return "PW_STRING_4_1";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 9) && !BitTest(Global_113386.f_10049.f_99, 10))
			{
				return "PW_STRING_4_2";
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 9) && BitTest(Global_113386.f_10049.f_99, 10))
			{
				return "PW_STRING_4_3";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 9) && BitTest(Global_113386.f_10049.f_99, 10))
			{
				return "PW_STRING_4_4";
			}
			break;
		
		case 4:
			if (!BitTest(Global_113386.f_10049.f_99, 11) && !BitTest(Global_113386.f_10049.f_99, 14))
			{
				return "PW_STRING_5_1";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 11) && !BitTest(Global_113386.f_10049.f_99, 14))
			{
				return "PW_STRING_5_2";
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 11) && BitTest(Global_113386.f_10049.f_99, 14))
			{
				return "PW_STRING_5_3";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 11) && BitTest(Global_113386.f_10049.f_99, 14))
			{
				return "PW_STRING_5_4";
			}
			break;
		
		case 5:
			if (!BitTest(Global_113386.f_10049.f_99, 16) && !BitTest(Global_113386.f_10049.f_99, 18))
			{
				return "PW_STRING_6_1";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 16) && !BitTest(Global_113386.f_10049.f_99, 18))
			{
				return "PW_STRING_6_2";
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 16) && BitTest(Global_113386.f_10049.f_99, 18))
			{
				return "PW_STRING_6_3";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 16) && BitTest(Global_113386.f_10049.f_99, 18))
			{
				return "PW_STRING_6_4";
			}
			break;
		
		case 6:
			if (!BitTest(Global_113386.f_10049.f_99, 19) && !BitTest(Global_113386.f_10049.f_99, 21))
			{
				return "PW_STRING_7_1";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 19) && !BitTest(Global_113386.f_10049.f_99, 21))
			{
				return "PW_STRING_7_2";
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 19) && BitTest(Global_113386.f_10049.f_99, 21))
			{
				return "PW_STRING_7_3";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 19) && BitTest(Global_113386.f_10049.f_99, 21))
			{
				return "PW_STRING_7_4";
			}
			break;
		
		case 7:
			if (!BitTest(Global_113386.f_10049.f_99, 22) && !BitTest(Global_113386.f_10049.f_99, 23))
			{
				return "PW_STRING_8_1";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 22) && !BitTest(Global_113386.f_10049.f_99, 23))
			{
				return "PW_STRING_8_2";
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 22) && BitTest(Global_113386.f_10049.f_99, 23))
			{
				return "PW_STRING_8_3";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 22) && BitTest(Global_113386.f_10049.f_99, 23))
			{
				return "PW_STRING_8_4";
			}
			break;
		
		case 8:
			if (!BitTest(Global_113386.f_10049.f_99, 24) && !BitTest(Global_113386.f_10049.f_99, 25))
			{
				return "PW_STRING_9_1";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 24) && !BitTest(Global_113386.f_10049.f_99, 25))
			{
				return "PW_STRING_9_2";
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 24) && BitTest(Global_113386.f_10049.f_99, 25))
			{
				return "PW_STRING_9_3";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 24) && BitTest(Global_113386.f_10049.f_99, 25))
			{
				return "PW_STRING_9_4";
			}
			break;
		
		case 9:
			if (!BitTest(Global_113386.f_10049.f_99, 26) && !BitTest(Global_113386.f_10049.f_99, 31))
			{
				return "PW_STRING_10_1";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 26) && !BitTest(Global_113386.f_10049.f_99, 31))
			{
				return "PW_STRING_10_2";
			}
			else if (!BitTest(Global_113386.f_10049.f_99, 26) && BitTest(Global_113386.f_10049.f_99, 31))
			{
				return "PW_STRING_10_3";
			}
			else if (BitTest(Global_113386.f_10049.f_99, 26) && BitTest(Global_113386.f_10049.f_99, 31))
			{
				return "PW_STRING_10_4";
			}
			break;
	}
	return "PW_STRING_NONE";
}

int func_45()//Position - 0x2701
{
	return (20 - func_27());
}

void func_46()//Position - 0x2710
{
	switch (iLocal_79)
	{
		case 0:
			if (func_71())
			{
				if ((!func_70() && Global_4539953 == 0) && Global_4539954 == 0)
				{
					iLocal_79 = 1;
				}
			}
			break;
		
		case 1:
			iLocal_212 = func_65(&iLocal_213, 60f, iLocal_226, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_227, iLocal_228);
			if (iLocal_212 == 0)
			{
				iLocal_212 = func_65(&iLocal_213, 60f, iLocal_229, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_230, iLocal_231);
				if (iLocal_212 == 0)
				{
					iLocal_79 = 7;
				}
				else
				{
					iLocal_79 = 4;
				}
			}
			else
			{
				iLocal_79 = 4;
			}
			break;
		
		case 4:
			if (!func_64(iLocal_213))
			{
				func_63(1);
				iLocal_79 = 5;
			}
			else
			{
				if (!iLocal_215)
				{
				}
				else
				{
					iLocal_215 = 0;
				}
				iLocal_79 = 7;
			}
			break;
		
		case 5:
			switch (iLocal_80)
			{
				case 0:
					func_62("PW_HELP_1", -1);
					if (func_61())
					{
						if (func_34(0))
						{
							func_60(99);
							if (func_59("PW_HELP_1"))
							{
								HUD::CLEAR_THIS_PRINT("PW_HELP_1");
							}
							iLocal_80 = 1;
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 176) || PAD::IS_CONTROL_JUST_PRESSED(0, 178))
					{
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_1"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_1");
						}
						iLocal_79 = 7;
					}
					break;
				
				case 1:
					func_62("PW_HELP_2", -1);
					if (func_55(99))
					{
						iLocal_80 = 0;
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_2"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_2");
						}
						iLocal_79 = 6;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 177))
					{
						iLocal_80 = 0;
						func_63(0);
						func_57(99);
						if (func_59("PW_HELP_2"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_2");
						}
						iLocal_79 = 7;
					}
					break;
			}
			break;
		
		case 6:
			func_54(iLocal_213);
			func_51(iLocal_82);
			STATS::STAT_SET_INT(joaat("num_hidden_packages_7"), func_27(), true);
			bLocal_214 = true;
			func_48(&iLocal_205);
			func_48(&iLocal_208);
			iLocal_217 = 1;
			iLocal_79 = 7;
			break;
		
		case 7:
			func_47();
			iLocal_79 = 8;
			break;
		
		case 8:
			if (!func_71())
			{
				iLocal_79 = 0;
			}
			break;
	}
}

void func_47()//Position - 0x2952
{
	iLocal_80 = 0;
	iLocal_82 = 0;
	iLocal_212 = 0;
	iLocal_213 = 0;
	iLocal_215 = 0;
	Local_219 = { Local_218 };
	Local_220 = { Local_218 };
	func_63(0);
	func_57(99);
	if (func_59("PW_HELP_1"))
	{
		HUD::CLEAR_THIS_PRINT("PW_HELP_1");
	}
	if (func_59("PW_HELP_2"))
	{
		HUD::CLEAR_THIS_PRINT("PW_HELP_2");
	}
}

void func_48(int* iParam0)//Position - 0x29AB
{
	if (!func_20(iParam0))
	{
		func_50(iParam0);
	}
	else
	{
		func_49(iParam0);
	}
}

void func_49(int* iParam0)//Position - 0x29CC
{
	func_36(iParam0, 0f);
}

void func_50(int* iParam0)//Position - 0x29DB
{
	if (!func_20(iParam0))
	{
		func_49(iParam0);
	}
}

void func_51(int iParam0)//Position - 0x29F3
{
	int iVar0;
	
	iVar0 = func_53(92);
	Global_2676732[iVar0 /*83*/] = 92;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_1), func_52(iParam0), 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

char* func_52(int iParam0)//Position - 0x2A32
{
	switch (iParam0)
	{
		case 0:
			return "";
		
		case 1:
			return "AF_BOAR";
		
		case 2:
			return "AF_BORDERCOLLIE";
		
		case 3:
			return "AF_CAT";
		
		case 4:
			return "AF_CHICKENHAWK";
		
		case 5:
			return "AF_CORMORANT";
		
		case 6:
			return "AF_COW";
		
		case 7:
			return "AF_COYOTE";
		
		case 8:
			return "AF_CROW";
		
		case 9:
			return "AF_DEER";
		
		case 10:
			return "AF_HEN";
		
		case 11:
			return "AF_HUSKY";
		
		case 12:
			return "AF_MOUNT_LION";
		
		case 13:
			return "AF_PIG";
		
		case 14:
			return "AF_RABBIT";
		
		case 15:
			return "AF_POODLE";
		
		case 16:
			return "AF_PUG";
		
		case 17:
			return "AF_RETRIEVER";
		
		case 18:
			return "AF_ROTTWEILER";
		
		case 19:
			return "AF_SEAGULL";
		
		case 20:
			return "AF_WESTIE";
		
		default:
	}
	return "";
}

int func_53(int iParam0)//Position - 0x2B56
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2676732[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2676732[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_54(int iParam0)//Position - 0x2BA3
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!BitTest(Global_113386.f_10049.f_99, 4))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 4);
				iLocal_82 = 1;
			}
			break;
		
		case joaat("a_c_cat_01"):
			if (!BitTest(Global_113386.f_10049.f_99, 5))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 5);
				iLocal_82 = 3;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!BitTest(Global_113386.f_10049.f_99, 6))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 6);
				iLocal_82 = 4;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!BitTest(Global_113386.f_10049.f_99, 7))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 7);
				iLocal_82 = 5;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!BitTest(Global_113386.f_10049.f_99, 8))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 8);
				iLocal_82 = 6;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!BitTest(Global_113386.f_10049.f_99, 9))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 9);
				iLocal_82 = 7;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!BitTest(Global_113386.f_10049.f_99, 10))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 10);
				iLocal_82 = 8;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!BitTest(Global_113386.f_10049.f_99, 11))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 11);
				iLocal_82 = 9;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!BitTest(Global_113386.f_10049.f_99, 14))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 14);
				iLocal_82 = 10;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!BitTest(Global_113386.f_10049.f_99, 16))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 16);
				iLocal_82 = 11;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!BitTest(Global_113386.f_10049.f_99, 18))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 18);
				iLocal_82 = 12;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!BitTest(Global_113386.f_10049.f_99, 19))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 19);
				iLocal_82 = 13;
			}
			break;
		
		case joaat("a_c_poodle"):
			if (!BitTest(Global_113386.f_10049.f_99, 21))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 21);
				iLocal_82 = 15;
			}
			break;
		
		case joaat("a_c_pug"):
			if (!BitTest(Global_113386.f_10049.f_99, 22))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 22);
				iLocal_82 = 16;
			}
			break;
		
		case joaat("a_c_rabbit_01"):
			if (!BitTest(Global_113386.f_10049.f_99, 23))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 23);
				iLocal_82 = 14;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!BitTest(Global_113386.f_10049.f_99, 24))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 24);
				iLocal_82 = 17;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!BitTest(Global_113386.f_10049.f_99, 25))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 25);
				iLocal_82 = 18;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!BitTest(Global_113386.f_10049.f_99, 26))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 26);
				iLocal_82 = 19;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!BitTest(Global_113386.f_10049.f_99, 29))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 29);
				iLocal_82 = 2;
			}
			break;
		
		case joaat("a_c_westy"):
			if (!BitTest(Global_113386.f_10049.f_99, 31))
			{
				MISC::SET_BIT(&(Global_113386.f_10049.f_99), 31);
				iLocal_82 = 20;
			}
			break;
		
		default:
			break;
	}
}

int func_55(int iParam0)//Position - 0x2F58
{
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (func_56(iParam0) == 1)
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

int func_56(int iParam0)//Position - 0x2F87
{
	return Global_1998[iParam0 /*29*/].f_18;
}

int func_57(int iParam0)//Position - 0x2F98
{
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		func_58(iParam0, 0);
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1)//Position - 0x2FBD
{
	Global_1998[iParam0 /*29*/].f_18 = iParam1;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_18 = iParam1;
	}
}

bool func_59(char* sParam0)//Position - 0x2FE6
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_60(int iParam0)//Position - 0x2FF9
{
	Global_20461 = iParam0;
}

int func_61()//Position - 0x3006
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_62(char* sParam0, int iParam1)//Position - 0x3023
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_63(bool bParam0)//Position - 0x303A
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_8136, 28);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 28);
	}
}

int func_64(int iParam0)//Position - 0x305C
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!BitTest(Global_113386.f_10049.f_99, 4))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cat_01"):
			if (!BitTest(Global_113386.f_10049.f_99, 5))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!BitTest(Global_113386.f_10049.f_99, 6))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!BitTest(Global_113386.f_10049.f_99, 7))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!BitTest(Global_113386.f_10049.f_99, 8))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!BitTest(Global_113386.f_10049.f_99, 9))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!BitTest(Global_113386.f_10049.f_99, 10))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!BitTest(Global_113386.f_10049.f_99, 11))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!BitTest(Global_113386.f_10049.f_99, 14))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!BitTest(Global_113386.f_10049.f_99, 16))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!BitTest(Global_113386.f_10049.f_99, 18))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!BitTest(Global_113386.f_10049.f_99, 19))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_poodle"):
			if (!BitTest(Global_113386.f_10049.f_99, 21))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pug"):
			if (!BitTest(Global_113386.f_10049.f_99, 22))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rabbit_01"):
			if (!BitTest(Global_113386.f_10049.f_99, 23))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!BitTest(Global_113386.f_10049.f_99, 24))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!BitTest(Global_113386.f_10049.f_99, 25))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!BitTest(Global_113386.f_10049.f_99, 26))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!BitTest(Global_113386.f_10049.f_99, 29))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_westy"):
			if (!BitTest(Global_113386.f_10049.f_99, 31))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		default:
			iLocal_215 = 1;
			break;
	}
	return 1;
}

int func_65(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9)//Position - 0x3344
{
	int iVar0;
	float fVar1;
	
	iVar0 = CAM::GET_FOCUS_PED_ON_SCREEN(fParam1, iParam2, fParam3, fParam4, fParam5, fParam6, fParam7, iParam8, iParam9);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (iVar0 != 0 && func_33(iVar0))
	{
		if (PED::GET_PED_TYPE(iVar0) == 28)
		{
			if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				*iParam0 = ENTITY::GET_ENTITY_MODEL(iVar0);
				if (func_69(iVar0, 31086))
				{
					fVar1 = func_68(PLAYER::PLAYER_PED_ID(), iVar0, 1);
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), iVar0))
					{
					}
					if (func_67(*iParam0))
					{
						if (fVar1 <= IntToFloat(func_66(*iParam0)))
						{
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (fVar1 <= IntToFloat(func_66(*iParam0)))
					{
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_66(int iParam0)//Position - 0x3415
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_cat_01"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_chickenhawk"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cormorant"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cow"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_coyote"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_crow"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_deer"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_hen"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_husky"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_mtlion"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pig"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pigeon"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_poodle"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pug"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rabbit_01"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_retriever"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_seagull"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_shepherd"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_westy"):
			iVar0 = 30;
			break;
		
		default:
			iVar0 = 30;
			break;
	}
	return iVar0;
}

int func_67(int iParam0)//Position - 0x3544
{
	switch (iParam0)
	{
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

float func_68(int iParam0, int iParam1, bool bParam2)//Position - 0x3582
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

int func_69(int iParam0, int iParam1)//Position - 0x35E0
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	Local_220 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, iParam1)) };
	if (iLocal_213 == joaat("a_c_rabbit_01") || iLocal_213 == joaat("a_c_rat"))
	{
		Local_219 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24816)) };
	}
	else
	{
		Local_219 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24818)) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_219, &fVar0, &fVar1);
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_220, &fVar2, &fVar3);
	if ((((fVar0 >= 0.05f && fVar0 <= 0.95f) && (fVar2 >= 0.05f && fVar2 <= 0.95f)) && (fVar1 >= 0.05f && fVar1 <= 0.95f)) && (fVar3 >= 0.05f && fVar3 <= 0.95f))
	{
		return 1;
	}
	return 0;
}

int func_70()//Position - 0x36CD
{
	if (BitTest(Global_8138, 3))
	{
		return 1;
	}
	return 0;
}

int func_71()//Position - 0x36E5
{
	if (Global_22641)
	{
		return 1;
	}
	return 0;
}

int func_72()//Position - 0x36FB
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3a")) > 0)
	{
		return 1;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_73()//Position - 0x3726
{
	func_74();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_74()//Position - 0x373F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_77(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_76(PLAYER::PLAYER_PED_ID());
			if (func_75(iVar0) && (!func_79(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_75(Global_113386.f_2363.f_539.f_4321))
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

bool func_75(int iParam0)//Position - 0x383C
{
	return iParam0 < 3;
}

int func_76(int iParam0)//Position - 0x3848
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_77(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_77(int iParam0)//Position - 0x3885
{
	if (func_75(iParam0))
	{
		return func_78(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_78(int iParam0)//Position - 0x38AA
{
	return Global_1998[iParam0 /*29*/];
}

bool func_79(int iParam0)//Position - 0x38B9
{
	return Global_43052 == iParam0;
}

int func_80(bool bParam0)//Position - 0x38C7
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_81()//Position - 0x38EF
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

void func_82()//Position - 0x39A7
{
	if (!BitTest(Global_113386.f_10049.f_99, 2))
	{
		MISC::SET_BIT(&(Global_113386.f_10049.f_99), 2);
	}
	iLocal_221 = 0;
	iLocal_216 = func_31();
	iLocal_83[0] = 249;
	iLocal_83[1] = 250;
	iLocal_83[2] = 251;
	iLocal_83[3] = 252;
	iLocal_83[4] = 253;
	iLocal_83[5] = 254;
	iLocal_83[6] = 255;
	iLocal_83[7] = 256;
	iLocal_83[8] = 257;
	iLocal_83[9] = 258;
	iLocal_83[10] = 259;
	iLocal_83[11] = 260;
	iLocal_83[12] = 261;
	iLocal_83[13] = 262;
	iLocal_83[14] = 263;
	iLocal_83[15] = 264;
	iLocal_83[16] = 265;
	iLocal_83[17] = 266;
	iLocal_83[18] = 267;
	iLocal_83[19] = 268;
	iLocal_83[20] = 269;
}

