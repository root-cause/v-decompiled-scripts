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
	var uLocal_88 = -1;
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
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_129[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_140 = NULL;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
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
	var uLocal_155 = 16;
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
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
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
	var uLocal_319 = 0;
	var uLocal_320[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_330[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<16> Local_362[31];
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 12;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
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
	var uLocal_890 = 0;
	var uLocal_891 = 0;
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
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
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
	var uLocal_932 = 0;
	var uLocal_933 = 0;
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
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
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
	var uLocal_974 = 0;
	var uLocal_975 = 0;
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
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
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
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
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
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
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
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
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
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
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
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
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
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
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
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
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
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
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
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
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
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
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
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
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
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
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
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
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
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
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
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
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
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
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
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
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
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
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
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
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
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
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
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
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
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
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
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
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
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 1065353216;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	int iLocal_1571 = 0;
	int iLocal_1572 = 0;
	int iLocal_1573 = 0;
	int iLocal_1574 = 0;
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
	iLocal_114 = -1;
	sLocal_140 = "";
	iLocal_144 = 8;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("appSmuggler")) > 1)
	{
		func_451(0, 1);
	}
	func_440();
	while (func_439())
	{
		func_438();
		if (!BitTest(uLocal_112, 5) && func_437())
		{
			func_435();
			func_412();
		}
		if (!BitTest(uLocal_112, 8) && BitTest(uLocal_112, 5))
		{
			func_406();
		}
		func_398();
		if (Global_75986)
		{
			Global_75984 = 1;
			func_396();
		}
		else
		{
			func_371();
		}
		func_328();
		func_320();
		func_318();
		func_280();
		if (!BitTest(uLocal_112, 2))
		{
			func_6();
		}
		else if (!func_5(&uLocal_145))
		{
			func_4(&uLocal_145, 0, 0);
		}
		else if (func_3(&uLocal_145, 200, 0))
		{
			if (!Global_1950844.f_3432 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_1(1);
				Global_1950700 = 1;
				func_451(0, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x168
{
	if (!func_2())
	{
		Global_1950844.f_3432 = 1;
		Global_1950844.f_3433 = iParam0;
	}
}

bool func_2()//Position - 0x189
{
	return Global_1950844.f_529;
}

int func_3(var uParam0, int iParam1, bool bParam2)//Position - 0x198
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

void func_4(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F6
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

bool func_5(var uParam0)//Position - 0x23B
{
	return uParam0->f_1;
}

void func_6()//Position - 0x247
{
	int iVar0;
	
	func_278();
	if (BitTest(uLocal_112, 0))
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_860))
		{
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_860);
			switch (iVar0)
			{
				case 0:
					func_277();
					func_276();
					break;
				
				case 1:
					func_275();
					break;
				
				case 38:
					func_223();
					break;
				
				case 35:
					if (iLocal_142 != 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_142 = 0;
					break;
				
				case 36:
					if (iLocal_142 != 1)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_142 = 1;
					break;
				
				case 37:
					if (iLocal_142 != 2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
					}
					iLocal_142 = 2;
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
					func_205(func_222(iVar0), 0);
					break;
				
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
					if (func_204(15964, -1))
					{
						func_205(func_222(iVar0), 0);
					}
					else
					{
						iLocal_142 = 2;
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SHOW_SCREEN", 2f, -1f, -1f, -1f, -1f);
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
					func_7(func_222(iVar0));
					break;
			}
			MISC::CLEAR_BIT(&uLocal_112, 0);
		}
	}
}

void func_7(int iParam0)//Position - 0x3F5
{
	struct<2> Var0;
	struct<4> Var4;
	
	if (func_203(PLAYER::PLAYER_ID()))
	{
		func_200("HAPP_STEAL_T" /* GXT: SOURCE CARGO */, "HAPP_STEAL_D" /* GXT: Your Cargo storage area is full. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
	}
	else if (iParam0 != 8 && func_198(iParam0))
	{
		func_200("HAPP_STEAL_T" /* GXT: SOURCE CARGO */, "HAPP_STEAL_D1" /* GXT: There is a short waiting period while Ron sources additional Cargo for you to steal. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
	}
	else if (!func_12(229))
	{
		func_200("HAPP_STEAL_T" /* GXT: SOURCE CARGO */, func_11(), "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
	}
	else
	{
		func_10(iParam0);
		StringCopy(&Var0, "HAPP_STEAL_C1" /* GXT: Are you sure you'd like to source Cargo for your Hangar? */, 16);
		StringCopy(&Var4, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var0, "HAPP_STEAL_C0" /* GXT: Are you sure you'd like to source ~a~? */, 16);
			Var4 = { func_9(iParam0) };
		}
		func_200("HAPP_STEAL_T" /* GXT: SOURCE CARGO */, &Var0, "HAPP_B_AIR" /* GXT: Air */, "WHOUSE_CANC" /* GXT: Cancel */, 0, 1, -1, 2, -1, &Var4, "HAPP_B_LAND" /* GXT: Land */);
	}
	func_8();
}

void func_8()//Position - 0x4B9
{
	sLocal_140 = "";
}

struct<4> func_9(int iParam0)//Position - 0x4C5
{
	struct<4> Var0;
	
	StringCopy(&Var0, "INVALID", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPPT_ANIMAL" /* GXT: Animal Materials */, 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPPT_ART" /* GXT: Art & Antiques */, 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPPT_CHEMS" /* GXT: Chemicals */, 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPPT_GOODS" /* GXT: Counterfeit Goods */, 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPPT_JEWEL" /* GXT: Jewelry & Gemstones */, 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPPT_MEDS" /* GXT: Medical Supplies */, 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPPT_NARC" /* GXT: Narcotics */, 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPPT_TOBAC" /* GXT: Tobacco & Alcohol */, 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPPT_MIXED" /* GXT: Cargo */, 16);
			break;
	}
	return Var0;
}

void func_10(int iParam0)//Position - 0x576
{
	iLocal_144 = iParam0;
}

char* func_11()//Position - 0x582
{
	return sLocal_140;
}

int func_12(int iParam0)//Position - 0x58C
{
	int iVar0;
	
	if (!func_197(PLAYER::PLAYER_ID(), iParam0, 0))
	{
		iVar0 = func_22(PLAYER::PLAYER_ID(), iParam0, 0);
		if (iVar0 == 7)
		{
			if (func_20(PLAYER::PLAYER_ID()))
			{
				func_19("UA_ML_F_GOON1" /* GXT: Can't launch this mission whilst one of your Club Members is active in a Freemode Event. */);
			}
			else if (func_18(PLAYER::PLAYER_ID()))
			{
				func_19("UA_ML_F_GOON2" /* GXT: Can't launch this mission whilst one of your Associates is active in a Freemode Event. */);
			}
			else
			{
				func_19("UA_ML_F_GOON3" /* GXT: Can't launch this mission whilst one of your Bodyguards is active in a Freemode Event. */);
			}
		}
		else if (iVar0 == 15)
		{
			if (func_20(PLAYER::PLAYER_ID()))
			{
				func_19("GENERAL_MLF_G1" /* GXT: Can't launch this mission whilst one of your Club Members is currently at one with the animals. */);
			}
			else if (func_18(PLAYER::PLAYER_ID()))
			{
				func_19("GENERAL_MLF_G2" /* GXT: Can't launch this mission whilst one of your Associates is currently at one with the animals. */);
			}
			else
			{
				func_19("GENERAL_MLF_G3" /* GXT: Can't launch this mission whilst one of your Bodyguards is currently at one with the animals. */);
			}
		}
		else if (iVar0 == 16)
		{
			if (func_20(PLAYER::PLAYER_ID()))
			{
				func_19("GENERAL_MLF_G4" /* GXT: Can't launch this mission whilst one of your Club Members is playing a casino game. */);
			}
			else if (func_18(PLAYER::PLAYER_ID()))
			{
				func_19("GENERAL_MLF_G5" /* GXT: Can't launch this mission whilst one of your Associates is playing a casino game. */);
			}
			else
			{
				func_19("GENERAL_MLF_G6" /* GXT: Can't launch this mission whilst one of your Bodyguards is playing a casino game. */);
			}
		}
		else
		{
			func_19("BKR_TF_R6" /* GXT: Unable to launch the mission. */);
		}
		return 0;
	}
	if (!func_15(PLAYER::PLAYER_ID()))
	{
		func_19("DBG_BUN_NB" /* GXT: You can only launch this mission as the boss of a gang. */);
		return 0;
	}
	if (func_13(PLAYER::PLAYER_ID()))
	{
		func_19("BKR_TF_R3" /* GXT: Unable to launch a mission whilst you're on another job. */);
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_19("BKR_TF_R3" /* GXT: Unable to launch a mission whilst you're on another job. */);
		return 0;
	}
	return 1;
}

int func_13(int iParam0)//Position - 0x6B8
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_14(iParam0, 9);
	}
	return 0;
}

bool func_14(int iParam0, int iParam1)//Position - 0x6D6
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_15(int iParam0)//Position - 0x6EE
{
	if (func_17(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_16())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_16()//Position - 0x723
{
	return -1;
}

int func_17(var uParam0)//Position - 0x72C
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

int func_18(int iParam0)//Position - 0x74E
{
	if (!func_17(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 26);
}

void func_19(char* sParam0)//Position - 0x775
{
	sLocal_140 = sParam0;
}

bool func_20(int iParam0)//Position - 0x781
{
	return func_21(iParam0, 1);
}

int func_21(int iParam0, int iParam1)//Position - 0x790
{
	if (func_17(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_16())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, bool bParam2)//Position - 0x7DF
{
	int iVar0;
	int iVar1;
	
	if (!func_59(func_169(iParam1, -1, -1, -1), func_122(iParam1, -1, 1, -1, -1, iParam0), func_68(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_20(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_57(iParam1) >= func_56(iVar0))
	{
		return 5;
	}
	if (func_55(iParam0))
	{
		return 6;
	}
	if (func_54(iParam0))
	{
		return 14;
	}
	if (func_53(iParam0) && !func_50(iParam0))
	{
		return 17;
	}
	iVar1 = func_45(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_44(iParam1) == 1)
	{
		if ((func_43() || func_42()) || ((!bParam2 && func_41() != 0) && func_44(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_44(iParam1) == 2)
	{
		if (!func_38(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1895156[iParam0 /*609*/].f_10.f_34 != func_16())
			{
				return 9;
			}
		}
		if (func_37(iParam0))
		{
			return 10;
		}
	}
	else if (func_35(iParam1))
	{
		if (func_33(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_32(iParam1))
	{
		if (func_31())
		{
			return 13;
		}
		if (func_28())
		{
			return 12;
		}
	}
	if (func_33(iParam0) + 1 < func_27(iVar0))
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
			if (!func_24(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_23(iParam0, 21) || func_23(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

var func_23(int iParam0, int iParam1)//Position - 0x9CE
{
	return BitTest(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

int func_24(int iParam0, int iParam1)//Position - 0x9E4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_25(iVar1, iParam0, 1))
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

int func_25(int iParam0, int iParam1, bool bParam2)//Position - 0xA36
{
	if (func_17(iParam1))
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1895156[iParam0 /*609*/].f_10 != func_16())
		{
			return iParam1 == Global_1895156[iParam0 /*609*/].f_10;
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1)//Position - 0xA80
{
	if (iParam1 != func_16())
	{
		if (iParam0 != func_16())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 != func_16())
			{
				if (Global_1895156[iParam0 /*609*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0xAC5
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18813 /* Tunable: BIKER_GUNRUNNING_MIN_PLAYERS */;
		
		case 183:
			return Global_262145.f_18821 /* Tunable: BIKER_POW_MIN_PLAYERS */;
		
		case 185:
			return Global_262145.f_18830 /* Tunable: BIKER_GUNS_FOR_HIRE_MIN_PLAYERS */;
		
		case 182:
			return Global_262145.f_18841 /* Tunable: BIKER_BY_THE_POUND_MIN_PLAYERS */;
		
		case 186:
			return Global_262145.f_18850 /* Tunable: BIKER_WEAPON_OF_CHOICE_MIN_PLAYERS */;
		
		case 195:
			return Global_262145.f_18868 /* Tunable: BIKER_NINE_TENTHS_MIN_PLAYERS */;
		
		case 198:
			return Global_262145.f_18878 /* Tunable: BIKER_CRACKED_MIN_PLAYERS */;
		
		case 197:
			return Global_262145.f_18890 /* Tunable: BIKER_JAILBREAK_MIN_PLAYERS */;
		
		case 207:
			return Global_262145.f_18898 /* Tunable: BIKER_FRAGILE_GOODS_MIN_PLAYERS */;
		
		case 209:
			return Global_262145.f_18911 /* Tunable: BIKER_OUTRIDER_MIN_PLAYERS */;
		
		case 208:
			return Global_262145.f_18919 /* Tunable: BIKER_TORCHED_MIN_PLAYERS */;
		
		case 201:
			return Global_262145.f_18952 /* Tunable: BIKER_STAND_YOUR_GROUND_MIN_PLAYERS */;
		
		case 211:
			return Global_262145.f_19020 /* Tunable: BIKER_ON_THE_RUN_MIN_PLAYERS */;
		
		case 193:
			return Global_262145.f_19043 /* Tunable: BIKER_HIT_AND_RIDE_MIN_PLAYERS */;
		
		case 205:
			return Global_262145.f_19061 /* Tunable: BIKER_MISCHIEF_MIN_PLAYERS */;
		
		case 189:
			return Global_262145.f_19026 /* Tunable: BIKER_RACE_MIN_PLAYERS */;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_28()//Position - 0xBE9
{
	if (Global_1950705)
	{
		return 0;
	}
	return func_29();
}

int func_29()//Position - 0xC00
{
	if (func_30())
	{
		return 1;
	}
	return Global_2683883.f_744;
}

bool func_30()//Position - 0xC1A
{
	return Global_1575021 == 10;
}

bool func_31()//Position - 0xC29
{
	return Global_262145.f_15854 /* Tunable: EXEC_CONTRABAND_DISABLE */;
}

int func_32(int iParam0)//Position - 0xC38
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

int func_33(int iParam0)//Position - 0xC5E
{
	if (func_34(iParam0) == func_16())
	{
		return 0;
	}
	return Global_1895156[iParam0 /*609*/].f_10.f_19;
}

int func_34(int iParam0)//Position - 0xC84
{
	if (func_17(iParam0))
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_16();
}

int func_35(int iParam0)//Position - 0xCA7
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
	return func_36(iParam0, 0);
	return 0;
}

int func_36(int iParam0, int iParam1)//Position - 0xD01
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

int func_37(int iParam0)//Position - 0xD56
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1895156[iParam0 /*609*/].f_10.f_34 != func_16() && Global_1895156[iParam0 /*609*/].f_10.f_34 == iVar1) && Global_1895156[iVar1 /*609*/].f_10.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_38(int iParam0)//Position - 0xDC6
{
	switch (iParam0)
	{
		case 179:
			if (func_40() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_39() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_39() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_39()//Position - 0xE0F
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

int func_40()//Position - 0xE4C
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
			if (func_20(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_41()//Position - 0xE89
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_103;
}

bool func_42()//Position - 0xEA0
{
	return Global_1924276.f_11.f_144 != -1;
}

bool func_43()//Position - 0xEB2
{
	return Global_1924276.f_11.f_143 != -1;
}

int func_44(int iParam0)//Position - 0xEC4
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
		case 312:
		case 313:
		case 315:
		case 316:
		case 317:
			return 0;
		
		case 276:
		case 267:
		case 318:
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

int func_45(int iParam0)//Position - 0x114E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_47())
	{
		iVar1 = Global_1895156[iParam0 /*609*/].f_10.f_11[iVar0];
		if (iVar1 != func_16())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_55(iVar1))
				{
					return 7;
				}
				if (func_54(iVar1))
				{
					return 15;
				}
				if (func_46(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_46(int iParam0)//Position - 0x11BA
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (((((BitTest(Global_2657704[iParam0 /*463*/].f_321.f_4, 2) || BitTest(Global_2657704[iParam0 /*463*/].f_321.f_4, 3)) || BitTest(Global_2657704[iParam0 /*463*/].f_321.f_4, 5)) || BitTest(Global_2657704[iParam0 /*463*/].f_321.f_4, 6)) || BitTest(Global_2657704[iParam0 /*463*/].f_321.f_4, 7)) || BitTest(Global_1853988[iParam0 /*867*/].f_267.f_405.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_47()//Position - 0x1258
{
	return (func_48() - 1);
}

int func_48()//Position - 0x1266
{
	return func_49(PLAYER::PLAYER_ID());
}

int func_49(int iParam0)//Position - 0x1276
{
	int iVar0;
	
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_16() && Global_1895156[iVar0 /*609*/].f_10.f_429 == 1)
	{
		return 8;
	}
	return 4;
}

int func_50(int iParam0)//Position - 0x12B0
{
	if (iParam0 != func_16())
	{
		if (func_52(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_51(Global_2657704[iParam0 /*463*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_51(int iParam0)//Position - 0x12F7
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

int func_52(int iParam0, bool bParam1, bool bParam2)//Position - 0x17AB
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
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x180B
{
	if (iParam0 != func_16())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_5, 4);
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x1830
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2765083;
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

int func_55(int iParam0)//Position - 0x189C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x18BF
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_13214 /* Tunable: GB_POINTTOPOINT_INSTANCES_PERMITTED */;
		
		case 155:
			return Global_262145.f_13239 /* Tunable: GB_PROTECTIONRACKET_INSTANCES_PERMITTED */;
		
		case 153:
			return Global_262145.f_13203 /* Tunable: GB_MOSTWANTED_INSTANCES_PERMITTED */;
		
		case 163:
			return Global_262145.f_13179 /* Tunable: GB_CARJACKING_INSTANCES_PERMITTED */;
		
		case 160:
			return Global_262145.f_13192 /* Tunable: GB_FINDERS_KEEPERS_INSTANCES_PERMITTED */;
		
		case 154:
			return Global_262145.f_13249 /* Tunable: GB_SMASHANDGRAB_INSTANCES_PERMITTED */;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15681 /* Tunable: EXEC_CASHING_INSTANCES_PERMITTED */;
		
		case 172:
			return Global_262145.f_15700 /* Tunable: EXEC_SALVAGE_INSTANCES_PERMITTED */;
		
		case 148:
			return Global_262145.f_18927 /* Tunable: BIKER_DEATHMATCH_MAX_INSTANCES */;
		
		case 179:
			return Global_262145.f_18935 /* Tunable: BIKER_JOUST_MAX_INSTANCES */;
		
		case 201:
			return Global_262145.f_18949 /* Tunable: BIKER_STAND_YOUR_GROUND_MAX_INSTANCES */;
		
		case 200:
			return Global_262145.f_18989 /* Tunable: BIKER_CAGED_IN_MAX_INSTANCES */;
		
		case 211:
			return Global_262145.f_19018 /* Tunable: BIKER_ON_THE_RUN_MAX_INSTANCES */;
		
		case 194:
			return Global_262145.f_19030 /* Tunable: BIKER_RIPPIN_MAX_INSTANCES */;
		
		case 193:
			return Global_262145.f_19041 /* Tunable: BIKER_HIT_AND_RIDE_MAX_INSTANCES */;
		
		case 210:
			return Global_262145.f_19053 /* Tunable: BIKER_WHEELIE_MAX_INSTANCES */;
		
		case 205:
			return Global_262145.f_19059 /* Tunable: BIKER_MISCHIEF_MAX_INSTANCES */;
		
		case 199:
			return Global_262145.f_19072 /* Tunable: BIKER_SEARCH_AND_DESTROY_MAX_INSTANCES */;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_57(int iParam0)//Position - 0x1A11
{
	return Global_1924276.f_11.f_147[func_58(iParam0)];
}

int func_58(int iParam0)//Position - 0x1A29
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
		
		case 304:
			return 92;
		
		case 305:
			return 93;
		
		case 306:
			return 94;
		
		case 307:
			return 95;
		
		case 308:
			return 96;
		
		case 309:
			return 97;
		
		case 312:
			return 98;
		
		case 313:
			return 99;
		
		case 315:
			return 100;
		
		case 316:
			return 101;
		
		case 317:
			return 102;
		
		case 318:
			return 103;
		
		default:
	}
	return -1;
}

int func_59(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1EA9
{
	if ((func_67(iParam0, bParam3, bParam4) || func_66(iParam1, bParam3, bParam4)) || func_60(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0, bool bParam1, bool bParam2)//Position - 0x1EE3
{
	return func_61(2, iParam0, 0, bParam1, bParam2);
}

int func_61(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1EF7
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666708, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_65(iParam0) - func_64(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_64(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_65(iParam0) - func_63(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_64(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_65(iParam0) - func_64(iParam0, 1));
		}
		if (!bParam4 && Global_1853988[PLAYER::PLAYER_ID() /*867*/] != 3)
		{
			iVar1 = (iVar1 - func_62(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x1FBD
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

int func_63(int iParam0)//Position - 0x1FF7
{
	switch (iParam0)
	{
		case 0:
			return Global_1666708.f_1;
			break;
		
		case 1:
			return Global_1666708.f_2;
			break;
		
		case 2:
			return Global_1666708.f_3;
			break;
	}
	return 0;
}

int func_64(int iParam0, bool bParam1)//Position - 0x203D
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x20DA
{
	switch (iParam0)
	{
		case 0:
			return Global_1666716;
			break;
		
		case 1:
			return Global_1666717;
			break;
		
		case 2:
			return Global_1666718;
			break;
	}
	return 0;
}

int func_66(int iParam0, bool bParam1, bool bParam2)//Position - 0x211A
{
	return func_61(1, iParam0, 0, bParam1, bParam2);
}

int func_67(int iParam0, bool bParam1, bool bParam2)//Position - 0x212E
{
	return func_61(0, iParam0, 0, bParam1, bParam2);
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2142
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
			return func_121(iParam1);
		
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
			return func_119(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_113(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_101(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 233:
			return func_94(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
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
			return func_85(iParam1, iParam2);
		
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
			return func_82(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_81(iParam1);
		
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
			return func_77(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_72(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_69(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2415
{
	int iVar0;
	
	iVar0 = func_71(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_70(iParam0, iParam2));
	return iVar0;
}

int func_70(int iParam0, var uParam1)//Position - 0x2438
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_71(int iParam0, var uParam1, var uParam2)//Position - 0x2452
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x246C
{
	int iVar0;
	
	iVar0 = func_76(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_73(iParam0, iParam2));
	return iVar0;
}

int func_73(int iParam0, int iParam1)//Position - 0x248F
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
			if (func_75(iParam1, 1))
			{
				Var0 = { func_74(iParam1) };
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

Vector3 func_74(int iParam0)//Position - 0x25F6
{
	return Global_1895156[iParam0 /*609*/].f_10.f_306;
}

bool func_75(int iParam0, bool bParam1)//Position - 0x260E
{
	if (!func_17(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_16();
}

int func_76(int iParam0, int iParam1, var uParam2)//Position - 0x2647
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

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x28AA
{
	int iVar0;
	
	iVar0 = func_80(iParam0, iParam1, iParam3);
	if (!func_79(iParam0))
	{
		iVar0 = (iVar0 + func_78(iParam0, iParam2));
	}
	return iVar0;
}

int func_78(int iParam0, int iParam1)//Position - 0x28D7
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
			if (func_33(iParam1) + 1 == 1)
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

int func_79(int iParam0)//Position - 0x2929
{
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x2932
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

int func_81(int iParam0)//Position - 0x2AE1
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

int func_82(int iParam0, int iParam1, int iParam2)//Position - 0x2B2D
{
	int iVar0;
	
	iVar0 = func_84(iParam0, iParam1);
	if (func_83(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_83(int iParam0)//Position - 0x2B51
{
	return 1;
}

int func_84(int iParam0, int iParam1)//Position - 0x2B5A
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

int func_85(int iParam0, int iParam1)//Position - 0x2CA9
{
	int iVar0;
	
	iVar0 = func_93(iParam0, iParam1);
	if (!func_92(iParam0))
	{
		iVar0 = (iVar0 + func_86(iParam0, func_90() + 1));
	}
	if (iParam0 == 14 || ((((func_92(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_86(iParam0, func_90() + 1));
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

int func_86(int iParam0, int iParam1)//Position - 0x2D3D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_89(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_88(iParam0, iParam1);
			iVar2 = func_87(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_92(iParam0))
		{
			if (iVar0 > Global_262145.f_18564 /* Tunable: BIKER_RESUPPLY_MAX_VEHICLES */)
			{
				iVar0 = Global_262145.f_18564 /* Tunable: BIKER_RESUPPLY_MAX_VEHICLES */;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18563 /* Tunable: BIKER_RESUPPLY_MIN_PACKAGES */)
			{
				iVar0 = Global_262145.f_18563 /* Tunable: BIKER_RESUPPLY_MIN_PACKAGES */;
			}
			if (iVar0 > Global_262145.f_18562 /* Tunable: BIKER_RESUPPLY_MAX_PACKAGES */)
			{
				iVar0 = Global_262145.f_18562 /* Tunable: BIKER_RESUPPLY_MAX_PACKAGES */;
			}
		}
	}
	return iVar0;
}

int func_87(int iParam0)//Position - 0x2DD6
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18601 /* Tunable: BIKER_RESUPPLY_MEET_CONTACT_MIN_PACKAGES */;
		
		case 10:
			return Global_262145.f_18626 /* Tunable: BIKER_RESUPPLY_BANK_MIN_PACKAGES */;
		
		default:
	}
	return 1;
}

int func_88(int iParam0, int iParam1)//Position - 0x2E06
{
	if (func_92(iParam0))
	{
		if (iParam1 >= Global_262145.f_18565 /* Tunable: BIKER_RESUPPLY_SECOND_VEHICLE_THRESHOLD */)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18602 /* Tunable: BIKER_RESUPPLY_MEET_CONTACT_MAX_PACKAGES */;
		
		case 10:
			return Global_262145.f_18627 /* Tunable: BIKER_RESUPPLY_BANK_MAX_PACKAGES */;
		
		default:
	}
	return 8;
}

int func_89(int iParam0)//Position - 0x2E54
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

int func_90()//Position - 0x2E86
{
	if (func_91() == func_16())
	{
		return 0;
	}
	return func_33(func_91());
}

int func_91()//Position - 0x2EA5
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

int func_92(int iParam0)//Position - 0x2EBA
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

int func_93(int iParam0, int iParam1)//Position - 0x2F10
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

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x31A2
{
	int iVar0;
	
	iVar0 = func_100(iParam0, iParam1, iParam2, iParam4);
	if (!func_99(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_96(iParam0, func_33(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_95(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_95(int iParam0)//Position - 0x31F5
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

int func_96(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x321B
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
			if (func_99(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_98(iParam0))
	{
		iVar0 = func_98(iParam0);
	}
	else if (iVar0 < func_97(iParam0))
	{
		iVar0 = func_97(iParam0);
	}
	return iVar0;
}

int func_97(int iParam0)//Position - 0x32B7
{
	return 1;
}

int func_98(int iParam0)//Position - 0x32C0
{
	return 4;
}

int func_99(int iParam0)//Position - 0x32C9
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

int func_100(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x3307
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

int func_101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x33C2
{
	int iVar0;
	
	iVar0 = func_112(iParam0, iParam1, iParam2, iParam4);
	if (!func_111(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_103(iParam0, func_33(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_102(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_102(int iParam0)//Position - 0x3415
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x342F
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_110(iParam0))
	{
		iVar1 = func_109(iParam3);
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
	else if (func_108(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_107(iParam2))
		{
			iVar0 = func_107(iParam2);
		}
	}
	if (iVar0 > func_105(iParam0))
	{
		iVar0 = func_105(iParam0);
	}
	else if (iVar0 < func_104(iParam0))
	{
		iVar0 = func_104(iParam0);
	}
	return iVar0;
}

int func_104(int iParam0)//Position - 0x35AD
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_105(int iParam0)//Position - 0x35C7
{
	if (!func_110(iParam0))
	{
		if (func_111(iParam0))
		{
			if (func_106(iParam0))
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

int func_106(int iParam0)//Position - 0x3621
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x363B
{
	if (iParam0 == func_16() || Global_1853988[iParam0 /*867*/].f_267.f_293 == 0)
	{
		return 50;
	}
	return (50 - Global_1853988[iParam0 /*867*/].f_267.f_293.f_3);
}

int func_108(int iParam0)//Position - 0x367D
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x3697
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

int func_110(int iParam0)//Position - 0x36B9
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

int func_111(int iParam0)//Position - 0x370F
{
	if (func_110(iParam0) || func_108(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3731
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

int func_113(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3863
{
	int iVar0;
	
	iVar0 = func_118(iParam0, iParam1, iParam2, iParam3);
	if (!func_117(iParam0))
	{
		iVar0 = (iVar0 + func_115(iParam0, func_90() + 1, -1, iParam2));
	}
	if (func_114(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_114(int iParam0)//Position - 0x38A9
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

int func_115(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x38ED
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_116(iParam0))
	{
		if (iParam2 <= Global_262145.f_21863 /* Tunable: -1542918426 */)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21864 /* Tunable: -2015624215 */)
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
	else if (func_117(iParam0))
	{
		if (iParam1 < Global_262145.f_21823 /* Tunable: 642214211 */)
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

int func_116(int iParam0)//Position - 0x39CA
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

int func_117(int iParam0)//Position - 0x3A02
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

int func_118(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3A64
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

int func_119(int iParam0, int iParam1, var uParam2)//Position - 0x3DB0
{
	int iVar0;
	
	iVar0 = func_120(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_120(int iParam0, int iParam1)//Position - 0x3DD1
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

int func_121(int iParam0)//Position - 0x3F91
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

int func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x40D1
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
			return func_168(iParam1);
		
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
			return func_164(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_160(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_154(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		
		case 233:
			return func_144(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_143(iParam1, iParam3);
		
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
			return func_142(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_141(iParam1);
		
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
			return func_135(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_129(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_123(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_123(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x43C0
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
		iVar0 = (iVar0 + func_128(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_127(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_126(func_33(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_125(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_124(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_124(int iParam0, int iParam1)//Position - 0x4436
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_125(int iParam0, int iParam1)//Position - 0x4450
{
	return func_124(iParam0, iParam1) > 0;
}

int func_126(var uParam0, int iParam1, int iParam2)//Position - 0x4462
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_127(int iParam0, int iParam1)//Position - 0x447C
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

int func_128(int iParam0, int iParam1)//Position - 0x44B0
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_129(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x44CA
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
		iVar0 = (iVar0 + func_134(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_133(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_132(func_33(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_131(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_130(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_130(int iParam0, int iParam1)//Position - 0x4855
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

bool func_131(int iParam0, int iParam1)//Position - 0x48DB
{
	return func_130(iParam0, iParam1) > 0;
}

int func_132(int iParam0, int iParam1, int iParam2)//Position - 0x48ED
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
				if (func_75(iParam2, 1))
				{
					Var0 = { func_74(iParam2) };
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

int func_133(int iParam0, int iParam1)//Position - 0x4985
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

int func_134(int iParam0, int iParam1)//Position - 0x4C64
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_135(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x4C7E
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
		if (func_79(iParam0))
		{
			iVar0 = (iVar0 + func_78(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_140(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_139(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_138(func_33(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_137(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_136(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_136(int iParam0, int iParam1)//Position - 0x4F59
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

bool func_137(int iParam0, int iParam1)//Position - 0x4F90
{
	return func_136(iParam0, iParam1) > 0;
}

int func_138(int iParam0, int iParam1)//Position - 0x4FA2
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

int func_139(int iParam0, int iParam1)//Position - 0x4FCC
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

int func_140(int iParam0, int iParam1)//Position - 0x50FE
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x5118
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

int func_142(int iParam0, int iParam1, int iParam2)//Position - 0x5164
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
	if (func_83(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_143(int iParam0, int iParam1)//Position - 0x5305
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
	if ((func_92(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_86(iParam0, func_90() + 1));
	}
	return iVar0;
}

int func_144(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x58EC
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
		if (func_99(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_96(iParam0, func_33(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_149(iParam0, func_33(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_148(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_147(func_33(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_146(iParam0))
		{
			iVar0 = (iVar0 + func_145(iParam0));
		}
	}
	return iVar0;
}

int func_145(int iParam0)//Position - 0x5A62
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

bool func_146(int iParam0)//Position - 0x5AA6
{
	return func_145(iParam0) > 0;
}

int func_147(var uParam0, int iParam1)//Position - 0x5AB6
{
	return 2;
}

int func_148(int iParam0, int iParam1)//Position - 0x5ABF
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

int func_149(int iParam0, int iParam1)//Position - 0x5B07
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
			uVar0 = func_150(5329, -1);
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

int func_150(int iParam0, int iParam1)//Position - 0x5B66
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_151(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_151(int iParam0, var uParam1)//Position - 0x5B95
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_152(uParam1));
}

int func_152(var uParam0)//Position - 0x5BAA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_153();
		if (iVar1 > -1)
		{
			Global_2805862 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2805862 = 1;
		}
	}
	return iVar0;
}

int func_153()//Position - 0x5BDE
{
	return Global_1574918;
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x5BEA
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
		if (func_111(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_103(iParam0, func_33(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_159(iParam0, func_33(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_158(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_157(func_33(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_156(iParam0))
		{
			iVar0 = (iVar0 + func_155(iParam0));
		}
	}
	return iVar0;
}

int func_155(int iParam0)//Position - 0x5EB0
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

bool func_156(int iParam0)//Position - 0x5F22
{
	return func_155(iParam0) > 0;
}

int func_157(int iParam0, int iParam1)//Position - 0x5F32
{
	switch (iParam0)
	{
		case 1:
			if (func_106(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_106(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_106(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_106(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_106(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_106(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_106(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_106(iParam1))
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

int func_158(int iParam0, int iParam1)//Position - 0x602A
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

int func_159(int iParam0, int iParam1)//Position - 0x63CA
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

int func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x64C3
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
			if (func_115(iParam0, func_90() + 1, -1, iParam2) == 1)
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
		if (func_117(iParam0))
		{
			iVar0 = (iVar0 + func_115(iParam0, func_90() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_163(iParam0, func_90() + 1));
	}
	if (!bParam3)
	{
		if (func_162(iParam0))
		{
			iVar0 = (iVar0 + func_161(iParam0));
		}
	}
	return iVar0;
}

int func_161(int iParam0)//Position - 0x6846
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

bool func_162(int iParam0)//Position - 0x68BA
{
	return func_161(iParam0) > 0;
}

int func_163(int iParam0, int iParam1)//Position - 0x68CA
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

int func_164(int iParam0, int iParam1, int iParam2)//Position - 0x6916
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
	iVar0 = (iVar0 + func_167(iParam0, func_90() + 1, iParam2));
	iVar0 = (iVar0 + func_165(iParam0));
	return iVar0;
}

int func_165(int iParam0)//Position - 0x6C1F
{
	if (func_166(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x6C35
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

int func_167(int iParam0, var uParam1, int iParam2)//Position - 0x6C7F
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

int func_168(int iParam0)//Position - 0x6CA9
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

int func_169(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6D82
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
			return func_196(iParam1);
		
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
			return func_193(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_190(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_187(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_184(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_183(iParam1, iParam2);
		
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
			return func_182();
		
		case 218:
			return func_181();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_180(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_179(iParam1, iParam2);
		
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
			return func_176(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_173(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_170(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_170(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x704A
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
		if (func_125(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_171(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_171(int iParam0, var uParam1)//Position - 0x7088
{
	if (func_125(iParam0, uParam1))
	{
		return (func_124(iParam0, uParam1) + func_172(iParam0, uParam1));
	}
	return 0;
}

int func_172(int iParam0, var uParam1)//Position - 0x70B0
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_173(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x70CA
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
		if (func_131(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_174(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_174(int iParam0, int iParam1)//Position - 0x7458
{
	if (func_131(iParam0, iParam1))
	{
		return (func_130(iParam0, iParam1) + func_175(iParam0, iParam1));
	}
	return 0;
}

int func_175(int iParam0, int iParam1)//Position - 0x7480
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

int func_176(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x750E
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
		if (func_137(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_177(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_177(int iParam0, int iParam1)//Position - 0x7731
{
	if (func_137(iParam0, iParam1))
	{
		return (func_136(iParam0, iParam1) + func_178(iParam0, iParam1));
	}
	return 0;
}

int func_178(int iParam0, int iParam1)//Position - 0x7759
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

int func_179(int iParam0, int iParam1)//Position - 0x7790
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

int func_180(int iParam0, int iParam1, int iParam2)//Position - 0x7801
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

int func_181()//Position - 0x79BA
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_182()//Position - 0x79C8
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_183(int iParam0, int iParam1)//Position - 0x79D6
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
		iVar0 = (iVar0 + func_86(iParam0, func_90() + 1));
	}
	return iVar0;
}

int func_184(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7FB3
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
		if (func_146(iParam0))
		{
			iVar0 = (iVar0 + func_185(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_185(int iParam0, var uParam1)//Position - 0x80F8
{
	if (func_146(iParam0))
	{
		return (func_145(iParam0) + func_186(iParam0, uParam1));
	}
	return 0;
}

int func_186(int iParam0, var uParam1)//Position - 0x811C
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

int func_187(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8162
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
		if (func_156(iParam0))
		{
			iVar0 = (iVar0 + func_188(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_188(int iParam0, int iParam1)//Position - 0x82DC
{
	if (func_156(iParam0))
	{
		return (func_155(iParam0) + func_189(iParam0, iParam1));
	}
	return 0;
}

int func_189(int iParam0, int iParam1)//Position - 0x8300
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

int func_190(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x837A
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
		if (func_162(iParam0))
		{
			iVar0 = (iVar0 + func_191(iParam0));
		}
	}
	return iVar0;
}

int func_191(int iParam0)//Position - 0x86AF
{
	if (func_162(iParam0))
	{
		return (func_161(iParam0) + func_192(iParam0));
	}
	return 0;
}

int func_192(int iParam0)//Position - 0x86D1
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

int func_193(int iParam0, int iParam1, var uParam2)//Position - 0x874D
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
	iVar0 = (iVar0 + func_194(iParam0));
	return iVar0;
}

int func_194(int iParam0)//Position - 0x8A15
{
	if (func_166(iParam0))
	{
		if (func_195(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_195(int iParam0)//Position - 0x8A38
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

int func_196(int iParam0)//Position - 0x8A82
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

bool func_197(int iParam0, int iParam1, bool bParam2)//Position - 0x8B64
{
	return func_22(iParam0, iParam1, bParam2) == -1;
}

int func_198(int iParam0)//Position - 0x8B78
{
	if (func_5(&(Global_2766257[iParam0 /*2*/])) && func_3(&(Global_2766257[iParam0 /*2*/]), Global_2766257.f_17[iParam0], 0))
	{
		func_199(&(Global_2766257[iParam0 /*2*/]));
		return 0;
	}
	return func_5(&(Global_2766257[iParam0 /*2*/]));
}

void func_199(var uParam0)//Position - 0x8BC7
{
	uParam0->f_1 = 0;
}

void func_200(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10)//Position - 0x8BD4
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "SHOW_OVERLAY");
	func_202(sParam0);
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
	func_202(sParam2);
	func_202(sParam3);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_202(sParam10);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam5)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	else if (bParam4)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	MISC::SET_BIT(&uLocal_112, 1);
	func_201(iParam7);
}

void func_201(int iParam0)//Position - 0x8C83
{
	if (iLocal_143 != iParam0)
	{
		iLocal_143 = iParam0;
	}
}

void func_202(char* sParam0)//Position - 0x8C96
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_203(int iParam0)//Position - 0x8CA8
{
	return 0 == func_107(iParam0);
}

bool func_204(int iParam0, int iParam1)//Position - 0x8CB8
{
	if (iParam1 == -1)
	{
		iParam1 = func_153();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_205(int iParam0, bool bParam1)//Position - 0x8CD4
{
	int iVar0;
	struct<2> Var1;
	struct<4> Var5;
	struct<2> Var9;
	struct<4> Var13;
	int iVar17;
	int iVar18;
	float fVar19;
	
	iVar0 = func_220(PLAYER::PLAYER_ID());
	if (iParam0 != 8)
	{
		iVar0 = uLocal_320[func_219(iParam0)];
	}
	if (!func_217(iParam0))
	{
		StringCopy(&Var1, "HAPP_SELL_D1" /* GXT: You have no Cargo to sell. */, 16);
		StringCopy(&Var5, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var1, "HAPP_SELL_D0" /* GXT: You have no ~a~ to sell. */, 16);
			Var5 = { func_9(iParam0) };
		}
		func_200("HAPP_SELL_T" /* GXT: SELL CARGO */, &Var1, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, &Var5, 0);
	}
	else if (func_216())
	{
		func_200("HAPP_SELL_T" /* GXT: SELL CARGO */, "HAPP_SELL_C3" /* GXT: There is a short waiting period while Ron searches for Buyers before you can sell additional Cargo from the Hangar. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
	}
	else if (!func_12(230))
	{
		func_200("HAPP_SELL_T" /* GXT: SELL CARGO */, func_11(), "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
	}
	else if (func_109(iVar0) != 1 && !bParam1)
	{
		func_10(iParam0);
		func_200("HAPP_SELL_T" /* GXT: SELL CARGO */, "HAPP_SELL_GDB" /* GXT: Larger sales may require multiple vehicles. Ensure you have additional Members prior to starting this mission. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 0, 1, -1, 4, -1, 0, 0);
	}
	else
	{
		StringCopy(&Var9, "HAPP_SELL_C2" /* GXT: You will forfeit any bonuses for individual Cargo type collections when selling a mix of Cargo types. Are you sure you would like to sell all of your Cargo? */, 16);
		StringCopy(&Var13, "", 16);
		iVar17 = -1;
		iVar18 = -1;
		if ((func_215() && func_213() != -1) || iParam0 != 8)
		{
			if (func_215())
			{
				iParam0 = func_213();
				iVar0 = uLocal_320[func_219(iParam0)];
			}
			iVar18 = func_211(iParam0, iVar0);
			StringCopy(&Var9, "HAPP_SELL_C0" /* GXT: Are you sure you'd like to sell your stock of ~a~ for $~1~? */, 16);
			fVar19 = (func_210(iParam0, iVar0) * 100f);
			if (fVar19 > 0f)
			{
				iVar17 = func_209(iParam0, iVar0);
				iVar18 = (iVar18 + iVar17);
				StringCopy(&Var9, "HAPP_SELL_C1" /* GXT: The Buyer has offered an additional bonus of ~1~% for your collection of ~a~. Are you sure you would like to sell your stock for $~1~? */, 16);
				iVar17 = SYSTEM::ROUND(fVar19);
			}
			Var13 = { func_9(iParam0) };
		}
		else if (iParam0 == 8)
		{
			MISC::SET_BIT(&uLocal_112, 11);
		}
		func_10(iParam0);
		if (func_29())
		{
			if (!func_204(34710, -1))
			{
				if (!func_208("APP_SG_HELP" /* GXT: You are currently in a private session. Sales made in populated public sessions with rival players will earn an additional "High Demand" cash bonus on your sale value. */, 0, 0))
				{
					func_207("APP_SG_HELP" /* GXT: You are currently in a private session. Sales made in populated public sessions with rival players will earn an additional "High Demand" cash bonus on your sale value. */, -1);
				}
				func_206(34710, 1, -1);
			}
		}
		if (iVar17 > 0)
		{
			MISC::SET_BIT(&uLocal_112, 12);
			func_200("HAPP_SELL_T" /* GXT: SELL CARGO */, &Var9, "HAPP_B_AIR" /* GXT: Air */, "WHOUSE_CANC" /* GXT: Cancel */, 0, 1, iVar17, 1, iVar18, &Var13, "HAPP_B_LAND" /* GXT: Land */);
		}
		else
		{
			func_200("HAPP_SELL_T" /* GXT: SELL CARGO */, &Var9, "HAPP_B_AIR" /* GXT: Air */, "WHOUSE_CANC" /* GXT: Cancel */, 0, 1, iVar18, 1, iVar17, &Var13, "HAPP_B_LAND" /* GXT: Land */);
		}
	}
	func_8();
}

void func_206(int iParam0, bool bParam1, int iParam2)//Position - 0x8EF9
{
	if (iParam2 == -1)
	{
		iParam2 = func_153();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_207(char* sParam0, int iParam1)//Position - 0x8F17
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_208(char* sParam0, int iParam1, char* sParam2)//Position - 0x8F2E
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_209(int iParam0, int iParam1)//Position - 0x8F4C
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_210(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_211(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

float func_210(int iParam0, int iParam1)//Position - 0x8F75
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_23000 /* Tunable: 599309088 */);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_23002 /* Tunable: 264591774 */;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22999 /* Tunable: 664286755 */);
			break;
		
		case 3:
			fVar0 = Global_262145.f_23002 /* Tunable: 264591774 */;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22999 /* Tunable: 664286755 */);
			break;
		
		case 0:
			fVar0 = Global_262145.f_23003 /* Tunable: 99009277 */;
			break;
		
		case 1:
			fVar0 = Global_262145.f_23003 /* Tunable: 99009277 */;
			break;
		
		case 4:
			fVar0 = Global_262145.f_23003 /* Tunable: 99009277 */;
			break;
		
		case 6:
			fVar0 = Global_262145.f_23004 /* Tunable: 643266636 */;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_23001 /* Tunable: 486872462 */);
			break;
		
		case 2:
			fVar0 = Global_262145.f_23004 /* Tunable: 643266636 */;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_23001 /* Tunable: 486872462 */);
			break;
		
		case 5:
			fVar0 = Global_262145.f_23004 /* Tunable: 643266636 */;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_23001 /* Tunable: 486872462 */);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_211(int iParam0, int iParam1)//Position - 0x908D
{
	return (func_212(iParam0) * iParam1);
}

int func_212(int iParam0)//Position - 0x909E
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22990 /* Tunable: -954321460 */;
		
		case 0:
			return Global_262145.f_22991 /* Tunable: 117429930 */;
		
		case 1:
			return Global_262145.f_22992 /* Tunable: 921812958 */;
		
		case 2:
			return Global_262145.f_22993 /* Tunable: 1940564107 */;
		
		case 3:
			return Global_262145.f_22994 /* Tunable: -2031678534 */;
		
		case 4:
			return Global_262145.f_22995 /* Tunable: -2091681714 */;
		
		case 5:
			return Global_262145.f_22996 /* Tunable: 975965466 */;
		
		case 6:
			return Global_262145.f_22997 /* Tunable: 1382988286 */;
		
		case 7:
			return Global_262145.f_22998 /* Tunable: 2066048851 */;
		
		default:
	}
	return 0;
}

int func_213()//Position - 0x913E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_320[iVar0] > 0 && iVar0 != 0)
		{
			return func_214(iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_214(int iParam0)//Position - 0x9178
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

bool func_215()//Position - 0x91E3
{
	return BitTest(uLocal_112, 10);
}

int func_216()//Position - 0x91F0
{
	if (func_5(&(Global_2766257.f_26)) && func_3(&(Global_2766257.f_26), Global_2766257.f_28, 0))
	{
		func_199(&(Global_2766257.f_26));
		return 0;
	}
	return func_5(&(Global_2766257.f_26));
}

int func_217(int iParam0)//Position - 0x9233
{
	switch (iParam0)
	{
		case 8:
			return !func_218(PLAYER::PLAYER_ID());
		
		default:
	}
	return uLocal_320[func_219(iParam0)] > 0;
	return 0;
}

bool func_218(int iParam0)//Position - 0x9265
{
	return func_220(iParam0) == 0;
}

int func_219(int iParam0)//Position - 0x9275
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

int func_220(int iParam0)//Position - 0x92E0
{
	if (iParam0 != func_16() && func_221(iParam0))
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_293.f_3;
	}
	return 0;
}

int func_221(int iParam0)//Position - 0x9312
{
	if (iParam0 != func_16())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_293 != 0;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0x9338
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

void func_223()//Position - 0x9424
{
	switch (func_274())
	{
		case 2:
			if (func_253(0))
			{
				func_252();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_227(316, 0);
			}
			else
			{
				func_200("", "BKR_TF_R6" /* GXT: Unable to launch the mission. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
			}
			break;
		
		case 1:
			if (func_253(1))
			{
				func_224();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_227(315, 0);
			}
			else
			{
				func_200("", "BKR_TF_R6" /* GXT: Unable to launch the mission. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
			}
			break;
	}
}

void func_224()//Position - 0x94BB
{
	func_225(6117, -1);
}

void func_225(int iParam0, int iParam1)//Position - 0x94CB
{
	int iVar0;
	
	iVar0 = func_150(iParam0, func_152(iParam1));
	iVar0++;
	func_226(iParam0, iVar0, iParam1, 1);
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x94F2
{
	int iVar0;
	
	iVar0 = func_151(iParam0, uParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_227(int iParam0, bool bParam1)//Position - 0x9515
{
	int iVar0;
	
	iVar0 = func_251();
	if (iVar0 == 8 && func_250(iParam0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		func_249(18);
	}
	else
	{
		func_248(18);
	}
	if (bParam1)
	{
		func_247(26);
	}
	if ((func_246(iParam0) && func_215()) && iVar0 == 8)
	{
		iVar0 = func_213();
	}
	Global_1948624.f_53 = 0;
	MISC::SET_BIT(&Global_1984726, 16);
	if (func_245(iParam0))
	{
		func_244(iParam0, 0, iVar0);
	}
	else
	{
		func_243(0, iVar0);
		func_228(iParam0, -1, -1);
	}
	func_1(1);
	Global_1950700 = 1;
	MISC::SET_BIT(&uLocal_112, 2);
}

void func_228(int iParam0, int iParam1, int iParam2)//Position - 0x95C1
{
	if (iParam1 != -1)
	{
		func_247(iParam1);
	}
	if (iParam2 != -1)
	{
		func_242(iParam2);
	}
	func_229(iParam0, -1);
}

void func_229(int iParam0, int iParam1)//Position - 0x95E8
{
	if ((func_241() || !func_240(1)) || func_44(iParam0) == 3)
	{
		if (!func_238(PLAYER::PLAYER_ID(), 0) && !func_238(PLAYER::PLAYER_ID(), 3))
		{
			func_237(iParam0);
			func_230(iParam0, func_234(1, 1), func_233(), func_232(), func_231(), iParam1);
		}
	}
}

void func_230(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x9650
{
	struct<7> Var0;
	
	Var0.f_0 = 1613825825;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iParam1);
	}
}

var func_231()//Position - 0x969A
{
	return Global_2794162.f_5231.f_347;
}

var func_232()//Position - 0x96AC
{
	return Global_2794162.f_5231.f_346;
}

var func_233()//Position - 0x96BE
{
	return Global_2794162.f_5231.f_345;
}

int func_234(int iParam0, bool bParam1)//Position - 0x96D0
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_52(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_235(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_235(int iParam0, int iParam1)//Position - 0x9735
{
	bool bVar0;
	
	if (!func_17(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_236(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853988[iParam0 /*867*/].f_205 == 8;
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

int func_236(int iParam0, bool bParam1)//Position - 0x978E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_153();
	}
	if (Global_1575043[iVar1] == 1)
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

void func_237(int iParam0)//Position - 0x97CF
{
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_32 = iParam0;
}

int func_238(int iParam0, int iParam1)//Position - 0x97E8
{
	if (func_239(iParam0, 0))
	{
		return func_44(Global_1895156[iParam0 /*609*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_239(int iParam0, int iParam1)//Position - 0x9812
{
	if (func_17(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_240(bool bParam0)//Position - 0x9856
{
	return func_75(PLAYER::PLAYER_ID(), bParam0);
}

int func_241()//Position - 0x9868
{
	return func_15(PLAYER::PLAYER_ID());
}

void func_242(int iParam0)//Position - 0x9878
{
	if (Global_2794162.f_5231.f_346 != iParam0)
	{
		Global_2794162.f_5231.f_346 = iParam0;
	}
}

void func_243(int iParam0, int iParam1)//Position - 0x989B
{
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235 = iParam0;
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22 = iParam1;
}

void func_244(int iParam0, int iParam1, int iParam2)//Position - 0x98C7
{
	var uVar0;
	
	uVar0 = iParam2;
	if (iParam0 != 229 && iParam0 != 230)
	{
	}
	func_243(iParam1, uVar0);
	func_229(iParam0, -1);
}

int func_245(int iParam0)//Position - 0x98F4
{
	if (iParam0 == 229 || iParam0 == 230)
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)//Position - 0x9914
{
	if (iParam0 == 230 || iParam0 == 315)
	{
		return 1;
	}
	return 0;
}

void func_247(int iParam0)//Position - 0x9935
{
	if (Global_2794162.f_5231.f_345 != iParam0)
	{
		Global_2794162.f_5231.f_345 = iParam0;
	}
}

void func_248(int iParam0)//Position - 0x9958
{
	MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_48), iParam0);
}

void func_249(int iParam0)//Position - 0x996F
{
	MISC::SET_BIT(&(Global_2794162.f_5231.f_48), iParam0);
}

int func_250(int iParam0)//Position - 0x9986
{
	if (iParam0 == 229 || iParam0 == 316)
	{
		return 1;
	}
	return 0;
}

int func_251()//Position - 0x99A7
{
	return iLocal_144;
}

void func_252()//Position - 0x99B1
{
	func_225(6115, -1);
}

bool func_253(bool bParam0)//Position - 0x99C1
{
	int iVar0;
	
	if (!func_273())
	{
		return 1;
	}
	while (!func_254(&iVar0, bParam0, 0, 0))
	{
		func_371();
		SYSTEM::WAIT(0);
	}
	func_371();
	return iVar0 == 2;
}

bool func_254(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x99F7
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (*uParam0 != 0 && *uParam0 != 1)
	{
		*uParam0 = 0;
	}
	if (bParam1)
	{
		iVar0 = joaat("HANGAR_CONTRABAND_MISSION_0_t0_v0");
	}
	else if (bParam2)
	{
		iVar0 = joaat("HANGAR_CONTRABAND_MISSION_2_t0_v0");
		uVar1 = Global_262145.f_16063 /* Tunable: SMUGGLER_SKIP_SETUP_COST */;
	}
	else
	{
		iVar0 = joaat("HANGAR_CONTRABAND_MISSION_1_t0_v0");
	}
	switch (*uParam0)
	{
		case 0:
			if (func_272() != -1)
			{
				return 0;
			}
			iVar2 = MISC::GET_HASH_KEY("MP_STAT_HANGAR_CONTRABAND_MISSION_v0");
			if (func_268(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar0, joaat("NET_SHOP_ACTION_BUY_CONTRABAND_MISSION"), 1, uVar1, 1, 4, iVar2, 3))
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
			if (*uParam0 == 1 && func_263())
			{
			}
			else
			{
				*uParam0 = 3;
				func_259(func_272());
			}
			break;
		
		case 1:
			if (func_258(func_272()))
			{
				if (func_257(func_272()) == 2)
				{
					*uParam0 = 2;
					if (bParam2)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_256(func_272()));
						MONEY::_NETWORK_SPENT_SKIP_CARGO_SOURCE_SETUP(Global_262145.f_16063 /* Tunable: SMUGGLER_SKIP_SETUP_COST */, false, true, iParam3);
					}
					func_259(func_272());
					func_255(iVar0);
				}
				else
				{
					*uParam0 = 3;
					func_259(func_272());
				}
			}
			break;
	}
	return *uParam0 != 1;
}

void func_255(int iParam0)//Position - 0x9B1C
{
	Global_4536664 = iParam0;
}

int func_256(int iParam0)//Position - 0x9B2A
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_257(int iParam0)//Position - 0x9B51
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_258(int iParam0)//Position - 0x9B7A
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_259(int iParam0)//Position - 0x9BA5
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_273())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_262(iParam0))
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
		func_260(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_260(var uParam0)//Position - 0x9BF9
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
	func_261(&(uParam0->f_14));
	func_261(&(uParam0->f_14.f_13));
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

void func_261(var uParam0)//Position - 0x9D01
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

int func_262(int iParam0)//Position - 0x9D49
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_263()//Position - 0x9D74
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_273())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_272();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_153()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_267(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4536678 = 1;
			}
			return 0;
		}
		if (Global_2695872)
		{
			if (Global_4535172[iVar2 /*85*/].f_66.f_6 == joaat("CATEGORY_WEAPON_AMMO") || Global_4535172[iVar2 /*85*/].f_66.f_6 == joaat("CATEGORY_MART"))
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_256(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4535172[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535172[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4535172[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535172[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535172[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_264(Global_4535172[iVar2 /*85*/], iVar2);
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	return 0;
}

void func_264(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x9ED4
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_266(Var0.f_1);
	if ((Global_262145.f_24258 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24259 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24260 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_265();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_265()//Position - 0x9F66
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_266(int iParam0)//Position - 0x9F76
{
	var uVar0;
	
	if (func_17(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_267(int iParam0, int iParam1, int iParam2)//Position - 0x9F91
{
	if (iParam0 == joaat("CATEGORY_SERVICE") || iParam0 == joaat("CATEGORY_SERVICE_WITH_THRESHOLD"))
	{
		switch (iParam1)
		{
			case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("SERVICE_EARN_PICKUP"):
			case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
			case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
			case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
			case joaat("SERVICE_EARN_CASHING_OUT"):
			case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case joaat("SERVICE_EARN_DEBUG"):
				return 0;
				break;
			
			case joaat("SERVICE_EARN_INITIAL_CASH"):
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
			case joaat("SERVICE_EARN_REFUNDAMMODROP"):
			case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
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
			case joaat("SERVICE_EARN_NIGHTCLUB_DANCING_AWARD"):
			case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
			case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
			case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
			case joaat("SERVICE_EARN_ARENA_WAR"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
			case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
			case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
			case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
			case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
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
			case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
			case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
				return 1;
				break;
			
			case joaat("SERVICE_SPEND_AIRSTRIKE"):
			case joaat("SERVICE_SPEND_AMMO_DROP"):
			case joaat("SERVICE_SPEND_BACKUP_GANG"):
			case joaat("SERVICE_SPEND_BACKUP_HELI"):
			case joaat("SERVICE_SPEND_BOAT_PICKUP"):
			case joaat("SERVICE_SPEND_BOUNTY"):
			case joaat("SERVICE_SPEND_BULL_SHARK"):
			case joaat("SERVICE_SPEND_CAR_IMPOUND"):
			case joaat("SERVICE_SPEND_CASH_SHARED"):
			case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
			case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
			case joaat("SERVICE_SPEND_HELI_PICKUP"):
			case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
			case joaat("SERVICE_SPEND_HIRE_MUGGER"):
			case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
			case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
			case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
			case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
			case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
			case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
			case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
				return 2;
				break;
		}
		switch (iParam1)
		{
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
			case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
			case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
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
			case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
			case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
			case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
			case joaat("SERVICE_EARN_SMUGGLER_OPS"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
			case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
			case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
			case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
				if (iParam2 == 0)
				{
					return 0;
				}
				return 1;
				break;
			
			case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
			case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
				return 2;
				break;
		}
		return 0;
	}
	else if ((iParam0 == joaat("CATEGORY_SERVICE_WITH_LIMIT") || iParam0 == joaat("CATEGORY_PRICE_MODIFIER")) || iParam0 == joaat("CATEGORY_PRICE_OVERRIDE"))
	{
		return 0;
	}
	return 1;
}

int func_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xA5E0
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_273())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_153()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam1 == joaat("CATEGORY_WEAPON_AMMO") || iParam1 == joaat("CATEGORY_MART"))
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_272();
	if (iVar1 == -1)
	{
		if (!func_270(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_269(iParam1))
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
		Global_4535172[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535172[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535172[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_269(int iParam0)//Position - 0xA702
{
	switch (iParam0)
	{
		case joaat("CATEGORY_INVENTORY_ITEM"):
		case joaat("CATEGORY_INVENTORY_VEHICLE"):
		case joaat("CATEGORY_INVENTORY_VEHICLE_MOD"):
		case joaat("CATEGORY_INVENTORY_PROPERTIE"):
		case joaat("CATEGORY_INVENTORY_BEARD"):
		case joaat("CATEGORY_INVENTORY_MKUP"):
		case joaat("CATEGORY_INVENTORY_HAIR"):
		case joaat("CATEGORY_INVENTORY_EYEBROWS"):
		case joaat("CATEGORY_INVENTORY_CHEST_HAIR"):
		case joaat("CATEGORY_INVENTORY_CONTACTS"):
		case joaat("CATEGORY_INVENTORY_FACEPAINT"):
		case joaat("CATEGORY_INVENTORY_BLUSHER"):
		case joaat("CATEGORY_INVENTORY_LIPSTICK"):
		case joaat("CATEGORY_INVENTORY_PROPERTY_INTERIOR"):
		case joaat("CATEGORY_INVENTORY_WAREHOUSE"):
		case joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"):
		case joaat("CATEGORY_CONTRABAND_MISSION"):
		case joaat("CATEGORY_CONTRABAND_QNTY"):
		case joaat("CATEGORY_INVENTORY_WAREHOUSE_INTERIOR"):
		case joaat("CATEGORY_WAREHOUSE_VEHICLE_INDEX"):
			return 1;
			break;
	}
	return 0;
}

int func_270(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0xA791
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_273())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_153()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam2 == joaat("CATEGORY_WEAPON_AMMO") || iParam2 == joaat("CATEGORY_MART"))
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535172[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535172[iVar1 /*85*/].f_66.f_5 == 1)
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
		if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_271(uVar3, iParam1, joaat("SERVICE_INVALID"), iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_271(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0xA88E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_273())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = uParam0;
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
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && bParam10)
			{
				func_264(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_272()//Position - 0xA9CB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_256(iVar0) != 2147483647)
		{
			if (func_262(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_273()//Position - 0xAA06
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_274()//Position - 0xAA1D
{
	return iLocal_143;
}

void func_275()//Position - 0xAA27
{
	switch (func_274())
	{
		case 2:
			if (func_253(0))
			{
				func_252();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_227(229, 0);
			}
			else
			{
				func_200("", "BKR_TF_R6" /* GXT: Unable to launch the mission. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
			}
			break;
		
		case 1:
			if (func_253(1))
			{
				func_224();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_227(230, 0);
			}
			else
			{
				func_200("", "BKR_TF_R6" /* GXT: Unable to launch the mission. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
			}
			break;
		
		case 3:
			break;
		
		case 4:
			func_276();
			func_205(func_251(), 1);
			return;
		
		case 5:
			if (!func_12(229))
			{
				func_200("HAPP_T1" /* GXT: ACCESS DENIED */, func_11(), "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
			}
			else if (func_253(0))
			{
				func_252();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", true);
				func_227(229, 1);
				return;
			}
			else
			{
				func_200("HAPP_T1" /* GXT: ACCESS DENIED */, "BKR_TF_R6" /* GXT: Unable to launch the mission. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 0, -1, 0, 0);
			}
			break;
		
		case 6:
			break;
		
		default:
			func_277();
			break;
	}
	func_276();
}

void func_276()//Position - 0xAB5B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "HIDE_OVERLAY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_201(0);
	MISC::CLEAR_BIT(&uLocal_112, 1);
}

void func_277()//Position - 0xAB7F
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", true);
}

void func_278()//Position - 0xAB94
{
	if (func_279())
	{
		if (!BitTest(uLocal_112, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "GET_CURRENT_SELECTION");
			iLocal_860 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			MISC::SET_BIT(&uLocal_112, 0);
		}
	}
}

int func_279()//Position - 0xABC5
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
	{
		return 1;
	}
	return 0;
}

void func_280()//Position - 0xABE9
{
	if (iLocal_116 != func_317())
	{
		if (!func_5(&uLocal_153))
		{
			func_4(&uLocal_153, 0, 0);
		}
		else if (func_3(&uLocal_153, 750, 0))
		{
			func_199(&uLocal_153);
			func_281();
		}
	}
}

void func_281()//Position - 0xAC26
{
	int iVar0;
	
	func_309();
	if (func_308())
	{
		MISC::SET_BIT(&uLocal_112, 10);
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_112, 10);
	}
	func_287();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_286(iVar0);
		iVar0++;
	}
	func_285();
	func_282();
	func_4(&uLocal_149, 0, 0);
}

void func_282()//Position - 0xAC79
{
	if (func_216())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "UPDATE_SELL_COOLDOWN");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_284(Global_2766257.f_26, Global_2766257.f_28));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_283(Global_2766257.f_28));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "UPDATE_SELL_COOLDOWN");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_283(int iParam0)//Position - 0xACD9
{
	return (iParam0 / 1000);
}

int func_284(int iParam0, var uParam1, int iParam2)//Position - 0xACE7
{
	int iVar0;
	
	iVar0 = (iParam2 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)));
	iVar0 = (iVar0 / 1000);
	return iVar0;
}

void func_285()//Position - 0xAD0C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "UPDATE_STEAL_COOLDOWN");
	iVar0 = 1;
	while (iVar0 <= 8)
	{
		iVar1 = func_214(iVar0);
		iVar2 = iVar1;
		if (func_198(iVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_284(Global_2766257[iVar2 /*2*/], Global_2766257.f_17[iVar2]));
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		iVar0++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_286(int iParam0)//Position - 0xAD70
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = uLocal_320[iParam0];
	iVar1 = 50;
	iVar2 = func_211(func_214(iParam0), iVar0);
	iVar3 = SYSTEM::ROUND((func_210(func_214(iParam0), iVar0) * 100f));
	if (IntToFloat(iVar3) > 0f)
	{
		iVar4 = func_209(func_214(iParam0), iVar0);
		iVar2 = (iVar2 + iVar4);
		MISC::SET_BIT(&uLocal_112, 14);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "ADD_CARGO");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iVar3));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_287()//Position - 0xAE02
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
	
	sVar0 = func_298(PLAYER::PLAYER_ID());
	iVar1 = 0;
	iVar2 = func_297();
	iVar3 = func_296();
	iVar4 = func_295();
	iVar5 = func_294();
	iVar6 = func_293();
	iLocal_116 = func_317();
	iVar7 = 50;
	iVar8 = (iLocal_116 * func_212(8));
	fVar9 = func_291(iVar2, func_292());
	fVar10 = func_291(iVar3, func_290());
	fVar9 = func_289(fVar9, 0f, 100f);
	fVar10 = func_289(fVar10, 0f, 100f);
	if (func_288(iLocal_141))
	{
		iVar1 = 1;
	}
	if (func_215())
	{
		iVar11 = func_213();
		iVar8 = (iLocal_116 * func_212(iVar11));
		fVar12 = (func_210(iVar11, iLocal_116) * 100f);
		if (fVar12 > 0f)
		{
			iVar13 = func_209(iVar11, iLocal_116);
			iVar8 = (iVar8 + iVar13);
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "SET_STATS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_116);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_288(int iParam0)//Position - 0xAF22
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

float func_289(float fParam0, float fParam1, float fParam2)//Position - 0xAF48
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

int func_290()//Position - 0xAF6F
{
	return func_150(6117, -1);
}

float func_291(int iParam0, int iParam1)//Position - 0xAF7F
{
	return ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
}

int func_292()//Position - 0xAF9A
{
	return func_150(6115, -1);
}

int func_293()//Position - 0xAFAA
{
	return func_150(6120, -1);
}

int func_294()//Position - 0xAFBA
{
	return func_150(6119, -1);
}

int func_295()//Position - 0xAFCA
{
	return func_150(6121, -1);
}

int func_296()//Position - 0xAFDA
{
	return func_150(6118, -1);
}

int func_297()//Position - 0xAFEA
{
	return func_150(6116, -1);
}

char* func_298(int iParam0)//Position - 0xAFFA
{
	char* sVar0;
	int iVar1;
	
	if (!func_17(iParam0))
	{
		sVar0 = func_304(iParam0, 0);
		return sVar0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_303(&(Global_1895156[iParam0 /*609*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1895156[iParam0 /*609*/].f_10.f_121 != Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121)
	{
		sVar0 = func_304(iParam0, 0);
		return sVar0;
	}
	if (((func_14(iParam0, 28) || func_14(PLAYER::PLAYER_ID(), 28)) || func_302(iParam0)) && !func_300(iParam0))
	{
		return func_304(iParam0, 0);
	}
	iVar1 = func_34(iParam0);
	if (iVar1 != func_16())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_299() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_304(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_16())
	{
		sVar0 = func_303(&(Global_1895156[iVar1 /*609*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_304(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_299()//Position - 0xB117
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_300(int iParam0)//Position - 0xB12D
{
	struct<13> Var0;
	
	Var0 = { func_301(iParam0) };
	if (func_299())
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

struct<13> func_301(int iParam0)//Position - 0xB16D
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_302(int iParam0)//Position - 0xB184
{
	struct<13> Var0;
	
	if (iParam0 != func_16())
	{
		Var0 = { func_301(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_299() || MISC::IS_PROSPERO_VERSION())
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

var func_303(var uParam0)//Position - 0xB1F1
{
	return uParam0;
}

char* func_304(int iParam0, bool bParam1)//Position - 0xB1FB
{
	if (!bParam1)
	{
		if (func_306(iParam0, 1))
		{
			return func_305();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /* GXT: An Organization */);
}

char* func_305()//Position - 0xB222
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /* GXT: Motorcycle Club */);
}

bool func_306(int iParam0, bool bParam1)//Position - 0xB232
{
	return func_307(iParam0, bParam1, 1);
}

int func_307(int iParam0, bool bParam1, int iParam2)//Position - 0xB243
{
	int iVar0;
	
	if (!func_17(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_21(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_16() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_308()//Position - 0xB2A0
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_320[iVar0] > 0)
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

void func_309()//Position - 0xB2DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = func_214(iVar0);
		uLocal_320[iVar0] = func_310(iVar1);
		iVar0++;
	}
}

int func_310(int iParam0)//Position - 0xB30D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_315())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_220(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_312(func_313(func_314(iVar0), -1));
		if (func_311(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_311(int iParam0)//Position - 0xB36A
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

int func_312(int iParam0)//Position - 0xB41A
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

int func_313(int iParam0, int iParam1)//Position - 0xB50A
{
	if (iParam1 == -1)
	{
		iParam1 = func_153();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_314(int iParam0)//Position - 0xB526
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

bool func_315()//Position - 0xB790
{
	return func_316() != 0;
}

int func_316()//Position - 0xB79E
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293;
}

int func_317()//Position - 0xB7B7
{
	return func_220(PLAYER::PLAYER_ID());
}

void func_318()//Position - 0xB7C7
{
	if (func_5(&uLocal_149))
	{
		if (func_3(&uLocal_149, 1000, 0))
		{
			func_285();
			func_282();
			func_319(&uLocal_149, 0, 0);
		}
	}
	else
	{
		func_4(&uLocal_149, 0, 0);
	}
}

void func_319(var uParam0, bool bParam1, bool bParam2)//Position - 0xB800
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

void func_320()//Position - 0xB83D
{
	int iVar0;
	
	bLocal_113++;
	if (bLocal_113 == 32)
	{
		bLocal_113 = false;
	}
	iVar0 = bLocal_113;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && func_221(iVar0)) && !func_75(iVar0, 0)) && !func_327())
	{
		if (!func_326())
		{
			func_323(iVar0, bLocal_113);
		}
	}
	else if (func_326())
	{
		func_321();
	}
	if (BitTest(uLocal_117, bLocal_113))
	{
		if (!func_15(iVar0) && func_326())
		{
			func_321();
		}
	}
	else if (func_15(iVar0) && func_326())
	{
		func_321();
	}
}

void func_321()//Position - 0xB8E6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_330[iVar0] == bLocal_113)
		{
			iLocal_330[iVar0] = -1;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar1 < 31)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "REMOVE_ACTIVE_ORGANISATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(&(Local_362[iVar1 /*16*/]));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		StringCopy(&(Local_362[iVar1 /*16*/]), "", 64);
		MISC::CLEAR_BIT(&uLocal_117, bLocal_113);
		func_322(PLAYER::INT_TO_PLAYERINDEX(bLocal_113));
	}
}

void func_322(int iParam0)//Position - 0xB96B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_129[iVar0] == iParam0)
		{
			iLocal_118[iVar0] = 0;
			iLocal_129[iVar0] = -1;
			return;
		}
		iVar0++;
	}
}

void func_323(int iParam0, int iParam1)//Position - 0xB9A2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4[7];
	int iVar117;
	int iVar118;
	
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
			iVar117 = Global_1895156[iParam1 /*609*/].f_10.f_11[iVar2];
			if (iVar117 != func_16())
			{
				StringCopy(&(Var4[iVar2 /*16*/]), PLAYER::GET_PLAYER_NAME(iVar117), 64);
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
					iVar118 = iVar2;
					while (iVar118 <= (iVar3 - 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar118 /*16*/])))
						{
							Var4[iVar2 /*16*/] = { Var4[iVar118 /*16*/] };
							StringCopy(&(Var4[iVar118 /*16*/]), "", 64);
							iVar118 = (iVar3 - 1);
						}
						iVar118++;
					}
				}
			}
			iVar2++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "ADD_ACTIVE_ORGANISATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(func_325(iParam0));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar1);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(&(Var4[iVar2 /*16*/]));
			iVar2++;
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		sVar1 = func_325(iParam0);
		func_324(iParam0, func_33(iParam0));
		MISC::SET_BIT(&uLocal_117, iParam1);
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "ADD_ACTIVE_ORGANISATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_330[iVar0] == -1)
		{
			iLocal_330[iVar0] = iParam1;
			StringCopy(&(Local_362[iVar0 /*16*/]), sVar1, 64);
			return;
		}
		iVar0++;
	}
}

void func_324(int iParam0, int iParam1)//Position - 0xBB34
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_129[iVar0] == -1)
		{
			iLocal_118[iVar0] = iParam1;
			iLocal_129[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

char* func_325(int iParam0)//Position - 0xBB6C
{
	int iVar0;
	char* sVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = func_34(iParam0);
		if (iVar0 != func_16())
		{
			sVar1 = func_303(&(Global_1895156[iVar0 /*609*/].f_10.f_105));
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				return func_304(iVar0, 0);
			}
			else
			{
				return sVar1;
			}
		}
	}
	return func_298(iParam0);
}

int func_326()//Position - 0xBBC2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_330[iVar0] == bLocal_113)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_327()//Position - 0xBBF1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_129[iVar0] == bLocal_113)
		{
			if (!func_15(PLAYER::INT_TO_PLAYERINDEX(bLocal_113)))
			{
				return 1;
			}
			else
			{
				return iLocal_118[iVar0] != func_33(PLAYER::INT_TO_PLAYERINDEX(bLocal_113));
			}
		}
		iVar0++;
	}
	return 0;
}

void func_328()//Position - 0xBC41
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (Global_75986)
	{
		func_370();
		return;
	}
	else if (BitTest(uLocal_112, 15))
	{
		func_334();
		return;
	}
	func_332(2, 205, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(205), -1f, -1f, -1f, -1f);
		if (iLocal_142 == 1)
		{
			iLocal_142 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
		else if (iLocal_142 == 2)
		{
			iLocal_142 = 1;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
	}
	func_332(2, 206, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(206), -1f, -1f, -1f, -1f);
		if (iLocal_142 == 0)
		{
			iLocal_142 = 1;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
		else if (iLocal_142 == 1)
		{
			iLocal_142 = 2;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		}
	}
	if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
	{
		func_332(2, 188, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(301), -1f, -1f, -1f, -1f);
		}
		func_332(2, 187, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(300), -1f, -1f, -1f, -1f);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(300), -1f, -1f, -1f, -1f);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_RELEASE_EVENT", SYSTEM::TO_FLOAT(301), -1f, -1f, -1f, -1f);
		}
	}
	else
	{
		func_332(2, 188, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(188), -1f, -1f, -1f, -1f);
		}
		func_332(2, 187, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(187), -1f, -1f, -1f, -1f);
		}
	}
	func_332(2, 189, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(189), -1f, -1f, -1f, -1f);
	}
	func_332(2, 190, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(190), -1f, -1f, -1f, -1f);
	}
	func_332(2, 201, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1f, -1f, -1f, -1f);
	}
	func_332(2, 202, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		func_330();
	}
	func_332(2, 203, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
	{
		if (func_329())
		{
			MISC::SET_BIT(&uLocal_112, 15);
		}
		else
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(203), -1f, -1f, -1f, -1f);
		}
	}
	func_332(2, 204, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(204), -1f, -1f, -1f, -1f);
	}
	if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "SET_MOUSE_INPUT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_332(2, 237, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1f, -1f, -1f, -1f);
		}
		func_332(2, 238, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
		{
			func_330();
		}
	}
	else
	{
		func_332(2, 195, 1);
		func_332(2, 196, 1);
		iVar0 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/);
		iVar1 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/);
		if (((iVar0 != 127 || iLocal_1571 != 127) || iVar1 != 127) || iLocal_1572 != 127)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "SET_ANALOG_STICK_INPUT");
			iLocal_1571 = iVar0;
			iLocal_1572 = iVar1;
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1571);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1572);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	func_332(2, 197, 1);
	func_332(2, 198, 1);
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 197 /*INPUT_FRONTEND_RIGHT_AXIS_X*/);
	iVar3 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 198 /*INPUT_FRONTEND_RIGHT_AXIS_Y*/);
	if (((iVar2 != 127 || iLocal_1573 != 127) || iVar3 != 127) || iLocal_1574 != 127)
	{
		bVar4 = (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/));
		if (!bVar4)
		{
			bVar4 = (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/));
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_859, "SET_ANALOG_STICK_INPUT");
		iLocal_1573 = iVar2;
		iLocal_1574 = iVar3;
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1573);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1574);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && !PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		func_451(0, 1);
	}
}

bool func_329()//Position - 0xC188
{
	if (func_274() == 6)
	{
		return 0;
	}
	return iLocal_861 != 0;
}

void func_330()//Position - 0xC1A1
{
	if (!func_437())
	{
		func_451(0, 1);
	}
	if (iLocal_142 == 0)
	{
		if (!func_331())
		{
			func_451(0, 1);
		}
	}
	else if (!func_331())
	{
		iLocal_142 = 0;
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SHOW_SCREEN", 0f, -1f, -1f, -1f, -1f);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
		return;
	}
	if (func_331())
	{
		func_276();
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_859, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1f, -1f, -1f, -1f);
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Back", "GTAO_SMG_Hangar_Computer_Sounds", true);
}

bool func_331()//Position - 0xC24A
{
	return BitTest(uLocal_112, 1);
}

void func_332(int iParam0, int iParam1, bool bParam2)//Position - 0xC256
{
	if (!func_333())
	{
		PAD::SET_INPUT_EXCLUSIVE(iParam0, iParam1);
		PAD::ENABLE_CONTROL_ACTION(iParam0, iParam1, bParam2);
	}
}

bool func_333()//Position - 0xC278
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_334()//Position - 0xC286
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HAPP_SKP_W_T" /* GXT: Pay For Supplies */, "HAPP_SKP_W_M" /* GXT: Are you sure you want to pay $~1~ to acquire the supplies needed to begin the Air-Freight Business? */, 36, 0, true, Global_262145.f_16063 /* Tunable: SMUGGLER_SKIP_SETUP_COST */, 0, 0, true, 0);
	func_332(2, 202, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		MISC::CLEAR_BIT(&uLocal_112, 15);
	}
	func_332(2, 201, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_16063 /* Tunable: SMUGGLER_SKIP_SETUP_COST */, false, true, false, -1, 0))
		{
			bVar0 = true;
		}
		else
		{
			Global_75986 = 1;
			MISC::CLEAR_BIT(&uLocal_112, 15);
		}
	}
	if (bVar0)
	{
		while (!func_341(&iVar2, &iVar1))
		{
			func_371();
			func_340();
			SYSTEM::WAIT(0);
		}
		func_340();
		func_371();
		func_276();
		if (iVar1 == 2)
		{
			MISC::SET_BIT(&uLocal_112, 9);
			func_339(15966, 1);
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_5 = 1;
			func_281();
			func_336(-457999121, 10, 0);
			func_335();
		}
		else if (iVar1 == 3)
		{
			if (iVar2 == 1)
			{
				MISC::SET_BIT(&uLocal_112, 9);
				func_339(15966, 1);
				Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_5 = 1;
				func_281();
				func_336(-457999121, 10, 0);
				func_335();
			}
			else
			{
				func_200("HAPP_SKP_F_T" /* GXT: Purchase Failed */, "HAPP_SKP_F_D" /* GXT: Unable to complete purchase at this time, please try again later. */, "OR_OVRLY_OK" /* GXT: Ok */, "", 1, 0, -1, 6, -1, 0, 0);
			}
		}
		MISC::CLEAR_BIT(&uLocal_112, 15);
	}
}

void func_335()//Position - 0xC3D3
{
	if (func_329())
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_861);
	}
}

void func_336(int iParam0, int iParam1, int iParam2)//Position - 0xC3E9
{
	int iVar0;
	
	if (func_338(iParam1, iParam2))
	{
		iVar0 = func_337();
		Global_2694470[iVar0] = iParam1;
		Global_2694481[iVar0] = iParam0;
	}
}

int func_337()//Position - 0xC416
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694470[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_338(int iParam0, var uParam1)//Position - 0xC44B
{
	if (Global_1575051)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575063) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_339(int iParam0, bool bParam1)//Position - 0xC4D1
{
	func_206(iParam0, bParam1, -1);
}

void func_340()//Position - 0xC4E2
{
	if (func_273())
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "WEB_PROCESSINGTRANSACTION" /* GXT: Processing Transaction */, 134217728, 0, false, -1, 0, 0, true, 0);
	}
}

int func_341(var uParam0, var uParam1)//Position - 0xC509
{
	switch (*uParam0)
	{
		case 0:
			if (func_273())
			{
				if (func_254(uParam1, 0, 1, iLocal_141))
				{
					if (*uParam1 == 2)
					{
						*uParam1 = 0;
						*uParam0 = 1;
					}
					else
					{
						return 1;
					}
				}
			}
			else
			{
				MONEY::_NETWORK_SPENT_SKIP_CARGO_SOURCE_SETUP(Global_262145.f_16063 /* Tunable: SMUGGLER_SKIP_SETUP_COST */, false, true, iLocal_141);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			func_342(3, uParam1, 0);
			return *uParam1 != 1;
			break;
	}
	return 0;
}

void func_342(int iParam0, var uParam1, bool bParam2)//Position - 0xC57C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 <= 0)
	{
		if (iParam0 == 0)
		{
		}
		*uParam1 = 3;
		return;
	}
	if (*uParam1 != 0 && *uParam1 != 1)
	{
		*uParam1 = 0;
	}
	iVar0 = func_107(PLAYER::PLAYER_ID());
	if (!func_273())
	{
		if (iVar0 >= iParam0)
		{
			iVar1 = (func_317() + iParam0);
			func_368(iVar1);
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_3 = iVar1;
			func_367(18090, 0, -1);
			func_364(iParam0, bParam2);
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 3;
		}
	}
	else if (iVar0 >= iParam0)
	{
		if (func_363(iParam0, uParam1))
		{
			if (*uParam1 == 2)
			{
				iVar2 = (func_317() + iParam0);
				func_368(iVar2);
				Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_3 = iVar2;
				*uParam1 = 2;
				func_364(iParam0, bParam2);
			}
			else if (*uParam1 == 3)
			{
				func_343();
				*uParam1 = 3;
			}
			func_367(18090, 0, -1);
		}
	}
	else
	{
		*uParam1 = 3;
	}
}

void func_343()//Position - 0xC677
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
	int iVar9;
	
	iVar0 = func_150(6104, -1);
	iVar1 = func_362();
	iVar2 = 0;
	if (iVar1 > iVar0)
	{
		iVar3 = 0;
		while (iVar3 < 50)
		{
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar3 == func_313(func_361(iVar4), -1))
				{
					if (func_313(func_314(iVar3), -1) != 0)
					{
						func_367(func_314(iVar3), 0, -1);
						func_367(func_361(iVar3), 100, -1);
						Global_1963639[iVar3] = 0;
						iVar2++;
					}
				}
				iVar4++;
			}
			iVar3++;
		}
		iVar1 = (iVar1 - iVar2);
		if (iVar1 > iVar0)
		{
			iVar5 = (iVar1 - iVar0);
			iVar2 = 0;
			iVar3 = 0;
			while (iVar3 < 50)
			{
				if (func_313(func_314(iVar3), -1) != 0)
				{
					func_367(func_314(iVar3), 0, -1);
					func_367(func_361(iVar3), 100, -1);
					Global_1963639[iVar3] = 0;
					iVar2++;
					if (iVar2 == iVar5)
					{
					}
					else
					{
						iVar3++;
					}
					iVar1 = (iVar1 - iVar2);
					Jump @345; //curOff = 254
					if (iVar1 < iVar0)
					{
						bVar6 = func_313(18090, -1);
						iVar7 = (iVar0 - iVar1);
						iVar8 = func_360(bVar6);
						if (bVar6 == -1 || bVar6 == 8)
						{
							bVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
						}
						iVar9 = 0;
						while (iVar9 < iVar7)
						{
							func_348(iVar8);
							iVar9++;
						}
						func_344();
					}
				}

void func_344()//Position - 0xC7D3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_346(PLAYER::PLAYER_ID()))
	{
		iVar1 = Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_8;
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_MP_HANGAR", iVar1, 0) == PLAYER::PLAYER_ID())
		{
			Global_1963690 = 1;
			Global_1963638 = 0;
		}
		else
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
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				if (func_52(iVar3, 1, 1))
				{
					if (func_346(iVar3))
					{
						iVar4 = Global_2657704[iVar3 /*463*/].f_321.f_8;
						if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_MP_HANGAR", iVar4, 0) == iVar3)
						{
							if (Global_1963638 > 0)
							{
								if (!func_5(&Global_1963701))
								{
									func_345(iVar3, &Global_1963639);
									func_4(&Global_1963701, 0, 0);
									Global_1963638 = (Global_1963638 - 1);
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
		bVar0 = false;
	}
}

void func_345(int iParam0, var uParam1)//Position - 0xC8BC
{
	struct<3> Var0;
	int iVar53;
	
	Var0.f_2 = 50;
	Var0.f_0 = -1544003568;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar53 = 0;
	while (iVar53 < *uParam1)
	{
		Var0.f_2[iVar53] = (*uParam1)[iVar53];
		iVar53++;
	}
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 53, func_266(iParam0));
}

int func_346(int iParam0)//Position - 0xC90E
{
	if (func_315())
	{
		if (iParam0 != func_16())
		{
			if (func_347(iParam0))
			{
				return Global_2657704[iParam0 /*463*/].f_321.f_10 == PLAYER::PLAYER_ID();
			}
		}
	}
	return 0;
}

int func_347(int iParam0)//Position - 0xC946
{
	if (iParam0 != func_16())
	{
		if (func_52(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_51(Global_2657704[iParam0 /*463*/].f_321.f_7) == 7;
			}
		}
	}
	return 0;
}

void func_348(int iParam0)//Position - 0xC98C
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = func_359();
	if (func_358(iVar0))
	{
		uVar1 = func_357(iParam0);
		iVar2 = func_350(uVar1, iVar0);
		func_367(func_314(iVar0), func_349(iVar2), -1);
		Global_1963639[iVar0] = func_349(iVar2);
	}
}

int func_349(int iParam0)//Position - 0xC9D7
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 2;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 8;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 9;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 10;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 11;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 12;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 13;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 14;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 15;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 16;
		
		default:
	}
	return 0;
}

int func_350(var uParam0, int iParam1)//Position - 0xCA90
{
	struct<2> Var0;
	var uVar2;
	
	if (iParam1 > 0)
	{
		func_356(&Var0, uParam0);
		func_354(&uVar2, iParam1);
		if (func_352(&Var0, &uVar2, iParam1))
		{
			return func_351(Var0);
		}
	}
	else if (iParam1 == 0)
	{
		func_356(&Var0, uParam0);
		return func_351(Var0);
	}
	return 0;
}

int func_351(struct<2> Param0)//Position - 0xCAE3
{
	switch (Param0.f_0)
	{
		case 5:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_medical");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_medical");
					break;
			}
			break;
		
		case 7:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_tobacco");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_tobacco");
					break;
			}
			break;
		
		case 1:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_antiques");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_antiques");
					break;
			}
			break;
		
		case 6:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_narc");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_narc");
					break;
			}
			break;
		
		case 4:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_jewellery");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_jewellery");
					break;
			}
			break;
		
		case 0:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_bones");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_bones");
					break;
			}
			break;
		
		case 3:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_fake");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_fake");
					break;
			}
			break;
		
		case 2:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_hazard");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_hazard");
					break;
			}
			break;
	}
	return 0;
}

int func_352(var uParam0, var uParam1, int iParam2)//Position - 0xCC93
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 != *uParam1)
	{
		return 1;
	}
	else if (uParam0->f_1 == uParam1->f_1)
	{
		iVar0 = func_353(uParam0, iParam2);
		if (iVar0 <= 2)
		{
			return 1;
		}
		else
		{
			iVar1 = 0;
			while (uParam0->f_1 == uParam1->f_1 && iVar1 < 10)
			{
				func_356(uParam0, *uParam0);
				iVar1++;
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_353(var uParam0, int iParam1)//Position - 0xCD04
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar1 = 0;
	iVar0 = iParam1;
	while (iVar0 >= (iParam1 - 2))
	{
		if (iVar0 >= 0)
		{
			func_354(&Var2, iParam1);
			if (*uParam0 == Var2.f_0 && uParam0->f_1 == Var2.f_1)
			{
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return iVar1;
}

void func_354(var uParam0, int iParam1)//Position - 0xCD52
{
	int iVar0;
	
	iVar0 = func_312(Global_1963639[iParam1]);
	*uParam0 = func_311(iVar0);
	uParam0->f_1 = func_355(iVar0);
}

int func_355(int iParam0)//Position - 0xCD7B
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 0;
		
		default:
	}
	return 0;
}

void func_356(var uParam0, var uParam1)//Position - 0xCE2B
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	*uParam0 = uParam1;
	uParam0->f_1 = iVar0;
}

int func_357(int iParam0)//Position - 0xCE46
{
	switch (iParam0)
	{
		case 5:
			return 0;
		
		case 6:
			return 1;
		
		case 7:
			return 2;
		
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		default:
	}
	return -1;
}

bool func_358(int iParam0)//Position - 0xCEA6
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_359()//Position - 0xCEBC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (Global_1963639[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_360(bool bParam0)//Position - 0xCEE9
{
	switch (bParam0)
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
		
		case 5:
			return 10;
		
		case 6:
			return 11;
		
		case 7:
			return 12;
		
		default:
	}
	return 0;
}

int func_361(int iParam0)//Position - 0xCF4E
{
	switch (iParam0)
	{
		case 0:
			return 18086;
		
		case 1:
			return 18087;
		
		case 2:
			return 18088;
		
		case 3:
			return 18089;
		
		default:
	}
	return 18086;
}

int func_362()//Position - 0xCF90
{
	int iVar0;
	int iVar1;
	
	if (!func_315())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_313(func_314(iVar0), -1) != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_363(int iParam0, var uParam1)//Position - 0xCFCE
{
	int iVar0;
	
	if (*uParam1 != 0 && *uParam1 != 1)
	{
		*uParam1 = 0;
	}
	switch (*uParam1)
	{
		case 0:
			iVar0 = joaat("MP_STAT_HANGAR_CONTRABAND_TOTAL_v0");
			if (func_268(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar0, joaat("NET_SHOP_ACTION_UPDATE_BUSINESS_GOODS"), iParam0, 0, 1, 4, 0, 3))
			{
				*uParam1 = 1;
			}
			else
			{
				*uParam1 = 3;
			}
			if (*uParam1 == 1 && func_263())
			{
			}
			else
			{
				*uParam1 = 3;
				func_259(func_272());
			}
			break;
		
		case 1:
			if (func_258(func_272()))
			{
				if (func_257(func_272()) == 2)
				{
					*uParam1 = 2;
					func_259(func_272());
				}
				else
				{
					*uParam1 = 3;
					func_259(func_272());
				}
			}
			break;
	}
	return *uParam1 != 1;
}

void func_364(int iParam0, bool bParam1)//Position - 0xD08E
{
	var uVar0;
	bool bVar1;
	int iVar2;
	var uVar3[8];
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 50)
	{
		return;
	}
	iVar12 = iParam0;
	while (iVar12 > 0)
	{
		iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		uVar3[iVar13]++;
		MISC::SET_BIT(&uVar0, iVar13);
		iVar12 = (iVar12 - 1);
	}
	bVar1 = false;
	while (bVar1 < 8)
	{
		if (BitTest(uVar0, bVar1))
		{
			iVar2 = 0;
			while (iVar2 < uVar3[bVar1])
			{
				iVar14 = func_360(bVar1);
				func_348(iVar14);
				iVar2++;
			}
		}
		bVar1++;
	}
	if (bParam1)
	{
		func_365(uVar0, &uVar3);
	}
	func_344();
}

void func_365(var uParam0, var uParam1)//Position - 0xD135
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	struct<4> Var6;
	
	StringCopy(&cVar2, "HNG_MLR_TCK_", 16);
	bVar0 = false;
	while (bVar0 < 8)
	{
		if (BitTest(uParam0, bVar0))
		{
			iVar1++;
		}
		bVar0++;
	}
	StringIntConCat(&cVar2, iVar1, 16);
	if (iVar1 > 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar2);
		bVar0 = false;
		while (bVar0 < 8)
		{
			if ((*uParam1)[bVar0] > 0)
			{
				Var6 = { func_366(bVar0) };
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var6);
				HUD::ADD_TEXT_COMPONENT_INTEGER((*uParam1)[bVar0]);
			}
			bVar0++;
		}
		HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
}

struct<4> func_366(bool bParam0)//Position - 0xD1B9
{
	struct<4> Var0;
	
	StringCopy(&Var0, "INVALID", 16);
	switch (bParam0)
	{
		case 0:
			StringCopy(&Var0, "TTYPE_ANIMAL" /* GXT: Animal Materials */, 16);
			break;
		
		case 1:
			StringCopy(&Var0, "TTYPE_ART" /* GXT: Art & Antiques */, 16);
			break;
		
		case 2:
			StringCopy(&Var0, "TTYPE_CHEMS" /* GXT: Chemicals */, 16);
			break;
		
		case 3:
			StringCopy(&Var0, "TTYPE_GOODS" /* GXT: Counterfeit Goods */, 16);
			break;
		
		case 4:
			StringCopy(&Var0, "TTYPE_JEWEL" /* GXT: Jewelry & Gemstones */, 16);
			break;
		
		case 5:
			StringCopy(&Var0, "TTYPE_MEDS" /* GXT: Medical Supplies */, 16);
			break;
		
		case 6:
			StringCopy(&Var0, "TTYPE_NARC" /* GXT: Narcotics */, 16);
			break;
		
		case 7:
			StringCopy(&Var0, "TTYPE_TOBAC" /* GXT: Tobacco & Alcohol */, 16);
			break;
		
		case 8:
			StringCopy(&Var0, "TTYPE_MIXED" /* GXT: Cargo */, 16);
			break;
	}
	return Var0;
}

void func_367(int iParam0, int iParam1, int iParam2)//Position - 0xD26C
{
	if (iParam2 == -1)
	{
		iParam2 = func_153();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

void func_368(int iParam0)//Position - 0xD294
{
	func_369(6104, iParam0, -1);
	if (iParam0 == 50)
	{
		func_206(41987, 1, -1);
	}
}

void func_369(int iParam0, int iParam1, int iParam2)//Position - 0xD2B7
{
	func_226(iParam0, iParam1, iParam2, 1);
}

void func_370()//Position - 0xD2CA
{
	if (Global_75984)
	{
		func_332(2, 201, 1);
		func_332(2, 202, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && !HUD::IS_WARNING_MESSAGE_ACTIVE()))
		{
			Global_75984 = 0;
			Global_75986 = 0;
			NETWORK::SET_LAST_VIEWED_SHOP_ITEM(Global_75987, Global_75988, 0);
			NETWORK::OPEN_COMMERCE_STORE("", "", 4);
			while (NETWORK::IS_COMMERCE_STORE_OPEN())
			{
				func_371();
				SYSTEM::WAIT(0);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/) && !HUD::IS_WARNING_MESSAGE_ACTIVE()))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			Global_75984 = 0;
			Global_75986 = 0;
		}
	}
}

void func_371()//Position - 0xD379
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	func_393();
	if (Global_78689)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	}
	HUD::THEFEED_HIDE_THIS_FRAME();
	func_332(2, 199, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	func_392(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_859, 255, 255, 255, 255, 0);
	if (func_329() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
		func_391(1);
		func_390(1);
		func_384(&iLocal_861, &uLocal_1562, &uLocal_862, func_389(&uLocal_862));
	}
	func_382();
	func_375(0);
	func_372(1);
	Global_1969858.f_5 = MISC::GET_FRAME_COUNT();
}

void func_372(bool bParam0)//Position - 0xD43F
{
	if (bParam0)
	{
		func_374();
	}
	func_373(4, -1);
	func_373(6, -1);
	func_373(7, -1);
	func_373(3, -1);
	func_373(1, -1);
	func_373(2, -1);
	func_373(11, -1);
	func_373(13, -1);
	func_373(14, -1);
	func_373(16, -1);
}

void func_373(int iParam0, int iParam1)//Position - 0xD490
{
	MISC::SET_BIT(&(Global_1654054.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1654054.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_374()//Position - 0xD4C6
{
	Global_2794162.f_4636 = 0;
}

void func_375(int iParam0)//Position - 0xD4D6
{
	if (func_381())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_380(0))
		{
			func_376(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

void func_376(int iParam0)//Position - 0xD509
{
	if (func_381())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_379())
		{
			func_378(1, 1);
		}
		else
		{
			func_378(0, 0);
		}
	}
	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8371, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21845 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 30);
	}
	if (!func_377())
	{
		Global_20500.f_1 = 3;
	}
}

int func_377()//Position - 0xD593
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_378(bool bParam0, bool bParam1)//Position - 0xD5BA
{
	if (bParam0)
	{
		if (func_380(0))
		{
			Global_20704 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
			}
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == 1)
	{
		Global_20704 = 0;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
}

bool func_379()//Position - 0xD62E
{
	return BitTest(Global_1963795, 5);
}

int func_380(int iParam0)//Position - 0xD63C
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
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
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_381()//Position - 0xD693
{
	return BitTest(Global_1963795, 19);
}

void func_382()//Position - 0xD6A2
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_383();
}

void func_383()//Position - 0xD6B2
{
	Global_23251.f_134 = 1;
}

void func_384(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0xD6C0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_388(uParam2);
	}
	if (Global_1577917 < 2)
	{
		func_390(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_387(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 363)
						{
							func_387(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_387(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
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
						func_202(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_387(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_387(&(uParam2->f_1[bVar0 /*57*/].f_16));
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
						func_202(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
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
		func_386(*iParam0, uParam1);
	}
	func_385();
}

void func_385()//Position - 0xDA5B
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_386(int iParam0, var uParam1)//Position - 0xDA79
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_387(char* sParam0)//Position - 0xDA98
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_388(var uParam0)//Position - 0xDAA6
{
	uParam0->f_692 = 0;
}

int func_389(var uParam0)//Position - 0xDAB4
{
	return uParam0->f_692;
}

void func_390(int iParam0)//Position - 0xDAC1
{
	Global_1577917 = iParam0;
}

void func_391(int iParam0)//Position - 0xDACF
{
	Global_1655612.f_1163 = iParam0;
}

void func_392(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xDAE0
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_393()//Position - 0xDB0F
{
	func_394(1);
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
}

void func_394(bool bParam0)//Position - 0xDB3B
{
	if (bParam0)
	{
		if (func_395())
		{
			Global_2683883.f_41 = 1;
		}
	}
	else
	{
		Global_2683883.f_41 = 0;
	}
}

bool func_395()//Position - 0xDB60
{
	return BitTest(Global_2683883.f_2, 11);
}

void func_396()//Position - 0xDB71
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
	iVar2 = 18;
	iVar3 = 0;
	sVar0 = "BRSCRWTEX" /* GXT: Alert */;
	if (!func_397())
	{
		switch (Global_4540957)
		{
			case 0:
				sVar1 = "BRDISTEX" /* GXT: You have insufficient funds. You can add GTA Dollars to your in-game account. */;
				break;
			
			case 1:
				sVar1 = "BRDISDLC" /* GXT: You do not own this downloadable content. */;
				break;
		}
		iVar3 = "BRSHETEX" /* GXT: Would you like to visit the Store? */;
	}
	else
	{
		switch (Global_4540957)
		{
			case 0:
				sVar1 = "BRDISTES" /* GXT: You have insufficient funds. You will be able to add GTA Dollars when signed into your in-game account. */;
				break;
			
			case 1:
				sVar1 = "BRDISDLC" /* GXT: You do not own this downloadable content. */;
				break;
		}
		iVar3 = "BRSHETES" /* GXT: The PC Store is not available while you are signed out. */;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, iVar2, iVar3, false, -1, 0, 0, true, 0);
	Global_1969858.f_5 = MISC::GET_FRAME_COUNT();
}

bool func_397()//Position - 0xDC2F
{
	return Global_1575051;
}

void func_398()//Position - 0xDC3B
{
	if (!BitTest(uLocal_112, 9))
	{
		if (!func_331())
		{
			if (!func_437())
			{
				MISC::SET_BIT(&uLocal_112, 13);
				func_200("HAPP_T1" /* GXT: ACCESS DENIED */, "HAPP_D1" /* GXT: Authentication must be granted by Ronald.Jakowski. Please progress with the Air-Freight Business setup. */, "HAPP_SU" /* GXT: Set Up */, "", 0, 0, -1, 5, -1, 0, 0);
				func_404();
				if ((!func_402(2) && !BitTest(Global_1950694, 2)) && BitTest(uLocal_112, 13))
				{
					func_401("HAPP_HELP_3" /* GXT: Before you can gain access to the Free Trade Shipping app you must acquire some initial supplies. Click the Set Up button to begin or press ~INPUT_FRONTEND_X~ to pay Ron to source these for you. */, 14000);
					MISC::SET_BIT(&Global_1950694, 2);
					func_399(2);
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_112, 9);
			}
		}
	}
}

void func_399(int iParam0)//Position - 0xDCC4
{
	switch (iParam0)
	{
		case 0:
			func_400(15967);
			break;
		
		case 1:
			func_400(15970);
			break;
		
		case 2:
			func_400(15973);
			break;
		
		case 3:
			func_400(15976);
			break;
		
		case 4:
			func_400(15979);
			break;
		
		case 5:
			func_400(15982);
			break;
		
		case 6:
			func_400(15985);
			break;
		
		case 7:
			func_400(15988);
			break;
		
		case 8:
			func_400(15991);
			break;
	}
}

void func_400(int iParam0)//Position - 0xDD63
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = (iParam0 + iVar0);
		if (!func_204(iVar1, -1))
		{
			func_206(iVar1, 1, -1);
			return;
		}
		iVar0++;
	}
}

void func_401(char* sParam0, int iParam1)//Position - 0xDD9A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_402(int iParam0)//Position - 0xDDB1
{
	switch (iParam0)
	{
		case 0:
			return func_403(15967);
		
		case 1:
			return func_403(15970);
		
		case 2:
			return func_403(15973);
		
		case 3:
			return func_403(15976);
		
		case 4:
			return func_403(15979);
		
		case 5:
			return func_403(15982);
		
		case 6:
			return func_403(15985);
		
		case 7:
			return func_403(15988);
		
		case 8:
			return func_403(15991);
		
		default:
	}
	return 0;
}

int func_403(int iParam0)//Position - 0xDE51
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = (iParam0 + iVar0);
		if (!func_204(iVar1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_404()//Position - 0xDE82
{
	func_405(2, 193, "HAPP_SU_B" /* GXT: Pay to Skip */, &uLocal_862, 0, 363);
}

void func_405(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)//Position - 0xDE9C
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
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam3->f_691), iVar0);
		if (iParam5 < 363)
		{
		}
	}
	uParam3->f_693++;
}

void func_406()//Position - 0xDF19
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 8 + 1;
	if (!BitTest(uLocal_112, 7) && !func_411())
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar6 = iVar4;
			if (func_410(iVar6))
			{
				Var0 = { func_409(iVar6) };
				iLocal_115 = func_408(iVar6);
				MISC::SET_BIT(&Global_1950694, iVar4);
				func_399(iVar6);
			}
			else
			{
				iVar4++;
			}
		}
	}
	if (!BitTest(uLocal_112, 7) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		func_401(&Var0, iLocal_115);
		MISC::SET_BIT(&uLocal_112, 7);
	}
	else if (BitTest(uLocal_112, 7))
	{
		if (!func_5(&uLocal_151))
		{
			func_4(&uLocal_151, 0, 0);
		}
		else if (func_3(&uLocal_151, iLocal_115, 0))
		{
			MISC::CLEAR_BIT(&uLocal_112, 7);
			iLocal_115 = 0;
			func_199(&uLocal_151);
			if (func_407())
			{
				MISC::SET_BIT(&uLocal_112, 8);
			}
		}
	}
}

int func_407()//Position - 0xDFEB
{
	if (((((((func_402(0) && func_402(1)) && func_402(2)) && func_402(3)) && func_402(4)) && func_402(6)) && func_402(7)) && func_402(8))
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0)//Position - 0xE047
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

struct<4> func_409(int iParam0)//Position - 0xE0C3
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPP_HELP_1" /* GXT: Bonuses applied to individual collections of Cargo types will be lost when selling all. Buyers only pay bonuses for collections of a specific type of Cargo. */, 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPP_HELP_2" /* GXT: Interested Buyers will pay a bonus for collections of the same Cargo type. The more you have in stock of the same Cargo type the bigger the bonus will be. Buyers will also pay bigger Bonuses depending on the Cargo type. */, 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPP_HELP_3" /* GXT: Before you can gain access to the Free Trade Shipping app you must acquire some initial supplies. Click the Set Up button to begin or press ~INPUT_FRONTEND_X~ to pay Ron to source these for you. */, 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPP_HELP_4" /* GXT: The Overview page tracks your stock levels, Cargo types and performance statistics for the Business. Rival Smugglers operating in your session are also listed for you to keep tabs on. */, 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPP_HELP_5" /* GXT: The Source page allows you to view the various types of Cargo being smuggled in and out of the state. Choose a type from this app or call Ron and he will source its location for you. */, 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPP_HELP_6" /* GXT: Mission difficulty scales depending on the type of Cargo you have chosen to steal. Hire additional members to recover more Cargo and help guarantee success. */, 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPP_HELP_7" /* GXT: The Sell page allows you to view and sell the Cargo types you've stockpiled. The value of each type is shown along with Bonuses for the amount you have collected of a type. */, 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPP_HELP_8" /* GXT: Mission difficulty scales depending on the type of Cargo you have chosen to sell. Larger sales may also require multiple delivery vehicles. Hire additional members to help move and protect your Cargo when choosing to sell big. */, 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPP_HELP_9" /* GXT: A collection of your Cargo has attracted an interested buyer willing to pay a Bonus for it. Buyers will pay Bonuses depending on the amount and type of Cargo you have stockpiled. */, 16);
			break;
	}
	return Var0;
}

int func_410(int iParam0)//Position - 0xE175
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!BitTest(uLocal_112, 9) && iParam0 != 2)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if ((!func_402(iParam0) && !BitTest(Global_1950694, bVar0)) && BitTest(uLocal_112, 11))
			{
				return 1;
			}
			break;
		
		case 1:
			if ((!func_402(iParam0) && !BitTest(Global_1950694, bVar0)) && BitTest(uLocal_112, 12))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((!func_402(iParam0) && !BitTest(Global_1950694, bVar0)) && BitTest(uLocal_112, 13))
			{
				return 1;
			}
			break;
		
		case 3:
			if (((!func_402(iParam0) && !BitTest(Global_1950694, bVar0)) && BitTest(uLocal_112, 9)) && iLocal_142 == 0)
			{
				return 1;
			}
			break;
		
		case 4:
			if ((!func_402(iParam0) && !BitTest(Global_1950694, bVar0)) && iLocal_142 == 1)
			{
				return 1;
			}
			break;
		
		case 5:
			if (((!func_402(iParam0) && !BitTest(Global_1950694, bVar0)) && iLocal_142 == 1) && (BitTest(Global_1950694, 4) || func_402(4)))
			{
				return 1;
			}
			break;
		
		case 6:
			if ((!func_402(iParam0) && !BitTest(Global_1950694, bVar0)) && iLocal_142 == 2)
			{
				return 1;
			}
			break;
		
		case 7:
			if (((!func_402(iParam0) && !BitTest(Global_1950694, bVar0)) && iLocal_142 == 2) && (BitTest(Global_1950694, 6) || func_402(6)))
			{
				return 1;
			}
			break;
		
		case 8:
			if (((((!func_402(iParam0) && !BitTest(Global_1950694, bVar0)) && BitTest(uLocal_112, 14)) && iLocal_142 == 2) && (BitTest(Global_1950694, 6) || func_402(6))) && (BitTest(Global_1950694, 7) || func_402(7)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_411()//Position - 0xE3A3
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_412()//Position - 0xE3C5
{
	if (iLocal_114 != -1)
	{
		func_413(iLocal_114);
	}
}

void func_413(int iParam0)//Position - 0xE3D9
{
	if (func_414(&uLocal_155, "SMGCAUD", func_434(iParam0), 8, 0, 0, 0))
	{
		iLocal_114 = -1;
	}
}

bool func_414(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE3FC
{
	func_433(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 0;
	return func_415(sParam2, iParam3, 0);
}

int func_415(char* sParam0, int iParam1, bool bParam2)//Position - 0xE44A
{
	Global_21846 = 0;
	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam1 > Global_21847)
			{
				if (Global_21852 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
					Global_21856 = 0;
					Global_21855 = 0;
					Global_20499 = 0;
				}
				else
				{
					func_432();
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
		if (func_431(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_430();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_22841 = Global_22842;
		Global_21464.f_370 = Global_22834;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21841 = Global_21842;
		if (Global_21851)
		{
			MISC::CLEAR_BIT(&Global_8370, 20);
			MISC::CLEAR_BIT(&Global_8371, 17);
			MISC::CLEAR_BIT(&Global_8372, 0);
			if (bParam2)
			{
				func_422();
				if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20500.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20466 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_421())
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
				if (!Global_78689)
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
			if (func_377())
			{
				return 0;
			}
			else
			{
				switch (Global_20500.f_1)
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
				if (BitTest(Global_8370, 9))
				{
					return 0;
				}
			}
			func_420();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_419();
		func_416();
		return 1;
	}
	if (Global_21845 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21847 || iParam1 == Global_21847)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_432();
	}
	return 0;
}

void func_416()//Position - 0xE718
{
	if (!func_417())
	{
		return;
	}
	if (Global_21851)
	{
		MemCopy(&(Global_1978312.f_1), {Global_21464}, 4);
		Global_1978312 = Global_7685;
		Global_1978312.f_6 = Global_21855;
	}
}

int func_417()//Position - 0xE74F
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_16())
	{
		return 0;
	}
	if (func_418(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_418(int iParam0)//Position - 0xE7B2
{
	return func_14(iParam0, 20);
}

void func_419()//Position - 0xE7C2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21845 = 1;
}

void func_420()//Position - 0xE7F2
{
	Global_21898 = Global_21897;
	Global_21892 = Global_21893;
	Global_21939 = { Global_21927 };
	Global_21945 = { Global_21933 };
	Global_21900 = Global_21899;
	Global_21969 = { Global_21951 };
	Global_21975 = { Global_21957 };
	Global_21981 = { Global_21963 };
	Global_21987 = { Global_21993 };
	Global_7685 = Global_7686;
	Global_7687 = Global_7688;
	Global_21856 = Global_21857;
	Global_21858 = Global_21859;
	Global_21860 = { Global_21876 };
	Global_21849 = Global_21850;
	Global_22861 = 0;
	Global_21894 = 0;
	Global_21895 = 0;
	MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_421()//Position - 0xE887
{
	int iVar0;
	int iVar1;
	
	if (Global_78689)
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

void func_422()//Position - 0xE920
{
	if (func_429(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[0 /*29*/])
			{
				Global_20500 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[1 /*29*/])
			{
				Global_20500 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[2 /*29*/])
			{
				Global_20500 = 2;
			}
			else
			{
				Global_20500 = 0;
			}
		}
	}
	else
	{
		Global_20500 = func_423();
		if (Global_20500 == 145)
		{
			Global_20500 = 3;
		}
		if (Global_78689)
		{
			Global_20500 = 3;
		}
		if (Global_20500 > 3)
		{
			Global_20500 = 3;
		}
	}
}

var func_423()//Position - 0xE9C2
{
	func_424();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_424()//Position - 0xE9DB
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_427(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_426(PLAYER::PLAYER_PED_ID());
			if (func_425(iVar0) && (!func_429(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_425(Global_113810.f_2366.f_539.f_4321))
				{
					Global_113810.f_2366.f_539.f_4322 = Global_113810.f_2366.f_539.f_4321;
				}
				Global_113810.f_2366.f_539.f_4323 = iVar0;
				Global_113810.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113810.f_2366.f_539.f_4321 != 145)
			{
				Global_113810.f_2366.f_539.f_4323 = Global_113810.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113810.f_2366.f_539.f_4321 = 145;
}

bool func_425(int iParam0)//Position - 0xEAD8
{
	return iParam0 < 3;
}

int func_426(int iParam0)//Position - 0xEAE4
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_427(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_427(int iParam0)//Position - 0xEB21
{
	if (func_425(iParam0))
	{
		return func_428(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_428(int iParam0)//Position - 0xEB46
{
	return Global_2058[iParam0 /*29*/];
}

bool func_429(int iParam0)//Position - 0xEB55
{
	return Global_43377 == iParam0;
}

void func_430()//Position - 0xEB63
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21134[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
		Global_21134[iVar0 /*10*/].f_7 = 0;
		Global_21134[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21134.f_161 = -99;
	Global_21134.f_162 = { 0f, 0f, 0f };
}

bool func_431(int iParam0, int iParam1)//Position - 0xEBB9
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1654054.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1654054.f_1048, iParam0);
}

void func_432()//Position - 0xEBF1
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1 == 9) || Global_20499 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
		Global_20500.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

void func_433(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xEC48
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	StringCopy(&Global_21915, sParam2, 24);
	Global_22834 = uParam5;
	if (iParam3 == 0)
	{
		Global_22832 = 1;
		Global_22830 = 0;
	}
	else
	{
		Global_22832 = 0;
		Global_22830 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22833 = 1;
		Global_22831 = 0;
	}
	else
	{
		Global_22833 = 0;
		Global_22831 = 1;
	}
}

char* func_434(int iParam0)//Position - 0xEC9E
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

void func_435()//Position - 0xECD8
{
	bool bVar0;
	
	if (!BitTest(uLocal_112, 4) && !func_411())
	{
		if (iLocal_142 == 0)
		{
			if (!func_204(15963, -1))
			{
				bVar0 = true;
				iLocal_115 = 9000;
				iLocal_114 = 0;
				func_206(15963, 1, -1);
			}
		}
		else if (iLocal_142 == 2)
		{
			if (!func_204(15964, -1))
			{
				bVar0 = true;
				iLocal_115 = 9000;
				iLocal_114 = 2;
				func_206(15964, 1, -1);
			}
		}
		else if (iLocal_142 == 1)
		{
			if (!func_204(15965, -1))
			{
				bVar0 = true;
				iLocal_115 = 9000;
				iLocal_114 = 1;
				func_206(15965, 1, -1);
			}
		}
	}
	if (bVar0)
	{
		MISC::SET_BIT(&uLocal_112, 4);
	}
	else if (BitTest(uLocal_112, 4))
	{
		if (!func_5(&uLocal_147))
		{
			func_4(&uLocal_147, 0, 0);
		}
		else if (func_3(&uLocal_147, iLocal_115, 0))
		{
			MISC::CLEAR_BIT(&uLocal_112, 4);
			iLocal_115 = 0;
			func_199(&uLocal_147);
			if (func_436())
			{
				MISC::SET_BIT(&uLocal_112, 5);
			}
		}
	}
}

int func_436()//Position - 0xEDBF
{
	if ((func_204(15963, -1) && func_204(15964, -1)) && func_204(15965, -1))
	{
		return 1;
	}
	return 0;
}

bool func_437()//Position - 0xEDF1
{
	return func_204(15966, -1);
}

void func_438()//Position - 0xEE01
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_451(0, 1);
	}
	else if (func_333())
	{
		func_451(0, 1);
	}
	else if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_451(0, 1);
	}
}

bool func_439()//Position - 0xEE3C
{
	return Global_75816;
}

void func_440()//Position - 0xEE48
{
	func_438();
	iLocal_859 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("HANGAR_CARGO");
	if (!func_437())
	{
		iLocal_861 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	}
	while (!func_450())
	{
		SYSTEM::WAIT(0);
	}
	func_376(1);
	func_448(1);
	func_447();
	HUD::THEFEED_PAUSE();
	func_446(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3) || Global_2794162.f_1954)
	{
		if (Global_2794162.f_1954)
		{
		}
		func_451(0, 1);
	}
	func_446(1);
	iLocal_141 = func_316();
	func_281();
	func_443();
	if (func_407())
	{
		MISC::SET_BIT(&uLocal_112, 8);
	}
	func_442();
	if (func_437())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	if (MISC::IS_PC_VERSION())
	{
		func_441(1, 1, 1, 1);
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Computer_Screen_Active_Scene"))
	{
		AUDIO::START_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	}
}

int func_441(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xEF1F
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

void func_442()//Position - 0xEF52
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		iLocal_330[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_129[iVar0] = -1;
		iLocal_118[iVar0] = 0;
		iVar0++;
	}
}

void func_443()//Position - 0xEF9C
{
	if (func_436())
	{
		MISC::SET_BIT(&uLocal_112, 5);
	}
	else
	{
		MISC::SET_BIT(&uLocal_112, 4);
		iLocal_115 = 800;
		func_445(1);
		func_444(&uLocal_155, 2, 0, "NERVOUSRON", 0, 1);
	}
}

void func_444(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xEFD4
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78689)
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

void func_445(bool bParam0)//Position - 0xF06F
{
	if (bParam0)
	{
		Global_1835499 = 1;
	}
	else
	{
		Global_1835499 = 0;
	}
}

void func_446(int iParam0)//Position - 0xF089
{
	if (Global_75816 != iParam0)
	{
		Global_75816 = iParam0;
	}
}

void func_447()//Position - 0xF0A3
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574747.f_9 = MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}

void func_448(bool bParam0)//Position - 0xF0CC
{
	if (bParam0)
	{
		func_449();
		if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8371, 16);
		}
		Global_20500.f_1 = 1;
		if (func_380(0))
		{
			func_376(0);
		}
	}
	else if (Global_20500.f_1 == 1)
	{
		if (!Global_20500.f_1 == 0)
		{
			Global_20500.f_1 = 3;
		}
	}
}

void func_449()//Position - 0xF12F
{
	if (Global_20500.f_1 == 9 || Global_20500.f_1 == 10)
	{
		Global_21898 = 0;
		Global_21894 = 1;
	}
}

int func_450()//Position - 0xF158
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_859))
	{
		return 0;
	}
	if (func_329())
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_861))
		{
			return 0;
		}
	}
	return 1;
}

void func_451(int iParam0, bool bParam1)//Position - 0xF186
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_859);
	func_335();
	func_446(iParam0);
	func_448(0);
	func_452();
	AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(1000);
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Exit", "GTAO_SMG_Hangar_Computer_Sounds", true);
	}
	if (MISC::IS_PC_VERSION())
	{
		func_441(0, 1, 1, 1);
	}
	HUD::THEFEED_RESUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Computer_Screen_Active_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
	}
	Global_1969858.f_5 = -1;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_452()//Position - 0xF1F3
{
	if (!Global_1574747)
	{
		return;
	}
	func_453();
}

void func_453()//Position - 0xF20A
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

