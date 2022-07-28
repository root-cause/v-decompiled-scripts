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
	struct<592> Local_109 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 32, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 32;
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
	struct<9> Local_151[32];
	struct<855> Local_152 = { 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, -1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_153 = 3;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	struct<23> Local_161 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_162 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	bool bLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	bool bLocal_170 = 0;
	bool bLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177[4] = { 0, 0, 0, 0 };
	int iLocal_178[4] = { 0, 0, 0, 0 };
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	bool bLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_165 = 1;
	func_434();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_426())
		{
			func_422();
		}
		if (Global_1966101)
		{
			Global_1966101 = 0;
			func_422();
		}
		if (Global_2667225.f_2681 && Global_2671449 != 0)
		{
			if (Global_2671449 != 6)
			{
				func_422();
			}
		}
		if (func_421() && CAM::IS_SCREEN_FADED_OUT())
		{
			func_422();
		}
		if ((!func_420(PLAYER::PLAYER_ID()) && !func_419(PLAYER::PLAYER_ID())) && !func_418(PLAYER::PLAYER_ID()))
		{
			func_422();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !BitTest(Global_4718592.f_34, 6))
		{
			func_422();
		}
		if (func_419(PLAYER::PLAYER_ID()) && func_414() != func_413())
		{
			if (BitTest(Global_2689235[func_414() /*453*/].f_318.f_4, 0) && CAM::IS_SCREEN_FADED_OUT())
			{
				func_422();
			}
		}
		if (func_419(PLAYER::PLAYER_ID()) && func_414() != func_413())
		{
			if (Global_2689235[func_414() /*453*/].f_446 != Global_1966110 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_422();
			}
		}
		if (func_419(PLAYER::PLAYER_ID()) && func_411() != 0)
		{
			func_422();
		}
		if (func_419(PLAYER::PLAYER_ID()) && func_409(PLAYER::PLAYER_ID()))
		{
			func_422();
		}
		iVar0 = 0;
		while (iVar0 < Local_152.f_26)
		{
			if ((!func_408() && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_50[iVar0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0]))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_109.f_50[iVar0], true);
			}
			iVar0++;
		}
		func_91();
		if (func_408())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x236
{
	int iVar0;
	int iVar1;
	
	func_90();
	func_87();
	func_81();
	iVar0 = 0;
	while (iVar0 < Local_152.f_26)
	{
		switch (Local_109.f_586[iVar0])
		{
			case 0:
				if (Global_2788829 != iVar0 && (Global_2788829 != -1 || func_419(PLAYER::PLAYER_ID())))
				{
					Local_109.f_25[iVar0] = 1;
					func_80(&(Local_109.f_168[iVar0 /*55*/]));
					func_79(1, iVar0);
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0])))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0]))
					{
						Local_109.f_45[iVar0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_109.f_35[iVar0]);
						if (Local_109.f_45[iVar0] != -1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), func_78(), func_77(iVar0), 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), joaat("blend_out")))
								{
									Local_109.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), Local_109.f_35[iVar0], func_78(), func_74(iVar0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iVar0]);
								}
							}
							else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), joaat("blend_out")))
							{
								Local_109.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), Local_109.f_35[iVar0], func_78(), func_77(iVar0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iVar0]);
							}
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_109.f_117[(iVar0 * 4 + iVar1)] != func_413() && Global_2788829 != iVar0) && (Global_2788829 != -1 || func_419(PLAYER::PLAYER_ID())))
					{
						func_79(2, iVar0);
						Local_109.f_40[iVar0] = iVar1;
						func_73(&(Local_109.f_159[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0])))
				{
					if (func_72(&(Local_109.f_159[iVar0 /*2*/])) && func_71(&(Local_109.f_159[iVar0 /*2*/]), 2000, 0))
					{
						Local_109.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), Local_109.f_35[iVar0], func_78(), func_70(iVar0, Local_109.f_40[iVar0]), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iVar0]);
						func_69(&(Local_109.f_159[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x5BE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	struct<3> Var11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	struct<5> Var23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	
	iVar3 = 0;
	iVar4 = 0;
	bVar6 = false;
	if (Local_109.f_576[iParam0] > 7 && Local_109.f_576[iParam0] < 12)
	{
		bVar6 = true;
	}
	if ((!func_68(iParam0, bVar6) || Global_2788829 == iParam0) || Local_109[iParam0])
	{
		Local_109[iParam0] = 1;
		func_67(iParam0);
		return;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_50[iParam0]))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
		{
			Local_109.f_10[iParam0] = 0;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]);
		}
		else if (!Local_109.f_10[iParam0])
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_109.f_50[iParam0], false);
			Local_109.f_10[iParam0] = 1;
		}
	}
	Local_109.f_45[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_109.f_35[iParam0]);
	switch (Local_109.f_576[iParam0])
	{
		case 0:
			func_66(1, iParam0);
			break;
		
		case 1:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_109.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (Local_151[iVar1 /*9*/] != 0 || Local_151[iVar1 /*9*/].f_6 != 0)
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_65(&(Local_109.f_168[iParam0 /*55*/]));
				func_64(iParam0);
				func_66(2, iParam0);
			}
			break;
		
		case 2:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_109.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (!BitTest(Local_151[iVar1 /*9*/].f_6, 0))
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_66(3, iParam0);
			}
			break;
		
		case 3:
			if (!func_63(iParam0, 18))
			{
				if (func_53(12, &(Local_109.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 18);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
				{
					if (Local_109.f_45[iParam0] != -1)
					{
						if (Local_109.f_30[iParam0] == 1)
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_77(iParam0), 3))
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
							}
						}
						else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
						{
							Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_78(), func_50(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_77(iParam0), 3))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_78(), func_74(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
							}
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
						{
							Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
						}
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]);
				}
			}
			bVar0 = true;
			iVar3 = 0;
			iVar4 = 0;
			if (!func_72(&(Local_109.f_150[iParam0 /*2*/])))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_109.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						iVar3++;
						if (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0)
						{
							func_73(&(Local_109.f_150[iParam0 /*2*/]), 0, 0);
						}
						else
						{
							iVar4++;
						}
					}
					iVar2++;
				}
				if (iVar3 == iVar4)
				{
					if (!func_72(&(Local_109.f_591[iParam0 /*2*/])))
					{
						func_73(&(Local_109.f_591[iParam0 /*2*/]), 0, 0);
					}
					else if (func_71(&(Local_109.f_591[iParam0 /*2*/]), 60000, 0))
					{
						func_64(iParam0);
						func_69(&(Local_109.f_591[iParam0 /*2*/]));
					}
					else if (func_71(&(Local_109.f_591[iParam0 /*2*/]), 30000, 0))
					{
						if (!func_63(iParam0, 17))
						{
							if (func_53(8, &(Local_109.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 17);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_109.f_591[iParam0 /*2*/]));
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_109.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0)
						{
							iVar8++;
						}
						if (!BitTest(Local_151[iVar1 /*9*/], 2))
						{
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (iVar8 > 0)
				{
					if (func_71(&(Local_109.f_150[iParam0 /*2*/]), 30000, 0) || bVar0)
					{
						func_69(&(Local_109.f_150[iParam0 /*2*/]));
						func_64(iParam0);
						func_66(4, iParam0);
					}
					else if (func_71(&(Local_109.f_150[iParam0 /*2*/]), 18000, 0))
					{
						if (!func_63(iParam0, 19))
						{
							if (func_53(13, &(Local_109.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 19);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_109.f_150[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_64(iParam0);
			if (!BitTest(Local_109.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					MISC::SET_BIT(&(Local_109.f_20[iParam0]), 11);
				}
			}
			else if (func_47(iParam0))
			{
				MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 11);
				func_66(5, iParam0);
			}
			break;
		
		case 5:
			if (!func_63(iParam0, 20))
			{
				if (func_53(21, &(Local_109.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 20);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
			{
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]);
						bVar9 = true;
					}
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]);
						bVar9 = true;
					}
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]);
						bVar9 = true;
					}
					if (bVar9)
					{
						return;
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
					{
						if (!BitTest(Local_109.f_20[iParam0], 0))
						{
							Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
						}
						else if (!BitTest(Local_109.f_20[iParam0], 8))
						{
							if (Local_109.f_45[iParam0] != -1)
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
								{
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_43(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), Local_109.f_35[iParam0], func_45(), "deck_shuffle_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), Local_109.f_35[iParam0], func_45(), "deck_shuffle_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), Local_109.f_35[iParam0], func_45(), "deck_shuffle_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									MISC::SET_BIT(&(Local_109.f_20[iParam0]), 8);
								}
							}
						}
						else if (Local_109.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 8);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), true, false);
								func_66(6, iParam0);
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), -1813854677))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), true, false);
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (!BitTest(Local_109.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					MISC::SET_BIT(&(Local_109.f_20[iParam0]), 11);
				}
			}
			else
			{
				Local_109.f_168[iParam0 /*55*/] = 0;
				func_66(7, iParam0);
			}
			break;
		
		case 7:
			Var11 = { func_76(iParam0) };
			Var11.f_2 = (Var11.f_2 + 0.914f);
			switch (Local_109.f_571[iParam0])
			{
				case 0:
					iVar1 = Local_109.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 0, 0)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 0, 0)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 1, 0)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 1, 0)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 2, 0)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 2, 0)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]);
										bVar12 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]);
										bVar12 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]);
										bVar12 = true;
									}
									if (bVar12)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_38(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p01_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p01_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p01_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_109.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_109.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_109.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_109.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_109.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 0, 1)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 0, 1)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 1, 1)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 1, 1)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 2, 1)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 2, 1)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]);
										bVar13 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]);
										bVar13 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]);
										bVar13 = true;
									}
									if (bVar13)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_35(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p02_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p02_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p02_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_109.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_109.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_109.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_109.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_109.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 0, 2)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 0, 2)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 1, 2)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 1, 2)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 2, 2)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 2, 2)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]);
										bVar14 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]);
										bVar14 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]);
										bVar14 = true;
									}
									if (bVar14)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_34(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p03_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p03_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p03_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_109.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_109.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_109.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_109.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_109.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 0, 3)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 0, 3)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 1, 3)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 1, 3)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[func_41(iParam0, 2, 3)]))
								{
									iVar10 = Local_109.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
									{
										func_39(&(Local_109.f_68[func_41(iParam0, 2, 3)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]);
										bVar15 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]);
										bVar15 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]);
										bVar15 = true;
									}
									if (bVar15)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_33(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p04_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p04_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), Local_109.f_35[iParam0], func_45(), "deck_deal_p04_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_109.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
													Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_109.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_109.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
												Local_109.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_109.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(4, iParam0);
					}
					break;
				
				case 4:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
					{
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_55[func_46(iParam0, 0)]))
						{
							iVar10 = Local_109.f_168[iParam0 /*55*/];
							STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
							{
								func_39(&(Local_109.f_55[func_46(iParam0, 0)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_55[func_46(iParam0, 1)]))
						{
							iVar10 = Local_109.f_168[iParam0 /*55*/] + 1;
							STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
							{
								func_39(&(Local_109.f_55[func_46(iParam0, 1)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_55[func_46(iParam0, 2)]))
						{
							iVar10 = Local_109.f_168[iParam0 /*55*/] + 2;
							STREAMING::REQUEST_MODEL(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5)))
							{
								func_39(&(Local_109.f_55[func_46(iParam0, 2)]), func_40(Local_109.f_168[iParam0 /*55*/].f_2[iVar10], Local_152.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]);
								bVar16 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]);
								bVar16 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]);
								bVar16 = true;
							}
							if (bVar16)
							{
								return;
							}
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
							{
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_32(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), Local_109.f_35[iParam0], func_45(), "deck_deal_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), Local_109.f_35[iParam0], func_45(), "deck_deal_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), Local_109.f_35[iParam0], func_45(), "deck_deal_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
								}
								else if (Local_109.f_45[iParam0] != -1)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
									{
										bVar7 = true;
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										if (Local_109.f_389[iParam0 /*5*/] == 0)
										{
											func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
											Local_109.f_389[iParam0 /*5*/].f_1[0] = uVar5;
											func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
											Local_109.f_389[iParam0 /*5*/].f_1[1] = uVar5;
											func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
											Local_109.f_389[iParam0 /*5*/].f_1[2] = uVar5;
											Local_109.f_389[iParam0 /*5*/] = 3;
										}
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									if (Local_109.f_389[iParam0 /*5*/] == 0)
									{
										func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
										Local_109.f_389[iParam0 /*5*/].f_1[0] = uVar5;
										func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
										Local_109.f_389[iParam0 /*5*/].f_1[1] = uVar5;
										func_37(&(Local_109.f_168[iParam0 /*55*/]), &uVar5);
										Local_109.f_389[iParam0 /*5*/].f_1[2] = uVar5;
										Local_109.f_389[iParam0 /*5*/] = 3;
									}
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(0, iParam0);
						func_66(8, iParam0);
					}
					break;
			}
			break;
		
		case 8:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]) && Local_109.f_45[iParam0] != -1)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
					{
						Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
						func_64(iParam0);
						func_66(9, iParam0);
					}
				}
			}
			break;
		
		case 9:
			bVar0 = true;
			if (!func_72(&(Local_109.f_150[iParam0 /*2*/])))
			{
				func_73(&(Local_109.f_150[iParam0 /*2*/]), 0, 0);
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_109.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if ((!BitTest(Local_151[iVar1 /*9*/], 1) && !BitTest(Local_151[iVar1 /*9*/], 3)) && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (!func_63(iParam0, 18))
							{
								if (func_53(14, &(Local_109.f_50[iParam0]), 0, -1))
								{
									func_52(iParam0, 18);
								}
							}
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (bVar0)
				{
					func_69(&(Local_109.f_150[iParam0 /*2*/]));
					func_66(10, iParam0);
				}
				else if (func_71(&(Local_109.f_150[iParam0 /*2*/]), 15000, 0))
				{
					if (!func_63(iParam0, 19))
					{
						if (func_53(9, &(Local_109.f_50[iParam0]), 0, -1))
						{
							func_52(iParam0, 19);
						}
					}
				}
			}
			break;
		
		case 10:
			switch (Local_109.f_581[iParam0])
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]);
								bVar17 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]);
								bVar17 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]);
								bVar17 = true;
							}
							if (bVar17)
							{
								return;
							}
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
							{
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_30(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), Local_109.f_35[iParam0], func_45(), "reveal_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), Local_109.f_35[iParam0], func_45(), "reveal_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), Local_109.f_35[iParam0], func_45(), "reveal_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
								}
								else if (Local_109.f_45[iParam0] != -1)
								{
									if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
									{
										bVar7 = true;
										Local_109.f_5[iParam0] = 1;
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_109.f_5[iParam0] = 1;
									MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						bVar7 = false;
						func_29(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_109.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)])) && (BitTest(Local_151[iVar1 /*9*/], 1) || BitTest(Local_151[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]);
										bVar18 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]);
										bVar18 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]);
										bVar18 = true;
									}
									if (bVar18)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_151[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_28(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p01_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_27(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p01_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_26(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p01_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_109.f_20[iParam0]), 12);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 12);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_109.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)])) && (BitTest(Local_151[iVar1 /*9*/], 1) || BitTest(Local_151[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]);
										bVar19 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]);
										bVar19 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]);
										bVar19 = true;
									}
									if (bVar19)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_151[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_20(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p02_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_19(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p02_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_18(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p02_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_109.f_20[iParam0]), 13);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 13);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_109.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)])) && (BitTest(Local_151[iVar1 /*9*/], 1) || BitTest(Local_151[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]);
										bVar20 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]);
										bVar20 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]);
										bVar20 = true;
									}
									if (bVar20)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_151[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_17(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p03_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_16(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p03_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_15(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p03_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_109.f_20[iParam0]), 14);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 14);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(4, iParam0);
					}
					break;
				
				case 4:
					iVar1 = Local_109.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_151[iVar1 /*9*/].f_2 == iParam0 && (Local_151[iVar1 /*9*/].f_3 > 0 || Local_151[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)])) && (BitTest(Local_151[iVar1 /*9*/], 1) || BitTest(Local_151[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]);
										bVar21 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]);
										bVar21 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]);
										bVar21 = true;
									}
									if (bVar21)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										if (!BitTest(Local_109.f_20[iParam0], 0))
										{
											Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_151[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_14(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), Local_109.f_35[iParam0], func_45(), "reveal_blind_p04_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_13(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), Local_109.f_35[iParam0], func_45(), "reveal_played_p04_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_151[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_12(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), Local_109.f_35[iParam0], func_45(), "reveal_folded_p04_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
										}
										else if (Local_109.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_109.f_20[iParam0]), 15);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 15);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(0, iParam0);
						func_66(11, iParam0);
					}
					break;
			}
			break;
		
		case 11:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
				{
					if (!BitTest(Local_109.f_20[iParam0], 0))
					{
						Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_78(), func_8(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
					}
					else if (BitTest(Local_109.f_20[iParam0], 0) && !BitTest(Local_109.f_20[iParam0], 2))
					{
						if (Local_109.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 9);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 2);
							}
						}
					}
					else if (BitTest(Local_109.f_20[iParam0], 9))
					{
						if (Local_109.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 9);
								func_64(iParam0);
								func_66(12, iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_63(iParam0, 21))
			{
				if (func_53(1, &(Local_109.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 21);
				}
			}
			Var23.f_1 = 3;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
			{
				if (!BitTest(Local_109.f_20[iParam0], 3))
				{
					iVar2 = iParam0 * 4;
					iVar22 = Local_109.f_117[iVar2];
					if (iVar22 != func_413() && iVar22 > -1)
					{
						if (Local_109.f_410[iVar22 /*5*/] > 0 || BitTest(Local_109.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 0)]);
									bVar24 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 0)]);
									bVar24 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 0)]);
									bVar24 = true;
								}
								if (bVar24)
								{
									return;
								}
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_7(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p01_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p01_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p01_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
								{
									if (Local_109.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
										{
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 3);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), false, false);
											Local_109.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 3);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 0)]), false, false);
										Local_109.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 3);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 3);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 3);
					}
				}
				else if (!BitTest(Local_109.f_20[iParam0], 4))
				{
					iVar2 = iParam0 * 4 + 1;
					iVar22 = Local_109.f_117[iVar2];
					if (iVar22 != func_413() && iVar22 > -1)
					{
						if (Local_109.f_410[iVar22 /*5*/] > 0 || BitTest(Local_109.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 1)]);
									bVar25 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 1)]);
									bVar25 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 1)]);
									bVar25 = true;
								}
								if (bVar25)
								{
									return;
								}
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_6(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p02_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p02_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p02_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
								{
									if (Local_109.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
										{
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 4);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), false, false);
											Local_109.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 4);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 1)]), false, false);
										Local_109.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 4);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 4);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 4);
					}
				}
				else if (!BitTest(Local_109.f_20[iParam0], 5))
				{
					iVar2 = iParam0 * 4 + 2;
					iVar22 = Local_109.f_117[iVar2];
					if (iVar22 != func_413() && iVar22 > -1)
					{
						if (Local_109.f_410[iVar22 /*5*/] > 0 || BitTest(Local_109.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 2)]);
									bVar26 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 2)]);
									bVar26 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 2)]);
									bVar26 = true;
								}
								if (bVar26)
								{
									return;
								}
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_5(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p03_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p03_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p03_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
								{
									if (Local_109.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
										{
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 5);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), false, false);
											Local_109.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 5);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 2)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 2)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 2)]), false, false);
										Local_109.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 5);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 5);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 5);
					}
				}
				else if (!BitTest(Local_109.f_20[iParam0], 6))
				{
					iVar2 = iParam0 * 4 + 3;
					iVar22 = Local_109.f_117[iVar2];
					if (iVar22 != func_413() && iVar22 > -1)
					{
						if (Local_109.f_410[iVar22 /*5*/] > 0 || BitTest(Local_109.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, 3)]);
									bVar27 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, 3)]);
									bVar27 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, 3)]);
									bVar27 = true;
								}
								if (bVar27)
								{
									return;
								}
								if (!BitTest(Local_109.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
									{
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_4(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p04_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p04_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), Local_109.f_35[iParam0], func_45(), "cards_collect_p04_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
								{
									if (Local_109.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), 2116425869))
										{
											MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_109.f_20[iParam0]), 6);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), false, false);
											Local_109.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 6);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 0, 3)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 1, 3)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(iParam0, 2, 3)]), false, false);
										Local_109.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_109.f_20[iParam0]), 6);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 6);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 6);
					}
				}
				else if (!BitTest(Local_109.f_20[iParam0], 7))
				{
					if (Local_109.f_389[iParam0 /*5*/] > 0 || BitTest(Local_109.f_20[iParam0], 0))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 0)]);
								bVar28 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 1)]);
								bVar28 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[func_46(iParam0, 2)]);
								bVar28 = true;
							}
							if (bVar28)
							{
								return;
							}
							if (!BitTest(Local_109.f_20[iParam0], 0))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
								{
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_3(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), Local_109.f_35[iParam0], func_45(), "cards_collect_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), Local_109.f_35[iParam0], func_45(), "cards_collect_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), Local_109.f_35[iParam0], func_45(), "cards_collect_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									MISC::SET_BIT(&(Local_109.f_20[iParam0]), 0);
								}
							}
							else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
							{
								if (Local_109.f_45[iParam0] != -1)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
									{
										Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
										MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_109.f_20[iParam0]), 7);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), false, false);
										Local_109.f_389[iParam0 /*5*/] = { Var23 };
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), -1406739296))
									{
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), false, false);
									}
								}
								else
								{
									Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
									MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
									MISC::SET_BIT(&(Local_109.f_20[iParam0]), 7);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 0)]), false, false);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 1)]), false, false);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_109.f_55[func_46(iParam0, 2)]), false, false);
									Local_109.f_389[iParam0 /*5*/] = { Var23 };
								}
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 7);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_109.f_20[iParam0]), 7);
					}
				}
				else if (!BitTest(Local_109.f_20[iParam0], 10))
				{
					if (Local_109.f_45[iParam0] != -1)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out")))
						{
							if (Local_109.f_30[iParam0] == 1)
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
							}
							else
							{
								Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
							}
							MISC::SET_BIT(&(Local_109.f_20[iParam0]), 10);
						}
					}
				}
				else
				{
					Local_109.f_5[iParam0] = 0;
					Local_109.f_20[iParam0] = 0;
					Local_109.f_25[iParam0]++;
					func_69(&(Local_109.f_150[iParam0 /*2*/]));
					func_66(0, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)//Position - 0x61ED
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_self";
	}
	return "cards_collect_self";
}

char* func_4(int iParam0)//Position - 0x620C
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p04";
	}
	return "cards_collect_p04";
}

char* func_5(int iParam0)//Position - 0x622B
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p03";
	}
	return "cards_collect_p03";
}

char* func_6(int iParam0)//Position - 0x624A
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p02";
	}
	return "cards_collect_p02";
}

char* func_7(int iParam0)//Position - 0x6269
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p01";
	}
	return "cards_collect_p01";
}

