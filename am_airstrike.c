#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
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
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	var uLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_116(ScriptParam_241);
	}
	while (true)
	{
		func_115();
		if (func_107())
		{
			func_103();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_102();
			switch (func_101(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_100() > 0)
					{
						Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 2;
					}
					break;
				
				case 2:
					func_99();
					if (func_100() == 3)
					{
						Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_103();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_100())
				{
					case 0:
						Local_238.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x129
{
	switch (Local_238.f_1)
	{
		case 0:
			func_53();
			break;
		
		case 1:
			func_52();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_238.f_0 = 3;
	}
	func_45();
	if (Local_238.f_53 && Local_238.f_50 < 10)
	{
		func_13();
	}
	if (Local_238.f_50 >= 10)
	{
		if (!func_12(&uLocal_65))
		{
			func_11(&uLocal_65, 0, 0);
		}
		else if (func_10(&uLocal_65, 10000, 0))
		{
			Local_238.f_0 = 3;
		}
	}
	if (func_9())
	{
		Local_238.f_0 = 3;
	}
	if (!BitTest(Global_44241, 10))
	{
		if (Local_238.f_55 == 1)
		{
			if (!Local_238.f_56)
			{
				if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_8("AIRSTRIKE_1")) || func_8("AIRSTRIKE_2")) || func_8("AIRSTRIKE_4"))
				{
					func_7("AIRSTRIKE_3", -1);
					Local_238.f_56 = 1;
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_4(PLAYER::PLAYER_ID(), 1, 0))
		{
			Local_238.f_0 = 3;
		}
	}
	else if (func_4(PLAYER::PLAYER_ID(), 1, 0) || func_3())
	{
		Local_238.f_0 = 3;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		Local_238.f_0 = 3;
	}
	if (Global_2788199.f_224 || func_2(PLAYER::PLAYER_ID()))
	{
		Local_238.f_0 = 3;
	}
}

int func_2(int iParam0)//Position - 0x26A
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

var func_3()//Position - 0x2D6
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 0);
}

int func_4(int iParam0, bool bParam1, bool bParam2)//Position - 0x2EF
{
	if (bParam1)
	{
		if (func_5(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)//Position - 0x321
{
	return func_6(iParam0);
}

var func_6(int iParam0)//Position - 0x32F
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

void func_7(char* sParam0, int iParam1)//Position - 0x346
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_8(char* sParam0)//Position - 0x35D
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_9()//Position - 0x370
{
	return Global_1574582;
}

int func_10(var uParam0, int iParam1, bool bParam2)//Position - 0x37C
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

void func_11(var uParam0, bool bParam1, bool bParam2)//Position - 0x3DA
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

bool func_12(var uParam0)//Position - 0x41F
{
	return uParam0->f_1;
}

void func_13()//Position - 0x42B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar3 = 200;
	if (BitTest(Global_44241, 10))
	{
		iVar0 = 0;
		iVar3 = 300;
	}
	if (func_44(Local_61))
	{
		if (func_42(Local_238.f_2))
		{
			Local_61 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_238.f_2), true) };
			Local_61.f_2 = (Local_61.f_2 - 5f);
		}
	}
	switch (Local_238.f_50)
	{
		case 0:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), PLAYER::PLAYER_PED_ID(), true, false, -1f, iVar0, true, true, 0, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					iLocal_57 = 1;
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
					if (func_41())
					{
						if (func_38())
						{
							func_15(&uLocal_69, "HS4FAUD", "HS4F_SAAIP1", 12, 0, 0, 0);
						}
					}
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 1:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 2:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 3:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 4:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 5:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 6:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 7:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 8:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 9:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					Local_238.f_50++;
					iLocal_57 = 0;
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			break;
	}
}

void func_14(var uParam0)//Position - 0xE26
{
	uParam0->f_1 = 0;
}

