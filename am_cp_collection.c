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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_99[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103[4] = { 0, 0, 0, 0 };
	var uLocal_104[4] = { 0, 0, 0, 0 };
	int iLocal_105[4] = { 0, 0, 0, 0 };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	struct<3> Local_115[130];
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_127 = 0;
	int iLocal_128[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	struct<2> Local_131 = { -1, -1 } ;
	struct<730> Local_132 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_153 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_154 = -1;
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
	var uLocal_176 = -1082130432;
	var uLocal_177 = 3;
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
	var uLocal_193 = -1;
	var uLocal_194 = 0;
	var uLocal_195 = -1;
	var uLocal_196 = -1;
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
	var uLocal_218 = -1082130432;
	var uLocal_219 = 3;
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
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = -1;
	var uLocal_238 = -1;
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
	var uLocal_260 = -1082130432;
	var uLocal_261 = 3;
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
	var uLocal_277 = -1;
	var uLocal_278 = 0;
	var uLocal_279 = -1;
	var uLocal_280 = -1;
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
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = -1082130432;
	var uLocal_303 = 3;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = -1;
	var uLocal_320 = 0;
	var uLocal_321 = -1;
	var uLocal_322 = -1;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = -1082130432;
	var uLocal_345 = 3;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = -1;
	var uLocal_362 = 0;
	var uLocal_363 = -1;
	var uLocal_364 = -1;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = -1082130432;
	var uLocal_387 = 3;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = -1;
	var uLocal_404 = 0;
	var uLocal_405 = -1;
	var uLocal_406 = -1;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = -1082130432;
	var uLocal_429 = 3;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = -1;
	var uLocal_446 = 0;
	var uLocal_447 = -1;
	var uLocal_448 = -1;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = -1082130432;
	var uLocal_471 = 3;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = -1;
	var uLocal_488 = 0;
	var uLocal_489 = -1;
	var uLocal_490 = -1;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = -1082130432;
	var uLocal_513 = 3;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = -1;
	var uLocal_530 = 0;
	var uLocal_531 = -1;
	var uLocal_532 = -1;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = -1082130432;
	var uLocal_555 = 3;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = -1;
	var uLocal_572 = 0;
	var uLocal_573 = -1;
	var uLocal_574 = -1;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = -1082130432;
	var uLocal_597 = 3;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = -1;
	var uLocal_614 = 0;
	var uLocal_615 = -1;
	var uLocal_616 = -1;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = -1082130432;
	var uLocal_639 = 3;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = -1;
	var uLocal_656 = 0;
	var uLocal_657 = -1;
	var uLocal_658 = -1;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = -1082130432;
	var uLocal_681 = 3;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = -1;
	var uLocal_698 = 0;
	var uLocal_699 = -1;
	var uLocal_700 = -1;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = -1082130432;
	var uLocal_723 = 3;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = -1;
	var uLocal_740 = 0;
	var uLocal_741 = -1;
	var uLocal_742 = -1;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = -1082130432;
	var uLocal_765 = 3;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = -1;
	var uLocal_782 = 0;
	var uLocal_783 = -1;
	var uLocal_784 = -1;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = -1082130432;
	var uLocal_807 = 3;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = -1;
	var uLocal_824 = 0;
	var uLocal_825 = -1;
	var uLocal_826 = -1;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = -1082130432;
	var uLocal_849 = 3;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = -1;
	var uLocal_866 = 0;
	var uLocal_867 = -1;
	var uLocal_868 = -1;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = -1082130432;
	var uLocal_891 = 3;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = -1;
	var uLocal_908 = 0;
	var uLocal_909 = -1;
	var uLocal_910 = -1;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = -1082130432;
	var uLocal_933 = 3;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = -1;
	var uLocal_950 = 0;
	var uLocal_951 = -1;
	var uLocal_952 = -1;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = -1082130432;
	var uLocal_975 = 3;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = -1;
	var uLocal_992 = 0;
	var uLocal_993 = -1;
	var uLocal_994 = -1;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = -1082130432;
	var uLocal_1017 = 3;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = -1;
	var uLocal_1034 = 0;
	var uLocal_1035 = -1;
	var uLocal_1036 = -1;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = -1082130432;
	var uLocal_1059 = 3;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = -1;
	var uLocal_1076 = 0;
	var uLocal_1077 = -1;
	var uLocal_1078 = -1;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = -1082130432;
	var uLocal_1101 = 3;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = -1;
	var uLocal_1118 = 0;
	var uLocal_1119 = -1;
	var uLocal_1120 = -1;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = -1082130432;
	var uLocal_1143 = 3;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = -1;
	var uLocal_1160 = 0;
	var uLocal_1161 = -1;
	var uLocal_1162 = -1;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = -1082130432;
	var uLocal_1185 = 3;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = -1;
	var uLocal_1202 = 0;
	var uLocal_1203 = -1;
	var uLocal_1204 = -1;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = -1082130432;
	var uLocal_1227 = 3;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = -1;
	var uLocal_1244 = 0;
	var uLocal_1245 = -1;
	var uLocal_1246 = -1;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = -1082130432;
	var uLocal_1269 = 3;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = -1;
	var uLocal_1286 = 0;
	var uLocal_1287 = -1;
	var uLocal_1288 = -1;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = -1082130432;
	var uLocal_1311 = 3;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = -1;
	var uLocal_1328 = 0;
	var uLocal_1329 = -1;
	var uLocal_1330 = -1;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = -1082130432;
	var uLocal_1353 = 3;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = -1;
	var uLocal_1370 = 0;
	var uLocal_1371 = -1;
	var uLocal_1372 = -1;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = -1082130432;
	var uLocal_1395 = 3;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = -1;
	var uLocal_1412 = 0;
	var uLocal_1413 = -1;
	var uLocal_1414 = -1;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = -1082130432;
	var uLocal_1437 = 3;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = -1;
	var uLocal_1454 = 0;
	var uLocal_1455 = -1;
	var uLocal_1456 = -1;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = -1082130432;
	var uLocal_1479 = 3;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = -1;
	var uLocal_1496 = 0;
	var uLocal_1497 = -1;
	struct<12> Local_1498 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_1499[32];
	struct<21> Local_1500 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_739(ScriptParam_1500))
		{
			func_701();
		}
	}
	while (true)
	{
		func_700();
		if (func_696() || func_694())
		{
			func_701();
		}
		func_666();
		switch (func_665(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_664() == 1)
				{
					if (func_662())
					{
						func_661(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_664() == 1)
				{
					func_145();
					func_133();
				}
				else if (func_664() == 3)
				{
					func_661(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_701();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_664())
			{
				case 0:
					if (func_115())
					{
						func_114(1);
					}
					break;
				
				case 1:
					if (Local_132.f_8 == 6)
					{
						func_114(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_113, 1000, 0))
					{
						func_114(3);
					}
					break;
				
				case 3:
					func_701();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x195
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
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

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F3
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

void func_3()//Position - 0x238
{
	if (func_35(2, 0, 0, 0, 0))
	{
		if (!BitTest(Local_132.f_2, 2))
		{
			Local_132.f_1 = NETWORK::GET_NETWORK_TIME();
			MISC::SET_BIT(&(Local_132.f_2), 2);
		}
	}
	switch (Local_132.f_8)
	{
		case 0:
			if (func_34())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_132.f_667), Global_262145.f_11589 /* Tunable: CHECKPOINT_EVENT_START_COUNTDOWN_TIME */, 0) || BitTest(Local_132.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		
		case 2:
			Local_132.f_9 = NETWORK::GET_NETWORK_TIME();
			func_23(3);
			break;
		
		case 3:
			if ((func_22() || func_1(&(Local_132.f_661), Global_262145.f_11588 /* Tunable: CHECKPOINT_EVENT_TIME_LIMIT */, 0)) || BitTest(Local_132.f_2, 2))
			{
				if (!BitTest(Local_132.f_2, 1) && func_21())
				{
					func_20(&(Local_132.f_661), 0, 0);
					MISC::SET_BIT(&(Local_132.f_2), 1);
				}
				else
				{
					func_23(4);
					Local_132.f_1 = NETWORK::GET_NETWORK_TIME();
				}
			}
			func_8();
			iLocal_94++;
			if (iLocal_94 >= Local_132.f_709)
			{
				iLocal_94 = 0;
			}
			func_24();
			break;
		
		case 4:
			if (func_1(&(Local_132.f_663), 20000, 0) || func_5())
			{
				if (func_34())
				{
					func_20(&(Local_132.f_669), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()//Position - 0x3D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_132.f_729[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_132.f_729[iVar0 /*2*/].f_1), false))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5()//Position - 0x426
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!func_6(bVar1))
			{
				if ((!BitTest(Local_1499[iVar0 /*5*/].f_2, 0) || Local_1499[iVar0 /*5*/].f_3 != 6) || (BitTest(Local_132.f_2, 0) && !BitTest(Local_1499[iVar0 /*5*/].f_2, 1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_6(bool bParam0)//Position - 0x4A9
{
	if (func_7(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1894573[bParam0 /*608*/].f_1, 8);
}

bool func_7(bool bParam0)//Position - 0x4CC
{
	return BitTest(Global_1894573[bParam0 /*608*/].f_1, 2);
}

void func_8()//Position - 0x4E1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar2 = false;
	while (bVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar2)))
		{
			MISC::SET_BIT(&uVar3, bVar2);
		}
		else
		{
			func_19(bVar2);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (BitTest(uVar3, bVar2))
		{
			if (func_18(bVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(bVar2);
			func_9(bVar2);
			MISC::SET_BIT(&(Local_132.f_673), bVar2);
		}
		bVar2++;
	}
	if (iVar0 > Local_132.f_727)
	{
		Local_132.f_727 = iVar0;
	}
	else
	{
		Local_132.f_726 = (Local_132.f_727 - iVar0);
	}
	if (iVar1 > Local_132.f_728)
	{
		Local_132.f_728 = iVar1;
	}
}

void func_9(bool bParam0)//Position - 0x59E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Local_1499[bParam0 /*5*/].f_4;
	iVar2 = -2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_132.f_674[iVar1] == bParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= -1)
		{
			if (iVar2 >= 0)
			{
				func_14(&(Local_132.f_674[iVar1]), &iVar2);
			}
		}
		else if (Local_132.f_674[iVar1] < 0 || iVar0 > Local_1499[Local_132.f_674[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_132.f_674[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_132.f_674[iVar1], bParam0, iVar1);
			}
			Local_132.f_674[iVar1] = bParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_132.f_674[iVar3] == bParam0)
				{
					Local_132.f_674[iVar3] = -1;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)//Position - 0x687
{
	struct<14> Var0;
	int iVar1;
	
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = -319775187;
		Var0.f_10 = iVar1;
		func_11(Var0, func_12(1));
	}
}

void func_11(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x6BE
{
	Param0.f_0 = 548471420;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_12(int iParam0)//Position - 0x6EB
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_13(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_13(bool bParam0, bool bParam1, bool bParam2)//Position - 0x748
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_14(var uParam0, int iParam1)//Position - 0x7A8
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_15(bool bParam0)//Position - 0x7CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bParam0));
	iVar0 = iVar3;
	if (Global_2793044.f_5073.f_38[iVar0] >= 0)
	{
		iVar4 = Global_2793044.f_5073.f_38[iVar0];
		iVar1 = Global_2793044.f_5073.f_5[iVar0];
		if (!BitTest(Local_132.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (BitTest(Global_2793044.f_5073[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_111, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_132.f_10[iVar4 /*5*/].f_3 = bParam0;
							Global_2793044.f_5073.f_38[iVar0] = -1;
							MISC::SET_BIT(&(Local_132.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_132.f_708 = (Local_132.f_708 - 1);
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)//Position - 0x8B0
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)//Position - 0x8E1
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

int func_18(bool bParam0)//Position - 0x907
{
	if (bParam0 >= 0 && bParam0 < 32)
	{
		return Local_1499[bParam0 /*5*/].f_4 > 0;
	}
	return 0;
}

void func_19(bool bParam0)//Position - 0x92F
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_132.f_673, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_132.f_674[iVar0] == bParam0)
			{
				Local_132.f_674[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_132.f_709)
		{
			if (Local_132.f_10[iVar1 /*5*/].f_3 == bParam0)
			{
				Local_132.f_10[iVar1 /*5*/].f_3 = -1;
			}
			iVar1++;
		}
		MISC::CLEAR_BIT(&(Local_132.f_673), bParam0);
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)//Position - 0x9B3
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

int func_21()//Position - 0x9F0
{
	return 0;
}

int func_22()//Position - 0x9F9
{
	if (Local_132.f_708 > 0)
	{
		return 0;
	}
	if (func_1(&(Local_132.f_671), 750, 0))
	{
		MISC::SET_BIT(&(Local_132.f_2), 0);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)//Position - 0xA2F
{
	Local_132.f_8 = iParam0;
}

int func_24()//Position - 0xA3E
{
	struct<2> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (func_34())
	{
		Var0 = { Local_132.f_729[iLocal_96 /*2*/] };
		if (func_33(Var0.f_0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (func_32(iLocal_96, &Var1, &fVar2))
				{
					Local_132.f_713[iLocal_96] = func_29(iLocal_96);
					if (BitTest(Local_1499[Local_132.f_713[iLocal_96] /*5*/].f_1, iLocal_96))
					{
						if (func_26(&(Local_132.f_729[iLocal_96 /*2*/].f_1), Var0.f_0, Var1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_96 /*2*/].f_1), 1);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_96 /*2*/].f_1), true);
							VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_96 /*2*/].f_1), false);
							func_25(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_96 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_96 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_96 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_96 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar3, 10);
								MISC::SET_BIT(&iVar3, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_96 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_132.f_713[iLocal_96] = -1;
						}
					}
				}
			}
			iLocal_96++;
			if (iLocal_96 >= 10)
			{
				iLocal_96 = 0;
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

void func_25(int iParam0, bool bParam1)//Position - 0xBD0
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_26(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0xC1E
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
		Global_2793044.f_6736 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam8);
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
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_27(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_27(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0xD27
{
	int iVar0;
	
	if (func_28(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2635559.f_2921[1 /*6*/].f_5 == iParam3 && Global_2635559.f_2921[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2635559.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635559.f_2921[iVar0 /*6*/] = { Global_2635559.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635559.f_2921[1 /*6*/] = { Param0 };
		Global_2635559.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2635559.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2635559.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_28(int iParam0, struct<3> Param1, int iParam2)//Position - 0xDFA
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
			if (Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_29(int iParam0)//Position - 0xE98
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar5;
	bool bVar6;
	
	fVar2 = 1000000f;
	if (func_32(iParam0, &Var4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_13(bVar6, 1, 1))
				{
					fVar3 = func_30(func_31(bVar6), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_30(struct<3> Param0, struct<3> Param1)//Position - 0xF11
{
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	return SYSTEM::VDIST(Param0, Param1);
}

Vector3 func_31(bool bParam0)//Position - 0xF2F
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_32(int iParam0, var uParam1, var uParam2)//Position - 0xF42
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.5818f, -2943.7695f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.8894f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.3267f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.6503f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.4066f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.5889f, 2925.5627f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.4181f, -2442.9897f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

bool func_33(int iParam0)//Position - 0x10BE
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_34()//Position - 0x10DC
{
	return Local_132.f_707;
}

int func_35(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x10EA
{
	if (func_113(PLAYER::PLAYER_ID(), 0) || func_110(PLAYER::PLAYER_ID(), 0))
	{
		if (func_109(PLAYER::PLAYER_ID()) || func_107(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	if (func_38(&(Global_1836858.f_18)))
	{
		if (!func_1(&(Global_1836858.f_18), 7500, 0))
		{
			return 0;
		}
		func_37(&(Global_1836858.f_18));
	}
	if (func_36())
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 0);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_36()//Position - 0x11E1
{
	return BitTest(Global_1836858.f_1, 0);
}

void func_37(var uParam0)//Position - 0x11F1
{
	uParam0->f_1 = 0;
}

bool func_38(var uParam0)//Position - 0x11FE
{
	return uParam0->f_1;
}

void func_39(bool bParam0, int iParam1)//Position - 0x120A
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		
		default:
			iVar1 = func_40(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

int func_40(int iParam0)//Position - 0x1263
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_41();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_41()//Position - 0x12C6
{
	return Global_1574918;
}

bool func_42(int iParam0, int iParam1)//Position - 0x12D2
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar0 = func_40(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

void func_43(char* sParam0, char* sParam1, bool bParam2)//Position - 0x12FB
{
	if ((!BitTest(Global_1836858.f_1, 2) && !func_7(PLAYER::PLAYER_ID())) && !func_6(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1" /* GXT: EVENT OVER */;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2" /* GXT: Not enough players in the session */;
			}
			else
			{
				sParam1 = "FMEVEN_NUM3" /* GXT: Not enough players available in the session */;
			}
		}
		func_44(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836858.f_1), 2);
	}
}

int func_44(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x136F
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_106(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_104(&(Var0.f_69), iParam7);
	}
	return func_45(&Var0);
}

int func_45(var uParam0)//Position - 0x13EF
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672505.f_2835)
		{
			return 0;
		}
	}
	func_60(uParam0, uParam0->f_17);
	func_57(uParam0);
	if (func_56())
	{
		func_57(uParam0);
	}
	if (func_55(uParam0->f_1))
	{
		func_48();
		if (Global_2672505.f_2513[0 /*80*/].f_2 == 0)
		{
			Global_2672505.f_2513[0 /*80*/] = { *uParam0 };
			if (func_47(uParam0->f_69, 8192))
			{
				Global_1935182 = 1;
			}
			return 1;
		}
		if (((Global_2672505.f_2513[0 /*80*/].f_1 == 13 || Global_2672505.f_2513[0 /*80*/].f_1 == 53) || Global_2672505.f_2513[0 /*80*/].f_1 == 54) || Global_2672505.f_2513[0 /*80*/].f_1 == 58)
		{
			Global_2672505.f_2513[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672505.f_2513[iVar0 + 1 /*80*/] = { Global_2672505.f_2513[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672505.f_2513[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672505.f_2513[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672505.f_2513[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_48();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_104(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 2);
				Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_47(uParam0->f_69, 128))
			{
				if (func_46(Global_2672505.f_2513[iVar0 /*80*/].f_1))
				{
					Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
					func_104(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x15D4
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_47(var uParam0, int iParam1)//Position - 0x165A
{
	return (uParam0 && iParam1) != 0;
}

void func_48()//Position - 0x1669
{
	bool bVar0;
	
	if (Global_2672505.f_2836)
	{
		return;
	}
	if (!Global_78827)
	{
		Global_78827 = 1;
		bVar0 = true;
	}
	func_49();
	if (bVar0)
	{
		Global_78827 = 0;
	}
}

void func_49()//Position - 0x169C
{
	Global_2672505.f_2837 = 0;
	Global_2672505.f_2837.f_582 = 0;
	func_53(&(Global_2672505.f_2837.f_1));
	Global_2672505.f_2837.f_1.f_1 = 0;
	func_50(&(Global_2672505.f_2837.f_1), 1);
}

void func_50(var uParam0, int iParam1)//Position - 0x16DE
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78827)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78828)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_52(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_51(0);
}

void func_51(int iParam0)//Position - 0x178C
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

int func_52(bool bParam0)//Position - 0x17A0
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_53(var uParam0)//Position - 0x17C8
{
	func_54(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_54(var uParam0)//Position - 0x17F2
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_55(int iParam0)//Position - 0x1871
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

bool func_56()//Position - 0x1989
{
	return Global_2683862.f_19;
}

void func_57(var uParam0)//Position - 0x1997
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_72 = func_58();
	}
}

int func_58()//Position - 0x19B2
{
	return 21;
}

int func_59(int iParam0)//Position - 0x19BC
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_60(var uParam0, bool bParam1)//Position - 0x1A4E
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_103() || !func_13(bParam1, 0, 1))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_61(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_61(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1AA5
{
	int iVar0;
	int iVar1;
	
	if (func_101(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_108449[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_101(PLAYER::PLAYER_ID()) || (func_100() && func_99())) && !BitTest(Global_2793044.f_4690, 31)) && !bParam4)
	{
		iVar1 = func_98();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_13(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_108449[iParam1] != -1)
							{
								return func_96(iParam1, bParam0, 0);
							}
							else
							{
								return func_78(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_78(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_108449[iParam1] != -1)
				{
					return func_96(iParam1, bParam0, 0);
				}
				else
				{
					return func_62(0, -1, 0);
				}
			}
			else
			{
				return func_62(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_108449[iParam1] != -1)
		{
			return func_96(iParam1, bParam0, 0);
		}
		else
		{
			return func_78(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_78(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_62(bool bParam0, int iParam1, bool bParam2)//Position - 0x1C82
{
	return func_63(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_63(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1C98
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_77() || (func_76() && func_74())) && Global_1665699.f_1)
	{
		if (bParam1)
		{
			return func_73(iParam2, iVar0);
		}
		else
		{
			return func_73(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_68(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_67(1);
				}
				else
				{
					return func_67(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_64(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_64(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_67(1);
	}
	return func_67(0);
}

int func_64(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1D9A
{
	int iVar0;
	
	iVar0 = func_66(iParam0, iParam1, iParam3);
	if (func_65(Global_4718592.f_113724, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_65(int iParam0, bool bParam1)//Position - 0x1EB2
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_166301 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9486[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2)//Position - 0x1F03
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_68(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_67(bool bParam0)//Position - 0x1F4B
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1F62
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058070.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0))
			{
				bVar1 = Global_1058070.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_69(iParam0, bVar0, iParam1, bVar1) || !func_69(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_69(iParam0, bVar0, iParam1, bVar1) || !func_69(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_69(iParam0, bVar0, iParam1, bVar1) || !func_69(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_69(iParam0, bVar0, iParam1, bVar1) || !func_69(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_69(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x22AD
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		bVar1 = iVar5;
		if (((!func_13(bVar1, 1, 1) || func_71(bVar1, 0)) || BitTest(Global_2657589[bVar1 /*466*/].f_199, 2)) || func_70(bVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("MP_F_Freemode_01") || iVar4 == joaat("MP_M_Freemode_01"))
				{
					if (iVar3 == joaat("MP_F_Freemode_01") || iVar3 == joaat("MP_M_Freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_70(bool bParam0)//Position - 0x23D9
{
	return BitTest(Global_1853910[bParam0 /*862*/].f_36.f_18, 14);
}

bool func_71(bool bParam0, int iParam1)//Position - 0x23F1
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_72(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[bParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_72(int iParam0, bool bParam1)//Position - 0x243C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
	}
	if (Global_1575040[iVar1] == 1)
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

int func_73(int iParam0, int iParam1)//Position - 0x247D
{
	if (iParam0 == -1)
	{
		iParam0 = func_66(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_74()//Position - 0x24CB
{
	if (func_75())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_170488, 4);
}

bool func_75()//Position - 0x24EA
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_76()//Position - 0x24FF
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_77()//Position - 0x2546
{
	if (func_75() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_78(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2563
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853910[PLAYER::PLAYER_ID() /*862*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853910[iVar2 /*862*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_87())
			{
				iVar3 = func_83(bParam0);
				if (!iVar3 == -1)
				{
					return func_81(iVar3);
				}
			}
			if ((func_80(bParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_68(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_67(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_79(1);
			}
			else
			{
				return func_63(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836597 == 1 && Global_1836607 == 0))
			{
				return func_67(1);
			}
			else
			{
				return func_63(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836591 && Global_1836078.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_83(bParam0);
	if (!iVar4 == -1)
	{
		return func_81(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_79(bool bParam0)//Position - 0x26FB
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_80(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2712
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_81(int iParam0)//Position - 0x278A
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_82(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_82(int iParam0)//Position - 0x284D
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_83(bool bParam0)//Position - 0x2864
{
	if (!bParam0 == func_103())
	{
		if (func_85(bParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_84(bParam0)];
		}
	}
	return -1;
}

int func_84(bool bParam0)//Position - 0x2896
{
	if (bParam0 != func_103())
	{
		return Global_1894573[bParam0 /*608*/].f_10;
	}
	return func_103();
}

bool func_85(bool bParam0, bool bParam1)//Position - 0x28B9
{
	if (!bParam1)
	{
		if (func_86(bParam0))
		{
			return 0;
		}
	}
	return Global_1894573[bParam0 /*608*/].f_10 != func_103();
}

int func_86(bool bParam0)//Position - 0x28E4
{
	if (bParam0 != func_103())
	{
		if (Global_1894573[bParam0 /*608*/].f_10 != func_103())
		{
			return Global_1894573[bParam0 /*608*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_87()//Position - 0x2919
{
	if ((((((func_95() || func_94()) || func_56()) || func_93()) || func_92()) || func_90()) || func_88())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_88()//Position - 0x2981
{
	return func_89(Global_4718592.f_113724);
}

int func_89(int iParam0)//Position - 0x2997
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31715[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_90()//Position - 0x29C6
{
	return func_91(Global_4718592.f_113724);
}

int func_91(int iParam0)//Position - 0x29DC
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31051[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_92()//Position - 0x2A16
{
	return Global_2683862.f_24;
}

bool func_93()//Position - 0x2A24
{
	return Global_2683862.f_21;
}

var func_94()//Position - 0x2A32
{
	return Global_2683862.f_18;
}

var func_95()//Position - 0x2A40
{
	return Global_2683862.f_17;
}

int func_96(int iParam0, bool bParam1, bool bParam2)//Position - 0x2A4E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058070.f_14[iParam0];
	if (func_87())
	{
		iVar2 = func_83(bParam1);
		if (!iVar2 == -1)
		{
			return func_81(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_103())
	{
		if (Global_4718592.f_108449[iParam0] != -1 && Global_4718592.f_108449[iParam0] <= 4)
		{
			if (Global_4718592.f_108449[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_108449[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_108449[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_108449[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_108449[iParam0];
			}
		}
		else
		{
			iVar0 = func_63(bParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_97(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_68(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0, -1))
		{
			iVar0 = func_79(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_97(int iParam0)//Position - 0x2BCE
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_166456;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_166457;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_166458;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_166459;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_98()//Position - 0x2CA3
{
	return Global_2621446.f_2;
}

var func_99()//Position - 0x2CB1
{
	return BitTest(Global_2621446, 4);
}

var func_100()//Position - 0x2CBF
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_101(bool bParam0)//Position - 0x2CD9
{
	if (func_71(bParam0, 0))
	{
		return 1;
	}
	if (func_102())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[bParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_102()//Position - 0x2D18
{
	return BitTest(Global_2621446, 3);
}

int func_103()//Position - 0x2D26
{
	return -1;
}

void func_104(var uParam0, int iParam1)//Position - 0x2D2F
{
	func_105(uParam0, iParam1);
}

void func_105(var uParam0, var uParam1)//Position - 0x2D3F
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_106(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2D50
{
	uParam1->f_17 = func_103();
	uParam1->f_18 = func_103();
	uParam1->f_19 = func_103();
	uParam1->f_20 = func_103();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_107(bool bParam0)//Position - 0x2DCE
{
	return func_108(bParam0, 20);
}

var func_108(bool bParam0, int iParam1)//Position - 0x2DDE
{
	return BitTest(Global_1894573[bParam0 /*608*/].f_10.f_4, iParam1);
}

int func_109(bool bParam0)//Position - 0x2DF6
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_108(bParam0, 9);
	}
	return 0;
}

int func_110(int iParam0, int iParam1)//Position - 0x2E14
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 && func_111(Global_1894573[iParam0 /*608*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1)
	{
		if (func_111(Global_1894573[iParam0 /*608*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_111(int iParam0)//Position - 0x2E7A
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
	return func_112(iParam0, 0);
	return 0;
}

int func_112(int iParam0, int iParam1)//Position - 0x2ED4
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

int func_113(bool bParam0, int iParam1)//Position - 0x2F29
{
	if (Global_1894573[bParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[bParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_114(int iParam0)//Position - 0x2F64
{
	Local_132.f_0 = iParam0;
}

int func_115()//Position - 0x2F71
{
	int iVar0;
	
	if (func_1(&(Local_132.f_665), 750, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_132.f_674[iVar0] = -1;
			iVar0++;
		}
		func_37(&(Local_132.f_661));
		func_118();
		if (func_34())
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_132.f_713[iVar0] = func_29(iVar0);
				iVar0++;
			}
			func_116();
		}
		return 1;
	}
	return 0;
}

void func_116()//Position - 0x2FE9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_132.f_729[iVar0 /*2*/] = func_117();
		iVar0++;
	}
}

int func_117()//Position - 0x3012
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

void func_118()//Position - 0x3046
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_132.f_709 = func_132();
	Local_132.f_708 = Local_132.f_709;
	Local_132.f_712 = func_128();
	Local_132.f_707 = func_125();
	iVar0 = func_124();
	if (Local_132.f_707)
	{
		iVar1 = 1;
	}
	func_120(func_122(132, Local_132.f_712, iVar1, 0));
	if (Local_132.f_712 == 1 && !Local_132.f_707)
	{
		Local_132.f_710 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_132.f_709)
	{
		Local_132.f_10[iVar2 /*5*/].f_4 = iVar2;
		Local_132.f_10[iVar2 /*5*/] = { func_119(Local_132.f_712, Local_132.f_707, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_119(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x30FE
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623.5349f, 1614.6509f, 283.748f;
							
							case 1:
								return 742.6324f, 1271.0992f, 388.9925f;
							
							case 2:
								return 682.1757f, 1204.2948f, 350.0934f;
							
							case 3:
								return 1779.2795f, 668.7821f, 276.3788f;
							
							case 4:
								return 1927.2144f, 129.7589f, 174.4281f;
							
							case 5:
								return 1056.9426f, -699.1728f, 78.8831f;
							
							case 6:
								return 2026.5355f, -1594.8741f, 262.0831f;
							
							case 7:
								return 2139.4236f, -2613.5798f, 20.5914f;
							
							case 8:
								return 1041.685f, -2882.9011f, 27.0959f;
							
							case 9:
								return 796.1402f, -2624.6445f, 95.127f;
							
							case 10:
								return 504.6169f, -3311.8013f, 22.9858f;
							
							case 11:
								return 416.9175f, -2684.4192f, 10.1246f;
							
							case 12:
								return 561.767f, -2100.6746f, 60.143f;
							
							case 13:
								return 872.454f, -1929.2372f, 104.4083f;
							
							case 14:
								return 636.6328f, -1429.945f, 15.5f;
							
							case 15:
								return 591.386f, -852.2912f, 50.7211f;
							
							case 16:
								return 471.2209f, -102.4007f, 149.7505f;
							
							case 17:
								return 533.762f, 143.6576f, 125.7511f;
							
							case 18:
								return 1112.1902f, 74.8892f, 117.7713f;
							
							case 19:
								return 683.9346f, 570.1795f, 165.7115f;
							
							case 20:
								return 1453.8324f, 1113.6754f, 134.9644f;
							
							case 21:
								return 1539.3142f, 1716.1719f, 125.0574f;
							
							case 22:
								return 1875.1918f, 1698.9182f, 109.9103f;
							
							case 23:
								return 2320.32f, 1669.4021f, 86.7663f;
							
							case 24:
								return 2337.8914f, 1358.5363f, 100.8737f;
							
							case 25:
								return 2727.7856f, 1558.7285f, 83.66f;
							
							case 26:
								return 3112.1768f, 1153.66f, 25.3827f;
							
							case 27:
								return 2580.8167f, 476.8322f, 121.7549f;
							
							case 28:
								return 2458.7f, -384.0464f, 127.5513f;
							
							case 29:
								return 2381.2063f, -939.2949f, 185.6516f;
							
							case 30:
								return 1669.2944f, -1652.9478f, 154.2478f;
							
							case 31:
								return 1096.7933f, -1141.6932f, 96.1055f;
							
							case 32:
								return 3042.8997f, -291.4662f, 22.8304f;
							
							case 33:
								return 2645.3508f, -1492.0433f, 30.646f;
							
							case 34:
								return 1214.3737f, -2353.274f, 66.8f;
							
							case 35:
								return 1841.6165f, -2497.9714f, 101.8039f;
							
							case 36:
								return 1872.0353f, -761.149f, 105f;
							
							case 37:
								return 1657.6649f, -413.7629f, 228.448f;
							
							case 38:
								return 1589.2289f, -1981.9009f, 161.2293f;
							
							case 39:
								return 991.7729f, -1477.0642f, 60.0276f;
							
							case 40:
								return 2609.9119f, -2096.3584f, 35.0044f;
							
							case 41:
								return 1121.1902f, 725.4341f, 170.3273f;
							
							case 42:
								return 2117.316f, 1024.0846f, 197f;
							
							case 43:
								return 727.6708f, -452.6442f, 25f;
							
							case 44:
								return 1211.9645f, -3285.5398f, 19.5936f;
							
							case 45:
								return 1499.8833f, -1276.2072f, 131.5493f;
							
							case 46:
								return 3381.4421f, -826.2608f, 42.8967f;
							
							case 47:
								return 1562.097f, 292.1506f, 494.2574f;
							
							case 48:
								return 2021.578f, -1993.6892f, 120f;
							
							case 49:
								return 757.5558f, -1196.3629f, 232.0553f;
							
							case 50:
								return 1887.7737f, -3474.9705f, 77.8727f;
							
							case 51:
								return 1083.2245f, -229.6182f, 68.6364f;
							
							case 52:
								return 2344.084f, -406.1672f, 91f;
							
							case 53:
								return 2184.8213f, 529.1252f, 241.1723f;
							
							case 54:
								return 1251.5414f, -1883.8093f, 50f;
							
							case 55:
								return 847.74f, 1781.9033f, 160.9508f;
							
							case 56:
								return 288.3698f, -1601.3456f, 52f;
							
							case 57:
								return 2648.1313f, -731.5316f, 99.7f;
							
							case 58:
								return 1937.1173f, 1337.4464f, 529.8608f;
							
							case 59:
								return 1512.681f, -2539.276f, 208.3091f;
							
							case 60:
								return 2352.986f, -1763.9081f, 136.1568f;
							
							case 61:
								return 2099.7317f, -1212.7279f, 178.3343f;
							
							case 62:
								return 1945.1599f, -957.8221f, 96.04f;
							
							case 63:
								return 1872.8097f, -830.1746f, 171.44f;
							
							case 64:
								return 1256.3923f, -1571.6293f, 90.566f;
							
							case 65:
								return 1818.0228f, -244.6768f, 305.9837f;
							
							case 66:
								return 2839.0505f, -748.0399f, 21.5008f;
							
							case 67:
								return 1268.6459f, -2126.0718f, 60.6975f;
							
							case 68:
								return 1088.6792f, -1982.8197f, 84.1204f;
							
							case 69:
								return 1597.2175f, -2817.0425f, 19.0498f;
							
							case 70:
								return 356.3379f, -2319.2256f, 67.6058f;
							
							case 71:
								return 692.5012f, -2330.5833f, 60.7022f;
							
							case 72:
								return 1070.3999f, -1835.1484f, 100.8235f;
							
							case 73:
								return 478.3501f, -1682.3177f, 59.7763f;
							
							case 74:
								return 845.2267f, -2186.3203f, 46.5743f;
							
							case 75:
								return 2651.6392f, -1230.8496f, 40.5824f;
							
							case 76:
								return 461.851f, -1460.1727f, 65.7889f;
							
							case 77:
								return 775.8362f, -852.0386f, 31f;
							
							case 78:
								return 913.9593f, -976.4005f, 81.0321f;
							
							case 79:
								return 970.9194f, -2510.112f, 64f;
							
							case 80:
								return 1096.6661f, 1222.3273f, 202.4859f;
							
							case 81:
								return 1978.5428f, 690.4552f, 174.2517f;
							
							case 82:
								return 1571.9934f, -36.6251f, 140.5239f;
							
							case 83:
								return 918.2688f, -675.462f, 76.6019f;
							
							case 84:
								return 798.097f, -1194.0201f, 32f;
							
							case 85:
								return 382.4527f, -31.8431f, 143.6312f;
							
							case 86:
								return 672.1725f, -1745.0121f, 16f;
							
							case 87:
								return 620.2905f, -588.2725f, 22.6129f;
							
							case 88:
								return 1204.3184f, 196.6229f, 79.9329f;
							
							case 89:
								return 2028.4021f, -2179.3965f, 105.5733f;
							
							case 90:
								return 1131.1833f, -2929.7693f, 33.2799f;
							
							case 91:
								return 654.5255f, -2634.7358f, 26.063f;
							
							case 92:
								return 757.272f, -30.6019f, 66.9464f;
							
							case 93:
								return 262.5532f, -1046.9685f, 73.6448f;
							
							case 94:
								return 638.4819f, -1020.9998f, 43.5236f;
							
							case 95:
								return 351.6616f, -2758.046f, 29.2267f;
							
							case 96:
								return 1613.9851f, -2243.761f, 136f;
							
							case 97:
								return 2947.7463f, 792.9475f, 45f;
							
							case 98:
								return 2608.7327f, 822.9318f, 118.6201f;
							
							case 99:
								return 1357.2085f, 674.4443f, 100f;
							
							case 100:
								return 978.4934f, -2073.071f, 1000f;
							
							case 101:
								return 2848.5134f, -2701.795f, 547.5851f;
							
							case 102:
								return 2322.2185f, -2129.6113f, 13.6809f;
							
							case 103:
								return 1248.603f, -2675.0422f, 145.6704f;
							
							case 104:
								return 2052.6917f, -252.931f, 228.334f;
							
							case 105:
								return 2394.9023f, 388.1578f, 194.5342f;
							
							case 106:
								return 3337.711f, 56.3844f, 764.684f;
							
							case 107:
								return 1573.0494f, 1472.5686f, 179.2061f;
							
							case 108:
								return 1898.3542f, 1020.6713f, 277.9648f;
							
							case 109:
								return 745.1586f, 232.868f, 177.0828f;
							
							case 110:
								return 1551.5793f, -685.6392f, 126f;
							
							case 111:
								return 2734.2344f, 61.798f, 25.1296f;
							
							case 112:
								return 2404.63f, -1485.8055f, 86.3959f;
							
							case 113:
								return 3033.1602f, 321.8385f, 908.0805f;
							
							case 114:
								return 1353.3225f, 373.6808f, 184.937f;
							
							case 115:
								return 1317.2625f, -737.488f, 125.2729f;
							
							case 116:
								return 1737.6957f, -966.1904f, 119.8332f;
							
							case 117:
								return 923.2643f, 978.5736f, 605.3384f;
							
							case 118:
								return 2823.7769f, -1483.905f, 26.8193f;
							
							case 119:
								return 1333.4746f, -275.2598f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360.4287f, 1273.0941f, 63.9814f;
							
							case 1:
								return 2545.4219f, 342.8004f, 107.4641f;
							
							case 2:
								return 2483.1711f, -363.0696f, 92.7352f;
							
							case 3:
								return 1491.8348f, -1005.5316f, 50.5682f;
							
							case 4:
								return 1078.8529f, -688.3618f, 56.6151f;
							
							case 5:
								return 657.7627f, -1500.8582f, 8.6817f;
							
							case 6:
								return 1216.2662f, -2907.2776f, 4.8661f;
							
							case 7:
								return 958.6841f, -3079.0935f, 13.3327f;
							
							case 8:
								return 459.5267f, -2429.2349f, 4.7518f;
							
							case 9:
								return 1130.2137f, -2082.8108f, 30.0089f;
							
							case 10:
								return 1506.7013f, -2135.6372f, 75.4567f;
							
							case 11:
								return 1759.2767f, -1579.9696f, 117.9f;
							
							case 12:
								return 2510.4497f, -1219.3317f, 1.89f;
							
							case 13:
								return 2855.6038f, -1339.6016f, 14.7183f;
							
							case 14:
								return 2826.4104f, -743.3448f, 0.3071f;
							
							case 15:
								return 1236.5992f, -83.0057f, 58.7636f;
							
							case 16:
								return 1660.5343f, 0.3033f, 172.7744f;
							
							case 17:
								return 1917.6082f, 301.6851f, 161.8848f;
							
							case 18:
								return 2145.0034f, 146.688f, 224.1061f;
							
							case 19:
								return 1456.7374f, 1111.8481f, 113.334f;
							
							case 20:
								return 1135.6199f, 58.6667f, 79.7561f;
							
							case 21:
								return 680.794f, 559.0409f, 128.0462f;
							
							case 22:
								return 716.7936f, 141.21f, 79.7545f;
							
							case 23:
								return 875.606f, -476.7556f, 29.0746f;
							
							case 24:
								return 536.7303f, -2817.502f, 5.0421f;
							
							case 25:
								return 984.1771f, -2410.6863f, 29.4333f;
							
							case 26:
								return 863.2344f, -2151.808f, 29.4816f;
							
							case 27:
								return 1002.9417f, -1918.7502f, 30.1432f;
							
							case 28:
								return 1183.3127f, -1550.9458f, 38.5953f;
							
							case 29:
								return 694.0918f, 1283.0587f, 359.296f;
							
							case 30:
								return 745.2003f, 1199.0901f, 325.4016f;
							
							case 31:
								return 887.6219f, 873.548f, 178.5657f;
							
							case 32:
								return 1828.967f, 1571.7255f, 99.7219f;
							
							case 33:
								return 2805.81f, 1676.1002f, 23.5193f;
							
							case 34:
								return 1405.6907f, -601.7893f, 73.3473f;
							
							case 35:
								return 1710.3667f, -464.7253f, 169.8001f;
							
							case 36:
								return 1946.3922f, 1331.992f, 160.1707f;
							
							case 37:
								return 2271.3796f, 1711.9495f, 67.0413f;
							
							case 38:
								return 2307.0034f, -1750.4208f, 133.7737f;
							
							case 39:
								return 2172.2263f, -1069.3674f, 176.0087f;
							
							case 40:
								return 595.0312f, -851.27f, 40.4327f;
							
							case 41:
								return 456.9577f, -752.8668f, 26.3578f;
							
							case 42:
								return 531.9203f, -1034.7968f, 27.2597f;
							
							case 43:
								return 1289.9077f, -3341.78f, 4.9016f;
							
							case 44:
								return 533.8767f, -1969.1707f, 23.9846f;
							
							case 45:
								return 689.5218f, -1774.1862f, 8.6f;
							
							case 46:
								return 848.6605f, -1211.7699f, 30.3237f;
							
							case 47:
								return 1874.7408f, -2202.331f, 166.2907f;
							
							case 48:
								return 1458.7603f, -2623.696f, 47.69f;
							
							case 49:
								return 1538.9073f, 784.3685f, 76.4501f;
							
							case 50:
								return 800.149f, -109.5107f, 79.533f;
							
							case 51:
								return 2687.0898f, 889.5835f, 76.4359f;
							
							case 52:
								return 939.7744f, -1496.8242f, 29.1156f;
							
							case 53:
								return 547.5936f, -455.3327f, 23.7304f;
							
							case 54:
								return 709.3f, -2285f, 33.8f;
							
							case 55:
								return 454.0637f, -2177.92f, 4.9177f;
							
							case 56:
								return 1468.1042f, -1759.1979f, 78.3022f;
							
							case 57:
								return 1239.343f, -1097.545f, 37.5256f;
							
							case 58:
								return 851.4936f, -956.856f, 25.2824f;
							
							case 59:
								return 512.4025f, 221.9917f, 103.7442f;
							
							case 60:
								return 1545.082f, 1701.0814f, 108.769f;
							
							case 61:
								return 1188.1104f, 1556.9788f, 107.8028f;
							
							case 62:
								return 1033.948f, -273.4799f, 49.8443f;
							
							case 63:
								return 743.4129f, -591.6385f, 26.0061f;
							
							case 64:
								return 1975.4843f, -749.9232f, 96.2513f;
							
							case 65:
								return 1968.117f, 708.8224f, 161.8571f;
							
							case 66:
								return 2296.0273f, 1152.2218f, 64.0942f;
							
							case 67:
								return 2474.0903f, 1484.1034f, 35.2029f;
							
							case 68:
								return 482.1839f, 664.4731f, 195.1235f;
							
							case 69:
								return 1505.1063f, -1271.169f, 121.655f;
							
							case 70:
								return 1220.7286f, -1865.861f, 37.4982f;
							
							case 71:
								return 476.6311f, -1283.4331f, 28.5393f;
							
							case 72:
								return 952.6752f, -2248.2195f, 29.5831f;
							
							case 73:
								return 1434.7068f, -2315.0417f, 65.927f;
							
							case 74:
								return 1882.2542f, -1873.2075f, 191.477f;
							
							case 75:
								return 2014.572f, -1591.4055f, 249.303f;
							
							case 76:
								return 1969.7476f, -992.8931f, 79.6204f;
							
							case 77:
								return 2267.4316f, -331.317f, 92.9784f;
							
							case 78:
								return 1205.4655f, 336.8802f, 80.9909f;
							
							case 79:
								return 531.8229f, -27.4548f, 69.6295f;
							
							case 80:
								return 304.7162f, 262.4799f, 104.337f;
							
							case 81:
								return 572.4857f, -2147.2932f, 7.9233f;
							
							case 82:
								return 1223.1305f, -2338.6213f, 59.8673f;
							
							case 83:
								return 1747.1515f, -2679.91f, 1.4587f;
							
							case 84:
								return 939.6769f, -1342.533f, 11.4778f;
							
							case 85:
								return 1435.6455f, -1476.4724f, 62.2245f;
							
							case 86:
								return 2273.048f, -539.2752f, 102.9436f;
							
							case 87:
								return 1522.0752f, -381.5488f, 200.3996f;
							
							case 88:
								return 2778.5789f, 1073.3276f, 0.6607f;
							
							case 89:
								return 609.4634f, -1333.5895f, 20.7017f;
							
							case 90:
								return 1360.9276f, -946.584f, 55.9209f;
							
							case 91:
								return 1147.3726f, -431.5072f, 65.9987f;
							
							case 92:
								return 2391.644f, -932.7006f, 151.3306f;
							
							case 93:
								return 2897.5105f, -314.7418f, 17.1346f;
							
							case 94:
								return 2963.3606f, 513.4398f, 35.0981f;
							
							case 95:
								return 2415.814f, 763.4792f, 124.8302f;
							
							case 96:
								return 2054.985f, 953.5229f, 218.5845f;
							
							case 97:
								return 1522.8307f, 461.3894f, 224.2793f;
							
							case 98:
								return 1301.596f, 1445.4712f, 98.4293f;
							
							case 99:
								return 1071.8425f, -1841.3043f, 36.3069f;
							
							case 100:
								return 1133.0865f, -2602.795f, 17.3834f;
							
							case 101:
								return 484.4286f, -3064.647f, 5.084f;
							
							case 102:
								return 1610.9121f, -2385.5503f, 90.6982f;
							
							case 103:
								return 695.2822f, -2534.997f, 17.6967f;
							
							case 104:
								return 554.7129f, -1634.238f, 26.9479f;
							
							case 105:
								return 1723.686f, -1038.6063f, 129.0783f;
							
							case 106:
								return 2637.012f, -1863.2129f, 17.7764f;
							
							case 107:
								return 2638.0774f, 1346.6411f, 25.4338f;
							
							case 108:
								return 1910.6632f, 29.3172f, 159.5f;
							
							case 109:
								return 2952.9666f, 797.8872f, 0.1f;
							
							case 110:
								return 2937.1196f, 1471.5317f, 0f;
							
							case 111:
								return 2348.98f, -2281.0046f, 0.1697f;
							
							case 112:
								return 2681.4158f, -1560.3545f, -0.0123f;
							
							case 113:
								return 2812.644f, -27.1503f, 0.7016f;
							
							case 114:
								return 3201.036f, -102.7169f, 0.2f;
							
							case 115:
								return 651.1428f, -3112.596f, 0.0233f;
							
							case 116:
								return 2313.4233f, -2194.061f, 0.025f;
							
							case 117:
								return 3055.1917f, 185.0506f, 0.4391f;
							
							case 118:
								return 2729.4597f, -1073.7024f, 0.6712f;
							
							case 119:
								return 1423.5059f, -2790.9116f, 0.7109f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915.445f, -2520.0068f, 58f;
							
							case 1:
								return -1343.7191f, -3336.7954f, 30.5601f;
							
							case 2:
								return -1336.2388f, -3044.0593f, 300.803f;
							
							case 3:
								return -1833.8517f, -1191.0569f, 41.1411f;
							
							case 4:
								return -1955.7803f, 1776.5697f, 195.8577f;
							
							case 5:
								return -2166.6292f, 1607.5665f, 260f;
							
							case 6:
								return -417.0685f, 1153.3469f, 347.5894f;
							
							case 7:
								return -2503.341f, 754.9435f, 342.9515f;
							
							case 8:
								return -2626.1272f, 136.1493f, 118.1611f;
							
							case 9:
								return -2246.8037f, 266.7578f, 194.8923f;
							
							case 10:
								return -1364.0376f, 56.9618f, 70.9416f;
							
							case 11:
								return -94.2512f, 880.448f, 265f;
							
							case 12:
								return -162.3738f, -999.6118f, 286.6717f;
							
							case 13:
								return 140.5345f, -698.5123f, 92.6658f;
							
							case 14:
								return -104.079f, -755.4847f, 59.1614f;
							
							case 15:
								return -284.6401f, -446.2669f, 91.5901f;
							
							case 16:
								return -795.1664f, -736.1061f, 78.6788f;
							
							case 17:
								return -971.361f, -1305.3682f, 50f;
							
							case 18:
								return -1357.9733f, -1476.3955f, 40.9274f;
							
							case 19:
								return -2004.3339f, -556.4324f, 20.3771f;
							
							case 20:
								return -1034.3809f, 640.7464f, 163.7504f;
							
							case 21:
								return -1238.5632f, -848.6133f, 89.7682f;
							
							case 22:
								return -1169.283f, -467.3812f, 69.0157f;
							
							case 23:
								return -324.4008f, -1968.6938f, 71.7904f;
							
							case 24:
								return -269.9813f, -2425.728f, 95.05f;
							
							case 25:
								return 247.3292f, -3308.0818f, 59.9012f;
							
							case 26:
								return 219.492f, -2318.923f, 43.917f;
							
							case 27:
								return 18.8233f, -1504.0001f, 54.686f;
							
							case 28:
								return 8.9788f, 1715.0565f, 249.4028f;
							
							case 29:
								return -667.7844f, 404.7751f, 125.5105f;
							
							case 30:
								return 216.2372f, 236.2603f, 125.7443f;
							
							case 31:
								return -3079.696f, 766.6476f, 33.988f;
							
							case 32:
								return -1105.5894f, 1428.9675f, 238.1016f;
							
							case 33:
								return -474.9906f, 1529.5255f, 500.0109f;
							
							case 34:
								return -1621.8411f, 929.212f, 193.8022f;
							
							case 35:
								return -767.9827f, -21.7202f, 69.0007f;
							
							case 36:
								return -472.9492f, -1444.1433f, 92.8559f;
							
							case 37:
								return -1879.5746f, -2634.0015f, 11.491f;
							
							case 38:
								return -1459.7344f, -2141.9648f, 23.7189f;
							
							case 39:
								return -75.0934f, -818.6606f, 599.9617f;
							
							case 40:
								return -230.7478f, -241.4196f, 76.4557f;
							
							case 41:
								return -1608.0134f, -537.3172f, 73.1431f;
							
							case 42:
								return -1806.964f, -125.5317f, 118.0094f;
							
							case 43:
								return -3170.2217f, 1543.2274f, 33.8091f;
							
							case 44:
								return -2753.0872f, 1229.0054f, 140.7239f;
							
							case 45:
								return -306.4009f, 202.0892f, 180.3099f;
							
							case 46:
								return 396.1246f, -1528.2404f, 46.6041f;
							
							case 47:
								return 389.6704f, -356.0437f, 61.5436f;
							
							case 48:
								return 324.4086f, -988.9622f, 92.2799f;
							
							case 49:
								return -657.5551f, -1105.1987f, 67.647f;
							
							case 50:
								return -439.2123f, -1003.0714f, 58.7819f;
							
							case 51:
								return -208.3349f, -1800.9827f, 12.0207f;
							
							case 52:
								return 104.7709f, -1940.2928f, 33.3786f;
							
							case 53:
								return -80.1589f, 364.0139f, 180.4526f;
							
							case 54:
								return -1064.8127f, 7.4781f, 69.6885f;
							
							case 55:
								return -1997.4425f, 722.7387f, 175.1271f;
							
							case 56:
								return -254.3736f, -3074.5354f, 75.4412f;
							
							case 57:
								return -830.1344f, -1880.0549f, 33.9615f;
							
							case 58:
								return -2775.497f, -788.6588f, 36.447f;
							
							case 59:
								return 43.0406f, -413.7074f, 89.5811f;
							
							case 60:
								return -3209.4211f, 1110.1798f, 37.6606f;
							
							case 61:
								return -2256.7175f, -339.6835f, 43.3005f;
							
							case 62:
								return -1957.0941f, 1330.4803f, 236.7105f;
							
							case 63:
								return -1030.2206f, 996.1059f, 182.364f;
							
							case 64:
								return -1529.4282f, 441.7661f, 134.8705f;
							
							case 65:
								return 145.6732f, 1154.9943f, 253.3341f;
							
							case 66:
								return -520.5256f, 659.5372f, 177.0043f;
							
							case 67:
								return 18.1044f, 638.951f, 224.5906f;
							
							case 68:
								return 128.1127f, -27.8183f, 91.0755f;
							
							case 69:
								return -634.6116f, -367.6195f, 56.3093f;
							
							case 70:
								return -402.9568f, -655.0366f, 60.6586f;
							
							case 71:
								return -1034.5049f, -1070.0377f, 21.0905f;
							
							case 72:
								return -1013.9092f, -1763.9242f, 20.6112f;
							
							case 73:
								return -734.4069f, -1448.0613f, 26.2766f;
							
							case 74:
								return -202.7723f, -1322.2694f, 53.6863f;
							
							case 75:
								return 388.6693f, -1368.0679f, 50.7767f;
							
							case 76:
								return -7.0116f, -2230.6743f, 39.1959f;
							
							case 77:
								return 33.8391f, -2745.6487f, 33.5782f;
							
							case 78:
								return -1100.7927f, -2846.7046f, 53.132f;
							
							case 79:
								return -1274.3236f, -2448.8486f, 99.9299f;
							
							case 80:
								return -473.7719f, -2675.3184f, 19.2771f;
							
							case 81:
								return -727.3944f, -3494.9004f, 23.1103f;
							
							case 82:
								return -1907.1514f, -3034.5771f, 39.2742f;
							
							case 83:
								return 416.2226f, -2912.8342f, 5.0678f;
							
							case 84:
								return 414.82f, -2616.128f, 22.3517f;
							
							case 85:
								return 233.9356f, -1474.4908f, 45.7138f;
							
							case 86:
								return 93.563f, -1189.7456f, 51.969f;
							
							case 87:
								return -607.8086f, -2189.1565f, 76.1713f;
							
							case 88:
								return -1106.9393f, -2019.405f, 33.3166f;
							
							case 89:
								return -1210.8302f, -1806.382f, 246.2572f;
							
							case 90:
								return -1309.4479f, -1043.7633f, 29.6876f;
							
							case 91:
								return -1618.3667f, -827.8159f, 42.3072f;
							
							case 92:
								return -2257.555f, -9.0938f, 121.4433f;
							
							case 93:
								return -777.472f, -376.5067f, 72.7751f;
							
							case 94:
								return -1371.5116f, -172.8742f, 99.1525f;
							
							case 95:
								return -1842.7985f, 302.3257f, 105.5376f;
							
							case 96:
								return -1165.4581f, 367.7476f, 95.3869f;
							
							case 97:
								return -3107.3586f, 276.277f, 56.9633f;
							
							case 98:
								return -2548.7861f, 1441.129f, 190.8976f;
							
							case 99:
								return -2644.523f, 1868.6207f, 168.2627f;
							
							case 100:
								return -3029.2344f, 1883.871f, 35.4705f;
							
							case 101:
								return -1119.2069f, 1736.032f, 195.1095f;
							
							case 102:
								return -644.2039f, 1743.7484f, 227.7433f;
							
							case 103:
								return -577.6026f, 2038.9946f, 209.9244f;
							
							case 104:
								return -302.0078f, 1871.026f, 196.7599f;
							
							case 105:
								return 351.8685f, 1748.149f, 260.866f;
							
							case 106:
								return -11.935f, 1320.3481f, 288.0058f;
							
							case 107:
								return 295.5885f, 753.7887f, 200.7135f;
							
							case 108:
								return 305.6451f, 501.4699f, 350.4832f;
							
							case 109:
								return 353.2237f, 58.5094f, 119.2648f;
							
							case 110:
								return 377.5104f, -695.2125f, 102.9432f;
							
							case 111:
								return 392.4507f, -1204.2394f, 50f;
							
							case 112:
								return 397.6461f, -1929.7805f, 43.4559f;
							
							case 113:
								return 470.8737f, -2451.431f, 30f;
							
							case 114:
								return -418.7521f, -2424.3962f, 20.0582f;
							
							case 115:
								return -2440.5273f, -1654.1301f, 6.3248f;
							
							case 116:
								return -888.3994f, -2938.0261f, 26.3869f;
							
							case 117:
								return -1374.6372f, -2647.817f, 26.4425f;
							
							case 118:
								return -1082.1765f, -620.1375f, 27.491f;
							
							case 119:
								return -1471.0901f, 1324.1405f, 193.4433f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303.1377f, 218.8738f, 166.6017f;
							
							case 1:
								return -2994.291f, 39.7167f, 7.4636f;
							
							case 2:
								return -3410.2002f, 967.5133f, 7.3517f;
							
							case 3:
								return -3041.9602f, 1209.5901f, 13.7743f;
							
							case 4:
								return -2502.5288f, 756.2985f, 301.2459f;
							
							case 5:
								return -1352.5457f, 120.6978f, 55.2388f;
							
							case 6:
								return -1729.2104f, -193.1235f, 57.5038f;
							
							case 7:
								return -1635.4001f, -1054.2262f, 12.1522f;
							
							case 8:
								return -1268.6067f, -1915.845f, 4.8616f;
							
							case 9:
								return -18.3427f, -1297.6146f, 28.3575f;
							
							case 10:
								return -145.3585f, 930.7858f, 234.6711f;
							
							case 11:
								return -424.3762f, 1587.7982f, 355.2649f;
							
							case 12:
								return -112.2256f, 354.4933f, 111.6961f;
							
							case 13:
								return 67.6185f, -673.5317f, 28.7056f;
							
							case 14:
								return 338.3054f, -1394.2786f, 31.5093f;
							
							case 15:
								return -19.2884f, -1426.187f, 29.6575f;
							
							case 16:
								return -251.9772f, -2029.2584f, 28.946f;
							
							case 17:
								return -432.7254f, -2440.4885f, 5.0008f;
							
							case 18:
								return -956.3549f, -3053.302f, 12.9451f;
							
							case 19:
								return -1662.76f, -3177.9182f, 12.9914f;
							
							case 20:
								return -457.7008f, -1507.7855f, 12.0586f;
							
							case 21:
								return 188.8895f, 300.349f, 104.515f;
							
							case 22:
								return 3.4946f, -2452.8853f, 13.4665f;
							
							case 23:
								return -966.3007f, -973.4243f, 2.876f;
							
							case 24:
								return -1536.4352f, 868.5392f, 180.16f;
							
							case 25:
								return -1521.5298f, 1493.7648f, 110.5947f;
							
							case 26:
								return -1173.2635f, -2037.8196f, 12.776f;
							
							case 27:
								return -0.4394f, -1037.7375f, 37.152f;
							
							case 28:
								return 137.7382f, -3092.7996f, 4.8963f;
							
							case 29:
								return -1177.2716f, -507.6518f, 34.5662f;
							
							case 30:
								return -575.4523f, -142.0386f, 36.2353f;
							
							case 31:
								return -723.2367f, 655.733f, 154.5475f;
							
							case 32:
								return -455.0906f, -999.9053f, 22.8657f;
							
							case 33:
								return -1133.9344f, -1447.0367f, 4f;
							
							case 34:
								return -231.0999f, -242.6378f, 49.0062f;
							
							case 35:
								return 69.8444f, -62.9348f, 67.8751f;
							
							case 36:
								return -1981.1616f, -296.7468f, 47.1062f;
							
							case 37:
								return 98.9504f, -1979.6643f, 19.6635f;
							
							case 38:
								return 324.168f, -2758.195f, 5.0028f;
							
							case 39:
								return 219.5919f, -2310.0776f, 7.4018f;
							
							case 40:
								return -693.2001f, -592.6827f, 30.5552f;
							
							case 41:
								return -1044.5354f, 500.5195f, 83.1617f;
							
							case 42:
								return -1792.4644f, 395.7471f, 111.7909f;
							
							case 43:
								return -425.5935f, 1123.6049f, 324.8547f;
							
							case 44:
								return -523.835f, -2902.0679f, 5.0004f;
							
							case 45:
								return -1213.84f, -2724.5466f, 12.9541f;
							
							case 46:
								return -656.7547f, -1708.6864f, 23.8153f;
							
							case 47:
								return -1024.8899f, 1012.2385f, 159.6649f;
							
							case 48:
								return -850.8826f, 1708.716f, 193.9906f;
							
							case 49:
								return -2253.348f, 1324.2896f, 291.0074f;
							
							case 50:
								return -876.7352f, -210.6213f, 38.2135f;
							
							case 51:
								return -309.9497f, -609.0406f, 32.5568f;
							
							case 52:
								return -743.9313f, -2283.3716f, 12.06f;
							
							case 53:
								return -2971.7314f, 584.4294f, 19.423f;
							
							case 54:
								return 288.4228f, -1601.1375f, 30.2709f;
							
							case 55:
								return 97.6932f, -348.3357f, 41.3071f;
							
							case 56:
								return -1065.9119f, -12.7356f, 49.4423f;
							
							case 57:
								return -388.1416f, -2283.2563f, 6.6082f;
							
							case 58:
								return -1213.1215f, -945.0177f, 1.1502f;
							
							case 59:
								return -1605.8069f, -588.1375f, 32.1103f;
							
							case 60:
								return -1573.01f, 400.7232f, 106.194f;
							
							case 61:
								return -2751.1904f, 1185.7819f, 93.6924f;
							
							case 62:
								return 287.3323f, -3014.9917f, 8.8106f;
							
							case 63:
								return -96.4867f, -2744.17f, 5.1062f;
							
							case 64:
								return -1350.7883f, -1435.0022f, 3.325f;
							
							case 65:
								return -156.4393f, -979.7114f, 20.2769f;
							
							case 66:
								return -671.3023f, 399.0416f, 101.68f;
							
							case 67:
								return 169.03f, 667.5479f, 205.7125f;
							
							case 68:
								return -726.8502f, -410.5149f, 34.5413f;
							
							case 69:
								return -671.4555f, -891.9421f, 23.4991f;
							
							case 70:
								return -190.4528f, 1299.3552f, 302.9701f;
							
							case 71:
								return -1284.4252f, -3403.2993f, 12.9452f;
							
							case 72:
								return -825.6949f, -3337.7793f, 12.9445f;
							
							case 73:
								return -1368.524f, -2335.0615f, 12.9446f;
							
							case 74:
								return -1098.009f, -2415.5261f, 12.9452f;
							
							case 75:
								return -1336.2744f, -3044.1025f, 12.9444f;
							
							case 76:
								return -821.012f, -1992.5189f, 9.6439f;
							
							case 77:
								return -350.2334f, -2640.808f, 5.0003f;
							
							case 78:
								return -219.3889f, -2386.8809f, 5.0014f;
							
							case 79:
								return 109.4531f, -2816.0366f, 9.7899f;
							
							case 80:
								return 208.6273f, -3327.8938f, 4.8177f;
							
							case 81:
								return 370.2768f, -2128.4368f, 15.2365f;
							
							case 82:
								return -53.6978f, -1688.638f, 28.4917f;
							
							case 83:
								return -1009.0515f, -1759.3016f, 5.5498f;
							
							case 84:
								return -988.1508f, -2106.5906f, 10.5382f;
							
							case 85:
								return -708.1929f, -1517.804f, 4.4121f;
							
							case 86:
								return -228.0423f, -1514.5037f, 30.4622f;
							
							case 87:
								return 297.5852f, -1204.3859f, 28.1985f;
							
							case 88:
								return 383.1396f, -904.1862f, 28.4376f;
							
							case 89:
								return -630.6f, -1071.2f, 21.7f;
							
							case 90:
								return -1207.4319f, -1796.611f, 2.9086f;
							
							case 91:
								return -876.3531f, -1501.7078f, 4.1775f;
							
							case 92:
								return -1271.531f, -1099.6127f, 6.5852f;
							
							case 93:
								return -1730.8298f, -725.0892f, 9.3941f;
							
							case 94:
								return -1431.0054f, -271.0002f, 45.2077f;
							
							case 95:
								return -1966.8158f, 182.3251f, 85.7706f;
							
							case 96:
								return -2293.7769f, 371.4213f, 173.6017f;
							
							case 97:
								return -2156.6882f, 1551.6466f, 272.9088f;
							
							case 98:
								return -2780.1494f, 1423.379f, 99.9284f;
							
							case 99:
								return -2587.9355f, 1930.8761f, 166.0052f;
							
							case 100:
								return -3017.5708f, 1860.0577f, 28.4173f;
							
							case 101:
								return 142.7543f, 1689.0972f, 233.0739f;
							
							case 102:
								return 186.6585f, 1162.8601f, 224.5946f;
							
							case 103:
								return -461.6094f, 640.4639f, 143.1886f;
							
							case 104:
								return -440.1514f, 184.2777f, 74.2476f;
							
							case 105:
								return -186.476f, 25.015f, 63.554f;
							
							case 106:
								return 26.7096f, -660.0318f, 30.6286f;
							
							case 107:
								return 156.6823f, -565.1396f, 42.893f;
							
							case 108:
								return -1834.908f, -1221.9192f, 0.8054f;
							
							case 109:
								return -707.5134f, -1340.2247f, -0.0558f;
							
							case 110:
								return -544.5794f, -2580.8306f, 0.2096f;
							
							case 111:
								return 103.7708f, -2461.2915f, 0.1193f;
							
							case 112:
								return -3046.1326f, 1570.5392f, -0.3275f;
							
							case 113:
								return -2241.345f, -530.6988f, -0.3275f;
							
							case 114:
								return 44.8316f, 844.4984f, 195.5816f;
							
							case 115:
								return -1894.2308f, -2724.3145f, -0.3275f;
							
							case 116:
								return -1029.4409f, -1778.1066f, -0.3275f;
							
							case 117:
								return -95.1061f, -2313.9973f, 0.4963f;
							
							case 118:
								return -1546.0536f, -1509.9126f, 0.409f;
							
							case 119:
								return -1678.1943f, -2238.9858f, 0.9841f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874.714f, 2055.2424f, 164.0655f;
							
							case 1:
								return -2398.2444f, 2197.3228f, 103.0324f;
							
							case 2:
								return -2470.9666f, 2693.0068f, 16.093f;
							
							case 3:
								return -1417.1256f, 2634.2346f, 3.8116f;
							
							case 4:
								return -1617.5188f, 3185.984f, 52.4819f;
							
							case 5:
								return -1187.5358f, 3851.9265f, 510.4073f;
							
							case 6:
								return -1243.2103f, 4536.3325f, 198.2652f;
							
							case 7:
								return -766.5436f, 4335.3345f, 181.1521f;
							
							case 8:
								return -515.496f, 4425.5493f, 56.3238f;
							
							case 9:
								return -210.6103f, 3651.887f, 80.5153f;
							
							case 10:
								return 90.0834f, 3766.9617f, 52.4048f;
							
							case 11:
								return 267.8927f, 2866.5798f, 81.5228f;
							
							case 12:
								return 180.018f, 2272.2268f, 109.032f;
							
							case 13:
								return -618.2112f, 2031.4565f, 238.4183f;
							
							case 14:
								return -1185.3284f, 2439.395f, 110.052f;
							
							case 15:
								return -2881.4158f, 3363.4365f, 44.4458f;
							
							case 16:
								return -2188.7888f, 4395.888f, 71.8569f;
							
							case 17:
								return -2166.2676f, 5204.9966f, 32.4229f;
							
							case 18:
								return 239.3275f, 5576.0225f, 610.5799f;
							
							case 19:
								return -549.4456f, 5308.46f, 118.8087f;
							
							case 20:
								return -686.6255f, 5674.634f, 64.1394f;
							
							case 21:
								return 25.1643f, 7643.3687f, 32.4106f;
							
							case 22:
								return -162.8882f, 6422.088f, 46.3268f;
							
							case 23:
								return 269.3018f, 5863.5103f, 425.1252f;
							
							case 24:
								return 158.6423f, 4622.6235f, 213.8925f;
							
							case 25:
								return 31.6062f, 4328.1406f, 56.7127f;
							
							case 26:
								return -959.6198f, 4843.2017f, 317.838f;
							
							case 27:
								return -1179.4015f, 4926.9224f, 230.3542f;
							
							case 28:
								return -1801.7695f, 4513.373f, 40.2242f;
							
							case 29:
								return -2146.7214f, 3964.1711f, 111.159f;
							
							case 30:
								return -668.1703f, 3607.985f, 305.8568f;
							
							case 31:
								return -409.327f, 2963.4136f, 38.182f;
							
							case 32:
								return -290.9469f, 2533.4746f, 92.1749f;
							
							case 33:
								return -3029.401f, 1883.9596f, 35.4066f;
							
							case 34:
								return -2597.6538f, 1922.0712f, 179.5395f;
							
							case 35:
								return 80.7072f, 5032.9463f, 490.6172f;
							
							case 36:
								return -899.8328f, 6042.451f, 53.0212f;
							
							case 37:
								return -1576.676f, 5160.7627f, 26.8806f;
							
							case 38:
								return 145.5836f, 6866.114f, 38.7097f;
							
							case 39:
								return -50.5306f, 6236.916f, 79.3327f;
							
							case 40:
								return -368.4536f, 6104.7197f, 53f;
							
							case 41:
								return -1599.9713f, 2104.1846f, 80.8163f;
							
							case 42:
								return -1626.4868f, 2585.598f, 12.1104f;
							
							case 43:
								return -2064.0005f, 3361.181f, 48.6443f;
							
							case 44:
								return -2357.318f, 3250.9163f, 117.4892f;
							
							case 45:
								return -2684.9463f, 2304.948f, 39.1557f;
							
							case 46:
								return -772.2781f, 4704.5522f, 242.9476f;
							
							case 47:
								return 125.5518f, 3365.379f, 35.8003f;
							
							case 48:
								return -113.0094f, 2803.8757f, 67.1096f;
							
							case 49:
								return -179.3538f, 1907.5616f, 221.1006f;
							
							case 50:
								return -1235.5541f, 1879.0356f, 150.8745f;
							
							case 51:
								return 341.9869f, 3569.3142f, 63.2875f;
							
							case 52:
								return 391.3682f, 5485.655f, 1000f;
							
							case 53:
								return 311.9317f, 6432.635f, 80.2925f;
							
							case 54:
								return -292.9588f, 5839.533f, 129.366f;
							
							case 55:
								return -1502.4677f, 5984.9546f, 34.7383f;
							
							case 56:
								return -3449.053f, 2645.4365f, 55.2519f;
							
							case 57:
								return -1096.9625f, 3225.6072f, 147.7444f;
							
							case 58:
								return -278.2971f, 6637.778f, 45.611f;
							
							case 59:
								return 297.8872f, 4013.2524f, 33.872f;
							
							case 60:
								return -271.6442f, 5586.137f, 250.6218f;
							
							case 61:
								return -821f, 5419.5f, 58.4f;
							
							case 62:
								return -1734.6f, 3968.5f, 302.8f;
							
							case 63:
								return -2664.1f, 2594f, 3.8f;
							
							case 64:
								return -897.3f, 2797.5f, 28.3f;
							
							case 65:
								return -1158.6f, 4625.5f, 156.7f;
							
							case 66:
								return 618f, 6426.7f, 103.2f;
							
							case 67:
								return 435.1f, 6772.9f, 18.9f;
							
							case 68:
								return -677.8f, 6035f, 27.3f;
							
							case 69:
								return -1445.2f, 5428.6f, 53.5f;
							
							case 70:
								return -384.2f, 4711.1f, 278.4f;
							
							case 71:
								return 911.8f, 4338.1f, 61.8f;
							
							case 72:
								return 518.5f, 5944.8f, 525.2f;
							
							case 73:
								return -1631.5f, 4741.2f, 66.9f;
							
							case 74:
								return -1352.5f, 4147.1f, 125.1f;
							
							case 75:
								return -1138.5f, 2807.2f, 250.4f;
							
							case 76:
								return -540.3f, 4190.5f, 203.6f;
							
							case 77:
								return -166.9f, 4250.2f, 61.7f;
							
							case 78:
								return -88.2f, 4579f, 135.4f;
							
							case 79:
								return -3051.213f, 4178.12f, 72.7681f;
							
							case 80:
								return -2606.2598f, 2993.814f, 30.4219f;
							
							case 81:
								return -2302.7595f, 2011.2108f, 153.3448f;
							
							case 82:
								return -2254.3137f, 1680.5056f, 298.8981f;
							
							case 83:
								return -1955.917f, 1772.4076f, 201.629f;
							
							case 84:
								return -1751.7631f, 1998.5481f, 129.1121f;
							
							case 85:
								return -1453.8889f, 2069.2202f, 65.2848f;
							
							case 86:
								return -1479.3862f, 2405.9797f, 37.5402f;
							
							case 87:
								return -1041.6007f, 3963.552f, 344.3259f;
							
							case 88:
								return -775.5471f, 4048.385f, 310.1201f;
							
							case 89:
								return -883.0366f, 4411.045f, 29.2546f;
							
							case 90:
								return -1215.2303f, 4370.065f, 38.5217f;
							
							case 91:
								return -1269.5232f, 4386.9385f, 1000f;
							
							case 92:
								return -1508.0304f, 4446.5464f, 59.4166f;
							
							case 93:
								return -1449.3313f, 4602.479f, 336.1419f;
							
							case 94:
								return -1640.1833f, 5440.6304f, 43.1539f;
							
							case 95:
								return -891.0049f, 5157.28f, 187.01f;
							
							case 96:
								return 724.7438f, 5251.831f, 586.2138f;
							
							case 97:
								return 537.1121f, 4647.938f, 274.9371f;
							
							case 98:
								return 64.3661f, 4022.3625f, 575.3698f;
							
							case 99:
								return 907.8411f, 3627.4348f, 53.8748f;
							
							case 100:
								return 591.9018f, 2977.4355f, 82.2499f;
							
							case 101:
								return 259.6137f, 1788.4592f, 256.6769f;
							
							case 102:
								return -2092.0813f, 2518.0164f, 800f;
							
							case 103:
								return -2536.6838f, 1678.4497f, 196.0372f;
							
							case 104:
								return 52.1855f, 7343.6396f, 518.5611f;
							
							case 105:
								return -521.5972f, 6960.141f, 172.8203f;
							
							case 106:
								return -684.2739f, 6467.878f, 165.8478f;
							
							case 107:
								return -1060.2322f, 5711.0635f, 333.8782f;
							
							case 108:
								return -1786.0522f, 5471.512f, 614.6761f;
							
							case 109:
								return -1501.1886f, 3295.0955f, 245.8079f;
							
							case 110:
								return -2149.1445f, 3521.295f, 186.103f;
							
							case 111:
								return 887.6612f, 5610.0923f, 697.7338f;
							
							case 112:
								return 451.4696f, 5020.9893f, 610.8222f;
							
							case 113:
								return 693.6552f, 4097.276f, 53.8927f;
							
							case 114:
								return -99.6831f, 3960.6362f, 80.8691f;
							
							case 115:
								return -579.6645f, 3979.6753f, 136.2872f;
							
							case 116:
								return -996.2939f, 4194.288f, 151.0646f;
							
							case 117:
								return -1542.3983f, 2886.0444f, 1000f;
							
							case 118:
								return -3004.9878f, 2333.0999f, 209.9484f;
							
							case 119:
								return -3622.204f, 4740.6196f, 19.17f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200.7861f, 3429.2134f, 31.6018f;
							
							case 1:
								return -1873.9148f, 2090.5955f, 139.9944f;
							
							case 2:
								return -1674.2521f, 2301.497f, 59.0047f;
							
							case 3:
								return -506.3776f, 4358.9375f, 66.4342f;
							
							case 4:
								return -83.7414f, 4580.993f, 122.1646f;
							
							case 5:
								return -207.3853f, 3598.5168f, 60.323f;
							
							case 6:
								return 233.0533f, 3547.9268f, 30.2697f;
							
							case 7:
								return 93.7029f, 3597.8599f, 38.7393f;
							
							case 8:
								return 327f, 2858f, 42.4386f;
							
							case 9:
								return 158.1294f, 3136.305f, 42.4573f;
							
							case 10:
								return -210.5036f, 2955.3577f, 28.941f;
							
							case 11:
								return -288.922f, 2524.7224f, 73.6685f;
							
							case 12:
								return -734.5254f, 5594.9834f, 34.288f;
							
							case 13:
								return 88.2503f, 6368.1294f, 30.2271f;
							
							case 14:
								return -344.4945f, 6242.8457f, 30.4877f;
							
							case 15:
								return -267.3751f, 6639.4443f, 6.3939f;
							
							case 16:
								return -1444.4702f, 5418.419f, 22.2866f;
							
							case 17:
								return -1611.0414f, 5258.6846f, 2.9791f;
							
							case 18:
								return -1823.2031f, 4464.67f, 37.4717f;
							
							case 19:
								return -2488.1113f, 2740.8389f, 1.8909f;
							
							case 20:
								return -1626.5487f, 2587.9238f, 1.6362f;
							
							case 21:
								return -1575.2991f, 2105.205f, 66.0545f;
							
							case 22:
								return -543.6063f, 1983.754f, 126.0263f;
							
							case 23:
								return -563.8864f, 1886.811f, 122.0349f;
							
							case 24:
								return -592.4536f, 2076.6404f, 130.3709f;
							
							case 25:
								return -2497.361f, 2307.1936f, 33.1315f;
							
							case 26:
								return -2584.9226f, 1931.1104f, 166.3129f;
							
							case 27:
								return -1618.1613f, 3184.1265f, 31.8513f;
							
							case 28:
								return -913.2203f, 2562.701f, 57.2099f;
							
							case 29:
								return -1163.9229f, 2408.9934f, 92.402f;
							
							case 30:
								return 188.3494f, 2295.0298f, 92.7443f;
							
							case 31:
								return -96.8265f, 2224.7505f, 159.4986f;
							
							case 32:
								return -834.779f, 4178.5576f, 214.3525f;
							
							case 33:
								return -790.3221f, 2901.1248f, 18.2471f;
							
							case 34:
								return -799.6998f, 3478.0144f, 172.9345f;
							
							case 35:
								return -1347.7264f, 4127.4155f, 61.6295f;
							
							case 36:
								return -1364.7091f, 4848.779f, 144.9459f;
							
							case 37:
								return -2168.3364f, 5186.728f, 14.9725f;
							
							case 38:
								return -987.1982f, 5075.1147f, 186.5395f;
							
							case 39:
								return 231.926f, 5246.8306f, 601.2042f;
							
							case 40:
								return -1.0985f, 5029.4585f, 446.6905f;
							
							case 41:
								return -134.3454f, 4916.509f, 353.0826f;
							
							case 42:
								return -434.7882f, 4885.8613f, 189.7331f;
							
							case 43:
								return -592.1419f, 5361.79f, 69.3186f;
							
							case 44:
								return 64.7121f, 7052.2964f, 15.7854f;
							
							case 45:
								return -577.7616f, 5954.945f, 25.1362f;
							
							case 46:
								return -945.8056f, 4613.7583f, 238.1628f;
							
							case 47:
								return -2228.8174f, 4218.2476f, 45.7951f;
							
							case 48:
								return -2493.3613f, 4193.219f, 1.0754f;
							
							case 49:
								return -3073.0884f, 3200.4133f, 0.9527f;
							
							case 50:
								return 376.4925f, 6630.836f, 27.7626f;
							
							case 51:
								return -1692.9249f, 4597.169f, 46.8227f;
							
							case 52:
								return -2587.7976f, 3193.551f, 12.9622f;
							
							case 53:
								return -922.5162f, 6131.0967f, 6.1891f;
							
							case 54:
								return -112.5477f, 7285.7847f, 16.1674f;
							
							case 55:
								return -170.1744f, 6049.7163f, 30.1726f;
							
							case 56:
								return 57.7188f, 6673.0757f, 30.9499f;
							
							case 57:
								return -501.3606f, 5567.93f, 70.0852f;
							
							case 58:
								return -292.4363f, 5839.495f, 120.8191f;
							
							case 59:
								return -436.1143f, 5707.903f, 61.0179f;
							
							case 60:
								return -494.1112f, 5290.4795f, 79.6187f;
							
							case 61:
								return -421.0542f, 5187.812f, 122.5195f;
							
							case 62:
								return -835.7191f, 5261.788f, 79.1947f;
							
							case 63:
								return -873.3408f, 4786.0073f, 299.4599f;
							
							case 64:
								return -299.7797f, 4676.5f, 245.6817f;
							
							case 65:
								return -903.4214f, 5176.0864f, 153.3577f;
							
							case 66:
								return -869.6852f, 5553.7104f, 1.4216f;
							
							case 67:
								return -1210.241f, 5228.6733f, 88.4579f;
							
							case 68:
								return -1224.511f, 3854.1726f, 488.3926f;
							
							case 69:
								return -688.3312f, 3764.9836f, 272.5302f;
							
							case 70:
								return -1829.375f, 3982.9968f, 271.9911f;
							
							case 71:
								return -2432.3372f, 3535.9397f, 33.3233f;
							
							case 72:
								return -1440.5262f, 5106.688f, 62.4016f;
							
							case 73:
								return -2258.899f, 3831.7593f, 118.1093f;
							
							case 74:
								return -1577.4941f, 5162.519f, 18.6627f;
							
							case 75:
								return -2046.3337f, 4525.6006f, 27.6239f;
							
							case 76:
								return -2189.855f, 4616.937f, 0.5382f;
							
							case 77:
								return 423.4926f, 5613.09f, 765.7494f;
							
							case 78:
								return 501.2704f, 5598.329f, 795.0286f;
							
							case 79:
								return 625.9471f, 5675.894f, 747.5628f;
							
							case 80:
								return -555.5328f, 5321.4487f, 72.5996f;
							
							case 81:
								return -685.9285f, 5233.7383f, 92.4703f;
							
							case 82:
								return -213.783f, 6348.9893f, 30.5355f;
							
							case 83:
								return -391.0858f, 6341.1753f, 25.425f;
							
							case 84:
								return 0.9189f, 3691.5942f, 38.5039f;
							
							case 85:
								return -225.4021f, 3664.7502f, 63.4125f;
							
							case 86:
								return 714.1616f, 4136.578f, 34.7842f;
							
							case 87:
								return 825.1304f, 4223.4897f, 50.8188f;
							
							case 88:
								return 858.3134f, 4423.847f, 30.2196f;
							
							case 89:
								return 335.1393f, 4373.4707f, 63.3434f;
							
							case 90:
								return -1474.2874f, 2687.972f, 16.6437f;
							
							case 91:
								return -1183.1458f, 4927.8086f, 222.0748f;
							
							case 92:
								return -892.4783f, 4529.449f, 113.9803f;
							
							case 93:
								return 761.0254f, 6455.407f, 30.7286f;
							
							case 94:
								return 370.5299f, 5453.1826f, 691.2834f;
							
							case 95:
								return -376.5987f, 3840.7778f, 73.9626f;
							
							case 96:
								return -2077.6355f, 3390.068f, 30.1962f;
							
							case 97:
								return -2317.722f, 3398.1135f, 29.7812f;
							
							case 98:
								return -2686.1533f, 3554.439f, 1.0289f;
							
							case 99:
								return -1869.3872f, 4649.4917f, 56.0019f;
							
							case 100:
								return -1854.183f, 4809.8457f, 1.9984f;
							
							case 101:
								return -683.5417f, 5823.635f, 16.3313f;
							
							case 102:
								return -790.6581f, 5479.023f, 25.889f;
							
							case 103:
								return 482.4343f, 6486.61f, 29.0864f;
							
							case 104:
								return 183.3372f, 7008.858f, 11.2392f;
							
							case 105:
								return 50.2346f, 4325.2314f, 43.3996f;
							
							case 106:
								return -28.0941f, 4430.7944f, 57.1619f;
							
							case 107:
								return -187.3603f, 4019.4214f, 30.6801f;
							
							case 108:
								return -1804.9352f, 5315.242f, 0.8688f;
							
							case 109:
								return 81.2546f, 4050.0576f, 29.4f;
							
							case 110:
								return -1191.0557f, 4389.1504f, 4.3f;
							
							case 111:
								return -2188.3345f, 2590.9434f, -0.4f;
							
							case 112:
								return -2825.633f, 2358.0908f, 0.5703f;
							
							case 113:
								return -2047.6958f, 4852.3037f, 0.6241f;
							
							case 114:
								return -2664.6147f, 2597.589f, -0.4f;
							
							case 115:
								return 271.9201f, 7512.879f, -0.5084f;
							
							case 116:
								return -215.5849f, 4284.967f, 29.5257f;
							
							case 117:
								return -2879.157f, 2879.6035f, 0.4205f;
							
							case 118:
								return -920.2339f, 5871.843f, 0.4382f;
							
							case 119:
								return -34.7086f, 7618.572f, 0.4933f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867.3339f, 4198.743f, 75f;
							
							case 1:
								return 1254.1764f, 4848.0747f, 247.0701f;
							
							case 2:
								return 1676.7766f, 5140.2563f, 160.2494f;
							
							case 3:
								return 1995.3395f, 5021.6704f, 68.695f;
							
							case 4:
								return 2599.9524f, 5032.021f, 112.432f;
							
							case 5:
								return 2967.3093f, 5197.417f, 148.5921f;
							
							case 6:
								return 2876.9922f, 5911.252f, 378.2234f;
							
							case 7:
								return 3438.9043f, 6144.4165f, 10.0202f;
							
							case 8:
								return 3431.1064f, 5174.187f, 46.1572f;
							
							case 9:
								return 4080.0906f, 4476.533f, 17.0407f;
							
							case 10:
								return 3492.8005f, 4619.8936f, 65f;
							
							case 11:
								return 3378.0361f, 4079.5244f, 229.1767f;
							
							case 12:
								return 3944.4033f, 3729.6572f, 19.5046f;
							
							case 13:
								return 3556.3828f, 3684.9868f, 67.2346f;
							
							case 14:
								return 3296.1213f, 3365.1982f, 125f;
							
							case 15:
								return 3289.9995f, 3140.4368f, 275.7202f;
							
							case 16:
								return 2948.726f, 2791.748f, 48.6755f;
							
							case 17:
								return 1597.427f, 2599.1707f, 95f;
							
							case 18:
								return 1397.0093f, 2116.5027f, 137.1597f;
							
							case 19:
								return 723.7358f, 2322.6946f, 64.6875f;
							
							case 20:
								return 753.2642f, 2581.4136f, 161f;
							
							case 21:
								return 564.4257f, 3392.3542f, 96.1353f;
							
							case 22:
								return 1191.005f, 3400.2646f, 78.9779f;
							
							case 23:
								return 1279.7393f, 3100.2595f, 53.8507f;
							
							case 24:
								return 1415.4867f, 3833.4768f, 52.6619f;
							
							case 25:
								return 1488.6566f, 3946.2244f, 305.2148f;
							
							case 26:
								return 2065.697f, 6451.6147f, 149.8928f;
							
							case 27:
								return 2559.717f, 6155.7915f, 171f;
							
							case 28:
								return 1502.5463f, 6159.0796f, 230.8224f;
							
							case 29:
								return 1163.8906f, 5965.0967f, 413.3012f;
							
							case 30:
								return 772.3428f, 5523.894f, 600f;
							
							case 31:
								return 501.8089f, 5604.274f, 1000.5984f;
							
							case 32:
								return 1002.1407f, 4786.2705f, 185.7696f;
							
							case 33:
								return 587.414f, 5114.912f, 405f;
							
							case 34:
								return 1345.8699f, 6384.9634f, 52.4688f;
							
							case 35:
								return 754.4042f, 6465.9995f, 49f;
							
							case 36:
								return 1042.2163f, 6799.529f, 40.2945f;
							
							case 37:
								return 1779.1155f, 5662.172f, 274f;
							
							case 38:
								return 2898.0984f, 4327.4565f, 107.9208f;
							
							case 39:
								return 2634.3499f, 3661.461f, 111.1731f;
							
							case 40:
								return 2045.418f, 3429.5237f, 56.3868f;
							
							case 41:
								return 1563.0648f, 3572.8215f, 41f;
							
							case 42:
								return 2276.492f, 1955.5419f, 146.9525f;
							
							case 43:
								return 2379.7468f, 2604.9822f, 89.7836f;
							
							case 44:
								return 543.5116f, 3080.7087f, 63f;
							
							case 45:
								return 2264.6035f, 4455.955f, 62.2539f;
							
							case 46:
								return 2410.1868f, 2908.3357f, 373.9144f;
							
							case 47:
								return 3510.4792f, 2569.0525f, 16.1615f;
							
							case 48:
								return 3073.721f, 2084.0789f, 30f;
							
							case 49:
								return 3319.3398f, 2272.2173f, 14.2949f;
							
							case 50:
								return 2822.12f, 4977.3354f, 70f;
							
							case 51:
								return 1299.971f, 4219.281f, 41f;
							
							case 52:
								return 503.1913f, 4450.17f, 112f;
							
							case 53:
								return 2489.6204f, 3760.0535f, 53f;
							
							case 54:
								return 1824.4987f, 2031.218f, 60.1953f;
							
							case 55:
								return 1153.7646f, 2384.3997f, 75.2003f;
							
							case 56:
								return 1339.664f, 2747.6167f, 79.0765f;
							
							case 57:
								return 542.5154f, 2488.1936f, 84.9932f;
							
							case 58:
								return 2767.5425f, 2047.1622f, 126.1494f;
							
							case 59:
								return 2061.3596f, 3941.4512f, 200f;
							
							case 60:
								return 873.5367f, 2867.7366f, 73.5925f;
							
							case 61:
								return 1752.1415f, 3052.5417f, 78.6478f;
							
							case 62:
								return 2100.787f, 2339.8853f, 133.921f;
							
							case 63:
								return 2738.826f, 3476.4663f, 81.564f;
							
							case 64:
								return 2285.0886f, 3289.1294f, 86.2814f;
							
							case 65:
								return 1745.8994f, 3756.1274f, 53.8457f;
							
							case 66:
								return 2504.338f, 4418.7583f, 55f;
							
							case 67:
								return 1552.003f, 2186.4058f, 96f;
							
							case 68:
								return 2716.3765f, 4132.6562f, 63.7827f;
							
							case 69:
								return 3809.8135f, 4462.08f, 36.1286f;
							
							case 70:
								return 3257.8203f, 4308.5405f, 140f;
							
							case 71:
								return 2268.876f, 5381.4316f, 328.4639f;
							
							case 72:
								return 2236.3894f, 5604.6826f, 71.034f;
							
							case 73:
								return 1986.6572f, 6201.7393f, 66.4804f;
							
							case 74:
								return 3356.059f, 5696.29f, 20f;
							
							case 75:
								return 2457.2634f, 6684.452f, 63.14f;
							
							case 76:
								return 1914.9834f, 6702.2334f, 14.7976f;
							
							case 77:
								return 2149.8113f, 3844.9988f, 88.0922f;
							
							case 78:
								return 1880.169f, 4244.354f, 80.3363f;
							
							case 79:
								return 1791.8972f, 4595.9546f, 48.6224f;
							
							case 80:
								return 1181.1326f, 5151.4165f, 772.3138f;
							
							case 81:
								return 431.2495f, 4768.5356f, 665.041f;
							
							case 82:
								return 1410.6505f, 6569.377f, 26.5039f;
							
							case 83:
								return 1522.4656f, 6617.973f, 8f;
							
							case 84:
								return 2316.162f, 6378.7383f, 143.7605f;
							
							case 85:
								return 3127.772f, 5566.866f, 317.7646f;
							
							case 86:
								return 3684.367f, 4916.1523f, 618.67f;
							
							case 87:
								return 3941.7615f, 4652.369f, 92.7624f;
							
							case 88:
								return 3900.5806f, 4262.1035f, 887.18f;
							
							case 89:
								return 3535.1663f, 3778.2424f, 46.4187f;
							
							case 90:
								return 3638.8545f, 3108.9526f, 8.7037f;
							
							case 91:
								return 931.8565f, 2446.3755f, 59f;
							
							case 92:
								return 1052.2137f, 2277.729f, 95.5547f;
							
							case 93:
								return 411.0964f, 4298.8223f, 40.8556f;
							
							case 94:
								return 970.339f, 5647.13f, 650.7467f;
							
							case 95:
								return 2137.105f, 4785.5186f, 59.9326f;
							
							case 96:
								return 2333.533f, 4801.554f, 467.9726f;
							
							case 97:
								return 2800.7444f, 4745.3916f, 370.3547f;
							
							case 98:
								return 2721.0613f, 1556.4155f, 101.1161f;
							
							case 99:
								return 1855.2839f, 1600.6653f, 116.8989f;
							
							case 100:
								return 1623.4694f, 1518.1221f, 294.3194f;
							
							case 101:
								return 923.4011f, 1635.3481f, 218.3212f;
							
							case 102:
								return 829.6124f, 1892.8708f, 135.5203f;
							
							case 103:
								return 1294.0507f, 5675.865f, 472.5645f;
							
							case 104:
								return 1716.85f, 6416.6367f, 81.5075f;
							
							case 105:
								return 2140.929f, 5892.89f, 161.9607f;
							
							case 106:
								return 1604.3999f, 5793.905f, 429.8526f;
							
							case 107:
								return 1589.6504f, 4160.2153f, 883.122f;
							
							case 108:
								return 2191.1565f, 4208.336f, 477.8802f;
							
							case 109:
								return 1427.6396f, 4515.944f, 85.3721f;
							
							case 110:
								return 1206.398f, 4546.814f, 83.0875f;
							
							case 111:
								return 222.2962f, 4746.2065f, 280.8666f;
							
							case 112:
								return 287.655f, 5361.1143f, 659.2646f;
							
							case 113:
								return 194.6948f, 7393.7095f, 1000f;
							
							case 114:
								return 469.5136f, 6745.1055f, 14.1624f;
							
							case 115:
								return 537.5068f, 6663.253f, 447.8182f;
							
							case 116:
								return 3227.7927f, 6940.11f, 111.4631f;
							
							case 117:
								return 3614.2307f, 5883.145f, 9.5207f;
							
							case 118:
								return 3010.2542f, 5697.739f, 463.4349f;
							
							case 119:
								return 2874.3237f, 6196.4893f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581.9629f, 2200.2444f, 78.0226f;
							
							case 1:
								return 1104.1044f, 2399.3965f, 53.529f;
							
							case 2:
								return 1089.4886f, 2132.9426f, 57.0757f;
							
							case 3:
								return 932.5687f, 2434.2637f, 49.6778f;
							
							case 4:
								return 586.3744f, 2935.3125f, 39.9577f;
							
							case 5:
								return 437.5278f, 3537.2847f, 32.3159f;
							
							case 6:
								return 917.2156f, 3648.1167f, 35.1053f;
							
							case 7:
								return 1528.5854f, 3916.301f, 30.6709f;
							
							case 8:
								return 1924.3997f, 3468.0645f, 50.6772f;
							
							case 9:
								return 2482.272f, 3761.5398f, 40.6483f;
							
							case 10:
								return 2722.3074f, 2895.323f, 46.873f;
							
							case 11:
								return 3021.2578f, 2881.7495f, 85.959f;
							
							case 12:
								return 2096.6426f, 2504.604f, 89.6423f;
							
							case 13:
								return 2974.6575f, 3485.9587f, 70.4429f;
							
							case 14:
								return 3390.0796f, 3704.603f, 34.9975f;
							
							case 15:
								return 2908.2136f, 4342.968f, 49.3031f;
							
							case 16:
								return 1796.1014f, 4920.626f, 47.3851f;
							
							case 17:
								return 2241.987f, 5382.8096f, 144.0017f;
							
							case 18:
								return 2218.899f, 5946.2627f, 49.634f;
							
							case 19:
								return 1601.4633f, 6624.7603f, 14.7707f;
							
							case 20:
								return 1406.9279f, 6568.6206f, 19.3763f;
							
							case 21:
								return 439.5467f, 6459.8657f, 34.8699f;
							
							case 22:
								return 1503.6865f, 6360.8555f, 15.6193f;
							
							case 23:
								return 3316.647f, 5190.3594f, 17.4152f;
							
							case 24:
								return 3632.8904f, 5003.482f, 11.6053f;
							
							case 25:
								return 3057.6587f, 5064.144f, 17.7153f;
							
							case 26:
								return 2822.5337f, 4978.232f, 62.4826f;
							
							case 27:
								return 3930.095f, 4399.0146f, 15.6116f;
							
							case 28:
								return 3859.2837f, 4226.9053f, 2.7151f;
							
							case 29:
								return 3692.6836f, 4570.5947f, 24.1191f;
							
							case 30:
								return 1830.9161f, 2542.0051f, 44.8856f;
							
							case 31:
								return 2424.3083f, 3131.437f, 47.2055f;
							
							case 32:
								return 1340.228f, 2988.9343f, 45.0809f;
							
							case 33:
								return 817.1245f, 3379.4683f, 76.9467f;
							
							case 34:
								return 563.2202f, 2456.9836f, 58.1331f;
							
							case 35:
								return 2041.7131f, 2002.4792f, 84.9881f;
							
							case 36:
								return 2431.8535f, 1986.8691f, 82.1812f;
							
							case 37:
								return 1190.8721f, 3401.1887f, 67.3338f;
							
							case 38:
								return 1943.9834f, 3817.8528f, 31.0619f;
							
							case 39:
								return 1977.6792f, 3054.874f, 49.3235f;
							
							case 40:
								return 452.5827f, 5587.175f, 780.1891f;
							
							case 41:
								return 807.1406f, 5701.082f, 696.9146f;
							
							case 42:
								return 1600.8683f, 5804.8296f, 414.5815f;
							
							case 43:
								return 1412.0156f, 5558.528f, 459.5185f;
							
							case 44:
								return 2279.983f, 5788.728f, 154.1637f;
							
							case 45:
								return 2346.1729f, 4997.5474f, 41.5868f;
							
							case 46:
								return 2391.9185f, 4296.647f, 34.1954f;
							
							case 47:
								return 1364.9434f, 4385.9746f, 43.3491f;
							
							case 48:
								return 998.6568f, 4453.989f, 59.924f;
							
							case 49:
								return 1058.949f, 4219.405f, 34.273f;
							
							case 50:
								return 870.7486f, 6627.962f, 1.1131f;
							
							case 51:
								return 2721.632f, 4513.4995f, 41.1966f;
							
							case 52:
								return 1219.4437f, 2744.5312f, 37.0054f;
							
							case 53:
								return 2564.3203f, 2578.4934f, 36.9367f;
							
							case 54:
								return 2827.7437f, 5963.866f, 350.6364f;
							
							case 55:
								return 2946.3967f, 5326.4736f, 100.269f;
							
							case 56:
								return 2211.1536f, 3593.3242f, 55.1756f;
							
							case 57:
								return 3079.837f, 6027.1445f, 129.2854f;
							
							case 58:
								return 3345.3003f, 5555.332f, 17.907f;
							
							case 59:
								return 528.5965f, 3092.7852f, 39.4652f;
							
							case 60:
								return 2184.8909f, 3724.3684f, 37.4901f;
							
							case 61:
								return 1471.091f, 4948.712f, 75.0594f;
							
							case 62:
								return 2713.9963f, 4141.762f, 42.8723f;
							
							case 63:
								return 2476.5576f, 5783.607f, 68.702f;
							
							case 64:
								return 2647.7498f, 3281.4016f, 54.2127f;
							
							case 65:
								return 2210.9763f, 5610.793f, 52.8602f;
							
							case 66:
								return 2898.3276f, 2389.586f, 170.4231f;
							
							case 67:
								return 2728.33f, 2616.2915f, 95.3074f;
							
							case 68:
								return 1844.4783f, 4591.953f, 29.6629f;
							
							case 69:
								return 2432.1277f, 4616.881f, 28.1137f;
							
							case 70:
								return 2574.2944f, 4653.86f, 33.0768f;
							
							case 71:
								return 1574.0092f, 3591.0657f, 34.3615f;
							
							case 72:
								return 2008.2645f, 4986.431f, 40.3378f;
							
							case 73:
								return 1975.0587f, 5182.086f, 46.8906f;
							
							case 74:
								return 1955.8948f, 4620.182f, 39.6384f;
							
							case 75:
								return 2279.7563f, 4846.217f, 39.2283f;
							
							case 76:
								return 2418.2915f, 4784.6743f, 33.6784f;
							
							case 77:
								return 2005.1091f, 3765.983f, 31.1808f;
							
							case 78:
								return 1719.6768f, 3692.7432f, 33.513f;
							
							case 79:
								return 1530.7114f, 3076.231f, 39.9815f;
							
							case 80:
								return 1686.3663f, 3301.0066f, 40.1368f;
							
							case 81:
								return 3481.6025f, 3740.4883f, 35.6427f;
							
							case 82:
								return 2392.4253f, 3334.924f, 46.3672f;
							
							case 83:
								return 2192.1538f, 3168.9421f, 50.5572f;
							
							case 84:
								return 2354.4958f, 2577.063f, 45.6677f;
							
							case 85:
								return 640.7736f, 2777.9377f, 40.9601f;
							
							case 86:
								return 2768.528f, 1701.8193f, 23.6943f;
							
							case 87:
								return 3239.6626f, 3501.2231f, 67.723f;
							
							case 88:
								return 2672.9524f, 3516.45f, 51.712f;
							
							case 89:
								return 2619.9617f, 3661.8643f, 100.2808f;
							
							case 90:
								return 2437.504f, 4069.2297f, 37.0001f;
							
							case 91:
								return 1685.5979f, 6435.691f, 31.3515f;
							
							case 92:
								return 1417.6531f, 3818.3943f, 31.1351f;
							
							case 93:
								return 3300.7f, 5941.6475f, 93.3217f;
							
							case 94:
								return 870.0084f, 2870.5645f, 55.9249f;
							
							case 95:
								return 1352.4126f, 6401.655f, 32.4101f;
							
							case 96:
								return 1960.8578f, 5376.274f, 185.2074f;
							
							case 97:
								return 1974.8472f, 6219.9585f, 41.2546f;
							
							case 98:
								return 3684.152f, 3795.9685f, 15.0641f;
							
							case 99:
								return 2625.7957f, 2809.9785f, 32.439f;
							
							case 100:
								return 1302.9315f, 4234.5405f, 32.9137f;
							
							case 101:
								return 577.5187f, 4169.561f, 37.8946f;
							
							case 102:
								return 1069.3113f, 2259.363f, 43.4741f;
							
							case 103:
								return 1381.4872f, 3633.717f, 34.0073f;
							
							case 104:
								return 3046.2493f, 6219.2285f, 111.0105f;
							
							case 105:
								return 985.3563f, 5642.3f, 627.7075f;
							
							case 106:
								return 2504.378f, 5178.0884f, 67.6632f;
							
							case 107:
								return 2537.3413f, 4476.488f, 36.1789f;
							
							case 108:
								return 1291.7302f, 4112.564f, 29.6645f;
							
							case 109:
								return 2176.2324f, 4605.335f, 29.194f;
							
							case 110:
								return 3456.6238f, 5135.3765f, -0.3837f;
							
							case 111:
								return 4054.2263f, 4518.3857f, 0.4f;
							
							case 112:
								return 1074.3125f, 6738.594f, 1.3817f;
							
							case 113:
								return 409.7385f, 4290.737f, 29.5f;
							
							case 114:
								return 2551.2747f, 6151.5703f, 161.1609f;
							
							case 115:
								return 3646.3347f, 2977.0486f, 0.6928f;
							
							case 116:
								return 1938.3722f, 4287.003f, 29.6693f;
							
							case 117:
								return 3630.215f, 5625.8413f, 1.2201f;
							
							case 118:
								return 1582.6128f, 6753.431f, 0.4436f;
							
							case 119:
								return 3449.314f, 2677.5195f, 0.0895f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_120(var uParam0)//Position - 0x8C08
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_0 = 42967925;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar1 = func_121(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

var func_121(int iParam0, bool bParam1)//Position - 0x8C42
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_13(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_71(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8CA7
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_123(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_123(int iParam0)//Position - 0x9521
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
		
		default:
	}
	return -1;
}

int func_124()//Position - 0x96E9
{
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 1);
}

bool func_125()//Position - 0x96F7
{
	if (func_127(Local_132.f_712))
	{
		return 0;
	}
	else if (func_126(Local_132.f_712))
	{
		return 1;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1;
}

int func_126(int iParam0)//Position - 0x972C
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11600 /* Tunable: CHECKPOINT_DISABLE_SE_QUARTER_LAND_VARIATION */ || Global_262145.f_11592 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		
		case 1:
			return (Global_262145.f_11599 /* Tunable: CHECKPOINT_DISABLE_SW_QUARTER_LAND_VARIATION */ || Global_262145.f_11592 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		
		case 2:
			return (Global_262145.f_11597 /* Tunable: CHECKPOINT_DISABLE_NW_QUARTER_LAND_VARIATION */ || Global_262145.f_11592 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		
		case 3:
			return (Global_262145.f_11598 /* Tunable: CHECKPOINT_DISABLE_NE_QUARTER_LAND_VARIATION */ || Global_262145.f_11592 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		
		default:
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x97B0
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11596 /* Tunable: CHECKPOINT_DISABLE_SE_QUARTER_AIR_VARIATION */ || Global_262145.f_11591 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		
		case 1:
			return (Global_262145.f_11595 /* Tunable: CHECKPOINT_DISABLE_SW_QUARTER_AIR_VARIATION */ || Global_262145.f_11591 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		
		case 2:
			return (Global_262145.f_11593 /* Tunable: CHECKPOINT_DISABLE_NW_QUARTER_AIR_VARIATION */ || Global_262145.f_11591 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		
		case 3:
			return (Global_262145.f_11594 /* Tunable: CHECKPOINT_DISABLE_NE_QUARTER_AIR_VARIATION */ || Global_262145.f_11591 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		
		default:
	}
	return 0;
}

int func_128()//Position - 0x9834
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iLocal_107 = 1;
	switch (iLocal_107)
	{
		case 0:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			break;
		
		case 1:
			iVar1 = func_129(&uVar0);
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (iVar2 >= iVar4 && iVar2 < (uVar0[iVar3] + iVar4))
				{
					return iVar3;
				}
				iVar4 = (iVar4 + uVar0[iVar3]);
				iVar3++;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
}

int func_129(var uParam0)//Position - 0x98CC
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_13(bVar6, 1, 1))
			{
				iVar7 = PLAYER::GET_PLAYER_PED(bVar6);
				if (!PED::IS_PED_INJURED(iVar7))
				{
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (!func_131(iVar5))
						{
							if (func_130(iVar5, &Var2, &Var3))
							{
								if (ENTITY::IS_ENTITY_IN_AREA(iVar7, Var2, Var3, false, false, 0))
								{
									bVar4 = false;
									(*uParam0)[iVar5]++;
									iVar1++;
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (!func_131(iVar5))
			{
				(*uParam0)[iVar5] = 1;
			}
			iVar5++;
		}
	}
	return iVar1;
}

int func_130(int iParam0, var uParam1, var uParam2)//Position - 0x99A0
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 283f, -3946f, 0f };
			*uParam2 = { 4500f, 1924f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { -3747f, -3946f, 0f };
			*uParam2 = { 550f, 1868f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { -3747f, 1540f, 0f };
			*uParam2 = { 452.5f, 8022f, 0f };
			return 1;
		
		case 3:
			*uParam1 = { 268f, 1946f, 0f };
			*uParam2 = { 4500f, 8022f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

bool func_131(int iParam0)//Position - 0x9A50
{
	return (func_127(iParam0) && func_126(iParam0));
}

var func_132()//Position - 0x9A69
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_262145.f_11605 /* Tunable: CHECKPOINT_CHECKPOINT_PLAYER_THRESHOLD_3 */)
	{
		return Global_262145.f_11491 /* Tunable: CP_COLLECTION_MAX_ACTIVE_CHECKPOINTS_3 */;
	}
	if (iVar1 >= Global_262145.f_11604 /* Tunable: CHECKPOINT_CHECKPOINT_PLAYER_THRESHOLD_2 */)
	{
		return Global_262145.f_11490 /* Tunable: CP_COLLECTION_MAX_ACTIVE_CHECKPOINTS_2 */;
	}
	if (iVar1 >= Global_262145.f_11603 /* Tunable: CHECKPOINT_CHECKPOINT_PLAYER_THRESHOLD_1 */)
	{
		return Global_262145.f_10662 /* Tunable: CP_COLLECTION_MAX_ACTIVE_CHECKPOINTS */;
	}
	return Global_262145.f_10662 /* Tunable: CP_COLLECTION_MAX_ACTIVE_CHECKPOINTS */;
}

void func_133()//Position - 0x9AEF
{
	bool bVar0;
	
	if (func_34())
	{
		bVar0 = false;
		while (bVar0 < 10)
		{
			if (Local_132.f_713[bVar0] == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (func_134(bVar0))
				{
					if (!BitTest(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, bVar0))
					{
						MISC::SET_BIT(&(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), bVar0);
					}
				}
				else if (BitTest(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), bVar0);
				}
			}
			else if (BitTest(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, bVar0))
			{
				MISC::CLEAR_BIT(&(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), bVar0);
			}
			bVar0++;
		}
	}
}

int func_134(int iParam0)//Position - 0x9B98
{
	struct<3> Var0;
	var uVar1;
	
	if (func_32(iParam0, &Var0, &uVar1))
	{
		if (func_135(Var0, 10f, 1065353216, 5f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0x9BDD
{
	Global_2635559.f_2 = 0;
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
	Global_2635559.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (fParam12 > 0f)
	{
		if (func_140(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_136(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

int func_136(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x9CEF
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_13(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_138(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
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
		bVar1 = iVar0;
		if (func_13(bVar1, 1, 1))
		{
			if (!func_71(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_137(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_138(bVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_138(bVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1))
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

int func_137(bool bParam0)//Position - 0x9EA7
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657589[bParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

Vector3 func_138(bool bParam0)//Position - 0x9ED2
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_56() && Global_1853910[iVar0 /*862*/].f_832) && !func_139(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_31(bParam0);
}

int func_139(struct<3> Param0)//Position - 0x9F25
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_140(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)//Position - 0x9F4F
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam6 == 0)
		{
			if (func_13(bVar1, bParam2, bParam3))
			{
				if (iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_137(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_141(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_31(bVar1), Param0, true) < fParam1)
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

int func_141(bool bParam0)//Position - 0xA053
{
	if (func_144(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2764201 = { func_143(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2764201))
	{
		return 1;
	}
	if (func_142(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_142(bool bParam0, bool bParam1)//Position - 0xA09A
{
	int iVar0;
	
	iVar0 = func_84(bParam0);
	if (!iVar0 == func_103())
	{
		if (iVar0 == func_84(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_143(bool bParam0)//Position - 0xA0C5
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_144(bool bParam0, bool bParam1)//Position - 0xA0DC
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764201 = { func_143(bParam0) };
		Global_2764214 = { func_143(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764201))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764214))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764131, 35, &Global_2764201);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764166, 35, &Global_2764214);
				if (Global_2764131 == Global_2764166)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_145()//Position - 0xA149
{
	int iVar0;
	int iVar1;
	
	func_658();
	if (func_656())
	{
		func_535();
	}
	if (func_534(PLAYER::PLAYER_ID()) || func_533(PLAYER::PLAYER_ID()))
	{
		func_532();
	}
	if (!func_6(PLAYER::PLAYER_ID()) && !func_530(func_531(132)))
	{
		if (func_503(0, 1, 1))
		{
			if (BitTest(uLocal_97, 3))
			{
				MISC::CLEAR_BIT(&uLocal_97, 3);
			}
			switch (Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3)
			{
				case 0:
					if (Local_132.f_8 == 1)
					{
						func_502(1);
						func_501(1);
					}
					else if (Local_132.f_8 >= 2)
					{
						func_501(1);
					}
					break;
				
				case 1:
					func_497(6);
					if (Local_132.f_8 >= 2)
					{
						func_501(2);
					}
					func_497(2);
					func_495(0);
					func_493((Global_262145.f_11589 /* Tunable: CHECKPOINT_EVENT_START_COUNTDOWN_TIME */ - func_494(&(Local_132.f_667), 0, 0)));
					func_490(func_492((Global_262145.f_11589 /* Tunable: CHECKPOINT_EVENT_START_COUNTDOWN_TIME */ - func_494(&(Local_132.f_667), 0, 0)), 0), func_491(-1));
					func_471();
					break;
				
				case 2:
					if (Local_132.f_8 > 2)
					{
						func_502(0);
						func_452(132, 1065353216, 1065353216, 1, 0, 0, 0);
						if (!func_6(PLAYER::PLAYER_ID()))
						{
							func_451();
						}
						else
						{
							MISC::SET_BIT(&uLocal_97, 5);
						}
						if (Local_132.f_710)
						{
							func_450();
						}
						if (Local_132.f_707)
						{
							Global_2793044.f_5144 = 1;
						}
						else
						{
							Global_2793044.f_5144 = 0;
						}
						func_449();
						if (!func_6(PLAYER::PLAYER_ID()))
						{
							if (func_34())
							{
								func_434(678f, 794f, 206f, 8f, 0);
								func_434(1911.3f, 4714.6f, 41.1f, 8f, 0);
								func_434(688.5021f, 735.4581f, 181.296f, 8f, 0);
							}
						}
						func_501(3);
					}
					break;
				
				case 3:
					if (Local_132.f_8 > 3)
					{
						func_501(4);
					}
					else
					{
						if (!iLocal_117)
						{
							if (func_433())
							{
								iLocal_117 = 1;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_132.f_709)
						{
							if (uLocal_99[iVar1] || iLocal_117)
							{
								func_329(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uLocal_99[iLocal_93] = func_328(iLocal_93);
							uLocal_98[iLocal_93] = func_326(iLocal_93);
							if (!uLocal_98[iLocal_93])
							{
								func_329(iLocal_93);
							}
							iLocal_93++;
							if (iLocal_93 >= Local_132.f_709)
							{
								iLocal_93 = 0;
							}
							iVar0++;
						}
						func_495(0);
						func_497(4);
						func_497(5);
						if (func_324(0) && !func_323(0))
						{
							func_322();
						}
						if ((!func_321(PLAYER::PLAYER_ID()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							func_320();
						}
						func_319();
					}
					func_316();
					func_315();
					func_451();
					func_295();
					func_471();
					break;
				
				case 4:
					func_201();
					func_184();
					func_183();
					func_495(1);
					func_182();
					func_295();
					if (func_170(&uLocal_119, !BitTest(Local_132.f_2, 2)) || BitTest(Local_132.f_2, 2))
					{
						if (func_34())
						{
							func_501(5);
						}
						else
						{
							func_501(6);
						}
					}
					break;
				
				case 5:
					if (Local_132.f_8 > 5)
					{
						func_501(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_165();
		}
	}
	else
	{
		func_532();
		func_165();
	}
	func_152();
	func_147();
	func_146();
}

void func_146()//Position - 0xA4C8
{
	struct<2> Var0;
	int iVar1;
	
	if (func_34())
	{
		Var0 = { Local_132.f_729[iLocal_108 /*2*/] };
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
		{
			iVar1 = NETWORK::NET_TO_VEH(Var0.f_1);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iLocal_108++;
		if (iLocal_108 >= 10)
		{
			iLocal_108 = 0;
			iLocal_130 = iLocal_129;
			iLocal_129 = 0;
		}
	}
}

void func_147()//Position - 0xA535
{
	if (Local_132.f_8 == 5)
	{
		if (func_38(&(Local_132.f_669)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_132.f_729[iLocal_108 /*2*/].f_1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_108 /*2*/].f_1), false))
				{
					if (!BitTest(uLocal_127, iLocal_108))
					{
						MISC::SET_BIT(&uLocal_127, iLocal_108);
						iLocal_128[iLocal_108] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_128[iLocal_108], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_108 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_128[iLocal_108], "Time", 30f);
					}
					if ((30000 - func_494(&(Local_132.f_669), 0, 0)) >= 0)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_108 /*2*/].f_1), false))
						{
							func_497(3);
							iLocal_129 = 1;
						}
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_132.f_729[iLocal_108 /*2*/].f_1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_108 /*2*/].f_1));
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_132.f_729[iLocal_108 /*2*/].f_1), true, false, -1);
					}
				}
				else if (BitTest(uLocal_127, iLocal_108) && !AUDIO::HAS_SOUND_FINISHED(iLocal_128[iLocal_108]))
				{
					AUDIO::STOP_SOUND(iLocal_128[iLocal_108]);
				}
			}
			if (iLocal_130)
			{
				if (!func_101(PLAYER::PLAYER_ID()))
				{
					func_149(func_492((30000 - func_494(&(Local_132.f_669), 0, 0)), 0), "HTV_DESTR" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					func_148();
				}
			}
		}
	}
}

void func_148()//Position - 0xA6C7
{
	Global_1655472.f_1172 = 1;
}

void func_149(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xA6D7
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_151(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_150(7, iVar0);
		Global_1655472.f_4659[iVar0] = uParam0;
		StringCopy(&(Global_1655472.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_4659.f_172[iVar0] = iParam2;
		Global_1655472.f_4659.f_216[iVar0] = iParam3;
		Global_1655472.f_4659.f_183[iVar0] = iParam4;
		Global_1655472.f_4659.f_194[iVar0] = iParam5;
		Global_1655472.f_4659.f_249[iVar0] = iParam6;
		Global_1655472.f_4659.f_260[iVar0] = iParam7;
		Global_1655472.f_4659.f_205[iVar0] = iParam8;
		Global_1655472.f_4659.f_314[iVar0] = iParam9;
		Global_1655472.f_4659.f_325[iVar0] = iParam10;
		Global_1655472.f_4659.f_357[iVar0] = iParam11;
		Global_1655472.f_4659.f_238[iVar0] = iParam12;
		Global_1655472.f_4659.f_271[iVar0] = iParam13;
		Global_1655472.f_4659.f_368[iVar0] = iParam14;
		Global_1655472.f_4659.f_379[iVar0] = iParam15;
		Global_1655472.f_4659.f_390[iVar0] = iParam16;
		Global_1655472.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_150(int iParam0, int iParam1)//Position - 0xA834
{
	MISC::SET_BIT(&(Global_1655472.f_7009[iParam0]), iParam1);
}

int func_151(int iParam0, int iParam1)//Position - 0xA84D
{
	return BitTest(Global_1655472.f_7009[iParam0], iParam1);
}

void func_152()//Position - 0xA863
{
	char* sVar0;
	
	if (((func_13(PLAYER::PLAYER_ID(), 1, 1) && !func_6(PLAYER::PLAYER_ID())) && !func_533(PLAYER::PLAYER_ID())) && func_503(0, 1, 1))
	{
		if (Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 == 1)
		{
			if (Local_132.f_707)
			{
				sVar0 = "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			else
			{
				sVar0 = "CPC_TILEL" /* GXT: Checkpoints */;
			}
			if (func_34() && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_153("CPC_PREPAIR" /* GXT: Find an air vehicle and prepare for ~a~ in the ~a~. */, sVar0, func_164(), 0);
			}
			else
			{
				func_153("CPC_PREP" /* GXT: Prepare for ~a~ in the ~a~. */, sVar0, func_164(), 0);
			}
		}
		else
		{
			func_449();
		}
	}
	else
	{
		func_449();
	}
}

int func_153(char* sParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xA909
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 23)
	{
		return 0;
	}
	if (func_163(sParam0, sParam1, sParam2))
	{
		return 0;
	}
	func_157();
	Global_1574757 = 4;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	StringCopy(&(Global_1574757.f_32), sParam2, 64);
	func_156();
	func_155(bParam3);
	func_154();
	return 1;
}

void func_154()//Position - 0xA9C8
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_155(bool bParam0)//Position - 0xA9DB
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_156()//Position - 0xAA01
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_157()//Position - 0xAA26
{
	func_159();
	func_158(0);
}

void func_158(bool bParam0)//Position - 0xAA37
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_159()//Position - 0xAAC9
{
	if (!func_162())
	{
	}
	if (func_161())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_160();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_160()//Position - 0xAAF2
{
	switch (Global_1574757)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		default:
	}
}

int func_161()//Position - 0xAD64
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_162()//Position - 0xAD7A
{
	if (!func_161())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_160();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_163(char* sParam0, char* sParam1, char* sParam2)//Position - 0xADA0
{
	if (!func_161())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574757.f_16)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_1574757.f_32));
}

char* func_164()//Position - 0xAE1E
{
	switch (Local_132.f_712)
	{
		case 0:
			return "CPC_WARN0" /* GXT: South East */;
			break;
		
		case 1:
			return "CPC_WARN1" /* GXT: South West */;
			break;
		
		case 2:
			return "CPC_WARN2" /* GXT: North West */;
			break;
		
		case 3:
			return "CPC_WARN3" /* GXT: North East */;
			break;
	}
	return "";
}

void func_165()//Position - 0xAE70
{
	if (!BitTest(uLocal_97, 3))
	{
		iLocal_117 = 1;
		func_183();
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_495(1);
		func_169();
		func_167();
		MISC::SET_BIT(&uLocal_97, 3);
		func_166();
	}
}

void func_166()//Position - 0xAEA4
{
	Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_7 = 0;
}

void func_167()//Position - 0xAEBA
{
	if (Global_2644549.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_168();
	}
}

void func_168()//Position - 0xAED3
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644549.f_6))
	{
		if (!Global_2644549.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2644549 = { Var0 };
	Global_2644549.f_6 = -1;
}

void func_169()//Position - 0xAF30
{
	struct<6> Var0;
	
	if (Global_2635559.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635559.f_490 = { Var0 };
	}
}

int func_170(var uParam0, bool bParam1)//Position - 0xAF55
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_181()) && !(func_113(PLAYER::PLAYER_ID(), 0) && (func_109(PLAYER::PLAYER_ID()) || func_180(PLAYER::PLAYER_ID())))) && !func_178(PLAYER::PLAYER_ID())) && !func_177(PLAYER::PLAYER_ID()))
	{
		func_176();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_38(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836858.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2793044.f_4687), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_175(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_38(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_172();
				func_175(uParam0, 2);
			}
			break;
		
		case 2:
			func_172();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_171("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
				{
					HUD::CLEAR_HELP(true);
				}
				func_175(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2793044.f_4687), 1);
				func_175(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2793044.f_4687), 1);
			return 1;
	}
	return 0;
}

bool func_171(char* sParam0)//Position - 0xB0DE
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_172()//Position - 0xB0F1
{
	if (BitTest(Global_2793044.f_4687, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2793044.f_848, 2)) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75693) && !Global_60543) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2793044.f_4687), 1);
			func_174("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */, -1);
			func_173(1);
			MISC::CLEAR_BIT(&(Global_2793044.f_4687), 0);
		}
	}
}

void func_173(int iParam0)//Position - 0xB16D
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_181())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_174(char* sParam0, int iParam1)//Position - 0xB19A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

void func_175(var uParam0, int iParam1)//Position - 0xB1B1
{
	*uParam0 = iParam1;
}

void func_176()//Position - 0xB1BE
{
	Global_2696211 = 1;
}

int func_177(int iParam0)//Position - 0xB1CB
{
	if (iParam0 != func_103())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 4);
	}
	return 0;
}

int func_178(bool bParam0)//Position - 0xB1F0
{
	int iVar0;
	
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				iVar0 = func_179(Global_2657589[bParam0 /*466*/].f_321.f_7);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_179(int iParam0)//Position - 0xB245
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
	}
	return -1;
}

bool func_180(bool bParam0)//Position - 0xB6F9
{
	return func_108(bParam0, 19);
}

bool func_181()//Position - 0xB709
{
	return Global_2672505.f_2513[0 /*80*/].f_1 != 0;
}

void func_182()//Position - 0xB71F
{
	if (BitTest(Global_2793044.f_5062, 1))
	{
		MISC::CLEAR_BIT(&(Global_2793044.f_5062), 1);
	}
	if (Global_2793044.f_5062 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2793044.f_5062 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2793044.f_5072 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2793044.f_5072);
				Global_2793044.f_5072 = -1;
			}
		}
	}
}

void func_183()//Position - 0xB7BA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_132.f_709)
	{
		if (HUD::DOES_BLIP_EXIST(Local_115[iVar0 /*3*/]))
		{
			HUD::REMOVE_BLIP(&(Local_115[iVar0 /*3*/]));
			GRAPHICS::DELETE_CHECKPOINT(Local_115[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_105[iVar0] = 0;
		iVar0++;
	}
}

void func_184()//Position - 0xB819
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	
	if (!BitTest(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0) && (func_200() || BitTest(Local_132.f_2, 2)))
	{
		if (func_59(func_199()))
		{
			func_198();
		}
		if (!BitTest(Local_132.f_2, 2))
		{
			if (func_324(0))
			{
				if (func_323(0))
				{
					if (!BitTest(Local_132.f_2, 0))
					{
						sVar0 = "CPC_END" /* GXT: You won Checkpoints with a score of ~1~ */;
					}
					else
					{
						sVar0 = "CPC_ENDBONUS" /* GXT: You won Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
					}
					func_197(64, Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "AMCH_WIN" /* GXT: WINNER */, 1, 15000, -1082130432, 2, 0);
				}
				else
				{
					iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_132.f_674[0]);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
					{
						bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
						if (func_323(1))
						{
							if (!BitTest(Local_132.f_2, 0))
							{
								sVar0 = "CPC_2ND" /* GXT: You came second in Checkpoints with a score of ~1~ */;
							}
							else
							{
								sVar0 = "CPC_2NDBONUS" /* GXT: You came second in Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
							}
							func_197(67, Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "CPC_OVER" /* GXT: EVENT OVER */, 1, 15000, -1082130432, 2, 0);
						}
						else if (func_323(2))
						{
							if (!BitTest(Local_132.f_2, 0))
							{
								sVar0 = "CPC_3RD" /* GXT: You came third in Checkpoints with a score of ~1~ */;
							}
							else
							{
								sVar0 = "CPC_3RDBONUS" /* GXT: You came third in Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
							}
							func_197(67, Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "CPC_OVER" /* GXT: EVENT OVER */, 1, 15000, -1082130432, 2, 0);
						}
						else
						{
							if (BitTest(Local_132.f_2, 0) && Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11749 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
							{
								sVar0 = "CPC_LOSEBONUS" /* GXT: <C>~a~</C>~s~ won Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
							}
							else
							{
								sVar0 = "CPC_LOSE" /* GXT: <C>~a~</C>~s~ won Checkpoints with a score of ~1~ */;
							}
							sVar3 = PLAYER::GET_PLAYER_NAME(bVar2);
							if (func_85(bVar2, 1))
							{
								sVar3 = func_187(bVar2);
							}
							func_186(66, Local_1499[Local_132.f_674[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER" /* GXT: EVENT OVER */, 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_44(66, "CPC_OVER" /* GXT: EVENT OVER */, "CPC_NOWIN" /* GXT: No checkpoints were collected */, 1, 15000, 2, 1, 0);
			}
		}
		else
		{
			func_43("", "", 1);
		}
		MISC::SET_BIT(&(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 0);
		func_185(132);
	}
}

void func_185(int iParam0)//Position - 0xBA0E
{
	if (iParam0 == iParam0)
	{
	}
}

int func_186(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)//Position - 0xBA1D
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_106(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

char* func_187(bool bParam0)//Position - 0xBA90
{
	char* sVar0;
	bool bVar1;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_196(&(Global_1894573[bParam0 /*608*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1894573[bParam0 /*608*/].f_10.f_121 != Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121)
	{
		sVar0 = func_191(bParam0, 0);
		return sVar0;
	}
	if (((func_108(bParam0, 28) || func_108(PLAYER::PLAYER_ID(), 28)) || func_190(bParam0)) && !func_189(bParam0))
	{
		return func_191(bParam0, 0);
	}
	bVar1 = func_84(bParam0);
	if (bVar1 != func_103())
	{
		if (bVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_188() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_191(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_103())
	{
		sVar0 = func_196(&(Global_1894573[bVar1 /*608*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_191(bVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_188()//Position - 0xBB96
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_189(bool bParam0)//Position - 0xBBAC
{
	struct<13> Var0;
	
	Var0 = { func_143(bParam0) };
	if (func_188())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
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

int func_190(bool bParam0)//Position - 0xBBEC
{
	struct<13> Var0;
	
	if (bParam0 != func_103())
	{
		Var0 = { func_143(bParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_188() || MISC::IS_PROSPERO_VERSION())
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

char* func_191(bool bParam0, bool bParam1)//Position - 0xBC59
{
	if (!bParam1)
	{
		if (func_193(bParam0, 1))
		{
			return func_192();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /* GXT: An Organization */);
}

char* func_192()//Position - 0xBC80
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /* GXT: Motorcycle Club */);
}

bool func_193(bool bParam0, bool bParam1)//Position - 0xBC90
{
	return func_194(bParam0, bParam1, 1);
}

int func_194(int iParam0, bool bParam1, int iParam2)//Position - 0xBCA1
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_195(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_103() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_195(bool bParam0, int iParam1)//Position - 0xBCFD
{
	if (bParam0 != func_103())
	{
		if (Global_1894573[bParam0 /*608*/].f_10 != func_103())
		{
			if (Global_1894573[bParam0 /*608*/].f_10 == bParam0 && Global_1894573[bParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_196(var uParam0)//Position - 0xBD4C
{
	return uParam0;
}

int func_197(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xBD56
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_106(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_104(&(Var0.f_69), iParam8);
	}
	return func_45(&Var0);
}

void func_198()//Position - 0xBDD7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672505.f_2513[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
			func_104(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_199()//Position - 0xBE22
{
	return Global_2672505.f_2513[0 /*80*/].f_1;
}

var func_200()//Position - 0xBE36
{
	return BitTest(Global_1836858.f_1, 25);
}

void func_201()//Position - 0xBE47
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!BitTest(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 1))
	{
		if (func_6(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
			return;
		}
		if (func_533(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
			return;
		}
		if (Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11749 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
		{
			iVar3 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_132.f_1 - iLocal_95)) / 60f) / 1000f));
			if (iVar3 > Global_262145.f_11910 /* Tunable: PARTICIPATION_T_CAP */)
			{
				iVar3 = Global_262145.f_11910 /* Tunable: PARTICIPATION_T_CAP */;
			}
			else if (iVar3 < 1)
			{
				iVar3 = 1;
			}
			iVar2 = (func_294() * iVar3);
			iVar1 = (func_293() * iVar3);
		}
		else
		{
			func_291(0);
		}
		if (!BitTest(Local_132.f_2, 2))
		{
			if (Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11749 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
			{
				if (BitTest(Local_132.f_2, 0))
				{
					iVar0 = (iVar0 + SYSTEM::ROUND((IntToFloat(func_290()) * Global_262145.f_11921 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_CASH */)));
				}
			}
			if (func_323(0))
			{
				Local_1498.f_5 = 1;
				iVar1 = (iVar1 + SYSTEM::ROUND((IntToFloat(func_289()) * Global_262145.f_11922 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_RP */)));
			}
			if ((Local_132.f_674[0] != NETWORK::PARTICIPANT_ID_TO_INT() && Local_132.f_674[1] != NETWORK::PARTICIPANT_ID_TO_INT()) && Local_132.f_674[2] != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11749 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
				{
					func_291(1);
				}
			}
		}
		func_270(&iVar0, 1);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0)
		{
			if (func_269())
			{
				func_257(joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"), iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_1498.f_6 = iVar0;
		if (!Global_262145.f_11974 /* Tunable: CHECKPOINTS_DISABLE_SHARE_CASH */)
		{
			if (Local_1498.f_6 > 0)
			{
				func_256(8, Local_1498.f_6);
			}
		}
		Global_2696873 = iVar0;
		func_255();
		func_202(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CHALLENGES"), iVar1, 1, -1, 0, 0, 0);
		Local_1498.f_7 = (Local_1498.f_7 + iVar1);
		MISC::SET_BIT(&(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
	}
}

int func_202(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xC067
{
	return func_203(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_203(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xC089
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_213(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_209(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_204(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_204(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0xC11C
{
	struct<3> Var0;
	
	Var0 = { func_207(iParam0, 1) };
	if (iParam0 == func_206(PLAYER::PLAYER_PED_ID()))
	{
		func_205(1);
	}
	func_209(Var0, iParam1, 0, sParam2, iParam3);
}

void func_205(int iParam0)//Position - 0xC150
{
	Global_2672505.f_1681 = iParam0;
}

int func_206(int iParam0)//Position - 0xC161
{
	return iParam0;
}

Vector3 func_207(int iParam0, bool bParam1)//Position - 0xC16B
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_208(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_208(int iParam0)//Position - 0xC22F
{
	return iParam0;
}

void func_209(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xC239
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672505.f_1080[iVar0 /*30*/].f_6 == 0 || Global_2672505.f_1080[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672505.f_1080[iVar1 /*30*/] = { Param0 };
			Global_2672505.f_1080[iVar1 /*30*/].f_6 = 1;
			Global_2672505.f_1080[iVar1 /*30*/].f_4 = func_212(Global_2672505.f_1080[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672505.f_1080[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672505.f_1080[iVar1 /*30*/].f_3 = iParam1;
			Global_2672505.f_1080[iVar1 /*30*/].f_8 = iParam2;
			Global_2672505.f_1080[iVar1 /*30*/].f_9 = func_211();
			Global_2672505.f_1080[iVar1 /*30*/].f_10 = func_210();
			StringCopy(&(Global_2672505.f_1080[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2672505.f_1080[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_210()//Position - 0xC350
{
	if (Global_2672505.f_1681)
	{
		Global_2672505.f_1681 = 0;
		return 1;
	}
	Global_2672505.f_1681 = 0;
	return 0;
}

var func_211()//Position - 0xC37A
{
	var uVar0;
	
	uVar0 = Global_2672505.f_1683;
	Global_2672505.f_1683 = 1;
	return uVar0;
}

float func_212(struct<3> Param0, var uParam1, var uParam2)//Position - 0xC395
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_213(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xC42E
{
	var uVar0;
	
	uVar0 = func_214(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_214(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xC451
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_247();
	if (func_246(sParam2))
	{
	}
	if (func_245())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_243(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_242(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_240(0, &iVar1);
					break;
				
				case 3:
					func_240(1, &iVar1);
					break;
				
				case 1:
					func_238(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1961999)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_235(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_224((func_234(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 != -1)
				{
					func_235(1166, iVar1, -1);
				}
				func_219(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_215((func_217(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_215((func_217(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_215(int iParam0)//Position - 0xC5BC
{
	if (func_245())
	{
		Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5 = iParam0;
		func_216(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_216(int iParam0, int iParam1)//Position - 0xC5E7
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_217(bool bParam0)//Position - 0xC603
{
	if (bParam0 > -1)
	{
		if (func_13(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_218(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853910[bParam0 /*862*/].f_205.f_5;
			}
		}
		else
		{
			return func_218(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xC654
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

void func_219(int iParam0)//Position - 0xC672
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_143(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_222(func_223(&Var0));
			if (iVar1 == 0)
			{
				func_221(&Global_1665493, iParam0);
				func_220(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1665493);
			}
			else if (iVar1 == 1)
			{
				func_221(&Global_1665494, iParam0);
				func_220(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1665494);
			}
			else if (iVar1 == 2)
			{
				func_221(&Global_1665495, iParam0);
				func_220(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1665495);
			}
			else if (iVar1 == 3)
			{
				func_221(&Global_1665496, iParam0);
				func_220(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1665496);
			}
			else if (iVar1 == 4)
			{
				func_221(&Global_1665497, iParam0);
				func_220(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1665497);
			}
		}
	}
}

void func_220(int iParam0, int iParam1)//Position - 0xC746
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1665488 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1665491 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1665492 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1665493 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1665494 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1665495 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1665496 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1665497 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1665498 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1665499 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1665500 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1665501 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1665502 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1665503 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1665504 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_221(var uParam0, int iParam1)//Position - 0xC86B
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_222(int iParam0)//Position - 0xC87C
{
	if (iParam0 == Global_1665488)
	{
		return 0;
	}
	else if (iParam0 == Global_1665489)
	{
		return 1;
	}
	else if (iParam0 == Global_1665490)
	{
		return 2;
	}
	else if (iParam0 == Global_1665491)
	{
		return 3;
	}
	else if (iParam0 == Global_1665492)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_223(var* uParam0)//Position - 0xC8D9
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2694466;
		}
	}
	return Global_2694466;
}

void func_224(int iParam0, int iParam1, int iParam2)//Position - 0xC8FC
{
	if (func_245())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10070 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1665638[func_233(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == Global_1665638[func_233(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_232(PLAYER::PLAYER_ID()))
		{
			Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1 = iParam0;
			Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6 = func_230(iParam0, 1);
		}
		func_229(640, iParam0, -1, 1);
		func_228(641, func_230(iParam0, 1), -1, 1, 0);
		Global_1665638[func_233(-1)] = iParam0;
		func_225(-1109644434, 7, 0);
	}
}

void func_225(int iParam0, int iParam1, int iParam2)//Position - 0xCA22
{
	int iVar0;
	
	if (func_227(iParam1, iParam2))
	{
		iVar0 = func_226();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_226()//Position - 0xCA4F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_227(int iParam0, var uParam1)//Position - 0xCA84
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_228(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xCB0A
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_233(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_229(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xCB3A
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_233(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_233(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_233(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_233(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_233(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_233(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_233(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_233(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_233(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_233(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_233(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_233(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_233(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_233(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_233(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_233(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_233(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_233(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_233(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_233(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_233(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_233(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_233(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_233(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_233(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_233(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_233(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_233(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_233(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_233(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_233(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_233(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_233(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_233(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_233(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_233(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_233(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_233(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_233(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_233(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_233(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_233(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_233(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_233(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_233(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_233(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_233(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_233(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_233(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_233(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_233(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_233(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_233(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_233(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_233(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_230(int iParam0, bool bParam1)//Position - 0xD66C
{
	if (bParam1)
	{
	}
	return func_231(iParam0, 0);
}

int func_231(int iParam0, int iParam1)//Position - 0xD680
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_297010[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_297010[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_232(int iParam0)//Position - 0xD73F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2672505.f_1, iParam0);
	}
	return 1;
}

int func_233(int iParam0)//Position - 0xD761
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_234(int iParam0)//Position - 0xD795
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1665638[func_233(-1)];
			}
			else if (func_232(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_233(-1)];
	}
	return 0;
}

void func_235(int iParam0, int iParam1, int iParam2)//Position - 0xD7F2
{
	int iVar0;
	
	iVar0 = func_237(iParam0, func_233(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_236(iParam0))
	{
		func_228(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_229(iParam0, iVar0, iParam2, 1);
	}
}

int func_236(int iParam0)//Position - 0xD834
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_237(int iParam0, int iParam1, int iParam2)//Position - 0xDB04
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_233(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_238(int iParam0)//Position - 0xDB41
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(bVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_68(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_144(PLAYER::PLAYER_ID(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_239(*iParam0, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_239(*iParam0, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_239(int iParam0, int iParam1)//Position - 0xDC2D
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_240(bool bParam0, int iParam1)//Position - 0xDC4E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_13(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_144(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_13(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_241(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_144(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_239(*iParam1, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_239(*iParam1, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_241(bool bParam0, bool bParam1)//Position - 0xDD66
{
	return SYSTEM::VDIST(func_31(bParam0), func_31(bParam1));
	return 0f;
}

int func_242(int iParam0)//Position - 0xDD82
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_239(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_243(int iParam0)//Position - 0xDDB9
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_234(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_234(PLAYER::PLAYER_ID());
		}
	}
	if (func_244(8000, 0, 0) > 0)
	{
		if (func_244(8000, 0, 0) < (iParam0 + func_234(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_244(8000, 0, 0) - func_234(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_244(int iParam0, bool bParam1, int iParam2)//Position - 0xDE1D
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_297010[iParam0];
}

int func_245()//Position - 0xDE45
{
	return 1;
}

int func_246(char* sParam0)//Position - 0xDE4E
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

int func_247()//Position - 0xDE87
{
	int iVar0;
	
	if (func_254(PLAYER::PLAYER_ID()) || func_253(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10102 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10102 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_251() || func_248(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23282 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23282 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (Global_262145.f_7095 /* Tunable: JOB_RP_CAP */ > 30000)
	{
		iVar0 = 30000;
	}
	else
	{
		iVar0 = Global_262145.f_7095 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

int func_248(int iParam0)//Position - 0xDF1F
{
	return func_249(func_250(iParam0));
}

int func_249(int iParam0)//Position - 0xDF31
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_250(int iParam0)//Position - 0xDF4B
{
	if (func_113(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

bool func_251()//Position - 0xDF6E
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_56();
	}
	return func_252(Global_4718592.f_113724);
}

int func_252(int iParam0)//Position - 0xDF92
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5042[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_253(int iParam0)//Position - 0xDFCC
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_254(int iParam0)//Position - 0xDFE1
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

void func_255()//Position - 0xDFF6
{
	Global_2696210 = 1;
}

void func_256(int iParam0, int iParam1)//Position - 0xE003
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23997 /* Tunable: 277748102 */ == 0 || Global_262145.f_23997 /* Tunable: 277748102 */ == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23997 /* Tunable: 277748102 */ == 1)
			{
				Global_2793044.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7044 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7044 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2793044.f_284 = iParam1;
				Global_2793044.f_285 = 0;
			}
		}
	}
}

void func_257(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE075
{
	int iVar0;
	
	if (!func_269())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			if (iParam1 > 0 || Global_262145.f_28375 /* Tunable: 1103207774 */)
			{
				func_258(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_ROCKSTAR"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_258(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
			if (iParam1 > 0 || Global_262145.f_28375 /* Tunable: 1103207774 */)
			{
				func_258(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
			func_258(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_258(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE916
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_269())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_41()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_265(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_264(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_259(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xEAC3
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_260(iParam0);
	}
}

void func_260(int iParam0)//Position - 0xEAFB
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_269())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_263(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_261(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_261(var uParam0)//Position - 0xEB4F
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_262(&(uParam0->f_14));
	func_262(&(uParam0->f_14.f_13));
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

void func_262(var uParam0)//Position - 0xEC5B
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

int func_263(int iParam0)//Position - 0xECA3
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_264(int iParam0, int iParam1)//Position - 0xECCE
{
	Global_2697013 = iParam1;
	Global_2697012 = iParam0;
}

int func_265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0xECE2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_269())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_266(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_266(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0xEE1F
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -444617715;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_268(Var0.f_1);
	if ((Global_262145.f_24076 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24077 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24078 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_267();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_267()//Position - 0xEEB1
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_268(bool bParam0)//Position - 0xEEC1
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_269()//Position - 0xEED9
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_270(int iParam0, int iParam1)//Position - 0xEEF0
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_288())
		{
			if (func_287(0))
			{
				if (!func_286(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_285()))
					{
						if (func_284() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_284());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_282(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_275("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_285(), iVar0, 0, 0, 1);
						}
						func_274(20);
						func_271(func_285(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_271(bool bParam0, int iParam1, int iParam2)//Position - 0xEF90
{
	struct<8> Var0;
	
	if (func_13(bParam0, 0, 1))
	{
		Var0.f_0 = -1597942809;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_273(bParam0);
		func_272(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, func_268(bParam0));
	}
}

void func_272(var uParam0, var uParam1)//Position - 0xEFE6
{
	*uParam0 = Global_1923597.f_9;
	*uParam1 = Global_1923597.f_10;
}

var func_273(bool bParam0)//Position - 0xF000
{
	return Global_1894573[bParam0 /*608*/].f_510;
}

void func_274(int iParam0)//Position - 0xF014
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2793044.f_5225.f_7[iVar0]), iVar1);
}

int func_275(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0xF03D
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_61(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_280(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_276(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_276(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xF0D5
{
	int iVar0;
	
	if ((!func_279() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_71(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_277(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944061.f_5[iVar0 /*53*/] = iParam0;
		Global_1944061.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944061.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944061.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944061.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944061.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944061.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_277(int iParam0)//Position - 0xF1DD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944061 - 1))
	{
		if (iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1)
		{
			func_278(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944061++;
	if (Global_1944061 > 5)
	{
		Global_1944061 = 5;
		return Global_1944061;
	}
	return (Global_1944061 - 1);
}

void func_278(int iParam0)//Position - 0xF23F
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944061.f_5[iVar0 /*53*/] = { Global_1944061.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_279()//Position - 0xF278
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_280(char* sParam0)//Position - 0xF289
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_281(&cVar0);
}

var func_281(char[4] cParam0)//Position - 0xF2AD
{
	return cParam0;
}

void func_282(int iParam0, bool bParam1)//Position - 0xF2B7
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_283(1);
	}
	else
	{
		iVar1 = func_283(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_283(bool bParam0)//Position - 0xF2E9
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12865 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_284()//Position - 0xF30F
{
	return Global_262145.f_12864 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

bool func_285()//Position - 0xF31E
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

bool func_286(bool bParam0)//Position - 0xF333
{
	return func_193(PLAYER::PLAYER_ID(), bParam0);
}

bool func_287(bool bParam0)//Position - 0xF345
{
	return func_85(PLAYER::PLAYER_ID(), bParam0);
}

bool func_288()//Position - 0xF357
{
	return func_86(PLAYER::PLAYER_ID());
}

int func_289()//Position - 0xF367
{
	return Global_262145.f_11732 /* Tunable: CHECKPOINT_BONUS_RP */;
}

int func_290()//Position - 0xF376
{
	return Global_262145.f_11731 /* Tunable: CHECKPOINT_BONUS_CASH */;
}

void func_291(bool bParam0)//Position - 0xF385
{
	if (bParam0)
	{
		if (func_292(1))
		{
			MISC::SET_BIT(&Global_1836883, 1);
		}
	}
	else if (func_292(2))
	{
		MISC::SET_BIT(&Global_1836883, 2);
	}
}

int func_292(int iParam0)//Position - 0xF3B7
{
	var uVar0;
	
	uVar0 = func_237(2537, -1, 0);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_293()//Position - 0xF464
{
	return Global_262145.f_11751 /* Tunable: CHECKPOINT_MINIMUM_PARTICIPATION_RP */;
}

int func_294()//Position - 0xF473
{
	return Global_262145.f_11750 /* Tunable: CHECKPOINT_MINIMUM_PARTICIPATION_CASH */;
}

void func_295()//Position - 0xF482
{
	if (BitTest(uLocal_97, 5))
	{
		func_296();
	}
	func_535();
}

void func_296()//Position - 0xF499
{
	bool bVar0[3];
	bool bVar1;
	var uVar2[3];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[3];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (Local_132.f_674[0] > -1)
	{
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < 3)
		{
			bVar0[iVar7] = func_103();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_132.f_674[iVar7] > -1)
			{
				iVar12 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_132.f_674[iVar7]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar12))
				{
					bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar12);
					if (func_13(bVar1, 0, 1))
					{
						if (!func_71(bVar1, 0))
						{
							bVar0[iVar7] = bVar1;
							uVar2[iVar7] = Local_1499[Local_132.f_674[iVar7] /*5*/].f_4;
							if (func_287(1))
							{
								if (func_85(bVar1, 1))
								{
									uVar11[iVar7] = func_61(bVar1, -2, 0, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (func_101(PLAYER::PLAYER_ID()))
		{
			iVar13 = func_313();
			iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar13);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar14))
			{
				iVar15 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar14);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar15))
				{
					iVar8 = iVar15;
				}
			}
		}
		iVar3 = func_492(0, Local_132.f_708);
		iVar4 = Local_132.f_709;
		iVar5 = func_492(0, Local_1499[iVar8 /*5*/].f_4);
		iVar6 = func_492(0, (Global_262145.f_11588 /* Tunable: CHECKPOINT_EVENT_TIME_LIMIT */ - func_494(&(Local_132.f_661), 0, 0)));
		func_310(iVar6);
		if (iVar6 > 30000)
		{
			iVar10 = 1;
		}
		else
		{
			iVar10 = 6;
		}
		func_297(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar3, iVar4, iVar5, iVar6, &iVar9, iVar10, func_307(), uVar11[0], uVar11[1], uVar11[2]);
	}
}

void func_297(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)//Position - 0xF64B
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_304(0) == 0)
	{
		return;
	}
	func_303();
	iVar1 = 0;
	if (((Global_2695727[0] != iParam0 || Global_2695727[1] != iParam1) || Global_2695727[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2695727[0] = iParam0;
	Global_2695727[1] = iParam1;
	Global_2695727[2] = iParam2;
	Global_2695727[3] = 0;
	Global_2695727[4] = 0;
	if (Global_2695727[0] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[0]);
			Global_2695733[0 /*16*/] = { func_302(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_299(iParam3, &(Global_2695733[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695727[1] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[1]);
			Global_2695733[1 /*16*/] = { func_302(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_299(iParam4, &(Global_2695733[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695727[2] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695727[2]);
			Global_2695733[2 /*16*/] = { func_302(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_299(iParam5, &(Global_2695733[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	func_298(iParam6, iParam7, "HUD_CHECKPOINTS" /* GXT: REMAINING */, -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	if (func_533(PLAYER::PLAYER_ID()) == 0)
	{
		func_299(iParam8, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_246(sParam12))
	{
		sVar2 = sParam12;
	}
	func_149(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_148();
}

void func_298(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xF86C
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_151(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_150(4, iVar0);
		Global_1655472.f_3347[iVar0] = iParam0;
		Global_1655472.f_3347.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1655472.f_3347.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1655472.f_3347.f_183[iVar0] = iParam3;
		Global_1655472.f_3347.f_216[iVar0] = iParam5;
		Global_1655472.f_3347.f_194[iVar0] = iParam4;
		Global_1655472.f_3347.f_227[iVar0] = iParam6;
		Global_1655472.f_3347.f_270[iVar0] = iParam7;
		Global_1655472.f_3347.f_281[iVar0] = iParam8;
		Global_1655472.f_3347.f_292[iVar0] = iParam9;
		Global_1655472.f_3347.f_303[iVar0] = iParam10;
		Global_1655472.f_3347.f_314[iVar0] = iParam11;
		Global_1655472.f_3347.f_325[iVar0] = iParam13;
		Global_1655472.f_3347.f_336[iVar0] = iParam14;
		Global_1655472.f_3347.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1655472.f_1172 = 1;
		}
	}
}

void func_299(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0xF9C6
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
			if (func_151(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_150(6, iVar0);
		Global_1655472.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1655472.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_4041.f_183[iVar0] = iParam3;
		Global_1655472.f_4041.f_172[iVar0] = iParam2;
		Global_1655472.f_4041.f_260[iVar0] = iParam4;
		Global_1655472.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1655472.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1655472.f_4041.f_443[iVar0] = iParam7;
		Global_1655472.f_4041.f_454[iVar0] = iParam8;
		Global_1655472.f_4041.f_497[iVar0] = iParam9;
		Global_1655472.f_4041.f_508[iVar0] = iParam10;
		Global_1655472.f_4041.f_205[iVar0] = iParam11;
		Global_1655472.f_4041.f_216[iVar0] = iParam12;
		Global_1655472.f_4041.f_227[iVar0] = iParam13;
		Global_1655472.f_4041.f_238[iVar0] = iParam14;
		Global_1655472.f_4041.f_249[iVar0] = iParam15;
		Global_1655472.f_4041.f_519[iVar0] = iParam16;
		Global_1655472.f_4041.f_530[iVar0] = iParam17;
		Global_1655472.f_4041.f_541[iVar0] = iParam18;
		Global_1655472.f_4041.f_552[iVar0] = iParam19;
		Global_1655472.f_4041.f_563[iVar0] = iParam20;
		Global_1655472.f_4041.f_574[iVar0] = iParam21;
		Global_1655472.f_4041.f_585[iVar0] = iParam22;
		Global_1655472.f_4041.f_596[iVar0] = iParam23;
		Global_1655472.f_4041.f_607[iVar0] = iParam24;
		Global_1655472.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_301())
		{
			Global_1655472.f_1172 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1655472.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1655472.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1655472.f_1172 = 1;
			}
			if (func_300())
			{
				Global_1655472.f_1176 = 1;
			}
		}
	}
}

int func_300()//Position - 0xFC37
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_301()//Position - 0xFC5B
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_302(int iParam0, char* sParam1)//Position - 0xFC99
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIRST" /* GXT: 1st: */), 64);
			break;
		
		case 2:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSSECOND" /* GXT: 2nd: */), 64);
			break;
		
		case 3:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSTHIRD" /* GXT: 3rd: */), 64);
			break;
		
		case 4:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFOURTH" /* GXT: 4th: */), 64);
			break;
		
		case 5:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIFTH" /* GXT: 5th: */), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_303()//Position - 0xFD3B
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2696214 = 1;
}

int func_304(bool bParam0)//Position - 0xFD5E
{
	if (func_306())
	{
		return 0;
	}
	if (func_305())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_13(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_305()//Position - 0xFD95
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 != 0;
}

bool func_306()//Position - 0xFDAC
{
	return BitTest(Global_2621446, 12);
}

char* func_307()//Position - 0xFDBB
{
	return "HUD_COUNTDOWN" /* GXT: EVENT END */;
	switch (func_309(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG" /* GXT: MOVING TARGET END */;
		
		case 132:
			return "AET_CHK_COLL" /* GXT: CHECKPOINTS END */;
		
		case 133:
			switch (func_308())
			{
				case 0:
					return "AET_CHALL_LJ" /* GXT: LONGEST JUMP CHALLENGE END */;
				
				case 1:
					return "AET_CHALL_LS" /* GXT: LONGEST FREEFALL CHALLENGE END */;
				
				case 2:
					return "AET_CHALL_HS" /* GXT: HIGHEST SPEED CHALLENGE END */;
				
				case 3:
					return "AET_CHALL_LST" /* GXT: LONGEST STOPPIE CHALLENGE END */;
				
				case 4:
					return "AET_CHALL_LW" /* GXT: LONGEST WHEELIE CHALLENGE END */;
				
				case 5:
					return "AET_CHALL_NC" /* GXT: NO CRASHES CHALLENGE END */;
				
				case 6:
					return "AET_CHALL_LP" /* GXT: LOWEST PARACHUTE CHALLENGE END */;
				
				case 7:
					return "AET_CHALL_VS" /* GXT: VEHICLES STOLEN CHALLENGE END */;
				
				case 8:
					return "AET_CHALL_NM" /* GXT: NEAR MISSES CHALLENGE END */;
				
				case 9:
					return "AET_CHALL_RD" /* GXT: REVERSE DRIVING CHALLENGE END */;
				
				case 10:
					return "AET_CHALL_LF" /* GXT: LONGEST FALL SURVIVED CHALLENGE END */;
				
				case 11:
					return "AET_CHALL_LFL" /* GXT: LOW FLYING CHALLENGE END */;
				
				case 12:
					return "AET_CHALL_LFI" /* GXT: LOW FLYING INVERTED CHALLENGE END */;
				
				case 13:
					return "AET_CHALL_LB" /* GXT: LONGEST BAIL CHALLENGE END */;
				
				case 14:
					return "AET_CHALL_MB" /* GXT: MOST BRIDGES CHALLENGE END */;
				
				case 15:
					return "AET_CHALL_HSH" /* GXT: HEADSHOTS CHALLENGE END */;
				
				case 16:
					return "AET_CHALL_DB" /* GXT: DRIVE-BY CHALLENGE END */;
				
				case 17:
					return "AET_CHALL_ML" /* GXT: MELEE CHALLENGE END */;
				
				case 18:
					return "AET_CHALL_LSN" /* GXT: SNIPER KILLS CHALLENGE END */;
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED" /* GXT: PENNED IN END */;
		
		case 138:
			return "AET_PARCEL" /* GXT: HOLD THE WHEEL END */;
		
		case 139:
			return "AET_PROPERTY" /* GXT: HOT PROPERTY END */;
		
		case 140:
			return "AET_DDROP" /* GXT: DEAD DROP END */;
		
		case 141:
			return "AET_KCASTLE" /* GXT: KING OF THE CASTLE END */;
		
		case 144:
			return "AET_BLAST" /* GXT: CRIMINAL DAMAGE END */;
		
		case 129:
			return "AET_UWARF" /* GXT: KILL LIST END */;
		
		case 146:
			return "AET_BEAST" /* GXT: HUNT THE BEAST END */;
	}
	return "";
}

int func_308()//Position - 0xFF65
{
	if (func_309(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2793044.f_5146;
	}
	return -1;
}

int func_309(int iParam0)//Position - 0xFF88
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/];
	}
	return -1;
}

void func_310(int iParam0)//Position - 0xFFA7
{
	if (func_312(PLAYER::PLAYER_ID()) || func_311(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2793044.f_5062, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2793044.f_5064)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2793044.f_5064));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2793044.f_5072 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2793044.f_5072);
				Global_2793044.f_5072 = -1;
			}
			Global_2793044.f_5062 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2793044.f_5062, 0))
		{
			if (BitTest(Global_2793044.f_5062, 4))
			{
				if (!BitTest(Global_2793044.f_5062, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2793044.f_5064)))
						{
							StringCopy(&(Global_2793044.f_5064), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2793044.f_5062), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2793044.f_5062, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2793044.f_5062, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2793044.f_5062), 1);
			}
			else if (!BitTest(Global_2793044.f_5062, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2793044.f_5064), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2793044.f_5062), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2793044.f_5062, 3))
				{
					Global_2793044.f_5072 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2793044.f_5072, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2793044.f_5062), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2793044.f_5062, 0))
			{
				Global_2793044.f_5062 = 0;
				Global_2793044.f_5072 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2793044.f_5062), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2793044.f_5062, 2))
				{
					MISC::SET_BIT(&(Global_2793044.f_5062), 2);
					MISC::SET_BIT(&(Global_2793044.f_5062), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2793044.f_5062), 5);
					MISC::CLEAR_BIT(&(Global_2793044.f_5062), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2793044.f_5062, 0))
		{
			Global_2793044.f_5062 = 0;
			Global_2793044.f_5072 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2793044.f_5062), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2793044.f_5062), 2);
				MISC::SET_BIT(&(Global_2793044.f_5062), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2793044.f_5062), 2);
				MISC::CLEAR_BIT(&(Global_2793044.f_5062), 5);
			}
		}
	}
}

int func_311(bool bParam0)//Position - 0x1038B
{
	if (bParam0 != func_103() && func_13(bParam0, 1, 1))
	{
		return Global_2657589[bParam0 /*466*/].f_321.f_17;
	}
	return -1;
}

int func_312(bool bParam0)//Position - 0x103BC
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

var func_313()//Position - 0x10403
{
	if (ENTITY::DOES_ENTITY_EXIST(func_314()))
	{
		return func_314();
	}
	return func_98();
}

var func_314()//Position - 0x10421
{
	return Global_2621446.f_3;
}

void func_315()//Position - 0x1042F
{
	int iVar0;
	struct<42> Var1;
	bool bVar2;
	int iVar3;
	var uVar4;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_153.f_534[iVar0 /*42*/] = { Var1 };
		Local_153.f_534[iVar0 /*42*/].f_1 = func_103();
		if (Local_132.f_674[iVar0] > -1)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_132.f_674[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!func_71(bVar2, 0))
				{
					Local_153.f_534[iVar0 /*42*/] = Local_132.f_674[iVar0];
					Local_153.f_534[iVar0 /*42*/].f_1 = bVar2;
					uVar4 = Local_1499[Local_132.f_674[iVar0] /*5*/].f_4;
					Local_153.f_534[iVar0 /*42*/].f_9 = uVar4;
					Local_153.f_534[iVar0 /*42*/].f_31 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_316()//Position - 0x1051B
{
	if (Local_131.f_0 != -1 && Local_131.f_1 != -1)
	{
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_318() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
		{
			func_317(Local_131.f_1, Local_131.f_0, func_268(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
			Local_131.f_0 = -1;
			Local_131.f_1 = -1;
		}
	}
}

void func_317(int iParam0, int iParam1, int iParam2)//Position - 0x10572
{
	struct<4> Var0;
	
	Var0.f_0 = -1185502051;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_318()//Position - 0x105AA
{
	return -1;
}

void func_319()//Position - 0x105B3
{
	if (func_323(0))
	{
		if (!BitTest(uLocal_97, 4))
		{
			if (func_286(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&uLocal_97, 4);
		}
	}
	else if (BitTest(uLocal_97, 4))
	{
		if (func_286(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&uLocal_97, 4);
	}
}

void func_320()//Position - 0x1062F
{
	MISC::SET_BIT(&(Global_2793044.f_1827), 26);
}

int func_321(int iParam0)//Position - 0x10644
{
	if ((BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 9) && !(BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 6) && BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 7))) || ((BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 6) && !BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 7)) && !BitTest(Global_2657589[iParam0 /*466*/].f_73.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_322()//Position - 0x106CD
{
	MISC::SET_BIT(&(Global_2793044.f_1827), 19);
}

int func_323(int iParam0)//Position - 0x106E2
{
	if (iParam0 >= 0)
	{
		if (Local_132.f_674[iParam0] == NETWORK::PARTICIPANT_ID_TO_INT() && Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0)//Position - 0x10719
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_132.f_674[iParam0];
		if (iVar0 >= 0)
		{
			if (func_325(Local_1499[iVar0 /*5*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_325(int iParam0, int iParam1)//Position - 0x1074F
{
	return iParam0 > iParam1;
}

bool func_326(int iParam0)//Position - 0x1075C
{
	return func_327(PLAYER::PLAYER_PED_ID(), Local_132.f_10[iParam0 /*5*/], 1) < 500f;
}

float func_327(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x1077E
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

bool func_328(int iParam0)//Position - 0x107B8
{
	return func_327(PLAYER::PLAYER_PED_ID(), Local_132.f_10[iParam0 /*5*/], 1) < 750f;
}

void func_329(int iParam0)//Position - 0x107DA
{
	func_362(&(Local_115[iParam0 /*3*/]), Local_132.f_10[iParam0 /*5*/], iParam0);
	if (uLocal_98[iParam0])
	{
		func_357(Local_132.f_10[iParam0 /*5*/], iParam0);
		func_330(Local_132.f_10[iParam0 /*5*/], iParam0);
	}
}

void func_330(struct<4> Param0, var uParam1, int iParam2)//Position - 0x10825
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_3 == NETWORK::PARTICIPANT_ID_TO_INT() && !BitTest(uLocal_104[func_17(iParam2)], func_16(iParam2)))
	{
		Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4++;
		if (iLocal_95 == 0)
		{
			iLocal_95 = NETWORK::GET_NETWORK_TIME();
		}
		iVar0 = func_355(SYSTEM::CEIL((IntToFloat(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4) / func_356())));
		iVar1 = func_353(SYSTEM::CEIL((IntToFloat(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4) / func_354())));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_262145.f_11921 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_CASH */));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * Global_262145.f_11922 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_RP */));
		if (func_34())
		{
			iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * func_352()));
			iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * func_351()));
		}
		if (func_269())
		{
			func_257(joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"), iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_255();
		func_202(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
		iLocal_106 = (iLocal_106 + iVar0);
		Global_2696873 = iVar0;
		Local_1498.f_7 = (Local_1498.f_7 + iVar1);
		MISC::SET_BIT(&(uLocal_104[func_17(iParam2)]), func_16(iParam2));
		if (Local_1498.f_11 == 0)
		{
			Local_1498.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		func_331();
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", false);
	}
}

void func_331()//Position - 0x1098C
{
	if (!BitTest(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 2))
	{
		MISC::SET_BIT(&(Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 2);
		func_332(1);
	}
}

void func_332(bool bParam0)//Position - 0x109BA
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		{
			if (((!func_107(PLAYER::PLAYER_ID()) && !func_6(PLAYER::PLAYER_ID())) && !func_533(PLAYER::PLAYER_ID())) && !func_350(PLAYER::PLAYER_ID()))
			{
				if (func_349())
				{
					func_342(2, 0, 1);
					func_341();
				}
				if (func_530(func_531(func_309(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_237(2483, -1, 0);
					MISC::CLEAR_BIT(&uVar0, func_531(func_309(PLAYER::PLAYER_ID())));
					func_341();
				}
				if (func_340())
				{
					func_341();
				}
				if (func_309(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 7);
					if (func_339(PLAYER::PLAYER_ID()))
					{
						func_338();
					}
					func_335(func_337(func_309(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 7);
		func_333();
	}
}

void func_333()//Position - 0x10AC9
{
	if (func_334())
	{
		MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 17);
	}
}

bool func_334()//Position - 0x10AEB
{
	return BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 17);
}

void func_335(int iParam0)//Position - 0x10B03
{
	int iVar0;
	
	if (Global_262145.f_9036 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_336() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_336()//Position - 0x10B66
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_337(int iParam0)//Position - 0x10B73
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_338()//Position - 0x10BA5
{
	if (!func_334())
	{
		Global_2793044.f_6866 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 17);
	}
}

int func_339(int iParam0)//Position - 0x10BD3
{
	if (func_309(iParam0) == 236 || func_309(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_340()//Position - 0x10BFB
{
	if (Global_2672505.f_946.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_341()//Position - 0x10C15
{
	if (func_340())
	{
		Global_2672505.f_946.f_16 = 1;
	}
}

void func_342(int iParam0, int iParam1, bool bParam2)//Position - 0x10C2E
{
	if (func_349())
	{
		if (iParam1 == 1)
		{
			if (Global_2793044.f_4492 == -1)
			{
				Global_2793044.f_4492 = Global_262145.f_27184 /* Tunable: 945146471 */;
			}
			func_20(&(Global_2793044.f_4490), 0, 0);
			if (bParam2)
			{
				if (Global_2793044.f_4495 == -1)
				{
					Global_2793044.f_4495 = Global_262145.f_27185 /* Tunable: -29732167 */;
				}
				func_20(&(Global_2793044.f_4493), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8 = 0;
				func_348(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8 = 0;
			func_348(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_347()) && !func_343(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_343(int iParam0)//Position - 0x10CF8
{
	if (func_344(iParam0, 1, 0))
	{
		if (Global_1853910[iParam0 /*862*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_344(bool bParam0, bool bParam1, bool bParam2)//Position - 0x10D1D
{
	if (bParam1)
	{
		if (func_345(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[bParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_345(int iParam0)//Position - 0x10D4F
{
	return func_346(iParam0);
}

var func_346(int iParam0)//Position - 0x10D5D
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

bool func_347()//Position - 0x10D74
{
	return Global_2683862.f_841;
}

void func_348(bool bParam0)//Position - 0x10D83
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_349())
		{
			if (func_13(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_13(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_349()//Position - 0x10E7C
{
	return Global_1574582;
}

int func_350(int iParam0)//Position - 0x10E88
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2764905;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
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

float func_351()//Position - 0x10EF4
{
	return Global_262145.f_11734 /* Tunable: CHECKPOINT_AIR_CHECKPOINT_MULTIPLIER_RP */;
}

float func_352()//Position - 0x10F03
{
	return Global_262145.f_11733 /* Tunable: CHECKPOINT_AIR_CHECKPOINT_MULTIPLIER_CASH */;
}

var func_353(int iParam0)//Position - 0x10F12
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11745 /* Tunable: CHECKPOINT_SET_1_RP_VALUE */;
		
		case 2:
			return Global_262145.f_11746 /* Tunable: CHECKPOINT_SET_2_RP_VALUE */;
		
		case 3:
			return Global_262145.f_11747 /* Tunable: CHECKPOINT_SET_3_RP_VALUE */;
		
		case 4:
			return Global_262145.f_11748 /* Tunable: CHECKPOINT_SET_4_RP_VALUE */;
		
		default:
	}
	return Global_262145.f_11748 /* Tunable: CHECKPOINT_SET_4_RP_VALUE */;
}

float func_354()//Position - 0x10F68
{
	return Global_262145.f_11493 /* Tunable: CP_COLLECTION_RP_REWARD_CHECKPOINT_SPACER */;
}

var func_355(int iParam0)//Position - 0x10F77
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11735 /* Tunable: CHECKPOINT_SET_1CASH_VALUE */;
		
		case 2:
			return Global_262145.f_11736 /* Tunable: CHECKPOINT_SET_2_CASH_VALUE */;
		
		case 3:
			return Global_262145.f_11737 /* Tunable: CHECKPOINT_SET_3_CASH_VALUE */;
		
		case 4:
			return Global_262145.f_11738 /* Tunable: CHECKPOINT_SET_4_CASH_VALUE */;
		
		case 5:
			return Global_262145.f_11739 /* Tunable: CHECKPOINT_SET_5_CASH_VALUE */;
		
		case 6:
			return Global_262145.f_11740 /* Tunable: CHECKPOINT_SET_6_CASH_VALUE */;
		
		case 7:
			return Global_262145.f_11741 /* Tunable: CHECKPOINT_SET_7_CASH_VALUE */;
		
		case 8:
			return Global_262145.f_11742 /* Tunable: CHECKPOINT_SET_8_CASH_VALUE */;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_262145.f_11743 /* Tunable: CHECKPOINT_SET_9_CASH_VALUE */;
		
		default:
	}
	return Global_262145.f_11744 /* Tunable: CHECKPOINT_SET_10_CASH_VALUE */;
}

float func_356()//Position - 0x1102F
{
	return Global_262145.f_11492 /* Tunable: CP_COLLECTION_CASH_REWARD_CHECKPOINT_SPACER */;
}

void func_357(struct<3> Param0, var uParam1, var uParam2, int iParam3)//Position - 0x1103E
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!BitTest(Local_132.f_3[func_17(iParam3)], func_16(iParam3)))
	{
		if (!BitTest(uLocal_103[func_17(iParam3)], func_16(iParam3)))
		{
			if (func_34())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, false, true, 0))
			{
				if (func_358())
				{
					iLocal_102 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_132.f_9);
					if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_318() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
					{
						func_317(iLocal_102, iParam3, func_268(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
						Local_131.f_0 = -1;
						Local_131.f_1 = -1;
					}
					else
					{
						Local_131.f_0 = iParam3;
						Local_131.f_1 = iLocal_102;
					}
					MISC::SET_BIT(&(uLocal_103[func_17(iParam3)]), func_16(iParam3));
				}
			}
		}
		else if (func_1(&uLocal_109, 250, 0))
		{
			if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_318() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
			{
				func_317(iLocal_102, iParam3, func_268(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
				Local_131.f_1 = -1;
				Local_131.f_0 = -1;
			}
			else
			{
				Local_131.f_0 = iParam3;
				Local_131.f_1 = iLocal_102;
			}
			func_37(&uLocal_109);
		}
	}
}

int func_358()//Position - 0x11188
{
	if (!func_13(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (func_533(PLAYER::PLAYER_ID()))
	{
		if (((func_349() && !func_361()) || func_360(PLAYER::PLAYER_ID(), 21)) || func_360(PLAYER::PLAYER_ID(), 25))
		{
			func_497(0);
		}
		else
		{
			func_497(7);
		}
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_359(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return 0;
		}
	}
	if (func_71(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_34())
	{
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			func_497(1);
			return 0;
		}
	}
	return 1;
}

int func_359(int iParam0, bool bParam1)//Position - 0x11239
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

bool func_360(int iParam0, int iParam1)//Position - 0x112BE
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

bool func_361()//Position - 0x112D4
{
	return Global_1574582.f_1;
}

void func_362(int* iParam0, struct<3> Param1, var uParam2, var uParam3, int iParam4)//Position - 0x112E2
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	Var0 = { Param1 };
	HUD::GET_HUD_COLOUR(12, &iVar1, &iVar2, &iVar3, &uVar4);
	if (!BitTest(uLocal_103[func_17(iParam4)], func_16(iParam4)) && !BitTest(Local_132.f_3[func_17(iParam4)], func_16(iParam4)))
	{
		if (!HUD::DOES_BLIP_EXIST(*iParam0))
		{
			if (!func_432(Var0, 0f, 0f, 0f, 0) && !func_432(Var0, 0f, 0f, -2000f, 0))
			{
				*iParam0 = HUD::ADD_BLIP_FOR_COORD(Var0);
				HUD::SET_BLIP_SPRITE(*iParam0, 431);
				HUD::SET_BLIP_PRIORITY(*iParam0, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "CPC_BLIP" /* GXT: Checkpoint */);
				func_369(*iParam0, 25, 1152319488, 1137180672);
				func_367(iParam0, 12);
				HUD::SHOW_HEIGHT_ON_BLIP(*iParam0, true);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(*iParam0, 255);
		}
		else
		{
			func_369(*iParam0, 25, 1152319488, 1137180672);
		}
		if (uLocal_99[iParam4])
		{
			if (!BitTest(iLocal_105[func_17(iParam4)], func_16(iParam4)))
			{
				iVar5 = 54;
				if (func_34())
				{
					iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar5, Var0 + Vector(4f, 0f, 0f), Var0, 10f, iVar1, iVar2, iVar3, iParam0->f_2, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar5, Var0 + Vector(2.8f, 0f, 0f), Var0, 5f, iVar1, iVar2, iVar3, iParam0->f_2, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 5f, 5f, 100f);
				}
				MISC::SET_BIT(&(iLocal_105[func_17(iParam4)]), func_16(iParam4));
			}
			else
			{
				func_366(&(iParam0->f_1), &(iParam0->f_2));
			}
			func_365(&Param1);
		}
		else if (BitTest(iLocal_105[func_17(iParam4)], func_16(iParam4)))
		{
			if (func_364(&(iParam0->f_1), &(iParam0->f_2)))
			{
				GRAPHICS::DELETE_CHECKPOINT(iParam0->f_1);
				MISC::CLEAR_BIT(&(iLocal_105[func_17(iParam4)]), func_16(iParam4));
			}
		}
	}
	else if (BitTest(iLocal_105[func_17(iParam4)], func_16(iParam4)))
	{
		func_363(&(iParam0->f_1), &(iParam0->f_2), iParam0, iParam4);
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_363(var uParam0, var uParam1, int* iParam2, int iParam3)//Position - 0x1151F
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (*uParam0 != 0)
	{
		*uParam1 = (*uParam1 - 25);
		if (*uParam1 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
			GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
			GRAPHICS::DELETE_CHECKPOINT(*uParam0);
			*uParam0 = 0;
			MISC::CLEAR_BIT(&(iLocal_105[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

int func_364(var uParam0, var uParam1)//Position - 0x115A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	*uParam1 = (*uParam1 - 10);
	if (*uParam1 > 0)
	{
		HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_365(var uParam0)//Position - 0x115F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_34())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_139(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

int func_366(var uParam0, var uParam1)//Position - 0x11658
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_367(var uParam0, int iParam1)//Position - 0x116AA
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_368(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_368(int iParam0)//Position - 0x116D0
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

void func_369(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x11938
{
	HUD::SET_BLIP_ALPHA(iParam0, func_370(iParam0, iParam1, fParam2, fParam3));
}

int func_370(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x11952
{
	float fVar0;
	
	if (!func_321(Global_2672505) && !func_77())
	{
		fVar0 = func_375(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_371();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_371()//Position - 0x119A0
{
	if (func_372(Global_2672505, 1))
	{
		return 50;
	}
	return 0;
}

bool func_372(bool bParam0, bool bParam1)//Position - 0x119BA
{
	if (func_374() != 0)
	{
		return func_373(bParam0) != 0;
	}
	return func_344(bParam0, bParam1, 0);
}

int func_373(bool bParam0)//Position - 0x119E1
{
	if (func_13(bParam0, 0, 1))
	{
		return Global_2657589[bParam0 /*466*/].f_1;
	}
	return 0;
}

int func_374()//Position - 0x11A03
{
	return Global_32163;
}

float func_375(int iParam0, float fParam1, float fParam2)//Position - 0x11A0E
{
	bool bVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	bVar0 = Global_2672505;
	Var2 = { func_431(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1581962 || func_427())
	{
		if (func_426(bVar0))
		{
			Var3 = { func_378(bVar0) };
		}
		else if (func_377(bVar0))
		{
			Var3 = { func_376(bVar0) };
		}
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar0), false) };
	}
	Var3.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(Var3 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_376(bool bParam0)//Position - 0x11ABE
{
	int iVar0;
	
	if (func_377(bParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	return 0f, 0f, 0f;
}

int func_377(bool bParam0)//Position - 0x11AF2
{
	int iVar0;
	
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.2039f, 2954.8074f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_378(bool bParam0)//Position - 0x11B4E
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
	
	if (bParam0 == func_103())
	{
	}
	if (func_425(bParam0))
	{
		iVar0 = func_424(bParam0);
		if (iVar0 != func_103())
		{
			if (!func_423(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_253[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_253[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2657589[func_424(bParam0) /*466*/].f_321.f_12;
				}
			}
			else
			{
				iVar1 = func_420(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1950108.f_542[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_419(bParam0))
	{
		iVar2 = func_418(bParam0);
		if (iVar2 != func_103())
		{
			if (!func_417(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1968145[iVar2]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_1968145[iVar2], false);
				}
				else
				{
					return Global_2657589[func_424(bParam0) /*466*/].f_321.f_12;
				}
			}
			else
			{
				iVar3 = 160;
				if (!iVar3 == -1)
				{
					return Global_1950108.f_542[iVar3 /*3*/];
				}
			}
		}
	}
	else if (func_416(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_308))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2793044.f_308, false);
		}
	}
	else if (func_415(bParam0) && !func_414(bParam0))
	{
		iVar4 = Global_2657589[bParam0 /*466*/].f_321.f_10;
		if (iVar4 != func_103())
		{
			iVar5 = func_420(iVar4);
			if (!iVar5 == -1)
			{
				return Global_1950108.f_542[iVar5 /*3*/];
			}
		}
	}
	else if (func_413(bParam0) && !func_412(bParam0))
	{
		if (func_426(bParam0) && func_411())
		{
			return Global_1950108.f_542[Global_2657589[bParam0 /*466*/].f_321.f_7 /*3*/];
		}
		iVar6 = Global_2657589[bParam0 /*466*/].f_321.f_10;
		if (iVar6 != func_103())
		{
			if (func_410(iVar6))
			{
				iVar7 = func_407(iVar6);
				if (iVar7 != -1)
				{
					return Global_1950108.f_542[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_406(bParam0))
	{
		iVar8 = func_405(bParam0);
		if (iVar8 != func_103())
		{
			if (!func_404(iVar8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_350[iVar8]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_350[iVar8], false);
				}
				else
				{
					return Global_2657589[func_405(bParam0) /*466*/].f_321.f_20;
				}
			}
			else
			{
				iVar9 = func_407(iVar8);
				if (!iVar9 == -1)
				{
					return Global_1950108.f_542[iVar9 /*3*/];
				}
			}
		}
	}
	else if (func_403(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_310))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2793044.f_310, false);
		}
	}
	else if (func_402(bParam0) && !func_401(bParam0))
	{
		iVar10 = Global_2657589[bParam0 /*466*/].f_321.f_10;
		if (iVar10 != func_103())
		{
			if (func_400(iVar10))
			{
				iVar11 = func_397(iVar10);
				if (iVar11 != -1)
				{
					return func_396(iVar11);
				}
			}
		}
	}
	else if (func_395(bParam0) && !func_394(bParam0))
	{
		iVar12 = Global_2657589[bParam0 /*466*/].f_321.f_10;
		if (iVar12 != func_103())
		{
			if (func_393(iVar12))
			{
				iVar13 = func_390(iVar12);
				if (iVar13 != -1)
				{
					return Global_1950108.f_542[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_389(bParam0, 0))
	{
		iVar14 = func_388(bParam0);
		if (iVar14 != func_103())
		{
			if (!func_387(iVar14))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_383[iVar14]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_383[iVar14], false);
				}
				else
				{
					return Global_1894573[func_388(bParam0) /*608*/].f_590;
				}
			}
			else
			{
				iVar15 = func_390(iVar14);
				if (!iVar15 == -1)
				{
					return Global_1950108.f_542[iVar15 /*3*/];
				}
			}
		}
	}
	else if (func_386(bParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_385(bParam0))
	{
		iVar16 = func_383(bParam0);
		if (iVar16 != func_103())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_416[iVar16]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_416[iVar16], false);
			}
			else
			{
				return Global_1914091[iVar16 /*297*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_402(bParam0))
	{
		return func_396(Global_2657589[bParam0 /*466*/].f_321.f_7);
	}
	if (func_379(bParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1950108.f_542[Global_2657589[bParam0 /*466*/].f_321.f_7 /*3*/];
}

int func_379(bool bParam0)//Position - 0x1203D
{
	if (((func_382(bParam0) || func_381(bParam0)) || func_380(bParam0)) || func_312(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_380(bool bParam0)//Position - 0x12077
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_381(bool bParam0)//Position - 0x120BE
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_382(bool bParam0)//Position - 0x12105
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

bool func_383(bool bParam0)//Position - 0x1214C
{
	int iVar0;
	
	if (bParam0 == func_103())
	{
		return bParam0;
	}
	if (func_384(bParam0) != -1)
	{
		iVar0 = func_179(func_384(bParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_85(bParam0, 0))
			{
				return func_84(bParam0);
			}
			return bParam0;
		}
		else if (iVar0 == 3)
		{
			return func_103();
		}
		return Global_2657589[bParam0 /*466*/].f_321.f_10;
	}
	return func_103();
}

int func_384(bool bParam0)//Position - 0x121DB
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			return Global_2657589[bParam0 /*466*/].f_321.f_7;
		}
		else if (((Global_1575060 || Global_2635559.f_2680) && bParam0 == PLAYER::PLAYER_ID()) && func_13(bParam0, 1, 0))
		{
			return Global_2657589[bParam0 /*466*/].f_321.f_7;
		}
	}
	return -1;
}

int func_385(bool bParam0)//Position - 0x1224A
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 20;
			}
		}
		else if (((Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_1575060) && bParam0 == PLAYER::PLAYER_ID()) && func_13(bParam0, 1, 0))
		{
			return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 20;
		}
	}
	return 0;
}

int func_386(bool bParam0)//Position - 0x122E1
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

int func_387(int iParam0)//Position - 0x12328
{
	if (iParam0 != func_103())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_3, 4);
	}
	return 0;
}

bool func_388(bool bParam0)//Position - 0x1234D
{
	if (bParam0 == func_103())
	{
		return bParam0;
	}
	return Global_2657589[bParam0 /*466*/].f_321.f_10;
}

int func_389(bool bParam0, bool bParam1)//Position - 0x12371
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[bParam0 /*466*/].f_321.f_10 != func_103())
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_390(int iParam0)//Position - 0x123FF
{
	int iVar0;
	
	if (iParam0 != func_103())
	{
		iVar0 = func_392(iParam0);
		if (iVar0 != 0)
		{
			return func_391(iVar0);
		}
	}
	return -1;
}

int func_391(int iParam0)//Position - 0x12428
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_392(int iParam0)//Position - 0x124A6
{
	if (iParam0 != func_103())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_310;
	}
	return 0;
}

int func_393(int iParam0)//Position - 0x124CA
{
	if (iParam0 != func_103())
	{
		if (Global_1853910[iParam0 /*862*/].f_267.f_310 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_394(bool bParam0)//Position - 0x124F3
{
	if (bParam0 != func_103())
	{
		if (func_395(bParam0) && Global_2657589[bParam0 /*466*/].f_321.f_10 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_395(bool bParam0)//Position - 0x12528
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_396(int iParam0)//Position - 0x1256F
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1950108.f_542[iParam0 /*3*/];
}

int func_397(int iParam0)//Position - 0x1267B
{
	int iVar0;
	
	if (iParam0 != func_103())
	{
		iVar0 = func_399(iParam0);
		if (iVar0 != 0)
		{
			return func_398(iVar0);
		}
	}
	return -1;
}

int func_398(int iParam0)//Position - 0x126A4
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_399(int iParam0)//Position - 0x12722
{
	if (iParam0 != func_103())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_353;
	}
	return 0;
}

int func_400(int iParam0)//Position - 0x12746
{
	if (iParam0 != func_103())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_353 != 0;
	}
	return 0;
}

int func_401(bool bParam0)//Position - 0x1276C
{
	if (bParam0 != func_103())
	{
		if (func_402(bParam0) && Global_2657589[bParam0 /*466*/].f_321.f_10 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_402(bool bParam0)//Position - 0x127A1
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_403(bool bParam0)//Position - 0x127E8
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_404(int iParam0)//Position - 0x1282F
{
	if (iParam0 != func_103())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_2, 6);
	}
	return 0;
}

bool func_405(bool bParam0)//Position - 0x12854
{
	if (bParam0 == func_103())
	{
		return bParam0;
	}
	return Global_2657589[bParam0 /*466*/].f_321.f_10;
}

int func_406(bool bParam0)//Position - 0x12878
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[bParam0 /*466*/].f_321.f_10 != func_103())
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_407(int iParam0)//Position - 0x128D8
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return -1;
	}
	iVar0 = func_409(iParam0);
	if (!iVar0 == 0)
	{
		return func_408(iVar0);
	}
	return -1;
}

int func_408(int iParam0)//Position - 0x12907
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_409(int iParam0)//Position - 0x12995
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return Global_1853910[iParam0 /*862*/].f_267.f_300;
}

int func_410(int iParam0)//Position - 0x129B9
{
	if (iParam0 != func_103())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_300 != 0;
	}
	return 0;
}

int func_411()//Position - 0x129DF
{
	if (BitTest(Global_1950108.f_2, 13) || Global_1950108.f_3347)
	{
		return 1;
	}
	return 0;
}

int func_412(bool bParam0)//Position - 0x12A05
{
	if (bParam0 == func_103())
	{
		return 0;
	}
	if (func_413(bParam0) && Global_2657589[bParam0 /*466*/].f_321.f_10 == bParam0)
	{
		return 1;
	}
	return 0;
}

int func_413(bool bParam0)//Position - 0x12A3E
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_414(bool bParam0)//Position - 0x12A85
{
	if (bParam0 == func_103())
	{
		return 0;
	}
	if (func_415(bParam0) && Global_2657589[bParam0 /*466*/].f_321.f_10 == bParam0)
	{
		return 1;
	}
	return 0;
}

int func_415(bool bParam0)//Position - 0x12ABE
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 4;
			}
		}
	}
	return 0;
}

int func_416(bool bParam0)//Position - 0x12B04
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_417(int iParam0)//Position - 0x12B4A
{
	if (iParam0 != func_103())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 26);
	}
	return 0;
}

bool func_418(bool bParam0)//Position - 0x12B70
{
	if (bParam0 == func_103())
	{
		return bParam0;
	}
	return Global_2657589[bParam0 /*466*/].f_321.f_10;
}

int func_419(bool bParam0)//Position - 0x12B94
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[bParam0 /*466*/].f_321.f_10 != func_103())
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_420(int iParam0)//Position - 0x12BF4
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return -1;
	}
	iVar0 = func_422(iParam0);
	if (!iVar0 == 0)
	{
		return func_421(iVar0);
	}
	return -1;
}

int func_421(int iParam0)//Position - 0x12C23
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 32:
			return 159;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_422(int iParam0)//Position - 0x12DF3
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return Global_1853910[iParam0 /*862*/].f_267.f_193[5 /*13*/];
}

int func_423(int iParam0)//Position - 0x12E19
{
	if (iParam0 != func_103())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 6);
	}
	return 0;
}

bool func_424(bool bParam0)//Position - 0x12E3C
{
	if (bParam0 == func_103())
	{
		return bParam0;
	}
	return Global_2657589[bParam0 /*466*/].f_321.f_10;
}

int func_425(bool bParam0)//Position - 0x12E60
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[bParam0 /*466*/].f_321.f_10 != func_103())
			{
				return func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_426(bool bParam0)//Position - 0x12EBF
{
	if (bParam0 != func_103())
	{
		if (func_13(bParam0, 1, 1))
		{
			return Global_2657589[bParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && bParam0 == PLAYER::PLAYER_ID()) && func_13(bParam0, 1, 0))
		{
			return Global_2657589[bParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_427()//Position - 0x12F25
{
	if ((func_430() || func_429()) || func_428(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x12F51
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return BitTest(Global_1890444[iParam0 /*129*/].f_29, 20);
}

var func_429()//Position - 0x12F73
{
	return BitTest(Global_1962976, 1);
}

bool func_430()//Position - 0x12F81
{
	return BitTest(Global_1962996, 5);
}

Vector3 func_431(int iParam0)//Position - 0x12F8F
{
	int iVar0;
	
	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

bool func_432(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x12FD8
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_433()//Position - 0x1301F
{
	if (func_321(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(uLocal_97, 2))
		{
			MISC::SET_BIT(&uLocal_97, 2);
			return 1;
		}
	}
	else if (BitTest(uLocal_97, 2))
	{
		MISC::CLEAR_BIT(&uLocal_97, 2);
		return 1;
	}
	return 0;
}

int func_434(struct<3> Param0, float fParam1, int iParam2)//Position - 0x1305B
{
	int iVar0;
	
	iVar0 = -1;
	if (func_448() < 10)
	{
		iVar0 = func_447();
		func_435(Param0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_435(struct<3> Param0, var uParam1, int iParam2, var uParam3)//Position - 0x13088
{
	func_436(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_436(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x130A2
{
	struct<12> Var0;
	
	if (func_444(PLAYER::PLAYER_ID()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_443(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_438(Var0))
		{
			Global_2635559.f_45.f_64 = func_373(PLAYER::PLAYER_ID());
			func_437(Var0, iParam4);
		}
	}
}

void func_437(struct<12> Param0, int iParam1)//Position - 0x13118
{
	Global_2635559.f_368[iParam1 /*12*/] = { Param0 };
	Global_2635559.f_368[iParam1 /*12*/].f_9 = 1;
}

int func_438(struct<12> Param0)//Position - 0x13141
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2635559.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_439(Global_2635559.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_439(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x131A1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_442(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_440(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_442(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_440(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_440(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x132DA
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.70710677f);
	Var0 = { Param2 - Vector(fVar2, fVar2, fVar2) };
	Var1 = { Param2 + Vector(fVar2, fVar2, fVar2) };
	return func_441(Param0, Param1, Var0, Var1);
}

int func_441(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0x1331E
{
	if (((((Param0.f_0 >= Param2.f_0 && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.f_0 <= Param3.f_0) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_442(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0x13375
{
	struct<3> Var0;
	
	Var0 = { Param2 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_443(var uParam0, var uParam1)//Position - 0x133A0
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var1.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var1.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var1.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var1.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var1.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var1.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var1 };
}

int func_444(bool bParam0)//Position - 0x13437
{
	if (((func_372(bParam0, 1) || func_446(bParam0)) || func_113(bParam0, 0)) || func_445(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_445(bool bParam0)//Position - 0x13473
{
	if (!func_13(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2);
}

int func_446(bool bParam0)//Position - 0x1349B
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/] != -1;
	}
	return 0;
}

int func_447()//Position - 0x134BC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2635559.f_368[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_448()//Position - 0x134EE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635559.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_449()//Position - 0x13521
{
	if (!func_161())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_157();
}

void func_450()//Position - 0x1354E
{
	Global_1945089 = 1;
	if (!BitTest(Global_2802658, 0))
	{
		MISC::SET_BIT(&Global_2802658, 0);
		MISC::SET_BIT(&Global_1945090, 0);
	}
	if (!BitTest(Global_2802658, 1))
	{
		MISC::SET_BIT(&Global_2802658, 1);
		MISC::SET_BIT(&Global_1945090, 1);
	}
	if (!BitTest(Global_2802658, 5))
	{
		MISC::SET_BIT(&Global_2802658, 5);
		MISC::SET_BIT(&Global_1945090, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, false);
	}
}

void func_451()//Position - 0x13657
{
	char* sVar0;
	
	if (!BitTest(uLocal_97, 5) && !HUD::IS_RADAR_HIDDEN())
	{
		if (Local_132.f_707)
		{
			sVar0 = "CPC_TITLEA" /* GXT: AIR CHECKPOINTS */;
		}
		else
		{
			sVar0 = "CPC_TITLE" /* GXT: CHECKPOINTS */;
		}
		func_44(63, sVar0, "CPC_START" /* GXT: Compete to collect the most checkpoints in the given time */, func_58(), -1, func_58(), 1, 0);
		HUD::FLASH_MINIMAP_DISPLAY();
		MISC::SET_BIT(&uLocal_97, 5);
	}
}

void func_452(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x136AC
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2793044.f_5072 = -1;
	bVar0 = (func_113(PLAYER::PLAYER_ID(), 0) && func_109(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_469(func_470(iParam0), 1);
	}
	else
	{
		func_468(iParam0, -1);
		if (func_7(PLAYER::PLAYER_ID()))
		{
			Global_1836858.f_3 = iParam0;
		}
		else
		{
			func_467(iParam0);
		}
		Global_1836858.f_4 = -1;
		if (func_7(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836858.f_1), 5);
		}
		if (((func_349() && !func_361()) || func_360(PLAYER::PLAYER_ID(), 21)) || func_360(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836858.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 17);
		MISC::SET_BIT(&(Global_1836858.f_1), 20);
		if (func_466(iParam0))
		{
			func_465();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_462(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (func_460(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836858.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_4585348)
			{
				func_458(1);
				if (func_292(0))
				{
					MISC::SET_BIT(&(Global_1836858.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836858.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_456(1);
			MISC::SET_BIT(&(Global_1836858.f_1), 12);
		}
		if (bParam5)
		{
			func_455();
			MISC::SET_BIT(&(Global_1836858.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_453(iParam0))
			{
				MISC::SET_BIT(&(Global_1836858.f_1), 21);
			}
		}
	}
	Global_2764092 = 1;
}

int func_453(int iParam0)//Position - 0x13890
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_123(iParam0) == 1)
	{
		return 1;
	}
	if (func_454())
	{
		return 1;
	}
	return 0;
}

int func_454()//Position - 0x138FF
{
	switch (func_308())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_455()//Position - 0x1392D
{
	MISC::SET_BIT(&(Global_2793044.f_5063), 0);
}

void func_456(bool bParam0)//Position - 0x13941
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100733.f_8 = 1;
	}
	else
	{
		Global_100733.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_457(iVar0);
		iVar0++;
	}
}

void func_457(int iParam0)//Position - 0x13978
{
	Global_100733.f_202[iParam0] = 1;
	Global_100733.f_201 = 1;
}

void func_458(int iParam0)//Position - 0x13992
{
	if (func_459() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_4585348)
	{
		return;
	}
	Global_4585348 = iParam0;
	Global_4585350 = 0;
	Global_4585351 = 0;
}

int func_459()//Position - 0x139C7
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_460(int iParam0)//Position - 0x13A0D
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_461(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_461(bool bParam0)//Position - 0x13A4B
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

void func_462(float fParam0)//Position - 0x13A6E
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_463())
	{
		return;
	}
	fVar0 = (Global_2793044.f_5220 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2793044.f_5221))
	{
		if (!Global_2793044.f_5221 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2793044.f_5220 = fParam0;
	Global_2793044.f_5221 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_463()//Position - 0x13ADA
{
	switch (func_374())
	{
		case 0:
			return func_464();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_464()//Position - 0x13B0D
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_465()//Position - 0x13B31
{
	Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_210 = 0;
	MISC::CLEAR_BIT(&(Global_2793044.f_4660), 1);
}

int func_466(int iParam0)//Position - 0x13B53
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_467(int iParam0)//Position - 0x13B6D
{
	Global_1894573[PLAYER::PLAYER_ID() /*608*/] = iParam0;
}

void func_468(int iParam0, int iParam1)//Position - 0x13B82
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_530(func_531(iVar0)))
		{
			MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 2);
		}
	}
}

void func_469(bool bParam0, bool bParam1)//Position - 0x13BDD
{
	if (bParam1)
	{
		if (!BitTest(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
	}
}

int func_470(int iParam0)//Position - 0x13C3A
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

void func_471()//Position - 0x13C60
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	struct<3> Var10;
	float fVar11;
	
	if (func_13(PLAYER::PLAYER_ID(), 1, 1))
	{
		if ((!func_305() && !func_489(PLAYER::PLAYER_ID(), 0, -1)) && !func_488(PLAYER::PLAYER_ID()))
		{
			fVar3 = 2.1474836E+09f;
			iVar4 = -1;
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			bVar7 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			bVar8 = func_487();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				iVar9 = Local_132.f_729[iVar2 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar9) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iVar9), false))
				{
					if (!bVar8)
					{
						if (bVar7 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == NETWORK::NET_TO_VEH(iVar9))
						{
							func_332(1);
						}
					}
					if (func_32(iVar2, &Var0, &uVar1))
					{
						Var10 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar9), true) };
						if (SYSTEM::VDIST(Var10, Var0) <= 10f)
						{
							if (func_486(Var10))
							{
								MISC::SET_BIT(&uVar5, iVar2);
							}
							if (func_484(Var10, Var6))
							{
								if (!func_482(Var0, 100f))
								{
									fVar11 = SYSTEM::VDIST(Var10, Var6);
									if (fVar11 < fVar3)
									{
										fVar3 = fVar11;
										iVar4 = iVar2;
									}
								}
							}
						}
					}
				}
				iVar2++;
			}
			Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_7 = uVar5;
			if ((PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 > 0)
			{
				if ((fVar3 < 2.1474836E+09f && iVar4 >= 0) && iVar4 < 10)
				{
					if (func_32(iVar4, &Var0, &uVar1))
					{
						iLocal_118 = 1;
						func_481(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
						func_480(Var0, 1, 0);
						func_473(10, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_472();
			}
		}
		else
		{
			func_472();
		}
	}
}

void func_472()//Position - 0x13E68
{
	if (iLocal_118)
	{
		func_169();
		func_167();
		iLocal_118 = 0;
	}
}

void func_473(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x13E82
{
	if (Global_2672505.f_1684.f_703.f_16 != func_103())
	{
		if (BitTest(Global_2657589[Global_2672505.f_1684.f_703.f_16 /*466*/].f_427, 0) && func_474())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643290 = 0;
	}
	Global_2635559.f_490 = iParam0;
	Global_2635559.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635559.f_490.f_2 = iParam1;
	Global_2635559.f_490.f_3 = iParam2;
	Global_2635559.f_490.f_4 = iParam3;
	Global_2635559.f_490.f_5 = iParam4;
}

int func_474()//Position - 0x13F1E
{
	if ((((((func_250(PLAYER::PLAYER_ID()) == 229 || func_250(PLAYER::PLAYER_ID()) == 191) || func_479()) || func_478()) || func_477()) || Global_2764906.f_227 == 1) || (Global_2635559.f_1753 && func_475(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_475(int iParam0)//Position - 0x13F90
{
	if (func_476(iParam0))
	{
		return 1;
	}
	if (func_107(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_476(bool bParam0)//Position - 0x13FB3
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 7);
	}
	return 0;
}

bool func_477()//Position - 0x13FD6
{
	return Global_2764905;
}

bool func_478()//Position - 0x13FE2
{
	return Global_1836591;
}

int func_479()//Position - 0x13FEE
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_480(struct<3> Param0, int iParam1, int iParam2)//Position - 0x14004
{
	Global_2635559.f_45.f_49 = { Param0 };
	Global_2635559.f_45.f_52 = iParam1;
	Global_2635559.f_45.f_53 = iParam2;
}

void func_481(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1402E
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644549.f_6))
	{
		if (!Global_2644549.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2644549.f_6))
	{
		Global_2644549.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2644549.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_444(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2644549 = { Var0 };
}

bool func_482(struct<3> Param0, float fParam1)//Position - 0x14157
{
	return func_483(Param0, fParam1, PLAYER::PLAYER_ID(), 0, 0);
}

int func_483(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x1416F
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam2 == iVar0 || iParam3 == 1)
		{
			bVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_13(bVar1, 0, 1) && func_13(bParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(bParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_13(bVar1, 0, 1) && func_13(bParam2, 0, 1))
				{
					if (Global_2648605.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_31(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2648605.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_13(bVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_31(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_484(struct<3> Param0, struct<3> Param1)//Position - 0x1428C
{
	struct<3> Var0;
	
	if (Local_132.f_8 == 3)
	{
		Var0 = { func_485(Local_132.f_712) };
		if (SYSTEM::VDIST(Param1, Var0) < 3500f)
		{
			if (SYSTEM::VDIST(Param0, Var0) > 3500f)
			{
				return 0;
			}
		}
	}
	return 1;
}

Vector3 func_485(int iParam0)//Position - 0x142DA
{
	switch (iParam0)
	{
		case 0:
			return 1710.3667f, -464.7253f, 169.8001f;
		
		case 1:
			return -966.3996f, -973.0624f, 2.8632f;
		
		case 2:
			return -1347.0602f, 4123.0723f, 62.2841f;
		
		case 3:
			return 1941.7789f, 3847.1667f, 34.3796f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_486(struct<3> Param0)//Position - 0x1434C
{
	struct<3> Var0;
	
	if (Local_132.f_8 == 3)
	{
		Var0 = { func_485(Local_132.f_712) };
		if (SYSTEM::VDIST(Param0, Var0) > 2500f)
		{
			return 0;
		}
	}
	return 1;
}

int func_487()//Position - 0x14385
{
	if ((((((func_476(PLAYER::PLAYER_ID()) || func_349()) || func_361()) || func_360(PLAYER::PLAYER_ID(), 21)) || func_360(PLAYER::PLAYER_ID(), 25)) || func_7(PLAYER::PLAYER_ID())) || func_6(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_488(int iParam0)//Position - 0x143ED
{
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

int func_489(bool bParam0, bool bParam1, int iParam2)//Position - 0x14426
{
	if (Global_1853910[bParam0 /*862*/].f_267.f_33 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853910[bParam0 /*862*/].f_267.f_31, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
	{
		if (iParam2 == -1 || func_179(Global_2657589[bParam0 /*466*/].f_321.f_7) != iParam2)
		{
			if (bParam1)
			{
				return func_383(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

void func_490(var uParam0, char* sParam1)//Position - 0x144AD
{
	char* sVar0;
	
	if (func_304(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING" /* GXT: EVENT START */;
	if (!func_246(sParam1))
	{
		sVar0 = sParam1;
	}
	func_149(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_491(int iParam0)//Position - 0x144ED
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING" /* GXT: EVENT START */;
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG" /* GXT: MOVING TARGET START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL" /* GXT: CHECKPOINTS START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ" /* GXT: LONGEST JUMP CHALLENGE START */;
			
			case 1:
				return "AST_CHALL_LS" /* GXT: LONGEST FREEFALL CHALLENGE START */;
			
			case 2:
				return "AST_CHALL_HS" /* GXT: HIGHEST SPEED CHALLENGE START */;
			
			case 3:
				return "AST_CHALL_LST" /* GXT: LONGEST STOPPIE CHALLENGE START */;
			
			case 4:
				return "AST_CHALL_LW" /* GXT: LONGEST WHEELIE CHALLENGE START */;
			
			case 5:
				return "AST_CHALL_NC" /* GXT: NO CRASHES CHALLENGE START */;
			
			case 6:
				return "AST_CHALL_LP" /* GXT: LOWEST PARACHUTE CHALLENGE START */;
			
			case 7:
				return "AST_CHALL_VS" /* GXT: VEHICLES STOLEN CHALLENGE START */;
			
			case 8:
				return "AST_CHALL_NM" /* GXT: NEAR MISSES CHALLENGE START */;
			
			case 9:
				return "AST_CHALL_RD" /* GXT: REVERSE DRIVING CHALLENGE START */;
			
			case 10:
				return "AST_CHALL_LF" /* GXT: LONGEST FALL SURVIVED CHALLENGE START */;
			
			case 11:
				return "AST_CHALL_LFL" /* GXT: LOW FLYING CHALLENGE START */;
			
			case 12:
				return "AST_CHALL_LFI" /* GXT: LOW FLYING INVERTED CHALLENGE START */;
			
			case 13:
				return "AST_CHALL_LB" /* GXT: LONGEST BAIL CHALLENGE START */;
			
			case 14:
				return "AST_CHALL_MB" /* GXT: MOST BRIDGES CHALLENGE START */;
			
			case 15:
				return "AST_CHALL_HSH" /* GXT: HEADSHOTS CHALLENGE START */;
			
			case 16:
				return "AST_CHALL_DB" /* GXT: DRIVE-BY CHALLENGE START */;
			
			case 17:
				return "AST_CHALL_ML" /* GXT: MELEE CHALLENGE START */;
			
			case 18:
				return "AST_CHALL_LSN" /* GXT: SNIPER KILLS CHALLENGE START */;
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED" /* GXT: PENNED IN START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL" /* GXT: HOLD THE WHEEL START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY" /* GXT: HOT PROPERTY START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP" /* GXT: DEAD DROP START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE" /* GXT: KING OF THE CASTLE START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST" /* GXT: CRIMINAL DAMAGE START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF" /* GXT: KILL LIST START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST" /* GXT: HUNT THE BEAST START */;
	}
	return "";
}

int func_492(int iParam0, int iParam1)//Position - 0x146F6
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_493(int iParam0)//Position - 0x1470C
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2793044.f_5062 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2793044.f_5062, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2793044.f_5062 = 0;
			MISC::SET_BIT(&(Global_2793044.f_5062), 1);
		}
	}
}

int func_494(var uParam0, bool bParam1, bool bParam2)//Position - 0x14760
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

void func_495(bool bParam0)//Position - 0x147A7
{
	int iVar0;
	struct<3> Var1;
	
	if (func_34())
	{
		if (func_13(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_132.f_729[iVar0 /*2*/].f_1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_132.f_729[iVar0 /*2*/].f_1), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_132.f_729[iVar0 /*2*/].f_1), -1, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_126[iVar0]))
					{
						iLocal_126[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_132.f_729[iVar0 /*2*/].f_1));
						HUD::SET_BLIP_PRIORITY(iLocal_126[iVar0], 9);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_126[iVar0], "AMCH_AC" /* GXT: Air Vehicle */);
						HUD::SET_BLIP_SPRITE(iLocal_126[iVar0], func_496(iVar0));
						func_367(&(iLocal_126[iVar0]), 9);
					}
					else
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (SYSTEM::VDIST(Var1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_132.f_729[iVar0 /*2*/].f_1), true)) <= 150f)
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_126[iVar0], true);
						}
						else
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_126[iVar0], false);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_126[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_126[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_496(int iParam0)//Position - 0x148F7
{
	switch (Local_132.f_729[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		
		case joaat("mammatus"):
			return 423;
		
		default:
	}
	return -1;
}

void func_497(bool bParam0)//Position - 0x14926
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (!HUD::IS_RADAR_HIDDEN())
	{
		switch (bParam0)
		{
			case 0:
				if (!BitTest(uLocal_116, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_500("CPC_PASSIVE" /* GXT: Checkpoints may not be collected in passive mode. */, 30000);
						func_173(1);
						MISC::SET_BIT(&uLocal_116, bParam0);
					}
				}
				break;
			
			case 1:
				if (!BitTest(uLocal_116, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_500("CPC_NOAIR" /* GXT: These checkpoints cannot be collected in an air vehicle. */, 30000);
						func_173(1);
						MISC::SET_BIT(&uLocal_116, bParam0);
					}
				}
				break;
			
			case 2:
				if (!BitTest(uLocal_116, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_34())
					{
						func_500("AMCH_AIRAV" /* GXT: Air vehicles ~HUD_COLOUR_BLUE~~BLIP_HELICOPTER~ ~BLIP_PLANE_DROP~~s~ are available at several locations. These will self-destruct once the event is over. */, 30000);
						func_173(1);
						MISC::SET_BIT(&uLocal_116, bParam0);
					}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_116, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_500("AMCH_BLOW" /* GXT: This vehicle will now self-destruct. */, 30000);
						func_173(1);
						MISC::SET_BIT(&uLocal_116, bParam0);
					}
				}
				break;
			
			case 4:
				if (!BitTest(uLocal_116, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_499(63))
					{
						if (Local_132.f_707)
						{
							sVar0 = "CPC_HELPA" /* GXT: Collect checkpoints ~HUD_COLOUR_YELLOW~~BLIP_TEMP_3~~s~ in the air for cash and RP. All participating players will receive a bonus if all checkpoints are collected. */;
						}
						else
						{
							sVar0 = "CPC_HELP" /* GXT: Collect checkpoints ~HUD_COLOUR_YELLOW~~BLIP_TEMP_3~~s~ for cash and RP. All participating players will receive a bonus if all checkpoints are collected. */;
						}
						func_500(sVar0, 30000);
						func_173(1);
						MISC::SET_BIT(&uLocal_116, bParam0);
					}
				}
				break;
			
			case 5:
				if (!BitTest(uLocal_116, bParam0))
				{
					if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_499(63)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && BitTest(uLocal_116, 4))
					{
						if (Local_132.f_707)
						{
							sVar1 = "CPC_HELPA2" /* GXT: Checkpoints may be collected in an air vehicle, by parachute, or while freefalling. */;
						}
						else
						{
							sVar1 = "CPC_HELP2" /* GXT: Checkpoints may be collected on foot or in a land or sea vehicle. */;
						}
						func_500(sVar1, 30000);
						func_173(1);
						MISC::SET_BIT(&uLocal_116, bParam0);
					}
				}
				break;
			
			case 6:
				if (!BitTest(uLocal_116, bParam0))
				{
					if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_499(63)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && BitTest(uLocal_116, 5))
					{
						if (Local_132.f_707)
						{
							sVar2 = "CPC_WARNA" /* GXT: Air Checkpoints will begin shortly in the ~a~. Compete to collect the most checkpoints in the given time. You will receive cash and RP for each checkpoint collected. */;
						}
						else
						{
							sVar2 = "CPC_WARN" /* GXT: Checkpoints will begin shortly in the ~a~. Compete to collect the most checkpoints in the given time. You will receive cash and RP for each checkpoint collected. */;
						}
						func_498(sVar2, func_164(), 30000);
						func_173(1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						MISC::SET_BIT(&uLocal_116, bParam0);
					}
				}
				break;
			
			case 7:
				if (!BitTest(uLocal_116, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_500("CPC_PASSIV1" /* GXT: Checkpoints cannot be collected if removed from an event by entering passive mode. */, 30000);
						func_173(1);
						MISC::SET_BIT(&uLocal_116, bParam0);
					}
				}
				break;
			}
	}
}

void func_498(char* sParam0, char* sParam1, int iParam2)//Position - 0x14B8F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam2);
}

bool func_499(int iParam0)//Position - 0x14BAC
{
	return Global_2672505.f_2513[0 /*80*/].f_1 == iParam0;
}

void func_500(char* sParam0, int iParam1)//Position - 0x14BC3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_501(int iParam0)//Position - 0x14BDA
{
	Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 = iParam0;
}

void func_502(bool bParam0)//Position - 0x14BEF
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 4);
	}
}

int func_503(bool bParam0, bool bParam1, bool bParam2)//Position - 0x14C23
{
	if (func_529(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_360(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_360(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_343(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_528())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_527(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_526())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_107(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_519(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_518(PLAYER::PLAYER_ID()) != func_103() && func_518(PLAYER::PLAYER_ID()) == func_84(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_516(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_515(func_199()) && !func_339(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_514())
	{
		return 0;
	}
	if (func_305())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_345(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_512())
	{
		return 0;
	}
	if (func_360(PLAYER::PLAYER_ID(), 0) || func_360(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_360(PLAYER::PLAYER_ID(), 12) || func_360(PLAYER::PLAYER_ID(), 14)) || func_360(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_511(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_430() && !Global_2764487)
		{
			return 0;
		}
	}
	if (func_510(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_509())
	{
		return 0;
	}
	if (Global_1935176)
	{
		return 0;
	}
	if (func_445(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_508())
	{
		return 0;
	}
	if (func_506(PLAYER::PLAYER_ID()) && Global_1853556.f_172)
	{
		return 0;
	}
	if (func_505())
	{
		return 0;
	}
	if (func_477())
	{
		return 0;
	}
	if (Global_2792080)
	{
		return 0;
	}
	if (Global_1968331)
	{
		return 0;
	}
	if (func_177(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_476(PLAYER::PLAYER_ID()))
	{
		if (func_504(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_504(int iParam0)//Position - 0x14E8F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890444[iVar0 /*129*/].f_77.f_51 != 0;
	}
	return 0;
}

bool func_505()//Position - 0x14EB3
{
	return Global_1950108.f_528;
}

int func_506(int iParam0)//Position - 0x14EC2
{
	if (func_507(Global_1853910[iParam0 /*862*/].f_267.f_33))
	{
		return 1;
	}
	return 0;
}

int func_507(int iParam0)//Position - 0x14EE4
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_508()//Position - 0x14F13
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_509()//Position - 0x14F2B
{
	return Global_100733.f_388 > 0;
}

bool func_510(int iParam0)//Position - 0x14F3C
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 11);
}

int func_511(int iParam0, bool bParam1, bool bParam2)//Position - 0x14F55
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_512()//Position - 0x14FB9
{
	if (func_513() == 0)
	{
		return 1;
	}
	return 0;
}

int func_513()//Position - 0x14FCE
{
	return Global_1574632.f_18;
}

bool func_514()//Position - 0x14FDC
{
	return Global_1575060;
}

int func_515(int iParam0)//Position - 0x14FE8
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_516(int iParam0, int iParam1)//Position - 0x15032
{
	if (func_113(iParam0, 0))
	{
		return func_517(Global_1894573[iParam0 /*608*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_517(int iParam0)//Position - 0x1505C
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
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
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

int func_518(int iParam0)//Position - 0x152C2
{
	return Global_1894573[iParam0 /*608*/].f_10.f_35;
}

int func_519(bool bParam0)//Position - 0x152D7
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_446(bParam0) && !func_7(bParam0)) && !BitTest(Global_1894573[bParam0 /*608*/].f_1, 8));
	bVar2 = func_107(bParam0);
	uVar3 = func_349();
	uVar4 = func_520();
	if ((bVar1 && (func_476(bParam0) || func_461(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_109(bParam0)) && !func_180(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2793044.f_5225.f_220 != iVar0)
	{
		Global_2793044.f_5225.f_220 = iVar0;
	}
	return iVar0;
}

int func_520()//Position - 0x15392
{
	if ((func_108(PLAYER::PLAYER_ID(), 21) || func_108(PLAYER::PLAYER_ID(), 22)) || func_524())
	{
		return 1;
	}
	if (func_522())
	{
		func_521(22);
		return 1;
	}
	return 0;
}

void func_521(int iParam0)//Position - 0x153D7
{
	MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}

int func_522()//Position - 0x153F4
{
	if (func_113(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_349() && !func_361()) || func_360(PLAYER::PLAYER_ID(), 21)) || func_360(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_523(27);
		}
	}
	return 0;
}

void func_523(int iParam0)//Position - 0x15447
{
	MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}

int func_524()//Position - 0x15464
{
	return func_525(424, -1);
}

int func_525(int iParam0, int iParam1)//Position - 0x15474
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2848280[iParam0 /*3*/][func_233(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_526()//Position - 0x154A0
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/] == 5;
}

int func_527(int iParam0)//Position - 0x154B5
{
	if (Global_2657589[iParam0 /*466*/].f_272.f_4 != 0 || Global_2657589[iParam0 /*466*/].f_272.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_528()//Position - 0x154E9
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 0);
}

bool func_529(int iParam0, int iParam1)//Position - 0x15502
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_5, iParam1);
}

bool func_530(var uParam0)//Position - 0x1551A
{
	var uVar0;
	
	uVar0 = func_237(2483, -1, 0);
	return BitTest(uVar0, uParam0);
}

int func_531(int iParam0)//Position - 0x15532
{
	switch (iParam0)
	{
		case 132:
			return 11;
		
		case 133:
			return 12;
		
		case 136:
			return 19;
		
		case 138:
			return 14;
		
		case 139:
			return 15;
		
		case 129:
			return 17;
		
		case 141:
			return 18;
		
		case 144:
			return 13;
		
		case 146:
			return 16;
		
		case 236:
			return 20;
		
		case 150:
			return 20;
		
		default:
	}
	return Global_262145.f_24142 /* Tunable: -1488550814 */;
}

void func_532()//Position - 0x155C1
{
	if (Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 != 0)
	{
		Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 = 0;
	}
}

int func_533(int iParam0)//Position - 0x155E4
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_349() && !func_361()) || func_360(PLAYER::PLAYER_ID(), 21)) || func_360(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_38(&(Global_1836858.f_13)))
		{
			if (!func_1(&(Global_1836858.f_13), Global_262145.f_14 /* Tunable: FM_EVENT_PASSIVE_COOL_DOWN */, 0))
			{
				return 1;
			}
			func_37(&(Global_1836858.f_13));
		}
	}
	else if (BitTest(Global_1894573[iParam0 /*608*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 9);
}

bool func_534(bool bParam0)//Position - 0x15680
{
	return func_71(bParam0, 0);
}

void func_535()//Position - 0x1568F
{
	func_536(&(Local_153.f_534), &Local_153, 27, &(Local_153.f_1), &(Local_153.f_117), -1, 0, 0);
}

void func_536(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x156B3
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
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
	struct<2> Var23;
	
	if (func_655(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (func_653() || iParam2 == 28)
	{
		if (func_607(iParam1, iParam2, uParam3, Global_1836368, 0, func_656(), sParam7))
		{
			func_606(1);
			if ((!func_605() && !func_604()) || BitTest(Global_2793044.f_4687, 1))
			{
				if (func_603())
				{
					func_602();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_601(1);
						Global_1836368 = 0;
						iVar20 = -1;
						if (Global_1836592 != 1)
						{
							func_600(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar18 = 0;
							while (iVar18 < 32)
							{
								iVar1[iVar18] = -1;
								iVar18++;
							}
							iVar18 = 0;
							while (iVar18 < 32)
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!func_71(bVar4, 0))
									{
										if (func_596(bVar4) || func_594(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (func_86(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												func_591(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!func_110(PLAYER::PLAYER_ID(), 0) && func_250(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (func_590())
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = func_103();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((func_589(bVar4) && func_586(bVar4, iParam2, bVar3)) && func_13(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853910[bVar10 /*862*/].f_205.f_6;
								Var7 = { func_581(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { func_143(bVar4) };
								iVar6 = func_575(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836368++;
								if ((uParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (uParam0[iVar18 /*42*/])->f_22;
								}
								if ((uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (uParam0[iVar18 /*42*/])->f_31;
								}
								if ((uParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (uParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (uParam0[iVar18 /*42*/])->f_9;
								if (((uParam0[iVar18 /*42*/])->f_9 != -1 || (uParam0[iVar18 /*42*/])->f_22 != -1f) || (uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!func_590())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_570(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_569(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (uParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = func_568(bVar4, 0);
								if (bVar2)
								{
									if (func_85(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar19 = iVar1[bVar10];
									}
									else
									{
										iVar19 = (iVar0 + iVar22);
										iVar22++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
								if ((uParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (func_567(iParam5))
								{
									func_566(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									func_566(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								MISC::SET_BIT(&iVar15, bVar4);
								iVar19++;
							}
							iVar18++;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							if (func_13(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = func_103();
							}
							if (func_589(bVar4))
							{
								if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853910[bVar10 /*862*/].f_205.f_6;
									Var7 = { func_581(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { func_143(bVar4) };
									iVar6 = func_575(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836368++;
									iVar17 = func_568(bVar4, 1);
									if (bVar2)
									{
										if (func_85(bVar4, 1))
										{
											iVar19 = iVar1[iVar18];
										}
										else
										{
											iVar19 = (iVar0 + iVar22);
											iVar22++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
									func_549(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_546(uParam3, iParam1, iParam2);
						}
						func_37(&(uParam3->f_21));
						func_545();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_544(uParam3, iParam1);
							func_543(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_544(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_539(uParam3))
						{
							Global_1836592 = 1;
						}
						func_537(uParam3);
						if (Global_1836592 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836592 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_545();
			func_601(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_537(var uParam0)//Position - 0x15CE1
{
	if (!func_38(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_37(&(uParam0->f_21));
		func_538(0);
	}
}

void func_538(bool bParam0)//Position - 0x15D1D
{
	if (bParam0)
	{
		if (Global_1836592 != 2)
		{
			Global_1836592 = 2;
		}
	}
	else
	{
		switch (Global_1836592)
		{
			case 0:
				Global_1836592 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_539(var uParam0)//Position - 0x15D63
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	bVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar3 != func_103() && func_13(bVar3, 0, 1))
	{
		Var2 = { func_143(bVar3) };
		iVar1 = func_542(uParam0, uParam0->f_37);
		if (func_541(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_540(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_540(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_540(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_540(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_540(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_540(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_540(var uParam0, int iParam1, int iParam2)//Position - 0x15E90
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_541(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x15EA2
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_542(var uParam0, int iParam1)//Position - 0x15EB2
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_543(int* iParam0, bool bParam1, int iParam2)//Position - 0x15EC2
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_544(var uParam0, int* iParam1)//Position - 0x15EFA
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_545()//Position - 0x15F2F
{
	if (Global_1836592 != 0)
	{
		Global_1836592 = 0;
	}
}

void func_546(var uParam0, int* iParam1, int iParam2)//Position - 0x15F44
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_103())
		{
			if (func_13(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_548(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_547(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853910[iVar0 /*862*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_547(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15FB9
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_548(int iParam0, bool bParam1, int iParam2)//Position - 0x15FF6
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_549(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1603D
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_565() && iParam4 < func_564())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836370)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836592 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_563("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_563(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_563("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_563("");
			if (uParam3->f_108 == 6)
			{
				func_563("");
			}
			else
			{
				func_563(&sParam5);
			}
			func_554(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_553(uParam3))
			{
				func_552("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_551(uParam3))
			{
				func_552("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_550(uParam3))
			{
				func_552("DPAD_CREW" /* GXT: C */);
			}
			else
			{
				func_552("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_550(var uParam0)//Position - 0x16164
{
	return BitTest(uParam0->f_33, 6);
}

bool func_551(var uParam0)//Position - 0x16172
{
	return BitTest(uParam0->f_33, 5);
}

void func_552(char* sParam0)//Position - 0x16180
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_553(var uParam0)//Position - 0x16192
{
	if (func_551(uParam0) && func_550(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_554(var uParam0, bool bParam1)//Position - 0x161B3
{
	if (func_562(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_558(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2657589[bParam1 /*466*/].f_436, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_555())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_555()//Position - 0x1622E
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_556() || func_95())
		{
			return 1;
		}
	}
	return 0;
}

int func_556()//Position - 0x16253
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_95();
	}
	return func_557(Global_4718592.f_113724);
}

int func_557(int iParam0)//Position - 0x16277
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5024[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_558(bool bParam0)//Position - 0x162B1
{
	if ((func_13(bParam0, 0, 1) && func_559()) && func_193(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_559()//Position - 0x162DE
{
	if (func_446(PLAYER::PLAYER_ID()) || func_561())
	{
		if (!func_560(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_560(int iParam0)//Position - 0x1630C
{
	if (func_309(iParam0) == 236 || func_309(iParam0) == 150)
	{
		return func_476(iParam0);
	}
	return 0;
}

int func_561()//Position - 0x16339
{
	switch (func_250(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_562(bool bParam0)//Position - 0x16377
{
	if (func_555())
	{
		if (func_13(bParam0, 0, 1))
		{
			return func_86(bParam0);
		}
	}
	if ((func_13(bParam0, 0, 1) && func_559()) && func_195(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_563(char* sParam0)//Position - 0x163BF
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_564()//Position - 0x163CD
{
	int iVar0;
	
	if (Global_1836370)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_565()//Position - 0x163E9
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836370)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_566(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x16401
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_565() && iParam3 < func_564())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836370)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836592 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_563("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_552(sParam16);
				}
				else
				{
					func_563(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_563("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_590())
				{
					func_563("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT" /* GXT: ~a~ ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT" /* GXT: ~1~~a~ */);
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH" /* GXT: -$~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_552(&(uParam2->f_104));
					}
					else
					{
						func_563("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_563("");
				}
				if (uParam2->f_108 == 6)
				{
					func_563("");
				}
				else
				{
					func_563(&sParam4);
				}
				func_554(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_563("");
					func_563("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_553(uParam2))
				{
					func_552("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_551(uParam2))
				{
					func_552("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_550(uParam2))
				{
					func_552("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					func_552("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_567(int iParam0)//Position - 0x16758
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_568(bool bParam0, bool bParam1)//Position - 0x1677C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_446(bParam0)) && !func_107(bParam0))
	{
		iVar0 = func_58();
	}
	iVar1 = func_83(bParam0);
	if (!iVar1 == -1)
	{
		return func_81(iVar1);
	}
	return iVar0;
}

char* func_569(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x167C6
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB" /* GXT: m */;
				}
				else if (bParam2)
				{
					return "AMCH_M" /* GXT: ~1~m */;
				}
				else
				{
					return "AMCH_METRES" /* GXT:  meters */;
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB" /* GXT: ft */;
			}
			else if (bParam2)
			{
				return "AMCH_FT" /* GXT: ~1~ft */;
			}
			else
			{
				return "AMCH_FEET" /* GXT:  feet */;
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB" /* GXT: km/h */;
				}
				else if (bParam2)
				{
					return "AMCH_KMHN" /* GXT: ~1~km/h */;
				}
				else
				{
					return "AMCH_KMH" /* GXT:  km/h */;
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB" /* GXT: mph */;
			}
			else if (bParam2)
			{
				return "AMCH_MPHN" /* GXT: ~1~mph */;
			}
			else
			{
				return "AMCH_MPH" /* GXT:  mph */;
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH" /* GXT:  vehicles */;
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS" /* GXT:  kills */;
			}
			else
			{
				return "AMCH_KILL" /* GXT:  kill */;
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY" /* GXT: ~r~~s~ */;
}

int func_570(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x16953
{
	if (func_574(iParam3))
	{
		*fParam1 = (func_571(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_567(iParam3))
	{
		*fParam1 = (func_571(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_571(int iParam0, int iParam1)//Position - 0x169A3
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_573(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_572(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_572(float fParam0)//Position - 0x16A46
{
	return (fParam0 / 1.609344f);
}

float func_573(float fParam0)//Position - 0x16A56
{
	return (fParam0 / 0.3048f);
}

int func_574(int iParam0)//Position - 0x16A66
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_575(bool bParam0)//Position - 0x16AC2
{
	int iVar0;
	
	iVar0 = func_578(bParam0);
	if (iVar0 == -1)
	{
		func_576(bParam0, 1);
		return 0;
	}
	Global_1666668[iVar0 /*5*/].f_4 = 1;
	return Global_1666668[iVar0 /*5*/].f_2;
}

void func_576(bool bParam0, bool bParam1)//Position - 0x16AF8
{
	if (!func_13(bParam0, 0, 1))
	{
		return;
	}
	if (func_578(bParam0) != -1)
	{
		return;
	}
	if (Global_1666831)
	{
		if (bParam0 == Global_1666831.f_1)
		{
			return;
		}
	}
	if (func_577(bParam0))
	{
		return;
	}
	if (Global_1666869 >= 32)
	{
		return;
	}
	Global_1666836[Global_1666869] = bParam0;
	Global_1666869++;
	if (bParam1)
	{
	}
}

int func_577(bool bParam0)//Position - 0x16B64
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666869)
	{
		if (Global_1666836[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_578(bool bParam0)//Position - 0x16B96
{
	int iVar0;
	
	if (!func_13(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1666829 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666829)
	{
		if (Global_1666668[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1666668[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666668[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_579(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_579(int iParam0)//Position - 0x16C15
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1666829)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1666668[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1666668[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666668[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1666668[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1666829)
	{
		Global_1666668[iVar2 /*5*/] = { Global_1666668[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_580(&(Global_1666668[iVar2 /*5*/]));
	Global_1666829 = (Global_1666829 - 1);
}

void func_580(var uParam0)//Position - 0x16CCB
{
	*uParam0 = 0;
	uParam0->f_1 = func_103();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_581(bool bParam0)//Position - 0x16CF8
{
	char cVar0[32];
	
	if (func_13(bParam0, 0, 1))
	{
		Global_2764201 = { func_143(bParam0) };
		if (func_188())
		{
			if (func_541(Global_2764201))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2764201))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_585(&Global_2764201))
		{
			Global_2764131 = { func_583(bParam0) };
			func_582(&Global_2764131, &cVar0);
		}
	}
	return cVar0;
}

void func_582(var* uParam0, char* sParam1)//Position - 0x16D79
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_583(bool bParam0)//Position - 0x16D8B
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_584(bParam0))
	{
		return Global_1575092[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_143(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_584(int iParam0)//Position - 0x16DC7
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_585(var* uParam0)//Position - 0x16DDD
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_586(bool bParam0, int iParam1, bool bParam2)//Position - 0x16E03
{
	if (iParam1 == 27)
	{
		if ((func_7(bParam0) || func_588(bParam0)) || func_6(bParam0))
		{
			return 0;
		}
	}
	if (!func_587(bParam0))
	{
		return 0;
	}
	if (!func_596(bParam0) && !func_594(bParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_587(bool bParam0)//Position - 0x16E62
{
	return BitTest(Global_1853910[bParam0 /*862*/].f_139, 22);
}

int func_588(bool bParam0)//Position - 0x16E78
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1894573[bParam0 /*608*/].f_1, 10) || BitTest(Global_1894573[bParam0 /*608*/].f_1, 9));
	}
	return 0;
}

int func_589(bool bParam0)//Position - 0x16EB0
{
	bool bVar0;
	
	if (bParam0 == func_103())
	{
		return 0;
	}
	if (func_71(bParam0, 0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (BitTest(Global_1853910[bVar0 /*862*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_590()//Position - 0x16EF2
{
	switch (func_250(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_309(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_107(PLAYER::PLAYER_ID()))
	{
		switch (func_250(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_560(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_591(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1702C
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_13(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_71(bVar1, 0))
			{
				if (func_596(bVar1) || func_594(bVar1, bParam4))
				{
					if (func_592(bVar1, bParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_592(bool bParam0, int iParam1, bool bParam2)//Position - 0x170A5
{
	if (iParam1 != func_103())
	{
		if (!bParam2)
		{
			if (func_593(bParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1894573[bParam0 /*608*/].f_10 != func_103())
		{
			return iParam1 == Global_1894573[bParam0 /*608*/].f_10;
		}
	}
	return 0;
}

int func_593(int iParam0, int iParam1)//Position - 0x170EF
{
	if (iParam1 != func_103())
	{
		if (iParam0 != func_103())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 != func_103())
			{
				if (Global_1894573[iParam0 /*608*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_594(bool bParam0, bool bParam1)//Position - 0x17134
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2657589[bParam0 /*466*/].f_246 != -1 || func_595(bParam0));
}

bool func_595(int iParam0)//Position - 0x1715E
{
	return Global_1853910[iParam0 /*862*/].f_192 != 0;
}

int func_596(bool bParam0)//Position - 0x17173
{
	if (!func_13(bParam0, 0, 1))
	{
		return 0;
	}
	if (!func_13(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_597(bParam0))
	{
		return 0;
	}
	if ((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(bParam0, PLAYER::PLAYER_ID()) || func_250(bParam0) == 233) || func_250(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_597(int iParam0)//Position - 0x171DC
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_598(PLAYER::PLAYER_ID());
	bVar1 = func_598(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_598(int iParam0)//Position - 0x17218
{
	return func_599(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}

var func_599(var uParam0, int iParam1)//Position - 0x17231
{
	return BitTest(*uParam0, iParam1);
}

void func_600(int* iParam0, int iParam1, int iParam2)//Position - 0x1723F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_601(bool bParam0)//Position - 0x1726D
{
	if (bParam0)
	{
		if (Global_1653910.f_2 == 0)
		{
			Global_1653910.f_2 = 1;
		}
	}
	else if (Global_1653910.f_2 == 1)
	{
		Global_1653910.f_2 = 0;
	}
}

void func_602()//Position - 0x1729F
{
	if (BitTest(Global_2793044.f_4687, 1))
	{
		if (func_181())
		{
			func_198();
		}
	}
}

int func_603()//Position - 0x172BE
{
	if (BitTest(Global_2793044.f_4687, 0) && func_181())
	{
		return 1;
	}
	if (BitTest(Global_2793044.f_4687, 1) && func_181())
	{
		return 1;
	}
	return 0;
}

int func_604()//Position - 0x172F9
{
	if (func_181())
	{
		if (func_46(Global_2672505.f_2513[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_605()//Position - 0x17320
{
	if (func_181())
	{
		if (func_59(Global_2672505.f_2513[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_606(int iParam0)//Position - 0x17347
{
	if (Global_1653910.f_1 != Global_1653910)
	{
		Global_1653910.f_1 = Global_1653910;
	}
	if (Global_1653910 != iParam0)
	{
		Global_1653910 = iParam0;
	}
}

int func_607(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x17375
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_652(iParam1);
	fVar4 = func_651();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_650())
		{
			if (func_649() > 0 && Global_1836370)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_638())
		{
			func_637(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2793044.f_4690, 26))
	{
		func_637(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_38(&(uParam2->f_19)))
	{
		if (func_649() == 1)
		{
			func_636(bVar3, iParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_637(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2793044.f_4692), 5);
		}
	}
	if (func_38(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_649() == 0 && !bParam5))
		{
			func_637(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_635();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_635();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (func_636(bVar3, iParam0, 0))
				{
					func_600(iParam0, 0, 0);
					sVar1 = func_633(iParam1, &(Global_4718592.f_113731), bParam4);
					Var0 = { func_631(iParam1) };
					if (bParam4)
					{
						func_628(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_622(iParam0, func_625(uParam2), func_623(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_616(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						func_614(iParam0, sVar6, func_615(), -1);
					}
					else if (func_555())
					{
						uParam2->f_34 = Global_1836369;
						func_628(iParam0, sVar1, &Var0, 1, -1, Global_1836369, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_609(iParam1);
						uParam2->f_34 = Global_1836369;
						func_628(iParam0, sVar1, "", 0, iVar5, func_608(), 1);
					}
					else
					{
						iVar5 = func_609(iParam1);
						func_628(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836368 = uParam3;
				Global_1836367 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836369)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_608()//Position - 0x17648
{
	return Global_1836369;
}

int func_609(int iParam0)//Position - 0x17654
{
	int iVar0;
	
	iVar0 = -1;
	if (func_613())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 42:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_612(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_611(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_610(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_251())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_610(int iParam0)//Position - 0x177B9
{
	return Global_2657589[iParam0 /*466*/].f_121 == 4;
}

bool func_611(int iParam0)//Position - 0x177CE
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

bool func_612(int iParam0)//Position - 0x177E3
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_613()//Position - 0x177F8
{
	return Global_4718592.f_1 == 0;
}

void func_614(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x17808
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_552(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_552("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_615()//Position - 0x17867
{
	switch (func_250(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1" /* GXT: Total Value */;
			break;
		
		case 160:
			return "BD_SORT_4" /* GXT: Packages Collected */;
			break;
		
		case 154:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
		
		case 155:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
	}
	return "";
}

char* func_616(var uParam0)//Position - 0x178BF
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E" /* GXT: Steal Cargo */;
			break;
		
		case 1:
			return "GR_DPD_F" /* GXT: Sell Cargo */;
			break;
		
		case 2:
			return "GR_DPD_S" /* GXT: Business Setup */;
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A" /* GXT: Business Setup */;
			break;
		
		case 1:
			return "GR_DPD_B" /* GXT: Steal Supplies */;
			break;
		
		case 2:
			return "GR_DPD_C" /* GXT: Sell Weapons */;
			break;
		
		case 3:
			return "GR_DPD_D" /* GXT: Defend Business */;
			break;
	}
	switch (func_250(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET" /* GXT: Heist Prep */;
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T" /* GXT: Gunrunning */;
			break;
		
		case 182:
			return "DEAL_DEALN" /* GXT: By the Pound */;
			break;
		
		case 194:
			return "PI_BIK_13_0" /* GXT: Rippin' it Up */;
			break;
		
		case 189:
			return "PI_BIK_4_1" /* GXT: Race to Point */;
			break;
		
		case 193:
			return "PI_BIK_13_1" /* GXT: Hit & Ride */;
			break;
		
		case 205:
			return "PI_BIK_13_3" /* GXT: Criminal Mischief */;
			break;
		
		case 186:
			return "CELL_BIKER_CK" /* GXT: Weapon of Choice */;
			break;
		
		case 207:
			return "DV_SH_TITLE" /* GXT: Fragile Goods */;
			break;
		
		case 208:
			return "BA_SH_TITLE" /* GXT: Torched */;
			break;
		
		case 209:
			return "SHU_SH_TITLE" /* GXT: Outrider */;
			break;
		
		case 210:
			return "PI_BIK_13_4" /* GXT: Wheelie Rider */;
			break;
		
		case 183:
			return "CELL_BIKER_RESC" /* GXT: P.O.W. */;
			break;
		
		case 199:
			return "CELL_BIKER_SEAR" /* GXT: Search and Destroy */;
			break;
		
		case 201:
			return "CELL_BIKER_STAN" /* GXT: Stand Your Ground */;
			break;
		
		case 142:
			return "PIM_MAGM210" /* GXT: Sightseer */;
			break;
		
		case 163:
			return "PIM_MAGM608" /* GXT: Auto Buyout */;
			break;
		
		case 160:
			return "PIM_MAGM604" /* GXT: Due Diligence */;
			break;
		
		case 154:
			return "PIM_MAGM602" /* GXT: Market Manipulation */;
			break;
		
		case 155:
			return "PIM_MAGM603" /* GXT: Courier Service */;
			break;
		
		case 148:
			if (func_618())
			{
				return "LBD_BKVBK" /* GXT: Deathmatch */;
			}
			return "PIM_MAGM201" /* GXT: Executive Deathmatch */;
			break;
		
		case 151:
			if (func_286(1))
			{
				return "GB_DPAD_BMFD" /* GXT: Marked For Death */;
			}
			return "PIM_MAGM202" /* GXT: Put Out a Hit */;
			break;
		
		case 152:
			return "PIM_MAGM204" /* GXT: Piracy Prevention */;
			break;
		
		case 153:
			if (func_286(1))
			{
				return "PI_BIK_3_2" /* GXT: On The Run */;
			}
			return "PIM_MAGM601" /* GXT: Most Wanted */;
			break;
		
		case 157:
			return "PIM_MAGM207" /* GXT: Asset Recovery */;
			break;
		
		case 159:
			return "PIM_MAGM206" /* GXT: Hostile Takeover */;
			break;
		
		case 162:
			return "PIM_MAGM607" /* GXT: Point to Point */;
			break;
		
		case 164:
			return "PIM_MAGM212" /* GXT: Executive Search */;
			break;
		
		case 166:
			return "GB_DPAD_HEAD" /* GXT: Headhunter */;
		
		case 167:
			return "GB_DPAD_BUY" /* GXT: Buy Special Cargo */;
		
		case 168:
			return "GB_DPAD_SELL" /* GXT: Sell Special Cargo */;
		
		case 169:
			return "GB_DPAD_DEF" /* GXT: Defend Special Cargo */;
		
		case 170:
			return "GB_DPAD_AIR" /* GXT: Airfreight */;
		
		case 171:
			return "GB_DPAD_CASH" /* GXT: Cashing Out */;
		
		case 172:
			return "GB_DPAD_SAL" /* GXT: Salvage */;
		
		case 173:
			return "GB_DPAD_FRA" /* GXT: Haulage */;
		
		case 178:
			return "VEX_TITLEa" /* GXT: Steal Vehicle */;
		
		case 188:
			return "VEX_TITLEb" /* GXT: Export Vehicle */;
		
		case 218:
			return "FRT_MODE" /* GXT: Fortified */;
		
		case 217:
			return "FRT_TRNS" /* GXT: Transporter */;
		
		case 214:
			return "MODE_PLW" /* GXT: Plowed */;
		
		case 215:
			return "MODE_FUL" /* GXT: Fully Loaded */;
		
		case 216:
			return "MODE_AA" /* GXT: Amphibious Assault */;
		
		case 219:
			return "MODE_VEL" /* GXT: Velocity */;
		
		case 220:
			return "MODE_RMP" /* GXT: Ramped Up */;
		
		case 221:
			return "MODE_STK" /* GXT: Stockpiling */;
		
		case 225:
			return "GR_TITLEL" /* GXT: Gunrunning */;
		
		case 226:
			return "GRS_TITLEL" /* GXT: Gunrunning Sell */;
		
		case 227:
			return "GRD_TITLEL" /* GXT: Gunrunning Defend */;
		
		case 195:
			return "GB_STEAL_T" /* GXT: Nine Tenths Of The Law */;
		
		case 198:
			return "SC_MENU_TITLE" /* GXT: Cracked */;
		
		case 190:
			return "GB_DPAD_BSEL" /* GXT: Biker Sell */;
		
		case 191:
			return "GB_DPAD_BDEF" /* GXT: Biker Defend */;
		
		case 185:
			return "GB_DPAD_GFH" /* GXT: Guns For Hire */;
		
		case 197:
			return "GB_DPAD_JB" /* GXT: Jailbreak */;
		
		case 179:
			return "CELL_JOUST" /* GXT: Joust */;
		
		case 200:
			return "CAG_BLIP" /* GXT: Caged In */;
		
		case 192:
			if (func_617(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_182))
			{
				return "GB_DPAD_BSET" /* GXT: Business Setup */;
			}
			return "GB_DPAD_BBUY" /* GXT: Resupply */;
			break;
	}
	return "";
}

int func_617(int iParam0)//Position - 0x17CEB
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

bool func_618()//Position - 0x17D1D
{
	return (func_621() && func_619(func_620()));
}

int func_619(int iParam0)//Position - 0x17D36
{
	return func_195(iParam0, 1);
}

int func_620()//Position - 0x17D45
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_35;
}

bool func_621()//Position - 0x17D5C
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/] == 148;
}

void func_622(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x17D72
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_552(sParam1);
		}
		else if (func_309(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C" /* GXT: ~a~ Challenge (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_552("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_623(var uParam0)//Position - 0x17DF9
{
	int iVar0;
	
	iVar0 = func_309(PLAYER::PLAYER_ID());
	if (func_624())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5" /* GXT: Points */;
		
		case 133:
			switch (func_308())
			{
				case 0:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 1:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 2:
					return "FM_AE_SORT_3" /* GXT: Speed */;
				
				case 3:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 4:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 5:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 6:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 7:
					return "FM_AE_SORT_13" /* GXT: Vehicles */;
				
				case 8:
					return "FM_AE_SORT_4" /* GXT: Misses */;
				
				case 9:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 10:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 11:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 12:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 13:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 14:
					return "FM_AE_SORT_5" /* GXT: Points */;
				
				case 15:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 16:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 17:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 18:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10" /* GXT: Possession Time */;
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5" /* GXT: Points */;
		
		case 144:
			return "FM_AE_SORT_1" /* GXT: Destruction Value */;
		
		case 129:
			return "FM_AE_SORT_9" /* GXT: Kills */;
	}
	return "";
}

bool func_624()//Position - 0x17FA4
{
	return Global_1853783;
}

char* func_625(var uParam0)//Position - 0x17FB0
{
	int iVar0;
	
	iVar0 = func_309(PLAYER::PLAYER_ID());
	if (func_624())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9" /* GXT: Moving Target */;
		
		case 132:
			if (func_627() == 0)
			{
				return "CPC_TILEL" /* GXT: Checkpoints */;
			}
			else if (func_627() == 1)
			{
				return "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			return "PIM_TA0" /* GXT: Checkpoints */;
			break;
		
		case 133:
			switch (func_308())
			{
				case 0:
					return "AMCH_0SLC" /* GXT: Longest Jump */;
				
				case 1:
					return "AMCH_1SLC" /* GXT: Longest Freefall */;
				
				case 2:
					return "AMCH_2SLC" /* GXT: Highest Speed */;
				
				case 3:
					return "AMCH_3SLC" /* GXT: Longest Stoppie */;
				
				case 4:
					return "AMCH_4SLC" /* GXT: Longest Wheelie */;
				
				case 5:
					return "AMCH_5SLC" /* GXT: No Crashes */;
				
				case 6:
					return "AMCH_6SLC" /* GXT: Lowest Parachute */;
				
				case 7:
					return "AMCH_7SLC" /* GXT: Vehicles Stolen */;
				
				case 8:
					return "AMCH_8SLC" /* GXT: Near Misses */;
				
				case 9:
					return "AMCH_12SLC" /* GXT: Reverse Driving */;
				
				case 10:
					return "AMCH_13SLC" /* GXT: Longest Fall Survived */;
				
				case 11:
					return "AMCH_15SLC" /* GXT: Low Flying */;
				
				case 12:
					return "AMCH_16SLC" /* GXT: Inverted Flying */;
				
				case 13:
					return "AMCH_23SLC" /* GXT: Longest Bail */;
				
				case 14:
					return "AMCH_9SLC" /* GXT: Fly Under Bridges */;
				
				case 15:
					return "AMCH_19SLC" /* GXT: Headshot Kills */;
				
				case 16:
					return "AMCH_20SLC" /* GXT: Driveby */;
				
				case 17:
					return "AMCH_21SLC" /* GXT: Melee */;
				
				case 18:
					return "AMCH_22SLC" /* GXT: Sniper Kills */;
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10" /* GXT: Penned In */;
		
		case 138:
			return "PIM_TA4" /* GXT: Hold the Wheel */;
		
		case 139:
			return "PIM_TA5" /* GXT: Hot Property */;
		
		case 140:
			return "PIM_TA3" /* GXT: Dead Drop */;
		
		case 141:
			return "PIM_TA8" /* GXT: King of the Castle */;
		
		case 144:
			return "PIM_TA2" /* GXT: Criminal Damage */;
		
		case 129:
			if (func_626() == 1)
			{
				return "FM_AE_TITL_12" /* GXT: Kill List Competitive */;
			}
			else
			{
				return "PIM_TA7" /* GXT: Kill List */;
			}
			break;
		
		case 146:
			return "PIM_TA6" /* GXT: Hunt the Beast */;
	}
	return "";
}

int func_626()//Position - 0x181CD
{
	return Global_2793044.f_5149;
}

int func_627()//Position - 0x181DC
{
	if (func_309(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2793044.f_5144;
	}
	return -1;
}

void func_628(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x181FF
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_563(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_552(sParam1);
		}
		if (func_650() && iParam6)
		{
			if (func_630())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT" /* GXT: (~1~/~1~) */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_552(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_629(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_56())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_629(int iParam0)//Position - 0x182C0
{
	if (func_612(iParam0) || func_611(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_630()//Position - 0x182E2
{
	return Global_1836370;
}

struct<4> func_631(int iParam0)//Position - 0x182EE
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_632(PLAYER::PLAYER_ID()) || func_610(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_1198, 16);
			break;
	}
	if (func_555() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_1198, 16);
	}
	return Var0;
}

bool func_632(int iParam0)//Position - 0x1838B
{
	return Global_2657589[iParam0 /*466*/].f_121 == 5;
}

char* func_633(int iParam0, char* sParam1, bool bParam2)//Position - 0x183A0
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_555() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_634();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP" /* GXT: One on One Deathmatch */;
	}
	else if (iParam0 == 25)
	{
		if (Global_1836612 == 0)
		{
			Global_1836612 = 1;
		}
		return "HUD_LBD_OVR" /* GXT: Overall Results */;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836612 == 1)
		{
			Global_1836612 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836612 == 0)
		{
			Global_1836612 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
			case 42:
				return "HUD_LBD_DM" /* GXT: Deathmatch Leaderboard */;
				break;
			
			case 1:
				return "HUD_LBD_TDM" /* GXT: Team Deathmatch Leaderboard */;
				break;
			
			case 5:
				return "HUD_LBD_GRCE" /* GXT: GTA Race Leaderboard */;
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE" /* GXT: Race Leaderboard */;
				break;
			
			case 7:
				return "HUD_LBD_BRCE" /* GXT: Parachute Race Leaderboard */;
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD" /* GXT: Survival Leaderboard */;
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_634()//Position - 0x1850A
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF" /* GXT: GTA Online (Friend, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC" /* GXT: GTA Online (Crew, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS" /* GXT: GTA Online (Solo, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI" /* GXT: GTA Online (Invite, ~1~) */;
	}
	return "HUD_LBD_FMP" /* GXT: GTA Online (Public, ~1~) */;
}

void func_635()//Position - 0x1854E
{
	Global_44200 = 1;
}

bool func_636(bool bParam0, int* iParam1, bool bParam2)//Position - 0x1855A
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_637(int* iParam0, var uParam1, bool bParam2)//Position - 0x1859A
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836368 = 0;
	func_545();
	Global_1836367 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_38(&(uParam1->f_19)))
		{
			func_37(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2793044.f_4692), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_638()//Position - 0x18609
{
	if (func_648())
	{
		return 0;
	}
	if (func_526())
	{
		return 0;
	}
	if (!func_646())
	{
		return 0;
	}
	if (!func_512())
	{
		return 0;
	}
	if (func_645(8, -1))
	{
		return 0;
	}
	if (func_649() == 2)
	{
		return 0;
	}
	if (Global_2793044.f_4642)
	{
		return 0;
	}
	if (func_305())
	{
		return 0;
	}
	else if (!func_344(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_644(1) || func_642(1)) || Global_23131.f_124) || Global_23131)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_641() && Global_1969891 == 2)
	{
		return 0;
	}
	if (func_101(PLAYER::PLAYER_ID()) && !func_641())
	{
		return 0;
	}
	if (Global_1935176)
	{
		return 0;
	}
	if (Global_1935181)
	{
		return 0;
	}
	if (func_640(0))
	{
		return 0;
	}
	if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 4))
	{
		return 0;
	}
	if (Global_1648740)
	{
		return 0;
	}
	if ((Global_1964005.f_718.f_5 || Global_1966831.f_718.f_5) || Global_1963033.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1970895.f_724.f_5 || Global_1970895.f_744.f_724.f_5) || Global_1970895.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1977693.f_726.f_5)
	{
		return 0;
	}
	if (func_639(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1648781 || Global_1648782) || Global_1648783)
	{
		return 0;
	}
	return 1;
}

int func_639(int iParam0)//Position - 0x187E1
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 6);
}

bool func_640(int iParam0)//Position - 0x18806
{
	return BitTest(Global_2793044.f_5225.f_47, iParam0);
}

bool func_641()//Position - 0x1881A
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1969892, 0));
}

int func_642(bool bParam0)//Position - 0x18836
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_643(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23131.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_643(int iParam0)//Position - 0x18921
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_644(bool bParam0)//Position - 0x1897E
{
	if (bParam0)
	{
		return (Global_23131.f_4 && Global_23131.f_104 == 4);
	}
	return Global_23131.f_4;
}

bool func_645(int iParam0, int iParam1)//Position - 0x189A7
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

int func_646()//Position - 0x189DF
{
	if (func_647())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_647()//Position - 0x18A1E
{
	return Global_1574604;
}

bool func_648()//Position - 0x18A2A
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

int func_649()//Position - 0x18A3F
{
	return Global_1653913.f_68;
}

int func_650()//Position - 0x18A4D
{
	if (Global_1836369 > 16)
	{
		return 1;
	}
	return 0;
}

float func_651()//Position - 0x18A63
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_652(int iParam0)//Position - 0x18A87
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_653()//Position - 0x18AB9
{
	if (func_656())
	{
		return 1;
	}
	if (func_6(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_624())
	{
		return 1;
	}
	if (func_446(PLAYER::PLAYER_ID()))
	{
		switch (func_309(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_654(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_654(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_654(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_654(int iParam0)//Position - 0x18B94
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 4);
}

int func_655(int iParam0)//Position - 0x18BA9
{
	if (iParam0 == 28)
	{
		if ((func_446(PLAYER::PLAYER_ID()) && !func_107(PLAYER::PLAYER_ID())) && !func_560(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_113(PLAYER::PLAYER_ID(), 0) && func_107(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_519(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_656()//Position - 0x18C18
{
	if (func_657(PLAYER::PLAYER_ID()))
	{
		return Global_1581949;
	}
	return 0;
}

int func_657(bool bParam0)//Position - 0x18C33
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_71(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return 0;
}

void func_658()//Position - 0x18C56
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_101)))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_101));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			func_659(bVar0, 2);
		}
	}
	iLocal_101++;
	if (iLocal_101 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_101 = 0;
	}
}

void func_659(bool bParam0, int iParam1)//Position - 0x18C9F
{
	bool bVar0;
	
	if (BitTest(Global_1836858.f_1, 0))
	{
		return;
	}
	if (func_38(&(Global_1836858.f_18)))
	{
		return;
	}
	if (BitTest(Global_1836858.f_2, bParam0))
	{
		if (Global_1836858 < iParam1 && BitTest(Global_1836858.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1836858.f_1), 0);
			return;
		}
		if (Global_1836858 != 0)
		{
			MISC::SET_BIT(&(Global_1836858.f_1), 1);
		}
		Global_1836858 = 0;
		Global_1836858.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1836858.f_2), bParam0);
	bVar0 = true;
	if (func_7(bParam0))
	{
		bVar0 = false;
	}
	if (func_660(bParam0))
	{
		bVar0 = false;
	}
	if (func_71(bParam0, 0))
	{
		bVar0 = false;
	}
	if (func_6(bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1836858++;
	}
}

bool func_660(bool bParam0)//Position - 0x18D64
{
	return BitTest(Global_1894573[bParam0 /*608*/].f_1, 10);
}

void func_661(int iParam0, int iParam1)//Position - 0x18D7A
{
	Local_1499[iParam0 /*5*/] = iParam1;
}

int func_662()//Position - 0x18D8B
{
	struct<71> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_38 = 32;
	Global_2793044.f_5073 = { Var0 };
	iVar1 = 0;
	while (iVar1 < func_663())
	{
		Global_2793044.f_5073.f_38[iVar1] = -1;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		Local_153.f_534[iVar2 /*42*/].f_1 = func_103();
		iVar2++;
	}
	return 1;
}

int func_663()//Position - 0x18DFE
{
	if (Global_2691794)
	{
		return 32;
	}
	return (32 - Global_2691795);
}

int func_664()//Position - 0x18E19
{
	return Local_132.f_0;
}

int func_665(int iParam0)//Position - 0x18E24
{
	return Local_1499[iParam0 /*5*/];
}

void func_666()//Position - 0x18E33
{
	if (BitTest(Global_1836858.f_1, 6))
	{
		func_691();
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 6);
	}
	if (!BitTest(Global_1836858.f_1, 7))
	{
		if (BitTest(Global_1836858.f_1, 4) || BitTest(Global_1836858.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_181()) && func_13(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836858.f_1), 7);
				func_174("FME_PASINT" /* GXT: You will not be able to take part in this event in Passive Mode. */, 30000);
				func_173(1);
			}
		}
		else if (BitTest(Global_1836858.f_1, 17))
		{
			if (func_349() && !func_361())
			{
				MISC::CLEAR_BIT(&(Global_1836858.f_1), 17);
				MISC::SET_BIT(&(Global_1836858.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836858.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2793044.f_848, 2)) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75693) && !Global_60543) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_689())
			{
				func_174("AMEV_GA_RP" /* GXT: When in an active Gang Attack location, some other players may not be attackable. */, -1);
				if (func_250(PLAYER::PLAYER_ID()) != 200)
				{
					func_173(1);
				}
				MISC::SET_BIT(&(Global_1836858.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_461(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
		}
	}
	if (BitTest(Global_1836858.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_181()) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && !func_360(PLAYER::PLAYER_ID(), 21)) && !func_360(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836858.f_1), 9);
			func_688(0);
			func_174("FME_TBL00" /* GXT: Job & Activity Triggers have been temporarily hidden as you are now an active participant in the current Freemode Event. They will return once the Event is over. */, -1);
			func_173(1);
		}
	}
	if (func_446(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836858.f_1, 18))
		{
			if ((func_360(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836858.f_1, 20)) && !BitTest(Global_1836858.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836858.f_1), 18);
			}
		}
		else if (BitTest(Global_1836858.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_181()) && func_13(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_687())
			{
				MISC::CLEAR_BIT(&(Global_1836858.f_1), 18);
				MISC::SET_BIT(&(Global_1836858.f_1), 19);
				func_174("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				func_173(1);
			}
		}
	}
	if (((((func_446(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID())) && func_309(PLAYER::PLAYER_ID()) != 146) && !func_6(PLAYER::PLAYER_ID())) && !func_533(PLAYER::PLAYER_ID())) && !func_677())
	{
		if (func_460(func_309(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836858.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836858.f_1), 22);
		}
		if (func_476(PLAYER::PLAYER_ID()) || func_454())
		{
			if (!BitTest(Global_1836858.f_1, 10))
			{
				if (func_675(func_309(PLAYER::PLAYER_ID())))
				{
					if (func_292(0) && !Global_4585348)
					{
						MISC::SET_BIT(&(Global_1836858.f_1), 9);
					}
					if (!Global_4585348)
					{
						func_458(1);
						MISC::SET_BIT(&(Global_1836858.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836858.f_1), 10);
			}
		}
		if (func_461(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836858.f_1, 11))
			{
				if (!Global_100733.f_8)
				{
					MISC::SET_BIT(&(Global_1836858.f_1), 12);
					func_456(1);
				}
				if (!func_674())
				{
					MISC::SET_BIT(&(Global_1836858.f_1), 13);
					func_455();
				}
				if (!Global_4585348)
				{
					MISC::SET_BIT(&(Global_1836858.f_1), 14);
					if (func_292(0) && !Global_4585348)
					{
						MISC::SET_BIT(&(Global_1836858.f_1), 9);
					}
					func_458(1);
				}
				MISC::SET_BIT(&(Global_1836858.f_1), 11);
			}
		}
		else
		{
			func_672(0);
		}
	}
	else
	{
		func_672(1);
	}
	func_667();
	if (func_453(func_309(PLAYER::PLAYER_ID())) && !BitTest(Global_1836858.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836858.f_1), 21);
	}
	if (((func_349() && !func_361()) || func_360(PLAYER::PLAYER_ID(), 21)) || func_360(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 10);
	}
}

void func_667()//Position - 0x1933A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_181())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_499(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (BitTest(Global_1836858.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1836858.f_1), 26);
				}
				func_668(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836858.f_1, 26))
	{
		func_37(&(Global_1836858.f_22));
		MISC::SET_BIT(&(Global_1836858.f_1), 26);
	}
}

void func_668(int iParam0, int iParam1)//Position - 0x193D7
{
	if (!func_38(&(Global_1836858.f_22)))
	{
		func_2(&(Global_1836858.f_22), 0, 0);
	}
	else if (func_1(&(Global_1836858.f_22), iParam1, 0))
	{
		if (func_649() > 0)
		{
			func_671(iParam0);
			if (func_171("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_37(&(Global_1836858.f_22));
		}
	}
	else
	{
		func_670(0);
		func_669();
	}
}

void func_669()//Position - 0x1943F
{
	Global_2793044.f_4629 = 0;
}

void func_670(int iParam0)//Position - 0x1944F
{
	Global_1653913.f_68 = iParam0;
}

void func_671(int iParam0)//Position - 0x1945F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672505.f_2513[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
			func_104(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_672(int iParam0)//Position - 0x194AB
{
	if ((BitTest(Global_1836858.f_1, 11) || (BitTest(Global_1836858.f_1, 10) && iParam0)) || (BitTest(Global_1836858.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836858.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836858.f_1), 12);
			func_456(0);
		}
		if (BitTest(Global_1836858.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836858.f_1), 13);
			func_673();
		}
		if (BitTest(Global_1836858.f_1, 14) && !func_113(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836858.f_1), 14);
			func_458(0);
		}
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 22);
	}
}

void func_673()//Position - 0x19574
{
	MISC::CLEAR_BIT(&(Global_2793044.f_5063), 0);
}

bool func_674()//Position - 0x19588
{
	return BitTest(Global_2793044.f_5063, 0);
}

int func_675(int iParam0)//Position - 0x19599
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_461(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_454() || func_676(func_308()));
		
		default:
	}
	return 0;
}

int func_676(int iParam0)//Position - 0x19609
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_677()//Position - 0x19641
{
	if (((((((((func_686() || func_685()) || func_684()) || func_305()) || (func_683() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_680() && !func_679())) || Global_2625211) || Global_2625211.f_1 != 0) || Global_2625286 != 0) || (func_678() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_678()//Position - 0x196D5
{
	return Global_1057409;
}

bool func_679()//Position - 0x196E1
{
	return BitTest(Global_2683862.f_2, 27);
}

int func_680()//Position - 0x196F2
{
	if (func_682() || func_681())
	{
		return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_95 == 8;
	}
	return 0;
}

var func_681()//Position - 0x1971F
{
	return Global_2683862.f_735;
}

var func_682()//Position - 0x1972E
{
	return BitTest(Global_2683862.f_2, 11);
}

var func_683()//Position - 0x1973F
{
	return BitTest(Global_2683862, 5);
}

var func_684()//Position - 0x1974D
{
	return BitTest(Global_2683862, 2);
}

var func_685()//Position - 0x1975B
{
	return BitTest(Global_2683862, 20);
}

bool func_686()//Position - 0x1976A
{
	return Global_2683862.f_698;
}

bool func_687()//Position - 0x19779
{
	return Global_2793044.f_5158 != -1;
}

void func_688(int iParam0)//Position - 0x1978A
{
	int iVar0;
	
	iVar0 = func_237(2537, -1, 0);
	if (iParam0 == 0)
	{
		if (!BitTest(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!BitTest(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!BitTest(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!BitTest(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!BitTest(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!BitTest(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!BitTest(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!BitTest(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!BitTest(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!BitTest(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!BitTest(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_228(2537, iVar0, -1, 1, 0);
}

int func_689()//Position - 0x1989E
{
	int iVar0;
	
	if (!func_38(&(Global_1836858.f_15)))
	{
		func_2(&(Global_1836858.f_15), 0, 0);
		Global_1836858.f_17 = 0;
	}
	else if (func_1(&(Global_1836858.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836858.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836858.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_13(iVar0, 1, 1) && func_690(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_31(PLAYER::PLAYER_ID()), func_31(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836858.f_17++;
		if (Global_1836858.f_17 >= 32)
		{
			Global_1836858.f_17 = 0;
			func_37(&(Global_1836858.f_15));
		}
	}
	return 0;
}

int func_690(int iParam0, int iParam1)//Position - 0x19966
{
	int iVar0;
	
	if (func_374() != 0)
	{
		return 0;
	}
	if (!func_232(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853910[iVar0 /*862*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_691()//Position - 0x1999F
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_693();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836858.f_1), 8);
	func_692();
}

void func_692()//Position - 0x199C5
{
	if (Global_1945089)
	{
		if (BitTest(Global_1945090, 0))
		{
			MISC::CLEAR_BIT(&Global_2802658, 0);
		}
		if (BitTest(Global_1945090, 1))
		{
			MISC::CLEAR_BIT(&Global_2802658, 1);
		}
		if (BitTest(Global_1945090, 5))
		{
			MISC::CLEAR_BIT(&Global_2802658, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1945090 = 0;
	}
	Global_1945089 = 0;
}

void func_693()//Position - 0x19ABC
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2793044.f_5221))
	{
		if (!Global_2793044.f_5221 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2793044.f_5220 < 1f)
		{
			return;
		}
	}
	Global_2793044.f_5221 = -1;
	Global_2793044.f_5220 = 1f;
}

int func_694()//Position - 0x19B03
{
	if (func_695())
	{
		return 1;
	}
	return 0;
}

bool func_695()//Position - 0x19B17
{
	return Global_1836858.f_24;
}

int func_696()//Position - 0x19B25
{
	if (Global_1575035 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_699())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_698())
	{
		return 1;
	}
	if (func_697(159))
	{
		if (!func_686())
		{
			return 1;
		}
	}
	if (func_697(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_463() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_463()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_697(int iParam0)//Position - 0x19BA9
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_698()//Position - 0x19BC0
{
	return Global_2694524;
}

bool func_699()//Position - 0x19BCC
{
	return Global_2683862.f_693;
}

void func_700()//Position - 0x19BDB
{
	SYSTEM::WAIT(0);
}

void func_701()//Position - 0x19BE8
{
	var uVar0[4];
	int iVar1;
	var uVar2;
	
	func_183();
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (BitTest(uLocal_127, iVar1) && !AUDIO::HAS_SOUND_FINISHED(iLocal_128[iVar1]))
		{
			AUDIO::STOP_SOUND(iLocal_128[iVar1]);
			AUDIO::RELEASE_SOUND_ID(iLocal_128[iVar1]);
		}
		iVar1++;
	}
	func_449();
	func_502(0);
	func_705(132, 0, Local_132.f_8 == 6);
	func_469(22, 0);
	Global_2793044.f_5144 = -1;
	uVar0[0] = Local_132.f_3[0];
	uVar0[1] = Local_132.f_3[1];
	uVar0[2] = Local_132.f_3[2];
	uVar0[3] = Local_132.f_3[3];
	func_704(&(uVar0[0]));
	func_704(&(uVar0[1]));
	func_704(&(uVar0[2]));
	func_704(&(uVar0[3]));
	if (func_696())
	{
		Local_1498.f_5 = 5;
	}
	else if (BitTest(Local_132.f_2, 2))
	{
		Local_1498.f_5 = 6;
	}
	else if (Local_1498.f_5 != 1)
	{
		Local_1498.f_5 = 2;
	}
	Local_1498.f_0 = Local_132.f_724;
	Local_1498.f_1 = Local_132.f_725;
	Local_1498.f_4 = Local_132.f_726;
	Local_1498.f_3 = Local_132.f_728;
	Local_1498.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_1498.f_9);
	uVar2 = Local_132.f_712;
	if (Local_132.f_707)
	{
		uVar2 = Local_132.f_712 + 4;
	}
	if (!Global_262145.f_11974 /* Tunable: CHECKPOINTS_DISABLE_SHARE_CASH */)
	{
		if (Local_1498.f_6 > 0)
		{
		}
	}
	Local_1498.f_6 = (Local_1498.f_6 + iLocal_106);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_702(Local_1498, uVar2, Local_1499[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
	}
	func_495(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_702(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x19D9E
{
	char* sVar0;
	struct<13> Var1;
	struct<15> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_78558)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			STATS::PLAYSTATS_FM_EVENT_VEHICLETARGET(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_703()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			Var2.f_14 = iParam3;
			STATS::PLAYSTATS_FM_EVENT_ATOB(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = uParam4;
			Var3.f_16 = uParam5;
			Var3.f_17 = uParam6;
			STATS::PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = SYSTEM::TO_FLOAT(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			STATS::PLAYSTATS_FM_EVENT_CHALLENGES(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::PLAYSTATS_FM_EVENT_PENNEDIN(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			STATS::PLAYSTATS_FM_EVENT_PASSTHEPARCEL(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			STATS::PLAYSTATS_FM_EVENT_HOTPROPERTY(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			STATS::PLAYSTATS_FM_EVENT_DEADDROP(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = uParam4;
			STATS::PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			STATS::PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				STATS::PLAYSTATS_FM_EVENT_URBANWARFARE(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				STATS::PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(&Var11);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			STATS::PLAYSTATS_FM_EVENT_HUNTBEAST(&Var12);
		}
	}
}

char* func_703()//Position - 0x1A019
{
	switch (Global_2697019)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_704(int* iParam0)//Position - 0x1A03B
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(*iParam0, bVar0))
		{
			MISC::CLEAR_BIT(iParam0, bVar0);
		}
		else
		{
			MISC::SET_BIT(iParam0, bVar0);
		}
		bVar0++;
	}
}

void func_705(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A072
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 13);
		}
		if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836858.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836858.f_1), 21);
	}
	func_735();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_734(func_309(PLAYER::PLAYER_ID()));
		func_469(func_470(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_733(PLAYER::PLAYER_ID()) >= 12)
		{
			func_732(2549, -1);
			iVar1 = func_237(2549, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836884, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836884, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836884, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836884, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836884, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836884, 5);
			}
		}
		func_731();
		func_730();
		func_729();
		if ((!func_109(PLAYER::PLAYER_ID()) && !func_180(PLAYER::PLAYER_ID())) && !func_478())
		{
			func_713();
		}
		func_712();
		if (!BitTest(Global_1947724.f_3, 0) && !BitTest(Global_1947724.f_3, 1))
		{
			func_691();
		}
		func_711();
		MISC::CLEAR_BIT(&(Global_2793044.f_1841), 2);
		func_182();
		func_166();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_360(PLAYER::PLAYER_ID(), 21)) && !func_360(PLAYER::PLAYER_ID(), 25)) && !func_113(PLAYER::PLAYER_ID(), 0))
		{
			func_458(0);
			func_456(0);
			if (!bParam1)
			{
				func_710();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_42(26, -1))
		{
			Global_2696843 = -1;
			func_39(26, -1);
		}
	}
	if (!func_706())
	{
		Global_2764092 = 1;
	}
}

int func_706()//Position - 0x1A2CF
{
	if (((((((!func_629(PLAYER::PLAYER_ID()) && !func_610(PLAYER::PLAYER_ID())) && func_309(PLAYER::PLAYER_ID()) != 146) && !func_709()) && !func_708()) && !func_707(Global_4718592.f_166301)) && !func_93()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_707(int iParam0)//Position - 0x1A34A
{
	return iParam0 == 57;
}

int func_708()//Position - 0x1A357
{
	if (Global_4718592.f_113724 == Global_262145.f_10063 /* Tunable: TRANSFORM_INFERNO */)
	{
		return 1;
	}
	return 0;
}

int func_709()//Position - 0x1A378
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_166301 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_710()//Position - 0x1A410
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_4543624[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_4543624[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_4543624[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_711()//Position - 0x1A460
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836858 = { Var0 };
}

void func_712()//Position - 0x1A48F
{
	var uVar0;
	
	Global_1581949 = uVar0;
}

void func_713()//Position - 0x1A49D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_24), &Global_2639845, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_26), &Global_2639847, 19);
	func_727();
	func_716(1, 1, 0);
	func_714();
}

void func_714()//Position - 0x1A4D3
{
	func_715(0, 0);
}

void func_715(int iParam0, int iParam1)//Position - 0x1A4E1
{
	Global_2635559.f_22 = iParam0;
	Global_2635559.f_23 = iParam1;
}

void func_716(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1A4F9
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_45), &Global_2639866, 323);
	}
	else
	{
		Global_2635559.f_45 = { Global_2639866 };
		Global_2635559.f_45.f_49 = { Global_2639866.f_49 };
		Global_2635559.f_45.f_52 = Global_2639866.f_52;
		Global_2635559.f_45.f_53 = Global_2639866.f_53;
	}
	if (bParam0)
	{
		func_726();
	}
	if (!bParam2)
	{
		func_718(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_717(0);
	func_169();
}

void func_717(bool bParam0)//Position - 0x1A59F
{
	if (bParam0)
	{
		Global_2635559.f_713 = 0;
	}
	else
	{
		Global_2635559.f_713 = 1;
	}
}

void func_718(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1A5BF
{
	if (bParam0)
	{
		if (func_725())
		{
			func_724();
		}
		Global_2635559.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635559.f_714.f_504 = iParam1;
		Global_2635559.f_714.f_505 = iParam2;
		Global_2635559.f_714.f_506 = iParam10;
		func_722();
		func_473(8, 0, 0, 0, 0);
		Global_2635559.f_714.f_507 = iParam11;
		Global_2635559.f_714.f_512 = iParam3;
		Global_2635559.f_714.f_513 = iParam4;
		Global_2635559.f_714.f_510 = iParam5;
		Global_2635559.f_714.f_511 = iParam6;
		Global_2635559.f_714.f_514 = iParam7;
		Global_2635559.f_714.f_515 = iParam8;
		Global_2635559.f_714.f_516 = iParam9;
		Global_2635559.f_714.f_517 = iParam14;
		Global_2635559.f_714.f_508 = iParam12;
		Global_2635559.f_714.f_509 = iParam13;
		Global_2635559.f_1753 = 1;
	}
	else
	{
		func_719();
	}
}

void func_719()//Position - 0x1A6AA
{
	if (func_725() && !func_721())
	{
		func_724();
	}
	if (func_721())
	{
		func_720();
	}
	else
	{
		func_722();
		func_473(0, 0, 0, 0, 0);
		Global_2635559.f_1753 = 0;
		Global_2635559.f_1752 = 0;
	}
}

void func_720()//Position - 0x1A6F2
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_714), &(Global_2635559.f_1233), 519);
	Global_2635559.f_490 = { Global_2635559.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_714.f_518)
	{
		Global_2635559.f_1752 = 0;
	}
}

int func_721()//Position - 0x1A73A
{
	if ((Global_2635559.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

void func_722()//Position - 0x1A779
{
	if (func_725() && !func_721())
	{
		func_724();
	}
	func_723();
	Global_2635559.f_714 = 0;
}

void func_723()//Position - 0x1A7A2
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635559.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_724()//Position - 0x1A7DD
{
	if (func_721())
	{
		if (Global_2635559.f_714.f_518 == Global_2635559.f_1233.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_714.f_518)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_1233), &(Global_2635559.f_714), 519);
		Global_2635559.f_496 = { Global_2635559.f_490 };
		Global_2635559.f_1752 = 1;
	}
}

int func_725()//Position - 0x1A84B
{
	if ((Global_2635559.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_726()//Position - 0x1A88A
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_368), &Global_2640189, 121);
}

void func_727()//Position - 0x1A8A3
{
	func_728();
}

void func_728()//Position - 0x1A8AF
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2635559.f_2263[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635559.f_2262 = 0;
}

void func_729()//Position - 0x1A8E3
{
	Global_2793044.f_5063 = 0;
}

void func_730()//Position - 0x1A8F3
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1 = 0;
	}
}

void func_731()//Position - 0x1A911
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1894573[iVar0 /*608*/] = -1;
	}
}

void func_732(int iParam0, int iParam1)//Position - 0x1A92F
{
	int iVar0;
	
	iVar0 = func_237(iParam0, func_233(iParam1), 0);
	iVar0++;
	if (!func_236(iParam0))
	{
		func_228(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_229(iParam0, iVar0, iParam1, 1);
	}
}

int func_733(int iParam0)//Position - 0x1A970
{
	return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

int func_734(int iParam0)//Position - 0x1A985
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_461(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_735()//Position - 0x1A9E7
{
	if (BitTest(Global_2793044.f_1828, 3) || BitTest(Global_2793044.f_1828, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2793044.f_1828, 5))
	{
		MISC::CLEAR_BIT(&(Global_2793044.f_1828), 5);
	}
	if (BitTest(Global_2793044.f_1828, 3))
	{
		MISC::CLEAR_BIT(&(Global_2793044.f_1828), 3);
	}
	if (BitTest(Global_2793044.f_1828, 4))
	{
		MISC::CLEAR_BIT(&(Global_2793044.f_1828), 4);
	}
	func_738(0);
	func_737(0);
	func_736(0);
}

void func_736(int iParam0)//Position - 0x1AA79
{
	if (Global_2793044.f_4617 != iParam0)
	{
		Global_2793044.f_4617 = iParam0;
	}
}

void func_737(bool bParam0)//Position - 0x1AA96
{
	if (Global_2793044.f_4616 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2793044.f_4616 = bParam0;
	}
}

void func_738(int iParam0)//Position - 0x1AABB
{
	if (Global_2793044.f_4614 != iParam0)
	{
		Global_2793044.f_4614 = iParam0;
	}
}

int func_739(struct<21> Param0)//Position - 0x1AAD8
{
	func_747(func_748(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_746(8));
	func_743(0, -1, 0);
	func_741(132);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_132, 750, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1499, 161, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_740())
	{
		func_701();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_132.f_724), &(Local_132.f_725));
	}
	Local_1498.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	Local_1498.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Local_1498.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_469(22, 1);
	return 1;
}

int func_740()//Position - 0x1AB6D
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
		if (func_699())
		{
			return 0;
		}
		if (func_697(157))
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

void func_741(int iParam0)//Position - 0x1ABC6
{
	func_711();
	func_742();
	func_729();
	Global_1836858.f_4 = iParam0;
	Global_1836858.f_5 = iParam0;
	func_468(iParam0, -1);
	func_20(&(Global_1836858.f_18), 0, 0);
	Global_2793044.f_4687 = 0;
	Global_2695727[0] = func_103();
	Global_2695727[1] = func_103();
	Global_2695727[2] = func_103();
	Global_2695727[3] = func_103();
	Global_2695727[4] = func_103();
	func_166();
	if (!func_515(func_199()))
	{
		func_198();
	}
	if (func_349() && !func_361())
	{
		MISC::SET_BIT(&(Global_1836858.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836858.f_1), 17);
	}
}

void func_742()//Position - 0x1AC7C
{
	var uVar0;
	
	Global_1836883 = uVar0;
}

int func_743(int iParam0, int iParam1, bool bParam2)//Position - 0x1AC8A
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_745();
			}
			else
			{
				return 0;
			}
		}
		if (!func_744(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_745();
					}
					else
					{
						return 0;
					}
				}
				if (func_699())
				{
					if (!bParam2)
					{
						func_745();
					}
					else
					{
						return 0;
					}
				}
				if (func_697(157))
				{
					if (!bParam2)
					{
						func_745();
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
					func_745();
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
				func_745();
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
			func_745();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_744(bool bParam0)//Position - 0x1ADA0
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_745()//Position - 0x1ADB1
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_746(int iParam0)//Position - 0x1ADBD
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

void func_747(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1AE97
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_745();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_748(int iParam0)//Position - 0x1AEB6
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
		
		case 173:
			return 32;
		
		case 174:
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
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_123(func_749(iParam0, 1)))
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

int func_749(int iParam0, bool bParam1)//Position - 0x1B637
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
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
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