char* func_8(int iParam0)//Position - 0x6288
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar1 = func_9(&(Local_109.f_389[iParam0 /*5*/].f_1), 0, 0);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar2 = Local_109.f_117[(iParam0 * 4 + iVar3)];
		if (iVar2 != func_413())
		{
			iVar4 = func_9(&(Local_109.f_410[iVar2 /*5*/].f_1), 0, 0);
			if (iVar4 > iVar1 && (BitTest(Local_151[iVar2 /*9*/], 1) || Local_151[iVar2 /*9*/].f_3 <= 0))
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (Local_109.f_15[iParam0] >= 7)
	{
		if (iVar1 < 12)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				
				default:
			}
		}
		else if (bVar0)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				}
			
			default:
		}
	}
	else if (iVar1 < 12)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			default:
		}
	}
	else if (bVar0)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(var uParam0, bool bParam1, bool bParam2)//Position - 0x648A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if ((func_11((*uParam0)[0]) != func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2])) && func_11((*uParam0)[1]) != func_11((*uParam0)[2]))
	{
		bVar0 = false;
		iVar1 = ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2]));
		if (iVar1 == 19)
		{
			if ((((func_11((*uParam0)[0]) == 14 || func_11((*uParam0)[0]) == 2) || func_11((*uParam0)[0]) == 3) && ((func_11((*uParam0)[1]) == 14 || func_11((*uParam0)[1]) == 2) || func_11((*uParam0)[1]) == 3)) && ((func_11((*uParam0)[2]) == 14 || func_11((*uParam0)[2]) == 2) || func_11((*uParam0)[2]) == 3))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 9)
		{
			if ((((func_11((*uParam0)[0]) == 2 || func_11((*uParam0)[0]) == 3) || func_11((*uParam0)[0]) == 4) && ((func_11((*uParam0)[1]) == 2 || func_11((*uParam0)[1]) == 3) || func_11((*uParam0)[1]) == 4)) && ((func_11((*uParam0)[2]) == 2 || func_11((*uParam0)[2]) == 3) || func_11((*uParam0)[2]) == 4))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 12)
		{
			if ((((func_11((*uParam0)[0]) == 3 || func_11((*uParam0)[0]) == 4) || func_11((*uParam0)[0]) == 5) && ((func_11((*uParam0)[1]) == 3 || func_11((*uParam0)[1]) == 4) || func_11((*uParam0)[1]) == 5)) && ((func_11((*uParam0)[2]) == 3 || func_11((*uParam0)[2]) == 4) || func_11((*uParam0)[2]) == 5))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 15)
		{
			if ((((func_11((*uParam0)[0]) == 4 || func_11((*uParam0)[0]) == 5) || func_11((*uParam0)[0]) == 6) && ((func_11((*uParam0)[1]) == 4 || func_11((*uParam0)[1]) == 5) || func_11((*uParam0)[1]) == 6)) && ((func_11((*uParam0)[2]) == 4 || func_11((*uParam0)[2]) == 5) || func_11((*uParam0)[2]) == 6))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 18)
		{
			if ((((func_11((*uParam0)[0]) == 5 || func_11((*uParam0)[0]) == 6) || func_11((*uParam0)[0]) == 7) && ((func_11((*uParam0)[1]) == 5 || func_11((*uParam0)[1]) == 6) || func_11((*uParam0)[1]) == 7)) && ((func_11((*uParam0)[2]) == 5 || func_11((*uParam0)[2]) == 6) || func_11((*uParam0)[2]) == 7))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 21)
		{
			if ((((func_11((*uParam0)[0]) == 6 || func_11((*uParam0)[0]) == 7) || func_11((*uParam0)[0]) == 8) && ((func_11((*uParam0)[1]) == 6 || func_11((*uParam0)[1]) == 7) || func_11((*uParam0)[1]) == 8)) && ((func_11((*uParam0)[2]) == 6 || func_11((*uParam0)[2]) == 7) || func_11((*uParam0)[2]) == 8))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 24)
		{
			if ((((func_11((*uParam0)[0]) == 7 || func_11((*uParam0)[0]) == 8) || func_11((*uParam0)[0]) == 9) && ((func_11((*uParam0)[1]) == 7 || func_11((*uParam0)[1]) == 8) || func_11((*uParam0)[1]) == 9)) && ((func_11((*uParam0)[2]) == 7 || func_11((*uParam0)[2]) == 8) || func_11((*uParam0)[2]) == 9))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 27)
		{
			if ((((func_11((*uParam0)[0]) == 8 || func_11((*uParam0)[0]) == 9) || func_11((*uParam0)[0]) == 10) && ((func_11((*uParam0)[1]) == 8 || func_11((*uParam0)[1]) == 9) || func_11((*uParam0)[1]) == 10)) && ((func_11((*uParam0)[2]) == 8 || func_11((*uParam0)[2]) == 9) || func_11((*uParam0)[2]) == 10))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 30)
		{
			if ((((func_11((*uParam0)[0]) == 9 || func_11((*uParam0)[0]) == 10) || func_11((*uParam0)[0]) == 11) && ((func_11((*uParam0)[1]) == 9 || func_11((*uParam0)[1]) == 10) || func_11((*uParam0)[1]) == 11)) && ((func_11((*uParam0)[2]) == 9 || func_11((*uParam0)[2]) == 10) || func_11((*uParam0)[2]) == 11))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 33)
		{
			if ((((func_11((*uParam0)[0]) == 10 || func_11((*uParam0)[0]) == 11) || func_11((*uParam0)[0]) == 12) && ((func_11((*uParam0)[1]) == 10 || func_11((*uParam0)[1]) == 11) || func_11((*uParam0)[1]) == 12)) && ((func_11((*uParam0)[2]) == 10 || func_11((*uParam0)[2]) == 11) || func_11((*uParam0)[2]) == 12))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 36)
		{
			if ((((func_11((*uParam0)[0]) == 11 || func_11((*uParam0)[0]) == 12) || func_11((*uParam0)[0]) == 13) && ((func_11((*uParam0)[1]) == 11 || func_11((*uParam0)[1]) == 12) || func_11((*uParam0)[1]) == 13)) && ((func_11((*uParam0)[2]) == 11 || func_11((*uParam0)[2]) == 12) || func_11((*uParam0)[2]) == 13))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 39)
		{
			if ((((func_11((*uParam0)[0]) == 12 || func_11((*uParam0)[0]) == 13) || func_11((*uParam0)[0]) == 14) && ((func_11((*uParam0)[1]) == 12 || func_11((*uParam0)[1]) == 13) || func_11((*uParam0)[1]) == 14)) && ((func_11((*uParam0)[2]) == 12 || func_11((*uParam0)[2]) == 13) || func_11((*uParam0)[2]) == 14))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (iVar1 == 19)
			{
				iVar1 = 6;
			}
			if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
			{
				return iVar1 + 500;
			}
			return iVar1 + 300;
		}
	}
	iVar2 = 0;
	if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + 100;
		}
		else
		{
			return func_11((*uParam0)[2]);
		}
	}
	else if (func_11((*uParam0)[1]) == func_11((*uParam0)[2]) && func_11((*uParam0)[1]) != func_11((*uParam0)[0]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[1]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0]);
		}
	}
	else if (func_11((*uParam0)[2]) == func_11((*uParam0)[0]) && func_11((*uParam0)[2]) != func_11((*uParam0)[1]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[1]);
		}
	}
	else if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) == func_11((*uParam0)[2]))
	{
		return ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2])) + 400;
	}
	else if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
	{
		iVar2 = 200;
	}
	if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]) && func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0]) + iVar2);
	}
	else if (func_11((*uParam0)[1]) > func_11((*uParam0)[0]) && func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[1]) + iVar2);
	}
	else if (func_11((*uParam0)[2]) > func_11((*uParam0)[0]) && func_11((*uParam0)[2]) > func_11((*uParam0)[1]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[2]) + iVar2);
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x70ED
{
	switch (iParam0)
	{
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
			return 0;
		
		case 14:
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
		case 26:
			return 1;
		
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
			return 2;
		
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
			return 3;
		
		default:
	}
	return 3;
}

int func_11(int iParam0)//Position - 0x7245
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
			return 10;
		
		case 11:
		case 24:
		case 37:
		case 50:
			return 11;
		
		case 12:
		case 25:
		case 38:
		case 51:
			return 12;
		
		case 13:
		case 26:
		case 39:
		case 52:
			return 13;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 14;
		
		default:
	}
	return 0;
}

char* func_12(int iParam0)//Position - 0x73C8
{
	if (Local_109.f_15[iParam0] > 7)
	{
		return "female_reveal_folded_p04";
	}
	return "reveal_folded_p04";
}

char* func_13(int iParam0)//Position - 0x73E7
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p04";
	}
	return "reveal_played_p04";
}

char* func_14(int iParam0)//Position - 0x7406
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p04";
	}
	return "reveal_blind_p04";
}

char* func_15(int iParam0)//Position - 0x7425
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p03";
	}
	return "reveal_folded_p03";
}

char* func_16(int iParam0)//Position - 0x7444
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p03";
	}
	return "reveal_played_p03";
}

char* func_17(int iParam0)//Position - 0x7463
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p03";
	}
	return "reveal_blind_p03";
}

char* func_18(int iParam0)//Position - 0x7482
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p02";
	}
	return "reveal_folded_p02";
}

char* func_19(int iParam0)//Position - 0x74A1
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p02";
	}
	return "reveal_played_p02";
}

char* func_20(int iParam0)//Position - 0x74C0
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p02";
	}
	return "reveal_blind_p02";
}

int func_21(int iParam0, int iParam1)//Position - 0x74DF
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 1;
	}
	if (!func_24(iParam0, iParam1) && !func_22(iParam1))
	{
		return func_53(11, &(Local_109.f_50[iParam0]), 0, -1);
	}
	return 1;
}

int func_22(int iParam0)//Position - 0x753E
{
	int iVar0;
	
	if (Local_151[iParam0 /*9*/].f_5 > 0)
	{
		iVar0 = func_9(&(Local_109.f_410[iParam0 /*5*/].f_1), 0, 0);
		if (func_23(iVar0) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)//Position - 0x7575
{
	if (iParam0 > 500)
	{
		return 40;
	}
	else if (iParam0 > 400)
	{
		return 30;
	}
	else if (iParam0 > 300)
	{
		return 6;
	}
	else if (iParam0 > 200)
	{
		return 4;
	}
	else if (iParam0 > 100)
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)//Position - 0x75C6
{
	int iVar0;
	int iVar1;
	
	if (Local_151[iParam1 /*9*/].f_3 > 0 && BitTest(Local_151[iParam1 /*9*/], 1))
	{
		iVar0 = func_9(&(Local_109.f_410[iParam1 /*5*/].f_1), 0, 0);
		iVar1 = func_9(&(Local_109.f_389[iParam0 /*5*/].f_1), 0, 0);
		if (!func_25(iVar1))
		{
			return 1;
		}
		if (iVar0 > iVar1)
		{
			return 1;
		}
		if (iVar0 == iVar1)
		{
			iVar0 = func_9(&(Local_109.f_410[iParam1 /*5*/].f_1), 1, 0);
			iVar1 = func_9(&(Local_109.f_389[iParam0 /*5*/].f_1), 1, 0);
			if (iVar0 > iVar1)
			{
				return 1;
			}
			if (iVar0 == iVar1)
			{
				iVar0 = func_9(&(Local_109.f_410[iParam1 /*5*/].f_1), 0, 1);
				iVar1 = func_9(&(Local_109.f_389[iParam0 /*5*/].f_1), 0, 1);
				if (iVar0 > iVar1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x769A
{
	if (iParam0 >= 12)
	{
		return 1;
	}
	return 0;
}

char* func_26(int iParam0)//Position - 0x76AE
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p01";
	}
	return "reveal_folded_p01";
}

char* func_27(int iParam0)//Position - 0x76CD
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p01";
	}
	return "reveal_played_p01";
}

char* func_28(int iParam0)//Position - 0x76EC
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p01";
	}
	return "reveal_blind_p01";
}

void func_29(int iParam0, int iParam1)//Position - 0x770B
{
	Local_109.f_581[iParam1] = iParam0;
}

char* func_30(int iParam0)//Position - 0x771E
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_reveal_self";
	}
	return "reveal_self";
}

char* func_31(int iParam0)//Position - 0x773D
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_put_down";
	}
	return "deck_put_down";
}

char* func_32(int iParam0)//Position - 0x775C
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_self";
	}
	return "deck_deal_self";
}

char* func_33(int iParam0)//Position - 0x777B
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p04";
	}
	return "deck_deal_p04";
}

char* func_34(int iParam0)//Position - 0x779A
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p03";
	}
	return "deck_deal_p03";
}

char* func_35(int iParam0)//Position - 0x77B9
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p02";
	}
	return "deck_deal_p02";
}

void func_36(int iParam0, int iParam1)//Position - 0x77D8
{
	Local_109.f_571[iParam1] = iParam0;
}

int func_37(var uParam0, var uParam1)//Position - 0x77EB
{
	if (*uParam0 >= uParam0->f_1)
	{
		return 0;
	}
	*uParam1 = uParam0->f_2[*uParam0];
	*uParam0++;
	return 1;
}

char* func_38(int iParam0)//Position - 0x7816
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p01";
	}
	return "deck_deal_p01";
}

int func_39(var uParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x7835
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam4, bParam3, bParam5));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_OBJ(*uParam0), bParam6);
		if (bParam8)
		{
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam9)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam3)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(int iParam0, bool bParam1)//Position - 0x78DA
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_a_a");
			
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_02a");
			
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_03a");
			
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_04a");
			
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_05a");
			
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_06a");
			
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_07a");
			
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_08a");
			
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_09a");
			
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_10a");
			
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_j_a");
			
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_q_a");
			
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_k_a");
			
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_02a");
			
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_03a");
			
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_04a");
			
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_05a");
			
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_06a");
			
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_07a");
			
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_08a");
			
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_09a");
			
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_10a");
			
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_02a");
			
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_03a");
			
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_04a");
			
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_05a");
			
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_06a");
			
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_07a");
			
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_08a");
			
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_09a");
			
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_10a");
			
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_ace");
			
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_02");
			
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_03");
			
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_04");
			
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_05");
			
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_06");
			
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_07");
			
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_08");
			
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_09");
			
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_10");
			
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_jack");
			
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_queen");
			
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_king");
			
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_ace");
			
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_02");
			
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_03");
			
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_04");
			
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_05");
			
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_06");
			
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_07");
			
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_08");
			
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_09");
			
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_10");
			
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_jack");
			
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_queen");
			
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_king");
			
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_02");
			
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_03");
			
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_04");
			
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_05");
			
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_06");
			
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_07");
			
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_08");
			
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_09");
			
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_10");
			
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_king");
			
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_ace");
			
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_02");
			
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_03");
			
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_04");
			
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_05");
			
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_06");
			
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_07");
			
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_08");
			
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_09");
			
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_10");
			
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_jack");
			
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_queen");
			
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x7FE1
{
	return ((iParam0 * 3 * 4 + iParam2 * 3) + iParam1);
}

char* func_42(int iParam0)//Position - 0x7FF7
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_idle";
	}
	return "deck_idle";
}

char* func_43(int iParam0)//Position - 0x8018
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_shuffle";
	}
	return "deck_shuffle";
}

char* func_44(int iParam0)//Position - 0x8037
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_deck_pick_up";
	}
	return "deck_pick_up";
}

char* func_45()//Position - 0x8056
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_46(int iParam0, int iParam1)//Position - 0x8062
{
	return (iParam0 * 3 + iParam1);
}

int func_47(int iParam0)//Position - 0x8071
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	Var3 = { func_76(iParam0) };
	Var3.f_2 = (Var3.f_2 + 0.914f);
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar0 = func_46(iParam0, iVar4);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 53);
		iVar1 = func_40(iVar2, Local_152.f_5);
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_55[iVar0]))
		{
			STREAMING::REQUEST_MODEL(iVar1);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1) || !func_39(&(Local_109.f_55[iVar0]), iVar1, Var3, 1, 1, 1, 1, 1, 1, 1))
			{
				return 0;
			}
		}
		iVar4++;
	}
	return 1;
}

int func_48(int iParam0)//Position - 0x8108
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar1 = func_41(iParam0, iVar3, iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_68[iVar1]))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[iVar1]))
				{
					func_49(&(Local_109.f_68[iVar1]));
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[iVar1]);
					bVar0 = true;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar1 = func_46(iParam0, iVar4);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_55[iVar1]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_55[iVar1]))
			{
				func_49(&(Local_109.f_55[iVar1]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_55[iVar1]);
				bVar0 = true;
			}
		}
		iVar4++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_49(var uParam0)//Position - 0x81E3
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

char* func_50(int iParam0)//Position - 0x821C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_109.f_117[(iParam0 * 4 + iVar2)] != func_413())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_109.f_15[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_51(int iParam0, int iParam1)//Position - 0x8373
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_109.f_117[(iParam0 * 4 + iVar1)] != func_413())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_109.f_15[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

void func_52(int iParam0, int iParam1)//Position - 0x8438
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	MISC::SET_BIT(&(Local_109.f_20[iParam0]), iParam1);
}

int func_53(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x8477
{
	char cVar0[64];
	int iVar1;
	char* sVar2;
	
	StringCopy(&cVar0, func_55(iParam0, iParam3), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NET_TO_PED(*uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar1))
	{
		return 0;
	}
	sVar2 = func_54(7);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iVar1, &cVar0, sVar2, 1);
	return 1;
}

int func_54(int iParam0)//Position - 0x84EC
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

char* func_55(int iParam0, int iParam1)//Position - 0x86E1
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 1:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 3:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 2:
			return func_56(iParam1);
		
		case 4:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 5:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 6:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 7:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 9:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 21:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 8:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 10:
			return "MINIGAME_DEALER_BUSTS";
		
		case 11:
			return "MINIGAME_DEALER_WINS";
		
		case 12:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 13:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 15:
			return "";
		
		case 16:
			return "";
		
		case 17:
			return "";
		
		case 18:
			return "";
		
		case 19:
			return "";
		
		case 20:
			return "";
		
		default:
	}
	return "";
}

char* func_56(int iParam0)//Position - 0x8814
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (func_60(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_58(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_57(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_57(int iParam0)//Position - 0x888D
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0)//Position - 0x88AC
{
	int iVar0;
	
	iVar0 = Local_151[*iParam0 /*9*/].f_2;
	return func_59(iVar0, Local_152.f_26);
}

int func_59(int iParam0, int iParam1)//Position - 0x88CB
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x88F3
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_61(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_61(int iParam0)//Position - 0x8914
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

int func_62(int iParam0, bool bParam1, bool bParam2)//Position - 0x895D
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

int func_63(int iParam0, int iParam1)//Position - 0x89BD
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return BitTest(Local_109.f_20[iParam0], iParam1);
}

void func_64(int iParam0)//Position - 0x89FB
{
	MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 16);
	MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 17);
	MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 18);
	MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 19);
	MISC::CLEAR_BIT(&(Local_109.f_20[iParam0]), 21);
}

void func_65(var uParam0)//Position - 0x8A49
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = 0;
	uParam0->f_1 = 52;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			iVar0 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, uParam0->f_1);
			uVar2 = uParam0->f_2[iVar1];
			uParam0->f_2[iVar1] = uParam0->f_2[iVar0];
			uParam0->f_2[iVar0] = uVar2;
			iVar1++;
		}
		iVar3++;
	}
}

void func_66(int iParam0, int iParam1)//Position - 0x8AB1
{
	Local_109.f_576[iParam1] = iParam0;
}

void func_67(int iParam0)//Position - 0x8AC4
{
	struct<5> Var0;
	
	Local_109[iParam0] = 1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0])))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), func_78(), func_77(iParam0), 3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]))
			{
				Local_109.f_45[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_109.f_35[iParam0]);
				if (Local_109.f_45[iParam0] == -1 || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), joaat("blend_out"))))
				{
					Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_50[iParam0]);
			}
			return;
		}
	}
	if (func_48(iParam0))
	{
		Local_109.f_20[iParam0] = 0;
		Var0.f_1 = 3;
		Local_109.f_389[iParam0 /*5*/] = { Var0 };
		Local_109.f_5[iParam0] = 0;
		func_69(&(Local_109.f_150[iParam0 /*2*/]));
		func_79(1, iParam0);
		func_66(0, iParam0);
		func_36(0, iParam0);
		func_29(0, iParam0);
		Local_109.f_25[iParam0]++;
		Local_109[iParam0] = 0;
	}
}

int func_68(int iParam0, bool bParam1)//Position - 0x8C66
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_109.f_117[(iParam0 * 4 + iVar1)] != func_413() && Local_109.f_410[Local_109.f_117[(iParam0 * 4 + iVar1)] /*5*/] > 0)
			{
				iVar0++;
			}
			else
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]);
					}
					else
					{
						func_49(&(Local_109.f_68[func_41(iParam0, 0, iVar1)]));
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]);
					}
					else
					{
						func_49(&(Local_109.f_68[func_41(iParam0, 1, iVar1)]));
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]);
					}
					else
					{
						func_49(&(Local_109.f_68[func_41(iParam0, 2, iVar1)]));
					}
				}
			}
		}
		else if (Local_109.f_117[(iParam0 * 4 + iVar1)] != func_413())
		{
			iVar0++;
		}
		else
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 0, iVar1)]);
				}
				else
				{
					func_49(&(Local_109.f_68[func_41(iParam0, 0, iVar1)]));
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 1, iVar1)]);
				}
				else
				{
					func_49(&(Local_109.f_68[func_41(iParam0, 1, iVar1)]));
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(iParam0, 2, iVar1)]);
				}
				else
				{
					func_49(&(Local_109.f_68[func_41(iParam0, 2, iVar1)]));
				}
			}
		}
		iVar1++;
	}
	if (Local_109.f_30[iParam0] != iVar0)
	{
		Local_109.f_30[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0)//Position - 0x8F0A
{
	uParam0->f_1 = 0;
}

char* func_70(int iParam0, int iParam1)//Position - 0x8F17
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_71(var uParam0, int iParam1, bool bParam2)//Position - 0x8FA8
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_73(uParam0, bParam2, 0);
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

bool func_72(var uParam0)//Position - 0x9006
{
	return uParam0->f_1;
}

void func_73(var uParam0, bool bParam1, bool bParam2)//Position - 0x9012
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

char* func_74(int iParam0)//Position - 0x9057
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_75(int iParam0)//Position - 0x910A
{
	if (Local_152.f_26 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -135f;
			
			case 1:
				return 45f;
			
			case 2:
				return -45f;
			
			case 3:
				return -45f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_76(int iParam0)//Position - 0x9166
{
	if (Local_152.f_26 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1143.338f, 264.2453f, -52.8409f;
			
			case 1:
				return 1146.329f, 261.2543f, -52.8409f;
			
			case 2:
				return 1133.74f, 266.6947f, -52.0409f;
			
			case 3:
				return 1148.74f, 251.6947f, -52.0409f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_77(int iParam0)//Position - 0x91F6
{
	if (Local_109.f_15[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_78()//Position - 0x9215
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_79(int iParam0, int iParam1)//Position - 0x9221
{
	Local_109.f_586[iParam1] = iParam0;
}

void func_80(var uParam0)//Position - 0x9234
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 52;
	iVar3 = 0;
	while (iVar3 < 52)
	{
		iVar1 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar2);
		iVar4 = 0;
		while (iVar4 < 52)
		{
			iVar6 = (iVar4 / 32);
			bVar7 = (iVar4 % 32);
			if (iVar5 == iVar1 && !BitTest(uVar0[iVar6], bVar7))
			{
				MISC::SET_BIT(&(uVar0[iVar6]), bVar7);
				uParam0->f_2[iVar3] = iVar4 + 1;
			}
			else
			{
				if (!BitTest(uVar0[iVar6], bVar7))
				{
					iVar5++;
				}
				iVar4++;
			}
		}
		iVar5 = 0;
		iVar2 = (iVar2 - 1);
		iVar3++;
	}
	uParam0->f_1 = 52;
}

void func_81()//Position - 0x92D6
{
	int iVar0;
	
	if (!func_85(PLAYER::PLAYER_ID()))
	{
		iVar0 = iLocal_186;
		if (Global_2788829 != iVar0 && (Global_2788829 != -1 || func_419(PLAYER::PLAYER_ID())))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]))
			{
				func_82(iVar0);
			}
		}
		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0]))
			{
				func_49(&(Local_109.f_50[iVar0]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_50[iVar0]);
			}
		}
	}
	iLocal_186++;
	if (iLocal_186 >= Local_152.f_26)
	{
		iLocal_186 = 0;
	}
}

void func_82(int iParam0)//Position - 0x937C
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("s_m_y_casino_01");
	if (Local_109.f_15[iParam0] >= 7)
	{
		iVar0 = joaat("s_f_y_casino_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(func_78());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_78()))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(true);
			}
			iVar1 = PED::CREATE_PED(26, iVar0, func_76(iParam0), func_75(iParam0), true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
			PED::SET_PED_AS_ENEMY(iVar1, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			PED::SET_PED_RESET_FLAG(iVar1, 249, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 185, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 108, true);
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			ENTITY::_0x352E2B5CF420BF3B(iVar1, 1);
			PED::SET_PED_CAN_EVASIVE_DIVE(iVar1, false);
			PED::_0x2F3C3D9F50681DE4(iVar1, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar1, false);
			PED::SET_PED_CONFIG_FLAG(iVar1, 208, true);
			PED::SET_PED_CAN_RAGDOLL(iVar1, false);
			func_84(Local_109.f_15[iParam0], &iVar1);
			func_83(Local_109.f_15[iParam0], &iVar1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_76(iParam0), false, false, true);
			ENTITY::SET_ENTITY_HEADING(iVar1, func_75(iParam0));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				Local_109.f_50[iParam0] = NETWORK::PED_TO_NET(iVar1);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iParam0]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_109.f_50[iParam0], false);
					Local_109.f_10[iParam0] = 1;
					Local_109.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_50[iParam0]), Local_109.f_35[iParam0], func_78(), func_77(iParam0), 1000f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_35[iParam0]);
					STREAMING::REMOVE_ANIM_DICT(func_78());
				}
			}
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(false);
			}
		}
	}
}

void func_83(int iParam0, int iParam1)//Position - 0x955D
{
	switch (iParam0)
	{
		case 0:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			AUDIO::_SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_84(int iParam0, int iParam1)//Position - 0x96BC
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false);
			break;
		
		case 12:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false);
			break;
	}
}

