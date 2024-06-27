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
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	float fLocal_56 = 0f;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	float fLocal_59[3] = { 0f, 0f, 0f };
	var uLocal_63 = 16;
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
	struct<2> Local_228 = { 0, 0 } ;
	var uLocal_230 = 745926877;
	var uLocal_231 = 0;
	var uLocal_232 = 3;
	var uLocal_233 = 0;
	var uLocal_234 = -839953400;
	var uLocal_235 = 0;
	var uLocal_236 = -839953400;
	var uLocal_237 = 0;
	var uLocal_238 = -839953400;
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
	int iLocal_250[2] = { 0, 0 };
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	sLocal_19 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_56 = -1f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_110(ScriptParam_0);
	}
	while (true)
	{
		func_109();
		if (func_101())
		{
			func_97();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_96();
			func_94();
			switch (func_93(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_92() > 0)
					{
						iLocal_250[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
					}
					break;
				
				case 2:
					func_60();
					if (func_92() == 3)
					{
						iLocal_250[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
					}
					break;
				
				case 3:
					func_97();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_92())
				{
					case 0:
						Local_228.f_0 = 2;
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

void func_1()//Position - 0x12D
{
	func_7();
	if (Local_228.f_1.f_2 == 5)
	{
		Local_228.f_0 = 3;
	}
	if (func_6(&(Local_228.f_1.f_19)))
	{
		if (func_4(&(Local_228.f_1.f_19), 20000, 0))
		{
			Local_228.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_228.f_0 = 3;
	}
	if (bLocal_46)
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			Local_228.f_0 = 3;
		}
	}
	else if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		Local_228.f_0 = 3;
	}
	if (func_2())
	{
		Local_228.f_0 = 3;
	}
}

bool func_2()//Position - 0x198
{
	return Global_1919969.f_3;
}

bool func_3()//Position - 0x1A6
{
	return Global_1574582;
}

int func_4(var uParam0, int iParam1, bool bParam2)//Position - 0x1B2
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)//Position - 0x210
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

bool func_6(var uParam0)//Position - 0x255
{
	return uParam0->f_1;
}

void func_7()//Position - 0x261
{
	switch (Local_228.f_1.f_2)
	{
		case 0:
			func_59(1);
			break;
		
		case 1:
			if (func_38())
			{
				if (func_25())
				{
					func_5(&(Local_228.f_1.f_17), 0, 0);
					func_59(2);
				}
			}
			break;
		
		case 2:
			func_16();
			func_14();
			if (!func_12(Local_228.f_1))
			{
				if ((func_11(Local_228.f_1.f_3[0 /*2*/]) && func_11(Local_228.f_1.f_3[1 /*2*/])) && func_11(Local_228.f_1.f_3[2 /*2*/]))
				{
					func_59(5);
				}
			}
			else if (func_11(Local_228.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_228.f_1.f_3[1 /*2*/]) && func_11(Local_228.f_1.f_3[2 /*2*/]))
				{
					func_59(5);
				}
			}
			else if (func_11(Local_228.f_1.f_3[1 /*2*/]) && func_11(Local_228.f_1.f_3[2 /*2*/]))
			{
				func_59(3);
			}
			else
			{
				if (func_6(&(Local_228.f_1.f_17)))
				{
					if (func_4(&(Local_228.f_1.f_17), 120000, 0))
					{
						func_59(3);
					}
				}
				if (func_10(PLAYER::PLAYER_ID(), 0))
				{
					func_59(3);
				}
				if (bLocal_50)
				{
					func_59(3);
				}
				if (func_8(PLAYER::PLAYER_ID(), 136))
				{
					func_59(3);
				}
			}
			break;
		
		case 3:
			func_16();
			if (!func_12(Local_228.f_1))
			{
				if ((func_11(Local_228.f_1.f_3[0 /*2*/]) && func_11(Local_228.f_1.f_3[1 /*2*/])) && func_11(Local_228.f_1.f_3[2 /*2*/]))
				{
					func_59(5);
				}
			}
			else if (func_11(Local_228.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_228.f_1.f_3[1 /*2*/]) && func_11(Local_228.f_1.f_3[2 /*2*/]))
				{
					func_59(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)//Position - 0x453
{
	if (Global_1887305[iParam0 /*610*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x473
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)//Position - 0x496
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

int func_11(int iParam0)//Position - 0x4AC
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_12(int iParam0)//Position - 0x4CB
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_13(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_13(int iParam0)//Position - 0x4EB
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

void func_14()//Position - 0x524
{
	if (Global_2672855.f_3846)
	{
		func_15(1, 600000);
		bLocal_50 = true;
	}
	if (Global_2672855.f_3845 >= 250f)
	{
		func_15(1, 600000);
		bLocal_50 = true;
	}
}

void func_15(int iParam0, int iParam1)//Position - 0x55E
{
	if (Global_2672855.f_3729[iParam0] < iParam1)
	{
		Global_2672855.f_3729[iParam0] = iParam1;
	}
	MISC::SET_BIT(&(Global_2672855.f_3728), iParam0);
}

void func_16()//Position - 0x590
{
	iLocal_54 = 0;
	iLocal_55 = 0;
	if (func_12(Local_228.f_1))
	{
		iLocal_54++;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_228.f_1)))
	{
		func_24(&(Local_228.f_1));
		iLocal_54++;
	}
	if (func_11(Local_228.f_1.f_3[0 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_228.f_1.f_3[0 /*2*/]))
		{
			func_24(&(Local_228.f_1.f_3[0 /*2*/]));
			iLocal_55++;
		}
	}
	else
	{
		iLocal_55++;
	}
	if (func_11(Local_228.f_1.f_3[1 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_228.f_1.f_3[1 /*2*/]))
		{
			func_24(&(Local_228.f_1.f_3[1 /*2*/]));
			iLocal_55++;
		}
	}
	else
	{
		iLocal_55++;
	}
	if (func_11(Local_228.f_1.f_3[2 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_228.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_228.f_1.f_3[2 /*2*/]));
			iLocal_55++;
		}
	}
	else
	{
		iLocal_55++;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != iLocal_54)
	{
		if (func_23(iLocal_54, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_54);
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != iLocal_55)
	{
		if (func_17(iLocal_55, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_55);
		}
	}
}

bool func_17(int iParam0, bool bParam1, bool bParam2)//Position - 0x6BB
{
	return func_18(0, iParam0, 1, bParam1, bParam2);
}

int func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6CF
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_22(iParam0) - func_21(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_20(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_21(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_19(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_19(int iParam0)//Position - 0x795
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

int func_20(int iParam0)//Position - 0x7CF
{
	switch (iParam0)
	{
		case 0:
			return Global_1681448.f_1;
			break;
		
		case 1:
			return Global_1681448.f_2;
			break;
		
		case 2:
			return Global_1681448.f_3;
			break;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1)//Position - 0x815
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_222;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x8B2
{
	switch (iParam0)
	{
		case 0:
			return Global_1681456;
			break;
		
		case 1:
			return Global_1681457;
			break;
		
		case 2:
			return Global_1681458;
			break;
	}
	return 0;
}

bool func_23(int iParam0, bool bParam1, bool bParam2)//Position - 0x8F2
{
	return func_18(1, iParam0, 1, bParam1, bParam2);
}

void func_24(var uParam0)//Position - 0x906
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_25()//Position - 0x92A
{
	if (func_37(Local_228.f_1.f_1))
	{
		if (func_37(Local_228.f_1.f_3[0 /*2*/].f_1))
		{
			if (!func_12(Local_228.f_1))
			{
				if (func_34(&(Local_228.f_1), Local_228.f_1.f_1, Local_228.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_228.f_1));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_228.f_1), true, true, false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_228.f_1));
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_228.f_1), true);
					func_33(NETWORK::NET_TO_VEH(Local_228.f_1), 4);
					Global_2672855.f_3840 = NETWORK::NET_TO_VEH(Local_228.f_1);
					if (func_32(&(Local_228.f_1.f_3[0 /*2*/]), Local_228.f_1, 4, Local_228.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_228.f_1.f_3[0 /*2*/]);
						func_26(NETWORK::NET_TO_PED(Local_228.f_1.f_3[0 /*2*/]), 0, 0, 1);
						NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_228.f_1.f_3[0 /*2*/]), PLAYER::PLAYER_ID());
						func_33(NETWORK::NET_TO_PED(Local_228.f_1.f_3[0 /*2*/]), 4);
						Global_2672855.f_3841[0] = NETWORK::NET_TO_PED(Local_228.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_228.f_1.f_3[1 /*2*/]), Local_228.f_1, 4, Local_228.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_228.f_1.f_3[1 /*2*/]);
							func_26(NETWORK::NET_TO_PED(Local_228.f_1.f_3[1 /*2*/]), 1, 1, 1);
							NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_228.f_1.f_3[1 /*2*/]), PLAYER::PLAYER_ID());
							func_33(NETWORK::NET_TO_PED(Local_228.f_1.f_3[1 /*2*/]), 4);
							Global_2672855.f_3841[1] = NETWORK::NET_TO_PED(Local_228.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_228.f_1.f_3[2 /*2*/]), Local_228.f_1, 4, Local_228.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_228.f_1.f_3[2 /*2*/]);
								func_26(NETWORK::NET_TO_PED(Local_228.f_1.f_3[2 /*2*/]), 2, 1, 1);
								NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_228.f_1.f_3[2 /*2*/]), PLAYER::PLAYER_ID());
								func_33(NETWORK::NET_TO_PED(Local_228.f_1.f_3[2 /*2*/]), 4);
								Global_2672855.f_3841[2] = NETWORK::NET_TO_PED(Local_228.f_1.f_3[2 /*2*/]);
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB62
{
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iParam0, joaat("WEAPON_ASSAULTRIFLE"), 300, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
	PED::SET_PED_COMBAT_RANGE(iParam0, 2);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, true);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
	PED::SET_PED_SEEING_RANGE(iParam0, (fLocal_59[iParam1] + 100f));
	PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, 400f);
	PED::SET_COMBAT_FLOAT(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, 250);
			ENTITY::SET_ENTITY_HEALTH(iParam0, 250, 0, 0);
			PED::SET_PED_ARMOUR(iParam0, 250);
		}
	}
	else
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	}
}

