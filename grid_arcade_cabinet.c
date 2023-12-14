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
	var uLocal_67 = -1;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
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
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	float fLocal_114 = 0f;
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
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	struct<22> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<453> Local_162 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -2147483647, -1, 4, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, 4, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, 0, -1, 0, 4, 0, 0, 0, 0, 0, -1, 0, -1, -2147483647, 0, -1, -1, -2147483647, 0, -2147483647, 0, 0, 0, -2147483647, -1, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0 } ;
	struct<166> Local_615 = { 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 7, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -2147483647, 4, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 3, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, 10 } ;
	var uLocal_781 = 0;
	var uLocal_782 = -1;
	var uLocal_783 = -1;
	var uLocal_784 = 0;
	var uLocal_785 = -1;
	var uLocal_786 = -1;
	var uLocal_787 = 0;
	var uLocal_788 = -1;
	var uLocal_789 = -1;
	var uLocal_790 = 0;
	var uLocal_791 = -1;
	var uLocal_792 = -1;
	var uLocal_793 = 0;
	var uLocal_794 = -1;
	var uLocal_795 = -1;
	var uLocal_796 = 0;
	var uLocal_797 = -1;
	var uLocal_798 = -1;
	var uLocal_799 = 0;
	var uLocal_800 = -1;
	var uLocal_801 = -1;
	var uLocal_802 = 0;
	var uLocal_803 = -1;
	var uLocal_804 = -1;
	var uLocal_805 = 0;
	var uLocal_806 = -1;
	var uLocal_807 = -1;
	var uLocal_808 = 0;
	var uLocal_809 = -1;
	var uLocal_810 = -1;
	var uLocal_811 = 4;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	int iLocal_816[4] = { 0, 0, 0, 0 };
	struct<9> Local_821[4];
	struct<16> Local_858[4];
	struct<37> Local_923[4];
	struct<17> Local_1072 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0 } ;
	var uLocal_1089 = 255;
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
	var uLocal_1102 = 255;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 255;
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
	var uLocal_1119 = 255;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 255;
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
	var uLocal_1136 = 255;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 255;
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
	var uLocal_1153 = 255;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 255;
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
	var uLocal_1170 = 255;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 255;
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
	var uLocal_1187 = 255;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 255;
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
	var uLocal_1204 = 255;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 255;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
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
	fLocal_75 = 3f;
	fLocal_76 = 0f;
	fLocal_77 = 2f;
	fLocal_78 = 100f;
	iLocal_112 = -1;
	fLocal_114 = 0.5f;
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
			func_9();
		}
		if (func_1())
		{
			func_9();
		}
	}
}

int func_1()//Position - 0xD7
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_8())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_7())
	{
		return 1;
	}
	if (func_6(159))
	{
		if (!func_5())
		{
			return 1;
		}
	}
	if (func_6(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_2() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_2()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_2()//Position - 0x15B
{
	switch (func_4())
	{
		case 0:
			return func_3();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_3()//Position - 0x18E
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_4()//Position - 0x1B2
{
	return Global_32828;
}

bool func_5()//Position - 0x1BD
{
	return Global_2684312.f_698;
}

int func_6(int iParam0)//Position - 0x1CC
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_7()//Position - 0x1E3
{
	return Global_2695951;
}

bool func_8()//Position - 0x1EF
{
	return Global_2684312.f_693;
}

void func_9()//Position - 0x1FE
{
	func_11();
	func_10();
}

void func_10()//Position - 0x20E
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_11()//Position - 0x21A
{
	int iVar0;
	
	if (func_48())
	{
		Local_140.f_16 = 1;
	}
	Local_140.f_21 = func_45();
	func_44();
	func_20();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGrid");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridTiles");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerBlue");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerGreen");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerPurple");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerYellow");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridHUD");
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	if (Local_162.f_427 != 0)
	{
		GRAPHICS::RELEASE_BINK_MOVIE(Local_162.f_427);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_18(func_19(4));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_162.f_281[iVar0 /*7*/].f_5 >= 0)
		{
			AUDIO::STOP_SOUND(Local_162.f_281[iVar0 /*7*/].f_5);
			AUDIO::RELEASE_SOUND_ID(Local_162.f_281[iVar0 /*7*/].f_5);
		}
		if (Local_162.f_281[iVar0 /*7*/].f_6 >= 0)
		{
			AUDIO::STOP_SOUND(Local_162.f_281[iVar0 /*7*/].f_6);
			AUDIO::RELEASE_SOUND_ID(Local_162.f_281[iVar0 /*7*/].f_6);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_162.f_204[iVar0 /*19*/].f_7 >= 0)
		{
			AUDIO::STOP_SOUND(Local_162.f_204[iVar0 /*19*/].f_7);
			AUDIO::RELEASE_SOUND_ID(Local_162.f_204[iVar0 /*19*/].f_7);
		}
		if (Local_162.f_204[iVar0 /*19*/].f_6 >= 0)
		{
			AUDIO::STOP_SOUND(Local_162.f_204[iVar0 /*19*/].f_6);
			AUDIO::RELEASE_SOUND_ID(Local_162.f_204[iVar0 /*19*/].f_6);
		}
		if (Local_162.f_204[iVar0 /*19*/].f_8 >= 0)
		{
			AUDIO::STOP_SOUND(Local_162.f_204[iVar0 /*19*/].f_8);
			AUDIO::RELEASE_SOUND_ID(Local_162.f_204[iVar0 /*19*/].f_8);
		}
		iVar0++;
	}
	if (Local_162.f_178.f_4 >= 0)
	{
		AUDIO::STOP_SOUND(Local_162.f_178.f_4);
		AUDIO::RELEASE_SOUND_ID(Local_162.f_178.f_4);
	}
	if (Local_162.f_428 >= 0)
	{
		AUDIO::STOP_SOUND(Local_162.f_428);
		AUDIO::RELEASE_SOUND_ID(Local_162.f_428);
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_TW");
	func_16();
	func_15(12);
	Global_1927705 = 0;
	Global_1927705.f_1 = 0;
	func_12(0);
	func_10();
}

void func_12(bool bParam0)//Position - 0x420
{
	if (bParam0)
	{
		if (!func_13(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_436), 4);
		}
	}
	else if (func_13(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_436), 4);
	}
}

int func_13(int iParam0)//Position - 0x46D
{
	if (iParam0 != func_14())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_436, 4);
	}
	return 0;
}

int func_14()//Position - 0x490
{
	return -1;
}

void func_15(int iParam0)//Position - 0x499
{
	Local_162.f_140 = iParam0;
}

void func_16()//Position - 0x4A7
{
	Local_162.f_442 = -1;
	Local_162.f_421 = 0;
	if (Local_162.f_418 != -2147483647)
	{
		Local_162.f_418 = -2147483647;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_162.f_419))
	{
		Local_162.f_419 = func_17();
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

var func_17()//Position - 0x4F4
{
	var uVar0;
	
	return uVar0;
}

void func_18(char* sParam0)//Position - 0x4FE
{
	AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
}

char* func_19(int iParam0)//Position - 0x50D
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_TW_TITLE_START";
		
		case 1:
			return "CASINO_TW_GAMEPLAY";
		
		case 2:
			return "CASINO_TW_MID_ROUND";
		
		case 3:
			return "CASINO_TW_SUDDEN_DEATH";
		
		case 4:
			return "CASINO_TW_STOP_MUSIC";
		
		default:
	}
	return "INVALID MUSIC EVENT";
}

void func_20()//Position - 0x561
{
	Global_1663020 = 0;
	func_42();
	Global_4718592.f_176767 = 0;
	func_41();
	MISC::CLEAR_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873), 16);
	func_40(0, 1, 1, 0);
	func_39();
	if (func_37() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_22(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	func_21(0, 0, -1);
	func_21(1, 0, -1);
	func_21(2, 0, -1);
	func_21(3, 0, -1);
	func_21(4, 0, -1);
	func_21(6, 0, -1);
	func_21(7, 0, -1);
	func_21(8, 0, -1);
	func_21(9, 0, -1);
	func_21(10, 0, -1);
	func_21(11, 0, -1);
	func_21(12, 0, -1);
	func_21(13, 0, -1);
	func_21(14, 0, -1);
	func_21(15, 0, -1);
	func_21(16, 0, -1);
}

void func_21(int iParam0, bool bParam1, int iParam2)//Position - 0x64B
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1668317.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1668317.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1668317.f_1046), iParam0);
			}
			break;
	}
}

void func_22(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x69A
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
	if (func_36())
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
		if (!func_37())
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
				else if (bVar14 || ((!func_32(PLAYER::PLAYER_ID(), 0) && !func_31()) && !func_30(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657921[iParam0 /*463*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_27(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_26(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_25();
					func_24();
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
				Global_2657921[iParam0 /*463*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697318)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697318 = 0;
				}
				if (Global_2635562.f_2981)
				{
					Global_2635562.f_2981 = 0;
				}
			}
			else
			{
				if (!func_26(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_23(Global_4718592.f_183007))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575052)
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

bool func_23(int iParam0)//Position - 0xB4C
{
	return iParam0 == 17;
}

void func_24()//Position - 0xB59
{
	struct<3> Var0;
	
	Global_2672741.f_1028 = 0;
	Global_2672741.f_1029 = 0;
	Global_2672741.f_1030 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672741.f_1035 = -1;
	Global_2672741.f_1036 = 0;
	Global_2635562.f_2992 = { Var0 };
}

void func_25()//Position - 0xBA6
{
	Global_2635562.f_702 = 0;
	Global_2635562.f_3035 = 0;
	Global_2635562.f_515 = 0;
	Global_2635562.f_606 = 0;
	Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635562.f_2990 = 0;
}

int func_26(int iParam0)//Position - 0xBE4
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

void func_27(bool bParam0, int iParam1, int iParam2)//Position - 0xC15
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
				func_29();
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
		if (func_32(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_28(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_28(int iParam0, bool bParam1)//Position - 0xCE5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_29()//Position - 0xD01
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

int func_30(int iParam0)//Position - 0xD59
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657921[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_31()//Position - 0xD98
{
	return BitTest(Global_2621446, 3);
}

bool func_32(int iParam0, int iParam1)//Position - 0xDA6
{
	bool bVar0;
	
	if (!func_35(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_33(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845263[iParam0 /*877*/].f_205 == 8;
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

int func_33(int iParam0, bool bParam1)//Position - 0xDFF
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
	}
	if (Global_1575059[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574919[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_34()//Position - 0xE40
{
	return Global_1574925;
}

int func_35(var uParam0)//Position - 0xE4C
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

int func_36()//Position - 0xE6E
{
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 2) && !Global_2685249.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_37()//Position - 0xE9F
{
	if (func_38() == 0)
	{
		return 1;
	}
	return 0;
}

int func_38()//Position - 0xEB4
{
	return Global_1574632.f_18;
}

void func_39()//Position - 0xEC2
{
	if (Global_2672741.f_951.f_10)
	{
		Global_2672741.f_951.f_10 = 0;
	}
}

int func_40(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xEE0
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

void func_41()//Position - 0xF13
{
	if (Global_1928228)
	{
	}
	Global_1928228 = 0;
}

void func_42()//Position - 0xF27
{
	if (!Global_1574754)
	{
		return;
	}
	func_43();
}

void func_43()//Position - 0xF3E
{
	Global_1574754 = 0;
	StringCopy(&(Global_1574754.f_1), "", 32);
	Global_1574754.f_9 = 0;
}

void func_44()//Position - 0xF5E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_140))
	{
		return;
	}
	if (Local_140.f_19 == 0)
	{
		return;
	}
	Local_140.f_19 = (NETWORK::GET_NETWORK_TIME_ACCURATE() - Local_140.f_19);
	STATS::PLAYSTATS_ARCADE_GAME(MISC::GET_HASH_KEY(&Local_140), Local_140.f_16, Local_140.f_17, Local_140.f_18, Local_140.f_19, Local_140.f_20, Local_140.f_21);
}

int func_45()//Position - 0xFB7
{
	if (PLAYER::PLAYER_ID() != func_14())
	{
		if (Global_1942781.f_529 != -1)
		{
			switch (func_46())
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
	else
	{
		return 0;
	}
	return 0;
}

int func_46()//Position - 0x1016
{
	return func_47(Global_1942781.f_529);
}

int func_47(int iParam0)//Position - 0x1029
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
	}
	return -1;
}

int func_48()//Position - 0x1503
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_923[iVar0 /*37*/].f_25)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_49()//Position - 0x152E
{
	func_359();
	func_102();
	func_53();
	func_50();
}

void func_50()//Position - 0x1546
{
	func_52();
	if (!func_51())
	{
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
	}
}

bool func_51()//Position - 0x155E
{
	return BitTest(Local_162.f_417, 0);
}

void func_52()//Position - 0x156D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_923[iVar0 /*37*/].f_25)
		{
			Local_821[iVar0 /*9*/] = { Local_923[iVar0 /*37*/] };
			Local_858[iVar0 /*16*/] = { Local_923[iVar0 /*37*/].f_9 };
		}
		iVar0++;
	}
}

void func_53()//Position - 0x15BD
{
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	switch (Local_615.f_145)
	{
		case 0:
			func_100();
			break;
		
		case 1:
			func_94();
			break;
		
		case 2:
			func_88();
			break;
		
		case 3:
			func_87();
			break;
		
		case 4:
			func_67();
			break;
		
		case 5:
			func_54();
			break;
		
		case 6:
			break;
		
		case 7:
			break;
	}
}

void func_54()//Position - 0x163C
{
	if (NETWORK::GET_NETWORK_TIME() < Local_615.f_147 + 5000)
	{
		return;
	}
	if (func_66())
	{
		func_65(2);
		return;
	}
	func_55();
	func_65(6);
}

void func_55()//Position - 0x166E
{
	struct<3> Var0;
	int iVar43;
	
	Var0 = 14;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	iVar43 = 0;
	while (iVar43 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar43)) && !Local_923[iVar43 /*37*/].f_25)
		{
		}
		else if (Local_821[iVar43 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Var0[iVar43 /*3*/] = Local_821[iVar43 /*9*/].f_7;
			Var0[iVar43 /*3*/].f_1 = Local_821[iVar43 /*9*/].f_8;
			Var0[iVar43 /*3*/].f_2 = iVar43;
		}
		iVar43++;
	}
	iVar43 = 0;
	while (iVar43 <= 9)
	{
		Var0[iVar43 + 4 /*3*/] = Local_615.f_165[iVar43 /*3*/];
		Var0[iVar43 + 4 /*3*/].f_2 = Local_615.f_165[iVar43 /*3*/].f_2;
		Var0[iVar43 + 4 /*3*/].f_1 = Local_615.f_165[iVar43 /*3*/].f_1;
		iVar43++;
	}
	func_64(&Var0, 0, 13);
	iVar43 = 0;
	while (iVar43 <= 9)
	{
		Local_615.f_165[iVar43 /*3*/] = Var0[iVar43 /*3*/];
		Local_615.f_165[iVar43 /*3*/].f_2 = Var0[iVar43 /*3*/].f_2;
		Local_615.f_165[iVar43 /*3*/].f_1 = Var0[iVar43 /*3*/].f_1;
		func_56(func_58(PLAYER::PLAYER_ID()), 0, iVar43, Local_615.f_165[iVar43 /*3*/], Local_615.f_165[iVar43 /*3*/].f_1, 0);
		iVar43++;
	}
}

void func_56(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)//Position - 0x1873
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
	iVar8 = func_57(iParam0);
	if (!iVar8 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 8, iVar8, Var0.f_0);
	}
}

var func_57(int iParam0)//Position - 0x18C8
{
	var uVar0;
	
	if (func_35(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_58(int iParam0)//Position - 0x18E3
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return iParam0;
	}
	if (func_62(iParam0) != -1)
	{
		iVar0 = func_47(func_62(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_60(iParam0, 0))
			{
				return func_59(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_14();
		}
		return Global_2657921[iParam0 /*463*/].f_321.f_10;
	}
	return func_14();
}

int func_59(int iParam0)//Position - 0x1972
{
	if (func_35(iParam0))
	{
		return Global_1886967[iParam0 /*609*/].f_10;
	}
	return func_14();
}

bool func_60(int iParam0, bool bParam1)//Position - 0x1995
{
	if (!func_35(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_61(iParam0))
		{
			return 0;
		}
	}
	return Global_1886967[iParam0 /*609*/].f_10 != func_14();
}

int func_61(int iParam0)//Position - 0x19CE
{
	if (func_35(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_14())
		{
			return Global_1886967[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x1A03
{
	if (iParam0 != func_14())
	{
		if (func_63(iParam0, 1, 1))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575079 || Global_2635562.f_2980) && iParam0 == PLAYER::PLAYER_ID()) && func_63(iParam0, 1, 0))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

int func_63(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A72
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
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_64(var uParam0, int iParam1, int iParam2)//Position - 0x1AD2
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar2 = (uParam0[((iParam1 + iParam2) / 2) /*3*/])->f_1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*3*/])->f_1 > iVar2 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (iVar2 > (uParam0[iVar1 /*3*/])->f_1 && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var3.f_0 = (*uParam0)[iVar0 /*3*/];
			Var3.f_2 = (uParam0[iVar0 /*3*/])->f_2;
			Var3.f_1 = (uParam0[iVar0 /*3*/])->f_1;
			(*uParam0)[iVar0 /*3*/] = (*uParam0)[iVar1 /*3*/];
			(uParam0[iVar0 /*3*/])->f_2 = (uParam0[iVar1 /*3*/])->f_2;
			(uParam0[iVar0 /*3*/])->f_1 = (uParam0[iVar1 /*3*/])->f_1;
			(*uParam0)[iVar1 /*3*/] = Var3.f_0;
			(uParam0[iVar1 /*3*/])->f_2 = Var3.f_2;
			(uParam0[iVar1 /*3*/])->f_1 = Var3.f_1;
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_64(uParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_64(uParam0, iParam1, iVar1);
	}
}

void func_65(int iParam0)//Position - 0x1BED
{
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	Local_615.f_145 = iParam0;
}

int func_66()//Position - 0x1C09
{
	int iVar0;
	int iVar1;
	
	if (Local_162.f_148 <= 1)
	{
		return 0;
	}
	if (Local_615.f_137 >= Local_615.f_138)
	{
		return 0;
	}
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Local_615.f_138) / 2f));
	if (Local_615.f_137 > iVar0)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_923[iVar1 /*37*/].f_25)
			{
			}
			else if (Local_821[iVar1 /*9*/].f_6 == -1)
			{
			}
			else if (Local_615.f_139[Local_821[iVar1 /*9*/].f_6] > iVar0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

void func_67()//Position - 0x1CA5
{
	int iVar0;
	
	func_81();
	func_76(0, 0);
	func_72();
	if (!func_71())
	{
		return;
	}
	iVar0 = func_69();
	if (iVar0 == -1)
	{
		func_76(1, 1);
		Local_615.f_162 = 1;
		return;
	}
	Local_615.f_139[Local_821[iVar0 /*9*/].f_6]++;
	Local_615.f_131[Local_615.f_137] = iVar0;
	Local_615.f_137++;
	Local_615.f_147 = NETWORK::GET_NETWORK_TIME();
	if (!func_66())
	{
		Local_615.f_130 = func_68();
	}
	func_65(5);
}

int func_68()//Position - 0x1D3C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_923[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_821[iVar2 /*9*/].f_6 == -1)
		{
		}
		else if (Local_615.f_139[Local_821[iVar2 /*9*/].f_6] > iVar1)
		{
			iVar0 = iVar2;
			iVar1 = Local_615.f_139[Local_821[iVar2 /*9*/].f_6];
		}
		else if (iVar0 > -1 && Local_615.f_139[Local_821[iVar2 /*9*/].f_6] == iVar1)
		{
			if (Local_821[iVar2 /*9*/].f_8 + iLocal_816[Local_821[iVar2 /*9*/].f_6]) > (Local_821[iVar0 /*9*/].f_8 + iLocal_816[Local_821[iVar0 /*9*/].f_6])
			{
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_69()//Position - 0x1E15
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_923[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_821[iVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			if (!Local_615.f_163)
			{
				if (Local_615.f_162 && func_70(iVar2))
				{
				}
				else
				{
					if (Local_615.f_162)
					{
						iVar4 = 0;
					}
					if (iLocal_816[Local_821[iVar2 /*9*/].f_6] > iVar1)
					{
						iVar0 = iVar2;
						iVar1 = iLocal_816[Local_821[iVar2 /*9*/].f_6];
						iVar3 = 0;
					}
					else if (iLocal_816[Local_821[iVar2 /*9*/].f_6] == iVar1)
					{
						iVar3 = 1;
					}
				}
				iVar2++;
				if (iVar3 && !Local_615.f_163)
				{
					iVar0 = -1;
				}
				if (iVar4 && Local_615.f_162)
				{
					Local_615.f_163 = 1;
				}
				return iVar0;
			}

int func_70(int iParam0)//Position - 0x1F05
{
	if (Local_821[iParam0 /*9*/] == 3)
	{
		return 1;
	}
	if (Local_821[iParam0 /*9*/] == 4)
	{
		return 1;
	}
	return 0;
}

int func_71()//Position - 0x1F2C
{
	if (!Local_615.f_162 && NETWORK::GET_NETWORK_TIME() > (Local_615.f_146 + 120000))
	{
		return 1;
	}
	if (Local_162.f_147 <= 1)
	{
		return 1;
	}
	return 0;
}

void func_72()//Position - 0x1F62
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_615.f_161 + 15000)
	{
		return;
	}
	Local_615.f_161 = NETWORK::GET_NETWORK_TIME();
	if (func_75())
	{
		bVar3 = func_75();
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
		if ((iVar0 % 2) != 0)
		{
			iVar0++;
			if (iVar0 >= 13)
			{
				iVar0 = 0;
			}
		}
		iVar1 = func_74(bVar3, 8, 0);
		iVar2 = func_74(bVar3, 0, 1);
	}
	else
	{
		bVar4 = func_75();
		iVar0 = func_74(bVar4, 12, 0);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
		if ((iVar1 % 2) != 0)
		{
			iVar1++;
			if (iVar1 >= 9)
			{
				iVar1 = 0;
			}
		}
		iVar2 = func_74(bVar4, 2, 3);
	}
	Local_615.f_148[0 /*4*/] = NETWORK::GET_NETWORK_TIME() + 1000;
	Local_615.f_148[0 /*4*/].f_1 = func_73(iVar0, iVar1);
	Local_615.f_148[0 /*4*/].f_2 = iVar2;
	Local_615.f_148[0 /*4*/].f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
}

int func_73(int iParam0, int iParam1)//Position - 0x2051
{
	return (iParam0 + iParam1 * 13);
}

int func_74(bool bParam0, int iParam1, int iParam2)//Position - 0x2060
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_75()//Position - 0x2077
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_76(bool bParam0, bool bParam1)//Position - 0x2095
{
	int iVar0;
	
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	if (Local_615.f_162 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Local_615.f_62[iVar0 /*3*/].f_2 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() < Local_615.f_62[iVar0 /*3*/].f_2 + 17500)
		{
		}
		else
		{
			Local_615.f_62[iVar0 /*3*/] = -1;
			Local_615.f_62[iVar0 /*3*/].f_1 = -1;
			Local_615.f_62[iVar0 /*3*/].f_2 = -2147483647;
		}
		iVar0++;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_615.f_84 + 20000 && !bParam0)
	{
		return;
	}
	Local_615.f_84 = NETWORK::GET_NETWORK_TIME();
	if (bParam1)
	{
		func_80();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_615.f_146) < 20000)
	{
		func_79();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_615.f_146) >= 20000 && (NETWORK::GET_NETWORK_TIME() - Local_615.f_146) < 60000)
	{
		func_78();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_615.f_146) < 102500)
	{
		func_77();
	}
}

void func_77()//Position - 0x21AB
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_615.f_62[0 /*3*/].f_1 = 6;
			Local_615.f_62[0 /*3*/] = 32;
			Local_615.f_62[0 /*3*/].f_2 = iVar0;
			Local_615.f_62[1 /*3*/].f_1 = 4;
			Local_615.f_62[1 /*3*/] = 56;
			Local_615.f_62[1 /*3*/].f_2 = iVar0;
			Local_615.f_62[2 /*3*/].f_1 = 4;
			Local_615.f_62[2 /*3*/] = 60;
			Local_615.f_62[2 /*3*/].f_2 = iVar0;
			Local_615.f_62[3 /*3*/].f_1 = 6;
			Local_615.f_62[3 /*3*/] = 84;
			Local_615.f_62[3 /*3*/].f_2 = iVar0;
			Local_615.f_62[4 /*3*/].f_1 = 0;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 1;
			Local_615.f_62[5 /*3*/] = 54;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 1;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_615.f_62[0 /*3*/].f_1 = 5;
			Local_615.f_62[0 /*3*/] = 32;
			Local_615.f_62[0 /*3*/].f_2 = iVar0;
			Local_615.f_62[1 /*3*/].f_1 = 1;
			Local_615.f_62[1 /*3*/] = 56;
			Local_615.f_62[1 /*3*/].f_2 = iVar0;
			Local_615.f_62[2 /*3*/].f_1 = 1;
			Local_615.f_62[2 /*3*/] = 60;
			Local_615.f_62[2 /*3*/].f_2 = iVar0;
			Local_615.f_62[3 /*3*/].f_1 = 5;
			Local_615.f_62[3 /*3*/] = 84;
			Local_615.f_62[3 /*3*/].f_2 = iVar0;
			Local_615.f_62[4 /*3*/].f_1 = 5;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 0;
			Local_615.f_62[5 /*3*/] = 54;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 0;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_615.f_62[0 /*3*/].f_1 = 3;
			Local_615.f_62[0 /*3*/] = 34;
			Local_615.f_62[0 /*3*/].f_2 = iVar0;
			Local_615.f_62[1 /*3*/].f_1 = 6;
			Local_615.f_62[1 /*3*/] = 30;
			Local_615.f_62[1 /*3*/].f_2 = iVar0;
			Local_615.f_62[2 /*3*/].f_1 = 6;
			Local_615.f_62[2 /*3*/] = 86;
			Local_615.f_62[2 /*3*/].f_2 = iVar0;
			Local_615.f_62[3 /*3*/].f_1 = 3;
			Local_615.f_62[3 /*3*/] = 82;
			Local_615.f_62[3 /*3*/].f_2 = iVar0;
			Local_615.f_62[4 /*3*/].f_1 = 2;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 0;
			Local_615.f_62[5 /*3*/] = 54;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 0;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			Local_615.f_62[0 /*3*/].f_1 = 0;
			Local_615.f_62[0 /*3*/] = 30;
			Local_615.f_62[0 /*3*/].f_2 = iVar0;
			Local_615.f_62[1 /*3*/].f_1 = 0;
			Local_615.f_62[1 /*3*/] = 34;
			Local_615.f_62[1 /*3*/].f_2 = iVar0;
			Local_615.f_62[2 /*3*/].f_1 = 0;
			Local_615.f_62[2 /*3*/] = 86;
			Local_615.f_62[2 /*3*/].f_2 = iVar0;
			Local_615.f_62[3 /*3*/].f_1 = 0;
			Local_615.f_62[3 /*3*/] = 82;
			Local_615.f_62[3 /*3*/].f_2 = iVar0;
			Local_615.f_62[4 /*3*/].f_1 = 2;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 7;
			Local_615.f_62[5 /*3*/] = 54;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 7;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 4:
			Local_615.f_62[0 /*3*/].f_1 = 6;
			Local_615.f_62[0 /*3*/] = 30;
			Local_615.f_62[0 /*3*/].f_2 = iVar0;
			Local_615.f_62[1 /*3*/].f_1 = 6;
			Local_615.f_62[1 /*3*/] = 34;
			Local_615.f_62[1 /*3*/].f_2 = iVar0;
			Local_615.f_62[2 /*3*/].f_1 = 6;
			Local_615.f_62[2 /*3*/] = 86;
			Local_615.f_62[2 /*3*/].f_2 = iVar0;
			Local_615.f_62[3 /*3*/].f_1 = 6;
			Local_615.f_62[3 /*3*/] = 82;
			Local_615.f_62[3 /*3*/].f_2 = iVar0;
			Local_615.f_62[4 /*3*/].f_1 = 0;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 0;
			Local_615.f_62[5 /*3*/] = 54;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 0;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_78()//Position - 0x2678
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_615.f_62[0 /*3*/].f_1 = 3;
			Local_615.f_62[0 /*3*/] = 32;
			Local_615.f_62[0 /*3*/].f_2 = iVar0;
			Local_615.f_62[1 /*3*/].f_1 = 4;
			Local_615.f_62[1 /*3*/] = 56;
			Local_615.f_62[1 /*3*/].f_2 = iVar0;
			Local_615.f_62[2 /*3*/].f_1 = 4;
			Local_615.f_62[2 /*3*/] = 60;
			Local_615.f_62[2 /*3*/].f_2 = iVar0;
			Local_615.f_62[3 /*3*/].f_1 = 3;
			Local_615.f_62[3 /*3*/] = 84;
			Local_615.f_62[3 /*3*/].f_2 = iVar0;
			Local_615.f_62[4 /*3*/].f_1 = 2;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 1;
			Local_615.f_62[5 /*3*/] = 54;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 1;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_615.f_62[0 /*3*/].f_1 = 5;
			Local_615.f_62[0 /*3*/] = 32;
			Local_615.f_62[0 /*3*/].f_2 = iVar0;
			Local_615.f_62[1 /*3*/].f_1 = 7;
			Local_615.f_62[1 /*3*/] = 56;
			Local_615.f_62[1 /*3*/].f_2 = iVar0;
			Local_615.f_62[2 /*3*/].f_1 = 7;
			Local_615.f_62[2 /*3*/] = 60;
			Local_615.f_62[2 /*3*/].f_2 = iVar0;
			Local_615.f_62[3 /*3*/].f_1 = 5;
			Local_615.f_62[3 /*3*/] = 84;
			Local_615.f_62[3 /*3*/].f_2 = iVar0;
			Local_615.f_62[4 /*3*/].f_1 = 2;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 0;
			Local_615.f_62[5 /*3*/] = 54;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 0;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_615.f_62[0 /*3*/].f_1 = 3;
			Local_615.f_62[0 /*3*/] = 30;
			Local_615.f_62[0 /*3*/].f_2 = iVar0;
			Local_615.f_62[1 /*3*/].f_1 = 3;
			Local_615.f_62[1 /*3*/] = 34;
			Local_615.f_62[1 /*3*/].f_2 = iVar0;
			Local_615.f_62[2 /*3*/].f_1 = 3;
			Local_615.f_62[2 /*3*/] = 86;
			Local_615.f_62[2 /*3*/].f_2 = iVar0;
			Local_615.f_62[3 /*3*/].f_1 = 3;
			Local_615.f_62[3 /*3*/] = 82;
			Local_615.f_62[3 /*3*/].f_2 = iVar0;
			Local_615.f_62[4 /*3*/].f_1 = 6;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 0;
			Local_615.f_62[5 /*3*/] = 54;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 0;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			Local_615.f_62[0 /*3*/].f_1 = 1;
			Local_615.f_62[0 /*3*/] = 30;
			Local_615.f_62[0 /*3*/].f_2 = iVar0;
			Local_615.f_62[1 /*3*/].f_1 = 1;
			Local_615.f_62[1 /*3*/] = 34;
			Local_615.f_62[1 /*3*/].f_2 = iVar0;
			Local_615.f_62[2 /*3*/].f_1 = 1;
			Local_615.f_62[2 /*3*/] = 86;
			Local_615.f_62[2 /*3*/].f_2 = iVar0;
			Local_615.f_62[3 /*3*/].f_1 = 1;
			Local_615.f_62[3 /*3*/] = 82;
			Local_615.f_62[3 /*3*/].f_2 = iVar0;
			Local_615.f_62[4 /*3*/].f_1 = 2;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 0;
			Local_615.f_62[5 /*3*/] = 54;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 0;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 4:
			Local_615.f_62[0 /*3*/].f_1 = 0;
			Local_615.f_62[0 /*3*/] = 30;
			Local_615.f_62[0 /*3*/].f_2 = iVar0;
			Local_615.f_62[1 /*3*/].f_1 = 0;
			Local_615.f_62[1 /*3*/] = 34;
			Local_615.f_62[1 /*3*/].f_2 = iVar0;
			Local_615.f_62[2 /*3*/].f_1 = 0;
			Local_615.f_62[2 /*3*/] = 86;
			Local_615.f_62[2 /*3*/].f_2 = iVar0;
			Local_615.f_62[3 /*3*/].f_1 = 0;
			Local_615.f_62[3 /*3*/] = 82;
			Local_615.f_62[3 /*3*/].f_2 = iVar0;
			Local_615.f_62[4 /*3*/].f_1 = 6;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 6;
			Local_615.f_62[5 /*3*/] = 54;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 6;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_79()//Position - 0x2B45
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::GET_NETWORK_TIME();
	Local_615.f_62[0 /*3*/].f_1 = 3;
	Local_615.f_62[0 /*3*/] = 32;
	Local_615.f_62[0 /*3*/].f_2 = iVar0;
	Local_615.f_62[1 /*3*/].f_1 = 3;
	Local_615.f_62[1 /*3*/] = 56;
	Local_615.f_62[1 /*3*/].f_2 = iVar0;
	Local_615.f_62[2 /*3*/].f_1 = 3;
	Local_615.f_62[2 /*3*/] = 60;
	Local_615.f_62[2 /*3*/].f_2 = iVar0;
	Local_615.f_62[3 /*3*/].f_1 = 3;
	Local_615.f_62[3 /*3*/] = 84;
	Local_615.f_62[3 /*3*/].f_2 = iVar0;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar1)
	{
		case 0:
			Local_615.f_62[4 /*3*/].f_1 = 2;
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_615.f_62[4 /*3*/].f_1 = MISC::GET_RANDOM_INT_IN_RANGE(4, 6);
			Local_615.f_62[4 /*3*/] = 58;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_615.f_62[4 /*3*/].f_1 = 1;
			Local_615.f_62[4 /*3*/] = 54;
			Local_615.f_62[4 /*3*/].f_2 = iVar0;
			Local_615.f_62[5 /*3*/].f_1 = 1;
			Local_615.f_62[5 /*3*/] = 58;
			Local_615.f_62[5 /*3*/].f_2 = iVar0;
			Local_615.f_62[6 /*3*/].f_1 = 1;
			Local_615.f_62[6 /*3*/] = 62;
			Local_615.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			break;
	}
}