int func_85(int iParam0)//Position - 0x9DEF
{
	if (iParam0 != func_413() && func_62(iParam0, 1, 1))
	{
		if (func_86(iParam0) && !func_418(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x9E28
{
	if (iParam0 != func_413() && func_62(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

void func_87()//Position - 0x9E59
{
	struct<5> Var0;
	bool bVar1;
	int iVar2;
	
	Var0.f_1 = 3;
	bVar1 = false;
	iVar2 = iLocal_185;
	if (Local_151[iVar2 /*9*/].f_2 == -1)
	{
		Local_109.f_410[iVar2 /*5*/] = { Var0 };
	}
	if (Local_151[iVar2 /*9*/].f_7 == 0)
	{
		if (Local_109.f_600[iVar2] != 0)
		{
			Local_109.f_600[iVar2] = 0;
		}
	}
	if (!bVar1)
	{
		if (func_88(iVar2))
		{
			bVar1 = true;
		}
	}
	iLocal_185++;
	if (iLocal_185 >= 32)
	{
		iLocal_185 = 0;
	}
}

int func_88(int iParam0)//Position - 0x9ED8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_408())
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_151[iParam0 /*9*/].f_7.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 1)
	{
		if (func_53(2, &(Local_109.f_50[iVar2]), 0, iParam0))
		{
			func_89(iParam0, 1);
		}
		return 1;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 2)
	{
		if (func_53(3, &(Local_109.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 2);
		}
		return 1;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 4)
	{
		if (func_53(4, &(Local_109.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 4);
		}
		return 1;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 5)
	{
		if (func_53(5, &(Local_109.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 5);
		}
		return 1;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 6)
	{
		if (func_53(6, &(Local_109.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 6);
		}
		return 1;
	}
	if (Local_151[iParam0 /*9*/].f_7 == 7)
	{
		if (func_53(7, &(Local_109.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1)//Position - 0xA03A
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	MISC::SET_BIT(&(Local_109.f_600[iParam0]), iVar0);
}

void func_90()//Position - 0xA07F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_184;
	if (Local_109.f_117[iVar0] != func_413())
	{
		iVar1 = Local_109.f_117[iVar0];
		if (((!func_62(Local_109.f_117[iVar0], 1, 1) || Local_151[iVar1 /*9*/].f_1 == -1) || Local_151[iVar1 /*9*/].f_1 != iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_109.f_117[iVar0]))
		{
			Local_109.f_117[iVar0] = func_413();
			if (Local_109.f_600[iVar0] != 0)
			{
				Local_109.f_600[iVar0] = 0;
			}
		}
	}
	if (func_62(iVar0, 1, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		if (Local_151[iVar0 /*9*/].f_1 > -1 && Local_151[iVar0 /*9*/].f_1 < 32)
		{
			if (Local_109.f_117[Local_151[iVar0 /*9*/].f_1] == func_413())
			{
				if (func_62(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
				{
					Local_109.f_117[Local_151[iVar0 /*9*/].f_1] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
			}
		}
	}
	iLocal_184++;
	if (iLocal_184 >= 32)
	{
		iLocal_184 = 0;
	}
}

void func_91()//Position - 0xA193
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<16> Var6;
	struct<3> Var7;
	
	if (!Local_152.f_5)
	{
		if (func_419(PLAYER::PLAYER_ID()) && func_414() != func_413())
		{
			if (BitTest(Global_2689235[func_414() /*453*/].f_318.f_4, 4))
			{
				Local_152.f_5 = 1;
				func_407();
				iLocal_179 = 1;
			}
		}
	}
	else if (iLocal_179)
	{
		if (func_406())
		{
			iLocal_179 = 0;
		}
	}
	func_405();
	Local_152.f_19 = func_402();
	func_392();
	func_388();
	func_385();
	if (Local_152.f_798 > 2)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 210, true);
		PAD::SET_INPUT_EXCLUSIVE(2, 210);
		PAD::DISABLE_CONTROL_ACTION(2, 26, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 210))
		{
		}
		if (func_384(Local_152.f_18) >= 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_76(func_384(Local_152.f_18)), true) > 5f)
		{
			func_379(0);
		}
	}
	if (Local_152.f_798 > 5)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		func_377(1);
		func_376(1, 0);
	}
	if (Local_152.f_798 > 6)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 0, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 0))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 0)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
			}
		}
		CAM::_0x9F97DA93681F87EA();
	}
	if (Local_152.f_798 > 7)
	{
		func_372(&(Local_151[PLAYER::PLAYER_ID() /*9*/]));
	}
	if (func_371())
	{
		bLocal_181 = true;
	}
	else if (bLocal_181)
	{
		func_370(&uLocal_182, 0, 0);
		bLocal_181 = false;
	}
	else if (func_72(&uLocal_182) && func_71(&uLocal_182, 500, 0))
	{
		func_69(&uLocal_182);
	}
	switch (Local_152.f_798)
	{
		case 0:
			if (func_365())
			{
				Local_152.f_796 = "idle_cardgames";
				Local_152.f_22 = 0;
				Local_151[PLAYER::PLAYER_ID() /*9*/] = 0;
				Local_151[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
				Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
				Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
				func_364(PLAYER::PLAYER_ID());
				func_363(1);
			}
			break;
		
		case 1:
			switch (func_384(Local_152.f_18))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_152.f_16 = 5000;
					Local_152.f_17 = 10;
					Local_152.f_27 = 500;
					Local_152.f_28 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_152.f_16 = 50000;
					Local_152.f_17 = 1000;
					Local_152.f_27 = 5000;
					Local_152.f_28 = 1000;
					break;
			}
			if (Local_152.f_26 == 1)
			{
				bVar0 = true;
				Local_152.f_16 = 50000;
				Local_152.f_17 = 1000;
				Local_152.f_27 = 5000;
				Local_152.f_28 = 1000;
			}
			if (((((((((((((((((((((((!Global_262145.f_26944 && !(Global_262145.f_26946 && !bVar0)) && !(Global_262145.f_26945 && bVar0)) && ((func_362(joaat("rm_GamingFloor_02")) || func_362(joaat("rm_GamingFloor_03"))) || func_419(PLAYER::PLAYER_ID()))) && func_360(PLAYER::PLAYER_PED_ID(), func_361(Local_152.f_18), 1.5f, 1)) && func_355(PLAYER::PLAYER_PED_ID(), func_359(Local_152.f_18), 40f)) && Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] == 0) && !BitTest(Global_1946250.f_4, 2)) && !Global_2667225.f_2681) && Global_2788829 != func_384(Local_152.f_18)) && (Global_2788829 != -1 || func_419(PLAYER::PLAYER_ID()))) && func_354()) && !func_350()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_347(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2667225.f_2681) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_346()) && !func_345()) && !func_343()) && !Global_2725439.f_12) && Global_1946244 != 33) && !func_342())
			{
				func_363(2);
			}
			else
			{
				Local_152.f_18++;
				if (Local_152.f_18 >= Local_152.f_26 * 4)
				{
					Local_152.f_18 = 0;
				}
			}
			break;
		
		case 2:
			func_341();
			func_364(PLAYER::PLAYER_ID());
			if (((((((((((((((((((((func_362(joaat("rm_GamingFloor_02")) || func_362(joaat("rm_GamingFloor_03"))) || func_419(PLAYER::PLAYER_ID())) && func_360(PLAYER::PLAYER_PED_ID(), func_361(Local_152.f_18), 1.5f, 1)) && func_355(PLAYER::PLAYER_PED_ID(), func_359(Local_152.f_18), 40f)) && Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] == 0) && Global_2788829 != func_384(Local_152.f_18)) && (Global_2788829 != -1 || func_419(PLAYER::PLAYER_ID()))) && func_354()) && !func_350()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_347(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2667225.f_2681) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_346()) && !func_345()) && !func_343()) && !Global_2725439.f_12) && Global_1946244 != 33) && !Local_109[func_384(Local_152.f_18)]) && !func_342())
			{
				if ((((((func_62(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_340()) && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !bLocal_181) && !func_72(&uLocal_182))
				{
					if (func_338(2, &uVar1))
					{
						if (!func_337("TCP_NA"))
						{
							func_336("TCP_NA");
						}
					}
					else if (Local_109.f_117[Local_152.f_18] != func_413())
					{
						if (!func_337("TCP_USED"))
						{
							func_336("TCP_USED");
						}
					}
					else if (func_335())
					{
						if (func_331() == 2)
						{
							if (!func_337("CAS_MG_CTIME"))
							{
								func_336("CAS_MG_CTIME");
							}
						}
						else if (!func_337("CAS_MG_CBAN"))
						{
							func_336("CAS_MG_CBAN");
						}
					}
					else if ((!func_330(PLAYER::PLAYER_ID()) && (func_384(Local_152.f_18) == 2 || func_384(Local_152.f_18) == 3)) && !(func_329(1) && func_330(func_328())))
					{
						if (!func_337("CAS_MG_SUITE2"))
						{
							func_336("CAS_MG_SUITE2");
						}
					}
					else if (!func_327() && !(func_329(1) && func_326(func_328())))
					{
						if (!func_324("CAS_MG_MEMB2", func_325(1)))
						{
							func_323("CAS_MG_MEMB2", func_325(1));
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2, 52))
						{
							HUD::CLEAR_HELP(true);
							func_322();
							func_363(3);
						}
					}
					else if (Local_152.f_19 <= 0)
					{
						if (func_419(PLAYER::PLAYER_ID()))
						{
							if (!func_337("CAS_MG_NOCHIPS7"))
							{
								func_336("CAS_MG_NOCHIPS7");
							}
						}
						else if (!func_337("CAS_MG_NOCHIPS3"))
						{
							func_336("CAS_MG_NOCHIPS3");
						}
					}
					else if (Local_152.f_19 < Local_152.f_28)
					{
						if (func_419(PLAYER::PLAYER_ID()))
						{
							if (!func_337("CAS_MG_LOWCHIPS7"))
							{
								func_336("CAS_MG_LOWCHIPS7");
							}
						}
						else if (!func_337("CAS_MG_LOWCHIPS3"))
						{
							func_336("CAS_MG_LOWCHIPS3");
						}
					}
					else if (Local_152.f_31 == -1)
					{
						if (func_321())
						{
							HUD::CLEAR_HELP(true);
						}
						if (((!func_330(PLAYER::PLAYER_ID()) && (func_384(Local_152.f_18) == 2 || func_384(Local_152.f_18) == 3)) && !(func_329(1) && func_330(func_328()))) || (!func_327() && (func_329(1) && func_326(func_328()))))
						{
							if (func_318(func_328()) == 1)
							{
								Local_152.f_25 = 1;
								func_317(&(Local_152.f_31), 4, "TCP_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_316(func_328()))
							{
								Local_152.f_25 = 2;
								func_317(&(Local_152.f_31), 4, "TCP_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_152.f_25 = 3;
								func_317(&(Local_152.f_31), 4, "TCP_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_152.f_25 = 0;
							func_317(&(Local_152.f_31), 4, "TCP_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_315(Local_152.f_31, 1))
					{
						func_313(&(Local_152.f_31));
						Local_152.f_31 = -1;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
						func_312();
						func_302(PLAYER::PLAYER_ID(), 0, 1048832, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						func_363(4);
					}
				}
				else
				{
					if (func_321())
					{
						HUD::CLEAR_HELP(true);
					}
					if (Local_152.f_31 != -1)
					{
						func_313(&(Local_152.f_31));
						Local_152.f_31 = -1;
					}
					Local_152.f_18 = 0;
					func_363(1);
				}
			}
			else
			{
				if (func_321())
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_152.f_31 != -1)
				{
					func_313(&(Local_152.f_31));
					Local_152.f_31 = -1;
				}
				Local_152.f_18 = 0;
				func_363(1);
			}
			break;
		
		case 3:
			if (!func_301())
			{
				func_363(2);
			}
			break;
		
		case 4:
			func_377(1);
			sVar2 = "CasinoUI_Cards_Three";
			if ((func_384(Local_152.f_18) == 2 || func_384(Local_152.f_18) == 3) || func_419(PLAYER::PLAYER_ID()))
			{
				sVar2 = "CasinoUI_Cards_Three_High";
			}
			if (BitTest(Global_1946250.f_5, 22))
			{
				func_370(&(Local_152.f_792), 0, 0);
				func_300(Local_152.f_18);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					func_302(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				else
				{
					func_302(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				func_363(5);
			}
			else
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar2, false);
				if (func_298(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar2))
				{
					if (!iLocal_180)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
						func_297(0, 0);
						func_295(1, sVar2, sVar2);
						func_294("TCP_TITLE");
						func_293(-1, 1, 1);
						func_292("TCP_DIS", 0, 0);
						func_291("TCP_DIS1");
						func_291("TCP_DIS2");
						func_291("TCP_DIS3");
						func_290(202, "TCP_EXIT", -1);
						func_290(201, "TCP_CONT", -1);
						iLocal_180 = 1;
					}
					func_263(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_260(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_180 = 0;
					func_251();
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_260(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_180 = 0;
					MISC::SET_BIT(&(Global_1946250.f_5), 22);
					func_370(&(Local_152.f_792), 0, 0);
					func_300(Local_152.f_18);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						func_302(PLAYER::PLAYER_ID(), 0, 0, 0);
					}
					else
					{
						func_302(PLAYER::PLAYER_ID(), 0, 256, 0);
					}
					func_363(5);
				}
			}
			break;
		
		case 5:
			if ((((func_250(Local_152.f_18) && !func_339()) && !func_371()) && func_354()) && !func_350())
			{
				func_69(&(Local_152.f_792));
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 3);
				func_241(2);
				func_363(6);
			}
			else
			{
				if (func_339())
				{
					func_251();
				}
				if (func_371())
				{
					func_251();
				}
				if (func_240(Local_152.f_18))
				{
					func_251();
				}
				if (func_239())
				{
					func_251();
				}
				if (!func_354())
				{
					func_251();
				}
				if (func_350())
				{
					func_251();
				}
			}
			break;
		
		case 6:
			if (!func_339() && !func_371())
			{
				if (func_238())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 1 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 2)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
					}
					fVar3 = func_236(PLAYER::PLAYER_PED_ID(), func_237(Local_152.f_18, 0), 1);
					fVar4 = func_236(PLAYER::PLAYER_PED_ID(), func_237(Local_152.f_18, 1), 1);
					fVar5 = func_236(PLAYER::PLAYER_PED_ID(), func_237(Local_152.f_18, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_152.f_21 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_152.f_21 = 2;
					}
					else
					{
						Local_152.f_21 = 0;
					}
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_237(Local_152.f_18, Local_152.f_21), 1f, 5000, func_235(Local_152.f_18, Local_152.f_21), 0.01f);
					func_363(7);
				}
			}
			else
			{
				func_251();
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
			{
				Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_152.f_18), func_233(Local_152.f_18), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_232(), func_231(Local_152.f_21), 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
				Local_151[PLAYER::PLAYER_ID() /*9*/].f_7.f_1 = Local_151[PLAYER::PLAYER_ID() /*9*/].f_2;
				func_363(8);
			}
			break;
		
		case 8:
			CAM::_0x79C0E43EB9B944E2(-1938411241);
			Local_152.f_30 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_152.f_24);
			if (func_230())
			{
				func_229(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 2);
			}
			else
			{
				func_229(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 1);
			}
			if (Local_152.f_30 != -1)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("ShowUi"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))
				{
					func_302(PLAYER::PLAYER_ID(), 0, 256, 0);
					Local_162 = { Var6 };
					if (func_419(PLAYER::PLAYER_ID()))
					{
						Local_162.f_0 = 1695074466;
					}
					else if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 3)
					{
						Local_162.f_0 = 1952785842;
					}
					else
					{
						Local_162.f_0 = joaat("standard");
					}
					Local_162.f_1 = Local_151[PLAYER::PLAYER_ID() /*9*/].f_2;
					Local_162.f_6 = 1;
					if (func_330(PLAYER::PLAYER_ID()))
					{
						Local_162.f_15 = 1983458449;
					}
					else if (func_327())
					{
						Local_162.f_15 = 1334658487;
					}
					else if (func_329(1) && (func_330(func_328()) || func_227(PLAYER::PLAYER_ID())))
					{
						Local_162.f_15 = 980726932;
					}
					else
					{
						Local_162.f_15 = 939907746;
					}
					func_370(&uLocal_159, 0, 0);
					func_226();
					Local_152.f_32 = func_402();
					func_363(9);
				}
			}
			break;
		
		case 9:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			CAM::_0x79C0E43EB9B944E2(-1938411241);
			func_95();
			break;
		
		case 10:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) == 1)
			{
				func_229(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), func_94());
				Var7 = { PAD::GET_CONTROL_NORMAL(2, 218), PAD::GET_CONTROL_NORMAL(2, 219), 0f };
				Local_152.f_30 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_152.f_24);
				if (Local_152.f_7)
				{
					if (Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
					{
						Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_152.f_18), func_233(Local_152.f_18), 2, false, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_232(), func_93(Local_152.f_18), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
						Local_152.f_7 = 0;
					}
				}
				else if (Local_152.f_30 != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) || (SYSTEM::VMAG(Var7) >= 0.24f && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_302(PLAYER::PLAYER_ID(), 1, 0, 0);
					STREAMING::REMOVE_ANIM_DICT(func_45());
					STREAMING::REMOVE_ANIM_DICT(func_78());
					STREAMING::REMOVE_ANIM_DICT(func_92());
					STREAMING::REMOVE_ANIM_DICT(func_232());
					func_407();
					MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 3);
					func_341();
					func_363(2);
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_302(PLAYER::PLAYER_ID(), 1, 0, 0);
				STREAMING::REMOVE_ANIM_DICT(func_45());
				STREAMING::REMOVE_ANIM_DICT(func_78());
				STREAMING::REMOVE_ANIM_DICT(func_92());
				STREAMING::REMOVE_ANIM_DICT(func_232());
				MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 3);
				func_341();
				func_363(2);
			}
			break;
	}
}

char* func_92()//Position - 0xB2EE
{
	return "anim_casino_b@amb@casino@games@threecardpoker@player";
}

char* func_93(int iParam0)//Position - 0xB2FA
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_94()//Position - 0xB344
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_402();
	iVar1 = (iVar0 - Local_152.f_32);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_95()//Position - 0xB371
{
	int iVar0;
	struct<9> Var1;
	struct<5> Var2;
	struct<23> Var3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	char* sVar29;
	bool bVar30;
	bool bVar31;
	
	if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
	{
		if (func_225(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2))
		{
			func_224("TCP_ERROR", -1);
			return;
		}
	}
	func_211();
	if (func_408())
	{
		Local_162.f_10 = 1;
	}
	Local_162.f_11 = func_209();
	if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2, 202) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_pickup", 3)) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)) && !Local_152.f_1) && !func_208())
	{
		Local_161.f_4 = joaat("QUIT");
		Local_162.f_2 = joaat("QUIT");
		Local_161.f_22 = joaat("QUIT");
		Local_161.f_7 = func_402();
		Local_161.f_17 = func_207(&uLocal_157, 0, 0);
		Local_161.f_18 = func_408();
		Local_161.f_19 = func_209();
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
		{
			Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
		}
		if ((Local_152.f_797 > 1 || Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 != 0) || Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 != 0)
		{
			if (Global_262145.f_26815)
			{
				STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
			}
		}
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0 && !Local_152.f_2)
		{
			func_206(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
		}
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 > 0 && !Local_152.f_6)
		{
			func_206(Local_151[PLAYER::PLAYER_ID() /*9*/].f_5);
		}
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 > 0 && !Local_152.f_3)
		{
			func_206(Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
		}
		SECURITY::_UNREGISTER_PROTECTED_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
		SECURITY::_UNREGISTER_PROTECTED_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_5));
		SECURITY::_UNREGISTER_PROTECTED_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_4));
		func_379(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (((Global_2788829 == Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 || Global_2725439.f_12) || Global_1946244 == 33) || !func_204())
	{
		Local_161.f_7 = func_402();
		Local_161.f_17 = func_207(&uLocal_157, 0, 0);
		Local_161.f_18 = func_408();
		Local_161.f_19 = func_209();
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
		{
			Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
		}
		if (Global_262145.f_26815)
		{
			STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
		}
		func_379(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (Local_152.f_24 > -1)
	{
		Local_152.f_30 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_152.f_24);
		if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_idle", 3)) && !BitTest(Local_152.f_22, 0)) && !Local_152.f_1)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_232(), "idle_cardgames", 3))
			{
				if (Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
				{
					Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_232(), "idle_cardgames", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
					Local_152.f_796 = "idle_cardgames";
				}
			}
			else if (Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
			{
				Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_232(), func_203(0), 2f, -2f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
			}
		}
	}
	if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
	{
		func_201(&(Local_152.f_90));
		if (!BitTest(Local_152.f_20, 0) && !BitTest(Local_152.f_20, 3))
		{
			func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 202, true), "TCP_EXIT", &(Local_152.f_90), 0);
			if (((((Local_152.f_797 == 3 && Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0) && !BitTest(Local_152.f_22, 2)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_152.f_22, 1)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 3))
			{
				func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 201, true), "TCP_PLAY_HAND", &(Local_152.f_90), 0);
				func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 203, true), "TCP_FOLD_HAND", &(Local_152.f_90), 0);
			}
			if (Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] == 3 && ((Local_152.f_19 >= Local_152.f_28 || Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 != 0) || Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 != 0))
			{
				if (!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 0) && !BitTest(Local_152.f_22, 0))
				{
					if (Local_152.f_19 >= Local_152.f_17 * 2)
					{
						func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 201, true), "TCP_PLACE", &(Local_152.f_90), 0);
					}
					func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 203, true), "TCP_DECLINEA", &(Local_152.f_90), 0);
					if (Local_152.f_19 >= Local_152.f_17 * 2)
					{
						if (!BitTest(Local_152.f_22, 8))
						{
							func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 204, true), "TCP_BET_MAX", &(Local_152.f_90), 0);
						}
						func_199(2, 7, "TCP_BET_NUM", &(Local_152.f_90));
					}
				}
				else if ((!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 2) && Local_152.f_19 >= (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_152.f_28)) && !BitTest(Local_152.f_22, 0))
				{
					func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 201, true), "TCP_PLACE_PP", &(Local_152.f_90), 0);
					func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 203, true), "TCP_DECLINE", &(Local_152.f_90), 0);
					if (!BitTest(Local_152.f_22, 8))
					{
						func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 204, true), "TCP_BET_MAX", &(Local_152.f_90), 0);
					}
					func_199(2, 7, "TCP_BET_NUM", &(Local_152.f_90));
				}
			}
		}
		if (BitTest(Local_152.f_20, 0))
		{
			func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 202, true), "IB_BACK", &(Local_152.f_90), 0);
			func_199(2, 8, "IB_TAB", &(Local_152.f_90));
		}
		else if (BitTest(Local_152.f_20, 3))
		{
			func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 202, true), "IB_BACK", &(Local_152.f_90), 0);
		}
		if (Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] < 12)
		{
			if (Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] > 0)
			{
				func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 208, true), "TCP_DLR", &(Local_152.f_90), 0);
			}
			if (Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] > 0)
			{
				if (BitTest(Local_152.f_22, 4) || BitTest(Local_109.f_20[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2], func_198(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1)))
				{
					func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 207, true), "TCP_CARDS", &(Local_152.f_90), 0);
				}
				else if (((((Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0 && Local_152.f_797 == 3) && !BitTest(Local_152.f_22, 2)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_152.f_22, 1)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 3))
				{
					func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 207, true), "TCP_PICK_UP", &(Local_152.f_90), 0);
				}
			}
		}
		if (!BitTest(Local_152.f_20, 0) && !BitTest(Local_152.f_20, 3))
		{
			func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 210, true), "TCP_RULESb", &(Local_152.f_90), 0);
			func_200(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 209, true), "TCP_HANDSb", &(Local_152.f_90), 0);
		}
		Var1 = { func_197() };
		func_196(&(Local_152.f_90), 1f);
		func_188(&(Local_152.f_89), &Var1, &(Local_152.f_90), func_195(&(Local_152.f_90)));
		func_187(1);
	}
	func_182();
	func_162();
	switch (Local_152.f_797)
	{
		case 0:
			if (Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] == 3)
			{
				if ((Local_152.f_15 > (Local_152.f_19 / 2) || Local_152.f_15 < Local_152.f_17) || Local_152.f_15 > Local_152.f_16)
				{
					Local_152.f_15 = Local_152.f_17;
				}
				if ((((Local_152.f_23 > Local_152.f_19 || Local_152.f_23 > Local_152.f_27) || Local_152.f_23 < Local_152.f_28) || Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_152.f_23 > Local_152.f_19)
				{
					Local_152.f_23 = Local_152.f_28;
				}
				Var2.f_1 = 3;
				Local_152.f_854 = { Var2 };
				Local_161 = { Var3 };
				Local_161.f_10 = 1;
				Local_161.f_0 = -941885798;
				Local_161.f_11 = func_330(PLAYER::PLAYER_ID());
				if (func_330(PLAYER::PLAYER_ID()))
				{
					Local_161.f_20 = 1983458449;
				}
				else if (func_327())
				{
					Local_161.f_20 = 1334658487;
				}
				else if (func_329(1) && (func_330(func_328()) || func_227(PLAYER::PLAYER_ID())))
				{
					Local_161.f_20 = 980726932;
				}
				else
				{
					Local_161.f_20 = 939907746;
				}
				if (func_419(PLAYER::PLAYER_ID()))
				{
					Local_161.f_1 = 1695074466;
				}
				else if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 3)
				{
					Local_161.f_1 = 1952785842;
				}
				else
				{
					Local_161.f_1 = joaat("standard");
				}
				func_370(&uLocal_157, 0, 0);
				Local_161.f_3 = Local_109.f_25[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
				Local_161.f_2 = Local_151[PLAYER::PLAYER_ID() /*9*/].f_2;
				func_161(1);
			}
			break;
		
		case 1:
			if ((!func_327() && !(func_329(1) && func_326(func_328()))) || ((!func_330(PLAYER::PLAYER_ID()) && (func_384(Local_152.f_18) == 2 || func_384(Local_152.f_18) == 3)) && !(func_329(1) && func_330(func_328()))))
			{
				if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				Local_162.f_2 = 939907746;
				Local_161.f_4 = 939907746;
				Local_161.f_7 = func_402();
				Local_161.f_17 = func_207(&uLocal_157, 0, 0);
				Local_161.f_18 = func_408();
				Local_161.f_19 = func_209();
				if (Global_262145.f_26815)
				{
					STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
				}
				func_379(1);
				HUD::CLEAR_HELP(true);
				if (Local_152.f_25 == 1)
				{
					func_224("IT_MEMBOc", -1);
				}
				else if (Local_152.f_25 == 2)
				{
					func_224("IT_MEMBOa", -1);
				}
				else if (Local_152.f_25 == 3)
				{
					func_224("IT_MEMBOb", -1);
				}
				return;
			}
			if ((((Local_152.f_19 < Local_152.f_28 && Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 == 0) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 == 0) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 == 0) && !Local_152.f_1)
			{
				Local_161.f_4 = -1275559872;
				Local_162.f_2 = -1275559872;
				Local_161.f_7 = func_402();
				Local_161.f_17 = func_207(&uLocal_157, 0, 0);
				Local_161.f_18 = func_408();
				Local_161.f_19 = func_209();
				if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26815)
				{
					STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
				}
				func_379(1);
				HUD::CLEAR_HELP(true);
				if (func_419(PLAYER::PLAYER_ID()))
				{
					if (Local_152.f_19 <= 0)
					{
						func_224("CAS_MG_NOCHIPS7", -1);
					}
					else
					{
						func_224("CAS_MG_LOWCHIPS7", -1);
					}
				}
				else if (Local_152.f_19 <= 0)
				{
					func_224("CAS_MG_NOCHIPS3", -1);
				}
				else
				{
					func_224("CAS_MG_LOWCHIPS3", -1);
				}
				return;
			}
			if (func_335())
			{
				switch (func_331())
				{
					case 0:
						Local_161.f_4 = 1982714739;
						break;
					
					case 1:
						Local_161.f_4 = -633175758;
						break;
					
					case 2:
						Local_161.f_4 = -1625999354;
						break;
				}
				switch (func_331())
				{
					case 0:
						Local_162.f_2 = 1982714739;
						break;
					
					case 1:
						Local_162.f_2 = -633175758;
						break;
					
					case 2:
						Local_162.f_2 = -1625999354;
						break;
				}
				Local_161.f_7 = func_402();
				Local_161.f_17 = func_207(&uLocal_157, 0, 0);
				Local_161.f_18 = func_408();
				Local_161.f_19 = func_209();
				if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26815)
				{
					STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
				}
				func_379(1);
				HUD::CLEAR_HELP(true);
				if (func_331() == 2)
				{
					func_224("CAS_MG_CTIME", -1);
				}
				else
				{
					func_224("CAS_MG_CBAN", -1);
				}
				return;
			}
			if (((!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 0) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 2)) && !BitTest(Local_152.f_22, 0)) && (!func_354() || func_350()))
			{
				Local_161.f_7 = func_402();
				Local_161.f_17 = func_207(&uLocal_157, 0, 0);
				Local_161.f_18 = func_408();
				Local_161.f_19 = func_209();
				if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26815)
				{
					STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
				}
				func_379(1);
				HUD::CLEAR_HELP(true);
				return;
			}
			if (!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 0))
			{
				if (!BitTest(Local_152.f_22, 0))
				{
					if ((((((!BitTest(Local_152.f_29, 1) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !PAD::IS_CONTROL_JUST_PRESSED(2, 204)) && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3))
					{
						bVar5 = PAD::IS_CONTROL_PRESSED(2, 188);
						bVar6 = PAD::IS_CONTROL_PRESSED(2, 187);
						if (bVar6 || ((((((bVar5 && !PAD::IS_CONTROL_JUST_PRESSED(2, 204)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)))
						{
							func_73(&(Local_152.f_790), 0, 0);
							MISC::SET_BIT(&(Local_152.f_29), 1);
						}
					}
					else if (func_71(&(Local_152.f_790), 100, 0))
					{
						func_69(&(Local_152.f_790));
						MISC::CLEAR_BIT(&(Local_152.f_29), 1);
					}
					if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2, 204) && !bVar6) && !bVar5) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)) && !BitTest(Local_152.f_22, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar4 = true;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_152.f_15 >= 10000)
							{
								iVar7 = 5000;
							}
							else if (Local_152.f_15 >= 5000)
							{
								iVar7 = 1000;
							}
							else if (Local_152.f_15 >= 500)
							{
								iVar7 = 500;
							}
							else if (Local_152.f_15 >= 100)
							{
								iVar7 = 50;
							}
							else
							{
								iVar7 = 10;
							}
							if (Local_152.f_15 > (Local_152.f_19 / 2))
							{
								Local_152.f_15 = (Local_152.f_15 - iVar7);
							}
							if (Local_152.f_15 < Local_152.f_17)
							{
								Local_152.f_15 = Local_152.f_17;
							}
							if (Local_152.f_15 > Local_152.f_16)
							{
								Local_152.f_15 = Local_152.f_16;
							}
							Local_152.f_15 = (Local_152.f_15 + iVar7);
							if (Local_152.f_15 > (Local_152.f_19 / 2))
							{
								bVar4 = false;
								Local_152.f_15 = (Local_152.f_15 - iVar7);
							}
							if (Local_152.f_15 < Local_152.f_17)
							{
								Local_152.f_15 = Local_152.f_17;
							}
							if (Local_152.f_15 > Local_152.f_16)
							{
								bVar4 = false;
								Local_152.f_15 = Local_152.f_16;
							}
						}
					}
					else
					{
						if (Local_152.f_15 >= 10000)
						{
							iVar7 = 5000;
						}
						else if (Local_152.f_15 >= 5000)
						{
							iVar7 = 1000;
						}
						else if (Local_152.f_15 >= 500)
						{
							iVar7 = 500;
						}
						else if (Local_152.f_15 >= 100)
						{
							iVar7 = 50;
						}
						else
						{
							iVar7 = 10;
						}
						if (Local_152.f_15 > (Local_152.f_19 / 2))
						{
							Local_152.f_15 = (Local_152.f_15 - iVar7);
						}
						if (Local_152.f_15 < Local_152.f_17)
						{
							Local_152.f_15 = Local_152.f_17;
						}
						if (Local_152.f_15 > Local_152.f_16)
						{
							Local_152.f_15 = Local_152.f_16;
						}
						iVar8 = Local_152.f_15;
						if (bVar5)
						{
							Local_152.f_15 = (Local_152.f_15 + iVar7);
							if (Local_152.f_15 > (Local_152.f_19 / 2))
							{
								Local_152.f_15 = (Local_152.f_15 - iVar7);
							}
							if (Local_152.f_15 < Local_152.f_17)
							{
								Local_152.f_15 = Local_152.f_17;
							}
							if (Local_152.f_15 > Local_152.f_16)
							{
								Local_152.f_15 = Local_152.f_16;
							}
							if (Local_152.f_15 == iVar8)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || !BitTest(Local_152.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_152.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_152.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar6)
						{
							if (Local_152.f_15 <= 100)
							{
								iVar7 = 10;
							}
							else if (Local_152.f_15 <= 500)
							{
								iVar7 = 50;
							}
							else if (Local_152.f_15 <= 5000)
							{
								iVar7 = 500;
							}
							else if (Local_152.f_15 <= 10000)
							{
								iVar7 = 1000;
							}
							else
							{
								iVar7 = 5000;
							}
							Local_152.f_15 = (Local_152.f_15 - iVar7);
							if (Local_152.f_15 < Local_152.f_17)
							{
								Local_152.f_15 = Local_152.f_17;
							}
							if (Local_152.f_15 == iVar8)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || !BitTest(Local_152.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_152.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_152.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_152.f_15 == Local_152.f_16 || (Local_152.f_15 + iVar7) > Local_152.f_16) || (Local_152.f_15 + iVar7) > (Local_152.f_19 / 2))
					{
						MISC::SET_BIT(&(Local_152.f_22), 8);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_152.f_22), 8);
					}
					MISC::SET_BIT(&(Local_152.f_29), 0);
					iVar0 = (30 - (func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
					{
						if ((((!NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3))
						{
							if (((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 203)) && Local_152.f_15 >= Local_152.f_17) && Local_152.f_19 >= Local_152.f_17 * 2)
							{
								MISC::SET_BIT(&(Local_152.f_22), 0);
								Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								if (func_160(Local_152.f_15))
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "bet_ante_large", 2f, -2f, 13, 16, 1000f, 0);
								}
								else
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "bet_ante", 2f, -2f, 13, 16, 1000f, 0);
								}
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							}
							else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !PAD::IS_CONTROL_PRESSED(2, 201)) || Local_152.f_19 < Local_152.f_28)
							{
								Local_152.f_19 = func_402();
								if ((((Local_152.f_23 > Local_152.f_19 || Local_152.f_23 > Local_152.f_27) || Local_152.f_23 < Local_152.f_28) || Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_152.f_23 > Local_152.f_19)
								{
									Local_152.f_23 = Local_152.f_28;
								}
								MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 0);
							}
						}
						if (func_72(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (Local_152.f_19 < Local_152.f_17 * 2)
						{
							if (((!func_337("TCP_LOW") && !bLocal_170) && !bLocal_171) && !bLocal_166)
							{
								func_158("TCP_LOW");
							}
						}
						else if (((!func_337("TCP_PLACE_ANTE") && !bLocal_170) && !bLocal_171) && !bLocal_166)
						{
							func_158("TCP_PLACE_ANTE");
						}
					}
				}
				else
				{
					if (((!func_337("TCP_PLACE_ANTE") && !bLocal_170) && !bLocal_171) && !bLocal_166)
					{
						func_158("TCP_PLACE_ANTE");
					}
					if (func_72(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_152.f_30 != -1 && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 0))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
						{
							MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 0);
							MISC::CLEAR_BIT(&(Local_152.f_22), 0);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
						{
							Local_152.f_1 = 1;
						}
						if (Local_152.f_1)
						{
							if (func_155(Local_152.f_15, &(Local_152.f_14), 2, Local_152.f_0))
							{
								if (Local_152.f_14 == 3)
								{
									Local_152.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_152.f_22), 0);
									Local_152.f_14 = 0;
								}
								else
								{
									Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 = Local_152.f_15;
									SECURITY::_REGISTER_PROTECTED_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
									if (Local_152.f_15 >= 10000)
									{
										iVar9 = 5000;
									}
									else if (Local_152.f_15 >= 5000)
									{
										iVar9 = 1000;
									}
									else if (Local_152.f_15 >= 500)
									{
										iVar9 = 500;
									}
									else if (Local_152.f_15 >= 100)
									{
										iVar9 = 50;
									}
									else
									{
										iVar9 = 10;
									}
									if ((Local_152.f_15 == Local_152.f_16 || (Local_152.f_15 + iVar9) > Local_152.f_16) || (Local_152.f_15 + iVar9) > (Local_152.f_19 / 2))
									{
										Local_161.f_5 = 1;
									}
									Local_161.f_6 = (Local_161.f_6 - Local_152.f_15);
									Local_162.f_3 = (Local_162.f_3 - Local_152.f_15);
									Local_162.f_7 = (Local_162.f_7 + Local_152.f_15);
									Local_161.f_12 = (Local_161.f_12 + Local_152.f_15);
									Local_152.f_19 = func_402();
									if ((((Local_152.f_23 > Local_152.f_19 || Local_152.f_23 > Local_152.f_27) || Local_152.f_23 < Local_152.f_28) || Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_152.f_23 > Local_152.f_19)
									{
										Local_152.f_23 = Local_152.f_28;
									}
									Local_152.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_152.f_15, "TCP_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else if (!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 2))
			{
				if (!BitTest(Local_152.f_22, 0))
				{
					if ((((((!BitTest(Local_152.f_29, 1) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 204))
					{
						bVar10 = PAD::IS_CONTROL_PRESSED(2, 188);
						bVar11 = PAD::IS_CONTROL_PRESSED(2, 187);
						if (bVar11 || ((((((bVar10 && !PAD::IS_CONTROL_JUST_PRESSED(2, 204)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)))
						{
							func_73(&(Local_152.f_790), 0, 0);
							MISC::SET_BIT(&(Local_152.f_29), 1);
						}
					}
					else if (func_71(&(Local_152.f_790), 100, 0))
					{
						func_69(&(Local_152.f_790));
						MISC::CLEAR_BIT(&(Local_152.f_29), 1);
					}
					if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2, 204) && !bVar11) && !bVar10) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3)) && !BitTest(Local_152.f_22, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar4 = true;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_152.f_23 >= 10000)
							{
								iVar12 = 5000;
							}
							else if (Local_152.f_23 >= 5000)
							{
								iVar12 = 1000;
							}
							else if (Local_152.f_23 >= 500)
							{
								iVar12 = 500;
							}
							else if (Local_152.f_23 >= 100)
							{
								iVar12 = 50;
							}
							else
							{
								iVar12 = 10;
							}
							if (Local_152.f_23 > Local_152.f_19)
							{
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
							if (Local_152.f_23 > Local_152.f_27)
							{
								Local_152.f_23 = Local_152.f_27;
							}
							if (Local_152.f_23 < Local_152.f_28)
							{
								Local_152.f_23 = Local_152.f_28;
							}
							if (Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
							Local_152.f_23 = (Local_152.f_23 + iVar12);
							if (Local_152.f_23 > Local_152.f_19)
							{
								bVar4 = false;
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
							if (Local_152.f_23 > Local_152.f_27)
							{
								bVar4 = false;
								Local_152.f_23 = Local_152.f_27;
							}
							if (Local_152.f_23 < Local_152.f_28)
							{
								Local_152.f_23 = Local_152.f_28;
							}
							if (Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								bVar4 = false;
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
						}
					}
					else
					{
						if (Local_152.f_23 >= 10000)
						{
							iVar12 = 5000;
						}
						else if (Local_152.f_23 >= 5000)
						{
							iVar12 = 1000;
						}
						else if (Local_152.f_23 >= 500)
						{
							iVar12 = 500;
						}
						else if (Local_152.f_23 >= 100)
						{
							iVar12 = 50;
						}
						else
						{
							iVar12 = 10;
						}
						if (Local_152.f_23 > Local_152.f_19)
						{
							Local_152.f_23 = (Local_152.f_23 - iVar12);
						}
						if (Local_152.f_23 > Local_152.f_27)
						{
							Local_152.f_23 = Local_152.f_27;
						}
						if (Local_152.f_23 < Local_152.f_28)
						{
							Local_152.f_23 = Local_152.f_28;
						}
						if (Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
						{
							Local_152.f_23 = (Local_152.f_23 - iVar12);
						}
						iVar13 = Local_152.f_23;
						if (bVar10)
						{
							Local_152.f_23 = (Local_152.f_23 + iVar12);
							if (Local_152.f_23 > Local_152.f_19)
							{
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
							if (Local_152.f_23 > Local_152.f_27)
							{
								Local_152.f_23 = Local_152.f_27;
							}
							if (Local_152.f_23 < Local_152.f_28)
							{
								Local_152.f_23 = Local_152.f_28;
							}
							if (Local_152.f_23 > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								Local_152.f_23 = (Local_152.f_23 - iVar12);
							}
							if (Local_152.f_23 == iVar13)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || !BitTest(Local_152.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_152.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_152.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar11)
						{
							if (Local_152.f_23 <= 100)
							{
								iVar12 = 10;
							}
							else if (Local_152.f_23 <= 500)
							{
								iVar12 = 50;
							}
							else if (Local_152.f_23 <= 5000)
							{
								iVar12 = 500;
							}
							else if (Local_152.f_23 <= 10000)
							{
								iVar12 = 1000;
							}
							else
							{
								iVar12 = 5000;
							}
							Local_152.f_23 = (Local_152.f_23 - iVar12);
							if (Local_152.f_23 < Local_152.f_28)
							{
								Local_152.f_23 = Local_152.f_28;
							}
							if (Local_152.f_23 == iVar13)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || !BitTest(Local_152.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_152.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_152.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_152.f_23 == Local_152.f_27 || (Local_152.f_23 + iVar12) > Local_152.f_27) || (Local_152.f_23 + iVar12) > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
					{
						MISC::SET_BIT(&(Local_152.f_22), 8);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_152.f_22), 8);
					}
					MISC::SET_BIT(&(Local_152.f_29), 0);
					iVar0 = (30 - (func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
					{
						if ((((!NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3))
						{
							if (((((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 203)) && !PAD::IS_CONTROL_PRESSED(2, 204)) && Local_152.f_23 >= Local_152.f_28) && Local_152.f_23 <= Local_152.f_19) && Local_152.f_19 >= (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_152.f_28))
							{
								MISC::SET_BIT(&(Local_152.f_22), 0);
								Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								if (func_160(Local_152.f_23))
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "bet_plus_large", 2f, -2f, 13, 16, 1000f, 0);
								}
								else
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "bet_plus", 2f, -2f, 13, 16, 1000f, 0);
								}
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							}
							else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !PAD::IS_CONTROL_PRESSED(2, 201)) && !PAD::IS_CONTROL_PRESSED(2, 204)) || Local_152.f_19 < (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_152.f_28))
							{
								if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
								{
									MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 2);
								}
								else
								{
									Local_161.f_4 = joaat("QUIT");
									Local_162.f_2 = joaat("QUIT");
									Local_161.f_7 = func_402();
									Local_161.f_17 = func_207(&uLocal_157, 0, 0);
									Local_161.f_18 = func_408();
									Local_161.f_19 = func_209();
									if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
									{
										Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
									}
									if (Global_262145.f_26815)
									{
										STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
									}
									func_379(1);
									HUD::CLEAR_HELP(true);
									return;
								}
							}
						}
						if (func_72(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (((!func_337("TCP_PLACE_PAIR") && !bLocal_170) && !bLocal_171) && !bLocal_166)
						{
							func_158("TCP_PLACE_PAIR");
						}
					}
				}
				else
				{
					if (((!func_337("TCP_PLACE_PAIR") && !bLocal_170) && !bLocal_171) && !bLocal_166)
					{
						func_158("TCP_PLACE_PAIR");
					}
					if (func_72(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_152.f_30 != -1 && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 2))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 > 0)
						{
							MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 2);
							MISC::CLEAR_BIT(&(Local_152.f_22), 0);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
						{
							Local_152.f_1 = 1;
						}
						if (Local_152.f_1)
						{
							if (func_155(Local_152.f_23, &(Local_152.f_14), 2, Local_152.f_0))
							{
								if (Local_152.f_14 == 3)
								{
									Local_152.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_152.f_22), 0);
									Local_152.f_14 = 0;
								}
								else
								{
									Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 = Local_152.f_23;
									SECURITY::_REGISTER_PROTECTED_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_5));
									if (Local_152.f_23 >= 10000)
									{
										iVar14 = 5000;
									}
									else if (Local_152.f_23 >= 5000)
									{
										iVar14 = 1000;
									}
									else if (Local_152.f_23 >= 500)
									{
										iVar14 = 500;
									}
									else if (Local_152.f_23 >= 100)
									{
										iVar14 = 50;
									}
									else
									{
										iVar14 = 10;
									}
									if ((Local_152.f_23 == Local_152.f_27 || (Local_152.f_23 + iVar14) > Local_152.f_27) || (Local_152.f_23 + iVar14) > (Local_152.f_19 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
									{
										Local_161.f_5 = 1;
									}
									Local_161.f_6 = (Local_161.f_6 - Local_152.f_23);
									Local_162.f_3 = (Local_162.f_3 - Local_152.f_23);
									Local_162.f_8 = (Local_162.f_8 + Local_152.f_23);
									Local_161.f_13 = (Local_161.f_13 + Local_152.f_23);
									Local_152.f_19 = func_402();
									Local_152.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_152.f_23, "TCP_BET3", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				bVar15 = true;
				iVar16 = 0;
				while (iVar16 < 4)
				{
					iVar17 = Local_109.f_117[(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar16)];
					if (iVar17 != -1)
					{
						if (!BitTest(Local_151[iVar17 /*9*/], 2))
						{
							bVar15 = false;
						}
					}
					iVar16++;
				}
				if ((((!func_337("TCP_WAIT") && !bVar15) && !bLocal_170) && !bLocal_171) && !bLocal_166)
				{
					func_158("TCP_WAIT");
				}
				if (func_72(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
				{
					if (func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
					{
						func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
			}
			if ((Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] > 3 && !BitTest(Local_152.f_22, 0)) && !Local_152.f_1)
			{
				if (BitTest(Local_152.f_29, 0))
				{
					HUD::CLEAR_HELP(true);
					Local_162.f_12++;
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0 && Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
					{
						MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 5);
					}
					func_161(2);
				}
				else
				{
					bVar18 = true;
					iVar19 = 0;
					while (iVar19 < 4)
					{
						iVar20 = Local_109.f_117[(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar19)];
						if (iVar20 != -1)
						{
							if (!BitTest(Local_151[iVar20 /*9*/], 2))
							{
								bVar18 = false;
							}
						}
						iVar19++;
					}
					if ((((!func_337("TCP_WAIT") && !bVar18) && !bLocal_170) && !bLocal_171) && !bLocal_166)
					{
						func_158("TCP_WAIT");
					}
					if (func_72(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
			{
				if (Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] == 3)
				{
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						MISC::SET_BIT(&(Local_152.f_22), 6);
					}
					MISC::CLEAR_BIT(&(Local_152.f_22), 0);
					func_161(3);
				}
			}
			break;
		
		case 3:
			if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0 && Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
			{
				MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 3);
				if (!BitTest(Local_152.f_22, 4))
				{
					MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 4);
				}
				func_161(4);
				return;
			}
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (bVar21)
				{
					return;
				}
				if ((((((!BitTest(Local_152.f_22, 0) && !BitTest(Local_152.f_22, 4)) && !BitTest(Local_152.f_22, 2)) && !BitTest(Local_152.f_22, 1)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 3)) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
				{
					if ((!NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if ((PAD::IS_CONTROL_JUST_PRESSED(2, 207) && !PAD::IS_CONTROL_PRESSED(2, 203)) && !PAD::IS_CONTROL_PRESSED(2, 201))
						{
							Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_pickup", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_pickup_card_a", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_pickup_card_b", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_pickup_card_c", 1000f, -1000f, 13);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							MISC::SET_BIT(&(Local_152.f_22), 7);
							MISC::SET_BIT(&(Local_152.f_22), 0);
						}
					}
				}
				if (!BitTest(Local_152.f_22, 0))
				{
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						iVar0 = (30 - (func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
						if (iVar0 > 0)
						{
							if (func_72(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
							{
								if (func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
								{
									func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								}
								else
								{
									func_159((30000 - func_207(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
							if (((!func_337("TCP_PLACE_PLAY") && !bLocal_170) && !bLocal_171) && !bLocal_166)
							{
								func_158("TCP_PLACE_PLAY");
							}
							if ((((!NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_152.f_20, 0)) && !BitTest(Local_152.f_20, 3))
							{
								if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 203)) && (!PAD::IS_CONTROL_PRESSED(2, 207) || BitTest(Local_152.f_22, 4)))
								{
									if (BitTest(Local_152.f_22, 4))
									{
										Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_play", 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_play_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_play_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_play_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
									}
									MISC::SET_BIT(&(Local_152.f_22), 0);
									MISC::SET_BIT(&(Local_152.f_22), 2);
								}
								else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !PAD::IS_CONTROL_PRESSED(2, 201)) && (!PAD::IS_CONTROL_PRESSED(2, 207) || BitTest(Local_152.f_22, 4)))
								{
									if (BitTest(Local_152.f_22, 4))
									{
										Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
									}
									MISC::SET_BIT(&(Local_152.f_22), 0);
									MISC::SET_BIT(&(Local_152.f_22), 1);
								}
							}
						}
						else if (func_72(&(Local_109.f_150[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
						{
							if (BitTest(Local_152.f_22, 4))
							{
								Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							}
							MISC::SET_BIT(&(Local_152.f_22), 0);
							MISC::SET_BIT(&(Local_152.f_22), 1);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 3);
						if (!BitTest(Local_152.f_22, 4))
						{
							MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 4);
						}
						func_161(4);
						return;
					}
				}
				else if (BitTest(Local_152.f_22, 2))
				{
					if (!BitTest(Local_152.f_22, 3))
					{
						if ((Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))) || !BitTest(Local_152.f_22, 4))
						{
							Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							if (func_160(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_bet_large", 2f, -2f, 13, 16, 1000f, 0);
							}
							else
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_bet", 2f, -2f, 13, 16, 1000f, 0);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							MISC::SET_BIT(&(Local_152.f_22), 3);
						}
					}
					else if (Local_152.f_30 != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 > 0)
						{
							Local_152.f_796 = "idle_cardgames";
							Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_232(), Local_152.f_796, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							MISC::CLEAR_BIT(&(Local_152.f_22), 0);
							MISC::CLEAR_BIT(&(Local_152.f_22), 1);
							MISC::CLEAR_BIT(&(Local_152.f_22), 2);
							MISC::CLEAR_BIT(&(Local_152.f_22), 3);
							MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 1);
							if (!BitTest(Local_152.f_22, 4))
							{
								MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 4);
							}
							func_161(4);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844) && Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 <= 0)
						{
							Local_152.f_1 = 1;
						}
						if (Local_152.f_1)
						{
							if (func_155(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3, &(Local_152.f_14), 2, Local_152.f_0))
							{
								if (Local_152.f_14 == 3)
								{
									Local_152.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_152.f_22), 0);
									MISC::CLEAR_BIT(&(Local_152.f_22), 1);
									MISC::CLEAR_BIT(&(Local_152.f_22), 2);
									MISC::CLEAR_BIT(&(Local_152.f_22), 3);
									if (BitTest(Local_152.f_22, 4))
									{
										Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, false, true, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_idle", 1000f, -1000f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
									}
									Local_152.f_14 = 0;
								}
								else
								{
									Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 = Local_151[PLAYER::PLAYER_ID() /*9*/].f_3;
									SECURITY::_REGISTER_PROTECTED_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_4));
									Local_161.f_6 = (Local_161.f_6 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
									Local_162.f_3 = (Local_162.f_3 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
									Local_152.f_19 = func_402();
									Local_152.f_1 = 0;
								}
							}
						}
					}
				}
				else if (BitTest(Local_152.f_22, 1))
				{
					if ((Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))) || !BitTest(Local_152.f_22, 4))
					{
						Local_152.f_796 = "idle_cardgames";
						Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_232(), Local_152.f_796, 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
						MISC::CLEAR_BIT(&(Local_152.f_22), 0);
						MISC::CLEAR_BIT(&(Local_152.f_22), 1);
						MISC::CLEAR_BIT(&(Local_152.f_22), 2);
						MISC::CLEAR_BIT(&(Local_152.f_22), 3);
						MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 3);
						if (!BitTest(Local_152.f_22, 4))
						{
							MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/]), 4);
						}
						func_161(4);
					}
				}
				else if (BitTest(Local_152.f_22, 7) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_pickup", 3))
				{
					if (Local_152.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_152.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
					{
						Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_idle", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
						MISC::CLEAR_BIT(&(Local_152.f_22), 0);
						MISC::CLEAR_BIT(&(Local_152.f_22), 7);
						MISC::SET_BIT(&(Local_152.f_22), 4);
					}
				}
				if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
				{
					func_151(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3, "TCP_BET4", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 4:
			if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
			{
				bVar22 = true;
				iVar23 = 0;
				while (iVar23 < 4)
				{
					iVar24 = Local_109.f_117[(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar23)];
					if (iVar24 != -1)
					{
						if ((!BitTest(Local_151[iVar24 /*9*/], 1) && !BitTest(Local_151[iVar24 /*9*/], 3)) && (Local_151[iVar24 /*9*/].f_3 > 0 || Local_151[iVar24 /*9*/].f_5 > 0))
						{
							bVar22 = false;
						}
					}
					iVar23++;
				}
				if (Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] == 9 && !bVar22)
				{
					if (((!func_337("TCP_WAIT") && !bLocal_170) && !bLocal_171) && !bLocal_166)
					{
						func_158("TCP_WAIT");
					}
				}
				else if (func_337("TCP_WAIT") || func_337("TCP_PLACE_PLAY"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] == 1)
				{
					if (BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 5))
					{
						bVar25 = true;
					}
					if (Local_152.f_31 != -1)
					{
						func_313(&(Local_152.f_31));
						Local_152.f_31 = -1;
					}
					Local_152.f_2 = 0;
					Local_152.f_3 = 0;
					Local_152.f_4 = 0;
					Local_152.f_6 = 0;
					Local_152.f_22 = 0;
					Local_151[PLAYER::PLAYER_ID() /*9*/] = 0;
					Local_151[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
					Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
					Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
					Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
					func_161(0);
					Local_161.f_7 = func_402();
					Local_161.f_17 = func_207(&uLocal_157, 0, 0);
					Local_161.f_18 = func_408();
					Local_161.f_19 = func_209();
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
					{
						Local_161.f_9 = Local_109.f_30[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2];
					}
					if (!func_354() || func_350())
					{
						if (Global_262145.f_26815 && !bVar25)
						{
							STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
						}
						func_379(1);
						HUD::CLEAR_HELP(true);
						return;
					}
					if (func_335())
					{
						switch (func_331())
						{
							case 0:
								Local_161.f_4 = 1982714739;
								break;
							
							case 1:
								Local_161.f_4 = -633175758;
								break;
							
							case 2:
								Local_161.f_4 = -1625999354;
								break;
						}
						switch (func_331())
						{
							case 0:
								Local_162.f_2 = 1982714739;
								break;
							
							case 1:
								Local_162.f_2 = -633175758;
								break;
							
							case 2:
								Local_162.f_2 = -1625999354;
								break;
						}
						if (Global_262145.f_26815 && !bVar25)
						{
							STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
						}
						func_379(1);
						HUD::CLEAR_HELP(true);
						if (func_331() == 2)
						{
							func_224("CAS_MG_CTIME", -1);
						}
						else
						{
							func_224("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26815 && !bVar25)
					{
						STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
					}
					return;
				}
				if ((Local_109.f_5[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] && Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] > 0) && BitTest(Local_109.f_20[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2], func_198(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1)))
				{
					iVar27 = func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0);
					iVar28 = func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
					if (func_25(iVar27))
					{
						bVar26 = true;
					}
					if (iVar28 > 500)
					{
						Local_161.f_22 = 745220304;
					}
					else if (iVar28 > 400)
					{
						Local_161.f_22 = 588481795;
					}
					else if (iVar28 > 300)
					{
						Local_161.f_22 = joaat("straight");
					}
					else if (iVar28 > 200)
					{
						Local_161.f_22 = joaat("flush");
					}
					else if (iVar28 > 100)
					{
						Local_161.f_22 = 378531009;
					}
					else
					{
						Local_161.f_22 = 201584577;
					}
					if (((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6)
					{
						if (!BitTest(Local_152.f_22, 5))
						{
							Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							sVar29 = func_150(Local_161.f_6);
							if ((Local_152.f_26 == 1 || func_384(Local_152.f_18) == 2) || func_384(Local_152.f_18) == 3)
							{
								if (((Local_152.f_15 >= 35000 && iVar28 > iVar27) && iVar28 > 300) || (Local_152.f_23 >= 3500 && iVar28 > 300))
								{
									sVar29 = func_149();
								}
								else if (((Local_152.f_15 >= 35000 && iVar28 > 300) && iVar28 < iVar27) && !(Local_152.f_23 >= 3500 && iVar28 > 300))
								{
									sVar29 = func_147();
								}
							}
							else if (((Local_152.f_15 >= 4500 && iVar28 > iVar27) && iVar28 > 300) || (Local_152.f_23 >= 450 && iVar28 > 300))
							{
								sVar29 = func_149();
							}
							else if (((Local_152.f_15 >= 4500 && iVar28 > 300) && iVar28 < iVar27) && !(Local_152.f_23 >= 450 && iVar28 > 300))
							{
								sVar29 = func_147();
							}
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_232(), sVar29, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
							MISC::SET_BIT(&(Local_152.f_22), 5);
						}
						if (Local_161.f_14 > 0)
						{
							if (!BitTest(Local_152.f_22, 9))
							{
								if (func_102(Local_161.f_14, &(Local_152.f_14), 2))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_152.f_22), 9);
									if (func_420(PLAYER::PLAYER_ID()) && iVar28 > 500)
									{
										MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_800), 11);
									}
								}
							}
						}
					}
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						if (!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/], 3))
						{
							if (!bVar26)
							{
								if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
								{
									if (!func_100("TCP_WIN_NP", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14))
									{
										func_99("TCP_WIN_NP", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14);
									}
								}
								if (!Local_152.f_2)
								{
									Local_152.f_2 = 1;
									SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
									Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
								}
								if (!Local_152.f_3)
								{
									Local_152.f_3 = 1;
									SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
									Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_162.f_13++;
									Local_161.f_15 = 1;
									Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_161.f_4 = joaat("win");
								}
							}
							else if (iVar28 > iVar27)
							{
								if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
								{
									if (iVar28 > 500 && iVar27 > 500)
									{
										bVar30 = true;
									}
									if ((iVar28 > 400 && iVar27 > 400) && (iVar28 < 500 && iVar27 < 500))
									{
										bVar30 = true;
									}
									if ((iVar28 > 300 && iVar27 > 300) && (iVar28 < 400 && iVar27 < 400))
									{
										bVar30 = true;
									}
									if ((iVar28 > 200 && iVar27 > 200) && (iVar28 < 300 && iVar27 < 300))
									{
										bVar30 = true;
									}
									if ((iVar28 > 100 && iVar27 > 100) && (iVar28 < 200 && iVar27 < 200))
									{
										bVar30 = true;
									}
									if (bVar30)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
										}
									}
									else if (!func_100("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14);
									}
								}
								if (!Local_152.f_2)
								{
									Local_152.f_2 = 1;
									SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
									Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
								}
								if (!Local_152.f_3)
								{
									Local_152.f_3 = 1;
									SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
									Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_162.f_13++;
									Local_161.f_15 = 1;
									Local_161.f_4 = joaat("win");
								}
							}
							else if (iVar28 == iVar27)
							{
								iVar27 = func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 1, 0);
								iVar28 = func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 1, 0);
								if (iVar28 == iVar27)
								{
									iVar27 = func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 1);
									iVar28 = func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 1);
									if (iVar28 > iVar27)
									{
										if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
										{
											if (!func_100("TCP_WIN2", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
											{
												func_99("TCP_WIN2", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
											}
										}
										if (!Local_152.f_2)
										{
											Local_152.f_2 = 1;
											SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
											Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
											Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
											Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										}
										if (!Local_152.f_3)
										{
											Local_152.f_3 = 1;
											SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
											Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_162.f_13++;
											Local_161.f_15 = 1;
											Local_161.f_4 = joaat("win");
										}
									}
									else if (iVar28 == iVar27)
									{
										if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
										{
											if (!func_337("TCP_LOSE_PUSH"))
											{
												func_158("TCP_LOSE_PUSH");
											}
										}
										if (!Local_152.f_2)
										{
											Local_152.f_2 = 1;
											SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
											Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
											Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
											Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
											func_206(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
										}
										if (!Local_152.f_3)
										{
											Local_152.f_3 = 1;
											SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
											Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_162.f_13++;
											Local_161.f_15 = 1;
											Local_161.f_4 = joaat("win");
										}
										Local_152.f_2 = 1;
									}
									else
									{
										if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
										{
											if (Local_161.f_14 > 0)
											{
												if (!func_100("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
												{
													func_99("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
												}
											}
											else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
											{
												func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
											}
										}
										Local_161.f_4 = joaat("lose");
										if (!Local_152.f_3)
										{
											func_206((Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
											Local_152.f_3 = 1;
											Local_162.f_14++;
										}
										Local_152.f_2 = 1;
									}
								}
								else if (iVar28 > iVar27)
								{
									if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
										}
									}
									if (!Local_152.f_2)
									{
										Local_152.f_2 = 1;
										SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
										Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									}
									if (!Local_152.f_3)
									{
										Local_152.f_3 = 1;
										SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
										Local_162.f_3 = (Local_162.f_3 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_161.f_6 = (Local_161.f_6 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_162.f_13++;
										Local_161.f_15 = 1;
										Local_161.f_14 = (Local_161.f_14 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_161.f_4 = joaat("win");
									}
								}
								else
								{
									if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
									{
										if (Local_161.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									Local_161.f_4 = joaat("lose");
									if (!Local_152.f_3)
									{
										func_206((Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
										Local_152.f_3 = 1;
										Local_162.f_14++;
									}
									Local_152.f_2 = 1;
								}
							}
							else
							{
								if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
								{
									if (iVar28 > 500 && iVar27 > 500)
									{
										bVar31 = true;
									}
									if ((iVar28 > 400 && iVar27 > 400) && (iVar28 < 500 && iVar27 < 500))
									{
										bVar31 = true;
									}
									if ((iVar28 > 300 && iVar27 > 300) && (iVar28 < 400 && iVar27 < 400))
									{
										bVar31 = true;
									}
									if ((iVar28 > 200 && iVar27 > 200) && (iVar28 < 300 && iVar27 < 300))
									{
										bVar31 = true;
									}
									if ((iVar28 > 100 && iVar27 > 100) && (iVar28 < 200 && iVar27 < 200))
									{
										bVar31 = true;
									}
									if (bVar31)
									{
										if (Local_161.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_161.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									else if (Local_161.f_14 > 0)
									{
										if (!func_100("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14))
										{
											func_99("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14);
										}
									}
									else if (!func_98("TCP_LOSE_PLAY", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PLAY", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
									}
								}
								Local_161.f_4 = joaat("lose");
								if (!Local_152.f_3)
								{
									func_206((Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
									Local_152.f_3 = 1;
									Local_162.f_14++;
								}
								Local_152.f_2 = 1;
							}
							iVar28 = func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
							if (!Local_152.f_4)
							{
								SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
								if (func_96(iVar28) > 0)
								{
									Local_162.f_3 = (Local_162.f_3 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar28)));
									Local_161.f_6 = (Local_161.f_6 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar28)));
									Local_162.f_13++;
									Local_161.f_15 = 1;
									Local_161.f_14 = (Local_161.f_14 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar28)));
								}
								Local_152.f_4 = 1;
							}
						}
						else
						{
							if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 >= 0)
							{
								Local_161.f_4 = joaat("fold");
							}
							if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
							{
								if (Local_161.f_14 > 0)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14);
									}
								}
								else if (!func_98("TCP_LOSE_FOLD", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
								{
									func_97("TCP_LOSE_FOLD", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
								}
							}
							if (!Local_152.f_3)
							{
								func_206(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3);
								Local_152.f_3 = 1;
								Local_162.f_14++;
							}
							Local_152.f_4 = 1;
							Local_152.f_2 = 1;
						}
					}
					else
					{
						Local_152.f_2 = 1;
						Local_152.f_3 = 1;
						Local_152.f_4 = 1;
					}
					iVar28 = func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
					if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 > 0)
					{
						Local_161.f_21 = 1;
						if (func_23(iVar28) > 0)
						{
							if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
							{
								if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_161.f_14);
									}
								}
							}
							if (!Local_152.f_6)
							{
								Local_152.f_6 = 1;
								SECURITY::_FORCE_CHECK_PROTECTED_VARIABLES_NOW();
								Local_162.f_3 = (Local_162.f_3 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar28))));
								Local_161.f_6 = (Local_161.f_6 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar28))));
								Local_162.f_13++;
								Local_161.f_15 = 1;
								Local_161.f_14 = (Local_161.f_14 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar28))));
								Local_161.f_4 = joaat("win");
							}
						}
						else
						{
							if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
							{
								Local_161.f_4 = joaat("lose");
								if ((((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && !bLocal_170) && !bLocal_171) && !bLocal_166)
								{
									if (!func_98("TCP_LOSE_PP", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PP", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0));
									}
								}
							}
							if (!Local_152.f_6)
							{
								func_206(Local_151[PLAYER::PLAYER_ID() /*9*/].f_5);
								Local_152.f_6 = 1;
								if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
								{
									Local_162.f_14++;
								}
							}
						}
					}
					else
					{
						Local_152.f_6 = 1;
					}
				}
				else
				{
					if (!Local_109.f_5[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2])
					{
					}
					if (Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] <= 0)
					{
					}
					if (!BitTest(Local_109.f_20[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2], func_198(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1)))
					{
					}
					if (((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6)
					{
						if (Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] <= 0)
						{
							Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
							Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
							Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
							SECURITY::_UNREGISTER_PROTECTED_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_3));
							SECURITY::_UNREGISTER_PROTECTED_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_5));
							SECURITY::_UNREGISTER_PROTECTED_VARIABLE(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_4));
						}
					}
				}
			}
			break;
	}
}