int func_15(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE33
{
	func_37(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_16(sParam2, iParam3, 0);
}

int func_16(char* sParam0, int iParam1, bool bParam2)//Position - 0xE81
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
					func_36();
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
		if (func_35(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_34();
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
				func_26();
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
				if (func_25())
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
			if (func_24())
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
			func_23();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_22();
		func_17();
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
		func_36();
	}
	return 0;
}

void func_17()//Position - 0x114F
{
	if (!func_18())
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

int func_18()//Position - 0x1186
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_21())
	{
		return 0;
	}
	if (func_19(PLAYER::PLAYER_ID()))
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

bool func_19(int iParam0)//Position - 0x11E9
{
	return func_20(iParam0, 20);
}

var func_20(int iParam0, int iParam1)//Position - 0x11F9
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_21()//Position - 0x1211
{
	return -1;
}

void func_22()//Position - 0x121A
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

void func_23()//Position - 0x124B
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

int func_24()//Position - 0x12E0
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_25()//Position - 0x1307
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

void func_26()//Position - 0x13A0
{
	if (func_33(14))
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
		Global_20266 = func_27();
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

var func_27()//Position - 0x1442
{
	func_28();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_28()//Position - 0x145B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_31(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_30(PLAYER::PLAYER_PED_ID());
			if (func_29(iVar0) && (!func_33(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_29(Global_113386.f_2363.f_539.f_4321))
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

bool func_29(int iParam0)//Position - 0x1558
{
	return iParam0 < 3;
}

int func_30(int iParam0)//Position - 0x1564
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)//Position - 0x15A1
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)//Position - 0x15C6
{
	return Global_1998[iParam0 /*29*/];
}

bool func_33(int iParam0)//Position - 0x15D5
{
	return Global_43052 == iParam0;
}

void func_34()//Position - 0x15E3
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

bool func_35(int iParam0, int iParam1)//Position - 0x163A
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

void func_36()//Position - 0x1672
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

void func_37(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x16C9
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

bool func_38()//Position - 0x171F
{
	return func_39(PLAYER::PLAYER_ID());
}

var func_39(int iParam0)//Position - 0x172F
{
	return func_40(&(Global_2689235[iParam0 /*453*/].f_434), 0);
}

var func_40(var uParam0, int iParam1)//Position - 0x1748
{
	return BitTest(*uParam0, iParam1);
}

int func_41()//Position - 0x1756
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (Global_21605 == 0)
	{
		if ((iVar0 - Global_22627) > 3000)
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() == 0)
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

int func_42(int iParam0)//Position - 0x1795
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_43(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x17B5
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_44(struct<3> Param0)//Position - 0x17EE
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_45()//Position - 0x1818
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	
	if (func_42(Local_238.f_2))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_238.f_2);
		Var2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
	}
	if (!iLocal_59)
	{
		if (!func_44(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
		{
			Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
		}
		else if (func_51(PLAYER::PLAYER_ID(), 1, 1))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	if (iLocal_58 && !BitTest(Global_44241, 10))
	{
		if (!iLocal_59)
		{
			if (func_42(Local_238.f_2))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_60, 75f, 75f, 1000f, false, true, 0))
				{
					fLocal_62 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var1, false);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3.75f);
		}
		iVar3 = SYSTEM::FLOOR(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 1;
		}
		if (fLocal_62 >= 0f)
		{
			func_46(iVar3, "AIRSTRIKE_2", -1, iVar4, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar4, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_46(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x193C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_50(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_49(6, iVar0);
		Global_1649593.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4041.f_183[iVar0] = iParam3;
		Global_1649593.f_4041.f_172[iVar0] = iParam2;
		Global_1649593.f_4041.f_260[iVar0] = iParam4;
		Global_1649593.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_4041.f_443[iVar0] = iParam7;
		Global_1649593.f_4041.f_454[iVar0] = fParam8;
		Global_1649593.f_4041.f_497[iVar0] = iParam9;
		Global_1649593.f_4041.f_508[iVar0] = iParam10;
		Global_1649593.f_4041.f_205[iVar0] = iParam11;
		Global_1649593.f_4041.f_216[iVar0] = iParam12;
		Global_1649593.f_4041.f_227[iVar0] = iParam13;
		Global_1649593.f_4041.f_238[iVar0] = iParam14;
		Global_1649593.f_4041.f_249[iVar0] = iParam15;
		Global_1649593.f_4041.f_519[iVar0] = iParam16;
		Global_1649593.f_4041.f_530[iVar0] = iParam17;
		Global_1649593.f_4041.f_541[iVar0] = iParam18;
		Global_1649593.f_4041.f_552[iVar0] = iParam19;
		Global_1649593.f_4041.f_563[iVar0] = iParam20;
		Global_1649593.f_4041.f_574[iVar0] = iParam21;
		Global_1649593.f_4041.f_585[iVar0] = iParam22;
		Global_1649593.f_4041.f_596[iVar0] = iParam23;
		Global_1649593.f_4041.f_607[iVar0] = iParam24;
		Global_1649593.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_48())
		{
			Global_1649593.f_1172 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1649593.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1649593.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1649593.f_1172 = 1;
			}
			if (func_47())
			{
				Global_1649593.f_1176 = 1;
			}
		}
	}
}

int func_47()//Position - 0x1BAD
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_48()//Position - 0x1BD1
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_49(int iParam0, int iParam1)//Position - 0x1C0F
{
	MISC::SET_BIT(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_50(int iParam0, int iParam1)//Position - 0x1C28
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

int func_51(int iParam0, bool bParam1, bool bParam2)//Position - 0x1C3E
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

void func_52()//Position - 0x1C9E
{
}

void func_53()//Position - 0x1CA6
{
	struct<3> Var0;
	bool bVar1;
	
	func_97();
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!iLocal_56 && !BitTest(Global_44241, 10))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) <= 0)
				{
					bVar1 = !func_96();
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_flare"), 1, bVar1, bVar1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_flare"), bVar1);
					iLocal_56 = 1;
				}
			}
			else if (BitTest(Global_44241, 10) || MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("weapon_flare"), 100f, &(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), true))
			{
				if (BitTest(Global_44241, 10))
				{
					Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				else if (func_95(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = { Var0 };
				}
				if (func_8("AIRSTRIKE_1"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!iLocal_55)
				{
					if (!func_94(Local_238.f_2.f_3))
					{
						if (func_42(Local_238.f_2))
						{
							func_93();
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_238.f_2.f_3));
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_238.f_2.f_3), iLocal_49);
							VEHICLE::SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_238.f_2), SYSTEM::ROUND(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54 && !BitTest(Global_44241, 10))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (func_92(PLAYER::PLAYER_PED_ID()))
					{
						func_7("AIRSTRIKE_4", -1);
					}
					else
					{
						func_7("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_63();
	func_54();
}

void func_54()//Position - 0x1E3B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_62();
			break;
		
		case 1:
			func_62();
			break;
		
		case 2:
			if (func_42(Local_238.f_2))
			{
				iLocal_58 = 1;
				iVar0 = NETWORK::NET_TO_VEH(Local_238.f_2);
				if (!HUD::DOES_BLIP_EXIST(iLocal_47))
				{
					iLocal_47 = HUD::ADD_BLIP_FOR_ENTITY(iVar0);
					HUD::SET_BLIP_SPRITE(iLocal_47, 16);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_47, func_60());
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_47, false);
				}
				else
				{
					HUD::SET_BLIP_ROTATION(iLocal_47, SYSTEM::CEIL(ENTITY::GET_ENTITY_HEADING(iVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_44(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
					{
						Var3 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					}
					else
					{
						Var3 = { Local_60 };
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(iVar0, true), true) <= (60f * 5f))
					{
						AUDIO::PLAY_STREAM_FROM_VEHICLE(NETWORK::NET_TO_VEH(Local_238.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_235 && !BitTest(Global_44241, 10))
				{
					if (!Local_238.f_54)
					{
						if (!func_94(Local_238.f_2.f_3))
						{
							if (!func_44(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_238.f_2.f_3), true), false) <= 250f)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(iVar0, true), true) >= (60f * 2.5f))
									{
										if (func_41())
										{
											if (func_38())
											{
												func_15(&uLocal_69, "HS4FAUD", "HS4F_SAACI1", 12, 0, 0, 0);
											}
											else
											{
												func_58(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
											}
										}
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_50 < 10)
				{
					if (!Local_238.f_53)
					{
						if (!func_44(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
						{
							if (func_57() == 2)
							{
								if (!func_12(&uLocal_63))
								{
									func_11(&uLocal_63, 0, 0);
								}
								else if (func_10(&uLocal_63, 7500, 0))
								{
									Local_238.f_53 = 1;
								}
								Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var2.f_2 = 1500f;
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 75f, 75f, 1000f, false, true, 0) && MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("weapon_flare"), false))
								{
									Local_238.f_53 = 1;
								}
							}
							else if (func_57() == 1)
							{
								Local_238.f_53 = 1;
								Local_238.f_50 = 100;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_60, 75f, 75f, 1000f, false, true, 0))
						{
							Local_238.f_53 = 1;
							Local_238.f_50 = 100;
							Local_238.f_54 = 1;
							if (!iLocal_236 && !BitTest(Global_44241, 10))
							{
								if (func_41())
								{
									if (!func_38())
									{
										func_58(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
									}
								}
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!func_42(Local_238.f_2) || func_94(Local_238.f_2.f_3))
			{
				func_55();
			}
			break;
		
		case 3:
			func_62();
			break;
	}
}

void func_55()//Position - 0x2179
{
	int iVar0;
	
	if (!func_94(Local_238.f_2.f_3))
	{
		if (func_56(Local_238.f_2.f_3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_238.f_2.f_3))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_238.f_2.f_3);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
			}
		}
	}
}

int func_56(int iParam0)//Position - 0x21BD
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_57()//Position - 0x21E1
{
	if (Local_238.f_55 == 1)
	{
		return Local_238.f_55;
	}
	else if (Local_238.f_55 == 2)
	{
		return Local_238.f_55;
	}
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_55 = 1;
		return Local_238.f_55;
	}
	Local_238.f_55 = 2;
	return Local_238.f_55;
}

int func_58(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x223C
{
	func_37(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_16(sParam2, iParam3, 0);
}

Vector3 func_59(int iParam0)//Position - 0x228A
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

char* func_60()//Position - 0x229D
{
	if (func_61())
	{
		return "PA_AIRSTRIKE_BLIP";
	}
	return "AIRSTRIKE_5";
}

bool func_61()//Position - 0x22B5
{
	return Global_2714762.f_24;
}

void func_62()//Position - 0x22C3
{
	if (HUD::DOES_BLIP_EXIST(iLocal_47))
	{
		HUD::REMOVE_BLIP(&iLocal_47);
	}
}

void func_63()//Position - 0x22DA
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_91(1);
			break;
		
		case 1:
			if (func_64())
			{
				func_91(2);
			}
			break;
		
		case 2:
			if (!func_42(Local_238.f_2))
			{
				if (func_94(Local_238.f_2.f_3))
				{
					func_91(3);
				}
			}
			else if (func_94(Local_238.f_2.f_3))
			{
				func_91(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_64()//Position - 0x2355
{
	if (!func_12(&uLocal_67))
	{
		func_11(&uLocal_67, 0, 0);
	}
	else if (func_90(Local_238.f_2.f_1) && func_90(Local_238.f_2.f_3.f_1))
	{
		if (func_10(&uLocal_67, 3000, 0))
		{
			if (func_68() && func_65())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_65()//Position - 0x23B2
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3) && func_90(Local_238.f_2.f_3.f_1)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2))
	{
		if (func_42(Local_238.f_2))
		{
			if (func_67(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_238.f_2.f_3), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_238.f_2.f_3), Global_1837194);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_238.f_2.f_3), true);
				func_66();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_238.f_2.f_3), iLocal_48);
				VEHICLE::SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_238.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_66()//Position - 0x2497
{
	if (!iLocal_50)
	{
		if (func_42(Local_238.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 2.802597E-44f, 1);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 2.802597E-44f, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2527
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_68()//Position - 0x25AF
{
	struct<3> Var0;
	float fVar1;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2))
	{
		if (func_90(Local_238.f_2.f_1))
		{
			if (AUDIO::LOAD_STREAM("AIRSTRIKE_FLYOVER", 0))
			{
				func_86(&Var0, &fVar1);
				if (func_72(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_69(&(Local_238.f_2), Local_238.f_2.f_1, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_238.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_238.f_2), 2);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_238.f_2), false);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_238.f_2), true);
						PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_238.f_2));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_238.f_2), 60f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_238.f_2), true, true, false);
						VEHICLE::SET_VEHICLE_EXTENDED_REMOVAL_RANGE(NETWORK::NET_TO_VEH(Local_238.f_2), 1000);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_238.f_2), false);
						VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_238.f_2), 3);
						VEHICLE::OPEN_BOMB_BAY_DOORS(NETWORK::NET_TO_VEH(Local_238.f_2));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_69(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x26CD
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam11)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_70(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_70(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x27D6
{
	int iVar0;
	
	if (func_71(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam3 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_71(int iParam0, struct<3> Param1, int iParam2)//Position - 0x28A9
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_72(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0x2947
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (func_80(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_73(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_73(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x2A59
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_51(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_78(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_51(iVar1, 1, 1))
		{
			if (!func_75(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_74(iVar1) || !bParam8) && !Global_2689235[iVar1 /*453*/].f_267)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_78(iVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_78(iVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x2C11
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1)//Position - 0x2C3C
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_76(-1, 0) == 8;
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

int func_76(int iParam0, bool bParam1)//Position - 0x2C87
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_77();
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

int func_77()//Position - 0x2CC8
{
	return Global_1574918;
}

Vector3 func_78(int iParam0)//Position - 0x2CD4
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_79() && Global_1853348[iVar0 /*834*/].f_804) && !func_44(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_59(iParam0);
}

var func_79()//Position - 0x2D27
{
	return Global_2714762.f_19;
}

int func_80(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)//Position - 0x2D35
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_51(iVar1, bParam2, bParam3))
			{
				if (iParam8 || NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_74(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_81(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(iVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x2E39
{
	if (func_85(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { func_84(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2787505))
	{
		return 1;
	}
	if (func_82(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)//Position - 0x2E80
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (!iVar0 == func_21())
	{
		if (iVar0 == func_83(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)//Position - 0x2EAB
{
	if (iParam0 != func_21())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_21();
}

struct<13> func_84(int iParam0)//Position - 0x2ECE
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_85(int iParam0, int iParam1)//Position - 0x2EE5
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { func_84(iParam0) };
		Global_2787518 = { func_84(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787505))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787518))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_86(var uParam0, var uParam1)//Position - 0x2F52
{
	float fVar0;
	
	*uParam0 = { func_88(Local_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_AREA((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_87(*uParam0, Local_60);
}

float func_87(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x2FCA
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_88(struct<3> Param0, float fParam1, float fParam2, float fParam3)//Position - 0x2FE4
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	Var0 = { func_89(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2)) };
	Var0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar1, fVar1);
	return Param0 + Var0;
}

Vector3 func_89(struct<3> Param0, float fParam1)//Position - 0x302D
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_90(int iParam0)//Position - 0x3064
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_91(int iParam0)//Position - 0x3082
{
	if (iParam0 == 3)
	{
		Global_2815059.f_4457 = 0;
	}
	Local_238.f_2.f_2 = iParam0;
}

int func_92(int iParam0)//Position - 0x30A0
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_93()//Position - 0x30D6
{
	if (!iLocal_51)
	{
		if (func_42(Local_238.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 2.802597E-44f, 1);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 2.802597E-44f, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_94(int iParam0)//Position - 0x316F
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

bool func_95(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x318E
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_96()//Position - 0x31D5
{
	return Global_100493.f_375 > 0;
}

void func_97()//Position - 0x31E6
{
	char* sVar0;
	
	if (!iLocal_234 && func_41())
	{
		if (!func_94(Local_238.f_2.f_3))
		{
			sVar0 = "FM_Pilot_Air";
			if (func_38())
			{
				sVar0 = "HS4_AIRSTRIKE1";
			}
			func_98(&uLocal_69, 3, NETWORK::NET_TO_PED(Local_238.f_2.f_3), sVar0, 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_98(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3234
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

void func_99()//Position - 0x32CF
{
	Global_2815059.f_4456 = Local_238.f_53;
}

int func_100()//Position - 0x32E2
{
	return Local_238.f_0;
}

int func_101(int iParam0)//Position - 0x32EC
{
	return Local_240[iParam0 /*5*/];
}

void func_102()//Position - 0x32FB
{
}

void func_103()//Position - 0x3303
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2))
	{
		if (func_42(Local_238.f_2) && !func_94(Local_238.f_2.f_3))
		{
			TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), NETWORK::NET_TO_VEH(Local_238.f_2), 0, PLAYER::PLAYER_PED_ID(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 5.605194E-43f, 5.605194E-43f, 1);
		}
	}
	func_105(func_106(1, 1), 11, func_21());
	func_104();
}

void func_104()//Position - 0x3386
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_105(int iParam0, int iParam1, var uParam2)//Position - 0x3392
{
	struct<4> Var0;
	
	Var0.f_0 = -1600651275;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 6, iParam0);
	}
}

int func_106(int iParam0, bool bParam1)//Position - 0x33CA
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
				else if (!func_75(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_107()//Position - 0x342F
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_114())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_113())
	{
		return 1;
	}
	if (func_112(159))
	{
		if (!func_111())
		{
			return 1;
		}
	}
	if (func_112(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_108() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_108()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_108()//Position - 0x34B3
{
	switch (func_110())
	{
		case 0:
			return func_109();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_109()//Position - 0x34E6
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_110()//Position - 0x350A
{
	return Global_31959;
}

bool func_111()//Position - 0x3515
{
	return Global_2714762.f_698;
}

int func_112(int iParam0)//Position - 0x3524
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_113()//Position - 0x353B
{
	return Global_2725403;
}

bool func_114()//Position - 0x3547
{
	return Global_2714762.f_693;
}

void func_115()//Position - 0x3556
{
	SYSTEM::WAIT(0);
}

void func_116(struct<21> Param0)//Position - 0x3563
{
	func_122(func_123(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_120(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_238, 58, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_240, 11, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_119())
	{
		func_103();
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Local_60 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	}
	if (func_4(PLAYER::PLAYER_ID(), 1, 0))
	{
		bLocal_52 = true;
	}
	func_117(64, 1);
	Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

void func_117(int iParam0, bool bParam1)//Position - 0x35E9
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2359296[func_118() /*5567*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_118() /*5567*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_118() /*5567*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_118() /*5567*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_118() /*5567*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_118() /*5567*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_118() /*5567*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_118() /*5567*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_118() /*5567*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_118() /*5567*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_118() /*5567*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_118() /*5567*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_118() /*5567*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_118() /*5567*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_118() /*5567*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_118() /*5567*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_118() /*5567*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_118() /*5567*/].f_681.f_30 = iVar0;
			break;
	}
}

int func_118()//Position - 0x3828
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_119()//Position - 0x3835
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_114())
		{
			return 0;
		}
		if (func_112(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_120(int iParam0, int iParam1, bool bParam2)//Position - 0x388E
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_104();
			}
			else
			{
				return 0;
			}
		}
		if (!func_121(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_104();
					}
					else
					{
						return 0;
					}
				}
				if (func_114())
				{
					if (!bParam2)
					{
						func_104();
					}
					else
					{
						return 0;
					}
				}
				if (func_112(157))
				{
					if (!bParam2)
					{
						func_104();
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
					func_104();
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
				func_104();
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
			func_104();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_121(bool bParam0)//Position - 0x39A4
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_122(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x39B5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_104();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_123(int iParam0)//Position - 0x39D4
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 163:
			return 32;
		
		case 164:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 165:
			return 32;
		
		case 166:
			return 32;
		
		case 170:
			return 32;
		
		case 168:
			return 32;
		
		case 169:
			return 32;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 171:
			return 32;
		
		case 172:
			return 32;
		
		case 177:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 180:
			return 32;
		
		case 181:
			return 2;
		
		case 186:
			return 1;
		
		case 182:
			return 2;
		
		case 183:
			return 4;
		
		case 184:
			return 2;
		
		case 185:
			return 2;
		
		case 167:
			return 1;
		
		case 187:
			return 2;
		
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
			return 0;
		
		case 209:
			return 1;
		
		case 194:
			return 4;
		
		case 197:
			return 4;
		
		case 198:
			return 1;
		
		case 199:
			return 1;
		
		case 205:
			return 1;
		
		case 201:
			return 2;
		
		case 206:
			return 1;
		
		case 202:
			return 1;
		
		case 200:
			return 2;
		
		case 203:
			return 8;
		
		case 204:
			return 8;
		
		case 207:
			return 1;
		
		case 208:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 195:
			return 16;
		
		case 196:
			return 32;
		
		default:
	}
	switch (func_124(func_125(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x414C
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		default:
	}
	return -1;
}

int func_125(int iParam0, bool bParam1)//Position - 0x42B0
{
	switch (iParam0)
	{
		case 181:
			return 15;
		
		case 188:
			return 8;
		
		case 182:
			return 14;
		
		case 186:
			return 122;
		
		case 189:
			return 1;
		
		case 187:
			return 5;
		
		case 190:
			return 6;
		
		case 183:
			return 11;
		
		case 191:
			return 0;
		
		case 192:
			return 2;
		
		case 184:
			return 13;
		
		case 193:
			return 3;
		
		case 185:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		default:
	}
	if (bParam1)
	{
	}
	return 304;
}