void func_27(int iParam0)//Position - 0xC0C
{
	int iVar0;
	
	if (!func_29(PLAYER::PLAYER_ID(), 0, 0) && !func_28())
	{
		iVar0 = Global_1837324[5];
	}
	else
	{
		iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(iParam0), iVar0);
}

bool func_28()//Position - 0xC4E
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2)//Position - 0xC67
{
	if (bParam1)
	{
		if (func_30(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(int iParam0)//Position - 0xC99
{
	return func_31(iParam0);
}

var func_31(int iParam0)//Position - 0xCA7
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_32(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xCBE
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
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
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

void func_33(int iParam0, int iParam1)//Position - 0xD46
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0xD79
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
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2738934.f_6799 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_35(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_35(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0xE82
{
	int iVar0;
	
	if (func_36(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635563.f_3230[1 /*6*/].f_5 == iParam5 && Global_2635563.f_3230[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635563.f_3230[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635563.f_3230[iVar0 /*6*/] = { Global_2635563.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635563.f_3230[1 /*6*/] = { Param0 };
		Global_2635563.f_3230[1 /*6*/].f_3 = fParam3;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam4;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam5;
	}
}

int func_36(int iParam0, struct<3> Param1, int iParam4)//Position - 0xF55
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
			if (Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_37(int iParam0)//Position - 0xFF3
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_38()//Position - 0x1011
{
	struct<3> Var0;
	
	if (func_58(Local_228.f_1.f_10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { func_56(func_57(PLAYER::PLAYER_ID()), 0f, (-200f * SYSTEM::SIN((SYSTEM::TO_FLOAT(Local_228.f_1.f_15) * 30f))), (200f * SYSTEM::COS((SYSTEM::TO_FLOAT(Local_228.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_39(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_228.f_1.f_10 = { Var0 };
					return 1;
				}
				else
				{
					Local_228.f_1.f_15++;
					if (Local_228.f_1.f_15 >= 12)
					{
						Local_228.f_1.f_15 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_39(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0x1104
{
	Global_2635563.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (fParam14 > 0f)
	{
		if (func_49(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_40(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635563.f_2++;
	return 1;
}

int func_40(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x1216
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_48(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_46(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
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
		if (func_48(iVar1, 1, 1))
		{
			if (!func_42(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_41(iVar1) || !bParam10) && !Global_2657971[iVar1 /*465*/].f_271)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_46(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_46(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
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

int func_41(int iParam0)//Position - 0x13CE
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657971[iParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

bool func_42(int iParam0, int iParam1)//Position - 0x13FA
{
	bool bVar0;
	
	if (!func_45(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_43(-1, 0) == 8;
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

int func_43(int iParam0, bool bParam1)//Position - 0x1453
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_44();
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

int func_44()//Position - 0x1494
{
	return Global_1574926;
}

int func_45(var uParam0)//Position - 0x14A0
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

Vector3 func_46(int iParam0)//Position - 0x14C2
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_47() && Global_1845281[iVar0 /*883*/].f_860) && !func_58(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_57(iParam0);
}

var func_47()//Position - 0x1515
{
	return Global_2684504.f_19;
}

int func_48(int iParam0, bool bParam1, bool bParam2)//Position - 0x1523
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
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_49(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0x1583
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_48(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_41(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_50(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_57(iVar1), Param0, true) < fParam3)
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

int func_50(int iParam0)//Position - 0x1687
{
	if (func_55(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2707307 = { func_54(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2707307))
	{
		return 1;
	}
	if (func_51(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)//Position - 0x16CE
{
	int iVar0;
	
	iVar0 = func_52(iParam0);
	if (func_45(iVar0))
	{
		if (iVar0 == func_52(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_52(int iParam0)//Position - 0x16F7
{
	if (func_45(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_53();
}

int func_53()//Position - 0x171A
{
	return -1;
}

struct<13> func_54(int iParam0)//Position - 0x1723
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_55(int iParam0, int iParam1)//Position - 0x173A
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707307 = { func_54(iParam0) };
		Global_2707320 = { func_54(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707307))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707320))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707237, 35, &Global_2707307);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707272, 35, &Global_2707320);
				if (Global_2707237 == Global_2707272)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_56(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)//Position - 0x17A7
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

Vector3 func_57(int iParam0)//Position - 0x17F4
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_58(struct<3> Param0)//Position - 0x1807
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_59(int iParam0)//Position - 0x1831
{
	Local_228.f_1.f_2 = iParam0;
}

void func_60()//Position - 0x1841
{
	func_90();
	func_61();
}

void func_61()//Position - 0x1851
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Local_228.f_1.f_2)
	{
		case 0:
			func_89();
			break;
		
		case 1:
			func_89();
			break;
		
		case 2:
			if (func_12(Local_228.f_1))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_228.f_1);
				if (!HUD::DOES_BLIP_EXIST(iLocal_45))
				{
					iLocal_45 = HUD::ADD_BLIP_FOR_ENTITY(iVar1);
					HUD::SET_BLIP_SPRITE(iLocal_45, 422 /*RADAR_PLAYER_HELI*/);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_45, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_45, "MPCT_MERRY3" /* GXT: Backup Helicopter */);
					func_87(&iLocal_45, 1);
				}
				if (func_86(Local_228.f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_228.f_1))
					{
						if (func_85())
						{
							if (!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iVar1))
							{
								VEHICLE::SET_VEHICLE_SEARCHLIGHT(iVar1, true, false);
							}
						}
						else if (VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iVar1))
						{
							VEHICLE::SET_VEHICLE_SEARCHLIGHT(iVar1, false, false);
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_228.f_1.f_3[0 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_228.f_1.f_3[0 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						iVar2 = TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar1);
						if (iVar2 != 23 || fLocal_59[0] != fLocal_56)
						{
							if (func_86(Local_228.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_228.f_1.f_3[0 /*2*/]))
								{
									fLocal_59[0] = fLocal_56;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
									func_26(iVar0, 0, 0, 0);
									VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, false);
									if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									{
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											TASK::TASK_HELI_MISSION(iVar0, iVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 23, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_59[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
						if (!iLocal_48)
						{
							if (SYSTEM::VDIST(func_57(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_228.f_1), true)) <= 50f)
							{
								func_63(&uLocal_63, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_48 = 1;
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_228.f_1.f_3[1 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_228.f_1.f_3[1 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(iVar0, 0) || fLocal_59[1] != fLocal_56)
						{
							if (func_86(Local_228.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_228.f_1.f_3[1 /*2*/]))
								{
									fLocal_59[1] = fLocal_56;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
									func_26(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_228.f_1.f_3[2 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_228.f_1.f_3[2 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(iVar0, 0) || fLocal_59[2] != fLocal_56)
						{
							if (func_86(Local_228.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_228.f_1.f_3[2 /*2*/]))
								{
									fLocal_59[2] = fLocal_56;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
									func_26(iVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_228.f_1) || func_11(Local_228.f_1.f_3[0 /*2*/]))
			{
				func_62();
			}
			break;
		
		case 3:
			func_89();
			if (!func_6(&(Local_228.f_1.f_19)))
			{
				func_5(&(Local_228.f_1.f_19), 0, 0);
			}
			if (func_12(Local_228.f_1))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_228.f_1);
				if (!func_11(Local_228.f_1.f_3[0 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_228.f_1.f_3[0 /*2*/]);
					if (iLocal_51 == 0)
					{
						if (func_86(Local_228.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_228.f_1.f_3[0 /*2*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837309);
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
									{
										TASK::TASK_HELI_MISSION(iVar0, iVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										PED::SET_PED_KEEP_TASK(iVar0, true);
										iLocal_51 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_228.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_52 == 0)
					{
						iVar0 = NETWORK::NET_TO_PED(Local_228.f_1.f_3[1 /*2*/]);
						if (func_86(Local_228.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_228.f_1.f_3[1 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
								PED::SET_PED_KEEP_TASK(iVar0, true);
								iLocal_52 = 1;
							}
						}
					}
					if (!iLocal_49)
					{
						if (SYSTEM::VDIST(func_57(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_228.f_1), true)) <= 50f)
						{
							func_63(&uLocal_63, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_49 = 1;
						}
					}
				}
				if (!func_11(Local_228.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_53 == 0)
					{
						iVar0 = NETWORK::NET_TO_PED(Local_228.f_1.f_3[2 /*2*/]);
						if (func_86(Local_228.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_228.f_1.f_3[2 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
								PED::SET_PED_KEEP_TASK(iVar0, true);
								iLocal_53 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_228.f_1) || func_11(Local_228.f_1.f_3[0 /*2*/]))
			{
				func_62();
			}
			break;
		
		case 5:
			func_89();
			break;
	}
}

void func_62()//Position - 0x1D32
{
	int iVar0;
	
	if (!func_11(Local_228.f_1.f_3[0 /*2*/]))
	{
		if (func_86(Local_228.f_1.f_3[0 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_228.f_1.f_3[0 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_228.f_1.f_3[0 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0, 0);
			}
		}
	}
	if (!func_11(Local_228.f_1.f_3[1 /*2*/]))
	{
		if (func_86(Local_228.f_1.f_3[1 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_228.f_1.f_3[1 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_228.f_1.f_3[1 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0, 0);
			}
		}
	}
	if (!func_11(Local_228.f_1.f_3[2 /*2*/]))
	{
		if (func_86(Local_228.f_1.f_3[2 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_228.f_1.f_3[2 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_228.f_1.f_3[2 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0, 0);
			}
		}
	}
}

int func_63(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1E15
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_64(sParam2, iParam3, 0);
}

int func_64(char* sParam0, int iParam1, bool bParam2)//Position - 0x1E63
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
					func_83();
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
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_81();
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
				func_73();
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
				if (func_72())
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
			if (func_71())
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
			func_70();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_69();
		func_65();
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
		func_83();
	}
	return 0;
}

void func_65()//Position - 0x2131
{
	if (!func_66())
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

int func_66()//Position - 0x2168
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_53())
	{
		return 0;
	}
	if (func_67(PLAYER::PLAYER_ID()))
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

bool func_67(int iParam0)//Position - 0x21CB
{
	return func_68(iParam0, 20);
}

var func_68(int iParam0, int iParam1)//Position - 0x21DB
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

void func_69()//Position - 0x21F3
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

void func_70()//Position - 0x2224
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

int func_71()//Position - 0x22B9
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_72()//Position - 0x22E0
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

void func_73()//Position - 0x2379
{
	if (func_80(14))
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
		Global_20930 = func_74();
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

var func_74()//Position - 0x241B
{
	func_75();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_75()//Position - 0x2434
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_78(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_77(PLAYER::PLAYER_PED_ID());
			if (func_76(iVar0) && (!func_80(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_76(Global_113969.f_2366.f_539.f_4321))
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

bool func_76(int iParam0)//Position - 0x2531
{
	return iParam0 < 3;
}

int func_77(int iParam0)//Position - 0x253D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_78(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_78(int iParam0)//Position - 0x257A
{
	if (func_76(iParam0))
	{
		return func_79(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_79(int iParam0)//Position - 0x259F
{
	return Global_2169[iParam0 /*29*/];
}

bool func_80(int iParam0)//Position - 0x25AE
{
	return Global_44042 == iParam0;
}

void func_81()//Position - 0x25BC
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

bool func_82(int iParam0, int iParam1)//Position - 0x2613
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

void func_83()//Position - 0x264B
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

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x26A2
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

int func_85()//Position - 0x26F8
{
	if (CLOCK::GET_CLOCK_HOURS() >= 22)
	{
		return 1;
	}
	if (CLOCK::GET_CLOCK_HOURS() <= 6 && CLOCK::GET_CLOCK_HOURS() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x2726
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

void func_87(int iParam0, int iParam1)//Position - 0x274A
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_88(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_88(int iParam0)//Position - 0x2770
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_89()//Position - 0x29D8
{
	if (HUD::DOES_BLIP_EXIST(iLocal_45))
	{
		HUD::REMOVE_BLIP(&iLocal_45);
	}
}

void func_90()//Position - 0x29EF
{
	if (!iLocal_47)
	{
		if (!func_11(Local_228.f_1.f_3[0 /*2*/]))
		{
			func_91(&uLocal_63, 3, NETWORK::NET_TO_PED(Local_228.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_47 = 1;
		}
	}
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2A2A
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

int func_92()//Position - 0x2AC5
{
	return Local_228.f_0;
}

int func_93(int iParam0)//Position - 0x2ACF
{
	return iLocal_250[iParam0];
}

void func_94()//Position - 0x2ADD
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_56 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_57))
	{
		func_5(&uLocal_57, 0, 0);
	}
	else if (func_4(&uLocal_57, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_57(PLAYER::PLAYER_ID()) };
		fLocal_56 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var1.f_0, Var1.f_1);
		if (fLocal_56 < 85f)
		{
			fLocal_56 = 85f;
		}
		func_95(&uLocal_57);
	}
}

void func_95(var uParam0)//Position - 0x2B4C
{
	uParam0->f_1 = 0;
}

void func_96()//Position - 0x2B59
{
}

void func_97()//Position - 0x2B61
{
	var uVar0;
	var uVar1;
	
	Global_2672855.f_3840 = uVar0;
	Global_2672855.f_3841[0] = uVar1;
	Global_2672855.f_3841[1] = uVar1;
	Global_2672855.f_3841[2] = uVar1;
	Global_2672855.f_3845 = 0f;
	Global_2672855.f_3846 = 0;
	func_99(func_100(1, 1), 10, func_53());
	func_98();
}

void func_98()//Position - 0x2BBA
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_99(int iParam0, int iParam1, var uParam2)//Position - 0x2BC6
{
	struct<5> Var0;
	
	Var0.f_0 = -836944817;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 7, iParam0, Var0.f_0);
	}
}

int func_100(int iParam0, bool bParam1)//Position - 0x2C00
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_48(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_42(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_101()//Position - 0x2C65
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_108())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_107())
	{
		return 1;
	}
	if (func_106(159))
	{
		if (!func_105())
		{
			return 1;
		}
	}
	if (func_106(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_102() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_102()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_102()//Position - 0x2CE9
{
	switch (func_104())
	{
		case 0:
			return func_103();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_103()//Position - 0x2D1C
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_104()//Position - 0x2D40
{
	return Global_32948;
}

bool func_105()//Position - 0x2D4B
{
	return Global_2684504.f_700;
}

int func_106(int iParam0)//Position - 0x2D5A
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_107()//Position - 0x2D71
{
	return Global_2696172;
}

bool func_108()//Position - 0x2D7D
{
	return Global_2684504.f_695;
}

void func_109()//Position - 0x2D8C
{
	SYSTEM::WAIT(0);
}

void func_110(struct<21> Param0)//Position - 0x2D99
{
	func_116(func_117(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_114(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_228, 22, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_250, 3, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_113())
	{
		func_97();
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		bLocal_46 = true;
	}
	func_111(62, 1);
	iLocal_250[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
}

void func_111(int iParam0, bool bParam1)//Position - 0x2DFE
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
			Global_2359296[func_112() /*5570*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_112() /*5570*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_112() /*5570*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_112() /*5570*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_112() /*5570*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_112() /*5570*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_112() /*5570*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_112() /*5570*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_112() /*5570*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_112() /*5570*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_112() /*5570*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_112() /*5570*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_112() /*5570*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_112() /*5570*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_112() /*5570*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_112() /*5570*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_112() /*5570*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_112() /*5570*/].f_681.f_30 = iVar0;
			break;
	}
}

int func_112()//Position - 0x303D
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_113()//Position - 0x304A
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
		if (func_108())
		{
			return 0;
		}
		if (func_106(157))
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

int func_114(int iParam0, int iParam1, bool bParam2)//Position - 0x30A3
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_98();
			}
			else
			{
				return 0;
			}
		}
		if (!func_115(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_98();
					}
					else
					{
						return 0;
					}
				}
				if (func_108())
				{
					if (!bParam2)
					{
						func_98();
					}
					else
					{
						return 0;
					}
				}
				if (func_106(157))
				{
					if (!bParam2)
					{
						func_98();
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
					func_98();
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
				func_98();
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
			func_98();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_115(bool bParam0)//Position - 0x31B9
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_116(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x31CA
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_98();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_117(int iParam0)//Position - 0x31E9
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
		
		case 197:
			return 32;
		
		case 198:
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
		
		case 209:
			return 32;
		
		case 210:
			return 32;
		
		case 199:
			return 32;
		
		case 200:
			return 32;
		
		case 204:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 205:
			return 32;
		
		case 206:
			return 32;
		
		case 211:
			return 32;
		
		case 212:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 215:
			return 2;
		
		case 220:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 4;
		
		case 218:
			return 2;
		
		case 219:
			return 2;
		
		case 201:
			return 1;
		
		case 221:
			return 2;
		
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 243:
			return 1;
		
		case 228:
			return 4;
		
		case 231:
			return 4;
		
		case 232:
			return 1;
		
		case 233:
			return 1;
		
		case 239:
			return 1;
		
		case 235:
			return 2;
		
		case 240:
			return 1;
		
		case 236:
			return 1;
		
		case 234:
			return 2;
		
		case 237:
			return 8;
		
		case 238:
			return 8;
		
		case 241:
			return 1;
		
		case 242:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 229:
			return 16;
		
		case 230:
			return 32;
		
		default:
	}
	switch (func_118(func_119(iParam0, 1)))
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

int func_118(int iParam0)//Position - 0x397E
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
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		default:
	}
	return -1;
}

int func_119(int iParam0, bool bParam1)//Position - 0x3C36
{
	switch (iParam0)
	{
		case 215:
			return 15;
		
		case 222:
			return 8;
		
		case 216:
			return 14;
		
		case 220:
			return 122;
		
		case 223:
			return 1;
		
		case 221:
			return 5;
		
		case 224:
			return 6;
		
		case 217:
			return 11;
		
		case 225:
			return 0;
		
		case 226:
			return 2;
		
		case 218:
			return 13;
		
		case 227:
			return 3;
		
		case 219:
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
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		default:
	}
	if (bParam1)
	{
	}
	return 343;
}