void func_80()//Position - 0x2CB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_615.f_62[iVar0 /*3*/] = -1;
		Local_615.f_62[iVar0 /*3*/].f_1 = -1;
		Local_615.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar1 = NETWORK::GET_NETWORK_TIME();
	Local_615.f_62[0 /*3*/] = 54;
	Local_615.f_62[0 /*3*/].f_2 = iVar1;
	Local_615.f_62[1 /*3*/] = 56;
	Local_615.f_62[1 /*3*/].f_2 = iVar1;
	Local_615.f_62[2 /*3*/] = 58;
	Local_615.f_62[2 /*3*/].f_2 = iVar1;
	Local_615.f_62[3 /*3*/] = 60;
	Local_615.f_62[3 /*3*/].f_2 = iVar1;
	Local_615.f_62[4 /*3*/] = 62;
	Local_615.f_62[4 /*3*/].f_2 = iVar1;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar2)
	{
		case 0:
			Local_615.f_62[0 /*3*/].f_1 = 3;
			Local_615.f_62[1 /*3*/].f_1 = 3;
			Local_615.f_62[3 /*3*/].f_1 = 3;
			Local_615.f_62[4 /*3*/].f_1 = 3;
			break;
		
		case 1:
			Local_615.f_62[0 /*3*/].f_1 = 4;
			Local_615.f_62[1 /*3*/].f_1 = 4;
			Local_615.f_62[3 /*3*/].f_1 = 4;
			Local_615.f_62[4 /*3*/].f_1 = 4;
			break;
		
		case 2:
			Local_615.f_62[0 /*3*/].f_1 = 5;
			Local_615.f_62[1 /*3*/].f_1 = 5;
			Local_615.f_62[3 /*3*/].f_1 = 5;
			Local_615.f_62[4 /*3*/].f_1 = 5;
			break;
		
		case 3:
			Local_615.f_62[0 /*3*/].f_1 = 7;
			Local_615.f_62[1 /*3*/].f_1 = 7;
			Local_615.f_62[3 /*3*/].f_1 = 7;
			Local_615.f_62[4 /*3*/].f_1 = 7;
			break;
		
		case 4:
			Local_615.f_62[0 /*3*/].f_1 = 6;
			Local_615.f_62[1 /*3*/].f_1 = 6;
			Local_615.f_62[3 /*3*/].f_1 = 6;
			Local_615.f_62[4 /*3*/].f_1 = 6;
			break;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar2)
	{
		case 0:
			Local_615.f_62[2 /*3*/].f_1 = -1;
			Local_615.f_62[2 /*3*/] = -1;
			Local_615.f_62[2 /*3*/].f_2 = -2147483647;
			break;
		
		case 1:
			Local_615.f_62[2 /*3*/].f_1 = 2;
			break;
		
		case 2:
			Local_615.f_62[2 /*3*/].f_1 = 0;
			break;
		
		case 3:
			Local_615.f_62[2 /*3*/].f_1 = 1;
			break;
	}
}

void func_81()//Position - 0x2EF7
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 <= 5)
	{
		iVar6 = 0;
		while (iVar6 <= 3)
		{
			iVar7 = func_82(iVar5, iVar6);
			if (Local_615[iVar5 /*5*/][iVar6] != iVar7)
			{
				Local_615[iVar5 /*5*/][iVar6] = iVar7;
			}
			if (iVar7 != -1)
			{
				uVar0[iVar7]++;
			}
			iVar6++;
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		if (iLocal_816[iVar5] != uVar0[iVar5])
		{
			iLocal_816[iVar5] = uVar0[iVar5];
		}
		iVar5++;
	}
}

int func_82(int iParam0, int iParam1)//Position - 0x2F9F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_86(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_923[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_821[iVar1 /*9*/].f_6 == -1)
		{
		}
		else if (!func_83(&(Local_615.f_85[Local_821[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_83(&(Local_615.f_85[Local_821[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 - 13)))
		{
		}
		else if (!func_83(&(Local_615.f_85[Local_821[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_83(&(Local_615.f_85[Local_821[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 13) + 1))
		{
		}
		else if (!func_83(&(Local_615.f_85[Local_821[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 1)))
		{
		}
		else if (!func_83(&(Local_615.f_85[Local_821[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), iVar0 + 1))
		{
		}
		else if (!func_83(&(Local_615.f_85[Local_821[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 + 13 - 1)))
		{
		}
		else if (!func_83(&(Local_615.f_85[Local_821[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), iVar0 + 13))
		{
		}
		else
		{
			return Local_821[iVar1 /*9*/].f_6;
		}
		iVar1++;
	}
	return -1;
}

bool func_83(var uParam0, int iParam1)//Position - 0x311C
{
	return BitTest((*uParam0)[func_85(iParam1)], func_84(iParam1));
}

int func_84(int iParam0)//Position - 0x3135
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_85(iParam0) * 31);
}

int func_85(int iParam0)//Position - 0x3166
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

int func_86(int iParam0, int iParam1)//Position - 0x318C
{
	return func_73((1 + iParam0 * 2), (1 + iParam1 * 2));
}

void func_87()//Position - 0x31A4
{
	if (NETWORK::GET_NETWORK_TIME() < Local_615.f_146)
	{
		return;
	}
	Local_615.f_84 = Local_615.f_146;
	Local_615.f_161 = Local_615.f_146;
	func_76(1, 0);
	func_65(4);
}

void func_88()//Position - 0x31DA
{
	func_89();
	func_65(3);
}

void func_89()//Position - 0x31EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	Local_615.f_162 = 0;
	Local_615.f_163 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_615[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iLocal_816[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Local_615.f_85[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_162.f_149[iVar0] == -1)
		{
		}
		else
		{
			func_90(iVar0, func_93(iVar0), func_92(iVar0), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_615.f_62[iVar0 /*3*/] = -1;
		Local_615.f_62[iVar0 /*3*/].f_1 = -1;
		Local_615.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_615.f_148[iVar0 /*4*/] = -2147483647;
		Local_615.f_148[iVar0 /*4*/].f_1 = -1;
		Local_615.f_148[iVar0 /*4*/].f_2 = -1;
		Local_615.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	Local_615.f_146 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME() + 5000) / 1000f)) * 1000;
	func_81();
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x335D
{
	int iVar0;
	
	iVar0 = func_86(iParam1, iParam2);
	if (!(iParam3 && iParam0 == 3))
	{
		func_91(&(Local_615.f_85[iParam0 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1));
	}
	if (!(iParam3 && iParam0 == 2))
	{
		func_91(&(Local_615.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 - 13));
	}
	func_91(&(Local_615.f_85[iParam0 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1));
	func_91(&(Local_615.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 13) + 1);
	func_91(&(Local_615.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 1));
	func_91(&(Local_615.f_85[iParam0 /*11*/][0 /*5*/]), iVar0 + 1);
	if (!(iParam3 && iParam0 == 1))
	{
		func_91(&(Local_615.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 + 13 - 1));
	}
	if (!(iParam3 && iParam0 == 0))
	{
		func_91(&(Local_615.f_85[iParam0 /*11*/][1 /*5*/]), iVar0 + 13);
	}
	Local_615[iParam1 /*5*/][iParam2] = iParam0;
}

void func_91(var uParam0, int iParam1)//Position - 0x3464
{
	MISC::SET_BIT(uParam0[func_85(iParam1)], func_84(iParam1));
}

int func_92(int iParam0)//Position - 0x3480
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 3;
		
		case 3:
			return 3;
		
		default:
	}
	return -1;
}

int func_93(int iParam0)//Position - 0x34B8
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

void func_94()//Position - 0x34F0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_923[iVar0 /*37*/].f_25)
		{
		}
		else
		{
			if (Local_821[iVar0 /*9*/].f_6 == -1)
			{
				bVar2 = false;
			}
			else if (Local_821[iVar0 /*9*/] == 0)
			{
				bVar2 = false;
			}
			else
			{
				iVar1++;
				iVar0++;
			}
			if (!bVar2)
			{
				if (func_99(&(Local_162.f_314)))
				{
					func_98(&(Local_162.f_314));
				}
				return;
			}
			if (iVar1 <= 1)
			{
				if (func_99(&(Local_162.f_314)))
				{
					func_98(&(Local_162.f_314));
				}
				return;
			}
			if (!func_99(&(Local_162.f_314)))
			{
				func_97(&(Local_162.f_314), 0, 0);
				return;
			}
			else if (!func_95(&(Local_162.f_314), 1500, 0))
			{
				return;
			}
			Local_615.f_138 = iVar1 + 1;
			func_65(2);
		}

int func_95(var uParam0, int iParam1, bool bParam2)//Position - 0x35D3
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_96(uParam0, bParam2, 0);
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

void func_96(var uParam0, bool bParam1, bool bParam2)//Position - 0x3631
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

void func_97(var uParam0, bool bParam1, bool bParam2)//Position - 0x3676
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

void func_98(var uParam0)//Position - 0x36B3
{
	uParam0->f_1 = 0;
}

bool func_99(var uParam0)//Position - 0x36C0
{
	return uParam0->f_1;
}

void func_100()//Position - 0x36CC
{
	func_101();
	func_65(1);
}

void func_101()//Position - 0x36DD
{
	int iVar0;
	int iVar1;
	int iVar2[24];
	int iVar27;
	int iVar28;
	
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	MISC::SET_RANDOM_SEED(NETWORK::GET_NETWORK_TIME());
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 24);
		iVar27 = iVar2[iVar0];
		iVar2[iVar0] = iVar2[iVar1];
		iVar2[iVar1] = iVar27;
		iVar0++;
	}
	iVar28 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_615.f_31[iVar0 /*5*/][iVar1] = iVar2[iVar28];
			iVar28++;
			iVar1++;
		}
		iVar0++;
	}
}

void func_102()//Position - 0x3793
{
	switch (Local_162.f_140)
	{
		case 0:
			func_340();
			break;
		
		case 1:
			func_337();
			break;
		
		case 2:
			func_336();
			break;
		
		case 3:
			func_331();
			break;
		
		case 4:
			func_330();
			break;
		
		case 5:
			func_324();
			break;
		
		case 6:
			func_322();
			break;
		
		case 7:
			func_197();
			break;
		
		case 8:
			func_152();
			break;
		
		case 9:
			func_131();
			break;
		
		case 10:
			func_103();
			break;
		
		case 11:
			func_11();
			break;
		
		case 12:
			break;
	}
}

void func_103()//Position - 0x3849
{
	func_127();
	func_104();
}

void func_104()//Position - 0x3859
{
	var uVar0[4];
	float fVar5;
	int iVar6;
	int iVar7;
	
	func_126();
	func_125("MPArcadeCabinetGridHUD", "lbd", 0.5f, 0.5f, 0.66041666f, 0.94814813f, 0f, Local_162.f_107.f_17);
	HUD::SET_TEXT_SCALE(1f, 1f);
	HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_LBD_T");
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124((0.5f + 0.001041667f)), (0.15f + 0.003703704f), 0);
	HUD::SET_TEXT_SCALE(1f, 1f);
	HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_LBD_T");
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), 0.15f, 0);
	fVar5 = 0.22f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		func_121(Local_615.f_165[iVar6 /*3*/], &uVar0);
		iVar7 = 255;
		if (Local_615.f_165[iVar6 /*3*/].f_2 == Local_162.f_178)
		{
			iVar7 = SYSTEM::ROUND(MISC::ABSF((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0.5f)) * 80f))) + 175;
		}
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_124(0f), func_124((0.37f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_120(iVar6));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_162.f_107[uVar0[3] /*4*/], Local_162.f_107[uVar0[3] /*4*/].f_1, Local_162.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_124(0f), func_124(0.37f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_120(iVar6));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_124(0f), func_124((0.41354167f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[0]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_162.f_107[uVar0[3] /*4*/], Local_162.f_107[uVar0[3] /*4*/].f_1, Local_162.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_124(0f), func_124(0.41354167f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[0]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_124(0f), func_124((0.44114584f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[1]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_162.f_107[uVar0[3] /*4*/], Local_162.f_107[uVar0[3] /*4*/].f_1, Local_162.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_124(0f), func_124(0.44114584f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[1]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_124(0f), func_124((0.46875f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[2]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_162.f_107[uVar0[3] /*4*/], Local_162.f_107[uVar0[3] /*4*/].f_1, Local_162.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_124(0f), func_124(0.46875f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[2]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_124(0f), func_124((0.695f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
		HUD::ADD_TEXT_COMPONENT_INTEGER(Local_615.f_165[iVar6 /*3*/].f_1);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_162.f_107[uVar0[3] /*4*/], Local_162.f_107[uVar0[3] /*4*/].f_1, Local_162.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_124(0f), func_124(0.695f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
		HUD::ADD_TEXT_COMPONENT_INTEGER(Local_615.f_165[iVar6 /*3*/].f_1);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), fVar5, 0);
		fVar5 = (fVar5 + 0.06f);
		iVar6++;
	}
	func_106();
	func_105();
}

void func_105()//Position - 0x3D73
{
	func_125("MPArcadeCabinetGridTiles", "facade", 0.5f, 0.5f, 1f, 1f, 0f, Local_162.f_107.f_17);
}

void func_106()//Position - 0x3D9B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_107(iVar0);
		iVar0++;
	}
}

void func_107(int iParam0)//Position - 0x3DBC
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<4> Var6;
	float fVar10;
	
	if (!Local_1072[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { func_118() };
	Var6.f_3 = 255;
	if (Local_1072[iParam0 /*17*/].f_3)
	{
		Var0.f_0 = -Var0.f_0;
	}
	Var2 = { func_117() };
	if (!Local_1072[iParam0 /*17*/].f_2)
	{
		if (Local_1072[iParam0 /*17*/].f_4 > 0)
		{
			Var2.f_1 = (Var2.f_1 - ((Var0.f_1 * (IntToFloat(Local_1072[iParam0 /*17*/].f_4) % (IntToFloat(Local_1072[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_1072[iParam0 /*17*/].f_6) * 1f)));
			Var4 = { Var2 };
			Var4.f_1 = (Var4.f_1 + Var0.f_1);
		}
		else if (Local_1072[iParam0 /*17*/].f_7 > 0)
		{
			Local_1072[iParam0 /*17*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_1072[iParam0 /*17*/].f_7);
			Local_1072[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_1072[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_1072[iParam0 /*17*/].f_4 = Local_1072[iParam0 /*17*/].f_6;
		Local_1072[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_1072[iParam0 /*17*/].f_1)
	{
		fVar10 = (SYSTEM::TO_FLOAT(Local_1072[iParam0 /*17*/].f_5) / SYSTEM::TO_FLOAT(Local_1072[iParam0 /*17*/].f_8));
		Var6.f_0 = func_116(Local_1072[iParam0 /*17*/].f_9, Local_1072[iParam0 /*17*/].f_13, fVar10);
		Var6.f_1 = func_116(Local_1072[iParam0 /*17*/].f_9.f_1, Local_1072[iParam0 /*17*/].f_13.f_1, fVar10);
		Var6.f_2 = func_116(Local_1072[iParam0 /*17*/].f_9.f_2, Local_1072[iParam0 /*17*/].f_13.f_2, fVar10);
		Var6.f_3 = func_116(Local_1072[iParam0 /*17*/].f_9.f_3, Local_1072[iParam0 /*17*/].f_13.f_3, fVar10);
	}
	else
	{
		Var6 = { Local_1072[iParam0 /*17*/].f_9 };
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_115(iParam0)))
	{
		func_112(Var2, Var0, Var6);
	}
	else
	{
		func_108(func_111(iParam0), func_115(iParam0), Var2, Var0, 0f, Var6);
	}
	if (!Local_1072[iParam0 /*17*/].f_2 && Local_1072[iParam0 /*17*/].f_4 > 0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_115(0)))
		{
			func_112(Var4, Var0, Var6);
		}
		else
		{
			func_108(func_111(iParam0), func_115(iParam0), Var4, Var0, 0f, Var6);
		}
	}
	Local_1072[iParam0 /*17*/].f_5 = (Local_1072[iParam0 /*17*/].f_5 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_1072[iParam0 /*17*/].f_5 < 0)
	{
		Local_1072[iParam0 /*17*/].f_5 = (Local_1072[iParam0 /*17*/].f_5 + Local_1072[iParam0 /*17*/].f_8);
	}
	Local_1072[iParam0 /*17*/].f_4 = (Local_1072[iParam0 /*17*/].f_4 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_1072[iParam0 /*17*/].f_4 < 0)
	{
		Local_1072[iParam0 /*17*/].f_4 = 0;
	}
}

void func_108(char* sParam0, char* sParam1, struct<2> Param2, struct<2> Param4, float fParam6, struct<4> Param7)//Position - 0x408C
{
	Param2 = { func_109(Param2) };
	Param4 = { func_109(Param4) };
	func_125(sParam0, sParam1, Param2.f_0, Param2.f_1, Param4.f_0, Param4.f_1, fParam6, Param7);
}

struct<2> func_109(struct<2> Param0)//Position - 0x40C6
{
	return func_110((Param0.f_0 * (1f / 1920f)), (Param0.f_1 * (1f / 1080f)));
}

struct<2> func_110(float fParam0, float fParam1)//Position - 0x40E8
{
	struct<2> Var0;
	
	Var0.f_0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

char* func_111(int iParam0)//Position - 0x40FE
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

void func_112(struct<2> Param0, struct<2> Param2, struct<4> Param4)//Position - 0x4191
{
	Param0 = { func_109(Param0) };
	Param2 = { func_109(Param2) };
	func_113(Param0, Param2, Param4);
}

void func_113(struct<2> Param0, struct<2> Param2, struct<4> Param4)//Position - 0x41C1
{
	Param0 = { func_114(Param0) };
	Param2.f_0 = (Param2.f_0 * fLocal_137);
	GRAPHICS::DRAW_RECT(Param0.f_0, Param0.f_1, Param2.f_0, Param2.f_1, Param4.f_0, Param4.f_1, Param4.f_2, Param4.f_3, false);
}

struct<2> func_114(struct<2> Param0)//Position - 0x41FB
{
	Param0.f_0 = func_124(Param0.f_0);
	return Param0;
}

char* func_115(int iParam0)//Position - 0x420F
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

int func_116(int iParam0, int iParam1, float fParam2)//Position - 0x42A2
{
	return SYSTEM::ROUND((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

struct<2> func_117()//Position - 0x42BD
{
	return func_110((1920f / 2f), (1080f / 2f));
}

struct<2> func_118()//Position - 0x42D7
{
	return func_110(1920f, 1080f);
}

char* func_119(int iParam0)//Position - 0x42ED
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

char* func_120(int iParam0)//Position - 0x44D4
{
	switch (iParam0)
	{
		case 0:
			return "SCGW_1ST";
		
		case 1:
			return "SCGW_2ND";
		
		case 2:
			return "SCGW_3RD";
		
		case 3:
			return "SCGW_4TH";
		
		case 4:
			return "SCGW_5TH";
		
		case 5:
			return "SCGW_6TH";
		
		case 6:
			return "SCGW_7TH";
		
		case 7:
			return "SCGW_8TH";
		
		case 8:
			return "SCGW_9TH";
		
		case 9:
			return "SCGW_10TH";
		
		default:
	}
	return "SCGW_URD";
}

void func_121(int iParam0, var uParam1)//Position - 0x4569
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*uParam1)[iVar0] = func_122(iParam0, iVar0, 6);
		iVar0++;
	}
}

var func_122(int iParam0, int iParam1, int iParam2)//Position - 0x4592
{
	var uVar0;
	
	uVar0 = func_123(iParam2, 0);
	return (SYSTEM::SHIFT_RIGHT(iParam0, (iParam1 * iParam2)) && uVar0);
}

var func_123(int iParam0, int iParam1)//Position - 0x45B1
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

float func_124(float fParam0)//Position - 0x45DB
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_136));
	return fParam0;
}

void func_125(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)//Position - 0x4616
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
	iVar0 = SYSTEM::ROUND((fParam3 * IntToFloat(iLocal_139)));
	fParam3 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_139)));
	iVar0 = SYSTEM::ROUND(((fParam5 * IntToFloat(iLocal_139)) / 4f)) * 4;
	fParam5 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_139)));
	GRAPHICS::DRAW_SPRITE_ARX(sParam0, sParam1, func_124(fParam2), fParam3, (fParam4 * fLocal_137), fParam5, fParam6, Param7.f_0, Param7.f_1, Param7.f_2, Param7.f_3, 0, 1);
}

void func_126()//Position - 0x4697
{
	func_113(func_110(0.5f, 0.5f), func_110(1f, 1f), Local_162.f_107.f_25);
}

void func_127()//Position - 0x46BF
{
	struct<2> Var0;
	
	MISC::SET_BIT(&(Local_162.f_417), 0);
	StringCopy(&Var0, "SC_H_LBD_3", 16);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		StringConCat(&Var0, "PC", 16);
	}
	if (func_130(&Var0))
	{
		return;
	}
	func_16();
	func_128(&Var0);
}

void func_128(char* sParam0)//Position - 0x46FF
{
	Local_162.f_442 = MISC::GET_HASH_KEY(sParam0);
	func_129(sParam0);
}

void func_129(char* sParam0)//Position - 0x4718
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_130(char* sParam0)//Position - 0x472E
{
	if (Local_162.f_442 == MISC::GET_HASH_KEY(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_131()//Position - 0x4749
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	char cVar9[0];
	int iVar10;
	
	if (!func_149())
	{
		func_11();
	}
	func_139();
	func_138();
	if (Global_262145.f_36086 /* Tunable: 1509322753 */)
	{
		func_15(10);
		Local_162.f_436 = 0;
	}
	if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(Local_162.f_436))
	{
		if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(Local_162.f_436))
		{
			return;
		}
		if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(Local_162.f_436))
		{
			func_136();
			func_15(10);
			func_135("Frontend_Change_Screen");
			Local_162.f_436 = 0;
		}
		else
		{
			func_135("Frontend_Change_Letter");
			Local_162.f_432 = 0;
			func_121(0, &iVar0);
			iVar0[3] = Local_821[Local_162.f_178 /*9*/].f_6;
			Local_821[Local_162.f_178 /*9*/].f_7 = func_133(&iVar0);
			Local_162.f_436 = 0;
		}
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
		Local_162.f_432++;
		if (Local_162.f_432 == 3)
		{
			func_121(Local_821[Local_162.f_178 /*9*/].f_7, &iVar0);
			StringCopy(&cVar9, func_119(iVar0[0]), 4);
			StringConCat(&cVar9, func_119(iVar0[1]), 4);
			StringConCat(&cVar9, func_119(iVar0[2]), 4);
			if (SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&cVar9, &(Local_162.f_436)))
			{
				func_135("Frontend_Entered_Score");
			}
		}
		else if (func_132(Local_162.f_178) == 99)
		{
			func_135("Frontend_Change_Screen");
			func_15(10);
		}
		return;
	}
	if (func_132(Local_162.f_178) == 99)
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar8))
	{
		if (Local_162.f_432 > 0)
		{
			Local_162.f_432 = (Local_162.f_432 - 1);
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
	func_135("Frontend_Change_Letter");
	func_121(Local_821[Local_162.f_178 /*9*/].f_7, &iVar0);
	iVar0[Local_162.f_432] = (iVar0[Local_162.f_432] + iVar10);
	if (iVar0[Local_162.f_432] >= 36)
	{
		iVar0[Local_162.f_432] = 0;
	}
	else if (iVar0[Local_162.f_432] < 0)
	{
		iVar0[Local_162.f_432] = 35;
	}
	Local_821[Local_162.f_178 /*9*/].f_7 = func_133(&iVar0);
}

int func_132(int iParam0)//Position - 0x4987
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_615.f_165[iVar0 /*3*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

var func_133(int iParam0)//Position - 0x49B9
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_134(&uVar1, iVar0, 6, (*iParam0)[iVar0]);
		iVar0++;
	}
	return uVar1;
}

void func_134(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x49E4
{
	var uVar0;
	
	uVar0 = func_123(iParam2, (iParam1 * iParam2));
	*uParam0 = (*uParam0 - (*uParam0 && uVar0));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam3, (iParam1 * iParam2)));
}

void func_135(char* sParam0)//Position - 0x4A18
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, sParam0, "dlc_vw_am_tw_frontend_sounds", false);
}

void func_136()//Position - 0x4A2C
{
	struct<2> Var0;
	int iVar3;
	
	Var0.f_0 = 296141736;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar3 = func_137(1);
	if (!iVar3 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 3, iVar3, Var0.f_0);
	}
}

var func_137(int iParam0)//Position - 0x4A61
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_63(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_138()//Position - 0x4ABE
{
	struct<2> Var0;
	
	MISC::SET_BIT(&(Local_162.f_417), 0);
	if (func_132(Local_162.f_178) == 99)
	{
		StringCopy(&Var0, "SC_H_LBD_2", 16);
	}
	else if (Local_162.f_432 == 2)
	{
		StringCopy(&Var0, "SC_H_LBD_1", 16);
	}
	else
	{
		StringCopy(&Var0, "SC_H_LBD_0", 16);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		StringConCat(&Var0, "PC", 16);
	}
	if (func_130(&Var0))
	{
		return;
	}
	func_16();
	func_128(&Var0);
}

void func_139()//Position - 0x4B2A
{
	var uVar0[4];
	int iVar5;
	struct<2> Var6;
	int iVar8;
	int iVar9;
	
	func_126();
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		func_141(iVar5, 1);
		if (Local_162.f_149[iVar5] == -1)
		{
		}
		else
		{
			Var6 = { func_140(iVar5) };
			iVar8 = func_132(Local_162.f_149[iVar5]);
			HUD::SET_TEXT_SCALE(1.1f, 1.1f);
			HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_120(iVar8));
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124((Var6.f_0 + 0.001041667f)), (0.205f + 0.003703704f), 0);
			HUD::SET_TEXT_SCALE(1.1f, 1.1f);
			HUD::SET_TEXT_COLOUR(Local_162.f_107[iVar5 /*4*/], Local_162.f_107[iVar5 /*4*/].f_1, Local_162.f_107[iVar5 /*4*/].f_2, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_120(iVar8));
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(Var6.f_0), 0.205f, 0);
			iVar9 = Local_821[Local_162.f_149[iVar5] /*9*/].f_8;
			HUD::SET_TEXT_SCALE(0.75f, 0.75f);
			HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar9);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124((Var6.f_0 + 0.001041667f)), (0.26f + 0.003703704f), 0);
			HUD::SET_TEXT_SCALE(0.75f, 0.75f);
			HUD::SET_TEXT_COLOUR(Local_162.f_107[iVar5 /*4*/], Local_162.f_107[iVar5 /*4*/].f_1, Local_162.f_107[iVar5 /*4*/].f_2, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar9);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(Var6.f_0), 0.26f, 0);
			if (Local_162.f_149[iVar5] != Local_162.f_178)
			{
			}
			else if (iVar8 >= 10)
			{
			}
			else
			{
				func_121(Local_821[Local_162.f_149[iVar5] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[0]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(((Var6.f_0 - 0.025f) + 0.001041667f)), (0.875f + 0.003703704f), 0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_162.f_432 == 0)
				{
					HUD::SET_TEXT_COLOUR(Local_162.f_107[iVar5 /*4*/], Local_162.f_107[iVar5 /*4*/].f_1, Local_162.f_107[iVar5 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[0]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124((Var6.f_0 - 0.025f)), 0.875f, 0);
				func_121(Local_821[Local_162.f_149[iVar5] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[1]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124((Var6.f_0 + 0.001041667f)), (0.875f + 0.003703704f), 0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_162.f_432 == 1)
				{
					HUD::SET_TEXT_COLOUR(Local_162.f_107[iVar5 /*4*/], Local_162.f_107[iVar5 /*4*/].f_1, Local_162.f_107[iVar5 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[1]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(Var6.f_0), 0.875f, 0);
				func_121(Local_821[Local_162.f_149[iVar5] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[2]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(((Var6.f_0 + 0.025f) + 0.001041667f)), (0.875f + 0.003703704f), 0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_162.f_432 == 2)
				{
					HUD::SET_TEXT_COLOUR(Local_162.f_107[iVar5 /*4*/], Local_162.f_107[iVar5 /*4*/].f_1, Local_162.f_107[iVar5 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(uVar0[2]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124((Var6.f_0 + 0.025f)), 0.875f, 0);
			}
		}
		iVar5++;
	}
	func_106();
	func_105();
}

struct<2> func_140(int iParam0)//Position - 0x4F9A
{
	switch (iParam0)
	{
		case 0:
			return func_110(0.25520834f, 0.4564815f);
		
		case 1:
			return func_110(0.41822916f, 0.4564815f);
		
		case 2:
			return func_110(0.58177084f, 0.4564815f);
		
		case 3:
			return func_110(0.7447917f, 0.4564815f);
		
		default:
	}
	return func_110(0.5f, 0.5f);
}

void func_141(int iParam0, bool bParam1)//Position - 0x5013
{
	struct<2> Var0;
	struct<2> Var2;
	struct<4> Var4;
	struct<2> Var8;
	char cVar10[16];
	float fVar14;
	struct<4> Var15;
	
	Var0 = { func_140(iParam0) };
	Var2 = { func_148() };
	func_125(func_147(iParam0), func_146(iParam0), Var0.f_0, Var0.f_1, Var2.f_0, Var2.f_1, 0f, Local_162.f_107.f_17);
	if (Local_162.f_149[iParam0] == Local_162.f_178)
	{
		Var4 = { Local_162.f_107[iParam0 /*4*/] };
		if (Local_821[Local_162.f_178 /*9*/] != 1)
		{
			Var4.f_3 = SYSTEM::ROUND(MISC::TAN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.25f))) * 255;
		}
		Var8 = { func_145(iParam0) };
		func_125("MPArcadeCabinetGridHUD", "gang_lobby_player_highlight", Var8.f_0, Var8.f_1, 0.1625f, 0.051851854f, 0f, Var4);
	}
	if (Local_162.f_149[iParam0] != -1)
	{
		HUD::SET_TEXT_SCALE(0.5f, 0.5f);
		HUD::SET_TEXT_COLOUR(Local_162.f_107[iParam0 /*4*/], Local_162.f_107[iParam0 /*4*/].f_1, Local_162.f_107[iParam0 /*4*/].f_2, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(4);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		if (!func_144(iParam0))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_162.f_149[iParam0]))));
		}
		else
		{
			StringCopy(&cVar10, "Bot ", 16);
			switch (iParam0)
			{
				case 0:
					StringConCat(&cVar10, "Green" /* GXT: Green */, 16);
					break;
				
				case 1:
					StringConCat(&cVar10, "Purple" /* GXT: Schafter Purple */, 16);
					break;
				
				case 2:
					StringConCat(&cVar10, "Yellow" /* GXT: Yellow */, 16);
					break;
				
				case 3:
					StringConCat(&cVar10, "Blue" /* GXT: Blue */, 16);
					break;
			}
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar10);
		}
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(Var0.f_0), 0.845f, 0);
	}
	if (bParam1)
	{
		return;
	}
	if (Local_162.f_149[iParam0] != -1 && Local_821[Local_162.f_149[iParam0] /*9*/] == 1)
	{
		HUD::SET_TEXT_SCALE(0.95f, 0.95f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_R");
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124((Var0.f_0 + 0.001041667f)), (0.23f + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(0.95f, 0.95f);
		HUD::SET_TEXT_COLOUR(Local_162.f_107[iParam0 /*4*/], Local_162.f_107[iParam0 /*4*/].f_1, Local_162.f_107[iParam0 /*4*/].f_2, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_R");
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(Var0.f_0), 0.23f, 0);
	}
	if (Local_162.f_154[iParam0] != -2147483647 && (NETWORK::GET_NETWORK_TIME() - Local_162.f_154[iParam0]) <= 1000)
	{
		fVar14 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_162.f_154[iParam0])) / 1000f);
		Var15 = { Local_162.f_107[iParam0 /*4*/] };
		Var15.f_3 = SYSTEM::ROUND(func_142(125f, 0f, fVar14, 1));
		Var2.f_1 = (Var2.f_1 - 0.05f);
		Var0.f_1 = (Var0.f_1 + (0.05f / 2f));
		func_113(Var0, Var2, Var15);
	}
}

float func_142(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x52EF
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
			fParam2 = ((-SYSTEM::COS(func_143((3.1415927f * fParam2))) / 2f) + 0.5f);
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
			fVar0 = func_142(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_142(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_143(float fParam0)//Position - 0x5402
{
	return (fParam0 * 57.29578f);
}

int func_144(int iParam0)//Position - 0x5412
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_923[iVar0 /*37*/].f_25)
		{
			if (Local_923[iVar0 /*37*/].f_6 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_145(int iParam0)//Position - 0x544B
{
	switch (iParam0)
	{
		case 0:
			return func_110(0.25520834f, 0.14351852f);
		
		case 1:
			return func_110(0.41822916f, 0.14351852f);
		
		case 2:
			return func_110(0.58177084f, 0.14351852f);
		
		case 3:
			return func_110(0.7447917f, 0.14351852f);
		
		default:
	}
	return func_110(0.5f, 0.5f);
}

char* func_146(int iParam0)//Position - 0x54C4
{
	if (Local_162.f_149[iParam0] == -1)
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_Off";
			
			case 1:
				return "Gang_Lobby_Purple_Off";
			
			case 2:
				return "Gang_Lobby_Yellow_Off";
			
			case 3:
				return "Gang_Lobby_Blue_Off";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_On";
			
			case 1:
				return "Gang_Lobby_Purple_On";
			
			case 2:
				return "Gang_Lobby_Yellow_On";
			
			case 3:
				return "Gang_Lobby_Blue_On";
			}
		
		default:
	}
	return "INVALID GANG";
}

char* func_147(int iParam0)//Position - 0x5555
{
	if (Local_162.f_149[iParam0] != -1)
	{
		switch (iParam0)
		{
			case 0:
				return "MPArcadeCabinetGridPlayerGreen";
			
			case 1:
				return "MPArcadeCabinetGridPlayerPurple";
			
			case 2:
				return "MPArcadeCabinetGridPlayerYellow";
			
			case 3:
				return "MPArcadeCabinetGridPlayerBlue";
			}
		
		default:
	}
	return "MPArcadeCabinetGridHUD";
}

struct<2> func_148()//Position - 0x55A3
{
	return func_110(0.1625f, 0.7777778f);
}

int func_149()//Position - 0x55B9
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (func_151())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_150())
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

bool func_150()//Position - 0x5620
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_151()//Position - 0x5636
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_152()//Position - 0x564C
{
	bool bVar0;
	
	bVar0 = func_66();
	if (bVar0)
	{
		func_195();
	}
	else
	{
		func_177();
	}
	func_174();
	if (Local_615.f_145 >= 6)
	{
		func_173(&(Local_162.f_428));
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
		}
		func_18(func_19(0));
		func_15(9);
		return;
	}
	if (Local_615.f_145 == 2 || Local_615.f_145 == 3)
	{
		func_173(&(Local_162.f_428));
		func_15(5);
		return;
	}
	func_172("Ambience", &(Local_162.f_428), func_110(-1f, -1f), 0);
	if (Global_1927705 != 4)
	{
		return;
	}
	if (bVar0)
	{
		if (Local_615.f_131[(Local_615.f_137 - 1)] != -1)
		{
			if (Local_615.f_131[(Local_615.f_137 - 1)] == Local_162.f_178)
			{
				func_171(7);
				func_167("Win", Local_162.f_178, &(Local_162.f_204[Local_162.f_178 /*19*/].f_6));
			}
			else
			{
				func_171(8);
				func_167("Lose_Game", Local_162.f_178, &(Local_162.f_204[Local_162.f_178 /*19*/].f_6));
			}
			func_166((16 + Local_821[Local_615.f_131[(Local_615.f_137 - 1)] /*9*/].f_6));
		}
	}
	else if (Local_615.f_130 != -1)
	{
		if (Local_615.f_130 == Local_162.f_178)
		{
			func_161();
			func_171(9);
			func_167("Win", Local_162.f_178, &(Local_162.f_204[Local_162.f_178 /*19*/].f_6));
		}
		else
		{
			func_171(10);
			func_167("Lose_Game", Local_162.f_178, &(Local_162.f_204[Local_162.f_178 /*19*/].f_6));
		}
		func_166((16 + Local_821[Local_615.f_130 /*9*/].f_6));
	}
	if ((!BitTest(Local_162.f_141, 2) && Local_615.f_131[(Local_615.f_137 - 1)] != -1) && Local_615.f_131[(Local_615.f_137 - 1)] == Local_162.f_178)
	{
		if (!func_160(247, -1))
		{
			func_157(247, 1, -1, 1);
			func_155(12, "CLO_VWM_D_1_1" /* GXT: Street Crimes Action Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
			func_154(27193, 1, -1);
			func_153("SCGW_CH_4", 7500, 1);
		}
	}
}

void func_153(char* sParam0, int iParam1, int iParam2)//Position - 0x5880
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_16();
	}
	Local_162.f_418 = (NETWORK::GET_NETWORK_TIME() + iParam1);
	Local_162.f_419 = sParam0;
	Local_162.f_420 = -1;
	Local_162.f_421 = iParam2;
}

void func_154(int iParam0, bool bParam1, int iParam2)//Position - 0x58B3
{
	if (iParam2 == -1)
	{
		iParam2 = func_34();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_155(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)//Position - 0x58D1
{
	int iVar0;
	
	iVar0 = func_156(&Global_1677005);
	Global_1677005[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1677005[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1677005[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1677005[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1677005[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1677005[iVar0 /*106*/].f_97 = iParam5;
	Global_1677005[iVar0 /*106*/].f_104 = iParam9;
	Global_1677005[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1677005[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_156(var uParam0)//Position - 0x596D
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

void func_157(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x599C
{
	int iVar0;
	
	iVar0 = func_158(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_158(int iParam0, var uParam1)//Position - 0x59BF
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_159(uParam1));
}

int func_159(var uParam0)//Position - 0x59D4
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_34();
		if (iVar1 > -1)
		{
			Global_2750546 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750546 = 1;
		}
	}
	return iVar0;
}

int func_160(int iParam0, int iParam1)//Position - 0x5A08
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_158(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_161()//Position - 0x5A2C
{
	int iVar0;
	
	switch (Local_821[Local_162.f_178 /*9*/].f_6)
	{
		case 0:
			iVar0 = func_165(8355, -1) + 1;
			func_163(8355, iVar0, -1, 1);
			if (iVar0 == Global_262145.f_27514 /* Tunable: 554611933 */)
			{
				func_154(27189, 1, -1);
				func_155(12, "CLO_VWM_D_1_3" /* GXT: Street Crimes Hoods Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_162("SCGW_CH_0", Global_262145.f_27514 /* Tunable: 554611933 */, 7500, 1);
			}
			break;
		
		case 1:
			iVar0 = func_165(8356, -1) + 1;
			func_163(8356, iVar0, -1, 1);
			if (iVar0 == Global_262145.f_27514 /* Tunable: 554611933 */)
			{
				func_154(27190, 1, -1);
				func_155(12, "CLO_VWM_D_1_4" /* GXT: Street Crimes Punks Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_162("SCGW_CH_1", Global_262145.f_27514 /* Tunable: 554611933 */, 7500, 1);
			}
			break;
		
		case 2:
			iVar0 = func_165(8357, -1) + 1;
			func_163(8357, iVar0, -1, 1);
			if (iVar0 == Global_262145.f_27514 /* Tunable: 554611933 */)
			{
				func_154(27191, 1, -1);
				func_155(12, "CLO_VWM_D_1_5" /* GXT: Street Crimes Yokels Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_162("SCGW_CH_2", Global_262145.f_27514 /* Tunable: 554611933 */, 7500, 1);
			}
			break;
		
		case 3:
			iVar0 = func_165(8358, -1) + 1;
			func_163(8358, iVar0, -1, 1);
			if (iVar0 == Global_262145.f_27514 /* Tunable: 554611933 */)
			{
				func_154(27192, 1, -1);
				func_155(12, "CLO_VWM_D_1_2" /* GXT: Street Crimes Bikers Tee */, "UNLOCK_NAME_SHIRT3" /* GXT: Homies Sharp T-shirt */, "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_162("SCGW_CH_3", Global_262145.f_27514 /* Tunable: 554611933 */, 7500, 1);
			}
			break;
	}
}

void func_162(char* sParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5BD4
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_16();
	}
	Local_162.f_418 = (NETWORK::GET_NETWORK_TIME() + iParam2);
	Local_162.f_420 = uParam1;
	Local_162.f_419 = sParam0;
	Local_162.f_421 = iParam3;
}

void func_163(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5C08
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_164(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_164(int iParam0, var uParam1)//Position - 0x5C36
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_159(uParam1));
}

int func_165(int iParam0, int iParam1)//Position - 0x5C4B
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_164(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_166(int iParam0)//Position - 0x5C7A
{
	Global_1927705.f_1 = iParam0;
}

void func_167(char* sParam0, int iParam1, var uParam2)//Position - 0x5C8A
{
	float fVar0;
	
	fVar0 = func_169(Local_162.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(*uParam2, sParam0, func_168(Local_821[iParam1 /*9*/].f_6), false);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam2, "Screen_Position", fVar0);
}

char* func_168(int iParam0)//Position - 0x5CD4
{
	switch (iParam0)
	{
		case 0:
			return "dlc_vw_am_tw_gang_Hoods_sounds";
		
		case 1:
			return "dlc_vw_am_tw_gang_Punks_sounds";
		
		case 2:
			return "dlc_vw_am_tw_gang_Yokels_sounds";
		
		case 3:
			return "dlc_vw_am_tw_gang_Bikers_sounds";
		
		default:
	}
	return "INVALID GANG";
}

float func_169(float fParam0, var uParam1)//Position - 0x5D1B
{
	return func_170(((fParam0 - 0.15625f) / 0.658333f), 0f, 1f);
}

float func_170(float fParam0, float fParam1, float fParam2)//Position - 0x5D37
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

void func_171(int iParam0)//Position - 0x5D5E
{
	Global_1927705 = iParam0;
}

void func_172(char* sParam0, var uParam1, struct<2> Param2, bool bParam4)//Position - 0x5D6C
{
	float fVar0;
	
	fVar0 = func_169(Param2);
	if (bParam4)
	{
	}
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, "dlc_vw_am_tw_global_sounds", false);
	}
	if (bParam4)
	{
		AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", fVar0);
	}
}

void func_173(var uParam0)//Position - 0x5DBE
{
	if (!AUDIO::HAS_SOUND_FINISHED(*uParam0))
	{
		AUDIO::STOP_SOUND(*uParam0);
	}
	AUDIO::RELEASE_SOUND_ID(*uParam0);
	*uParam0 = -1;
}

void func_174()//Position - 0x5DE3
{
	struct<2> Var0;
	
	if (Local_162.f_418 == -2147483647)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_162.f_419))
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_162.f_418)
	{
		func_16();
		return;
	}
	MISC::SET_BIT(&(Local_162.f_417), 0);
	StringCopy(&Var0, Local_162.f_419, 16);
	if (Local_162.f_420 == -1)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && !Local_162.f_421)
		{
			StringConCat(&Var0, "_PC", 16);
		}
	}
	else
	{
		if (func_130(&Var0))
		{
			return;
		}
		func_175(&Var0, Local_162.f_420);
		return;
	}
	if (func_130(&Var0))
	{
		return;
	}
	func_128(&Var0);
}

