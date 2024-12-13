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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = -1;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = -2;
	var uLocal_77 = -2;
	var uLocal_78 = -2;
	var uLocal_79 = 5;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 2;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 2;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
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
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	float fLocal_137 = 0f;
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
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	struct<22> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2949> Local_185 = { 0, 0, 0, 0, 225, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 14, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 35, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 14, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 15, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, 0, 0, 0, 0, 0, 0, 0, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, 0, -2147483647, -2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, 3, 20, 0, 0, -2147483647, -2147483647, -2147483647, -2147483647, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 20, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 14, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, -2147483647, -1, 0, 0, 0, -2147483647, 0, -2147483647, 0, 0, -2147483647, 10, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1 } ;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 1073741824;
	var uLocal_3140 = -1073741824;
	var uLocal_3141 = 0;
	struct<17> Local_3142 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0 } ;
	var uLocal_3159 = 255;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 255;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 255;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 255;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 255;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 255;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 255;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 255;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 255;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 255;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 255;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 255;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 255;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 255;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 255;
	var uLocal_3279 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	fLocal_91 = 3f;
	fLocal_92 = 0f;
	fLocal_93 = 2f;
	fLocal_94 = 100f;
	iLocal_135 = -1;
	fLocal_137 = 0.5f;
	ScriptParam_0.f_0 = 243;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_403(ScriptParam_0);
	}
	while (true)
	{
		func_402();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_49();
		}
		else
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xD4
{
	func_3();
	func_2();
}

void func_2()//Position - 0xE4
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()//Position - 0xF0
{
	int iVar0;
	
	if (!BitTest(Local_185.f_2368.f_333, 7))
	{
		Local_163.f_16 = 1;
		Local_163.f_17 = Local_185.f_2712.f_2;
		Local_163.f_18 = Local_185.f_2712.f_6;
		Local_163.f_20 = func_48();
		Local_163.f_21 = func_43();
		func_42();
	}
	func_18();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_16());
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPInvPersHud");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPInvPersMessages");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPInvPersMessages2");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MpInvPersCommon");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_185.f_2895))
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_185.f_2895);
	}
	HUD::CLEAR_ADDITIONAL_TEXT(3, false);
	func_15();
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (Local_185.f_1801[iVar0 /*14*/].f_12 > -1)
		{
			AUDIO::STOP_SOUND(Local_185.f_1801[iVar0 /*14*/].f_12);
			AUDIO::RELEASE_SOUND_ID(Local_185.f_1801[iVar0 /*14*/].f_12);
			Local_185.f_1801[iVar0 /*14*/].f_12 = -1;
		}
		if (Local_185.f_1801[iVar0 /*14*/].f_13 > -1)
		{
			AUDIO::STOP_SOUND(Local_185.f_1801[iVar0 /*14*/].f_13);
			AUDIO::RELEASE_SOUND_ID(Local_185.f_1801[iVar0 /*14*/].f_13);
			Local_185.f_1801[iVar0 /*14*/].f_13 = -1;
		}
		iVar0++;
	}
	func_14(&(Local_185.f_2729));
	func_12(func_13(6));
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_IP");
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_ip_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_ip_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_ip_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_ip_in_menus_scene");
	}
	func_11();
	func_9();
	func_8(12);
	func_7(0);
	func_4();
	func_2();
}

void func_4()//Position - 0x257
{
	if (BitTest(Local_185.f_2904, 7))
	{
		func_5(12, "CLO_VWM_U_23_1" /* GXT: Invade and Persuade Enemies Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (BitTest(Local_185.f_2904, 8))
	{
		func_5(12, "CLO_VWM_U_23_3" /* GXT: Invade and Persuade Oil Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (BitTest(Local_185.f_2904, 9))
	{
		func_5(12, "CLO_VWM_D_1_10" /* GXT: Invade and Persuade Tour Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (BitTest(Local_185.f_2904, 10))
	{
		func_5(12, "CLO_VWM_U_23_6" /* GXT: Invade and Persuade Green Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (BitTest(Local_185.f_2904, 11))
	{
		func_5(12, "CLO_VWM_D_1_9" /* GXT: Invade and Persuade RON Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
}

void func_5(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)//Position - 0x30A
{
	int iVar0;
	
	iVar0 = func_6(&Global_1682341);
	Global_1682341[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1682341[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1682341[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1682341[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1682341[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1682341[iVar0 /*106*/].f_97 = iParam5;
	Global_1682341[iVar0 /*106*/].f_104 = iParam9;
	Global_1682341[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1682341[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_6(var uParam0)//Position - 0x3A6
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

void func_7(int iParam0)//Position - 0x3D5
{
	Global_1928787 = iParam0;
}

void func_8(int iParam0)//Position - 0x3E3
{
	Local_185.f_2870 = iParam0;
}

void func_9()//Position - 0x3F2
{
	Local_185.f_2947 = -1;
	if (Local_185.f_2901 != -2147483647)
	{
		Local_185.f_2901 = -2147483647;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_185.f_2903))
	{
		Local_185.f_2903 = func_10();
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

var func_10()//Position - 0x439
{
	var uVar0;
	
	return uVar0;
}

void func_11()//Position - 0x443
{
	if (Local_185.f_2879 != 0)
	{
		GRAPHICS::STOP_BINK_MOVIE(Local_185.f_2879);
		GRAPHICS::RELEASE_BINK_MOVIE(Local_185.f_2879);
	}
	if (Local_185.f_2880 != 0)
	{
		GRAPHICS::STOP_BINK_MOVIE(Local_185.f_2880);
		GRAPHICS::RELEASE_BINK_MOVIE(Local_185.f_2880);
	}
	if (Local_185.f_2881 != 0)
	{
		GRAPHICS::STOP_BINK_MOVIE(Local_185.f_2881);
		GRAPHICS::RELEASE_BINK_MOVIE(Local_185.f_2881);
	}
}

void func_12(char* sParam0)//Position - 0x49C
{
	AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
}

char* func_13(int iParam0)//Position - 0x4AB
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_IAP_THEME_START";
		
		case 1:
			switch (Local_185.f_2871)
			{
				case 0:
					return "CASINO_IAP_LEVEL1_BRIEF";
				
				case 1:
					return "CASINO_IAP_LEVEL2_BRIEF";
				
				case 2:
					return "CASINO_IAP_LEVEL3_BRIEF";
				
				case 3:
					return "CASINO_IAP_LEVEL4_BRIEF";
				
				case 4:
					return "CASINO_IAP_LEVEL5_BRIEF";
				
				default:
			}
			break;
		
		case 2:
			switch (Local_185.f_2871)
			{
				case 0:
					return "CASINO_IAP_LEVEL1_PLAY";
				
				case 1:
					return "CASINO_IAP_LEVEL2_PLAY";
				
				case 2:
					return "CASINO_IAP_LEVEL3_PLAY";
				
				case 3:
					return "CASINO_IAP_LEVEL4_PLAY";
				
				case 4:
					return "CASINO_IAP_LEVEL5_PLAY";
				
				default:
			}
			break;
		
		case 3:
			return "CASINO_LEVEL_END";
		
		case 4:
			return "CASINO_IAP_LEADERBOARD_START";
		
		case 5:
			return "CASINO_IAP_STAGE_CLEAR";
		
		case 6:
			return "CASINO_STOP_MUSIC";
		
		case 7:
			return "CASINO_STOP_NO_FADE";
	}
	return "INVALID MUSIC EVENT";
}

void func_14(var uParam0)//Position - 0x5B4
{
	if (!AUDIO::HAS_SOUND_FINISHED(*uParam0))
	{
		AUDIO::STOP_SOUND(*uParam0);
	}
	AUDIO::RELEASE_SOUND_ID(*uParam0);
	*uParam0 = -1;
}

void func_15()//Position - 0x5D9
{
	if (Local_185.f_2368.f_338 > -1)
	{
		AUDIO::STOP_SOUND(Local_185.f_2368.f_338);
		AUDIO::RELEASE_SOUND_ID(Local_185.f_2368.f_338);
		Local_185.f_2368.f_338 = -1;
	}
	if (Local_185.f_2368.f_339 > -1)
	{
		AUDIO::STOP_SOUND(Local_185.f_2368.f_339);
		AUDIO::RELEASE_SOUND_ID(Local_185.f_2368.f_339);
		Local_185.f_2368.f_339 = -1;
	}
	if (Local_185.f_2368.f_340 > -1)
	{
		AUDIO::STOP_SOUND(Local_185.f_2368.f_340);
		AUDIO::RELEASE_SOUND_ID(Local_185.f_2368.f_340);
		Local_185.f_2368.f_340 = -1;
	}
	if (Local_185.f_2368.f_341 > -1)
	{
		AUDIO::STOP_SOUND(Local_185.f_2368.f_341);
		AUDIO::RELEASE_SOUND_ID(Local_185.f_2368.f_341);
		Local_185.f_2368.f_341 = -1;
	}
	if (Local_185.f_2368.f_342 > -1)
	{
		AUDIO::STOP_SOUND(Local_185.f_2368.f_342);
		AUDIO::RELEASE_SOUND_ID(Local_185.f_2368.f_342);
		Local_185.f_2368.f_342 = -1;
	}
	if (Local_185.f_2368.f_343 > -1)
	{
		AUDIO::STOP_SOUND(Local_185.f_2368.f_343);
		AUDIO::RELEASE_SOUND_ID(Local_185.f_2368.f_343);
		Local_185.f_2368.f_343 = -1;
	}
}

char* func_16()//Position - 0x6EF
{
	if (func_17())
	{
		return "MPInvPersPlayerGold";
	}
	return "MPInvPersPlayer";
}

bool func_17()//Position - 0x709
{
	return BitTest(Local_185.f_2904, 0);
}

void func_18()//Position - 0x718
{
	Global_1668143 = 0;
	func_40();
	Global_4718592.f_180957 = 0;
	func_39();
	MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885), 16);
	func_38(0, 1, 1, 0);
	func_37();
	if (func_35() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_20(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	func_19(0, 0, -1);
	func_19(1, 0, -1);
	func_19(2, 0, -1);
	func_19(3, 0, -1);
	func_19(4, 0, -1);
	func_19(6, 0, -1);
	func_19(7, 0, -1);
	func_19(8, 0, -1);
	func_19(9, 0, -1);
	func_19(10, 0, -1);
	func_19(11, 0, -1);
	func_19(12, 0, -1);
	func_19(13, 0, -1);
	func_19(14, 0, -1);
	func_19(15, 0, -1);
	func_19(16, 0, -1);
}

void func_19(int iParam0, bool bParam1, int iParam2)//Position - 0x802
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1673654.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1673654.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1673654.f_1046), iParam0);
			}
			break;
	}
}

void func_20(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x851
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
	if (func_34())
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
		if (!func_35())
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
				else if (bVar14 || ((!func_30(PLAYER::PLAYER_ID(), 0) && !func_29()) && !func_28(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657991[iParam0 /*467*/].f_257 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_25(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_24(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_23();
					func_22();
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
				Global_2657991[iParam0 /*467*/].f_258 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697787)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697787 = 0;
				}
				if (Global_2635516.f_2982)
				{
					Global_2635516.f_2982 = 0;
				}
			}
			else
			{
				if (!func_24(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (func_21(Global_4718592.f_187633))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575056)
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

bool func_21(int iParam0)//Position - 0xD05
{
	return iParam0 == 17;
}

void func_22()//Position - 0xD12
{
	struct<3> Var0;
	
	Global_2672939.f_1100 = 0;
	Global_2672939.f_1101 = 0;
	Global_2672939.f_1102 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672939.f_1107 = -1;
	Global_2672939.f_1108 = 0;
	Global_2635516.f_2993 = { Var0 };
}

void func_23()//Position - 0xD5F
{
	Global_2635516.f_703 = 0;
	Global_2635516.f_3036 = 0;
	Global_2635516.f_516 = 0;
	Global_2635516.f_607 = 0;
	Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_220 = 0;
	Global_2635516.f_2991 = 0;
}

int func_24(int iParam0)//Position - 0xD9D
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(bool bParam0, int iParam1, int iParam2)//Position - 0xDCE
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
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
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
				func_27();
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
		if (func_30(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_26(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_26(int iParam0, bool bParam1)//Position - 0xE9E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_27()//Position - 0xEBA
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

int func_28(int iParam0)//Position - 0xF12
{
	if (func_30(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657991[iParam0 /*467*/].f_202, 2))
	{
		return 1;
	}
	return 0;
}

bool func_29()//Position - 0xF51
{
	return BitTest(Global_2621446, 3);
}

bool func_30(int iParam0, int iParam1)//Position - 0xF5F
{
	bool bVar0;
	
	if (!func_33(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_31(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845221[iParam0 /*889*/].f_206 == 8;
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

int func_31(int iParam0, bool bParam1)//Position - 0xFB8
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_32();
	}
	if (Global_1575064[iVar1] == 1)
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

int func_32()//Position - 0xFF9
{
	return Global_1574926;
}

int func_33(var uParam0)//Position - 0x1005
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

int func_34()//Position - 0x1027
{
	if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885, 2) && !Global_2685658.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x1058
{
	if (func_36() == 0)
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x106D
{
	return Global_1574633.f_18;
}

void func_37()//Position - 0x107B
{
	if (Global_2672939.f_1023.f_10)
	{
		Global_2672939.f_1023.f_10 = 0;
	}
}

int func_38(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1099
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && iParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_39()//Position - 0x10CC
{
	if (Global_1929312)
	{
	}
	Global_1929312 = 0;
}

void func_40()//Position - 0x10E0
{
	if (!Global_1574755)
	{
		return;
	}
	func_41();
}

void func_41()//Position - 0x10F7
{
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
}

void func_42()//Position - 0x1117
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_163))
	{
		return;
	}
	if (Local_163.f_19 == 0)
	{
		return;
	}
	Local_163.f_19 = (NETWORK::GET_NETWORK_TIME_ACCURATE() - Local_163.f_19);
	STATS::PLAYSTATS_ARCADE_GAME(MISC::GET_HASH_KEY(&Local_163), Local_163.f_16, Local_163.f_17, Local_163.f_18, Local_163.f_19, Local_163.f_20, Local_163.f_21);
}

int func_43()//Position - 0x1170
{
	if (PLAYER::PLAYER_ID() != func_47())
	{
		if (func_46() != -1)
		{
			switch (func_44())
			{
				case 17:
					return 2003554330;
					break;
				
				case 15:
					return 729976867;
					break;
				
				default:
					return 0;
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_44()//Position - 0x11C5
{
	int iVar0;
	
	iVar0 = func_46();
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_45(iVar0);
}

int func_45(int iParam0)//Position - 0x11E3
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
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
		
		case 172:
			return 30;
			break;
		
		case 173:
			return 31;
			break;
	}
	return -1;
}

int func_46()//Position - 0x16FF
{
	return Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_8;
}

int func_47()//Position - 0x1717
{
	return -1;
}

int func_48()//Position - 0x1720
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + Local_185.f_2712);
	iVar0 = (iVar0 + Local_185.f_2712.f_3);
	iVar0 = (iVar0 + Local_185.f_2712.f_7);
	iVar0 = (iVar0 + Local_185.f_2712.f_10);
	iVar0 = (iVar0 + Local_185.f_2712.f_12);
	iVar0 = (iVar0 + Local_185.f_2712.f_11);
	return iVar0;
}

void func_49()//Position - 0x1773
{
	func_364();
	func_52();
	func_50();
}

void func_50()//Position - 0x1787
{
	if (!func_51())
	{
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
	}
	Local_185.f_2368.f_324 = Local_185.f_2368.f_325;
}

bool func_51()//Position - 0x17AB
{
	return BitTest(Local_185.f_2368.f_333, 2);
}

void func_52()//Position - 0x17BD
{
	switch (Local_185.f_2870)
	{
		case 0:
			func_345();
			break;
		
		case 1:
			func_340();
			break;
		
		case 2:
			func_338();
			break;
		
		case 3:
			func_336();
			break;
		
		case 4:
			func_328();
			break;
		
		case 5:
			func_321();
			break;
		
		case 6:
			func_318();
			break;
		
		case 7:
			func_278();
			break;
		
		case 8:
			func_276();
			break;
		
		case 9:
			func_103();
			break;
		
		case 10:
			func_53();
			break;
		
		case 11:
			func_3();
			break;
		
		case 12:
			break;
	}
}

void func_53()//Position - 0x1874
{
	func_85();
	func_70();
	func_65();
	if (!func_64())
	{
		return;
	}
	if (func_63() < 10)
	{
		Local_185.f_2912[func_63() /*3*/].f_2 = 0;
		Local_185.f_2912[func_63() /*3*/] = Local_185.f_2944;
	}
	func_9();
	func_62();
	func_61();
	func_55();
	func_54("Frontend_Retry");
	func_8(4);
}

void func_54(char* sParam0)//Position - 0x18D7
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, sParam0, "dlc_vw_am_ip_frontend_sounds", false);
}

void func_55()//Position - 0x18EB
{
	Local_185.f_2871 = 0;
	func_60();
	Local_185.f_2943 = 0;
	Local_185.f_2944 = 0;
	Local_185.f_2945 = -1;
	if (func_59(&(Local_185.f_2898), 33))
	{
		func_56(&(Local_185.f_2898), 33);
	}
}

void func_56(var uParam0, int iParam1)//Position - 0x1928
{
	MISC::CLEAR_BIT(uParam0[func_58(iParam1)], func_57(iParam1));
}

int func_57(int iParam0)//Position - 0x1944
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_58(iParam0) * 31);
}

int func_58(int iParam0)//Position - 0x1975
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

bool func_59(var uParam0, int iParam1)//Position - 0x199B
{
	return BitTest((*uParam0)[func_58(iParam1)], func_57(iParam1));
}

void func_60()//Position - 0x19B4
{
	Local_185.f_2712 = 0;
	Local_185.f_2712.f_1 = 0;
	Local_185.f_2712.f_2 = 0;
	Local_185.f_2712.f_3 = 0;
	Local_185.f_2712.f_4 = 0;
	Local_185.f_2712.f_6 = 0;
	Local_185.f_2712.f_5 = 0;
	Local_185.f_2712.f_7 = 0;
	Local_185.f_2712.f_8 = 0;
	Local_185.f_2712.f_9 = 0;
	Local_185.f_2712.f_10 = 0;
	Local_185.f_2712.f_11 = 0;
	Local_185.f_2712.f_12 = 0;
}

void func_61()//Position - 0x1A22
{
	Local_185.f_2880 = GRAPHICS::SET_BINK_MOVIE("I&P_intro_16x9");
	GRAPHICS::PLAY_BINK_MOVIE(Local_185.f_2880);
	GRAPHICS::SET_BINK_SHOULD_SKIP(Local_185.f_2880, true);
}

void func_62()//Position - 0x1A4A
{
	GRAPHICS::STOP_BINK_MOVIE(Local_185.f_2881);
	GRAPHICS::RELEASE_BINK_MOVIE(Local_185.f_2881);
}

int func_63()//Position - 0x1A64
{
	int iVar0;
	
	if (Local_185.f_2945 != -1)
	{
		return Local_185.f_2945;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_185.f_2912[iVar0 /*3*/].f_2)
		{
			Local_185.f_2945 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

int func_64()//Position - 0x1AAC
{
	int iVar0;
	
	iVar0 = 199;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 201;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		return 1;
	}
	return 0;
}

void func_65()//Position - 0x1AD3
{
	struct<2> Var0;
	
	MISC::SET_BIT(&(Local_185.f_2368.f_333), 2);
	if (func_63() == 99 || Local_185.f_2943 > 2)
	{
		StringCopy(&Var0, "IAP_H_LBD0", 16);
		if (func_69())
		{
			StringConCat(&Var0, "_PS4", 16);
		}
	}
	else if (Local_185.f_2943 == 2)
	{
		StringCopy(&Var0, "IAP_H_LBD1", 16);
	}
	else
	{
		StringCopy(&Var0, "IAP_H_LBD2", 16);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		StringConCat(&Var0, "_PC", 16);
	}
	if (func_68(&Var0))
	{
		return;
	}
	func_9();
	func_66(&Var0);
}

void func_66(char* sParam0)//Position - 0x1B5B
{
	Local_185.f_2947 = MISC::GET_HASH_KEY(sParam0);
	func_67(sParam0);
}

void func_67(char* sParam0)//Position - 0x1B74
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_68(char* sParam0)//Position - 0x1B8A
{
	if (Local_185.f_2947 == MISC::GET_HASH_KEY(sParam0))
	{
		return 1;
	}
	return 0;
}

bool func_69()//Position - 0x1BA5
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_70()//Position - 0x1BBB
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	char cVar9[0];
	int iVar10;
	
	if (func_63() >= 10)
	{
		return;
	}
	if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(Local_185.f_2946))
	{
		if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(Local_185.f_2946))
		{
			return;
		}
		if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(Local_185.f_2946))
		{
			Local_185.f_2912[func_63() /*3*/] = Local_185.f_2944;
			func_77(func_79(PLAYER::PLAYER_ID()), 1, func_63(), Local_185.f_2912[func_63() /*3*/], Local_185.f_2912[func_63() /*3*/].f_1, 0);
			Local_185.f_2946 = 0;
		}
		else
		{
			func_54("Frontend_Change_Letter");
			Local_185.f_2943 = 0;
			Local_185.f_2944 = 0;
			Local_185.f_2946 = 0;
		}
		return;
	}
	if (Local_185.f_2943 >= 3)
	{
		return;
	}
	iVar5 = 227;
	iVar6 = 226;
	iVar7 = 191;
	iVar8 = 194;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar7 = 237;
		iVar8 = 238;
		iVar5 = 188;
		iVar6 = 187;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar7))
	{
		Local_185.f_2943++;
		if (Local_185.f_2943 >= 3)
		{
			Local_185.f_2943 = 3;
			func_75(Local_185.f_2944, &iVar0);
			StringCopy(&cVar9, func_74(iVar0[0]), 4);
			StringConCat(&cVar9, func_74(iVar0[1]), 4);
			StringConCat(&cVar9, func_74(iVar0[2]), 4);
			if (SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&cVar9, &(Local_185.f_2946)))
			{
				func_54("Frontend_Entered_Score");
			}
		}
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar8))
	{
		if (Local_185.f_2943 > 0)
		{
			Local_185.f_2943 = (Local_185.f_2943 - 1);
		}
		return;
	}
	iVar10 = 0;
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar5))
	{
		iVar10 = 1;
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar6))
	{
		iVar10 = -1;
	}
	if (iVar10 == 0)
	{
		return;
	}
	func_54("Frontend_Change_Letter");
	func_75(Local_185.f_2944, &iVar0);
	iVar0[Local_185.f_2943] = (iVar0[Local_185.f_2943] + iVar10);
	if (iVar0[Local_185.f_2943] >= 36)
	{
		iVar0[Local_185.f_2943] = 0;
	}
	else if (iVar0[Local_185.f_2943] < 0)
	{
		iVar0[Local_185.f_2943] = 35;
	}
	Local_185.f_2944 = func_71(&iVar0);
}

var func_71(int iParam0)//Position - 0x1DB0
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_72(&uVar1, iVar0, 6, (*iParam0)[iVar0]);
		iVar0++;
	}
	return uVar1;
}

void func_72(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1DDB
{
	var uVar0;
	
	uVar0 = func_73(iParam2, (iParam1 * iParam2));
	*uParam0 = (*uParam0 - (*uParam0 && uVar0));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam3, (iParam1 * iParam2)));
}

var func_73(int iParam0, int iParam1)//Position - 0x1E0F
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= (iParam0 - 1))
	{
		MISC::SET_BIT(&uVar0, (iParam1 + iVar1));
		iVar1++;
	}
	return uVar0;
}

char* func_74(int iParam0)//Position - 0x1E39
{
	switch (iParam0)
	{
		case 0:
			return "A";
		
		case 1:
			return "B";
		
		case 2:
			return "C";
		
		case 3:
			return "D";
		
		case 4:
			return "E";
		
		case 5:
			return "F";
		
		case 6:
			return "G";
		
		case 7:
			return "H";
		
		case 8:
			return "I";
		
		case 9:
			return "J";
		
		case 10:
			return "K";
		
		case 11:
			return "L";
		
		case 12:
			return "M";
		
		case 13:
			return "N";
		
		case 14:
			return "O";
		
		case 15:
			return "P";
		
		case 16:
			return "Q";
		
		case 17:
			return "R";
		
		case 18:
			return "S";
		
		case 19:
			return "T";
		
		case 20:
			return "U";
		
		case 21:
			return "V";
		
		case 22:
			return "W";
		
		case 23:
			return "X";
		
		case 24:
			return "Y";
		
		case 25:
			return "Z";
		
		case 26:
			return "0";
		
		case 27:
			return "1";
		
		case 28:
			return "2";
		
		case 29:
			return "3";
		
		case 30:
			return "4";
		
		case 31:
			return "5";
		
		case 32:
			return "6";
		
		case 33:
			return "7";
		
		case 34:
			return "8";
		
		case 35:
			return "9";
		
		default:
	}
	return "";
}

void func_75(int iParam0, var uParam1)//Position - 0x2020
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*uParam1)[iVar0] = func_76(iParam0, iVar0, 6);
		iVar0++;
	}
}

var func_76(int iParam0, int iParam1, int iParam2)//Position - 0x2049
{
	var uVar0;
	
	uVar0 = func_73(iParam2, 0);
	return (SYSTEM::SHIFT_RIGHT(iParam0, (iParam1 * iParam2)) && uVar0);
}

void func_77(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)//Position - 0x2068
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_0 = 1953474326;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = uParam4;
	Var0.f_7 = iParam5;
	iVar8 = func_78(iParam0);
	if (!iVar8 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 8, iVar8, Var0.f_0);
	}
}

var func_78(int iParam0)//Position - 0x20BD
{
	var uVar0;
	
	if (func_33(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_79(int iParam0)//Position - 0x20D8
{
	int iVar0;
	
	if (iParam0 == func_47())
	{
		return iParam0;
	}
	if (func_83(iParam0) != -1)
	{
		iVar0 = func_45(func_83(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_81(iParam0, 0))
			{
				return func_80(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_47();
		}
		return Global_2657991[iParam0 /*467*/].f_324.f_11;
	}
	return func_47();
}

int func_80(int iParam0)//Position - 0x2167
{
	if (func_33(iParam0))
	{
		return Global_1887549[iParam0 /*611*/].f_10;
	}
	return func_47();
}

int func_81(int iParam0, bool bParam1)//Position - 0x218A
{
	if (!func_33(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_82(iParam0))
		{
			return 0;
		}
	}
	return func_33(Global_1887549[iParam0 /*611*/].f_10);
}

int func_82(int iParam0)//Position - 0x21C2
{
	if (func_33(iParam0))
	{
		if (func_33(Global_1887549[iParam0 /*611*/].f_10))
		{
			return Global_1887549[iParam0 /*611*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_83(int iParam0)//Position - 0x21F7
{
	if (iParam0 != func_47())
	{
		if (func_84(iParam0, 1, 1))
		{
			return Global_2657991[iParam0 /*467*/].f_324.f_8;
		}
		else if (((Global_1575084 || Global_2635516.f_2981) && iParam0 == PLAYER::PLAYER_ID()) && func_84(iParam0, 1, 0))
		{
			return Global_2657991[iParam0 /*467*/].f_324.f_8;
		}
	}
	return -1;
}

int func_84(int iParam0, bool bParam1, bool bParam2)//Position - 0x2266
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
				if (iVar0 == Global_2672939.f_3)
				{
					return Global_2672939.f_2;
				}
				else if (Global_2657991[iVar0 /*467*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_85()//Position - 0x22C6
{
	var uVar0[4];
	float fVar5;
	int iVar6;
	int iVar7;
	
	GRAPHICS::DRAW_BINK_MOVIE(Local_185.f_2881, 0.5f, 0.5f, (1f * fLocal_160), 1f, 0f, 255, 255, 255, 255);
	fVar5 = 0.22f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		if (Local_185.f_2912[iVar6 /*3*/].f_2 && (Local_185.f_2943 < 3 || SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(Local_185.f_2946)))
		{
			func_75(Local_185.f_2944, &uVar0);
		}
		else
		{
			func_75(Local_185.f_2912[iVar6 /*3*/], &uVar0);
		}
		iVar7 = 255;
		if (Local_185.f_2912[iVar6 /*3*/].f_2)
		{
			iVar7 = SYSTEM::ROUND(MISC::ABSF((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0.5f)) * 80f))) + 175;
		}
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_102(0f), func_102((0.37f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_101(iVar6));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_102(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_102(0f), func_102(0.37f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_101(iVar6));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_102(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		if (Local_185.f_2912[iVar6 /*3*/].f_2 && Local_185.f_2943 == 0)
		{
			HUD::SET_TEXT_COLOUR(Local_185.f_1765.f_24, Local_185.f_1765.f_24.f_1, Local_185.f_1765.f_24.f_2, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		}
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_102(0f), func_102((0.41354167f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_74(uVar0[0]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_102(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		if (Local_185.f_2912[iVar6 /*3*/].f_2 && Local_185.f_2943 == 0)
		{
			HUD::SET_TEXT_COLOUR(Local_185.f_1765.f_28, Local_185.f_1765.f_28.f_1, Local_185.f_1765.f_28.f_2, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(255, 255, 255, iVar7);
		}
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_102(0f), func_102(0.41354167f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_74(uVar0[0]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_102(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		if (Local_185.f_2912[iVar6 /*3*/].f_2 && Local_185.f_2943 == 1)
		{
			HUD::SET_TEXT_COLOUR(Local_185.f_1765.f_24, Local_185.f_1765.f_24.f_1, Local_185.f_1765.f_24.f_2, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		}
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_102(0f), func_102((0.44114584f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_74(uVar0[1]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_102(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		if (Local_185.f_2912[iVar6 /*3*/].f_2 && Local_185.f_2943 == 1)
		{
			HUD::SET_TEXT_COLOUR(Local_185.f_1765.f_28, Local_185.f_1765.f_28.f_1, Local_185.f_1765.f_28.f_2, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(255, 255, 255, iVar7);
		}
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_102(0f), func_102(0.44114584f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_74(uVar0[1]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_102(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		if (Local_185.f_2912[iVar6 /*3*/].f_2 && Local_185.f_2943 == 2)
		{
			HUD::SET_TEXT_COLOUR(Local_185.f_1765.f_24, Local_185.f_1765.f_24.f_1, Local_185.f_1765.f_24.f_2, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		}
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_102(0f), func_102((0.46875f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_74(uVar0[2]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_102(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		if (Local_185.f_2912[iVar6 /*3*/].f_2 && Local_185.f_2943 == 2)
		{
			HUD::SET_TEXT_COLOUR(Local_185.f_1765.f_28, Local_185.f_1765.f_28.f_1, Local_185.f_1765.f_28.f_2, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(255, 255, 255, iVar7);
		}
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_102(0f), func_102(0.46875f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_74(uVar0[2]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_102(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_102(0f), func_102((0.695f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("IAP_SCR");
		HUD::ADD_TEXT_COMPONENT_INTEGER(Local_185.f_2912[iVar6 /*3*/].f_1);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_102(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_102(0f), func_102(0.695f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("IAP_SCR");
		HUD::ADD_TEXT_COMPONENT_INTEGER(Local_185.f_2912[iVar6 /*3*/].f_1);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_102(0.5f), fVar5, 0);
		fVar5 = (fVar5 + 0.06f);
		iVar6++;
	}
	func_88();
	func_86();
}

void func_86()//Position - 0x2854
{
	func_87("MPInvPersMessages", "facade", 0.5f, 0.5f, 1f, 1f, 0f, Local_185.f_1765);
}

void func_87(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)//Position - 0x287B
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((fParam3 * IntToFloat(iLocal_162)));
	fParam3 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_162)));
	iVar0 = SYSTEM::ROUND(((fParam5 * IntToFloat(iLocal_162)) / 4f)) * 4;
	fParam5 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_162)));
	GRAPHICS::DRAW_SPRITE_ARX(sParam0, sParam1, func_102(fParam2), fParam3, (fParam4 * fLocal_160), fParam5, fParam6, Param7.f_0, Param7.f_1, Param7.f_2, Param7.f_3, 0, 1);
}

void func_88()//Position - 0x28FC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_89(iVar0);
		iVar0++;
	}
}

void func_89(int iParam0)//Position - 0x291D
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<4> Var6;
	float fVar10;
	
	if (!Local_3142[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { func_100() };
	Var6.f_3 = 255;
	if (Local_3142[iParam0 /*17*/].f_3)
	{
		Var0.f_0 = -Var0.f_0;
	}
	Var2 = { func_99() };
	if (!Local_3142[iParam0 /*17*/].f_2)
	{
		if (Local_3142[iParam0 /*17*/].f_4 > 0)
		{
			Var2.f_1 = (Var2.f_1 - ((Var0.f_1 * (IntToFloat(Local_3142[iParam0 /*17*/].f_4) % (IntToFloat(Local_3142[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_3142[iParam0 /*17*/].f_6) * 1f)));
			Var4 = { Var2 };
			Var4.f_1 = (Var4.f_1 + Var0.f_1);
		}
		else if (Local_3142[iParam0 /*17*/].f_7 > 0)
		{
			Local_3142[iParam0 /*17*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_3142[iParam0 /*17*/].f_7);
			Local_3142[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_3142[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_3142[iParam0 /*17*/].f_4 = Local_3142[iParam0 /*17*/].f_6;
		Local_3142[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_3142[iParam0 /*17*/].f_1)
	{
		fVar10 = (SYSTEM::TO_FLOAT(Local_3142[iParam0 /*17*/].f_5) / SYSTEM::TO_FLOAT(Local_3142[iParam0 /*17*/].f_8));
		Var6.f_0 = func_98(Local_3142[iParam0 /*17*/].f_9, Local_3142[iParam0 /*17*/].f_13, fVar10);
		Var6.f_1 = func_98(Local_3142[iParam0 /*17*/].f_9.f_1, Local_3142[iParam0 /*17*/].f_13.f_1, fVar10);
		Var6.f_2 = func_98(Local_3142[iParam0 /*17*/].f_9.f_2, Local_3142[iParam0 /*17*/].f_13.f_2, fVar10);
		Var6.f_3 = func_98(Local_3142[iParam0 /*17*/].f_9.f_3, Local_3142[iParam0 /*17*/].f_13.f_3, fVar10);
	}
	else
	{
		Var6 = { Local_3142[iParam0 /*17*/].f_9 };
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_97(iParam0)))
	{
		func_94(Var2, Var0, Var6);
	}
	else
	{
		func_90(func_93(iParam0), func_97(iParam0), Var2, Var0, 0f, Var6);
	}
	if (!Local_3142[iParam0 /*17*/].f_2 && Local_3142[iParam0 /*17*/].f_4 > 0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_97(0)))
		{
			func_94(Var4, Var0, Var6);
		}
		else
		{
			func_90(func_93(iParam0), func_97(iParam0), Var4, Var0, 0f, Var6);
		}
	}
	Local_3142[iParam0 /*17*/].f_5 = (Local_3142[iParam0 /*17*/].f_5 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_3142[iParam0 /*17*/].f_5 < 0)
	{
		Local_3142[iParam0 /*17*/].f_5 = (Local_3142[iParam0 /*17*/].f_5 + Local_3142[iParam0 /*17*/].f_8);
	}
	Local_3142[iParam0 /*17*/].f_4 = (Local_3142[iParam0 /*17*/].f_4 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_3142[iParam0 /*17*/].f_4 < 0)
	{
		Local_3142[iParam0 /*17*/].f_4 = 0;
	}
}

void func_90(char* sParam0, char* sParam1, struct<2> Param2, struct<2> Param4, float fParam6, struct<4> Param7)//Position - 0x2BEC
{
	Param2 = { func_91(Param2) };
	Param4 = { func_91(Param4) };
	func_87(sParam0, sParam1, Param2.f_0, Param2.f_1, Param4.f_0, Param4.f_1, fParam6, Param7);
}

struct<2> func_91(struct<2> Param0)//Position - 0x2C26
{
	return func_92((Param0.f_0 * (1f / 1920f)), (Param0.f_1 * (1f / 1080f)));
}

struct<2> func_92(float fParam0, float fParam1)//Position - 0x2C48
{
	struct<2> Var0;
	
	Var0.f_0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

char* func_93(int iParam0)//Position - 0x2C5E
{
	switch (iParam0)
	{
		case 0:
			return "MPArcadeGamesFX05";
			break;
		
		case 1:
			return "MPArcadeGamesFX05";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "MPArcadeGamesFX03";
			break;
		
		case 4:
			return "MPArcadeGamesFX04";
			break;
		
		case 5:
			return "MPArcadeGamesFX00";
			break;
		
		case 6:
			return "MPArcadeGamesFX02";
			break;
		
		case 7:
			return "MPArcadeGamesFX01";
			break;
	}
	return "";
}

void func_94(struct<2> Param0, struct<2> Param2, struct<4> Param4)//Position - 0x2CF1
{
	Param0 = { func_91(Param0) };
	Param2 = { func_91(Param2) };
	func_95(Param0, Param2, Param4);
}

void func_95(struct<2> Param0, struct<2> Param2, struct<4> Param4)//Position - 0x2D21
{
	Param0 = { func_96(Param0) };
	Param2.f_0 = (Param2.f_0 * fLocal_160);
	GRAPHICS::DRAW_RECT(Param0.f_0, Param0.f_1, Param2.f_0, Param2.f_1, Param4.f_0, Param4.f_1, Param4.f_2, Param4.f_3, false);
}

struct<2> func_96(struct<2> Param0)//Position - 0x2D5B
{
	Param0.f_0 = func_102(Param0.f_0);
	return Param0;
}

char* func_97(int iParam0)//Position - 0x2D6F
{
	switch (iParam0)
	{
		case 0:
			return "TV_LINE_OVERLAY_DEGENATRON";
			break;
		
		case 1:
			return "SCREEN_GRAD_100_50";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "Screen_Overlay_2";
			break;
		
		case 4:
			return "Screen_Overlay_4";
			break;
		
		case 5:
			return "Screen_Overlay_8";
			break;
		
		case 6:
			return "Grid_1";
			break;
		
		case 7:
			return "FlatScreen1";
			break;
	}
	return "";
}

int func_98(int iParam0, int iParam1, float fParam2)//Position - 0x2E02
{
	return SYSTEM::ROUND((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

struct<2> func_99()//Position - 0x2E1D
{
	return func_92((1920f / 2f), (1080f / 2f));
}

struct<2> func_100()//Position - 0x2E37
{
	return func_92(1920f, 1080f);
}

char* func_101(int iParam0)//Position - 0x2E4D
{
	switch (iParam0)
	{
		case 0:
			return "IAP_1ST";
		
		case 1:
			return "IAP_2ND";
		
		case 2:
			return "IAP_3RD";
		
		case 3:
			return "IAP_4TH";
		
		case 4:
			return "IAP_5TH";
		
		case 5:
			return "IAP_6TH";
		
		case 6:
			return "IAP_7TH";
		
		case 7:
			return "IAP_8TH";
		
		case 8:
			return "IAP_9TH";
		
		case 9:
			return "IAP_10TH";
		
		default:
	}
	return "";
}

float func_102(float fParam0)//Position - 0x2EE2
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_159));
	return fParam0;
}

void func_103()//Position - 0x2F1D
{
	func_240();
	func_239();
	func_235();
	func_222();
	func_221();
	func_220();
	func_219();
	func_216();
	func_213();
	func_140();
	if (func_138())
	{
		if (!func_125())
		{
			return;
		}
		if (!func_124(&(Local_185.f_2886)))
		{
			func_123(&(Local_185.f_2886), 0, 0);
		}
		else if (func_121(&(Local_185.f_2886), 7500, 0))
		{
			Local_185.f_2871++;
			if (Local_185.f_2871 == 5)
			{
				func_115();
			}
			else
			{
				func_105();
				func_7(2);
				func_12(func_13(1));
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_ip_in_gameplay_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_ip_in_gameplay_scene");
				}
				AUDIO::START_AUDIO_SCENE("dlc_vw_am_ip_in_menus_scene");
				func_8(5);
			}
			func_104(&(Local_185.f_2886));
		}
		else if (!BitTest(Local_185.f_2368.f_333, 8) && func_121(&(Local_185.f_2886), 5500, 0))
		{
			MISC::SET_BIT(&(Local_185.f_2368.f_333), 8);
			func_12(func_13(3));
		}
	}
}

void func_104(var uParam0)//Position - 0x301A
{
	uParam0->f_1 = 0;
}

void func_105()//Position - 0x3027
{
	int iVar0;
	
	Global_1928787.f_1 = Local_185.f_2871;
	func_111(Local_185.f_2871);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_185.f_2895))
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_185.f_2895);
	}
	Local_185.f_2895 = Local_185.f_723;
	Local_185.f_2712.f_1 = 0;
	Local_185.f_2712.f_8 = 0;
	Local_185.f_2712.f_4 = 0;
	Local_185.f_2214.f_124 = -1f;
	Local_185.f_2214.f_125 = -1;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Local_185.f_2214.f_113[iVar0] = 0f;
		iVar0++;
	}
	Local_185.f_2211 = 0;
	Local_185.f_2210 = 0;
	Local_185.f_2213 = 0;
	Local_185.f_2212 = 0;
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		Local_185.f_1801[iVar0 /*14*/] = -1;
		Local_185.f_1801[iVar0 /*14*/].f_10 = 0;
		if (Local_185.f_1801[iVar0 /*14*/].f_12 > -1)
		{
			AUDIO::STOP_SOUND(Local_185.f_1801[iVar0 /*14*/].f_12);
			AUDIO::RELEASE_SOUND_ID(Local_185.f_1801[iVar0 /*14*/].f_12);
			Local_185.f_1801[iVar0 /*14*/].f_12 = -1;
		}
		if (Local_185.f_1801[iVar0 /*14*/].f_13 > -1)
		{
			AUDIO::STOP_SOUND(Local_185.f_1801[iVar0 /*14*/].f_13);
			AUDIO::RELEASE_SOUND_ID(Local_185.f_1801[iVar0 /*14*/].f_13);
			Local_185.f_1801[iVar0 /*14*/].f_13 = -1;
		}
		iVar0++;
	}
	func_14(&(Local_185.f_2729));
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Local_185.f_2730[iVar0 /*4*/].f_1 = -1;
		iVar0++;
	}
	Local_185.f_2811 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Local_185.f_1998[iVar0 /*14*/].f_11 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Local_185.f_2368.f_3[iVar0 /*14*/].f_11 = -2147483647;
		iVar0++;
	}
	Local_185.f_2872 = 0f;
	Local_185.f_2873 = Local_185.f_2;
	func_109();
	Local_185.f_2368.f_325 = 0;
	Local_185.f_2368.f_324 = 0;
	Local_185.f_2368.f_321.f_1 = (-0.061111f + Local_185.f_3);
	Local_185.f_2368.f_321 = 0f;
	if (Local_185.f_2907)
	{
		Local_185.f_2368.f_330 = 99;
	}
	else
	{
		Local_185.f_2368.f_330 = 3;
	}
	Local_185.f_2368.f_331 = 20;
	Local_185.f_2368.f_332 = 0;
	Local_185.f_2368.f_334 = -2147483647;
	Local_185.f_2368.f_335 = -2147483647;
	Local_185.f_2368.f_333 = 0;
	StringCopy(&(Local_185.f_2368.f_303), "tank_drive", 64);
	func_108(0);
	Local_185.f_2368.f_286 = -2147483647;
	Local_185.f_2368.f_320 = 0;
	func_107(0);
	func_106(0);
	func_15();
	Local_185.f_2878 = 0;
	if (func_124(&(Local_185.f_2884)))
	{
		func_104(&(Local_185.f_2884));
	}
	if (func_124(&(Local_185.f_2886)))
	{
		func_104(&(Local_185.f_2886));
	}
	if (func_124(&(Local_185.f_2888)))
	{
		func_104(&(Local_185.f_2888));
	}
}

void func_106(int iParam0)//Position - 0x32E5
{
	Local_185.f_2368.f_1 = iParam0;
}

void func_107(int iParam0)//Position - 0x32F6
{
	Local_185.f_2368 = iParam0;
}

void func_108(int iParam0)//Position - 0x3305
{
	Local_185.f_2368.f_2 = iParam0;
	if (iParam0 != 0 && BitTest(Local_185.f_2368.f_333, 1))
	{
		MISC::SET_BIT(&(Local_185.f_2368.f_333), 1);
	}
}

void func_109()//Position - 0x3339
{
	int iVar0;
	float fVar1;
	
	Local_185.f_2340 = (0.15625f + (Local_185.f_726 / 2f));
	Local_185.f_2340.f_3 = (0.15625f + (Local_185.f_741 / 2f));
	Local_185.f_2340.f_2 = (0.15625f + (Local_185.f_736 / 2f));
	Local_185.f_2340.f_1 = (0.15625f + (Local_185.f_731 / 2f));
	fVar1 = Local_185.f_746;
	iVar0 = 0;
	while (iVar0 <= (Local_185.f_745 - 1))
	{
		Local_185.f_2340.f_4[iVar0] = ((0.15625f + (fVar1 * IntToFloat(iVar0))) + (fVar1 / 2f));
		Local_185.f_2340.f_12[iVar0] = 0;
		iVar0++;
	}
	if (func_110())
	{
		Local_185.f_2896 = { func_92((0.15625f - (0.25f / 2f)), (1f + (0.325926f / 2f))) };
	}
}

int func_110()//Position - 0x33FE
{
	if (Local_185.f_2871 == 3)
	{
		return 1;
	}
	return 0;
}

void func_111(int iParam0)//Position - 0x3414
{
	switch (iParam0)
	{
		case 0:
			Local_185.f_0 = 100f;
			Local_185.f_1 = 600247221;
			Local_185.f_2 = (1f + 0f);
			Local_185.f_3 = ((0.798148f - 0.06944444f) + 0.023148147f);
			Local_185.f_723 = "MPInvPersStage0";
			Local_185.f_724 = "background";
			Local_185.f_725 = 3;
			Local_185.f_726 = { func_92(0.658333f, 1f) };
			Local_185.f_728 = (0.5f - 0.06944444f);
			Local_185.f_729 = "midground_3";
			Local_185.f_730 = 3;
			Local_185.f_731 = { func_92(0.658333f, 0.214815f) };
			Local_185.f_733 = (0.470378f - 0.06944444f);
			Local_185.f_734 = "midground_2";
			Local_185.f_735 = 3;
			Local_185.f_736 = { func_92(0.658333f, 0.4f) };
			Local_185.f_738 = (0.483333f - 0.06944444f);
			Local_185.f_739 = "midground_1";
			Local_185.f_740 = 3;
			Local_185.f_741 = { func_92(0.658333f, 0.296296f) };
			Local_185.f_743 = (0.785183f - 0.06944444f);
			Local_185.f_744 = "foreground";
			Local_185.f_745 = 6;
			Local_185.f_746 = { func_92(0.191667f, 0.211111f) };
			Local_185.f_748 = ((0.89444f - 0.06944444f) + 0.023148147f);
			func_114(&(Local_185.f_749), 220, 169, 80, 255);
			break;
		
		case 1:
			Local_185.f_0 = 150f;
			Local_185.f_1 = 1179731900;
			Local_185.f_2 = (1f + 0.08f);
			Local_185.f_3 = ((0.794444f - 0.06944444f) + 0.023148147f);
			Local_185.f_723 = "MPInvPersStage2";
			Local_185.f_724 = "background";
			Local_185.f_725 = 3;
			Local_185.f_726 = { func_92(0.658333f, 0.5f) };
			Local_185.f_728 = (0.25f - 0.06944444f);
			Local_185.f_729 = "midground_3";
			Local_185.f_730 = 3;
			Local_185.f_731 = { func_92(0.658333f, 0.437037f) };
			Local_185.f_733 = 0.2185185f;
			Local_185.f_734 = "midground_2";
			Local_185.f_735 = 3;
			Local_185.f_736 = { func_92(0.604167f, 0.466667f) };
			Local_185.f_738 = 0.290741f;
			Local_185.f_739 = "midground_1";
			Local_185.f_740 = 4;
			Local_185.f_741 = { func_92(0.333333f, 0.52963f) };
			Local_185.f_743 = ((0.735185f - 0.06944444f) + 0.023148147f);
			Local_185.f_744 = "foreground";
			Local_185.f_745 = 6;
			Local_185.f_746 = { func_92(0.216667f, 0.214815f) };
			Local_185.f_748 = ((0.892593f - 0.06944444f) + 0.023148147f);
			func_114(&(Local_185.f_749), 192, 135, 135, 255);
			break;
		
		case 2:
			Local_185.f_0 = 250f;
			Local_185.f_1 = -42177296;
			Local_185.f_2 = (1f + 0.2f);
			Local_185.f_3 = ((0.798148f - 0.06944444f) + 0.023148147f);
			Local_185.f_723 = "MPInvPersStage1";
			Local_185.f_724 = "background";
			Local_185.f_725 = 3;
			Local_185.f_726 = { func_92(0.658333f, 1f) };
			Local_185.f_728 = (0.5f - 0.06944444f);
			Local_185.f_729 = "midground_3";
			Local_185.f_730 = 3;
			Local_185.f_731 = { func_92(0.658333f, 0.396296f) };
			Local_185.f_733 = (0.471296f - 0.06944444f);
			Local_185.f_734 = "midground_2";
			Local_185.f_735 = 3;
			Local_185.f_736 = { func_92(0.658333f, 0.518519f) };
			Local_185.f_738 = (0.4101845f - 0.06944444f);
			Local_185.f_739 = "midground_1";
			Local_185.f_740 = 4;
			Local_185.f_741 = { func_92(0.229167f, 0.396296f) };
			Local_185.f_743 = ((0.801852f - 0.06944444f) + 0.023148147f);
			Local_185.f_744 = "foreground";
			Local_185.f_745 = 5;
			Local_185.f_746 = { func_92(0.31041667f, 0.21111111f) };
			Local_185.f_748 = ((0.89444447f - 0.06944444f) + 0.023148147f);
			func_114(&(Local_185.f_749), 207, 160, 154, 255);
			break;
		
		case 3:
			Local_185.f_0 = 350f;
			Local_185.f_1 = 714966858;
			Local_185.f_2 = (1f + 0.4f);
			Local_185.f_3 = ((0.794444f - 0.06944444f) + 0.023148147f);
			Local_185.f_723 = "MPInvPersStage3";
			Local_185.f_724 = "background";
			Local_185.f_725 = 3;
			Local_185.f_726 = { func_92(0.547917f, 0.444444f) };
			Local_185.f_728 = ((0.222222f - 0.06944444f) + 0.018f);
			Local_185.f_729 = "midground_3";
			Local_185.f_730 = 3;
			Local_185.f_731 = { func_92(0.533333f, 0.251852f) };
			Local_185.f_733 = ((0.515741f - 0.06944444f) + 0.018f);
			Local_185.f_734 = "midground_2";
			Local_185.f_735 = 3;
			Local_185.f_736 = { func_92(0.658333f, 0.52963f) };
			Local_185.f_738 = ((0.415741f - 0.06944444f) + 0.052f);
			Local_185.f_739 = "midground_1";
			Local_185.f_740 = 3;
			Local_185.f_741 = { func_92(0.658333f, 0.888889f) };
			Local_185.f_743 = ((0.555556f - 0.06944444f) + 0.043f);
			Local_185.f_744 = "foreground";
			Local_185.f_745 = 6;
			Local_185.f_746 = { func_92(0.172917f, 0.214815f) };
			Local_185.f_748 = ((0.89444f - 0.06944444f) + 0.023148147f);
			func_114(&(Local_185.f_749), 96, 122, 142, 255);
			break;
		
		case 4:
			Local_185.f_0 = -1f;
			Local_185.f_1 = -678704902;
			Local_185.f_2 = (1f + 0.6f);
			Local_185.f_3 = ((0.807037f - 0.06944444f) + 0.023148147f);
			Local_185.f_723 = "MPInvPersStage4";
			Local_185.f_724 = "background";
			Local_185.f_725 = 3;
			Local_185.f_726 = { func_92(0.65833336f, 0.47407407f) };
			Local_185.f_728 = 0.25f;
			Local_185.f_729 = "midground_3";
			Local_185.f_730 = 3;
			Local_185.f_731 = { func_92(0.65833336f, 0.23703703f) };
			Local_185.f_733 = ((0.4712963f - 0.075f) + 0.018f);
			Local_185.f_734 = "midground_2";
			Local_185.f_735 = 3;
			Local_185.f_736 = { func_92(0.65833336f, 0.47407407f) };
			Local_185.f_738 = (0.38981482f + 0.036f);
			Local_185.f_739 = "midground_1";
			Local_185.f_740 = 3;
			Local_185.f_741 = { func_92(0.65833336f, 0.44814816f) };
			Local_185.f_743 = (0.7092593f + 0.052f);
			Local_185.f_744 = "foreground";
			Local_185.f_745 = 7;
			Local_185.f_746 = { func_92(0.16875f, (0.22222222f - 0.011111111f)) };
			Local_185.f_748 = ((0.8333324f - (0.011111111f / 2f)) + 0.023148147f);
			func_114(&(Local_185.f_749), 0, 0, 0, 255);
			break;
	}
	func_113(iParam0);
	func_112(iParam0);
}

void func_112(int iParam0)//Position - 0x3B05
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_185.f_680[0 /*3*/] = 31;
			Local_185.f_680[0 /*3*/].f_1 = 2.15f;
			Local_185.f_680[0 /*3*/].f_2 = 2;
			Local_185.f_680[1 /*3*/] = 31;
			Local_185.f_680[1 /*3*/].f_1 = 2.9f;
			Local_185.f_680[1 /*3*/].f_2 = 2;
			Local_185.f_680[2 /*3*/] = 31;
			Local_185.f_680[2 /*3*/].f_1 = 3.75f;
			Local_185.f_680[2 /*3*/].f_2 = 2;
			Local_185.f_680[3 /*3*/] = 30;
			Local_185.f_680[3 /*3*/].f_1 = 1.75f;
			Local_185.f_680[3 /*3*/].f_2 = 2;
			Local_185.f_680[4 /*3*/] = 30;
			Local_185.f_680[4 /*3*/].f_1 = 2.5f;
			Local_185.f_680[4 /*3*/].f_2 = 2;
			Local_185.f_680[5 /*3*/] = 32;
			Local_185.f_680[5 /*3*/].f_1 = 1.75f;
			Local_185.f_680[5 /*3*/].f_2 = 0;
			Local_185.f_680[6 /*3*/] = 32;
			Local_185.f_680[6 /*3*/].f_1 = 2.5f;
			Local_185.f_680[6 /*3*/].f_2 = 0;
			Local_185.f_680[7 /*3*/] = 32;
			Local_185.f_680[7 /*3*/].f_1 = 3f;
			Local_185.f_680[7 /*3*/].f_2 = 0;
			Local_185.f_680[8 /*3*/] = 32;
			Local_185.f_680[8 /*3*/].f_1 = 3.75f;
			Local_185.f_680[8 /*3*/].f_2 = 0;
			Local_185.f_680[9 /*3*/] = 30;
			Local_185.f_680[9 /*3*/].f_1 = 1.75f;
			Local_185.f_680[9 /*3*/].f_2 = 0;
			Local_185.f_680[10 /*3*/] = 30;
			Local_185.f_680[10 /*3*/].f_1 = 3.5f;
			Local_185.f_680[10 /*3*/].f_2 = 0;
			Local_185.f_680[11 /*3*/] = 29;
			Local_185.f_680[11 /*3*/].f_1 = 2f;
			Local_185.f_680[11 /*3*/].f_2 = 0;
			Local_185.f_680[12 /*3*/] = 29;
			Local_185.f_680[12 /*3*/].f_1 = 3.25f;
			Local_185.f_680[12 /*3*/].f_2 = 0;
			Local_185.f_680[13 /*3*/] = 29;
			Local_185.f_680[13 /*3*/].f_1 = 4.25f;
			Local_185.f_680[13 /*3*/].f_2 = 0;
			break;
	}
}

void func_113(int iParam0)//Position - 0x3D31
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 224)
	{
		Local_185.f_4[iVar0 /*3*/] = -1;
		Local_185.f_4[iVar0 /*3*/].f_1 = 0f;
		Local_185.f_4[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			Local_185.f_4[0 /*3*/] = 0;
			Local_185.f_4[0 /*3*/].f_1 = 3f;
			Local_185.f_4[1 /*3*/] = 5;
			Local_185.f_4[1 /*3*/].f_1 = 7f;
			Local_185.f_4[2 /*3*/] = 6;
			Local_185.f_4[2 /*3*/].f_1 = 12f;
			Local_185.f_4[3 /*3*/] = 0;
			Local_185.f_4[3 /*3*/].f_1 = 15f;
			Local_185.f_4[4 /*3*/] = 7;
			Local_185.f_4[4 /*3*/].f_1 = 18f;
			Local_185.f_4[5 /*3*/] = 5;
			Local_185.f_4[5 /*3*/].f_1 = 23f;
			Local_185.f_4[6 /*3*/] = 0;
			Local_185.f_4[6 /*3*/].f_1 = 25f;
			Local_185.f_4[7 /*3*/] = 22;
			Local_185.f_4[7 /*3*/].f_1 = 28f;
			Local_185.f_4[8 /*3*/] = 0;
			Local_185.f_4[8 /*3*/].f_1 = 30f;
			Local_185.f_4[9 /*3*/] = 5;
			Local_185.f_4[9 /*3*/].f_1 = 32f;
			Local_185.f_4[10 /*3*/] = 29;
			Local_185.f_4[10 /*3*/].f_1 = 35f;
			Local_185.f_4[11 /*3*/] = 4;
			Local_185.f_4[11 /*3*/].f_1 = 40f;
			Local_185.f_4[12 /*3*/] = 5;
			Local_185.f_4[12 /*3*/].f_1 = 42f;
			Local_185.f_4[13 /*3*/] = 5;
			Local_185.f_4[13 /*3*/].f_1 = 44f;
			Local_185.f_4[14 /*3*/] = 13;
			Local_185.f_4[14 /*3*/].f_1 = 46f;
			Local_185.f_4[15 /*3*/] = 4;
			Local_185.f_4[15 /*3*/].f_1 = 48f;
			Local_185.f_4[16 /*3*/] = 29;
			Local_185.f_4[16 /*3*/].f_1 = 50f;
			Local_185.f_4[17 /*3*/] = 0;
			Local_185.f_4[17 /*3*/].f_1 = 51.9f;
			Local_185.f_4[18 /*3*/] = 8;
			Local_185.f_4[18 /*3*/].f_1 = 52f;
			Local_185.f_4[19 /*3*/] = 4;
			Local_185.f_4[19 /*3*/].f_1 = 54f;
			Local_185.f_4[20 /*3*/] = 4;
			Local_185.f_4[20 /*3*/].f_1 = 56f;
			Local_185.f_4[21 /*3*/] = 20;
			Local_185.f_4[21 /*3*/].f_1 = 57f;
			Local_185.f_4[22 /*3*/] = 0;
			Local_185.f_4[22 /*3*/].f_1 = 58f;
			Local_185.f_4[23 /*3*/] = 0;
			Local_185.f_4[23 /*3*/].f_1 = 60f;
			Local_185.f_4[24 /*3*/] = 6;
			Local_185.f_4[24 /*3*/].f_1 = 62f;
			Local_185.f_4[25 /*3*/] = 5;
			Local_185.f_4[25 /*3*/].f_1 = 64f;
			Local_185.f_4[26 /*3*/] = 23;
			Local_185.f_4[26 /*3*/].f_1 = 65f;
			Local_185.f_4[27 /*3*/] = 0;
			Local_185.f_4[27 /*3*/].f_1 = 65.5f;
			Local_185.f_4[28 /*3*/] = 0;
			Local_185.f_4[28 /*3*/].f_1 = 67f;
			Local_185.f_4[29 /*3*/] = 13;
			Local_185.f_4[29 /*3*/].f_1 = 69f;
			Local_185.f_4[30 /*3*/] = 29;
			Local_185.f_4[30 /*3*/].f_1 = 70.5f;
			Local_185.f_4[31 /*3*/] = 4;
			Local_185.f_4[31 /*3*/].f_1 = 71f;
			Local_185.f_4[32 /*3*/] = 26;
			Local_185.f_4[32 /*3*/].f_1 = 72.2f;
			Local_185.f_4[33 /*3*/] = 5;
			Local_185.f_4[33 /*3*/].f_1 = 73f;
			Local_185.f_4[34 /*3*/] = 5;
			Local_185.f_4[34 /*3*/].f_1 = 74f;
			Local_185.f_4[35 /*3*/] = 29;
			Local_185.f_4[35 /*3*/].f_1 = 75f;
			Local_185.f_4[36 /*3*/] = 0;
			Local_185.f_4[36 /*3*/].f_1 = 76f;
			Local_185.f_4[37 /*3*/] = 22;
			Local_185.f_4[37 /*3*/].f_1 = 77f;
			Local_185.f_4[38 /*3*/] = 5;
			Local_185.f_4[38 /*3*/].f_1 = 77.5f;
			Local_185.f_4[39 /*3*/] = 5;
			Local_185.f_4[39 /*3*/].f_1 = 78f;
			Local_185.f_4[40 /*3*/] = 0;
			Local_185.f_4[40 /*3*/].f_1 = 79f;
			Local_185.f_4[41 /*3*/] = 8;
			Local_185.f_4[41 /*3*/].f_1 = 80f;
			Local_185.f_4[42 /*3*/] = 5;
			Local_185.f_4[42 /*3*/].f_1 = 83f;
			Local_185.f_4[43 /*3*/] = 0;
			Local_185.f_4[43 /*3*/].f_1 = 84.2f;
			Local_185.f_4[44 /*3*/] = 8;
			Local_185.f_4[44 /*3*/].f_1 = 84.3f;
			Local_185.f_4[45 /*3*/] = 5;
			Local_185.f_4[45 /*3*/].f_1 = 84.5f;
			Local_185.f_4[46 /*3*/] = 5;
			Local_185.f_4[46 /*3*/].f_1 = 85f;
			Local_185.f_4[47 /*3*/] = 5;
			Local_185.f_4[47 /*3*/].f_1 = 85.5f;
			break;
		
		case 1:
			Local_185.f_4[0 /*3*/] = 5;
			Local_185.f_4[0 /*3*/].f_1 = 3f;
			Local_185.f_4[1 /*3*/] = 5;
			Local_185.f_4[1 /*3*/].f_1 = 5f;
			Local_185.f_4[2 /*3*/] = 2;
			Local_185.f_4[2 /*3*/].f_1 = 7f;
			Local_185.f_4[3 /*3*/] = 9;
			Local_185.f_4[3 /*3*/].f_1 = 9f;
			Local_185.f_4[4 /*3*/] = 9;
			Local_185.f_4[4 /*3*/].f_1 = 12f;
			Local_185.f_4[5 /*3*/] = 5;
			Local_185.f_4[5 /*3*/].f_1 = 13f;
			Local_185.f_4[6 /*3*/] = 5;
			Local_185.f_4[6 /*3*/].f_1 = 18f;
			Local_185.f_4[7 /*3*/] = 9;
			Local_185.f_4[7 /*3*/].f_1 = 17f;
			Local_185.f_4[8 /*3*/] = 5;
			Local_185.f_4[8 /*3*/].f_1 = 22f;
			Local_185.f_4[9 /*3*/] = 29;
			Local_185.f_4[9 /*3*/].f_1 = 22.5f;
			Local_185.f_4[10 /*3*/] = 2;
			Local_185.f_4[10 /*3*/].f_1 = 24f;
			Local_185.f_4[11 /*3*/] = 4;
			Local_185.f_4[11 /*3*/].f_1 = 25.5f;
			Local_185.f_4[12 /*3*/] = 14;
			Local_185.f_4[12 /*3*/].f_1 = 26f;
			Local_185.f_4[13 /*3*/] = 5;
			Local_185.f_4[13 /*3*/].f_1 = 27f;
			Local_185.f_4[14 /*3*/] = 5;
			Local_185.f_4[14 /*3*/].f_1 = 29f;
			Local_185.f_4[15 /*3*/] = 7;
			Local_185.f_4[15 /*3*/].f_1 = 31f;
			Local_185.f_4[16 /*3*/] = 4;
			Local_185.f_4[16 /*3*/].f_1 = 32f;
			Local_185.f_4[17 /*3*/] = 14;
			Local_185.f_4[17 /*3*/].f_1 = 35f;
			Local_185.f_4[18 /*3*/] = 19;
			Local_185.f_4[18 /*3*/].f_1 = 37.5f;
			Local_185.f_4[19 /*3*/] = 9;
			Local_185.f_4[19 /*3*/].f_1 = 40f;
			Local_185.f_4[20 /*3*/] = 4;
			Local_185.f_4[20 /*3*/].f_1 = 43f;
			Local_185.f_4[21 /*3*/] = 24;
			Local_185.f_4[21 /*3*/].f_1 = 44f;
			Local_185.f_4[22 /*3*/] = 9;
			Local_185.f_4[22 /*3*/].f_1 = 46f;
			Local_185.f_4[23 /*3*/] = 31;
			Local_185.f_4[23 /*3*/].f_1 = 50f;
			Local_185.f_4[24 /*3*/] = 4;
			Local_185.f_4[24 /*3*/].f_1 = 50.5f;
			Local_185.f_4[25 /*3*/] = 4;
			Local_185.f_4[25 /*3*/].f_1 = 52f;
			Local_185.f_4[26 /*3*/] = 2;
			Local_185.f_4[26 /*3*/].f_1 = 55f;
			Local_185.f_4[27 /*3*/] = 5;
			Local_185.f_4[27 /*3*/].f_1 = 57f;
			Local_185.f_4[28 /*3*/] = 20;
			Local_185.f_4[28 /*3*/].f_1 = 58f;
			Local_185.f_4[29 /*3*/] = 5;
			Local_185.f_4[29 /*3*/].f_1 = 60f;
			Local_185.f_4[30 /*3*/] = 9;
			Local_185.f_4[30 /*3*/].f_1 = 62f;
			Local_185.f_4[31 /*3*/] = 5;
			Local_185.f_4[31 /*3*/].f_1 = 63f;
			Local_185.f_4[32 /*3*/] = 5;
			Local_185.f_4[32 /*3*/].f_1 = 64f;
			Local_185.f_4[33 /*3*/] = 23;
			Local_185.f_4[33 /*3*/].f_1 = 65.5f;
			Local_185.f_4[34 /*3*/] = 4;
			Local_185.f_4[34 /*3*/].f_1 = 66f;
			Local_185.f_4[35 /*3*/] = 2;
			Local_185.f_4[35 /*3*/].f_1 = 67f;
			Local_185.f_4[36 /*3*/] = 9;
			Local_185.f_4[36 /*3*/].f_1 = 70f;
			Local_185.f_4[37 /*3*/] = 5;
			Local_185.f_4[37 /*3*/].f_1 = 72f;
			Local_185.f_4[38 /*3*/] = 24;
			Local_185.f_4[38 /*3*/].f_1 = 73f;
			Local_185.f_4[39 /*3*/] = 5;
			Local_185.f_4[39 /*3*/].f_1 = 73.5f;
			Local_185.f_4[40 /*3*/] = 31;
			Local_185.f_4[40 /*3*/].f_1 = 75f;
			Local_185.f_4[41 /*3*/] = 20;
			Local_185.f_4[41 /*3*/].f_1 = 76.5f;
			Local_185.f_4[42 /*3*/] = 5;
			Local_185.f_4[42 /*3*/].f_1 = 78f;
			Local_185.f_4[43 /*3*/] = 7;
			Local_185.f_4[43 /*3*/].f_1 = 80f;
			Local_185.f_4[44 /*3*/] = 4;
			Local_185.f_4[44 /*3*/].f_1 = 81f;
			Local_185.f_4[45 /*3*/] = 2;
			Local_185.f_4[45 /*3*/].f_1 = 83f;
			Local_185.f_4[46 /*3*/] = 7;
			Local_185.f_4[46 /*3*/].f_1 = 85f;
			Local_185.f_4[47 /*3*/] = 5;
			Local_185.f_4[47 /*3*/].f_1 = 86f;
			Local_185.f_4[48 /*3*/] = 9;
			Local_185.f_4[48 /*3*/].f_1 = 88f;
			Local_185.f_4[49 /*3*/] = 2;
			Local_185.f_4[49 /*3*/].f_1 = 92f;
			Local_185.f_4[50 /*3*/] = 28;
			Local_185.f_4[50 /*3*/].f_2 = 705;
			Local_185.f_4[50 /*3*/].f_1 = 94f;
			Local_185.f_4[51 /*3*/] = 4;
			Local_185.f_4[51 /*3*/].f_1 = 96f;
			Local_185.f_4[52 /*3*/] = 4;
			Local_185.f_4[52 /*3*/].f_1 = 98f;
			Local_185.f_4[53 /*3*/] = 9;
			Local_185.f_4[53 /*3*/].f_1 = 100f;
			Local_185.f_4[54 /*3*/] = 5;
			Local_185.f_4[54 /*3*/].f_1 = 101f;
			Local_185.f_4[55 /*3*/] = 5;
			Local_185.f_4[55 /*3*/].f_1 = 102f;
			Local_185.f_4[56 /*3*/] = 2;
			Local_185.f_4[56 /*3*/].f_1 = 104f;
			Local_185.f_4[57 /*3*/] = 2;
			Local_185.f_4[57 /*3*/].f_1 = 106f;
			Local_185.f_4[58 /*3*/] = 21;
			Local_185.f_4[58 /*3*/].f_1 = 107f;
			Local_185.f_4[59 /*3*/] = 5;
			Local_185.f_4[59 /*3*/].f_1 = 108f;
			Local_185.f_4[60 /*3*/] = 5;
			Local_185.f_4[60 /*3*/].f_1 = 109f;
			Local_185.f_4[61 /*3*/] = 31;
			Local_185.f_4[61 /*3*/].f_1 = 110f;
			Local_185.f_4[62 /*3*/] = 14;
			Local_185.f_4[62 /*3*/].f_1 = 112f;
			Local_185.f_4[63 /*3*/] = 22;
			Local_185.f_4[63 /*3*/].f_1 = 114.5f;
			Local_185.f_4[64 /*3*/] = 9;
			Local_185.f_4[64 /*3*/].f_1 = 117f;
			Local_185.f_4[65 /*3*/] = 5;
			Local_185.f_4[65 /*3*/].f_1 = 118f;
			Local_185.f_4[66 /*3*/] = 5;
			Local_185.f_4[66 /*3*/].f_1 = 119f;
			Local_185.f_4[67 /*3*/] = 5;
			Local_185.f_4[67 /*3*/].f_1 = 120f;
			Local_185.f_4[68 /*3*/] = 19;
			Local_185.f_4[68 /*3*/].f_1 = 123f;
			Local_185.f_4[69 /*3*/] = 9;
			Local_185.f_4[69 /*3*/].f_1 = 125f;
			Local_185.f_4[70 /*3*/] = 5;
			Local_185.f_4[70 /*3*/].f_1 = 126f;
			Local_185.f_4[71 /*3*/] = 9;
			Local_185.f_4[71 /*3*/].f_1 = 127f;
			Local_185.f_4[72 /*3*/] = 4;
			Local_185.f_4[72 /*3*/].f_1 = 129.5f;
			Local_185.f_4[73 /*3*/] = 2;
			Local_185.f_4[73 /*3*/].f_1 = 131.9f;
			Local_185.f_4[74 /*3*/] = 9;
			Local_185.f_4[74 /*3*/].f_1 = 132f;
			Local_185.f_4[75 /*3*/] = 14;
			Local_185.f_4[75 /*3*/].f_1 = 135.4f;
			Local_185.f_4[76 /*3*/] = 7;
			Local_185.f_4[76 /*3*/].f_1 = 135.5f;
			Local_185.f_4[77 /*3*/] = 4;
			Local_185.f_4[77 /*3*/].f_1 = 136f;
			Local_185.f_4[80 /*3*/] = 22;
			Local_185.f_4[80 /*3*/].f_1 = 137.3f;
			Local_185.f_4[81 /*3*/] = 9;
			Local_185.f_4[81 /*3*/].f_1 = 137.5f;
			break;
		
		case 2:
			Local_185.f_4[0 /*3*/] = 5;
			Local_185.f_4[0 /*3*/].f_1 = 1f;
			Local_185.f_4[1 /*3*/] = 5;
			Local_185.f_4[1 /*3*/].f_1 = 3f;
			Local_185.f_4[2 /*3*/] = 10;
			Local_185.f_4[2 /*3*/].f_1 = 4f;
			Local_185.f_4[3 /*3*/] = 4;
			Local_185.f_4[3 /*3*/].f_1 = 6.5f;
			Local_185.f_4[4 /*3*/] = 18;
			Local_185.f_4[4 /*3*/].f_1 = 8.2f;
			Local_185.f_4[5 /*3*/] = 1;
			Local_185.f_4[5 /*3*/].f_1 = 10f;
			Local_185.f_4[6 /*3*/] = 5;
			Local_185.f_4[6 /*3*/].f_1 = 13f;
			Local_185.f_4[7 /*3*/] = 4;
			Local_185.f_4[7 /*3*/].f_1 = 13f;
			Local_185.f_4[8 /*3*/] = 15;
			Local_185.f_4[8 /*3*/].f_1 = 13.5f;
			Local_185.f_4[9 /*3*/] = 1;
			Local_185.f_4[9 /*3*/].f_1 = 21f;
			Local_185.f_4[10 /*3*/] = 4;
			Local_185.f_4[10 /*3*/].f_1 = 22f;
			Local_185.f_4[11 /*3*/] = 15;
			Local_185.f_4[11 /*3*/].f_1 = 23f;
			Local_185.f_4[12 /*3*/] = 30;
			Local_185.f_4[12 /*3*/].f_1 = 23.5f;
			Local_185.f_4[13 /*3*/] = 4;
			Local_185.f_4[13 /*3*/].f_1 = 27f;
			Local_185.f_4[14 /*3*/] = 1;
			Local_185.f_4[14 /*3*/].f_1 = 30f;
			Local_185.f_4[15 /*3*/] = 23;
			Local_185.f_4[15 /*3*/].f_1 = 31f;
			Local_185.f_4[16 /*3*/] = 10;
			Local_185.f_4[16 /*3*/].f_2 = 1;
			Local_185.f_4[17 /*3*/].f_1 = 35f;
			Local_185.f_4[17 /*3*/] = 5;
			Local_185.f_4[18 /*3*/].f_1 = 35.1f;
			Local_185.f_4[18 /*3*/] = 5;
			Local_185.f_4[18 /*3*/].f_1 = 35.6f;
			Local_185.f_4[19 /*3*/] = 24;
			Local_185.f_4[19 /*3*/].f_1 = 35.7f;
			Local_185.f_4[20 /*3*/] = 5;
			Local_185.f_4[20 /*3*/].f_1 = 37f;
			Local_185.f_4[21 /*3*/] = 7;
			Local_185.f_4[21 /*3*/].f_1 = 39f;
			Local_185.f_4[22 /*3*/] = 15;
			Local_185.f_4[22 /*3*/].f_1 = 40f;
			Local_185.f_4[23 /*3*/] = 5;
			Local_185.f_4[23 /*3*/].f_1 = 40.5f;
			Local_185.f_4[24 /*3*/] = 5;
			Local_185.f_4[24 /*3*/].f_1 = 41f;
			Local_185.f_4[25 /*3*/] = 22;
			Local_185.f_4[25 /*3*/].f_1 = 42.3f;
			Local_185.f_4[26 /*3*/] = 7;
			Local_185.f_4[26 /*3*/].f_1 = 43.5f;
			Local_185.f_4[27 /*3*/] = 6;
			Local_185.f_4[27 /*3*/].f_1 = 46.3f;
			Local_185.f_4[28 /*3*/] = 10;
			Local_185.f_4[28 /*3*/].f_2 = 1;
			Local_185.f_4[28 /*3*/].f_1 = 46.5f;
			Local_185.f_4[29 /*3*/] = 4;
			Local_185.f_4[29 /*3*/].f_1 = 47f;
			Local_185.f_4[30 /*3*/] = 20;
			Local_185.f_4[30 /*3*/].f_1 = 47.5f;
			Local_185.f_4[31 /*3*/] = 4;
			Local_185.f_4[31 /*3*/].f_1 = 49f;
			Local_185.f_4[32 /*3*/] = 10;
			Local_185.f_4[32 /*3*/].f_2 = 1;
			Local_185.f_4[32 /*3*/].f_1 = 50f;
			Local_185.f_4[33 /*3*/] = 5;
			Local_185.f_4[33 /*3*/].f_1 = 53f;
			Local_185.f_4[34 /*3*/] = 1;
			Local_185.f_4[34 /*3*/].f_1 = 54.5f;
			Local_185.f_4[35 /*3*/] = 29;
			Local_185.f_4[35 /*3*/].f_1 = 55.2f;
			Local_185.f_4[36 /*3*/] = 1;
			Local_185.f_4[36 /*3*/].f_1 = 55.9f;
			Local_185.f_4[37 /*3*/] = 10;
			Local_185.f_4[37 /*3*/].f_2 = 1;
			Local_185.f_4[37 /*3*/].f_1 = 56f;
			Local_185.f_4[38 /*3*/] = 7;
			Local_185.f_4[38 /*3*/].f_1 = 56.5f;
			Local_185.f_4[39 /*3*/] = 5;
			Local_185.f_4[39 /*3*/].f_1 = 57.5f;
			Local_185.f_4[40 /*3*/] = 15;
			Local_185.f_4[40 /*3*/].f_1 = 60f;
			Local_185.f_4[41 /*3*/] = 4;
			Local_185.f_4[41 /*3*/].f_1 = 63f;
			Local_185.f_4[42 /*3*/] = 5;
			Local_185.f_4[42 /*3*/].f_1 = 64f;
			Local_185.f_4[43 /*3*/] = 10;
			Local_185.f_4[43 /*3*/].f_2 = 1;
			Local_185.f_4[43 /*3*/].f_1 = 65f;
			Local_185.f_4[44 /*3*/] = 10;
			Local_185.f_4[44 /*3*/].f_2 = 1;
			Local_185.f_4[44 /*3*/].f_1 = 66f;
			Local_185.f_4[45 /*3*/] = 1;
			Local_185.f_4[45 /*3*/].f_1 = 71.5f;
			Local_185.f_4[46 /*3*/] = 23;
			Local_185.f_4[46 /*3*/].f_1 = 72f;
			Local_185.f_4[47 /*3*/] = 10;
			Local_185.f_4[47 /*3*/].f_2 = 1;
			Local_185.f_4[47 /*3*/].f_1 = 72f;
			Local_185.f_4[48 /*3*/] = 5;
			Local_185.f_4[48 /*3*/].f_1 = 74f;
			Local_185.f_4[49 /*3*/] = 32;
			Local_185.f_4[49 /*3*/].f_1 = 76f;
			Local_185.f_4[50 /*3*/] = 10;
			Local_185.f_4[50 /*3*/].f_2 = 1;
			Local_185.f_4[50 /*3*/].f_1 = 77f;
			Local_185.f_4[51 /*3*/] = 4;
			Local_185.f_4[51 /*3*/].f_1 = 78f;
			Local_185.f_4[52 /*3*/] = 10;
			Local_185.f_4[52 /*3*/].f_2 = 1;
			Local_185.f_4[52 /*3*/].f_1 = 79f;
			Local_185.f_4[53 /*3*/] = 4;
			Local_185.f_4[53 /*3*/].f_1 = 79f;
			Local_185.f_4[54 /*3*/] = 5;
			Local_185.f_4[54 /*3*/].f_1 = 80f;
			Local_185.f_4[55 /*3*/] = 10;
			Local_185.f_4[55 /*3*/].f_2 = 1;
			Local_185.f_4[55 /*3*/].f_1 = 81f;
			Local_185.f_4[56 /*3*/] = 5;
			Local_185.f_4[56 /*3*/].f_1 = 82f;
			Local_185.f_4[57 /*3*/] = 6;
			Local_185.f_4[57 /*3*/].f_1 = 83f;
			Local_185.f_4[58 /*3*/] = 15;
			Local_185.f_4[58 /*3*/].f_1 = 83.5f;
			Local_185.f_4[59 /*3*/] = 5;
			Local_185.f_4[59 /*3*/].f_1 = 84f;
			Local_185.f_4[60 /*3*/] = 10;
			Local_185.f_4[60 /*3*/].f_2 = 1;
			Local_185.f_4[60 /*3*/].f_1 = 85f;
			Local_185.f_4[61 /*3*/] = 5;
			Local_185.f_4[61 /*3*/].f_1 = 85.1f;
			Local_185.f_4[62 /*3*/] = 5;
			Local_185.f_4[62 /*3*/].f_1 = 85.8f;
			Local_185.f_4[63 /*3*/] = 10;
			Local_185.f_4[63 /*3*/].f_2 = 1;
			Local_185.f_4[63 /*3*/].f_1 = 90f;
			Local_185.f_4[64 /*3*/] = 20;
			Local_185.f_4[64 /*3*/].f_1 = 94f;
			Local_185.f_4[65 /*3*/] = 15;
			Local_185.f_4[65 /*3*/].f_1 = 95f;
			Local_185.f_4[66 /*3*/] = 4;
			Local_185.f_4[66 /*3*/].f_1 = 96f;
			Local_185.f_4[67 /*3*/] = 4;
			Local_185.f_4[67 /*3*/].f_1 = 98f;
			Local_185.f_4[68 /*3*/] = 15;
			Local_185.f_4[68 /*3*/].f_1 = 99f;
			Local_185.f_4[69 /*3*/] = 31;
			Local_185.f_4[69 /*3*/].f_1 = 99.5f;
			Local_185.f_4[70 /*3*/] = 15;
			Local_185.f_4[70 /*3*/].f_1 = 104f;
			Local_185.f_4[71 /*3*/] = 4;
			Local_185.f_4[71 /*3*/].f_1 = 106f;
			Local_185.f_4[72 /*3*/] = 22;
			Local_185.f_4[72 /*3*/].f_1 = 110f;
			Local_185.f_4[73 /*3*/] = 31;
			Local_185.f_4[73 /*3*/].f_1 = 112.5f;
			Local_185.f_4[74 /*3*/] = 5;
			Local_185.f_4[74 /*3*/].f_2 = 1;
			Local_185.f_4[74 /*3*/].f_1 = 115f;
			Local_185.f_4[75 /*3*/] = 5;
			Local_185.f_4[75 /*3*/].f_2 = 1;
			Local_185.f_4[75 /*3*/].f_1 = 117f;
			Local_185.f_4[76 /*3*/] = 7;
			Local_185.f_4[76 /*3*/].f_1 = 120f;
			Local_185.f_4[77 /*3*/] = 5;
			Local_185.f_4[77 /*3*/].f_1 = 125f;
			Local_185.f_4[78 /*3*/] = 7;
			Local_185.f_4[78 /*3*/].f_1 = 126f;
			Local_185.f_4[79 /*3*/] = 27;
			Local_185.f_4[79 /*3*/].f_1 = 126.5f;
			Local_185.f_4[80 /*3*/] = 5;
			Local_185.f_4[80 /*3*/].f_1 = 126.6f;
			Local_185.f_4[81 /*3*/] = 1;
			Local_185.f_4[81 /*3*/].f_1 = 127.5f;
			Local_185.f_4[82 /*3*/] = 1;
			Local_185.f_4[82 /*3*/].f_1 = 128.5f;
			Local_185.f_4[83 /*3*/] = 15;
			Local_185.f_4[83 /*3*/].f_1 = 129f;
			Local_185.f_4[84 /*3*/] = 4;
			Local_185.f_4[84 /*3*/].f_1 = 129.5f;
			Local_185.f_4[85 /*3*/] = 6;
			Local_185.f_4[85 /*3*/].f_1 = 130f;
			Local_185.f_4[86 /*3*/] = 4;
			Local_185.f_4[86 /*3*/].f_1 = 132f;
			Local_185.f_4[87 /*3*/] = 10;
			Local_185.f_4[87 /*3*/].f_2 = 1;
			Local_185.f_4[87 /*3*/].f_1 = 135f;
			Local_185.f_4[88 /*3*/] = 5;
			Local_185.f_4[88 /*3*/].f_2 = 1;
			Local_185.f_4[88 /*3*/].f_1 = 135.5f;
			Local_185.f_4[89 /*3*/] = 4;
			Local_185.f_4[89 /*3*/].f_1 = 136f;
			Local_185.f_4[90 /*3*/] = 5;
			Local_185.f_4[90 /*3*/].f_2 = 1;
			Local_185.f_4[90 /*3*/].f_1 = 136.5f;
			Local_185.f_4[91 /*3*/] = 5;
			Local_185.f_4[91 /*3*/].f_2 = 1;
			Local_185.f_4[91 /*3*/].f_1 = 137f;
			Local_185.f_4[92 /*3*/] = 5;
			Local_185.f_4[92 /*3*/].f_2 = 1;
			Local_185.f_4[92 /*3*/].f_1 = 137.7f;
			Local_185.f_4[93 /*3*/] = 18;
			Local_185.f_4[93 /*3*/].f_1 = 141f;
			Local_185.f_4[94 /*3*/] = 15;
			Local_185.f_4[94 /*3*/].f_1 = 142f;
			Local_185.f_4[95 /*3*/] = 1;
			Local_185.f_4[95 /*3*/].f_1 = 143f;
			Local_185.f_4[96 /*3*/] = 22;
			Local_185.f_4[96 /*3*/].f_1 = 144f;
			Local_185.f_4[97 /*3*/] = 6;
			Local_185.f_4[97 /*3*/].f_1 = 145f;
			Local_185.f_4[98 /*3*/] = 10;
			Local_185.f_4[98 /*3*/].f_2 = 1;
			Local_185.f_4[98 /*3*/].f_1 = 147f;
			Local_185.f_4[99 /*3*/] = 5;
			Local_185.f_4[99 /*3*/].f_2 = 1;
			Local_185.f_4[99 /*3*/].f_1 = 150f;
			Local_185.f_4[100 /*3*/] = 1;
			Local_185.f_4[100 /*3*/].f_1 = 143f;
			Local_185.f_4[101 /*3*/] = 15;
			Local_185.f_4[101 /*3*/].f_1 = 150f;
			Local_185.f_4[102 /*3*/] = 10;
			Local_185.f_4[102 /*3*/].f_2 = 1;
			Local_185.f_4[102 /*3*/].f_1 = 151f;
			Local_185.f_4[103 /*3*/] = 4;
			Local_185.f_4[103 /*3*/].f_1 = 153f;
			Local_185.f_4[104 /*3*/] = 21;
			Local_185.f_4[104 /*3*/].f_1 = 156f;
			Local_185.f_4[105 /*3*/] = 1;
			Local_185.f_4[105 /*3*/].f_1 = 157f;
			Local_185.f_4[106 /*3*/] = 6;
			Local_185.f_4[106 /*3*/].f_1 = 160f;
			Local_185.f_4[107 /*3*/] = 10;
			Local_185.f_4[107 /*3*/].f_2 = 1;
			Local_185.f_4[107 /*3*/].f_1 = 161f;
			Local_185.f_4[108 /*3*/] = 5;
			Local_185.f_4[108 /*3*/].f_2 = 1;
			Local_185.f_4[108 /*3*/].f_1 = 162f;
			Local_185.f_4[109 /*3*/] = 10;
			Local_185.f_4[109 /*3*/].f_2 = 1;
			Local_185.f_4[109 /*3*/].f_1 = 165f;
			Local_185.f_4[110 /*3*/] = 5;
			Local_185.f_4[110 /*3*/].f_2 = 1;
			Local_185.f_4[110 /*3*/].f_1 = 167f;
			Local_185.f_4[111 /*3*/] = 1;
			Local_185.f_4[111 /*3*/].f_1 = 170f;
			Local_185.f_4[112 /*3*/] = 15;
			Local_185.f_4[112 /*3*/].f_1 = 172f;
			Local_185.f_4[113 /*3*/] = 10;
			Local_185.f_4[113 /*3*/].f_2 = 1;
			Local_185.f_4[113 /*3*/].f_1 = 175f;
			Local_185.f_4[114 /*3*/] = 5;
			Local_185.f_4[114 /*3*/].f_2 = 1;
			Local_185.f_4[114 /*3*/].f_1 = 175.5f;
			Local_185.f_4[115 /*3*/] = 5;
			Local_185.f_4[115 /*3*/].f_2 = 1;
			Local_185.f_4[115 /*3*/].f_1 = 176f;
			Local_185.f_4[116 /*3*/] = 28;
			Local_185.f_4[116 /*3*/].f_2 = 192;
			Local_185.f_4[116 /*3*/].f_1 = 180f;
			Local_185.f_4[117 /*3*/] = 1;
			Local_185.f_4[117 /*3*/].f_1 = 183f;
			Local_185.f_4[118 /*3*/] = 10;
			Local_185.f_4[118 /*3*/].f_2 = 1;
			Local_185.f_4[118 /*3*/].f_1 = 185f;
			Local_185.f_4[119 /*3*/] = 4;
			Local_185.f_4[119 /*3*/].f_1 = 185.5f;
			Local_185.f_4[120 /*3*/] = 5;
			Local_185.f_4[120 /*3*/].f_2 = 1;
			Local_185.f_4[120 /*3*/].f_1 = 186f;
			Local_185.f_4[121 /*3*/] = 5;
			Local_185.f_4[121 /*3*/].f_2 = 1;
			Local_185.f_4[121 /*3*/].f_1 = 186.5f;
			Local_185.f_4[122 /*3*/] = 5;
			Local_185.f_4[122 /*3*/].f_2 = 1;
			Local_185.f_4[122 /*3*/].f_1 = 187f;
			Local_185.f_4[123 /*3*/] = 15;
			Local_185.f_4[123 /*3*/].f_1 = 187.2f;
			Local_185.f_4[124 /*3*/] = 19;
			Local_185.f_4[124 /*3*/].f_1 = 190f;
			Local_185.f_4[125 /*3*/] = 15;
			Local_185.f_4[125 /*3*/].f_1 = 192f;
			Local_185.f_4[126 /*3*/] = 4;
			Local_185.f_4[126 /*3*/].f_1 = 193f;
			Local_185.f_4[127 /*3*/] = 5;
			Local_185.f_4[127 /*3*/].f_2 = 1;
			Local_185.f_4[127 /*3*/].f_1 = 194f;
			Local_185.f_4[128 /*3*/] = 4;
			Local_185.f_4[128 /*3*/].f_1 = 195f;
			Local_185.f_4[129 /*3*/] = 5;
			Local_185.f_4[129 /*3*/].f_2 = 1;
			Local_185.f_4[129 /*3*/].f_1 = 196f;
			Local_185.f_4[130 /*3*/] = 5;
			Local_185.f_4[130 /*3*/].f_2 = 1;
			Local_185.f_4[130 /*3*/].f_1 = 197f;
			Local_185.f_4[131 /*3*/] = 10;
			Local_185.f_4[131 /*3*/].f_2 = 1;
			Local_185.f_4[131 /*3*/].f_1 = 197.2f;
			Local_185.f_4[132 /*3*/] = 20;
			Local_185.f_4[132 /*3*/].f_1 = 200f;
			Local_185.f_4[133 /*3*/] = 4;
			Local_185.f_4[133 /*3*/].f_1 = 202f;
			Local_185.f_4[134 /*3*/] = 31;
			Local_185.f_4[134 /*3*/].f_1 = 204f;
			Local_185.f_4[135 /*3*/] = 15;
			Local_185.f_4[135 /*3*/].f_1 = 206.5f;
			Local_185.f_4[136 /*3*/] = 5;
			Local_185.f_4[136 /*3*/].f_1 = 207f;
			Local_185.f_4[137 /*3*/] = 4;
			Local_185.f_4[137 /*3*/].f_1 = 208f;
			Local_185.f_4[138 /*3*/] = 28;
			Local_185.f_4[138 /*3*/].f_2 = 192;
			Local_185.f_4[138 /*3*/].f_1 = 208.1f;
			Local_185.f_4[139 /*3*/] = 4;
			Local_185.f_4[139 /*3*/].f_1 = 209f;
			Local_185.f_4[140 /*3*/] = 10;
			Local_185.f_4[140 /*3*/].f_2 = 1;
			Local_185.f_4[140 /*3*/].f_1 = 210f;
			Local_185.f_4[141 /*3*/] = 5;
			Local_185.f_4[141 /*3*/].f_1 = 211f;
			Local_185.f_4[142 /*3*/] = 5;
			Local_185.f_4[142 /*3*/].f_1 = 211.5f;
			Local_185.f_4[143 /*3*/] = 5;
			Local_185.f_4[143 /*3*/].f_1 = 212f;
			Local_185.f_4[144 /*3*/] = 5;
			Local_185.f_4[144 /*3*/].f_2 = 1;
			Local_185.f_4[144 /*3*/].f_1 = 213f;
			Local_185.f_4[145 /*3*/] = 22;
			Local_185.f_4[145 /*3*/].f_1 = 213.5f;
			Local_185.f_4[146 /*3*/] = 5;
			Local_185.f_4[146 /*3*/].f_1 = 214f;
			Local_185.f_4[147 /*3*/] = 10;
			Local_185.f_4[147 /*3*/].f_2 = 1;
			Local_185.f_4[147 /*3*/].f_1 = 215f;
			Local_185.f_4[148 /*3*/] = 4;
			Local_185.f_4[148 /*3*/].f_1 = 217f;
			Local_185.f_4[149 /*3*/] = 4;
			Local_185.f_4[149 /*3*/].f_1 = 218f;
			Local_185.f_4[150 /*3*/] = 1;
			Local_185.f_4[150 /*3*/].f_1 = 220f;
			Local_185.f_4[151 /*3*/] = 15;
			Local_185.f_4[151 /*3*/].f_1 = 222f;
			Local_185.f_4[152 /*3*/] = 5;
			Local_185.f_4[152 /*3*/].f_2 = 1;
			Local_185.f_4[152 /*3*/].f_1 = 223f;
			Local_185.f_4[153 /*3*/] = 10;
			Local_185.f_4[153 /*3*/].f_2 = 1;
			Local_185.f_4[153 /*3*/].f_1 = 224f;
			Local_185.f_4[154 /*3*/] = 5;
			Local_185.f_4[154 /*3*/].f_2 = 1;
			Local_185.f_4[154 /*3*/].f_1 = 225f;
			Local_185.f_4[155 /*3*/] = 5;
			Local_185.f_4[155 /*3*/].f_2 = 1;
			Local_185.f_4[155 /*3*/].f_1 = 226f;
			Local_185.f_4[156 /*3*/] = 5;
			Local_185.f_4[156 /*3*/].f_2 = 1;
			Local_185.f_4[156 /*3*/].f_1 = 227f;
			Local_185.f_4[157 /*3*/] = 15;
			Local_185.f_4[157 /*3*/].f_1 = 228f;
			Local_185.f_4[158 /*3*/] = 28;
			Local_185.f_4[158 /*3*/].f_2 = 192;
			Local_185.f_4[158 /*3*/].f_1 = 229f;
			Local_185.f_4[159 /*3*/] = 15;
			Local_185.f_4[159 /*3*/].f_1 = 232f;
			Local_185.f_4[160 /*3*/] = 5;
			Local_185.f_4[160 /*3*/].f_2 = 1;
			Local_185.f_4[160 /*3*/].f_1 = 233f;
			Local_185.f_4[161 /*3*/] = 4;
			Local_185.f_4[161 /*3*/].f_1 = 234f;
			Local_185.f_4[162 /*3*/] = 4;
			Local_185.f_4[162 /*3*/].f_1 = 235f;
			Local_185.f_4[163 /*3*/] = 1;
			Local_185.f_4[163 /*3*/].f_1 = 235.1f;
			Local_185.f_4[164 /*3*/] = 10;
			Local_185.f_4[164 /*3*/].f_2 = 1;
			Local_185.f_4[164 /*3*/].f_1 = 235.2f;
			Local_185.f_4[165 /*3*/] = 4;
			Local_185.f_4[165 /*3*/].f_1 = 236.1f;
			Local_185.f_4[166 /*3*/] = 22;
			Local_185.f_4[166 /*3*/].f_1 = 237.8f;
			Local_185.f_4[167 /*3*/] = 7;
			Local_185.f_4[167 /*3*/].f_1 = 239.3f;
			break;
		
		case 3:
			Local_185.f_4[0 /*3*/] = 5;
			Local_185.f_4[0 /*3*/].f_1 = 1f;
			Local_185.f_4[1 /*3*/] = 11;
			Local_185.f_4[1 /*3*/].f_1 = 6f;
			Local_185.f_4[2 /*3*/] = 4;
			Local_185.f_4[2 /*3*/].f_1 = 7f;
			Local_185.f_4[3 /*3*/] = 7;
			Local_185.f_4[3 /*3*/].f_1 = 9f;
			Local_185.f_4[4 /*3*/] = 5;
			Local_185.f_4[4 /*3*/].f_1 = 10f;
			Local_185.f_4[5 /*3*/] = 11;
			Local_185.f_4[5 /*3*/].f_1 = 12f;
			Local_185.f_4[6 /*3*/] = 5;
			Local_185.f_4[6 /*3*/].f_1 = 13f;
			Local_185.f_4[7 /*3*/] = 7;
			Local_185.f_4[7 /*3*/].f_1 = 14.5f;
			Local_185.f_4[8 /*3*/] = 11;
			Local_185.f_4[8 /*3*/].f_1 = 15f;
			Local_185.f_4[9 /*3*/] = 5;
			Local_185.f_4[9 /*3*/].f_1 = 16f;
			Local_185.f_4[10 /*3*/] = 3;
			Local_185.f_4[10 /*3*/].f_1 = 19f;
			Local_185.f_4[11 /*3*/] = 7;
			Local_185.f_4[11 /*3*/].f_1 = 21f;
			Local_185.f_4[12 /*3*/] = 6;
			Local_185.f_4[12 /*3*/].f_1 = 22f;
			Local_185.f_4[13 /*3*/] = 11;
			Local_185.f_4[13 /*3*/].f_1 = 23f;
			Local_185.f_4[14 /*3*/] = 5;
			Local_185.f_4[14 /*3*/].f_1 = 24f;
			Local_185.f_4[15 /*3*/] = 11;
			Local_185.f_4[15 /*3*/].f_1 = 25f;
			Local_185.f_4[16 /*3*/] = 5;
			Local_185.f_4[16 /*3*/].f_1 = 26f;
			Local_185.f_4[17 /*3*/] = 11;
			Local_185.f_4[17 /*3*/].f_1 = 27f;
			Local_185.f_4[18 /*3*/] = 5;
			Local_185.f_4[18 /*3*/].f_1 = 28f;
			Local_185.f_4[19 /*3*/] = 29;
			Local_185.f_4[19 /*3*/].f_1 = 31f;
			Local_185.f_4[20 /*3*/] = 4;
			Local_185.f_4[20 /*3*/].f_1 = 32f;
			Local_185.f_4[21 /*3*/] = 3;
			Local_185.f_4[21 /*3*/].f_1 = 33f;
			Local_185.f_4[22 /*3*/] = 7;
			Local_185.f_4[22 /*3*/].f_1 = 35f;
			Local_185.f_4[23 /*3*/] = 5;
			Local_185.f_4[23 /*3*/].f_1 = 36f;
			Local_185.f_4[24 /*3*/] = 5;
			Local_185.f_4[24 /*3*/].f_1 = 37f;
			Local_185.f_4[25 /*3*/] = 23;
			Local_185.f_4[25 /*3*/].f_1 = 37.5f;
			Local_185.f_4[26 /*3*/] = 7;
			Local_185.f_4[26 /*3*/].f_1 = 38f;
			Local_185.f_4[27 /*3*/] = 16;
			Local_185.f_4[27 /*3*/].f_1 = 40f;
			Local_185.f_4[28 /*3*/] = 5;
			Local_185.f_4[28 /*3*/].f_1 = 41f;
			Local_185.f_4[29 /*3*/] = 5;
			Local_185.f_4[29 /*3*/].f_1 = 42f;
			Local_185.f_4[30 /*3*/] = 11;
			Local_185.f_4[30 /*3*/].f_1 = 45f;
			Local_185.f_4[31 /*3*/] = 3;
			Local_185.f_4[31 /*3*/].f_1 = 46.5f;
			Local_185.f_4[32 /*3*/] = 7;
			Local_185.f_4[32 /*3*/].f_1 = 47.2f;
			Local_185.f_4[33 /*3*/] = 7;
			Local_185.f_4[33 /*3*/].f_1 = 48.5f;
			Local_185.f_4[34 /*3*/] = 22;
			Local_185.f_4[34 /*3*/].f_1 = 49.5f;
			Local_185.f_4[35 /*3*/] = 11;
			Local_185.f_4[35 /*3*/].f_1 = 50f;
			Local_185.f_4[36 /*3*/] = 5;
			Local_185.f_4[36 /*3*/].f_1 = 51f;
			Local_185.f_4[37 /*3*/] = 7;
			Local_185.f_4[37 /*3*/].f_1 = 52.2f;
			Local_185.f_4[38 /*3*/] = 4;
			Local_185.f_4[38 /*3*/].f_1 = 53f;
			Local_185.f_4[39 /*3*/] = 6;
			Local_185.f_4[39 /*3*/].f_1 = 54f;
			Local_185.f_4[40 /*3*/] = 5;
			Local_185.f_4[40 /*3*/].f_1 = 55f;
			Local_185.f_4[41 /*3*/] = 4;
			Local_185.f_4[41 /*3*/].f_1 = 56f;
			Local_185.f_4[42 /*3*/] = 11;
			Local_185.f_4[42 /*3*/].f_1 = 57f;
			Local_185.f_4[43 /*3*/] = 16;
			Local_185.f_4[43 /*3*/].f_1 = 58f;
			Local_185.f_4[44 /*3*/] = 5;
			Local_185.f_4[44 /*3*/].f_1 = 60f;
			Local_185.f_4[45 /*3*/] = 5;
			Local_185.f_4[45 /*3*/].f_1 = 61f;
			Local_185.f_4[46 /*3*/] = 5;
			Local_185.f_4[46 /*3*/].f_1 = 63f;
			Local_185.f_4[47 /*3*/] = 25;
			Local_185.f_4[47 /*3*/].f_1 = 63.7f;
			Local_185.f_4[48 /*3*/] = 11;
			Local_185.f_4[48 /*3*/].f_1 = 64f;
			Local_185.f_4[49 /*3*/] = 5;
			Local_185.f_4[49 /*3*/].f_1 = 65f;
			Local_185.f_4[50 /*3*/] = 11;
			Local_185.f_4[50 /*3*/].f_1 = 66f;
			Local_185.f_4[51 /*3*/] = 5;
			Local_185.f_4[51 /*3*/].f_1 = 67f;
			Local_185.f_4[52 /*3*/] = 5;
			Local_185.f_4[52 /*3*/].f_1 = 69f;
			Local_185.f_4[53 /*3*/] = 7;
			Local_185.f_4[53 /*3*/].f_1 = 70f;
			Local_185.f_4[54 /*3*/] = 11;
			Local_185.f_4[54 /*3*/].f_1 = 70.1f;
			Local_185.f_4[55 /*3*/] = 4;
			Local_185.f_4[55 /*3*/].f_1 = 72f;
			Local_185.f_4[56 /*3*/] = 29;
			Local_185.f_4[56 /*3*/].f_1 = 74.5f;
			Local_185.f_4[57 /*3*/] = 23;
			Local_185.f_4[57 /*3*/].f_1 = 75f;
			Local_185.f_4[58 /*3*/] = 5;
			Local_185.f_4[58 /*3*/].f_1 = 75.5f;
			Local_185.f_4[59 /*3*/] = 7;
			Local_185.f_4[59 /*3*/].f_1 = 76f;
			Local_185.f_4[60 /*3*/] = 5;
			Local_185.f_4[60 /*3*/].f_1 = 76.5f;
			Local_185.f_4[61 /*3*/] = 4;
			Local_185.f_4[61 /*3*/].f_1 = 78.5f;
			Local_185.f_4[62 /*3*/] = 28;
			Local_185.f_4[62 /*3*/].f_2 = 451;
			Local_185.f_4[62 /*3*/].f_1 = 79f;
			Local_185.f_4[63 /*3*/] = 16;
			Local_185.f_4[63 /*3*/].f_1 = 80f;
			Local_185.f_4[64 /*3*/] = 4;
			Local_185.f_4[64 /*3*/].f_1 = 80.5f;
			Local_185.f_4[65 /*3*/] = 11;
			Local_185.f_4[65 /*3*/].f_1 = 81f;
			Local_185.f_4[66 /*3*/] = 6;
			Local_185.f_4[66 /*3*/].f_1 = 82f;
			Local_185.f_4[67 /*3*/] = 5;
			Local_185.f_4[67 /*3*/].f_1 = 83f;
			Local_185.f_4[68 /*3*/] = 11;
			Local_185.f_4[68 /*3*/].f_1 = 83.5f;
			Local_185.f_4[69 /*3*/] = 11;
			Local_185.f_4[69 /*3*/].f_1 = 85f;
			Local_185.f_4[70 /*3*/] = 5;
			Local_185.f_4[70 /*3*/].f_1 = 86f;
			Local_185.f_4[71 /*3*/] = 29;
			Local_185.f_4[71 /*3*/].f_1 = 89.3f;
			Local_185.f_4[72 /*3*/] = 20;
			Local_185.f_4[72 /*3*/].f_1 = 89.8f;
			Local_185.f_4[73 /*3*/] = 3;
			Local_185.f_4[73 /*3*/].f_1 = 90.5f;
			Local_185.f_4[74 /*3*/] = 3;
			Local_185.f_4[74 /*3*/].f_1 = 92f;
			Local_185.f_4[75 /*3*/] = 16;
			Local_185.f_4[75 /*3*/].f_1 = 92.1f;
			Local_185.f_4[76 /*3*/] = 5;
			Local_185.f_4[76 /*3*/].f_1 = 93f;
			Local_185.f_4[77 /*3*/] = 5;
			Local_185.f_4[77 /*3*/].f_1 = 93.6f;
			Local_185.f_4[78 /*3*/] = 11;
			Local_185.f_4[78 /*3*/].f_1 = 93.7f;
			Local_185.f_4[79 /*3*/] = 5;
			Local_185.f_4[79 /*3*/].f_1 = 94.5f;
			Local_185.f_4[80 /*3*/] = 7;
			Local_185.f_4[80 /*3*/].f_1 = 95f;
			Local_185.f_4[81 /*3*/] = 5;
			Local_185.f_4[81 /*3*/].f_1 = 96f;
			Local_185.f_4[82 /*3*/] = 11;
			Local_185.f_4[82 /*3*/].f_1 = 98f;
			Local_185.f_4[83 /*3*/] = 4;
			Local_185.f_4[83 /*3*/].f_1 = 99f;
			Local_185.f_4[84 /*3*/] = 4;
			Local_185.f_4[84 /*3*/].f_1 = 100f;
			Local_185.f_4[85 /*3*/] = 22;
			Local_185.f_4[85 /*3*/].f_1 = 102f;
			Local_185.f_4[86 /*3*/] = 7;
			Local_185.f_4[86 /*3*/].f_1 = 104f;
			Local_185.f_4[87 /*3*/] = 11;
			Local_185.f_4[87 /*3*/].f_1 = 106f;
			Local_185.f_4[88 /*3*/] = 3;
			Local_185.f_4[88 /*3*/].f_1 = 110f;
			Local_185.f_4[89 /*3*/] = 3;
			Local_185.f_4[89 /*3*/].f_1 = 112f;
			Local_185.f_4[90 /*3*/] = 24;
			Local_185.f_4[90 /*3*/].f_1 = 114f;
			Local_185.f_4[91 /*3*/] = 16;
			Local_185.f_4[91 /*3*/].f_1 = 115f;
			Local_185.f_4[92 /*3*/] = 4;
			Local_185.f_4[92 /*3*/].f_1 = 116f;
			Local_185.f_4[93 /*3*/] = 6;
			Local_185.f_4[93 /*3*/].f_1 = 119f;
			Local_185.f_4[94 /*3*/] = 4;
			Local_185.f_4[94 /*3*/].f_1 = 122f;
			Local_185.f_4[95 /*3*/] = 7;
			Local_185.f_4[95 /*3*/].f_1 = 124f;
			Local_185.f_4[96 /*3*/] = 6;
			Local_185.f_4[96 /*3*/].f_1 = 126f;
			Local_185.f_4[97 /*3*/] = 5;
			Local_185.f_4[97 /*3*/].f_1 = 129f;
			Local_185.f_4[98 /*3*/] = 5;
			Local_185.f_4[98 /*3*/].f_1 = 130f;
			Local_185.f_4[99 /*3*/] = 11;
			Local_185.f_4[99 /*3*/].f_1 = 132f;
			Local_185.f_4[100 /*3*/] = 4;
			Local_185.f_4[100 /*3*/].f_1 = 133f;
			Local_185.f_4[101 /*3*/] = 4;
			Local_185.f_4[101 /*3*/].f_1 = 134f;
			Local_185.f_4[102 /*3*/] = 21;
			Local_185.f_4[102 /*3*/].f_1 = 136f;
			Local_185.f_4[103 /*3*/] = 29;
			Local_185.f_4[103 /*3*/].f_1 = 138f;
			Local_185.f_4[104 /*3*/] = 11;
			Local_185.f_4[104 /*3*/].f_1 = 140f;
			Local_185.f_4[105 /*3*/] = 5;
			Local_185.f_4[105 /*3*/].f_1 = 141f;
			Local_185.f_4[106 /*3*/] = 5;
			Local_185.f_4[106 /*3*/].f_1 = 142f;
			Local_185.f_4[107 /*3*/] = 5;
			Local_185.f_4[107 /*3*/].f_1 = 143f;
			Local_185.f_4[108 /*3*/] = 16;
			Local_185.f_4[108 /*3*/].f_1 = 147f;
			Local_185.f_4[109 /*3*/] = 4;
			Local_185.f_4[109 /*3*/].f_1 = 148f;
			Local_185.f_4[110 /*3*/] = 3;
			Local_185.f_4[110 /*3*/].f_1 = 150f;
			Local_185.f_4[111 /*3*/] = 4;
			Local_185.f_4[111 /*3*/].f_1 = 152f;
			Local_185.f_4[112 /*3*/] = 24;
			Local_185.f_4[112 /*3*/].f_1 = 154f;
			Local_185.f_4[113 /*3*/] = 6;
			Local_185.f_4[113 /*3*/].f_1 = 155f;
			Local_185.f_4[114 /*3*/] = 11;
			Local_185.f_4[114 /*3*/].f_1 = 156f;
			Local_185.f_4[115 /*3*/] = 5;
			Local_185.f_4[115 /*3*/].f_1 = 157f;
			Local_185.f_4[116 /*3*/] = 4;
			Local_185.f_4[116 /*3*/].f_1 = 160f;
			Local_185.f_4[117 /*3*/] = 6;
			Local_185.f_4[117 /*3*/].f_1 = 163f;
			Local_185.f_4[118 /*3*/] = 5;
			Local_185.f_4[118 /*3*/].f_1 = 165f;
			Local_185.f_4[119 /*3*/] = 11;
			Local_185.f_4[119 /*3*/].f_1 = 167f;
			Local_185.f_4[120 /*3*/] = 5;
			Local_185.f_4[120 /*3*/].f_1 = 170f;
			Local_185.f_4[121 /*3*/] = 5;
			Local_185.f_4[121 /*3*/].f_1 = 171f;
			Local_185.f_4[122 /*3*/] = 16;
			Local_185.f_4[122 /*3*/].f_1 = 172f;
			Local_185.f_4[123 /*3*/] = 4;
			Local_185.f_4[123 /*3*/].f_1 = 173f;
			Local_185.f_4[124 /*3*/] = 7;
			Local_185.f_4[124 /*3*/].f_1 = 176f;
			Local_185.f_4[125 /*3*/] = 29;
			Local_185.f_4[125 /*3*/].f_1 = 182f;
			Local_185.f_4[126 /*3*/] = 5;
			Local_185.f_4[126 /*3*/].f_1 = 184f;
			Local_185.f_4[127 /*3*/] = 5;
			Local_185.f_4[127 /*3*/].f_1 = 185f;
			Local_185.f_4[128 /*3*/] = 11;
			Local_185.f_4[128 /*3*/].f_1 = 186f;
			Local_185.f_4[129 /*3*/] = 4;
			Local_185.f_4[129 /*3*/].f_1 = 187f;
			Local_185.f_4[130 /*3*/] = 4;
			Local_185.f_4[130 /*3*/].f_1 = 188f;
			Local_185.f_4[131 /*3*/] = 20;
			Local_185.f_4[131 /*3*/].f_1 = 190f;
			Local_185.f_4[132 /*3*/] = 5;
			Local_185.f_4[132 /*3*/].f_1 = 192f;
			Local_185.f_4[133 /*3*/] = 11;
			Local_185.f_4[133 /*3*/].f_1 = 193f;
			Local_185.f_4[134 /*3*/] = 30;
			Local_185.f_4[134 /*3*/].f_1 = 196f;
			Local_185.f_4[135 /*3*/] = 11;
			Local_185.f_4[135 /*3*/].f_1 = 198f;
			Local_185.f_4[136 /*3*/] = 3;
			Local_185.f_4[136 /*3*/].f_1 = 201f;
			Local_185.f_4[137 /*3*/] = 5;
			Local_185.f_4[137 /*3*/].f_1 = 202f;
			Local_185.f_4[138 /*3*/] = 3;
			Local_185.f_4[138 /*3*/].f_1 = 203f;
			Local_185.f_4[139 /*3*/] = 3;
			Local_185.f_4[139 /*3*/].f_1 = 205f;
			Local_185.f_4[140 /*3*/] = 6;
			Local_185.f_4[140 /*3*/].f_1 = 207f;
			Local_185.f_4[141 /*3*/] = 22;
			Local_185.f_4[141 /*3*/].f_1 = 209f;
			Local_185.f_4[142 /*3*/] = 7;
			Local_185.f_4[142 /*3*/].f_1 = 210f;
			Local_185.f_4[143 /*3*/] = 4;
			Local_185.f_4[143 /*3*/].f_1 = 211f;
			Local_185.f_4[144 /*3*/] = 4;
			Local_185.f_4[144 /*3*/].f_1 = 212f;
			Local_185.f_4[145 /*3*/] = 7;
			Local_185.f_4[145 /*3*/].f_1 = 213f;
			Local_185.f_4[146 /*3*/] = 16;
			Local_185.f_4[146 /*3*/].f_1 = 214f;
			Local_185.f_4[147 /*3*/] = 3;
			Local_185.f_4[147 /*3*/].f_1 = 215f;
			Local_185.f_4[148 /*3*/] = 5;
			Local_185.f_4[148 /*3*/].f_1 = 216f;
			Local_185.f_4[149 /*3*/] = 5;
			Local_185.f_4[149 /*3*/].f_1 = 217f;
			Local_185.f_4[150 /*3*/] = 5;
			Local_185.f_4[150 /*3*/].f_1 = 218f;
			Local_185.f_4[151 /*3*/] = 3;
			Local_185.f_4[151 /*3*/].f_1 = 219.5f;
			Local_185.f_4[152 /*3*/] = 11;
			Local_185.f_4[152 /*3*/].f_1 = 220f;
			Local_185.f_4[153 /*3*/] = 11;
			Local_185.f_4[153 /*3*/].f_1 = 223f;
			Local_185.f_4[154 /*3*/] = 5;
			Local_185.f_4[154 /*3*/].f_1 = 224f;
			Local_185.f_4[155 /*3*/] = 29;
			Local_185.f_4[155 /*3*/].f_1 = 226f;
			Local_185.f_4[156 /*3*/] = 4;
			Local_185.f_4[156 /*3*/].f_1 = 228f;
			Local_185.f_4[157 /*3*/] = 3;
			Local_185.f_4[157 /*3*/].f_1 = 230f;
			Local_185.f_4[158 /*3*/] = 7;
			Local_185.f_4[158 /*3*/].f_1 = 230.5f;
			Local_185.f_4[159 /*3*/] = 16;
			Local_185.f_4[159 /*3*/].f_1 = 233f;
			Local_185.f_4[160 /*3*/] = 5;
			Local_185.f_4[160 /*3*/].f_1 = 234f;
			Local_185.f_4[161 /*3*/] = 5;
			Local_185.f_4[161 /*3*/].f_1 = 235f;
			Local_185.f_4[162 /*3*/] = 7;
			Local_185.f_4[162 /*3*/].f_1 = 236f;
			Local_185.f_4[163 /*3*/] = 24;
			Local_185.f_4[163 /*3*/].f_1 = 238f;
			Local_185.f_4[164 /*3*/] = 3;
			Local_185.f_4[164 /*3*/].f_1 = 242f;
			Local_185.f_4[165 /*3*/] = 5;
			Local_185.f_4[165 /*3*/].f_1 = 243f;
			Local_185.f_4[166 /*3*/] = 5;
			Local_185.f_4[166 /*3*/].f_1 = 244f;
			Local_185.f_4[167 /*3*/] = 11;
			Local_185.f_4[167 /*3*/].f_1 = 248f;
			Local_185.f_4[168 /*3*/] = 3;
			Local_185.f_4[168 /*3*/].f_1 = 251f;
			Local_185.f_4[169 /*3*/] = 5;
			Local_185.f_4[169 /*3*/].f_1 = 252f;
			Local_185.f_4[170 /*3*/] = 3;
			Local_185.f_4[170 /*3*/].f_1 = 253f;
			Local_185.f_4[171 /*3*/] = 7;
			Local_185.f_4[171 /*3*/].f_1 = 254f;
			Local_185.f_4[172 /*3*/] = 16;
			Local_185.f_4[172 /*3*/].f_1 = 255f;
			Local_185.f_4[173 /*3*/] = 29;
			Local_185.f_4[173 /*3*/].f_1 = 256f;
			Local_185.f_4[174 /*3*/] = 20;
			Local_185.f_4[174 /*3*/].f_1 = 259f;
			Local_185.f_4[175 /*3*/] = 11;
			Local_185.f_4[175 /*3*/].f_1 = 261f;
			Local_185.f_4[176 /*3*/] = 5;
			Local_185.f_4[176 /*3*/].f_1 = 263f;
			Local_185.f_4[177 /*3*/] = 7;
			Local_185.f_4[177 /*3*/].f_1 = 264f;
			Local_185.f_4[178 /*3*/] = 4;
			Local_185.f_4[178 /*3*/].f_1 = 265f;
			Local_185.f_4[179 /*3*/] = 6;
			Local_185.f_4[179 /*3*/].f_1 = 267f;
			Local_185.f_4[180 /*3*/] = 7;
			Local_185.f_4[180 /*3*/].f_1 = 269f;
			Local_185.f_4[181 /*3*/] = 5;
			Local_185.f_4[181 /*3*/].f_1 = 270f;
			Local_185.f_4[182 /*3*/] = 23;
			Local_185.f_4[182 /*3*/].f_1 = 272f;
			Local_185.f_4[183 /*3*/] = 11;
			Local_185.f_4[183 /*3*/].f_1 = 274f;
			Local_185.f_4[184 /*3*/] = 5;
			Local_185.f_4[184 /*3*/].f_1 = 275f;
			Local_185.f_4[185 /*3*/] = 7;
			Local_185.f_4[185 /*3*/].f_1 = 277f;
			Local_185.f_4[186 /*3*/] = 5;
			Local_185.f_4[186 /*3*/].f_1 = 280f;
			Local_185.f_4[187 /*3*/] = 4;
			Local_185.f_4[187 /*3*/].f_1 = 283f;
			Local_185.f_4[188 /*3*/] = 5;
			Local_185.f_4[188 /*3*/].f_1 = 286f;
			Local_185.f_4[189 /*3*/] = 29;
			Local_185.f_4[189 /*3*/].f_1 = 288f;
			Local_185.f_4[190 /*3*/] = 5;
			Local_185.f_4[190 /*3*/].f_1 = 289f;
			Local_185.f_4[191 /*3*/] = 16;
			Local_185.f_4[191 /*3*/].f_1 = 292f;
			Local_185.f_4[192 /*3*/] = 5;
			Local_185.f_4[192 /*3*/].f_1 = 294f;
			Local_185.f_4[193 /*3*/] = 7;
			Local_185.f_4[193 /*3*/].f_1 = 296f;
			Local_185.f_4[194 /*3*/] = 5;
			Local_185.f_4[194 /*3*/].f_1 = 299f;
			Local_185.f_4[195 /*3*/] = 18;
			Local_185.f_4[195 /*3*/].f_1 = 302f;
			Local_185.f_4[196 /*3*/] = 6;
			Local_185.f_4[196 /*3*/].f_1 = 303f;
			Local_185.f_4[197 /*3*/] = 5;
			Local_185.f_4[197 /*3*/].f_1 = 305f;
			Local_185.f_4[198 /*3*/] = 16;
			Local_185.f_4[198 /*3*/].f_1 = 306f;
			Local_185.f_4[199 /*3*/] = 24;
			Local_185.f_4[199 /*3*/].f_1 = 307f;
			Local_185.f_4[200 /*3*/] = 5;
			Local_185.f_4[200 /*3*/].f_2 = 1;
			Local_185.f_4[200 /*3*/].f_1 = 308f;
			Local_185.f_4[201 /*3*/] = 11;
			Local_185.f_4[201 /*3*/].f_1 = 309f;
			Local_185.f_4[202 /*3*/] = 4;
			Local_185.f_4[202 /*3*/].f_1 = 310f;
			Local_185.f_4[203 /*3*/] = 6;
			Local_185.f_4[203 /*3*/].f_1 = 314f;
			Local_185.f_4[204 /*3*/] = 7;
			Local_185.f_4[204 /*3*/].f_1 = 314.7f;
			Local_185.f_4[205 /*3*/] = 4;
			Local_185.f_4[205 /*3*/].f_1 = 315.5f;
			Local_185.f_4[206 /*3*/] = 16;
			Local_185.f_4[206 /*3*/].f_1 = 316f;
			Local_185.f_4[207 /*3*/] = 4;
			Local_185.f_4[207 /*3*/].f_1 = 317f;
			Local_185.f_4[208 /*3*/] = 3;
			Local_185.f_4[208 /*3*/].f_1 = 320f;
			Local_185.f_4[209 /*3*/] = 4;
			Local_185.f_4[209 /*3*/].f_1 = 321f;
			Local_185.f_4[210 /*3*/] = 11;
			Local_185.f_4[210 /*3*/].f_1 = 322f;
			Local_185.f_4[211 /*3*/] = 5;
			Local_185.f_4[211 /*3*/].f_2 = 1;
			Local_185.f_4[211 /*3*/].f_1 = 322.5f;
			Local_185.f_4[212 /*3*/] = 11;
			Local_185.f_4[212 /*3*/].f_1 = 324f;
			Local_185.f_4[213 /*3*/] = 11;
			Local_185.f_4[213 /*3*/].f_1 = 325f;
			Local_185.f_4[214 /*3*/] = 27;
			Local_185.f_4[214 /*3*/].f_1 = 328.5f;
			Local_185.f_4[215 /*3*/] = 3;
			Local_185.f_4[215 /*3*/].f_1 = 329.5f;
			Local_185.f_4[216 /*3*/] = 4;
			Local_185.f_4[216 /*3*/].f_1 = 330f;
			Local_185.f_4[217 /*3*/] = 4;
			Local_185.f_4[217 /*3*/].f_1 = 331f;
			Local_185.f_4[218 /*3*/] = 4;
			Local_185.f_4[218 /*3*/].f_1 = 332f;
			Local_185.f_4[219 /*3*/] = 6;
			Local_185.f_4[219 /*3*/].f_1 = 333f;
			Local_185.f_4[220 /*3*/] = 16;
			Local_185.f_4[220 /*3*/].f_1 = 334f;
			Local_185.f_4[221 /*3*/] = 4;
			Local_185.f_4[221 /*3*/].f_1 = 335f;
			Local_185.f_4[222 /*3*/] = 3;
			Local_185.f_4[222 /*3*/].f_1 = 336f;
			Local_185.f_4[223 /*3*/] = 11;
			Local_185.f_4[223 /*3*/].f_1 = 337f;
			Local_185.f_4[224 /*3*/] = 4;
			Local_185.f_4[224 /*3*/].f_1 = 338f;
			break;
		
		case 4:
			Local_185.f_4[0 /*3*/] = 34;
			Local_185.f_4[0 /*3*/].f_1 = 0f;
			break;
	}
}

void func_114(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x707D
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
}

void func_115()//Position - 0x709C
{
	if (!BitTest(Local_185.f_2368.f_333, 7))
	{
		Local_163.f_16 = 1;
		Local_163.f_17 = Local_185.f_2712.f_2;
		Local_163.f_18 = Local_185.f_2712.f_6;
		Local_163.f_20 = func_48();
		MISC::SET_BIT(&(Local_185.f_2368.f_333), 7);
		Local_163.f_21 = func_43();
		func_42();
	}
	AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_ip_in_gameplay_scene");
	AUDIO::START_AUDIO_SCENE("dlc_vw_am_ip_in_menus_scene");
	if (func_119())
	{
		func_118();
		func_12(func_13(4));
		func_116();
		func_8(10);
	}
	else
	{
		func_9();
		func_61();
		func_55();
		func_54("Frontend_Retry");
		func_8(4);
	}
}

void func_116()//Position - 0x7137
{
	struct<3> Var0;
	int iVar34;
	
	Var0 = 11;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	iVar34 = 0;
	while (iVar34 <= 9)
	{
		Var0[iVar34 /*3*/] = Local_185.f_2912[iVar34 /*3*/];
		Var0[iVar34 /*3*/].f_2 = 0;
		Var0[iVar34 /*3*/].f_1 = Local_185.f_2912[iVar34 /*3*/].f_1;
		iVar34++;
	}
	if (!Local_185.f_2907)
	{
		Var0[10 /*3*/].f_2 = 1;
		Var0[10 /*3*/].f_1 = func_48();
		Var0[10 /*3*/] = 0;
	}
	func_117(&Var0, 0, 10);
	iVar34 = 0;
	while (iVar34 <= 9)
	{
		Local_185.f_2912[iVar34 /*3*/] = Var0[iVar34 /*3*/];
		Local_185.f_2912[iVar34 /*3*/].f_2 = Var0[iVar34 /*3*/].f_2;
		Local_185.f_2912[iVar34 /*3*/].f_1 = Var0[iVar34 /*3*/].f_1;
		func_77(func_79(PLAYER::PLAYER_ID()), 1, iVar34, Local_185.f_2912[iVar34 /*3*/], Local_185.f_2912[iVar34 /*3*/].f_1, 0);
		iVar34++;
	}
}

void func_117(int iParam0, int iParam1, int iParam2)//Position - 0x7279
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar2 = (iParam0[((iParam1 + iParam2) / 2) /*3*/])->f_1;
	Var3.f_1 = -1;
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while ((iParam0[iVar0 /*3*/])->f_1 > iVar2 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (iVar2 > (iParam0[iVar1 /*3*/])->f_1 && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var3.f_0 = (*iParam0)[iVar0 /*3*/];
			Var3.f_2 = (iParam0[iVar0 /*3*/])->f_2;
			Var3.f_1 = (iParam0[iVar0 /*3*/])->f_1;
			(*iParam0)[iVar0 /*3*/] = (*iParam0)[iVar1 /*3*/];
			(iParam0[iVar0 /*3*/])->f_2 = (iParam0[iVar1 /*3*/])->f_2;
			(iParam0[iVar0 /*3*/])->f_1 = (iParam0[iVar1 /*3*/])->f_1;
			(*iParam0)[iVar1 /*3*/] = Var3.f_0;
			(iParam0[iVar1 /*3*/])->f_2 = Var3.f_2;
			(iParam0[iVar1 /*3*/])->f_1 = Var3.f_1;
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_117(iParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_117(iParam0, iParam1, iVar1);
	}
}

void func_118()//Position - 0x738E
{
	Local_185.f_2881 = GRAPHICS::SET_BINK_MOVIE("I&P_Leaderboard_loop_16x9");
	GRAPHICS::PLAY_BINK_MOVIE(Local_185.f_2881);
}

int func_119()//Position - 0x73AC
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (func_69())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_120())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_120()//Position - 0x7413
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_121(var uParam0, int iParam1, bool bParam2)//Position - 0x7429
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_122(uParam0, bParam2, 0);
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

void func_122(var uParam0, bool bParam1, bool bParam2)//Position - 0x7487
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

void func_123(var uParam0, bool bParam1, bool bParam2)//Position - 0x74CC
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

bool func_124(var uParam0)//Position - 0x7509
{
	return uParam0->f_1;
}

int func_125()//Position - 0x7515
{
	int iVar0;
	bool bVar1;
	
	if (Local_185.f_2878 < func_137(3) + 60 + 10)
	{
		return 0;
	}
	iVar0 = 223;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 237;
	}
	bVar1 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0);
	if (bVar1)
	{
		Local_185.f_2725 = func_48();
	}
	if (func_48() > Local_185.f_2725)
	{
		return 0;
	}
	if (!BitTest(Local_185.f_2368.f_333, 6))
	{
		MISC::SET_BIT(&(Local_185.f_2368.f_333), 6);
	}
	if (!BitTest(Local_185.f_2368.f_333, 4))
	{
		if (Local_185.f_2727 == 0)
		{
			MISC::SET_BIT(&(Local_185.f_2368.f_333), 4);
			func_54("Frontend_Score_Tick_Total");
			func_14(&(Local_185.f_2729));
		}
		else
		{
			if (bVar1)
			{
				func_127((500 * Local_185.f_2727), 4, func_92(-1f, -1f));
				func_54("Frontend_Score_Tick_Large");
				Local_185.f_2727 = 0;
				Local_185.f_2725 = func_48();
				return 0;
			}
			Local_185.f_2727 = (Local_185.f_2727 - 1);
			func_126("Frontend_Score_Tick_Loop_Small", &(Local_185.f_2729));
			func_127(500, 5, func_92(-1f, -1f));
		}
		return 0;
	}
	if (!BitTest(Local_185.f_2368.f_333, 5))
	{
		if (Local_185.f_2726 <= 0)
		{
			MISC::SET_BIT(&(Local_185.f_2368.f_333), 5);
			func_54("Frontend_Score_Tick_Total");
			return 0;
		}
		else
		{
			if (bVar1)
			{
				func_127((10000 * Local_185.f_2726), 4, func_92(-1f, -1f));
				func_54("Frontend_Score_Tick_Large");
				Local_185.f_2726 = 0;
				Local_185.f_2725 = func_48();
				return 0;
			}
			Local_185.f_2726 = (Local_185.f_2726 - 1);
			func_54("Frontend_Score_Tick_Large");
			func_127(10000, 4, func_92(-1f, -1f));
		}
		return 0;
	}
	if (!BitTest(Local_185.f_2368.f_333, 3))
	{
		if (Local_185.f_2728 == 0)
		{
			MISC::SET_BIT(&(Local_185.f_2368.f_333), 3);
			func_54("Frontend_Score_Tick_Total");
			func_14(&(Local_185.f_2729));
		}
		else
		{
			if (bVar1)
			{
				func_127((SYSTEM::ROUND((0.164583f * 151.89905f)) * Local_185.f_2728), 4, func_92(-1f, -1f));
				func_54("Frontend_Score_Tick_Large");
				Local_185.f_2728 = 0;
				Local_185.f_2725 = func_48();
				return 0;
			}
			Local_185.f_2728 = (Local_185.f_2728 - 1);
			func_126("Frontend_Score_Tick_Loop_Small", &(Local_185.f_2729));
			func_127(SYSTEM::ROUND((0.164583f * 151.89905f)), 3, func_92(-1f, -1f));
		}
		return 0;
	}
	return 1;
}

void func_126(char* sParam0, var uParam1)//Position - 0x7758
{
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, "dlc_vw_am_ip_frontend_sounds", false);
	}
}

void func_127(int iParam0, int iParam1, struct<2> Param2)//Position - 0x7786
{
	switch (iParam1)
	{
		case 0:
			Local_185.f_2712.f_3 = (Local_185.f_2712.f_3 + iParam0);
			Local_185.f_2712.f_4++;
			Local_185.f_2712.f_6++;
			func_136(iParam0, Param2);
			func_135();
			break;
		
		case 1:
			Local_185.f_2712 = (Local_185.f_2712 + iParam0);
			break;
		
		case 2:
			Local_185.f_2712.f_7 = (Local_185.f_2712.f_7 + iParam0);
			Local_185.f_2712.f_8++;
			Local_185.f_2712.f_9++;
			func_136(iParam0, Param2);
			func_128();
			break;
		
		case 3:
			Local_185.f_2712.f_10 = (Local_185.f_2712.f_10 + iParam0);
			break;
		
		case 5:
			Local_185.f_2712.f_12 = (Local_185.f_2712.f_12 + iParam0);
			break;
		
		case 4:
			Local_185.f_2712.f_11 = (Local_185.f_2712.f_11 + iParam0);
			break;
	}
}

void func_128()//Position - 0x7889
{
	if (BitTest(Local_185.f_2904, 2))
	{
		return;
	}
	if (Local_185.f_2712.f_9 < Global_262145.f_26800 /* Tunable: IVC_IAP_OIL_CHALLENGE_REQUIREMENT */)
	{
		return;
	}
	func_132(249, 1, -1, 1);
	func_131(27185, 1, -1);
	MISC::SET_BIT(&(Local_185.f_2904), 2);
	MISC::SET_BIT(&(Local_185.f_2904), 8);
	func_130();
	func_129("IAP_CH_1", Global_262145.f_26800 /* Tunable: IVC_IAP_OIL_CHALLENGE_REQUIREMENT */, 7500);
}

void func_129(char* sParam0, var uParam1, int iParam2)//Position - 0x78EF
{
	func_9();
	Local_185.f_2901 = (NETWORK::GET_NETWORK_TIME() + iParam2);
	Local_185.f_2903 = sParam0;
	Local_185.f_2902 = uParam1;
}

void func_130()//Position - 0x7915
{
	if (BitTest(Local_185.f_2904, 0))
	{
		return;
	}
	if (BitTest(Local_185.f_2904, 6))
	{
		return;
	}
	if (Global_262145.f_26804 /* Tunable: BVC_IAP_KILL_CHALLENGE_REQUIRED_FOR_GOLD */ && !BitTest(Local_185.f_2904, 1))
	{
		return;
	}
	if (Global_262145.f_26805 /* Tunable: BVC_IAP_OIL_CHALLENGE_REQUIRED_FOR_GOLD */ && !BitTest(Local_185.f_2904, 2))
	{
		return;
	}
	if (Global_262145.f_26806 /* Tunable: BVC_IAP_MOON_DISTANCE_CHALLENGE_REQUIRED_FOR_GOLD */ && !BitTest(Local_185.f_2904, 3))
	{
		return;
	}
	if (Global_262145.f_26807 /* Tunable: BVC_IAP_LIVES_CHALLENGE_REQUIRED_FOR_GOLD */ && !BitTest(Local_185.f_2904, 4))
	{
		return;
	}
	if (Global_262145.f_26808 /* Tunable: BVC_IAP_SCORE_CHALLENGE_REQUIRED_FOR_GOLD */ && !BitTest(Local_185.f_2904, 5))
	{
		return;
	}
	func_132(253, 1, -1, 1);
	MISC::SET_BIT(&(Local_185.f_2904), 6);
}

void func_131(int iParam0, bool bParam1, int iParam2)//Position - 0x79CC
{
	if (iParam2 == -1)
	{
		iParam2 = func_32();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_132(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x79EA
{
	int iVar0;
	
	iVar0 = func_133(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_133(int iParam0, var uParam1)//Position - 0x7A0D
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_134(uParam1));
}

int func_134(var uParam0)//Position - 0x7A22
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_32();
		if (iVar1 > -1)
		{
			Global_2751934 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2751934 = 1;
		}
	}
	return iVar0;
}

void func_135()//Position - 0x7A56
{
	if (BitTest(Local_185.f_2904, 1))
	{
		return;
	}
	if (Local_185.f_2712.f_5 < Global_262145.f_26799 /* Tunable: IVC_IAP_KILL_CHALLENGE_REQUIREMENT */)
	{
		return;
	}
	func_132(248, 1, -1, 1);
	func_131(27184, 1, -1);
	MISC::SET_BIT(&(Local_185.f_2904), 1);
	MISC::SET_BIT(&(Local_185.f_2904), 7);
	func_130();
	func_129("IAP_CH_0", Global_262145.f_26799 /* Tunable: IVC_IAP_KILL_CHALLENGE_REQUIREMENT */, 7500);
}

void func_136(int iParam0, struct<2> Param1)//Position - 0x7ABB
{
	Local_185.f_2812[Local_185.f_2869 /*4*/] = NETWORK::GET_NETWORK_TIME();
	Local_185.f_2812[Local_185.f_2869 /*4*/].f_1 = iParam0;
	Local_185.f_2812[Local_185.f_2869 /*4*/].f_2 = { Param1 };
	Local_185.f_2869++;
	if (Local_185.f_2869 >= 14)
	{
		Local_185.f_2869 = 0;
	}
}

int func_137(int iParam0)//Position - 0x7B13
{
	switch (iParam0)
	{
		case 0:
			return 21;
		
		case 1:
			return 11;
		
		case 2:
			return 21;
		
		case 3:
			return 25;
		
		default:
	}
	return -1;
}

int func_138()//Position - 0x7B4F
{
	Local_185.f_2368.f_321 = func_139(Local_185.f_2368.f_321, 0.15f);
	if (Local_185.f_2368.f_321 < 1f)
	{
		return 0;
	}
	Local_185.f_2368.f_321 = 1f;
	return 1;
}

float func_139(float fParam0, float fParam1)//Position - 0x7B8B
{
	return (fParam0 + ((fParam1 * Local_185.f_2873) * SYSTEM::TIMESTEP()));
}

void func_140()//Position - 0x7BA3
{
	func_211();
	func_198();
	func_192();
	func_180();
	func_179();
	func_178();
	func_166();
	func_158();
	func_151();
	func_146();
	func_141(3);
	func_88();
	func_86();
}

void func_141(int iParam0)//Position - 0x7BE0
{
	int iVar0;
	struct<2> Var1;
	struct<8> Var3;
	float fVar19;
	
	iVar0 = func_137(iParam0);
	if (Local_185.f_2878 > -1 && Local_185.f_2878 < func_137(iParam0))
	{
		iVar0 = Local_185.f_2878 + 1;
	}
	Var1 = { func_145(iParam0) };
	StringCopy(&Var3, func_144(iParam0), 64);
	StringIntConCat(&Var3, iVar0, 64);
	fVar19 = 0f;
	if ((iParam0 == 3 || iParam0 == 2) && Local_185.f_2878 >= func_137(iParam0) + 60 + 10)
	{
		fVar19 = -0.118519f;
	}
	func_87(func_143(iParam0), &Var3, 0.5f, (0.5f + fVar19), Var1.f_0, Var1.f_1, 0f, Local_185.f_1765);
	func_142();
}

void func_142()//Position - 0x7C89
{
	Local_185.f_2878 = (Local_185.f_2878 + Local_185.f_2877);
}

char* func_143(int iParam0)//Position - 0x7CA1
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return "MPInvPersMessages";
		
		case 2:
		case 3:
			return "MPInvPersMessages2";
		
		default:
	}
	return "INVALID SEQUENCE";
}

char* func_144(int iParam0)//Position - 0x7CD8
{
	switch (iParam0)
	{
		case 0:
			return "get ready_";
		
		case 1:
			return "go_";
		
		case 2:
			return "gameover_";
		
		case 3:
			return "stageclear_";
		
		default:
	}
	return "INVALID SEQUENCE";
}

struct<2> func_145(int iParam0)//Position - 0x7D1F
{
	switch (iParam0)
	{
		case 0:
			return func_92(0.266667f, 0.118519f);
		
		case 1:
			return func_92(0.104167f, 0.118519f);
		
		case 2:
			return func_92(0.266667f, 0.118519f);
		
		case 3:
			return func_92(0.3125f, 0.118519f);
		
		default:
	}
	return func_92(-1f, -1f);
}

void func_146()//Position - 0x7D90
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	float fVar4;
	
	Var0 = { func_92(1f, 0.018518519f) };
	iVar2 = func_137(3);
	bVar3 = false;
	if (Local_185.f_2878 < iVar2)
	{
		Var0.f_1 = (Var0.f_1 + (((0.11574074f - 0.018518519f) / IntToFloat(iVar2)) * IntToFloat(Local_185.f_2878)));
	}
	else if (Local_185.f_2878 < iVar2 + 60)
	{
		Var0.f_1 = 0.11574074f;
	}
	else if (Local_185.f_2878 < iVar2 + 60 + 10)
	{
		Var0.f_1 = (0.11574074f + (((0.3472222f - 0.11574074f) / 10f) * IntToFloat(((Local_185.f_2878 - iVar2) - 60))));
	}
	else
	{
		Var0.f_1 = 0.3472222f;
		bVar3 = true;
	}
	func_95(func_92(0.5f, 0.5f), func_150(Var0, func_92(0f, 0.003703704f)), Local_185.f_1765.f_24);
	func_95(func_92(0.5f, 0.5f), Var0, Local_185.f_1765.f_20);
	if (!bVar3)
	{
		return;
	}
	fVar4 = 0.4675926f;
	func_87("MpInvPersHud", "title_armour", (0.49479166f - (0.09583333f / 2f)), fVar4, 0.09583333f, 0.02962963f, 0f, Local_185.f_1765.f_28);
	func_147(Local_185.f_2727, fVar4, 0, 99);
	fVar4 = (fVar4 + 0.037037037f);
	func_87("MpInvPersHud", "title_lives", (0.49479166f - (0.09583333f / 2f)), fVar4, 0.09583333f, 0.02962963f, 0f, Local_185.f_1765.f_28);
	func_147(Local_185.f_2726, fVar4, 0, 99);
	fVar4 = (fVar4 + 0.037037037f);
	func_87("MpInvPersHud", "title_distance", (0.49479166f - (0.09583333f / 2f)), fVar4, 0.09583333f, 0.02962963f, 0f, Local_185.f_1765.f_28);
	func_147(Local_185.f_2728 * 1000, fVar4, 0, 99);
	fVar4 = (fVar4 + (0.037037037f / 2f));
	func_95(func_92((0.5f + 0.022f), (fVar4 + 0.0095f)), func_92(0.175f, 0.005555556f), Local_185.f_1765.f_28);
	fVar4 = (fVar4 + 0.037037037f);
	func_87("MpInvPersHud", "title_total", (0.49479166f - (0.09583333f / 2f)), fVar4, 0.09583333f, 0.02962963f, 0f, Local_185.f_1765.f_28);
	func_147(Local_185.f_2725, fVar4, 1, 99);
}

void func_147(int iParam0, float fParam1, bool bParam2, int iParam3)//Position - 0x7FE8
{
	func_148(iParam0, func_92(0.503f, fParam1), Local_185.f_1765, 0, bParam2, 0, iParam3);
}

void func_148(int iParam0, struct<2> Param1, struct<4> Param3, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x8011
{
	struct<4> Var0[10];
	bool bVar41;
	int iVar42;
	var uVar43;
	struct<2> Var44;
	struct<2> Var46;
	bool bVar48;
	float fVar49;
	
	iVar42 = iParam0;
	Var44 = { func_92(func_149(bParam9, 0.005208333f, 0.010416667f), func_149(bParam9, 0.014814815f, 0.02962963f)) };
	Var46 = { func_92(func_149(bParam9, 0.004166667f, 0.008333333f), func_149(bParam9, 0.014814815f, 0.02962963f)) };
	bVar48 = iParam10 == 99;
	if (bVar48)
	{
		iParam10 = 10;
	}
	bVar41 = false;
	while (bVar41 <= 9)
	{
		StringCopy(&(Var0[bVar41 /*4*/]), "number_", 16);
		StringIntConCat(&(Var0[bVar41 /*4*/]), (iVar42 % 10), 16);
		iVar42 = (iVar42 / 10);
		if (iVar42 > 0 && (bVar41 + 1 % 3) == 0)
		{
			MISC::SET_BIT(&uVar43, bVar41);
		}
		if (bVar48 && iVar42 == 0)
		{
			iParam10 = bVar41 + 1;
		}
		else
		{
			bVar41++;
		}
	}
	fVar49 = Param1.f_0;
	if (bParam7)
	{
		fVar49 = (fVar49 - (Var44.f_0 / 2f));
		bVar41 = false;
		while (bVar41 <= (iParam10 - 1))
		{
			func_87("MPInvPersHud", &(Var0[bVar41 /*4*/]), fVar49, Param1.f_1, Var44.f_0, Var44.f_1, 0f, Param3);
			if (BitTest(uVar43, bVar41))
			{
				fVar49 = (fVar49 - Var46.f_0);
				func_87("MPInvPersHud", "comma", fVar49, Param1.f_1, Var46.f_0, Var46.f_1, 0f, Param3);
			}
			fVar49 = (fVar49 - Var44.f_0);
			bVar41++;
		}
		if (bParam8)
		{
			func_87("MPInvPersHud", "dollar", fVar49, Param1.f_1, Var44.f_0, Var44.f_1, 0f, Param3);
		}
	}
	else
	{
		fVar49 = (fVar49 + (Var44.f_0 / 2f));
		if (bParam8)
		{
			func_87("MPInvPersHud", "dollar", fVar49, Param1.f_1, Var44.f_0, Var44.f_1, 0f, Param3);
			fVar49 = (fVar49 + Var44.f_0);
		}
		bVar41 = (iParam10 - 1);
		while (bVar41 >= 0)
		{
			if (BitTest(uVar43, bVar41))
			{
				func_87("MPInvPersHud", "comma", fVar49, Param1.f_1, Var46.f_0, Var46.f_1, 0f, Param3);
				fVar49 = (fVar49 + Var46.f_0);
			}
			func_87("MPInvPersHud", &(Var0[bVar41 /*4*/]), fVar49, Param1.f_1, Var44.f_0, Var44.f_1, 0f, Param3);
			fVar49 = (fVar49 + Var44.f_0);
			bVar41 = (bVar41 + -1);
		}
	}
}

float func_149(bool bParam0, float fParam1, float fParam2)//Position - 0x8214
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

struct<2> func_150(struct<2> Param0, struct<2> Param2)//Position - 0x822B
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 + Param2.f_0);
	Var0.f_1 = (Param0.f_1 + Param2.f_1);
	return Var0;
}

void func_151()//Position - 0x824B
{
	func_157();
	func_155();
	func_154();
	func_152();
}

void func_152()//Position - 0x8263
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	int iVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<4> Var24;
	
	Var0 = { func_92(0.228125f, 0.059259f) };
	Var2 = { func_92(0.7026035f, 0.139444f) };
	StringCopy(&Var4, "distance", 64);
	if (Local_185.f_0 == -1f)
	{
		StringConCat(&Var4, "_inf", 64);
	}
	func_87("MPInvPersHud", &Var4, Var2.f_0, Var2.f_1, Var0.f_0, Var0.f_1, 0f, Local_185.f_1765);
	iVar20 = SYSTEM::FLOOR((Local_185.f_2872 / 0.164583f));
	if (Local_185.f_2871 == 4)
	{
		func_148(iVar20 * 1000, func_92((Var2.f_0 + 0.026f), (Var2.f_1 + 0.0085f)), Local_185.f_1765.f_32, 1, 0, 1, 99);
		func_148(Local_185.f_2905 * 1000, func_92((Var2.f_0 + 0.098f), (Var2.f_1 + 0.0085f)), Local_185.f_1765.f_32, 1, 0, 1, 99);
	}
	else
	{
		func_148(iVar20 * 1000, func_92((Var2.f_0 + 0.098f), (Var2.f_1 + 0.0085f)), Local_185.f_1765.f_32, 1, 0, 1, 99);
	}
	if (Local_185.f_0 != -1f)
	{
		fVar21 = ((Local_185.f_2872 / 0.164583f) / Local_185.f_0);
		if (fVar21 > 1f)
		{
			fVar21 = 1f;
		}
		fVar22 = func_153(((Var2.f_0 + -0.01945f) - (0.117708f / 2f)), (Var2.f_0 + -0.01945f), fVar21);
		fVar23 = func_153(0f, 0.117708f, fVar21);
		func_87("MPInvPersHud", "distancearrow", (fVar22 + (fVar23 / 2f)), Var2.f_1, 0.00625f, 0.007407f, 0f, Local_185.f_1765);
		Var24.f_3 = 255;
		func_114(&Var24, 154, 255, 0, 125);
		func_95(func_92(fVar22, (Var2.f_1 + 0.0095f)), func_92(fVar23, 0.011111f), Var24);
	}
}

float func_153(float fParam0, float fParam1, float fParam2)//Position - 0x8418
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_154()//Position - 0x842D
{
	struct<2> Var0;
	struct<2> Var2;
	
	Var0 = { func_92(0.161458f, 0.059259f) };
	Var2 = { func_92(0.498437f, 0.139444f) };
	func_87("MPInvPersHud", "score", Var2.f_0, Var2.f_1, Var0.f_0, Var0.f_1, 0f, Local_185.f_1765);
	func_148(Local_185.f_2725, func_92(0.571f, (Var2.f_1 + 0f)), Local_185.f_1765.f_32, 1, 0, 0, 99);
}

void func_155()//Position - 0x849D
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	struct<4> Var5;
	float fVar9;
	
	Var0 = { func_92(0.15f, 0.059259f) };
	Var2 = { func_92(0.333854f, 0.139444f) };
	func_87("MPInvPersHud", "health", Var2.f_0, Var2.f_1, Var0.f_0, Var0.f_1, 0f, Local_185.f_1765);
	if (Local_185.f_2368.f_332 < Local_185.f_2368.f_331)
	{
		Local_185.f_2368.f_332 = func_156((Local_185.f_2368.f_332 + Local_185.f_2877), 0, Local_185.f_2368.f_331);
	}
	else if (Local_185.f_2368.f_332 > Local_185.f_2368.f_331)
	{
		Local_185.f_2368.f_332 = func_156((Local_185.f_2368.f_332 - Local_185.f_2877), Local_185.f_2368.f_331, 20);
	}
	if (!BitTest(Local_185.f_2368.f_333, 0))
	{
		Var5.f_3 = 255;
		if (Local_185.f_2368.f_332 > 1)
		{
			func_114(&Var5, 154, 255, 0, 255);
		}
		else
		{
			func_114(&Var5, 246, 8, 21, 255);
		}
		Var2.f_0 = 0.295312f;
		Var0 = { func_92(0.00625f, 0.02963f) };
		iVar4 = 0;
		while (iVar4 <= (Local_185.f_2368.f_332 - 1))
		{
			fVar9 = ((Var2.f_0 + (IntToFloat(iVar4) * 0.005208f)) + (Var0.f_0 / 2f));
			func_87("MPInvPersHud", "healthsegment", fVar9, Var2.f_1, Var0.f_0, Var0.f_1, 0f, Var5);
			iVar4++;
		}
	}
	else
	{
		func_87("MPInvPersHud", "shield_ui", 0.346875f, Var2.f_1, 0.1125f, 0.044444f, 0f, Local_185.f_1765);
	}
}

int func_156(int iParam0, int iParam1, int iParam2)//Position - 0x8620
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

void func_157()//Position - 0x8645
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	
	Var0 = { func_92(0.066667f, 0.059259f) };
	Var2 = { func_92(0.2166665f, 0.139444f) };
	func_87("MPInvPersHud", "lives", Var2.f_0, Var2.f_1, Var0.f_0, Var0.f_1, 0f, Local_185.f_1765);
	iVar4 = Local_185.f_2368.f_330;
	if (Local_185.f_2368.f_330 < 0)
	{
		iVar4 = 0;
	}
	func_148(iVar4, func_92((Var2.f_0 + 0.003f), (Var2.f_1 + 0f)), Local_185.f_1765.f_32, 0, 0, 0, 2);
}

void func_158()//Position - 0x86CD
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (NETWORK::GET_NETWORK_TIME() > Local_185.f_2812[iVar0 /*4*/] + 1000)
		{
		}
		else
		{
			fVar1 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_185.f_2812[iVar0 /*4*/])) / 1000f);
			fVar2 = Local_185.f_2812[iVar0 /*4*/].f_2;
			if (fVar2 < (0.15625f * 1.1f))
			{
			}
			else
			{
				func_159("IAP_SCORE", fVar2, func_161((Local_185.f_2812[iVar0 /*4*/].f_2.f_1 + 0f), (Local_185.f_2812[iVar0 /*4*/].f_2.f_1 + -0.05f), fVar1, 4), Local_185.f_2812[iVar0 /*4*/].f_1);
			}
		}
		iVar0++;
	}
}

void func_159(char* sParam0, float fParam1, float fParam2, int iParam3)//Position - 0x8777
{
	int iVar0;
	
	iVar0 = func_160();
	HUD::SET_TEXT_SCALE(0.5f, 0.5f);
	HUD::SET_TEXT_COLOUR(255, 255, 255, iVar0);
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	if (iVar0 > 200)
	{
		HUD::SET_TEXT_DROP_SHADOW();
	}
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	if (iParam3 != 2147483647)
	{
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_160()//Position - 0x87D1
{
	return SYSTEM::ROUND((MISC::ABSF(MISC::TAN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))) * 255f));
}

float func_161(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x87F3
{
	var uVar0;
	
	fParam2 = func_164(fParam2, iParam3);
	switch (iParam3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			uVar0 = func_163(fParam0, fParam1, fParam2);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			uVar0 = func_162(fParam0, fParam1, fParam2);
			break;
	}
	return uVar0;
}

float func_162(float fParam0, float fParam1, float fParam2)//Position - 0x8868
{
	return ((fParam0 * (1f - fParam2)) + (fParam1 * fParam2));
}

float func_163(float fParam0, float fParam1, float fParam2)//Position - 0x887D
{
	return (fParam0 + ((fParam1 - fParam0) * fParam2));
}

float func_164(float fParam0, int iParam1)//Position - 0x8890
{
	switch (iParam1)
	{
		case 1:
		case 6:
			fParam0 = SYSTEM::POW(fParam0, 2f);
			break;
		
		case 2:
		case 7:
			fParam0 = (1f - SYSTEM::POW((1f - fParam0), 2f));
			break;
		
		case 3:
		case 8:
			fParam0 = ((-SYSTEM::COS(func_165((3.1415927f * fParam0))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam0 = (SYSTEM::POW(fParam0, 2f) * (3f - (2f * fParam0)));
			break;
	}
	return fParam0;
}

float func_165(float fParam0)//Position - 0x891E
{
	return (fParam0 * 57.29578f);
}

void func_166()//Position - 0x892E
{
	float fVar0;
	struct<4> Var1;
	
	if (!func_177())
	{
		return;
	}
	Var1.f_3 = 255;
	if (!func_121(&(Local_185.f_2892), 650, 0))
	{
		fVar0 = (SYSTEM::TO_FLOAT(func_176(&(Local_185.f_2892), 0, 0)) / 650f);
		Var1 = { func_175(Local_185.f_1765.f_12, Local_185.f_1765, fVar0) };
		Var1.f_3 = SYSTEM::ROUND(func_161(0f, 255f, fVar0, 1));
		func_174(&Var1);
		func_167(fVar0);
	}
	else
	{
		fVar0 = (SYSTEM::TO_FLOAT((func_176(&(Local_185.f_2892), 0, 0) - 650)) / 4000f);
		Var1 = { func_175(Local_185.f_1765, Local_185.f_1765.f_12, fVar0) };
		Var1.f_3 = SYSTEM::ROUND(func_161(255f, 0f, fVar0, 2));
		func_174(&Var1);
		func_167(1f);
	}
}

void func_167(float fParam0)//Position - 0x8A06
{
	struct<2> Var0;
	struct<8> Var2;
	struct<2> Var18[10];
	struct<2> Var39;
	int iVar41;
	struct<2> Var42;
	
	if (fParam0 < 0.8f)
	{
		Local_185.f_2894 = 0;
	}
	else if (Local_185.f_2894 >= func_173(0))
	{
		return;
	}
	Var0 = { func_171(func_172(0), 2f) };
	Var0.f_0 = func_161(0f, Var0.f_0, fParam0, 1);
	Var0.f_1 = func_161(0f, Var0.f_1, fParam0, 1);
	StringCopy(&Var2, func_170(0), 64);
	StringIntConCat(&Var2, Local_185.f_2894 + 1, 64);
	Var18[0 /*2*/] = { func_92((0.5f + (0f * (1f / 1920f))), (0.5f + (-460f * (1f / 1080f)))) };
	Var18[1 /*2*/] = { func_92((0.5f + (120f * (1f / 1920f))), (0.5f + (-120f * (1f / 1080f)))) };
	Var18[2 /*2*/] = { func_92((0.5f + (480f * (1f / 1920f))), (0.5f + (-110f * (1f / 1080f)))) };
	Var18[3 /*2*/] = { func_92((0.5f + (195f * (1f / 1920f))), (0.5f + (90f * (1f / 1080f)))) };
	Var18[4 /*2*/] = { func_92((0.5f + (300f * (1f / 1920f))), (0.5f + (460f * (1f / 1080f)))) };
	Var18[5 /*2*/] = { func_92((0.5f + (0f * (1f / 1920f))), (0.5f + (255f * (1f / 1080f)))) };
	Var18[6 /*2*/] = { func_92((0.5f + (-300f * (1f / 1920f))), (0.5f + (460f * (1f / 1080f)))) };
	Var18[7 /*2*/] = { func_92((0.5f + (-195f * (1f / 1920f))), (0.5f + (90f * (1f / 1080f)))) };
	Var18[8 /*2*/] = { func_92((0.5f + (-480f * (1f / 1920f))), (0.5f + (-110f * (1f / 1080f)))) };
	Var18[9 /*2*/] = { func_92((0.5f + (-120f * (1f / 1920f))), (0.5f + (-120f * (1f / 1080f)))) };
	Var39 = { func_92(0.5f, 0.5f) };
	iVar41 = 0;
	while (iVar41 <= (Var18.f_0 - 1))
	{
		Var42 = { func_169(Var39, Var18[iVar41 /*2*/], fParam0) };
		Var42.f_0 = func_161(Var39.f_0, Var18[iVar41 /*2*/], func_168(fParam0, 0f, 0.75f), 2);
		Var42.f_1 = func_161(Var39.f_1, Var18[iVar41 /*2*/].f_1, func_168(fParam0, 0f, 0.75f), 2);
		func_87("MPInvPersCommon", &Var2, Var42.f_0, Var42.f_1, Var0.f_0, Var0.f_1, 0f, Local_185.f_1765);
		iVar41++;
	}
	if (fParam0 >= 0.8f)
	{
		Local_185.f_2894 = (Local_185.f_2894 + Local_185.f_2875);
	}
}

float func_168(float fParam0, float fParam1, float fParam2)//Position - 0x8D0C
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

struct<2> func_169(struct<2> Param0, struct<2> Param2, float fParam4)//Position - 0x8D33
{
	return func_150(func_171(Param0, (1f - fParam4)), func_171(Param2, fParam4));
}

char* func_170(int iParam0)//Position - 0x8D55
{
	switch (iParam0)
	{
		case 0:
			return "explosion_med";
		
		case 1:
			return "tank_smoke";
		
		default:
	}
	return "INVALID EXPLOSION";
}

struct<2> func_171(struct<2> Param0, float fParam2)//Position - 0x8D82
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 * fParam2);
	Var0.f_1 = (Param0.f_1 * fParam2);
	return Var0;
}

struct<2> func_172(int iParam0)//Position - 0x8DA0
{
	switch (iParam0)
	{
		case 0:
			return func_92((0.066667f / 2f), (0.118519f / 2f));
		
		case 1:
			return func_92(0.020833f, 0.037037f);
		
		default:
	}
	return func_92(-1f, -1f);
}

int func_173(int iParam0)//Position - 0x8DE7
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 1:
			return 7;
		
		default:
	}
	return 0;
}

void func_174(var uParam0)//Position - 0x8E0B
{
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, *uParam0, uParam0->f_1, uParam0->f_2, uParam0->f_3, false);
}

struct<4> func_175(struct<4> Param0, struct<4> Param4, float fParam8)//Position - 0x8E33
{
	Param0.f_0 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((Param4.f_0 - Param0.f_0)) * fParam8) + IntToFloat(Param0.f_0)));
	Param0.f_1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((Param4.f_1 - Param0.f_1)) * fParam8) + IntToFloat(Param0.f_1)));
	Param0.f_2 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((Param4.f_2 - Param0.f_2)) * fParam8) + IntToFloat(Param0.f_2)));
	Param0.f_3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((Param4.f_3 - Param0.f_3)) * fParam8) + IntToFloat(Param0.f_3)));
	return Param0;
}

int func_176(var uParam0, bool bParam1, bool bParam2)//Position - 0x8EAF
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

int func_177()//Position - 0x8EF6
{
	if (func_124(&(Local_185.f_2892)))
	{
		if (!func_121(&(Local_185.f_2892), 4000, 0))
		{
			return 1;
		}
		func_104(&(Local_185.f_2892));
	}
	return 0;
}

void func_178()//Position - 0x8F29
{
	int iVar0;
	int iVar1;
	
	if (!func_110())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			func_87(Local_185.f_2895, "blizzard", ((Local_185.f_2896 + (IntToFloat(iVar0) * 0.25f)) + (0.25f / 2f)), ((Local_185.f_2896.f_1 - (IntToFloat(iVar1) * 0.325926f)) - (0.325926f / 2f)), 0.25f, 0.325926f, 0f, Local_185.f_1765);
			iVar1++;
		}
		iVar0++;
	}
}

void func_179()//Position - 0x8FAF
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var17;
	int iVar19;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_185.f_2730[iVar0 /*4*/].f_1 <= -1)
		{
		}
		else
		{
			StringCopy(&Var1, func_170(Local_185.f_2730[iVar0 /*4*/]), 64);
			Var17 = { func_172(Local_185.f_2730[iVar0 /*4*/]) };
			iVar19 = func_173(Local_185.f_2730[iVar0 /*4*/]);
			StringIntConCat(&Var1, Local_185.f_2730[iVar0 /*4*/].f_1 + 1, 64);
			func_87("MPInvPersCommon", &Var1, Local_185.f_2730[iVar0 /*4*/].f_2, Local_185.f_2730[iVar0 /*4*/].f_2.f_1, Var17.f_0, Var17.f_1, 0f, Local_185.f_1765);
			Local_185.f_2730[iVar0 /*4*/].f_1 = (Local_185.f_2730[iVar0 /*4*/].f_1 + Local_185.f_2875);
			if (Local_185.f_2730[iVar0 /*4*/].f_1 >= iVar19)
			{
				Local_185.f_2730[iVar0 /*4*/].f_1 = -1;
			}
		}
		iVar0++;
	}
}

void func_180()//Position - 0x9086
{
	struct<4> Var0;
	struct<2> Var4;
	struct<8> Var6;
	
	if (Local_185.f_2368 == 3)
	{
		func_191();
		return;
	}
	Var0 = { Local_185.f_1765 };
	if (Local_185.f_2368.f_334 + 750 > NETWORK::GET_NETWORK_TIME())
	{
		func_190(Local_185.f_1765.f_12);
		Var0 = { Local_185.f_1765.f_12 };
	}
	else if (Local_185.f_2368.f_335 + 500 > NETWORK::GET_NETWORK_TIME())
	{
		func_190(Local_185.f_1765.f_8);
		Var0 = { Local_185.f_1765.f_8 };
	}
	if (func_189())
	{
		Var0.f_3 = func_160();
	}
	if (BitTest(Local_185.f_2368.f_333, 0))
	{
		func_188(Var0);
	}
	func_183(Var0);
	Var4 = { func_181() };
	Var6 = { Local_185.f_2368.f_303 };
	StringIntConCat(&Var6, Local_185.f_2368.f_319 + 1, 64);
	func_87(func_16(), &Var6, Local_185.f_2368.f_321, Local_185.f_2368.f_321.f_1, Var4.f_0, Var4.f_1, 0f, Var0);
}

struct<2> func_181()//Position - 0x917D
{
	if (func_182())
	{
		return func_92(0.104167f, 0.144444f);
	}
	return func_92(0.104167f, 0.12963f);
}

bool func_182()//Position - 0x91AE
{
	return ((Local_185.f_2368 == 1 || Local_185.f_2368 == 2) || Local_185.f_2368 == 4);
}

void func_183(struct<4> Param0)//Position - 0x91D7
{
	float fVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<16> Var5;
	
	fVar0 = func_149(func_182(), -0.007407f, 0f);
	Var1 = { func_92((Local_185.f_2368.f_321 + 0.0075f), ((Local_185.f_2368.f_321.f_1 + -0.055f) + fVar0)) };
	Var1.f_0 = (((Var1.f_0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	Var3 = { func_187(Var1, func_150(Var1, func_92(0.061f, 0f)), (IntToFloat(Local_185.f_2368.f_325) * -15f)) };
	Var5 = { func_186() };
	func_184(func_16(), &Var5, Var3.f_0, Var3.f_1, 0.104167f, 0.059259f, (IntToFloat(Local_185.f_2368.f_325) * -15f), Param0);
}

void func_184(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)//Position - 0x9299
{
	GRAPHICS::DRAW_SPRITE_ARX(sParam0, sParam1, func_185(fParam2), fParam3, (fParam4 * fLocal_160), fParam5, fParam6, Param7.f_0, Param7.f_1, Param7.f_2, Param7.f_3, 0, 1);
}

float func_185(float fParam0)//Position - 0x92CA
{
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_159));
	return fParam0;
}

struct<16> func_186()//Position - 0x92E7
{
	struct<16> Var0;
	
	switch (Local_185.f_2368.f_2)
	{
		case 0:
			StringCopy(&Var0, "turret_fire", 64);
			StringIntConCat(&Var0, Local_185.f_2368.f_320 + 1, 64);
			break;
		
		case 1:
			StringCopy(&Var0, "turret_flame", 64);
			if (Local_185.f_2368.f_1 == 1)
			{
				StringConCat(&Var0, "2", 64);
			}
			else
			{
				StringConCat(&Var0, "1", 64);
			}
			break;
		
		case 2:
			StringCopy(&Var0, "turret_rocket", 64);
			StringIntConCat(&Var0, Local_185.f_2368.f_320 + 1, 64);
			break;
		
		case 3:
			StringConCat(&Var0, "turret_beam", 64);
			if (Local_185.f_2368.f_1 == 1)
			{
				StringConCat(&Var0, "_fire", 64);
				StringIntConCat(&Var0, Local_185.f_2368.f_320 + 1, 64);
			}
			break;
	}
	return Var0;
}

struct<2> func_187(struct<2> Param0, struct<2> Param2, float fParam4)//Position - 0x939F
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar2 = SYSTEM::SIN(fParam4);
	fVar3 = SYSTEM::COS(fParam4);
	Var0.f_0 = (Param2.f_0 - Param0.f_0);
	Var0.f_1 = (Param2.f_1 - Param0.f_1);
	fVar4 = ((Var0.f_0 * fVar3) - (Var0.f_1 * fVar2));
	fVar5 = ((Var0.f_0 * fVar2) + (Var0.f_1 * fVar3));
	Var0.f_0 = (fVar4 + Param0.f_0);
	Var0.f_1 = (fVar5 + Param0.f_1);
	return Var0;
}

void func_188(struct<4> Param0)//Position - 0x93FF
{
	struct<8> Var0;
	float fVar16;
	
	StringCopy(&Var0, "tank_shield", 64);
	StringIntConCat(&Var0, Local_185.f_2368.f_319 + 1, 64);
	fVar16 = func_149(func_182(), -0.03575f, -0.025222f);
	func_87("MPInvPersCommon", &Var0, (Local_185.f_2368.f_321 + 0f), (Local_185.f_2368.f_321.f_1 + fVar16), 0.110417f, 0.125926f, 0f, Param0);
}

bool func_189()//Position - 0x9461
{
	return ((Local_185.f_2368.f_334 + 750 > NETWORK::GET_NETWORK_TIME() || Local_185.f_2368.f_335 + 500 > NETWORK::GET_NETWORK_TIME()) || Local_185.f_2368.f_337 + 2000 > NETWORK::GET_NETWORK_TIME());
}

void func_190(struct<4> Param0)//Position - 0x94A5
{
	Param0.f_3 = SYSTEM::ROUND((MISC::ABSF(MISC::TAN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))) * 50f)) + 150;
	func_87("MpInvPersHud", "border", (0.5f + 0.002604167f), 0.5f, 1f, 1f, 0f, Param0);
}

void func_191()//Position - 0x94F0
{
	struct<8> Var0;
	
	if (Local_185.f_2368.f_319 >= 16)
	{
		return;
	}
	func_190(Local_185.f_1765.f_12);
	StringCopy(&Var0, "tank_death", 64);
	StringIntConCat(&Var0, Local_185.f_2368.f_319 + 1, 64);
	func_87(func_16(), &Var0, Local_185.f_2368.f_321, (Local_185.f_2368.f_321.f_1 + -0.035185f), 0.166667f, 0.2f, 0f, Local_185.f_1765);
}

void func_192()//Position - 0x955F
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var17;
	float fVar19;
	float fVar20;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_185.f_2368.f_3[iVar0 /*14*/].f_11 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() > (Local_185.f_2368.f_3[iVar0 /*14*/].f_11 + Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2))
		{
		}
		else if (Local_185.f_2368.f_3[iVar0 /*14*/] == 5)
		{
			func_193(iVar0);
		}
		else
		{
			StringCopy(&Var1, Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/], 64);
			if (Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1 > 0)
			{
				StringIntConCat(&Var1, Local_185.f_2368.f_3[iVar0 /*14*/].f_12 + 1, 64);
			}
			Var17 = { Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/].f_3 };
			fVar19 = Local_185.f_2368.f_3[iVar0 /*14*/].f_9;
			if (Local_185.f_2368.f_3[iVar0 /*14*/] == 3)
			{
				fVar20 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_185.f_2368.f_3[iVar0 /*14*/].f_11)) / (IntToFloat(Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2) * 0.75f));
				if (fVar20 > 1f)
				{
					fVar20 = 1f;
				}
				Var17.f_0 = func_161((Var17.f_0 / 2f), Var17.f_0, fVar20, 1);
				Var17.f_1 = func_161((Var17.f_1 / 2f), Var17.f_1, fVar20, 1);
			}
			func_87("MPInvPersCommon", &Var1, Local_185.f_2368.f_3[iVar0 /*14*/].f_5, Local_185.f_2368.f_3[iVar0 /*14*/].f_5.f_1, Var17.f_0, Var17.f_1, fVar19, Local_185.f_1765);
		}
		iVar0++;
	}
}

void func_193(int iParam0)//Position - 0x96E6
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	float fVar9;
	struct<2> Var10;
	float fVar12;
	float fVar13;
	struct<4> Var14;
	struct<8> Var18;
	
	Var0 = { Local_185.f_1734[Local_185.f_2368.f_3[iParam0 /*14*/] /*5*/].f_3 };
	Var2 = { func_197(Local_185.f_2368.f_3[iParam0 /*14*/].f_1) };
	Var4 = { func_197(Local_185.f_2368.f_3[iParam0 /*14*/].f_3) };
	Var6 = { func_91(func_196(func_150(Var2, Var4), 2f)) };
	if (!func_195(Local_185.f_2368.f_3[iParam0 /*14*/].f_9, -0.0001f, 0.0001f, 0))
	{
		fVar8 = SYSTEM::SIN(Local_185.f_2368.f_3[iParam0 /*14*/].f_9);
		fVar9 = SYSTEM::COS(Local_185.f_2368.f_3[iParam0 /*14*/].f_9);
		Var10 = { func_194(Var2, Var4, -fVar8, fVar9) };
	}
	else
	{
		Var10 = { Var4 };
	}
	Var10 = { func_91(Var10) };
	Var6.f_0 = (((Var6.f_0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	Var10.f_0 = (((Var10.f_0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fVar12 = (((Local_185.f_2368.f_3[iParam0 /*14*/].f_1 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fVar13 = MISC::ABSF((Var10.f_0 - fVar12));
	Var14 = { Local_185.f_1765.f_16 };
	Var14.f_3 = SYSTEM::ROUND((MISC::ABSF(((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.1f) % 1f)) * 100f)) + 155;
	func_184("MPInvPersCommon", "Beam_Glow_Tapered", Var6.f_0, Var6.f_1, (Var0.f_1 / 2f), fVar13, (Local_185.f_2368.f_3[iParam0 /*14*/].f_9 + 90f), Var14);
	Var14.f_3 = SYSTEM::ROUND((MISC::ABSF(MISC::TAN((SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() + Local_185.f_2368.f_3[iParam0 /*14*/].f_11)) * 0.5f))) * 180f)) + 75;
	func_184("MPInvPersCommon", "beam_middle", Var6.f_0, Var6.f_1, Var0.f_1, fVar13, (Local_185.f_2368.f_3[iParam0 /*14*/].f_9 + 90f), Var14);
	Var14 = { Local_185.f_1765 };
	func_114(&Var14, 255, 255, 255, 255);
	Var14.f_3 = SYSTEM::ROUND((MISC::ABSF(SYSTEM::SIN(SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() + Local_185.f_2368.f_3[iParam0 /*14*/].f_11)))) * 155f)) + 100;
	func_184("MPInvPersCommon", "beam_top", Var6.f_0, Var6.f_1, Var0.f_1, fVar13, (Local_185.f_2368.f_3[iParam0 /*14*/].f_9 + 90f), Var14);
	Var14 = { Local_185.f_1765 };
	if ((Local_185.f_2368.f_3[iParam0 /*14*/].f_3 > 0.15625f && Local_185.f_2368.f_3[iParam0 /*14*/].f_3 < (1f - 0.15625f)) && Local_185.f_2368.f_3[iParam0 /*14*/].f_3.f_1 > 0f)
	{
		StringCopy(&Var18, Local_185.f_1734[Local_185.f_2368.f_3[iParam0 /*14*/] /*5*/], 64);
		if (Local_185.f_1734[Local_185.f_2368.f_3[iParam0 /*14*/] /*5*/].f_1 > 0)
		{
			StringIntConCat(&Var18, Local_185.f_2368.f_3[iParam0 /*14*/].f_12 + 1, 64);
		}
		func_87("MPInvPersCommon", &Var18, Local_185.f_2368.f_3[iParam0 /*14*/].f_3, Local_185.f_2368.f_3[iParam0 /*14*/].f_3.f_1, Var0.f_0, Var0.f_1, 0f, Var14);
	}
}

struct<2> func_194(struct<2> Param0, struct<2> Param2, float fParam4, float fParam5)//Position - 0x9A2D
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	
	Var0.f_0 = (Param2.f_0 - Param0.f_0);
	Var0.f_1 = (Param2.f_1 - Param0.f_1);
	fVar2 = ((Var0.f_0 * fParam5) - (Var0.f_1 * fParam4));
	fVar3 = ((Var0.f_0 * fParam4) + (Var0.f_1 * fParam5));
	Var0.f_0 = (fVar2 + Param0.f_0);
	Var0.f_1 = (fVar3 + Param0.f_1);
	return Var0;
}

bool func_195(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x9A7D
{
	if (bParam3)
	{
		return (fParam0 >= fParam1 && fParam0 <= fParam2);
	}
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

struct<2> func_196(struct<2> Param0, float fParam2)//Position - 0x9AAB
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 / fParam2);
	Var0.f_1 = (Param0.f_1 / fParam2);
	return Var0;
}

struct<2> func_197(struct<2> Param0)//Position - 0x9AC9
{
	return func_92((Param0.f_0 * 1920f), (Param0.f_1 * 1080f));
}

void func_198()//Position - 0x9AE7
{
	float fVar0;
	int iVar1;
	char* sVar2;
	struct<2> Var3;
	struct<4> Var5;
	struct<8> Var9;
	float fVar25;
	struct<2> Var26;
	struct<2> Var28;
	
	fVar0 = SYSTEM::SIN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.5f));
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		if (Local_185.f_1801[iVar1 /*14*/] == -1)
		{
		}
		else if (Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/] == 4)
		{
		}
		else if (Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/] == 3)
		{
			if (Local_185.f_1801[iVar1 /*14*/].f_11 & 1 == 0)
			{
			}
			else if (Local_185.f_1801[iVar1 /*14*/].f_1 >= func_210(iVar1))
			{
			}
			else if (!func_208(iVar1))
			{
			}
			else
			{
				sVar2 = func_207(iVar1);
				Var3 = { func_205(iVar1) };
				Var5 = { func_203(iVar1) };
				StringCopy(&Var9, func_202(iVar1), 64);
				if (Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/] == 6)
				{
					func_201(iVar1);
				}
				else if (func_210(iVar1) > 0)
				{
					StringIntConCat(&Var9, Local_185.f_1801[iVar1 /*14*/].f_1 + 1, 64);
				}
				fVar25 = 0f;
				Var26 = { Local_185.f_1801[iVar1 /*14*/].f_3 };
				if (Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/] == 5 && Local_185.f_1801[iVar1 /*14*/].f_10 == 2)
				{
					fVar25 = (fVar0 * 20f);
					Var28 = { Var26 };
					Var28.f_1 = (Var28.f_1 - ((Var3.f_1 / 2f) + (0.037037f / 2f)));
					Var28 = { func_197(Var28) };
					Var28 = { func_187(func_197(Var26), Var28, fVar25) };
					Var28 = { func_91(Var28) };
					func_87(sVar2, "parachute", Var28.f_0, Var28.f_1, 0.020833f, 0.037037f, fVar25, Var5);
				}
				if (Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/] == 3 && Local_185.f_1801[iVar1 /*14*/].f_11 & 1 != 0)
				{
					Var26 = { func_150(Var26, func_199()) };
				}
				func_87(sVar2, &Var9, Var26.f_0, Var26.f_1, Var3.f_0, Var3.f_1, fVar25, Var5);
			}
			iVar1++;
		}

struct<2> func_199()//Position - 0x9CEC
{
	switch (func_200())
	{
		case 8:
			return func_92(0f, 0f);
		
		case 9:
			return func_92(0f, 0f);
		
		case 10:
			return func_92(-0.011979f, 0f);
		
		case 11:
			return func_92(0f, 0f);
		
		case 12:
			return func_92(0f, 0f);
		
		default:
	}
	return func_92(0f, 0f);
}

int func_200()//Position - 0x9D52
{
	return (8 + Local_185.f_2871);
}

void func_201(int iParam0)//Position - 0x9D62
{
	struct<8> Var0;
	struct<2> Var16;
	
	if (Local_185.f_1801[iParam0 /*14*/].f_8 == -2147483647)
	{
		return;
	}
	StringCopy(&Var0, "capture_flag", 64);
	if (func_210(iParam0) > 0)
	{
		StringIntConCat(&Var0, Local_185.f_1801[iParam0 /*14*/].f_1 + 1, 64);
	}
	Var16 = { func_205(iParam0) };
	func_87("MpInvPersCommon", &Var0, (Local_185.f_1801[iParam0 /*14*/].f_3 + (0.045833f / 2f)), ((Local_185.f_1801[iParam0 /*14*/].f_3.f_1 - (Var16.f_1 / 2f)) - Local_185.f_1801[iParam0 /*14*/].f_5.f_1), 0.045833f, 0.088889f, 0f, Local_185.f_1765);
}

char* func_202(int iParam0)//Position - 0x9DFD
{
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 3 && Local_185.f_1801[iParam0 /*14*/].f_11 & 1 != 0)
	{
		return "pit_collapse";
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 5)
		{
			return "crate_open";
		}
		return "explosion_med";
	}
	switch (Local_185.f_1801[iParam0 /*14*/].f_10)
	{
		case 1:
			return Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_26;
		
		case 0:
		case 2:
			return Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_24;
		
		default:
	}
	return "INVALID STATE";
}

struct<4> func_203(int iParam0)//Position - 0x9EB6
{
	struct<4> Var0;
	
	if (Local_185.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 5)
		{
			return func_204(Local_185.f_1801[iParam0 /*14*/]);
		}
		return Local_185.f_1765;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_8 + 500 > NETWORK::GET_NETWORK_TIME())
	{
		Var0.f_3 = 255;
		if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 6)
		{
			func_114(&Var0, 0, func_160(), 0, 255);
		}
		else
		{
			func_114(&Var0, 255, 0, 0, func_160());
		}
		return Var0;
	}
	return Local_185.f_1765;
}

struct<4> func_204(int iParam0)//Position - 0x9F5B
{
	struct<4> Var0;
	
	Var0.f_3 = 255;
	switch (iParam0)
	{
		case 18:
			func_114(&Var0, 255, 139, 63, 255);
			break;
		
		case 19:
			func_114(&Var0, 139, 0, 255, 255);
			break;
		
		case 20:
		case 21:
		case 22:
			func_114(&Var0, 154, 255, 0, 255);
			break;
		
		case 25:
			func_114(&Var0, 24, 203, 247, 255);
			break;
		
		case 24:
			func_114(&Var0, 205, 0, 0, 255);
			break;
		
		case 28:
			func_114(&Var0, 244, 11, 225, 255);
			break;
		
		case 23:
			func_114(&Var0, 94, 250, 255, 255);
			break;
		
		case 26:
			func_114(&Var0, 205, 0, 0, 255);
			break;
		
		case 27:
			func_114(&Var0, 107, 150, 255, 255);
			break;
	}
	return Var0;
}

struct<2> func_205(int iParam0)//Position - 0xA041
{
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 3 && Local_185.f_1801[iParam0 /*14*/].f_11 & 1 != 0)
	{
		return func_206();
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 5)
		{
			return func_92(0.085417f, 0.092593f);
		}
		return func_92(0.066667f, 0.118519f);
	}
	return func_92(Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_22, Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_22.f_1);
}

struct<2> func_206()//Position - 0xA0E8
{
	switch (func_200())
	{
		case 8:
			return func_92(0f, 0f);
		
		case 9:
			return func_92(0f, 0f);
		
		case 10:
			return func_92(0.177083f, 0.211111f);
		
		case 11:
			return func_92(0f, 0f);
		
		case 12:
			return func_92(0f, 0f);
		
		default:
	}
	return func_92(0f, 0f);
}

var func_207(int iParam0)//Position - 0xA152
{
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 3 && Local_185.f_1801[iParam0 /*14*/].f_11 & 1 != 0)
	{
		return Local_185.f_2895;
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 5 || Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 6)
	{
		return "MpInvPersCommon";
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		return "MPInvPersCommon";
	}
	return Local_185.f_2895;
}

int func_208(int iParam0)//Position - 0xA1D9
{
	if (Local_185.f_1801[iParam0 /*14*/].f_7 == 0 && Local_185.f_1801[iParam0 /*14*/].f_1 > func_210(iParam0))
	{
		return 0;
	}
	if (func_209(Local_185.f_1801[iParam0 /*14*/].f_3, func_205(iParam0)))
	{
		return 0;
	}
	return 1;
}

int func_209(struct<2> Param0, struct<2> Param2)//Position - 0xA22B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = (Param0.f_0 - (Param2.f_0 / 2f));
	if (fVar0 > (1f - 0.15625f))
	{
		return 1;
	}
	fVar1 = (Param0.f_0 + (Param2.f_0 / 2f));
	if (fVar1 < 0.15625f)
	{
		return 1;
	}
	fVar2 = (Param0.f_1 - (Param2.f_1 / 2f));
	if (fVar2 > (1f - 0.06944444f))
	{
		return 1;
	}
	fVar3 = (Param0.f_1 + (Param2.f_1 / 2f));
	if (fVar3 < (0f + 0.06944444f))
	{
		return 1;
	}
	return 0;
}

int func_210(int iParam0)//Position - 0xA2A2
{
	if (Local_185.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 5)
		{
			return 3;
		}
		return 6;
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 3 && Local_185.f_1801[iParam0 /*14*/].f_11 & 1 != 0)
	{
		return 4;
	}
	switch (Local_185.f_1801[iParam0 /*14*/].f_10)
	{
		case 1:
			return Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_27;
		
		case 0:
		case 2:
			return Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_25;
		
		default:
	}
	return 0;
}

void func_211()//Position - 0xA34F
{
	int iVar0;
	float fVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	func_174(&(Local_185.f_749));
	iVar0 = 0;
	while (iVar0 <= (Local_185.f_725 - 1))
	{
		fVar1 = (Local_185.f_726 * IntToFloat(iVar0));
		func_87(Local_185.f_2895, Local_185.f_724, (Local_185.f_2340 + fVar1), (Local_185.f_728 + 0f), Local_185.f_726, Local_185.f_726.f_1, 0f, Local_185.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_185.f_730 - 1))
	{
		fVar1 = (Local_185.f_731 * IntToFloat(iVar0));
		func_87(Local_185.f_2895, Local_185.f_729, (Local_185.f_2340.f_1 + fVar1), (Local_185.f_733 + 0f), Local_185.f_731, Local_185.f_731.f_1, 0f, Local_185.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_185.f_735 - 1))
	{
		fVar1 = (Local_185.f_736 * IntToFloat(iVar0));
		func_87(Local_185.f_2895, Local_185.f_734, (Local_185.f_2340.f_2 + fVar1), (Local_185.f_738 + 0f), Local_185.f_736, Local_185.f_736.f_1, 0f, Local_185.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_185.f_740 - 1))
	{
		fVar1 = (Local_185.f_741 * IntToFloat(iVar0));
		func_87(Local_185.f_2895, Local_185.f_739, (Local_185.f_2340.f_3 + fVar1), (Local_185.f_743 + 0f), Local_185.f_741, Local_185.f_741.f_1, 0f, Local_185.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_185.f_745 - 1))
	{
		if (Local_185.f_2340.f_12[iVar0] == 1)
		{
			Var2 = { Local_185.f_753[func_200() /*28*/].f_22 };
			if (func_209(func_92(Local_185.f_2340.f_4[iVar0], Local_185.f_748), Var2))
			{
			}
			else
			{
				func_87(Local_185.f_2895, Local_185.f_753[func_200() /*28*/].f_24, Local_185.f_2340.f_4[iVar0], Local_185.f_753[func_200() /*28*/].f_2, Var2.f_0, Var2.f_1, 0f, Local_185.f_1765);
				Jump @720; //curOff = 499
				if (Local_185.f_2340.f_12[iVar0] == 2)
				{
					Var4 = { Local_185.f_753[func_212() /*28*/].f_22 };
					if (func_209(func_92(Local_185.f_2340.f_4[iVar0], Local_185.f_748), Var4))
					{
					}
					else
					{
						func_87(Local_185.f_2895, Local_185.f_753[func_212() /*28*/].f_24, Local_185.f_2340.f_4[iVar0], Local_185.f_753[func_212() /*28*/].f_2, Var4.f_0, Var4.f_1, 0f, Local_185.f_1765);
						Jump @720; //curOff = 630
						if (func_209(func_92(Local_185.f_2340.f_4[iVar0], Local_185.f_748), Local_185.f_746))
						{
						}
						else
						{
							func_87(Local_185.f_2895, Local_185.f_744, Local_185.f_2340.f_4[iVar0], Local_185.f_748, Local_185.f_746, Local_185.f_746.f_1, 0f, Local_185.f_1765);
						}
					}
					iVar0++;
				}

int func_212()//Position - 0xA62B
{
	return (13 + Local_185.f_2871);
}

void func_213()//Position - 0xA63B
{
	struct<2> Var0;
	
	if (Local_185.f_2901 == -2147483647)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_185.f_2903))
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_185.f_2901)
	{
		func_9();
		return;
	}
	MISC::SET_BIT(&(Local_185.f_2368.f_333), 2);
	StringCopy(&Var0, Local_185.f_2903, 16);
	if (Local_185.f_2902 == -1)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			StringConCat(&Var0, "_PC", 16);
		}
	}
	else
	{
		if (func_68(&Var0))
		{
			return;
		}
		func_214(&Var0, Local_185.f_2902);
		return;
	}
	if (func_68(&Var0))
	{
		return;
	}
	func_66(&Var0);
}

void func_214(char* sParam0, int iParam1)//Position - 0xA6D3
{
	Local_185.f_2947 = MISC::GET_HASH_KEY(sParam0);
	func_215(sParam0, iParam1, -1);
}

void func_215(char* sParam0, int iParam1, int iParam2)//Position - 0xA6EF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

void func_216()//Position - 0xA70C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_48();
	iVar1 = (iVar0 - Local_185.f_2725);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f));
	iVar3 = (iVar2 * func_218(Local_185.f_2870 == 9, 12, 4));
	if (Local_185.f_2870 == 9 && !BitTest(Local_185.f_2368.f_333, 6))
	{
		iVar3 *= 5;
	}
	if (iVar3 > iVar1)
	{
		iVar3 = iVar1;
	}
	Local_185.f_2725 = (Local_185.f_2725 + iVar3);
	func_217();
}

void func_217()//Position - 0xA78E
{
	if (BitTest(Local_185.f_2904, 5))
	{
		return;
	}
	if (Local_185.f_2725 < Global_262145.f_26803 /* Tunable: IVC_IAP_SCORE_CHALLENGE_REQUIREMENT */)
	{
		return;
	}
	func_132(252, 1, -1, 1);
	func_131(27188, 1, -1);
	MISC::SET_BIT(&(Local_185.f_2904), 5);
	MISC::SET_BIT(&(Local_185.f_2904), 11);
	func_130();
	func_129("IAP_CH_4", Global_262145.f_26803 /* Tunable: IVC_IAP_SCORE_CHALLENGE_REQUIREMENT */, 7500);
}

int func_218(bool bParam0, int iParam1, int iParam2)//Position - 0xA7F2
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_219()//Position - 0xA809
{
	if (!func_110())
	{
		return;
	}
	Local_185.f_2896 = (Local_185.f_2896 + ((-0.25f / 4f) * SYSTEM::TIMESTEP()));
	Local_185.f_2896.f_1 = (Local_185.f_2896.f_1 + ((0.325926f / 4f) * SYSTEM::TIMESTEP()));
	if (Local_185.f_2896 < (0.15625f - 0.25f) || Local_185.f_2896.f_1 > (1f + 0.325926f))
	{
		Local_185.f_2896 = (Local_185.f_2896 + 0.25f);
		Local_185.f_2896.f_1 = (Local_185.f_2896.f_1 - 0.325926f);
	}
}

void func_220()//Position - 0xA89B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (NETWORK::GET_NETWORK_TIME() > Local_185.f_2812[iVar0 /*4*/] + 1000)
		{
		}
		else if (Local_185.f_2870 == 7)
		{
			Local_185.f_2812[iVar0 /*4*/].f_2 = func_139(Local_185.f_2812[iVar0 /*4*/].f_2, -0.15f);
		}
		iVar0++;
	}
}

void func_221()//Position - 0xA8F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_185.f_2730[iVar0 /*4*/].f_1 <= -1)
		{
		}
		else
		{
			Local_185.f_2730[iVar0 /*4*/].f_2 = func_139(Local_185.f_2730[iVar0 /*4*/].f_2, -0.15f);
		}
		iVar0++;
	}
}

void func_222()//Position - 0xA940
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<4> Var6;
	float fVar10;
	struct<2> Var11;
	float fVar13;
	
	Var6.f_3 = 255;
	func_114(&Var6, 255, 255, 255, 255);
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_185.f_2368.f_3[iVar0 /*14*/] == 5)
		{
			if (Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1 > 0)
			{
				Local_185.f_2368.f_3[iVar0 /*14*/].f_12 = (Local_185.f_2368.f_3[iVar0 /*14*/].f_12 + Local_185.f_2875);
				if (Local_185.f_2368.f_3[iVar0 /*14*/].f_12 >= Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1)
				{
					Local_185.f_2368.f_3[iVar0 /*14*/].f_12 = 0;
				}
			}
		}
		else if (Local_185.f_2368.f_3[iVar0 /*14*/].f_11 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() > (Local_185.f_2368.f_3[iVar0 /*14*/].f_11 + Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2))
		{
			if (Local_185.f_2368.f_3[iVar0 /*14*/] == 4)
			{
				Local_185.f_2368.f_3[iVar0 /*14*/].f_11 = -2147483647;
				if (!func_209(Local_185.f_2368.f_3[iVar0 /*14*/].f_5, func_92(0.0001f, 0.0001f)))
				{
					func_232(func_234(Local_185.f_2368.f_3[iVar0 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_185.f_2368.f_3[iVar0 /*14*/].f_5);
					func_231(Local_185.f_2368.f_3[iVar0 /*14*/].f_5, 0);
				}
			}
		}
		else
		{
			fVar10 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_185.f_2368.f_3[iVar0 /*14*/].f_11)) / IntToFloat(Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2));
			Local_185.f_2368.f_3[iVar0 /*14*/].f_7 = { Local_185.f_2368.f_3[iVar0 /*14*/].f_5 };
			if (Local_185.f_2368.f_3[iVar0 /*14*/] == 4)
			{
				iVar1 = 0;
				while (iVar1 <= 13)
				{
					if (Local_185.f_1801[iVar1 /*14*/] == -1)
					{
					}
					else if ((((Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/] == 5 || Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/] == 3) || Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/] == 4) || Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/] == 6) || Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/] == 8)
					{
					}
					else if (Local_185.f_1801[iVar1 /*14*/].f_7 == 0)
					{
					}
					else if (func_209(Local_185.f_1801[iVar1 /*14*/].f_3, Local_185.f_753[Local_185.f_1801[iVar1 /*14*/] /*28*/].f_22))
					{
					}
					else
					{
						Var11 = { Local_185.f_1801[iVar1 /*14*/].f_3 };
						if (func_230(Var11, Local_185.f_2368.f_3[iVar0 /*14*/].f_5) < SYSTEM::POW(0.35f, 2f))
						{
							Local_185.f_2368.f_3[iVar0 /*14*/].f_3 = { Var11 };
						}
						else
						{
							iVar1++;
						}
						Var4 = { func_197(Local_185.f_2368.f_3[iVar0 /*14*/].f_3) };
						Var2 = { func_197(Local_185.f_2368.f_3[iVar0 /*14*/].f_5) };
						Local_185.f_2368.f_3[iVar0 /*14*/].f_10 = MISC::ATAN2((Var4.f_1 - Var2.f_1), (Var4.f_0 - Var2.f_0));
						Local_185.f_2368.f_3[iVar0 /*14*/].f_10 = (Local_185.f_2368.f_3[iVar0 /*14*/].f_10 + (SYSTEM::SIN(SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_185.f_2368.f_3[iVar0 /*14*/].f_11))) * 30f));
						if (Local_185.f_2368.f_3[iVar0 /*14*/].f_9 > Local_185.f_2368.f_3[iVar0 /*14*/].f_10)
						{
							Local_185.f_2368.f_3[iVar0 /*14*/].f_9 = func_168((Local_185.f_2368.f_3[iVar0 /*14*/].f_9 - (180f * SYSTEM::TIMESTEP())), Local_185.f_2368.f_3[iVar0 /*14*/].f_10, Local_185.f_2368.f_3[iVar0 /*14*/].f_9);
						}
						else if (Local_185.f_2368.f_3[iVar0 /*14*/].f_10 > Local_185.f_2368.f_3[iVar0 /*14*/].f_9)
						{
							Local_185.f_2368.f_3[iVar0 /*14*/].f_9 = func_168((Local_185.f_2368.f_3[iVar0 /*14*/].f_9 + (180f * SYSTEM::TIMESTEP())), Local_185.f_2368.f_3[iVar0 /*14*/].f_9, Local_185.f_2368.f_3[iVar0 /*14*/].f_10);
						}
						Var2 = { func_91(func_187(Var2, func_150(Var2, func_92(1920f, 0f)), Local_185.f_2368.f_3[iVar0 /*14*/].f_9)) };
						Local_185.f_2368.f_3[iVar0 /*14*/].f_5 = { func_229(Local_185.f_2368.f_3[iVar0 /*14*/].f_5, Var2, 0.375f) };
						Jump @1218; //curOff = 1164
						Local_185.f_2368.f_3[iVar0 /*14*/].f_5 = { func_169(Local_185.f_2368.f_3[iVar0 /*14*/].f_1, Local_185.f_2368.f_3[iVar0 /*14*/].f_3, fVar10) };
						if (Local_185.f_2368.f_3[iVar0 /*14*/].f_3.f_1 >= Local_185.f_2368.f_3[iVar0 /*14*/].f_1.f_1)
						{
							fVar13 = func_223(Local_185.f_2368.f_3[iVar0 /*14*/].f_5, 0);
							if (Local_185.f_2368.f_3[iVar0 /*14*/].f_5.f_1 > fVar13)
							{
								Local_185.f_2368.f_3[iVar0 /*14*/].f_11 = -2147483647;
								if (!func_209(Local_185.f_2368.f_3[iVar0 /*14*/].f_5, func_92(0.0001f, 0.0001f)))
								{
									func_232(func_234(Local_185.f_2368.f_3[iVar0 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_185.f_2368.f_3[iVar0 /*14*/].f_5);
									func_231(Local_185.f_2368.f_3[iVar0 /*14*/].f_5, 0);
								}
							}
						}
						if (Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1 > 0)
						{
							Local_185.f_2368.f_3[iVar0 /*14*/].f_12 = (Local_185.f_2368.f_3[iVar0 /*14*/].f_12 + Local_185.f_2875);
							if (Local_185.f_2368.f_3[iVar0 /*14*/].f_12 >= Local_185.f_1734[Local_185.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1)
							{
								Local_185.f_2368.f_3[iVar0 /*14*/].f_12 = 0;
							}
						}
						iVar0++;
					}

float func_223(float fParam0, int iParam1)//Position - 0xAF34
{
	float fVar0;
	int iVar1;
	
	fVar0 = (Local_185.f_2340.f_4[0] - (func_227(0) / 2f));
	iVar1 = 0;
	while (iVar1 <= (Local_185.f_745 - 1))
	{
		fVar0 = (fVar0 + func_227(iVar1));
		if (fParam0 < fVar0)
		{
			if (Local_185.f_2340.f_12[iVar1] == 1 && (iParam1 || Local_185.f_1801[Local_185.f_2340.f_20[iVar1] /*14*/].f_11 & 1 == 0))
			{
				if (fParam0 > ((fVar0 - func_226()) + func_225()) && fParam0 < (fVar0 - func_224()))
				{
					return 1.2f;
				}
			}
			if (Local_185.f_2340.f_12[iVar1] == 2)
			{
				return (((1f - 0.06944444f) - Local_185.f_753[func_212() /*28*/].f_22.f_1) + 0.03240715f);
			}
			return Local_185.f_3;
		}
		iVar1++;
	}
	return Local_185.f_3;
}

float func_224()//Position - 0xB013
{
	switch (func_200())
	{
		case 8:
			return 0.096354164f;
		
		case 9:
			return 0.0390625f;
		
		case 10:
			return 0.0765625f;
		
		case 11:
			return 0.058333334f;
		
		case 12:
			return 0.053125f;
		
		default:
	}
	return 0f;
}

float func_225()//Position - 0xB06B
{
	switch (func_200())
	{
		case 8:
			return 0.109375f;
		
		case 9:
			return 0.036458332f;
		
		case 10:
			return 0.06822917f;
		
		case 11:
			return 0.030729167f;
		
		case 12:
			return 0.043229166f;
		
		default:
	}
	return 0f;
}

float func_226()//Position - 0xB0C3
{
	return Local_185.f_753[func_200() /*28*/].f_22;
}

float func_227(int iParam0)//Position - 0xB0D8
{
	if (Local_185.f_2340.f_12[iParam0] == 1)
	{
		return func_226();
	}
	if (Local_185.f_2340.f_12[iParam0] == 2)
	{
		return func_228();
	}
	return Local_185.f_746;
}

var func_228()//Position - 0xB111
{
	return Local_185.f_753[func_212() /*28*/].f_22;
}

struct<2> func_229(struct<2> Param0, struct<2> Param2, float fParam4)//Position - 0xB126
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar2 = (fParam4 * 1920f);
	fVar2 = (0f + (fVar2 * SYSTEM::TIMESTEP()));
	fVar3 = (fParam4 * 1080f);
	fVar3 = (0f + (fVar3 * SYSTEM::TIMESTEP()));
	Param0 = { func_197(Param0) };
	Param2 = { func_197(Param2) };
	fVar4 = SYSTEM::SQRT((SYSTEM::POW((Param2.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param2.f_1 - Param0.f_1), 2f)));
	fVar5 = (Param2.f_0 - Param0.f_0);
	fVar6 = (Param2.f_1 - Param0.f_1);
	if (fVar4 != 0f)
	{
		fVar5 = (fVar5 / fVar4);
		fVar6 = (fVar6 / fVar4);
	}
	Var0.f_0 = (Param0.f_0 + (fVar2 * fVar5));
	Var0.f_1 = (Param0.f_1 + (fVar3 * fVar6));
	return func_91(Var0);
}

float func_230(struct<2> Param0, struct<2> Param2)//Position - 0xB1D6
{
	return (SYSTEM::POW((Param2.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param2.f_1 - Param0.f_1), 2f));
}

void func_231(struct<2> Param0, int iParam2)//Position - 0xB1F7
{
	Local_185.f_2730[Local_185.f_2811 /*4*/].f_1 = 0;
	Local_185.f_2730[Local_185.f_2811 /*4*/].f_2 = { Param0 };
	Local_185.f_2730[Local_185.f_2811 /*4*/] = iParam2;
	Local_185.f_2811++;
	if (Local_185.f_2811 >= 20)
	{
		Local_185.f_2811 = 0;
	}
}

void func_232(char* sParam0, char* sParam1, struct<2> Param2)//Position - 0xB24C
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_233(Param2);
	if (fVar0 > 1f || fVar0 < 0f)
	{
	}
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, sParam1, false);
	AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", fVar0);
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

float func_233(float fParam0, var uParam1)//Position - 0xB292
{
	return func_168(((fParam0 - 0.15625f) / 0.658333f), 0f, 1f);
}

char* func_234(int iParam0)//Position - 0xB2AE
{
	switch (iParam0)
	{
		case 0:
			return "Tank_Weapon_Main_Cannon_Hit";
		
		case 3:
			return "Tank_Weapon_Flamethrower_Fire_Hit";
		
		case 4:
			return "Tank_Weapon_Rocket_Hit";
		
		default:
	}
	return "";
}

void func_235()//Position - 0xB2E8
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<2> Var4;
	float fVar6;
	
	iVar0 = NETWORK::GET_NETWORK_TIME();
	Var4 = { Local_185.f_2368.f_321 };
	fVar6 = func_223((Local_185.f_2368.f_321 + 0.011458f), 0);
	func_238();
	switch (Local_185.f_2368)
	{
		case 0:
			StringCopy(&(Local_185.f_2368.f_303), "tank_drive", 64);
			Local_185.f_2368.f_319 = (Local_185.f_2368.f_319 + Local_185.f_2875);
			if (Local_185.f_2368.f_319 >= 4)
			{
				Local_185.f_2368.f_319 = 0;
			}
			if (Local_185.f_2368.f_321.f_1 < (-0.061111f + fVar6) && (Local_185.f_2368.f_337 == -2147483647 || (iVar0 - Local_185.f_2368.f_337) > SYSTEM::ROUND((500f * 1.5f))))
			{
				func_107(2);
				Local_185.f_2368.f_327 = iVar0;
			}
			else if ((Local_185.f_2368.f_321.f_1 - (-0.061111f / 2f)) > fVar6)
			{
				func_237("Tank_Collision", &(Local_185.f_2368.f_343));
				Local_185.f_2368.f_330 = (Local_185.f_2368.f_330 - 1);
				Local_185.f_2368.f_331 = 0;
				if (Local_185.f_2368.f_2 != 0)
				{
					func_108(0);
				}
				Local_185.f_2368.f_319 = 0;
				func_107(3);
				func_237("Tank_Destroyed", &(Local_185.f_2368.f_343));
				if (Local_185.f_2368.f_330 >= 0)
				{
					func_54("Frontend_Player_Death");
				}
				Local_185.f_2368.f_327 = iVar0;
				return;
			}
			break;
		
		case 1:
			StringCopy(&(Local_185.f_2368.f_303), "tank_jump", 64);
			Local_185.f_2368.f_319 = (Local_185.f_2368.f_319 + Local_185.f_2875);
			if (Local_185.f_2368.f_319 >= 4)
			{
				Local_185.f_2368.f_319 = 0;
			}
			fVar1 = (SYSTEM::TO_FLOAT((iVar0 - Local_185.f_2368.f_327)) / 600f);
			if (fVar1 >= 1f)
			{
				fVar1 = 1f;
				func_107(2);
				Local_185.f_2368.f_327 = iVar0;
			}
			Local_185.f_2368.f_321.f_1 = func_161(Local_185.f_2368.f_328, Local_185.f_2368.f_329, fVar1, 2);
			if ((Local_185.f_2368.f_321.f_1 - (-0.061111f / 2f)) > fVar6)
			{
				func_237("Tank_Collision", &(Local_185.f_2368.f_343));
				Local_185.f_2368.f_330 = (Local_185.f_2368.f_330 - 1);
				Local_185.f_2368.f_331 = 0;
				if (Local_185.f_2368.f_2 != 0)
				{
					func_108(0);
				}
				Local_185.f_2368.f_319 = 0;
				func_107(3);
				func_237("Tank_Destroyed", &(Local_185.f_2368.f_343));
				if (Local_185.f_2368.f_330 >= 0)
				{
					func_54("Frontend_Player_Death");
				}
				Local_185.f_2368.f_327 = iVar0;
				return;
			}
			break;
		
		case 2:
			StringCopy(&(Local_185.f_2368.f_303), "tank_jump", 64);
			Local_185.f_2368.f_319 = (Local_185.f_2368.f_319 + Local_185.f_2875);
			if (Local_185.f_2368.f_319 >= 4)
			{
				Local_185.f_2368.f_319 = 0;
			}
			if ((Local_185.f_2368.f_321.f_1 - (-0.061111f / 2f)) > fVar6)
			{
				func_237("Tank_Collision", &(Local_185.f_2368.f_343));
				Local_185.f_2368.f_330 = (Local_185.f_2368.f_330 - 1);
				Local_185.f_2368.f_331 = 0;
				if (Local_185.f_2368.f_2 != 0)
				{
					func_108(0);
				}
				Local_185.f_2368.f_319 = 0;
				func_107(3);
				func_237("Tank_Destroyed", &(Local_185.f_2368.f_343));
				if (Local_185.f_2368.f_330 >= 0)
				{
					func_54("Frontend_Player_Death");
				}
				Local_185.f_2368.f_327 = iVar0;
				return;
			}
			if (Local_185.f_2368.f_321.f_1 > Local_185.f_3)
			{
				Local_185.f_2368.f_321 = func_139(Local_185.f_2368.f_321, -0.15f);
			}
			Local_185.f_2368.f_321.f_1 = (Local_185.f_2368.f_321.f_1 + (func_161(0f, 0.5f, (SYSTEM::TO_FLOAT((iVar0 - Local_185.f_2368.f_327)) / 500f), 1) * SYSTEM::TIMESTEP()));
			if (Local_185.f_2368.f_321.f_1 > (-0.061111f + fVar6))
			{
				Local_185.f_2368.f_321.f_1 = (-0.061111f + fVar6);
				if (Local_185.f_2368.f_321.f_1 > Local_185.f_3)
				{
					func_237("Tank_Collision", &(Local_185.f_2368.f_343));
					Local_185.f_2368.f_330 = (Local_185.f_2368.f_330 - 1);
					Local_185.f_2368.f_331 = 0;
					if (Local_185.f_2368.f_2 != 0)
					{
						func_108(0);
					}
					Local_185.f_2368.f_319 = 0;
					func_107(3);
					func_237("Tank_Destroyed", &(Local_185.f_2368.f_343));
					if (Local_185.f_2368.f_330 >= 0)
					{
						func_54("Frontend_Player_Death");
					}
					Local_185.f_2368.f_327 = iVar0;
					return;
				}
				else
				{
					func_107(0);
					func_237("Tank_Jump_Land", &(Local_185.f_2368.f_343));
					Local_185.f_2368.f_327 = iVar0;
				}
			}
			break;
		
		case 3:
			Local_185.f_2368.f_319 = (Local_185.f_2368.f_319 + Local_185.f_2875);
			if (Local_185.f_2870 == 7)
			{
				Local_185.f_2368.f_321 = func_139(Local_185.f_2368.f_321, -0.15f);
			}
			if (Local_185.f_2368.f_321.f_1 < (-0.061111f + fVar6))
			{
				Local_185.f_2368.f_321.f_1 = (Local_185.f_2368.f_321.f_1 + (func_161(0f, 0.5f, (SYSTEM::TO_FLOAT((iVar0 - Local_185.f_2368.f_327)) / 500f), 1) * SYSTEM::TIMESTEP()));
				if (Local_185.f_2368.f_321.f_1 >= (-0.061111f + fVar6))
				{
					Local_185.f_2368.f_321.f_1 = (-0.061111f + fVar6);
				}
			}
			if (Local_185.f_2368.f_319 > 16 && Local_185.f_2870 == 7)
			{
				func_236();
			}
			break;
		
		case 4:
			fVar1 = (SYSTEM::TO_FLOAT((iVar0 - Local_185.f_2368.f_337)) / 500f);
			fVar2 = func_223(((Local_185.f_2368.f_321 + 0.011458f) + (((0.15f * Local_185.f_2873) / 1000f) * (500f * (1f - fVar1)))), 1);
			if (Local_185.f_2368.f_321.f_1 < 0f)
			{
				if (fVar2 > Local_185.f_3)
				{
					Local_185.f_2368.f_337 = iVar0;
					Local_185.f_2368.f_321.f_1 = -0.2f;
					return;
				}
				else
				{
					fVar3 = func_223(((Local_185.f_2368.f_321 + 0.104167f) + (((0.15f * Local_185.f_2873) / 1000f) * (500f * (1f - fVar1)))), 1);
					if (!func_195((fVar3 - fVar2), -0.0001f, 0.0001f, 0))
					{
						Local_185.f_2368.f_337 = iVar0;
						Local_185.f_2368.f_321.f_1 = -0.2f;
						return;
					}
				}
			}
			StringCopy(&(Local_185.f_2368.f_303), "tank_jump", 64);
			Local_185.f_2368.f_319 = (Local_185.f_2368.f_319 + Local_185.f_2875);
			if (Local_185.f_2368.f_319 >= 4)
			{
				Local_185.f_2368.f_319 = 0;
			}
			if (fVar1 >= 1f)
			{
				fVar1 = 1f;
				Local_185.f_2368.f_319 = 0;
				func_237("Tank_Jump_Land", &(Local_185.f_2368.f_343));
				func_107(0);
				Local_185.f_2368.f_321.f_1 = (-0.061111f + fVar6);
			}
			else
			{
				Local_185.f_2368.f_321.f_1 = func_161(-0.2f, (-0.061111f + fVar2), fVar1, 1);
			}
			break;
	}
	if (Local_185.f_2368.f_331 == 1)
	{
		if (iVar0 > Local_185.f_2368.f_336 + 150)
		{
			Var4.f_0 = (Var4.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE((-0.104167f / 2f), (0.104167f / 2f)));
			Var4.f_1 = (Var4.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE((-0.12963f / 2f), (0.12963f / 2f)));
			func_231(Var4, 1);
			Local_185.f_2368.f_336 = iVar0;
		}
	}
}

void func_236()//Position - 0xBA46
{
	if (Local_185.f_2368.f_330 < 0)
	{
		return;
	}
	Local_185.f_2368.f_321 = 0.3f;
	Local_185.f_2368.f_321.f_1 = -0.2f;
	Local_185.f_2368.f_337 = NETWORK::GET_NETWORK_TIME();
	Local_185.f_2368.f_331 = 20;
	Local_185.f_2368.f_332 = 0;
	Local_185.f_2368.f_333 = 0;
	Local_185.f_2368.f_325 = 0;
	Local_185.f_2368.f_319 = 0;
	func_107(4);
}

void func_237(char* sParam0, var uParam1)//Position - 0xBAB8
{
	float fVar0;
	
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	fVar0 = func_233(Local_185.f_2368.f_321);
	AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, "dlc_vw_am_ip_tank_sounds", false);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", fVar0);
}

void func_238()//Position - 0xBAF9
{
	var uVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Local_185.f_2368.f_339 == -1)
	{
		Local_185.f_2368.f_339 = AUDIO::GET_SOUND_ID();
	}
	uVar0 = func_209(Local_185.f_2368.f_321, func_92(0.166667f, 0.2f));
	bVar1 = Local_185.f_2368 == 3;
	if (!AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_339) && (uVar0 || bVar1))
	{
		AUDIO::STOP_SOUND(Local_185.f_2368.f_339);
		if (Local_185.f_2368.f_340 > -1 && !AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_340))
		{
			AUDIO::STOP_SOUND(Local_185.f_2368.f_340);
		}
		return;
	}
	if (uVar0 || bVar1)
	{
		return;
	}
	if (AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_339))
	{
		AUDIO::PLAY_SOUND_FRONTEND(Local_185.f_2368.f_339, "Tank_Engine_Loop", "dlc_vw_am_ip_tank_sounds", false);
	}
	fVar2 = func_233(Local_185.f_2368.f_321);
	AUDIO::SET_VARIABLE_ON_SOUND(Local_185.f_2368.f_339, "Screen_Position", fVar2);
	fVar3 = func_149(func_182(), 1f, 0f);
	AUDIO::SET_VARIABLE_ON_SOUND(Local_185.f_2368.f_339, "IsJumping", fVar3);
	fVar4 = (SYSTEM::TO_FLOAT(Local_185.f_2368.f_331) / SYSTEM::TO_FLOAT(20));
	AUDIO::SET_VARIABLE_ON_SOUND(Local_185.f_2368.f_339, "DamageLevel", fVar4);
	if (Local_185.f_2368.f_331 == 1)
	{
		if (Local_185.f_2368.f_340 == -1)
		{
			Local_185.f_2368.f_340 = AUDIO::GET_SOUND_ID();
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_340))
		{
			AUDIO::PLAY_SOUND_FRONTEND(Local_185.f_2368.f_340, "Tank_Critical_Damage_Loop", "dlc_vw_am_ip_tank_sounds", false);
		}
		AUDIO::SET_VARIABLE_ON_SOUND(Local_185.f_2368.f_340, "Screen_Position", fVar2);
	}
	else if (Local_185.f_2368.f_340 > -1 && !AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_340))
	{
		AUDIO::STOP_SOUND(Local_185.f_2368.f_340);
	}
}

void func_239()//Position - 0xBCBC
{
	switch (Local_185.f_2368.f_1)
	{
		case 0:
			if (Local_185.f_2368.f_320 != 0)
			{
				Local_185.f_2368.f_320 = 0;
			}
			break;
		
		case 1:
			Local_185.f_2368.f_320 = (Local_185.f_2368.f_320 + Local_185.f_2875);
			if (Local_185.f_2368.f_320 >= 4)
			{
				Local_185.f_2368.f_320 = 0;
				func_106(0);
			}
			break;
	}
}

void func_240()//Position - 0xBD27
{
	int iVar0;
	
	func_267();
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (Local_185.f_1801[iVar0 /*14*/] == -1)
		{
		}
		else
		{
			func_258(iVar0);
			if (Local_185.f_1801[iVar0 /*14*/] == -1)
			{
			}
			else if (func_177())
			{
				func_252(iVar0);
			}
			else
			{
				func_241(iVar0);
			}
		}
		iVar0++;
	}
}

void func_241(int iParam0)//Position - 0xBD82
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (Local_185.f_2870 != 7)
	{
		return;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_7 <= 0)
	{
		return;
	}
	if (func_209(Local_185.f_1801[iParam0 /*14*/].f_3, Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_22))
	{
		return;
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_14 == 0)
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() < (Local_185.f_1801[iParam0 /*14*/].f_9 + func_251(iParam0)))
	{
		return;
	}
	func_250(iParam0, &Var0, &Var2);
	if (func_209(Var0, func_92(0.0001f, 0.0001f)))
	{
		Local_185.f_1801[iParam0 /*14*/].f_9 = NETWORK::GET_NETWORK_TIME();
		return;
	}
	Local_185.f_1998[Local_185.f_2209 /*14*/] = func_249(iParam0);
	Local_185.f_1998[Local_185.f_2209 /*14*/].f_1 = { Var0 };
	Local_185.f_1998[Local_185.f_2209 /*14*/].f_3 = { Var2 };
	Local_185.f_1998[Local_185.f_2209 /*14*/].f_5 = { Var0 };
	Local_185.f_1998[Local_185.f_2209 /*14*/].f_7 = { Var0 };
	Local_185.f_1998[Local_185.f_2209 /*14*/].f_9 = func_248(iParam0);
	Local_185.f_1998[Local_185.f_2209 /*14*/].f_11 = NETWORK::GET_NETWORK_TIME();
	Local_185.f_1998[Local_185.f_2209 /*14*/].f_13 = func_247(iParam0);
	Local_185.f_1998[Local_185.f_2209 /*14*/].f_12 = func_246(iParam0);
	Local_185.f_2209++;
	if (Local_185.f_2209 >= 15)
	{
		Local_185.f_2209 = 0;
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_27 > 0 && Local_185.f_2870 == 7)
	{
		Local_185.f_1801[iParam0 /*14*/].f_10 = 1;
		Local_185.f_1801[iParam0 /*14*/].f_1 = 0;
	}
	Local_185.f_1801[iParam0 /*14*/].f_9 = NETWORK::GET_NETWORK_TIME();
	if (func_245(iParam0) && Local_185.f_1801[iParam0 /*14*/].f_12 > -1)
	{
		func_242(func_244(iParam0), func_243(iParam0), iParam0);
	}
}

void func_242(char* sParam0, char* sParam1, int iParam2)//Position - 0xBF80
{
	int iVar0;
	float fVar1;
	
	iVar0 = Local_185.f_1801[iParam2 /*14*/].f_12;
	if (iVar0 == -1)
	{
		return;
	}
	fVar1 = func_233(Local_185.f_1801[iParam2 /*14*/].f_3);
	AUDIO::PLAY_SOUND_FRONTEND(iVar0, sParam0, sParam1, false);
	AUDIO::SET_VARIABLE_ON_SOUND(iVar0, "Screen_Position", fVar1);
}

char* func_243(int iParam0)//Position - 0xBFC8
{
	switch (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
		case 1:
		case 2:
		case 7:
			return "dlc_vw_am_ip_enemy_sounds";
		
		case 5:
			return "dlc_vw_am_ip_powerup_sounds";
		
		default:
	}
	return "";
}

char* func_244(int iParam0)//Position - 0xC015
{
	switch (Local_185.f_1801[iParam0 /*14*/])
	{
		case 2:
			return "Enemy_Bear_Fire";
		
		case 0:
			return "Enemy_Camel_Fire";
		
		case 3:
			return "Enemy_Moose_Fire";
		
		case 1:
			return "Enemy_Panda_Fire";
		
		case 5:
			return "Enemy_Drone_Fire";
		
		case 4:
			return "Enemy_Jet_Bomb_Barrel_Drop";
		
		default:
	}
	return "";
}

int func_245(int iParam0)//Position - 0xC07D
{
	if (((((Local_185.f_1801[iParam0 /*14*/] == 2 || Local_185.f_1801[iParam0 /*14*/] == 0) || Local_185.f_1801[iParam0 /*14*/] == 3) || Local_185.f_1801[iParam0 /*14*/] == 1) || Local_185.f_1801[iParam0 /*14*/] == 5) || Local_185.f_1801[iParam0 /*14*/] == 4)
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)//Position - 0xC0ED
{
	switch (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
		case 2:
			return -1;
		
		case 1:
			return 0;
		
		default:
	}
	return 2147483647;
}

var func_247(int iParam0)//Position - 0xC129
{
	return Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_15;
}

float func_248(int iParam0)//Position - 0xC143
{
	switch (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
		case 1:
			return 0f;
		
		case 2:
			return -45f;
		
		default:
	}
	return 0f;
}

int func_249(int iParam0)//Position - 0xC17F
{
	switch (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
		case 2:
			return 2;
		
		case 1:
			return 1;
		
		default:
	}
	return -1;
}

void func_250(int iParam0, var uParam1, var uParam2)//Position - 0xC1B7
{
	*uParam1 = { func_197(func_92((Local_185.f_1801[iParam0 /*14*/].f_3 + Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_3), (Local_185.f_1801[iParam0 /*14*/].f_3.f_1 + Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_3.f_1))) };
	switch (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
			*uParam2 = { func_187(*uParam1, func_150(*uParam1, func_197(func_92(1f, 0f))), -180f) };
			break;
		
		case 2:
			*uParam2 = { func_187(*uParam1, func_150(*uParam1, func_197(func_92(1f, 0f))), 135f) };
			break;
		
		case 1:
			*uParam2 = { func_187(*uParam1, func_150(*uParam1, func_197(func_92(1f, 0f))), 85f) };
			break;
	}
	*uParam1 = { func_91(*uParam1) };
	*uParam2 = { func_91(*uParam2) };
}

int func_251(int iParam0)//Position - 0xC2BC
{
	int iVar0;
	
	iVar0 = Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_14;
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 1)
	{
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) / Local_185.f_2873));
	}
	return iVar0;
}

void func_252(int iParam0)//Position - 0xC2FD
{
	if (func_257(Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/]))
	{
		return;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_7 <= 0)
	{
		return;
	}
	if (!func_121(&(Local_185.f_2892), 650, 0))
	{
		Local_185.f_1801[iParam0 /*14*/].f_8 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		func_253(iParam0, -Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_17);
	}
}

void func_253(bool bParam0, int iParam1)//Position - 0xC36D
{
	if (iParam1 == 0)
	{
		return;
	}
	if (Local_185.f_1801[bParam0 /*14*/].f_7 <= 0)
	{
		return;
	}
	Local_185.f_1801[bParam0 /*14*/].f_7 = func_156((Local_185.f_1801[bParam0 /*14*/].f_7 + iParam1), 0, Local_185.f_753[Local_185.f_1801[bParam0 /*14*/] /*28*/].f_17);
	Local_185.f_1801[bParam0 /*14*/].f_8 = NETWORK::GET_NETWORK_TIME();
	if (Local_185.f_1801[bParam0 /*14*/].f_7 > 0)
	{
		return;
	}
	if (Local_185.f_753[Local_185.f_1801[bParam0 /*14*/] /*28*/].f_16 > 0)
	{
		func_127(Local_185.f_753[Local_185.f_1801[bParam0 /*14*/] /*28*/].f_16, 0, Local_185.f_1801[bParam0 /*14*/].f_3);
		if (func_256(bParam0))
		{
			Local_185.f_2712.f_5++;
		}
	}
	if (func_255(bParam0) && Local_185.f_1801[bParam0 /*14*/].f_12 != -1)
	{
		func_242(func_254(bParam0), func_243(bParam0), bParam0);
	}
}

char* func_254(int iParam0)//Position - 0xC461
{
	switch (Local_185.f_1801[iParam0 /*14*/])
	{
		case 2:
			return "Enemy_Bear_Die";
		
		case 0:
			return "Enemy_Camel_Die";
		
		case 3:
			return "Enemy_Moose_Die";
		
		case 1:
			return "Enemy_Panda_Die";
		
		case 5:
			return "Enemy_Drone_Destroyed";
		
		case 4:
			return "Enemy_Jet_Explode";
		
		default:
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 7)
	{
		return "Enemy_Drone_Destroyed";
	}
	return "";
}

int func_255(int iParam0)//Position - 0xC4E4
{
	if (((((Local_185.f_1801[iParam0 /*14*/] == 2 || Local_185.f_1801[iParam0 /*14*/] == 0) || Local_185.f_1801[iParam0 /*14*/] == 3) || Local_185.f_1801[iParam0 /*14*/] == 1) || Local_185.f_1801[iParam0 /*14*/] == 5) || Local_185.f_1801[iParam0 /*14*/] == 4)
	{
		return 1;
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 7)
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0)//Position - 0xC56C
{
	if (((Local_185.f_1801[iParam0 /*14*/] == 0 || Local_185.f_1801[iParam0 /*14*/] == 2) || Local_185.f_1801[iParam0 /*14*/] == 1) || Local_185.f_1801[iParam0 /*14*/] == 3)
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)//Position - 0xC5BA
{
	if ((((iParam0 == 8 || iParam0 == 3) || iParam0 == 4) || iParam0 == 5) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_258(int iParam0)//Position - 0xC5F7
{
	float fVar0;
	struct<2> Var1;
	float fVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	struct<2> Var8;
	float fVar10;
	
	if (Local_185.f_1801[iParam0 /*14*/].f_3 < (0.15625f - (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_22 / 2f)))
	{
		func_266(iParam0);
		return;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_12 == -1 || Local_185.f_1801[iParam0 /*14*/].f_13 == -1)
	{
		if (!func_209(Local_185.f_1801[iParam0 /*14*/].f_3, Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_22))
		{
			Local_185.f_1801[iParam0 /*14*/].f_12 = AUDIO::GET_SOUND_ID();
			Local_185.f_1801[iParam0 /*14*/].f_13 = AUDIO::GET_SOUND_ID();
			if (func_265(iParam0))
			{
				func_242(func_264(iParam0), func_243(iParam0), iParam0);
			}
		}
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 3 && Local_185.f_1801[iParam0 /*14*/].f_11 & 1 != 0)
	{
		func_263(iParam0);
	}
	else
	{
		Local_185.f_1801[iParam0 /*14*/].f_1 = (Local_185.f_1801[iParam0 /*14*/].f_1 + Local_185.f_2875);
		if (Local_185.f_1801[iParam0 /*14*/].f_7 > 0)
		{
			switch (Local_185.f_1801[iParam0 /*14*/].f_10)
			{
				case 0:
				case 2:
					if (Local_185.f_1801[iParam0 /*14*/].f_1 >= Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_25)
					{
						Local_185.f_1801[iParam0 /*14*/].f_1 = 0;
					}
					break;
				
				case 1:
					if (Local_185.f_1801[iParam0 /*14*/].f_1 >= Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_27)
					{
						Local_185.f_1801[iParam0 /*14*/].f_1 = 0;
						Local_185.f_1801[iParam0 /*14*/].f_10 = 0;
					}
					break;
			}
		}
		else if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 5)
		{
			if (Local_185.f_1801[iParam0 /*14*/].f_1 > 3)
			{
				func_266(iParam0);
				return;
			}
		}
		else if (Local_185.f_1801[iParam0 /*14*/].f_1 > 6)
		{
			func_266(iParam0);
			return;
		}
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 6)
	{
		func_260(iParam0);
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 2)
	{
		fVar3 = Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_1;
		if ((NETWORK::GET_NETWORK_TIME() - Local_185.f_1801[iParam0 /*14*/].f_2) > 6500 || Local_185.f_2870 > 7)
		{
			if (Local_185.f_1801[iParam0 /*14*/].f_11 & 1 != 0 && Local_185.f_2870 == 7)
			{
				Var1 = { Local_185.f_2368.f_321 };
			}
			else
			{
				Var1.f_0 = -1f;
				Var1.f_1 = 0f;
			}
			fVar3 = (fVar3 * 1.25f);
		}
		else
		{
			Var1 = { func_92((Local_185.f_2368.f_321 + 0.125f), (Local_185.f_2368.f_321.f_1 + -0.225f)) };
			if (Var1.f_1 > (Local_185.f_3 + -0.225f))
			{
				Var1.f_1 = (Local_185.f_3 + -0.225f);
			}
		}
		Var4 = { func_197(func_150(Var1, func_92(0.15f, 0f))) };
		Var1 = { func_197(Var1) };
		fVar6 = SYSTEM::SIN(((Local_185.f_2872 * 2000f) + IntToFloat(iParam0 * 100)));
		fVar7 = (30f + (fVar6 * 15f));
		Var8 = { func_91(func_187(Var1, Var4, (180f + fVar7))) };
		Local_185.f_1801[iParam0 /*14*/].f_5 = { func_169(func_91(Var1), Var8, SYSTEM::SIN(((Local_185.f_2872 * 650f) + IntToFloat(iParam0 * 100)))) };
		Local_185.f_1801[iParam0 /*14*/].f_3 = { func_229(Local_185.f_1801[iParam0 /*14*/].f_3, Local_185.f_1801[iParam0 /*14*/].f_5, fVar3) };
		if (Local_185.f_1801[iParam0 /*14*/].f_13 > -1)
		{
			if (Local_185.f_1801[iParam0 /*14*/].f_7 > 0)
			{
				func_259("Enemy_Drone_Loop", iParam0);
			}
		}
		return;
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 5 && Local_185.f_1801[iParam0 /*14*/].f_10 == 2)
	{
		fVar0 = func_223(Local_185.f_1801[iParam0 /*14*/].f_3, 0);
		if (Local_185.f_1801[iParam0 /*14*/].f_3.f_1 < (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_2 + fVar0))
		{
			Local_185.f_1801[iParam0 /*14*/].f_3.f_1 = (Local_185.f_1801[iParam0 /*14*/].f_3.f_1 + (0.45f * SYSTEM::TIMESTEP()));
			if (Local_185.f_1801[iParam0 /*14*/].f_3.f_1 >= (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_2 + fVar0))
			{
				Local_185.f_1801[iParam0 /*14*/].f_3.f_1 = (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_2 + fVar0);
				Local_185.f_1801[iParam0 /*14*/].f_10 = 0;
				if (Local_185.f_1801[iParam0 /*14*/].f_12 != -1)
				{
					func_242("Powerup_Crate_Land", func_243(iParam0), iParam0);
				}
			}
		}
	}
	if (Local_185.f_2870 != 7 && Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] != 1)
	{
		return;
	}
	if (Local_185.f_1801[iParam0 /*14*/] == 33)
	{
		fVar0 = func_223((Local_185.f_1801[iParam0 /*14*/].f_3 - (Local_185.f_753[33 /*28*/].f_22 / 2f)), 0);
		fVar10 = func_223((Local_185.f_1801[iParam0 /*14*/].f_3 + (Local_185.f_753[33 /*28*/].f_22 / 2f)), 0);
		if ((fVar0 > Local_185.f_3 || !func_195(fVar0, (fVar10 - 0.0001f), (fVar10 + 0.0001f), 0)) || !func_195((fVar0 + Local_185.f_753[33 /*28*/].f_2), (Local_185.f_1801[iParam0 /*14*/].f_3.f_1 - 0.0001f), (Local_185.f_1801[iParam0 /*14*/].f_3.f_1 + 0.0001f), 0))
		{
			Local_185.f_1801[iParam0 /*14*/].f_3 = func_139(Local_185.f_1801[iParam0 /*14*/].f_3, Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_1);
			return;
		}
	}
	Local_185.f_1801[iParam0 /*14*/].f_3 = func_139(Local_185.f_1801[iParam0 /*14*/].f_3, -Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_1);
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 1)
	{
		if (Local_185.f_1801[iParam0 /*14*/].f_7 > 0)
		{
			if (Local_185.f_1801[iParam0 /*14*/].f_13 > -1)
			{
				func_259("Enemy_Jet_Flyover", iParam0);
			}
		}
	}
}

void func_259(char* sParam0, int iParam1)//Position - 0xCC35
{
	int iVar0;
	float fVar1;
	
	iVar0 = Local_185.f_1801[iParam1 /*14*/].f_13;
	if (iVar0 == -1)
	{
		return;
	}
	fVar1 = func_233(Local_185.f_1801[iParam1 /*14*/].f_3);
	if (AUDIO::HAS_SOUND_FINISHED(iVar0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(iVar0, sParam0, "dlc_vw_am_ip_enemy_sounds", false);
	}
	AUDIO::SET_VARIABLE_ON_SOUND(iVar0, "Screen_Position", fVar1);
}

void func_260(int iParam0)//Position - 0xCC88
{
	if (Local_185.f_1801[iParam0 /*14*/].f_8 != -2147483647)
	{
		Local_185.f_1801[iParam0 /*14*/].f_5.f_1 = (Local_185.f_1801[iParam0 /*14*/].f_5.f_1 + (0.177778f * SYSTEM::TIMESTEP()));
		if (Local_185.f_1801[iParam0 /*14*/].f_5.f_1 > 0.040404f)
		{
			Local_185.f_1801[iParam0 /*14*/].f_5.f_1 = 0.040404f;
		}
		return;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_3 < Local_185.f_2368.f_321)
	{
		Local_185.f_1801[iParam0 /*14*/].f_8 = NETWORK::GET_NETWORK_TIME();
		Local_185.f_1801[iParam0 /*14*/].f_5.f_1 = 0f;
		func_127(Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/].f_16, 2, Local_185.f_1801[iParam0 /*14*/].f_3);
		if (Local_185.f_1801[iParam0 /*14*/].f_11 & 1 == 0)
		{
			func_242("Tank_Raise_Flag", "dlc_vw_am_ip_tank_sounds", iParam0);
		}
		if (Local_185.f_2870 == 7 && Local_185.f_2212 < 1)
		{
			if (Local_185.f_2873 < 2f)
			{
				func_262("IAP_SPD_UP");
			}
			func_54("Frontend_Player_Oil_Collect");
			Local_185.f_2873 = (Local_185.f_2873 + func_261(Local_185.f_1801[iParam0 /*14*/]));
			if (Local_185.f_2873 > 2f)
			{
				Local_185.f_2873 = 2f;
			}
		}
	}
}

float func_261(int iParam0)//Position - 0xCDC2
{
	switch (iParam0)
	{
		case 29:
			return 0.02f;
		
		case 31:
		case 30:
			return 0.04f;
		
		case 32:
			return 0.06f;
		
		default:
	}
	return 0f;
}

void func_262(char* sParam0)//Position - 0xCE02
{
	Local_185.f_2368.f_286 = NETWORK::GET_NETWORK_TIME();
	StringCopy(&(Local_185.f_2368.f_286.f_1), sParam0, 64);
}

void func_263(int iParam0)//Position - 0xCE24
{
	if (Local_185.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		Local_185.f_1801[iParam0 /*14*/].f_1 = (Local_185.f_1801[iParam0 /*14*/].f_1 + SYSTEM::ROUND((IntToFloat(Local_185.f_2875) / 1.25f)));
		if (Local_185.f_1801[iParam0 /*14*/].f_1 >= 4)
		{
			Local_185.f_1801[iParam0 /*14*/].f_11 &= -2;
			Local_185.f_1801[iParam0 /*14*/].f_7 = 1;
		}
	}
	else if (Local_185.f_1801[iParam0 /*14*/].f_3 < (Local_185.f_2368.f_321 + func_226()))
	{
		Local_185.f_1801[iParam0 /*14*/].f_7 = 0;
		Local_185.f_1801[iParam0 /*14*/].f_1 = 0;
		if (Local_185.f_1801[iParam0 /*14*/].f_12 != -1)
		{
			func_242("Enemy_Hazard_Wall_Collapse", "dlc_vw_am_ip_enemy_sounds", iParam0);
		}
	}
}

char* func_264(int iParam0)//Position - 0xCEEB
{
	switch (Local_185.f_1801[iParam0 /*14*/])
	{
		case 2:
			return "Enemy_Bear_Spawn";
		
		case 0:
			return "Enemy_Camel_Spawn";
		
		case 3:
			return "Enemy_Moose_Spawn";
		
		case 1:
			return "Enemy_Panda_Spawn";
		
		default:
	}
	if (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/] == 5)
	{
		return "Powerup_Crate_Parachute_Open";
	}
	return "";
}

int func_265(int iParam0)//Position - 0xCF54
{
	switch (Local_185.f_753[Local_185.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_266(int iParam0)//Position - 0xCF82
{
	if (Local_185.f_1801[iParam0 /*14*/].f_12 > -1)
	{
		AUDIO::RELEASE_SOUND_ID(Local_185.f_1801[iParam0 /*14*/].f_12);
		Local_185.f_1801[iParam0 /*14*/].f_12 = -1;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_13 > -1)
	{
		AUDIO::STOP_SOUND(Local_185.f_1801[iParam0 /*14*/].f_13);
		AUDIO::RELEASE_SOUND_ID(Local_185.f_1801[iParam0 /*14*/].f_13);
		Local_185.f_1801[iParam0 /*14*/].f_13 = -1;
	}
	Local_185.f_1801[iParam0 /*14*/] = -1;
}

void func_267()//Position - 0xCFF7
{
	float fVar0;
	int iVar1;
	
	if (Local_185.f_2870 != 7)
	{
		return;
	}
	if (Local_185.f_2871 == 4 && !func_59(&(Local_185.f_2898), 33))
	{
		if (Local_185.f_2905 < 1)
		{
			func_275(&(Local_185.f_2898), 33);
		}
		else if (Local_185.f_2872 / 0.164583f) >= IntToFloat((Local_185.f_2905 - 1))
		{
			func_272(33, SYSTEM::TO_FLOAT(Local_185.f_2905));
		}
	}
	if (Local_185.f_2210 >= 225 || Local_185.f_4[Local_185.f_2210 /*3*/] == -1)
	{
		if (Local_185.f_0 == -1f)
		{
			return;
		}
		if (Local_185.f_2212 >= 14)
		{
			return;
		}
		iVar1 = Local_185.f_680[Local_185.f_2212 /*3*/];
		fVar0 = (Local_185.f_0 - Local_185.f_680[Local_185.f_2212 /*3*/].f_1);
		if (Local_185.f_2872 / 0.164583f) >= (Local_185.f_0 - 5f)
		{
			func_271(Local_185.f_2213, iVar1, Local_185.f_680[Local_185.f_2212 /*3*/].f_2, fVar0);
			Local_185.f_2212++;
			Local_185.f_2213++;
			if (Local_185.f_2213 >= 14)
			{
				Local_185.f_2213 = 0;
			}
		}
		return;
	}
	if (Local_185.f_2870 != 7)
	{
		return;
	}
	if (Local_185.f_4[Local_185.f_2210 /*3*/] == 34)
	{
		func_268();
		return;
	}
	iVar1 = Local_185.f_4[Local_185.f_2210 /*3*/];
	fVar0 = Local_185.f_4[Local_185.f_2210 /*3*/].f_1;
	if ((Local_185.f_2872 / 0.164583f) >= fVar0)
	{
		if (func_272(iVar1, fVar0))
		{
			Local_185.f_2210++;
		}
	}
}

void func_268()//Position - 0xD17A
{
	float fVar0;
	int iVar1;
	
	if (Local_185.f_0 != -1f && (Local_185.f_2872 / 0.164583f) >= (Local_185.f_0 - 12.5f))
	{
		Local_185.f_2210++;
		return;
	}
	fVar0 = ((Local_185.f_2872 / 0.164583f) / 1250f);
	if (fVar0 > 1f)
	{
		fVar0 = 1f;
	}
	Local_185.f_2214 = func_161(0.25f, 0f, fVar0, 2);
	Local_185.f_2214.f_1 = func_161(3f, 1.75f, fVar0, 2);
	if ((Local_185.f_2872 / 0.164583f) > Local_185.f_2214.f_124)
	{
		iVar1 = Local_185.f_2214.f_125;
		if (iVar1 == -1)
		{
			if (Local_185.f_2214.f_124 < 0f)
			{
				MISC::SET_RANDOM_SEED(Local_185.f_1);
			}
			else
			{
				MISC::SET_RANDOM_SEED(SYSTEM::FLOOR((SYSTEM::SIN(Local_185.f_2214.f_124) * Local_185.f_2214.f_124)));
			}
			Local_185.f_2214.f_124 = (Local_185.f_2214.f_124 + func_270());
			Local_185.f_2214.f_125 = func_269();
			return;
		}
		if ((Local_185.f_2872 / 0.164583f) >= Local_185.f_2214.f_124)
		{
			if (func_272(Local_185.f_2214.f_125, Local_185.f_2214.f_124))
			{
				Local_185.f_2214.f_125 = -1;
			}
		}
	}
}

int func_269()//Position - 0xD29F
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	int iVar40;
	
	iVar36 = 0;
	while (iVar36 <= 9)
	{
		iVar37 = 0;
		while (iVar37 <= 9)
		{
			if ((Local_185.f_2214.f_124 - Local_185.f_2214.f_113[iVar36]) < Local_185.f_2214.f_2[iVar36 /*11*/][iVar37])
			{
				MISC::SET_BIT(&uVar39, iVar37);
			}
			iVar37++;
		}
		iVar36++;
	}
	iVar36 = 0;
	while (iVar36 <= 34)
	{
		if (!BitTest(Local_185.f_753[iVar36 /*28*/].f_19, Local_185.f_2871))
		{
		}
		else if (!BitTest(uVar39, Local_185.f_753[iVar36 /*28*/].f_18))
		{
			iVar0[iVar38] = iVar36;
			iVar38++;
		}
		iVar36++;
	}
	if (iVar38 == 0)
	{
		Local_185.f_2214.f_124 = (Local_185.f_2214.f_124 + func_270());
		return -1;
	}
	iVar40 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar38)];
	Local_185.f_2214.f_113[Local_185.f_753[iVar40 /*28*/].f_18] = Local_185.f_2214.f_124;
	return iVar40;
}

float func_270()//Position - 0xD393
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_185.f_2214, Local_185.f_2214.f_1);
}

void func_271(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0xD3AB
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	Local_185.f_1801[iParam0 /*14*/] = iParam1;
	Local_185.f_1801[iParam0 /*14*/].f_11 = iParam2;
	Local_185.f_1801[iParam0 /*14*/].f_1 = 0;
	if (Local_185.f_1801[iParam0 /*14*/].f_12 > -1)
	{
		AUDIO::STOP_SOUND(Local_185.f_1801[iParam0 /*14*/].f_12);
		AUDIO::RELEASE_SOUND_ID(Local_185.f_1801[iParam0 /*14*/].f_12);
		Local_185.f_1801[iParam0 /*14*/].f_12 = -1;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_13 > -1)
	{
		AUDIO::STOP_SOUND(Local_185.f_1801[iParam0 /*14*/].f_13);
		AUDIO::RELEASE_SOUND_ID(Local_185.f_1801[iParam0 /*14*/].f_13);
		Local_185.f_1801[iParam0 /*14*/].f_13 = -1;
	}
	Local_185.f_1801[iParam0 /*14*/].f_8 = -2147483647;
	Local_185.f_1801[iParam0 /*14*/].f_7 = Local_185.f_753[iParam1 /*28*/].f_17;
	fVar0 = ((fParam3 * 0.164583f) - Local_185.f_2872);
	fVar1 = (fVar0 * ((-0.15f * Local_185.f_2873) / (Local_185.f_753[iParam1 /*28*/].f_1 * Local_185.f_2873)));
	Local_185.f_1801[iParam0 /*14*/].f_3 = { func_92((1f - fVar1), Local_185.f_753[iParam1 /*28*/].f_2) };
	if (((Local_185.f_753[iParam1 /*28*/] != 3 && Local_185.f_753[iParam1 /*28*/] != 4) && Local_185.f_753[iParam1 /*28*/] != 1) && Local_185.f_753[iParam1 /*28*/] != 2)
	{
		Local_185.f_1801[iParam0 /*14*/].f_3.f_1 = (Local_185.f_1801[iParam0 /*14*/].f_3.f_1 + func_223(Local_185.f_1801[iParam0 /*14*/].f_3, 0));
	}
	if (Local_185.f_753[iParam1 /*28*/] == 5)
	{
		fVar2 = (fVar0 * 0.45f);
		Local_185.f_1801[iParam0 /*14*/].f_3.f_1 = (Local_185.f_1801[iParam0 /*14*/].f_3.f_1 - (0.9f - fVar2));
		Local_185.f_1801[iParam0 /*14*/].f_10 = 2;
	}
	if (Local_185.f_753[iParam1 /*28*/] == 3)
	{
		Local_185.f_2340.f_12[(Local_185.f_745 - 1)] = 1;
		Local_185.f_2340.f_20[(Local_185.f_745 - 1)] = iParam0;
		Local_185.f_1801[iParam0 /*14*/].f_3 = func_139((Local_185.f_2340.f_4[(Local_185.f_745 - 1)] + ((func_226() - Local_185.f_746) / 2f)), 0.15f);
	}
	else if (Local_185.f_753[iParam1 /*28*/] == 4)
	{
		Local_185.f_2340.f_12[(Local_185.f_745 - 1)] = 2;
		Local_185.f_2340.f_20[(Local_185.f_745 - 1)] = iParam0;
		Local_185.f_1801[iParam0 /*14*/].f_3 = func_139((Local_185.f_2340.f_4[(Local_185.f_745 - 1)] + ((func_226() - Local_185.f_746) / 2f)), 0.15f);
	}
	if (Local_185.f_753[iParam1 /*28*/] == 6)
	{
		if (iParam2 & 2 != 0)
		{
			Local_185.f_1801[iParam0 /*14*/].f_3.f_1 = (Local_185.f_1801[iParam0 /*14*/].f_3.f_1 - (Local_185.f_753[iParam1 /*28*/].f_22.f_1 / 2f));
		}
	}
	Local_185.f_1801[iParam0 /*14*/].f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

int func_272(int iParam0, float fParam1)//Position - 0xD683
{
	int iVar0;
	
	if (Local_185.f_753[iParam0 /*28*/] == 3 || Local_185.f_753[iParam0 /*28*/] == 4)
	{
		if ((Local_185.f_2340.f_12[(Local_185.f_745 - 1)] == 1 || Local_185.f_2340.f_12[(Local_185.f_745 - 1)] == 2) || !func_209(func_92((Local_185.f_2340.f_4[(Local_185.f_745 - 1)] + ((func_226() - Local_185.f_746) / 2f)), Local_185.f_753[iParam0 /*28*/].f_2), Local_185.f_753[iParam0 /*28*/].f_22))
		{
			return 0;
		}
		else if (Local_185.f_2214.f_124 > -1f && iParam0 != 33)
		{
			Local_185.f_2214.f_124 = (Local_185.f_2214.f_124 + ((((Local_185.f_2872 / 0.164583f) - Local_185.f_2214.f_124) + ((Local_185.f_753[iParam0 /*28*/].f_22 / 2f) / 0.164583f)) + (((1f - Local_185.f_2340.f_4[(Local_185.f_745 - 1)]) + ((func_226() - Local_185.f_746) / 2f)) / -0.164583f)));
			Local_185.f_2214.f_113[Local_185.f_753[iParam0 /*28*/].f_18] = Local_185.f_2214.f_124;
		}
	}
	if (!func_177() || func_257(Local_185.f_753[iParam0 /*28*/]))
	{
		func_274(&iParam0);
		iVar0 = 0;
		if (Local_185.f_4[Local_185.f_2210 /*3*/] != 34)
		{
			iVar0 = Local_185.f_4[Local_185.f_2210 /*3*/].f_2;
		}
		func_271(Local_185.f_2211, iParam0, iVar0, fParam1);
		Local_185.f_2211++;
		if (Local_185.f_2211 >= 14)
		{
			Local_185.f_2211 = 0;
		}
	}
	if (!func_59(&(Local_185.f_2898), iParam0))
	{
		func_275(&(Local_185.f_2898), iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_185.f_753[iParam0 /*28*/].f_20))
		{
			func_273(Local_185.f_753[iParam0 /*28*/].f_20, Local_185.f_753[iParam0 /*28*/].f_21);
		}
	}
	return 1;
}

void func_273(var uParam0, int iParam1)//Position - 0xD865
{
	func_9();
	Local_185.f_2901 = (NETWORK::GET_NETWORK_TIME() + iParam1);
	Local_185.f_2903 = uParam0;
	Local_185.f_2902 = -1;
}

void func_274(int iParam0)//Position - 0xD88A
{
	if (*iParam0 == 26 && Local_185.f_2368.f_2 != 0)
	{
		*iParam0 = 22;
	}
}

void func_275(var uParam0, int iParam1)//Position - 0xD8AE
{
	MISC::SET_BIT(uParam0[func_58(iParam1)], func_57(iParam1));
}

void func_276()//Position - 0xD8CA
{
	if (!func_124(&(Local_185.f_2888)))
	{
		func_123(&(Local_185.f_2888), 0, 0);
	}
	func_240();
	func_239();
	func_235();
	func_219();
	func_221();
	func_220();
	func_216();
	func_213();
	func_277();
	if (!func_125())
	{
		return;
	}
	if (!BitTest(Local_185.f_2368.f_333, 8) && func_121(&(Local_185.f_2888), 5500, 0))
	{
		func_12(func_13(3));
		MISC::SET_BIT(&(Local_185.f_2368.f_333), 8);
	}
	if (!func_121(&(Local_185.f_2888), 7500, 0))
	{
		return;
	}
	func_7(5);
	func_115();
}

void func_277()//Position - 0xD96E
{
	func_211();
	func_198();
	func_180();
	func_158();
	func_178();
	func_166();
	func_158();
	func_151();
	func_146();
	func_141(2);
	func_88();
	func_86();
}

void func_278()//Position - 0xD9A7
{
	if (!func_124(&(Local_185.f_2884)))
	{
		func_123(&(Local_185.f_2884), 0, 0);
		Local_185.f_2878 = 0;
	}
	func_316();
	func_312();
	func_240();
	func_235();
	func_239();
	func_301();
	func_222();
	func_300();
	func_221();
	func_220();
	func_219();
	func_286();
	func_216();
	func_213();
	func_283();
	if (Local_185.f_2368.f_331 == 0 && Local_185.f_2368.f_330 < 0)
	{
		func_282();
		Local_185.f_2878 = 0;
		func_280(8359, Local_185.f_2905, -1, 1);
		func_8(8);
		Local_185.f_2368.f_319 = 0;
		func_104(&(Local_185.f_2884));
		Local_185.f_2726 = 0;
		MISC::SET_BIT(&(Local_185.f_2368.f_333), 5);
		Local_185.f_2727 = 0;
		MISC::SET_BIT(&(Local_185.f_2368.f_333), 4);
		Local_185.f_2728 = SYSTEM::FLOOR((Local_185.f_2872 / 0.164583f));
		func_7(4);
		func_54("Frontend_Game_Over");
		func_12(func_13(5));
		return;
	}
	if (Local_185.f_0 != -1f && (Local_185.f_2872 / 0.164583f) >= Local_185.f_0)
	{
		func_282();
		func_7(6);
		Local_185.f_2878 = 0;
		func_106(0);
		func_280(8359, Local_185.f_2905, -1, 1);
		func_279();
		Local_185.f_2726 = Local_185.f_2368.f_330;
		Local_185.f_2727 = Local_185.f_2368.f_331;
		Local_185.f_2728 = SYSTEM::FLOOR((Local_185.f_2872 / 0.164583f));
		func_8(9);
		func_54("Frontend_Stage_Clear");
		func_12(func_13(5));
		func_104(&(Local_185.f_2884));
	}
}

void func_279()//Position - 0xDB36
{
	if (Local_185.f_2907)
	{
		return;
	}
	if (BitTest(Local_185.f_2904, 4))
	{
		return;
	}
	if (Local_185.f_2368.f_330 < Global_262145.f_26802 /* Tunable: IVC_IAP_LIVES_CHALLENGE_REQUIREMENT */)
	{
		return;
	}
	func_132(251, 1, -1, 1);
	func_131(27187, 1, -1);
	MISC::SET_BIT(&(Local_185.f_2904), 4);
	MISC::SET_BIT(&(Local_185.f_2904), 10);
	func_130();
	func_129("IAP_CH_3", Global_262145.f_26802 /* Tunable: IVC_IAP_LIVES_CHALLENGE_REQUIREMENT */, 7500);
}

void func_280(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xDBA8
{
	int iVar0;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_281(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_281(int iParam0, var uParam1)//Position - 0xDBD6
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_134(uParam1));
}

void func_282()//Position - 0xDBEB
{
	if (Local_185.f_2368.f_338 > -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_338))
		{
			AUDIO::STOP_SOUND(Local_185.f_2368.f_338);
			AUDIO::RELEASE_SOUND_ID(Local_185.f_2368.f_338);
			Local_185.f_2368.f_338 = -1;
		}
	}
}

void func_283()//Position - 0xDC30
{
	func_211();
	func_198();
	func_285();
	func_192();
	func_180();
	func_179();
	func_178();
	func_166();
	func_284();
	func_158();
	func_151();
	if (func_124(&(Local_185.f_2884)) && !func_121(&(Local_185.f_2884), 1750, 0))
	{
		func_141(1);
	}
	func_88();
	func_86();
}

void func_284()//Position - 0xDC90
{
	float fVar0;
	
	if (NETWORK::GET_NETWORK_TIME() > Local_185.f_2368.f_286 + 1000)
	{
		return;
	}
	fVar0 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_185.f_2368.f_286)) / 1000f);
	func_159(&(Local_185.f_2368.f_286.f_1), (Local_185.f_2368.f_321 + 0.0075f), func_161((Local_185.f_2368.f_321.f_1 + -0.125f), (Local_185.f_2368.f_321.f_1 + -0.2f), fVar0, 4), 2147483647);
}

void func_285()//Position - 0xDD0E
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Local_185.f_1998[iVar0 /*14*/].f_11 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() > (Local_185.f_1998[iVar0 /*14*/].f_11 + Local_185.f_1734[Local_185.f_1998[iVar0 /*14*/] /*5*/].f_2))
		{
		}
		else
		{
			StringCopy(&Var1, Local_185.f_1734[Local_185.f_1998[iVar0 /*14*/] /*5*/], 64);
			if (Local_185.f_2871 == 4 && Local_185.f_1998[iVar0 /*14*/] == 1)
			{
				StringConCat(&Var1, "_moon", 64);
			}
			if (Local_185.f_1734[Local_185.f_1998[iVar0 /*14*/] /*5*/].f_1 > 0)
			{
				StringIntConCat(&Var1, Local_185.f_1998[iVar0 /*14*/].f_12 + 1, 64);
			}
			func_87("MPInvPersCommon", &Var1, Local_185.f_1998[iVar0 /*14*/].f_5, Local_185.f_1998[iVar0 /*14*/].f_5.f_1, Local_185.f_1734[Local_185.f_1998[iVar0 /*14*/] /*5*/].f_3, Local_185.f_1734[Local_185.f_1998[iVar0 /*14*/] /*5*/].f_3.f_1, Local_185.f_1998[iVar0 /*14*/].f_9, Local_185.f_1765);
		}
		iVar0++;
	}
}

void func_286()//Position - 0xDE1E
{
	float fVar0;
	float fVar1;
	struct<2> Var2[4];
	float fVar11;
	struct<2> Var12[3];
	struct<2> Var19;
	struct<9> Var21;
	struct<2> Var202;
	struct<2> Var204;
	int iVar206;
	struct<2> Var207;
	struct<2> Var209;
	struct<2> Var211;
	struct<2> Var213;
	struct<9> Var215;
	struct<2> Var351;
	struct<2> Var353;
	struct<2> Var355;
	struct<2> Var357;
	struct<2> Var359[4];
	struct<2> Var368;
	bool bVar370;
	int iVar371;
	int iVar372;
	float fVar373;
	float fVar374;
	struct<2> Var375;
	bool bVar377;
	int iVar378;
	int iVar379;
	bool bVar380;
	int iVar381;
	int iVar382;
	bool bVar383;
	int iVar384;
	float fVar385;
	struct<2> Var386;
	struct<2> Var388;
	int iVar390;
	float fVar391;
	struct<2> Var392;
	struct<2> Var394;
	bool bVar396;
	struct<2> Var397;
	float fVar399;
	struct<2> Var400;
	struct<2> Var402;
	int iVar404;
	float fVar405;
	bool bVar406;
	int iVar407;
	bool bVar408;
	int iVar409;
	int iVar410;
	struct<2> Var411;
	struct<2> Var413;
	
	Var2[0 /*2*/] = { func_92((Local_185.f_2368.f_321 + -0.056f), (Local_185.f_2368.f_321.f_1 + 0.047f)) };
	Var2[1 /*2*/] = { func_92((Local_185.f_2368.f_321 + -0.034f), (Local_185.f_2368.f_321.f_1 + -0.036f)) };
	Var2[2 /*2*/] = { func_92((Local_185.f_2368.f_321 + 0.046f), (Local_185.f_2368.f_321.f_1 + -0.026f)) };
	Var2[3 /*2*/] = { func_92((Local_185.f_2368.f_321 + 0.039f), (Local_185.f_2368.f_321.f_1 + 0.047f)) };
	fVar11 = 0f;
	if ((Local_185.f_2368 == 1 || Local_185.f_2368 == 2) || Local_185.f_2368 == 4)
	{
		fVar11 = -((0.144444f - 0.12963f) / 2f);
	}
	Var19 = { func_197(func_92((Local_185.f_2368.f_321 + 0.0075f), ((Local_185.f_2368.f_321.f_1 + -0.055f) + fVar11))) };
	Var12[0 /*2*/] = { func_150(Var19, func_197(func_92(-0.01f, 0.032f))) };
	Var12[1 /*2*/] = { func_150(Var19, func_197(func_92(-0.01f, -0.032f))) };
	Var12[2 /*2*/] = { func_150(Var19, func_197(func_92(0.059f, 0f))) };
	if (Local_185.f_2368.f_325 != 0)
	{
		fVar1 = SYSTEM::SIN((IntToFloat(Local_185.f_2368.f_325) * -15f));
		fVar0 = SYSTEM::COS((IntToFloat(Local_185.f_2368.f_325) * -15f));
		Var12[0 /*2*/] = { func_194(Var19, Var12[0 /*2*/], fVar1, fVar0) };
		Var12[1 /*2*/] = { func_194(Var19, Var12[1 /*2*/], fVar1, fVar0) };
		Var12[2 /*2*/] = { func_194(Var19, Var12[2 /*2*/], fVar1, fVar0) };
	}
	Var12[0 /*2*/] = { func_91(Var12[0 /*2*/]) };
	Var12[1 /*2*/] = { func_91(Var12[1 /*2*/]) };
	Var12[2 /*2*/] = { func_91(Var12[2 /*2*/]) };
	Var21 = 20;
	Var21.f_1 = 4;
	Var21.f_1.f_9 = 4;
	Var21.f_1.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var21.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	iVar206 = 0;
	iVar206 = 0;
	while (iVar206 <= 19)
	{
		if (Local_185.f_2368.f_3[iVar206 /*14*/].f_11 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() > (Local_185.f_2368.f_3[iVar206 /*14*/].f_11 + Local_185.f_1734[Local_185.f_2368.f_3[iVar206 /*14*/] /*5*/].f_2))
		{
		}
		else if (func_209(Local_185.f_2368.f_3[iVar206 /*14*/].f_5, func_92(0.0001f, 0.0001f)))
		{
		}
		else if (Local_185.f_2368.f_3[iVar206 /*14*/] == 5)
		{
		}
		else
		{
			Var207 = { func_197(Local_185.f_2368.f_3[iVar206 /*14*/].f_5) };
			Var209 = { func_197(Local_185.f_2368.f_3[iVar206 /*14*/].f_7) };
			Var211 = { func_196(func_150(Var207, Var209), 2f) };
			if (!func_195(Local_185.f_2368.f_3[iVar206 /*14*/].f_9, -0.0001f, 0.0001f, 0))
			{
				fVar1 = SYSTEM::SIN(Local_185.f_2368.f_3[iVar206 /*14*/].f_9);
				fVar0 = SYSTEM::COS(Local_185.f_2368.f_3[iVar206 /*14*/].f_9);
				Var202 = { func_194(Var211, Var207, -fVar1, fVar0) };
				Var204 = { func_194(Var211, Var209, -fVar1, fVar0) };
			}
			else
			{
				Var202 = { Var207 };
				Var204 = { Var209 };
			}
			Var213 = { func_197(func_196(Local_185.f_1734[Local_185.f_2368.f_3[iVar206 /*14*/] /*5*/].f_3, 2f)) };
			Var21[iVar206 /*9*/][0 /*2*/] = (Var204.f_0 - Var213.f_0);
			Var21[iVar206 /*9*/][1 /*2*/] = Var21[iVar206 /*9*/][0 /*2*/];
			Var21[iVar206 /*9*/][2 /*2*/] = (Var202.f_0 + Var213.f_0);
			Var21[iVar206 /*9*/][3 /*2*/] = Var21[iVar206 /*9*/][2 /*2*/];
			Var21[iVar206 /*9*/][0 /*2*/].f_1 = (Var204.f_1 + Var213.f_1);
			Var21[iVar206 /*9*/][1 /*2*/].f_1 = (Var202.f_1 - Var213.f_1);
			Var21[iVar206 /*9*/][2 /*2*/].f_1 = Var21[iVar206 /*9*/][1 /*2*/].f_1;
			Var21[iVar206 /*9*/][3 /*2*/].f_1 = Var21[iVar206 /*9*/][0 /*2*/].f_1;
			if (!func_195(Local_185.f_2368.f_3[iVar206 /*14*/].f_9, -0.0001f, 0.0001f, 0))
			{
				Var21[iVar206 /*9*/][0 /*2*/] = { func_194(Var211, Var21[iVar206 /*9*/][0 /*2*/], fVar1, fVar0) };
				Var21[iVar206 /*9*/][1 /*2*/] = { func_194(Var211, Var21[iVar206 /*9*/][1 /*2*/], fVar1, fVar0) };
				Var21[iVar206 /*9*/][2 /*2*/] = { func_194(Var211, Var21[iVar206 /*9*/][2 /*2*/], fVar1, fVar0) };
				Var21[iVar206 /*9*/][3 /*2*/] = { func_194(Var211, Var21[iVar206 /*9*/][3 /*2*/], fVar1, fVar0) };
			}
			Var21[iVar206 /*9*/][0 /*2*/] = { func_91(Var21[iVar206 /*9*/][0 /*2*/]) };
			Var21[iVar206 /*9*/][1 /*2*/] = { func_91(Var21[iVar206 /*9*/][1 /*2*/]) };
			Var21[iVar206 /*9*/][2 /*2*/] = { func_91(Var21[iVar206 /*9*/][2 /*2*/]) };
			Var21[iVar206 /*9*/][3 /*2*/] = { func_91(Var21[iVar206 /*9*/][3 /*2*/]) };
		}
		iVar206++;
	}
	Var215 = 15;
	Var215.f_1 = 4;
	Var215.f_1.f_9 = 4;
	Var215.f_1.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var215.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	iVar206 = 0;
	while (iVar206 <= 14)
	{
		if (Local_185.f_1998[iVar206 /*14*/].f_11 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() > (Local_185.f_1998[iVar206 /*14*/].f_11 + Local_185.f_1734[Local_185.f_1998[iVar206 /*14*/] /*5*/].f_2))
		{
		}
		else if (func_209(Local_185.f_1998[iVar206 /*14*/].f_5, func_92(0.0001f, 0.0001f)))
		{
		}
		else
		{
			Var351 = { func_197(Local_185.f_1998[iVar206 /*14*/].f_5) };
			Var353 = { func_197(Local_185.f_1998[iVar206 /*14*/].f_7) };
			Var355 = { func_196(func_150(Var351, Var353), 2f) };
			if (!func_195(Local_185.f_1998[iVar206 /*14*/].f_9, -0.0001f, 0.0001f, 0))
			{
				fVar1 = SYSTEM::SIN(Local_185.f_1998[iVar206 /*14*/].f_9);
				fVar0 = SYSTEM::COS(Local_185.f_1998[iVar206 /*14*/].f_9);
				Var202 = { func_194(Var355, Var351, -fVar1, fVar0) };
				Var204 = { func_194(Var355, Var353, -fVar1, fVar0) };
			}
			else
			{
				Var202 = { Var351 };
				Var204 = { Var353 };
			}
			Var357 = { func_197(func_196(Local_185.f_1734[Local_185.f_1998[iVar206 /*14*/] /*5*/].f_3, 2f)) };
			Var215[iVar206 /*9*/][0 /*2*/] = (Var202.f_0 - Var357.f_0);
			Var215[iVar206 /*9*/][1 /*2*/] = Var215[iVar206 /*9*/][0 /*2*/];
			Var215[iVar206 /*9*/][2 /*2*/] = (Var204.f_0 + Var357.f_0);
			Var215[iVar206 /*9*/][3 /*2*/] = Var215[iVar206 /*9*/][2 /*2*/];
			Var215[iVar206 /*9*/][0 /*2*/].f_1 = (Var204.f_1 + Var357.f_1);
			Var215[iVar206 /*9*/][1 /*2*/].f_1 = (Var202.f_1 - Var357.f_1);
			Var215[iVar206 /*9*/][2 /*2*/].f_1 = Var215[iVar206 /*9*/][1 /*2*/].f_1;
			Var215[iVar206 /*9*/][3 /*2*/].f_1 = Var215[iVar206 /*9*/][0 /*2*/].f_1;
			if (!func_195(Local_185.f_1998[iVar206 /*14*/].f_9, -0.0001f, 0.0001f, 0))
			{
				Var215[iVar206 /*9*/][0 /*2*/] = { func_194(Var355, Var215[iVar206 /*9*/][0 /*2*/], fVar1, fVar0) };
				Var215[iVar206 /*9*/][1 /*2*/] = { func_194(Var355, Var215[iVar206 /*9*/][1 /*2*/], fVar1, fVar0) };
				Var215[iVar206 /*9*/][2 /*2*/] = { func_194(Var355, Var215[iVar206 /*9*/][2 /*2*/], fVar1, fVar0) };
				Var215[iVar206 /*9*/][3 /*2*/] = { func_194(Var355, Var215[iVar206 /*9*/][3 /*2*/], fVar1, fVar0) };
			}
			Var215[iVar206 /*9*/][0 /*2*/] = { func_91(Var215[iVar206 /*9*/][0 /*2*/]) };
			Var215[iVar206 /*9*/][1 /*2*/] = { func_91(Var215[iVar206 /*9*/][1 /*2*/]) };
			Var215[iVar206 /*9*/][2 /*2*/] = { func_91(Var215[iVar206 /*9*/][2 /*2*/]) };
			Var215[iVar206 /*9*/][3 /*2*/] = { func_91(Var215[iVar206 /*9*/][3 /*2*/]) };
		}
		iVar206++;
	}
	Var368 = { func_92(-1f, -1f) };
	bVar370 = false;
	while (bVar370 <= 13)
	{
		if (Local_185.f_1801[bVar370 /*14*/] == -1)
		{
		}
		else if (Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 6)
		{
		}
		else if (Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 3)
		{
		}
		else if (Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 4)
		{
		}
		else if (Local_185.f_1801[bVar370 /*14*/].f_7 == 0)
		{
		}
		else if (Local_185.f_1801[bVar370 /*14*/].f_3 - (Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_22 / 2f)) > (1f - 0.15625f)
		{
		}
		else if (func_209(Local_185.f_1801[bVar370 /*14*/].f_3, Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_22))
		{
		}
		else
		{
			Var375 = { Local_185.f_1801[bVar370 /*14*/].f_3 };
			iVar371 = 0;
			while (iVar371 <= 3)
			{
				Var359[iVar371 /*2*/] = { func_150(Var375, Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_5[iVar371 /*2*/]) };
				iVar371++;
			}
			if (Local_185.f_2368.f_331 > 0 && Local_185.f_2368 != 3)
			{
				fVar373 = MISC::ABSF((Var375.f_0 - Local_185.f_2368.f_321));
				fVar374 = MISC::ABSF((Var375.f_1 - Local_185.f_2368.f_321.f_1));
				if (fVar373 <= func_299(Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_22, 0.104167f) && fVar374 <= func_299(Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_22.f_1, 0.12963f))
				{
					bVar377 = false;
					iVar371 = 0;
					while (iVar371 <= 3)
					{
						iVar378 = iVar371 + 1;
						if (iVar378 >= 4)
						{
							iVar378 = 0;
						}
						iVar372 = 0;
						while (iVar372 <= 3)
						{
							iVar379 = iVar372 + 1;
							if (iVar379 >= 4)
							{
								iVar379 = 0;
							}
							if (func_297(Var2[iVar371 /*2*/], Var2[iVar378 /*2*/], Var359[iVar372 /*2*/], Var359[iVar379 /*2*/], &Var368))
							{
								if (Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 5)
								{
									func_292(bVar370, 0);
									Local_185.f_1801[bVar370 /*14*/].f_7 = 0;
								}
								else
								{
									if (Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] != 8)
									{
										func_253(bVar370, -Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_17);
									}
									if (Local_185.f_2368.f_334 + 750 < NETWORK::GET_NETWORK_TIME() && Local_185.f_2368.f_337 + 2000 < NETWORK::GET_NETWORK_TIME())
									{
										func_237("Tank_Collision", &(Local_185.f_2368.f_343));
									}
									func_291(-4);
								}
								bVar377 = true;
							}
							else
							{
								iVar372++;
							}
						}
						if (bVar377)
						{
						}
						else
						{
							iVar371++;
						}
					}
					if (bVar377)
					{
					}
					else if ((Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 5 || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 3) || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 4)
					{
					}
					else
					{
						iVar206 = 0;
						while (iVar206 <= 19)
						{
							if (Local_185.f_2368.f_3[iVar206 /*14*/].f_11 == -2147483647)
							{
							}
							else if (Local_185.f_2368.f_3[iVar206 /*14*/] == 5)
							{
							}
							else if (NETWORK::GET_NETWORK_TIME() > (Local_185.f_2368.f_3[iVar206 /*14*/].f_11 + Local_185.f_1734[Local_185.f_2368.f_3[iVar206 /*14*/] /*5*/].f_2))
							{
							}
							else if (func_209(Local_185.f_2368.f_3[iVar206 /*14*/].f_5, func_92(0.0001f, 0.0001f)))
							{
							}
							else
							{
								fVar373 = MISC::ABSF((Var375.f_0 - Local_185.f_2368.f_3[iVar206 /*14*/].f_5));
								fVar374 = MISC::ABSF((Var375.f_1 - Local_185.f_2368.f_3[iVar206 /*14*/].f_5.f_1));
								if (fVar373 <= (Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_22 + Local_185.f_1734[Local_185.f_2368.f_3[iVar206 /*14*/] /*5*/].f_3) && fVar374 <= (Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_22.f_1 + Local_185.f_1734[Local_185.f_2368.f_3[iVar206 /*14*/] /*5*/].f_3.f_1))
								{
									bVar380 = false;
									iVar371 = 0;
									while (iVar371 <= 3)
									{
										iVar381 = iVar371 + 1;
										if (iVar381 >= 4)
										{
											iVar381 = 0;
										}
										if (func_297(Var21[iVar206 /*9*/][0 /*2*/], Var21[iVar206 /*9*/][2 /*2*/], Var359[iVar371 /*2*/], Var359[iVar381 /*2*/], &Var368) || func_297(Var21[iVar206 /*9*/][1 /*2*/], Var21[iVar206 /*9*/][3 /*2*/], Var359[iVar371 /*2*/], Var359[iVar381 /*2*/], &Var368))
										{
											if (Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] != 8)
											{
												func_253(bVar370, -Local_185.f_2368.f_3[iVar206 /*14*/].f_13);
											}
											func_232(func_234(Local_185.f_2368.f_3[iVar206 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_185.f_2368.f_3[iVar371 /*14*/].f_5);
											func_231(Var368, 0);
											Local_185.f_2368.f_3[iVar206 /*14*/].f_11 = -2147483647;
											bVar380 = true;
										}
										else
										{
											iVar371++;
										}
									}
									if (bVar380)
									{
									}
								}
							}
							iVar206++;
						}
					}
					bVar370++;
					if (((Local_185.f_2368.f_2 == 3 && Local_185.f_2368.f_3[0 /*14*/].f_11 != -2147483647) && Local_185.f_2368.f_3[0 /*14*/] == 5) && NETWORK::GET_NETWORK_TIME() <= (Local_185.f_2368.f_3[0 /*14*/].f_11 + Local_185.f_1734[Local_185.f_2368.f_3[0 /*14*/] /*5*/].f_2))
					{
						iVar382 = 0;
						bVar383 = -1;
						iVar384 = 0;
						fVar385 = 3.402823E+38f;
						Var386 = { func_92(-1f, -1f) };
						bVar370 = false;
						while (bVar370 <= 13)
						{
							if (Local_185.f_1801[bVar370 /*14*/] == -1)
							{
							}
							else if (((Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 5 || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 3) || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 4) || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 6)
							{
							}
							else if (Local_185.f_1801[bVar370 /*14*/].f_7 == 0)
							{
							}
							else if (func_209(Local_185.f_1801[bVar370 /*14*/].f_3, Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_22))
							{
							}
							else
							{
								Var388 = { Local_185.f_1801[bVar370 /*14*/].f_3 };
								iVar371 = 0;
								while (iVar371 <= 3)
								{
									Var359[iVar371 /*2*/] = { func_150(Var388, Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_5[iVar371 /*2*/]) };
									iVar371++;
								}
								iVar371 = 0;
								while (iVar371 <= 3)
								{
									iVar390 = iVar371 + 1;
									if (iVar390 >= 4)
									{
										iVar390 = 0;
									}
									if (func_297(Local_185.f_2368.f_3[0 /*14*/].f_1, Local_185.f_2368.f_3[0 /*14*/].f_3, Var359[iVar371 /*2*/], Var359[iVar390 /*2*/], &Var368))
									{
										fVar391 = func_230(Local_185.f_2368.f_3[0 /*14*/].f_1, Var368);
										if (fVar391 < fVar385)
										{
											fVar385 = fVar391;
											bVar383 = bVar370;
											Var386 = { Var368 };
										}
									}
									iVar371++;
								}
							}
							bVar370++;
						}
						if (bVar383 != -1)
						{
							iVar384++;
							MISC::SET_BIT(&iVar382, bVar383);
							Local_185.f_2368.f_3[0 /*14*/].f_3 = { Var386 };
							if (Local_185.f_753[Local_185.f_1801[bVar383 /*14*/] /*28*/] != 8)
							{
								if (IntToFloat(NETWORK::GET_NETWORK_TIME()) > (IntToFloat(Local_185.f_1801[bVar383 /*14*/].f_8) + (62f * func_290())))
								{
									func_253(bVar383, -Local_185.f_2368.f_3[0 /*14*/].f_13);
								}
								iVar371 = 0;
								while (iVar371 <= 2)
								{
									bVar396 = false;
									bVar370 = false;
									while (bVar370 <= 13)
									{
										if (BitTest(iVar382, bVar370))
										{
										}
										else if (Local_185.f_1801[bVar370 /*14*/] == -1)
										{
										}
										else if ((((Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 5 || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 3) || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 4) || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 6) || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 8)
										{
										}
										else if (Local_185.f_1801[bVar370 /*14*/].f_7 == 0)
										{
										}
										else if (func_209(Local_185.f_1801[bVar370 /*14*/].f_3, Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_22))
										{
										}
										else
										{
											Var397 = { Local_185.f_1801[bVar370 /*14*/].f_3 };
											if (func_230(Local_185.f_2368.f_3[iVar371 /*14*/].f_3, Var397) < SYSTEM::POW(0.35f, 2f))
											{
												MISC::SET_BIT(&iVar382, bVar370);
												bVar396 = true;
												iVar384++;
												Var392 = { func_197(Local_185.f_2368.f_3[iVar371 /*14*/].f_3) };
												Var394 = { func_197(Var397) };
												Local_185.f_2368.f_3[iVar371 + 1 /*14*/] = 5;
												Local_185.f_2368.f_3[iVar371 + 1 /*14*/].f_1 = { Local_185.f_2368.f_3[iVar371 /*14*/].f_3 };
												Local_185.f_2368.f_3[iVar371 + 1 /*14*/].f_3 = { Var397 };
												Local_185.f_2368.f_3[iVar371 + 1 /*14*/].f_5 = { Local_185.f_2368.f_3[iVar371 + 1 /*14*/].f_1 };
												Local_185.f_2368.f_3[iVar371 + 1 /*14*/].f_9 = MISC::ATAN2((Var394.f_1 - Var392.f_1), (Var394.f_0 - Var392.f_0));
												Local_185.f_2368.f_3[iVar371 + 1 /*14*/].f_11 = NETWORK::GET_NETWORK_TIME();
												Local_185.f_2368.f_3[iVar371 + 1 /*14*/].f_13 = 2;
												Local_185.f_2368.f_3[iVar371 + 1 /*14*/].f_12 = func_289();
												if (IntToFloat(NETWORK::GET_NETWORK_TIME()) > (IntToFloat(Local_185.f_1801[bVar370 /*14*/].f_8) + (62f * func_290())))
												{
													func_253(bVar370, -Local_185.f_2368.f_3[0 /*14*/].f_13);
												}
											}
											else
											{
												bVar370++;
											}
											if (!bVar396)
											{
											}
											else
											{
												iVar371++;
											}
											func_288(Local_185.f_2368.f_3[0 /*14*/].f_3, iVar384);
											if (Local_185.f_2368.f_324 != Local_185.f_2368.f_325)
											{
												fVar399 = 0f;
												if (Local_185.f_2368.f_324 > Local_185.f_2368.f_325)
												{
													fVar399 = (-15f / 2f);
												}
												else
												{
													fVar399 = (15f / 2f);
												}
												Var400 = { func_91(func_187(func_197(Local_185.f_2368.f_3[0 /*14*/].f_1), func_197(Local_185.f_2368.f_3[0 /*14*/].f_3), fVar399)) };
												bVar383 = -1;
												fVar385 = 3.402823E+38f;
												bVar370 = false;
												while (bVar370 <= 13)
												{
													if (BitTest(iVar382, bVar370))
													{
													}
													else if (Local_185.f_1801[bVar370 /*14*/] == -1)
													{
													}
													else if (((Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 5 || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 3) || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 4) || Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/] == 6)
													{
													}
													else if (Local_185.f_1801[bVar370 /*14*/].f_7 == 0)
													{
													}
													else if (func_209(Local_185.f_1801[bVar370 /*14*/].f_3, Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_22))
													{
													}
													else
													{
														Var402 = { Local_185.f_1801[bVar370 /*14*/].f_3 };
														iVar371 = 0;
														while (iVar371 <= 3)
														{
															Var359[iVar371 /*2*/] = { func_150(Var402, Local_185.f_753[Local_185.f_1801[bVar370 /*14*/] /*28*/].f_5[iVar371 /*2*/]) };
															iVar371++;
														}
														iVar371 = 0;
														while (iVar371 <= 3)
														{
															iVar404 = iVar371 + 1;
															if (iVar404 >= 4)
															{
																iVar404 = 0;
															}
															if (func_297(Local_185.f_2368.f_3[0 /*14*/].f_1, Var400, Var359[iVar371 /*2*/], Var359[iVar404 /*2*/], &Var368))
															{
																fVar405 = func_230(Local_185.f_2368.f_3[0 /*14*/].f_1, Var368);
																if (fVar405 < fVar385)
																{
																	fVar385 = fVar405;
																	bVar383 = bVar370;
																	Var386 = { Var368 };
																}
															}
															iVar371++;
														}
													}
													bVar370++;
												}
												if (bVar383 != -1)
												{
													Var400 = { Var386 };
													if (Local_185.f_753[Local_185.f_1801[bVar383 /*14*/] /*28*/] != 8)
													{
														if (IntToFloat(NETWORK::GET_NETWORK_TIME()) > (IntToFloat(Local_185.f_1801[bVar383 /*14*/].f_8) + (62f * func_290())))
														{
															func_253(bVar383, -Local_185.f_2368.f_3[0 /*14*/].f_13);
														}
													}
												}
											}
											iVar206 = 0;
											while (iVar206 <= 14)
											{
												if (Local_185.f_1998[iVar206 /*14*/].f_11 == -2147483647)
												{
												}
												else if (NETWORK::GET_NETWORK_TIME() > (Local_185.f_1998[iVar206 /*14*/].f_11 + Local_185.f_1734[Local_185.f_1998[iVar206 /*14*/] /*5*/].f_2))
												{
												}
												else if (func_209(Local_185.f_1998[iVar206 /*14*/].f_5, func_92(0.0001f, 0.0001f)))
												{
												}
												else
												{
													fVar373 = MISC::ABSF((Local_185.f_2368.f_321 - Local_185.f_1998[iVar206 /*14*/].f_5));
													fVar374 = MISC::ABSF((Local_185.f_2368.f_321.f_1 - Local_185.f_1998[iVar206 /*14*/].f_5.f_1));
													if (fVar373 <= (0.104167f + Local_185.f_1734[Local_185.f_1998[iVar206 /*14*/] /*5*/].f_3) && fVar374 <= (0.12963f + Local_185.f_1734[Local_185.f_1998[iVar206 /*14*/] /*5*/].f_3.f_1))
													{
														bVar406 = false;
														iVar371 = 0;
														while (iVar371 <= 3)
														{
															iVar407 = iVar371 + 1;
															if (iVar407 >= 4)
															{
																iVar407 = 0;
															}
															if (func_297(Var215[iVar206 /*9*/][0 /*2*/], Var215[iVar206 /*9*/][2 /*2*/], Var2[iVar371 /*2*/], Var2[iVar407 /*2*/], &Var368) || func_297(Var215[iVar206 /*9*/][1 /*2*/], Var215[iVar206 /*9*/][3 /*2*/], Var2[iVar371 /*2*/], Var2[iVar407 /*2*/], &Var368))
															{
																func_291(-Local_185.f_1998[iVar206 /*14*/].f_13);
																func_231(Var368, 0);
																Local_185.f_1998[iVar206 /*14*/].f_11 = -2147483647;
																if (Local_185.f_1998[iVar206 /*14*/] == 1)
																{
																	func_232("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar206 /*14*/].f_5);
																}
																else
																{
																	func_232("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar206 /*14*/].f_5);
																}
																bVar406 = true;
															}
															else
															{
																iVar371++;
															}
														}
														if (bVar406)
														{
														}
														else
														{
															fVar373 = MISC::ABSF(((Local_185.f_2368.f_321 + 0.0075f) - Local_185.f_1998[iVar206 /*14*/].f_5));
															fVar374 = MISC::ABSF(((Local_185.f_2368.f_321.f_1 + -0.055f) - Local_185.f_1998[iVar206 /*14*/].f_5.f_1));
															if (fVar373 <= (0.104167f + Local_185.f_1734[Local_185.f_1998[iVar206 /*14*/] /*5*/].f_3) && fVar374 <= (0.059259f + Local_185.f_1734[Local_185.f_1998[iVar206 /*14*/] /*5*/].f_3.f_1))
															{
																bVar408 = false;
																iVar371 = 0;
																while (iVar371 <= 2)
																{
																	iVar409 = iVar371 + 1;
																	if (iVar409 > 2)
																	{
																		iVar409 = 0;
																	}
																	if (func_297(Var215[iVar206 /*9*/][0 /*2*/], Var215[iVar206 /*9*/][2 /*2*/], Var12[iVar371 /*2*/], Var12[iVar409 /*2*/], &Var368) || func_297(Var215[iVar206 /*9*/][1 /*2*/], Var215[iVar206 /*9*/][3 /*2*/], Var12[iVar371 /*2*/], Var12[iVar409 /*2*/], &Var368))
																	{
																		func_291(-Local_185.f_1998[iVar206 /*14*/].f_13);
																		func_231(Var368, 0);
																		Local_185.f_1998[iVar206 /*14*/].f_11 = -2147483647;
																		if (Local_185.f_1998[iVar206 /*14*/] == 1)
																		{
																			func_232("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar206 /*14*/].f_5);
																		}
																		else
																		{
																			func_232("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar206 /*14*/].f_5);
																		}
																		bVar408 = true;
																	}
																	else
																	{
																		iVar371++;
																	}
																}
																if (bVar408)
																{
																}
																else
																{
																	iVar410 = 0;
																	iVar410 = 0;
																	while (iVar410 <= 19)
																	{
																		if (Local_185.f_2368.f_3[iVar410 /*14*/].f_11 == -2147483647)
																		{
																		}
																		else if (NETWORK::GET_NETWORK_TIME() > (Local_185.f_2368.f_3[iVar410 /*14*/].f_11 + Local_185.f_1734[Local_185.f_2368.f_3[iVar410 /*14*/] /*5*/].f_2))
																		{
																		}
																		else if (Local_185.f_2368.f_3[iVar410 /*14*/] == 5)
																		{
																			if (func_297(Local_185.f_2368.f_3[iVar410 /*14*/].f_1, Local_185.f_2368.f_3[iVar410 /*14*/].f_3, Var215[iVar206 /*9*/][0 /*2*/], Var215[iVar206 /*9*/][2 /*2*/], &Var368) || func_297(Local_185.f_2368.f_3[iVar410 /*14*/].f_1, Local_185.f_2368.f_3[iVar410 /*14*/].f_3, Var215[iVar206 /*9*/][1 /*2*/], Var215[iVar206 /*9*/][3 /*2*/], &Var368))
																			{
																				Local_185.f_1998[iVar206 /*14*/].f_11 = -2147483647;
																				func_231(Var368, 0);
																				if (Local_185.f_1998[iVar206 /*14*/] == 1)
																				{
																					func_232("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar206 /*14*/].f_5);
																				}
																				else
																				{
																					func_232("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar206 /*14*/].f_5);
																				}
																			}
																			else
																			{
																				Jump @7682; //curOff = 7013
																				if (func_209(Local_185.f_2368.f_3[iVar410 /*14*/].f_5, func_92(0.0001f, 0.0001f)))
																				{
																				}
																				else
																				{
																					fVar373 = MISC::ABSF((Local_185.f_1998[iVar206 /*14*/].f_5 - Local_185.f_2368.f_3[iVar410 /*14*/].f_5));
																					fVar374 = MISC::ABSF((Local_185.f_1998[iVar206 /*14*/].f_5.f_1 - Local_185.f_2368.f_3[iVar410 /*14*/].f_5.f_1));
																					Var411 = { func_287(Local_185.f_2368.f_3[iVar410 /*14*/].f_5, Local_185.f_2368.f_3[iVar410 /*14*/].f_7, Local_185.f_1734[Local_185.f_2368.f_3[iVar410 /*14*/] /*5*/].f_3) };
																					Var413 = { func_287(Local_185.f_1998[iVar206 /*14*/].f_5, Local_185.f_1998[iVar206 /*14*/].f_7, Local_185.f_1734[Local_185.f_1998[iVar206 /*14*/] /*5*/].f_3) };
																					if (((fVar373 <= Var411.f_0 && fVar374 <= Var411.f_1) && fVar373 <= Var413.f_0) && fVar374 <= Var413.f_1)
																					{
																						if (((func_297(Var21[iVar410 /*9*/][0 /*2*/], Var21[iVar410 /*9*/][2 /*2*/], Var215[iVar206 /*9*/][0 /*2*/], Var215[iVar206 /*9*/][2 /*2*/], &Var368) || func_297(Var21[iVar410 /*9*/][1 /*2*/], Var21[iVar410 /*9*/][3 /*2*/], Var215[iVar206 /*9*/][1 /*2*/], Var215[iVar206 /*9*/][3 /*2*/], &Var368)) || func_297(Var21[iVar410 /*9*/][0 /*2*/], Var21[iVar410 /*9*/][2 /*2*/], Var215[iVar206 /*9*/][1 /*2*/], Var215[iVar206 /*9*/][3 /*2*/], &Var368)) || func_297(Var21[iVar410 /*9*/][1 /*2*/], Var21[iVar410 /*9*/][3 /*2*/], Var215[iVar206 /*9*/][0 /*2*/], Var215[iVar206 /*9*/][2 /*2*/], &Var368))
																						{
																							Local_185.f_2368.f_3[iVar410 /*14*/].f_11 = -2147483647;
																							Local_185.f_1998[iVar206 /*14*/].f_11 = -2147483647;
																							func_231(Var368, 0);
																							if (Local_185.f_1998[iVar206 /*14*/] == 1)
																							{
																								func_232("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar206 /*14*/].f_5);
																							}
																							else
																							{
																								func_232("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar206 /*14*/].f_5);
																							}
																							func_232(func_234(Local_185.f_2368.f_3[iVar410 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_185.f_2368.f_3[iVar410 /*14*/].f_5);
																						}
																						else
																						{
																							iVar410++;
																						}
																						iVar206++;
																					}

struct<2> func_287(struct<2> Param0, struct<2> Param2, struct<2> Param4)//Position - 0xFC37
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	
	fVar2 = MISC::ABSF((Param0.f_0 - Param2.f_0));
	fVar3 = MISC::ABSF((Param0.f_1 - Param2.f_1));
	Var0 = { func_92((fVar2 + Param4.f_0), (fVar3 + Param4.f_1)) };
	return Var0;
}

void func_288(struct<2> Param0, int iParam2)//Position - 0xFC71
{
	float fVar0;
	
	fVar0 = func_233(Param0);
	if (AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_341))
	{
		AUDIO::PLAY_SOUND_FRONTEND(Local_185.f_2368.f_341, "Tank_Weapon_Lightning_Gun_Fire_Hit", "dlc_vw_am_ip_tank_sounds", false);
	}
	AUDIO::SET_VARIABLE_ON_SOUND(Local_185.f_2368.f_341, "Screen_Position", fVar0);
	AUDIO::SET_VARIABLE_ON_SOUND(Local_185.f_2368.f_341, "TargetsHit", SYSTEM::TO_FLOAT(iParam2));
}

int func_289()//Position - 0xFCCF
{
	switch (Local_185.f_2368.f_2)
	{
		case 0:
			return -1;
		
		case 1:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		
		case 2:
			return 0;
		
		case 3:
			if (Local_185.f_2368.f_3[0 /*14*/].f_12 >= Local_185.f_1734[Local_185.f_2368.f_3[0 /*14*/] /*5*/].f_1 || Local_185.f_2368.f_3[0 /*14*/].f_12 < 0)
			{
				Local_185.f_2368.f_3[0 /*14*/].f_12 = 0;
			}
			return Local_185.f_2368.f_3[0 /*14*/].f_12;
		
		default:
	}
	return 2147483647;
}

float func_290()//Position - 0xFD64
{
	if (Local_185.f_2871 == 4)
	{
		return 0.75f;
	}
	return 1f;
}

void func_291(int iParam0)//Position - 0xFD7E
{
	int iVar0;
	int iVar1;
	
	if (Local_185.f_2368 == 3 || Local_185.f_2368 == 4)
	{
		return;
	}
	if (iParam0 < 0)
	{
		if (Local_185.f_2368.f_334 + 750 > NETWORK::GET_NETWORK_TIME() || Local_185.f_2368.f_337 + 2000 > NETWORK::GET_NETWORK_TIME())
		{
			return;
		}
		if (BitTest(Local_185.f_2368.f_333, 0))
		{
			MISC::CLEAR_BIT(&(Local_185.f_2368.f_333), 0);
			return;
		}
	}
	iVar0 = func_218(Local_185.f_2368.f_331 > 1, 1, 0);
	iVar1 = func_156((Local_185.f_2368.f_331 + iParam0), iVar0, 20);
	Local_185.f_2368.f_332 = Local_185.f_2368.f_331;
	Local_185.f_2368.f_331 = iVar1;
	if (iParam0 < 0)
	{
		Local_185.f_2368.f_321 = (Local_185.f_2368.f_321 - 0.004166667f);
		if (Local_185.f_2368.f_321 < 0.225f)
		{
			Local_185.f_2368.f_321 = 0.225f;
		}
		Local_185.f_2368.f_334 = NETWORK::GET_NETWORK_TIME();
	}
	else if (iParam0 > 0)
	{
		Local_185.f_2368.f_335 = NETWORK::GET_NETWORK_TIME();
	}
	if (iVar1 == 0)
	{
		Local_185.f_2368.f_330 = (Local_185.f_2368.f_330 - 1);
		Local_185.f_2368.f_319 = 0;
		func_107(3);
		func_237("Tank_Destroyed", &(Local_185.f_2368.f_343));
		if (Local_185.f_2368.f_330 >= 0)
		{
			func_54("Frontend_Player_Death");
		}
		Local_185.f_2368.f_327 = NETWORK::GET_NETWORK_TIME();
		func_108(0);
	}
}

void func_292(int iParam0, bool bParam1)//Position - 0xFEE6
{
	switch (Local_185.f_1801[iParam0 /*14*/])
	{
		case 18:
			if (Local_185.f_2368.f_2 != 1)
			{
				func_262("IAP_PU_FLAME");
				func_108(1);
				func_237("Tank_Weapon_Change", &(Local_185.f_2368.f_343));
			}
			else
			{
				func_262("IAP_PU_WAO");
				func_127(1000, 1, func_92(-1f, -1f));
			}
			break;
		
		case 19:
			if (Local_185.f_2368.f_2 != 2)
			{
				func_262("IAP_PU_ROCKETS");
				func_108(2);
				func_237("Tank_Weapon_Change", &(Local_185.f_2368.f_343));
			}
			else
			{
				func_262("IAP_PU_WAO");
				func_127(1000, 1, func_92(-1f, -1f));
			}
			break;
		
		case 25:
			if (Local_185.f_2368.f_2 != 3)
			{
				func_262("IAP_PU_PLASMA");
				func_108(3);
				func_237("Tank_Weapon_Change", &(Local_185.f_2368.f_343));
			}
			else
			{
				func_262("IAP_PU_WAO");
				func_127(1000, 1, func_92(-1f, -1f));
			}
			break;
		
		case 20:
			if (Local_185.f_2368.f_331 == 20)
			{
				func_262("IAP_PU_HPO");
				Local_185.f_2368.f_330++;
			}
			else
			{
				func_262("IAP_PU_HP");
				func_291(4);
			}
			break;
		
		case 21:
			func_262("IAP_PU_1UP");
			Local_185.f_2368.f_330++;
			break;
		
		case 24:
			func_262("IAP_PU_ARMOR");
			func_291(-4);
			break;
		
		case 22:
			func_262("IAP_PU_SCORE");
			func_127(10000, 1, func_92(-1f, -1f));
			break;
		
		case 28:
			func_232(func_296(Local_185.f_1801[iParam0 /*14*/]), "dlc_vw_am_ip_powerup_sounds", Local_185.f_1801[iParam0 /*14*/].f_3);
			Local_185.f_1801[iParam0 /*14*/] = func_295(iParam0);
			func_292(iParam0, 1);
			return;
		
		case 23:
			func_262("IAP_PU_SHIELD");
			if (!BitTest(Local_185.f_2368.f_333, 0))
			{
				MISC::SET_BIT(&(Local_185.f_2368.f_333), 0);
			}
			else
			{
				func_262("IAP_PU_SAO");
				func_127(1000, 1, func_92(-1f, -1f));
			}
			break;
		
		case 26:
			if (Local_185.f_2368.f_2 == 0 && !func_294())
			{
				func_262("IAP_PU_TRIPLE");
				MISC::SET_BIT(&(Local_185.f_2368.f_333), 1);
				func_237("Tank_Weapon_Change", &(Local_185.f_2368.f_343));
			}
			else
			{
				func_262("IAP_PU_WAO");
				func_127(1000, 1, func_92(-1f, -1f));
			}
			break;
		
		case 27:
			func_262("IAP_PU_NUKE");
			func_293();
			break;
	}
	Local_185.f_2712.f_1++;
	Local_185.f_2712.f_2++;
	if (Local_185.f_2368.f_330 > 99)
	{
		Local_185.f_2368.f_330 = 99;
	}
	if (!bParam1)
	{
		func_232(func_296(Local_185.f_1801[iParam0 /*14*/]), "dlc_vw_am_ip_powerup_sounds", Local_185.f_1801[iParam0 /*14*/].f_3);
	}
}

void func_293()//Position - 0x101CB
{
	func_232("Tank_Weapon_Nuke_Blast", "dlc_vw_am_ip_tank_sounds", func_92(0.5f, 0.5f));
	func_123(&(Local_185.f_2892), 0, 0);
}

int func_294()//Position - 0x101F8
{
	if (func_17())
	{
		return 1;
	}
	return BitTest(Local_185.f_2368.f_333, 1);
}

var func_295(int iParam0)//Position - 0x10215
{
	int iVar0[11];
	int iVar12;
	var uVar13;
	
	iVar12 = 0;
	if (Local_185.f_1801[iParam0 /*14*/].f_11 & 1 == 0 && Local_185.f_2368.f_2 != 1)
	{
		iVar0[iVar12] = 18;
		iVar12++;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_11 & 2 == 0 && Local_185.f_2368.f_2 != 2)
	{
		iVar0[iVar12] = 19;
		iVar12++;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_11 & 4 == 0 && Local_185.f_2368.f_331 < 20)
	{
		iVar0[iVar12] = 20;
		iVar12++;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_11 & 8 == 0)
	{
		iVar0[iVar12] = 21;
		iVar12++;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_11 & 16 == 0)
	{
		iVar0[iVar12] = 22;
		iVar12++;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_11 & 32 == 0 && !BitTest(Local_185.f_2368.f_333, 0))
	{
		iVar0[iVar12] = 23;
		iVar12++;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_11 & 64 == 0)
	{
		iVar0[iVar12] = 24;
		iVar12++;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_11 & 128 == 0 && Local_185.f_2368.f_2 != 3)
	{
		iVar0[iVar12] = 25;
		iVar12++;
	}
	if ((Local_185.f_1801[iParam0 /*14*/].f_11 & 256 == 0 && Local_185.f_2368.f_2 == 0) && !func_294())
	{
		iVar0[iVar12] = 26;
		iVar12++;
	}
	if (Local_185.f_1801[iParam0 /*14*/].f_11 & 512 == 0 && !func_177())
	{
		iVar0[iVar12] = 27;
		iVar12++;
	}
	uVar13 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar12)];
	return uVar13;
}

char* func_296(int iParam0)//Position - 0x103E7
{
	switch (iParam0)
	{
		case 18:
			return "Powerup_Crate_Collect_Flamethrower";
		
		case 19:
			return "Powerup_Crate_Collect_Rockets";
		
		case 25:
			return "Powerup_Crate_Collect_Beam";
		
		case 26:
			return "Powerup_Crate_Collect_Triple_Shot";
		
		case 20:
		case 21:
			return "Powerup_Crate_Collect_Armour";
		
		case 24:
			return "Powerup_Crate_Collect_Negative";
		
		case 27:
			return "Powerup_Crate_Collect_Nuke";
		
		case 23:
			return "Powerup_Crate_Collect_Shield";
		
		case 22:
		case 28:
			return "Powerup_Crate_Collect_Other";
		
		default:
	}
	return "";
}

int func_297(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6, var uParam8)//Position - 0x1047B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<2> Var9;
	
	fVar0 = (Param2.f_1 - Param0.f_1);
	fVar1 = (Param0.f_0 - Param2.f_0);
	fVar2 = ((fVar0 * Param0.f_0) + (fVar1 * Param0.f_1));
	fVar3 = (Param6.f_1 - Param4.f_1);
	fVar4 = (Param4.f_0 - Param6.f_0);
	fVar5 = ((fVar3 * Param4.f_0) + (fVar4 * Param4.f_1));
	fVar6 = ((fVar0 * fVar4) - (fVar3 * fVar1));
	if (!func_195(fVar6, (0f - 0.0001f), (0f + 0.0001f), 0))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { func_92(fVar7, fVar8) };
		if (((((((func_298((Param0.f_0 - 0.001f), (Param2.f_0 - 0.001f)) <= Var9.f_0 && Var9.f_0 <= func_299((Param0.f_0 + 0.001f), (Param2.f_0 + 0.001f))) && func_298((Param0.f_1 - 0.001f), (Param2.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_299((Param0.f_1 + 0.001f), (Param2.f_1 + 0.001f))) && func_298((Param4.f_0 - 0.001f), (Param6.f_0 - 0.001f)) <= Var9.f_0) && Var9.f_0 <= func_299((Param4.f_0 + 0.001f), (Param6.f_0 + 0.001f))) && func_298((Param4.f_1 - 0.001f), (Param6.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_299((Param4.f_1 + 0.001f), (Param6.f_1 + 0.001f)))
		{
			*uParam8 = { Var9 };
			return 1;
		}
	}
	*uParam8 = { func_92(3.402823E+38f, 3.402823E+38f) };
	return 0;
}

float func_298(float fParam0, float fParam1)//Position - 0x1062C
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_299(float fParam0, float fParam1)//Position - 0x10643
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_300()//Position - 0x1065A
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Local_185.f_1998[iVar0 /*14*/].f_11 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() > (Local_185.f_1998[iVar0 /*14*/].f_11 + Local_185.f_1734[Local_185.f_1998[iVar0 /*14*/] /*5*/].f_2))
		{
		}
		else
		{
			if (func_177())
			{
				func_231(Local_185.f_1998[iVar0 /*14*/].f_5, 0);
				if (Local_185.f_1998[iVar0 /*14*/] == 1)
				{
					func_232("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar0 /*14*/].f_5);
				}
				else
				{
					func_232("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar0 /*14*/].f_5);
				}
				Local_185.f_1998[iVar0 /*14*/].f_11 = -2147483647;
			}
			if (Local_185.f_1734[Local_185.f_1998[iVar0 /*14*/] /*5*/].f_1 > 0)
			{
				Local_185.f_1998[iVar0 /*14*/].f_12 = (Local_185.f_1998[iVar0 /*14*/].f_12 + Local_185.f_2875);
				if (Local_185.f_1998[iVar0 /*14*/].f_12 >= Local_185.f_1734[Local_185.f_1998[iVar0 /*14*/] /*5*/].f_1)
				{
					Local_185.f_1998[iVar0 /*14*/].f_12 = 0;
				}
			}
			fVar1 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_185.f_1998[iVar0 /*14*/].f_11)) / IntToFloat(Local_185.f_1734[Local_185.f_1998[iVar0 /*14*/] /*5*/].f_2));
			Local_185.f_1998[iVar0 /*14*/].f_7 = { Local_185.f_1998[iVar0 /*14*/].f_5 };
			Local_185.f_1998[iVar0 /*14*/].f_5 = { func_169(Local_185.f_1998[iVar0 /*14*/].f_1, Local_185.f_1998[iVar0 /*14*/].f_3, fVar1) };
			if (Local_185.f_1998[iVar0 /*14*/].f_3.f_1 >= Local_185.f_1998[iVar0 /*14*/].f_1.f_1)
			{
				fVar2 = func_223(Local_185.f_1998[iVar0 /*14*/].f_5, 0);
				if (Local_185.f_1998[iVar0 /*14*/].f_5.f_1 > fVar2)
				{
					func_231(Local_185.f_1998[iVar0 /*14*/].f_5, 0);
					if (Local_185.f_1998[iVar0 /*14*/] == 1)
					{
						func_232("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar0 /*14*/].f_5);
					}
					else
					{
						func_232("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_185.f_1998[iVar0 /*14*/].f_5);
					}
					Local_185.f_1998[iVar0 /*14*/].f_11 = -2147483647;
				}
			}
		}
		iVar0++;
	}
}

void func_301()//Position - 0x10894
{
	int iVar0;
	int iVar1;
	
	if (func_311())
	{
		func_282();
		return;
	}
	iVar0 = 223;
	iVar1 = 229;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 237;
		iVar1 = 70;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || (iVar1 != 365 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1)))
	{
		func_302(Local_185.f_2368.f_2 == 0);
	}
	else if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || (iVar1 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1)))
	{
		func_302(0);
	}
	else if (Local_185.f_2368.f_338 > -1)
	{
		func_282();
	}
}

void func_302(bool bParam0)//Position - 0x1092E
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (func_310())
	{
		func_309();
	}
	if (!bParam0 && NETWORK::GET_NETWORK_TIME() < (Local_185.f_2368.f_285 + func_308()))
	{
		return;
	}
	if (Local_185.f_2368.f_2 == 3)
	{
		Local_185.f_2368.f_284 = 0;
	}
	func_306(&Var0, &Var2);
	Local_185.f_2368.f_3[Local_185.f_2368.f_284 /*14*/] = func_305();
	Local_185.f_2368.f_3[Local_185.f_2368.f_284 /*14*/].f_1 = { Var0 };
	Local_185.f_2368.f_3[Local_185.f_2368.f_284 /*14*/].f_3 = { Var2 };
	Local_185.f_2368.f_3[Local_185.f_2368.f_284 /*14*/].f_5 = { Var0 };
	Local_185.f_2368.f_3[Local_185.f_2368.f_284 /*14*/].f_9 = (IntToFloat(Local_185.f_2368.f_325) * -15f);
	Local_185.f_2368.f_3[Local_185.f_2368.f_284 /*14*/].f_13 = func_304();
	Local_185.f_2368.f_3[Local_185.f_2368.f_284 /*14*/].f_12 = func_289();
	Local_185.f_2368.f_3[Local_185.f_2368.f_284 /*14*/].f_11 = NETWORK::GET_NETWORK_TIME();
	Local_185.f_2368.f_285 = NETWORK::GET_NETWORK_TIME();
	if (Local_185.f_2368.f_2 == 1)
	{
		Local_185.f_2368.f_285 = (Local_185.f_2368.f_285 + MISC::GET_RANDOM_INT_IN_RANGE(-10, 10));
	}
	func_106(1);
	if (!func_310())
	{
		func_237(func_303(), &(Local_185.f_2368.f_341));
	}
	Local_185.f_2368.f_284++;
	if (Local_185.f_2368.f_284 >= 20)
	{
		Local_185.f_2368.f_284 = 0;
	}
}

char* func_303()//Position - 0x10ABA
{
	switch (Local_185.f_2368.f_2)
	{
		case 0:
			return "Tank_Weapon_Main_Cannon_Fire";
		
		case 1:
			return "Tank_Weapon_Flamethrower_Fire_Loop";
		
		case 2:
			return "Tank_Weapon_Rocket_Fire";
		
		case 3:
			return "Tank_Weapon_Lightning_Gun_Fire_Loop";
		
		default:
	}
	return "";
}

int func_304()//Position - 0x10B06
{
	switch (Local_185.f_2368.f_2)
	{
		case 0:
			return 4;
		
		case 1:
			return 1;
		
		case 2:
			return 8;
		
		case 3:
			return 2;
		
		default:
	}
	return 0;
}

int func_305()//Position - 0x10B44
{
	switch (Local_185.f_2368.f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

void func_306(var uParam0, var uParam1)//Position - 0x10B81
{
	float fVar0;
	
	fVar0 = func_149(func_182(), -0.007407f, 0f);
	switch (Local_185.f_2368.f_2)
	{
		case 0:
		case 2:
			*uParam0 = { func_197(func_92((Local_185.f_2368.f_321 + 0.0075f), ((Local_185.f_2368.f_321.f_1 + -0.055f) + fVar0))) };
			*uParam0 = { func_187(*uParam0, func_150(*uParam0, func_197(func_92(0.061f, 0f))), (IntToFloat(Local_185.f_2368.f_325) * -15f)) };
			*uParam1 = { func_187(*uParam0, func_150(*uParam0, func_197(func_92(1f, 0f))), (IntToFloat(Local_185.f_2368.f_325) * -15f)) };
			break;
		
		case 1:
			*uParam0 = { func_197(func_92(((Local_185.f_2368.f_321 + 0.0075f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.0005f, 0.0005f)), (((Local_185.f_2368.f_321.f_1 + -0.055f) + fVar0) + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.0005f, 0.0005f)))) };
			*uParam0 = { func_187(*uParam0, func_150(*uParam0, func_197(func_92(0.061f, 0f))), ((IntToFloat(Local_185.f_2368.f_325) * -15f) + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-5, 5)))) };
			*uParam1 = { func_187(*uParam0, func_150(*uParam0, func_197(func_92((0.15f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.1f)), 0f))), (IntToFloat(Local_185.f_2368.f_325) * -15f)) };
			break;
		
		case 3:
			*uParam0 = { func_197(func_92((Local_185.f_2368.f_321 + 0.0075f), ((Local_185.f_2368.f_321.f_1 + -0.055f) + fVar0))) };
			*uParam0 = { func_187(*uParam0, func_150(*uParam0, func_197(func_92((0.061f / 1.5f), 0f))), (IntToFloat(Local_185.f_2368.f_325) * -15f)) };
			*uParam1 = { func_187(*uParam0, func_150(*uParam0, func_197(func_92(1f, 0f))), (IntToFloat(Local_185.f_2368.f_325) * -15f)) };
			break;
	}
	*uParam0 = { func_91(*uParam0) };
	*uParam1 = { func_91(*uParam1) };
	if (Local_185.f_2368.f_2 == 3)
	{
		func_307(*uParam0, uParam1);
	}
}

void func_307(struct<2> Param0, var uParam2)//Position - 0x10DD1
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	float fVar7;
	
	if (Local_185.f_2368.f_325 > 0)
	{
		return;
	}
	if (Param0.f_1 > func_223(Param0.f_0, 0))
	{
		*uParam2 = { Param0 };
		func_288(*uParam2, 1);
		return;
	}
	Var0.f_0 = (Local_185.f_2340.f_4[0] - (func_227(0) / 2f));
	Var0.f_1 = Local_185.f_3;
	Var2 = { Var0 };
	iVar6 = 0;
	while (iVar6 <= (Local_185.f_745 - 1))
	{
		if (Local_185.f_2340.f_12[iVar6] == 1 && Local_185.f_1801[Local_185.f_2340.f_20[iVar6] /*14*/].f_11 & 1 == 0)
		{
			fVar7 = Var2.f_0;
			Var2.f_0 = (Var2.f_0 + func_225());
			if (func_297(Param0, *uParam2, Var0, Var2, &Var4))
			{
				*uParam2 = { Var4 };
				func_288(*uParam2, 1);
				return;
			}
			Var0.f_1 = 1f;
			Var2.f_0 = (Var2.f_0 + ((func_226() - func_225()) - func_224()));
			Var0.f_0 = Var2.f_0;
			Var2.f_1 = Local_185.f_3;
			if (func_297(Param0, *uParam2, Var0, Var2, &Var4))
			{
				*uParam2 = { Var4 };
				func_288(*uParam2, 1);
				return;
			}
			Var0 = { Var2 };
			Var2.f_0 = (fVar7 + func_226());
			Var0.f_0 = (Var2.f_0 - func_224());
		}
		else if (Local_185.f_2340.f_12[iVar6] == 2)
		{
			if (func_297(Param0, *uParam2, Var0, Var2, &Var4))
			{
				*uParam2 = { Var4 };
				func_288(*uParam2, 1);
				return;
			}
			Var0 = { Var2 };
			Var2.f_1 = (((1f - 0.06944444f) - Local_185.f_753[func_212() /*28*/].f_22.f_1) + 0.03240715f);
			if (func_297(Param0, *uParam2, Var0, Var2, &Var4))
			{
				*uParam2 = { Var4 };
				func_288(*uParam2, 1);
				return;
			}
			Var0 = { Var2 };
			Var2.f_0 = (Var2.f_0 + func_227(iVar6));
			if (func_297(Param0, *uParam2, Var0, Var2, &Var4))
			{
				*uParam2 = { Var4 };
				func_288(*uParam2, 1);
				return;
			}
			Var2.f_1 = Local_185.f_3;
			Var0 = { Var2 };
		}
		else
		{
			Var2.f_0 = (Var2.f_0 + func_227(iVar6));
		}
		iVar6++;
	}
	if (func_297(Param0, *uParam2, Var0, Var2, &Var4))
	{
		*uParam2 = { Var4 };
		func_288(*uParam2, 1);
	}
}

int func_308()//Position - 0x11036
{
	switch (Local_185.f_2368.f_2)
	{
		case 0:
			if (func_294())
			{
				return 83;
			}
			return SYSTEM::ROUND((250f * func_290()));
		
		case 1:
			return SYSTEM::ROUND((50f * func_290()));
		
		case 2:
			return SYSTEM::ROUND((500f * func_290()));
		
		case 3:
			return 0;
		
		default:
	}
	return 2147483647;
}

void func_309()//Position - 0x110AA
{
	float fVar0;
	
	if (!func_310())
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_338))
		{
			AUDIO::STOP_SOUND(Local_185.f_2368.f_338);
			AUDIO::RELEASE_SOUND_ID(Local_185.f_2368.f_338);
			Local_185.f_2368.f_338 = -1;
		}
		return;
	}
	if (Local_185.f_2368.f_338 == -1)
	{
		Local_185.f_2368.f_338 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_338))
	{
		AUDIO::PLAY_SOUND_FRONTEND(Local_185.f_2368.f_338, func_303(), "dlc_vw_am_ip_tank_sounds", false);
	}
	fVar0 = func_233(Local_185.f_2368.f_321);
	AUDIO::SET_VARIABLE_ON_SOUND(Local_185.f_2368.f_338, "Screen_Position", fVar0);
}

int func_310()//Position - 0x1114C
{
	switch (Local_185.f_2368.f_2)
	{
		case 1:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_311()//Position - 0x11171
{
	if (Local_185.f_0 != -1f && (Local_185.f_2872 / 0.164583f) >= Local_185.f_0)
	{
		return 1;
	}
	if (Local_185.f_2368.f_331 <= 0)
	{
		return 1;
	}
	if (Local_185.f_2368 == 3)
	{
		return 1;
	}
	if (Local_185.f_2368 == 4)
	{
		return 1;
	}
	return 0;
}

void func_312()//Position - 0x111C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (func_311())
	{
		return;
	}
	iVar0 = 234;
	iVar1 = 235;
	iVar2 = 224;
	iVar3 = 226;
	iVar4 = 227;
	iVar5 = 228;
	iVar6 = 365;
	fVar7 = 1f;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 234;
		iVar1 = 235;
		iVar5 = 238;
		iVar6 = 187;
		iVar3 = 189;
		iVar4 = 190;
		iVar2 = 203;
		fVar7 = 0.3f;
	}
	fVar8 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
	if (fVar8 < (-0.65f * fVar7) || (iVar0 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0)))
	{
		func_315(0);
	}
	else if (fVar8 > (0.65f * fVar7) || (iVar1 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1)))
	{
		func_315(1);
	}
	else if (Local_185.f_2368.f_323 > 0)
	{
		Local_185.f_2368.f_323 = 0;
		fVar9 = (Local_185.f_2873 / 10f);
		if (Local_185.f_2368.f_339 > -1 && !AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_339))
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_185.f_2368.f_339, "TankSpeed", fVar9);
		}
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2))
	{
		func_314();
	}
	fVar10 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
	if (iVar3 != 365 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar3))
	{
		func_313(1, 1, 0);
	}
	else if (iVar4 != 365 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar4))
	{
		func_313(-1, 1, 0);
	}
	else if ((iVar3 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar3)) || fVar10 < (-0.65f * fVar7))
	{
		func_313(1, 0, fVar10);
	}
	else if ((iVar4 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar4)) || fVar10 > (0.65f * fVar7))
	{
		func_313(-1, 0, fVar10);
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar5) || (iVar6 != 365 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar6)))
	{
		if (Local_185.f_2368.f_325 != 0)
		{
			func_237("Tank_Turret_Move", &(Local_185.f_2368.f_342));
		}
		Local_185.f_2368.f_325 = 0;
		Local_185.f_2368.f_324 = 0;
	}
}

void func_313(int iParam0, bool bParam1, float fParam2)//Position - 0x113DB
{
	int iVar0;
	
	iVar0 = 100;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && (fParam2 > (0.65f * 0.3f) || fParam2 < (-0.65f * 0.3f)))
	{
		iVar0 = 50;
	}
	if (!bParam1)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_185.f_2368.f_326 + iVar0))
		{
			return;
		}
	}
	if (iParam0 == 0)
	{
		return;
	}
	Local_185.f_2368.f_324 = Local_185.f_2368.f_325;
	Local_185.f_2368.f_325 = (Local_185.f_2368.f_325 + iParam0);
	if (Local_185.f_2368.f_325 > 9)
	{
		Local_185.f_2368.f_325 = 9;
	}
	else if (Local_185.f_2368.f_325 < -1)
	{
		Local_185.f_2368.f_325 = -1;
	}
	else
	{
		func_237("Tank_Turret_Move", &(Local_185.f_2368.f_342));
	}
	Local_185.f_2368.f_326 = NETWORK::GET_NETWORK_TIME();
}

void func_314()//Position - 0x114AF
{
	if (Local_185.f_2368 != 0)
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_185.f_2368.f_327 + 100)
	{
		return;
	}
	func_107(1);
	func_237("Tank_Jump", &(Local_185.f_2368.f_343));
	Local_185.f_2368.f_327 = NETWORK::GET_NETWORK_TIME();
	Local_185.f_2368.f_328 = Local_185.f_2368.f_321.f_1;
	Local_185.f_2368.f_329 = (Local_185.f_2368.f_321.f_1 + -0.25f);
}

void func_315(bool bParam0)//Position - 0x11522
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (Local_185.f_2368 == 2 && Local_185.f_2368.f_321.f_1 > Local_185.f_3)
	{
		return;
	}
	Local_185.f_2368.f_323 = (Local_185.f_2368.f_323 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	fVar0 = (SYSTEM::TO_FLOAT(Local_185.f_2368.f_323) / 250f);
	if (fVar0 > 1f)
	{
		fVar0 = 1f;
	}
	if (func_182())
	{
		fVar0 = 1f;
	}
	fVar1 = (0.15f * func_161(0f, 1f, fVar0, 1));
	if (!bParam0)
	{
		fVar1 = (fVar1 * -1f);
	}
	Local_185.f_2368.f_321 = func_139(Local_185.f_2368.f_321, fVar1);
	if (Local_185.f_2368.f_321 > 0.775f)
	{
		Local_185.f_2368.f_321 = 0.775f;
	}
	else if (Local_185.f_2368.f_321 < 0.225f)
	{
		Local_185.f_2368.f_321 = 0.225f;
	}
	fVar2 = (Local_185.f_2873 / 10f);
	if (bParam0)
	{
		fVar2 = (fVar2 + func_168(fVar0, fVar2, 0.9f));
	}
	else
	{
		fVar2 = (fVar2 - func_168(fVar0, fVar2, 0.9f));
	}
	if (Local_185.f_2368.f_339 > -1 && !AUDIO::HAS_SOUND_FINISHED(Local_185.f_2368.f_339))
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_185.f_2368.f_339, "TankSpeed", fVar2);
	}
}

void func_316()//Position - 0x1166E
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Local_185.f_2871 != 4)
	{
		Local_185.f_2340 = func_139(Local_185.f_2340, -0.005f);
		if (Local_185.f_2340 < (0.15625f - (Local_185.f_726 / 2f)))
		{
			Local_185.f_2340 = (Local_185.f_2340 + Local_185.f_726);
		}
	}
	Local_185.f_2340.f_1 = func_139(Local_185.f_2340.f_1, -0.01f);
	if (Local_185.f_2340.f_1 < (0.15625f - (Local_185.f_731 / 2f)))
	{
		Local_185.f_2340.f_1 = (Local_185.f_2340.f_1 + Local_185.f_731);
	}
	Local_185.f_2340.f_2 = func_139(Local_185.f_2340.f_2, -0.02f);
	if (Local_185.f_2340.f_2 < (0.15625f - (Local_185.f_736 / 2f)))
	{
		Local_185.f_2340.f_2 = (Local_185.f_2340.f_2 + Local_185.f_736);
	}
	Local_185.f_2340.f_3 = func_139(Local_185.f_2340.f_3, -0.04f);
	if (Local_185.f_2340.f_3 < (0.15625f - (Local_185.f_741 / 2f)))
	{
		Local_185.f_2340.f_3 = (Local_185.f_2340.f_3 + Local_185.f_741);
	}
	Local_185.f_2340.f_4[0] = func_139(Local_185.f_2340.f_4[0], -0.15f);
	fVar1 = func_227(0);
	if (Local_185.f_2340.f_4[0] < (0.15625f - (fVar1 / 2f)))
	{
		Local_185.f_2340.f_4[0] = (Local_185.f_2340.f_4[0] + fVar1);
		iVar0 = 0;
		while (iVar0 <= (Local_185.f_745 - 1))
		{
			if (iVar0 < (Local_185.f_745 - 1))
			{
				if (Local_185.f_2340.f_12[iVar0] != 0 && Local_185.f_2340.f_12[iVar0 + 1] == 0)
				{
					Local_185.f_2340.f_4[iVar0] = (Local_185.f_2340.f_4[iVar0] - ((func_226() - Local_185.f_746) / 2f));
				}
				else if (Local_185.f_2340.f_12[iVar0] == 0 && Local_185.f_2340.f_12[iVar0 + 1] != 0)
				{
					Local_185.f_2340.f_4[iVar0] = (Local_185.f_2340.f_4[iVar0] + ((func_226() - Local_185.f_746) / 2f));
				}
				Local_185.f_2340.f_12[iVar0] = Local_185.f_2340.f_12[iVar0 + 1];
				Local_185.f_2340.f_20[iVar0] = Local_185.f_2340.f_20[iVar0 + 1];
			}
			else
			{
				if (Local_185.f_2340.f_12[iVar0] != 0)
				{
					Local_185.f_2340.f_4[iVar0] = (Local_185.f_2340.f_4[iVar0] - ((func_226() - Local_185.f_746) / 2f));
				}
				Local_185.f_2340.f_12[iVar0] = 0;
				Local_185.f_2340.f_20[iVar0] = -1;
			}
			iVar0++;
		}
	}
	iVar0 = 1;
	while (iVar0 <= (Local_185.f_745 - 1))
	{
		fVar2 = func_227(iVar0);
		fVar3 = func_227((iVar0 - 1));
		Local_185.f_2340.f_4[iVar0] = ((Local_185.f_2340.f_4[(iVar0 - 1)] + (fVar3 / 2f)) + (fVar2 / 2f));
		iVar0++;
	}
	if (Local_185.f_2870 != 7)
	{
		return;
	}
	Local_185.f_2872 = func_139(Local_185.f_2872, 0.15f);
	func_317();
}

void func_317()//Position - 0x11975
{
	int iVar0;
	
	if (Local_185.f_2871 != 4)
	{
		return;
	}
	iVar0 = SYSTEM::FLOOR((Local_185.f_2872 / 0.164583f));
	if (iVar0 > Local_185.f_2905)
	{
		Local_185.f_2905 = iVar0;
	}
	if (BitTest(Local_185.f_2904, 3))
	{
		return;
	}
	if (iVar0 < Global_262145.f_26801 /* Tunable: IVC_IAP_MOON_DISTANCE_CHALLENGE_REQUIREMENT */)
	{
		return;
	}
	func_131(27186, 1, -1);
	func_132(250, 1, -1, 1);
	MISC::SET_BIT(&(Local_185.f_2904), 3);
	MISC::SET_BIT(&(Local_185.f_2904), 9);
	func_130();
	func_129("IAP_CH_2", Global_262145.f_26801 /* Tunable: IVC_IAP_MOON_DISTANCE_CHALLENGE_REQUIREMENT */, 7500);
}

void func_318()//Position - 0x11A04
{
	func_235();
	func_219();
	func_213();
	func_320();
	if (!func_319())
	{
		return;
	}
	func_7(3);
	func_8(7);
	func_54("Frontend_Go");
}

int func_319()//Position - 0x11A39
{
	Local_185.f_2368.f_321 = func_139(Local_185.f_2368.f_321, 0.15f);
	if (Local_185.f_2368.f_321 < 0.3f)
	{
		return 0;
	}
	Local_185.f_2368.f_321 = 0.3f;
	return 1;
}

void func_320()//Position - 0x11A7D
{
	func_211();
	func_180();
	func_178();
	func_141(0);
	func_88();
	func_86();
}

void func_321()//Position - 0x11A9E
{
	if (!func_124(&(Local_185.f_2882)))
	{
		func_123(&(Local_185.f_2882), 0, 0);
	}
	func_213();
	func_323();
	if (!func_322())
	{
		return;
	}
	if (!func_121(&(Local_185.f_2882), 10000, 0))
	{
		return;
	}
	func_104(&(Local_185.f_2882));
	func_12(func_13(2));
	func_8(6);
	AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_ip_in_menus_scene");
	AUDIO::START_AUDIO_SCENE("dlc_vw_am_ip_in_gameplay_scene");
	func_54("Frontend_Get_Ready");
}

int func_322()//Position - 0x11B13
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(Local_185.f_2895, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(Local_185.f_2895))
	{
		return 0;
	}
	return 1;
}

void func_323()//Position - 0x11B37
{
	func_174(&(Local_185.f_1765.f_4));
	func_87(func_327(), func_326(), 0.5f, 0.5f, 0.6875f, 0.94814813f, 0f, Local_185.f_1765);
	func_324();
	func_88();
	func_86();
}

void func_324()//Position - 0x11B7E
{
	struct<2> Var0;
	struct<2> Var2;
	struct<4> Var4;
	char cVar8[16];
	
	switch (Local_185.f_2871)
	{
		case 0:
			Var0 = { func_92(0.016667f, 0.02963f) };
			Var2 = { func_92(0.542708f, 0.32963f) };
			break;
		
		case 1:
			Var0 = { func_92(0.158333f, 0.088889f) };
			Var2 = { func_92(0.602083f, 0.266667f) };
			break;
		
		case 2:
			Var0 = { func_92(0.075f, 0.088889f) };
			Var2 = { func_92(0.617708f, 0.322222f) };
			break;
		
		case 3:
			Var0 = { func_92(0.1f, 0.096296f) };
			Var2 = { func_92(0.384375f, 0.257407f) };
			break;
		
		case 4:
			Var0 = { func_92(0.208333f, 0.37037f) };
			Var2 = { func_92((0.504167f + (0.000520833f * 2f)), 0.416667f) };
			break;
	}
	Var2 = { func_150(Var2, func_92(-0.004166667f, 0.005555556f)) };
	Var4 = { Local_185.f_1765 };
	Var4.f_3 = SYSTEM::ROUND(func_161(25f, 255f, MISC::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.4f))), 4));
	func_87(func_327(), func_325(), Var2.f_0, Var2.f_1, Var0.f_0, Var0.f_1, 0f, Var4);
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() != 0)
	{
		StringCopy(&cVar8, "IAP_STAGE_D_", 16);
		StringIntConCat(&cVar8, Local_185.f_2871, 16);
		HUD::BEGIN_TEXT_COMMAND_PRINT(&cVar8);
		HUD::END_TEXT_COMMAND_PRINT(1, true);
	}
}

char* func_325()//Position - 0x11D0D
{
	switch (Local_185.f_2871)
	{
		case 0:
			return "country_1";
		
		case 1:
			return "country_2";
		
		case 2:
			return "country_3";
		
		case 3:
			return "country_4";
		
		case 4:
			return "country_5";
		
		default:
	}
	return "INVALID STAGE";
}

char* func_326()//Position - 0x11D64
{
	switch (Local_185.f_2871)
	{
		case 0:
			return "mission_select_screen1";
		
		case 1:
			return "mission_select_screen2";
		
		case 2:
			return "mission_select_screen3";
		
		case 3:
			return "mission_select_screen4";
		
		case 4:
			return "mission_select_screen5";
		
		default:
	}
	return "INVALID STAGE";
}

char* func_327()//Position - 0x11DBB
{
	switch (Local_185.f_2871)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "MpInvPersHud";
		
		case 4:
			return "MPInvPersCommon";
		
		default:
	}
	return "INVALID STAGE";
}

void func_328()//Position - 0x11DFD
{
	func_335();
	func_334();
	func_333();
	func_331();
	if (!func_64())
	{
		return;
	}
	MISC::CLEAR_BIT(&(Local_185.f_2368.f_333), 9);
	MISC::CLEAR_BIT(&(Local_185.f_2368.f_333), 10);
	func_105();
	func_12(func_13(6));
	func_54("Frontend_Start");
	func_7(2);
	func_12(func_13(1));
	func_330();
	func_329(0);
	func_8(5);
}

void func_329(bool bParam0)//Position - 0x11E6D
{
	if (bParam0)
	{
		StringCopy(&Local_163, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_163, "Invade and Persuade II.", 64);
	}
	Local_163.f_16 = 0;
	Local_163.f_17 = 0;
	Local_163.f_18 = 0;
	Local_163.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_163.f_20 = 0;
	Local_163.f_21 = 0;
}

void func_330()//Position - 0x11EAE
{
	GRAPHICS::STOP_BINK_MOVIE(Local_185.f_2880);
	GRAPHICS::RELEASE_BINK_MOVIE(Local_185.f_2880);
}

void func_331()//Position - 0x11EC8
{
	int iVar0;
	
	if (Local_185.f_2908 != -2147483647 && NETWORK::GET_NETWORK_TIME() > Local_185.f_2908)
	{
		Local_185.f_2908 = -2147483647;
		Local_185.f_2909 = 0;
	}
	iVar0 = func_332();
	if (iVar0 == 365)
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		Local_185.f_2908 = NETWORK::GET_NETWORK_TIME() + 600;
		Local_185.f_2909++;
	}
	if (Local_185.f_2909 >= 10)
	{
		Local_185.f_2907 = 1;
		Local_185.f_2368.f_330 = 99;
		func_54("Frontend_Retry");
		Local_185.f_2908 = -2147483647;
		Local_185.f_2909 = 0;
	}
}

int func_332()//Position - 0x11F62
{
	switch (Local_185.f_2909)
	{
		case 0:
		case 1:
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				return 188;
			}
			else
			{
				return 232;
			}
			break;
		
		case 2:
		case 3:
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				return 187;
			}
			else
			{
				return 233;
			}
			break;
		
		case 4:
		case 6:
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				return 189;
			}
			else
			{
				return 234;
			}
			break;
		
		case 5:
		case 7:
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				return 190;
			}
			else
			{
				return 235;
			}
			break;
		
		case 8:
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				return 238;
			}
			else
			{
				return 225;
			}
			break;
		
		case 9:
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				return 237;
			}
			else
			{
				return 223;
			}
			break;
	}
	return 365;
}

void func_333()//Position - 0x12043
{
	if (BitTest(Local_185.f_2368.f_333, 9))
	{
		if (GRAPHICS::GET_BINK_MOVIE_TIME(Local_185.f_2880) >= 95f)
		{
			func_12(func_13(6));
			MISC::SET_BIT(&(Local_185.f_2368.f_333), 10);
			MISC::CLEAR_BIT(&(Local_185.f_2368.f_333), 9);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_185.f_2368.f_333), 10);
		}
	}
	if (!BitTest(Local_185.f_2368.f_333, 9) && BitTest(Local_185.f_2368.f_333, 10))
	{
		if (GRAPHICS::GET_BINK_MOVIE_TIME(Local_185.f_2880) >= 99f || GRAPHICS::GET_BINK_MOVIE_TIME(Local_185.f_2880) <= 1f)
		{
			func_12(func_13(0));
			MISC::SET_BIT(&(Local_185.f_2368.f_333), 9);
		}
	}
}

void func_334()//Position - 0x120FA
{
	struct<2> Var0;
	
	MISC::SET_BIT(&(Local_185.f_2368.f_333), 2);
	StringCopy(&Var0, "IAP_H_TITLE", 16);
	if (func_69())
	{
		StringConCat(&Var0, "_PS4", 16);
	}
	else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		StringConCat(&Var0, "_PC", 16);
	}
	if (func_68(&Var0))
	{
		return;
	}
	func_9();
	func_66(&Var0);
}

void func_335()//Position - 0x1214F
{
	GRAPHICS::DRAW_BINK_MOVIE(Local_185.f_2880, 0.5f, 0.5f, (1f * fLocal_160), 1f, 0f, 255, 255, 255, 255);
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() != 0)
	{
		if (GRAPHICS::GET_BINK_MOVIE_TIME(Local_185.f_2880) < 30f)
		{
			HUD::BEGIN_TEXT_COMMAND_PRINT("IAP_INTRO");
			HUD::END_TEXT_COMMAND_PRINT(1, true);
		}
	}
	func_88();
	func_86();
}

void func_336()//Position - 0x121A6
{
	float fVar0;
	int iVar1;
	
	if (!func_124(&(Local_185.f_2890)))
	{
		func_123(&(Local_185.f_2890), 0, 0);
	}
	if (!func_121(&(Local_185.f_2890), 3000, 0))
	{
		fVar0 = (SYSTEM::TO_FLOAT(func_176(&(Local_185.f_2890), 0, 0)) / 3000f);
		iVar1 = SYSTEM::ROUND(func_161(0f, 255f, fVar0, 4));
		func_337(iVar1);
	}
	else
	{
		func_337(255);
	}
	if (!func_121(&(Local_185.f_2890), 4000, 0))
	{
		return;
	}
	func_12(func_13(0));
	MISC::SET_BIT(&(Local_185.f_2368.f_333), 9);
	func_61();
	func_8(4);
}

void func_337(int iParam0)//Position - 0x12244
{
	struct<4> Var0;
	
	Var0.f_3 = 255;
	func_174(&(Local_185.f_1765.f_4));
	func_114(&Var0, 236, 109, 0, iParam0);
	func_174(&Var0);
	func_95(func_92(0.5f, 0.5f), func_92(0.658333f, 1f), Local_185.f_1765.f_4);
	Var0 = { Local_185.f_1765 };
	Var0.f_3 = iParam0;
	func_87("MpInvPersCommon", "ron_splash", 0.5f, 0.5f, 0.658333f, 1f, 0f, Var0);
	func_88();
	func_86();
}

void func_338()//Position - 0x122D1
{
	if (!func_339())
	{
		return;
	}
	func_8(3);
}

int func_339()//Position - 0x122E9
{
	GRAPHICS::DRAW_BINK_MOVIE(Local_185.f_2879, 0.5f, 0.5f, (1f * fLocal_160), 1f, 0f, 255, 255, 255, 255);
	func_88();
	func_86();
	if (GRAPHICS::GET_BINK_MOVIE_TIME(Local_185.f_2879) >= 99f)
	{
		GRAPHICS::STOP_BINK_MOVIE(Local_185.f_2879);
		GRAPHICS::RELEASE_BINK_MOVIE(Local_185.f_2879);
		return 1;
	}
	return 0;
}

void func_340()//Position - 0x12341
{
	if (!func_342())
	{
		return;
	}
	func_341();
	AUDIO::START_AUDIO_SCENE("dlc_vw_am_ip_in_menus_scene");
	func_8(2);
}

void func_341()//Position - 0x12365
{
	Local_185.f_2879 = GRAPHICS::SET_BINK_MOVIE("_1992_DegenatronLogo_720_auto");
	GRAPHICS::PLAY_BINK_MOVIE(Local_185.f_2879);
	GRAPHICS::SET_BINK_SHOULD_SKIP(Local_185.f_2879, true);
	func_54("Frontend_Degenatron_Screen");
}

int func_342()//Position - 0x12395
{
	if (!func_343())
	{
		return 0;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_16(), false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_16()))
	{
		return 0;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPInvPersHud", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPInvPersHud"))
	{
		return 0;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPInvPersMessages", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPInvPersMessages"))
	{
		return 0;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPInvPersMessages2", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPInvPersMessages2"))
	{
		return 0;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MpInvPersCommon", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MpInvPersCommon"))
	{
		return 0;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("IAP", 3);
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("IAP", 3))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_IP", false, -1))
	{
		return 0;
	}
	return 1;
}

bool func_343()//Position - 0x12448
{
	return ((((((func_344(0) && func_344(6)) && func_344(1)) && func_344(3)) && func_344(4)) && func_344(5)) && func_344(7));
}

int func_344(int iParam0)//Position - 0x12491
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_93(iParam0), false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_93(iParam0)))
	{
		return 0;
	}
	return 1;
}

void func_345()//Position - 0x124B7
{
	func_355();
	func_354(1);
	func_352();
	func_351();
	func_350();
	func_349();
	func_346();
	func_7(1);
	func_8(1);
}

void func_346()//Position - 0x124E6
{
	if (func_348(253, -1))
	{
		MISC::SET_BIT(&(Local_185.f_2904), 0);
	}
	if (func_348(248, -1))
	{
		MISC::SET_BIT(&(Local_185.f_2904), 1);
	}
	if (func_348(249, -1))
	{
		MISC::SET_BIT(&(Local_185.f_2904), 2);
	}
	if (func_348(250, -1))
	{
		MISC::SET_BIT(&(Local_185.f_2904), 3);
	}
	if (func_348(251, -1))
	{
		MISC::SET_BIT(&(Local_185.f_2904), 4);
	}
	if (func_348(252, -1))
	{
		MISC::SET_BIT(&(Local_185.f_2904), 5);
	}
	Local_185.f_2905 = func_347(8359, -1);
}

int func_347(int iParam0, int iParam1)//Position - 0x12573
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_281(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_348(int iParam0, int iParam1)//Position - 0x125A2
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_133(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_349()//Position - 0x125C6
{
	func_114(&(Local_185.f_1765), 255, 255, 255, 255);
	func_114(&(Local_185.f_1765.f_4), 0, 0, 0, 255);
	func_114(&(Local_185.f_1765.f_8), 0, 255, 0, 255);
	func_114(&(Local_185.f_1765.f_12), 255, 0, 0, 255);
	func_114(&(Local_185.f_1765.f_16), 24, 203, 247, 255);
	func_114(&(Local_185.f_1765.f_20), 27, 37, 27, 255);
	func_114(&(Local_185.f_1765.f_24), 255, 240, 127, 255);
	func_114(&(Local_185.f_1765.f_28), 103, 115, 87, 255);
	func_114(&(Local_185.f_1765.f_32), 154, 255, 0, 255);
}

void func_350()//Position - 0x12664
{
	Local_185.f_2214.f_2[0 /*11*/][0] = 1.5f;
	Local_185.f_2214.f_2[0 /*11*/][1] = 1f;
	Local_185.f_2214.f_2[0 /*11*/][2] = 0f;
	Local_185.f_2214.f_2[0 /*11*/][3] = 0f;
	Local_185.f_2214.f_2[0 /*11*/][4] = 1f;
	Local_185.f_2214.f_2[0 /*11*/][5] = 1f;
	Local_185.f_2214.f_2[0 /*11*/][6] = 1.5f;
	Local_185.f_2214.f_2[0 /*11*/][7] = 2f;
	Local_185.f_2214.f_2[0 /*11*/][8] = 2.5f;
	Local_185.f_2214.f_2[0 /*11*/][9] = 0.5f;
	Local_185.f_2214.f_2[1 /*11*/][0] = 1f;
	Local_185.f_2214.f_2[1 /*11*/][1] = 1.5f;
	Local_185.f_2214.f_2[1 /*11*/][2] = 0f;
	Local_185.f_2214.f_2[1 /*11*/][3] = 0f;
	Local_185.f_2214.f_2[1 /*11*/][4] = 0f;
	Local_185.f_2214.f_2[1 /*11*/][5] = 0f;
	Local_185.f_2214.f_2[1 /*11*/][6] = 0.75f;
	Local_185.f_2214.f_2[1 /*11*/][7] = 1.5f;
	Local_185.f_2214.f_2[1 /*11*/][8] = 2f;
	Local_185.f_2214.f_2[1 /*11*/][9] = 1f;
	Local_185.f_2214.f_2[2 /*11*/][0] = 0f;
	Local_185.f_2214.f_2[2 /*11*/][1] = 0.25f;
	Local_185.f_2214.f_2[2 /*11*/][2] = 0.75f;
	Local_185.f_2214.f_2[2 /*11*/][3] = 0f;
	Local_185.f_2214.f_2[2 /*11*/][4] = 0f;
	Local_185.f_2214.f_2[2 /*11*/][5] = 0f;
	Local_185.f_2214.f_2[2 /*11*/][6] = 0f;
	Local_185.f_2214.f_2[2 /*11*/][7] = 0f;
	Local_185.f_2214.f_2[2 /*11*/][8] = 0f;
	Local_185.f_2214.f_2[2 /*11*/][9] = 0f;
	Local_185.f_2214.f_2[3 /*11*/][0] = 0f;
	Local_185.f_2214.f_2[3 /*11*/][1] = 0.75f;
	Local_185.f_2214.f_2[3 /*11*/][2] = 0f;
	Local_185.f_2214.f_2[3 /*11*/][3] = 0.6f;
	Local_185.f_2214.f_2[3 /*11*/][4] = 0f;
	Local_185.f_2214.f_2[3 /*11*/][5] = 0f;
	Local_185.f_2214.f_2[3 /*11*/][6] = 0f;
	Local_185.f_2214.f_2[3 /*11*/][7] = 0f;
	Local_185.f_2214.f_2[3 /*11*/][8] = 0f;
	Local_185.f_2214.f_2[3 /*11*/][9] = 0f;
	Local_185.f_2214.f_2[4 /*11*/][0] = 0f;
	Local_185.f_2214.f_2[4 /*11*/][1] = 1f;
	Local_185.f_2214.f_2[4 /*11*/][2] = 0f;
	Local_185.f_2214.f_2[4 /*11*/][3] = 0f;
	Local_185.f_2214.f_2[4 /*11*/][4] = 40f;
	Local_185.f_2214.f_2[4 /*11*/][5] = 20f;
	Local_185.f_2214.f_2[4 /*11*/][6] = 1f;
	Local_185.f_2214.f_2[4 /*11*/][7] = 1.5f;
	Local_185.f_2214.f_2[4 /*11*/][8] = 2f;
	Local_185.f_2214.f_2[4 /*11*/][9] = 0f;
	Local_185.f_2214.f_2[5 /*11*/][0] = 0f;
	Local_185.f_2214.f_2[5 /*11*/][1] = 1f;
	Local_185.f_2214.f_2[5 /*11*/][2] = 0f;
	Local_185.f_2214.f_2[5 /*11*/][3] = 0f;
	Local_185.f_2214.f_2[5 /*11*/][4] = 20f;
	Local_185.f_2214.f_2[5 /*11*/][5] = 20f;
	Local_185.f_2214.f_2[5 /*11*/][6] = 1f;
	Local_185.f_2214.f_2[5 /*11*/][7] = 1.5f;
	Local_185.f_2214.f_2[5 /*11*/][8] = 2f;
	Local_185.f_2214.f_2[5 /*11*/][9] = 0f;
	Local_185.f_2214.f_2[6 /*11*/][0] = 1f;
	Local_185.f_2214.f_2[6 /*11*/][1] = 1f;
	Local_185.f_2214.f_2[6 /*11*/][2] = 0f;
	Local_185.f_2214.f_2[6 /*11*/][3] = 0f;
	Local_185.f_2214.f_2[6 /*11*/][4] = 2.5f;
	Local_185.f_2214.f_2[6 /*11*/][5] = 2.5f;
	Local_185.f_2214.f_2[6 /*11*/][6] = 50f;
	Local_185.f_2214.f_2[6 /*11*/][7] = 50f;
	Local_185.f_2214.f_2[6 /*11*/][8] = 50f;
	Local_185.f_2214.f_2[6 /*11*/][9] = 0.5f;
	Local_185.f_2214.f_2[7 /*11*/][0] = 1f;
	Local_185.f_2214.f_2[7 /*11*/][1] = 2f;
	Local_185.f_2214.f_2[7 /*11*/][2] = 0f;
	Local_185.f_2214.f_2[7 /*11*/][3] = 0f;
	Local_185.f_2214.f_2[7 /*11*/][4] = 2.5f;
	Local_185.f_2214.f_2[7 /*11*/][5] = 2.5f;
	Local_185.f_2214.f_2[7 /*11*/][6] = 50f;
	Local_185.f_2214.f_2[7 /*11*/][7] = 50f;
	Local_185.f_2214.f_2[7 /*11*/][8] = 50f;
	Local_185.f_2214.f_2[7 /*11*/][9] = 1f;
	Local_185.f_2214.f_2[8 /*11*/][0] = 1.5f;
	Local_185.f_2214.f_2[8 /*11*/][1] = 2f;
	Local_185.f_2214.f_2[8 /*11*/][2] = 0f;
	Local_185.f_2214.f_2[8 /*11*/][3] = 0f;
	Local_185.f_2214.f_2[8 /*11*/][4] = 2.5f;
	Local_185.f_2214.f_2[8 /*11*/][5] = 2.5f;
	Local_185.f_2214.f_2[8 /*11*/][6] = 40f;
	Local_185.f_2214.f_2[8 /*11*/][7] = 50f;
	Local_185.f_2214.f_2[8 /*11*/][8] = 60f;
	Local_185.f_2214.f_2[8 /*11*/][9] = 1.5f;
	Local_185.f_2214.f_2[9 /*11*/][0] = 0.5f;
	Local_185.f_2214.f_2[9 /*11*/][1] = 1.5f;
	Local_185.f_2214.f_2[9 /*11*/][2] = 0f;
	Local_185.f_2214.f_2[9 /*11*/][3] = 0f;
	Local_185.f_2214.f_2[9 /*11*/][4] = 0f;
	Local_185.f_2214.f_2[9 /*11*/][5] = 0f;
	Local_185.f_2214.f_2[9 /*11*/][6] = 1f;
	Local_185.f_2214.f_2[9 /*11*/][7] = 1.5f;
	Local_185.f_2214.f_2[9 /*11*/][8] = 2f;
	Local_185.f_2214.f_2[9 /*11*/][9] = 1.5f;
}

void func_351()//Position - 0x12CA4
{
	Local_185.f_1734[0 /*5*/].f_1 = 0;
	Local_185.f_1734[0 /*5*/].f_2 = 2000;
	Local_185.f_1734[0 /*5*/] = "tank_fire_blast";
	Local_185.f_1734[0 /*5*/].f_3 = { func_92(0.020833f, 0.011111f) };
	Local_185.f_1734[1 /*5*/].f_1 = 8;
	Local_185.f_1734[1 /*5*/].f_2 = 5000;
	Local_185.f_1734[1 /*5*/] = "oil_drum";
	Local_185.f_1734[1 /*5*/].f_3 = { func_92(0.054167f, 0.092593f) };
	Local_185.f_1734[2 /*5*/].f_1 = 0;
	Local_185.f_1734[2 /*5*/].f_2 = 2000;
	Local_185.f_1734[2 /*5*/] = "enemy_blast";
	Local_185.f_1734[2 /*5*/].f_3 = { func_92(0.027083f, 0.022222f) };
	Local_185.f_1734[3 /*5*/].f_1 = 9;
	Local_185.f_1734[3 /*5*/].f_2 = 800;
	Local_185.f_1734[3 /*5*/] = "fire_ball";
	Local_185.f_1734[3 /*5*/].f_3 = { func_92(0.035417f, 0.062963f) };
	Local_185.f_1734[4 /*5*/].f_1 = 2;
	Local_185.f_1734[4 /*5*/].f_2 = 6000;
	Local_185.f_1734[4 /*5*/] = "homing_rocket";
	Local_185.f_1734[4 /*5*/].f_3 = { func_92(0.0375f, 0.018519f) };
	Local_185.f_1734[5 /*5*/].f_1 = 4;
	Local_185.f_1734[5 /*5*/].f_2 = 0;
	Local_185.f_1734[5 /*5*/] = "plasma";
	Local_185.f_1734[5 /*5*/].f_3 = { func_92(0.025f, 0.044444f) };
}

void func_352()//Position - 0x12E20
{
	Local_185.f_753[0 /*28*/] = 0;
	Local_185.f_753[0 /*28*/].f_24 = "camel_idle";
	Local_185.f_753[0 /*28*/].f_25 = 4;
	Local_185.f_753[0 /*28*/].f_1 = 0.15f;
	Local_185.f_753[0 /*28*/].f_2 = -0.075926f;
	Local_185.f_753[0 /*28*/].f_22 = { func_92(0.108333f, 0.151852f) };
	Local_185.f_753[0 /*28*/].f_3 = { func_92(-0.017708f, -0.043f) };
	Local_185.f_753[0 /*28*/].f_14 = 950;
	Local_185.f_753[0 /*28*/].f_15 = 4;
	Local_185.f_753[0 /*28*/].f_17 = 16;
	Local_185.f_753[0 /*28*/].f_16 = 2000;
	Local_185.f_753[0 /*28*/].f_5[0 /*2*/] = { func_92(-0.003f, 0.069f) };
	Local_185.f_753[0 /*28*/].f_5[1 /*2*/] = { func_92(-0.054f, -0.019f) };
	Local_185.f_753[0 /*28*/].f_5[2 /*2*/] = { func_92(0.027f, -0.074f) };
	Local_185.f_753[0 /*28*/].f_5[3 /*2*/] = { func_92(0.051f, 0.047f) };
	Local_185.f_753[0 /*28*/].f_27 = 2;
	Local_185.f_753[0 /*28*/].f_26 = "camel_fire";
	Local_185.f_753[0 /*28*/].f_18 = 1;
	func_353(0, 1, 0, 0, 0, 1);
	Local_185.f_753[0 /*28*/].f_20 = "IAP_H_SHOOT";
	Local_185.f_753[0 /*28*/].f_21 = 7500;
	Local_185.f_753[1 /*28*/] = 0;
	Local_185.f_753[1 /*28*/].f_24 = "panda_idle";
	Local_185.f_753[1 /*28*/].f_25 = 4;
	Local_185.f_753[1 /*28*/].f_1 = 0.15f;
	Local_185.f_753[1 /*28*/].f_2 = -0.094444f;
	Local_185.f_753[1 /*28*/].f_22 = { func_92(0.089583f, 0.185185f) };
	Local_185.f_753[1 /*28*/].f_3 = { func_92(-0.026042f, -0.02037f) };
	Local_185.f_753[1 /*28*/].f_14 = 950;
	Local_185.f_753[1 /*28*/].f_15 = 4;
	Local_185.f_753[1 /*28*/].f_17 = 16;
	Local_185.f_753[1 /*28*/].f_16 = 2000;
	Local_185.f_753[1 /*28*/].f_5[0 /*2*/] = { func_92(-0.03125f, 0.080556f) };
	Local_185.f_753[1 /*28*/].f_5[1 /*2*/] = { func_92(0f, -0.08f) };
	Local_185.f_753[1 /*28*/].f_5[2 /*2*/] = { func_92(0.035938f, -0.08f) };
	Local_185.f_753[1 /*28*/].f_5[3 /*2*/] = { func_92(0.035938f, 0.080556f) };
	Local_185.f_753[1 /*28*/].f_27 = 2;
	Local_185.f_753[1 /*28*/].f_26 = "panda_fire";
	Local_185.f_753[1 /*28*/].f_18 = 1;
	func_353(1, 0, 0, 1, 0, 1);
	Local_185.f_753[1 /*28*/].f_20 = func_10();
	Local_185.f_753[1 /*28*/].f_21 = 7500;
	Local_185.f_753[2 /*28*/] = 0;
	Local_185.f_753[2 /*28*/].f_24 = "bear_idle";
	Local_185.f_753[2 /*28*/].f_25 = 4;
	Local_185.f_753[2 /*28*/].f_1 = 0.15f;
	Local_185.f_753[2 /*28*/].f_2 = -0.07037f;
	Local_185.f_753[2 /*28*/].f_22 = { func_92(0.104167f, 0.144444f) };
	Local_185.f_753[2 /*28*/].f_3 = { func_92(-0.032813f, -0.050926f) };
	Local_185.f_753[2 /*28*/].f_14 = 950;
	Local_185.f_753[2 /*28*/].f_15 = 4;
	Local_185.f_753[2 /*28*/].f_17 = 16;
	Local_185.f_753[2 /*28*/].f_16 = 2000;
	Local_185.f_753[2 /*28*/].f_5[0 /*2*/] = { func_92(-0.046875f, 0.003704f) };
	Local_185.f_753[2 /*28*/].f_5[1 /*2*/] = { func_92(0.005208f, -0.072222f) };
	Local_185.f_753[2 /*28*/].f_5[2 /*2*/] = { func_92(0.05625f, 0.02037f) };
	Local_185.f_753[2 /*28*/].f_5[3 /*2*/] = { func_92(-0.029167f, 0.07037f) };
	Local_185.f_753[2 /*28*/].f_27 = 2;
	Local_185.f_753[2 /*28*/].f_26 = "bear_fire";
	Local_185.f_753[2 /*28*/].f_18 = 1;
	func_353(2, 0, 1, 0, 0, 1);
	Local_185.f_753[2 /*28*/].f_20 = func_10();
	Local_185.f_753[2 /*28*/].f_21 = 7500;
	Local_185.f_753[3 /*28*/] = 0;
	Local_185.f_753[3 /*28*/].f_24 = "moose_idle";
	Local_185.f_753[3 /*28*/].f_25 = 3;
	Local_185.f_753[3 /*28*/].f_1 = 0.15f;
	Local_185.f_753[3 /*28*/].f_2 = -0.092593f;
	Local_185.f_753[3 /*28*/].f_22 = { func_92(0.108333f, 0.185185f) };
	Local_185.f_753[3 /*28*/].f_3 = { func_92(-0.025521f, -0.02037f) };
	Local_185.f_753[3 /*28*/].f_14 = 950;
	Local_185.f_753[3 /*28*/].f_15 = 4;
	Local_185.f_753[3 /*28*/].f_17 = 16;
	Local_185.f_753[3 /*28*/].f_16 = 2000;
	Local_185.f_753[3 /*28*/].f_5[0 /*2*/] = { func_92(-0.053646f, -0.017593f) };
	Local_185.f_753[3 /*28*/].f_5[1 /*2*/] = { func_92(-0.020313f, -0.092593f) };
	Local_185.f_753[3 /*28*/].f_5[2 /*2*/] = { func_92(0.053646f, 0.013889f) };
	Local_185.f_753[3 /*28*/].f_5[3 /*2*/] = { func_92(-0.020313f, 0.092593f) };
	Local_185.f_753[3 /*28*/].f_27 = 2;
	Local_185.f_753[3 /*28*/].f_26 = "moose_fire";
	Local_185.f_753[3 /*28*/].f_18 = 1;
	func_353(3, 0, 0, 0, 1, 1);
	Local_185.f_753[3 /*28*/].f_20 = func_10();
	Local_185.f_753[3 /*28*/].f_21 = 7500;
	Local_185.f_753[4 /*28*/] = 1;
	Local_185.f_753[4 /*28*/].f_24 = "jet_idle";
	Local_185.f_753[4 /*28*/].f_25 = 4;
	Local_185.f_753[4 /*28*/].f_1 = 0.25f;
	Local_185.f_753[4 /*28*/].f_2 = (0.15f + 0.06944444f);
	Local_185.f_753[4 /*28*/].f_22 = { func_92(0.16875f, 0.111111f) };
	Local_185.f_753[4 /*28*/].f_3 = { func_92(0.05f, 0.05f) };
	Local_185.f_753[4 /*28*/].f_14 = 350;
	Local_185.f_753[4 /*28*/].f_15 = 4;
	Local_185.f_753[4 /*28*/].f_17 = 8;
	Local_185.f_753[4 /*28*/].f_16 = 2500;
	Local_185.f_753[4 /*28*/].f_5[0 /*2*/] = { func_92(-0.082f, 0.021f) };
	Local_185.f_753[4 /*28*/].f_5[1 /*2*/] = { func_92(-0.04f, -0.022f) };
	Local_185.f_753[4 /*28*/].f_5[2 /*2*/] = { func_92(0.089f, 0.003f) };
	Local_185.f_753[4 /*28*/].f_5[3 /*2*/] = { func_92(0.038f, 0.049f) };
	Local_185.f_753[4 /*28*/].f_18 = 2;
	func_353(4, 1, 1, 1, 1, 1);
	Local_185.f_753[4 /*28*/].f_20 = func_10();
	Local_185.f_753[4 /*28*/].f_21 = 7500;
	Local_185.f_753[5 /*28*/] = 2;
	Local_185.f_753[5 /*28*/].f_24 = "pod_idle";
	Local_185.f_753[5 /*28*/].f_25 = 4;
	Local_185.f_753[5 /*28*/].f_1 = 0.175f;
	Local_185.f_753[5 /*28*/].f_2 = (0f + 0.06944444f);
	Local_185.f_753[5 /*28*/].f_22 = { func_92(0.089583f, 0.1f) };
	Local_185.f_753[5 /*28*/].f_3 = { func_92(-0.025f, 0.035185f) };
	Local_185.f_753[5 /*28*/].f_14 = 700;
	Local_185.f_753[5 /*28*/].f_15 = 4;
	Local_185.f_753[5 /*28*/].f_17 = 4;
	Local_185.f_753[5 /*28*/].f_16 = 1250;
	Local_185.f_753[5 /*28*/].f_5[0 /*2*/] = { func_92((-0.16875f / 5f), (0.111111f / 4f)) };
	Local_185.f_753[5 /*28*/].f_5[1 /*2*/] = { func_92((-0.16875f / 5f), (-0.111111f / 3f)) };
	Local_185.f_753[5 /*28*/].f_5[2 /*2*/] = { func_92((0.16875f / 6f), (-0.111111f / 3f)) };
	Local_185.f_753[5 /*28*/].f_5[3 /*2*/] = { func_92((0.16875f / 6f), (0.111111f / 4f)) };
	Local_185.f_753[5 /*28*/].f_27 = 4;
	Local_185.f_753[5 /*28*/].f_26 = "pod_fire";
	Local_185.f_753[5 /*28*/].f_18 = 3;
	func_353(5, 1, 1, 1, 1, 1);
	Local_185.f_753[5 /*28*/].f_20 = "IAP_H_ROT";
	Local_185.f_753[5 /*28*/].f_21 = 7500;
	Local_185.f_753[18 /*28*/] = 5;
	Local_185.f_753[18 /*28*/].f_24 = "pickup_flame";
	Local_185.f_753[18 /*28*/].f_25 = 0;
	Local_185.f_753[18 /*28*/].f_1 = 0.15f;
	Local_185.f_753[18 /*28*/].f_2 = -0.031f;
	Local_185.f_753[18 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[18 /*28*/].f_17 = 1;
	Local_185.f_753[18 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[18 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[18 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[18 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[18 /*28*/].f_18 = 4;
	func_353(18, 1, 1, 1, 1, 1);
	Local_185.f_753[18 /*28*/].f_20 = func_10();
	Local_185.f_753[18 /*28*/].f_21 = 7500;
	Local_185.f_753[19 /*28*/] = 5;
	Local_185.f_753[19 /*28*/].f_24 = "pickup_rocket";
	Local_185.f_753[19 /*28*/].f_25 = 0;
	Local_185.f_753[19 /*28*/].f_1 = 0.15f;
	Local_185.f_753[19 /*28*/].f_2 = -0.031f;
	Local_185.f_753[19 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[19 /*28*/].f_17 = 1;
	Local_185.f_753[19 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[19 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[19 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[19 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[19 /*28*/].f_18 = 4;
	func_353(19, 1, 1, 1, 1, 1);
	Local_185.f_753[19 /*28*/].f_20 = func_10();
	Local_185.f_753[19 /*28*/].f_21 = 7500;
	Local_185.f_753[20 /*28*/] = 5;
	Local_185.f_753[20 /*28*/].f_24 = "pickup_health";
	Local_185.f_753[20 /*28*/].f_25 = 0;
	Local_185.f_753[20 /*28*/].f_1 = 0.15f;
	Local_185.f_753[20 /*28*/].f_2 = -0.031f;
	Local_185.f_753[20 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[20 /*28*/].f_17 = 1;
	Local_185.f_753[20 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[20 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[20 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[20 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[20 /*28*/].f_18 = 5;
	func_353(20, 1, 1, 1, 1, 1);
	Local_185.f_753[20 /*28*/].f_20 = func_10();
	Local_185.f_753[20 /*28*/].f_21 = 7500;
	Local_185.f_753[21 /*28*/] = 5;
	Local_185.f_753[21 /*28*/].f_24 = "pickup_life";
	Local_185.f_753[21 /*28*/].f_25 = 0;
	Local_185.f_753[21 /*28*/].f_1 = 0.15f;
	Local_185.f_753[21 /*28*/].f_2 = -0.031f;
	Local_185.f_753[21 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[21 /*28*/].f_17 = 1;
	Local_185.f_753[21 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[21 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[21 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[21 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[21 /*28*/].f_18 = 4;
	func_353(21, 1, 1, 1, 1, 1);
	Local_185.f_753[21 /*28*/].f_20 = func_10();
	Local_185.f_753[21 /*28*/].f_21 = 7500;
	Local_185.f_753[22 /*28*/] = 5;
	Local_185.f_753[22 /*28*/].f_24 = "pickup_score";
	Local_185.f_753[22 /*28*/].f_25 = 0;
	Local_185.f_753[22 /*28*/].f_1 = 0.15f;
	Local_185.f_753[22 /*28*/].f_2 = -0.031f;
	Local_185.f_753[22 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[22 /*28*/].f_17 = 1;
	Local_185.f_753[22 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[22 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[22 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[22 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[22 /*28*/].f_18 = 5;
	func_353(22, 1, 1, 1, 1, 1);
	Local_185.f_753[22 /*28*/].f_20 = "IAP_H_PICKUP";
	Local_185.f_753[22 /*28*/].f_21 = 7500;
	Local_185.f_753[23 /*28*/] = 5;
	Local_185.f_753[23 /*28*/].f_24 = "pickup_shield";
	Local_185.f_753[23 /*28*/].f_25 = 0;
	Local_185.f_753[23 /*28*/].f_1 = 0.15f;
	Local_185.f_753[23 /*28*/].f_2 = -0.031f;
	Local_185.f_753[23 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[23 /*28*/].f_17 = 1;
	Local_185.f_753[23 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[23 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[23 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[23 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[23 /*28*/].f_18 = 5;
	func_353(23, 1, 1, 1, 1, 1);
	Local_185.f_753[23 /*28*/].f_20 = func_10();
	Local_185.f_753[23 /*28*/].f_21 = 7500;
	Local_185.f_753[24 /*28*/] = 5;
	Local_185.f_753[24 /*28*/].f_24 = "pickup_enemy";
	Local_185.f_753[24 /*28*/].f_25 = 0;
	Local_185.f_753[24 /*28*/].f_1 = 0.15f;
	Local_185.f_753[24 /*28*/].f_2 = -0.031f;
	Local_185.f_753[24 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[24 /*28*/].f_17 = 1;
	Local_185.f_753[24 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[24 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[24 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[24 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[24 /*28*/].f_18 = 5;
	func_353(24, 1, 1, 1, 1, 1);
	Local_185.f_753[24 /*28*/].f_20 = func_10();
	Local_185.f_753[24 /*28*/].f_21 = 7500;
	Local_185.f_753[25 /*28*/] = 5;
	Local_185.f_753[25 /*28*/].f_24 = "pickup_plasma";
	Local_185.f_753[25 /*28*/].f_25 = 0;
	Local_185.f_753[25 /*28*/].f_1 = 0.15f;
	Local_185.f_753[25 /*28*/].f_2 = -0.031f;
	Local_185.f_753[25 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[25 /*28*/].f_17 = 1;
	Local_185.f_753[25 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[25 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[25 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[25 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[25 /*28*/].f_18 = 4;
	func_353(25, 1, 1, 1, 1, 1);
	Local_185.f_753[25 /*28*/].f_20 = func_10();
	Local_185.f_753[25 /*28*/].f_21 = 7500;
	Local_185.f_753[26 /*28*/] = 5;
	Local_185.f_753[26 /*28*/].f_24 = "pickup_triple";
	Local_185.f_753[26 /*28*/].f_25 = 0;
	Local_185.f_753[26 /*28*/].f_1 = 0.15f;
	Local_185.f_753[26 /*28*/].f_2 = -0.031f;
	Local_185.f_753[26 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[26 /*28*/].f_17 = 1;
	Local_185.f_753[26 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[26 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[26 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[26 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[26 /*28*/].f_18 = 4;
	func_353(26, 1, 1, 1, 1, 1);
	Local_185.f_753[26 /*28*/].f_20 = func_10();
	Local_185.f_753[26 /*28*/].f_21 = 7500;
	Local_185.f_753[27 /*28*/] = 5;
	Local_185.f_753[27 /*28*/].f_24 = "pickup_nuke";
	Local_185.f_753[27 /*28*/].f_25 = 0;
	Local_185.f_753[27 /*28*/].f_1 = 0.15f;
	Local_185.f_753[27 /*28*/].f_2 = -0.031f;
	Local_185.f_753[27 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[27 /*28*/].f_17 = 1;
	Local_185.f_753[27 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[27 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[27 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[27 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[27 /*28*/].f_18 = 4;
	func_353(27, 1, 1, 1, 1, 1);
	Local_185.f_753[27 /*28*/].f_20 = func_10();
	Local_185.f_753[27 /*28*/].f_21 = 7500;
	Local_185.f_753[28 /*28*/] = 5;
	Local_185.f_753[28 /*28*/].f_24 = "pickup_random";
	Local_185.f_753[28 /*28*/].f_25 = 0;
	Local_185.f_753[28 /*28*/].f_1 = 0.15f;
	Local_185.f_753[28 /*28*/].f_2 = -0.031f;
	Local_185.f_753[28 /*28*/].f_22 = { func_92(0.04375f, 0.066667f) };
	Local_185.f_753[28 /*28*/].f_17 = 1;
	Local_185.f_753[28 /*28*/].f_5[0 /*2*/] = { func_92(-0.0238f, 0.035f) };
	Local_185.f_753[28 /*28*/].f_5[1 /*2*/] = { func_92(-0.0238f, -0.035f) };
	Local_185.f_753[28 /*28*/].f_5[2 /*2*/] = { func_92(0.0238f, -0.035f) };
	Local_185.f_753[28 /*28*/].f_5[3 /*2*/] = { func_92(0.0238f, 0.035f) };
	Local_185.f_753[28 /*28*/].f_18 = 4;
	func_353(28, 1, 1, 1, 1, 1);
	Local_185.f_753[28 /*28*/].f_20 = func_10();
	Local_185.f_753[28 /*28*/].f_21 = 7500;
	Local_185.f_753[6 /*28*/] = 7;
	Local_185.f_753[6 /*28*/].f_24 = "jet_crash";
	Local_185.f_753[6 /*28*/].f_25 = 0;
	Local_185.f_753[6 /*28*/].f_1 = 0.15f;
	Local_185.f_753[6 /*28*/].f_2 = -0.1f;
	Local_185.f_753[6 /*28*/].f_22 = { func_92(0.13125f, 0.207407f) };
	Local_185.f_753[6 /*28*/].f_17 = 12;
	Local_185.f_753[6 /*28*/].f_16 = 1000;
	Local_185.f_753[6 /*28*/].f_5[0 /*2*/] = { func_92(-0.0625f, 0.097222f) };
	Local_185.f_753[6 /*28*/].f_5[1 /*2*/] = { func_92(-0.005208f, -0.014815f) };
	Local_185.f_753[6 /*28*/].f_5[2 /*2*/] = { func_92(0.028646f, -0.101852f) };
	Local_185.f_753[6 /*28*/].f_5[3 /*2*/] = { func_92(0.056771f, 0.037037f) };
	Local_185.f_753[6 /*28*/].f_18 = 1;
	func_353(6, 1, 1, 1, 1, 1);
	Local_185.f_753[6 /*28*/].f_20 = func_10();
	Local_185.f_753[6 /*28*/].f_21 = 7500;
	Local_185.f_753[33 /*28*/] = 7;
	Local_185.f_753[33 /*28*/].f_24 = "crashed_tank";
	Local_185.f_753[33 /*28*/].f_25 = 0;
	Local_185.f_753[33 /*28*/].f_1 = 0.15f;
	Local_185.f_753[33 /*28*/].f_2 = -0.07f;
	Local_185.f_753[33 /*28*/].f_22 = { func_92(0.10625f, 0.14444445f) };
	Local_185.f_753[33 /*28*/].f_17 = 12;
	Local_185.f_753[33 /*28*/].f_16 = 1000;
	Local_185.f_753[33 /*28*/].f_5[0 /*2*/] = { func_92(-0.053125f, 0.072222225f) };
	Local_185.f_753[33 /*28*/].f_5[1 /*2*/] = { func_92(0f, -0.072222225f) };
	Local_185.f_753[33 /*28*/].f_5[2 /*2*/] = { func_92(0.038020834f, -0.072222225f) };
	Local_185.f_753[33 /*28*/].f_5[3 /*2*/] = { func_92(0.053125f, 0.072222225f) };
	Local_185.f_753[33 /*28*/].f_18 = 1;
	func_353(33, 0, 0, 0, 0, 0);
	Local_185.f_753[33 /*28*/].f_20 = func_10();
	Local_185.f_753[33 /*28*/].f_21 = 7500;
	Local_185.f_753[7 /*28*/] = 8;
	Local_185.f_753[7 /*28*/].f_24 = "anti_tank_barrier";
	Local_185.f_753[7 /*28*/].f_25 = 0;
	Local_185.f_753[7 /*28*/].f_1 = 0.15f;
	Local_185.f_753[7 /*28*/].f_2 = -0.055556f;
	Local_185.f_753[7 /*28*/].f_22 = { func_92(0.066667f, 0.122222f) };
	Local_185.f_753[7 /*28*/].f_17 = 1;
	Local_185.f_753[7 /*28*/].f_5[0 /*2*/] = { func_92(-0.03f, 0.055f) };
	Local_185.f_753[7 /*28*/].f_5[1 /*2*/] = { func_92(-0.03f, -0.05f) };
	Local_185.f_753[7 /*28*/].f_5[2 /*2*/] = { func_92(0.03f, -0.05f) };
	Local_185.f_753[7 /*28*/].f_5[3 /*2*/] = { func_92(0.03f, 0.055f) };
	Local_185.f_753[7 /*28*/].f_18 = 1;
	func_353(7, 1, 1, 1, 1, 1);
	Local_185.f_753[7 /*28*/].f_20 = "IAP_H_JUMP";
	Local_185.f_753[7 /*28*/].f_21 = 7500;
	Local_185.f_753[8 /*28*/] = 3;
	Local_185.f_753[8 /*28*/].f_24 = "pitfall";
	Local_185.f_753[8 /*28*/].f_25 = 0;
	Local_185.f_753[8 /*28*/].f_1 = 0.15f;
	Local_185.f_753[8 /*28*/].f_2 = ((0.89444f - 0.06944444f) + 0.023148147f);
	Local_185.f_753[8 /*28*/].f_22 = { func_92(0.422917f, 0.211111f) };
	Local_185.f_753[8 /*28*/].f_17 = 1;
	Local_185.f_753[8 /*28*/].f_5[0 /*2*/] = { func_92(-0.015f, -0.075f) };
	Local_185.f_753[8 /*28*/].f_5[1 /*2*/] = { func_92(-0.015f, -0.14f) };
	Local_185.f_753[8 /*28*/].f_5[2 /*2*/] = { func_92(0.015f, -0.14f) };
	Local_185.f_753[8 /*28*/].f_5[3 /*2*/] = { func_92(0.015f, -0.075f) };
	Local_185.f_753[8 /*28*/].f_18 = 0;
	func_353(8, 1, 0, 0, 0, 0);
	Local_185.f_753[8 /*28*/].f_20 = func_10();
	Local_185.f_753[8 /*28*/].f_21 = 7500;
	Local_185.f_753[9 /*28*/] = 3;
	Local_185.f_753[9 /*28*/].f_24 = "pitfall";
	Local_185.f_753[9 /*28*/].f_25 = 0;
	Local_185.f_753[9 /*28*/].f_1 = 0.15f;
	Local_185.f_753[9 /*28*/].f_2 = ((0.892592f - 0.06944444f) + 0.023148147f);
	Local_185.f_753[9 /*28*/].f_22 = { func_92(0.308333f, 0.214815f) };
	Local_185.f_753[9 /*28*/].f_17 = 1;
	Local_185.f_753[9 /*28*/].f_5[0 /*2*/] = { func_92(-0.015f, -0.075f) };
	Local_185.f_753[9 /*28*/].f_5[1 /*2*/] = { func_92(-0.015f, -0.14f) };
	Local_185.f_753[9 /*28*/].f_5[2 /*2*/] = { func_92(0.015f, -0.14f) };
	Local_185.f_753[9 /*28*/].f_5[3 /*2*/] = { func_92(0.015f, -0.075f) };
	Local_185.f_753[9 /*28*/].f_18 = 0;
	func_353(9, 0, 1, 0, 0, 0);
	Local_185.f_753[9 /*28*/].f_20 = func_10();
	Local_185.f_753[9 /*28*/].f_21 = 7500;
	Local_185.f_753[10 /*28*/] = 3;
	Local_185.f_753[10 /*28*/].f_24 = "pitfall";
	Local_185.f_753[10 /*28*/].f_25 = 0;
	Local_185.f_753[10 /*28*/].f_1 = 0.15f;
	Local_185.f_753[10 /*28*/].f_2 = ((0.89444f - 0.06944444f) + 0.023148147f);
	Local_185.f_753[10 /*28*/].f_22 = { func_92(0.308333f, 0.211111f) };
	Local_185.f_753[10 /*28*/].f_17 = 1;
	Local_185.f_753[10 /*28*/].f_5[0 /*2*/] = { func_92(-0.015f, -0.075f) };
	Local_185.f_753[10 /*28*/].f_5[1 /*2*/] = { func_92(-0.015f, -0.14f) };
	Local_185.f_753[10 /*28*/].f_5[2 /*2*/] = { func_92(0.015f, -0.14f) };
	Local_185.f_753[10 /*28*/].f_5[3 /*2*/] = { func_92(0.015f, -0.075f) };
	Local_185.f_753[10 /*28*/].f_18 = 0;
	func_353(10, 0, 0, 1, 0, 0);
	Local_185.f_753[10 /*28*/].f_20 = func_10();
	Local_185.f_753[10 /*28*/].f_21 = 7500;
	Local_185.f_753[11 /*28*/] = 3;
	Local_185.f_753[11 /*28*/].f_24 = "pitfall";
	Local_185.f_753[11 /*28*/].f_25 = 0;
	Local_185.f_753[11 /*28*/].f_1 = 0.15f;
	Local_185.f_753[11 /*28*/].f_2 = ((0.892592f - 0.06944444f) + 0.023148147f);
	Local_185.f_753[11 /*28*/].f_22 = { func_92(0.30625f, 0.214815f) };
	Local_185.f_753[11 /*28*/].f_17 = 1;
	Local_185.f_753[11 /*28*/].f_5[0 /*2*/] = { func_92(-0.015f, -0.075f) };
	Local_185.f_753[11 /*28*/].f_5[1 /*2*/] = { func_92(-0.015f, -0.14f) };
	Local_185.f_753[11 /*28*/].f_5[2 /*2*/] = { func_92(0.015f, -0.14f) };
	Local_185.f_753[11 /*28*/].f_5[3 /*2*/] = { func_92(0.015f, -0.075f) };
	Local_185.f_753[11 /*28*/].f_18 = 0;
	func_353(11, 0, 0, 0, 1, 0);
	Local_185.f_753[11 /*28*/].f_20 = func_10();
	Local_185.f_753[11 /*28*/].f_21 = 7500;
	Local_185.f_753[12 /*28*/] = 3;
	Local_185.f_753[12 /*28*/].f_24 = "pitfall";
	Local_185.f_753[12 /*28*/].f_25 = 0;
	Local_185.f_753[12 /*28*/].f_1 = 0.15f;
	Local_185.f_753[12 /*28*/].f_2 = ((0.8333324f - (0.011111111f / 2f)) + 0.023148147f);
	Local_185.f_753[12 /*28*/].f_22 = { func_92(0.30625f, (0.22222222f - 0.011111111f)) };
	Local_185.f_753[12 /*28*/].f_17 = 1;
	Local_185.f_753[12 /*28*/].f_5[0 /*2*/] = { func_92(-0.015f, -0.075f) };
	Local_185.f_753[12 /*28*/].f_5[1 /*2*/] = { func_92(-0.015f, -0.14f) };
	Local_185.f_753[12 /*28*/].f_5[2 /*2*/] = { func_92(0.015f, -0.14f) };
	Local_185.f_753[12 /*28*/].f_5[3 /*2*/] = { func_92(0.015f, -0.075f) };
	Local_185.f_753[12 /*28*/].f_18 = 0;
	func_353(12, 0, 0, 0, 0, 1);
	Local_185.f_753[12 /*28*/].f_20 = func_10();
	Local_185.f_753[12 /*28*/].f_21 = 7500;
	Local_185.f_753[13 /*28*/] = 4;
	Local_185.f_753[13 /*28*/].f_24 = "ledge";
	Local_185.f_753[13 /*28*/].f_25 = 0;
	Local_185.f_753[13 /*28*/].f_1 = 0.15f;
	Local_185.f_753[13 /*28*/].f_2 = ((0.81296295f - 0.06944444f) + 0.023148147f);
	Local_185.f_753[13 /*28*/].f_22 = { func_92(0.422917f, 0.374074f) };
	Local_185.f_753[13 /*28*/].f_17 = 1;
	Local_185.f_753[13 /*28*/].f_18 = 9;
	func_353(13, 1, 0, 0, 0, 0);
	Local_185.f_753[13 /*28*/].f_20 = func_10();
	Local_185.f_753[13 /*28*/].f_21 = 7500;
	Local_185.f_753[14 /*28*/] = 4;
	Local_185.f_753[14 /*28*/].f_24 = "ledge";
	Local_185.f_753[14 /*28*/].f_25 = 0;
	Local_185.f_753[14 /*28*/].f_1 = 0.15f;
	Local_185.f_753[14 /*28*/].f_2 = ((0.81296295f - 0.06944444f) + 0.023148147f);
	Local_185.f_753[14 /*28*/].f_22 = { func_92(0.308333f, 0.374074f) };
	Local_185.f_753[14 /*28*/].f_17 = 1;
	Local_185.f_753[14 /*28*/].f_18 = 9;
	func_353(14, 0, 1, 0, 0, 0);
	Local_185.f_753[14 /*28*/].f_20 = func_10();
	Local_185.f_753[14 /*28*/].f_21 = 7500;
	Local_185.f_753[15 /*28*/] = 4;
	Local_185.f_753[15 /*28*/].f_24 = "ledge";
	Local_185.f_753[15 /*28*/].f_25 = 0;
	Local_185.f_753[15 /*28*/].f_1 = 0.15f;
	Local_185.f_753[15 /*28*/].f_2 = ((0.81296295f - 0.06944444f) + 0.023148147f);
	Local_185.f_753[15 /*28*/].f_22 = { func_92(0.308333f, 0.374074f) };
	Local_185.f_753[15 /*28*/].f_17 = 1;
	Local_185.f_753[15 /*28*/].f_18 = 9;
	func_353(15, 0, 0, 1, 0, 0);
	Local_185.f_753[15 /*28*/].f_20 = func_10();
	Local_185.f_753[15 /*28*/].f_21 = 7500;
	Local_185.f_753[16 /*28*/] = 4;
	Local_185.f_753[16 /*28*/].f_24 = "ledge";
	Local_185.f_753[16 /*28*/].f_25 = 0;
	Local_185.f_753[16 /*28*/].f_1 = 0.15f;
	Local_185.f_753[16 /*28*/].f_2 = ((0.81296295f - 0.06944444f) + 0.023148147f);
	Local_185.f_753[16 /*28*/].f_22 = { func_92(0.30625f, 0.374074f) };
	Local_185.f_753[16 /*28*/].f_17 = 1;
	Local_185.f_753[16 /*28*/].f_18 = 9;
	func_353(16, 0, 0, 0, 1, 0);
	Local_185.f_753[16 /*28*/].f_20 = func_10();
	Local_185.f_753[16 /*28*/].f_21 = 7500;
	Local_185.f_753[17 /*28*/] = 4;
	Local_185.f_753[17 /*28*/].f_24 = "ledge";
	Local_185.f_753[17 /*28*/].f_25 = 0;
	Local_185.f_753[17 /*28*/].f_1 = 0.15f;
	Local_185.f_753[17 /*28*/].f_2 = ((0.7574074f - (0.011111111f / 2f)) + 0.023148147f);
	Local_185.f_753[17 /*28*/].f_22 = { func_92(0.30625f, (0.37407407f - 0.011111111f)) };
	Local_185.f_753[17 /*28*/].f_17 = 1;
	Local_185.f_753[17 /*28*/].f_18 = 9;
	func_353(17, 0, 0, 0, 0, 1);
	Local_185.f_753[17 /*28*/].f_20 = func_10();
	Local_185.f_753[17 /*28*/].f_21 = 7500;
	Local_185.f_753[29 /*28*/] = 6;
	Local_185.f_753[29 /*28*/].f_24 = "oil_drum_1";
	Local_185.f_753[29 /*28*/].f_25 = 4;
	Local_185.f_753[29 /*28*/].f_1 = 0.15f;
	Local_185.f_753[29 /*28*/].f_2 = -0.075926f;
	Local_185.f_753[29 /*28*/].f_22 = { func_92(0.054167f, 0.151852f) };
	Local_185.f_753[29 /*28*/].f_17 = 1;
	Local_185.f_753[29 /*28*/].f_16 = 5000;
	Local_185.f_753[29 /*28*/].f_5[0 /*2*/] = { func_92((-0.054167f / 2f), (0.151852f / 2f)) };
	Local_185.f_753[29 /*28*/].f_5[1 /*2*/] = { func_92((-0.054167f / 2f), (-0.151852f / 2f)) };
	Local_185.f_753[29 /*28*/].f_5[2 /*2*/] = { func_92((0.054167f / 2f), (-0.151852f / 2f)) };
	Local_185.f_753[29 /*28*/].f_5[3 /*2*/] = { func_92((0.054167f / 2f), (0.151852f / 2f)) };
	Local_185.f_753[29 /*28*/].f_18 = 6;
	func_353(29, 1, 1, 1, 1, 1);
	Local_185.f_753[29 /*28*/].f_20 = "IAP_H_OIL";
	Local_185.f_753[29 /*28*/].f_21 = 7500;
	Local_185.f_753[30 /*28*/] = 6;
	Local_185.f_753[30 /*28*/].f_24 = "stock_pile1";
	Local_185.f_753[30 /*28*/].f_25 = 4;
	Local_185.f_753[30 /*28*/].f_1 = 0.15f;
	Local_185.f_753[30 /*28*/].f_2 = -0.122222f;
	Local_185.f_753[30 /*28*/].f_22 = { func_92(0.116667f, 0.244444f) };
	Local_185.f_753[30 /*28*/].f_17 = 1;
	Local_185.f_753[30 /*28*/].f_16 = 12500;
	Local_185.f_753[30 /*28*/].f_5[0 /*2*/] = { func_92((-0.116667f / 2f), (0.244444f / 2f)) };
	Local_185.f_753[30 /*28*/].f_5[1 /*2*/] = { func_92((-0.116667f / 2f), (-0.244444f / 2f)) };
	Local_185.f_753[30 /*28*/].f_5[2 /*2*/] = { func_92((0.116667f / 2f), (-0.244444f / 2f)) };
	Local_185.f_753[30 /*28*/].f_5[3 /*2*/] = { func_92((0.116667f / 2f), (0.244444f / 2f)) };
	Local_185.f_753[30 /*28*/].f_18 = 7;
	func_353(30, 1, 1, 1, 1, 1);
	Local_185.f_753[30 /*28*/].f_20 = func_10();
	Local_185.f_753[30 /*28*/].f_21 = 7500;
	Local_185.f_753[31 /*28*/] = 6;
	Local_185.f_753[31 /*28*/].f_24 = "stock_pile2";
	Local_185.f_753[31 /*28*/].f_25 = 4;
	Local_185.f_753[31 /*28*/].f_1 = 0.15f;
	Local_185.f_753[31 /*28*/].f_2 = -0.122222f;
	Local_185.f_753[31 /*28*/].f_22 = { func_92(0.116667f, 0.244444f) };
	Local_185.f_753[31 /*28*/].f_17 = 1;
	Local_185.f_753[31 /*28*/].f_16 = 12500;
	Local_185.f_753[31 /*28*/].f_5[0 /*2*/] = { func_92((-0.116667f / 2f), (0.244444f / 2f)) };
	Local_185.f_753[31 /*28*/].f_5[1 /*2*/] = { func_92((-0.116667f / 2f), (-0.244444f / 2f)) };
	Local_185.f_753[31 /*28*/].f_5[2 /*2*/] = { func_92((0.116667f / 2f), (-0.244444f / 2f)) };
	Local_185.f_753[31 /*28*/].f_5[3 /*2*/] = { func_92((0.116667f / 2f), (0.244444f / 2f)) };
	Local_185.f_753[31 /*28*/].f_18 = 7;
	func_353(31, 0, 0, 0, 0, 0);
	Local_185.f_753[31 /*28*/].f_20 = func_10();
	Local_185.f_753[31 /*28*/].f_21 = 7500;
	Local_185.f_753[32 /*28*/] = 6;
	Local_185.f_753[32 /*28*/].f_24 = "stock_pile3";
	Local_185.f_753[32 /*28*/].f_25 = 4;
	Local_185.f_753[32 /*28*/].f_1 = 0.15f;
	Local_185.f_753[32 /*28*/].f_2 = -0.087037f;
	Local_185.f_753[32 /*28*/].f_22 = { func_92(0.160417f, 0.174074f) };
	Local_185.f_753[32 /*28*/].f_17 = 1;
	Local_185.f_753[32 /*28*/].f_16 = 25000;
	Local_185.f_753[32 /*28*/].f_5[0 /*2*/] = { func_92((-0.160417f / 2f), (0.174074f / 2f)) };
	Local_185.f_753[32 /*28*/].f_5[1 /*2*/] = { func_92((-0.160417f / 2f), (-0.174074f / 2f)) };
	Local_185.f_753[32 /*28*/].f_5[2 /*2*/] = { func_92((0.160417f / 2f), (-0.174074f / 2f)) };
	Local_185.f_753[32 /*28*/].f_5[3 /*2*/] = { func_92((0.160417f / 2f), (0.174074f / 2f)) };
	Local_185.f_753[32 /*28*/].f_18 = 8;
	func_353(32, 1, 1, 1, 1, 1);
	Local_185.f_753[32 /*28*/].f_20 = func_10();
	Local_185.f_753[32 /*28*/].f_21 = 7500;
}

void func_353(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x153B2
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_185.f_753[iParam0 /*28*/].f_19), 0);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Local_185.f_753[iParam0 /*28*/].f_19), 1);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&(Local_185.f_753[iParam0 /*28*/].f_19), 2);
	}
	if (bParam4)
	{
		MISC::SET_BIT(&(Local_185.f_753[iParam0 /*28*/].f_19), 3);
	}
	if (bParam5)
	{
		MISC::SET_BIT(&(Local_185.f_753[iParam0 /*28*/].f_19), 4);
	}
}

void func_354(int iParam0)//Position - 0x15423
{
	Local_3142.f_137 = iParam0;
	func_114(&(Local_3142[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_3142[1 /*17*/].f_6 = 1000;
	Local_3142[1 /*17*/].f_7 = 10000;
	Local_3142[2 /*17*/].f_1 = 1;
	Local_3142[2 /*17*/].f_8 = 40;
	func_114(&(Local_3142[2 /*17*/].f_9), 0, 0, 0, 0);
	func_114(&(Local_3142[3 /*17*/].f_9), 255, 255, 255, 127);
	func_114(&(Local_3142[4 /*17*/].f_9), 255, 255, 255, 127);
	func_114(&(Local_3142[5 /*17*/].f_9), 255, 255, 255, 127);
	func_114(&(Local_3142[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_3142.f_137)
	{
		case 2:
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 255, 255, 30);
			func_114(&(Local_3142[1 /*17*/].f_9), 255, 255, 255, 20);
			func_114(&(Local_3142[2 /*17*/].f_13), 0, 0, 0, 30);
			func_114(&(Local_3142[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_3142[0 /*17*/] = 1;
			Local_3142[6 /*17*/] = 1;
			Local_3142[1 /*17*/] = 1;
			Local_3142[2 /*17*/] = 1;
			Local_3142[3 /*17*/] = 1;
			break;
		
		case 3:
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 255, 255, 30);
			func_114(&(Local_3142[1 /*17*/].f_9), 255, 255, 255, 20);
			func_114(&(Local_3142[2 /*17*/].f_13), 0, 0, 0, 30);
			func_114(&(Local_3142[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_3142[0 /*17*/] = 1;
			Local_3142[6 /*17*/] = 1;
			Local_3142[1 /*17*/] = 1;
			Local_3142[2 /*17*/] = 1;
			Local_3142[4 /*17*/] = 1;
			break;
		
		case 4:
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 255, 255, 30);
			func_114(&(Local_3142[1 /*17*/].f_9), 255, 255, 255, 20);
			func_114(&(Local_3142[2 /*17*/].f_13), 0, 0, 0, 30);
			func_114(&(Local_3142[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_3142[0 /*17*/] = 1;
			Local_3142[6 /*17*/] = 1;
			Local_3142[1 /*17*/] = 1;
			Local_3142[2 /*17*/] = 1;
			Local_3142[5 /*17*/] = 1;
			break;
		
		case 1:
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 255, 255, 30);
			func_114(&(Local_3142[1 /*17*/].f_9), 255, 255, 255, 20);
			func_114(&(Local_3142[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_3142[0 /*17*/] = 1;
			Local_3142[6 /*17*/] = 1;
			Local_3142[1 /*17*/] = 1;
			Local_3142[2 /*17*/] = 1;
			Local_3142[3 /*17*/] = 1;
			break;
		
		case 0:
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 255, 255, 30);
			func_114(&(Local_3142[1 /*17*/].f_9), 255, 255, 255, 20);
			func_114(&(Local_3142[2 /*17*/].f_13), 0, 0, 0, 10);
			func_114(&(Local_3142[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_3142[0 /*17*/] = 1;
			Local_3142[6 /*17*/] = 1;
			Local_3142[1 /*17*/] = 1;
			Local_3142[2 /*17*/] = 1;
			Local_3142[5 /*17*/] = 1;
			break;
		
		case 6:
			func_114(&(Local_3142[1 /*17*/].f_9), 255, 255, 255, 10);
			func_114(&(Local_3142[2 /*17*/].f_13), 0, 0, 0, 8);
			func_114(&(Local_3142[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_3142[0 /*17*/] = 1;
			Local_3142[1 /*17*/] = 1;
			Local_3142[2 /*17*/] = 1;
			Local_3142[7 /*17*/] = 1;
			break;
		
		case 7:
			func_114(&(Local_3142[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_3142[2 /*17*/] = 1;
			Local_3142[0 /*17*/] = 1;
			func_114(&(Local_3142[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_3142[3 /*17*/] = 1;
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_3142[6 /*17*/] = 1;
			break;
		
		case 5:
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 255, 255, 30);
			func_114(&(Local_3142[1 /*17*/].f_9), 255, 255, 255, 20);
			func_114(&(Local_3142[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_3142[0 /*17*/] = 1;
			Local_3142[6 /*17*/] = 1;
			Local_3142[1 /*17*/] = 1;
			Local_3142[2 /*17*/] = 1;
			Local_3142[3 /*17*/] = 1;
			break;
		
		case 8:
			Local_3142[1 /*17*/] = 0;
			Local_3142[2 /*17*/] = 0;
			Local_3142[0 /*17*/] = 1;
			func_114(&(Local_3142[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_3142[6 /*17*/] = 1;
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_3142[7 /*17*/] = 1;
			func_114(&(Local_3142[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 9:
			Local_3142[1 /*17*/] = 0;
			Local_3142[2 /*17*/] = 0;
			Local_3142[0 /*17*/] = 1;
			func_114(&(Local_3142[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_3142[6 /*17*/] = 1;
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_3142[7 /*17*/] = 1;
			func_114(&(Local_3142[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 10:
			Local_3142[1 /*17*/] = 0;
			Local_3142[2 /*17*/] = 0;
			Local_3142[0 /*17*/] = 1;
			func_114(&(Local_3142[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_3142[6 /*17*/] = 1;
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_3142[7 /*17*/] = 1;
			func_114(&(Local_3142[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 11:
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 255, 255, 15);
			func_114(&(Local_3142[1 /*17*/].f_9), 255, 255, 255, 10);
			func_114(&(Local_3142[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_3142[0 /*17*/] = 1;
			Local_3142[6 /*17*/] = 1;
			Local_3142[1 /*17*/] = 1;
			Local_3142[3 /*17*/] = 1;
			break;
		
		case 12:
			func_114(&(Local_3142[1 /*17*/].f_9), 255, 255, 255, 3);
			func_114(&(Local_3142[2 /*17*/].f_13), 0, 0, 0, 15);
			func_114(&(Local_3142[0 /*17*/].f_9), 0, 0, 255, 90);
			func_114(&(Local_3142[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_3142[1 /*17*/] = 1;
			Local_3142[2 /*17*/] = 0;
			Local_3142[0 /*17*/] = 1;
			Local_3142[6 /*17*/] = 1;
			break;
	}
}

void func_355()//Position - 0x159F7
{
	MISC::SET_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885), 16);
	Global_4718592.f_180957 = 1;
	Global_1668143 = 1;
	func_357();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_20(PLAYER::PLAYER_ID(), 0, 0, 0);
		func_356();
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	func_38(1, 0, 1, 0);
	func_19(0, 1, -1);
	func_19(1, 1, -1);
	func_19(2, 1, -1);
	func_19(3, 1, -1);
	func_19(4, 1, -1);
	func_19(6, 1, -1);
	func_19(7, 1, -1);
	func_19(8, 1, -1);
	func_19(9, 1, -1);
	func_19(10, 1, -1);
	func_19(11, 1, -1);
	func_19(12, 1, -1);
	func_19(13, 1, -1);
	func_19(14, 1, -1);
	func_19(15, 1, -1);
	func_19(16, 1, -1);
}

void func_356()//Position - 0x15ACC
{
	if (!Global_2672939.f_1023.f_10)
	{
		Global_2672939.f_1023.f_10 = 1;
	}
}

void func_357()//Position - 0x15AEB
{
	if (func_363() || func_362())
	{
		func_361();
		func_358();
	}
}

void func_358()//Position - 0x15B0C
{
	if ((!func_360() && !func_359()) && Global_2685657)
	{
		Global_4718592.f_128476 = 0;
	}
}

bool func_359()//Position - 0x15B3A
{
	return Global_2684718.f_693;
}

bool func_360()//Position - 0x15B49
{
	return Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_193 != 0;
}

void func_361()//Position - 0x15B60
{
	Global_2684718.f_758 = 1;
}

var func_362()//Position - 0x15B70
{
	return Global_2684718.f_737;
}

var func_363()//Position - 0x15B7F
{
	return BitTest(Global_2684718.f_2, 11);
}

void func_364()//Position - 0x15B90
{
	bool bVar0;
	
	if (Local_185.f_2870 >= 11)
	{
		return;
	}
	if (!func_35())
	{
		func_8(11);
		return;
	}
	if (func_389())
	{
		if (func_388(PLAYER::PLAYER_ID()))
		{
			Local_185.f_2948.f_4 = 0;
			Local_185.f_2948.f_3 = 0;
			func_387(&(Local_185.f_2948), 11);
		}
		func_8(11);
		return;
	}
	func_383();
	if (!Local_185.f_2910 && (Local_185.f_2911 == -2147483647 || (NETWORK::GET_NETWORK_TIME() - Local_185.f_2911) > 5000))
	{
		func_382(func_79(PLAYER::PLAYER_ID()), 1);
		Local_185.f_2911 = NETWORK::GET_NETWORK_TIME();
	}
	func_381();
	MISC::CLEAR_BIT(&(Local_185.f_2368.f_333), 2);
	bVar0 = Local_185.f_2870 >= 2;
	func_365(bVar0);
}

void func_365(bool bParam0)//Position - 0x15C53
{
	func_378();
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	if (MISC::IS_PC_VERSION())
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	func_377(1);
	func_376(4, -1);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_375();
	func_374();
	HUD::THEFEED_HIDE_THIS_FRAME();
	if (bParam0)
	{
		func_367(0);
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		}
	}
	func_366();
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
}

void func_366()//Position - 0x15CC5
{
	Global_23831.f_134 = 1;
}

void func_367(int iParam0)//Position - 0x15CD3
{
	if (func_373())
	{
		return;
	}
	if (!Global_21066.f_1 == 1)
	{
		if (func_372(0))
		{
			func_368(iParam0);
		}
		MISC::SET_BIT(&Global_8920, 2);
	}
}

void func_368(int iParam0)//Position - 0x15D06
{
	if (func_373())
	{
		return;
	}
	if (Global_21284)
	{
		if (func_371())
		{
			func_370(1, 1);
		}
		else
		{
			func_370(0, 0);
		}
	}
	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8920, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22425 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8919, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8919, 30);
	}
	if (!func_369())
	{
		Global_21066.f_1 = 3;
	}
}

int func_369()//Position - 0x15D90
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_370(bool bParam0, bool bParam1)//Position - 0x15DB7
{
	if (bParam0)
	{
		if (func_372(0))
		{
			Global_21284 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
			}
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == 1)
	{
		Global_21284 = 0;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
}

bool func_371()//Position - 0x15E2B
{
	return BitTest(Global_1957675, 5);
}

int func_372(int iParam0)//Position - 0x15E39
{
	if (iParam0 == 1)
	{
		if (Global_21066.f_1 > 3)
		{
			if (BitTest(Global_8919, 14))
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
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_373()//Position - 0x15E90
{
	return BitTest(Global_1957675, 19);
}

void func_374()//Position - 0x15E9F
{
	Global_23831.f_6 = 1;
}

void func_375()//Position - 0x15EAD
{
	Global_1574755 = 1;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
}

void func_376(int iParam0, int iParam1)//Position - 0x15ED6
{
	MISC::SET_BIT(&(Global_1673654.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1673654.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_377(int iParam0)//Position - 0x15F0C
{
	Global_1675211.f_1163 = iParam0;
}

void func_378()//Position - 0x15F1D
{
	fLocal_159 = func_380();
	fLocal_160 = func_379();
}

float func_379()//Position - 0x15F31
{
	return (1.778f / fLocal_159);
}

float func_380()//Position - 0x15F41
{
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&uLocal_161, &iLocal_162);
	fLocal_159 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (MISC::IS_PC_VERSION())
	{
		if (fLocal_159 >= 4f)
		{
			fLocal_159 = (fLocal_159 / 3f);
		}
	}
	return fLocal_159;
}

void func_381()//Position - 0x15F6E
{
	Local_185.f_2874 = (Local_185.f_2874 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	Local_185.f_2875 = SYSTEM::FLOOR((IntToFloat(Local_185.f_2874) / 66f));
	Local_185.f_2874 = (Local_185.f_2874 - SYSTEM::ROUND((66f * IntToFloat(Local_185.f_2875))));
	Local_185.f_2876 = (Local_185.f_2876 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	Local_185.f_2877 = SYSTEM::FLOOR((IntToFloat(Local_185.f_2876) / 33f));
	Local_185.f_2876 = (Local_185.f_2876 - SYSTEM::ROUND((33f * IntToFloat(Local_185.f_2877))));
}

void func_382(int iParam0, int iParam1)//Position - 0x16008
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 457347143;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	iVar4 = func_78(iParam0);
	if (!iVar4 == 0 && func_84(iParam0, 0, 1))
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

void func_383()//Position - 0x16051
{
	int iVar0;
	struct<16> Var1;
	
	if (Local_185.f_2910)
	{
		return;
	}
	Var1.f_4 = 10;
	Var1.f_15 = 10;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) != 174)
		{
		}
		else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 26))
		{
			if (Var1.f_0 == -2031658982)
			{
				if (Var1.f_4 != 10)
				{
				}
				else if (Var1.f_15 != 10)
				{
				}
				else if (Var1.f_3 != 1)
				{
				}
				else
				{
					func_384(&(Var1.f_4), &(Var1.f_15));
				}
			}
		}
		iVar0++;
	}
}

void func_384(var uParam0, var uParam1)//Position - 0x160E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam1)[iVar0] <= 0)
		{
			Local_185.f_2912[iVar0 /*3*/].f_1 = func_386(iVar0);
			Local_185.f_2912[iVar0 /*3*/] = func_385(iVar0);
			func_77(func_79(PLAYER::PLAYER_ID()), 1, iVar0, Local_185.f_2912[iVar0 /*3*/], Local_185.f_2912[iVar0 /*3*/].f_1, 0);
		}
		else
		{
			Local_185.f_2912[iVar0 /*3*/].f_1 = (*uParam1)[iVar0];
			Local_185.f_2912[iVar0 /*3*/] = (*uParam0)[iVar0];
		}
		iVar0++;
	}
	Local_185.f_2910 = 1;
}

int func_385(int iParam0)//Position - 0x16176
{
	switch (iParam0)
	{
		case 0:
			return 54161;
		
		case 1:
			return 1172;
		
		case 2:
			return 45582;
		
		case 3:
			return 70801;
		
		case 4:
			return 5199;
		
		case 5:
			return 12994;
		
		case 6:
			return 4613;
		
		case 7:
			return 73734;
		
		case 8:
			return 8256;
		
		case 9:
			return 13078;
		
		default:
	}
	return 0;
}

int func_386(int iParam0)//Position - 0x16202
{
	switch (iParam0)
	{
		case 0:
			return 2273775;
		
		case 1:
			return 2000000;
		
		case 2:
			return 1900000;
		
		case 3:
			return 1800000;
		
		case 4:
			return 1700000;
		
		case 5:
			return 1600000;
		
		case 6:
			return 1500000;
		
		case 7:
			return 1400000;
		
		case 8:
			return 1200000;
		
		case 9:
			return 1000000;
		
		default:
	}
	return 0;
}

void func_387(var uParam0, int iParam1)//Position - 0x16294
{
	struct<9> Var0;
	bool bVar9;
	bool bVar10;
	int iVar11;
	
	Var0.f_6 = 1073741824;
	Var0.f_7 = -1073741824;
	Var0.f_0 = 66206781;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam0->f_3;
	Var0.f_5 = uParam0->f_4;
	Var0.f_6 = uParam0->f_6;
	Var0.f_7 = uParam0->f_7;
	Var0.f_8 = uParam0->f_8;
	bVar9 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_440, 1))
		{
			MISC::CLEAR_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_440), 1);
			bVar9 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_124(&(uParam0->f_1)))
	{
		func_122(&(uParam0->f_1), 0, 0);
	}
	bVar10 = true;
	if (*uParam0 == iParam1 && !bVar9)
	{
		if (func_124(&(uParam0->f_1)) && !func_121(&(uParam0->f_1), 1000, 0))
		{
			bVar10 = false;
		}
		else
		{
			func_104(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_104(&(uParam0->f_1));
	}
	if (bVar10)
	{
		iVar11 = func_78(PLAYER::PLAYER_ID());
		if (iVar11 != -1)
		{
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, iVar11, Var0.f_0);
			uParam0->f_5 = 1;
		}
	}
}

int func_388(int iParam0)//Position - 0x163BA
{
	if (iParam0 != func_47())
	{
		if (func_84(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
			{
				return func_45(Global_2657991[iParam0 /*467*/].f_324.f_8) == 17;
			}
		}
	}
	return 0;
}

int func_389()//Position - 0x16401
{
	int iVar0;
	
	if (Global_1928791)
	{
		return 1;
	}
	if (func_401())
	{
		return 1;
	}
	if (func_400(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (!func_398())
	{
		return 1;
	}
	if (func_393())
	{
		return 1;
	}
	if (Local_185.f_2870 < 2)
	{
		return 0;
	}
	iVar0 = 202;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 214;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		func_390((1000 - MISC::ABSI((NETWORK::GET_NETWORK_TIME() - Local_185.f_2906))), 1000, "DEG_GAME_QUIT" /* GXT: QUIT */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	}
	else
	{
		func_390(0, 1000, "DEG_GAME_QUIT" /* GXT: QUIT */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		if (Local_185.f_2906 == -2147483647)
		{
			Local_185.f_2906 = NETWORK::GET_NETWORK_TIME() + 1000;
		}
		if (NETWORK::GET_NETWORK_TIME() > Local_185.f_2906)
		{
			return 1;
		}
	}
	else if (Local_185.f_2906 != -2147483647)
	{
		Local_185.f_2906 = -2147483647;
	}
	if (func_388(PLAYER::PLAYER_ID()))
	{
		if (func_393())
		{
			return 1;
		}
	}
	return 0;
}

void func_390(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)//Position - 0x1657D
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_392(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1675211.f_1 = 1;
		func_391(0, iVar0);
		Global_1675211.f_1177[iVar0] = iParam0;
		Global_1675211.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1675211.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1675211.f_1177.f_194[iVar0] = iParam3;
		Global_1675211.f_1177.f_183[iVar0] = iParam4;
		Global_1675211.f_1177.f_227[iVar0] = iParam5;
		Global_1675211.f_1177.f_238[iVar0 /*3*/] = iParam6;
		Global_1675211.f_1177.f_238[iVar0 /*3*/].f_1 = iParam7;
		Global_1675211.f_1177.f_269[iVar0] = iParam8;
		Global_1675211.f_1177.f_280[iVar0] = iParam9;
		Global_1675211.f_1177.f_323[iVar0] = iParam10;
		Global_1675211.f_1177.f_334[iVar0] = iParam11;
		Global_1675211.f_1177.f_345[iVar0] = iParam12;
		Global_1675211.f_1177.f_356[iVar0] = iParam13;
		Global_1675211.f_1172 = 1;
		Global_1675211.f_1177.f_367[iVar0] = iParam14;
		Global_1675211.f_1177.f_378[iVar0] = iParam15;
		Global_1675211.f_1177.f_389[iVar0] = iParam16;
		Global_1675211.f_1177.f_400[iVar0] = iParam17;
		Global_1675211.f_1177.f_411[iVar0] = iParam18;
		Global_1675211.f_1177.f_422[iVar0] = iParam19;
		Global_1675211.f_1177.f_433[iVar0] = iParam20;
		Global_1675211.f_1177.f_444[iVar0] = iParam21;
		Global_1675211.f_1177.f_455[iVar0] = iParam22;
		Global_1675211.f_1177.f_466[iVar0] = iParam23;
		Global_1675211.f_1177.f_477[iVar0] = iParam24;
		Global_1675211.f_1177.f_205[iVar0] = iParam25;
		Global_1675211.f_1177.f_216[iVar0] = iParam39;
		Global_1675211.f_1177.f_488[iVar0] = iParam26;
		Global_1675211.f_1177.f_499[iVar0] = iParam27;
		Global_1675211.f_1177.f_510[iVar0] = iParam28;
		Global_1675211.f_1177.f_521[iVar0] = iParam29;
		Global_1675211.f_1177.f_532[iVar0] = iParam30;
		Global_1675211.f_1177.f_543[iVar0] = iParam31;
		Global_1675211.f_1177.f_554[iVar0] = iParam32;
		Global_1675211.f_1177.f_565[iVar0] = iParam33;
		Global_1675211.f_1177.f_576[iVar0] = iParam34;
		Global_1675211.f_1177.f_587[iVar0] = iParam35;
		Global_1675211.f_1177.f_598[iVar0] = iParam36;
		Global_1675211.f_1177.f_609[iVar0] = iParam37;
		Global_1675211.f_1177.f_620[iVar0] = iParam38;
	}
}

void func_391(int iParam0, int iParam1)//Position - 0x16844
{
	MISC::SET_BIT(&(Global_1675211.f_7064[iParam0]), iParam1);
}

int func_392(int iParam0, int iParam1)//Position - 0x1685D
{
	return BitTest(Global_1675211.f_7064[iParam0], iParam1);
}

int func_393()//Position - 0x16873
{
	if (func_388(PLAYER::PLAYER_ID()))
	{
		if (func_28(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_397(PLAYER::PLAYER_ID(), 0) && func_395(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (func_394())
	{
		return 1;
	}
	if (Global_1579666.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_394()//Position - 0x168CB
{
	return BitTest(Global_1972159, 14);
}

var func_395(int iParam0)//Position - 0x168DA
{
	return func_396(iParam0, 20);
}

var func_396(int iParam0, int iParam1)//Position - 0x168EA
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

int func_397(int iParam0, int iParam1)//Position - 0x16902
{
	if (func_33(iParam0))
	{
		if (Global_1887549[iParam0 /*611*/].f_10.f_33 != -1 || (iParam1 && Global_1887549[iParam0 /*611*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_398()//Position - 0x16946
{
	if (func_399(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (func_388(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	return 0;
}

int func_399(int iParam0)//Position - 0x1696D
{
	if (iParam0 != func_47())
	{
		if (func_84(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
			{
				return func_45(Global_2657991[iParam0 /*467*/].f_324.f_8) == 15;
			}
		}
	}
	return 0;
}

int func_400(int iParam0)//Position - 0x169B4
{
	if (iParam0 != func_47())
	{
		return BitTest(Global_1887549[iParam0 /*611*/].f_516, 3);
	}
	return 0;
}

bool func_401()//Position - 0x169D7
{
	return Global_1943917.f_5223.f_1 != -1;
}

void func_402()//Position - 0x169EA
{
	SYSTEM::WAIT(0);
}

void func_403(struct<21> Param0)//Position - 0x169F7
{
	Param0 = { Param0 };
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
}