int func_96(int iParam0)//Position - 0x10799
{
	if (iParam0 > 500)
	{
		return 5;
	}
	else if (iParam0 > 400)
	{
		return 4;
	}
	else if (iParam0 > 300)
	{
		return 1;
	}
	return 0;
}

void func_97(char* sParam0, char* sParam1)//Position - 0x107CC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_98(char* sParam0, char* sParam1)//Position - 0x107E8
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_99(char* sParam0, char* sParam1, int iParam2)//Position - 0x10801
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_100(char* sParam0, char* sParam1, int iParam2)//Position - 0x10823
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_101(int iParam0, bool bParam1)//Position - 0x10842
{
	if (bParam1)
	{
		if (iParam0 > 500)
		{
			return "TCP_STRAIGHTF_F";
		}
		else if (iParam0 > 400)
		{
			return "TCP_TOFAKIND_F";
		}
		else if (iParam0 > 300)
		{
			return "TCP_STRAIGHT_F";
		}
		else if (iParam0 > 200)
		{
			return "TCP_FLUSH_F";
		}
		else if (iParam0 > 100)
		{
			return "TCP_PAIR_F";
		}
		else if (iParam0 == 12)
		{
			return "TCP_HIGH_Q_F";
		}
		else if (iParam0 == 13)
		{
			return "TCP_HIGH_K_F";
		}
		else
		{
			return "TCP_HIGH_A_F";
		}
	}
	else if (iParam0 > 500)
	{
		return "TCP_STRAIGHTF";
	}
	else if (iParam0 > 400)
	{
		return "TCP_TOFAKIND";
	}
	else if (iParam0 > 300)
	{
		return "TCP_STRAIGHT";
	}
	else if (iParam0 > 200)
	{
		return "TCP_FLUSH";
	}
	else if (iParam0 > 100)
	{
		if (iParam0 == 128)
		{
			return "TCP_PAIR_A";
		}
		else if (iParam0 == 104)
		{
			return "TCP_PAIR_2";
		}
		else if (iParam0 == 106)
		{
			return "TCP_PAIR_3";
		}
		else if (iParam0 == 108)
		{
			return "TCP_PAIR_4";
		}
		else if (iParam0 == 110)
		{
			return "TCP_PAIR_5";
		}
		else if (iParam0 == 112)
		{
			return "TCP_PAIR_6";
		}
		else if (iParam0 == 114)
		{
			return "TCP_PAIR_7";
		}
		else if (iParam0 == 116)
		{
			return "TCP_PAIR_8";
		}
		else if (iParam0 == 118)
		{
			return "TCP_PAIR_9";
		}
		else if (iParam0 == 120)
		{
			return "TCP_PAIR_10";
		}
		else if (iParam0 == 122)
		{
			return "TCP_PAIR_J";
		}
		else if (iParam0 == 124)
		{
			return "TCP_PAIR_Q";
		}
		else if (iParam0 == 126)
		{
			return "TCP_PAIR_K";
		}
	}
	else if (iParam0 == 5)
	{
		return "TCP_HIGH_5";
	}
	else if (iParam0 == 6)
	{
		return "TCP_HIGH_6";
	}
	else if (iParam0 == 7)
	{
		return "TCP_HIGH_7";
	}
	else if (iParam0 == 8)
	{
		return "TCP_HIGH_8";
	}
	else if (iParam0 == 9)
	{
		return "TCP_HIGH_9";
	}
	else if (iParam0 == 10)
	{
		return "TCP_HIGH_10";
	}
	else if (iParam0 == 11)
	{
		return "TCP_HIGH_J";
	}
	else if (iParam0 == 12)
	{
		return "TCP_HIGH_Q";
	}
	else if (iParam0 == 13)
	{
		return "TCP_HIGH_K";
	}
	else
	{
		return "TCP_HIGH_A";
	}
	return "";
}