void func_175(char* sParam0, int iParam1)//Position - 0x5E83
{
	Local_162.f_442 = MISC::GET_HASH_KEY(sParam0);
	func_176(sParam0, iParam1, -1);
}

void func_176(char* sParam0, int iParam1, int iParam2)//Position - 0x5E9F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

void func_177()//Position - 0x5EBC
{
	func_126();
	func_191();
	func_185();
	func_183();
	func_178();
	func_106();
	func_105();
}

void func_178()//Position - 0x5EE0
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char cVar6[16];
	
	func_113(func_110(0.5f, (0.069444f + 0.0356482f)), func_110(0.658333f, 0.071296f), Local_162.f_107.f_21);
	func_113(func_110(0.5f, (0.069444f + 0.072685f)), func_110(0.658333f, 0.002778f), Local_162.f_107.f_25);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_180(iVar0, Local_162.f_149[iVar0]);
		iVar0++;
	}
	fVar1 = ((SYSTEM::TO_FLOAT((Local_615.f_138 - 1)) / 2f) * -0.013541334f);
	iVar0 = 0;
	while (iVar0 <= (Local_615.f_138 - 1))
	{
		func_125("MPArcadeCabinetGridHUD", "hud_rounds", ((fVar1 + 0.5f) + (0.013541333f * IntToFloat(iVar0))), (((0.069444f + -0.00162963f) + (0.024074258f / 2f)) + 0.00462963f), 0.013541333f, 0.024074258f, 0f, func_179(iVar0));
		iVar0++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (Local_615.f_145 == 4 && !Local_615.f_162)
	{
		iVar2 = ((Local_615.f_146 + 120000) - NETWORK::GET_NETWORK_TIME());
	}
	iVar3 = (iVar2 / 60000);
	iVar4 = ((iVar2 / 1000) % 60);
	HUD::SET_TEXT_SCALE(1f, 1f);
	if (iVar2 < 10000 && Local_615.f_145 == 4)
	{
		if (!BitTest(Local_162.f_429, 5))
		{
			func_135("Frontend_Countdown_10s");
			MISC::SET_BIT(&(Local_162.f_429), 5);
		}
		iVar5 = SYSTEM::ROUND((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * (0.5058f / 2f))) * 255f));
		if (iVar5 > 51)
		{
			iVar5 = 255;
		}
		else
		{
			iVar5 = 0;
		}
		HUD::SET_TEXT_COLOUR(255, 0, 0, iVar5);
	}
	else if (iVar2 < 30000 && Local_615.f_145 == 4)
	{
		HUD::SET_TEXT_COLOUR(255, 0, 0, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	}
	HUD::SET_TEXT_DROP_SHADOW();
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	StringCopy(&cVar6, "SCGW_ROUND_T", 16);
	if (iVar4 < 10)
	{
		StringConCat(&cVar6, "_S", 16);
	}
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(0.5f, (0.083f + 0.00462963f), 0);
}

struct<4> func_179(int iParam0)//Position - 0x6109
{
	if (Local_615.f_131[iParam0] == -1)
	{
		return Local_162.f_107.f_17;
	}
	return Local_162.f_107[Local_821[Local_615.f_131[iParam0] /*9*/].f_6 /*4*/];
}

void func_180(int iParam0, int iParam1)//Position - 0x6144
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	int iVar18;
	int iVar19;
	
	fVar1 = func_182(iParam0);
	if (iParam1 == -1)
	{
		func_125("MPArcadeCabinetGridHUD", "hud_insert_coin", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_162.f_107[iParam0 /*4*/]);
	}
	else if (func_70(iParam1))
	{
		func_125("MPArcadeCabinetGridHUD", "hud_wasted", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_162.f_107.f_29);
	}
	else
	{
		func_125("MPArcadeCabinetGridHUD", "hud_frame", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_162.f_107[iParam0 /*4*/]);
	}
	StringCopy(&Var2, "hud_head_", 64);
	StringConCat(&Var2, Local_162.f_422[iParam0], 64);
	func_125("MPArcadeCabinetGridHUD", &Var2, (fVar1 + (0.033333f / 2f)), (0.069444f + 0.04166683f), 0.033333f, 0.059259f, 0f, Local_162.f_107.f_17);
	if (iParam1 == -1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		iVar18 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (NETWORK::NETWORK_IS_PLAYER_TALKING(iVar18))
		{
			func_125("MPArcadeCabinetGridHUD", "hud_mic", ((fVar1 + 0.026563f) + (0.008333f / 2f)), ((0.069444f + 0.04722233f) + (0.014815f / 2f)), 0.008333f, 0.014815f, 0f, Local_162.f_107[iParam0 /*4*/]);
		}
	}
	else if (Local_923[iParam1 /*37*/].f_25)
	{
	}
	if (Local_821[iParam1 /*9*/] == 2)
	{
		iVar19 = (Local_162.f_204[iParam1 /*19*/].f_9 - 1);
		iVar0 = 0;
		while (iVar0 <= iVar19)
		{
			if (iVar0 >= Local_821[iParam1 /*9*/].f_2 && Local_162.f_140 == 7)
			{
				func_125("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0.035417f) + (0.00625f * IntToFloat(iVar0))) + (0.00625f / 2f)), ((0.069444f + 0.012037333f) + (0.059259f / 2f)), 0.00625f, 0.059259f, 0f, Local_162.f_107.f_29);
			}
			else
			{
				func_125("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0.035417f) + (0.00625f * IntToFloat(iVar0))) + (0.00625f / 2f)), ((0.069444f + 0.012037333f) + (0.059259f / 2f)), 0.00625f, 0.059259f, 0f, func_181(Local_162.f_107[iParam0 /*4*/], (SYSTEM::TO_FLOAT(iVar0) / 7f)));
			}
			iVar0++;
		}
		HUD::SET_TEXT_SCALE(1f, 1f);
		if (((iLocal_816[iParam0] == 0 && Local_615.f_145 == 4) && iParam0 == Local_821[Local_162.f_178 /*9*/].f_6) && SYSTEM::SIN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.5058f)) > 0.5f)
		{
			HUD::SET_TEXT_COLOUR(Local_162.f_107.f_29, Local_162.f_107.f_29.f_1, Local_162.f_107.f_29.f_2, Local_162.f_107.f_29.f_3);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(Local_162.f_107[iParam0 /*4*/], Local_162.f_107[iParam0 /*4*/].f_1, Local_162.f_107[iParam0 /*4*/].f_2, Local_162.f_107[iParam0 /*4*/].f_3);
		}
		HUD::SET_TEXT_DROP_SHADOW();
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_SCORE");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_816[iParam0]);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124((fVar1 + 0.105f)), 0.083f, 0);
	}
}

struct<4> func_181(struct<4> Param0, float fParam4)//Position - 0x648A
{
	Param0.f_0 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_0)) * fParam4) + IntToFloat(Param0.f_0)));
	Param0.f_1 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_1)) * fParam4) + IntToFloat(Param0.f_1)));
	Param0.f_2 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_2)) * fParam4) + IntToFloat(Param0.f_2)));
	return Param0;
}

float func_182(int iParam0)//Position - 0x64DB
{
	switch (iParam0)
	{
		case 0:
			return 0.195313f;
		
		case 1:
			return 0.325521f;
		
		case 2:
			return 0.547396f;
		
		case 3:
			return 0.677604f;
		
		default:
	}
	return 0f;
}

void func_183()//Position - 0x6523
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	int iVar4;
	char cVar5[64];
	struct<4> Var21;
	struct<8> Var25;
	
	if (Local_615.f_130 == -1)
	{
		return;
	}
	func_184(Local_162.f_107[Local_821[Local_615.f_130 /*9*/].f_6 /*4*/], 102);
	bVar0 = false;
	bVar1 = true;
	Var2 = { func_110(0.5f, (0.5f + -0.005f)) };
	iVar4 = 255;
	StringCopy(&cVar5, "text_gang_", 64);
	StringConCat(&cVar5, Local_162.f_422[Local_821[Local_615.f_130 /*9*/].f_6], 64);
	StringConCat(&cVar5, "_", 64);
	if (Local_162.f_415 < 4)
	{
		Var2.f_1 = (Var2.f_1 + (-0.05f / IntToFloat(Local_162.f_415 + 1)));
		bVar1 = false;
		Local_162.f_415 = (Local_162.f_415 + Local_162.f_412);
	}
	else if (Local_162.f_415 < 12)
	{
		iVar4 = SYSTEM::FLOOR(((255f / 8f) * IntToFloat((8 - (Local_162.f_415 - 4)))));
		bVar0 = true;
		bVar1 = false;
		Local_162.f_415 = (Local_162.f_415 + Local_162.f_412);
	}
	else if (Local_162.f_415 < 22)
	{
		if (((Local_162.f_415 + 1 - 4) - 8) < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, ((Local_162.f_415 + 1 - 4) - 8), 64);
		Local_162.f_415 = (Local_162.f_415 + Local_162.f_414);
	}
	else
	{
		StringIntConCat(&cVar5, 10, 64);
	}
	if (bVar0)
	{
		Var21 = { Local_162.f_107.f_17 };
		Var21.f_3 = iVar4;
		func_125("MPArcadeCabinetGridHUD", "text_bkgd_blur", Var2.f_0, Var2.f_1, 0.3125f, 0.14814815f, 0f, Var21);
	}
	func_125("MPArcadeCabinetGridHUD", "text_winner", Var2.f_0, Var2.f_1, 0.3125f, 0.14814815f, 0f, Local_162.f_107.f_17);
	if (bVar1)
	{
		StringCopy(&Var25, "MPArcadeCabinetGridPlayer", 64);
		StringConCat(&Var25, Local_162.f_422[Local_821[Local_615.f_130 /*9*/].f_6], 64);
		func_125(&Var25, &cVar5, Var2.f_0, (Var2.f_1 + 0.074074075f), 0.3125f, 0.14814815f, 0f, Local_162.f_107[Local_821[Local_615.f_130 /*9*/].f_6 /*4*/]);
	}
}

void func_184(struct<4> Param0, int iParam4)//Position - 0x670E
{
	Param0.f_3 = iParam4;
	func_113(func_110(0.5f, 0.5f), func_110(1f, 1f), Param0);
}

void func_185()//Position - 0x6738
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar7;
	struct<2> Var8;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	float fVar20;
	struct<2> Var21;
	struct<2> Var23;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar3 = func_73(iVar0, iVar1);
			if (iVar0 + 1 < 13)
			{
				iVar4 = func_73(iVar0 + 1, iVar1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_83(&(Local_615.f_85[iVar2 /*11*/][1 /*5*/]), iVar3))
					{
						Var5 = { func_188(func_189(func_190(iVar3), func_190(iVar4)), 2f) };
						func_125("MPArcadeCabinetGrid", "player_trail", Var5.f_0, Var5.f_1, 0.052083332f, 0.02962963f, 0f, Local_162.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (iVar1 + 1 < 9)
			{
				iVar7 = func_73(iVar0, iVar1 + 1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_83(&(Local_615.f_85[iVar2 /*11*/][0 /*5*/]), iVar3))
					{
						Var8 = { func_188(func_189(func_190(iVar3), func_190(iVar7)), 2f) };
						func_125("MPArcadeCabinetGrid", "player_trail", Var8.f_0, Var8.f_1, 0.052083332f, 0.02962963f, 90f, Local_162.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	Var14.f_3 = 255;
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar18)) && !Local_923[iVar18 /*37*/].f_25)
		{
		}
		else if (Local_821[iVar18 /*9*/].f_6 == -1)
		{
		}
		else if (Local_858[iVar18 /*16*/] == Local_858[iVar18 /*16*/].f_1)
		{
		}
		else
		{
			func_187(Local_858[iVar18 /*16*/], &iVar10, &iVar11);
			func_187(Local_858[iVar18 /*16*/].f_1, &iVar12, &iVar13);
			iVar19 = -1;
			Var14 = { Local_162.f_107[Local_821[iVar18 /*9*/].f_6 /*4*/] };
			fVar20 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_858[iVar18 /*16*/].f_2)) / SYSTEM::TO_FLOAT(func_186(iVar18)));
			if (fVar20 > 1.2f)
			{
			}
			else
			{
				Var14.f_3 = SYSTEM::ROUND((255f * func_142(0f, 1f, fVar20, 6)));
				if (iVar12 != iVar10)
				{
					if (iVar12 > iVar10)
					{
						iVar19 = Local_858[iVar18 /*16*/];
					}
					else
					{
						iVar19 = func_73((iVar10 - 1), iVar11);
					}
					if (func_83(&(Local_615.f_85[Local_821[iVar18 /*9*/].f_6 /*11*/][1 /*5*/]), iVar19))
					{
					}
					else
					{
						Var21 = { func_188(func_189(func_190(Local_858[iVar18 /*16*/].f_1), func_190(Local_858[iVar18 /*16*/])), 2f) };
						func_125("MPArcadeCabinetGrid", "player_trail", Var21.f_0, Var21.f_1, 0.052083332f, 0.02962963f, 0f, Var14);
						Jump @804; //curOff = 660
						if (iVar13 != iVar11)
						{
							if (iVar13 > iVar11)
							{
								iVar19 = Local_858[iVar18 /*16*/];
							}
							else
							{
								iVar19 = func_73(iVar10, (iVar11 - 1));
							}
							if (func_83(&(Local_615.f_85[Local_821[iVar18 /*9*/].f_6 /*11*/][0 /*5*/]), iVar19))
							{
							}
							else
							{
								Var23 = { func_188(func_189(func_190(Local_858[iVar18 /*16*/].f_1), func_190(Local_858[iVar18 /*16*/])), 2f) };
								func_125("MPArcadeCabinetGrid", "player_trail", Var23.f_0, Var23.f_1, 0.052083332f, 0.02962963f, 90f, Var14);
							}
						}
					}
					iVar18++;
				}

int func_186(int iParam0)//Position - 0x6A68
{
	return SYSTEM::ROUND((700f * Local_821[iParam0 /*9*/].f_1));
}

void func_187(int iParam0, int iParam1, int iParam2)//Position - 0x6A83
{
	*iParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 13f));
	*iParam1 = (iParam0 - *iParam2 * 13);
}

struct<2> func_188(struct<2> Param0, float fParam2)//Position - 0x6AA9
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 / fParam2);
	Var0.f_1 = (Param0.f_1 / fParam2);
	return Var0;
}

struct<2> func_189(struct<2> Param0, struct<2> Param2)//Position - 0x6AC7
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 + Param2.f_0);
	Var0.f_1 = (Param0.f_1 + Param2.f_1);
	return Var0;
}

struct<2> func_190(int iParam0)//Position - 0x6AE7
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	func_187(iParam0, &iVar0, &iVar1);
	Var2.f_0 = (0.13802066f + (0.0520835f * IntToFloat(iVar0 + 1)));
	Var2.f_1 = (0.06851837f + (0.0925925f * IntToFloat(iVar1 + 1)));
	return Var2;
}

void func_191()//Position - 0x6B25
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar18;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	struct<2> Var25;
	struct<2> Var27;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&Var2, "top_down_tile_", 64);
			iVar18 = Local_615.f_31[iVar0 /*5*/][iVar1] + 1;
			StringIntConCat(&Var2, iVar18, 64);
			Var19 = { func_194(iVar0, iVar1) };
			func_125("MPArcadeCabinetGridTiles", &Var2, Var19.f_0, Var19.f_1, 0.104167f, 0.185185f, 0f, Local_162.f_107.f_17);
			func_192(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = -1;
	while (iVar0 <= 6)
	{
		Var21 = { func_194(iVar0, -1) };
		func_125("MPArcadeCabinetGridTiles", "top_down_tile_1", Var21.f_0, Var21.f_1, 0.104167f, 0.185185f, 0f, Local_162.f_107.f_17);
		Var23 = { func_194(iVar0, 4) };
		func_125("MPArcadeCabinetGridTiles", "top_down_tile_1", Var23.f_0, Var23.f_1, 0.104167f, 0.185185f, 0f, Local_162.f_107.f_17);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Var25 = { func_194(-1, iVar0) };
		func_125("MPArcadeCabinetGridTiles", "top_down_tile_1", Var25.f_0, Var25.f_1, 0.104167f, 0.185185f, 0f, Local_162.f_107.f_17);
		Var27 = { func_194(6, iVar0) };
		func_125("MPArcadeCabinetGridTiles", "top_down_tile_1", Var27.f_0, Var27.f_1, 0.104167f, 0.185185f, 0f, Local_162.f_107.f_17);
		iVar0++;
	}
}

void func_192(int iParam0, int iParam1)//Position - 0x6C86
{
	struct<8> Var0;
	int iVar16;
	struct<2> Var17;
	float fVar19;
	struct<2> Var20;
	
	if (Local_162.f_318[iParam0 /*5*/][iParam1] != Local_615[iParam0 /*5*/][iParam1])
	{
		Local_162.f_349[iParam0 /*5*/][iParam1] = Local_162.f_318[iParam0 /*5*/][iParam1];
		Local_162.f_380[iParam0 /*5*/][iParam1] = NETWORK::GET_NETWORK_TIME();
		if (Local_162.f_140 == 7)
		{
			func_193("Steal_Area", func_194(iParam0, iParam1), Local_615[iParam0 /*5*/][iParam1]);
		}
	}
	if (Local_162.f_349[iParam0 /*5*/][iParam1] == -1)
	{
		iVar16 = Local_615[iParam0 /*5*/][iParam1];
		if ((NETWORK::GET_NETWORK_TIME() - Local_162.f_380[iParam0 /*5*/][iParam1]) < 600)
		{
			fVar19 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_162.f_380[iParam0 /*5*/][iParam1])) / 600f);
			if (fVar19 > 1f)
			{
				fVar19 = 1f;
			}
			Var17.f_0 = func_142(0f, 0.070833f, fVar19, 2);
			Var17.f_1 = func_142(0f, 0.125926f, fVar19, 2);
		}
		else
		{
			Var17 = { func_110(0.070833f, 0.125926f) };
		}
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_162.f_380[iParam0 /*5*/][iParam1]) < 300)
	{
		iVar16 = Local_162.f_349[iParam0 /*5*/][iParam1];
		fVar19 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_162.f_380[iParam0 /*5*/][iParam1])) / 300f);
		if (fVar19 > 1f)
		{
			fVar19 = 1f;
		}
		Var17.f_0 = func_142(0.070833f, 0f, fVar19, 1);
		Var17.f_1 = func_142(0.125926f, 0f, fVar19, 1);
	}
	else
	{
		iVar16 = Local_615[iParam0 /*5*/][iParam1];
		Var17 = { func_110(0.070833f, 0.125926f) };
	}
	if (iVar16 > -1)
	{
		StringCopy(&Var0, "gang_logo_", 64);
		StringConCat(&Var0, Local_162.f_422[iVar16], 64);
		Var20 = { func_194(iParam0, iParam1) };
		func_125("MPArcadeCabinetGrid", &Var0, Var20.f_0, Var20.f_1, Var17.f_0, Var17.f_1, 0f, Local_162.f_107[iVar16 /*4*/]);
	}
	Local_162.f_318[iParam0 /*5*/][iParam1] = Local_615[iParam0 /*5*/][iParam1];
}