bool func_102(int iParam0, var uParam1, int iParam2)//Position - 0x10A9F
{
	return func_103(iParam0, 3, uParam1, iParam2, -1);
}

int func_103(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x10AB3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_402();
		iVar1 = (Global_262145.f_27174 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_144();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_124(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_402() - Global_1966106);
			func_123(iVar4, 1);
			func_121();
			func_120();
			Global_1966106 = (Global_1966106 + iVar4);
			if (iParam1 == 0)
			{
				func_114(iVar4);
				Global_2725354 = 1;
			}
			else if (iParam1 == 3)
			{
				func_107(iVar4);
				if (iVar4 >= Global_262145.f_27182)
				{
					Global_2725353 = 1;
				}
				else if (iVar4 >= Global_262145.f_27181)
				{
					Global_2725354 = 1;
				}
			}
			Var5.f_0 = func_106(iParam1);
			Var5.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1966106;
			STATS::_PLAYSTATS_CASINO_CHIP(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_104(int iParam0)//Position - 0x10BEC
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)//Position - 0x10C15
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_106(int iParam0)//Position - 0x10DD8
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 11:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_107(int iParam0)//Position - 0x10EAC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27176)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_27178)
	{
		func_108(joaat("mpply_casino_chips_won_gd"), Global_262145.f_27178);
		func_109();
		Global_2725354 = 1;
	}
	else
	{
		func_108(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_108(int iParam0, int iParam1)//Position - 0x10F25
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

void func_109()//Position - 0x10F41
{
	func_110();
}

void func_110()//Position - 0x10F4D
{
	func_108(joaat("mpply_casino_chips_wontim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_111()//Position - 0x10F62
{
	return func_112(joaat("mpply_casino_chips_won_gd"));
}

int func_112(int iParam0)//Position - 0x10F73
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

int func_113()//Position - 0x10F91
{
	return func_112(joaat("mpply_casino_chips_wontim"));
}

void func_114(int iParam0)//Position - 0x10FA2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_119();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_118();
	if (iVar0 == 0)
	{
		func_117();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27175)
	{
		func_116();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_115()
	{
		func_108(joaat("mpply_casino_chips_pur_gd"), func_115());
		func_116();
	}
	else
	{
		func_108(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_115()//Position - 0x11010
{
	if (func_330(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_26970;
	}
	return Global_262145.f_26969;
}

void func_116()//Position - 0x11034
{
	func_117();
}

void func_117()//Position - 0x11040
{
	func_108(joaat("mpply_casino_chips_purtim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_118()//Position - 0x11055
{
	return func_112(joaat("mpply_casino_chips_pur_gd"));
}

int func_119()//Position - 0x11066
{
	return func_112(joaat("mpply_casino_chips_purtim"));
}

void func_120()//Position - 0x11077
{
	if (BitTest(Global_1966179, 6))
	{
		MISC::SET_BIT(&Global_1966179, 9);
		func_370(&Global_1966182, 0, 0);
	}
}

void func_121()//Position - 0x1109F
{
	if (func_122())
	{
		MISC::SET_BIT(&Global_1966179, 1);
	}
}

bool func_122()//Position - 0x110BA
{
	return (BitTest(Global_1966179, 6) || BitTest(Global_1966179, 5));
}

void func_123(int iParam0, int iParam1)//Position - 0x110D4
{
	if (iParam0 < 0)
	{
		return;
	}
	MISC::SET_BIT(&Global_1966179, 6);
	Global_1966180 = iParam0;
	Global_1966181 = iParam1;
}

bool func_124(var uParam0, int iParam1, int iParam2)//Position - 0x110FA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_104(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_143())
	{
		if (*uParam0 == 0)
		{
			if (func_142() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_106(iParam1);
			iVar5 = -22148635;
			if (func_146(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_138(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_138(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_132())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_131(func_142()))
			{
				if (func_130(func_142()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_129(func_142()));
					if (func_146(iParam1))
					{
						MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
					}
					else
					{
						MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_125(func_142());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		if (func_146(iParam1))
		{
			MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
		}
		else
		{
			MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_125(int iParam0)//Position - 0x11277
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_128(iParam0))
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
		func_126(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_126(var uParam0)//Position - 0x112CB
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
	func_127(&(uParam0->f_14));
	func_127(&(uParam0->f_14.f_13));
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

void func_127(var uParam0)//Position - 0x113DB
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

int func_128(int iParam0)//Position - 0x11423
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x1144E
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_130(int iParam0)//Position - 0x11475
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x1149E
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_132()//Position - 0x114C9
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_142();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_137()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_136(Global_4534105[iVar2 /*85*/].f_66.f_6, Global_4534105[iVar2 /*85*/].f_66.f_4, Global_4534105[iVar2 /*85*/].f_66.f_1) == 1)
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
	iVar3 = func_129(iVar2);
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
				func_133(Global_4534105[iVar2 /*85*/], iVar2);
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	return 0;
}

void func_133(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x11629
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
	iVar1 = func_135(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_134();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar1);
	}
}

void func_134()//Position - 0x116BB
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_135(int iParam0)//Position - 0x116CB
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_136(int iParam0, int iParam1, int iParam2)//Position - 0x116E3
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

int func_137()//Position - 0x11CCB
{
	return Global_1574918;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x11CD7
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_137()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
	iVar1 = func_142();
	if (iVar1 == -1)
	{
		if (!func_140(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_139(iParam1))
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

int func_139(int iParam0)//Position - 0x11DF9
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

int func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x11E88
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_137()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
		*iParam0 = func_141(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0x11F85
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_143())
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
				func_133(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_142()//Position - 0x120C2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_129(iVar0) != 2147483647)
		{
			if (func_128(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_143()//Position - 0x120FD
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_144()//Position - 0x12114
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_115() - func_118());
	iVar1 = (Global_262145.f_27174 - func_402());
	iVar2 = func_145();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_145()//Position - 0x12153
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (MONEY::_NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2())
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = MONEY::NETWORK_GET_EVC_BALANCE();
	}
	return iVar1;
}

int func_146(int iParam0)//Position - 0x121B3
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_147()//Position - 0x121DC
{
	if (func_148())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_148()//Position - 0x1227D
{
	return func_57(PLAYER::PLAYER_ID());
}

char* func_149()//Position - 0x1228D
{
	if (func_148())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_150(int iParam0)//Position - 0x1232E
{
	if (func_148())
	{
		if ((func_419(PLAYER::PLAYER_ID()) || func_384(Local_152.f_18) == 2) || func_384(Local_152.f_18) == 3)
		{
			if (iParam0 > 10000)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_419(PLAYER::PLAYER_ID()) || func_384(Local_152.f_18) == 2) || func_384(Local_152.f_18) == 3)
	{
		if (iParam0 > 10000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_151(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x127A8
{
	int iVar0;
	int iVar1;
	
	if (func_154(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_152(3, iVar0);
		Global_1649593.f_2839[iVar0] = uParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[iVar0] = iParam3;
		Global_1649593.f_2839.f_172[iVar0] = iParam2;
		Global_1649593.f_2839.f_205[iVar0] = iParam4;
		Global_1649593.f_2839.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_2839.f_420[iVar0] = iParam7;
		Global_1649593.f_2839.f_453[iVar0] = iParam8;
		Global_1649593.f_2839.f_431[iVar0] = iParam9;
		Global_1649593.f_2839.f_442[iVar0] = iParam10;
		Global_1649593.f_2839.f_464[iVar0] = iParam11;
		Global_1649593.f_2839.f_475[iVar0] = iParam12;
		Global_1649593.f_2839.f_486[iVar0] = iParam13;
		Global_1649593.f_2839.f_497[iVar0] = iParam14;
	}
}

void func_152(int iParam0, int iParam1)//Position - 0x128EA
{
	MISC::SET_BIT(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_153(int iParam0, int iParam1)//Position - 0x12903
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

int func_154(char* sParam0)//Position - 0x12919
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

int func_155(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x12953
{
	if (func_143() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_157(iParam0))
	{
		return func_156(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0x12999
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_402();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_143() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_124(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1966106 - func_402());
			if (iParam1 == 1)
			{
				Global_2725353 = 1;
			}
			else if (iVar2 >= Global_262145.f_27183)
			{
				Global_2725354 = 1;
			}
			func_123(iVar2, 0);
			func_121();
			func_120();
			Global_1966106 = (Global_1966106 - iVar2);
			Var3.f_0 = func_106(iParam1);
			Var3.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var3.f_6 = Global_1966106;
			Var3.f_7 = iParam5;
			STATS::_PLAYSTATS_CASINO_CHIP(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_157(int iParam0)//Position - 0x12A9B
{
	int iVar0;
	
	if (func_335())
	{
		return 0;
	}
	iVar0 = func_402();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_158(char* sParam0)//Position - 0x12AC0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x12AD6
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_152(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

int func_160(int iParam0)//Position - 0x12C33
{
	if ((Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 == 3) || func_419(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_161(int iParam0)//Position - 0x12CB4
{
	Local_152.f_797 = iParam0;
}

void func_162()//Position - 0x12CC4
{
	char* sVar0;
	int iVar1;
	
	PAD::DISABLE_CONTROL_ACTION(2, 209, true);
	PAD::SET_INPUT_EXCLUSIVE(2, 209);
	if (!BitTest(Local_152.f_20, 3))
	{
		if ((PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 209) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 210)) && !BitTest(Local_152.f_20, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_152.f_20), 3);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_384(Local_152.f_18) == 2 || func_384(Local_152.f_18) == 3) || func_419(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (func_298(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!BitTest(Local_152.f_20, 4))
			{
				func_297(0, 0);
				func_295(1, sVar0, sVar0);
				func_294("TCP_HANDS");
				func_181(1, 2, 2, 2, 1);
				func_180(1, 1, 1, 1, 0);
				iVar1 = 0;
				func_176(iVar1, "TCP_HAND1", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_10", 1, 1, 0, 0, 0);
				func_163(59, 0);
				func_176(iVar1, "TCP_9", 1, 1, 0, 0, 0);
				func_163(59, 0);
				func_176(iVar1, "TCP_8", 1, 1, 0, 0, 0);
				func_163(59, 0);
				iVar1 = 1;
				func_176(iVar1, "TCP_HAND2", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_5", 1, 1, 0, 0, 0);
				func_163(57, 0);
				func_176(iVar1, "TCP_5", 1, 1, 0, 0, 0);
				func_163(58, 0);
				func_176(iVar1, "TCP_5", 1, 1, 0, 0, 0);
				func_163(56, 0);
				iVar1 = 2;
				func_176(iVar1, "TCP_HAND3", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_2", 1, 1, 0, 0, 0);
				func_163(57, 0);
				func_176(iVar1, "TCP_3", 1, 1, 0, 0, 0);
				func_163(59, 0);
				func_176(iVar1, "TCP_4", 1, 1, 0, 0, 0);
				func_163(57, 0);
				iVar1 = 3;
				func_176(iVar1, "TCP_HAND4", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_A", 1, 1, 0, 0, 0);
				func_163(59, 0);
				func_176(iVar1, "TCP_Q", 1, 1, 0, 0, 0);
				func_163(59, 0);
				func_176(iVar1, "TCP_9", 1, 1, 0, 0, 0);
				func_163(59, 0);
				iVar1 = 4;
				func_176(iVar1, "TCP_HAND5", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_K", 1, 1, 0, 0, 0);
				func_163(57, 0);
				func_176(iVar1, "TCP_K", 1, 1, 0, 0, 0);
				func_163(59, 0);
				func_176(iVar1, "TCP_7", 1, 1, 0, 0, 0);
				func_163(56, 0);
				iVar1 = 5;
				func_176(iVar1, "TCP_HAND6", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_A", 1, 1, 0, 0, 0);
				func_163(56, 0);
				func_176(iVar1, "TCP_7", 1, 1, 0, 0, 0);
				func_163(57, 0);
				func_176(iVar1, "TCP_3", 1, 1, 0, 0, 0);
				func_163(59, 0);
				func_293(-1, 1, 1);
				MISC::SET_BIT(&(Local_152.f_20), 4);
			}
			func_263(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_260(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_165 = 1;
			Local_152.f_20 = 0;
			MISC::SET_BIT(&(Local_152.f_20), 2);
		}
	}
}

void func_163(int iParam0, bool bParam1)//Position - 0x13000
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_23150.f_5615 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	Global_23150.f_4824[Global_23150.f_5615] = iParam0;
	Global_23150.f_5615++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 4;
	Global_23150.f_6134++;
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_173();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_165(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_164();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

float func_164()//Position - 0x1313B
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)] != 0)
		{
			if (func_165(Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

int func_165(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x131EE
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_172(iParam0), 64);
	StringCopy(&cVar1, func_169(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_167(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		fVar6 = (func_166(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
			}
		}
		return 1;
	}
	return 0;
}

float func_166(int iParam0)//Position - 0x1331A
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
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_167(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0x133EE
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (func_168(*iParam1, *iParam2))
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

bool func_168(int iParam0, int iParam1)//Position - 0x13476
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

var func_169(int iParam0, bool bParam1)//Position - 0x13491
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_171(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_170(&uVar1);
			}
		}
		else
		{
			return func_170(&(Global_23150.f_7420[iParam0 /*16*/]));
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
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
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

var func_170(var uParam0)//Position - 0x139BB
{
	return uParam0;
}

struct<13> func_171(int iParam0)//Position - 0x139C5
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_172(int iParam0)//Position - 0x139DC
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_171(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_170(&uVar0);
		}
		else
		{
			return func_170(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_173()//Position - 0x13A51
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_174(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_23150.f_79[Global_23150.f_6133 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[((Global_23150.f_5613 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[((Global_23150.f_5614 - iVar4) + iVar10)], Global_23150.f_4695[((Global_23150.f_5614 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)] != 0)
		{
			func_165(Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x13E98
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_175(Global_23150.f_6402[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_175(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x14048
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

void func_176(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x142D2
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 1)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 1)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23150.f_1616[Global_23150.f_5611] = bParam3;
	Global_23150.f_1873[Global_23150.f_5611] = iParam4;
	Global_23150.f_2130[Global_23150.f_5611] = iParam6;
	Global_23150.f_5611++;
	if (!bParam3)
	{
		func_179(Global_23150.f_5609, 1);
	}
	else
	{
		func_179(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_178(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_165(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_177(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
			if (fVar4 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 1;
	Global_23150.f_6133 = (Global_23150.f_5611 - 1);
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = iParam2;
}

float func_177(char* sParam0)//Position - 0x144EE
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_178(char* sParam0)//Position - 0x1450A
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
	func_174(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_179(int iParam0, bool bParam1)//Position - 0x14547
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14593
{
	Global_23150.f_5447[0] = iParam0;
	Global_23150.f_5447[1] = iParam1;
	Global_23150.f_5447[2] = iParam2;
	Global_23150.f_5447[3] = iParam3;
	Global_23150.f_5447[4] = iParam4;
	Global_23150.f_5617 = 0;
	if (iParam0 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam1 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam2 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam3 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam4 != 0)
	{
		Global_23150.f_5617++;
	}
}

void func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1463D
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_182()//Position - 0x1467C
{
	char* sVar0;
	
	if (BitTest(Local_152.f_20, 2))
	{
		MISC::CLEAR_BIT(&(Local_152.f_20), 2);
	}
	PAD::DISABLE_CONTROL_ACTION(2, 210, true);
	PAD::SET_INPUT_EXCLUSIVE(2, 210);
	if (!BitTest(Local_152.f_20, 0))
	{
		if ((PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 210) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 209)) && !BitTest(Local_152.f_20, 3))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_152.f_20), 0);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_384(Local_152.f_18) == 2 || func_384(Local_152.f_18) == 3) || func_419(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (func_298(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!BitTest(Local_152.f_20, 1))
			{
				func_297(0, 0);
				func_295(1, sVar0, sVar0);
				func_294("TCP_RULES");
				func_186(1, iLocal_165, 6);
				func_185(1, 1, 1, 1, 1);
				func_293(-1, 1, 1);
				func_292(func_184(iLocal_165), 0, 0);
				func_291(func_183(iLocal_165));
				MISC::SET_BIT(&(Local_152.f_20), 1);
			}
			func_263(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_260(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_165 = 1;
			Local_152.f_20 = 0;
			MISC::SET_BIT(&(Local_152.f_20), 2);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 190))
		{
			iLocal_165++;
			if (iLocal_165 > 6)
			{
				iLocal_165 = 1;
			}
			MISC::CLEAR_BIT(&(Local_152.f_20), 1);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 189))
		{
			iLocal_165 = (iLocal_165 - 1);
			if (iLocal_165 < 1)
			{
				iLocal_165 = 6;
			}
			MISC::CLEAR_BIT(&(Local_152.f_20), 1);
		}
	}
}

char* func_183(int iParam0)//Position - 0x14840
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1";
		
		case 2:
			return "TCP_RULE_2";
		
		case 3:
			return "TCP_RULE_3";
		
		case 4:
			return "TCP_RULE_4";
		
		case 5:
			return "TCP_RULE_5";
		
		case 6:
			if ((func_384(Local_152.f_18) == 2 || func_384(Local_152.f_18) == 3) || func_419(PLAYER::PLAYER_ID()))
			{
				return "TCP_RULE_6b";
			}
			else
			{
				return "TCP_RULE_6a";
			}
			break;
	}
	return "";
}

char* func_184(int iParam0)//Position - 0x148DB
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1T";
		
		case 2:
			return "TCP_RULE_2T";
		
		case 3:
			return "TCP_RULE_3T";
		
		case 4:
			return "TCP_RULE_4T";
		
		case 5:
			return "TCP_RULE_5T";
		
		case 6:
			if ((func_384(Local_152.f_18) == 2 || func_384(Local_152.f_18) == 3) || func_419(PLAYER::PLAYER_ID()))
			{
				return "TCP_RULE_6Tb";
			}
			else
			{
				return "TCP_RULE_6Ta";
			}
			break;
	}
	return "";
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14976
{
	Global_23150.f_5466[0] = iParam0;
	Global_23150.f_5466[1] = iParam1;
	Global_23150.f_5466[2] = iParam2;
	Global_23150.f_5466[3] = iParam3;
	Global_23150.f_5466[4] = iParam4;
}

void func_186(int iParam0, int iParam1, int iParam2)//Position - 0x149B5
{
	Global_23150.f_6126 = iParam0;
	Global_23150.f_6127 = iParam1;
	Global_23150.f_6128 = iParam2;
}

void func_187(int iParam0)//Position - 0x149D5
{
	Global_1649593.f_1163 = iParam0;
}

void func_188(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x149E6
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_194(uParam2);
	}
	if (Global_1577896 < 2)
	{
		func_193(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_192(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, true));
						if (iVar3 < 363)
						{
							func_192(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_192(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_191(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_192(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_192(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_191(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_190(*uParam0, uParam1);
	}
	func_189();
}

void func_189()//Position - 0x14D81
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_190(int iParam0, var uParam1)//Position - 0x14D9F
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_191(char* sParam0)//Position - 0x14DBE
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_192(char* sParam0)//Position - 0x14DD0
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_193(int iParam0)//Position - 0x14DDE
{
	Global_1577896 = iParam0;
}

void func_194(var uParam0)//Position - 0x14DEC
{
	uParam0->f_692 = 0;
}

int func_195(var uParam0)//Position - 0x14DFA
{
	return uParam0->f_692;
}

void func_196(var uParam0, float fParam1)//Position - 0x14E07
{
	uParam0->f_699 = fParam1;
}

struct<9> func_197()//Position - 0x14E16
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_198(int iParam0)//Position - 0x14E5A
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 12;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 13;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 14;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 15;
		
		default:
	}
	return 0;
}

void func_199(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x14EDE
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	MISC::SET_BIT(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

void func_200(char* sParam0, char* sParam1, var uParam2, char* sParam3)//Position - 0x14F42
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_201(var uParam0)//Position - 0x14F92
{
	func_202(uParam0);
	uParam0->f_692 = 1;
}

void func_202(var uParam0)//Position - 0x14FA6
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 363;
		uParam0->f_1[iVar0 /*57*/].f_56 = 363;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

var func_203(bool bParam0)//Position - 0x1508F
{
	if (func_148())
	{
		if (!bParam0)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					Local_152.f_796 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_152.f_796 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_152.f_796 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_152.f_796 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_152.f_796 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_152.f_796 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_152.f_796 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_152.f_796 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
		{
			case 0:
				Local_152.f_796 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_152.f_796 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_152.f_796 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_152.f_796 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_152.f_796 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_152.f_796 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_152.f_796 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_152.f_796 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_152.f_796 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_152.f_796 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_152.f_796 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_152.f_796 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_152.f_796 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_152.f_796;
}

int func_204()//Position - 0x1525A
{
	if (func_205() == 0)
	{
		return 1;
	}
	return 0;
}

int func_205()//Position - 0x1526F
{
	return Global_1574632.f_18;
}

void func_206(int iParam0)//Position - 0x1527D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27176)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_27177)
	{
		func_108(joaat("mpply_casino_chips_won_gd"), Global_262145.f_27177);
		func_109();
		Global_2725354 = 1;
	}
	else
	{
		func_108(joaat("mpply_casino_chips_won_gd"), (iVar2 - iParam0));
	}
}

int func_207(var uParam0, bool bParam1, bool bParam2)//Position - 0x152F6
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

int func_208()//Position - 0x1533D
{
	if ((((Local_152.f_2 && Local_152.f_3) && Local_152.f_4) && Local_152.f_6) && (!BitTest(Local_152.f_22, 9) && Local_161.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_209()//Position - 0x1538A
{
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_210())
	{
		return NETWORK::_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	return 0;
}

int func_210()//Position - 0x153AD
{
	return -1;
}

void func_211()//Position - 0x153B6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	
	if (!PAD::IS_CONTROL_PRESSED(2, 207))
	{
		if (bLocal_171)
		{
			func_302(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_171 = false;
	}
	if (!PAD::IS_CONTROL_PRESSED(2, 208))
	{
		if (bLocal_170)
		{
			func_302(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_170 = false;
	}
	if ((((Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0 && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_339()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && Local_109.f_576[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2] < 12)
	{
		if (Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] > 0 && (BitTest(Local_152.f_22, 4) || BitTest(Local_109.f_20[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2], func_198(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1))))
		{
			if ((((PAD::IS_CONTROL_PRESSED(2, 207) && !PAD::IS_CONTROL_PRESSED(2, 208)) && !bLocal_170) && !func_72(&uLocal_172)) && !CAM::DOES_CAM_EXIST(Local_152.f_13))
			{
				if (!bLocal_171)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						bLocal_166 = true;
					}
					func_302(PLAYER::PLAYER_ID(), 0, 0, 0);
					bLocal_171 = true;
				}
			}
		}
		else
		{
			if (bLocal_171)
			{
				func_302(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_171 = false;
		}
		if (Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] > 0)
		{
			if ((((PAD::IS_CONTROL_PRESSED(2, 208) && !PAD::IS_CONTROL_PRESSED(2, 207)) && !bLocal_171) && !func_72(&uLocal_172)) && !CAM::DOES_CAM_EXIST(Local_152.f_13))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_302(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				bLocal_170 = true;
			}
		}
		else
		{
			if (bLocal_170)
			{
				func_302(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_170 = false;
		}
	}
	else
	{
		if (bLocal_171 || bLocal_170)
		{
			func_302(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_171 = false;
		bLocal_170 = false;
	}
	if (bLocal_170 || bLocal_171)
	{
		CAM::_0x469F2ECDEC046337(true);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 166, true);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!CAM::DOES_CAM_EXIST(Local_152.f_13))
		{
			Local_152.f_13 = CAM::CREATE_CAMERA(26379945, true);
			CAM::SET_CAM_PARAMS(Local_152.f_13, func_223(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), func_222(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), func_221(bLocal_170), 0, 1, 1, 2);
			CAM::SHAKE_CAM(Local_152.f_13, "HAND_SHAKE", 0.03f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else if (bLocal_170)
		{
			if (Local_109.f_5[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2])
			{
				if (!func_98("TCP_D_HAND", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
				{
					func_97("TCP_D_HAND", func_101(func_9(&(Local_109.f_389[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
				}
			}
			else if (!func_337("TCP_D_HAND_D"))
			{
				func_158("TCP_D_HAND_D");
			}
			fVar0 = CAM::GET_CAM_FOV(Local_152.f_13);
			fVar1 = 50f;
			fVar1 = func_220();
			fVar0 = func_218(fVar0, fVar1, 0.2f, 4);
			CAM::SET_CAM_PARAMS(Local_152.f_13, func_223(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), func_222(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_171)
		{
			if (bLocal_166)
			{
				fVar2 = CAM::GET_CAM_FOV(Local_152.f_13);
				fVar3 = 50f;
				Var4 = { CAM::GET_CAM_ROT(Local_152.f_13, 2) };
				Var5 = { 0f, 0f, 0f };
				Var6 = { -38.1166f, -0.0930717f, -102.613f };
				Var7 = { CAM::GET_CAM_COORD(Local_152.f_13) };
				Var8 = { 0f, 0f, 0f };
				Var9 = { 966.621f, 32.009f, 116.621f };
				if (Var4.f_2 < 0f)
				{
					Var4.f_2 = (Var4.f_2 + 360f);
				}
				Var9 = { func_217(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1) };
				Var6 = { func_216(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1) };
				fVar3 = func_220();
				if (Var6.f_2 < 0f)
				{
					Var6.f_2 = (Var6.f_2 + 360f);
				}
				Var5 = { func_214(Var4, Var6, 0.35f, 4) };
				Var8 = { func_213(Var7, Var9, 0.35f, 4) };
				if (Var5.f_2 > 180f)
				{
					Var5.f_2 = (Var5.f_2 - 360f);
				}
				else if (Var5.f_2 < -180f)
				{
					Var5.f_2 = (Var5.f_2 + 360f);
				}
				if (func_212(Var4, Var6, 10f, 0) && func_212(Var7, Var9, 0.1f, 0))
				{
					fVar2 = func_218(fVar2, fVar3, 0.35f, 4);
				}
				CAM::SET_CAM_PARAMS(Local_152.f_13, Var8, Var5, fVar2, 0, 1, 1, 2);
			}
			else
			{
				fVar10 = CAM::GET_CAM_FOV(Local_152.f_13);
				fVar11 = 50f;
				fVar11 = func_220();
				fVar10 = func_218(fVar10, fVar11, 0.35f, 4);
				CAM::SET_CAM_PARAMS(Local_152.f_13, func_223(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), func_222(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1, Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_170), fVar10, 0, 1, 1, 2);
			}
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (CAM::DOES_CAM_EXIST(Local_152.f_13))
		{
			CAM::_0x469F2ECDEC046337(true);
			if (!func_72(&uLocal_172) && bLocal_166)
			{
				func_73(&uLocal_172, 0, 0);
				GRAPHICS::ANIMPOSTFX_PLAY("PokerCamTransition", 0, false);
			}
			else if (func_71(&uLocal_172, 100, 0) || !bLocal_166)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(Local_152.f_13, false);
				HUD::CLEAR_HELP(true);
				func_69(&uLocal_172);
				bLocal_166 = false;
			}
		}
	}
	if (bLocal_171 || bLocal_166)
	{
		if (BitTest(Local_152.f_22, 4) || BitTest(Local_109.f_20[Local_151[PLAYER::PLAYER_ID() /*9*/].f_2], func_198(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1)))
		{
			if (!func_98("TCP_P_HAND", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
			{
				func_97("TCP_P_HAND", func_101(func_9(&(Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0));
			}
		}
	}
}

int func_212(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x15A72
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_213(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x15AED
{
	struct<3> Var0;
	
	Var0.f_0 = func_218(Param0.f_0, Param1.f_0, fParam2, iParam3);
	Var0.f_1 = func_218(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_218(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

Vector3 func_214(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x15B2F
{
	struct<3> Var0;
	
	Var0.f_0 = func_215(Param0.f_0, Param1.f_0, fParam2, iParam3);
	Var0.f_1 = func_215(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_215(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

float func_215(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x15B71
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = MISC::ABSF((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_218(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_216(int iParam0)//Position - 0x15BE1
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_233(iParam0) };
	Var1 = { -47.16f, 0f, -87.475f };
	return Vector(Var0.f_2, 0f, 0f) + Var1;
}

Vector3 func_217(int iParam0)//Position - 0x15C0D
{
	struct<3> Var0;
	
	Var0 = { func_233(iParam0) };
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_361(iParam0), Var0.f_2, 0.198f, 0f, 1.388f);
}

float func_218(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x15C38
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(func_219((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_218(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_218(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_219(float fParam0)//Position - 0x15D4B
{
	return (fParam0 * 57.29578f);
}

float func_220()//Position - 0x15D5B
{
	if (bLocal_170)
	{
		return 37.8425f;
	}
	return 43.3518f;
}

float func_221(bool bParam0)//Position - 0x15D76
{
	float fVar0;
	
	fVar0 = 44.6546f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	if (bLocal_166)
	{
		fVar0 = 50f;
	}
	return fVar0;
}

Vector3 func_222(int iParam0, int iParam1, bool bParam2)//Position - 0x15DA0
{
	struct<3> Var0;
	
	if (bParam2)
	{
		Var0 = { -74.52f, 0f, 0f };
	}
	else if (bLocal_166)
	{
		return CAM::GET_GAMEPLAY_CAM_ROT(2);
	}
	else
	{
		return func_216(iParam0);
	}
	return Vector(func_75(iParam1), 0f, 0f) + Var0;
}

Vector3 func_223(int iParam0, int iParam1, bool bParam2)//Position - 0x15DE2
{
	struct<3> Var0;
	
	if (bParam2)
	{
		Var0 = { 0f, -0.02f, 1.62f };
	}
	else if (bLocal_166)
	{
		return CAM::GET_GAMEPLAY_CAM_COORD();
	}
	else
	{
		return func_217(iParam0);
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iParam1), func_75(iParam1), Var0);
}

void func_224(char* sParam0, int iParam1)//Position - 0x15E2E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_225(int iParam0)//Position - 0x15E45
{
	if (Local_109.f_576[iParam0] == 2)
	{
		if (!BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/].f_6, 0))
		{
			Local_152.f_799 = { Local_109.f_168[iParam0 /*55*/] };
			MISC::SET_BIT(&(Local_151[PLAYER::PLAYER_ID() /*9*/].f_6), 0);
		}
	}
	else if (Local_109.f_576[iParam0] > 2 && BitTest(Local_151[PLAYER::PLAYER_ID() /*9*/].f_6, 0))
	{
		if (Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] > 0)
		{
			if (Local_152.f_854 != Local_109.f_410[PLAYER::PLAYER_ID() /*5*/])
			{
				Local_152.f_854 = { Local_109.f_410[PLAYER::PLAYER_ID() /*5*/] };
			}
			else
			{
				if (Local_152.f_854.f_1[iLocal_169] != Local_109.f_410[PLAYER::PLAYER_ID() /*5*/].f_1[iLocal_169])
				{
					iLocal_168 = 0;
					iLocal_169 = 0;
					if (Global_262145.f_26815)
					{
						STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
					}
					func_379(1);
					HUD::CLEAR_HELP(true);
					return 1;
				}
				iLocal_169++;
				if (iLocal_169 >= Local_152.f_854)
				{
					iLocal_169 = 0;
				}
			}
		}
		if (Local_109.f_168[iParam0 /*55*/].f_2[iLocal_168] != Local_152.f_799.f_2[iLocal_168])
		{
			iLocal_168 = 0;
			iLocal_169 = 0;
			if (Global_262145.f_26815)
			{
				STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
			}
			func_379(1);
			HUD::CLEAR_HELP(true);
			return 1;
		}
		iLocal_168++;
		if (iLocal_168 >= 52)
		{
			iLocal_168 = 0;
		}
	}
	return 0;
}

void func_226()//Position - 0x15FA9
{
	int iVar0;
	
	iVar0 = func_384(Local_152.f_18);
	if (iVar0 < 32)
	{
		MISC::SET_BIT(&(Local_152.f_33), iVar0);
	}
}

int func_227(int iParam0)//Position - 0x15FCE
{
	int iVar0;
	
	if (iParam0 == func_413())
	{
		return 0;
	}
	iVar0 = func_228(iParam0);
	if (iVar0 != func_413())
	{
		return func_326(iVar0);
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x15FFE
{
	if (iParam0 != func_413())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_413();
}

void func_229(var uParam0, int iParam1)//Position - 0x16021
{
	if (uParam0->f_7 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_7 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_335())
		{
			func_229(uParam0, 7);
			return;
		}
	}
	uParam0->f_7 = iParam1;
	func_69(&(Local_152.f_794));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_73(&(Local_152.f_794), 0, 0);
	}
}

int func_230()//Position - 0x160AD
{
	int iVar0;
	
	iVar0 = func_384(Local_152.f_18);
	if (iVar0 < 32)
	{
		return BitTest(Local_152.f_33, iVar0);
	}
	return 0;
}

char* func_231(int iParam0)//Position - 0x160D3
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_232()//Position - 0x1610D
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_233(int iParam0)//Position - 0x16119
{
	int iVar0;
	
	if (Local_152.f_26 == 1)
	{
		if (func_414() != func_413())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_384(iParam0)), 1f, func_234(Global_2689235[func_414() /*453*/].f_446), false, false, false);
		}
	}
	else if (func_384(iParam0) == 0 || func_384(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_384(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_384(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return ENTITY::_GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_234(int iParam0)//Position - 0x1635A
{
	switch (iParam0)
	{
		case 1:
			return joaat("h4_prop_casino_3cardpoker_01a");
			break;
		
		case 2:
			return joaat("h4_prop_casino_3cardpoker_01b");
			break;
		
		case 3:
			return joaat("h4_prop_casino_3cardpoker_01c");
			break;
		
		case 4:
			return joaat("h4_prop_casino_3cardpoker_01e");
			break;
	}
	return joaat("vw_prop_casino_3cardpoker_01b");
}

var func_235(int iParam0, int iParam1)//Position - 0x163B2
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_232(), func_231(iParam1), func_361(iParam0), func_233(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

float func_236(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x163E2
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

Vector3 func_237(int iParam0, int iParam1)//Position - 0x1641C
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_232(), func_231(iParam1), func_361(iParam0), func_233(iParam0), 0.01f, 2) };
	return Var0;
}

int func_238()//Position - 0x1644C
{
	STREAMING::REQUEST_ANIM_DICT(func_45());
	STREAMING::REQUEST_ANIM_DICT(func_78());
	STREAMING::REQUEST_ANIM_DICT(func_92());
	STREAMING::REQUEST_ANIM_DICT(func_232());
	if (((STREAMING::HAS_ANIM_DICT_LOADED(func_45()) && STREAMING::HAS_ANIM_DICT_LOADED(func_78())) && STREAMING::HAS_ANIM_DICT_LOADED(func_92())) && STREAMING::HAS_ANIM_DICT_LOADED(func_232()))
	{
		return 1;
	}
	return 0;
}

int func_239()//Position - 0x164AB
{
	if (func_71(&(Local_152.f_792), 3500, 0))
	{
		func_69(&(Local_152.f_792));
		return 1;
	}
	return 0;
}

bool func_240(int iParam0)//Position - 0x164D3
{
	if (Local_109.f_117[iParam0] == func_413())
	{
		return 0;
	}
	return Local_109.f_117[iParam0] != PLAYER::PLAYER_ID();
}

void func_241(int iParam0)//Position - 0x164FB
{
	Global_1966118 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1966136 = iParam0;
	if (!func_249())
	{
		func_246();
	}
	if (!func_245())
	{
		func_242();
	}
}

void func_242()//Position - 0x16529
{
	func_108(joaat("mpply_cas_gmblng_l24_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_244();
	func_243();
	Global_1966132 = 1;
	Global_1966127 = 0;
}

void func_243()//Position - 0x16550
{
	func_108(joaat("mpply_cas_24h_gmblng_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

void func_244()//Position - 0x16565
{
	func_108(joaat("mpply_cas_gmblng_l24"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_1"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_2"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_3"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_4"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_5"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_6"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_7"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_8"), 0);
	func_108(joaat("mpply_cas_cur_gmblng_hr"), 0);
	func_108(joaat("mpply_cas_24h_gmblng_px"), 0);
}

bool func_245()//Position - 0x165DB
{
	return Global_1966132;
}

void func_246()//Position - 0x165E7
{
	func_108(joaat("mpply_casino_gmblng_gd"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_248();
	func_247((NETWORK::GET_CLOUD_TIME_AS_INT() + 86400));
	Global_1966131 = 1;
}

void func_247(int iParam0)//Position - 0x16612
{
	Global_1966126 = iParam0;
}

void func_248()//Position - 0x16620
{
	func_108(joaat("mpply_cas_cur_gmblng_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

bool func_249()//Position - 0x16635
{
	return func_112(joaat("mpply_casino_gmblng_gd")) != 0;
}

bool func_250(int iParam0)//Position - 0x16648
{
	return Local_109.f_117[iParam0] == PLAYER::PLAYER_ID();
}

void func_251()//Position - 0x1665D
{
	func_363(2);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
	func_341();
	func_302(PLAYER::PLAYER_ID(), 1, 0, 0);
	func_259();
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 3);
	func_252();
}

void func_252()//Position - 0x166A1
{
	int iVar0;
	int iVar1;
	
	if (Global_1966136 != -1)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1966118);
		iVar1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1966119);
		if (Global_1966119 == -1)
		{
			func_253(iVar0);
		}
		else
		{
			func_253(iVar1);
		}
		func_248();
		func_243();
		Global_1966118 = -1;
		Global_1966119 = -1;
		Global_1966136 = -1;
	}
}

void func_253(int iParam0)//Position - 0x166F8
{
	int iVar0;
	
	iVar0 = func_258();
	Global_1966127 = (Global_1966127 + iParam0);
	func_254(iVar0, iParam0);
	func_243();
}

void func_254(int iParam0, int iParam1)//Position - 0x1671D
{
	int iVar0;
	var uVar1[9];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar2 = (iParam0 + 1 * 12 - 12);
	iVar3 = 1;
	if ((iVar2 % 32) + 12 > 32)
	{
		iVar3 = 2;
	}
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / 32f));
	if (iVar4 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if ((iVar4 + iVar0) >= 9)
		{
			return;
		}
		iVar5 = func_257((iVar4 + iVar0));
		uVar1[(iVar4 + iVar0)] = func_112(iVar5);
		iVar0++;
	}
	iVar6 = func_256(&uVar1, iParam0, 12);
	iVar6 = (iVar6 + iParam1);
	func_255(&uVar1, iParam0, 12, iVar6);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		uVar7 = func_257((iVar4 + iVar0));
		func_108(uVar7, uVar1[(iVar4 + iVar0)]);
		iVar0++;
	}
}

void func_255(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x167E9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	bVar6 = false;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - bVar6))
		{
			iVar8 = (iParam2 - bVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (BitTest(iParam3, bVar6))
			{
				MISC::SET_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				MISC::CLEAR_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			bVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_256(var uParam0, int iParam1, int iParam2)//Position - 0x168D0
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		bVar1 = iVar8;
		while (bVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (BitTest((*uParam0)[(iVar5 + iVar0)], bVar1))
			{
				MISC::SET_BIT(&uVar2, iVar7);
			}
			iVar7++;
			bVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_257(int iParam0)//Position - 0x169A8
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_258()//Position - 0x169D2
{
	return func_112(joaat("mpply_cas_cur_gmblng_hr"));
}

void func_259()//Position - 0x169E3
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_260(bool bParam0, int iParam1)//Position - 0x16A01
{
	int iVar0;
	
	if (!func_262(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23150.f_8808 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23150.f_6019[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_261(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_261(int* iParam0)//Position - 0x16ABF
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

int func_262(var uParam0, bool bParam1, int iParam2)//Position - 0x16AEB
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_263(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x16B88
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
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int* iVar45;
	int* iVar46;
	int* iVar47;
	int* iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int* iVar58;
	int* iVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	char cVar73[16];
	float fVar74;
	float fVar75;
	float fVar76;
	float fVar77;
	float fVar78;
	
	if (!func_262(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_287(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23150)
	{
		if (func_165(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar55 = (fParam5 * fVar56);
	if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar57 = Global_23148;
	}
	else
	{
		fVar57 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
	}
	fVar60 = 1f;
	func_167(bParam7, &iVar58, &iVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_176(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar61, func_172(29), 64);
					StringCopy(&cVar62, func_169(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_286(Global_23147, Global_23148, fParam5, fVar55, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					iVar1 = Global_23150.f_8774;
					iVar2 = Global_23150.f_8775;
					iVar3 = Global_23150.f_8776;
					iVar4 = Global_23150.f_8777;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_286(Global_23147, (Global_23148 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) != 0)
				{
					func_285();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23147 + 0.00390625f), ((Global_23148 + fVar55) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					func_285();
					func_283((((Global_23147 + fParam5) - 0.00390625f) - func_284("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_285();
						func_283((((Global_23147 + fParam5) - 0.00390625f) - func_284("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23150.f_8788)
			{
				iVar1 = Global_23150.f_8784;
				iVar2 = Global_23150.f_8785;
				iVar3 = Global_23150.f_8786;
				iVar4 = Global_23150.f_8787;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar54 = Global_23150.f_6136[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					iVar1 = Global_23150.f_8789;
					iVar2 = Global_23150.f_8790;
					iVar3 = Global_23150.f_8791;
					iVar4 = Global_23150.f_8792;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_286(Global_23147, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_23150.f_8806)
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
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					func_165(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_282(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_286(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_282(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					func_165(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_281(Global_23150.f_5159, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_172(Global_23150.f_5159), func_169(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					func_165(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_282(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_286(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_282(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					func_165(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_281(Global_4539885.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_172(Global_4539885.f_67), func_169(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			func_276(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
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
			iVar64 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar64 = (Global_23150.f_6123 - 1);
			}
			fVar65 = 0f;
			fVar66 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar64)
			{
				fVar54 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar54 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar66 = fVar65;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar68 = 255;
					iVar69 = 255;
					iVar70 = 255;
					iVar71 = 255;
					if (Global_23150.f_8800)
					{
						HUD::GET_HUD_COLOUR(Global_23150.f_8799, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, false, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar72 = 0;
						bVar53 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar53 = true;
								iVar72 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar53 = true;
								iVar72 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar44 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_174(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_165(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar67 = (iVar8 - 1);
											while (iVar67 >= 0)
											{
												if (Global_23150.f_5474[iVar67] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] - Global_23150.f_5459[iVar8]);
												}
												iVar67 = (iVar67 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_172(26), func_169(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_172(27), func_169(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
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
									if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_174(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_275(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (func_165(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_165(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_281(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_172(Global_23150.f_4824[(iVar22 + iVar28)]), func_169(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_172(Global_23150.f_4824[(iVar22 + iVar28)]), func_169(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
											if (func_274() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_174(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar73, "TEST_LABEL", 16);
													fVar74 = 0f;
													fVar75 = 55f;
													fVar76 = 0.0185f;
													fVar77 = 0.004f;
													fVar78 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar75), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar73);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23150.f_6129 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar78), (fVar35 + fVar77), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (func_165(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_165(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_281(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_172(Global_23150.f_4824[(iVar22 + iVar14)]), func_169(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_172(Global_23150.f_4824[(iVar22 + iVar14)]), func_169(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_172(Global_23150.f_4824[(iVar22 + iVar14)]), func_169(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_174(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_275(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[iVar20]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_172(26), func_169(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_172(27), func_169(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_174(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										func_273((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_174(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_275(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_172(26), func_169(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_172(27), func_169(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									func_174(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
									func_272((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_165(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar52)
										{
											if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_281(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_172(26), func_169(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
													}
												}
											}
											if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_281(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_172(27), func_169(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_165(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(Global_23150.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_172(Global_23150.f_4824[iVar22]), func_169(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_271(Global_23150.f_4824[iVar22])), (fVar37 * func_271(Global_23150.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
							{
								if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar65 = (fVar65 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar65 = (fVar65 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar49;
	Global_23150.f_6269 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		func_264(0);
	}
	Global_23150.f_8773 = 0;
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
		func_187(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_264(int iParam0)//Position - 0x198FC
{
	if (func_270())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_269(0))
		{
			func_265(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_265(int iParam0)//Position - 0x1992F
{
	if (func_270())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_268())
		{
			func_267(1, 1);
		}
		else
		{
			func_267(0, 0);
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
	if (!func_266())
	{
		Global_20266.f_1 = 3;
	}
}

int func_266()//Position - 0x199B9
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_267(bool bParam0, bool bParam1)//Position - 0x199E0
{
	if (bParam0)
	{
		if (func_269(0))
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

bool func_268()//Position - 0x19A54
{
	return BitTest(Global_1958711, 5);
}

int func_269(int iParam0)//Position - 0x19A62
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

bool func_270()//Position - 0x19AB9
{
	return BitTest(Global_1958711, 19);
}

float func_271(int iParam0)//Position - 0x19AC8
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_272(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x19B37
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_273(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x19B56
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_274()//Position - 0x19B74
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_275(bool bParam0)//Position - 0x19B85
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23150.f_8801[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23150.f_8801[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_276(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x19BCB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_262(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_287(bParam4, bParam8))
	{
		return;
	}
	if (func_279())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_277(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[iVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_23150.f_5417[iVar1], true), 64);
				}
				else if (Global_23150.f_5430[iVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_23150.f_5430[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23150.f_5472 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_192(&(Global_23150.f_5162[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_192(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[iVar1] == -1)
					{
						func_191(&(Global_23150.f_5355[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23150.f_5404[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23150.f_5355[iVar1 /*4*/]));
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
						if (Global_23150.f_5417[iVar1] != 363 && BitTest(Global_23150.f_5443, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23150.f_5417[iVar1]);
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
			if (MISC::GET_HASH_KEY(&(Global_4539885.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23150.f_5160);
				func_192(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_191(&(Global_4539885.f_16));
				}
				else
				{
					iVar4 = Global_23150.f_5404[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539885.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23150.f_5161 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23150.f_5355[iVar1 /*4*/]));
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
		if (Global_4539885.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539885.f_16));
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
			if (!Global_23150.f_8808)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23150.f_8808 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23150.f_5446)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_277(int iParam0, int iParam1)//Position - 0x1A0D0
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_278(-1, 0) == 8;
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

int func_278(int iParam0, bool bParam1)//Position - 0x1A11B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_137();
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

int func_279()//Position - 0x1A15C
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_280())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20211 == 0)
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

int func_280()//Position - 0x1A1CA
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_281(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x1A1E4
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
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_282(float fParam0)//Position - 0x1A2F9
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
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_283(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1A358
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_284(char* sParam0, int iParam1, int iParam2)//Position - 0x1A37B
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
	func_285();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_285()//Position - 0x1A3BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23150.f_8783)
	{
		iVar0 = Global_23150.f_8779;
		iVar1 = Global_23150.f_8780;
		iVar2 = Global_23150.f_8781;
		iVar3 = Global_23150.f_8782;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_286(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1A447
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

int func_287(bool bParam0, bool bParam1)//Position - 0x1A476
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_289(8, -1) && func_288() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78579) || Global_23150.f_8807) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_288()//Position - 0x1A513
{
	return Global_1574991;
}

var func_289(int iParam0, int iParam1)//Position - 0x1A51F
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

void func_290(int iParam0, char* sParam1, int iParam2)//Position - 0x1A557
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_291(char* sParam0)//Position - 0x1A606
{
	if (Global_23150.f_5156 >= 3 || Global_23150.f_5153 >= 4)
	{
		return;
	}
	Global_23150.f_5087[Global_23150.f_5153] = 1;
	Global_23150.f_5153++;
	StringCopy(&(Global_23150.f_5104[Global_23150.f_5156 /*16*/]), sParam0, 64);
	Global_23150.f_5156++;
}

void func_292(char* sParam0, int iParam1, int iParam2)//Position - 0x1A667
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_5081), sParam0, 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = iParam1;
	Global_23150.f_5158 = MISC::GET_GAME_TIMER();
	Global_23150.f_5159 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
}

void func_293(int iParam0, bool bParam1, int iParam2)//Position - 0x1A6CC
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_6130 = iParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

void func_294(char* sParam0)//Position - 0x1A81E
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_1), sParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_295(int iParam0, char* sParam1, char* sParam2)//Position - 0x1A869
{
	Global_23150 = iParam0;
	func_296(29, sParam1, sParam2);
}

void func_296(int iParam0, char* sParam1, char* sParam2)//Position - 0x1A880
{
	StringCopy(&(Global_23150.f_6411[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23150.f_7420[iParam0 /*16*/]), sParam2, 64);
}

void func_297(bool bParam0, bool bParam1)//Position - 0x1A8A4
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
	}
}

bool func_298(char* sParam0, int iParam1, bool bParam2)//Position - 0x1AD97
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_262(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_23150.f_6005[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23150.f_6012[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_299(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_299(var uParam0)//Position - 0x1AE8D
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

void func_300(int iParam0)//Position - 0x1AF2F
{
	Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam0;
	Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 = func_384(iParam0);
}

bool func_301()//Position - 0x1AF55
{
	return Global_4535599 == 1;
}

void func_302(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1AF63
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_311())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_204())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_277(PLAYER::PLAYER_ID(), 0) && !func_310()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_307(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_306(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_305();
					func_304();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_306(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_303(Global_4718592.f_168757))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_303(int iParam0)//Position - 0x1B3F1
{
	return iParam0 == 17;
}

void func_304()//Position - 0x1B3FE
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_305()//Position - 0x1B44B
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_306(int iParam0)//Position - 0x1B489
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_307(bool bParam0, int iParam1, int iParam2)//Position - 0x1B4BA
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_309();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (func_277(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_308(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_308(int iParam0, bool bParam1)//Position - 0x1B58A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_309()//Position - 0x1B5A6
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_310()//Position - 0x1B5FE
{
	return BitTest(Global_2621446, 3);
}

int func_311()//Position - 0x1B60C
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_312()//Position - 0x1B63D
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_313(var uParam0)//Position - 0x1B65C
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_314(*uParam0);
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

int func_314(int iParam0)//Position - 0x1B6B3
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

int func_315(int iParam0, bool bParam1)//Position - 0x1B6EE
{
	int iVar0;
	
	iVar0 = func_314(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_269(0))
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

int func_316(int iParam0)//Position - 0x1B7A6
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 26);
}

void func_317(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1B7C9
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_313(uParam0);
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

int func_318(int iParam0)//Position - 0x1B8F4
{
	if (func_319(iParam0, 1))
	{
		return Global_1892703[func_328() /*599*/].f_10.f_428;
	}
	return -1;
}

bool func_319(int iParam0, bool bParam1)//Position - 0x1B91A
{
	if (!bParam1)
	{
		if (func_320(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_413();
}

int func_320(int iParam0)//Position - 0x1B945
{
	if (iParam0 != func_413())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_413())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_321()//Position - 0x1B97A
{
	if (((((((((func_337("TCP_USED") || func_337("CAS_MG_CBAN")) || func_337("CAS_MG_CTIME")) || func_324("CAS_MG_MEMB2", func_325(1))) || func_337("CAS_MG_SUITE2")) || func_337("CAS_MG_NOCHIPS3")) || func_337("CAS_MG_LOWCHIPS3")) || func_337("CAS_MG_NOCHIPS7")) || func_337("CAS_MG_LOWCHIPS7")) || func_337("TCP_NA"))
	{
		return 1;
	}
	return 0;
}

void func_322()//Position - 0x1BA15
{
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_325(0), false, true, false, -1, 0))
	{
		func_224("MAITRD_M_D0E", -1);
	}
	else if (func_326(PLAYER::PLAYER_ID()))
	{
	}
	else if (BitTest(Global_1946250.f_5, 31))
	{
	}
	else if (Global_4535599 != 0)
	{
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 30);
	}
}

void func_323(char* sParam0, int iParam1)//Position - 0x1BA6F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_324(char* sParam0, int iParam1)//Position - 0x1BA8B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_325(bool bParam0)//Position - 0x1BAA4
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_326(int iParam0)//Position - 0x1BABA
{
	if (iParam0 == func_413())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 18);
}

bool func_327()//Position - 0x1BAE3
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 18);
}

int func_328()//Position - 0x1BB01
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
}

bool func_329(bool bParam0)//Position - 0x1BB16
{
	return func_319(PLAYER::PLAYER_ID(), bParam0);
}

int func_330(int iParam0)//Position - 0x1BB28
{
	if (iParam0 != func_413())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_384 != 0;
	}
	return 0;
}

int func_331()//Position - 0x1BB4E
{
	if (func_334() <= 0)
	{
		return 0;
	}
	if (func_333() <= 0)
	{
		return 1;
	}
	if (func_332())
	{
		return 2;
	}
	return 3;
}

bool func_332()//Position - 0x1BB7A
{
	return Global_1966125 != 0;
}

int func_333()//Position - 0x1BB88
{
	return (Global_262145.f_27177 + func_111());
}

int func_334()//Position - 0x1BB9C
{
	return (Global_262145.f_27178 - func_111());
}

bool func_335()//Position - 0x1BBB0
{
	return func_331() != 3;
}

void func_336(char* sParam0)//Position - 0x1BBBE
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_337(char* sParam0)//Position - 0x1BBD4
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_338(int iParam0, var uParam1)//Position - 0x1BBE7
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!MONEY::_NETWORK_CASINO_CAN_USE_GAMBLING_TYPE(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_339()//Position - 0x1BC69
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_340()//Position - 0x1BC77
{
	if (Global_4521801.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_341()//Position - 0x1BC8F
{
	if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 != -1)
	{
		Local_152.f_2 = 0;
		Local_152.f_3 = 0;
		Local_152.f_4 = 0;
		Local_152.f_6 = 0;
		Local_152.f_22 = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/] = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
		Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	}
}

bool func_342()//Position - 0x1BD16
{
	return Global_2815059.f_6757;
}

int func_343()//Position - 0x1BD25
{
	if (((func_344() != -1 && func_344() != 28) && func_344() != 17) && func_344() != 12)
	{
		return 1;
	}
	return 0;
}

int func_344()//Position - 0x1BD5F
{
	return Global_1057409;
}

bool func_345()//Position - 0x1BD6B
{
	return BitTest(Global_2714762.f_2, 11);
}

bool func_346()//Position - 0x1BD7C
{
	return Global_2714762.f_691;
}

int func_347(int iParam0)//Position - 0x1BD8B
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_349(iParam0);
	iVar1 = func_348(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44024[iVar1 /*5*/].f_3;
}

int func_348(int iParam0)//Position - 0x1BDCE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_349(int iParam0)//Position - 0x1BDFE
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
		if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_350()//Position - 0x1BE3F
{
	int iVar0;
	
	if (func_319(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_328();
		if (func_62(iVar0, 1, 1) && BitTest(Global_1853348[iVar0 /*834*/].f_267.f_384.f_3, 6))
		{
			return 1;
		}
		if ((func_353(PLAYER::PLAYER_ID(), 0) && func_351(PLAYER::PLAYER_ID())) || func_409(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_351(int iParam0)//Position - 0x1BEAC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_352(iParam0, 9);
	}
	return 0;
}

var func_352(int iParam0, int iParam1)//Position - 0x1BECA
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_353(int iParam0, int iParam1)//Position - 0x1BEE2
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_354()//Position - 0x1BF1D
{
	if (func_419(PLAYER::PLAYER_ID()) && func_414() != func_413())
	{
		if ((BitTest(Global_2689235[func_414() /*453*/].f_318.f_4, 0) || BitTest(Global_1946250.f_6, 10)) || Global_2689235[func_414() /*453*/].f_446 != Global_1966110)
		{
			return 0;
		}
	}
	return 1;
}

bool func_355(int iParam0, struct<3> Param1, float fParam2)//Position - 0x1BF80
{
	return func_356(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam2);
}

bool func_356(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0x1BF9F
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, fParam1, 0f, 1f, 0f) };
	fVar1 = func_357(func_358(Var0), func_358(Param2 - Param0));
	return MISC::ACOS(fVar1) <= fParam3;
}

float func_357(struct<3> Param0, struct<3> Param1)//Position - 0x1BFDB
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_358(struct<3> Param0)//Position - 0x1BFFC
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

Vector3 func_359(int iParam0)//Position - 0x1C03F
{
	if (Local_152.f_26 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1142.798f, 263.5501f, -51.7869f;
			
			case 1:
				return 1142.82f, 264.2595f, -51.8004f;
			
			case 2:
				return 1143.339f, 264.7519f, -51.8289f;
			
			case 3:
				return 1144.052f, 264.7396f, -51.7913f;
			
			case 4:
				return 1146.849f, 261.9344f, -51.8167f;
			
			case 5:
				return 1146.865f, 261.2238f, -51.8003f;
			
			case 6:
				return 1146.325f, 260.7546f, -51.812f;
			
			case 7:
				return 1145.63f, 260.7765f, -51.7979f;
			
			case 8:
				return 1134.411f, 266.1568f, -50.9898f;
			
			case 9:
				return 1133.708f, 266.1863f, -50.9883f;
			
			case 10:
				return 1133.242f, 266.7186f, -50.9969f;
			
			case 11:
				return 1133.261f, 267.4263f, -50.9812f;
			
			case 12:
				return 1149.42f, 251.1891f, -50.9655f;
			
			case 13:
				return 1148.727f, 251.1957f, -50.9855f;
			
			case 14:
				return 1148.236f, 251.7239f, -51.0083f;
			
			case 15:
				return 1148.262f, 252.4149f, -51.0019f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_360(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x1C244
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), Param1) <= (fParam2 * fParam2);
}

Vector3 func_361(int iParam0)//Position - 0x1C262
{
	int iVar0;
	
	if (Local_152.f_26 == 1)
	{
		if (func_414() != func_413())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_384(iParam0)), 1f, func_234(Global_2689235[func_414() /*453*/].f_446), false, false, false);
		}
	}
	else if (func_384(iParam0) == 0 || func_384(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_384(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_384(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return ENTITY::_GET_ENTITY_BONE_POSITION_2(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_362(int iParam0)//Position - 0x1C4A3
{
	return Global_100493.f_374 == iParam0;
}

void func_363(int iParam0)//Position - 0x1C4B5
{
	Local_152.f_798 = iParam0;
}

void func_364(int iParam0)//Position - 0x1C4C5
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_229(&(Local_151[iParam0 /*9*/]), 0);
	Local_151[iParam0 /*9*/].f_7.f_1 = -1;
}

int func_365()//Position - 0x1C4FA
{
	int iVar0;
	
	if (Local_152.f_26 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_34))
		{
			if (func_414() != func_413())
			{
				iVar0 = func_234(Global_2689235[func_414() /*453*/].f_446);
				STREAMING::REQUEST_MODEL(iVar0);
				if (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					return 0;
				}
				Local_152.f_34 = OBJECT::CREATE_OBJECT(iVar0, func_76(0), false, false, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_34, func_76(0), false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_152.f_34, func_75(0));
				OBJECT::_SET_OBJECT_TEXTURE_VARIATION(Local_152.f_34, func_366(func_414()));
				ENTITY::FREEZE_ENTITY_POSITION(Local_152.f_34, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
		}
		else
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

int func_366(int iParam0)//Position - 0x1C5AD
{
	if (func_369(iParam0))
	{
		return 1;
	}
	else if (func_368(iParam0))
	{
		return 2;
	}
	else if (func_367(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_367(int iParam0)//Position - 0x1C5E3
{
	if (iParam0 != func_413())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 21);
	}
	return 0;
}

int func_368(int iParam0)//Position - 0x1C60C
{
	if (iParam0 != func_413())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 20);
	}
	return 0;
}

int func_369(int iParam0)//Position - 0x1C635
{
	if (iParam0 != func_413())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 19);
	}
	return 0;
}

void func_370(var uParam0, bool bParam1, bool bParam2)//Position - 0x1C65E
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

int func_371()//Position - 0x1C69B
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_372(var uParam0)//Position - 0x1C6B5
{
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			if ((func_375(PLAYER::PLAYER_ID(), 1) || func_375(PLAYER::PLAYER_ID(), 2)) || func_374())
			{
				func_229(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_375(PLAYER::PLAYER_ID(), 1) || func_375(PLAYER::PLAYER_ID(), 2)) || func_374())
			{
				func_229(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_373())
			{
				func_229(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_373()//Position - 0x1C775
{
	if ((((func_375(PLAYER::PLAYER_ID(), 4) || func_375(PLAYER::PLAYER_ID(), 5)) || func_375(PLAYER::PLAYER_ID(), 6)) || func_375(PLAYER::PLAYER_ID(), 7)) || func_374())
	{
		return 1;
	}
	return 0;
}

int func_374()//Position - 0x1C7C5
{
	if (func_71(&(Local_152.f_794), 3500, 0))
	{
		func_69(&(Local_152.f_794));
		return 1;
	}
	return 0;
}

int func_375(int iParam0, int iParam1)//Position - 0x1C7ED
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return BitTest(Local_109.f_600[iParam0], iVar0);
}

void func_376(int iParam0, int iParam1)//Position - 0x1C831
{
	Global_23011.f_9 = iParam0;
	Global_23011.f_10 = iParam1;
}

void func_377(bool bParam0)//Position - 0x1C847
{
	if (bParam0)
	{
		func_378(1);
		func_265(1);
	}
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::ENABLE_ALL_CONTROL_ACTIONS(1);
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
		PAD::DISABLE_CONTROL_ACTION(2, 199, true);
		PAD::SET_INPUT_EXCLUSIVE(0, 200);
		PAD::SET_INPUT_EXCLUSIVE(2, 200);
		PAD::SET_INPUT_EXCLUSIVE(0, 199);
		PAD::SET_INPUT_EXCLUSIVE(2, 199);
		PAD::SET_INPUT_EXCLUSIVE(0, 201);
		PAD::SET_INPUT_EXCLUSIVE(0, 202);
		PAD::SET_INPUT_EXCLUSIVE(0, 187);
	}
}

void func_378(bool bParam0)//Position - 0x1C8BF
{
	if (bParam0)
	{
		if (func_345())
		{
			Global_2714762.f_41 = 1;
		}
	}
	else
	{
		Global_2714762.f_41 = 0;
	}
}

void func_379(bool bParam0)//Position - 0x1C8E4
{
	char* sVar0;
	
	if (Local_152.f_798 > 2 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
	{
		if (((((!func_383() && !func_382()) && !func_381()) && !func_380()) && !func_86(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_302(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_259();
	}
	if (Local_152.f_798 > 2)
	{
		func_259();
	}
	if (BitTest(Local_152.f_20, 0) || BitTest(Local_152.f_20, 3))
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_384(Local_152.f_18) == 2 || func_384(Local_152.f_18) == 3) || func_419(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		func_260(1, -1);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
		iLocal_165 = 1;
		Local_152.f_20 = 0;
	}
	if (CAM::DOES_CAM_EXIST(Local_152.f_13))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(Local_152.f_13, false);
		bLocal_166 = false;
	}
	if (Local_152.f_31 != -1)
	{
		func_313(&(Local_152.f_31));
		Local_152.f_31 = -1;
	}
	if (bParam0)
	{
		if (BitTest(Local_152.f_22, 4) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_idle", 3))
		{
			Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), func_233(Local_151[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_68[func_41(Local_151[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_151[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_152.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
			Local_152.f_7 = 1;
		}
		else
		{
			Local_152.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_152.f_18), func_233(Local_152.f_18), 2, false, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_152.f_24, func_232(), func_93(Local_152.f_18), 2f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_152.f_24);
		}
	}
	Local_152.f_15 = 0;
	Local_152.f_23 = 0;
	Local_152.f_22 = 0;
	Local_152.f_29 = 0;
	Local_151[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Local_152.f_1 = 0;
	Local_152.f_2 = 0;
	Local_152.f_3 = 0;
	Local_152.f_4 = 0;
	Local_152.f_6 = 0;
	Local_152.f_14 = 0;
	if (!bParam0)
	{
		func_341();
	}
	Local_162.f_4 = func_402();
	Local_162.f_5 = func_207(&uLocal_159, 0, 0);
	if (Local_152.f_798 > 2)
	{
		if (Global_262145.f_26821)
		{
			STATS::_PLAYSTATS_CASINO_THREECARDPOKER_LIGHT(&Local_162);
		}
	}
	if (!bParam0)
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 3);
	}
	if (bParam0 || Local_152.f_798 > 2)
	{
		func_252();
	}
	func_363(10);
	func_161(0);
}

int func_380()//Position - 0x1CC9E
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_381()//Position - 0x1CCB8
{
	return Global_1575058;
}

int func_382()//Position - 0x1CCC4
{
	if (func_205() == 3 || func_205() == 2)
	{
		return 1;
	}
	return 0;
}

int func_383()//Position - 0x1CCE6
{
	if (func_205() == 1 || func_205() == 4)
	{
		return 1;
	}
	return 0;
}

int func_384(int iParam0)//Position - 0x1CD08
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_385()//Position - 0x1CD88
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_152.f_26)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(Local_109.f_50[iVar0]);
			if (func_387(iVar1))
			{
				if (func_386(iVar0))
				{
					AUDIO::_0xF8AD2EED7C47E8FE(iVar1, false, true);
				}
				else
				{
					AUDIO::_0xF8AD2EED7C47E8FE(iVar1, true, false);
				}
			}
		}
		iVar0++;
	}
}

int func_386(int iParam0)//Position - 0x1CDEC
{
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 5) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 2))
	{
		return 0;
	}
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 3))
	{
		if (Local_151[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_387(int iParam0)//Position - 0x1CE4F
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

void func_388()//Position - 0x1CE70
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_152.f_26)
	{
		if (Global_2788829 != iVar0 && (Global_2788829 != -1 || func_419(PLAYER::PLAYER_ID())))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_35[iVar0]))
			{
				func_391(iVar0);
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_50[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0])))
			{
				if (!iLocal_177[iVar0])
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), func_45(), func_44(iVar0), 3))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), 1691374422))
						{
							iLocal_178[iVar0] = 1;
						}
					}
					else
					{
						iLocal_178[iVar0] = 0;
					}
					if (((iLocal_178[iVar0] || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), func_45(), func_43(iVar0), 3)) || Local_109.f_576[iVar0] == 6) || Local_109.f_576[iVar0] == 7)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_152.f_35[iVar0]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_152.f_35[iVar0], false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_152.f_35[iVar0], NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
						}
						iLocal_177[iVar0] = 1;
					}
				}
				else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), func_45(), func_31(iVar0), 3) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), 152918166)) || ((Local_109.f_576[iVar0] < 5 && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), func_45(), func_44(iVar0), 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_50[iVar0]), func_45(), func_43(iVar0), 3)))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_152.f_35[iVar0]))
					{
						ENTITY::DETACH_ENTITY(Local_152.f_35[iVar0], true, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_35[iVar0], func_390(iVar0), false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_152.f_35[iVar0], func_389(iVar0), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_152.f_35[iVar0], true);
					}
					iLocal_177[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_389(int iParam0)//Position - 0x1D0E0
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

Vector3 func_390(int iParam0)//Position - 0x1D110
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

void func_391(int iParam0)//Position - 0x1D140
{
	int iVar0;
	
	if (Local_152.f_5)
	{
		iVar0 = joaat("vw_prop_vw_casino_cards_01");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(func_45());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_45()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_35[iParam0]))
	{
		Local_152.f_35[iParam0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, func_390(iParam0), false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_35[iParam0], func_390(iParam0), false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_152.f_35[iParam0], func_389(iParam0), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_152.f_35[iParam0], true);
		STREAMING::REMOVE_ANIM_DICT(func_45());
	}
}

void func_392()//Position - 0x1D1FB
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	if (((func_362(joaat("rm_GamingFloor_02")) || func_362(joaat("rm_GamingFloor_03"))) || func_419(PLAYER::PLAYER_ID())) && !func_401())
	{
		iLocal_164 = 1;
		if (!bLocal_163)
		{
			bLocal_163 = (func_406() && func_400());
		}
	}
	else
	{
		if (iLocal_164)
		{
			func_407();
			func_398();
			iLocal_164 = 0;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_152.f_26)
	{
		if (iVar0 != iLocal_167 && iVar0 != Local_151[PLAYER::PLAYER_ID() /*9*/].f_2)
		{
		}
		else
		{
			bVar1 = false;
			if (func_59(iVar0, Local_152.f_26))
			{
				bVar1 = true;
			}
			Var3 = { 0f, 0f, func_75(iVar0) };
			iVar4 = 0;
			while (iVar4 < 4)
			{
				iVar5 = Local_109.f_117[(iVar0 * 4 + iVar4)];
				if (iVar5 < 0 || ((!func_362(joaat("rm_GamingFloor_02")) && !func_362(joaat("rm_GamingFloor_03"))) && !func_419(PLAYER::PLAYER_ID())))
				{
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, iVar2)]))
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, iVar2)]));
						}
						iVar2++;
					}
				}
				else
				{
					if (Local_151[iVar5 /*9*/].f_3 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 0)]))
						{
							if (func_396(Local_151[iVar5 /*9*/].f_3, bVar1) != 0)
							{
								Local_152.f_40[func_397(iVar0, iVar4, 0)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(Local_151[iVar5 /*9*/].f_3, bVar1), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_3, 0, iVar4, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_40[func_397(iVar0, iVar4, 0)], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_3, 0, iVar4, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_152.f_40[func_397(iVar0, iVar4, 0)], Var3 + func_394(Local_151[iVar5 /*9*/].f_4, 0, iVar4, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_393(Local_151[iVar5 /*9*/].f_3)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_393(Local_151[iVar5 /*9*/].f_3), Local_152.f_40[func_397(iVar0, iVar4, 0)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 0)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 0)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 0)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 0)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 0)], SYSTEM::FLOOR(func_218(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 0)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 0)]));
						}
					}
					if (Local_151[iVar5 /*9*/].f_5 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 1)]))
						{
							if (func_396(Local_151[iVar5 /*9*/].f_5, bVar1) != 0)
							{
								Local_152.f_40[func_397(iVar0, iVar4, 1)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(Local_151[iVar5 /*9*/].f_5, bVar1), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_5, 1, iVar4, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_40[func_397(iVar0, iVar4, 1)], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_5, 1, iVar4, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_152.f_40[func_397(iVar0, iVar4, 1)], Var3 + func_394(Local_151[iVar5 /*9*/].f_4, 1, iVar4, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_393(Local_151[iVar5 /*9*/].f_5)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_393(Local_151[iVar5 /*9*/].f_5), Local_152.f_40[func_397(iVar0, iVar4, 1)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 1)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 1)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 1)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 1)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 1)], SYSTEM::FLOOR(func_218(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 1)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 1)]));
						}
					}
					if (Local_151[iVar5 /*9*/].f_4 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 2)]))
						{
							if (func_396(Local_151[iVar5 /*9*/].f_4, bVar1) != 0)
							{
								Local_152.f_40[func_397(iVar0, iVar4, 2)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(Local_151[iVar5 /*9*/].f_4, bVar1), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_4, 2, iVar4, bVar1, 1)), false, false, true);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_152.f_40[func_397(iVar0, iVar4, 2)], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.f_2, func_395(Local_151[iVar5 /*9*/].f_4, 2, iVar4, bVar1, 1)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_152.f_40[func_397(iVar0, iVar4, 2)], Var3 + func_394(Local_151[iVar5 /*9*/].f_4, 2, iVar4, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_393(Local_151[iVar5 /*9*/].f_4)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_393(Local_151[iVar5 /*9*/].f_4), Local_152.f_40[func_397(iVar0, iVar4, 2)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 2)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 2)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[func_397(iVar0, iVar4, 2)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 2)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 2)], SYSTEM::FLOOR(func_218(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_152.f_40[func_397(iVar0, iVar4, 2)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_152.f_40[func_397(iVar0, iVar4, 2)]));
						}
					}
				}
				iVar4++;
			}
			if (!Local_109.f_5[iVar0])
			{
				Local_152.f_8[iVar0] = 1;
			}
			else
			{
				Local_152.f_8[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iLocal_167++;
	if (iLocal_167 >= Local_152.f_26)
	{
		iLocal_167 = 0;
	}
}

char* func_393(int iParam0)//Position - 0x1D911
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_394(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1DB2C
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 66.96f;
					
					case 1:
						return 0f, 0f, 66.96f;
					
					case 2:
						return 0f, 0f, 64.08f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 21.24f;
					
					case 1:
						return 0f, 0f, 15.48f;
					
					case 2:
						return 0f, 0f, 20.16f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -21.6f;
					
					case 1:
						return 0f, 0f, -25.56f;
					
					case 2:
						return 0f, 0f, -21.96f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -71.64f;
					
					case 1:
						return 0f, 0f, -70.2f;
					
					case 2:
						return 0f, 0f, -68.4f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 68.76f;
							
							case 1:
								return 0f, 0f, 68.76f;
							
							case 2:
								return 0f, 0f, 69.48f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 22.68f;
							
							case 1:
								return 0f, 0f, 21.96f;
							
							case 2:
								return 0f, 0f, 22.68f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.96f;
							
							case 1:
								return 0f, 0f, -23.04f;
							
							case 2:
								return 0f, 0f, -21.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -68.04f;
							
							case 1:
								return 0f, 0f, -69.84f;
							
							case 2:
								return 0f, 0f, -69.84f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 66.96f;
							
							case 1:
								return 0f, 0f, 66.96f;
							
							case 2:
								return 0f, 0f, 64.08f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 21.24f;
							
							case 1:
								return 0f, 0f, 15.48f;
							
							case 2:
								return 0f, 0f, 20.16f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.6f;
							
							case 1:
								return 0f, 0f, -25.56f;
							
							case 2:
								return 0f, 0f, -21.96f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -71.64f;
							
							case 1:
								return 0f, 0f, -70.2f;
							
							case 2:
								return 0f, 0f, -68.4f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_395(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1DE9E
{
	float fVar0;
	struct<3> Var1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.95f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.59535f, 0.200875f, 0f };
						break;
					
					case 1:
						Var1 = { 0.51655f, 0.2268f, 0f };
						break;
					
					case 2:
						Var1 = { 0.689125f, 0.171575f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.247825f, -0.123625f, 0f };
						break;
					
					case 1:
						Var1 = { 0.2163f, -0.04745f, 0f };
						break;
					
					case 2:
						Var1 = { 0.2869f, -0.211925f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.2804f, -0.109775f, 0f };
						break;
					
					case 1:
						Var1 = { -0.2552f, -0.031225f, 0f };
						break;
					
					case 2:
						Var1 = { -0.30935f, -0.205675f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.606975f, 0.249675f, 0f };
						break;
					
					case 1:
						Var1 = { -0.529875f, 0.281425f, 0f };
						break;
					
					case 2:
						Var1 = { -0.69795f, 0.211525f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.953f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.597825f, 0.20105f, 0f };
								break;
							
							case 1:
								Var1 = { 0.5151f, 0.22775f, 0f };
								break;
							
							case 2:
								Var1 = { 0.686125f, 0.171625f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.248425f, -0.126325f, 0f };
								break;
							
							case 1:
								Var1 = { 0.2144f, -0.04415f, 0f };
								break;
							
							case 2:
								Var1 = { 0.285325f, -0.212f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.281f, -0.111875f, 0f };
								break;
							
							case 1:
								Var1 = { -0.254775f, -0.029175f, 0f };
								break;
							
							case 2:
								Var1 = { -0.308175f, -0.199325f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.61015f, 0.24815f, 0f };
								break;
							
							case 1:
								Var1 = { -0.527375f, 0.283575f, 0f };
								break;
							
							case 2:
								Var1 = { -0.694475f, 0.214225f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.59535f, 0.200875f, 0f };
								break;
							
							case 1:
								Var1 = { 0.51655f, 0.2268f, 0f };
								break;
							
							case 2:
								Var1 = { 0.689125f, 0.171575f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.247825f, -0.123625f, 0f };
								break;
							
							case 1:
								Var1 = { 0.2163f, -0.04745f, 0f };
								break;
							
							case 2:
								Var1 = { 0.2869f, -0.211925f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.2804f, -0.109775f, 0f };
								break;
							
							case 1:
								Var1 = { -0.2552f, -0.031225f, 0f };
								break;
							
							case 2:
								Var1 = { -0.30935f, -0.205675f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.606975f, 0.249675f, 0f };
								break;
							
							case 1:
								Var1 = { -0.529875f, 0.281425f, 0f };
								break;
							
							case 2:
								Var1 = { -0.69795f, 0.211525f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	if (!bParam4)
	{
		Var1.f_2 = fVar0;
	}
	else
	{
		Var1.f_2 = fVar0;
		switch (iParam0)
		{
			case 10:
			case 50:
			case 100:
			case 500:
			case 1000:
			case 5000:
			case 10000:
				Var1.f_2 = (Var1.f_2 + 0.004f);
				break;
			}
	}
	return Var1;
}

int func_396(int iParam0, bool bParam1)//Position - 0x1E896
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		
		default:
	}
	return 0;
}

int func_397(int iParam0, int iParam1, int iParam2)//Position - 0x1ED16
{
	return ((iParam0 * 3 * 4 + iParam1 * 3) + iParam2);
}

void func_398()//Position - 0x1ED2C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_399(iVar0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		iVar0++;
	}
}

int func_399(int iParam0)//Position - 0x1ED55
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		
		default:
	}
	return 0;
}

int func_400()//Position - 0x1EE61
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_399(iVar0);
		STREAMING::REQUEST_MODEL(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_401()//Position - 0x1EE99
{
	return BitTest(Global_1946250.f_6, 12);
}

int func_402()//Position - 0x1EEAA
{
	return func_403(8251, -1, 0);
}

int func_403(int iParam0, int iParam1, int iParam2)//Position - 0x1EEBB
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_404(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_404(var uParam0)//Position - 0x1EEF8
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_137();
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

void func_405()//Position - 0x1EF2C
{
	if (Local_152.f_26 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
		{
			if (func_414() != func_413())
			{
				iLocal_174 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(0), 1f, func_234(Global_2689235[func_414() /*453*/].f_446), false, false, false);
			}
		}
		else if (func_414() != func_413() && CAM::IS_SCREEN_FADED_OUT())
		{
			if (OBJECT::_GET_OBJECT_TEXTURE_VARIATION(iLocal_174) != func_366(func_414()))
			{
				OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iLocal_174, func_366(func_414()));
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
		{
			iLocal_175 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1133.74f, 266.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
		}
		else if (OBJECT::_GET_OBJECT_TEXTURE_VARIATION(iLocal_175) != 3)
		{
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iLocal_175, 3);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
		{
			iLocal_176 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1148.74f, 251.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
		}
		else if (OBJECT::_GET_OBJECT_TEXTURE_VARIATION(iLocal_176) != 3)
		{
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iLocal_176, 3);
		}
	}
}

int func_406()//Position - 0x1F031
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_152.f_5);
		STREAMING::REQUEST_MODEL(iVar2);
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_407()//Position - 0x1F074
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_152.f_5);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		iVar0++;
	}
}

int func_408()//Position - 0x1F0A8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	return 0;
}

int func_409(int iParam0)//Position - 0x1F0C5
{
	if (func_410(iParam0) != func_413())
	{
		return func_410(iParam0) == func_228(iParam0);
	}
	return 0;
}

int func_410(int iParam0)//Position - 0x1F0EB
{
	return Global_1892703[iParam0 /*599*/].f_10.f_35;
}

int func_411()//Position - 0x1F100
{
	return func_412(PLAYER::PLAYER_ID());
}

int func_412(int iParam0)//Position - 0x1F110
{
	return MISC::GET_BITS_IN_RANGE(Global_2689235[iParam0 /*453*/].f_318.f_3, 28, 31);
}

int func_413()//Position - 0x1F12D
{
	return -1;
}

int func_414()//Position - 0x1F136
{
	return func_415(PLAYER::PLAYER_ID());
}

int func_415(int iParam0)//Position - 0x1F146
{
	int iVar0;
	
	if (iParam0 == func_413())
	{
		return iParam0;
	}
	if (func_417(iParam0) != -1)
	{
		iVar0 = func_416(func_417(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_319(iParam0, 0))
			{
				return func_228(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_413();
		}
		return Global_2689235[iParam0 /*453*/].f_318.f_9;
	}
	return func_413();
}

int func_416(int iParam0)//Position - 0x1F1CA
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

int func_417(int iParam0)//Position - 0x1F651
{
	if (iParam0 != func_413())
	{
		if (func_62(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
		else if (((Global_1575058 || Global_2667225.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_62(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
	}
	return -1;
}

int func_418(int iParam0)//Position - 0x1F6C0
{
	if (iParam0 != func_413() && func_62(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_419(int iParam0)//Position - 0x1F6F1
{
	if (iParam0 != func_413())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_416(Global_2689235[iParam0 /*453*/].f_318.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_420(int iParam0)//Position - 0x1F738
{
	if (iParam0 != func_413())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_416(Global_2689235[iParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

var func_421()//Position - 0x1F77F
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_422()//Position - 0x1F78F
{
	if (Local_152.f_798 > 2)
	{
		if (Global_262145.f_26815)
		{
			STATS::_PLAYSTATS_CASINO_THREECARDPOKER(&Local_161);
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_379(0);
	func_407();
	func_398();
	func_425();
	func_424();
	if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_34))
	{
		OBJECT::DELETE_OBJECT(&(Local_152.f_34));
	}
	if (Local_152.f_798 > 0)
	{
		STREAMING::REMOVE_ANIM_DICT(func_45());
		STREAMING::REMOVE_ANIM_DICT(func_78());
		STREAMING::REMOVE_ANIM_DICT(func_92());
		STREAMING::REMOVE_ANIM_DICT(func_232());
	}
	Global_1966108 = 0;
	func_423();
}

void func_423()//Position - 0x1F835
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_424()//Position - 0x1F841
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_35[iVar0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_152.f_35[iVar0]))
			{
				ENTITY::DETACH_ENTITY(Local_152.f_35[iVar0], true, true);
			}
			OBJECT::DELETE_OBJECT(&(Local_152.f_35[iVar0]));
		}
		iVar0++;
	}
}

void func_425()//Position - 0x1F897
{
	int iVar0;
	int iVar1;
	
	iVar0 = 48;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_152.f_40[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(Local_152.f_40[iVar1]));
		}
		iVar1++;
	}
}

int func_426()//Position - 0x1F8D3
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_433())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_432())
	{
		return 1;
	}
	if (func_431(159))
	{
		if (!func_430())
		{
			return 1;
		}
	}
	if (func_431(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_427() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_427()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_427()//Position - 0x1F957
{
	switch (func_429())
	{
		case 0:
			return func_428();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_428()//Position - 0x1F98A
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_429()//Position - 0x1F9AE
{
	return Global_31959;
}

bool func_430()//Position - 0x1F9B9
{
	return Global_2714762.f_698;
}

int func_431(int iParam0)//Position - 0x1F9C8
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_432()//Position - 0x1F9DF
{
	return Global_2725403;
}

bool func_433()//Position - 0x1F9EB
{
	return Global_2714762.f_693;
}

void func_434()//Position - 0x1F9FA
{
	int iVar0;
	
	if (Global_1966101)
	{
		Global_1966101 = 0;
	}
	if (func_419(PLAYER::PLAYER_ID()) && func_414() != func_413())
	{
		if (BitTest(Global_2689235[func_414() /*453*/].f_318.f_4, 4))
		{
			Local_152.f_5 = 1;
		}
		Global_1966110 = Global_2689235[func_414() /*453*/].f_446;
	}
	while (!(Global_2788829 != -1 || func_419(PLAYER::PLAYER_ID())))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_422();
		}
		if (func_426())
		{
			func_422();
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	if (func_419(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_438();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, iVar0);
	func_436(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_109, 633, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_151, 289, 0);
	if (func_419(PLAYER::PLAYER_ID()))
	{
		while (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(15))
		{
			SYSTEM::WAIT(0);
		}
		Local_152.f_26 = 1;
		NETWORK::_RESERVE_NETWORK_LOCAL_PEDS(1);
		NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(15);
	}
	else
	{
		while (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(45))
		{
			SYSTEM::WAIT(0);
		}
		NETWORK::_RESERVE_NETWORK_LOCAL_PEDS(3);
		NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(45);
	}
	if (!func_435())
	{
		func_422();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else
	{
		func_422();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_419(PLAYER::PLAYER_ID()))
		{
			Local_109.f_15[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
		}
		else
		{
			Local_109.f_15[0] = Global_2788847[0];
			Local_109.f_15[1] = Global_2788847[1];
			Local_109.f_15[2] = Global_2788847[2];
			Local_109.f_15[3] = Global_2788847[3];
		}
	}
	Global_1966108 = 1;
}

int func_435()//Position - 0x1FB92
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
		if (func_433())
		{
			return 0;
		}
		if (func_431(157))
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

int func_436(int iParam0, int iParam1, bool bParam2)//Position - 0x1FBEB
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_423();
			}
			else
			{
				return 0;
			}
		}
		if (!func_437(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_423();
					}
					else
					{
						return 0;
					}
				}
				if (func_433())
				{
					if (!bParam2)
					{
						func_423();
					}
					else
					{
						return 0;
					}
				}
				if (func_431(157))
				{
					if (!bParam2)
					{
						func_423();
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
					func_423();
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
				func_423();
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
			func_423();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_437(bool bParam0)//Position - 0x1FD01
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

int func_438()//Position - 0x1FD12
{
	var uVar0;
	
	uVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	return uVar0;
}