void func_193(char* sParam0, struct<2> Param1, int iParam3)//Position - 0x6E7C
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_169(Param1);
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, func_168(iParam3), false);
	AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", fVar0);
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

struct<2> func_194(int iParam0, int iParam1)//Position - 0x6EB5
{
	struct<2> Var0;
	
	Var0.f_0 = (0.13802066f + (0.1041665f * IntToFloat(iParam0 + 1)));
	Var0.f_1 = (0.06851837f + (0.1851855f * IntToFloat(iParam1 + 1)));
	return Var0;
}

void func_195()//Position - 0x6EE9
{
	func_126();
	func_191();
	func_185();
	func_196();
	func_178();
	func_106();
	func_105();
}

void func_196()//Position - 0x6F0D
{
	struct<2> Var0;
	char cVar2[64];
	struct<8> Var18;
	
	if (Local_615.f_137 == 0)
	{
		return;
	}
	if (Local_615.f_131[(Local_615.f_137 - 1)] == -1)
	{
		return;
	}
	func_184(Local_162.f_107[Local_821[Local_615.f_131[(Local_615.f_137 - 1)] /*9*/].f_6 /*4*/], 102);
	Var0 = { func_110(0.5f, (0.5f + -0.016f)) };
	func_125("MPArcadeCabinetGridHUD", "text_round_winner", 0.5f, (0.5f + -0.016f), 0.3125f, 0.24074075f, 0f, Local_162.f_107.f_17);
	StringCopy(&cVar2, "text_gang_", 64);
	StringConCat(&cVar2, Local_162.f_422[Local_821[Local_615.f_131[(Local_615.f_137 - 1)] /*9*/].f_6], 64);
	StringConCat(&cVar2, "_", 64);
	if (Local_162.f_415 < 10)
	{
		if (Local_162.f_415 + 1 < 10)
		{
			StringConCat(&cVar2, "0", 64);
		}
		StringIntConCat(&cVar2, Local_162.f_415 + 1, 64);
		Local_162.f_415 = (Local_162.f_415 + Local_162.f_414);
	}
	else
	{
		StringIntConCat(&cVar2, 10, 64);
	}
	StringCopy(&Var18, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var18, Local_162.f_422[Local_821[Local_615.f_131[(Local_615.f_137 - 1)] /*9*/].f_6], 64);
	func_125(&Var18, &cVar2, Var0.f_0, ((Var0.f_1 + 0.074074075f) + ((0.24074075f - 0.14814815f) / 2f)), 0.3125f, 0.14814815f, 0f, Local_162.f_107[Local_821[Local_615.f_131[(Local_615.f_137 - 1)] /*9*/].f_6 /*4*/]);
}

void func_197()//Position - 0x7083
{
	int iVar0;
	int iVar1;
	
	func_172("Ambience", &(Local_162.f_428), func_110(-1f, -1f), 0);
	func_312();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_162.f_178 && Local_923[iVar0 /*37*/].f_25)
		{
			func_288(iVar0);
		}
		iVar0++;
	}
	func_284();
	func_276();
	func_269();
	func_264();
	func_244();
	func_240();
	func_234();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_162.f_178 && Local_923[iVar0 /*37*/].f_25)
		{
			func_227(iVar0);
		}
		iVar0++;
	}
	func_199();
	func_174();
	func_198();
	if (Local_162.f_434 != Local_162.f_433)
	{
		if (Local_162.f_434 == Local_162.f_178)
		{
			func_135("Frontend_Player_Loses_Lead");
		}
		else if (Local_162.f_433 == Local_162.f_178)
		{
			func_135("Frontend_Player_Takes_Lead");
		}
	}
	if (Local_615.f_162 && !func_99(&(Local_162.f_316)))
	{
		func_18(func_19(3));
		func_97(&(Local_162.f_316), 0, 0);
	}
	if (Local_615.f_145 <= 4)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (Local_162.f_281[iVar1 /*7*/].f_5 != -1)
		{
			func_173(&(Local_162.f_281[iVar1 /*7*/].f_5));
		}
		iVar1++;
	}
	func_16();
	Local_140.f_20 = (Local_140.f_20 + iLocal_816[Local_821[Local_162.f_178 /*9*/].f_6]);
	Local_162.f_415 = 0;
	Local_821[Local_162.f_178 /*9*/].f_8 = (Local_821[Local_162.f_178 /*9*/].f_8 + iLocal_816[Local_821[Local_162.f_178 /*9*/].f_6]);
	func_15(8);
	func_18(func_19(2));
}

void func_198()//Position - 0x7223
{
	bool bVar0;
	
	bVar0 = true;
	if (Local_615.f_145 != 4)
	{
		bVar0 = false;
	}
	if (func_70(Local_162.f_178))
	{
		bVar0 = false;
	}
	if (iLocal_816[Local_821[Local_162.f_178 /*9*/].f_6] > 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (Local_162.f_430 == -1)
		{
			Local_162.f_430 = AUDIO::GET_SOUND_ID();
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_162.f_430))
		{
			AUDIO::PLAY_SOUND_FRONTEND(Local_162.f_430, "Frontend_Player_No_Territory_Loop", "dlc_vw_am_tw_frontend_sounds", false);
		}
	}
	else if (Local_162.f_430 != -1 && !AUDIO::HAS_SOUND_FINISHED(Local_162.f_430))
	{
		AUDIO::STOP_SOUND(Local_162.f_430);
		AUDIO::RELEASE_SOUND_ID(Local_162.f_430);
		Local_162.f_430 = -1;
	}
}

void func_199()//Position - 0x72C8
{
	func_126();
	func_191();
	func_185();
	func_225();
	func_223();
	func_217();
	func_210();
	func_209();
	func_205();
	func_203();
	func_202();
	func_201();
	func_200();
	func_178();
	func_106();
	func_105();
}

void func_200()//Position - 0x7310
{
	struct<2> Var0;
	
	if (!Local_615.f_162)
	{
		return;
	}
	if (!func_99(&(Local_162.f_316)))
	{
		return;
	}
	if (func_95(&(Local_162.f_316), 2250, 0))
	{
		return;
	}
	Var0 = { func_110(0.5f, (0.5f + -0.005f)) };
	func_125("MPArcadeCabinetGridHUD", "TEXT_SUDDEN", Var0.f_0, Var0.f_1, 0.26666668f, 0.14814815f, 0f, Local_162.f_107.f_17);
	func_125("MPArcadeCabinetGridHUD", "TEXT_DEATH", Var0.f_0, (Var0.f_1 + 0.074074075f), 0.26666668f, 0.11481482f, 0f, Local_162.f_107.f_17);
}

void func_201()//Position - 0x73AD
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	
	if (Local_615.f_146 == -2147483647)
	{
		return;
	}
	iVar0 = (Local_615.f_146 - NETWORK::GET_NETWORK_TIME());
	if (iVar0 < -1500)
	{
		return;
	}
	if (iVar0 <= 0)
	{
		if (!BitTest(Local_162.f_429, 4))
		{
			func_135("Frontend_GO");
			MISC::SET_BIT(&(Local_162.f_429), 4);
		}
		fVar1 = (SYSTEM::TO_FLOAT(iVar0) / (SYSTEM::TO_FLOAT(-1500) / 3.5f));
		func_184(Local_162.f_107.f_25, SYSTEM::ROUND(func_142(153f, 0f, fVar1, 1)));
		func_125("MPArcadeCabinetGridHUD", "text_fight", 0.5f, (0.5f + -0.005f), 0.26666668f, 0.14814815f, 0f, Local_162.f_107.f_17);
		return;
	}
	func_184(Local_162.f_107.f_25, 153);
	if (iVar0 <= 1000)
	{
		if (!BitTest(Local_162.f_429, 3))
		{
			func_135("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_162.f_429), 3);
		}
		func_125("MPArcadeCabinetGridHUD", "text_1", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.14814815f, 0f, Local_162.f_107.f_17);
		return;
	}
	if (iVar0 <= 2000)
	{
		if (!BitTest(Local_162.f_429, 2))
		{
			func_135("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_162.f_429), 2);
		}
		func_125("MPArcadeCabinetGridHUD", "text_2", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.14814815f, 0f, Local_162.f_107.f_17);
		return;
	}
	if (iVar0 <= 3000)
	{
		if (!BitTest(Local_162.f_429, 1))
		{
			func_135("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_162.f_429), 1);
		}
		func_125("MPArcadeCabinetGridHUD", "text_3", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.14814815f, 0f, Local_162.f_107.f_17);
		return;
	}
	if (iVar0 <= 4500)
	{
		if (!BitTest(Local_162.f_429, 0))
		{
			func_135("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_162.f_429), 0);
		}
		StringCopy(&Var2, "text_round_", 64);
		StringIntConCat(&Var2, Local_615.f_137 + 1, 64);
		func_125("MPArcadeCabinetGridHUD", &Var2, 0.5f, (0.5f + -0.005f), 0.3125f, 0.14814815f, 0f, Local_162.f_107.f_17);
		return;
	}
}

void func_202()//Position - 0x75DA
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	bVar0 = false;
	if (Local_821[Local_162.f_178 /*9*/].f_3 + 1000 > NETWORK::GET_NETWORK_TIME())
	{
		bVar0 = true;
	}
	if (func_70(Local_162.f_178))
	{
		iVar1 = (NETWORK::GET_NETWORK_TIME() - Local_821[Local_162.f_178 /*9*/].f_3);
		if (iVar1 < 2500 || Local_821[Local_162.f_178 /*9*/] == 4)
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	fVar3 = (0.23703703f / 2f);
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		func_125("MPArcadeCabinetGrid", "damage_v", 0.176f, fVar3, 0.03333333f, 0.23703703f, 180f, Local_162.f_107.f_29);
		func_125("MPArcadeCabinetGrid", "damage_v", (1f - 0.173f), fVar3, 0.03333333f, 0.23703703f, 0f, Local_162.f_107.f_29);
		fVar3 = (fVar3 + 0.23703703f);
		iVar2++;
	}
	fVar4 = (0.13333334f / 2f);
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		func_125("MPArcadeCabinetGrid", "damage_h", fVar4, 0.154f, 0.13333334f, 0.05925926f, 0f, Local_162.f_107.f_29);
		func_125("MPArcadeCabinetGrid", "damage_h", fVar4, (1f - 0.09f), 0.13333334f, 0.05925926f, 180f, Local_162.f_107.f_29);
		fVar4 = (fVar4 + 0.13333334f);
		iVar2++;
	}
}

void func_203()//Position - 0x7726
{
	int iVar0;
	int iVar1;
	
	if (func_70(Local_162.f_178))
	{
		if (BitTest(Local_162.f_429, 8))
		{
			MISC::CLEAR_BIT(&(Local_162.f_429), 8);
		}
		iVar0 = (NETWORK::GET_NETWORK_TIME() - Local_821[Local_162.f_178 /*9*/].f_3);
		if (iVar0 < 2500 || Local_821[Local_162.f_178 /*9*/] == 4)
		{
			func_204();
			if (!BitTest(Local_162.f_429, 7))
			{
				MISC::SET_BIT(&(Local_162.f_429), 7);
				func_135("Frontend_Wasted");
			}
			return;
		}
		if (iVar0 < 3500)
		{
			if (!BitTest(Local_162.f_429, 6))
			{
				MISC::SET_BIT(&(Local_162.f_429), 6);
				func_135("Frontend_Text_Appear_Generic");
			}
			func_184(Local_162.f_107.f_25, 153);
			func_125("MPArcadeCabinetGridHUD", "text_ready", 0.5f, (0.5f + -0.005f), 0.3125f, 0.14814815f, 0f, Local_162.f_107.f_17);
		}
	}
	else
	{
		if (BitTest(Local_162.f_429, 7))
		{
			MISC::CLEAR_BIT(&(Local_162.f_429), 7);
		}
		if (BitTest(Local_162.f_429, 6))
		{
			MISC::CLEAR_BIT(&(Local_162.f_429), 6);
		}
	}
	if (Local_821[Local_162.f_178 /*9*/].f_4 == -2147483647)
	{
		return;
	}
	iVar1 = (NETWORK::GET_NETWORK_TIME() - Local_821[Local_162.f_178 /*9*/].f_4);
	if (iVar1 < 1000)
	{
		if (!BitTest(Local_162.f_429, 8))
		{
			MISC::SET_BIT(&(Local_162.f_429), 8);
			func_135("Frontend_GO");
		}
		func_125("MPArcadeCabinetGridHUD", "text_fight", 0.5f, (0.5f + -0.005f), 0.26666668f, 0.14814815f, 0f, Local_162.f_107.f_17);
	}
}

void func_204()//Position - 0x78A8
{
	func_184(Local_162.f_107.f_29, 102);
	func_125("MPArcadeCabinetGridHUD", "text_wasted", 0.5f, (0.5f + -0.005f), 0.3125f, 0.14814815f, 0f, Local_162.f_107.f_29);
}

void func_205()//Position - 0x78EC
{
	struct<2> Var0;
	
	Var0 = { func_208(Local_162.f_438) };
	if (func_207(Local_162.f_439, Var0))
	{
		return;
	}
	func_125("MPArcadeCabinetGrid", func_206(Local_162.f_438), Local_162.f_439, Local_162.f_439.f_1, Var0.f_0, Var0.f_1, 0f, Local_162.f_107.f_17);
}

char* func_206(int iParam0)//Position - 0x7940
{
	switch (iParam0)
	{
		case 0:
			return "BIRDS";
		
		case 1:
			return "AIRPLANE";
		
		case 2:
			return "HELICOPTER";
		
		default:
	}
	return "";
}

int func_207(struct<2> Param0, struct<2> Param2)//Position - 0x797A
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

struct<2> func_208(int iParam0)//Position - 0x79F1
{
	switch (iParam0)
	{
		case 0:
			return func_110(0.03333333f, 0.05925926f);
		
		case 1:
			return func_110(0.114583336f, 0.2037037f);
		
		case 2:
			return func_110(0.114583336f, 0.2037037f);
		
		default:
	}
	return func_110(0f, 0f);
}

void func_209()//Position - 0x7A4B
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var17;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_162.f_159[iVar0 /*3*/] <= -1)
		{
		}
		else
		{
			StringCopy(&Var1, "fire_ball", 64);
			StringIntConCat(&Var1, Local_162.f_159[iVar0 /*3*/] + 1, 64);
			Var17 = { func_110((0.066667f / 2f), (0.118519f / 2f)) };
			func_125("MPArcadeCabinetGrid", &Var1, Local_162.f_159[iVar0 /*3*/].f_1, Local_162.f_159[iVar0 /*3*/].f_1.f_1, Var17.f_0, Var17.f_1, 0f, Local_162.f_107.f_17);
			Local_162.f_159[iVar0 /*3*/] = (Local_162.f_159[iVar0 /*3*/] + Local_162.f_412);
			if (Local_162.f_159[iVar0 /*3*/] >= 9)
			{
				Local_162.f_159[iVar0 /*3*/] = -1;
			}
		}
		iVar0++;
	}
}

void func_210()//Position - 0x7AF9
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_615.f_148[iVar0 /*4*/].f_3 == -1)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() < Local_615.f_148[iVar0 /*4*/])
		{
			func_213(iVar0);
		}
		else
		{
			iVar1 = func_212(Local_615.f_148[iVar0 /*4*/].f_2);
			if (NETWORK::GET_NETWORK_TIME() > (Local_615.f_148[iVar0 /*4*/] + iVar1))
			{
			}
			else
			{
				if (NETWORK::GET_NETWORK_TIME() < (Local_615.f_148[iVar0 /*4*/] + (iVar1 / 2)) && func_207(func_110(Local_162.f_281[iVar0 /*7*/], Local_162.f_281[iVar0 /*7*/].f_1), func_110(Local_162.f_22[Local_615.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_162.f_22[Local_615.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1)))
				{
					func_213(iVar0);
				}
				fVar2 = func_211(Local_615.f_148[iVar0 /*4*/].f_2);
				Local_162.f_281[iVar0 /*7*/].f_4 = (Local_162.f_281[iVar0 /*7*/].f_4 + Local_162.f_414);
				if (Local_162.f_281[iVar0 /*7*/].f_4 >= Local_162.f_22[Local_615.f_148[iVar0 /*4*/].f_3 /*4*/].f_1)
				{
					Local_162.f_281[iVar0 /*7*/].f_4 = 0;
				}
				StringCopy(&Var3, "", 64);
				StringConCat(&Var3, Local_162.f_22[Local_615.f_148[iVar0 /*4*/].f_3 /*4*/], 64);
				if (Local_615.f_148[iVar0 /*4*/].f_3 < 5)
				{
					StringIntConCat(&Var3, Local_162.f_281[iVar0 /*7*/].f_4 + 1, 64);
				}
				func_125("MPArcadeCabinetGrid", &Var3, Local_162.f_281[iVar0 /*7*/], Local_162.f_281[iVar0 /*7*/].f_1, Local_162.f_22[Local_615.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_162.f_22[Local_615.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1, fVar2, Local_162.f_107.f_17);
			}
		}
		iVar0++;
	}
}

float func_211(int iParam0)//Position - 0x7CB3
{
	switch (iParam0)
	{
		case 0:
			return 90f;
		
		case 1:
			return 270f;
		
		case 2:
			return 0f;
		
		case 3:
			return 180f;
		
		default:
	}
	return 0f;
}

var func_212(int iParam0)//Position - 0x7CF7
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 11;
			break;
		
		case 2:
		case 3:
			iVar0 = 15;
			break;
	}
	return iVar0 * 650;
}

void func_213(int iParam0)//Position - 0x7D31
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	func_187(Local_615.f_148[iParam0 /*4*/].f_1, &iVar0, &iVar1);
	if (Local_615.f_148[iParam0 /*4*/].f_2 == 1)
	{
		Var2 = { func_190(func_73(iVar0, 0)) };
		func_125("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + -0.011f), 0.020833332f, 0.018518519f, 180f, func_215(Local_615.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_615.f_148[iParam0 /*4*/].f_2 == 0)
	{
		Var2 = { func_190(func_73(iVar0, 8)) };
		func_125("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + 0.023f), 0.020833332f, 0.018518519f, 0f, func_215(Local_615.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_615.f_148[iParam0 /*4*/].f_2 == 3)
	{
		Var2 = { func_190(func_73(0, iVar1)) };
		func_125("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_214(iVar1, 1)), Var2.f_1, 0.020833332f, 0.018518519f, 90f, func_215(Local_615.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_615.f_148[iParam0 /*4*/].f_2 == 2)
	{
		Var2 = { func_190(func_73(12, iVar1)) };
		func_125("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_214(iVar1, 0)), Var2.f_1, 0.020833332f, 0.018518519f, -90f, func_215(Local_615.f_148[iParam0 /*4*/].f_3));
	}
}

float func_214(int iParam0, bool bParam1)//Position - 0x7EA3
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return -0.011f;
			}
			return 0.00975f;
		
		case 2:
			if (bParam1)
			{
				return -0.02275f;
			}
			return 0.02275f;
		
		case 4:
			if (bParam1)
			{
				return -0.02375f;
			}
			return 0.02275f;
		
		case 6:
			if (bParam1)
			{
				return -0.01975f;
			}
			return 0.018f;
		
		case 8:
			if (bParam1)
			{
				return -0.006f;
			}
			return 0.004f;
		
		default:
	}
	return 0f;
}

struct<4> func_215(int iParam0)//Position - 0x7F3A
{
	float fVar0;
	struct<4> Var1;
	
	fVar0 = SYSTEM::SIN((IntToFloat(MISC::GET_GAME_TIMER()) * 0.5f));
	Var1 = { Local_162.f_107.f_17 };
	switch (iParam0)
	{
		case 0:
		case 4:
			break;
		
		case 1:
		case 2:
		case 3:
			if (fVar0 > 0f)
			{
				func_216(&Var1, 255, 0, 0, 255);
			}
			else
			{
				func_216(&Var1, 0, 0, 255, 255);
			}
			break;
		
		case 5:
			Var1 = { Local_162.f_107[0 /*4*/] };
			break;
		
		case 6:
			Var1 = { Local_162.f_107[1 /*4*/] };
			break;
		
		case 7:
			Var1 = { Local_162.f_107[2 /*4*/] };
			break;
		
		case 8:
			Var1 = { Local_162.f_107[3 /*4*/] };
			break;
	}
	Var1.f_3 = (55 + SYSTEM::ROUND((MISC::ABSF(fVar0) * 200f)));
	return Var1;
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x801E
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
}

void func_217()//Position - 0x803D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == Local_162.f_178)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_923[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_821[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_218(iVar0);
		}
		iVar0++;
	}
	func_218(Local_162.f_178);
}

void func_218(int iParam0)//Position - 0x80A4
{
	struct<8> Var0;
	char cVar16[64];
	struct<4> Var32;
	float fVar36;
	float fVar37;
	char cVar38[64];
	int iVar54;
	struct<2> Var55;
	struct<8> Var57;
	struct<2> Var73;
	
	StringCopy(&Var0, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var0, Local_162.f_422[Local_821[iParam0 /*9*/].f_6], 64);
	if (func_70(iParam0))
	{
		StringCopy(&cVar16, "dead_", 64);
		StringConCat(&cVar16, Local_162.f_422[Local_821[iParam0 /*9*/].f_6], 64);
		func_125(&Var0, &cVar16, Local_162.f_204[iParam0 /*19*/], Local_162.f_204[iParam0 /*19*/].f_1, 0.033333f, 0.059259f, 0f, Local_162.f_107.f_17);
		return;
	}
	Var32 = { Local_162.f_107.f_17 };
	if (Local_858[iParam0 /*16*/].f_2 + func_186(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (Local_162.f_204[iParam0 /*19*/].f_4 == 0)
		{
			func_167("Footsteps", iParam0, &(Local_162.f_204[iParam0 /*19*/].f_7));
		}
		Local_162.f_204[iParam0 /*19*/].f_4 = (Local_162.f_204[iParam0 /*19*/].f_4 + Local_162.f_412);
		if (Local_162.f_204[iParam0 /*19*/].f_4 >= 12)
		{
			Local_162.f_204[iParam0 /*19*/].f_4 = 0;
		}
	}
	if (Local_821[iParam0 /*9*/].f_3 + 1000 > NETWORK::GET_NETWORK_TIME())
	{
		fVar36 = MISC::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT((Local_821[iParam0 /*9*/].f_3 + 1000 - NETWORK::GET_NETWORK_TIME())) * 0.35f)));
		Var32.f_3 = (255 - SYSTEM::ROUND(fVar36) * 150);
	}
	fVar37 = func_222(Local_858[iParam0 /*16*/].f_4);
	StringCopy(&cVar38, "walk_", 64);
	StringConCat(&cVar38, Local_162.f_422[Local_821[iParam0 /*9*/].f_6], 64);
	StringConCat(&cVar38, "_", 64);
	StringConCat(&cVar38, Local_162.f_59[Local_821[iParam0 /*9*/].f_5 /*5*/], 64);
	StringIntConCat(&cVar38, Local_162.f_204[iParam0 /*19*/].f_4 + 1, 64);
	if (Local_821[iParam0 /*9*/].f_1 < 1f && Local_162.f_204[iParam0 /*19*/].f_4 > 0)
	{
		iVar54 = Var32.f_3;
		Var32.f_3 = (iVar54 / 2);
		Var55 = { Local_162.f_204[iParam0 /*19*/] };
		if (func_75())
		{
			Var55 = { func_189(Var55, func_110((0.002604167f * SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))), (0.00462963f * SYSTEM::COS(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))))) };
		}
		else
		{
			Var55 = { func_189(Var55, func_110((0.002604167f * SYSTEM::COS(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))), (0.00462963f * SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))))) };
		}
		func_125(&Var0, &cVar38, Var55.f_0, Var55.f_1, 0.033333f, 0.059259f, fVar37, Var32);
		Var32.f_3 = iVar54;
	}
	func_125(&Var0, &cVar38, Local_162.f_204[iParam0 /*19*/], Local_162.f_204[iParam0 /*19*/].f_1, 0.033333f, 0.059259f, fVar37, Var32);
	if (Local_162.f_204[iParam0 /*19*/].f_5 > -1)
	{
		StringCopy(&Var57, "muzzle_flare_", 64);
		StringIntConCat(&Var57, Local_162.f_204[iParam0 /*19*/].f_5 + 1, 64);
		Var73 = { func_219(iParam0, fVar37) };
		func_125("MPArcadeCabinetGrid", &Var57, Var73.f_0, Var73.f_1, 0.016666668f, 0.02962963f, fVar37, Var32);
		Local_162.f_204[iParam0 /*19*/].f_5 = (Local_162.f_204[iParam0 /*19*/].f_5 + Local_162.f_412);
		if (Local_162.f_204[iParam0 /*19*/].f_5 >= 3)
		{
			Local_162.f_204[iParam0 /*19*/].f_5 = -1;
		}
	}
}

struct<2> func_219(int iParam0, float fParam1)//Position - 0x83B1
{
	struct<2> Var0;
	
	Var0 = { func_221(Local_162.f_204[iParam0 /*19*/]) };
	switch (Local_821[iParam0 /*9*/].f_5)
	{
		case 1:
		case 2:
			Var0 = { func_189(Var0, func_110(7f, -36f)) };
			break;
		
		case 3:
		case 4:
		case 5:
			Var0 = { func_189(Var0, func_110(5f, -40f)) };
			break;
	}
	Var0 = { func_220(func_221(Local_162.f_204[iParam0 /*19*/]), Var0, fParam1) };
	Var0 = { func_109(Var0) };
	return Var0;
}

struct<2> func_220(struct<2> Param0, struct<2> Param2, float fParam4)//Position - 0x8455
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

struct<2> func_221(struct<2> Param0)//Position - 0x84B5
{
	return func_110((Param0.f_0 * 1920f), (Param0.f_1 * 1080f));
}

float func_222(int iParam0)//Position - 0x84D3
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		
		case 1:
			return 180f;
		
		case 2:
			return 270f;
		
		case 3:
			return 90f;
		
		default:
	}
	return 0f;
}

void func_223()//Position - 0x8517
{
	float fVar0;
	struct<2> Var1;
	bool bVar3;
	var uVar4;
	bool bVar5;
	struct<2> Var6;
	struct<8> Var8;
	struct<4> Var24;
	
	fVar0 = MISC::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0.2f)));
	bVar5 = false;
	bVar3 = false;
	while (bVar3 <= 6)
	{
		if (Local_615.f_62[bVar3 /*3*/].f_1 == -1)
		{
		}
		else if (BitTest(Local_162.f_309, bVar3))
		{
		}
		else
		{
			Var6 = { func_190(Local_615.f_62[bVar3 /*3*/]) };
			MISC::SET_BIT(&uVar4, bVar3);
			if (!BitTest(Local_162.f_310, bVar3) && !bVar5)
			{
				func_224("Pickup_Spawn", Var6, 1);
				bVar5 = true;
			}
			StringCopy(&Var8, Local_162.f_90[Local_615.f_62[bVar3 /*3*/].f_1 /*2*/], 64);
			if (Local_162.f_90[Local_615.f_62[bVar3 /*3*/].f_1 /*2*/].f_1 > 0)
			{
				StringIntConCat(&Var8, (Local_162.f_311 % Local_162.f_90[Local_615.f_62[bVar3 /*3*/].f_1 /*2*/].f_1) + 1, 64);
			}
			Var1 = { func_110(0.033333f, 0.059259f) };
			if (!((Local_615.f_62[bVar3 /*3*/].f_1 == 0 || Local_615.f_62[bVar3 /*3*/].f_1 == 2) || Local_615.f_62[bVar3 /*3*/].f_1 == 1))
			{
				Var1.f_0 = (Var1.f_0 - ((Var1.f_0 * 0.15f) * fVar0));
				Var1.f_1 = (Var1.f_1 - ((Var1.f_1 * 0.15f) * fVar0));
			}
			Var24 = { Local_162.f_107.f_17 };
			if ((NETWORK::GET_NETWORK_TIME() - Local_615.f_62[bVar3 /*3*/].f_2) < 1250)
			{
				Var24.f_3 = SYSTEM::ROUND((fVar0 * 255f));
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_615.f_62[bVar3 /*3*/].f_2) > 16500)
			{
				Var24.f_3 = SYSTEM::ROUND((func_142(1f, 0.1f, (SYSTEM::TO_FLOAT(((NETWORK::GET_NETWORK_TIME() - Local_615.f_62[bVar3 /*3*/].f_2) - 16500)) / 1000f), 4) * 255f));
			}
			func_125("MPArcadeCabinetGrid", &Var8, Var6.f_0, Var6.f_1, Var1.f_0, Var1.f_1, 0f, Var24);
		}
		bVar3++;
	}
	Local_162.f_310 = uVar4;
}

void func_224(char* sParam0, struct<2> Param1, bool bParam3)//Position - 0x8705
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_169(Param1);
	if (bParam3)
	{
	}
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, "dlc_vw_am_tw_global_sounds", false);
	if (bParam3)
	{
		AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", fVar0);
	}
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

void func_225()//Position - 0x8749
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_923[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_821[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				if (Local_858[iVar0 /*16*/].f_5[iVar1 /*5*/] == -2147483647)
				{
				}
				else if (BitTest(Local_162.f_303, func_226(iVar0, iVar1)))
				{
				}
				else
				{
					fVar2 = func_222(Local_858[iVar0 /*16*/].f_5[iVar1 /*5*/].f_3);
					if (Local_858[iVar0 /*16*/].f_5[iVar1 /*5*/].f_4 == 4)
					{
						StringCopy(&Var3, "rocket_trail_", 64);
						StringIntConCat(&Var3, Local_162.f_416 + 1, 64);
						func_125("MPArcadeCabinetGrid", &Var3, Local_162.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_162.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0.004166667f, 0.03333333f, fVar2, Local_162.f_107.f_17);
					}
					else
					{
						func_125("MPArcadeCabinetGrid", "bullet" /* GXT: Bullet */, Local_162.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_162.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0.004166667f, 0.011111111f, fVar2, Local_162.f_107.f_17);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_226(int iParam0, int iParam1)//Position - 0x888B
{
	return (iParam1 + (2 * iParam0));
}

void func_227(int iParam0)//Position - 0x889A
{
	if (iLocal_816[Local_923[iParam0 /*37*/].f_6] == 0 && (NETWORK::GET_NETWORK_TIME() - Local_615.f_146) > 3000)
	{
		if ((BitTest(Local_162.f_417, 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !BitTest(Local_162.f_417, 3))
		{
		}
	}
	if (Local_923[iParam0 /*37*/] != 3)
	{
		return;
	}
	if (Local_615.f_162)
	{
		func_233(iParam0, 4);
	}
	if (func_232(iParam0))
	{
		if (NETWORK::GET_NETWORK_TIME() >= Local_923[iParam0 /*37*/].f_3 + 2500 && !BitTest(Local_162.f_142[iParam0], 6))
		{
			MISC::SET_BIT(&(Local_162.f_142[iParam0]), 6);
		}
		if (NETWORK::GET_NETWORK_TIME() >= Local_923[iParam0 /*37*/].f_3 + 3500)
		{
			func_229(iParam0);
		}
	}
	else if (NETWORK::GET_NETWORK_TIME() > Local_923[iParam0 /*37*/].f_3 + 1000 && !BitTest(Local_162.f_142[iParam0], 6))
	{
		func_233(iParam0, 4);
		func_228("Death_Dead");
	}
}

void func_228(char* sParam0)//Position - 0x898F
{
	if (Local_162.f_178.f_4 == -1)
	{
		Local_162.f_178.f_4 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(Local_162.f_178.f_4, sParam0, "dlc_vw_am_tw_global_sounds", false);
}

void func_229(int iParam0)//Position - 0x89BC
{
	func_230(iParam0);
	func_233(iParam0, 2);
	func_228("Death_Resurrect");
	Local_923[iParam0 /*37*/].f_4 = NETWORK::GET_NETWORK_TIME();
	Local_923[iParam0 /*37*/].f_2 = 8;
	Local_923[iParam0 /*37*/].f_5 = 0;
	Local_923[iParam0 /*37*/].f_1 = 1f;
	Local_162.f_178.f_2 = 0;
	if (BitTest(Local_162.f_142[iParam0], 6))
	{
		MISC::CLEAR_BIT(&(Local_162.f_142[iParam0]), 6);
	}
}

void func_230(int iParam0)//Position - 0x8A26
{
	Local_923[iParam0 /*37*/].f_9 = func_231(iParam0);
	Local_923[iParam0 /*37*/].f_9.f_1 = Local_923[iParam0 /*37*/].f_9;
}

int func_231(int iParam0)//Position - 0x8A51
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = -1;
	iVar1 = -1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (bVar2 == iParam0)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar2)) && !Local_923[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_821[bVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_70(bVar2))
		{
		}
		else
		{
			func_187(Local_858[bVar2 /*16*/], &iVar8, &iVar9);
			MISC::SET_BIT(&uVar4, iVar8);
			MISC::SET_BIT(&uVar5, iVar9);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 2)
	{
		if (Local_615.f_148[bVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_187(Local_615.f_148[bVar2 /*4*/].f_1, &iVar8, &iVar9);
			if (Local_615.f_148[bVar2 /*4*/].f_2 == 0 || Local_615.f_148[bVar2 /*4*/].f_2 == 1)
			{
				MISC::SET_BIT(&uVar6, iVar8);
			}
			else if (Local_615.f_148[bVar2 /*4*/].f_2 == 2 || Local_615.f_148[bVar2 /*4*/].f_2 == 3)
			{
				MISC::SET_BIT(&uVar7, iVar9);
			}
		}
		bVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	bVar2 = false;
	while (bVar2 <= 12)
	{
		bVar3 = false;
		while (bVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_73(bVar2, bVar3);
			if (!(func_83(&(Local_615.f_85[Local_923[iParam0 /*37*/].f_6 /*11*/][0 /*5*/]), iVar10) || func_83(&(Local_615.f_85[Local_923[iParam0 /*37*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (BitTest(uVar6, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar7, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar4, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar5, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			bVar3++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_232(int iParam0)//Position - 0x8C38
{
	if (BitTest(Local_162.f_142[iParam0], 6))
	{
		return 1;
	}
	if (Local_923[iParam0 /*37*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_816[Local_923[iParam0 /*37*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_233(int iParam0, int iParam1)//Position - 0x8C79
{
	if (iParam0 == -1)
	{
		return;
	}
	Local_923[iParam0 /*37*/] = iParam1;
}

void func_234()//Position - 0x8C93
{
	if (iLocal_816[Local_821[Local_162.f_178 /*9*/].f_6] == 0 && (NETWORK::GET_NETWORK_TIME() - Local_615.f_146) > 3000)
	{
		if ((BitTest(Local_162.f_417, 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !BitTest(Local_162.f_417, 3))
		{
			func_153("SCGW_H_RSPWN", 7500, 0);
			MISC::SET_BIT(&(Local_162.f_417), 3);
		}
	}
	if (Local_821[Local_162.f_178 /*9*/] != 3)
	{
		return;
	}
	func_16();
	if (Local_615.f_162)
	{
		func_239(4);
		func_171(6);
	}
	if (func_238(Local_162.f_178))
	{
		if (NETWORK::GET_NETWORK_TIME() >= Local_821[Local_162.f_178 /*9*/].f_3 + 2500 && !BitTest(Local_162.f_141, 6))
		{
			MISC::SET_BIT(&(Local_162.f_141), 6);
		}
		if (NETWORK::GET_NETWORK_TIME() >= Local_821[Local_162.f_178 /*9*/].f_3 + 3500)
		{
			func_235();
		}
	}
	else if (NETWORK::GET_NETWORK_TIME() > Local_821[Local_162.f_178 /*9*/].f_3 + 1000 && !BitTest(Local_162.f_141, 6))
	{
		func_239(4);
		func_228("Death_Dead");
		func_171(6);
	}
}

void func_235()//Position - 0x8DA6
{
	func_236();
	func_239(2);
	func_228("Death_Resurrect");
	Local_821[Local_162.f_178 /*9*/].f_4 = NETWORK::GET_NETWORK_TIME();
	Local_821[Local_162.f_178 /*9*/].f_2 = 8;
	Local_821[Local_162.f_178 /*9*/].f_5 = 0;
	Local_821[Local_162.f_178 /*9*/].f_1 = 1f;
	Local_162.f_178.f_2 = 0;
	func_171(4);
	if (BitTest(Local_162.f_141, 6))
	{
		MISC::CLEAR_BIT(&(Local_162.f_141), 6);
	}
}

void func_236()//Position - 0x8E11
{
	Local_858[Local_162.f_178 /*16*/] = func_237();
	Local_858[Local_162.f_178 /*16*/].f_1 = Local_858[Local_162.f_178 /*16*/];
}

int func_237()//Position - 0x8E3A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = -1;
	iVar1 = -1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (bVar2 == Local_162.f_178)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar2)) && !Local_923[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_821[bVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_70(bVar2))
		{
		}
		else
		{
			func_187(Local_858[bVar2 /*16*/], &iVar8, &iVar9);
			MISC::SET_BIT(&uVar4, iVar8);
			MISC::SET_BIT(&uVar5, iVar9);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 2)
	{
		if (Local_615.f_148[bVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_187(Local_615.f_148[bVar2 /*4*/].f_1, &iVar8, &iVar9);
			if (Local_615.f_148[bVar2 /*4*/].f_2 == 0 || Local_615.f_148[bVar2 /*4*/].f_2 == 1)
			{
				MISC::SET_BIT(&uVar6, iVar8);
			}
			else if (Local_615.f_148[bVar2 /*4*/].f_2 == 2 || Local_615.f_148[bVar2 /*4*/].f_2 == 3)
			{
				MISC::SET_BIT(&uVar7, iVar9);
			}
		}
		bVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	bVar2 = false;
	while (bVar2 <= 12)
	{
		bVar3 = false;
		while (bVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_73(bVar2, bVar3);
			if (!(func_83(&(Local_615.f_85[Local_821[Local_162.f_178 /*9*/].f_6 /*11*/][0 /*5*/]), iVar10) || func_83(&(Local_615.f_85[Local_821[Local_162.f_178 /*9*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (BitTest(uVar6, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar7, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar4, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar5, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			bVar3++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_238(int iParam0)//Position - 0x9027
{
	if (BitTest(Local_162.f_141, 6))
	{
		return 1;
	}
	if (Local_821[iParam0 /*9*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_816[Local_821[iParam0 /*9*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_239(int iParam0)//Position - 0x9064
{
	if (Local_162.f_178 == -1)
	{
		return;
	}
	Local_821[Local_162.f_178 /*9*/] = iParam0;
}

void func_240()//Position - 0x9082
{
	int iVar0;
	
	if (Local_162.f_437 == -2147483647)
	{
		Local_162.f_437 = NETWORK::GET_NETWORK_TIME();
	}
	if ((NETWORK::GET_NETWORK_TIME() - Local_162.f_437) > 22500)
	{
		Local_162.f_437 = NETWORK::GET_NETWORK_TIME();
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == Local_162.f_438)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		Local_162.f_438 = iVar0;
		func_243();
	}
	Local_162.f_439 = (Local_162.f_439 + (func_242() * SYSTEM::TIMESTEP()));
	Local_162.f_439.f_1 = (Local_162.f_439.f_1 + (func_241() * SYSTEM::TIMESTEP()));
}

float func_241()//Position - 0x910A
{
	switch (Local_162.f_438)
	{
		case 0:
			return -0.11111111f;
		
		case 1:
			return -0.11111111f;
		
		case 2:
			return -0.1388889f;
		
		default:
	}
	return 0f;
}

float func_242()//Position - 0x9147
{
	switch (Local_162.f_438)
	{
		case 0:
			return -0.0625f;
		
		case 1:
			return -0.0625f;
		
		case 2:
			return 0.078125f;
		
		default:
	}
	return 0f;
}

void func_243()//Position - 0x9184
{
	switch (Local_162.f_438)
	{
		case 0:
		case 1:
			Local_162.f_439 = { func_110((1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0f)), (1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f))) };
			break;
		
		case 2:
			Local_162.f_439 = { func_110((0f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f)), (1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f))) };
			break;
	}
}

void func_244()//Position - 0x91F4
{
	int* iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_923[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_923[iVar1 /*37*/].f_6 == -1)
		{
		}
		else
		{
			func_245(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_162.f_306 = iVar0;
}

void func_245(int iParam0, int* iParam1)//Position - 0x9243
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	int iVar10;
	bool bVar11;
	float fVar12;
	struct<2> Var13;
	float fVar15;
	struct<2> Var16;
	struct<2> Var18;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 1)
	{
		bVar11 = func_226(iParam0, iVar10);
		if (Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/] == -2147483647)
		{
			if (BitTest(Local_162.f_304, bVar11))
			{
				MISC::CLEAR_BIT(&(Local_162.f_304), bVar11);
			}
		}
		else
		{
			MISC::SET_BIT(iParam1, bVar11);
			if (!BitTest(Local_162.f_306, bVar11))
			{
				Local_162.f_204[iParam0 /*19*/].f_5 = 0;
				func_262(iParam0, iVar10);
			}
			fVar12 = 0f;
			Var13 = { Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1 };
			switch (Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_3)
			{
				case 0:
					fVar12 = -(IntToFloat(Local_162.f_59[Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_110(0f, 0.014814815f) };
					break;
				
				case 1:
					fVar12 = (IntToFloat(Local_162.f_59[Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_110(0f, -0.014814815f) };
					break;
				
				case 2:
					fVar12 = -(IntToFloat(Local_162.f_59[Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_110(0.008333333f, 0f) };
					break;
				
				case 3:
					fVar12 = (IntToFloat(Local_162.f_59[Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_110(-0.008333333f, 0f) };
					break;
			}
			fVar15 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/])) / SYSTEM::TO_FLOAT((Local_162.f_59[Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2 * Local_162.f_59[Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_1)));
			if (BitTest(Local_162.f_304, bVar11))
			{
				if (fVar15 > 1f)
				{
					Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { func_110(-1f, -1f) };
					Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/] = -2147483647;
					Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1 = -1f;
					Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1.f_1 = -1f;
					Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_3 = -1;
					Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 = -1;
				}
			}
			else
			{
				Var16 = { Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1 };
				Var18 = { Var13 };
				if (func_261(Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, (-1f - 0.0001f), (-1f + 0.0001f), 0) && func_261(Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2.f_1, (-1f - 0.0001f), (-1f + 0.0001f), 0))
				{
					Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Var16 };
				}
				else
				{
					Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				}
				Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] = { func_259(Var16, Var18, fVar15) };
				iVar20 = 0;
				iVar21 = 0;
				Var4 = { Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				Var6 = { func_189(Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, Var8) };
				iVar20 = 0;
				while (iVar20 <= 3)
				{
					if (iVar20 == iParam0)
					{
					}
					else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar20)))
					{
					}
					else if (Local_821[iVar20 /*9*/].f_6 == -1)
					{
					}
					else if (func_70(iVar20))
					{
					}
					else
					{
						Var0 = { Local_162.f_204[iVar20 /*19*/] };
						Var2 = { Local_162.f_204[iVar20 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_254(Var4, Var6, Var0, Var2))
						{
							func_252(iVar10, iVar20, iParam0);
							iVar21 = 1;
						}
					}
					iVar20++;
				}
				iVar22 = 0;
				iVar22 = 0;
				while (iVar22 <= 3)
				{
					if (iVar22 == iParam0)
					{
					}
					else if (!Local_923[iVar22 /*37*/].f_25)
					{
					}
					else if (Local_923[iVar22 /*37*/].f_6 == -1)
					{
					}
					else if (func_251(iVar22))
					{
					}
					else
					{
						Var0 = { Local_162.f_204[iVar22 /*19*/] };
						Var2 = { Local_162.f_204[iVar22 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_254(Var4, Var6, Var0, Var2))
						{
							func_248(iVar10, iVar22, iParam0);
							iVar21 = 1;
						}
					}
					iVar22++;
				}
				if (fVar15 >= 1f || iVar21)
				{
					if (!BitTest(Local_162.f_304, bVar11))
					{
						if (Local_923[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 == 4)
						{
							func_246(Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/]);
						}
						MISC::SET_BIT(&(Local_162.f_304), bVar11);
					}
				}
			}
		}
		iVar10++;
	}
}

void func_246(struct<2> Param0)//Position - 0x979B
{
	Local_162.f_159[Local_162.f_308 /*3*/] = 0;
	Local_162.f_159[Local_162.f_308 /*3*/].f_1 = { Param0 };
	if (func_247(Param0, Local_162.f_204[Local_162.f_178 /*19*/]) < SYSTEM::POW((0.185185f * 2f), 2f))
	{
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 100);
	}
	func_224("Rocket_Explode", Param0, 1);
	Local_162.f_308++;
	if (Local_162.f_308 >= 6)
	{
		Local_162.f_308 = 0;
	}
}

float func_247(struct<2> Param0, struct<2> Param2)//Position - 0x9818
{
	return (SYSTEM::POW((Param2.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param2.f_1 - Param0.f_1), 2f));
}

void func_248(int iParam0, int iParam1, int iParam2)//Position - 0x9839
{
	Local_162.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_162.f_204[iParam1 /*19*/] };
	func_249(iParam1, -Local_162.f_59[Local_923[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 250, 200);
	Local_923[iParam1 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	if (Local_923[iParam1 /*37*/] != 2)
	{
		func_166((6 + Local_923[iParam2 /*37*/].f_6));
	}
	if (Local_923[iParam1 /*37*/].f_2 <= 0)
	{
		func_166((2 + Local_923[iParam1 /*37*/].f_6));
		Local_140.f_18++;
	}
}

void func_249(int iParam0, int iParam1, int iParam2)//Position - 0x98D1
{
	int iVar0;
	
	iVar0 = (Local_923[iParam0 /*37*/].f_2 + iParam1);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_923[iParam0 /*37*/] == 2)
		{
			func_233(iParam0, 3);
			func_228("Death_Bleeps");
		}
	}
	if (iVar0 != Local_923[iParam0 /*37*/].f_2)
	{
		Local_923[iParam0 /*37*/].f_2 = iVar0;
	}
	if (iParam1 < 0)
	{
		func_250(iParam0, Local_923[iParam0 /*37*/] != 2, iParam2);
	}
}

void func_250(int iParam0, bool bParam1, var uParam2)//Position - 0x9948
{
	struct<6> Var0;
	int iVar6;
	
	Var0.f_0 = 444085151;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	Var0.f_4 = bParam1;
	Var0.f_5 = uParam2;
	iVar6 = func_137(1);
	if (!iVar6 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 6, iVar6, Var0.f_0);
	}
}

int func_251(int iParam0)//Position - 0x998F
{
	if (Local_923[iParam0 /*37*/] == 3)
	{
		return 1;
	}
	if (Local_923[iParam0 /*37*/] == 4)
	{
		return 1;
	}
	return 0;
}

void func_252(int iParam0, int iParam1, int iParam2)//Position - 0x99B6
{
	Local_162.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_162.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_162.f_178)
	{
		func_253(-Local_162.f_59[Local_923[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 250, 200);
		Local_821[Local_162.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		if (Local_821[Local_162.f_178 /*9*/] != 2)
		{
			func_166((6 + Local_923[iParam2 /*37*/].f_6));
		}
	}
	else if (iParam2 == Local_162.f_178 && (Local_821[iParam1 /*9*/].f_2 - Local_162.f_59[Local_923[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_166((2 + Local_821[iParam1 /*9*/].f_6));
		Local_140.f_18++;
	}
}

void func_253(int iParam0, int iParam1)//Position - 0x9A83
{
	int iVar0;
	
	iVar0 = (Local_821[Local_162.f_178 /*9*/].f_2 + iParam0);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_821[Local_162.f_178 /*9*/] == 2)
		{
			func_239(3);
			MISC::SET_BIT(&(Local_162.f_141), 2);
			func_228("Death_Bleeps");
			Global_1927705 = 5;
		}
	}
	if (iVar0 != Local_821[Local_162.f_178 /*9*/].f_2)
	{
		Local_821[Local_162.f_178 /*9*/].f_2 = iVar0;
	}
	if (iParam0 < 0)
	{
		func_250(Local_162.f_178, Local_821[Local_162.f_178 /*9*/] != 2, iParam1);
	}
}

int func_254(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6)//Position - 0x9B12
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	var uVar8;
	
	Var0 = { Param0 };
	Var2 = { Param2 };
	Var4 = { Param4 };
	Var6 = { Param6 };
	func_258(&Param0, &Param2);
	func_258(&Param4, &Param6);
	func_258(&Var2, &Var0);
	func_258(&Var6, &Var4);
	if (((func_255(Param0, Param2, Var4, Var6, &uVar8) || func_255(Param0, Param2, Param4, Param6, &uVar8)) || func_255(Var0, Var2, Param4, Param6, &uVar8)) || func_255(Var0, Var2, Var4, Var6, &uVar8))
	{
		return 1;
	}
	return 0;
}

int func_255(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6, var uParam8)//Position - 0x9BCC
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
	if (!func_261(fVar6, (0f - 0.0001f), (0f + 0.0001f), 0))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { func_110(fVar7, fVar8) };
		if (((((((func_257((Param0.f_0 - 0.001f), (Param2.f_0 - 0.001f)) <= Var9.f_0 && Var9.f_0 <= func_256((Param0.f_0 + 0.001f), (Param2.f_0 + 0.001f))) && func_257((Param0.f_1 - 0.001f), (Param2.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_256((Param0.f_1 + 0.001f), (Param2.f_1 + 0.001f))) && func_257((Param4.f_0 - 0.001f), (Param6.f_0 - 0.001f)) <= Var9.f_0) && Var9.f_0 <= func_256((Param4.f_0 + 0.001f), (Param6.f_0 + 0.001f))) && func_257((Param4.f_1 - 0.001f), (Param6.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_256((Param4.f_1 + 0.001f), (Param6.f_1 + 0.001f)))
		{
			*uParam8 = { Var9 };
			return 1;
		}
	}
	*uParam8 = { func_110(3.402823E+38f, 3.402823E+38f) };
	return 0;
}

float func_256(float fParam0, float fParam1)//Position - 0x9D7D
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_257(float fParam0, float fParam1)//Position - 0x9D94
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_258(var uParam0, var uParam1)//Position - 0x9DAB
{
	if (func_261(*uParam0, (*uParam1 - 0.0001f), (*uParam1 + 0.0001f), 0))
	{
		*uParam0 = (*uParam0 + 0.008333333f);
		*uParam1 = (*uParam1 - 0.008333333f);
	}
	if (func_261(uParam0->f_1, (uParam1->f_1 - 0.0001f), (uParam1->f_1 + 0.0001f), 0))
	{
		uParam0->f_1 = (uParam0->f_1 + 0.014814815f);
		uParam1->f_1 = (uParam1->f_1 - 0.014814815f);
	}
}

struct<2> func_259(struct<2> Param0, struct<2> Param2, float fParam4)//Position - 0x9E24
{
	return func_189(func_260(Param0, (1f - fParam4)), func_260(Param2, fParam4));
}

struct<2> func_260(struct<2> Param0, float fParam2)//Position - 0x9E46
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 * fParam2);
	Var0.f_1 = (Param0.f_1 * fParam2);
	return Var0;
}

bool func_261(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x9E64
{
	if (bParam3)
	{
		return (fParam0 >= fParam1 && fParam0 <= fParam2);
	}
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

void func_262(int iParam0, int iParam1)//Position - 0x9E92
{
	char* sVar0;
	
	sVar0 = "";
	switch (Local_923[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_923[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_167(sVar0, iParam0, &(Local_162.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_263(sVar0, iParam0, &(Local_162.f_204[iParam0 /*19*/].f_8));
	}
}

void func_263(char* sParam0, int iParam1, var uParam2)//Position - 0x9F3D
{
	float fVar0;
	
	fVar0 = func_169(Local_162.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(*uParam2, sParam0, "dlc_vw_am_tw_global_sounds", false);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam2, "Screen_Position", fVar0);
}

void func_264()//Position - 0x9F7E
{
	int* iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
		}
		else if (Local_821[iVar1 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_265(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_162.f_305 = iVar0;
}

void func_265(int iParam0, int* iParam1)//Position - 0x9FCE
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	int iVar10;
	bool bVar11;
	float fVar12;
	struct<2> Var13;
	float fVar15;
	struct<2> Var16;
	struct<2> Var18;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 1)
	{
		bVar11 = func_226(iParam0, iVar10);
		if (Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/] == -2147483647)
		{
			if (BitTest(Local_162.f_303, bVar11))
			{
				MISC::CLEAR_BIT(&(Local_162.f_303), bVar11);
			}
		}
		else
		{
			MISC::SET_BIT(iParam1, bVar11);
			if (!BitTest(Local_162.f_305, bVar11))
			{
				Local_162.f_204[iParam0 /*19*/].f_5 = 0;
				func_268(iParam0, iVar10);
			}
			fVar12 = 0f;
			Var13 = { Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/].f_1 };
			switch (Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/].f_3)
			{
				case 0:
					fVar12 = -(IntToFloat(Local_162.f_59[Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_110(0f, 0.014814815f) };
					break;
				
				case 1:
					fVar12 = (IntToFloat(Local_162.f_59[Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_110(0f, -0.014814815f) };
					break;
				
				case 2:
					fVar12 = -(IntToFloat(Local_162.f_59[Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_110(0.008333333f, 0f) };
					break;
				
				case 3:
					fVar12 = (IntToFloat(Local_162.f_59[Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_110(-0.008333333f, 0f) };
					break;
			}
			fVar15 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/])) / SYSTEM::TO_FLOAT((Local_162.f_59[Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2 * Local_162.f_59[Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_1)));
			if (BitTest(Local_162.f_303, bVar11))
			{
				if (fVar15 > 1f)
				{
					Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { func_110(-1f, -1f) };
					if (iParam0 == Local_162.f_178)
					{
						Local_858[Local_162.f_178 /*16*/].f_5[iVar10 /*5*/] = -2147483647;
						Local_858[Local_162.f_178 /*16*/].f_5[iVar10 /*5*/].f_1 = -1f;
						Local_858[Local_162.f_178 /*16*/].f_5[iVar10 /*5*/].f_1.f_1 = -1f;
						Local_858[Local_162.f_178 /*16*/].f_5[iVar10 /*5*/].f_3 = -1;
						Local_858[Local_162.f_178 /*16*/].f_5[iVar10 /*5*/].f_4 = -1;
					}
				}
			}
			else
			{
				Var16 = { Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/].f_1 };
				Var18 = { Var13 };
				if (func_261(Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, (-1f - 0.0001f), (-1f + 0.0001f), 0) && func_261(Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2.f_1, (-1f - 0.0001f), (-1f + 0.0001f), 0))
				{
					Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Var16 };
				}
				else
				{
					Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				}
				Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] = { func_259(Var16, Var18, fVar15) };
				iVar20 = 0;
				iVar21 = 0;
				Var4 = { Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				Var6 = { func_189(Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, Var8) };
				iVar20 = 0;
				while (iVar20 <= 3)
				{
					if (iVar20 == iParam0)
					{
					}
					else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar20)))
					{
					}
					else if (Local_821[iVar20 /*9*/].f_6 == -1)
					{
					}
					else if (func_70(iVar20))
					{
					}
					else
					{
						Var0 = { Local_162.f_204[iVar20 /*19*/] };
						Var2 = { Local_162.f_204[iVar20 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_254(Var4, Var6, Var0, Var2))
						{
							func_267(iVar10, iVar20, iParam0);
							iVar21 = 1;
						}
					}
					iVar20++;
				}
				iVar22 = 0;
				iVar22 = 0;
				while (iVar22 <= 3)
				{
					if (iVar22 == iParam0)
					{
					}
					else if (!Local_923[iVar22 /*37*/].f_25)
					{
					}
					else if (Local_923[iVar22 /*37*/].f_6 == -1)
					{
					}
					else if (func_251(iVar22))
					{
					}
					else
					{
						Var0 = { Local_162.f_204[iVar22 /*19*/] };
						Var2 = { Local_162.f_204[iVar22 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_254(Var4, Var6, Var0, Var2))
						{
							func_266(iVar10, iVar22, iParam0);
							iVar21 = 1;
						}
					}
					iVar22++;
				}
				if (fVar15 >= 1f || iVar21)
				{
					if (!BitTest(Local_162.f_303, bVar11))
					{
						if (Local_858[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 == 4)
						{
							func_246(Local_162.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/]);
						}
						MISC::SET_BIT(&(Local_162.f_303), bVar11);
					}
				}
			}
		}
		iVar10++;
	}
}

void func_266(int iParam0, int iParam1, int iParam2)//Position - 0xA517
{
	Local_162.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_162.f_204[iParam1 /*19*/] };
	func_249(iParam1, -Local_162.f_59[Local_858[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 250, 200);
	Local_923[iParam1 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	if (Local_923[iParam1 /*37*/] != 2)
	{
		func_166((6 + Local_821[iParam2 /*9*/].f_6));
	}
	if (Local_923[iParam1 /*37*/].f_2 <= 0)
	{
		func_166((2 + Local_923[iParam1 /*37*/].f_6));
		Local_140.f_18++;
	}
}

void func_267(int iParam0, int iParam1, int iParam2)//Position - 0xA5AD
{
	Local_162.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_162.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_162.f_178)
	{
		func_253(-Local_162.f_59[Local_858[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 250, 200);
		Local_821[Local_162.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		if (Local_821[Local_162.f_178 /*9*/] != 2)
		{
			func_166((6 + Local_821[iParam2 /*9*/].f_6));
		}
	}
	else if (iParam2 == Local_162.f_178 && (Local_821[iParam1 /*9*/].f_2 - Local_162.f_59[Local_858[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_166((2 + Local_821[iParam1 /*9*/].f_6));
		Local_140.f_18++;
	}
}

void func_268(int iParam0, int iParam1)//Position - 0xA676
{
	char* sVar0;
	
	sVar0 = "";
	switch (Local_858[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_858[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_167(sVar0, iParam0, &(Local_162.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_263(sVar0, iParam0, &(Local_162.f_204[iParam0 /*19*/].f_8));
	}
}

void func_269()//Position - 0xA71D
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	int iVar25;
	int iVar26;
	int iVar27;
	
	bVar10 = false;
	iVar11 = 0;
	while (iVar11 <= 2)
	{
		iVar16 = NETWORK::GET_NETWORK_TIME();
		if (Local_615.f_148[iVar11 /*4*/].f_3 != -1 && iVar16 > Local_615.f_148[iVar11 /*4*/])
		{
			iVar17 = func_74((Local_615.f_148[iVar11 /*4*/].f_2 == 1 || Local_615.f_148[iVar11 /*4*/].f_2 == 0), 11, 15) * 650;
			if (iVar16 > (Local_615.f_148[iVar11 /*4*/] + iVar17))
			{
			}
			else
			{
				bVar10 = true;
				fVar18 = (SYSTEM::TO_FLOAT((iVar16 - Local_615.f_148[iVar11 /*4*/])) / SYSTEM::TO_FLOAT(iVar17));
				func_187(Local_615.f_148[iVar11 /*4*/].f_1, &iVar12, &iVar13);
				switch (Local_615.f_148[iVar11 /*4*/].f_2)
				{
					case 0:
						iVar14 = iVar12;
						iVar15 = 0;
						Var8 = { func_110(0f, -(Local_162.f_22[Local_615.f_148[iVar11 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					
					case 1:
						iVar14 = iVar12;
						iVar15 = 8;
						Var8 = { func_110(0f, (Local_162.f_22[Local_615.f_148[iVar11 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					
					case 2:
						iVar14 = 0;
						iVar15 = iVar13;
						Var8 = { func_110(-(Local_162.f_22[Local_615.f_148[iVar11 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
					
					case 3:
						iVar14 = 12;
						iVar15 = iVar13;
						Var8 = { func_110((Local_162.f_22[Local_615.f_148[iVar11 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
				}
				Var19 = { func_190(Local_615.f_148[iVar11 /*4*/].f_1) };
				Var21 = { func_190(func_73(iVar14, iVar15)) };
				switch (Local_615.f_148[iVar11 /*4*/].f_2)
				{
					case 0:
						Var19.f_1 = (Var19.f_1 + 0.1851855f);
						Var21.f_1 = (Var21.f_1 + -0.1851855f);
						break;
					
					case 1:
						Var19.f_1 = (Var19.f_1 + -0.1851855f);
						Var21.f_1 = (Var21.f_1 + 0.1851855f);
						break;
					
					case 2:
						Var19.f_0 = (Var19.f_0 + 0.1041665f);
						Var21.f_0 = (Var21.f_0 + -0.1041665f);
						break;
					
					case 3:
						Var19.f_0 = (Var19.f_0 + -0.1041665f);
						Var21.f_0 = (Var21.f_0 + 0.1041665f);
						break;
				}
				Local_162.f_281[iVar11 /*7*/].f_2 = { Local_162.f_281[iVar11 /*7*/] };
				Local_162.f_281[iVar11 /*7*/] = { func_259(Var19, Var21, fVar18) };
				if (!func_207(Local_162.f_281[iVar11 /*7*/], Local_162.f_22[Local_615.f_148[iVar11 /*4*/].f_3 /*4*/].f_2))
				{
					if (func_207(Local_162.f_281[iVar11 /*7*/].f_2, Local_162.f_22[Local_615.f_148[iVar11 /*4*/].f_3 /*4*/].f_2))
					{
						if (Local_615.f_148[iVar11 /*4*/].f_3 != 0)
						{
							func_224(func_275(Local_615.f_148[iVar11 /*4*/].f_3), Local_162.f_281[iVar11 /*7*/], 1);
						}
					}
					else
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
						{
							AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
						{
							AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
						}
						if (iVar11 != 2)
						{
							Var23 = { Local_162.f_281[iVar11 /*7*/] };
							if (iVar11 == 1 && Local_615.f_148[iVar11 /*4*/].f_2 != Local_615.f_148[2 /*4*/].f_2)
							{
								Var23 = { func_110(0.5f, 0.5f) };
							}
							if (Local_615.f_148[iVar11 /*4*/].f_3 >= 5)
							{
								iVar25 = (Local_615.f_148[iVar11 /*4*/].f_3 - 5);
								func_273(func_274(Local_615.f_148[iVar11 /*4*/].f_3), &(Local_162.f_281[iVar11 /*7*/].f_5), Var23, iVar25);
							}
							else
							{
								func_172(func_274(Local_615.f_148[iVar11 /*4*/].f_3), &(Local_162.f_281[iVar11 /*7*/].f_5), Var23, 1);
							}
						}
					}
				}
				else if (Local_162.f_281[iVar11 /*7*/].f_5 != -1)
				{
					func_173(&(Local_162.f_281[iVar11 /*7*/].f_5));
				}
				Var4 = { func_189(Local_162.f_281[iVar11 /*7*/], Var8) };
				Var6 = { func_272(Local_162.f_281[iVar11 /*7*/].f_2, Var8) };
				iVar26 = 0;
				iVar26 = 0;
				while (iVar26 <= 3)
				{
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar26)))
					{
					}
					else if (Local_821[iVar26 /*9*/].f_6 == -1)
					{
					}
					else if (func_70(iVar26))
					{
					}
					else
					{
						Var0 = { Local_162.f_204[iVar26 /*19*/] };
						Var2 = { Local_162.f_204[iVar26 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_254(Var4, Var6, Var0, Var2))
						{
							func_271(iVar26);
						}
					}
					iVar26++;
				}
				iVar27 = 0;
				iVar27 = 0;
				while (iVar27 <= 3)
				{
					if (!Local_923[iVar27 /*37*/].f_25)
					{
					}
					else if (Local_923[iVar27 /*37*/].f_6 == -1)
					{
					}
					else if (func_251(iVar27))
					{
					}
					else
					{
						Var0 = { Local_162.f_204[iVar27 /*19*/] };
						Var2 = { Local_162.f_204[iVar27 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_254(Var4, Var6, Var0, Var2))
						{
							func_270(iVar27);
						}
					}
					iVar27++;
				}
				Jump @1613; //curOff = 1374
				if (Local_162.f_281[iVar11 /*7*/].f_5 != -1)
				{
					func_173(&(Local_162.f_281[iVar11 /*7*/].f_5));
				}
				Local_162.f_281[iVar11 /*7*/] = { func_190(Local_615.f_148[iVar11 /*4*/].f_1) };
				switch (Local_615.f_148[iVar11 /*4*/].f_2)
				{
					case 0:
						Local_162.f_281[iVar11 /*7*/].f_1 = (Local_162.f_281[iVar11 /*7*/].f_1 + 0.1851855f);
						break;
					
					case 1:
						Local_162.f_281[iVar11 /*7*/].f_1 = (Local_162.f_281[iVar11 /*7*/].f_1 + -0.1851855f);
						break;
					
					case 2:
						Local_162.f_281[iVar11 /*7*/] = (Local_162.f_281[iVar11 /*7*/] + 0.1041665f);
						break;
					
					case 3:
						Local_162.f_281[iVar11 /*7*/] = (Local_162.f_281[iVar11 /*7*/] + -0.1041665f);
						break;
				}
				Local_162.f_281[iVar11 /*7*/].f_2 = { Local_162.f_281[iVar11 /*7*/] };
			}
			iVar11++;
			if (!bVar10)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
				{
					AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
				}
			}
		}

void func_270(int iParam0)//Position - 0xADA2
{
	func_249(iParam0, -8, 1);
	Local_923[iParam0 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	func_166(10);
}

void func_271(int iParam0)//Position - 0xADC7
{
	if (iParam0 == Local_162.f_178)
	{
		func_253(-8, 1);
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 200);
		Local_821[Local_162.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		func_166(10);
	}
}

struct<2> func_272(struct<2> Param0, struct<2> Param2)//Position - 0xADFF
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 - Param2.f_0);
	Var0.f_1 = (Param0.f_1 - Param2.f_1);
	return Var0;
}

void func_273(char* sParam0, var uParam1, struct<2> Param2, int iParam4)//Position - 0xAE1F
{
	float fVar0;
	
	fVar0 = func_169(Param2);
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, func_168(iParam4), false);
	}
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", fVar0);
}

char* func_274(int iParam0)//Position - 0xAE66
{
	switch (iParam0)
	{
		case 0:
			return "Ice_Cream_Van_Loop";
		
		case 1:
		case 2:
		case 3:
			return "Emergency_Siren_Loop";
		
		case 4:
			return "Tank_Loop";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Loop";
		
		default:
	}
	return "INVALID VEHICLE";
}

char* func_275(int iParam0)//Position - 0xAECB
{
	switch (iParam0)
	{
		case 1:
			return "Ambulance_Warning";
		
		case 2:
			return "Police_Car_Warning";
		
		case 3:
			return "Fire_Truck_Warning";
		
		case 4:
			return "Tank_Warning";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Warning";
		
		default:
	}
	return "INVALID VEHICLE";
}

void func_276()//Position - 0xAF31
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_923[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_923[iVar0 /*37*/].f_6 == -1)
		{
		}
		else if (func_70(iVar0))
		{
			Local_162.f_204[iVar0 /*19*/].f_2 = { func_110(-1f, -1f) };
		}
		else
		{
			func_277(iVar0);
		}
		iVar0++;
	}
}

void func_277(int iParam0)//Position - 0xAF92
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	
	func_187(Local_923[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_187(Local_923[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	Var4 = { func_190(Local_923[iParam0 /*37*/].f_9) };
	Var6 = { func_190(Local_923[iParam0 /*37*/].f_9.f_1) };
	fVar8 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_923[iParam0 /*37*/].f_9.f_2)) / SYSTEM::TO_FLOAT(func_283(iParam0)));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	if ((fVar8 >= 0.65f && !BitTest(Local_162.f_142[iParam0], 0)) || (fVar8 >= 0.8f && !BitTest(Local_162.f_142[iParam0], 1)))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_282(Local_923[iParam0 /*37*/].f_9, 1, Local_923[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar9 = func_73((iVar0 - 1), iVar1);
				func_282(uVar9, 1, Local_923[iParam0 /*37*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_282(Local_923[iParam0 /*37*/].f_9, 0, Local_923[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar10 = func_73(iVar0, (iVar1 - 1));
				func_282(uVar10, 0, Local_923[iParam0 /*37*/].f_6);
			}
		}
		if (!BitTest(Local_162.f_142[iParam0], 0))
		{
			MISC::SET_BIT(&(Local_162.f_142[iParam0]), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_162.f_142[iParam0]), 4);
			MISC::SET_BIT(&(Local_162.f_142[iParam0]), 1);
		}
	}
	if (fVar8 > 0.85f || fVar8 < 0.15f)
	{
		if (fVar8 > 0.85f)
		{
			iVar11 = Local_923[iParam0 /*37*/].f_9;
		}
		else
		{
			iVar11 = Local_923[iParam0 /*37*/].f_9.f_1;
		}
		bVar12 = false;
		while (bVar12 <= 6)
		{
			if (Local_615.f_62[bVar12 /*3*/].f_1 == -1)
			{
				if (BitTest(Local_162.f_309, bVar12))
				{
					MISC::CLEAR_BIT(&(Local_162.f_309), bVar12);
				}
			}
			else if (!func_281(bVar12, iParam0))
			{
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_615.f_62[bVar12 /*3*/].f_2) < 1250)
			{
			}
			else if (BitTest(Local_162.f_309, bVar12))
			{
			}
			else if (iVar11 == Local_615.f_62[bVar12 /*3*/])
			{
				MISC::SET_BIT(&(Local_162.f_309), bVar12);
				func_279(bVar12, iParam0);
				func_278(bVar12);
				func_166(11);
			}
			bVar12++;
		}
	}
	if (fVar8 < 1f)
	{
		if (Local_162.f_204[iParam0 /*19*/].f_2 < 0f && Local_162.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_162.f_204[iParam0 /*19*/].f_2 = { func_259(Var6, Var4, fVar8) };
		}
		else
		{
			Local_162.f_204[iParam0 /*19*/].f_2 = { Local_162.f_204[iParam0 /*19*/] };
		}
		Local_162.f_204[iParam0 /*19*/] = { func_259(Var6, Var4, fVar8) };
		return;
	}
	if (Local_162.f_204[iParam0 /*19*/].f_2 < 0f && Local_162.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_162.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_162.f_204[iParam0 /*19*/].f_2 = { Local_162.f_204[iParam0 /*19*/] };
	}
	Local_162.f_204[iParam0 /*19*/] = { Var4 };
	Local_162.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_278(bool bParam0)//Position - 0xB2C0
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = -2013943038;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = bParam0;
	iVar4 = func_137(1);
	if (!iVar4 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

void func_279(bool bParam0, int iParam1)//Position - 0xB2FB
{
	Local_140.f_17++;
	switch (Local_615.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			func_249(iParam1, 4, 0);
			break;
		
		case 1:
			Local_162.f_178.f_2 += 10;
			break;
		
		case 2:
			func_280(Local_923[iParam1 /*37*/].f_9, Local_923[iParam1 /*37*/].f_6);
			break;
		
		case 3:
			Local_923[iParam1 /*37*/].f_5 = 1;
			break;
		
		case 4:
			Local_923[iParam1 /*37*/].f_5 = 2;
			break;
		
		case 5:
			Local_923[iParam1 /*37*/].f_5 = 3;
			break;
		
		case 6:
			Local_923[iParam1 /*37*/].f_5 = 4;
			break;
		
		case 7:
			Local_923[iParam1 /*37*/].f_5 = 5;
			break;
	}
	if (!BitTest(Local_162.f_417, 2) && Local_923[iParam1 /*37*/].f_5 != 0)
	{
	}
}

void func_280(var uParam0, var uParam1)//Position - 0xB3DE
{
	struct<5> Var0;
	int iVar5;
	
	Var0.f_0 = 743327592;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam0;
	Var0.f_4 = uParam1;
	iVar5 = func_137(1);
	if (!iVar5 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 5, iVar5, Var0.f_0);
	}
}

int func_281(bool bParam0, int iParam1)//Position - 0xB41F
{
	switch (Local_615.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_923[iParam1 /*37*/].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_923[iParam1 /*37*/].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_923[iParam1 /*37*/].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_923[iParam1 /*37*/].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_923[iParam1 /*37*/].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_923[iParam1 /*37*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_282(var uParam0, int iParam1, var uParam2)//Position - 0xB4E5
{
	struct<6> Var0;
	int iVar6;
	
	Var0.f_0 = 385697842;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	Var0.f_5 = uParam2;
	iVar6 = func_137(1);
	if (!iVar6 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 6, iVar6, Var0.f_0);
	}
}

int func_283(int iParam0)//Position - 0xB52C
{
	return SYSTEM::ROUND((700f * Local_923[iParam0 /*37*/].f_1));
}

void func_284()//Position - 0xB547
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else if (Local_821[iVar0 /*9*/].f_6 == -1)
		{
		}
		else if (func_70(iVar0))
		{
			Local_162.f_204[iVar0 /*19*/].f_2 = { func_110(-1f, -1f) };
		}
		else
		{
			func_285(iVar0);
		}
		iVar0++;
	}
}

void func_285(int iParam0)//Position - 0xB5A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	
	func_187(Local_858[iParam0 /*16*/], &iVar0, &iVar1);
	func_187(Local_858[iParam0 /*16*/].f_1, &iVar2, &iVar3);
	Var4 = { func_190(Local_858[iParam0 /*16*/]) };
	Var6 = { func_190(Local_858[iParam0 /*16*/].f_1) };
	fVar8 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_858[iParam0 /*16*/].f_2)) / SYSTEM::TO_FLOAT(func_186(iParam0)));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	if (iParam0 == Local_162.f_178 && ((fVar8 >= 0.65f && !BitTest(Local_162.f_141, 0)) || (fVar8 >= 0.8f && !BitTest(Local_162.f_141, 1))))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_282(Local_858[iParam0 /*16*/], 1, Local_821[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar9 = func_73((iVar0 - 1), iVar1);
				func_282(uVar9, 1, Local_821[iParam0 /*9*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_282(Local_858[iParam0 /*16*/], 0, Local_821[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar10 = func_73(iVar0, (iVar1 - 1));
				func_282(uVar10, 0, Local_821[iParam0 /*9*/].f_6);
			}
		}
		if (!BitTest(Local_162.f_141, 0))
		{
			MISC::SET_BIT(&(Local_162.f_141), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_162.f_141), 4);
			MISC::SET_BIT(&(Local_162.f_141), 1);
		}
	}
	if (fVar8 > 0.85f || fVar8 < 0.15f)
	{
		if (fVar8 > 0.85f)
		{
			iVar11 = Local_858[iParam0 /*16*/];
		}
		else
		{
			iVar11 = Local_858[iParam0 /*16*/].f_1;
		}
		bVar12 = false;
		while (bVar12 <= 6)
		{
			if (Local_615.f_62[bVar12 /*3*/].f_1 == -1)
			{
				if (BitTest(Local_162.f_309, bVar12))
				{
					MISC::CLEAR_BIT(&(Local_162.f_309), bVar12);
				}
			}
			else if (!func_287(bVar12))
			{
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_615.f_62[bVar12 /*3*/].f_2) < 1250)
			{
			}
			else if (BitTest(Local_162.f_309, bVar12))
			{
			}
			else if (iVar11 == Local_615.f_62[bVar12 /*3*/])
			{
				if (iParam0 == Local_162.f_178)
				{
					MISC::SET_BIT(&(Local_162.f_309), bVar12);
					func_286(bVar12);
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 100, 50);
					func_278(bVar12);
					func_166(11);
				}
			}
			bVar12++;
		}
	}
	if (fVar8 < 1f)
	{
		if (Local_162.f_204[iParam0 /*19*/].f_2 < 0f && Local_162.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_162.f_204[iParam0 /*19*/].f_2 = { func_259(Var6, Var4, fVar8) };
		}
		else
		{
			Local_162.f_204[iParam0 /*19*/].f_2 = { Local_162.f_204[iParam0 /*19*/] };
		}
		Local_162.f_204[iParam0 /*19*/] = { func_259(Var6, Var4, fVar8) };
		return;
	}
	if (Local_162.f_204[iParam0 /*19*/].f_2 < 0f && Local_162.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_162.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_162.f_204[iParam0 /*19*/].f_2 = { Local_162.f_204[iParam0 /*19*/] };
	}
	Local_162.f_204[iParam0 /*19*/] = { Var4 };
	Local_162.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_286(bool bParam0)//Position - 0xB8C6
{
	struct<2> Var0;
	
	Var0 = { func_190(Local_615.f_62[bParam0 /*3*/]) };
	Local_140.f_17++;
	switch (Local_615.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			func_224("Pickup_Health", Var0, 1);
			func_253(4, 0);
			break;
		
		case 1:
			func_224("Pickup_Speed", Var0, 1);
			Local_162.f_178.f_2 += 10;
			break;
		
		case 2:
			func_224("Pickup_Collect_Transport", Var0, 1);
			func_280(Local_858[Local_162.f_178 /*16*/], Local_821[Local_162.f_178 /*9*/].f_6);
			break;
		
		case 3:
			func_224("Pickup_Collect_Weapon", Var0, 1);
			Local_821[Local_162.f_178 /*9*/].f_5 = 1;
			break;
		
		case 4:
			func_224("Pickup_Collect_Weapon", Var0, 1);
			Local_821[Local_162.f_178 /*9*/].f_5 = 2;
			break;
		
		case 5:
			func_224("Pickup_Collect_Weapon", Var0, 1);
			Local_821[Local_162.f_178 /*9*/].f_5 = 3;
			break;
		
		case 6:
			func_224("Pickup_Collect_Weapon", Var0, 1);
			Local_821[Local_162.f_178 /*9*/].f_5 = 4;
			break;
		
		case 7:
			func_224("Pickup_Collect_Weapon", Var0, 1);
			Local_821[Local_162.f_178 /*9*/].f_5 = 5;
			break;
	}
	if (!BitTest(Local_162.f_417, 2) && Local_821[Local_162.f_178 /*9*/].f_5 != 0)
	{
		MISC::SET_BIT(&(Local_162.f_417), 2);
		func_153("SCGW_H_SHOOT", 7500, 0);
	}
}

int func_287(bool bParam0)//Position - 0xBA44
{
	switch (Local_615.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_821[Local_162.f_178 /*9*/].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_821[Local_162.f_178 /*9*/].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_821[Local_162.f_178 /*9*/].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_821[Local_162.f_178 /*9*/].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_821[Local_162.f_178 /*9*/].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_821[Local_162.f_178 /*9*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_288(int iParam0)//Position - 0xBB16
{
	func_300(iParam0);
	func_296(iParam0);
	func_293(iParam0);
	func_289(iParam0);
}

void func_289(int iParam0)//Position - 0xBB36
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (Local_923[iParam0 /*37*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_291(iParam0);
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_290(iParam0, Local_923[iParam0 /*37*/].f_9.f_4);
	}
	if (bVar2)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_162.f_183[iParam0 /*5*/].f_3 + Local_162.f_59[Local_923[iParam0 /*37*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_923[iParam0 /*37*/].f_9.f_4;
		Local_923[iParam0 /*37*/].f_9.f_5[Local_162.f_307 /*5*/] = NETWORK::GET_NETWORK_TIME();
		Local_923[iParam0 /*37*/].f_9.f_5[Local_162.f_307 /*5*/].f_3 = uVar1;
		Local_923[iParam0 /*37*/].f_9.f_5[Local_162.f_307 /*5*/].f_4 = Local_923[iParam0 /*37*/].f_5;
		Local_923[iParam0 /*37*/].f_9.f_5[Local_162.f_307 /*5*/].f_1 = { Local_162.f_204[iParam0 /*19*/] };
		Local_923[iParam0 /*37*/].f_9.f_4 = uVar1;
		Local_162.f_183[iParam0 /*5*/].f_3 = NETWORK::GET_NETWORK_TIME();
		Local_162.f_307++;
		if (Local_162.f_307 >= 2)
		{
			Local_162.f_307 = 0;
		}
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 50, 100);
	}
}

int func_290(int iParam0, int iParam1)//Position - 0xBC51
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var0 = { func_190(func_73(12, 8)) };
	Var2 = { func_190(func_73(0, 0)) };
	switch (iParam1)
	{
		case 0:
			if (func_261(Local_162.f_204[iParam0 /*19*/].f_1, (Var2.f_1 - 0.0001f), (Var2.f_1 + 0.0001f), 0))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_261(Local_162.f_204[iParam0 /*19*/].f_1, (Var0.f_1 - 0.0001f), (Var0.f_1 + 0.0001f), 0))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_261(Local_162.f_204[iParam0 /*19*/], (Var2.f_0 - 0.0001f), (Var2.f_0 + 0.0001f), 0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_261(Local_162.f_204[iParam0 /*19*/], (Var0.f_0 - 0.0001f), (Var0.f_0 + 0.0001f), 0))
			{
				return 0;
			}
			break;
	}
	func_187(Local_923[iParam0 /*37*/].f_9, &iVar4, &iVar5);
	func_187(Local_923[iParam0 /*37*/].f_9.f_1, &iVar6, &iVar7);
	if (Local_923[iParam0 /*37*/].f_9.f_2 + func_186(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar5 != iVar7)
		{
			if (iParam1 == 2 || iParam1 == 3)
			{
				return 0;
			}
		}
		else if (iVar4 != iVar6)
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_291(int iParam0)//Position - 0xBDB6
{
	if (func_292(iParam0))
	{
		return -1;
	}
	if (Local_923[iParam0 /*37*/].f_26)
	{
		return 8;
	}
	return -1;
}

int func_292(int iParam0)//Position - 0xBDDD
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (Local_923[iParam0 /*37*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_293(int iParam0)//Position - 0xBE00
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_295(iParam0);
	bVar1 = func_294(iParam0, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_923[iParam0 /*37*/].f_9.f_4 = 0;
				break;
			
			case 5:
				Local_923[iParam0 /*37*/].f_9.f_4 = 1;
				break;
			
			case 6:
				Local_923[iParam0 /*37*/].f_9.f_4 = 2;
				break;
			
			case 7:
				Local_923[iParam0 /*37*/].f_9.f_4 = 3;
				break;
			}
	}
}

int func_294(int iParam0, int iParam1)//Position - 0xBE7A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_187(Local_923[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_187(Local_923[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_923[iParam0 /*37*/].f_9.f_2 + func_186(Local_162.f_178)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_295(int iParam0)//Position - 0xBF3A
{
	if (func_292(iParam0))
	{
		return -1;
	}
	return Local_923[iParam0 /*37*/].f_28;
}

void func_296(int iParam0)//Position - 0xBF58
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_297(iParam0);
	bVar1 = false;
	if (((!((Local_923[iParam0 /*37*/].f_9.f_2 + func_186(Local_162.f_178)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_162.f_142[iParam0], 1)) && NETWORK::GET_NETWORK_TIME() < Local_923[iParam0 /*37*/].f_9.f_2 + 100) && Local_923[iParam0 /*37*/].f_9.f_3 != iVar0) && !BitTest(Local_162.f_142[iParam0], 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_187(Local_923[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
		func_187(Local_923[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	else
	{
		func_187(Local_923[iParam0 /*37*/].f_9, &iVar2, &iVar3);
		func_187(Local_923[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_923[iParam0 /*37*/].f_9.f_2 + func_186(iParam0)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_162.f_142[iParam0], 1)) || bVar1)
		{
			if (bVar1 || !BitTest(Local_162.f_142[iParam0], 5))
			{
				MISC::SET_BIT(&(Local_162.f_142[iParam0]), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_923[iParam0 /*37*/].f_9 = func_73(iVar2, iVar3);
			Local_923[iParam0 /*37*/].f_9.f_1 = func_73(iVar4, iVar5);
			if (Local_162.f_178.f_2 > 0)
			{
				Local_923[iParam0 /*37*/].f_1 = 0.75f;
				Local_162.f_178.f_2 = (Local_162.f_178.f_2 - 1);
			}
			else if (!func_261(Local_923[iParam0 /*37*/].f_1, (1f - 0.0001f), (1f + 0.0001f), 0))
			{
				Local_923[iParam0 /*37*/].f_1 = 1f;
			}
			Local_923[iParam0 /*37*/].f_9.f_2 = NETWORK::GET_NETWORK_TIME();
			if (iVar8 > 0)
			{
				Local_923[iParam0 /*37*/].f_9.f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_923[iParam0 /*37*/].f_9.f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_923[iParam0 /*37*/].f_9.f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_923[iParam0 /*37*/].f_9.f_4 = 1;
			}
			MISC::CLEAR_BIT(&(Local_162.f_142[iParam0]), 1);
			MISC::CLEAR_BIT(&(Local_162.f_142[iParam0]), 0);
			Local_923[iParam0 /*37*/].f_9.f_3 = iVar0;
			if (!BitTest(Local_162.f_142[iParam0], 5))
			{
				MISC::SET_BIT(&(Local_162.f_142[iParam0]), 5);
			}
		}
	}
}

int func_297(int iParam0)//Position - 0xC24F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (func_292(iParam0))
	{
		return -1;
	}
	if (!BitTest(Local_162.f_142[iParam0], 5))
	{
		return func_299(Local_923[iParam0 /*37*/].f_6);
	}
	iVar0 = Local_923[iParam0 /*37*/].f_33;
	iVar1 = Local_923[iParam0 /*37*/].f_34;
	func_187(Local_923[iParam0 /*37*/].f_9, &iVar2, &iVar3);
	uVar4 = func_298(iVar2, iVar3, iVar0, iVar1);
	return uVar4;
	return -1;
}

int func_298(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC2BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam2 - iParam0);
	iVar1 = (iParam3 - iParam1);
	if ((((iParam2 < 0 || iParam2 > 13) || iParam3 < 0) || iParam3 > 9) || (iVar0 == 0 && iVar1 == 0))
	{
		return -1;
	}
	if (iVar1 < 0)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = 1;
	}
	if (iVar0 < 0)
	{
		iVar2 = 2;
	}
	else
	{
		iVar2 = 3;
	}
	if (MISC::ABSI(iVar0) < MISC::ABSI(iVar1))
	{
		if ((iParam0 % 2) == 0)
		{
			return iVar3;
		}
		else
		{
			return iVar2;
		}
	}
	else if ((iParam1 % 2) == 0)
	{
		return iVar2;
	}
	else
	{
		return iVar3;
	}
	return -1;
}

int func_299(int iParam0)//Position - 0xC36C
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 3:
			return 2;
		
		default:
	}
	return -1;
}

void func_300(int iParam0)//Position - 0xC3A4
{
	Local_923[iParam0 /*37*/].f_26 = func_311(iParam0);
	Local_923[iParam0 /*37*/].f_28 = func_310(iParam0);
	if (Local_923[iParam0 /*37*/].f_27)
	{
		if (Local_923[iParam0 /*37*/].f_36 != 3 && func_309(iParam0))
		{
			Local_923[iParam0 /*37*/].f_36 = 3;
		}
		else if (Local_923[iParam0 /*37*/].f_36 != 1 && func_308(iParam0))
		{
			Local_923[iParam0 /*37*/].f_36 = 1;
		}
		else if (Local_923[iParam0 /*37*/].f_36 != 2 && func_307(iParam0))
		{
			Local_923[iParam0 /*37*/].f_36 = 2;
		}
		else if (Local_923[iParam0 /*37*/].f_36 != 0 && Local_923[iParam0 /*37*/].f_27)
		{
			Local_923[iParam0 /*37*/].f_36 = 0;
		}
		switch (Local_923[iParam0 /*37*/].f_36)
		{
			case 0:
				func_304(iParam0);
				break;
			
			case 1:
				func_303(iParam0);
				break;
			
			case 2:
				func_302(iParam0);
				break;
			
			case 3:
				func_301(iParam0);
				break;
		}
		if (Local_923[iParam0 /*37*/].f_33 == -1)
		{
			Local_923[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
		}
		if (Local_923[iParam0 /*37*/].f_34 == -1)
		{
			Local_923[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
		}
		Local_923[iParam0 /*37*/].f_27 = 0;
	}
	else if ((Local_923[iParam0 /*37*/].f_9.f_2 + func_186(iParam0)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_162.f_142[iParam0], 1))
	{
		if (Local_923[iParam0 /*37*/].f_9 == func_73(Local_923[iParam0 /*37*/].f_33, Local_923[iParam0 /*37*/].f_34) || (Local_923[iParam0 /*37*/].f_33 == -1 && Local_923[iParam0 /*37*/].f_34 == -1))
		{
			Local_923[iParam0 /*37*/].f_27 = 1;
		}
	}
}

void func_301(int iParam0)//Position - 0xC578
{
	if (Local_923[iParam0 /*37*/].f_35 == -1)
	{
		Local_923[iParam0 /*37*/].f_35 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	if (Local_923[iParam0 /*37*/].f_35 == iParam0)
	{
		Local_923[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_923[iParam0 /*37*/].f_35)) && !Local_923[Local_923[iParam0 /*37*/].f_35 /*37*/].f_25)
	{
		Local_923[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (Local_821[Local_923[iParam0 /*37*/].f_35 /*9*/].f_2 == 0)
	{
		Local_923[iParam0 /*37*/].f_35 = -1;
		return;
	}
	func_187(Local_858[Local_923[iParam0 /*37*/].f_35 /*16*/], &(Local_923[iParam0 /*37*/].f_33), &(Local_923[iParam0 /*37*/].f_34));
}

void func_302(int iParam0)//Position - 0xC634
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	func_187(Local_923[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 6)
	{
		if ((Local_615.f_62[iVar6 /*3*/].f_1 != -1 && Local_615.f_62[iVar6 /*3*/] != -1) && Local_615.f_62[iVar6 /*3*/].f_2 != -2147483647)
		{
			if (Local_615.f_62[iVar6 /*3*/].f_1 == 0)
			{
				func_187(Local_615.f_62[iVar6 /*3*/], &iVar2, &iVar3);
				if ((iVar4 == -1 && iVar5 == -1) || (MISC::ABSI((iVar2 - iVar0)) + MISC::ABSI((iVar3 - iVar1))) < (MISC::ABSI((iVar4 - iVar0)) + MISC::ABSI((iVar5 - iVar1))))
				{
					iVar4 = iVar2;
					iVar5 = iVar3;
				}
			}
		}
		iVar6++;
	}
	if (iVar4 == -1)
	{
		Local_923[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
	}
	if (iVar5 == -1)
	{
		Local_923[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
	}
}

void func_303(int iParam0)//Position - 0xC737
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar2 = NETWORK::GET_NETWORK_TIME();
	func_187(Local_923[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		iVar10 = func_74((Local_615.f_148[iVar9 /*4*/].f_2 == 1 || Local_615.f_148[iVar9 /*4*/].f_2 == 0), 11, 15) * 650;
		if (Local_615.f_148[iVar9 /*4*/].f_3 == -1 || (iVar2 < Local_615.f_148[iVar9 /*4*/] && iVar2 > (Local_615.f_148[iVar9 /*4*/] + iVar10)))
		{
		}
		else
		{
			func_187(Local_615.f_148[iVar9 /*4*/].f_1, &iVar7, &iVar8);
			bVar3 = (bVar3 || iVar7 == iVar0);
			bVar4 = (bVar4 || iVar8 == iVar1);
			bVar5 = (bVar5 || (Local_615.f_148[iVar9 /*4*/].f_2 == 1 && iVar8 == iVar1));
			bVar6 = (bVar6 || (Local_615.f_148[iVar9 /*4*/].f_2 == 2 && iVar7 == iVar0));
		}
		iVar9++;
	}
	if (bVar3)
	{
		if (bVar5)
		{
			if (iVar1 + 2 > 8)
			{
				Local_923[iParam0 /*37*/].f_34 = (iVar1 - 2);
			}
			else
			{
				Local_923[iParam0 /*37*/].f_34 = iVar1 + 2;
			}
		}
		else if ((iVar1 - 2) < 0)
		{
			Local_923[iParam0 /*37*/].f_34 = iVar1 + 2;
		}
		else
		{
			Local_923[iParam0 /*37*/].f_34 = (iVar1 - 2);
		}
	}
	if (bVar4)
	{
		if (bVar6)
		{
			if (iVar0 + 2 > 12)
			{
				Local_923[iParam0 /*37*/].f_33 = (iVar0 - 2);
			}
			else
			{
				Local_923[iParam0 /*37*/].f_33 = iVar0 + 2;
			}
		}
		else if ((iVar0 - 2) < 0)
		{
			Local_923[iParam0 /*37*/].f_33 = iVar0 + 2;
		}
		else
		{
			Local_923[iParam0 /*37*/].f_33 = (iVar0 - 2);
		}
	}
	if (!bVar3 && !bVar4)
	{
		Local_923[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
		Local_923[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
	}
}

void func_304(int iParam0)//Position - 0xC920
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	
	if (Local_923[iParam0 /*37*/].f_29 == -1 && Local_923[iParam0 /*37*/].f_30 == -1)
	{
		func_306(iParam0);
	}
	StringCopy(&cVar2, "", 64);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar2, "", 64);
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			StringIntConCat(&cVar2, Local_615[iVar0 /*5*/][iVar1], 64);
			StringConCat(&cVar2, " ", 64);
			iVar0++;
		}
		iVar1++;
	}
	if ((Local_923[iParam0 /*37*/].f_29 != -1 && Local_923[iParam0 /*37*/].f_30 != -1) && Local_615[(Local_923[iParam0 /*37*/].f_29 % 6) /*5*/][(Local_923[iParam0 /*37*/].f_30 % 4)] == Local_923[iParam0 /*37*/].f_6)
	{
		Local_923[iParam0 /*37*/].f_31 = 4;
	}
	if (Local_923[iParam0 /*37*/].f_29 != -1 && Local_923[iParam0 /*37*/].f_30 != -1)
	{
		func_305(iParam0);
	}
}

void func_305(int iParam0)//Position - 0xCA0F
{
	Local_923[iParam0 /*37*/].f_31++;
	Local_923[iParam0 /*37*/].f_31 = (Local_923[iParam0 /*37*/].f_31 % 6);
	if (Local_923[iParam0 /*37*/].f_31 == 0)
	{
		Local_923[iParam0 /*37*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	else if (Local_923[iParam0 /*37*/].f_31 == 5)
	{
		Local_923[iParam0 /*37*/].f_29 = -1;
		Local_923[iParam0 /*37*/].f_30 = -1;
		Local_923[iParam0 /*37*/].f_33 = Local_923[iParam0 /*37*/].f_29;
		Local_923[iParam0 /*37*/].f_34 = Local_923[iParam0 /*37*/].f_30;
		return;
	}
	switch (((Local_923[iParam0 /*37*/].f_31 + Local_923[iParam0 /*37*/].f_32) % 6))
	{
		case 0:
		case 4:
			Local_923[iParam0 /*37*/].f_33 = (Local_923[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_923[iParam0 /*37*/].f_34 = (Local_923[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		
		case 1:
			Local_923[iParam0 /*37*/].f_33 = Local_923[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_923[iParam0 /*37*/].f_34 = (Local_923[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		
		case 2:
			Local_923[iParam0 /*37*/].f_33 = Local_923[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_923[iParam0 /*37*/].f_34 = Local_923[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		
		case 3:
			Local_923[iParam0 /*37*/].f_33 = (Local_923[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_923[iParam0 /*37*/].f_34 = Local_923[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		
		case 5:
			break;
	}
}

void func_306(int iParam0)//Position - 0xCBB3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	func_187(Local_923[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 5:
			iVar2 = -1;
			iVar3 = -1;
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if ((iVar0 % 2) == 1 && (iVar1 % 2) == 0)
				{
					iVar2 = iVar0;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar3 = (iVar1 - 1);
					}
					else
					{
						iVar3 = iVar1 + 1;
					}
				}
				else if ((iVar1 % 2) == 1 && (iVar0 % 2) == 0)
				{
					iVar3 = iVar1;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar2 = (iVar0 - 1);
					}
					else
					{
						iVar2 = iVar0 + 1;
					}
				}
				else if (((iVar5 + iVar4) % 4) == 0)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 1)
				{
					iVar2 = iVar0 + 1;
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 2)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar2 = iVar0 + 1;
					iVar3 = iVar1 + 1;
				}
				if (iVar2 != -1 && iVar3 != -1)
				{
					if (Local_615[((iVar2 / 2) % 6) /*5*/][((iVar3 / 2) % 4)] != Local_923[iParam0 /*37*/].f_6)
					{
						Local_923[iParam0 /*37*/].f_29 = ((iVar2 / 2) % 6);
						Local_923[iParam0 /*37*/].f_30 = ((iVar3 / 2) % 4);
						return;
					}
				}
				iVar5++;
			}
			break;
		
		case 0:
			iVar7 = 0;
			while (iVar7 <= 3)
			{
				iVar6 = 0;
				while (iVar6 <= 5)
				{
					if (Local_615[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_923[iParam0 /*37*/].f_6)
					{
						Local_923[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_923[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 1:
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				iVar7 = 0;
				while (iVar7 <= 3)
				{
					if (Local_615[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_923[iParam0 /*37*/].f_6)
					{
						Local_923[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_923[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 2:
			iVar6 = 5;
			while (iVar6 <= 0)
			{
				iVar7 = 3;
				while (iVar7 <= 0)
				{
					if (Local_615[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_923[iParam0 /*37*/].f_6)
					{
						Local_923[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_923[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 3:
			iVar7 = 3;
			while (iVar7 <= 0)
			{
				iVar6 = 5;
				while (iVar6 <= 0)
				{
					if (Local_615[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_923[iParam0 /*37*/].f_6)
					{
						Local_923[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_923[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 4:
			Local_923[iParam0 /*37*/].f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			Local_923[iParam0 /*37*/].f_30 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			break;
	}
}

bool func_307(int iParam0)//Position - 0xCF1F
{
	return Local_923[iParam0 /*37*/].f_2 <= 4;
}

int func_308(int iParam0)//Position - 0xCF32
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_187(Local_923[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (Local_615.f_148[iVar4 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_187(Local_615.f_148[iVar4 /*4*/].f_1, &iVar2, &iVar3);
			if (iVar2 == iVar0 || iVar3 == iVar1)
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

var func_309(int iParam0)//Position - 0xCF9A
{
	return Local_615.f_162;
}

int func_310(int iParam0)//Position - 0xCFA7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_187(Local_923[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if (iVar4 != iParam0 && (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) || Local_923[iVar4 /*37*/].f_25))
		{
			func_187(Local_858[iVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				if (iVar3 <= iVar1)
				{
					return 4;
				}
				else if (iVar3 >= iVar1)
				{
					return 5;
				}
			}
			else if (iVar3 == iVar1)
			{
				if (iVar2 <= iVar0)
				{
					return 6;
				}
				else if (iVar2 >= iVar0)
				{
					return 7;
				}
			}
		}
		iVar4++;
	}
	return -1;
}

int func_311(int iParam0)//Position - 0xD04B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_187(Local_923[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if ((iVar4 != iParam0 && (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) || Local_923[iVar4 /*37*/].f_25)) && (Local_821[iVar4 /*9*/].f_2 > 0 || Local_923[iVar4 /*37*/].f_2 > 0))
		{
			func_187(Local_858[iVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				return ((iVar3 <= iVar1 && Local_923[iParam0 /*37*/].f_9.f_4 == 0) || (iVar3 >= iVar1 && Local_923[iParam0 /*37*/].f_9.f_4 == 1));
			}
			else if (iVar3 == iVar1)
			{
				return ((iVar2 <= iVar0 && Local_923[iParam0 /*37*/].f_9.f_4 == 2) || (iVar2 >= iVar0 && Local_923[iParam0 /*37*/].f_9.f_4 == 3));
			}
		}
		iVar4++;
	}
	return 0;
}

void func_312()//Position - 0xD14C
{
	func_320();
	func_317();
	func_313();
}

void func_313()//Position - 0xD160
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (Local_821[Local_162.f_178 /*9*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_315();
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_314(Local_858[Local_162.f_178 /*16*/].f_4);
	}
	if (bVar2)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_162.f_178.f_3 + Local_162.f_59[Local_821[Local_162.f_178 /*9*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_858[Local_162.f_178 /*16*/].f_4;
		Local_858[Local_162.f_178 /*16*/].f_5[Local_162.f_307 /*5*/] = NETWORK::GET_NETWORK_TIME();
		Local_858[Local_162.f_178 /*16*/].f_5[Local_162.f_307 /*5*/].f_3 = uVar1;
		Local_858[Local_162.f_178 /*16*/].f_5[Local_162.f_307 /*5*/].f_4 = Local_821[Local_162.f_178 /*9*/].f_5;
		Local_858[Local_162.f_178 /*16*/].f_5[Local_162.f_307 /*5*/].f_1 = { Local_162.f_204[Local_162.f_178 /*19*/] };
		Local_858[Local_162.f_178 /*16*/].f_4 = uVar1;
		Local_162.f_178.f_3 = NETWORK::GET_NETWORK_TIME();
		Local_162.f_307++;
		if (Local_162.f_307 >= 2)
		{
			Local_162.f_307 = 0;
		}
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 50, 100);
	}
}

int func_314(int iParam0)//Position - 0xD277
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var0 = { func_190(func_73(12, 8)) };
	Var2 = { func_190(func_73(0, 0)) };
	switch (iParam0)
	{
		case 0:
			if (func_261(Local_162.f_204[Local_162.f_178 /*19*/].f_1, (Var2.f_1 - 0.0001f), (Var2.f_1 + 0.0001f), 0))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_261(Local_162.f_204[Local_162.f_178 /*19*/].f_1, (Var0.f_1 - 0.0001f), (Var0.f_1 + 0.0001f), 0))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_261(Local_162.f_204[Local_162.f_178 /*19*/], (Var2.f_0 - 0.0001f), (Var2.f_0 + 0.0001f), 0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_261(Local_162.f_204[Local_162.f_178 /*19*/], (Var0.f_0 - 0.0001f), (Var0.f_0 + 0.0001f), 0))
			{
				return 0;
			}
			break;
	}
	func_187(Local_858[Local_162.f_178 /*16*/], &iVar4, &iVar5);
	func_187(Local_858[Local_162.f_178 /*16*/].f_1, &iVar6, &iVar7);
	if (Local_858[Local_162.f_178 /*16*/].f_2 + func_186(Local_162.f_178)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar5 != iVar7)
		{
			if (iParam0 == 2 || iParam0 == 3)
			{
				return 0;
			}
		}
		else if (iVar4 != iVar6)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_315()//Position - 0xD3E6
{
	int iVar0;
	
	if (func_316())
	{
		return -1;
	}
	iVar0 = 229;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 203;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		return 8;
	}
	return -1;
}

int func_316()//Position - 0xD419
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (Local_821[Local_162.f_178 /*9*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_317()//Position - 0xD43E
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_319();
	bVar1 = func_318(Local_162.f_178, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_858[Local_162.f_178 /*16*/].f_4 = 0;
				break;
			
			case 5:
				Local_858[Local_162.f_178 /*16*/].f_4 = 1;
				break;
			
			case 6:
				Local_858[Local_162.f_178 /*16*/].f_4 = 2;
				break;
			
			case 7:
				Local_858[Local_162.f_178 /*16*/].f_4 = 3;
				break;
			}
	}
}

int func_318(int iParam0, int iParam1)//Position - 0xD4B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_187(Local_858[Local_162.f_178 /*16*/], &iVar0, &iVar1);
	func_187(Local_858[Local_162.f_178 /*16*/].f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_858[Local_162.f_178 /*16*/].f_2 + func_186(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_319()//Position - 0xD576
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (func_316())
	{
		return -1;
	}
	iVar0 = 365;
	iVar1 = 365;
	iVar2 = 365;
	iVar3 = 365;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 188;
		iVar1 = 187;
		iVar2 = 189;
		iVar3 = 190;
	}
	fVar4 = 0f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar4 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	}
	if (fVar4 < -0.65f || (iVar0 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0)))
	{
		return 4;
	}
	if (fVar4 > 0.65f || (iVar1 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1)))
	{
		return 5;
	}
	fVar5 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
	if (fVar5 < -0.65f || (iVar2 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2)))
	{
		return 6;
	}
	if (fVar5 > 0.65f || (iVar3 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar3)))
	{
		return 7;
	}
	return -1;
}

void func_320()//Position - 0xD670
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_321();
	bVar1 = false;
	if (((!((Local_858[Local_162.f_178 /*16*/].f_2 + func_186(Local_162.f_178)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_162.f_141, 1)) && NETWORK::GET_NETWORK_TIME() < Local_858[Local_162.f_178 /*16*/].f_2 + 100) && Local_858[Local_162.f_178 /*16*/].f_3 != iVar0) && !BitTest(Local_162.f_141, 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_187(Local_858[Local_162.f_178 /*16*/].f_1, &iVar2, &iVar3);
		func_187(Local_858[Local_162.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	else
	{
		func_187(Local_858[Local_162.f_178 /*16*/], &iVar2, &iVar3);
		func_187(Local_858[Local_162.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_858[Local_162.f_178 /*16*/].f_2 + func_186(Local_162.f_178)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_162.f_141, 1)) || bVar1)
		{
			if (bVar1 || !BitTest(Local_162.f_141, 5))
			{
				MISC::SET_BIT(&(Local_162.f_141), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_858[Local_162.f_178 /*16*/] = func_73(iVar2, iVar3);
			Local_858[Local_162.f_178 /*16*/].f_1 = func_73(iVar4, iVar5);
			if (Local_162.f_178.f_2 > 0)
			{
				Local_821[Local_162.f_178 /*9*/].f_1 = 0.75f;
				Local_162.f_178.f_2 = (Local_162.f_178.f_2 - 1);
			}
			else if (!func_261(Local_821[Local_162.f_178 /*9*/].f_1, (1f - 0.0001f), (1f + 0.0001f), 0))
			{
				Local_821[Local_162.f_178 /*9*/].f_1 = 1f;
			}
			Local_858[Local_162.f_178 /*16*/].f_2 = NETWORK::GET_NETWORK_TIME();
			if (iVar8 > 0)
			{
				Local_858[Local_162.f_178 /*16*/].f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_858[Local_162.f_178 /*16*/].f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_858[Local_162.f_178 /*16*/].f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_858[Local_162.f_178 /*16*/].f_4 = 1;
			}
			MISC::CLEAR_BIT(&(Local_162.f_141), 1);
			MISC::CLEAR_BIT(&(Local_162.f_141), 0);
			Local_858[Local_162.f_178 /*16*/].f_3 = iVar0;
			if (!BitTest(Local_162.f_141, 5))
			{
				MISC::SET_BIT(&(Local_162.f_141), 5);
			}
		}
	}
}

int func_321()//Position - 0xD948
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (func_316())
	{
		return -1;
	}
	if (!BitTest(Local_162.f_141, 5))
	{
		return func_299(Local_821[Local_162.f_178 /*9*/].f_6);
	}
	iVar0 = 365;
	iVar1 = 365;
	iVar2 = 365;
	iVar3 = 365;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 365;
		iVar1 = 365;
		iVar2 = 365;
		iVar3 = 365;
	}
	fVar4 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	if (fVar4 < -0.65f || (iVar0 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0)))
	{
		return 0;
	}
	if (fVar4 > 0.65f || (iVar1 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1)))
	{
		return 1;
	}
	fVar5 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
	if (fVar5 < -0.65f || (iVar2 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2)))
	{
		return 2;
	}
	if (fVar5 > 0.65f || (iVar3 != 365 && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar3)))
	{
		return 3;
	}
	return -1;
}

void func_322()//Position - 0xDA56
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_172("Ambience", &(Local_162.f_428), func_110(-1f, -1f), 0);
	func_284();
	func_276();
	func_174();
	func_323();
	if (NETWORK::GET_NETWORK_TIME() < Local_615.f_146)
	{
		return;
	}
	if (!BitTest(Local_162.f_417, 1))
	{
		MISC::SET_BIT(&(Local_162.f_417), 1);
		func_153("SCGW_H_MOVE", 7500, 0);
	}
	func_171(4);
	func_18(func_19(1));
	func_15(7);
}

void func_323()//Position - 0xDAFC
{
	func_126();
	func_191();
	func_185();
	if ((Local_615.f_146 - NETWORK::GET_NETWORK_TIME()) <= 4500)
	{
		func_217();
	}
	func_201();
	func_178();
	func_106();
	func_105();
}

void func_324()//Position - 0xDB34
{
	int iVar0;
	
	func_329();
	func_174();
	if (Local_615.f_145 <= 2)
	{
		return;
	}
	func_327();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_162.f_178 && Local_923[iVar0 /*37*/].f_25)
		{
			func_325(iVar0);
		}
		iVar0++;
	}
	func_171(3);
	func_15(6);
}

void func_325(int iParam0)//Position - 0xDB8E
{
	int iVar0;
	int iVar1;
	
	func_326(iParam0);
	Local_923[iParam0 /*37*/].f_2 = 8;
	func_233(iParam0, 2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_923[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/] = -2147483647;
		Local_923[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1 = -1f;
		Local_923[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_923[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_3 = -1;
		Local_923[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_162.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { func_110(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_162.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_162.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_162.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_162.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_162.f_437 = -2147483647;
	Local_162.f_439 = { func_110(0f, 0f) };
	MISC::SET_BIT(&(Local_162.f_142[iParam0]), 1);
	MISC::SET_BIT(&(Local_162.f_142[iParam0]), 0);
	MISC::CLEAR_BIT(&(Local_162.f_142[iParam0]), 2);
	MISC::CLEAR_BIT(&(Local_162.f_142[iParam0]), 5);
	func_98(&(Local_162.f_316));
	Local_923[iParam0 /*37*/].f_4 = -2147483647;
	Local_923[iParam0 /*37*/].f_1 = 1f;
	Local_162.f_178.f_2 = 0;
	Local_162.f_308 = 0;
	Local_162.f_307 = 0;
	Local_162.f_429 = 0;
	Local_923[iParam0 /*37*/].f_5 = 0;
}

void func_326(int iParam0)//Position - 0xDD47
{
	Local_923[iParam0 /*37*/].f_9 = func_73(Local_162.f_9[Local_923[iParam0 /*37*/].f_6 /*3*/][0], Local_162.f_9[Local_923[iParam0 /*37*/].f_6 /*3*/][1]);
	Local_923[iParam0 /*37*/].f_9.f_1 = Local_923[iParam0 /*37*/].f_9;
	if (Local_162.f_9[Local_923[iParam0 /*37*/].f_6 /*3*/][1] == 0)
	{
		Local_923[iParam0 /*37*/].f_9.f_4 = 1;
	}
	else
	{
		Local_923[iParam0 /*37*/].f_9.f_4 = 0;
	}
}

void func_327()//Position - 0xDDC5
{
	int iVar0;
	int iVar1;
	var uVar2[4];
	
	func_328();
	Local_821[Local_162.f_178 /*9*/].f_2 = 8;
	func_239(2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_858[Local_162.f_178 /*16*/].f_5[iVar0 /*5*/] = -2147483647;
		Local_858[Local_162.f_178 /*16*/].f_5[iVar0 /*5*/].f_1 = -1f;
		Local_858[Local_162.f_178 /*16*/].f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_858[Local_162.f_178 /*16*/].f_5[iVar0 /*5*/].f_3 = -1;
		Local_858[Local_162.f_178 /*16*/].f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_162.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { func_110(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_162.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_162.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_162.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_162.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_162.f_437 = -2147483647;
	Local_162.f_439 = { func_110(0f, 0f) };
	MISC::SET_BIT(&(Local_162.f_141), 1);
	MISC::SET_BIT(&(Local_162.f_141), 0);
	MISC::CLEAR_BIT(&(Local_162.f_141), 2);
	MISC::CLEAR_BIT(&(Local_162.f_141), 5);
	func_98(&(Local_162.f_316));
	Local_821[Local_162.f_178 /*9*/].f_4 = -2147483647;
	Local_821[Local_162.f_178 /*9*/].f_1 = 1f;
	func_121(Local_821[Local_162.f_178 /*9*/].f_7, &uVar2);
	uVar2[3] = Local_821[Local_162.f_178 /*9*/].f_6;
	Local_821[Local_162.f_178 /*9*/].f_7 = func_133(&uVar2);
	Local_162.f_178.f_2 = 0;
	Local_162.f_308 = 0;
	Local_162.f_307 = 0;
	Local_162.f_429 = 0;
	Local_821[Local_162.f_178 /*9*/].f_5 = 0;
}

void func_328()//Position - 0xDFA9
{
	Local_858[Local_162.f_178 /*16*/] = func_73(Local_162.f_9[Local_821[Local_162.f_178 /*9*/].f_6 /*3*/][0], Local_162.f_9[Local_821[Local_162.f_178 /*9*/].f_6 /*3*/][1]);
	Local_858[Local_162.f_178 /*16*/].f_1 = Local_858[Local_162.f_178 /*16*/];
	if (Local_162.f_9[Local_821[Local_162.f_178 /*9*/].f_6 /*3*/][1] == 0)
	{
		Local_858[Local_162.f_178 /*16*/].f_4 = 1;
	}
	else
	{
		Local_858[Local_162.f_178 /*16*/].f_4 = 0;
	}
}

void func_329()//Position - 0xE02D
{
	func_126();
	func_191();
	func_184(Local_162.f_107.f_25, 153);
	func_178();
	func_106();
	func_105();
}

void func_330()//Position - 0xE057
{
	func_329();
	func_174();
	if (Local_615.f_145 <= 1)
	{
		return;
	}
	Local_140.f_16 = Local_162.f_148;
	func_15(5);
}

void func_331()//Position - 0xE080
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_335();
	iVar0 = 199;
	iVar1 = 225;
	iVar2 = 193;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 201;
		iVar1 = 214;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_162.f_441 + 500)
	{
		if (Local_821[Local_162.f_178 /*9*/] != 1)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
			{
				func_16();
				func_166(1);
				func_239(1);
				func_135("Frontend_Ready");
				Local_162.f_441 = NETWORK::GET_NETWORK_TIME();
			}
			if (Local_162.f_452)
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2))
				{
					iVar3 = 0;
					while (iVar3 <= 3)
					{
						if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)) && !Local_923[iVar3 /*37*/].f_25)
						{
							Local_923[iVar3 /*37*/].f_6 = func_334();
							Local_923[iVar3 /*37*/].f_25 = 1;
							Local_923[iVar3 /*37*/] = 1;
						}
						else
						{
							iVar3++;
						}
					}
				}
			}
		}
		if (Local_821[Local_162.f_178 /*9*/] == 1)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
			{
				func_16();
				func_239(0);
				func_135("Frontend_Unready");
				Local_162.f_441 = NETWORK::GET_NETWORK_TIME();
			}
		}
	}
	func_333();
	if (Local_615.f_145 >= 2)
	{
		func_15(4);
		func_135("Frontend_Start_Game");
		func_332(1);
	}
}

void func_332(bool bParam0)//Position - 0xE1A0
{
	if (bParam0)
	{
		StringCopy(&Local_140, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_140, "Invade and Persuade II.", 64);
	}
	Local_140.f_16 = 0;
	Local_140.f_17 = 0;
	Local_140.f_18 = 0;
	Local_140.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_140.f_20 = 0;
	Local_140.f_21 = 0;
}

void func_333()//Position - 0xE1E1
{
	struct<3> Var0;
	
	MISC::SET_BIT(&(Local_162.f_417), 0);
	if (Local_821[Local_162.f_178 /*9*/] == 1)
	{
		StringCopy(&Var0, "SCGW_H_RDY1", 24);
	}
	else
	{
		StringCopy(&Var0, "SCGW_H_RDY0", 24);
		if (Local_162.f_178.f_1 && Local_162.f_452)
		{
			StringConCat(&Var0, "_H", 24);
		}
		if (func_151())
		{
			StringConCat(&Var0, "_PS4", 24);
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		StringConCat(&Var0, "_PC", 24);
	}
	if (func_130(&Var0))
	{
		return;
	}
	func_16();
	func_128(&Var0);
}

int func_334()//Position - 0xE263
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Local_821[iVar0 /*9*/].f_6 == iVar1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar2 = false;
			}
			if (Local_923[iVar0 /*37*/].f_6 == iVar1)
			{
				bVar2 = false;
			}
			iVar0++;
		}
		if (bVar2)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_335()//Position - 0xE2CF
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	
	func_126();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_141(iVar0, 0);
		if (Local_162.f_149[iVar0] != -1 && Local_821[Local_162.f_149[iVar0] /*9*/] == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Local_162.f_148)
	{
		if (Local_821[Local_162.f_178 /*9*/] == 1)
		{
			StringCopy(&cVar2, "SCGW_WFP", 16);
		}
		else
		{
			StringCopy(&cVar2, "SCGW_PS", 16);
		}
		iVar6 = SYSTEM::ROUND((SYSTEM::SIN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.5058f)) * 255f));
		if (iVar6 > 51)
		{
			iVar6 = 255;
		}
		else
		{
			iVar6 = 0;
		}
		HUD::SET_TEXT_SCALE(0.65f, 0.65f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, iVar6);
		HUD::SET_TEXT_DROP_SHADOW();
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar2);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_124(0.5f), 0.885f, 0);
	}
	func_106();
	func_105();
}

void func_336()//Position - 0xE3BA
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_126();
	GRAPHICS::DRAW_BINK_MOVIE(Local_162.f_427, 0.5f, 0.5f, (1f * fLocal_137), 1f, 0f, 255, 255, 255, 255);
	if (GRAPHICS::GET_BINK_MOVIE_TIME(Local_162.f_427) >= 30f && !BitTest(Local_162.f_141, 3))
	{
		MISC::SET_BIT(&(Local_162.f_141), 3);
		func_18(func_19(0));
	}
	if (GRAPHICS::GET_BINK_MOVIE_TIME(Local_162.f_427) >= 99f)
	{
		GRAPHICS::STOP_BINK_MOVIE(Local_162.f_427);
		GRAPHICS::RELEASE_BINK_MOVIE(Local_162.f_427);
		func_15(3);
		Local_162.f_154[Local_821[Local_162.f_178 /*9*/].f_6] = NETWORK::GET_NETWORK_TIME();
		func_171(2);
	}
	func_106();
	func_105();
}

void func_337()//Position - 0xE497
{
	if (!func_338())
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGrid", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGrid"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerYellow", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerYellow"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerPurple", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerPurple"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerGreen", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerGreen"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerBlue", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerBlue"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridTiles", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridTiles"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridHUD", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridHUD"))
	{
		return;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("SCGW", 3);
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("SCGW", 3))
	{
		return;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_TW", false, -1))
	{
		return;
	}
	func_15(2);
	GRAPHICS::PLAY_BINK_MOVIE(Local_162.f_427);
	GRAPHICS::SET_BINK_SHOULD_SKIP(Local_162.f_427, true);
	func_135("Frontend_Degenatron_Screen");
}

bool func_338()//Position - 0xE58C
{
	return ((((((func_339(0) && func_339(6)) && func_339(1)) && func_339(3)) && func_339(4)) && func_339(5)) && func_339(7));
}

int func_339(int iParam0)//Position - 0xE5D5
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_111(iParam0), false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_111(iParam0)))
	{
		return 0;
	}
	return 1;
}

void func_340()//Position - 0xE5FB
{
	int iVar0;
	int iVar1;
	
	if (Local_615.f_145 > 1)
	{
		if (func_358(PLAYER::PLAYER_ID()))
		{
			Local_162.f_443.f_4 = 0;
			Local_162.f_443.f_3 = 0;
			func_357(&(Local_162.f_443), 11);
		}
		func_15(11);
		return;
	}
	func_348();
	func_347(0);
	func_346();
	func_345();
	func_344();
	func_343();
	func_342();
	func_341();
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_162.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_162.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_162.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_162.f_154[iVar0] = -2147483647;
		iVar0++;
	}
	Local_162.f_427 = GRAPHICS::SET_BINK_MOVIE("DegenSting_StreetCrime_1920x1080_auto");
	func_15(1);
}

void func_341()//Position - 0xE6DF
{
	Local_162.f_59[0 /*5*/] = "";
	Local_162.f_59[0 /*5*/].f_2 = 0;
	Local_162.f_59[0 /*5*/].f_4 = 0;
	Local_162.f_59[0 /*5*/].f_3 = 0;
	Local_162.f_59[0 /*5*/].f_1 = 0;
	Local_162.f_59[1 /*5*/] = "gun_";
	Local_162.f_59[1 /*5*/].f_2 = 2;
	Local_162.f_59[1 /*5*/].f_4 = 2;
	Local_162.f_59[1 /*5*/].f_3 = 700;
	Local_162.f_59[1 /*5*/].f_1 = 300;
	Local_162.f_59[2 /*5*/] = "uzi_";
	Local_162.f_59[2 /*5*/].f_2 = 1;
	Local_162.f_59[2 /*5*/].f_4 = 1;
	Local_162.f_59[2 /*5*/].f_3 = 325;
	Local_162.f_59[2 /*5*/].f_1 = 300;
	Local_162.f_59[3 /*5*/] = "rifle_";
	Local_162.f_59[3 /*5*/].f_2 = 3;
	Local_162.f_59[3 /*5*/].f_4 = 2;
	Local_162.f_59[3 /*5*/].f_3 = 650;
	Local_162.f_59[3 /*5*/].f_1 = 200;
	Local_162.f_59[4 /*5*/] = "rocket_";
	Local_162.f_59[4 /*5*/].f_2 = 5;
	Local_162.f_59[4 /*5*/].f_4 = 8;
	Local_162.f_59[4 /*5*/].f_3 = 2000;
	Local_162.f_59[4 /*5*/].f_1 = 525;
	Local_162.f_59[5 /*5*/] = "shotgun_";
	Local_162.f_59[5 /*5*/].f_2 = 2;
	Local_162.f_59[5 /*5*/].f_4 = 4;
	Local_162.f_59[5 /*5*/].f_3 = 1000;
	Local_162.f_59[5 /*5*/].f_1 = 300;
}

void func_342()//Position - 0xE82D
{
	Local_162.f_90[0 /*2*/] = "heart_anim_";
	Local_162.f_90[0 /*2*/].f_1 = 10;
	Local_162.f_90[1 /*2*/] = "speed_anim_";
	Local_162.f_90[1 /*2*/].f_1 = 10;
	Local_162.f_90[2 /*2*/] = "phone_anim_";
	Local_162.f_90[2 /*2*/].f_1 = 10;
	Local_162.f_90[3 /*2*/] = "icon_pistol";
	Local_162.f_90[3 /*2*/].f_1 = 0;
	Local_162.f_90[4 /*2*/] = "icon_uzi";
	Local_162.f_90[4 /*2*/].f_1 = 0;
	Local_162.f_90[5 /*2*/] = "icon_rifle";
	Local_162.f_90[5 /*2*/].f_1 = 0;
	Local_162.f_90[6 /*2*/] = "icon_rocket_launcher";
	Local_162.f_90[6 /*2*/].f_1 = 0;
	Local_162.f_90[7 /*2*/] = "icon_shotgun";
	Local_162.f_90[7 /*2*/].f_1 = 0;
}

void func_343()//Position - 0xE8E0
{
	Local_162.f_22[0 /*4*/] = "ice_cream_van_";
	Local_162.f_22[0 /*4*/].f_1 = 1;
	Local_162.f_22[0 /*4*/].f_2 = 0.033333f;
	Local_162.f_22[0 /*4*/].f_2.f_1 = 0.02963f;
	Local_162.f_22[1 /*4*/] = "ambulance_";
	Local_162.f_22[1 /*4*/].f_1 = 2;
	Local_162.f_22[1 /*4*/].f_2 = 0.035417f;
	Local_162.f_22[1 /*4*/].f_2.f_1 = 0.02963f;
	Local_162.f_22[2 /*4*/] = "police_";
	Local_162.f_22[2 /*4*/].f_1 = 2;
	Local_162.f_22[2 /*4*/].f_2 = 0.033333f;
	Local_162.f_22[2 /*4*/].f_2.f_1 = 0.025926f;
	Local_162.f_22[3 /*4*/] = "fire_truck_";
	Local_162.f_22[3 /*4*/].f_1 = 2;
	Local_162.f_22[3 /*4*/].f_2 = 0.045833f;
	Local_162.f_22[3 /*4*/].f_2.f_1 = 0.02963f;
	Local_162.f_22[4 /*4*/] = "tank_";
	Local_162.f_22[4 /*4*/].f_1 = 1;
	Local_162.f_22[4 /*4*/].f_2 = 0.041667f;
	Local_162.f_22[4 /*4*/].f_2.f_1 = 0.025926f;
	Local_162.f_22[5 /*4*/] = "gang_car_green";
	Local_162.f_22[5 /*4*/].f_1 = 1;
	Local_162.f_22[5 /*4*/].f_2 = 0.033333f;
	Local_162.f_22[5 /*4*/].f_2.f_1 = 0.059259f;
	Local_162.f_22[6 /*4*/] = "gang_car_purple";
	Local_162.f_22[6 /*4*/].f_1 = 1;
	Local_162.f_22[6 /*4*/].f_2 = 0.033333f;
	Local_162.f_22[6 /*4*/].f_2.f_1 = 0.059259f;
	Local_162.f_22[7 /*4*/] = "gang_car_yellow";
	Local_162.f_22[7 /*4*/].f_1 = 1;
	Local_162.f_22[7 /*4*/].f_2 = 0.033333f;
	Local_162.f_22[7 /*4*/].f_2.f_1 = 0.059259f;
	Local_162.f_22[8 /*4*/] = "gang_car_blue";
	Local_162.f_22[8 /*4*/].f_1 = 1;
	Local_162.f_22[8 /*4*/].f_2 = 0.033333f;
	Local_162.f_22[8 /*4*/].f_2.f_1 = 0.059259f;
}

void func_344()//Position - 0xEAB7
{
	Local_162.f_422[0] = "green" /* GXT: Green */;
	Local_162.f_422[1] = "purple" /* GXT: Schafter Purple */;
	Local_162.f_422[2] = "yellow" /* GXT: Yellow */;
	Local_162.f_422[3] = "blue" /* GXT: Blue */;
}

void func_345()//Position - 0xEAEF
{
	func_216(&(Local_162.f_107[0 /*4*/]), 78, 187, 30, 255);
	func_216(&(Local_162.f_107[1 /*4*/]), 171, 0, 255, 255);
	func_216(&(Local_162.f_107[2 /*4*/]), 255, 228, 0, 255);
	func_216(&(Local_162.f_107[3 /*4*/]), 35, 92, 255, 255);
	func_216(&(Local_162.f_107.f_29), 221, 21, 10, 255);
	func_216(&(Local_162.f_107.f_17), 255, 255, 255, 255);
	func_216(&(Local_162.f_107.f_21), 55, 55, 55, 255);
	func_216(&(Local_162.f_107.f_25), 0, 0, 0, 255);
}

void func_346()//Position - 0xEB7A
{
	Local_162[0 /*2*/] = { func_110(0.170833f, (0.909259f - 0.019444f)) };
	Local_162[1 /*2*/] = { func_110(0.170833f, (0.109259f + 0.019444f)) };
	Local_162[2 /*2*/] = { func_110(0.829167f, (0.109259f + 0.019444f)) };
	Local_162[3 /*2*/] = { func_110(0.829167f, (0.909259f - 0.019444f)) };
	Local_162.f_9[0 /*3*/][0] = 1;
	Local_162.f_9[0 /*3*/][1] = 2;
	Local_162.f_9[1 /*3*/][0] = 11;
	Local_162.f_9[1 /*3*/][1] = 2;
	Local_162.f_9[2 /*3*/][0] = 1;
	Local_162.f_9[2 /*3*/][1] = 6;
	Local_162.f_9[3 /*3*/][0] = 11;
	Local_162.f_9[3 /*3*/][1] = 6;
}

void func_347(int iParam0)//Position - 0xEC48
{
	Local_1072.f_137 = iParam0;
	func_216(&(Local_1072[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_1072[1 /*17*/].f_6 = 1000;
	Local_1072[1 /*17*/].f_7 = 10000;
	Local_1072[2 /*17*/].f_1 = 1;
	Local_1072[2 /*17*/].f_8 = 40;
	func_216(&(Local_1072[2 /*17*/].f_9), 0, 0, 0, 0);
	func_216(&(Local_1072[3 /*17*/].f_9), 255, 255, 255, 127);
	func_216(&(Local_1072[4 /*17*/].f_9), 255, 255, 255, 127);
	func_216(&(Local_1072[5 /*17*/].f_9), 255, 255, 255, 127);
	func_216(&(Local_1072[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_1072.f_137)
	{
		case 2:
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 255, 255, 30);
			func_216(&(Local_1072[1 /*17*/].f_9), 255, 255, 255, 20);
			func_216(&(Local_1072[2 /*17*/].f_13), 0, 0, 0, 30);
			func_216(&(Local_1072[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_1072[0 /*17*/] = 1;
			Local_1072[6 /*17*/] = 1;
			Local_1072[1 /*17*/] = 1;
			Local_1072[2 /*17*/] = 1;
			Local_1072[3 /*17*/] = 1;
			break;
		
		case 3:
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 255, 255, 30);
			func_216(&(Local_1072[1 /*17*/].f_9), 255, 255, 255, 20);
			func_216(&(Local_1072[2 /*17*/].f_13), 0, 0, 0, 30);
			func_216(&(Local_1072[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_1072[0 /*17*/] = 1;
			Local_1072[6 /*17*/] = 1;
			Local_1072[1 /*17*/] = 1;
			Local_1072[2 /*17*/] = 1;
			Local_1072[4 /*17*/] = 1;
			break;
		
		case 4:
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 255, 255, 30);
			func_216(&(Local_1072[1 /*17*/].f_9), 255, 255, 255, 20);
			func_216(&(Local_1072[2 /*17*/].f_13), 0, 0, 0, 30);
			func_216(&(Local_1072[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_1072[0 /*17*/] = 1;
			Local_1072[6 /*17*/] = 1;
			Local_1072[1 /*17*/] = 1;
			Local_1072[2 /*17*/] = 1;
			Local_1072[5 /*17*/] = 1;
			break;
		
		case 1:
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 255, 255, 30);
			func_216(&(Local_1072[1 /*17*/].f_9), 255, 255, 255, 20);
			func_216(&(Local_1072[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_1072[0 /*17*/] = 1;
			Local_1072[6 /*17*/] = 1;
			Local_1072[1 /*17*/] = 1;
			Local_1072[2 /*17*/] = 1;
			Local_1072[3 /*17*/] = 1;
			break;
		
		case 0:
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 255, 255, 30);
			func_216(&(Local_1072[1 /*17*/].f_9), 255, 255, 255, 20);
			func_216(&(Local_1072[2 /*17*/].f_13), 0, 0, 0, 10);
			func_216(&(Local_1072[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_1072[0 /*17*/] = 1;
			Local_1072[6 /*17*/] = 1;
			Local_1072[1 /*17*/] = 1;
			Local_1072[2 /*17*/] = 1;
			Local_1072[5 /*17*/] = 1;
			break;
		
		case 6:
			func_216(&(Local_1072[1 /*17*/].f_9), 255, 255, 255, 10);
			func_216(&(Local_1072[2 /*17*/].f_13), 0, 0, 0, 8);
			func_216(&(Local_1072[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_1072[0 /*17*/] = 1;
			Local_1072[1 /*17*/] = 1;
			Local_1072[2 /*17*/] = 1;
			Local_1072[7 /*17*/] = 1;
			break;
		
		case 7:
			func_216(&(Local_1072[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_1072[2 /*17*/] = 1;
			Local_1072[0 /*17*/] = 1;
			func_216(&(Local_1072[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_1072[3 /*17*/] = 1;
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_1072[6 /*17*/] = 1;
			break;
		
		case 5:
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 255, 255, 30);
			func_216(&(Local_1072[1 /*17*/].f_9), 255, 255, 255, 20);
			func_216(&(Local_1072[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_1072[0 /*17*/] = 1;
			Local_1072[6 /*17*/] = 1;
			Local_1072[1 /*17*/] = 1;
			Local_1072[2 /*17*/] = 1;
			Local_1072[3 /*17*/] = 1;
			break;
		
		case 8:
			Local_1072[1 /*17*/] = 0;
			Local_1072[2 /*17*/] = 0;
			Local_1072[0 /*17*/] = 1;
			func_216(&(Local_1072[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_1072[6 /*17*/] = 1;
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_1072[7 /*17*/] = 1;
			func_216(&(Local_1072[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 9:
			Local_1072[1 /*17*/] = 0;
			Local_1072[2 /*17*/] = 0;
			Local_1072[0 /*17*/] = 1;
			func_216(&(Local_1072[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_1072[6 /*17*/] = 1;
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_1072[7 /*17*/] = 1;
			func_216(&(Local_1072[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 10:
			Local_1072[1 /*17*/] = 0;
			Local_1072[2 /*17*/] = 0;
			Local_1072[0 /*17*/] = 1;
			func_216(&(Local_1072[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_1072[6 /*17*/] = 1;
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_1072[7 /*17*/] = 1;
			func_216(&(Local_1072[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 11:
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 255, 255, 15);
			func_216(&(Local_1072[1 /*17*/].f_9), 255, 255, 255, 10);
			func_216(&(Local_1072[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_1072[0 /*17*/] = 1;
			Local_1072[6 /*17*/] = 1;
			Local_1072[1 /*17*/] = 1;
			Local_1072[3 /*17*/] = 1;
			break;
		
		case 12:
			func_216(&(Local_1072[1 /*17*/].f_9), 255, 255, 255, 3);
			func_216(&(Local_1072[2 /*17*/].f_13), 0, 0, 0, 15);
			func_216(&(Local_1072[0 /*17*/].f_9), 0, 0, 255, 90);
			func_216(&(Local_1072[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_1072[1 /*17*/] = 1;
			Local_1072[2 /*17*/] = 0;
			Local_1072[0 /*17*/] = 1;
			Local_1072[6 /*17*/] = 1;
			break;
	}
}

void func_348()//Position - 0xF21C
{
	MISC::SET_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873), 16);
	Global_4718592.f_176767 = 1;
	Global_1663020 = 1;
	func_350();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_22(PLAYER::PLAYER_ID(), 0, 0, 0);
		func_349();
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	func_40(1, 0, 1, 0);
	func_21(0, 1, -1);
	func_21(1, 1, -1);
	func_21(2, 1, -1);
	func_21(3, 1, -1);
	func_21(4, 1, -1);
	func_21(6, 1, -1);
	func_21(7, 1, -1);
	func_21(8, 1, -1);
	func_21(9, 1, -1);
	func_21(10, 1, -1);
	func_21(11, 1, -1);
	func_21(12, 1, -1);
	func_21(13, 1, -1);
	func_21(14, 1, -1);
	func_21(15, 1, -1);
	func_21(16, 1, -1);
}

void func_349()//Position - 0xF2F1
{
	if (!Global_2672741.f_951.f_10)
	{
		Global_2672741.f_951.f_10 = 1;
	}
}

void func_350()//Position - 0xF310
{
	if (func_356() || func_355())
	{
		func_354();
		func_351();
	}
}

void func_351()//Position - 0xF331
{
	if ((!func_353() && !func_352()) && Global_2685248)
	{
		Global_4718592.f_126144 = 0;
	}
}

bool func_352()//Position - 0xF35F
{
	return Global_2684312.f_691;
}

bool func_353()//Position - 0xF36E
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_192 != 0;
}

void func_354()//Position - 0xF385
{
	Global_2684312.f_756 = 1;
}

var func_355()//Position - 0xF395
{
	return Global_2684312.f_735;
}

var func_356()//Position - 0xF3A4
{
	return BitTest(Global_2684312.f_2, 11);
}

void func_357(var uParam0, int iParam1)//Position - 0xF3B5
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
		if (BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_436, 1))
		{
			MISC::CLEAR_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_436), 1);
			bVar9 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_99(&(uParam0->f_1)))
	{
		func_96(&(uParam0->f_1), 0, 0);
	}
	bVar10 = true;
	if (*uParam0 == iParam1 && !bVar9)
	{
		if (func_99(&(uParam0->f_1)) && !func_95(&(uParam0->f_1), 1000, 0))
		{
			bVar10 = false;
		}
		else
		{
			func_98(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_98(&(uParam0->f_1));
	}
	if (bVar10)
	{
		iVar11 = func_57(PLAYER::PLAYER_ID());
		if (iVar11 != -1)
		{
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, iVar11, Var0.f_0);
			uParam0->f_5 = 1;
		}
	}
}

int func_358(int iParam0)//Position - 0xF4DB
{
	if (iParam0 != func_14())
	{
		if (func_63(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_47(Global_2657921[iParam0 /*463*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

void func_359()//Position - 0xF522
{
	bool bVar0;
	int iVar1;
	
	if (Global_1927705.f_1 != 0)
	{
		func_166(0);
	}
	Local_162.f_411 = (Local_162.f_411 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	Local_162.f_412 = SYSTEM::FLOOR((IntToFloat(Local_162.f_411) / 66f));
	Local_162.f_411 = (Local_162.f_411 - SYSTEM::ROUND((66f * IntToFloat(Local_162.f_412))));
	Local_162.f_413 = (Local_162.f_413 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	Local_162.f_414 = SYSTEM::FLOOR((IntToFloat(Local_162.f_413) / (66f * 3f)));
	Local_162.f_413 = (Local_162.f_413 - SYSTEM::ROUND(((66f * 3f) * IntToFloat(Local_162.f_414))));
	Local_162.f_311 = (Local_162.f_311 + Local_162.f_412);
	Local_162.f_416 = (Local_162.f_416 + Local_162.f_414);
	if (Local_162.f_416 >= 3)
	{
		Local_162.f_416 = 0;
	}
	func_401();
	func_400();
	func_399();
	if (Local_162.f_140 >= 11)
	{
		return;
	}
	if (!func_37())
	{
		func_15(11);
		return;
	}
	if (func_386())
	{
		if (func_358(PLAYER::PLAYER_ID()))
		{
			Local_162.f_443.f_4 = 0;
			Local_162.f_443.f_3 = 0;
			func_357(&(Local_162.f_443), 11);
		}
		func_15(11);
		return;
	}
	if ((Local_162.f_178.f_1 && !Local_615.f_164) && (Local_162.f_435 == -2147483647 || (NETWORK::GET_NETWORK_TIME() - Local_162.f_435) > 5000))
	{
		func_385(func_58(PLAYER::PLAYER_ID()), 0);
		Local_162.f_435 = NETWORK::GET_NETWORK_TIME();
	}
	func_376();
	MISC::CLEAR_BIT(&(Local_162.f_417), 0);
	bVar0 = Local_162.f_140 >= 2;
	func_360(bVar0);
	Local_162.f_452 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Local_162.f_178 != iVar1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			Local_162.f_452 = 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_162.f_452)
		{
			Local_923[iVar1 /*37*/].f_25 = 0;
			func_12(0);
		}
		if (Local_923[iVar1 /*37*/].f_25)
		{
			func_12(1);
		}
		iVar1++;
	}
}

void func_360(bool bParam0)//Position - 0xF739
{
	func_373();
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	if (MISC::IS_PC_VERSION())
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	func_372(1);
	func_371(4, -1);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_370();
	func_369();
	HUD::THEFEED_HIDE_THIS_FRAME();
	if (bParam0)
	{
		func_362(0);
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		}
	}
	func_361();
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
}

void func_361()//Position - 0xF7AB
{
	Global_23572.f_134 = 1;
}

void func_362(int iParam0)//Position - 0xF7B9
{
	if (func_368())
	{
		return;
	}
	if (!Global_20813.f_1 == 1)
	{
		if (func_367(0))
		{
			func_363(iParam0);
		}
		MISC::SET_BIT(&Global_8684, 2);
	}
}

void func_363(int iParam0)//Position - 0xF7EC
{
	if (func_368())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_366())
		{
			func_365(1, 1);
		}
		else
		{
			func_365(0, 0);
		}
	}
	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8684, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22166 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 30);
	}
	if (!func_364())
	{
		Global_20813.f_1 = 3;
	}
}

int func_364()//Position - 0xF876
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_365(bool bParam0, bool bParam1)//Position - 0xF89D
{
	if (bParam0)
	{
		if (func_367(0))
		{
			Global_21025 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20750);
			}
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
	else if (Global_21025 == 1)
	{
		Global_21025 = 0;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20750);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
}

bool func_366()//Position - 0xF911
{
	return BitTest(Global_1956030, 5);
}

int func_367(int iParam0)//Position - 0xF91F
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
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
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_368()//Position - 0xF976
{
	return BitTest(Global_1956030, 19);
}

void func_369()//Position - 0xF985
{
	Global_23572.f_6 = 1;
}

void func_370()//Position - 0xF993
{
	Global_1574754 = 1;
	StringCopy(&(Global_1574754.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574754.f_9 = MISC::GET_HASH_KEY(&(Global_1574754.f_1));
}

void func_371(int iParam0, int iParam1)//Position - 0xF9BC
{
	MISC::SET_BIT(&(Global_1668317.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1668317.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_372(int iParam0)//Position - 0xF9F2
{
	Global_1669875.f_1163 = iParam0;
}

void func_373()//Position - 0xFA03
{
	fLocal_136 = func_375();
	fLocal_137 = func_374();
}

float func_374()//Position - 0xFA17
{
	return (1.778f / fLocal_136);
}

float func_375()//Position - 0xFA27
{
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&uLocal_138, &iLocal_139);
	fLocal_136 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (MISC::IS_PC_VERSION())
	{
		if (fLocal_136 >= 4f)
		{
			fLocal_136 = (fLocal_136 / 3f);
		}
	}
	return fLocal_136;
}

void func_376()//Position - 0xFA54
{
	int iVar0;
	struct<4> Var1;
	struct<6> Var5;
	struct<5> Var11;
	struct<6> Var16;
	struct<16> Var22;
	struct<2> Var48;
	
	Var22.f_4 = 10;
	Var22.f_15 = 10;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) != 174)
		{
		}
		else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 4))
		{
			if (Var1.f_0 == -2013943038)
			{
				func_384(Var1.f_3);
			}
			else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var5, 6))
			{
				if (Var5.f_0 == 385697842)
				{
					if (Var5.f_4 < 0 || Var5.f_4 >= 4)
					{
					}
					else
					{
						func_382(Var5.f_3, Var5.f_4, Var5.f_5);
						Jump @325; //curOff = 147
						if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var11, 5))
						{
							if (Var11.f_0 == 743327592)
							{
								func_381(Var11.f_4, Var11.f_3);
							}
							else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var16, 6))
							{
								if (Var11.f_0 == 444085151)
								{
									func_380(Var16.f_3, Var16.f_4, Var16.f_5);
								}
								else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var22, 26))
								{
									if (Var22.f_0 == -2031658982)
									{
										if (Local_615.f_164)
										{
										}
										else if (Var22.f_3 != 0)
										{
										}
										else
										{
											func_378(&(Var22.f_4), &(Var22.f_15));
											Jump @325; //curOff = 288
											if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var48, 3))
											{
												if (Var48.f_0 == 296141736)
												{
													func_377(Var48.f_1);
												}
											}
										}
										iVar0++;
									}

void func_377(int iParam0)//Position - 0xFBA5
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	iVar1 = func_132(iVar0);
	if (iVar1 < 0 || iVar1 >= 10)
	{
		return;
	}
	Local_615.f_165[iVar1 /*3*/] = Local_821[iVar0 /*9*/].f_7;
	func_56(func_58(PLAYER::PLAYER_ID()), 0, iVar1, Local_615.f_165[iVar1 /*3*/], Local_615.f_165[iVar1 /*3*/].f_1, 0);
}

void func_378(var uParam0, var uParam1)//Position - 0xFC08
{
	int iVar0;
	
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam1)[iVar0] <= 0)
		{
			Local_615.f_165[iVar0 /*3*/].f_1 = (50 - iVar0 * 2);
			Local_615.f_165[iVar0 /*3*/] = func_379(iVar0);
			func_56(func_58(PLAYER::PLAYER_ID()), 0, iVar0, Local_615.f_165[iVar0 /*3*/], Local_615.f_165[iVar0 /*3*/].f_1, 0);
		}
		else
		{
			Local_615.f_165[iVar0 /*3*/].f_1 = (*uParam1)[iVar0];
			Local_615.f_165[iVar0 /*3*/] = (*uParam0)[iVar0];
		}
		iVar0++;
	}
	Local_615.f_164 = 1;
}

int func_379(int iParam0)//Position - 0xFCA8
{
	switch (iParam0)
	{
		case 0:
			return 69644;
		
		case 1:
			return 356361;
		
		case 2:
			return 533761;
		
		case 3:
			return 861443;
		
		case 4:
			return 21638;
		
		case 5:
			return 336649;
		
		case 6:
			return 586639;
		
		case 7:
			return 795403;
		
		case 8:
			return 38023;
		
		case 9:
			return 341123;
		
		default:
	}
	return 0;
}

void func_380(int iParam0, bool bParam1, bool bParam2)//Position - 0xFD39
{
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			func_167("Hit_By_Car", iParam0, &(Local_162.f_204[iParam0 /*19*/].f_6));
		}
		else
		{
			func_167("Death", iParam0, &(Local_162.f_204[iParam0 /*19*/].f_6));
		}
	}
	else
	{
		func_167("Pain", iParam0, &(Local_162.f_204[iParam0 /*19*/].f_6));
	}
}

void func_381(int iParam0, int iParam1)//Position - 0xFDA1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[2];
	var uVar6[2];
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	iVar9 = 1;
	func_187(iParam1, &iVar1, &iVar2);
	if (func_75())
	{
		if ((iVar1 % 2) == 0)
		{
			iVar9 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar10 = func_75();
			iVar3[iVar0] = func_74(bVar10, 0, 1);
			uVar6[iVar0] = func_73((iVar1 + iVar9), func_74(bVar10, 8, 0));
			iVar9 = (iVar9 * -1);
			iVar0++;
		}
	}
	else
	{
		if ((iVar2 % 2) == 0)
		{
			iVar9 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar11 = func_75();
			iVar3[iVar0] = func_74(bVar11, 2, 3);
			uVar6[iVar0] = func_73(func_74(bVar11, 12, 0), (iVar2 + iVar9));
			iVar9 = (iVar9 * -1);
			iVar0++;
		}
	}
	iVar12 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_615.f_148[(iVar0 + iVar12) /*4*/].f_1 = uVar6[iVar0];
		Local_615.f_148[(iVar0 + iVar12) /*4*/] = NETWORK::GET_NETWORK_TIME() + 1000;
		Local_615.f_148[(iVar0 + iVar12) /*4*/].f_2 = iVar3[iVar0];
		Local_615.f_148[(iVar0 + iVar12) /*4*/].f_3 = (5 + iParam0);
		iVar0++;
	}
	Local_615.f_161 = NETWORK::GET_NETWORK_TIME();
}

void func_382(int iParam0, int iParam1, int iParam2)//Position - 0xFEE0
{
	int iVar0;
	
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == iParam2)
		{
			if (!func_83(&(Local_615.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
			{
				func_91(&(Local_615.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
			}
		}
		else if (func_83(&(Local_615.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
		{
			func_383(&(Local_615.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
		}
		iVar0++;
	}
}

void func_383(var uParam0, int iParam1)//Position - 0xFF64
{
	MISC::CLEAR_BIT(uParam0[func_85(iParam1)], func_84(iParam1));
}

void func_384(int iParam0)//Position - 0xFF80
{
	if (!Local_162.f_178.f_1)
	{
		return;
	}
	Local_615.f_62[iParam0 /*3*/].f_1 = -1;
	Local_615.f_62[iParam0 /*3*/] = -1;
	Local_615.f_62[iParam0 /*3*/].f_2 = -2147483647;
}

void func_385(int iParam0, int iParam1)//Position - 0xFFBB
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 457347143;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	iVar4 = func_57(iParam0);
	if (!iVar4 == 0 && func_63(iParam0, 0, 1))
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

int func_386()//Position - 0x10006
{
	int iVar0;
	
	if (Global_1927707)
	{
		return 1;
	}
	if (func_398())
	{
		return 1;
	}
	if (func_397())
	{
		return 1;
	}
	if (func_396(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (!func_395())
	{
		return 1;
	}
	if (func_390())
	{
		return 1;
	}
	if (Local_615.f_145 == 4 && Local_821[Local_162.f_178 /*9*/] != 4)
	{
		return 0;
	}
	if (Local_162.f_140 < 2)
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
		func_387((1000 - MISC::ABSI((NETWORK::GET_NETWORK_TIME() - Local_162.f_431))), 1000, "DEG_GAME_QUIT" /* GXT: QUIT */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	}
	else
	{
		func_387(0, 1000, "DEG_GAME_QUIT" /* GXT: QUIT */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		if (Local_162.f_431 == -2147483647)
		{
			Local_162.f_431 = NETWORK::GET_NETWORK_TIME() + 1000;
		}
		if (NETWORK::GET_NETWORK_TIME() > Local_162.f_431)
		{
			return 1;
		}
	}
	else if (Local_162.f_431 != -2147483647)
	{
		Local_162.f_431 = -2147483647;
	}
	if (func_358(PLAYER::PLAYER_ID()))
	{
		if (func_390())
		{
			return 1;
		}
	}
	return 0;
}

void func_387(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)//Position - 0x101AA
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_389(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_388(0, iVar0);
		Global_1669875.f_1177[iVar0] = iParam0;
		Global_1669875.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1669875.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1669875.f_1177.f_194[iVar0] = iParam3;
		Global_1669875.f_1177.f_183[iVar0] = iParam4;
		Global_1669875.f_1177.f_227[iVar0] = iParam5;
		Global_1669875.f_1177.f_238[iVar0 /*3*/] = iParam6;
		Global_1669875.f_1177.f_238[iVar0 /*3*/].f_1 = iParam7;
		Global_1669875.f_1177.f_269[iVar0] = iParam8;
		Global_1669875.f_1177.f_280[iVar0] = iParam9;
		Global_1669875.f_1177.f_323[iVar0] = iParam10;
		Global_1669875.f_1177.f_334[iVar0] = iParam11;
		Global_1669875.f_1177.f_345[iVar0] = iParam12;
		Global_1669875.f_1177.f_356[iVar0] = iParam13;
		Global_1669875.f_1172 = 1;
		Global_1669875.f_1177.f_367[iVar0] = iParam14;
		Global_1669875.f_1177.f_378[iVar0] = iParam15;
		Global_1669875.f_1177.f_389[iVar0] = iParam16;
		Global_1669875.f_1177.f_400[iVar0] = iParam17;
		Global_1669875.f_1177.f_411[iVar0] = iParam18;
		Global_1669875.f_1177.f_422[iVar0] = iParam19;
		Global_1669875.f_1177.f_433[iVar0] = iParam20;
		Global_1669875.f_1177.f_444[iVar0] = iParam21;
		Global_1669875.f_1177.f_455[iVar0] = iParam22;
		Global_1669875.f_1177.f_466[iVar0] = iParam23;
		Global_1669875.f_1177.f_477[iVar0] = iParam24;
		Global_1669875.f_1177.f_205[iVar0] = iParam25;
		Global_1669875.f_1177.f_216[iVar0] = iParam39;
		Global_1669875.f_1177.f_488[iVar0] = iParam26;
		Global_1669875.f_1177.f_499[iVar0] = iParam27;
		Global_1669875.f_1177.f_510[iVar0] = iParam28;
		Global_1669875.f_1177.f_521[iVar0] = iParam29;
		Global_1669875.f_1177.f_532[iVar0] = iParam30;
		Global_1669875.f_1177.f_543[iVar0] = iParam31;
		Global_1669875.f_1177.f_554[iVar0] = iParam32;
		Global_1669875.f_1177.f_565[iVar0] = iParam33;
		Global_1669875.f_1177.f_576[iVar0] = iParam34;
		Global_1669875.f_1177.f_587[iVar0] = iParam35;
		Global_1669875.f_1177.f_598[iVar0] = iParam36;
		Global_1669875.f_1177.f_609[iVar0] = iParam37;
		Global_1669875.f_1177.f_620[iVar0] = iParam38;
	}
}

void func_388(int iParam0, int iParam1)//Position - 0x10471
{
	MISC::SET_BIT(&(Global_1669875.f_7064[iParam0]), iParam1);
}

int func_389(int iParam0, int iParam1)//Position - 0x1048A
{
	return BitTest(Global_1669875.f_7064[iParam0], iParam1);
}

int func_390()//Position - 0x104A0
{
	if (func_358(PLAYER::PLAYER_ID()))
	{
		if (func_30(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_394(PLAYER::PLAYER_ID(), 0) && func_392(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (func_391())
	{
		return 1;
	}
	if (Global_1579637.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_391()//Position - 0x104F8
{
	return BitTest(Global_1970490, 14);
}

var func_392(int iParam0)//Position - 0x10507
{
	return func_393(iParam0, 20);
}

var func_393(int iParam0, int iParam1)//Position - 0x10517
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_394(int iParam0, int iParam1)//Position - 0x1052F
{
	if (func_35(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_395()//Position - 0x10573
{
	switch (func_46())
	{
		case 15:
		case 17:
			return 1;
			break;
	}
	return 0;
}

int func_396(int iParam0)//Position - 0x10598
{
	if (iParam0 != func_14())
	{
		return BitTest(Global_1886967[iParam0 /*609*/].f_514, 3);
	}
	return 0;
}

bool func_397()//Position - 0x105BB
{
	return Global_1942781.f_4895.f_1 != -1;
}

bool func_398()//Position - 0x105CE
{
	return Global_1942781.f_544;
}

void func_399()//Position - 0x105DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Local_162.f_147 = 0;
	Local_162.f_148 = 0;
	Local_162.f_434 = Local_162.f_433;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		Local_162.f_149[iVar2] = -1;
		if (iLocal_816[iVar2] > iVar0)
		{
			iVar0 = iLocal_816[iVar2];
			iVar1 = iVar2;
		}
		else if (iLocal_816[iVar2] == iVar0)
		{
			iVar1 = -1;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_923[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_821[iVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Local_162.f_149[Local_821[iVar2 /*9*/].f_6] = iVar2;
			if (Local_821[iVar2 /*9*/].f_6 == iVar1)
			{
				iVar1 = iVar2;
			}
			if (Local_162.f_154[Local_821[iVar2 /*9*/].f_6] == -2147483647 && Global_1927705.f_1 == 0)
			{
				func_166((12 + Local_821[iVar2 /*9*/].f_6));
				Local_162.f_154[Local_821[iVar2 /*9*/].f_6] = NETWORK::GET_NETWORK_TIME();
			}
			Local_162.f_148++;
			if (Local_162.f_204[iVar2 /*19*/].f_9 != Local_821[iVar2 /*9*/].f_2)
			{
				iVar3 = (Local_821[iVar2 /*9*/].f_2 - Local_162.f_204[iVar2 /*19*/].f_9);
				if (iVar3 > 0)
				{
					Local_162.f_204[iVar2 /*19*/].f_9 = (Local_162.f_204[iVar2 /*19*/].f_9 + Local_162.f_412);
					if (Local_162.f_204[iVar2 /*19*/].f_9 > Local_821[iVar2 /*9*/].f_2)
					{
						Local_162.f_204[iVar2 /*19*/].f_9 = Local_821[iVar2 /*9*/].f_2;
					}
				}
				else
				{
					Local_162.f_204[iVar2 /*19*/].f_9 = (Local_162.f_204[iVar2 /*19*/].f_9 - Local_162.f_414);
					if (Local_162.f_204[iVar2 /*19*/].f_9 < Local_821[iVar2 /*9*/].f_2)
					{
						Local_162.f_204[iVar2 /*19*/].f_9 = Local_821[iVar2 /*9*/].f_2;
					}
				}
			}
			if (Local_821[iVar2 /*9*/] == 4)
			{
			}
			else
			{
				Local_162.f_147++;
			}
		}
		iVar2++;
	}
	Local_162.f_433 = iVar1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (Local_162.f_149[iVar2] == -1 && Local_162.f_154[iVar2] != -2147483647)
		{
			Local_162.f_154[iVar2] = -2147483647;
		}
		iVar2++;
	}
}

void func_400()//Position - 0x10818
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Local_162.f_178 = NETWORK::PARTICIPANT_ID_TO_INT();
		bVar0 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		Local_162.f_178.f_1 = bVar0;
	}
}

void func_401()//Position - 0x1083D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_923[iVar0 /*37*/].f_25)
		{
			Local_821[iVar0 /*9*/] = { Local_923[iVar0 /*37*/] };
		}
		iVar0++;
	}
}

void func_402()//Position - 0x10877
{
	SYSTEM::WAIT(0);
}

void func_403(struct<21> Param0)//Position - 0x10884
{
	func_409(4, Param0);
	func_407(0, -1, 0);
	func_406();
	func_405();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_615, 201, 0);
	NETWORK::NETWORK_REGISTER_HIGH_FREQUENCY_HOST_BROADCAST_VARIABLES(&iLocal_816, 5, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_821, 37, 0);
	NETWORK::NETWORK_REGISTER_HIGH_FREQUENCY_PLAYER_BROADCAST_VARIABLES(&Local_858, 65, 0);
	if (!func_404())
	{
		func_9();
	}
	Local_821[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_6 = Param0.f_19;
}

int func_404()//Position - 0x108E8
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
		if (func_8())
		{
			return 0;
		}
		if (func_6(157))
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

void func_405()//Position - 0x10941
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_615[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_615.f_62[iVar0 /*3*/] = -1;
		Local_615.f_62[iVar0 /*3*/].f_1 = -1;
		Local_615.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_615.f_148[iVar0 /*4*/] = -2147483647;
		Local_615.f_148[iVar0 /*4*/].f_1 = -1;
		Local_615.f_148[iVar0 /*4*/].f_2 = -1;
		Local_615.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Local_615.f_131[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_615.f_196[iVar0] = 99;
		iVar0++;
	}
}

void func_406()//Position - 0x10A2E
{
}

int func_407(int iParam0, int iParam1, bool bParam2)//Position - 0x10A36
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_10();
			}
			else
			{
				return 0;
			}
		}
		if (!func_408(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_10();
					}
					else
					{
						return 0;
					}
				}
				if (func_8())
				{
					if (!bParam2)
					{
						func_10();
					}
					else
					{
						return 0;
					}
				}
				if (func_6(157))
				{
					if (!bParam2)
					{
						func_10();
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
					func_10();
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
				func_10();
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
			func_10();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_408(bool bParam0)//Position - 0x10B4C
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

void func_409(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x10B5D
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_10();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

