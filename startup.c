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
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
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
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	Local_50 = { 1694.7395f, 3276.5024f, 41.2796f };
	Local_51 = { 8.79494f, 0.59893f, 154.8464f };
	func_82(0);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	HUD::SET_PLAYER_IS_IN_DIRECTOR_MODE(false);
	MISC::SET_PLAYER_IS_IN_ANIMAL_FORM(false);
	STREAMING::REMOVE_IPL("prologue_DistantLights");
	STREAMING::REMOVE_IPL("prologue_LODLights");
	iLocal_52 = 0;
	bVar0 = func_81();
	if (MISC::IS_COMMANDLINE_END_USER_BENCHMARK() || MISC::LANDING_SCREEN_STARTED_END_USER_BENCHMARK())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		SCRIPT::COMMIT_TO_LOADINGSCREEN_SELCTION();
	}
	MISC::SET_INSTANCE_PRIORITY_MODE(0);
	func_77();
	Global_4543155 = 0;
	MISC::SET_BIT(&Global_4543155, 0);
	MISC::SET_BIT(&Global_4543155, 1);
	iVar1 = 0;
	while (iVar1 < 131)
	{
		func_34(&(Global_1312228[iVar1 /*1951*/]), iVar1);
		iVar1++;
	}
	func_33();
	switch (iLocal_52)
	{
		case 0:
			func_32(joaat("standard_global_init"), 1424);
			SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("standard_global_init"));
			break;
	}
	SYSTEM::WAIT(0);
	Global_78560 = 1;
	Global_2 = bVar0;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	switch (iLocal_52)
	{
		case 0:
			Global_2883694 = 0;
			Global_2883693 = 0;
			func_32(joaat("standard_global_reg"), 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("standard_global_reg");
			while ((!BitTest(Global_4543155, 0) || !BitTest(Global_4543155, 1)) || !BitTest(Global_4543155, 2))
			{
				if (!BitTest(Global_4543155, 0))
				{
				}
				if (!BitTest(Global_4543155, 1))
				{
				}
				if (!BitTest(Global_4543155, 2))
				{
				}
				SYSTEM::WAIT(0);
			}
			MISC::START_SAVE_DATA(&Global_113648, 1, true);
			MISC::REGISTER_FLOAT_TO_SAVE(&Global_113648, "fSaveVersion");
			MISC::STOP_SAVE_DATA();
			if (Global_1)
			{
				Global_0 = Global_113648;
			}
			Global_113648 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_21(Global_0);
				}
			}
			break;
	}
	MISC::START_SAVE_DATA(&Global_2359296, 5569, false);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&Global_2359296, 5569, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_19(&(Global_2359296[iVar1 /*5568*/]), iVar1);
		func_17(&(Global_2359296[iVar1 /*5568*/]), iVar1);
		func_14(&(Global_2359296[iVar1 /*5568*/]), iVar1);
		func_12(&(Global_2359296[iVar1 /*5568*/]), iVar1);
		func_11(&(Global_2359296[iVar1 /*5568*/]), iVar1);
		func_10(&(Global_2359296[iVar1 /*5568*/]), iVar1);
		func_3(&(Global_2359296[iVar1 /*5568*/]), iVar1);
		iVar1++;
	}
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_DATA();
	iVar2 = 5569;
	iVar3 = MISC::GET_SIZE_OF_SAVE_DATA(false);
	if (iVar2 != iVar3)
	{
	}
	if (!NETWORK::IS_COMMERCE_DATA_VALID() && !NETWORK::IS_COMMERCE_DATA_FETCH_IN_PROGRESS())
	{
		NETWORK::TRIGGER_COMMERCE_DATA_FETCH(0);
	}
	PATHFIND::SET_ALLOW_STREAM_PROLOGUE_NODES(false);
	MISC::SET_PLAYER_IS_IN_ANIMAL_FORM(false);
	func_2();
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()//Position - 0x308
{
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()//Position - 0xA25
{
	Global_152519 = 1;
	Global_152520 = 1;
}

void func_3(var uParam0, int iParam1)//Position - 0xA37
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(var uParam0, int iParam1)//Position - 0xA6F
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5541.f_19), 8, &cVar0);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_5541.f_19[0 /*7*/]), 7, "TEMPSTAT_DATE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5541.f_19[0 /*7*/]), "TEMPSTAT_DATE.year");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5541.f_19[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5541.f_19[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5541.f_19[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5541.f_19[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5541.f_19[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5541.f_19[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_ARRAY();
}

void func_5(var uParam0, int iParam1)//Position - 0xB39
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5541.f_15), 4, &cVar0);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_5541.f_15[0 /*3*/]), 3, "TEMPSTAT_VEC");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5541.f_15[0 /*3*/]), "TEMPSTAT_VEC.x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5541.f_15[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5541.f_15[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_ARRAY();
}

void func_6(var uParam0, int iParam1)//Position - 0xBB2
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5541.f_6), 9, &cVar0);
	MISC::REGISTER_TEXT_LABEL_31_TO_SAVE(&(uParam0->f_5541.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	MISC::STOP_SAVE_ARRAY();
}

void func_7(var uParam0, int iParam1)//Position - 0xBED
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5541.f_4), 2, &cVar0);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5541.f_4[0]), "TEMPSTAT_BOOL");
	MISC::STOP_SAVE_ARRAY();
}

void func_8(var uParam0, int iParam1)//Position - 0xC27
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5541.f_2), 2, &cVar0);
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5541.f_2[0]), "TEMPSTAT_FLOAT");
	MISC::STOP_SAVE_ARRAY();
}

void func_9(var uParam0, int iParam1)//Position - 0xC61
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5541), 2, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5541[0]), "TEMPSTAT_INT1");
	MISC::STOP_SAVE_ARRAY();
}

void func_10(var uParam0, int iParam1)//Position - 0xC97
{
	char cVar0[24];
	int iVar1;
	struct<4> Var2;
	char cVar3[16];
	char cVar4[16];
	char cVar5[16];
	char cVar6[16];
	
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_5391), 150, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5391), "MPATM_CARET_");
	iVar1 = 0;
	StringCopy(&Var2, "MPATMLOGVAL", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5391.f_1), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar3 = { Var2 };
		StringIntConCat(&cVar3, iVar1, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5391.f_1[iVar1]), &cVar3);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "MPATMLOGSCRS", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5391.f_18), 97, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar4 = { Var2 };
		StringIntConCat(&cVar4, iVar1, 16);
		MISC::REGISTER_TEXT_LABEL_23_TO_SAVE(&(uParam0->f_5391.f_18[iVar1 /*6*/]), &cVar4);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "MPATMLOGACT", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5391.f_115), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar5 = { Var2 };
		StringIntConCat(&cVar5, iVar1, 16);
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_5391.f_115[iVar1]), &cVar5);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "MPATMLOGDAT", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5391.f_132), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar6 = { Var2 };
		StringIntConCat(&cVar6, iVar1, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5391.f_132[iVar1]), &cVar6);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5391.f_149), "mpAnyVecBought");
	MISC::STOP_SAVE_STRUCT();
}

void func_11(var uParam0, int iParam1)//Position - 0xE11
{
	struct<6> Var0;
	char cVar1[32];
	int iVar2;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_5150), 241, &Var0);
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150), "BOUNTY_GAMERH64_1");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_1), "BOUNTY_GAMERH64_2");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_2), "BOUNTY_GAMERH64_3");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_3), "BOUNTY_GAMERH64_4");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_4), "BOUNTY_GAMERH64_5");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_5), "BOUNTY_GAMERH64_6");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_6), "BOUNTY_GAMERH64_7");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_7), "BOUNTY_GAMERH64_8");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_8), "BOUNTY_GAMERH64_9");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_9), "BOUNTY_GAMERH64_10");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_10), "BOUNTY_GAMERH64_11");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_11), "BOUNTY_GAMERH64_12");
	MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_12), "BOUNTY_GAMERH64_13");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5150.f_13), "BOUNTY_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5150.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5150.f_15), 209, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_1", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/]), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_2", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_1), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_3", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_2), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_4", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_3), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_5", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_4), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_6", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_5), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_7", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_6), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_8", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_7), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_9", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_8), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_10", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_9), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_11", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_10), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_12", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_11), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_13", 32);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_5150.f_15[iVar2 /*13*/].f_12), &cVar1);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5150.f_224), 17, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringIntConCat(&cVar1, iVar2, 32);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5150.f_224[iVar2]), &cVar1);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_STRUCT();
}

void func_12(var uParam0, int iParam1)//Position - 0x1237
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_681), &cVar0);
}

void func_13(var* uParam0, char* sParam1)//Position - 0x1258
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	char cVar3[64];
	int iVar4;
	int iVar5;
	char cVar6[16];
	char cVar7[16];
	char cVar8[16];
	char cVar9[16];
	char cVar10[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 4469, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "CASH_GIVEN_TOTAL");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "CASH_GIVEN_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "LAST_SAVED_CAR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iNewVehPurchased");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "WHEELIE_TIMER");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "WHEELIE_UPDATES");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "WHEELIE_TIME");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_7), "GRAB_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iLastSoldVehicleTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "ilasttimeplayed");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iSaveCoupons");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iLastBruciePillReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iLastSecVanReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iLastBountyReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iLastParaReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iLastCrateDropReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLastGangAttackReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "iLastImpExpReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iLastInsuranceReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iLastSurvivalReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_21), "iLastBikerBackupReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_22), "iLastVagosBackupReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "iLastLesterVehReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "iLastPersonalVehDeliveryReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iLastPegasusVehicleReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "iLastMerryweatherReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "iLastLesterHelpReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "iLastLesterReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "iLastGeraldReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_30), "iLastSimeonReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31), "iLastMartinReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iLastRonReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_33), "iRecentlyPassedMissionBitset");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_34), "iRecentlyPassedMissionTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_35), "iLastImportExportDelTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36), "iLastImportExportListTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_37), "iMyLastImportExportListDay");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_38), "iVehicleWebsiteReminderTime");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bDefaultClothesSet");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_40), 7, "CLOTHES" /* GXT: Resident */);
	iVar0 = 0;
	while (iVar0 < uParam0->f_40)
	{
		StringCopy(&Var1, "CLOTHES" /* GXT: Resident */, 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_40[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_47), 1225, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_47)
	{
		StringCopy(&Var1, "CARMODS", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_47[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1272), "iLastCrewCharWasIn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1273), "iStripperUnlockedBS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1274), "iGeneralBS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1275), "iCarsModifiedTimeStamp");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1276), 10, "GOLF_fLongestDriveHole");
	iVar2 = 0;
	while (iVar2 < uParam0->f_1276)
	{
		StringCopy(&cVar3, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1276[iVar2]), &cVar3);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1286), 10, "GOLF_fLongestPuttHole");
	iVar2 = 0;
	while (iVar2 < uParam0->f_1286)
	{
		StringCopy(&cVar3, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1286[iVar2]), &cVar3);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1296), "GOLF_iBestRound");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1297), "GOLF_fLongestDrive");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1298), "GOLF_fLongestPutt");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1299), "iShareLJCashTotal");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1300), "iShareLJCashTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1301), "iReceiveLJCashTotal");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1302), "iReceiveLJCashTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1303), "LAST_ACC_PROP");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1304), "MULTI1_PROP_VAL");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1334), "LAST_ACC_SMPLINT");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1305), 29, "PROP_ARY_VAL");
	iVar4 = 0;
	while (iVar4 < uParam0->f_1305)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1305[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1335), "KR_PATCH_UPDATE");
	iVar4 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2691), 919, "DLC_MODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_2691)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2691[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar4 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3610), 627, "DLC_SUPERMODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_3610)
	{
		StringCopy(&Var1, "DLC_SMODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3610[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1336), 274, "OUTFIT_CompDraw");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1336[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1336[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1610), 274, "OUTFIT_CompTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1610[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1610[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1884), 211, "OUTFIT_PropID");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1884[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1884[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2095), 211, "OUTFIT_PropTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2095[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2095[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2306), 22, "OUTFIT_Stored");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2306[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2328), 22, "OUTFIT_CrewTatA");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2328[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2350), 22, "OUTFIT_CrewTatB");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2350[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2372), 22, "OUTFIT_CrewTatC");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2372[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2394), 22, "OUTFIT_CrewTatD");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2394[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2416), 22, "OUTFIT_CrewTatE");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalE", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2416[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2438), 22, "OUTFIT_CrewTatF");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalF", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2438[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2629), 22, "OUTFIT_Shirt");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2629[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2460), 169, "OUTFIT_Name");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_TEXT_LABEL_31_TO_SAVE(&(uParam0->f_2460[iVar4 /*8*/]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2651), 40, "LAST_JobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_1", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/]), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_2", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_1), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_3", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_2), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_4", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_3), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_5", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_4), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_6", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_5), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_7", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_6), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_8", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_7), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_9", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_8), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_10", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_9), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_11", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_10), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_12", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_11), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_13", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_2651[iVar4 /*13*/].f_12), &cVar6);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4237), "DO_CompletedObjectives");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4238), "DO_LoggedInToday");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4239), "DO_xValue");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4240), "DO_LastHistoryLength");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4241), "DO_LastResetTime");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4242), 10, "DO_Objectives");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4242[iVar4 /*3*/]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4242[iVar4 /*3*/].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4242[iVar4 /*3*/].f_2), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4252), 25, "DO_History");
	iVar4 = 0;
	while (iVar4 < 24)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4252[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4277), 49, "LAST_JobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar7 = { Var1 };
		StringConCat(&cVar7, "_1", 16);
		MISC::REGISTER_TEXT_LABEL_63_TO_SAVE(&(uParam0->f_4277[iVar4 /*16*/]), &cVar7);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4326), 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "BGSAVEINT", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4326[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4337), 3, "PROPLIB");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4337)
	{
		StringCopy(&Var1, "PROPLIB", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4337[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4340), 40, "LAST_GOGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGOG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_1", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/]), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_2", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_1), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_3", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_2), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_4", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_3), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_5", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_4), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_6", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_5), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_7", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_6), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_8", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_7), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_9", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_8), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_10", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_9), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_11", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_10), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_12", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_11), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_13", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4340[iVar4 /*13*/].f_12), &cVar8);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4380), 40, "LAST_GOJobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_1", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/]), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_2", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_1), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_3", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_2), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_4", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_3), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_5", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_4), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_6", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_5), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_7", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_6), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_8", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_7), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_9", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_8), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_10", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_9), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_11", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_10), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_12", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_11), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_13", 16);
		MISC::REGISTER_INT64_TO_SAVE(&(uParam0->f_4380[iVar4 /*13*/].f_12), &cVar9);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4420), 49, "LAST_GOJobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar10 = { Var1 };
		StringConCat(&cVar10, "_1", 16);
		MISC::REGISTER_TEXT_LABEL_63_TO_SAVE(&(uParam0->f_4420[iVar4 /*16*/]), &cVar10);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
}

void func_14(var uParam0, int iParam1)//Position - 0x23F7
{
	func_15(&(uParam0->f_593), iParam1);
}

void func_15(var* uParam0, int iParam1)//Position - 0x240A
{
	char cVar0[64];
	int iVar1;
	
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_41), 11, "CAR_HIDDEN");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_41[iVar1]), &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	func_16(uParam0, "CAR_APP_ORDER");
	StringCopy(&cVar0, "bUpdateMods", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_52), &cVar0);
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_53), &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_55), &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_54), &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60), &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_56), &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_61), &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_62), &cVar0);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_63), 11, "SAVED_VEH_SLOT");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_63[iVar1]), &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_74), 11, "SAVED_VEH_PRIO");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_74[iVar1]), &cVar0);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_85), "LAST_USED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_86), "NEW_SAVED");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_87), "SETUP_INIT");
}

void func_16(var* uParam0, char* sParam1)//Position - 0x25C3
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 41, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iColour1Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iColour2Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iWindowTint");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iTyreSmokeR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iTyreSmokeG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iTyreSmokeB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iEngine");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iBrakes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iWheels");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iWheelType");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iExhaust");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iSuspension");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iArmour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLights");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "bBulletProofTyres");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iTurbo");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iTyreSmoke");
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_21), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iPlateBack");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "UID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "Cost");
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_28), "tlPlateText_pending");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iPlateBack_pending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_33), "bProcessOrder");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_36), "bOrderPending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_35), "bOrderReceivedOnBoot");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_34), "bOrderForPlayerVehicle");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_37), "bCheckPlateProfanity");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "bOrderPaidFor");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_38), "bSCProfanityFailed");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bOrderFailedFunds");
	MISC::STOP_SAVE_STRUCT();
}

void func_17(var uParam0, int iParam1)//Position - 0x277B
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_18(&(uParam0->f_7), &cVar0);
}

void func_18(var* uParam0, char* sParam1)//Position - 0x279B
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 586, sParam1);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, "TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "TV_CHANNEL_ID");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2), "PENTHOUSE_TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "PENTHOUSE_TV_CHANNEL_ID");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4), "MEDIA_ROOM_TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "MEDIA_ROOM_TV_CHANNEL_ID");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_6), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_6[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_9), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_12), "GARAGE_TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "GARAGE_TV_CHANNEL_ID");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_14), "GARAGE_RADIO_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "GARAGE_RADIO_STATION_ID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "NUMBERS_TIMES_SMOKED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "NUMBER_TIMES_DRANK");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "NUMBER_TIMES_STRIPPERS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "NUMBERS_TIMES_SMOKED_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "NUMBER_TIMES_DRANK_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_21), "NUMBER_TIMES_STRIPPERS_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_22), "NUMBERS_TIMES_SMOKED3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "NUMBER_TIMES_DRANK3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "NUMBER_TIMES_STRIPPERS3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "NUMBERS_TIMES_SMOKED4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "NUMBER_TIMES_DRANK4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "NUMBER_TIMES_STRIPPERS4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "NUMBERS_TIMES_SMOKED5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "NUMBER_TIMES_DRANK5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_30), "NUMBER_TIMES_STRIPPERS5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31), "NUMBERS_TIMES_SMOKEDYacht");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "NUMBER_TIMES_DRANKYacht");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_33), "NUMBER_TIMES_STRIPPERSYacht");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_34), "DATE_LAST_CLEANED_APARTMENT");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_35), "SHOWERS_TAKEN");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_36), 23, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		StringCopy(&cVar1, "DRANK_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_36[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_59), 23, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_59[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		StringCopy(&cVar1, "SMOKED_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_59[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_82), 23, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_82[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		StringCopy(&cVar1, "STRIPPERS_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_82[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_105), 481, "PROP_NAMEDVEHS");
	iVar0 = 0;
	while (iVar0 < 30)
	{
		StringCopy(&cVar1, "NAMEDVEH_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_TEXT_LABEL_63_TO_SAVE(&(uParam0->f_105[iVar0 /*16*/]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
}

void func_19(var* uParam0, int iParam1)//Position - 0x2B2B
{
	struct<3> Var0;
	
	StringCopy(&Var0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&Var0, iParam1, 24);
	func_20(uParam0, &Var0);
}

void func_20(var* uParam0, char* sParam1)//Position - 0x2B49
{
	int iVar0;
	char cVar1[16];
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 7, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "BAV_Timestamp");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1), 6, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::STOP_SAVE_ARRAY();
}

void func_21(float fParam0)//Position - 0x2BA7
{
	func_30();
	if (fParam0 == 1f)
	{
		func_28();
	}
	if (fParam0 <= 1.1f)
	{
		func_27();
	}
	if (fParam0 < 1.5f)
	{
		func_25();
	}
	if (fParam0 <= 1.5f)
	{
		func_24();
	}
	if (fParam0 == 1.5f)
	{
		func_23();
	}
	if (fParam0 < 1.7f)
	{
		func_22();
	}
}

void func_22()//Position - 0x2C09
{
	Global_113648.f_26436.f_4 = 0;
}

void func_23()//Position - 0x2C1B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	STATS::STAT_GET_INT(joaat("CONTENT_HANGER_VEH"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("CONTENT_MARINA_VEH"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("CONTENT_HELI_VEH"), &iVar2, -1);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_113648.f_668.f_1314 = (Global_113648.f_668.f_1314 - iVar0);
	}
}

void func_24()//Position - 0x2C7A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	while (bVar0 < 3)
	{
		iVar1 = 171;
		while (iVar1 <= 198)
		{
			if (BitTest(Global_113648.f_25184[iVar1], bVar0))
			{
				MISC::CLEAR_BIT(&(Global_113648.f_25184[iVar1]), bVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				MISC::SET_BIT(&(Global_113648.f_25184[iVar2]), bVar0);
			}
			iVar1++;
		}
		bVar0++;
	}
}

void func_25()//Position - 0x2CE6
{
	if ((((func_26(54) || func_26(55)) || func_26(56)) || func_26(57)) || func_26(58))
	{
		MISC::SET_BIT(&(Global_113648.f_10018.f_25), 6);
	}
}

int func_26(int iParam0)//Position - 0x2D35
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_27()//Position - 0x2D61
{
}

void func_28()//Position - 0x2D69
{
	if (Global_113648.f_9087.f_99.f_205[7] != 0)
	{
		if (!Global_113648.f_9087.f_330[86 /*6*/])
		{
			Global_113648.f_9087.f_330[86 /*6*/] = 1;
		}
	}
	if (Global_113648.f_9087.f_99.f_205[8] != 0)
	{
		if (!Global_113648.f_9087.f_330[71 /*6*/])
		{
			Global_113648.f_9087.f_330[71 /*6*/] = 1;
		}
	}
	if (Global_113648.f_9087.f_99.f_205[9] != 0)
	{
		if (!Global_113648.f_9087.f_330[91 /*6*/])
		{
			Global_113648.f_9087.f_330[91 /*6*/] = 1;
		}
	}
	if (Global_113648.f_9087.f_99.f_205[10] != 0)
	{
		if (!Global_113648.f_9087.f_330[67 /*6*/])
		{
			Global_113648.f_9087.f_330[67 /*6*/] = 1;
		}
	}
	if (Global_113648.f_9087.f_99.f_205[11] != 0)
	{
		if (!Global_113648.f_9087.f_330[77 /*6*/])
		{
			Global_113648.f_9087.f_330[77 /*6*/] = 1;
		}
	}
	func_29(195, 198);
	func_29(195, 197);
	func_29(195, 196);
}

void func_29(int iParam0, int iParam1)//Position - 0x2E89
{
	struct<4> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	Var0 = { Global_113648.f_10196[iParam0 /*12*/] };
	uVar1 = Global_113648.f_10196[iParam0 /*12*/].f_4;
	uVar2 = Global_113648.f_10196[iParam0 /*12*/].f_5;
	uVar3 = Global_113648.f_10196[iParam0 /*12*/].f_6;
	uVar4 = Global_113648.f_10196[iParam0 /*12*/].f_7;
	uVar5 = Global_113648.f_10196[iParam0 /*12*/].f_8;
	uVar6 = Global_113648.f_10196[iParam0 /*12*/].f_9;
	uVar7 = Global_113648.f_10196[iParam0 /*12*/].f_10;
	uVar8 = Global_113648.f_10196[iParam0 /*12*/].f_11;
	Global_113648.f_10196[iParam0 /*12*/] = { Global_113648.f_10196[iParam1 /*12*/] };
	Global_113648.f_10196[iParam0 /*12*/].f_4 = Global_113648.f_10196[iParam1 /*12*/].f_4;
	Global_113648.f_10196[iParam0 /*12*/].f_5 = Global_113648.f_10196[iParam1 /*12*/].f_5;
	Global_113648.f_10196[iParam0 /*12*/].f_6 = Global_113648.f_10196[iParam1 /*12*/].f_6;
	Global_113648.f_10196[iParam0 /*12*/].f_7 = Global_113648.f_10196[iParam1 /*12*/].f_7;
	Global_113648.f_10196[iParam0 /*12*/].f_8 = Global_113648.f_10196[iParam1 /*12*/].f_8;
	Global_113648.f_10196[iParam0 /*12*/].f_9 = Global_113648.f_10196[iParam1 /*12*/].f_9;
	Global_113648.f_10196[iParam0 /*12*/].f_10 = Global_113648.f_10196[iParam1 /*12*/].f_10;
	Global_113648.f_10196[iParam0 /*12*/].f_11 = Global_113648.f_10196[iParam1 /*12*/].f_11;
	Global_113648.f_10196[iParam1 /*12*/] = { Var0 };
	Global_113648.f_10196[iParam1 /*12*/].f_4 = uVar1;
	Global_113648.f_10196[iParam1 /*12*/].f_5 = uVar2;
	Global_113648.f_10196[iParam1 /*12*/].f_6 = uVar3;
	Global_113648.f_10196[iParam1 /*12*/].f_7 = uVar4;
	Global_113648.f_10196[iParam1 /*12*/].f_8 = uVar5;
	Global_113648.f_10196[iParam1 /*12*/].f_9 = uVar6;
	Global_113648.f_10196[iParam1 /*12*/].f_10 = uVar7;
	Global_113648.f_10196[iParam1 /*12*/].f_11 = uVar8;
}

void func_30()//Position - 0x308D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_31(Global_113648.f_24906[iVar0 /*4*/]))
		{
			if (Global_113648.f_24906[iVar0 /*4*/] != 145)
			{
				Global_113648.f_24906[iVar0 /*4*/] = 145;
			}
		}
		iVar0++;
	}
}

bool func_31(int iParam0)//Position - 0x30D8
{
	return iParam0 < 3;
}

void func_32(int iParam0, int iParam1)//Position - 0x30E4
{
	SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	}
	SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iParam0, iParam1);
}

void func_33()//Position - 0x3113
{
	REPLAY::REGISTER_EFFECT_FOR_REPLAY_EDITOR("No_Filter" /* GXT: No Filter */, true);
	REPLAY::REGISTER_EFFECT_FOR_REPLAY_EDITOR("phone_cam1", true);
	REPLAY::REGISTER_EFFECT_FOR_REPLAY_EDITOR("phone_cam2", true);
	REPLAY::REGISTER_EFFECT_FOR_REPLAY_EDITOR("phone_cam3", true);
	REPLAY::REGISTER_EFFECT_FOR_REPLAY_EDITOR("phone_cam4", true);
	REPLAY::REGISTER_EFFECT_FOR_REPLAY_EDITOR("phone_cam5", true);
	REPLAY::REGISTER_EFFECT_FOR_REPLAY_EDITOR("phone_cam6", true);
	REPLAY::REGISTER_EFFECT_FOR_REPLAY_EDITOR("phone_cam7", true);
	REPLAY::REGISTER_EFFECT_FOR_REPLAY_EDITOR("phone_cam9", true);
	REPLAY::REGISTER_EFFECT_FOR_REPLAY_EDITOR("phone_cam12", false);
}

int func_34(var uParam0, int iParam1)//Position - 0x3175
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_1742.f_130[iVar0] = 1f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1912[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_32 = func_67(iParam1);
	uParam0->f_16 = { func_66(iParam1) };
	uParam0->f_20 = { func_65(iParam1) };
	func_63(uParam0, iParam1);
	func_61(uParam0, iParam1);
	switch (iParam1)
	{
		case 1:
			uParam0->f_35 = 1;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 1;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 2:
			uParam0->f_35 = 1;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 2;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 3:
			uParam0->f_35 = 1;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 3;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 4:
			uParam0->f_35 = 1;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 4;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 61:
			uParam0->f_35 = 1;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 61;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 87:
			uParam0->f_35 = 68;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 87;
			func_36(uParam0, 87);
			uParam0->f_34 = 3;
			return 1;
			break;
		
		case 88:
			uParam0->f_35 = 69;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 88;
			func_36(uParam0, 88);
			uParam0->f_34 = 3;
			return 1;
			break;
		
		case 89:
			uParam0->f_35 = 70;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 89;
			func_36(uParam0, 89);
			uParam0->f_34 = 3;
			return 1;
			break;
		
		case 90:
			uParam0->f_35 = 71;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 90;
			func_36(uParam0, 90);
			uParam0->f_34 = 3;
			return 1;
			break;
		
		case 5:
			uParam0->f_35 = 2;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 5;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 6:
			uParam0->f_35 = 2;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 6;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 7:
			uParam0->f_35 = 3;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 7;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 34:
			uParam0->f_35 = 3;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 34;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 62:
			uParam0->f_35 = 3;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 62;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 35:
			uParam0->f_35 = 4;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 35;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 36:
			uParam0->f_35 = 4;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 36;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 37:
			uParam0->f_35 = 4;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 37;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 38:
			uParam0->f_35 = 5;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 38;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 39:
			uParam0->f_35 = 5;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 39;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 65:
			uParam0->f_35 = 5;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 65;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 40:
			uParam0->f_35 = 6;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 40;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 41:
			uParam0->f_35 = 6;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 41;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 63:
			uParam0->f_35 = 6;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 63;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 42:
			uParam0->f_35 = 7;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 42;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 43:
			uParam0->f_35 = 7;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 43;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 64:
			uParam0->f_35 = 7;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 64;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 73:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 73;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 74:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 74;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 75:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 75;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 76:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 76;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 77:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 77;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 78:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 78;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 79:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 79;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 80:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 80;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 81:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 81;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 82:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 82;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 83:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 83;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 84:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 84;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 85:
			uParam0->f_35 = func_35(iParam1);
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 10);
			uParam0->f_31 = 85;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 8:
			uParam0->f_35 = 8;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 8;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 9:
			uParam0->f_35 = 9;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 9;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 10:
			uParam0->f_35 = 10;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 10;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 11:
			uParam0->f_35 = 11;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 11;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 12:
			uParam0->f_35 = 12;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 12;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 13:
			uParam0->f_35 = 13;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 13;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 14:
			uParam0->f_35 = 14;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 14;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 15:
			uParam0->f_35 = 15;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 15;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 16:
			uParam0->f_35 = 16;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 16;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 17:
			uParam0->f_35 = 17;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 2);
			uParam0->f_31 = 17;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 18:
			uParam0->f_35 = 18;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 2);
			uParam0->f_31 = 18;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 19:
			uParam0->f_35 = 19;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 2);
			uParam0->f_31 = 19;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 20:
			uParam0->f_35 = 20;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 2);
			uParam0->f_31 = 20;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 21:
			uParam0->f_35 = 21;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 2);
			uParam0->f_31 = 21;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 22:
			uParam0->f_35 = 22;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 2);
			uParam0->f_31 = 22;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 23:
			uParam0->f_35 = 23;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 2);
			uParam0->f_31 = 23;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 24:
			uParam0->f_35 = 24;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 24;
			func_51(uParam0, 10);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 25:
			uParam0->f_35 = 25;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 25;
			func_51(uParam0, 6);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 26:
			uParam0->f_35 = 26;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 26;
			func_51(uParam0, 10);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 27:
			uParam0->f_35 = 27;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 27;
			func_51(uParam0, 10);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 28:
			uParam0->f_35 = 28;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 28;
			func_51(uParam0, 6);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 29:
			uParam0->f_35 = 29;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 29;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 30:
			uParam0->f_35 = 30;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 30;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 31:
			uParam0->f_35 = 31;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 31;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 32:
			uParam0->f_35 = 32;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 32;
			func_51(uParam0, 6);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 33:
			uParam0->f_35 = 33;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 33;
			func_51(uParam0, 6);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 44:
			uParam0->f_35 = 34;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 44;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 45:
			uParam0->f_35 = 35;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 45;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 46:
			uParam0->f_35 = 36;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 46;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 47:
			uParam0->f_35 = 37;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 47;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 48:
			uParam0->f_35 = 38;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 48;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 49:
			uParam0->f_35 = 39;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 49;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 50:
			uParam0->f_35 = 40;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 50;
			func_51(uParam0, 6);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 51:
			uParam0->f_35 = 41;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 51;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 52:
			uParam0->f_35 = 42;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 52;
			func_51(uParam0, 6);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 53:
			uParam0->f_35 = 43;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 53;
			func_51(uParam0, 6);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 54:
			uParam0->f_35 = 44;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 54;
			func_51(uParam0, 10);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 55:
			uParam0->f_35 = 45;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 55;
			func_51(uParam0, 6);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 56:
			uParam0->f_35 = 46;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 56;
			func_51(uParam0, 10);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 57:
			uParam0->f_35 = 47;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 57;
			func_51(uParam0, 10);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 58:
			uParam0->f_35 = 48;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 58;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 59:
			uParam0->f_35 = 49;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 59;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 60:
			uParam0->f_35 = 50;
			func_53(uParam0, uParam0->f_35);
			uParam0->f_31 = 60;
			func_51(uParam0, 2);
			uParam0->f_34 = 1;
			return 1;
			break;
		
		case 66:
			uParam0->f_35 = 51;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 66;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 67:
			uParam0->f_35 = 52;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 67;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 68:
			uParam0->f_35 = 53;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 68;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 69:
			uParam0->f_35 = 54;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 6);
			uParam0->f_31 = 69;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 70:
			uParam0->f_35 = 55;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 2);
			uParam0->f_31 = 70;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
		
		case 71:
			uParam0->f_35 = 56;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 2);
			uParam0->f_31 = 71;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
		
		case 72:
			uParam0->f_35 = 57;
			func_53(uParam0, uParam0->f_35);
			func_51(uParam0, 2);
			uParam0->f_31 = 72;
			func_36(uParam0, uParam0->f_31);
			uParam0->f_34 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x44D2
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case 79:
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

void func_36(var uParam0, int iParam1)//Position - 0x4A19
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = -1;
	switch (iParam1)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
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
		case 84:
		case 85:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
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
		case 112:
		case 113:
		case 114:
			iVar1 = func_50(iParam1);
			func_48(iParam1, 278, &Var0, iVar1, 0);
			uParam0->f_121[0 /*12*/] = { Var0 };
			func_48(iParam1, 279, &Var0, iVar1, 0);
			uParam0->f_121[0 /*12*/].f_3 = { Var0 };
			func_48(iParam1, 282, &Var0, iVar1, 0);
			uParam0->f_121[0 /*12*/].f_7 = { Var0 };
			func_48(iParam1, 280, &Var0, iVar1, 0);
			uParam0->f_121[1 /*12*/] = { Var0 };
			func_48(iParam1, 281, &Var0, iVar1, 0);
			uParam0->f_121[1 /*12*/].f_3 = { Var0 };
			func_48(iParam1, 282, &Var0, iVar1, 0);
			uParam0->f_121[0 /*12*/].f_7 = { Var0 };
			uParam0->f_121[0 /*12*/].f_10 = Var0.f_3;
			uParam0->f_121[0 /*12*/].f_11 = Var0.f_3.f_1;
			func_48(iParam1, 283, &Var0, iVar1, 0);
			uParam0->f_121[1 /*12*/].f_7 = { Var0 };
			uParam0->f_121[1 /*12*/].f_10 = Var0.f_3;
			uParam0->f_121[1 /*12*/].f_11 = Var0.f_3.f_1;
			func_48(iParam1, 6, &Var0, iVar1, 0);
			uParam0->f_38[0 /*27*/].f_8 = { Var0 };
			uParam0->f_38[0 /*27*/].f_11 = Var0.f_3.f_2;
			func_48(iParam1, 1, &Var0, iVar1, 0);
			uParam0->f_146[0 /*12*/] = { Var0 };
			func_48(iParam1, 2, &Var0, iVar1, 0);
			uParam0->f_146[0 /*12*/].f_3 = { Var0 };
			if (func_47(iParam1) || func_46(iParam1, -1))
			{
				uParam0->f_146[0 /*12*/].f_6 = 1f;
			}
			else if (func_45(iParam1, 91))
			{
				uParam0->f_146[0 /*12*/].f_6 = 2f;
			}
			else if (func_45(iParam1, 97))
			{
				uParam0->f_146[0 /*12*/].f_6 = 2.25f;
			}
			else
			{
				uParam0->f_146[0 /*12*/].f_6 = 3.5f;
			}
			uParam0->f_146[0 /*12*/].f_7 = Var0.f_3.f_2;
			if (func_44(iParam1))
			{
				func_48(iParam1, 672, &Var0, iVar1, 0);
				uParam0->f_146[1 /*12*/] = { Var0 };
				func_48(iParam1, 673, &Var0, iVar1, 0);
				uParam0->f_146[1 /*12*/].f_3 = { Var0 };
				uParam0->f_146[1 /*12*/].f_6 = 3.5f;
				uParam0->f_146[1 /*12*/].f_7 = Var0.f_3.f_2;
			}
			func_48(iParam1, 7, &Var0, iVar1, 0);
			uParam0->f_146.f_37 = { Var0 };
			func_48(iParam1, 8, &Var0, iVar1, 0);
			uParam0->f_146.f_40 = { Var0 };
			uParam0->f_146.f_43 = { Var0.f_3 };
			uParam0->f_146.f_46 = 62.8385f;
			func_48(iParam1, 3, &Var0, iVar1, 0);
			uParam0->f_146.f_47 = { Var0 };
			func_43(&(uParam0->f_146.f_57), iParam1);
			if (func_50(iParam1) == 86)
			{
				func_48(iParam1, 341, &Var0, 86, 0);
				uParam0->f_146.f_1595 = Var0.f_3.f_2;
				uParam0->f_146.f_1592 = { Var0 };
			}
			func_48(iParam1, 15, &Var0, iVar1, 0);
			uParam0->f_146.f_50 = { Var0 };
			func_37(iParam1, &(uParam0->f_146.f_53), &(uParam0->f_146.f_56), -1);
			func_48(iParam1, 46, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/] = { Var0 };
			uParam0->f_146.f_82[1 /*102*/].f_3 = Var0.f_3.f_2;
			func_48(iParam1, 48, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[1 /*102*/].f_25 = { Var0.f_3 };
			func_48(iParam1, 49, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[1 /*102*/].f_62 = { Var0.f_3 };
			func_48(iParam1, 47, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[1 /*102*/].f_10 = { Var0.f_3 };
			func_48(iParam1, 50, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/].f_16 = { Var0 };
			func_48(iParam1, 51, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/].f_19 = { Var0 };
			func_48(iParam1, 41, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/] = { Var0 };
			uParam0->f_146.f_82[0 /*102*/].f_3 = Var0.f_3.f_2;
			uParam0->f_146.f_82[0 /*102*/].f_85 = 1;
			func_48(iParam1, 42, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[0 /*102*/].f_10 = { Var0.f_3 };
			func_48(iParam1, 43, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[0 /*102*/].f_25 = { Var0.f_3 };
			func_48(iParam1, 44, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_29 = { Var0 };
			uParam0->f_146.f_82[0 /*102*/].f_32 = { Var0.f_3 };
			func_48(iParam1, 45, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[0 /*102*/].f_62 = { Var0.f_3 };
			func_48(iParam1, 126, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_16 = { Var0 };
			func_48(iParam1, 127, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_19 = { Var0 };
			func_48(iParam1, 56, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/] = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_3 = Var0.f_3.f_2;
			uParam0->f_146.f_82[4 /*102*/].f_4 = { 1f, 1f, 1f };
			func_48(iParam1, 57, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_10 = { Var0.f_3 };
			func_48(iParam1, 58, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_25 = { Var0.f_3 };
			func_48(iParam1, 59, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_35 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_38 = { Var0.f_3 };
			func_48(iParam1, 60, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_41 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_44 = { Var0.f_3 };
			func_48(iParam1, 61, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_47 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_50 = { Var0.f_3 };
			func_48(iParam1, 62, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_53 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_56 = { Var0.f_3 };
			func_48(iParam1, 63, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_62 = { Var0.f_3 };
			func_48(iParam1, 64, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_65 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_68 = { Var0.f_3 };
			func_48(iParam1, 65, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_71 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_74 = { Var0.f_3 };
			func_48(iParam1, 66, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_16 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_86 = Var0.f_3.f_2;
			func_48(iParam1, 67, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_19 = { Var0 };
			func_48(iParam1, 110, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_77 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_80 = Var0.f_3.f_2;
			func_48(iParam1, 68, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_93 = { Var0 };
			func_48(iParam1, 109, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_87 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_90 = { Var0.f_3 };
			uParam0->f_146.f_82[12 /*102*/].f_4 = { 1f, 1f, 1f };
			func_48(iParam1, 364, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_25 = { Var0.f_3 };
			func_48(iParam1, 365, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_35 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_38 = { Var0.f_3 };
			func_48(iParam1, 366, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_41 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_44 = { Var0.f_3 };
			func_48(iParam1, 367, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_47 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_50 = { Var0.f_3 };
			func_48(iParam1, 368, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_62 = { Var0.f_3 };
			func_48(iParam1, 362, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_65 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_68 = { Var0.f_3 };
			func_48(iParam1, 363, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_71 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_74 = { Var0.f_3 };
			func_48(iParam1, 360, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_16 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_86 = Var0.f_3.f_2;
			func_48(iParam1, 361, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_19 = { Var0 };
			func_48(iParam1, 369, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_77 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_80 = Var0.f_3.f_2;
			func_48(iParam1, 68, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_93 = { Var0 };
			func_48(iParam1, 109, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_87 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_90 = { Var0.f_3 };
			uParam0->f_146.f_82[13 /*102*/].f_4 = { 1f, 1f, 1f };
			func_48(iParam1, 374, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_25 = { Var0.f_3 };
			func_48(iParam1, 375, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_35 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_38 = { Var0.f_3 };
			func_48(iParam1, 376, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_41 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_44 = { Var0.f_3 };
			func_48(iParam1, 377, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_47 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_50 = { Var0.f_3 };
			func_48(iParam1, 378, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_62 = { Var0.f_3 };
			func_48(iParam1, 372, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_65 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_68 = { Var0.f_3 };
			func_48(iParam1, 373, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_71 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_74 = { Var0.f_3 };
			func_48(iParam1, 370, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_16 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_86 = Var0.f_3.f_2;
			func_48(iParam1, 371, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_19 = { Var0 };
			func_48(iParam1, 379, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_77 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_80 = Var0.f_3.f_2;
			func_48(iParam1, 68, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_93 = { Var0 };
			func_48(iParam1, 109, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_87 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_90 = { Var0.f_3 };
			func_48(iParam1, 69, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/] = { Var0 };
			uParam0->f_146.f_82[5 /*102*/].f_3 = Var0.f_3.f_2;
			func_48(iParam1, 70, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[5 /*102*/].f_10 = { Var0.f_3 };
			func_48(iParam1, 71, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_65 = { Var0 };
			func_48(iParam1, 72, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_71 = { Var0 };
			func_48(iParam1, 73, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_87 = { Var0 };
			func_48(iParam1, 74, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_16 = { Var0 };
			uParam0->f_146.f_82[5 /*102*/].f_19 = { Var0.f_3 };
			func_48(iParam1, 75, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_35 = { Var0 };
			uParam0->f_146.f_82[5 /*102*/].f_38 = { Var0.f_3 };
			func_48(iParam1, 76, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_41 = { Var0 };
			uParam0->f_146.f_82[5 /*102*/].f_44 = { Var0.f_3 };
			func_48(iParam1, 77, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/] = { Var0 };
			uParam0->f_146.f_82[6 /*102*/].f_3 = Var0.f_3.f_2;
			func_48(iParam1, 79, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[6 /*102*/].f_25 = { Var0.f_3 };
			func_48(iParam1, 80, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[6 /*102*/].f_62 = { Var0.f_3 };
			func_48(iParam1, 78, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[6 /*102*/].f_10 = { Var0.f_3 };
			func_48(iParam1, 81, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_16 = { Var0 };
			func_48(iParam1, 82, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_19 = { Var0 };
			func_48(iParam1, 128, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/] = { Var0 };
			uParam0->f_146.f_82[9 /*102*/].f_3 = Var0.f_3.f_2;
			func_48(iParam1, 298, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_81 = { Var0 };
			func_48(iParam1, 298, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_81 = { Var0 };
			func_48(iParam1, 299, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_81 = { Var0 };
			func_48(iParam1, 131, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[9 /*102*/].f_25 = { Var0.f_3 };
			func_48(iParam1, 132, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[9 /*102*/].f_62 = { Var0.f_3 };
			func_48(iParam1, 130, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[9 /*102*/].f_10 = { Var0.f_3 };
			func_48(iParam1, 133, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_16 = { Var0 };
			func_48(iParam1, 134, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_19 = { Var0 };
			func_48(iParam1, 89, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/] = { Var0 };
			uParam0->f_146.f_82[8 /*102*/].f_3 = Var0.f_3.f_2;
			func_48(iParam1, 91, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[8 /*102*/].f_25 = { Var0.f_3 };
			func_48(iParam1, 92, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[8 /*102*/].f_62 = { Var0.f_3 };
			func_48(iParam1, 90, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[8 /*102*/].f_10 = { Var0.f_3 };
			func_48(iParam1, 135, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/].f_16 = { Var0 };
			func_48(iParam1, 136, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/].f_19 = { Var0 };
			func_48(iParam1, 83, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/] = { Var0 };
			uParam0->f_146.f_82[7 /*102*/].f_3 = Var0.f_3.f_2;
			func_48(iParam1, 85, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[7 /*102*/].f_25 = { Var0.f_3 };
			func_48(iParam1, 88, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[7 /*102*/].f_62 = { Var0.f_3 };
			func_48(iParam1, 84, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[7 /*102*/].f_10 = { Var0.f_3 };
			func_48(iParam1, 86, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_16 = { Var0 };
			func_48(iParam1, 87, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_19 = { Var0 };
			func_48(iParam1, 94, &Var0, iVar1, 0);
			uParam0->f_146.f_1517.f_8 = { Var0 };
			uParam0->f_146.f_1517.f_11 = { Var0.f_3 };
			func_48(iParam1, 95, &Var0, iVar1, 0);
			uParam0->f_146.f_1517 = { Var0 };
			uParam0->f_146.f_1517.f_3 = Var0.f_3.f_2;
			if (iParam1 == 65)
			{
			}
			func_48(iParam1, 96, &Var0, iVar1, 0);
			uParam0->f_146.f_1517.f_4 = { Var0 };
			uParam0->f_146.f_1517.f_7 = Var0.f_3.f_2;
			func_48(iParam1, 97, &Var0, iVar1, 0);
			uParam0->f_146.f_1517.f_14 = { Var0 };
			uParam0->f_146.f_1517.f_17 = Var0.f_3.f_2;
			func_48(iParam1, 98, &Var0, iVar1, 0);
			uParam0->f_146.f_1517.f_18 = { Var0 };
			uParam0->f_146.f_1517.f_21 = Var0.f_3.f_2;
			func_48(iParam1, 99, &Var0, iVar1, 0);
			uParam0->f_146.f_1543.f_4 = { Var0 };
			uParam0->f_146.f_1543.f_7 = { Var0.f_3 };
			func_48(iParam1, 100, &Var0, iVar1, 0);
			uParam0->f_146.f_1543 = { Var0 };
			uParam0->f_146.f_1543.f_3 = Var0.f_3.f_2;
			func_48(iParam1, 108, &Var0, iVar1, 0);
			uParam0->f_146.f_1553 = { Var0 };
			uParam0->f_146.f_1556 = { Var0.f_3 };
			func_48(iParam1, 119, &Var0, iVar1, 0);
			uParam0->f_146.f_1517.f_22 = { Var0 };
			uParam0->f_146.f_1517.f_25 = Var0.f_3.f_2;
			func_48(iParam1, 137, &Var0, iVar1, 0);
			uParam0->f_146.f_1559 = { Var0 };
			func_48(iParam1, 142, &Var0, iVar1, 0);
			uParam0->f_146.f_1562 = { Var0 };
			func_48(iParam1, 143, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_6 = { Var0 };
			func_48(iParam1, 146, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_18 = { Var0 };
			func_48(iParam1, 147, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_21 = { Var0 };
			func_48(iParam1, 158, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_15 = { Var0 };
			func_48(iParam1, 145, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_15 = { Var0 };
			func_48(iParam1, 144, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_12 = { Var0 };
			func_48(iParam1, 148, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_24 = { Var0 };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			uParam0->f_38[0 /*27*/].f_8 = { 347.3975f, -1001.4458f, -100.1982f };
			uParam0->f_38[0 /*27*/].f_11 = 4.881f;
			uParam0->f_146[0 /*12*/] = { 347.08966f, -1002.55396f, -96.94618f };
			uParam0->f_146[0 /*12*/].f_3 = { 347.0861f, -1003.80035f, -100.88605f };
			uParam0->f_146[0 /*12*/].f_6 = 2.5f;
			uParam0->f_146[0 /*12*/].f_7 = 176.3655f;
			uParam0->f_146.f_37 = { 338.7102f, -1002.2359f, -100.2119f };
			uParam0->f_146.f_40 = { 342.9461f, -999.73f, -98.0236f };
			uParam0->f_146.f_43 = { 0f, 0f, 37.7289f };
			uParam0->f_146.f_46 = 50f;
			uParam0->f_146.f_47 = { 348.132f, -997.2031f, -100.1741f };
			func_43(&(uParam0->f_146.f_57), iParam1);
			uParam0->f_146.f_50 = { 346.4337f, -1002.8267f, -97.7941f };
			func_37(iParam1, &(uParam0->f_146.f_53), &(uParam0->f_146.f_56), -1);
			uParam0->f_146.f_82[1 /*102*/] = { 349.9853f, -997.8344f, -99.1952f };
			uParam0->f_146.f_82[1 /*102*/].f_3 = 285.4278f;
			uParam0->f_146.f_82[2 /*102*/] = { 343.8862f, -1002.2512f, -100.1962f };
			uParam0->f_146.f_82[2 /*102*/].f_3 = 277.1949f;
			uParam0->f_146.f_82[2 /*102*/].f_22 = { 344.6448f, -1003.7554f, -98.7875f };
			uParam0->f_146.f_82[2 /*102*/].f_25 = { -2.7747f, -1.6005f, 17.2117f };
			uParam0->f_146.f_82[2 /*102*/].f_29 = { 344.6427f, -1003.9994f, -98.7826f };
			uParam0->f_146.f_82[2 /*102*/].f_32 = { -0.1925f, -1.5516f, 18.2611f };
			uParam0->f_146.f_82[2 /*102*/].f_59 = { 342.347f, -1003.1187f, -97.9876f };
			uParam0->f_146.f_82[2 /*102*/].f_62 = { -27.0125f, -1.6193f, -66.8063f };
			uParam0->f_146.f_82[2 /*102*/].f_7 = { Vector(-99.095f, -1002.38f, 344.482f) + Vector(0.0058f, 0.066f, 0.0651f) };
			uParam0->f_146.f_82[2 /*102*/].f_10 = { 0f, 0f, -129.96f };
			uParam0->f_146.f_82[2 /*102*/].f_16 = { 344.6f, -1002.3f, -100.1962f };
			uParam0->f_146.f_82[2 /*102*/].f_19 = { 343.5f, -1002.3f, -98.1962f };
			uParam0->f_146.f_82[6 /*102*/].f_81 = { 341.9066f, -1001.6698f, -99.233f };
			uParam0->f_146.f_82[0 /*102*/] = { 339.6112f, -996.2951f, -99.1962f };
			uParam0->f_146.f_82[0 /*102*/].f_3 = 10.8f;
			uParam0->f_146.f_82[0 /*102*/].f_7 = { 339.435f, -995.849f, -100.196f };
			uParam0->f_146.f_82[0 /*102*/].f_10 = { 0f, 0f, -169.2f };
			uParam0->f_146.f_82[0 /*102*/].f_22 = { 348.8181f, -993.7432f, -99.2265f };
			uParam0->f_146.f_82[0 /*102*/].f_25 = { -9.5524f, 0f, -143.8996f };
			uParam0->f_146.f_82[0 /*102*/].f_16 = { 339.38806f, -996.7233f, -100.19622f };
			uParam0->f_146.f_82[0 /*102*/].f_19 = { 340.25854f, -996.26385f, -98.19622f };
			uParam0->f_146.f_82[0 /*102*/].f_85 = 0;
			uParam0->f_146.f_82[4 /*102*/] = { 347.2369f, -995.4249f, -99.1069f };
			uParam0->f_146.f_82[4 /*102*/].f_3 = 91.0909f;
			uParam0->f_146.f_82[4 /*102*/].f_4 = { 0.6f, 0.6f, 0.6f };
			uParam0->f_146.f_82[4 /*102*/].f_7 = { 347.3f, -994.85f, -99.966f };
			uParam0->f_146.f_82[4 /*102*/].f_10 = { 0f, 0f, -90f };
			uParam0->f_146.f_82[4 /*102*/].f_22 = { 348.0795f, -995.1061f, -98.537f };
			uParam0->f_146.f_82[4 /*102*/].f_25 = { -3.7658f, 0.0129f, 117.3778f };
			uParam0->f_146.f_82[4 /*102*/].f_35 = { 347.3852f, -995.6655f, -98.3721f };
			uParam0->f_146.f_82[4 /*102*/].f_38 = { 28.8622f, 0.0506f, 37.7639f };
			uParam0->f_146.f_82[4 /*102*/].f_41 = { 348.0655f, -995.4604f, -98.5769f };
			uParam0->f_146.f_82[4 /*102*/].f_44 = { -3.3764f, 0.0015f, 90.1577f };
			uParam0->f_146.f_82[4 /*102*/].f_47 = { 347.4615f, -995.39f, -97.7124f };
			uParam0->f_146.f_82[4 /*102*/].f_50 = { -42.5076f, 0.0833f, 89.414f };
			uParam0->f_146.f_82[4 /*102*/].f_53 = { 347.4615f, -995.39f, -97.7124f };
			uParam0->f_146.f_82[4 /*102*/].f_56 = { -42.5076f, 0.0833f, 89.414f };
			uParam0->f_146.f_82[4 /*102*/].f_59 = { 346.4644f, -992.7673f, -98.5189f };
			uParam0->f_146.f_82[4 /*102*/].f_62 = { -19.2697f, -0.0001f, -146.3524f };
			uParam0->f_146.f_82[4 /*102*/].f_65 = { 346.9f, -995.1795f, -97.85f };
			uParam0->f_146.f_82[4 /*102*/].f_68 = { -45f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_71 = { 346.9f, -995.1795f, -97.85f };
			uParam0->f_146.f_82[4 /*102*/].f_74 = { -45f, 0f, 90f };
			uParam0->f_146.f_82[4 /*102*/].f_16 = { 346.25f, -994.4f, -100.2f };
			uParam0->f_146.f_82[4 /*102*/].f_19 = { 348.25f, -994.4f, -97.5f };
			uParam0->f_146.f_82[4 /*102*/].f_86 = 5.5f;
			uParam0->f_146.f_82[4 /*102*/].f_87 = { 348.2157f, -993.1122f, -99.043f };
			uParam0->f_146.f_82[4 /*102*/].f_90 = { 0f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_77 = { 347.7391f, -994.5944f, -100.1962f };
			uParam0->f_146.f_82[4 /*102*/].f_80 = 9.7212f;
			uParam0->f_146.f_82[4 /*102*/].f_93 = { 348.16153f, -993.47345f, -100.69622f };
			uParam0->f_146.f_82[6 /*102*/] = { 342.6041f, -1001.5839f, -100.1962f };
			uParam0->f_146.f_82[6 /*102*/].f_3 = 88.0775f;
			uParam0->f_146.f_82[6 /*102*/].f_7 = { Vector(-99.25f, -1001.646f, 341.9f) + Vector(-0.0027f, -0.0238f, 0.0066f) };
			uParam0->f_146.f_82[6 /*102*/].f_10 = { 0f, 0f, 90f };
			uParam0->f_146.f_82[6 /*102*/].f_22 = { 341.3749f, -1002.8832f, -98.9319f };
			uParam0->f_146.f_82[6 /*102*/].f_25 = { -2.0018f, -0.0676f, -25.1089f };
			uParam0->f_146.f_82[6 /*102*/].f_59 = { 341.3749f, -1002.8832f, -98.9319f };
			uParam0->f_146.f_82[6 /*102*/].f_62 = { -2.0018f, -0.0676f, -25.1089f };
			uParam0->f_146.f_82[6 /*102*/].f_16 = { 342f, -1001.5486f, -100.1962f };
			uParam0->f_146.f_82[6 /*102*/].f_19 = { 343f, -1001.5486f, -98.1962f };
			uParam0->f_146.f_1517.f_8 = { 346.7972f, -1004.4448f, -100.1919f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, 180f };
			uParam0->f_146.f_1517 = { 346.796f, -1002.2325f, -99.19f };
			uParam0->f_146.f_1517.f_3 = 178.66f;
			uParam0->f_146.f_1517.f_4 = { 346.55f, -1006.2598f, -100.1962f };
			uParam0->f_146.f_1517.f_7 = 359.8999f;
			uParam0->f_146.f_1517.f_14 = { 346.2292f, -1000.9788f, -99.19f };
			uParam0->f_146.f_1517.f_17 = -132.94f;
			uParam0->f_146.f_1517.f_18 = { 347.2401f, -1001.8555f, -99.19f };
			uParam0->f_146.f_1517.f_21 = 51.24f;
			uParam0->f_146.f_1553 = { 346.48f, -1004.03f, -98.81f };
			uParam0->f_146.f_1556 = { 90f, 0f, 0f };
			uParam0->f_146.f_1559 = { 340.6887f, -998.2258f, -100.1962f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			uParam0->f_38[0 /*27*/].f_8 = { 264.5677f, -1000.6248f, -100.0086f };
			uParam0->f_38[0 /*27*/].f_11 = 38.4697f;
			uParam0->f_146[0 /*12*/] = { 265.08197f, -1000.7009f, -100.00862f };
			uParam0->f_146[0 /*12*/].f_3 = { 265.06662f, -1002.6346f, -97.25862f };
			uParam0->f_146[0 /*12*/].f_6 = 1.75f;
			uParam0->f_146[0 /*12*/].f_7 = 182.9622f;
			uParam0->f_146.f_37 = { 264.4842f, -997.0889f, -100.0086f };
			uParam0->f_146.f_40 = { 262.9771f, -999.9382f, -97.7223f };
			uParam0->f_146.f_43 = { 0f, 0f, 46.9484f };
			uParam0->f_146.f_46 = 50f;
			uParam0->f_146.f_47 = { 262.6717f, -1000.425f, -100.0087f };
			func_43(&(uParam0->f_146.f_57), iParam1);
			uParam0->f_146.f_50 = { 265.9362f, -1001.3053f, -97.6834f };
			func_37(iParam1, &(uParam0->f_146.f_53), &(uParam0->f_146.f_56), -1);
			uParam0->f_146.f_82[1 /*102*/] = { 261.2055f, -1003.9203f, -100.0086f };
			uParam0->f_146.f_82[1 /*102*/].f_3 = 280.6086f;
			uParam0->f_146.f_82[2 /*102*/] = { 265.6066f, -996.4553f, -99.0039f };
			uParam0->f_146.f_82[2 /*102*/].f_3 = 264.6031f;
			uParam0->f_146.f_82[2 /*102*/].f_7 = { Vector(-98.9f, -996.94f, 266.2f) - Vector(0.0016f, -0.2399f, -0.0237f) };
			uParam0->f_146.f_82[2 /*102*/].f_10 = { 0f, 0f, -146.16f };
			uParam0->f_146.f_82[2 /*102*/].f_22 = { 266.522f, -995.2286f, -98.7813f };
			uParam0->f_146.f_82[2 /*102*/].f_25 = { 1.4963f, 0.0565f, 169.5309f };
			uParam0->f_146.f_82[2 /*102*/].f_29 = { 266.522f, -995.2286f, -98.7813f };
			uParam0->f_146.f_82[2 /*102*/].f_32 = { 1.4963f, 0.0565f, 169.5309f };
			uParam0->f_146.f_82[2 /*102*/].f_59 = { 265.3f, -996.2f, -98.2f };
			uParam0->f_146.f_82[2 /*102*/].f_62 = { -26.5f, 0f, -126.9383f };
			uParam0->f_146.f_82[2 /*102*/].f_16 = { 266.4885f, -996.7f, -98.5f };
			uParam0->f_146.f_82[2 /*102*/].f_19 = { 265f, -996.7f, -100.0086f };
			uParam0->f_146.f_82[0 /*102*/] = { 259.4345f, -996.0923f, -100.0086f };
			uParam0->f_146.f_82[0 /*102*/].f_3 = 74f;
			uParam0->f_146.f_82[0 /*102*/].f_7 = { 259.221f, -994.878f, -99.536f };
			uParam0->f_146.f_82[0 /*102*/].f_10 = { 0f, 0f, 0f };
			uParam0->f_146.f_82[0 /*102*/].f_22 = { 259.5696f, -997.0326f, -99.3819f };
			uParam0->f_146.f_82[0 /*102*/].f_25 = { 3.6829f, -0.0466f, 50.1658f };
			uParam0->f_146.f_82[0 /*102*/].f_29 = { 259.1824f, -996.4972f, -99.2152f };
			uParam0->f_146.f_82[0 /*102*/].f_32 = { 13.6201f, -0.0466f, 1.422f };
			uParam0->f_146.f_82[0 /*102*/].f_59 = { 257.0249f, -995.7932f, -98.5627f };
			uParam0->f_146.f_82[0 /*102*/].f_62 = { -8.5766f, -0.0466f, -102.1123f };
			uParam0->f_146.f_82[0 /*102*/].f_16 = { 258.65027f, -995.92993f, -100.00862f };
			uParam0->f_146.f_82[0 /*102*/].f_19 = { 259.761f, -996.1004f, -98.00862f };
			uParam0->f_146.f_82[0 /*102*/].f_85 = 1;
			uParam0->f_146.f_82[3 /*102*/] = { 262.4687f, -999.5469f, -100.0086f };
			uParam0->f_146.f_82[3 /*102*/].f_3 = 187.4952f;
			uParam0->f_146.f_82[4 /*102*/] = { 254.3181f, -1000.8063f, -98.9226f };
			uParam0->f_146.f_82[4 /*102*/].f_3 = 357.3586f;
			uParam0->f_146.f_82[4 /*102*/].f_4 = { 0.6f, 0.6f, 0.6f };
			uParam0->f_146.f_82[4 /*102*/].f_7 = { 254.847f, -1000.64f, -99.768f };
			uParam0->f_146.f_82[4 /*102*/].f_10 = { 0f, 0f, -180f };
			uParam0->f_146.f_82[4 /*102*/].f_22 = { 254.5649f, -1001.6345f, -98.2143f };
			uParam0->f_146.f_82[4 /*102*/].f_25 = { -13.1864f, 0f, 14.3302f };
			uParam0->f_146.f_82[4 /*102*/].f_35 = { 254.0852f, -1001.0563f, -97.9779f };
			uParam0->f_146.f_82[4 /*102*/].f_38 = { 8.8526f, -0.0221f, -37.4062f };
			uParam0->f_146.f_82[4 /*102*/].f_41 = { 254.2074f, -1001.6578f, -98.3661f };
			uParam0->f_146.f_82[4 /*102*/].f_44 = { -2.5954f, -0.0719f, -0.3961f };
			uParam0->f_146.f_82[4 /*102*/].f_47 = { 254.2738f, -1001.0099f, -97.76f };
			uParam0->f_146.f_82[4 /*102*/].f_50 = { -32.3906f, -0.0172f, 0.3708f };
			uParam0->f_146.f_82[4 /*102*/].f_53 = { 254.2738f, -1001.0099f, -97.76f };
			uParam0->f_146.f_82[4 /*102*/].f_56 = { -32.3906f, -0.0172f, 0.3708f };
			uParam0->f_146.f_82[4 /*102*/].f_59 = { 256.8365f, -1001.0202f, -98.767f };
			uParam0->f_146.f_82[4 /*102*/].f_62 = { -3.3968f, -0.0144f, 88.4273f };
			uParam0->f_146.f_82[4 /*102*/].f_65 = { 254.5308f, -1000.29114f, -97.67236f };
			uParam0->f_146.f_82[4 /*102*/].f_68 = { -45f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_71 = { 254.5308f, -1000.29114f, -97.67236f };
			uParam0->f_146.f_82[4 /*102*/].f_74 = { -45f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_16 = { 253.84328f, -1000.75507f, -100f };
			uParam0->f_146.f_82[4 /*102*/].f_19 = { 257.27393f, -1000.76526f, -97f };
			uParam0->f_146.f_82[4 /*102*/].f_86 = 2f;
			uParam0->f_146.f_82[4 /*102*/].f_87 = { 257.2896f, -1001.2546f, -98.8587f };
			uParam0->f_146.f_82[4 /*102*/].f_90 = { 0f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_77 = { 255.2676f, -1000.9778f, -100.0099f };
			uParam0->f_146.f_82[4 /*102*/].f_80 = 274.0441f;
			uParam0->f_146.f_82[4 /*102*/].f_93 = { 257.23615f, -1000.592f, -99.50992f };
			uParam0->f_146.f_82[6 /*102*/] = { 263.6821f, -996.9714f, -100.0087f };
			uParam0->f_146.f_82[6 /*102*/].f_3 = 90.1681f;
			uParam0->f_146.f_82[6 /*102*/].f_7 = { 264.2415f, -994.803f, -99.071f };
			uParam0->f_146.f_82[6 /*102*/].f_10 = { 0f, 0f, -2.52f };
			uParam0->f_146.f_82[6 /*102*/].f_22 = { 265.4949f, -994.6922f, -98.7894f };
			uParam0->f_146.f_82[6 /*102*/].f_25 = { 2.6773f, 0f, 115.8733f };
			uParam0->f_146.f_82[6 /*102*/].f_7 = { 264.2415f, -994.803f, -99.071f };
			uParam0->f_146.f_82[6 /*102*/].f_10 = { 0f, 0f, -2.52f };
			uParam0->f_146.f_1517.f_8 = { 265.4131f, -1002.989f, -99.9457f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, 180f };
			uParam0->f_146.f_1517 = { 265.425f, -1000.7535f, -100.0086f };
			uParam0->f_146.f_1517.f_3 = 178.66f;
			uParam0->f_146.f_1517.f_4 = { 265.1576f, -1002.9908f, -100.0086f };
			uParam0->f_146.f_1517.f_7 = 0.8739f;
			uParam0->f_146.f_1517.f_14 = { 264.8582f, -999.4998f, -100.0086f };
			uParam0->f_146.f_1517.f_17 = -132.94f;
			uParam0->f_146.f_1517.f_18 = { 265.8691f, -1000.3765f, -100.0086f };
			uParam0->f_146.f_1517.f_21 = 51.24f;
			uParam0->f_146.f_1553 = { 265.13f, -1002.489f, -98.816f };
			uParam0->f_146.f_1556 = { 90f, 0f, 0f };
			uParam0->f_146.f_1559 = { 260.9818f, -999.0168f, -100.0086f };
			break;
	}
}

void func_37(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x71FD
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_48(iParam0, 40, &Var0, -1, 0);
			*uParam1 = { Var0 };
			if (iParam0 == 1)
			{
				uParam1->f_2 = 200.4294f;
			}
			else if (iParam0 == 2)
			{
				uParam1->f_2 = 169.6122f;
			}
			else if (iParam0 == 3)
			{
				uParam1->f_2 = 216.0662f;
			}
			else if (iParam0 == 4)
			{
				uParam1->f_2 = 152.8101f;
			}
			else if (iParam0 == 5)
			{
				uParam1->f_2 = 70.0399f;
			}
			else if (iParam0 == 6)
			{
				uParam1->f_2 = 85.3194f;
			}
			else if (iParam0 == 7)
			{
				uParam1->f_2 = 62.3652f;
			}
			else if (iParam0 == 34)
			{
				uParam1->f_2 = 49.7375f;
			}
			else if (iParam0 == 35)
			{
				uParam1->f_2 = 119.343f;
			}
			else if (iParam0 == 36)
			{
				uParam1->f_2 = 114.4156f;
			}
			else if (iParam0 == 37)
			{
				uParam1->f_2 = 88.2696f;
			}
			else if (iParam0 == 38)
			{
				uParam1->f_2 = 82.9234f;
			}
			else if (iParam0 == 39)
			{
				uParam1->f_2 = 93.0414f;
			}
			else if (iParam0 == 40)
			{
				uParam1->f_2 = 78.289f;
			}
			else if (iParam0 == 41)
			{
				uParam1->f_2 = 102.2488f;
			}
			else if (iParam0 == 42)
			{
				uParam1->f_2 = 100.8356f;
			}
			else if (iParam0 == 43)
			{
				uParam1->f_2 = 86.4347f;
			}
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			*uParam1 = { 350.7414f, -993.6222f, -100.202f };
			*uParam2 = 179.6123f;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			*uParam1 = { 259.8177f, -1003.794f, -100.0086f };
			*uParam2 = 307.1585f;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_48(iParam0, 40, &Var0, 61, 0);
			*uParam1 = { Var0 };
			if (iParam0 == 61)
			{
			}
			else if (iParam0 == 62)
			{
			}
			else if (iParam0 == 63)
			{
			}
			else if (iParam0 == 64)
			{
			}
			else if (iParam0 == 65)
			{
			}
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_48(iParam0, 40, &Var0, 73, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_48(iParam0, 40, &Var0, 77, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 83:
		case 84:
		case 85:
			func_48(iParam0, 40, &Var0, 83, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 86:
			func_38(iParam3, 40, &Var0, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_48(iParam0, 40, &Var0, 88, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			func_48(iParam0, 40, &Var0, 91, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			func_48(iParam0, 40, &Var0, 97, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
	}
}

void func_38(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x7698
{
	struct<6> Var0[2];
	struct<3> Var1;
	
	if (!bParam3)
	{
		Var0[0 /*6*/] = { func_42(-1) };
	}
	else
	{
		Var0[0 /*6*/] = { Global_4280768[iParam0 /*45*/].f_4 };
		Var0[0 /*6*/].f_3 = { 0f, 0f, Global_4280768[iParam0 /*45*/].f_7 };
	}
	if (!bParam3)
	{
		Var0[1 /*6*/] = { func_42(iParam0) };
	}
	else
	{
		Var0[1 /*6*/] = { Global_4280768[iParam0 /*45*/].f_4 };
		Var0[1 /*6*/].f_3 = { 0f, 0f, Global_4280768[iParam0 /*45*/].f_7 };
	}
	*uParam2 = { func_40(iParam1, 86) };
	Var1 = { *uParam2 - Var0[0 /*6*/] };
	Var1 = { func_39(Var1, -Var0[0 /*6*/].f_3.f_2) };
	Var1 = { func_39(Var1, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0[1 /*6*/], 0f, Var1) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 560:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 343:
		case 349:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
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
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 201:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 311:
		case 340:
		case 391:
		case 392:
		case 393:
		case 394:
		case 395:
		case 396:
		case 397:
		case 398:
		case 399:
		case 400:
		case 401:
		case 402:
		case 403:
		case 404:
		case 405:
		case 406:
		case 407:
		case 408:
		case 409:
		case 410:
		case 411:
		case 412:
		case 413:
		case 414:
		case 415:
		case 416:
		case 417:
		case 418:
		case 419:
		case 438:
		case 439:
		case 440:
		case 441:
		case 442:
		case 443:
		case 357:
		case 358:
		case 359:
		case 467:
		case 468:
		case 469:
		case 497:
		case 498:
		case 499:
		case 503:
		case 598:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 362:
		case 363:
		case 364:
		case 365:
		case 366:
		case 367:
		case 368:
		case 360:
		case 361:
		case 383:
		case 386:
		case 372:
		case 373:
		case 374:
		case 375:
		case 376:
		case 377:
		case 378:
		case 370:
		case 371:
		case 384:
		case 387:
		case 486:
		case 487:
		case 488:
		case 489:
		case 490:
		case 491:
		case 492:
		case 485:
		case 544:
		case 543:
		case 545:
		case 516:
		case 517:
		case 583:
		case 584:
		case 518:
		case 519:
		case 520:
		case 521:
		case 522:
		case 523:
		case 524:
		case 525:
		case 526:
		case 527:
		case 553:
		case 552:
		case 551:
		case 550:
		case 556:
		case 555:
		case 593:
		case 594:
		case 595:
		case 596:
		case 554:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 597:
		case 118:
		case 117:
		case 599:
		case 600:
		case 601:
		case 602:
		case 603:
		case 604:
		case 605:
		case 606:
		case 607:
		case 608:
		case 609:
		case 610:
		case 612:
		case 618:
		case 624:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_39(struct<3> Param0, float fParam1)//Position - 0x8017
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_40(int iParam0, int iParam1)//Position - 0x805B
{
	struct<6> Var0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_41(iParam1, &bVar1))
	{
		iVar2 = 1;
	}
	if (iVar2 && MISC::GET_BASE_ELEMENT_LOCATION_FROM_METADATA_BLOCK(&Var0, &(Var0.f_3), iParam0, bVar1))
	{
		return Var0;
	}
	return Var0;
}

int func_41(int iParam0, var uParam1)//Position - 0x809D
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_42(int iParam0)//Position - 0x81C3
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
		case default:
			Var0 = { -1478.436f, -3753.5378f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 0:
			Var0 = { -3555.1155f, 1473.0128f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 1:
			Var0 = { -3147.0488f, 2827.088f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 2:
			Var0 = { -3277.473f, 2159.8499f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 3:
			Var0 = { -2822.4194f, 4054.8396f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 4:
			Var0 = { -3249.849f, 3704.6814f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 5:
			Var0 = { -2383.1934f, 4685.0034f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 6:
			Var0 = { -3224.6863f, -215.9825f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 7:
			Var0 = { -3447.8765f, 291.9275f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 97f };
			break;
		
		case 8:
			Var0 = { -2713.098f, -528.3185f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -33f };
			break;
		
		case 9:
			Var0 = { -1981.6182f, -1537.2692f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 142f };
			break;
		
		case 10:
			Var0 = { -2100.817f, -2533.2332f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -143f };
			break;
		
		case 11:
			Var0 = { -1599.6425f, -1891.2773f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 112f };
			break;
		
		case 12:
			Var0 = { -733.6151f, -3916.9846f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -168f };
			break;
		
		case 13:
			Var0 = { -363.3534f, -3568.56f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 14:
			Var0 = { -1478.436f, -3753.5378f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 15:
			Var0 = { 1535.974f, -3061.8774f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 62f };
			break;
		
		case 16:
			Var0 = { 2471.4185f, -2430.9297f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 12f };
			break;
		
		case 17:
			Var0 = { 2067.3708f, -2813.0103f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 18:
			Var0 = { 3021.0881f, -1513.6022f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 19:
			Var0 = { 3025.9556f, -704.3854f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 20:
			Var0 = { 2961.8628f, -2007.6315f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 21:
			Var0 = { 3398.1694f, 1958.5214f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 77f };
			break;
		
		case 22:
			Var0 = { 3428.6812f, 1202.0597f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 23:
			Var0 = { 3787.8298f, 2567.8838f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 24:
			Var0 = { 4235.9463f, 4004.2522f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -118f };
			break;
		
		case 25:
			Var0 = { 4245.1514f, 4595.375f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -68f };
			break;
		
		case 26:
			Var0 = { 4209.057f, 3392.7053f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 27:
			Var0 = { 3738.8098f, 5768.2524f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -43f };
			break;
		
		case 28:
			Var0 = { 3472.9656f, 6315.245f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -23f };
			break;
		
		case 29:
			Var0 = { 3693.4683f, 5194.6587f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 122f };
			break;
		
		case 30:
			Var0 = { 572.9806f, 7142.138f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -58f };
			break;
		
		case 31:
			Var0 = { 2024.036f, 6907.536f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -173f };
			break;
		
		case 32:
			Var0 = { 1377.2958f, 6863.2305f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 33:
			Var0 = { -1169.3605f, 6000.214f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 34:
			Var0 = { -759.2205f, 6573.955f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -153f };
			break;
		
		case 35:
			Var0 = { -373.8432f, 6964.86f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -108f };
			break;
		
		case 36:
			Var0 = { 3634.999f, -4781.017f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -179.95f };
			break;
		
		case 37:
			Var0 = { 50.6219f, -3312.5625f, 9.7065f };
			Var0.f_3 = { 0f, 0f, 90.05f };
			break;
		
		case 38:
			Var0 = { -3556.677f, 738.4581f, 9.7065f };
			Var0.f_3 = { 0f, 0f, 0.05f };
			break;
		
		case 39:
			Var0 = { -1766.8353f, 5334.0933f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -9.95f };
			break;
		
		case 40:
			Var0 = { -3280.7068f, -1580.8092f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -12.45f };
			break;
		
		case 41:
			Var0 = { -833.0568f, -4809.8076f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -147.45f };
			break;
	}
	return Var0;
}

void func_43(var uParam0, int iParam1)//Position - 0x88B9
{
	struct<3> Var0;
	
	switch (iParam1)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_48(iParam1, 4, &Var0, -1, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			func_48(iParam1, 5, &Var0, -1, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 19f;
			func_48(iParam1, 276, &Var0, -1, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			func_48(iParam1, 277, &Var0, -1, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 14.5f;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			*(uParam0[0 /*8*/]) = { 355.07663f, -998.96765f, -96.51934f };
			(uParam0[0 /*8*/])->f_3 = { 336.4037f, -998.40845f, -100.92386f };
			(uParam0[0 /*8*/])->f_6 = 15.75f;
			*(uParam0[1 /*8*/]) = { 347.14322f, -1013.49646f, -100.446175f };
			(uParam0[1 /*8*/])->f_3 = { 347.16263f, -1003.1885f, -96.91225f };
			(uParam0[1 /*8*/])->f_6 = 8.25f;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			*(uParam0[0 /*8*/]) = { 270.2482f, -1000.7757f, -95.95466f };
			(uParam0[0 /*8*/])->f_3 = { 251.78305f, -1001.0637f, -102.24785f };
			(uParam0[0 /*8*/])->f_6 = 15f;
			(uParam0[1 /*8*/])->f_6 = 0f;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_48(iParam1, 4, &Var0, 61, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			func_48(iParam1, 5, &Var0, 61, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 21f;
			func_48(iParam1, 276, &Var0, 61, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			func_48(iParam1, 277, &Var0, 61, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 14.5f;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_48(iParam1, 4, &Var0, 73, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			func_48(iParam1, 5, &Var0, 73, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 9.75f;
			func_48(iParam1, 276, &Var0, 73, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			func_48(iParam1, 277, &Var0, 73, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 10.25f;
			func_48(iParam1, 483, &Var0, 73, 0);
			*(uParam0[2 /*8*/]) = { Var0 };
			func_48(iParam1, 484, &Var0, 73, 0);
			(uParam0[2 /*8*/])->f_3 = { Var0 };
			(uParam0[2 /*8*/])->f_6 = 6.75f;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_48(iParam1, 4, &Var0, 77, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			func_48(iParam1, 5, &Var0, 77, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 9.75f;
			func_48(iParam1, 276, &Var0, 77, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			func_48(iParam1, 277, &Var0, 77, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 5f;
			func_48(iParam1, 483, &Var0, 77, 0);
			*(uParam0[2 /*8*/]) = { Var0 };
			func_48(iParam1, 484, &Var0, 77, 0);
			(uParam0[2 /*8*/])->f_3 = { Var0 };
			(uParam0[2 /*8*/])->f_6 = 9.5f;
			break;
		
		case 83:
		case 84:
		case 85:
			func_48(iParam1, 4, &Var0, 83, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			func_48(iParam1, 5, &Var0, 83, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 26.75f;
			func_48(iParam1, 276, &Var0, 83, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			func_48(iParam1, 277, &Var0, 83, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 18.25f;
			break;
		
		case 86:
			func_48(iParam1, 4, &Var0, 86, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			func_48(iParam1, 5, &Var0, 86, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 14.75f;
			func_48(iParam1, 276, &Var0, 86, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			func_48(iParam1, 277, &Var0, 86, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 11.75f;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_48(iParam1, 4, &Var0, 88, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			func_48(iParam1, 5, &Var0, 88, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 27.25f;
			func_48(iParam1, 276, &Var0, 88, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			func_48(iParam1, 277, &Var0, 88, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 7.5f;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			func_48(iParam1, 4, &Var0, 91, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			func_48(iParam1, 5, &Var0, 91, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 29.75f;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			func_48(iParam1, 4, &Var0, 97, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			func_48(iParam1, 5, &Var0, 97, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 22f;
			break;
	}
}

int func_44(int iParam0)//Position - 0x8FB5
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

int func_45(int iParam0, int iParam1)//Position - 0x8FE4
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_46(int iParam0, int iParam1)//Position - 0x90C1
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 73:
			case 77:
			case 74:
			case 75:
			case 76:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
				return 1;
			
			default:
		}
	}
	else if (iParam1 == 77)
	{
		switch (iParam0)
		{
			case 77:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
				return 1;
			
			default:
		}
	}
	else if (iParam1 == 73)
	{
		switch (iParam0)
		{
			case 73:
			case 74:
			case 75:
			case 76:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x917D
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
			return 1;
			break;
	}
	return 0;
}

void func_48(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x91A6
{
	struct<6> Var0[2];
	struct<3> Var1;
	
	Var0[0 /*6*/] = { func_49(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_49(iParam0, bParam4) };
	*uParam2 = { func_40(iParam1, iParam3) };
	Var1 = { *uParam2 - Var0[0 /*6*/] };
	Var1 = { func_39(Var1, -Var0[0 /*6*/].f_3.f_2) };
	Var1 = { func_39(Var1, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0[1 /*6*/], 0f, Var1) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
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
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
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
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

struct<6> func_49(int iParam0, bool bParam1)//Position - 0xA660
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.59628f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 179.99997f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -109.99999f };
			break;
		
		case 7:
			Var0 = { -1471.8821f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.8821f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.39966f };
			Var0.f_3 = { 0f, 0f, -153.30931f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.23286f };
			Var0.f_3 = { 0f, 0f, -152.55307f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.0981f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.1869f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.9543f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.7644f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.6702f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.5712f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.2538f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.0984f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.5178f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.5383f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.9939f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_50(int iParam0)//Position - 0xB216
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
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 109;
			break;
	}
	return -1;
}

void func_51(var uParam0, int iParam1)//Position - 0xB453
{
	switch (iParam1)
	{
		case 2:
			uParam0->f_33 = iParam1;
			uParam0->f_1742.f_20 = { 173.1406f, -1008.0995f, -99.9999f };
			uParam0->f_1742.f_23 = 343.276f;
			uParam0->f_1742.f_16 = { 178.4598f, -1006.1571f, -99.9999f };
			uParam0->f_1742.f_19 = 98.8495f;
			uParam0->f_1742.f_28[0 /*3*/] = { 171.4693f, -1003.6766f, -99.9999f };
			uParam0->f_1742.f_62[0] = 178.4085f;
			uParam0->f_1742.f_28[1 /*3*/] = { 175.2003f, -1003.8159f, -99.9999f };
			uParam0->f_1742.f_62[1] = 178.4085f;
			uParam0->f_1742.f_28[10 /*3*/] = { 170.7203f, -1007.5126f, -99.9999f };
			uParam0->f_1742.f_62[10] = 255.2687f;
			uParam0->f_1742 = { 172.86002f, -1007.8235f, -100.24992f };
			uParam0->f_1742.f_3 = { 172.85133f, -1008.99536f, -96.24992f };
			uParam0->f_1742.f_6 = 6.25f;
			uParam0->f_1742.f_7 = 188.1891f;
			uParam0->f_1742.f_139 = { 177.9457f, -1008.6973f, -97.2447f };
			uParam0->f_1742.f_139.f_3 = { -25.359f, 2.3332f, 44.174f };
			uParam0->f_1742.f_139.f_6 = 50f;
			uParam0->f_1742.f_150 = { 172.7787f, -1003.2102f, -99.9999f };
			func_52(&(uParam0->f_1742.f_153), 2);
			uParam0->f_1742.f_136 = { 177.9406f, -1008.5942f, -97.7757f };
			uParam0->f_1742.f_8 = { 179.06613f, -1003.42395f, -100.06225f };
			uParam0->f_1742.f_8.f_3 = { 179.08899f, -1006.2229f, -97.24995f };
			uParam0->f_1742.f_8.f_6 = 1.75f;
			uParam0->f_1742.f_8.f_7 = 354.2478f;
			uParam0->f_1742.f_149 = 1;
			uParam0->f_1742.f_161 = { 179.13f, -1003.859f, -98.766f };
			uParam0->f_1742.f_164 = { 90f, 0f, 0f };
			uParam0->f_1742.f_167 = { 173.259f, -1006.0999f, -99.9999f };
			break;
		
		case 6:
			uParam0->f_33 = iParam1;
			uParam0->f_1742.f_20 = { 206.1946f, -1006.4241f, -99.999f };
			uParam0->f_1742.f_23 = 11.222f;
			uParam0->f_1742.f_16 = { 206.7599f, -999.1566f, -100f };
			uParam0->f_1742.f_19 = 84.8064f;
			uParam0->f_1742.f_28[0 /*3*/] = { 193.1573f, -1003.3317f, -99.9999f };
			uParam0->f_1742.f_62[0] = 0.0168f;
			uParam0->f_1742.f_28[1 /*3*/] = { 196.6948f, -1003.3317f, -99.9999f };
			uParam0->f_1742.f_62[1] = 0.0168f;
			uParam0->f_1742.f_28[2 /*3*/] = { 200.1865f, -1003.3317f, -99.9999f };
			uParam0->f_1742.f_62[2] = 0.0168f;
			uParam0->f_1742.f_28[3 /*3*/] = { 203.8078f, -1003.3317f, -99.9999f };
			uParam0->f_1742.f_62[3] = 0.0168f;
			uParam0->f_1742.f_28[4 /*3*/] = { 193.5414f, -997.6031f, -99.9999f };
			uParam0->f_1742.f_62[4] = 211.0307f;
			uParam0->f_1742.f_28[5 /*3*/] = { 198.0267f, -997.2191f, -99.9999f };
			uParam0->f_1742.f_62[5] = 206.5741f;
			uParam0->f_1742.f_28[10 /*3*/] = { 201.0628f, -995.7986f, -99.9999f };
			uParam0->f_1742.f_62[10] = 191.848f;
			uParam0->f_1742 = { 198.39148f, -1007.09064f, -100.24996f };
			uParam0->f_1742.f_3 = { 198.4052f, -1008.85223f, -96.25018f };
			uParam0->f_1742.f_6 = 13.75f;
			uParam0->f_1742.f_7 = 186.5288f;
			uParam0->f_1742.f_139 = { 190.7409f, -1007.6721f, -97.4883f };
			uParam0->f_1742.f_139.f_3 = { -21.4541f, -6.6235f, -45.6924f };
			uParam0->f_1742.f_139.f_6 = 50f;
			uParam0->f_1742.f_150 = { 198.6071f, -1000.5364f, -100f };
			func_52(&(uParam0->f_1742.f_153), 6);
			uParam0->f_1742.f_136 = { 207.1707f, -1007.917f, -97.6376f };
			uParam0->f_1742.f_8 = { 207.88666f, -999.07495f, -100.24996f };
			uParam0->f_1742.f_8.f_3 = { 207.09358f, -999.0939f, -97.49996f };
			uParam0->f_1742.f_8.f_6 = 1.75f;
			uParam0->f_1742.f_8.f_7 = 272.9543f;
			uParam0->f_1742.f_149 = 2;
			uParam0->f_1742.f_161 = { 208.69f, -99.051f, -99f };
			uParam0->f_1742.f_164 = { 90f, 0f, 0f };
			uParam0->f_1742.f_167 = { 203.25f, -997.1685f, -99.999f };
			break;
		
		case 10:
			uParam0->f_33 = iParam1;
			uParam0->f_1742.f_20 = { 229.2159f, -1005.1038f, -99.9999f };
			uParam0->f_1742.f_23 = 352.7715f;
			uParam0->f_1742.f_16 = { 237.6044f, -1004.7485f, -99.9999f };
			uParam0->f_1742.f_19 = 80.2776f;
			uParam0->f_1742.f_28[0 /*3*/] = { 224.3354f, -980.8477f, -99.9999f };
			uParam0->f_1742.f_62[0] = 241.3985f;
			uParam0->f_1742.f_28[1 /*3*/] = { 224.3354f, -986.3477f, -99.9999f };
			uParam0->f_1742.f_62[1] = 241.3985f;
			uParam0->f_1742.f_28[2 /*3*/] = { 224.3354f, -991.8477f, -99.9999f };
			uParam0->f_1742.f_62[2] = 241.3985f;
			uParam0->f_1742.f_28[3 /*3*/] = { 224.3354f, -997.3477f, -99.9999f };
			uParam0->f_1742.f_62[3] = 241.3985f;
			uParam0->f_1742.f_28[4 /*3*/] = { 224.3354f, -1002.8477f, -99.9999f };
			uParam0->f_1742.f_62[4] = 241.3985f;
			uParam0->f_1742.f_28[5 /*3*/] = { 232.6471f, -980.8477f, -99.9999f };
			uParam0->f_1742.f_62[5] = 116.3088f;
			uParam0->f_1742.f_28[6 /*3*/] = { 232.6471f, -986.3477f, -99.9999f };
			uParam0->f_1742.f_62[6] = 116.3088f;
			uParam0->f_1742.f_28[7 /*3*/] = { 232.6471f, -991.8477f, -99.9999f };
			uParam0->f_1742.f_62[7] = 116.3088f;
			uParam0->f_1742.f_28[8 /*3*/] = { 232.6471f, -997.3477f, -99.9999f };
			uParam0->f_1742.f_62[8] = 116.3088f;
			uParam0->f_1742.f_28[9 /*3*/] = { 232.6471f, -1002.8477f, -99.9999f };
			uParam0->f_1742.f_62[9] = 116.3088f;
			uParam0->f_1742.f_28[10 /*3*/] = { 223.414f, -977.0094f, -99.9999f };
			uParam0->f_1742.f_62[10] = 259.4501f;
			uParam0->f_1742 = { 228.40834f, -1006.0325f, -100.24992f };
			uParam0->f_1742.f_3 = { 228.33963f, -1011.4153f, -95.77734f };
			uParam0->f_1742.f_6 = 13.75f;
			uParam0->f_1742.f_7 = 177.8521f;
			uParam0->f_1742.f_139 = { 228.277f, -1007.014f, -96.7812f };
			uParam0->f_1742.f_139.f_3 = { -22.3788f, -1.5101f, -0.1088f };
			uParam0->f_1742.f_139.f_6 = 50f;
			uParam0->f_1742.f_150 = { 227.8602f, -991.1093f, -99.9999f };
			func_52(&(uParam0->f_1742.f_153), 10);
			uParam0->f_1742.f_136 = { 237.4485f, -1006.8026f, -98.3606f };
			uParam0->f_1742.f_8 = { 237.95174f, -1004.8421f, -100.24992f };
			uParam0->f_1742.f_8.f_3 = { 239.12814f, -1004.82776f, -97.26435f };
			uParam0->f_1742.f_8.f_6 = 2f;
			uParam0->f_1742.f_8.f_7 = 260.1318f;
			uParam0->f_1742.f_149 = 3;
			uParam0->f_1742.f_161 = { 239.778f, -1004.827f, -98.56f };
			uParam0->f_1742.f_164 = { 90f, 0f, 0f };
			uParam0->f_1742.f_167 = { 228.8723f, -978.2864f, -99.9999f };
			break;
	}
}

struct<8> func_52(var uParam0, int iParam1)//Position - 0xBD00
{
	switch (iParam1)
	{
		case 2:
			*uParam0 = { 175.0434f, -998.7965f, -100.225586f };
			uParam0->f_3 = { 175.08784f, -1009.0036f, -95.99992f };
			uParam0->f_6 = 14f;
			break;
		
		case 6:
			*uParam0 = { 212.9084f, -999.67755f, -99.99996f };
			uParam0->f_3 = { 189.68436f, -1000.068f, -95.2507f };
			uParam0->f_6 = 16.75f;
			break;
		
		case 10:
			*uParam0 = { 230.00945f, -1009.12354f, -100.65389f };
			uParam0->f_3 = { 230.59389f, -964.022f, -94.53618f };
			uParam0->f_6 = 23.5f;
			break;
	}
	return *uParam0;
}

void func_53(var uParam0, int iParam1)//Position - 0xBDC2
{
	struct<4> Var0;
	
	uParam0->f_38[0 /*27*/].f_22 = 5;
	uParam0->f_38[1 /*27*/].f_22 = 5;
	uParam0->f_38[2 /*27*/].f_22 = 5;
	switch (iParam1)
	{
		case 1:
			*uParam0 = { -773.4775f, 310.6321f, 84.6981f };
			uParam0->f_3[0 /*3*/] = { -773.6766f, 310.0611f, 84.6981f };
			uParam0->f_3[1 /*3*/] = { -795.866f, 307.7965f, 84.7028f };
			uParam0->f_24 = { -885.9518f, 223.3702f, 88.5406f };
			uParam0->f_24.f_3 = { 26.6167f, 0f, -45.2182f };
			uParam0->f_24.f_6 = 49.3611f;
			uParam0->f_13 = { -774.1072f, 303.6408f, 84.7069f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -778.32684f, 313.48834f, 84.230034f };
			uParam0->f_38[0 /*27*/].f_3 = { -769.40027f, 313.48862f, 87.72968f };
			uParam0->f_38[0 /*27*/].f_6 = 2.75f;
			uParam0->f_38[0 /*27*/].f_7 = 6.2405f;
			uParam0->f_38[0 /*27*/].f_23 = { -778.7825f, 312.69183f, 84.69943f };
			uParam0->f_38[0 /*27*/].f_16 = { -778.8333f, 313.5024f, 86.1362f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 0f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -774.1633f, 301.68f, 84.7287f };
			uParam0->f_146[0 /*12*/].f_11 = 179.6133f;
			uParam0->f_1922[0 /*9*/] = { -760.2628f, 308.732f, 88.87f };
			uParam0->f_1922[0 /*9*/].f_3 = { -15.524f, 0f, 96.4358f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -796.1804f, 307.5f, 84.20988f };
			uParam0->f_38[1 /*27*/].f_3 = { -796.1525f, 314.7674f, 89.1925f };
			uParam0->f_38[1 /*27*/].f_6 = 9.75f;
			uParam0->f_38[1 /*27*/].f_7 = 359.8296f;
			uParam0->f_38[1 /*27*/].f_23 = { -790.31415f, 308.08603f, 84.70361f };
			uParam0->f_38[1 /*27*/].f_16 = { -790.291f, 308.7186f, 86.1399f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -0.46f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -801.4907f, 309.0866f, 90.1835f };
			uParam0->f_1922[1 /*9*/].f_3 = { -22.1431f, 6.4677f, -147.0698f };
			uParam0->f_1922[1 /*9*/].f_6 = 52.8642f;
			uParam0->f_1742.f_24 = { -789.7264f, 306.3527f, 84.7041f };
			uParam0->f_1742.f_27 = 138.517f;
			uParam0->f_1742.f_108[0 /*3*/] = { -797.892f, 309.0646f, 84.7099f };
			uParam0->f_1742.f_124[0] = 178.3762f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -794.144f, 308.9016f, 84.7101f };
			uParam0->f_1742.f_124[1] = 182.3833f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -795.4863f, 301.8851f, 84.7067f };
			uParam0->f_1742.f_124[2] = 180.8176f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -791.718f, 302.1822f, 84.7114f };
			uParam0->f_1742.f_124[3] = 179.7487f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -799.1396f, 301.9907f, 84.702f };
			uParam0->f_1742.f_124[4] = 180.1214f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			break;
		
		case 2:
			*uParam0 = { -250.8403f, -946.8867f, 30.221f };
			uParam0->f_3[0 /*3*/] = { -261.9f, -970.1f, 30.4f };
			uParam0->f_3[1 /*3*/] = { -281.5628f, -995.2958f, 23.1968f };
			uParam0->f_24 = { -213.5606f, -1073.0078f, 32.9946f };
			uParam0->f_24.f_3 = { 22.7554f, 0f, 28.5746f };
			uParam0->f_24.f_6 = 50.0029f;
			uParam0->f_13 = { -258.657f, -979.0373f, 30.2196f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -263.62405f, -971.4352f, 30.21947f };
			uParam0->f_38[0 /*27*/].f_3 = { -259.74622f, -969.7329f, 33.219643f };
			uParam0->f_38[0 /*27*/].f_6 = 2.75f;
			uParam0->f_38[0 /*27*/].f_7 = 45.6118f;
			uParam0->f_38[0 /*27*/].f_23 = { -260.0395f, -969.3092f, 30.21964f };
			uParam0->f_38[0 /*27*/].f_16 = { -260.5696f, -969.0703f, 31.7697f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 62.19f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -250.4661f, -948.8276f, 30.221f };
			uParam0->f_146[0 /*12*/].f_11 = 280.3501f;
			uParam0->f_1922[0 /*9*/] = { -267.5294f, -972.4159f, 33.8078f };
			uParam0->f_1922[0 /*9*/].f_3 = { -29.1007f, 0f, -87.3852f };
			uParam0->f_1922[0 /*9*/].f_6 = 63.7505f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -283.66278f, -994.5131f, 22.88622f };
			uParam0->f_38[1 /*27*/].f_3 = { -278.31345f, -996.50446f, 26.923477f };
			uParam0->f_38[1 /*27*/].f_6 = 9.5f;
			uParam0->f_38[1 /*27*/].f_7 = 72.7851f;
			uParam0->f_38[1 /*27*/].f_23 = { -280.0236f, -991.7193f, 23.23886f };
			uParam0->f_38[1 /*27*/].f_16 = { -280.5642f, -991.5149f, 24.8514f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 70.39f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -272.2346f, -994.454f, 29.0453f };
			uParam0->f_1922[1 /*9*/].f_3 = { -27.4266f, 0f, 97.1765f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -246.8039f, -1002.9652f, 28.0879f };
			uParam0->f_1742.f_27 = 317.9801f;
			uParam0->f_1742.f_108[0 /*3*/] = { -275.3677f, -999.8269f, 24.4617f };
			uParam0->f_1742.f_124[0] = 250.0199f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -267.1935f, -1002.8241f, 25.8638f };
			uParam0->f_1742.f_124[1] = 250.0199f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -259.9177f, -1005.3362f, 27.0322f };
			uParam0->f_1742.f_124[2] = 250.0199f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -253.0097f, -1007.8217f, 28.0031f };
			uParam0->f_1742.f_124[3] = 250.0199f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -250.705f, -998.8266f, 28.306f };
			uParam0->f_1742.f_124[4] = 252.237f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			break;
		
		case 3:
			*uParam0 = { -1438.1409f, -546.4819f, 33.7424f };
			uParam0->f_3[0 /*3*/] = { -1443.0938f, -544.7684f, 33.7424f };
			uParam0->f_3[1 /*3*/] = { -1456.1455f, -503.6975f, 31.125f };
			uParam0->f_24 = { -1392.0742f, -570.8373f, 31.4774f };
			uParam0->f_24.f_3 = { 30.5301f, 0f, 64.2307f };
			uParam0->f_24.f_6 = 35.9982f;
			uParam0->f_13 = { -1437.538f, -548.4748f, 33.7424f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1443.3271f, -544.2654f, 33.242393f };
			uParam0->f_38[0 /*27*/].f_3 = { -1442.532f, -545.398f, 36.742393f };
			uParam0->f_38[0 /*27*/].f_6 = 3f;
			uParam0->f_38[0 /*27*/].f_7 = 33.6492f;
			uParam0->f_38[0 /*27*/].f_23 = { -1441.4368f, -543.9649f, 33.74239f };
			uParam0->f_38[0 /*27*/].f_16 = { -1441.8552f, -543.4296f, 35.2561f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 34.3f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1441.4111f, -546.8956f, 33.7424f };
			uParam0->f_146[0 /*12*/].f_11 = 228.9348f;
			uParam0->f_1922[0 /*9*/] = { -1440.3973f, -543.9622f, 38.4101f };
			uParam0->f_1922[0 /*9*/].f_3 = { -50.8306f, 0f, 146.0578f };
			uParam0->f_1922[0 /*9*/].f_6 = 66.686f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1454.5865f, -504.59464f, 30.909817f };
			uParam0->f_38[1 /*27*/].f_3 = { -1456.9203f, -501.00455f, 34.775024f };
			uParam0->f_38[1 /*27*/].f_6 = 7.75f;
			uParam0->f_38[1 /*27*/].f_7 = 215.8951f;
			uParam0->f_38[1 /*27*/].f_23 = { -1453.772f, -499.83475f, 31.65348f };
			uParam0->f_38[1 /*27*/].f_16 = { -1453.5149f, -500.2265f, 33.0628f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -145.7f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1461.3362f, -504.5396f, 34.18f };
			uParam0->f_1922[1 /*9*/].f_3 = { -33.3185f, 0f, -101.1299f };
			uParam0->f_1922[1 /*9*/].f_6 = 79.7441f;
			uParam0->f_1742.f_24 = { -1461.4781f, -502.4903f, 31.9616f };
			uParam0->f_1742.f_27 = 344.4053f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1457.9415f, -500.4242f, 31.5223f };
			uParam0->f_1742.f_124[0] = 34.5619f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1456.4272f, -494.6811f, 32.0311f };
			uParam0->f_1742.f_124[1] = 327.6367f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1451.8315f, -489.7961f, 33.1993f };
			uParam0->f_1742.f_124[2] = 303.4561f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1460.2089f, -490.6057f, 32.3611f };
			uParam0->f_1742.f_124[3] = 305.0743f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1454.5066f, -486.7246f, 33.346f };
			uParam0->f_1742.f_124[4] = 304.9227f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			break;
		
		case 4:
			*uParam0 = { -916.2685f, -457.9519f, 38.5999f };
			uParam0->f_3[0 /*3*/] = { -913.85f, -455.1392f, 38.5999f };
			uParam0->f_3[1 /*3*/] = { -820.8674f, -436.8401f, 35.6417f };
			uParam0->f_24 = { -961.9043f, -550.012f, 32.5747f };
			uParam0->f_24.f_3 = { 28.8097f, 0f, -26.8876f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_13 = { -926.9868f, -458.9109f, 36.2744f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -916.7118f, -448.5001f, 38.835438f };
			uParam0->f_38[0 /*27*/].f_3 = { -912.63904f, -456.8022f, 41.344563f };
			uParam0->f_38[0 /*27*/].f_6 = 1.25f;
			uParam0->f_38[0 /*27*/].f_7 = 283.8998f;
			uParam0->f_38[0 /*27*/].f_23 = { -913.59485f, -456.4432f, 38.59986f };
			uParam0->f_38[0 /*27*/].f_16 = { -912.8546f, -456.0751f, 40.1971f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -63f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -916.9406f, -458.2739f, 38.5999f };
			uParam0->f_146[0 /*12*/].f_11 = 118.3416f;
			uParam0->f_1922[0 /*9*/] = { -918.8735f, -446.8497f, 43.319f };
			uParam0->f_1922[0 /*9*/].f_3 = { -27.7029f, 0f, 171.7493f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -820.2496f, -436.82275f, 35.229187f };
			uParam0->f_38[1 /*27*/].f_3 = { -824.77594f, -439.07034f, 39.390945f };
			uParam0->f_38[1 /*27*/].f_6 = 8.75f;
			uParam0->f_38[1 /*27*/].f_7 = 303.8392f;
			uParam0->f_38[1 /*27*/].f_23 = { -819.69104f, -440.63336f, 35.63988f };
			uParam0->f_38[1 /*27*/].f_16 = { -819.3383f, -441.3292f, 37.222f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -153f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -819.843f, -441.3822f, 40.5771f };
			uParam0->f_1922[1 /*9*/].f_3 = { -45.4656f, 0f, 22.1899f };
			uParam0->f_1922[1 /*9*/].f_6 = 62.5824f;
			uParam0->f_1742.f_24 = { -831.2813f, -421.1668f, 35.7651f };
			uParam0->f_1742.f_27 = 115.6516f;
			uParam0->f_1742.f_108[0 /*3*/] = { -825.1858f, -437.1445f, 35.6399f };
			uParam0->f_1742.f_124[0] = 116.8246f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -823.4354f, -440.7882f, 35.6399f };
			uParam0->f_1742.f_124[1] = 120.1966f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -828.4323f, -430.9531f, 35.6402f };
			uParam0->f_1742.f_124[2] = 122.4224f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -830.1832f, -427.4356f, 35.6402f };
			uParam0->f_1742.f_124[3] = 117.4938f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -831.9682f, -437.3509f, 35.6399f };
			uParam0->f_1742.f_124[4] = 1f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			break;
		
		case 5:
			*uParam0 = { -49.541f, -581.6407f, 36.1681f };
			uParam0->f_3[0 /*3*/] = { -47.3145f, -585.9766f, 36.9593f };
			uParam0->f_3[1 /*3*/] = { -33.4055f, -621.6096f, 34.0626f };
			uParam0->f_24 = { -67.3495f, -513.4921f, 42.6787f };
			uParam0->f_24.f_3 = { 23.7233f, 0f, -151.7019f };
			uParam0->f_24.f_6 = 55.5648f;
			uParam0->f_13 = { -54.8035f, -583.1857f, 35.8327f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -47.95183f, -585.80115f, 36.459324f };
			uParam0->f_38[0 /*27*/].f_3 = { -46.80829f, -586.20776f, 40.023293f };
			uParam0->f_38[0 /*27*/].f_6 = 5.75f;
			uParam0->f_38[0 /*27*/].f_7 = 257.7099f;
			uParam0->f_38[0 /*27*/].f_23 = { -48.9106f, -589.7946f, 36.95801f };
			uParam0->f_38[0 /*27*/].f_16 = { -49.0912f, -590.4172f, 38.4656f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 160f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -50.2013f, -584.2267f, 35.8979f };
			uParam0->f_146[0 /*12*/].f_11 = 73.2695f;
			uParam0->f_1922[0 /*9*/] = { -49.4323f, -589.8673f, 40.3768f };
			uParam0->f_1922[0 /*9*/].f_3 = { -33.574f, 0f, -12.6715f };
			uParam0->f_1922[0 /*9*/].f_6 = 64.1407f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -29.237755f, -623.19916f, 33.63252f };
			uParam0->f_38[1 /*27*/].f_3 = { -34.74736f, -621.2883f, 38.789433f };
			uParam0->f_38[1 /*27*/].f_6 = 5.25f;
			uParam0->f_38[1 /*27*/].f_7 = 73.2531f;
			uParam0->f_38[1 /*27*/].f_23 = { -32.09113f, -619.1457f, 34.22395f };
			uParam0->f_38[1 /*27*/].f_16 = { -32.7921f, -618.8801f, 35.2212f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 70.13f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -34.8441f, -625.349f, 38.6518f };
			uParam0->f_1922[1 /*9*/].f_3 = { -31.8634f, 0f, -53.0187f };
			uParam0->f_1922[1 /*9*/].f_6 = 58.2563f;
			uParam0->f_1742.f_24 = { -32.8449f, -625.3205f, 34.2937f };
			uParam0->f_1742.f_27 = 244.5756f;
			uParam0->f_1742.f_108[0 /*3*/] = { -28.0896f, -623.933f, 34.4009f };
			uParam0->f_1742.f_124[0] = 253.536f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -20.8009f, -626.0856f, 34.7246f };
			uParam0->f_1742.f_124[1] = 253.5255f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -13.5114f, -635.1727f, 34.7246f };
			uParam0->f_1742.f_124[2] = 342.8254f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -10.9497f, -627.4315f, 34.7246f };
			uParam0->f_1742.f_124[3] = 339.6547f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -8.0308f, -619.5068f, 35.0813f };
			uParam0->f_1742.f_124[4] = 338.0451f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			break;
		
		case 6:
			*uParam0 = { -938.8708f, -378.8302f, 37.9613f };
			uParam0->f_3[0 /*3*/] = { -932.8344f, -383.6555f, 37.9613f };
			uParam0->f_3[1 /*3*/] = { -877.7446f, -359.9399f, 34.8356f };
			uParam0->f_24 = { -960.2891f, -472.7867f, 39.0439f };
			uParam0->f_24.f_3 = { 24.7986f, 0.0409f, -21.4827f };
			uParam0->f_24.f_6 = 52.0185f;
			uParam0->f_13 = { -933.3674f, -395.4044f, 37.9613f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -932.0299f, -383.20847f, 37.461254f };
			uParam0->f_38[0 /*27*/].f_3 = { -933.48157f, -383.9475f, 40.961254f };
			uParam0->f_38[0 /*27*/].f_6 = 2.75f;
			uParam0->f_38[0 /*27*/].f_7 = 294.3158f;
			uParam0->f_38[0 /*27*/].f_23 = { -934.88226f, -380.37585f, 37.96125f };
			uParam0->f_38[0 /*27*/].f_16 = { -934.3623f, -380.0636f, 39.6193f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -62.99f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -935.1856f, -384.7494f, 37.9613f };
			uParam0->f_146[0 /*12*/].f_11 = 124.6926f;
			uParam0->f_1922[0 /*9*/] = { -937.7342f, -382.6371f, 41.9208f };
			uParam0->f_1922[0 /*9*/].f_3 = { -27.8942f, 0f, -96.6988f };
			uParam0->f_1922[0 /*9*/].f_6 = 57.8662f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -878.41144f, -358.72015f, 34.315826f };
			uParam0->f_38[1 /*27*/].f_3 = { -875.6465f, -363.7974f, 38.61643f };
			uParam0->f_38[1 /*27*/].f_6 = 5.5f;
			uParam0->f_38[1 /*27*/].f_7 = 25.4424f;
			uParam0->f_38[1 /*27*/].f_23 = { -875.52026f, -359.54578f, 34.85448f };
			uParam0->f_38[1 /*27*/].f_16 = { -875.1261f, -359.3368f, 36.5067f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -63f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -880.0004f, -360.9817f, 37.945f };
			uParam0->f_1922[1 /*9*/].f_3 = { -40.5587f, 0f, -86.9507f };
			uParam0->f_1922[1 /*9*/].f_6 = 70.6367f;
			uParam0->f_1742.f_24 = { -866.4783f, -374.252f, 38.5193f };
			uParam0->f_1742.f_27 = 207.0932f;
			uParam0->f_1742.f_108[0 /*3*/] = { -876.1686f, -362.7803f, 35.2834f };
			uParam0->f_1742.f_124[0] = 210.3103f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -872.5136f, -370.2674f, 37.3645f };
			uParam0->f_1742.f_124[1] = 208.8528f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -868.9897f, -377.3745f, 38.3081f };
			uParam0->f_1742.f_124[2] = 205.0445f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -858.408f, -377.153f, 38.376f };
			uParam0->f_1742.f_124[3] = 117.6478f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -879.7519f, -385.9676f, 38.007f };
			uParam0->f_1742.f_124[4] = 111.2521f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			break;
		
		case 7:
			*uParam0 = { -618.4424f, 32.5811f, 42.5305f };
			uParam0->f_3[0 /*3*/] = { -619.1315f, 37.8841f, 42.5883f };
			uParam0->f_3[1 /*3*/] = { -630.5854f, 56.6084f, 42.725f };
			uParam0->f_24 = { -667.2404f, -25.1369f, 43.1678f };
			uParam0->f_24.f_3 = { 21.8261f, 0f, -39.9922f };
			uParam0->f_24.f_6 = 48.3545f;
			uParam0->f_13 = { -618.4301f, 31.9811f, 42.5303f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -622.61395f, 38.36953f, 42.70671f };
			uParam0->f_38[0 /*27*/].f_3 = { -613.7298f, 38.36672f, 45.550163f };
			uParam0->f_38[0 /*27*/].f_6 = 2.75f;
			uParam0->f_38[0 /*27*/].f_7 = 356.9405f;
			uParam0->f_38[0 /*27*/].f_23 = { -614.0399f, 36.98944f, 42.56974f };
			uParam0->f_38[0 /*27*/].f_16 = { -613.5477f, 36.9706f, 44.2302f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -90f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -614.7665f, 40.6905f, 42.5906f };
			uParam0->f_146[0 /*12*/].f_11 = 173.3715f;
			uParam0->f_1922[0 /*9*/] = { -613.7437f, 34.6647f, 46.9721f };
			uParam0->f_1922[0 /*9*/].f_3 = { -35.5307f, 0f, 68.859f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -629.8716f, 56.232082f, 42.22496f };
			uParam0->f_38[1 /*27*/].f_3 = { -634.5947f, 56.23968f, 47.22496f };
			uParam0->f_38[1 /*27*/].f_6 = 10.75f;
			uParam0->f_38[1 /*27*/].f_7 = 272.9018f;
			uParam0->f_38[1 /*27*/].f_23 = { -631.31433f, 52.52833f, 42.72496f };
			uParam0->f_38[1 /*27*/].f_16 = { -631.3015f, 51.9951f, 44.3777f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 180f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -638.8582f, 62.414f, 46.2529f };
			uParam0->f_1922[1 /*9*/].f_3 = { -14.5847f, 0f, -138.3022f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -637.4379f, 59.9699f, 43.4399f };
			uParam0->f_1742.f_27 = 110.4011f;
			uParam0->f_1742.f_108[0 /*3*/] = { -636.2328f, 53.451f, 42.4178f };
			uParam0->f_1742.f_124[0] = 93.8782f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -636.4083f, 56.4379f, 42.7701f };
			uParam0->f_1742.f_124[1] = 92.4188f;
			uParam0->f_1742.f_130[0] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -636.2635f, 59.5577f, 43.2135f };
			uParam0->f_1742.f_124[2] = 90.156f;
			uParam0->f_1742.f_130[0] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -642.732f, 60.1266f, 43.7986f };
			uParam0->f_1742.f_124[3] = 86.9803f;
			uParam0->f_1742.f_130[0] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -642.8851f, 55.8529f, 42.6135f };
			uParam0->f_1742.f_124[4] = 89.2534f;
			uParam0->f_1742.f_130[0] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			break;
		
		case 8:
			*uParam0 = { 282.0378f, -158.5011f, 62.6221f };
			uParam0->f_3[0 /*3*/] = { 284.6026f, -160.2201f, 63.6221f };
			uParam0->f_3[1 /*3*/] = { 280.2899f, -146.4596f, 64.1177f };
			uParam0->f_24 = { 263.1562f, -117.1081f, 76.728f };
			uParam0->f_24.f_3 = { -8.117f, 0f, -147.0301f };
			uParam0->f_24.f_6 = 37.9554f;
			uParam0->f_13 = { 272.6708f, -156.0256f, 62.3682f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 286.77258f, -159.57556f, 63.181328f };
			uParam0->f_38[0 /*27*/].f_3 = { 286.06668f, -161.51372f, 66.6778f };
			uParam0->f_38[0 /*27*/].f_6 = 2.5f;
			uParam0->f_38[0 /*27*/].f_7 = 250.5252f;
			uParam0->f_38[0 /*27*/].f_23 = { 285.21463f, -162.04276f, 63.62207f };
			uParam0->f_38[0 /*27*/].f_16 = { 285.8317f, -162.205f, 65.1628f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -110f };
			uParam0->f_38[0 /*27*/].f_22 = 0;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 282.6784f, -158.9562f, 62.6221f };
			uParam0->f_146[0 /*12*/].f_11 = 71.7708f;
			uParam0->f_1922[0 /*9*/] = { 284.4029f, -164.5213f, 68.2954f };
			uParam0->f_1922[0 /*9*/].f_3 = { -36.4588f, 0f, 18.4559f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 286.91992f, -145.68076f, 63.564697f };
			uParam0->f_38[1 /*27*/].f_3 = { 284.92883f, -151.15083f, 67.925255f };
			uParam0->f_38[1 /*27*/].f_6 = 5.25f;
			uParam0->f_38[1 /*27*/].f_7 = 250.4756f;
			uParam0->f_38[1 /*27*/].f_23 = { 285.92123f, -144.60461f, 64.08031f };
			uParam0->f_38[1 /*27*/].f_16 = { 286.4148f, -144.7555f, 65.6753f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -110f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { 286.9442f, -142.8617f, 68.419f };
			uParam0->f_1922[1 /*9*/].f_3 = { -28.8168f, 3.9695f, 133.951f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 274.3903f, -137.1274f, 65.7109f };
			uParam0->f_1742.f_27 = 89.7489f;
			uParam0->f_1742.f_108[0 /*3*/] = { 278.6978f, -145.3078f, 64.2479f };
			uParam0->f_1742.f_124[0] = 66.6052f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 269.8685f, -133.7206f, 65.8865f };
			uParam0->f_1742.f_124[1] = 342.0529f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 283.8793f, -135.192f, 66.3761f };
			uParam0->f_1742.f_124[2] = 68.5635f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 270.2002f, -163.5318f, 59.976f };
			uParam0->f_1742.f_124[3] = 69.4681f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 265.367f, -150.362f, 62.7343f };
			uParam0->f_1742.f_124[4] = 338.2748f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 9:
			*uParam0 = { 2.8889f, 35.7762f, 70.5349f };
			uParam0->f_3[0 /*3*/] = { 2.84f, 35.2876f, 70.5349f };
			uParam0->f_3[1 /*3*/] = { -11.7956f, 36.4751f, 70.6604f };
			uParam0->f_24 = { -19.3488f, -9.4322f, 89.2875f };
			uParam0->f_24.f_3 = { -5.8716f, 0f, -21.2911f };
			uParam0->f_24.f_6 = 40.1614f;
			uParam0->f_13 = { 0.7433f, 30.957f, 70.0813f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 2.70167f, 37.91897f, 69.36495f };
			uParam0->f_38[0 /*27*/].f_3 = { 4.666537f, 37.202835f, 73.37553f };
			uParam0->f_38[0 /*27*/].f_6 = 2.5f;
			uParam0->f_38[0 /*27*/].f_7 = 336.3539f;
			uParam0->f_38[0 /*27*/].f_23 = { 5.72587f, 36.02024f, 70.53527f };
			uParam0->f_38[0 /*27*/].f_16 = { 6.1991f, 35.8211f, 72.121f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -110f };
			uParam0->f_38[0 /*27*/].f_22 = 0;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 1.7704f, 32.7973f, 70.0909f };
			uParam0->f_146[0 /*12*/].f_11 = 149.8567f;
			uParam0->f_1922[0 /*9*/] = { 5.6274f, 36.3837f, 73.3125f };
			uParam0->f_1922[0 /*9*/].f_3 = { -32.924f, 0f, 101.9878f };
			uParam0->f_1922[0 /*9*/].f_6 = 50.5336f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -15.476118f, 44.57702f, 69.84895f };
			uParam0->f_38[1 /*27*/].f_3 = { -4.834036f, 40.702763f, 73.876465f };
			uParam0->f_38[1 /*27*/].f_6 = 5.75f;
			uParam0->f_38[1 /*27*/].f_7 = 345.9296f;
			uParam0->f_38[1 /*27*/].f_23 = { -10.3984f, 41.7438f, 70.4113f };
			uParam0->f_38[1 /*27*/].f_16 = { -5.2392f, 39.6933f, 71.7436f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -110f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -3.7128f, 38.3486f, 74.8271f };
			uParam0->f_1922[1 /*9*/].f_3 = { -30.142f, 4.818f, 92.9892f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -4.8106f, 34.7009f, 70.3499f };
			uParam0->f_1742.f_27 = 165.3343f;
			uParam0->f_1742.f_108[0 /*3*/] = { -14.0049f, 39.8929f, 70.7672f };
			uParam0->f_1742.f_124[0] = 161.0269f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -8.7064f, 37.7788f, 70.5283f };
			uParam0->f_1742.f_124[1] = 161.1748f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -13.4518f, 32.8482f, 70.5989f };
			uParam0->f_1742.f_124[2] = 160.3379f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -19.8498f, 34.1721f, 70.7425f };
			uParam0->f_1742.f_124[3] = 111.2427f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -9.1111f, 30.4793f, 70.2918f };
			uParam0->f_1742.f_124[4] = 206.6557f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 10:
			*uParam0 = { 9.74f, 84.6906f, 77.3975f };
			uParam0->f_3[0 /*3*/] = { 10.4433f, 83.3155f, 77.3975f };
			uParam0->f_3[1 /*3*/] = { 26.8874f, 82.7536f, 73.7902f };
			uParam0->f_24 = { -42.7037f, 92.9252f, 89.2578f };
			uParam0->f_24.f_3 = { -6.9786f, 0f, -109.8209f };
			uParam0->f_24.f_6 = 42.5562f;
			uParam0->f_13 = { -11.8278f, 96.4341f, 77.5908f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 10.325045f, 80.74281f, 77.242455f };
			uParam0->f_38[0 /*27*/].f_3 = { 8.381888f, 81.452484f, 80.49538f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 161.0883f;
			uParam0->f_38[0 /*27*/].f_23 = { 11.84303f, 81.16698f, 77.43491f };
			uParam0->f_38[0 /*27*/].f_16 = { 12.5023f, 80.8683f, 78.9946f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -110f };
			uParam0->f_38[0 /*27*/].f_22 = 0;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -12.7328f, 94.7645f, 77.2155f };
			uParam0->f_146[0 /*12*/].f_11 = 140.6907f;
			uParam0->f_1922[0 /*9*/] = { 14.4919f, 82.5583f, 80.6919f };
			uParam0->f_1922[0 /*9*/].f_3 = { -19.366f, 0f, 70.3056f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 28.161423f, 75.670265f, 73.520164f };
			uParam0->f_38[1 /*27*/].f_3 = { 22.641685f, 77.67749f, 77.291046f };
			uParam0->f_38[1 /*27*/].f_6 = 5f;
			uParam0->f_38[1 /*27*/].f_7 = 159.8871f;
			uParam0->f_38[1 /*27*/].f_23 = { 23.60801f, 78.95453f, 73.63702f };
			uParam0->f_38[1 /*27*/].f_16 = { 23.3697f, 78.2563f, 75.2878f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 160f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { 21.0105f, 79.3261f, 76.9841f };
			uParam0->f_1922[1 /*9*/].f_3 = { -23.5919f, 2.1002f, -88.4588f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 30.0462f, 77.2835f, 73.7957f };
			uParam0->f_1742.f_27 = 280.8853f;
			uParam0->f_1742.f_108[0 /*3*/] = { 23.1398f, 81.3826f, 73.6617f };
			uParam0->f_1742.f_124[0] = 282.895f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 30.0217f, 79.9709f, 73.9552f };
			uParam0->f_1742.f_124[1] = 279.5829f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 38.0929f, 77.4687f, 74.4692f };
			uParam0->f_1742.f_124[2] = 247.9818f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 47.0701f, 79.3809f, 75.4097f };
			uParam0->f_1742.f_124[3] = 340.0299f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 43.1922f, 69.5084f, 73.3978f };
			uParam0->f_1742.f_124[4] = 159.0439f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 11:
			*uParam0 = { -512.1465f, 111.2223f, 62.351f };
			uParam0->f_3[0 /*3*/] = { -512.0948f, 110.6228f, 62.5925f };
			uParam0->f_3[1 /*3*/] = { -496.6235f, 84.257f, 54.8619f };
			uParam0->f_24 = { -534.6452f, 137.1912f, 75.7177f };
			uParam0->f_24.f_3 = { -4.1062f, 0f, -142.8033f };
			uParam0->f_24.f_6 = 36.7108f;
			uParam0->f_13 = { -512.1901f, 115.9776f, 62.318f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -510.47556f, 107.98821f, 60.590782f };
			uParam0->f_38[0 /*27*/].f_3 = { -512.752f, 107.6685f, 65.34436f };
			uParam0->f_38[0 /*27*/].f_6 = 3f;
			uParam0->f_38[0 /*27*/].f_7 = 194.6077f;
			uParam0->f_38[0 /*27*/].f_23 = { -510.2329f, 108.6199f, 62.80056f };
			uParam0->f_38[0 /*27*/].f_16 = { -510.1327f, 108.0511f, 64.2438f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -172f };
			uParam0->f_38[0 /*27*/].f_22 = 0;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -512.5056f, 111.1181f, 62.3456f };
			uParam0->f_146[0 /*12*/].f_11 = 19.982f;
			uParam0->f_1922[0 /*9*/] = { -508.4918f, 109.1324f, 65.8247f };
			uParam0->f_1922[0 /*9*/].f_3 = { -19.4084f, 0f, 61.2413f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -495.9238f, 87.28843f, 54.637875f };
			uParam0->f_38[1 /*27*/].f_3 = { -496.08926f, 81.49071f, 58.332943f };
			uParam0->f_38[1 /*27*/].f_6 = 3.75f;
			uParam0->f_38[1 /*27*/].f_7 = 272.1017f;
			uParam0->f_38[1 /*27*/].f_23 = { -497.05954f, 78.38213f, 54.88129f };
			uParam0->f_38[1 /*27*/].f_16 = { -496.4968f, 78.337f, 56.4797f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -91.5f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -496.7119f, 77.6624f, 59.1793f };
			uParam0->f_1922[1 /*9*/].f_3 = { -28.4671f, 4.9064f, 26.285f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -498.7155f, 79.435f, 55.0144f };
			uParam0->f_1742.f_27 = 88.8337f;
			uParam0->f_1742.f_108[0 /*3*/] = { -499.8006f, 84.5234f, 55.1152f };
			uParam0->f_1742.f_124[0] = 88.442f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -508.5442f, 84.7626f, 55.8091f };
			uParam0->f_1742.f_124[1] = 88.4254f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -517.9949f, 85.0214f, 56.5581f };
			uParam0->f_1742.f_124[2] = 88.4314f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -529.6277f, 84.8542f, 57.3585f };
			uParam0->f_1742.f_124[3] = 91.5164f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -538.8803f, 84.3561f, 57.4109f };
			uParam0->f_1742.f_124[4] = 84.0946f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 12:
			*uParam0 = { -197.3405f, 88.1053f, 68.7422f };
			uParam0->f_3[0 /*3*/] = { -197.516f, 87.9089f, 68.7457f };
			uParam0->f_3[1 /*3*/] = { -213.6f, 38f, 60.5f };
			uParam0->f_24 = { -198.4187f, 129.4615f, 77.2345f };
			uParam0->f_24.f_3 = { -1.6958f, 0f, -165.7142f };
			uParam0->f_24.f_6 = 39.1733f;
			uParam0->f_13 = { -202.4989f, 98.5772f, 68.4945f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -197.09596f, 85.23809f, 67.55541f };
			uParam0->f_38[0 /*27*/].f_3 = { -198.59425f, 85.55336f, 71.305954f };
			uParam0->f_38[0 /*27*/].f_6 = 2.75f;
			uParam0->f_38[0 /*27*/].f_7 = 171.9653f;
			uParam0->f_38[0 /*27*/].f_23 = { -198.96335f, 86.33958f, 68.75433f };
			uParam0->f_38[0 /*27*/].f_16 = { -199.1217f, 85.5957f, 70.3121f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 169f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -199.7983f, 94.968f, 68.5241f };
			uParam0->f_146[0 /*12*/].f_11 = 33.5049f;
			uParam0->f_1922[0 /*9*/] = { -195.7844f, 86.3135f, 72.2746f };
			uParam0->f_1922[0 /*9*/].f_3 = { -20.9847f, 0f, 31.3591f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -211.76819f, 31.646317f, 58.199608f };
			uParam0->f_38[1 /*27*/].f_3 = { -209.55156f, 43.9165f, 62.879993f };
			uParam0->f_38[1 /*27*/].f_6 = 5f;
			uParam0->f_38[1 /*27*/].f_7 = 267.3955f;
			uParam0->f_38[1 /*27*/].f_23 = { -212.29578f, 32.53296f, 58.82444f };
			uParam0->f_38[1 /*27*/].f_16 = { -212.4217f, 31.8592f, 60.4929f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 171f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -209.6682f, 68.034f, 69.8104f };
			uParam0->f_1922[1 /*9*/].f_3 = { -21.822f, 0f, -10.4246f };
			uParam0->f_1922[1 /*9*/].f_6 = 62.2409f;
			uParam0->f_1742.f_24 = { -208.6779f, 79.2142f, 66.6934f };
			uParam0->f_1742.f_27 = 70.3424f;
			uParam0->f_1742.f_108[0 /*3*/] = { -215.2726f, 36.7172f, 58.5308f };
			uParam0->f_1742.f_124[0] = 83.0326f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -214.0385f, 40.5861f, 59.1211f };
			uParam0->f_1742.f_124[1] = 80.4651f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -222.028f, 39.8632f, 58.6695f };
			uParam0->f_1742.f_124[2] = 78.6603f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -220.3056f, 43.9508f, 59.7136f };
			uParam0->f_1742.f_124[3] = 80.1687f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -222.5635f, 35.5804f, 57.6641f };
			uParam0->f_1742.f_124[4] = 82.3515f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 13:
			*uParam0 = { -631.8065f, 170.2451f, 60.3941f };
			uParam0->f_3[0 /*3*/] = { -628.8236f, 169.5813f, 60.1437f };
			uParam0->f_3[1 /*3*/] = { -628.5014f, 152.7422f, 55.7063f };
			uParam0->f_24 = { -696.6976f, 83.2761f, 71.5015f };
			uParam0->f_24.f_3 = { 1.1701f, 0f, -49.3976f };
			uParam0->f_24.f_6 = 23.6246f;
			uParam0->f_13 = { -637.3282f, 169.9458f, 60.4572f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -627.3895f, 171.05307f, 62.466927f };
			uParam0->f_38[0 /*27*/].f_3 = { -627.39166f, 168.34662f, 59.97893f };
			uParam0->f_38[0 /*27*/].f_6 = 2.25f;
			uParam0->f_38[0 /*27*/].f_7 = 277.959f;
			uParam0->f_38[0 /*27*/].f_23 = { -628.05597f, 168.0867f, 60.15696f };
			uParam0->f_38[0 /*27*/].f_16 = { -627.387f, 168.1326f, 61.8173f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -90f };
			uParam0->f_38[0 /*27*/].f_22 = 0;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -630.0102f, 169.6864f, 60.2309f };
			uParam0->f_146[0 /*12*/].f_11 = 92.4426f;
			uParam0->f_1922[0 /*9*/] = { -628.483f, 163.9228f, 64.2357f };
			uParam0->f_1922[0 /*9*/].f_3 = { -30.7736f, 0f, 7.6243f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -625.9822f, 155.98778f, 59.131115f };
			uParam0->f_38[1 /*27*/].f_3 = { -625.9763f, 148.7176f, 55.129967f };
			uParam0->f_38[1 /*27*/].f_6 = 2.5f;
			uParam0->f_38[1 /*27*/].f_7 = 274.2654f;
			uParam0->f_38[1 /*27*/].f_23 = { -626.45874f, 149.28088f, 55.50729f };
			uParam0->f_38[1 /*27*/].f_16 = { -626.4755f, 148.8474f, 57.1539f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 179.5f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -626.3999f, 148.4401f, 59.2913f };
			uParam0->f_1922[1 /*9*/].f_3 = { -30.5292f, 2.6808f, 39.367f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -637.4221f, 158.0952f, 57.6976f };
			uParam0->f_1742.f_27 = 98.4512f;
			uParam0->f_1742.f_108[0 /*3*/] = { -630.2997f, 152.306f, 55.9224f };
			uParam0->f_1742.f_124[0] = 88.1313f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -638.1433f, 150.1428f, 56.6599f };
			uParam0->f_1742.f_124[1] = 105.7233f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -638.8364f, 154.329f, 57.0811f };
			uParam0->f_1742.f_124[2] = 76.4708f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -642.5622f, 144.1441f, 56.0075f };
			uParam0->f_1742.f_124[3] = 178.5606f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -643.6265f, 161.9029f, 58.4242f };
			uParam0->f_1742.f_124[4] = 2.3175f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 14:
			*uParam0 = { -973.3757f, -1429.4247f, 6.6791f };
			uParam0->f_3[0 /*3*/] = { -970.4616f, -1431.5524f, 6.6791f };
			uParam0->f_3[1 /*3*/] = { -979.8791f, -1449.7249f, 3.7352f };
			uParam0->f_24 = { -1005.5947f, -1485.3966f, 16.3224f };
			uParam0->f_24.f_3 = { -0.7255f, 0f, -31.8818f };
			uParam0->f_24.f_6 = 38.7981f;
			uParam0->f_13 = { -990.0446f, -1438.6542f, 4.0512f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -969.6593f, -1429.2917f, 9.274211f };
			uParam0->f_38[0 /*27*/].f_3 = { -968.3226f, -1432.7996f, 5.267247f };
			uParam0->f_38[0 /*27*/].f_6 = 2.5f;
			uParam0->f_38[0 /*27*/].f_7 = 288.7475f;
			uParam0->f_38[0 /*27*/].f_23 = { -968.9998f, -1433.1825f, 6.67908f };
			uParam0->f_38[0 /*27*/].f_16 = { -968.2812f, -1432.9247f, 8.1858f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 70f };
			uParam0->f_38[0 /*27*/].f_22 = 1;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -975.5323f, -1435.4574f, 6.6791f };
			uParam0->f_146[0 /*12*/].f_11 = 114.4599f;
			uParam0->f_1922[0 /*9*/] = { -974.1971f, -1427.8442f, 9.1311f };
			uParam0->f_1922[0 /*9*/].f_3 = { -10.871f, 0f, -136.918f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -979.59955f, -1446.8773f, 6.075722f };
			uParam0->f_38[1 /*27*/].f_3 = { -977.9403f, -1451.4855f, 3.582479f };
			uParam0->f_38[1 /*27*/].f_6 = 2.25f;
			uParam0->f_38[1 /*27*/].f_7 = 290.9057f;
			uParam0->f_38[1 /*27*/].f_23 = { -980.51587f, -1447.7721f, 3.72778f };
			uParam0->f_38[1 /*27*/].f_16 = { -980.7506f, -1447.0208f, 4.5223f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -70f };
			uParam0->f_38[1 /*27*/].f_22 = 3;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -977.2012f, -1452.5908f, 6.194f };
			uParam0->f_1922[1 /*9*/].f_3 = { -22.1332f, 1.2127f, 61.7078f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -988.2418f, -1447.7733f, 4.1853f };
			uParam0->f_1742.f_27 = 119.0613f;
			uParam0->f_1742.f_108[0 /*3*/] = { -992.6162f, -1425.0612f, 4.0163f };
			uParam0->f_1742.f_124[0] = 108.4024f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -998.91f, -1427.1215f, 4.0575f };
			uParam0->f_1742.f_124[1] = 109.1714f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1003.8618f, -1434.2129f, 4.0621f };
			uParam0->f_1742.f_124[2] = 145.2133f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1003.1061f, -1424.0535f, 4.0372f };
			uParam0->f_1742.f_124[3] = 109.7396f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1010.4411f, -1426.668f, 4.0384f };
			uParam0->f_1742.f_124[4] = 109.6394f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 15:
			*uParam0 = { -829.1362f, -855.0104f, 18.6297f };
			uParam0->f_3[0 /*3*/] = { -831.4647f, -861.3573f, 19.6944f };
			uParam0->f_3[1 /*3*/] = { -761.7806f, -870.2498f, 20.0595f };
			uParam0->f_24 = { -793.917f, -794.2643f, 43.4654f };
			uParam0->f_24.f_3 = { -9.0463f, 0f, 177.2242f };
			uParam0->f_24.f_6 = 44.2989f;
			uParam0->f_13 = { -831.3257f, -850.3224f, 18.5661f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -828.7973f, -862.9904f, 21.958952f };
			uParam0->f_38[0 /*27*/].f_3 = { -833.89624f, -862.95685f, 19.441055f };
			uParam0->f_38[0 /*27*/].f_6 = 1.25f;
			uParam0->f_38[0 /*27*/].f_7 = 185.1126f;
			uParam0->f_38[0 /*27*/].f_23 = { -833.6105f, -862.5637f, 19.69465f };
			uParam0->f_38[0 /*27*/].f_16 = { -833.9494f, (-862.6305f + 0.1f), 21.2407f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 90f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -831.7097f, -860.6437f, 19.6944f };
			uParam0->f_146[0 /*12*/].f_11 = 358.8877f;
			uParam0->f_1922[0 /*9*/] = { -828.6544f, -862.7701f, 23.569f };
			uParam0->f_1922[0 /*9*/].f_3 = { -41.3573f, 0f, 58.9153f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -763.5058f, -874.87396f, 23.628805f };
			uParam0->f_38[1 /*27*/].f_3 = { -763.52124f, -866.5589f, 19.64355f };
			uParam0->f_38[1 /*27*/].f_6 = 2.5f;
			uParam0->f_38[1 /*27*/].f_7 = 91.3542f;
			uParam0->f_38[1 /*27*/].f_23 = { -762.8984f, -866.16376f, 19.91171f };
			uParam0->f_38[1 /*27*/].f_16 = { -763.3941f, -866.1509f, 21.3894f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 90f };
			uParam0->f_38[1 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -763.5423f, -875.5127f, 23.5228f };
			uParam0->f_1922[1 /*9*/].f_3 = { -21.7641f, 5.0336f, -41.0061f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -761.8991f, -865.2859f, 20.1452f };
			uParam0->f_1742.f_27 = 258.711f;
			uParam0->f_1742.f_108[0 /*3*/] = { -759.5589f, -868.3928f, 20.5444f };
			uParam0->f_1742.f_124[0] = 268.3556f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -760.1168f, -872.2332f, 20.2893f };
			uParam0->f_1742.f_124[1] = 268.082f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -754.119f, -874.6438f, 20.7304f };
			uParam0->f_1742.f_124[2] = 229.9483f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -753.7412f, -869.8978f, 20.9882f };
			uParam0->f_1742.f_124[3] = 268.8166f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -754.4808f, -863.8301f, 21.2895f };
			uParam0->f_1742.f_124[4] = 311.049f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 16:
			*uParam0 = { -757.5739f, -755.5591f, 25.5697f };
			uParam0->f_3[0 /*3*/] = { -762.0167f, -753.7158f, 26.8736f };
			uParam0->f_3[1 /*3*/] = { -786.6761f, -800.9836f, 19.6249f };
			uParam0->f_24 = { -840.3021f, -913.9555f, 62.548f };
			uParam0->f_24.f_3 = { -1.9782f, 0f, -29.9785f };
			uParam0->f_24.f_6 = 33.9137f;
			uParam0->f_13 = { -753.0964f, -753.3385f, 25.6773f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -763.9045f, -756.6182f, 29.50931f };
			uParam0->f_38[0 /*27*/].f_3 = { -763.8939f, -750.9608f, 25.513952f };
			uParam0->f_38[0 /*27*/].f_6 = 2.5f;
			uParam0->f_38[0 /*27*/].f_7 = 90.155f;
			uParam0->f_38[0 /*27*/].f_23 = { -763.183f, -750.9277f, 26.87358f };
			uParam0->f_38[0 /*27*/].f_16 = { -763.9045f, (-750.8787f + -0.1f), 28.4594f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 90f };
			uParam0->f_38[0 /*27*/].f_22 = 0;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -761.0186f, -753.8593f, 26.8736f };
			uParam0->f_146[0 /*12*/].f_11 = 270.2364f;
			uParam0->f_1922[0 /*9*/] = { -763.5029f, -757.6476f, 30.9677f };
			uParam0->f_1922[0 /*9*/].f_3 = { -38.1858f, 0f, -14.2267f };
			uParam0->f_1922[0 /*9*/].f_6 = 50.0297f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -791.6463f, -798.51544f, 23.021124f };
			uParam0->f_38[1 /*27*/].f_3 = { -781.8895f, -798.5438f, 19.494862f };
			uParam0->f_38[1 /*27*/].f_6 = 4f;
			uParam0->f_38[1 /*27*/].f_7 = 332.1913f;
			uParam0->f_38[1 /*27*/].f_23 = { -782.69604f, -799.98175f, 19.759f };
			uParam0->f_38[1 /*27*/].f_16 = { -782.0396f, -799.9789f, 21.4256f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -90f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -792.3658f, -802.0107f, 23.5808f };
			uParam0->f_1922[1 /*9*/].f_3 = { -33.4177f, 1.7446f, -129.4547f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -790.1055f, -803.9869f, 19.6203f };
			uParam0->f_1742.f_27 = 185.4586f;
			uParam0->f_1742.f_108[0 /*3*/] = { -788.9369f, -802.5391f, 19.6203f };
			uParam0->f_1742.f_124[0] = 178.9109f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -784.7282f, -802.613f, 19.6905f };
			uParam0->f_1742.f_124[1] = 178.8607f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -788.4198f, -810.0004f, 19.6203f };
			uParam0->f_1742.f_124[2] = 177.8878f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -788.6883f, -816.7969f, 19.8097f };
			uParam0->f_1742.f_124[3] = 177.8166f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -784.2047f, -821.8116f, 20.0773f };
			uParam0->f_1742.f_124[4] = 181.9788f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 17:
			*uParam0 = { -45.1289f, -57.0925f, 62.2531f };
			uParam0->f_3[0 /*3*/] = { -41.6451f, -58.4377f, 62.509f };
			uParam0->f_3[1 /*3*/] = { -38.6172f, -64.4738f, 58.4488f };
			uParam0->f_24 = { -83.9575f, -39.5983f, 72.6015f };
			uParam0->f_24.f_3 = { -5.5826f, 0f, -106.7397f };
			uParam0->f_24.f_6 = 24.661f;
			uParam0->f_13 = { -53.1021f, -61.712f, 59.0581f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -40.1706f, -58.139736f, 65.36941f };
			uParam0->f_38[0 /*27*/].f_3 = { -40.629402f, -59.639935f, 62.382698f };
			uParam0->f_38[0 /*27*/].f_6 = 2f;
			uParam0->f_38[0 /*27*/].f_7 = 251.3745f;
			uParam0->f_38[0 /*27*/].f_23 = { -41.5895f, -58.7089f, 63.6596f };
			uParam0->f_38[0 /*27*/].f_16 = { -40.9042f, -60.013f, 64.324f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -107.5f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -43.5543f, -61.1891f, 62.5837f };
			uParam0->f_146[0 /*12*/].f_11 = 83.4021f;
			uParam0->f_1922[0 /*9*/] = { -39.88f, -55.6415f, 66.3075f };
			uParam0->f_1922[0 /*9*/].f_3 = { -38.5367f, 0f, 135.6675f };
			uParam0->f_1922[0 /*9*/].f_6 = 50.0297f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -44.13745f, -61.39634f, 61.97551f };
			uParam0->f_38[1 /*27*/].f_3 = { -28.90347f, -65.97524f, 58.491375f };
			uParam0->f_38[1 /*27*/].f_6 = 1.75f;
			uParam0->f_38[1 /*27*/].f_7 = 349.0972f;
			uParam0->f_38[1 /*27*/].f_23 = { -29.33882f, -66.43806f, 58.53217f };
			uParam0->f_38[1 /*27*/].f_16 = { -28.943f, -66.5774f, 60.244f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -107f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -28.5985f, -67.3177f, 62.0343f };
			uParam0->f_1922[1 /*9*/].f_3 = { -16.5682f, 0f, 79.599f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -45.2779f, -63.3981f, 58.4721f };
			uParam0->f_1742.f_27 = 110.5964f;
			uParam0->f_1742.f_108[0 /*3*/] = { -30.9354f, -68.7573f, 58.3542f };
			uParam0->f_1742.f_124[0] = 196.156f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -37.6065f, -66.7263f, 58.2968f };
			uParam0->f_1742.f_124[1] = 114.2586f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -43.3868f, -65.4183f, 58.2721f };
			uParam0->f_1742.f_124[2] = 99.3293f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -50.3881f, -64.1393f, 58.5953f };
			uParam0->f_1742.f_124[3] = 76.2414f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -57.0713f, -62.5026f, 58.7976f };
			uParam0->f_1742.f_124[4] = 77.0011f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 18:
			*uParam0 = { -206.7293f, 184.142f, 79.3279f };
			uParam0->f_3[0 /*3*/] = { -201.9074f, 186.2365f, 79.3279f };
			uParam0->f_3[1 /*3*/] = { -204.1669f, 192.5419f, 79.0583f };
			uParam0->f_24 = { -228.8237f, 215.2885f, 91.0992f };
			uParam0->f_24.f_3 = { -8.9858f, 0f, -135.2404f };
			uParam0->f_24.f_6 = 30.8687f;
			uParam0->f_13 = { -213.5534f, 184.6969f, 77.9346f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -200.39899f, 186.91602f, 81.71852f };
			uParam0->f_38[0 /*27*/].f_3 = { -200.39899f, 185.53555f, 75.23538f };
			uParam0->f_38[0 /*27*/].f_6 = 2f;
			uParam0->f_38[0 /*27*/].f_7 = 271.6089f;
			uParam0->f_38[0 /*27*/].f_23 = { -200.9272f, 185.13937f, 79.31755f };
			uParam0->f_38[0 /*27*/].f_16 = { -200.5526f, 185.1893f, 80.9715f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -90f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -205.1874f, 184.6205f, 79.3279f };
			uParam0->f_146[0 /*12*/].f_11 = 91.1398f;
			uParam0->f_1922[0 /*9*/] = { -200.7608f, 184.2875f, 82.3418f };
			uParam0->f_1922[0 /*9*/].f_3 = { -40.6867f, 0f, 14.5767f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -200.46805f, 196.42276f, 82.00661f };
			uParam0->f_38[1 /*27*/].f_3 = { -200.39905f, 189.02618f, 77.97586f };
			uParam0->f_38[1 /*27*/].f_6 = 2.5f;
			uParam0->f_38[1 /*27*/].f_7 = 261.7313f;
			uParam0->f_38[1 /*27*/].f_23 = { -201.2675f, 192.7632f, 78.464f };
			uParam0->f_38[1 /*27*/].f_16 = { -200.5526f, 196.626f, 80.005f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -90f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -200.8381f, 197.3646f, 82.348f };
			uParam0->f_1922[1 /*9*/].f_3 = { -21.7228f, 0f, 142.5736f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -212.6341f, 187.5834f, 78.6904f };
			uParam0->f_1742.f_27 = 95.5658f;
			uParam0->f_1742.f_108[0 /*3*/] = { -204.3918f, 193.063f, 79.1536f };
			uParam0->f_1742.f_124[0] = 87.3067f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -211.8205f, 193.6091f, 80.2532f };
			uParam0->f_1742.f_124[1] = 83.0203f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -216.5322f, 189.6087f, 79.1441f };
			uParam0->f_1742.f_124[2] = 119.5884f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -216.1513f, 197.3657f, 81.0638f };
			uParam0->f_1742.f_124[3] = 59.2407f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -216.4448f, 204.4023f, 82.9056f };
			uParam0->f_1742.f_124[4] = 353.2901f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 19:
			*uParam0 = { -811.7045f, -984.1961f, 13.1538f };
			uParam0->f_3[0 /*3*/] = { -813.1431f, -981.0231f, 13.1452f };
			uParam0->f_3[1 /*3*/] = { -800.3237f, -981.835f, 12.4718f };
			uParam0->f_24 = { -813.5714f, -1050.2361f, 23.4961f };
			uParam0->f_24.f_3 = { -2.8056f, 0f, -3.2598f };
			uParam0->f_24.f_6 = 18.4201f;
			uParam0->f_13 = { -816.0616f, -992.5058f, 12.4806f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -812.9588f, -978.91046f, 16.246567f };
			uParam0->f_38[0 /*27*/].f_3 = { -811.20996f, -981.40765f, 12.698908f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 306.7349f;
			uParam0->f_38[0 /*27*/].f_23 = { -813.54626f, -979.87274f, 13.18758f };
			uParam0->f_38[0 /*27*/].f_16 = { -813.8711f, -979.4198f, 14.7474f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 35f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -814.5236f, -983.1685f, 13.0938f };
			uParam0->f_146[0 /*12*/].f_11 = 175.3115f;
			uParam0->f_1922[0 /*9*/] = { -808.9595f, -985.3073f, 16.4923f };
			uParam0->f_1922[0 /*9*/].f_3 = { -23.308f, 0f, 54.3617f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -800.3867f, -981.6565f, 12.040546f };
			uParam0->f_38[1 /*27*/].f_3 = { -802.4772f, -978.6157f, 15.51671f };
			uParam0->f_38[1 /*27*/].f_6 = 6.75f;
			uParam0->f_38[1 /*27*/].f_7 = 44.5014f;
			uParam0->f_38[1 /*27*/].f_23 = { -802.6703f, -982.95984f, 12.21205f };
			uParam0->f_38[1 /*27*/].f_16 = { -803.2634f, -983.3758f, 13.0737f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 34.2f };
			uParam0->f_38[1 /*27*/].f_22 = 3;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -803.7123f, -982.5094f, 14.1644f };
			uParam0->f_1922[1 /*9*/].f_3 = { -13.7254f, 2.7563f, -86.2615f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -801.9234f, -987.0692f, 12.7538f };
			uParam0->f_1742.f_27 = 221.5954f;
			uParam0->f_1742.f_108[0 /*3*/] = { -799.9266f, -984.2426f, 12.8616f };
			uParam0->f_1742.f_124[0] = 216.4714f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -797.6566f, -982.7219f, 12.9562f };
			uParam0->f_1742.f_124[1] = 215.8357f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -792.1985f, -981.5099f, 13.2024f };
			uParam0->f_1742.f_124[2] = 278.4626f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -801.33f, -989.4982f, 12.6938f };
			uParam0->f_1742.f_124[3] = 164.9299f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -794.952f, -987.8015f, 12.7256f };
			uParam0->f_1742.f_124[4] = 219.2995f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 20:
			*uParam0 = { -664.0032f, -853.6744f, 23.4325f };
			uParam0->f_3[0 /*3*/] = { -662.4317f, -853.6143f, 23.4561f };
			uParam0->f_3[1 /*3*/] = { -668.6993f, -854.7399f, 23.2635f };
			uParam0->f_24 = { -631.6448f, -807.6888f, 43.8212f };
			uParam0->f_24.f_3 = { -6.3784f, 0f, 142.6094f };
			uParam0->f_24.f_6 = 32.7941f;
			uParam0->f_13 = { -668.6069f, -848.1468f, 23.2887f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -662.4266f, -854.6357f, 25.989618f };
			uParam0->f_38[0 /*27*/].f_3 = { -662.4232f, -853.75433f, 23.208197f };
			uParam0->f_38[0 /*27*/].f_6 = 1.25f;
			uParam0->f_38[0 /*27*/].f_7 = 193.8726f;
			uParam0->f_38[0 /*27*/].f_23 = { -662.3884f, -853.9021f, 23.4638f };
			uParam0->f_38[0 /*27*/].f_16 = { -663.2095f, -854.3929f, 25.1573f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -177f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -662.5104f, -852.2342f, 23.4378f };
			uParam0->f_146[0 /*12*/].f_11 = 13.9347f;
			uParam0->f_1922[0 /*9*/] = { -659.7298f, -854.2432f, 28.5561f };
			uParam0->f_1922[0 /*9*/].f_3 = { -48.901f, 0f, 63.8518f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -664.96027f, -856.6751f, 26.88633f };
			uParam0->f_38[1 /*27*/].f_3 = { -670.8594f, -856.6225f, 22.88633f };
			uParam0->f_38[1 /*27*/].f_6 = 2.5f;
			uParam0->f_38[1 /*27*/].f_7 = 188.2017f;
			uParam0->f_38[1 /*27*/].f_23 = { -665.4197f, -855.7644f, 23.35765f };
			uParam0->f_38[1 /*27*/].f_16 = { -664.9559f, -855.7695f, 25.0188f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -90f };
			uParam0->f_38[1 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -672.7541f, -854.4485f, 26.9547f };
			uParam0->f_1922[1 /*9*/].f_3 = { -31.7934f, 2.975f, -69.0846f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -664.1664f, -853.1893f, 23.4233f };
			uParam0->f_1742.f_27 = 356.0786f;
			uParam0->f_1742.f_108[0 /*3*/] = { -667.947f, -852.0844f, 23.2814f };
			uParam0->f_1742.f_124[0] = 359.9586f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -661.9177f, -848.2018f, 23.41f };
			uParam0->f_1742.f_124[1] = 320.3188f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -676.1816f, -846.8066f, 23.019f };
			uParam0->f_1742.f_124[2] = 92.623f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -670.7328f, -847.1837f, 23.1038f };
			uParam0->f_1742.f_124[3] = 30.6874f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -657.152f, -846.9487f, 23.3693f };
			uParam0->f_1742.f_124[4] = 269.8845f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 21:
			*uParam0 = { -1534.0247f, -324.5247f, 46.5237f };
			uParam0->f_3[0 /*3*/] = { -1533.9158f, -326.4442f, 46.9108f };
			uParam0->f_3[1 /*3*/] = { -1529.0159f, -344.6623f, 44.3427f };
			uParam0->f_24 = { -1548.3856f, -299.5765f, 56.3053f };
			uParam0->f_24.f_3 = { -6.1519f, 0f, -133.5596f };
			uParam0->f_24.f_6 = 41.7577f;
			uParam0->f_13 = { -1540.2974f, -322.4765f, 46.3136f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1532.2877f, -326.30518f, 49.229465f };
			uParam0->f_38[0 /*27*/].f_3 = { -1534.0895f, -328.07565f, 46.22101f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 237.6246f;
			uParam0->f_38[0 /*27*/].f_23 = { -1532.7919f, -325.7376f, 46.91117f };
			uParam0->f_38[0 /*27*/].f_16 = { -1532.4303f, -325.3266f, 48.5029f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -45f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1535.1931f, -325.2051f, 46.4857f };
			uParam0->f_146[0 /*12*/].f_11 = 51.5003f;
			uParam0->f_1922[0 /*9*/] = { -1536.0469f, -328.864f, 50.8195f };
			uParam0->f_1922[0 /*9*/].f_3 = { -41.4352f, 0f, -18.8051f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1530.6229f, -341.28796f, 47.99068f };
			uParam0->f_38[1 /*27*/].f_3 = { -1525.6185f, -346.06592f, 43.999084f };
			uParam0->f_38[1 /*27*/].f_6 = 1.5f;
			uParam0->f_38[1 /*27*/].f_7 = 324.1467f;
			uParam0->f_38[1 /*27*/].f_23 = { -1526.1191f, -345.6634f, 44.32087f };
			uParam0->f_38[1 /*27*/].f_16 = { -1525.825f, -346.0658f, 45.7772f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -135f };
			uParam0->f_38[1 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1532.0775f, -340.942f, 47.9153f };
			uParam0->f_1922[1 /*9*/].f_3 = { -26.7709f, 0.8689f, -155.4644f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -1533.7347f, -342.6815f, 44.6768f };
			uParam0->f_1742.f_27 = 131.1871f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1531.9689f, -344.8956f, 44.4344f };
			uParam0->f_1742.f_124[0] = 123.1062f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1538.738f, -348.5782f, 44.6988f };
			uParam0->f_1742.f_124[1] = 119.3949f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1528.7245f, -347.6192f, 44.0972f };
			uParam0->f_1742.f_124[2] = 145.9691f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1533.3853f, -355.9714f, 43.7891f };
			uParam0->f_1742.f_124[3] = 152.8662f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1536.2656f, -352.611f, 44.1812f };
			uParam0->f_1742.f_124[4] = 135.3279f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 22:
			*uParam0 = { -1561.381f, -412.1974f, 41.389f };
			uParam0->f_3[0 /*3*/] = { -1562.9495f, -406.2817f, 41.389f };
			uParam0->f_3[1 /*3*/] = { -1557.4014f, -400.0025f, 40.9881f };
			uParam0->f_24 = { -1549.5356f, -453.3481f, 56.7394f };
			uParam0->f_24.f_3 = { -6.3982f, 0f, 10.7246f };
			uParam0->f_24.f_6 = 34.3497f;
			uParam0->f_13 = { -1556.6167f, -417.2538f, 41.1883f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1564.903f, -406.18533f, 43.810246f };
			uParam0->f_38[0 /*27*/].f_3 = { -1563.757f, -404.78787f, 41.28488f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 53.1375f;
			uParam0->f_38[0 /*27*/].f_23 = { -1562.4543f, -404.26755f, 41.38898f };
			uParam0->f_38[0 /*27*/].f_16 = { -1562.8165f, -403.8937f, 43.0028f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 50f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1560.323f, -409.2578f, 41.389f };
			uParam0->f_146[0 /*12*/].f_11 = 216.3644f;
			uParam0->f_1922[0 /*9*/] = { -1566.9603f, -415.1502f, 46.0548f };
			uParam0->f_1922[0 /*9*/].f_3 = { -29.7021f, 0f, -70.8796f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1560.7749f, -401.2273f, 44.124756f };
			uParam0->f_38[1 /*27*/].f_3 = { -1556.7946f, -396.48328f, 40.57999f };
			uParam0->f_38[1 /*27*/].f_6 = 2.5f;
			uParam0->f_38[1 /*27*/].f_7 = 48.7978f;
			uParam0->f_38[1 /*27*/].f_23 = { -1556.0724f, -396.7669f, 40.98813f };
			uParam0->f_38[1 /*27*/].f_16 = { -1556.4463f, -396.3038f, 42.5343f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 50f };
			uParam0->f_38[1 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1552.687f, -398.0967f, 44.8597f };
			uParam0->f_1922[1 /*9*/].f_3 = { -30.5051f, 2.4603f, 165.9363f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -1551.2654f, -399.6432f, 40.9881f };
			uParam0->f_1742.f_27 = 221.7628f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1555.4916f, -401.5921f, 40.9881f };
			uParam0->f_1742.f_124[0] = 229.0269f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1550.0897f, -406.281f, 40.9881f };
			uParam0->f_1742.f_124[1] = 229.035f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1548.6974f, -401.6271f, 40.9881f };
			uParam0->f_1742.f_124[2] = 257.9825f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1542.3252f, -399.0072f, 40.9881f };
			uParam0->f_1742.f_124[3] = 292.403f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1543.9772f, -405.3359f, 40.989f };
			uParam0->f_1742.f_124[4] = 291.6289f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 23:
			*uParam0 = { -1608.8514f, -429.184f, 39.439f };
			uParam0->f_3[0 /*3*/] = { -1606.781f, -431.8483f, 39.4372f };
			uParam0->f_3[1 /*3*/] = { -1606.7291f, -448.6675f, 37.1799f };
			uParam0->f_24 = { -1616.9534f, -505.0326f, 53.6363f };
			uParam0->f_24.f_3 = { -6.7901f, 0f, -19.8142f };
			uParam0->f_24.f_6 = 34.4399f;
			uParam0->f_13 = { -1614.8463f, -425.6327f, 39.3947f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1604.9597f, -431.83496f, 41.95771f };
			uParam0->f_38[0 /*27*/].f_3 = { -1606.7876f, -434.01184f, 38.442875f };
			uParam0->f_38[0 /*27*/].f_6 = 2f;
			uParam0->f_38[0 /*27*/].f_7 = 232.2676f;
			uParam0->f_38[0 /*27*/].f_23 = { -1607.479f, -433.72363f, 39.43241f };
			uParam0->f_38[0 /*27*/].f_16 = { -1607.0397f, -434.1056f, 41.0649f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -130f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1609.2124f, -429.7664f, 39.4372f };
			uParam0->f_146[0 /*12*/].f_11 = 55.7531f;
			uParam0->f_1922[0 /*9*/] = { -1604.8062f, -429.8766f, 44.8098f };
			uParam0->f_1922[0 /*9*/].f_3 = { -48.1096f, 0f, 102.1529f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1608.3785f, -446.16458f, 36.55541f };
			uParam0->f_38[1 /*27*/].f_3 = { -1603.7693f, -450.09244f, 40.716335f };
			uParam0->f_38[1 /*27*/].f_6 = 2.5f;
			uParam0->f_38[1 /*27*/].f_7 = 314.7102f;
			uParam0->f_38[1 /*27*/].f_23 = { -1604.1471f, -449.44098f, 37.20527f };
			uParam0->f_38[1 /*27*/].f_16 = { -1603.7241f, -449.8294f, 38.7276f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -130f };
			uParam0->f_38[1 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1603.8298f, -449.2337f, 40.259f };
			uParam0->f_1922[1 /*9*/].f_3 = { -35.7033f, -0.9669f, 99.5657f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -1607.4504f, -456.7893f, 36.8592f };
			uParam0->f_1742.f_27 = 148.0527f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1607.8218f, -450.3613f, 37.1359f };
			uParam0->f_1742.f_124[0] = 139.9644f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1609.7788f, -458.7872f, 36.8884f };
			uParam0->f_1742.f_124[1] = 168.1596f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1613.2382f, -456.8185f, 37.0621f };
			uParam0->f_1742.f_124[2] = 140.1804f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1617.0525f, -454.571f, 37.3955f };
			uParam0->f_1742.f_124[3] = 112.6241f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1621.2996f, -453.1793f, 37.4966f };
			uParam0->f_1742.f_124[4] = 48.5007f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 24:
			uParam0->f_3[0 /*3*/] = { 963.4199f, -1022.1301f, 39.8475f };
			uParam0->f_24 = { 1002.1281f, -1023.4307f, 49.5466f };
			uParam0->f_24.f_3 = { -2.4589f, 0f, 88.9038f };
			uParam0->f_24.f_6 = 36.2121f;
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 961.8676f, -1022.55505f, 39.347485f };
			uParam0->f_38[0 /*27*/].f_3 = { 965.0557f, -1022.5816f, 44.097485f };
			uParam0->f_38[0 /*27*/].f_6 = 22.5f;
			uParam0->f_38[0 /*27*/].f_7 = 80.8479f;
			uParam0->f_38[0 /*27*/].f_23 = { 964.2448f, -1022.6831f, 39.84748f };
			uParam0->f_38[0 /*27*/].f_16 = { 963.2421f, -1022.5897f, 41.5091f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 90f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			*uParam0 = { 965.1798f, -1031.3204f, 39.8384f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 10;
			uParam0->f_1742.f_24 = { 966.2585f, -1010.0174f, 40.0476f };
			uParam0->f_1742.f_27 = 263.2577f;
			uParam0->f_1742.f_108[0 /*3*/] = { 966.338f, -1031.1354f, 39.839f };
			uParam0->f_1742.f_124[0] = 266.5586f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 967.1743f, -1025.6099f, 39.8475f };
			uParam0->f_1742.f_124[1] = 270.8348f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 967.6329f, -1020.0041f, 39.8475f };
			uParam0->f_1742.f_124[2] = 270.4741f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 966.9617f, -1013.7098f, 39.8475f };
			uParam0->f_1742.f_124[3] = 271.1738f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 965.698f, -1037.5924f, 39.8303f };
			uParam0->f_1742.f_124[4] = 263.0311f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 25:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 896.3395f, -889.294f, 26.003153f };
			uParam0->f_38[0 /*27*/].f_3 = { 894.2404f, -889.27594f, 30.367142f };
			uParam0->f_38[0 /*27*/].f_6 = 9f;
			uParam0->f_38[0 /*27*/].f_7 = 268.5209f;
			uParam0->f_38[0 /*27*/].f_23 = { 895.2014f, -889.3182f, 26.19163f };
			uParam0->f_38[0 /*27*/].f_16 = { 895.5656f, -889.3296f, 27.6491f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -90f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 895.9359f, -888.7846f, 26.2485f };
			uParam0->f_24 = { 840.2737f, -935.0451f, 42.8762f };
			uParam0->f_24.f_3 = { -2.9799f, 0f, -53.3725f };
			uParam0->f_24.f_6 = 32.5988f;
			*uParam0 = { 893.8858f, -887.0587f, 26.0899f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 894.3965f, -892.7888f, 26.1293f };
			uParam0->f_1742.f_27 = 84.393f;
			uParam0->f_1742.f_108[0 /*3*/] = { 892.3411f, -886.9641f, 25.9702f };
			uParam0->f_1742.f_124[0] = 87.7599f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 892.4629f, -891.6348f, 25.9794f };
			uParam0->f_1742.f_124[1] = 91.7013f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 883.635f, -891.8969f, 25.2952f };
			uParam0->f_1742.f_124[2] = 91.729f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 882.4849f, -886.9933f, 25.2061f };
			uParam0->f_1742.f_124[3] = 91.5397f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 872.6458f, -887.7606f, 24.9248f };
			uParam0->f_1742.f_124[4] = 177.6021f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 26:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 817.637f, -926.17114f, 25.397013f };
			uParam0->f_38[0 /*27*/].f_3 = { 817.67224f, -923.8012f, 29.427319f };
			uParam0->f_38[0 /*27*/].f_6 = 9f;
			uParam0->f_38[0 /*27*/].f_7 = 186.4707f;
			uParam0->f_38[0 /*27*/].f_23 = { 812.2981f, -924.2517f, 25.20545f };
			uParam0->f_38[0 /*27*/].f_16 = { 812.2344f, -924.6008f, 26.7609f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -180f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 817.4532f, -924.8551f, 25.243f };
			uParam0->f_24 = { 846.5938f, -912.0248f, 29.8333f };
			uParam0->f_24.f_3 = { 1.8843f, 0f, 116.7035f };
			uParam0->f_24.f_6 = 32.0039f;
			*uParam0 = { 817.4396f, -923.2914f, 25.1455f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 10;
			uParam0->f_1742.f_24 = { 811.3528f, -922.7236f, 25.1103f };
			uParam0->f_1742.f_27 = 25.2843f;
			uParam0->f_1742.f_108[0 /*3*/] = { 818.6449f, -922.2507f, 25.0809f };
			uParam0->f_1742.f_124[0] = 28.7207f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 813.7722f, -922.1363f, 25.0738f };
			uParam0->f_1742.f_124[1] = 33.443f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 830.8185f, -913.9405f, 24.6657f };
			uParam0->f_1742.f_124[2] = 91.328f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 820.7473f, -913.1084f, 24.5875f };
			uParam0->f_1742.f_124[3] = 92.9782f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 810.5826f, -913.3151f, 24.6075f };
			uParam0->f_1742.f_124[4] = 93.412f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 27:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 758.1571f, -755.46674f, 25.430733f };
			uParam0->f_38[0 /*27*/].f_3 = { 759.6239f, -755.4764f, 30.154293f };
			uParam0->f_38[0 /*27*/].f_6 = 10.5f;
			uParam0->f_38[0 /*27*/].f_7 = 86.9705f;
			uParam0->f_38[0 /*27*/].f_23 = { 759.48035f, -749.9961f, 26.13875f };
			uParam0->f_38[0 /*27*/].f_16 = { 759.0246f, -749.9797f, 27.6906f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 90f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 759.2387f, -755.3151f, 25.9151f };
			uParam0->f_24 = { 792.6638f, -754.671f, 34.6688f };
			uParam0->f_24.f_3 = { 0.7646f, 0f, 90.0749f };
			uParam0->f_24.f_6 = 42.4321f;
			*uParam0 = { 760.4014f, -758.006f, 25.8063f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 10;
			uParam0->f_1742.f_24 = { 759.4371f, -760.0032f, 25.7598f };
			uParam0->f_1742.f_27 = 277.8507f;
			uParam0->f_1742.f_108[0 /*3*/] = { 761.8399f, -750.8654f, 25.9419f };
			uParam0->f_1742.f_124[0] = 306.6377f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 761.6503f, -756.5213f, 25.7067f };
			uParam0->f_1742.f_124[1] = 294.2219f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 762.6526f, -746.4432f, 26.1404f };
			uParam0->f_1742.f_124[2] = 358.0908f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 762.9658f, -738.5776f, 26.5185f };
			uParam0->f_1742.f_124[3] = 358.359f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 763.2261f, -769.1245f, 25.3579f };
			uParam0->f_1742.f_124[4] = 180.7413f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 28:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 842.02997f, -1167.6538f, 23.768063f };
			uParam0->f_38[0 /*27*/].f_3 = { 841.8851f, -1163.1016f, 28.518063f };
			uParam0->f_38[0 /*27*/].f_6 = 4.75f;
			uParam0->f_38[0 /*27*/].f_7 = 187.1127f;
			uParam0->f_38[0 /*27*/].f_23 = { 844.5606f, -1164.1461f, 24.26806f };
			uParam0->f_38[0 /*27*/].f_16 = { 844.5184f, -1164.6573f, 25.939f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -176.5f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 842.1298f, -1165.0754f, 24.3046f };
			uParam0->f_24 = { 873.2134f, -1114.6626f, 48.9161f };
			uParam0->f_24.f_3 = { -13.8258f, 0f, 144.1864f };
			uParam0->f_24.f_6 = 37.2109f;
			*uParam0 = { 842.0649f, -1162.5195f, 24.2681f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 841.5887f, -1163.3604f, 24.2681f };
			uParam0->f_1742.f_27 = 7.7576f;
			uParam0->f_1742.f_108[0 /*3*/] = { 841.6375f, -1160.785f, 24.2678f };
			uParam0->f_1742.f_124[0] = 2.6753f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 834.491f, -1153.0087f, 24.2281f };
			uParam0->f_1742.f_124[1] = 272.6176f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 835.1475f, -1156.9692f, 24.2681f };
			uParam0->f_1742.f_124[2] = 273.0558f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 844.0175f, -1156.4968f, 24.2681f };
			uParam0->f_1742.f_124[3] = 273.0678f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 846.6666f, -1151.5957f, 24.1599f };
			uParam0->f_1742.f_124[4] = 269.9492f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 29:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 529.37604f, -1604.0272f, 27.831518f };
			uParam0->f_38[0 /*27*/].f_3 = { 527.91046f, -1602.7975f, 32.474586f };
			uParam0->f_38[0 /*27*/].f_6 = 4.75f;
			uParam0->f_38[0 /*27*/].f_7 = 216.8423f;
			uParam0->f_38[0 /*27*/].f_23 = { 526.62036f, -1604.6647f, 28.27846f };
			uParam0->f_38[0 /*27*/].f_16 = { 527.0496f, -1605.2067f, 29.8629f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -130f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 528.8805f, -1603.0293f, 28.3225f };
			uParam0->f_24 = { 511.6405f, -1541.9185f, 41.1761f };
			uParam0->f_24.f_3 = { -4.7034f, 0f, -169.109f };
			uParam0->f_24.f_6 = 20.2458f;
			*uParam0 = { 527.3356f, -1602.1427f, 28.1478f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 525.8525f, -1604.5986f, 28.255f };
			uParam0->f_1742.f_27 = 45.4901f;
			uParam0->f_1742.f_108[0 /*3*/] = { 525.7641f, -1601.4014f, 28.1769f };
			uParam0->f_1742.f_124[0] = 50.8529f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 517.8649f, -1601.5873f, 28.2864f };
			uParam0->f_1742.f_124[1] = 73.5817f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 515.6566f, -1605.2291f, 28.3055f };
			uParam0->f_1742.f_124[2] = 78.3556f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 526.7875f, -1592.3201f, 28.2797f };
			uParam0->f_1742.f_124[3] = 8.7291f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 512.2185f, -1609.1097f, 28.3116f };
			uParam0->f_1742.f_124[4] = 80.5639f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 30:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 569.65247f, -1570.5588f, 27.327698f };
			uParam0->f_38[0 /*27*/].f_3 = { 570.5089f, -1569.5852f, 31.840675f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 135.5236f;
			uParam0->f_38[0 /*27*/].f_23 = { 568.28577f, -1568.3177f, 27.70387f };
			uParam0->f_38[0 /*27*/].f_16 = { 567.9484f, -1568.682f, 29.2407f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 140f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 569.9441f, -1570.293f, 27.5777f };
			uParam0->f_24 = { 595.9171f, -1540.1836f, 32.4308f };
			uParam0->f_24.f_3 = { 0.5723f, 0f, 138.7878f };
			uParam0->f_24.f_6 = 24.2761f;
			*uParam0 = { 571.3317f, -1569.2113f, 27.5769f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 571.9505f, -1570.715f, 27.4944f };
			uParam0->f_1742.f_27 = 316.8053f;
			uParam0->f_1742.f_108[0 /*3*/] = { 572.6698f, -1566.7014f, 27.6227f };
			uParam0->f_1742.f_124[0] = 318.9168f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 567.3885f, -1564.2723f, 27.8734f };
			uParam0->f_1742.f_124[1] = 11.3999f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 576.4351f, -1571.6967f, 27.346f };
			uParam0->f_1742.f_124[2] = 284.5693f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 579.3066f, -1574.5211f, 27.102f };
			uParam0->f_1742.f_124[3] = 316.8582f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 563.3011f, -1560.7766f, 28.0953f };
			uParam0->f_1742.f_124[4] = 319.6255f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 31:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 724.8976f, -1188.1766f, 23.181055f };
			uParam0->f_38[0 /*27*/].f_3 = { 724.7759f, -1191.1758f, 27.529465f };
			uParam0->f_38[0 /*27*/].f_6 = 3.5f;
			uParam0->f_38[0 /*27*/].f_7 = 8.0958f;
			uParam0->f_38[0 /*27*/].f_23 = { 726.7602f, -1189.9951f, 23.27746f };
			uParam0->f_38[0 /*27*/].f_16 = { 726.7885f, -1189.545f, 24.7175f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 0f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 727.757f, -1189.8367f, 23.2765f };
			uParam0->f_24 = { 751.2015f, -1201.4775f, 25.9253f };
			uParam0->f_24.f_3 = { 0.2972f, 0f, 68.1021f };
			uParam0->f_24.f_6 = 28.04f;
			*uParam0 = { 724.9683f, -1191.5889f, 23.2793f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 722.4882f, -1190.6957f, 23.2818f };
			uParam0->f_1742.f_27 = 226.8115f;
			uParam0->f_1742.f_108[0 /*3*/] = { 727.2533f, -1192.6544f, 23.2769f };
			uParam0->f_1742.f_124[0] = 225.7019f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 734.2759f, -1194.8922f, 23.2741f };
			uParam0->f_1742.f_124[1] = 270.6564f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 742.4778f, -1194.803f, 23.2677f };
			uParam0->f_1742.f_124[2] = 270.655f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 743.9144f, -1198.5862f, 23.26f };
			uParam0->f_1742.f_124[3] = 268.5719f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 721.1934f, -1193.5802f, 23.2832f };
			uParam0->f_1742.f_124[4] = 223.0747f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 32:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 504.44153f, -1492.0735f, 27.901068f };
			uParam0->f_38[0 /*27*/].f_3 = { 504.4351f, -1493.9845f, 32.53869f };
			uParam0->f_38[0 /*27*/].f_6 = 13f;
			uParam0->f_38[0 /*27*/].f_7 = 6.0979f;
			uParam0->f_38[0 /*27*/].f_23 = { 504.65533f, -1493.1624f, 28.28859f };
			uParam0->f_38[0 /*27*/].f_16 = { 504.7454f, -1492.7229f, 29.8382f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 0f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 504.6782f, -1492.8872f, 28.2886f };
			uParam0->f_24 = { 489.3747f, -1518.9008f, 31.5557f };
			uParam0->f_24.f_3 = { -1.829f, 0f, -32.9606f };
			uParam0->f_24.f_6 = 22.1333f;
			*uParam0 = { 501.0715f, -1494.1602f, 28.289f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 497.347f, -1493.9241f, 28.2893f };
			uParam0->f_1742.f_27 = 211.2587f;
			uParam0->f_1742.f_108[0 /*3*/] = { 501.0577f, -1496.1643f, 28.2891f };
			uParam0->f_1742.f_124[0] = 178.7652f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 501.4612f, -1502.6527f, 28.2889f };
			uParam0->f_1742.f_124[1] = 189.8566f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 507.9253f, -1496.2356f, 28.2885f };
			uParam0->f_1742.f_124[2] = 179.6585f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 507.9807f, -1502.452f, 28.2883f };
			uParam0->f_1742.f_124[3] = 182.123f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 504.4424f, -1506.7959f, 28.2716f };
			uParam0->f_1742.f_124[4] = 268.4133f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 33:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 474.98965f, -1547.6747f, 27.782791f };
			uParam0->f_38[0 /*27*/].f_3 = { 475.861f, -1546.61f, 32.53279f };
			uParam0->f_38[0 /*27*/].f_6 = 9f;
			uParam0->f_38[0 /*27*/].f_7 = 137.901f;
			uParam0->f_38[0 /*27*/].f_23 = { 472.27435f, -1543.7709f, 28.28258f };
			uParam0->f_38[0 /*27*/].f_16 = { 471.8385f, -1544.3411f, 29.8348f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 140f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 475.7058f, -1547.1232f, 28.2828f };
			uParam0->f_24 = { 474.4796f, -1526.7422f, 32.3941f };
			uParam0->f_24.f_3 = { -1.0343f, 0f, -175.9226f };
			uParam0->f_24.f_6 = 31.816f;
			*uParam0 = { 478.0967f, -1547.7393f, 28.2826f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 481.4461f, -1551.521f, 28.2828f };
			uParam0->f_1742.f_27 = 319.4575f;
			uParam0->f_1742.f_108[0 /*3*/] = { 476.7013f, -1543.2727f, 28.2688f };
			uParam0->f_1742.f_124[0] = 317.4218f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 478.8961f, -1546.5181f, 28.2828f };
			uParam0->f_1742.f_124[1] = 321.1352f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 487.6636f, -1543.0957f, 28.2618f };
			uParam0->f_1742.f_124[2] = 230.0298f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 481.2663f, -1537.8181f, 28.2474f };
			uParam0->f_1742.f_124[3] = 230.3941f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 471.9972f, -1530.9518f, 28.2219f };
			uParam0->f_1742.f_124[4] = 232.9607f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
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
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			func_57(uParam0, iParam1);
			break;
		
		case 68:
		case 69:
		case 70:
		case 71:
			func_56(uParam0, iParam1);
			break;
		
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
			func_55(uParam0, iParam1);
			break;
	}
	uParam0->f_35 = iParam1;
	func_54(&(uParam0->f_1912), uParam0->f_35);
}

void func_54(var uParam0, int iParam1)//Position - 0x13DE8
{
	switch (iParam1)
	{
		case 1:
			(*uParam0)[0] = 1;
			(*uParam0)[1] = 2;
			(*uParam0)[2] = 3;
			(*uParam0)[3] = 4;
			(*uParam0)[4] = 61;
			(*uParam0)[5] = 83;
			(*uParam0)[6] = 84;
			(*uParam0)[7] = 85;
			uParam0->f_9 = 8;
			break;
		
		case 2:
			(*uParam0)[0] = 5;
			(*uParam0)[1] = 6;
			uParam0->f_9 = 2;
			break;
		
		case 3:
			(*uParam0)[0] = 7;
			(*uParam0)[1] = 34;
			(*uParam0)[2] = 62;
			uParam0->f_9 = 3;
			break;
		
		case 4:
			(*uParam0)[0] = 35;
			(*uParam0)[1] = 36;
			(*uParam0)[2] = 37;
			uParam0->f_9 = 3;
			break;
		
		case 5:
			(*uParam0)[0] = 38;
			(*uParam0)[1] = 39;
			(*uParam0)[2] = 65;
			uParam0->f_9 = 3;
			break;
		
		case 6:
			(*uParam0)[0] = 40;
			(*uParam0)[1] = 41;
			(*uParam0)[2] = 63;
			uParam0->f_9 = 3;
			break;
		
		case 7:
			(*uParam0)[0] = 42;
			(*uParam0)[1] = 43;
			(*uParam0)[2] = 64;
			uParam0->f_9 = 3;
			break;
		
		case 8:
			(*uParam0)[0] = 8;
			uParam0->f_9 = 1;
			break;
		
		case 9:
			(*uParam0)[0] = 9;
			uParam0->f_9 = 1;
			break;
		
		case 10:
			(*uParam0)[0] = 10;
			uParam0->f_9 = 1;
			break;
		
		case 11:
			(*uParam0)[0] = 11;
			uParam0->f_9 = 1;
			break;
		
		case 12:
			(*uParam0)[0] = 12;
			uParam0->f_9 = 1;
			break;
		
		case 13:
			(*uParam0)[0] = 13;
			uParam0->f_9 = 1;
			break;
		
		case 14:
			(*uParam0)[0] = 14;
			uParam0->f_9 = 1;
			break;
		
		case 15:
			(*uParam0)[0] = 15;
			uParam0->f_9 = 1;
			break;
		
		case 16:
			(*uParam0)[0] = 16;
			uParam0->f_9 = 1;
			break;
		
		case 17:
			(*uParam0)[0] = 17;
			uParam0->f_9 = 1;
			break;
		
		case 18:
			(*uParam0)[0] = 18;
			uParam0->f_9 = 1;
			break;
		
		case 19:
			(*uParam0)[0] = 19;
			uParam0->f_9 = 1;
			break;
		
		case 20:
			(*uParam0)[0] = 20;
			uParam0->f_9 = 1;
			break;
		
		case 21:
			(*uParam0)[0] = 21;
			uParam0->f_9 = 1;
			break;
		
		case 22:
			(*uParam0)[0] = 22;
			uParam0->f_9 = 1;
			break;
		
		case 23:
			(*uParam0)[0] = 23;
			uParam0->f_9 = 1;
			break;
		
		case 24:
			(*uParam0)[0] = 24;
			uParam0->f_9 = 1;
			break;
		
		case 25:
			(*uParam0)[0] = 25;
			uParam0->f_9 = 1;
			break;
		
		case 26:
			(*uParam0)[0] = 26;
			uParam0->f_9 = 1;
			break;
		
		case 27:
			(*uParam0)[0] = 27;
			uParam0->f_9 = 1;
			break;
		
		case 28:
			(*uParam0)[0] = 28;
			uParam0->f_9 = 1;
			break;
		
		case 29:
			(*uParam0)[0] = 29;
			uParam0->f_9 = 1;
			break;
		
		case 30:
			(*uParam0)[0] = 30;
			uParam0->f_9 = 1;
			break;
		
		case 31:
			(*uParam0)[0] = 31;
			uParam0->f_9 = 1;
			break;
		
		case 32:
			(*uParam0)[0] = 32;
			uParam0->f_9 = 1;
			break;
		
		case 33:
			(*uParam0)[0] = 33;
			uParam0->f_9 = 1;
			break;
		
		case 34:
			(*uParam0)[0] = 44;
			uParam0->f_9 = 1;
			break;
		
		case 35:
			(*uParam0)[0] = 45;
			uParam0->f_9 = 1;
			break;
		
		case 36:
			(*uParam0)[0] = 46;
			uParam0->f_9 = 1;
			break;
		
		case 37:
			(*uParam0)[0] = 47;
			uParam0->f_9 = 1;
			break;
		
		case 38:
			(*uParam0)[0] = 48;
			uParam0->f_9 = 1;
			break;
		
		case 39:
			(*uParam0)[0] = 49;
			uParam0->f_9 = 1;
			break;
		
		case 40:
			(*uParam0)[0] = 50;
			uParam0->f_9 = 1;
			break;
		
		case 41:
			(*uParam0)[0] = 51;
			uParam0->f_9 = 1;
			break;
		
		case 42:
			(*uParam0)[0] = 52;
			uParam0->f_9 = 1;
			break;
		
		case 43:
			(*uParam0)[0] = 53;
			uParam0->f_9 = 1;
			break;
		
		case 44:
			(*uParam0)[0] = 54;
			uParam0->f_9 = 1;
			break;
		
		case 45:
			(*uParam0)[0] = 55;
			uParam0->f_9 = 1;
			break;
		
		case 46:
			(*uParam0)[0] = 56;
			uParam0->f_9 = 1;
			break;
		
		case 47:
			(*uParam0)[0] = 57;
			uParam0->f_9 = 1;
			break;
		
		case 48:
			(*uParam0)[0] = 58;
			uParam0->f_9 = 1;
			break;
		
		case 49:
			(*uParam0)[0] = 59;
			uParam0->f_9 = 1;
			break;
		
		case 50:
			(*uParam0)[0] = 60;
			uParam0->f_9 = 1;
			break;
		
		case 51:
			(*uParam0)[0] = 66;
			uParam0->f_9 = 1;
			break;
		
		case 52:
			(*uParam0)[0] = 67;
			uParam0->f_9 = 1;
			break;
		
		case 53:
			(*uParam0)[0] = 68;
			uParam0->f_9 = 1;
			break;
		
		case 54:
			(*uParam0)[0] = 69;
			uParam0->f_9 = 1;
			break;
		
		case 55:
			(*uParam0)[0] = 70;
			uParam0->f_9 = 1;
			break;
		
		case 56:
			(*uParam0)[0] = 71;
			uParam0->f_9 = 1;
			break;
		
		case 57:
			(*uParam0)[0] = 72;
			uParam0->f_9 = 1;
			break;
		
		case 58:
			(*uParam0)[0] = 73;
			uParam0->f_9 = 1;
			break;
		
		case 59:
			(*uParam0)[0] = 74;
			uParam0->f_9 = 1;
			break;
		
		case 60:
			(*uParam0)[0] = 75;
			uParam0->f_9 = 1;
			break;
		
		case 61:
			(*uParam0)[0] = 76;
			uParam0->f_9 = 1;
			break;
		
		case 62:
			(*uParam0)[0] = 77;
			uParam0->f_9 = 1;
			break;
		
		case 63:
			(*uParam0)[0] = 78;
			uParam0->f_9 = 1;
			break;
		
		case 64:
			(*uParam0)[0] = 79;
			uParam0->f_9 = 1;
			break;
		
		case 65:
			(*uParam0)[0] = 80;
			uParam0->f_9 = 1;
			break;
		
		case 66:
			(*uParam0)[0] = 81;
			uParam0->f_9 = 1;
			break;
		
		case 67:
			(*uParam0)[0] = 82;
			uParam0->f_9 = 1;
			break;
		
		case 68:
			(*uParam0)[0] = 87;
			(*uParam0)[1] = 103;
			(*uParam0)[2] = 104;
			(*uParam0)[3] = 105;
			uParam0->f_9 = 4;
			break;
		
		case 69:
			(*uParam0)[0] = 88;
			(*uParam0)[1] = 106;
			(*uParam0)[2] = 107;
			(*uParam0)[3] = 108;
			uParam0->f_9 = 4;
			break;
		
		case 70:
			(*uParam0)[0] = 89;
			(*uParam0)[1] = 109;
			(*uParam0)[2] = 110;
			(*uParam0)[3] = 111;
			uParam0->f_9 = 4;
			break;
		
		case 71:
			(*uParam0)[0] = 90;
			(*uParam0)[1] = 112;
			(*uParam0)[2] = 113;
			(*uParam0)[3] = 114;
			uParam0->f_9 = 4;
			break;
		
		case 72:
			(*uParam0)[0] = 91;
			uParam0->f_9 = 1;
			break;
		
		case 73:
			(*uParam0)[0] = 92;
			uParam0->f_9 = 1;
			break;
		
		case 74:
			(*uParam0)[0] = 93;
			uParam0->f_9 = 1;
			break;
		
		case 75:
			(*uParam0)[0] = 94;
			uParam0->f_9 = 1;
			break;
		
		case 76:
			(*uParam0)[0] = 95;
			uParam0->f_9 = 1;
			break;
		
		case 77:
			(*uParam0)[0] = 96;
			uParam0->f_9 = 1;
			break;
		
		case 78:
			(*uParam0)[0] = 97;
			uParam0->f_9 = 1;
			break;
		
		case 79:
			(*uParam0)[0] = 98;
			uParam0->f_9 = 1;
			break;
		
		case 80:
			(*uParam0)[0] = 99;
			uParam0->f_9 = 1;
			break;
		
		case 81:
			(*uParam0)[0] = 100;
			uParam0->f_9 = 1;
			break;
		
		case 82:
			(*uParam0)[0] = 101;
			uParam0->f_9 = 1;
			break;
		
		case 83:
			(*uParam0)[0] = 102;
			uParam0->f_9 = 1;
			break;
	}
}

void func_55(var uParam0, int iParam1)//Position - 0x14594
{
	struct<4> Var0;
	
	uParam0->f_38[0 /*27*/].f_22 = 5;
	uParam0->f_38[1 /*27*/].f_22 = 5;
	uParam0->f_38[2 /*27*/].f_22 = 5;
	switch (iParam1)
	{
		case 72:
			*uParam0 = { 252.3021f, -1813.1484f, 26.1691f };
			uParam0->f_3[0 /*3*/] = { 254.0506f, -1809.112f, 26.2643f };
			uParam0->f_3[1 /*3*/] = { 259.5366f, -1802.3033f, 26.2152f };
			uParam0->f_24 = { 239.7418f, -1811.5352f, 32.0606f };
			uParam0->f_24.f_3 = { -11.7578f, 0f, -67.7135f };
			uParam0->f_24.f_6 = 44.6712f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 253.31148f, -1808.4077f, 25.86314f };
			uParam0->f_38[0 /*27*/].f_3 = { 254.2946f, -1809.26f, 28.86314f };
			uParam0->f_38[0 /*27*/].f_6 = 2f;
			uParam0->f_38[0 /*27*/].f_7 = 219.9318f;
			uParam0->f_38[0 /*27*/].f_23 = { 254.0506f, -1809.112f, 26.2643f };
			uParam0->f_38[0 /*27*/].f_16 = { 253.254f, -1809.654f, 27.417f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 230f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 253.3365f, -1799.6703f, 26.1131f };
			uParam0->f_146[0 /*12*/].f_11 = 57.3276f;
			uParam0->f_1922[0 /*9*/] = { 252.8545f, -1809.944f, 29.2059f };
			uParam0->f_1922[0 /*9*/].f_3 = { -48.2796f, 0f, -25.9045f };
			uParam0->f_1922[0 /*9*/].f_6 = 69.8427f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 259.52063f, -1802.3014f, 26.07127f };
			uParam0->f_38[1 /*27*/].f_3 = { 258.0708f, -1801.0658f, 29.36314f };
			uParam0->f_38[1 /*27*/].f_6 = 3.75f;
			uParam0->f_38[1 /*27*/].f_7 = 232.4453f;
			uParam0->f_38[1 /*27*/].f_23 = { 259.5366f, -1802.3033f, 26.2152f };
			uParam0->f_146[1 /*12*/].f_8 = { 257.5821f, -1800.8406f, 26.1131f };
			uParam0->f_146[1 /*12*/].f_11 = 56.3008f;
			uParam0->f_1922[1 /*9*/] = { 257.8029f, -1803.087f, 28.5437f };
			uParam0->f_1922[1 /*9*/].f_3 = { -37.1543f, 0f, -31.4609f };
			uParam0->f_1922[1 /*9*/].f_6 = 83.2505f;
			uParam0->f_1742.f_24 = { 257.5821f, -1800.8406f, 26.1131f };
			uParam0->f_1742.f_27 = 56.3008f;
			uParam0->f_1742.f_108[0 /*3*/] = { 256.502f, -1801.2483f, 26.1131f };
			uParam0->f_1742.f_124[0] = 90.9405f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 254.0294f, -1803.6024f, 26.1131f };
			uParam0->f_1742.f_124[1] = 116.4148f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 251.8847f, -1800.8208f, 26.1131f };
			uParam0->f_1742.f_124[2] = 141.4167f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 255.4657f, -1796.401f, 26.1131f };
			uParam0->f_1742.f_124[3] = 140.919f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 248.3528f, -1806.4415f, 26.1131f };
			uParam0->f_1742.f_124[4] = 124.5272f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 73:
			*uParam0 = { -1485.7568f, -923.31757f, 19.595057f };
			uParam0->f_3[0 /*3*/] = { -1471.8319f, -920.1343f, 9.0249f };
			uParam0->f_3[1 /*3*/] = { -1469.6271f, -929.1902f, 9.1865f };
			uParam0->f_24 = { -1455.5131f, -921.6072f, 16.841164f };
			uParam0->f_24.f_3 = { -20.002123f, 0f, 100.73314f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1471.1069f, -919.8443f, 9.0237f };
			uParam0->f_38[0 /*27*/].f_3 = { -1472.0938f, -920.9706f, 12.0346f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 50f;
			uParam0->f_38[0 /*27*/].f_23 = { -1471.8319f, -920.1343f, 9.0249f };
			uParam0->f_38[0 /*27*/].f_16 = { -1472.809f, -920.902f, 10.376f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 50f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1469.0375f, -922.352f, 9.0291f };
			uParam0->f_146[0 /*12*/].f_11 = 230f;
			uParam0->f_1922[0 /*9*/] = { -1469.6207f, -917.4292f, 12.425049f };
			uParam0->f_1922[0 /*9*/].f_3 = { -33.26217f, 0f, 156.68733f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1473.4039f, -926.0901f, 9.1849f };
			uParam0->f_38[1 /*27*/].f_3 = { -1466.2554f, -932.0925f, 13.1885f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 140f;
			uParam0->f_38[1 /*27*/].f_23 = { -1469.6271f, -929.1902f, 9.1865f };
			uParam0->f_146[1 /*12*/].f_8 = { -1466.577f, -925.1134f, 9.0269f };
			uParam0->f_146[1 /*12*/].f_11 = 320f;
			uParam0->f_1922[1 /*9*/] = { -1465.9141f, -932.21216f, 12.603905f };
			uParam0->f_1922[1 /*9*/].f_3 = { -23.171425f, 0f, 42.55543f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -1465.4921f, -923.8866f, 9.0338f };
			uParam0->f_1742.f_27 = 320f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1465.4921f, -923.8866f, 9.0338f };
			uParam0->f_1742.f_124[0] = 320f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1458.8389f, -922.0121f, 9.058f };
			uParam0->f_1742.f_124[1] = 230.6614f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1449.9634f, -930.0195f, 8.8814f };
			uParam0->f_1742.f_124[2] = 227.8659f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1444.9832f, -936.6174f, 7.8077f };
			uParam0->f_1742.f_124[3] = 227.132f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1464.854f, -918.0606f, 9.0349f };
			uParam0->f_1742.f_124[4] = 231.8444f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 74:
			*uParam0 = { 48.134914f, -1031.2866f, 35.662636f };
			uParam0->f_3[0 /*3*/] = { 37.272f, -1029.3018f, 28.5669f };
			uParam0->f_3[1 /*3*/] = { 40.1411f, -1022.5889f, 28.5317f };
			uParam0->f_24 = { 22.920012f, -1039.3578f, 37.236332f };
			uParam0->f_24.f_3 = { -18.077564f, 0f, -71.81333f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 37.492f, -1028.7545f, 28.5675f };
			uParam0->f_38[0 /*27*/].f_3 = { 37.1163f, -1029.875f, 31.5689f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 247f;
			uParam0->f_38[0 /*27*/].f_23 = { 37.3588f, -1029.325f, 28.5711f };
			uParam0->f_38[0 /*27*/].f_16 = { 37.27252f, -1030.289f, 29.8f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 247f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 34.6624f, -1028.153f, 28.52f };
			uParam0->f_146[0 /*12*/].f_11 = 67f;
			uParam0->f_1922[0 /*9*/] = { 34.73594f, -1034.8428f, 32.468525f };
			uParam0->f_1922[0 /*9*/].f_3 = { -32.013218f, 0f, -11.85664f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 40.9591f, -1020.4954f, 28.5168f };
			uParam0->f_38[1 /*27*/].f_3 = { 39.2666f, -1024.6724f, 32.5593f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 247f;
			uParam0->f_38[1 /*27*/].f_23 = { 40.0932f, -1022.6314f, 28.531f };
			uParam0->f_146[1 /*12*/].f_8 = { 37.0577f, -1021.2496f, 28.4798f };
			uParam0->f_146[1 /*12*/].f_11 = 67f;
			uParam0->f_1922[1 /*9*/] = { 41.9218f, -1018.6117f, 33.166576f };
			uParam0->f_1922[1 /*9*/].f_3 = { -43.817642f, 0f, 135.39604f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 33.227f, -1016.9539f, 28.4567f };
			uParam0->f_1742.f_27 = 340.9914f;
			uParam0->f_1742.f_108[0 /*3*/] = { 33.227f, -1016.9539f, 28.4567f };
			uParam0->f_1742.f_124[0] = 340.9914f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 36.3108f, -1007.7845f, 28.4626f };
			uParam0->f_1742.f_124[1] = 340.1653f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 39.3771f, -999.3572f, 28.4154f };
			uParam0->f_1742.f_124[2] = 339.819f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 29.4222f, -1029.5435f, 28.4506f };
			uParam0->f_1742.f_124[3] = 157.1595f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 31.7689f, -1033.4246f, 28.4128f };
			uParam0->f_1742.f_124[4] = 158.5681f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 75:
			*uParam0 = { 53.039482f, 2791.6624f, 65.012314f };
			uParam0->f_3[0 /*3*/] = { 46.7547f, 2789.6455f, 57.1054f };
			uParam0->f_3[1 /*3*/] = { 56.1234f, 2785.71f, 56.8783f };
			uParam0->f_24 = { 32.84365f, 2787.493f, 64.48982f };
			uParam0->f_24.f_3 = { -19.861828f, 0f, -72.68176f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 45.7077f, 2789.347f, 56.8783f };
			uParam0->f_38[0 /*27*/].f_3 = { 46.9525f, 2788.6184f, 59.8783f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 322f;
			uParam0->f_38[0 /*27*/].f_23 = { 46.8107f, 2789.6008f, 57.1054f };
			uParam0->f_38[0 /*27*/].f_16 = { 45.861256f, 2789.7673f, 58.2f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 322f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 44.7758f, 2786.8245f, 56.8781f };
			uParam0->f_146[0 /*12*/].f_11 = 142f;
			uParam0->f_1922[0 /*9*/] = { 42.79881f, 2791.5308f, 61.48584f };
			uParam0->f_1922[0 /*9*/].f_3 = { -39.604027f, 1E-06f, -137.5007f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 52.021f, 2788.5676f, 56.8783f };
			uParam0->f_38[1 /*27*/].f_3 = { 57.2193f, 2784.6777f, 60.8783f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 322f;
			uParam0->f_38[1 /*27*/].f_23 = { 56.2014f, 2785.7693f, 56.8783f };
			uParam0->f_146[1 /*12*/].f_8 = { 53.9654f, 2782.9033f, 56.8783f };
			uParam0->f_146[1 /*12*/].f_11 = 142f;
			uParam0->f_1922[1 /*9*/] = { 50.61052f, 2788.691f, 60.975185f };
			uParam0->f_1922[1 /*9*/].f_3 = { -21.141226f, -1E-06f, -131.59586f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 49.9789f, 2783.6082f, 56.884f };
			uParam0->f_1742.f_27 = 79.034f;
			uParam0->f_1742.f_108[0 /*3*/] = { 49.9789f, 2783.6082f, 56.884f };
			uParam0->f_1742.f_124[0] = 79.034f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 57.3569f, 2777.6204f, 56.8783f };
			uParam0->f_1742.f_124[1] = 189.5871f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 47.4214f, 2776.2715f, 56.884f };
			uParam0->f_1742.f_124[2] = 58.7704f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 35.2752f, 2782.377f, 56.8781f };
			uParam0->f_1742.f_124[3] = 132.5531f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 59.3515f, 2768.5923f, 56.8783f };
			uParam0->f_1742.f_124[4] = 185.7522f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 76:
			*uParam0 = { -349.02518f, 6061.301f, 46.643566f };
			uParam0->f_3[0 /*3*/] = { -342.0963f, 6065.6294f, 30.5093f };
			uParam0->f_3[1 /*3*/] = { -353.9768f, 6066.2563f, 30.4985f };
			uParam0->f_24 = { -345.50613f, 6083.811f, 39.05644f };
			uParam0->f_24.f_3 = { -21.427885f, 0f, 171.86964f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -341.6371f, 6065.159f, 30.5111f };
			uParam0->f_38[0 /*27*/].f_3 = { -342.6248f, 6066.132f, 33.5077f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 135f;
			uParam0->f_38[0 /*27*/].f_23 = { -342.0963f, 6065.6294f, 30.5093f };
			uParam0->f_38[0 /*27*/].f_16 = { -343.174f, 6066.212f, 31.82f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 135f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -339.2251f, 6068.4688f, 30.3603f };
			uParam0->f_146[0 /*12*/].f_11 = 315f;
			uParam0->f_1922[0 /*9*/] = { -339.34204f, 6063.2246f, 34.01251f };
			uParam0->f_1922[0 /*9*/].f_3 = { -32.057144f, 0f, 43.118244f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -352.3805f, 6067.916f, 30.4979f };
			uParam0->f_38[1 /*27*/].f_3 = { -355.7214f, 6064.5557f, 34.4992f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 225f;
			uParam0->f_38[1 /*27*/].f_23 = { -353.9768f, 6066.2563f, 30.4985f };
			uParam0->f_146[1 /*12*/].f_8 = { -357.9002f, 6069.9585f, 30.4985f };
			uParam0->f_146[1 /*12*/].f_11 = 45f;
			uParam0->f_1922[1 /*9*/] = { -349.03433f, 6071.203f, 35.386097f };
			uParam0->f_1922[1 /*9*/].f_3 = { -32.46475f, -1E-06f, 121.31217f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -359.765f, 6071.805f, 30.4983f };
			uParam0->f_1742.f_27 = 45f;
			uParam0->f_1742.f_108[0 /*3*/] = { -359.765f, 6071.805f, 30.4983f };
			uParam0->f_1742.f_124[0] = 45f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -355.8349f, 6076.76f, 30.5016f };
			uParam0->f_1742.f_124[1] = 314.8498f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -359.3047f, 6079.367f, 30.4973f };
			uParam0->f_1742.f_124[2] = 316.1204f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -344.8482f, 6075.544f, 30.4072f };
			uParam0->f_1742.f_124[3] = 225.4279f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -366.4851f, 6069.543f, 30.5001f };
			uParam0->f_1742.f_124[4] = 88.9391f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 77:
			*uParam0 = { 1733.5798f, 3702.429f, 42.48087f };
			uParam0->f_3[0 /*3*/] = { 1737.9225f, 3709.1099f, 33.1355f };
			uParam0->f_3[1 /*3*/] = { 1729.3052f, 3706.8066f, 33.1207f };
			uParam0->f_24 = { 1745.7788f, 3725.6592f, 39.644505f };
			uParam0->f_24.f_3 = { -17.609089f, 0f, 158.54146f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 1738.503f, 3709.2212f, 33.145f };
			uParam0->f_38[0 /*27*/].f_3 = { 1737.3252f, 3708.8433f, 36.1273f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 201f;
			uParam0->f_38[0 /*27*/].f_23 = { 1737.9225f, 3709.1099f, 33.1355f };
			uParam0->f_38[0 /*27*/].f_16 = { 1737.132f, 3708.37f, 34.44f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 201f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 1736.7023f, 3712.4556f, 33.1196f };
			uParam0->f_146[0 /*12*/].f_11 = 21f;
			uParam0->f_1922[0 /*9*/] = { 1741.2858f, 3711f, 36.026985f };
			uParam0->f_1922[0 /*9*/].f_3 = { -20.295559f, 1E-06f, 115.602615f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 1733.8457f, 3708.501f, 33.1237f };
			uParam0->f_38[1 /*27*/].f_3 = { 1724.7946f, 3705.2273f, 37.1555f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 201f;
			uParam0->f_38[1 /*27*/].f_23 = { 1729.3052f, 3706.8066f, 33.1207f };
			uParam0->f_146[1 /*12*/].f_8 = { 1726.3298f, 3714.0073f, 33.1908f };
			uParam0->f_146[1 /*12*/].f_11 = 21f;
			uParam0->f_1922[1 /*9*/] = { 1735.7646f, 3710.417f, 37.936584f };
			uParam0->f_1922[1 /*9*/].f_3 = { -28.018818f, 0f, 110.97212f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 1724.0144f, 3712.982f, 33.2183f };
			uParam0->f_1742.f_27 = 21f;
			uParam0->f_1742.f_108[0 /*3*/] = { 1724.0144f, 3712.982f, 33.2183f };
			uParam0->f_1742.f_124[0] = 21f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 1729.0753f, 3714.9749f, 33.1545f };
			uParam0->f_1742.f_124[1] = 21f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 1728.6119f, 3721.61f, 33.0577f };
			uParam0->f_1742.f_124[2] = 355.1809f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 1723.2264f, 3721.503f, 33.0942f };
			uParam0->f_1742.f_124[3] = 3.5273f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 1733.556f, 3723.3313f, 33.0045f };
			uParam0->f_1742.f_124[4] = 357.9914f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 78:
			*uParam0 = { 948.70734f, -1462.6624f, 42.38476f };
			uParam0->f_3[0 /*3*/] = { 939.6351f, -1458.9806f, 30.47f };
			uParam0->f_3[1 /*3*/] = { 943.48f, -1458.6298f, 30.4708f };
			uParam0->f_24 = { 928.79596f, -1445.5924f, 37.127846f };
			uParam0->f_24.f_3 = { -16.382874f, 0f, -147.7017f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 940.2686f, -1458.9457f, 32.73f };
			uParam0->f_38[0 /*27*/].f_3 = { 939.013f, -1458.9457f, 30f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 180f;
			uParam0->f_38[0 /*27*/].f_23 = { 939.6578f, -1458.9774f, 30.4699f };
			uParam0->f_38[0 /*27*/].f_16 = { 938.6f, -1458.778f, 31.68f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 180f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 939.6075f, -1456.7239f, 30.3631f };
			uParam0->f_146[0 /*12*/].f_11 = 0f;
			uParam0->f_1922[0 /*9*/] = { 935.2814f, -1458.6176f, 34.208694f };
			uParam0->f_1922[0 /*9*/].f_3 = { -33.6694f, 0f, -80.5335f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 941.444f, -1458.384f, 30f };
			uParam0->f_38[1 /*27*/].f_3 = { 945.3676f, -1458.384f, 34f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 180f;
			uParam0->f_38[1 /*27*/].f_23 = { 943.4398f, -1458.7019f, 30.474f };
			uParam0->f_146[1 /*12*/].f_8 = { 943.4383f, -1453.2849f, 30.14f };
			uParam0->f_146[1 /*12*/].f_11 = 0f;
			uParam0->f_1922[1 /*9*/] = { 974.5536f, -1476.0002f, 46.41779f };
			uParam0->f_1922[1 /*9*/].f_3 = { -23.05029f, 0f, 88.102196f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 943.4383f, -1453.2849f, 30.14f };
			uParam0->f_1742.f_27 = 0f;
			uParam0->f_1742.f_108[0 /*3*/] = { 943.401f, -1454.0593f, 30.637f };
			uParam0->f_1742.f_124[0] = -5.77f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 947.8489f, -1454.6787f, 30.6761f };
			uParam0->f_1742.f_124[1] = -17.76f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 932.9202f, -1454.8738f, 30.2099f };
			uParam0->f_1742.f_124[2] = 319.729f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 935.9636f, -1455.2886f, 30.2326f };
			uParam0->f_1742.f_124[3] = -16.32f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 950.9557f, -1454.9889f, 30.2025f };
			uParam0->f_1742.f_124[4] = 337.6744f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 79:
			*uParam0 = { 177.88423f, 318.72855f, 122.26744f };
			uParam0->f_3[0 /*3*/] = { 189.8949f, 309.2079f, 104.3896f };
			uParam0->f_3[1 /*3*/] = { 177.9027f, 308.8062f, 104.3697f };
			uParam0->f_24 = { 196.29535f, 298.5883f, 113.40469f };
			uParam0->f_24.f_3 = { -20.06748f, 0f, 38.44216f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 189.1762f, 309.1273f, 104.3897f };
			uParam0->f_38[0 /*27*/].f_3 = { 190.5779f, 309.2284f, 107.3897f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 5f;
			uParam0->f_38[0 /*27*/].f_23 = { 189.8949f, 309.2079f, 104.3896f };
			uParam0->f_38[0 /*27*/].f_16 = { 188.48f, 309.46f, 105.716f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 5f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 190.0721f, 305.5183f, 104.3977f };
			uParam0->f_146[0 /*12*/].f_11 = 185f;
			uParam0->f_1922[0 /*9*/] = { 185.69423f, 308.83148f, 107.8885f };
			uParam0->f_1922[0 /*9*/].f_3 = { -28.510675f, 0f, -98.607025f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 176.0313f, 308.3507f, 104.371f };
			uParam0->f_38[1 /*27*/].f_3 = { 180.1147f, 308.6703f, 108.3695f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 5f;
			uParam0->f_38[1 /*27*/].f_23 = { 177.9027f, 308.8062f, 104.3697f };
			uParam0->f_146[1 /*12*/].f_8 = { 178.2772f, 305.5948f, 104.3732f };
			uParam0->f_146[1 /*12*/].f_11 = 185f;
			uParam0->f_1922[1 /*9*/] = { 183.74062f, 308.49994f, 108.03781f };
			uParam0->f_1922[1 /*9*/].f_3 = { -25.271816f, 0f, 99.13209f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 177.123f, 300.9604f, 104.3748f };
			uParam0->f_1742.f_27 = 91.7932f;
			uParam0->f_1742.f_108[0 /*3*/] = { 177.123f, 300.9604f, 104.3748f };
			uParam0->f_1742.f_124[0] = 91.7932f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 167.2899f, 300.1632f, 105.6391f };
			uParam0->f_1742.f_124[1] = 93.2529f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 185.748f, 298.2313f, 104.4235f };
			uParam0->f_1742.f_124[2] = 251.0825f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 186.2933f, 303.3362f, 104.4264f };
			uParam0->f_1742.f_124[3] = 236.4414f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 197.8231f, 293.2612f, 104.6384f };
			uParam0->f_1742.f_124[4] = 248.9478f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 80:
			*uParam0 = { -19.170744f, -185.03793f, 68.971f };
			uParam0->f_3[0 /*3*/] = { -22.0633f, -192.056f, 51.3638f };
			uParam0->f_3[1 /*3*/] = { -16.539602f, -191.60551f, 53.949978f };
			uParam0->f_24 = { -40.058464f, -199.46564f, 60.36575f };
			uParam0->f_24.f_3 = { -14.12869f, 1E-06f, -55.9272f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -22.8026f, -191.6848f, 51.3627f };
			uParam0->f_38[0 /*27*/].f_3 = { -21.3126f, -192.2275f, 54.3646f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 340f;
			uParam0->f_38[0 /*27*/].f_23 = { -22.0633f, -192.056f, 51.3638f };
			uParam0->f_38[0 /*27*/].f_16 = { -23.336f, -191.17f, 52.654f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 340f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -23.1747f, -195.7159f, 51.3659f };
			uParam0->f_146[0 /*12*/].f_11 = 160f;
			uParam0->f_1922[0 /*9*/] = { -25.039228f, -190.77153f, 54.128937f };
			uParam0->f_1922[0 /*9*/].f_3 = { -26.308592f, -1E-06f, -125.97423f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -19.0774f, -193.0987f, 51.3675f };
			uParam0->f_38[1 /*27*/].f_3 = { -15.1719f, -194.4668f, 56.3675f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 340f;
			uParam0->f_38[1 /*27*/].f_23 = { -16.539602f, -191.60551f, 53.949978f };
			uParam0->f_146[1 /*12*/].f_8 = { -27.2982f, -193.4763f, 51.3583f };
			uParam0->f_146[1 /*12*/].f_11 = 160f;
			uParam0->f_1922[1 /*9*/] = { -30.745188f, -189.1472f, 56.23203f };
			uParam0->f_1922[1 /*9*/].f_3 = { -31.822266f, -1E-06f, -116.96832f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -28.1203f, -196.1983f, 51.3639f };
			uParam0->f_1742.f_27 = 160f;
			uParam0->f_1742.f_108[0 /*3*/] = { -28.1203f, -196.1983f, 51.3639f };
			uParam0->f_1742.f_124[0] = 160f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -35.4665f, -197.472f, 51.3557f };
			uParam0->f_1742.f_124[1] = 71.879f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -34.7617f, -193.9737f, 51.359f };
			uParam0->f_1742.f_124[2] = 72.8786f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -21.2296f, -202.8143f, 51.3551f };
			uParam0->f_1742.f_124[3] = 251.3569f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -12.0377f, -206.4577f, 51.5363f };
			uParam0->f_1742.f_124[4] = 249.2681f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 81:
			*uParam0 = { 2473.0986f, 4096.519f, 52.16207f };
			uParam0->f_3[0 /*3*/] = { 2471.9436f, 4110.662f, 37.0647f };
			uParam0->f_3[1 /*3*/] = { 2467.9373f, 4100.745f, 37.0647f };
			uParam0->f_24 = { 2462.3113f, 4123.169f, 47.586555f };
			uParam0->f_24.f_3 = { -17.713013f, 0f, -152.80966f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 2472.1135f, 4111.497f, 37.0647f };
			uParam0->f_38[0 /*27*/].f_3 = { 2471.534f, 4109.984f, 40.0647f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 248f;
			uParam0->f_38[0 /*27*/].f_23 = { 2471.9436f, 4110.662f, 37.0647f };
			uParam0->f_38[0 /*27*/].f_16 = { 2471.648f, 4109.449f, 38.409f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 248f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 2469.9907f, 4111.6045f, 37.0647f };
			uParam0->f_146[0 /*12*/].f_11 = 68f;
			uParam0->f_1922[0 /*9*/] = { 2470.2874f, 4107.252f, 40.907482f };
			uParam0->f_1922[0 /*9*/].f_3 = { -35.72808f, -1E-06f, -15.280706f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 2468.277f, 4102.203f, 37.0647f };
			uParam0->f_38[1 /*27*/].f_3 = { 2467.2498f, 4099.5366f, 41.0647f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 248f;
			uParam0->f_38[1 /*27*/].f_23 = { 2467.9373f, 4100.745f, 37.0647f };
			uParam0->f_146[1 /*12*/].f_8 = { 2465.3677f, 4101.8813f, 37.0647f };
			uParam0->f_146[1 /*12*/].f_11 = 68f;
			uParam0->f_1922[1 /*9*/] = { 2466.0776f, 4097.3066f, 40.994057f };
			uParam0->f_1922[1 /*9*/].f_3 = { -29.995745f, 0f, -11.943918f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 2465.3677f, 4101.8813f, 37.0647f };
			uParam0->f_1742.f_27 = 68f;
			uParam0->f_1742.f_108[0 /*3*/] = { 2465.4043f, 4102.0166f, 37.0647f };
			uParam0->f_1742.f_124[0] = 353.905f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 2467.2139f, 4107.9287f, 37.0647f };
			uParam0->f_1742.f_124[1] = 340.5299f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 2470.3066f, 4113.582f, 37.0647f };
			uParam0->f_1742.f_124[2] = 329.253f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 2473.9504f, 4116.216f, 37.0647f };
			uParam0->f_1742.f_124[3] = 291.3084f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 2481.9893f, 4118.289f, 37.0647f };
			uParam0->f_1742.f_124[4] = 264.1184f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 82:
			*uParam0 = { -45.748684f, 6429.7905f, 56.77554f };
			uParam0->f_3[0 /*3*/] = { -39.1115f, 6420.4746f, 30.6905f };
			uParam0->f_3[1 /*3*/] = { -35.3235f, 6424.1157f, 30.4333f };
			uParam0->f_24 = { -38.01412f, 6407.1274f, 40.712585f };
			uParam0->f_24.f_3 = { -21.779882f, 0f, 16.051352f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -39.4762f, 6419.8228f, 30.4904f };
			uParam0->f_38[0 /*27*/].f_3 = { -38.4606f, 6420.841f, 33.4904f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 45f;
			uParam0->f_38[0 /*27*/].f_23 = { -39.1115f, 6420.4746f, 30.6905f };
			uParam0->f_38[0 /*27*/].f_16 = { -38.42f, 6421.227f, 31.826f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 45f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -37.188f, 6418.5347f, 30.4904f };
			uParam0->f_146[0 /*12*/].f_11 = 225f;
			uParam0->f_1922[0 /*9*/] = { -37.065594f, 6422.3306f, 33.24395f };
			uParam0->f_1922[0 /*9*/].f_3 = { -25.039474f, 0f, 150.09421f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -36.7141f, 6422.576f, 30.4632f };
			uParam0->f_38[1 /*27*/].f_3 = { -33.7452f, 6425.517f, 34.4328f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 45f;
			uParam0->f_38[1 /*27*/].f_23 = { -35.3235f, 6424.1157f, 30.4333f };
			uParam0->f_146[1 /*12*/].f_8 = { -32.4131f, 6421.9355f, 30.4598f };
			uParam0->f_146[1 /*12*/].f_11 = 225f;
			uParam0->f_1922[1 /*9*/] = { -32.621376f, 6426.5503f, 34.628048f };
			uParam0->f_1922[1 /*9*/].f_3 = { -34.962963f, -1E-06f, 146.7703f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -32.509f, 6421.431f, 30.4661f };
			uParam0->f_1742.f_27 = 225f;
			uParam0->f_1742.f_108[0 /*3*/] = { -32.509f, 6421.431f, 30.4661f };
			uParam0->f_1742.f_124[0] = 225f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -29.1462f, 6417.238f, 30.4904f };
			uParam0->f_1742.f_124[1] = 225f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -24.2641f, 6411.932f, 30.4904f };
			uParam0->f_1742.f_124[2] = 225f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -32.4584f, 6412.8135f, 30.4904f };
			uParam0->f_1742.f_124[3] = 225f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -27.9055f, 6408.1694f, 30.4904f };
			uParam0->f_1742.f_124[4] = 225f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 83:
			*uParam0 = { -1136.5905f, -1564.3088f, 12.93727f };
			uParam0->f_3[0 /*3*/] = { -1134.7958f, -1568.8192f, 3.4081f };
			uParam0->f_3[1 /*3*/] = { -1147.438f, -1577.5774f, 3.5701f };
			uParam0->f_24 = { -1117.0426f, -1574.494f, 13.515028f };
			uParam0->f_24.f_3 = { -17.010227f, 0f, 75.327484f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1135.5327f, -1569.2538f, 3.4117f };
			uParam0->f_38[0 /*27*/].f_3 = { -1134.2228f, -1568.3727f, 6.4057f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 35f;
			uParam0->f_38[0 /*27*/].f_23 = { -1134.7958f, -1568.8192f, 3.4081f };
			uParam0->f_38[0 /*27*/].f_16 = { -1134.403f, -1568.09f, 4.715f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 35f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1133.7134f, -1570.1848f, 3.2607f };
			uParam0->f_146[0 /*12*/].f_11 = 215f;
			uParam0->f_1922[0 /*9*/] = { -1137.457f, -1570.6202f, 7.014599f };
			uParam0->f_1922[0 /*9*/].f_3 = { -33.61084f, 1E-06f, -69.272675f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1149.1505f, -1578.8999f, 3.4373f };
			uParam0->f_38[1 /*27*/].f_3 = { -1145.5365f, -1576.3844f, 7.4348f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 35f;
			uParam0->f_38[1 /*27*/].f_23 = { -1147.438f, -1577.5774f, 3.5701f };
			uParam0->f_146[1 /*12*/].f_8 = { -1146.254f, -1579.1456f, 3.2626f };
			uParam0->f_146[1 /*12*/].f_11 = 215f;
			uParam0->f_1922[1 /*9*/] = { -1150.8602f, -1580.0587f, 6.993506f };
			uParam0->f_1922[1 /*9*/].f_3 = { -35.346024f, 1E-06f, -71.9474f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -1146.254f, -1579.1456f, 3.2626f };
			uParam0->f_1742.f_27 = 215f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1146.254f, -1579.1456f, 3.2626f };
			uParam0->f_1742.f_124[0] = 215f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1125.6335f, -1577.4982f, 3.2418f };
			uParam0->f_1742.f_124[1] = 305.4502f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1144.9355f, -1590.7456f, 3.2428f };
			uParam0->f_1742.f_124[2] = 304.4731f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1139.7471f, -1575.1775f, 3.2834f };
			uParam0->f_1742.f_124[3] = 126.4407f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1157.1512f, -1587.0713f, 3.2301f };
			uParam0->f_1742.f_124[4] = 126.0571f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
	}
}

void func_56(var uParam0, int iParam1)//Position - 0x174D9
{
	struct<4> Var0;
	
	uParam0->f_38[0 /*27*/].f_22 = 5;
	uParam0->f_38[1 /*27*/].f_22 = 5;
	uParam0->f_38[2 /*27*/].f_22 = 5;
	switch (iParam1)
	{
		case 68:
			*uParam0 = { -1581.5f, -558.3f, 35f };
			uParam0->f_3[0 /*3*/] = { -1581.5f, -558.3f, 35f };
			uParam0->f_3[1 /*3*/] = { -1560.771f, -569.1514f, 113.7914f };
			uParam0->f_24 = { -1566.3601f, -485.2462f, 40.503f };
			uParam0->f_24.f_3 = { 23.8802f, 0.0288f, 173.8406f };
			uParam0->f_24.f_6 = 55.7454f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1580.1984f, -557.68176f, 33.952816f };
			uParam0->f_38[0 /*27*/].f_3 = { -1582.2021f, -559.18726f, 36.452858f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 216.2582f;
			uParam0->f_38[0 /*27*/].f_23 = { -1583.52f, -558.453f, 33.9535f };
			uParam0->f_38[0 /*27*/].f_16 = { -1582.046f, -559.602f, 35.25f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -142.2f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1584.0527f, -554.6662f, 33.9762f };
			uParam0->f_146[0 /*12*/].f_11 = 39.6483f;
			uParam0->f_1922[0 /*9*/] = { -1577.8252f, -557.2221f, 41.1317f };
			uParam0->f_1922[0 /*9*/].f_3 = { -44.1509f, 0f, 89.9985f };
			uParam0->f_1922[0 /*9*/].f_6 = 77.4526f;
			uParam0->f_38[1 /*27*/].f_26 = 1;
			uParam0->f_38[1 /*27*/] = { -1559.6917f, -568.11774f, 113.44932f };
			uParam0->f_38[1 /*27*/].f_3 = { -1562.0356f, -569.73804f, 115.69932f };
			uParam0->f_38[1 /*27*/].f_6 = 1f;
			uParam0->f_38[1 /*27*/].f_7 = 209.3411f;
			uParam0->f_38[1 /*27*/].f_23 = { -1563.5151f, -568.7156f, 113.4493f };
			uParam0->f_38[1 /*27*/].f_16 = { -1561.895f, -570.2933f, 114.859f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -142.3f };
			uParam0->f_38[1 /*27*/].f_12 = { -1562.3384f, -569.6094f, 114.4321f };
			uParam0->f_146[1 /*12*/].f_8 = { -1561.9615f, -567.2552f, 113.4493f };
			uParam0->f_146[1 /*12*/].f_11 = 24.255f;
			uParam0->f_1922[1 /*9*/] = { -1556.4696f, -566.1495f, 119.3585f };
			uParam0->f_1922[1 /*9*/].f_3 = { -31.7605f, 0f, 104.6976f };
			uParam0->f_1922[1 /*9*/].f_6 = 59.2455f;
			uParam0->f_1742.f_139 = { -1554.8196f, -561.2455f, 30.5729f };
			uParam0->f_1742.f_139.f_3 = { -52.3398f, 0f, -28.4273f };
			uParam0->f_1742.f_139.f_6 = 67.3726f;
			uParam0->f_38[2 /*27*/].f_26 = 2;
			uParam0->f_38[2 /*27*/] = { -1545.798f, -557.46f, 24.36f };
			uParam0->f_38[2 /*27*/].f_3 = { -1553.65f, -562.815f, 28.91f };
			uParam0->f_38[2 /*27*/].f_6 = 6.45f;
			uParam0->f_38[2 /*27*/].f_7 = 217.4663f;
			uParam0->f_38[2 /*27*/].f_23 = { -1565.6465f, -537.89f, 33.8479f };
			uParam0->f_1742.f_108[0 /*3*/] = { -1566.882f, -531.6985f, 34.5696f };
			uParam0->f_1742.f_124[0] = 35.4988f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1568.705f, -529.1504f, 34.5097f };
			uParam0->f_1742.f_124[1] = 35.6329f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1550.6097f, -534.6669f, 34.0739f };
			uParam0->f_1742.f_124[2] = 37.468f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1546.0995f, -540.9735f, 33.5649f };
			uParam0->f_1742.f_124[3] = 39.0033f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1540.0524f, -549.1758f, 32.9157f };
			uParam0->f_1742.f_124[4] = 38.612f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_38[2 /*27*/].f_16 = { -1554.339f, -561.571f, 26.2058f };
			uParam0->f_38[2 /*27*/].f_19 = { 0f, 0f, 125.125f };
			uParam0->f_38[2 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[2 /*27*/].f_16, uParam0->f_38[2 /*27*/].f_19, &Var0, uParam0->f_38[2 /*27*/].f_22);
			uParam0->f_38[2 /*27*/].f_12 = { Var0 };
			uParam0->f_38[2 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[2 /*12*/].f_8 = { -1569.7242f, -531.7974f, 34.4859f };
			uParam0->f_146[2 /*12*/].f_11 = 47.1292f;
			uParam0->f_3[2 /*3*/] = { -1565.6465f, -537.89f, 33.8479f };
			uParam0->f_36 = 3;
			uParam0->f_34 = 3;
			break;
		
		case 69:
			*uParam0 = { -1363.7557f, -510.9757f, 30.2801f };
			uParam0->f_3[0 /*3*/] = { -1370.3484f, -503.0963f, 32.1574f };
			uParam0->f_3[1 /*3*/] = { -1369.7494f, -472.048f, 83.7585f };
			uParam0->f_24 = { -1382.8022f, -576.5264f, 33.7159f };
			uParam0->f_24.f_3 = { 14.0594f, 0.016f, -6.0004f };
			uParam0->f_24.f_6 = 48.6496f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1369.9982f, -502.79828f, 31.940834f };
			uParam0->f_38[0 /*27*/].f_3 = { -1370.9344f, -503.4724f, 35.407406f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 307.1366f;
			uParam0->f_38[0 /*27*/].f_23 = { -1370.3484f, -503.0963f, 32.1574f };
			uParam0->f_38[0 /*27*/].f_16 = { -1369.081f, -504.853f, 33.4758f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -54.9f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1371.698f, -504.2646f, 32.1574f };
			uParam0->f_146[0 /*12*/].f_11 = 136.379f;
			uParam0->f_1922[0 /*9*/] = { -1373.593f, -499.2561f, 37.2086f };
			uParam0->f_1922[0 /*9*/].f_3 = { -29.2442f, 0f, -174.7204f };
			uParam0->f_1922[0 /*9*/].f_6 = 64.132f;
			uParam0->f_38[1 /*27*/].f_26 = 1;
			uParam0->f_38[1 /*27*/] = { -1369.8708f, -472.24445f, 83.33684f };
			uParam0->f_38[1 /*27*/].f_3 = { -1369.224f, -471.78528f, 86.69694f };
			uParam0->f_38[1 /*27*/].f_6 = 1.75f;
			uParam0->f_38[1 /*27*/].f_7 = 124.2775f;
			uParam0->f_38[1 /*27*/].f_23 = { -1369.5686f, -471.9889f, 83.4469f };
			uParam0->f_38[1 /*27*/].f_16 = { -1370.197f, -471.486f, 84.8834f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 122.74f };
			uParam0->f_38[1 /*27*/].f_12 = { -1369.6176f, -471.1026f, 84.4431f };
			uParam0->f_146[1 /*12*/].f_8 = { -1367.4072f, -471.275f, 83.4469f };
			uParam0->f_146[1 /*12*/].f_11 = 192.5905f;
			uParam0->f_1922[1 /*9*/] = { -1364.575f, -486.9128f, 89.3676f };
			uParam0->f_1922[1 /*9*/].f_3 = { -16.1979f, 0f, 47.8232f };
			uParam0->f_1922[1 /*9*/].f_6 = 71.8136f;
			uParam0->f_1742.f_139 = { -1416.9712f, -473.9347f, 37.9568f };
			uParam0->f_1742.f_139.f_3 = { -48.1546f, 0f, -177.9143f };
			uParam0->f_1742.f_139.f_6 = 57.6609f;
			uParam0->f_38[2 /*27*/].f_26 = 2;
			uParam0->f_38[2 /*27*/] = { -1411.05f, -480.325f, 37.675f };
			uParam0->f_38[2 /*27*/].f_3 = { -1416.075f, -472.925f, 32.175f };
			uParam0->f_38[2 /*27*/].f_6 = 9.35f;
			uParam0->f_38[2 /*27*/].f_7 = 303.723f;
			uParam0->f_38[2 /*27*/].f_23 = { -1415.3624f, -477.7129f, 32.5229f };
			uParam0->f_1742.f_108[0 /*3*/] = { -1420.7272f, -479.2959f, 32.8519f };
			uParam0->f_1742.f_124[0] = 125.1182f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1428.926f, -473.8968f, 33.1141f };
			uParam0->f_1742.f_124[1] = 34.1439f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1418.69f, -489.0421f, 32.2947f };
			uParam0->f_1742.f_124[2] = 33.2319f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1413.8832f, -496.0346f, 31.8743f };
			uParam0->f_1742.f_124[3] = 33.365f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1408.1458f, -504.3559f, 31.3764f };
			uParam0->f_1742.f_124[4] = 33.883f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_38[2 /*27*/].f_16 = { -1413.486f, -481.671f, 33.8948f };
			uParam0->f_38[2 /*27*/].f_19 = { 0f, 0f, -146.595f };
			uParam0->f_38[2 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[2 /*27*/].f_16, uParam0->f_38[2 /*27*/].f_19, &Var0, uParam0->f_38[2 /*27*/].f_22);
			uParam0->f_38[2 /*27*/].f_12 = { Var0 };
			uParam0->f_38[2 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[2 /*12*/].f_8 = { -1418.9496f, -479.073f, 32.8152f };
			uParam0->f_146[2 /*12*/].f_11 = 124.8494f;
			uParam0->f_3[2 /*3*/] = { -1415.3624f, -477.7129f, 32.5229f };
			uParam0->f_36 = 3;
			uParam0->f_34 = 3;
			break;
		
		case 70:
			*uParam0 = { -92.6372f, -578.662f, 35.3123f };
			uParam0->f_3[0 /*3*/] = { -117.5296f, -605.7157f, 35.2857f };
			uParam0->f_3[1 /*3*/] = { -134.3277f, -584.6831f, 200.8647f };
			uParam0->f_24 = { -74.0762f, -701.7039f, 49.4868f };
			uParam0->f_24.f_3 = { 33.348f, 0.0253f, 37.4705f };
			uParam0->f_24.f_6 = 55.3993f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -119.68584f, -609.64233f, 35.258965f };
			uParam0->f_38[0 /*27*/].f_3 = { -115.88846f, -599.1504f, 38.391968f };
			uParam0->f_38[0 /*27*/].f_6 = 4.1875f;
			uParam0->f_38[0 /*27*/].f_7 = 64.6717f;
			uParam0->f_38[0 /*27*/].f_23 = { -118.5747f, -610.1472f, 35.5043f };
			uParam0->f_38[0 /*27*/].f_16 = { -119.768f, -609.7531f, 36.6249f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 70.155f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -110.9626f, -605.3646f, 35.2857f };
			uParam0->f_146[0 /*12*/].f_11 = 255.3759f;
			uParam0->f_1922[0 /*9*/] = { -117.2984f, -588.0927f, 39.4723f };
			uParam0->f_1922[0 /*9*/].f_3 = { -13.4276f, 0f, -137.6638f };
			uParam0->f_1922[0 /*9*/].f_6 = 61.2735f;
			uParam0->f_38[1 /*27*/].f_26 = 1;
			uParam0->f_38[1 /*27*/] = { -133.5413f, -585.7881f, 200.68016f };
			uParam0->f_38[1 /*27*/].f_3 = { -135.23973f, -583.7808f, 203.37856f };
			uParam0->f_38[1 /*27*/].f_6 = 2.6875f;
			uParam0->f_38[1 /*27*/].f_7 = 134.4353f;
			uParam0->f_38[1 /*27*/].f_23 = { -134.9465f, -583.0051f, 201.1521f };
			uParam0->f_38[1 /*27*/].f_16 = { -135.2997f, -583.7286f, 202.1938f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 140.44f };
			uParam0->f_38[1 /*27*/].f_12 = { -134.7125f, -583.3456f, 201.762f };
			uParam0->f_146[1 /*12*/].f_8 = { -131.9133f, -585.8597f, 200.7354f };
			uParam0->f_146[1 /*12*/].f_11 = 212.5333f;
			uParam0->f_1922[1 /*9*/] = { -165.6158f, -590.6523f, 216.2003f };
			uParam0->f_1922[1 /*9*/].f_3 = { -8.8826f, 0f, -95.9212f };
			uParam0->f_1922[1 /*9*/].f_6 = 56.7626f;
			uParam0->f_1742.f_139 = { -142.9038f, -581.848f, 34.5346f };
			uParam0->f_1742.f_139.f_3 = { -22.8984f, 0f, 133.7528f };
			uParam0->f_1742.f_139.f_6 = 63.1373f;
			uParam0->f_38[2 /*27*/].f_26 = 2;
			uParam0->f_38[2 /*27*/] = { -146.409f, -575.904f, 31.597f };
			uParam0->f_38[2 /*27*/].f_3 = { -141.982f, -577.559f, 34.597f };
			uParam0->f_38[2 /*27*/].f_6 = 12.875f;
			uParam0->f_38[2 /*27*/].f_7 = 328.7051f;
			uParam0->f_38[2 /*27*/].f_23 = { -125.7799f, -659.3828f, 34.3782f };
			uParam0->f_1742.f_108[0 /*3*/] = { -148.9469f, -589.234f, 31.4245f };
			uParam0->f_1742.f_124[0] = 159.9474f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -151.4621f, -596.1295f, 31.4245f };
			uParam0->f_1742.f_124[1] = 159.9607f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -154.2729f, -603.8367f, 31.4245f };
			uParam0->f_1742.f_124[2] = 159.9593f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -157.7088f, -655.0534f, 31.2126f };
			uParam0->f_1742.f_124[3] = 250.7447f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -139.9135f, -661.372f, 32.6781f };
			uParam0->f_1742.f_124[4] = 249.0975f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_38[2 /*27*/].f_16 = { -142.81f, -581.477f, 32.7278f };
			uParam0->f_38[2 /*27*/].f_19 = { 0f, 0f, -19.803f };
			uParam0->f_38[2 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[2 /*27*/].f_16, uParam0->f_38[2 /*27*/].f_19, &Var0, uParam0->f_38[2 /*27*/].f_22);
			uParam0->f_38[2 /*27*/].f_12 = { Var0 };
			uParam0->f_38[2 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[2 /*12*/].f_8 = { -146.9829f, -585.0058f, 31.4245f };
			uParam0->f_146[2 /*12*/].f_11 = 158.7409f;
			uParam0->f_3[2 /*3*/] = { -125.7799f, -659.3828f, 34.3782f };
			uParam0->f_36 = 3;
			uParam0->f_34 = 3;
			break;
		
		case 71:
			*uParam0 = { -56.6f, -783.3f, 44.1f };
			uParam0->f_3[0 /*3*/] = { -81.3f, -797.5f, 44.2f };
			uParam0->f_3[1 /*3*/] = { -67.8f, -821.6f, 320.4f };
			uParam0->f_24 = { -50.6769f, -1013.9424f, 183.2113f };
			uParam0->f_24.f_3 = { 18.7747f, -0.0159f, 7.6518f };
			uParam0->f_24.f_6 = 44.5136f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -82.050285f, -797.7917f, 43.227314f };
			uParam0->f_38[0 /*27*/].f_3 = { -78.21367f, -796.74316f, 45.727314f };
			uParam0->f_38[0 /*27*/].f_6 = 2f;
			uParam0->f_38[0 /*27*/].f_7 = 205.4841f;
			uParam0->f_38[0 /*27*/].f_23 = { -78.3f, -799.7f, 44.2f };
			uParam0->f_38[0 /*27*/].f_16 = { -82.5033f, -797.64f, 44.5225f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 136.44f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -83.3513f, -794.3069f, 43.2273f };
			uParam0->f_146[0 /*12*/].f_11 = 19.2204f;
			uParam0->f_1922[0 /*9*/] = { -80.0721f, -805.2011f, 50.2228f };
			uParam0->f_1922[0 /*9*/].f_3 = { -23.299f, 0f, -23.5398f };
			uParam0->f_1922[0 /*9*/].f_6 = 63.0745f;
			uParam0->f_38[1 /*27*/].f_26 = 1;
			uParam0->f_38[1 /*27*/] = { -68.30604f, -822.96643f, 320.29752f };
			uParam0->f_38[1 /*27*/].f_3 = { -67.012535f, -819.41766f, 322.7896f };
			uParam0->f_38[1 /*27*/].f_6 = 1.25f;
			uParam0->f_38[1 /*27*/].f_7 = 75.5765f;
			uParam0->f_38[1 /*27*/].f_23 = { -67.7f, -821.6f, 321.3f };
			uParam0->f_38[1 /*27*/].f_16 = { -67.249f, -819.9236f, 321.7416f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 79.84f };
			uParam0->f_38[1 /*27*/].f_12 = { -66.3545f, -819.9989f, 321.313f };
			uParam0->f_1922[1 /*9*/] = { -66.9822f, -819.1842f, 323.0544f };
			uParam0->f_1922[1 /*9*/].f_3 = { -27.147f, 0f, -173.347f };
			uParam0->f_1922[1 /*9*/].f_6 = 57.4756f;
			uParam0->f_146[1 /*12*/].f_8 = { -65.9803f, -818.9702f, 320.2896f };
			uParam0->f_146[1 /*12*/].f_11 = 356.4971f;
			uParam0->f_1742.f_139 = { -84.8048f, -784.2784f, 41.7591f };
			uParam0->f_1742.f_139.f_3 = { -28.6275f, 0f, -17.8843f };
			uParam0->f_1742.f_139.f_6 = 66.9887f;
			uParam0->f_38[2 /*27*/].f_26 = 2;
			uParam0->f_38[2 /*27*/] = { -83.95f, -790f, 35.987f };
			uParam0->f_38[2 /*27*/].f_3 = { -72.3f, -786.75f, 41.787f };
			uParam0->f_38[2 /*27*/].f_6 = 10.2f;
			uParam0->f_38[2 /*27*/].f_7 = 195.0365f;
			uParam0->f_38[2 /*27*/].f_23 = { -82.4907f, -772.7483f, 38.8316f };
			uParam0->f_1742.f_108[0 /*3*/] = { -79.1206f, -774.7828f, 38.3078f };
			uParam0->f_1742.f_124[0] = 16.037f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -82.4993f, -763.003f, 40.807f };
			uParam0->f_1742.f_124[1] = 19.101f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -87.4891f, -747.4923f, 43.0785f };
			uParam0->f_1742.f_124[2] = 17.8727f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -76.5863f, -755.1157f, 43.1195f };
			uParam0->f_1742.f_124[3] = 208.6326f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -70.016f, -765.9581f, 43.1511f };
			uParam0->f_1742.f_124[4] = 220.2367f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_38[2 /*27*/].f_16 = { -84.454f, -786.462f, 38.6688f };
			uParam0->f_38[2 /*27*/].f_19 = { 0f, 0f, 104.76f };
			uParam0->f_38[2 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[2 /*27*/].f_16, uParam0->f_38[2 /*27*/].f_19, &Var0, uParam0->f_38[2 /*27*/].f_22);
			uParam0->f_38[2 /*27*/].f_12 = { Var0 };
			uParam0->f_38[2 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[2 /*12*/].f_8 = { -81.5764f, -776.6653f, 38.1687f };
			uParam0->f_146[2 /*12*/].f_11 = 354.5269f;
			uParam0->f_3[2 /*3*/] = { -82.4907f, -772.7483f, 38.8316f };
			uParam0->f_36 = 3;
			uParam0->f_34 = 3;
			break;
	}
}

void func_57(var uParam0, int iParam1)//Position - 0x18AF4
{
	struct<4> Var0;
	
	uParam0->f_38[0 /*27*/].f_22 = 5;
	uParam0->f_38[1 /*27*/].f_22 = 5;
	uParam0->f_38[2 /*27*/].f_22 = 5;
	switch (iParam1)
	{
		case 34:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -66.96652f, 6427.3823f, 34.264103f };
			uParam0->f_38[0 /*27*/].f_3 = { -69.53132f, 6424.8477f, 29.282707f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 238.4392f;
			uParam0->f_38[0 /*27*/].f_23 = { -70.23156f, 6425.2144f, 30.43954f };
			uParam0->f_38[0 /*27*/].f_16 = { -69.804f, 6424.731f, 31.8753f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -135f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -68.702f, 6426.148f, 30.439f };
			uParam0->f_24 = { -83.3466f, 6436.8037f, 35.1359f };
			uParam0->f_24.f_3 = { 9.9582f, 0f, -134.7812f };
			uParam0->f_24.f_6 = 58.8827f;
			*uParam0 = { -67.0695f, 6429.7285f, 30.4383f };
			uParam0->f_1922[0 /*9*/] = { -66.4177f, 6428.49f, 35.0323f };
			uParam0->f_1922[0 /*9*/].f_3 = { -39.6313f, 0f, 112.9385f };
			uParam0->f_1922[0 /*9*/].f_6 = 57.0534f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { -71.5713f, 6434.2534f, 30.4396f };
			uParam0->f_1742.f_27 = 70.9241f;
			uParam0->f_1742.f_108[0 /*3*/] = { -71.1927f, 6428.891f, 30.4394f };
			uParam0->f_1742.f_124[0] = 45.2484f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -73.277f, 6435.9297f, 30.4402f };
			uParam0->f_1742.f_124[1] = 45.8937f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -78.9433f, 6441.6904f, 30.4971f };
			uParam0->f_1742.f_124[2] = 44.1069f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -81.1158f, 6436.3413f, 30.4943f };
			uParam0->f_1742.f_124[3] = 45.7366f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -75.5796f, 6424.689f, 30.4904f };
			uParam0->f_1742.f_124[4] = 44.5217f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 35:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -249.03871f, 6239.045f, 33.51245f };
			uParam0->f_38[0 /*27*/].f_3 = { -245.78723f, 6242.4233f, 30.083305f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 46.1642f;
			uParam0->f_38[0 /*27*/].f_23 = { -249.05867f, 6237.5874f, 30.48934f };
			uParam0->f_38[0 /*27*/].f_16 = { -249.5378f, 6237.9453f, 31.93f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 45f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -245.5158f, 6239.048f, 30.4892f };
			uParam0->f_24 = { -223.8007f, 6241.24f, 34.9939f };
			uParam0->f_24.f_3 = { -0.6584f, 0f, 98.1777f };
			uParam0->f_24.f_6 = 33.186f;
			*uParam0 = { -249.6617f, 6235.9966f, 30.4891f };
			uParam0->f_1922[0 /*9*/] = { -244.8033f, 6242.5776f, 34.2428f };
			uParam0->f_1922[0 /*9*/].f_3 = { -40.6708f, 0f, 145.1215f };
			uParam0->f_1922[0 /*9*/].f_6 = 64.184f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { -251.6962f, 6234.6865f, 30.4891f };
			uParam0->f_1742.f_27 = 243.0621f;
			uParam0->f_1742.f_108[0 /*3*/] = { -244.7509f, 6238.024f, 30.4896f };
			uParam0->f_1742.f_124[0] = 225.149f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -246.2962f, 6231.4146f, 30.4894f };
			uParam0->f_1742.f_124[1] = 134.7321f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -244.3101f, 6228.8745f, 30.5019f };
			uParam0->f_1742.f_124[2] = 134.7857f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -235.0201f, 6237.3994f, 30.4898f };
			uParam0->f_1742.f_124[3] = 134.9227f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -237.9496f, 6240.6665f, 30.4907f };
			uParam0->f_1742.f_124[4] = 132.8805f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 36:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 2556.0647f, 4668.818f, 37.055973f };
			uParam0->f_38[0 /*27*/].f_3 = { 2552.2449f, 4667.132f, 32.031837f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 208.9861f;
			uParam0->f_38[0 /*27*/].f_23 = { 2556.1936f, 4669.4824f, 33.05043f };
			uParam0->f_38[0 /*27*/].f_16 = { 2556.3943f, 4669.0293f, 34.5895f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -154f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 2554.1653f, 4668.059f, 33.0233f };
			uParam0->f_24 = { 2524.19f, 4696.846f, 35.3387f };
			uParam0->f_24.f_3 = { 6.4304f, 0f, -121.3408f };
			uParam0->f_24.f_6 = 32.2333f;
			*uParam0 = { 2556.8303f, 4671.3696f, 32.9989f };
			uParam0->f_1922[0 /*9*/] = { 2551.094f, 4666.8643f, 37.0818f };
			uParam0->f_1922[0 /*9*/].f_3 = { -36.8487f, 0f, -50.5276f };
			uParam0->f_1922[0 /*9*/].f_6 = 57.5607f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 2549.016f, 4668.996f, 33.0767f };
			uParam0->f_1742.f_27 = 359.9875f;
			uParam0->f_1742.f_108[0 /*3*/] = { 2552.8066f, 4671.2065f, 32.9544f };
			uParam0->f_1742.f_124[0] = 23.4604f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 2549.964f, 4678.3066f, 32.9764f };
			uParam0->f_1742.f_124[1] = 21.7014f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 2545.6274f, 4688.416f, 32.5933f };
			uParam0->f_1742.f_124[2] = 23.9501f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 2552.9734f, 4681.7524f, 32.9039f };
			uParam0->f_1742.f_124[3] = 16.9448f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 2549.8342f, 4690.1953f, 32.6529f };
			uParam0->f_1742.f_124[4] = 19.1831f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 37:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 2460.8926f, 1587.0337f, 36.205948f };
			uParam0->f_38[0 /*27*/].f_3 = { 2460.9128f, 1591.7317f, 29.72712f };
			uParam0->f_38[0 /*27*/].f_6 = 4.75f;
			uParam0->f_38[0 /*27*/].f_7 = 90.6692f;
			uParam0->f_38[0 /*27*/].f_23 = { 2461.7432f, 1592.1282f, 31.72039f };
			uParam0->f_38[0 /*27*/].f_16 = { 2461.0132f, 1592.0822f, 33.506f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 90f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 2461.2202f, 1589.2552f, 32.0443f };
			uParam0->f_24 = { 2554.2195f, 1605.9854f, 39.4534f };
			uParam0->f_24.f_3 = { 2.9221f, 0f, 108.0557f };
			uParam0->f_24.f_6 = 32.0143f;
			*uParam0 = { 2463.384f, 1585.3732f, 31.7201f };
			uParam0->f_1922[0 /*9*/] = { 2461.326f, 1592.2249f, 36.2419f };
			uParam0->f_1922[0 /*9*/].f_3 = { -48.7504f, 0f, -174.4014f };
			uParam0->f_1922[0 /*9*/].f_6 = 60.2443f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 2462.8696f, 1593.2992f, 31.7201f };
			uParam0->f_1742.f_27 = 232.3503f;
			uParam0->f_1742.f_108[0 /*3*/] = { 2464.1997f, 1589.4071f, 31.7204f };
			uParam0->f_1742.f_124[0] = 270.5459f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 2472.1218f, 1589.4701f, 31.7204f };
			uParam0->f_1742.f_124[1] = 270.4538f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 2481.7297f, 1589.5356f, 31.7204f };
			uParam0->f_1742.f_124[2] = 270.3932f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 2472.5432f, 1582.7057f, 31.7204f };
			uParam0->f_1742.f_124[3] = 236.267f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 2482.1946f, 1578.4744f, 31.7204f };
			uParam0->f_1742.f_124[4] = 249.5383f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 38:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -2204.2632f, 4241.036f, 47.07064f };
			uParam0->f_38[0 /*27*/].f_3 = { -2206.5125f, 4244.0674f, 50.317635f };
			uParam0->f_38[0 /*27*/].f_6 = 9f;
			uParam0->f_38[0 /*27*/].f_7 = 215.8775f;
			uParam0->f_38[0 /*27*/].f_23 = { -2201.7776f, 4245.773f, 47.29582f };
			uParam0->f_38[0 /*27*/].f_16 = { -2201.5972f, 4245.4985f, 48.8956f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -143f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -2203.335f, 4244.4272f, 47.3305f };
			uParam0->f_24 = { -2203.1672f, 4289.137f, 57.1272f };
			uParam0->f_24.f_3 = { -14.5968f, 0f, 165.7235f };
			uParam0->f_24.f_6 = 26.2662f;
			*uParam0 = { -2203.8342f, 4245.8105f, 46.9031f };
			uParam0->f_1922[0 /*9*/] = { -2201.4858f, 4245.6455f, 50.0007f };
			uParam0->f_1922[0 /*9*/].f_3 = { -39.3492f, 0f, 97.0326f };
			uParam0->f_1922[0 /*9*/].f_6 = 63.7082f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { -2210.0066f, 4257.9272f, 46.3102f };
			uParam0->f_1742.f_27 = 0f;
			uParam0->f_1742.f_108[0 /*3*/] = { -2204.835f, 4247.093f, 46.6831f };
			uParam0->f_1742.f_124[0] = 37.0444f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -2211.0085f, 4253.1733f, 46.3205f };
			uParam0->f_1742.f_124[1] = 65.1199f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -2220.8774f, 4256.5923f, 45.5691f };
			uParam0->f_1742.f_124[2] = 67.5084f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -2209.193f, 4246.2075f, 46.5722f };
			uParam0->f_1742.f_124[3] = 57.1749f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -2219.0522f, 4250.2964f, 45.6889f };
			uParam0->f_1742.f_124[4] = 67.5023f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 39:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 220.72726f, 2601.9282f, 48.24141f };
			uParam0->f_38[0 /*27*/].f_3 = { 215.37546f, 2600.9832f, 43.25517f };
			uParam0->f_38[0 /*27*/].f_6 = 5.5f;
			uParam0->f_38[0 /*27*/].f_7 = 194.0507f;
			uParam0->f_38[0 /*27*/].f_23 = { 215.0567f, 2601.5122f, 44.75016f };
			uParam0->f_38[0 /*27*/].f_16 = { 215.0199f, 2601.0264f, 46.297f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -170f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 218.0665f, 2601.8171f, 44.7668f };
			uParam0->f_24 = { 203.8715f, 2620.3718f, 47.9511f };
			uParam0->f_24.f_3 = { 0.9185f, 0f, -139.0046f };
			uParam0->f_24.f_6 = 25.1587f;
			*uParam0 = { 211.8593f, 2605.9016f, 44.9672f };
			uParam0->f_1922[0 /*9*/] = { 214.6859f, 2601.0364f, 47.936f };
			uParam0->f_1922[0 /*9*/].f_3 = { -35.1379f, 0f, -59.8548f };
			uParam0->f_1922[0 /*9*/].f_6 = 62.3358f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 221.5349f, 2608.2761f, 45.219f };
			uParam0->f_1742.f_27 = 2.3625f;
			uParam0->f_1742.f_108[0 /*3*/] = { 217.5363f, 2604.5447f, 44.9176f };
			uParam0->f_1742.f_124[0] = 10.8359f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 215.546f, 2615.0037f, 46.0539f };
			uParam0->f_1742.f_124[1] = 10.3759f;
			uParam0->f_1742.f_130[0] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 208.0219f, 2618.4043f, 46.4394f };
			uParam0->f_1742.f_124[2] = 38.3398f;
			uParam0->f_1742.f_130[0] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 225.5106f, 2608.1196f, 45.156f };
			uParam0->f_1742.f_124[3] = 34.4217f;
			uParam0->f_1742.f_130[0] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 221.6936f, 2616.8738f, 45.894f };
			uParam0->f_1742.f_124[4] = 14.1856f;
			uParam0->f_1742.f_130[0] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 40:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 186.232f, 2784.1726f, 49.26564f };
			uParam0->f_38[0 /*27*/].f_3 = { 185.47844f, 2788.869f, 42.74625f };
			uParam0->f_38[0 /*27*/].f_6 = 4f;
			uParam0->f_38[0 /*27*/].f_7 = 96.4365f;
			uParam0->f_38[0 /*27*/].f_23 = { 185.98155f, 2789.387f, 44.5275f };
			uParam0->f_38[0 /*27*/].f_16 = { 185.4518f, 2789.3843f, 46.0915f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 99.5f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 186.1719f, 2786.3425f, 45.0144f };
			uParam0->f_24 = { 204.1797f, 2781.61f, 46.8041f };
			uParam0->f_24.f_3 = { 2.1959f, 0f, 70.7072f };
			uParam0->f_24.f_6 = 30.0687f;
			*uParam0 = { 187.7611f, 2782.9468f, 44.6553f };
			uParam0->f_1922[0 /*9*/] = { 186.8019f, 2782.5754f, 49.2501f };
			uParam0->f_1922[0 /*9*/].f_3 = { -40.3641f, 0f, -20.6897f };
			uParam0->f_1922[0 /*9*/].f_6 = 61.8127f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 188.1871f, 2790.8137f, 44.5641f };
			uParam0->f_1742.f_27 = 263.0688f;
			uParam0->f_1742.f_108[0 /*3*/] = { 190.1576f, 2787.2988f, 44.6088f };
			uParam0->f_1742.f_124[0] = 282.2347f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 188.926f, 2794.5137f, 44.6552f };
			uParam0->f_1742.f_124[1] = 6.4226f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 193.6776f, 2794.987f, 44.6552f };
			uParam0->f_1742.f_124[2] = 8.4438f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 188.1367f, 2802.647f, 44.6552f };
			uParam0->f_1742.f_124[3] = 4.8248f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 192.7628f, 2803.0625f, 44.6552f };
			uParam0->f_1742.f_124[4] = 8.5929f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 41:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 641.29596f, 2771.3699f, 40.68779f };
			uParam0->f_38[0 /*27*/].f_3 = { 637.1742f, 2771.0762f, 44.582718f };
			uParam0->f_38[0 /*27*/].f_6 = 2f;
			uParam0->f_38[0 /*27*/].f_7 = 184.4578f;
			uParam0->f_38[0 /*27*/].f_23 = { 636.96204f, 2772.0225f, 41.02439f };
			uParam0->f_38[0 /*27*/].f_16 = { 636.8882f, 2771.198f, 42.5919f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -176f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 639.45f, 2771.2f, 41.2f };
			uParam0->f_24 = { 680.7204f, 2782.6965f, 45.1229f };
			uParam0->f_24.f_3 = { 0.1065f, 0f, 80.5649f };
			uParam0->f_24.f_6 = 34.4741f;
			*uParam0 = { 643.8202f, 2787.8726f, 40.9563f };
			uParam0->f_1922[0 /*9*/] = { 641.882f, 2794.9102f, 44.633f };
			uParam0->f_1922[0 /*9*/].f_3 = { -39.3967f, 0f, -161.2362f };
			uParam0->f_1922[0 /*9*/].f_6 = 55.4012f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 637.2254f, 2784.6633f, 41.0101f };
			uParam0->f_1742.f_27 = 227.5745f;
			uParam0->f_1742.f_108[0 /*3*/] = { 638.8456f, 2776.4204f, 40.969f };
			uParam0->f_1742.f_124[0] = 4.5972f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 644.3888f, 2779.1707f, 40.9367f };
			uParam0->f_1742.f_124[1] = 275.5146f;
			uParam0->f_1742.f_130[0] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 647.0148f, 2770.9834f, 40.9766f };
			uParam0->f_1742.f_124[2] = 183.5678f;
			uParam0->f_1742.f_130[0] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 649.6042f, 2757.4421f, 40.9613f };
			uParam0->f_1742.f_124[3] = 202.3017f;
			uParam0->f_1742.f_130[0] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 653.1031f, 2764.2092f, 40.9388f };
			uParam0->f_1742.f_124[4] = 228.5975f;
			uParam0->f_1742.f_130[0] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 42:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -1131.6223f, 2702.4448f, 20.784332f };
			uParam0->f_38[0 /*27*/].f_3 = { -1129.7538f, 2700.2222f, 17.566471f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 308.0592f;
			uParam0->f_38[0 /*27*/].f_23 = { -1128.0306f, 2697.541f, 17.80039f };
			uParam0->f_38[0 /*27*/].f_16 = { -1127.666f, 2697.7524f, 19.3395f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -48f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -1130.9376f, 2701.1333f, 17.8004f };
			uParam0->f_24 = { -1154.7216f, 2665.7944f, 20.9318f };
			uParam0->f_24.f_3 = { 2.0466f, 0f, -47.8797f };
			uParam0->f_24.f_6 = 26.9081f;
			*uParam0 = { -1129.3767f, 2697.9443f, 17.8005f };
			uParam0->f_1922[0 /*9*/] = { -1128.8252f, 2698.8555f, 21.1368f };
			uParam0->f_1922[0 /*9*/].f_3 = { -34.5325f, 0f, 54.3263f };
			uParam0->f_1922[0 /*9*/].f_6 = 59.8904f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { -1129.4147f, 2697.9575f, 17.8003f };
			uParam0->f_1742.f_27 = 148.8793f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1131.8142f, 2697.0757f, 17.8004f };
			uParam0->f_1742.f_124[0] = 153.0315f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1135.4033f, 2690.0298f, 17.8004f };
			uParam0->f_1742.f_124[1] = 152.989f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1138.8588f, 2682.206f, 17.1049f };
			uParam0->f_1742.f_124[2] = 174.7645f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1135.5634f, 2672.6858f, 17.0939f };
			uParam0->f_1742.f_124[3] = 219.4992f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1138.6471f, 2667.3992f, 17.0928f };
			uParam0->f_1742.f_124[4] = 178.486f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 43:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -9.27419f, -1648.4724f, 33.09653f };
			uParam0->f_38[0 /*27*/].f_3 = { -13.008923f, -1645.3384f, 27.815578f };
			uParam0->f_38[0 /*27*/].f_6 = 4f;
			uParam0->f_38[0 /*27*/].f_7 = 153.8012f;
			uParam0->f_38[0 /*27*/].f_23 = { -8.29621f, -1648.1196f, 28.32089f };
			uParam0->f_38[0 /*27*/].f_16 = { -8.7565f, -1648.4497f, 29.9717f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 140f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -10.944f, -1646.7601f, 28.3125f };
			uParam0->f_24 = { 30.3715f, -1607.5082f, 36.8431f };
			uParam0->f_24.f_3 = { -3.1524f, 0f, 139.9197f };
			uParam0->f_24.f_6 = 21.3688f;
			*uParam0 = { -7.1931f, -1648.7003f, 28.3206f };
			uParam0->f_1922[0 /*9*/] = { -7.8353f, -1649.1998f, 32.719f };
			uParam0->f_1922[0 /*9*/].f_3 = { -35.0705f, 0f, 28.4357f };
			uParam0->f_1922[0 /*9*/].f_6 = 56.1118f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { -1.0175f, -1653.2354f, 28.3206f };
			uParam0->f_1742.f_27 = 308.6224f;
			uParam0->f_1742.f_108[0 /*3*/] = { -8.7616f, -1643.9999f, 28.1685f };
			uParam0->f_1742.f_124[0] = 319.3071f;
			uParam0->f_1742.f_130[0] = 50.0901f;
			uParam0->f_1742.f_108[1 /*3*/] = { -13.2855f, -1639.2626f, 28.1651f };
			uParam0->f_1742.f_124[1] = 320.2909f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -4.2297f, -1646.7322f, 28.1645f };
			uParam0->f_1742.f_124[2] = 231.2027f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 0.6959f, -1650.6791f, 28.1606f };
			uParam0->f_1742.f_124[3] = 231.2781f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 6.6154f, -1654.3099f, 28.1579f };
			uParam0->f_1742.f_124[4] = 264.0044f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 44:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 1023.6497f, -2401.3591f, 34.94485f };
			uParam0->f_38[0 /*27*/].f_3 = { 1024.3197f, -2395.3977f, 28.735165f };
			uParam0->f_38[0 /*27*/].f_6 = 5f;
			uParam0->f_38[0 /*27*/].f_7 = 92.2894f;
			uParam0->f_38[0 /*27*/].f_23 = { 1026.1658f, -2394.3923f, 29.07515f };
			uParam0->f_38[0 /*27*/].f_16 = { 1025.5039f, -2394.2144f, 30.7512f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 85f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 1024.2628f, -2398.4036f, 29.1261f };
			uParam0->f_24 = { 1056.3915f, -2400.2139f, 36.3721f };
			uParam0->f_24.f_3 = { 1.2159f, 0f, 86.3154f };
			uParam0->f_24.f_6 = 41.0913f;
			*uParam0 = { 1026.0168f, -2404.0728f, 28.72f };
			uParam0->f_1922[0 /*9*/] = { 1025.4635f, -2394.471f, 35.467f };
			uParam0->f_1922[0 /*9*/].f_3 = { -52.0974f, 0f, 175.3725f };
			uParam0->f_1922[0 /*9*/].f_6 = 63.314f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 10;
			uParam0->f_1742.f_24 = { 1026.8683f, -2383.195f, 29.3707f };
			uParam0->f_1742.f_27 = 278.7988f;
			uParam0->f_1742.f_108[0 /*3*/] = { 1028.0582f, -2398.6733f, 28.785f };
			uParam0->f_1742.f_124[0] = 263.1474f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 1028.7896f, -2403.651f, 28.5859f };
			uParam0->f_1742.f_124[1] = 211.1604f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 1030.3021f, -2394.4202f, 28.9265f };
			uParam0->f_1742.f_124[2] = 323.9013f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 1030.8512f, -2388.2048f, 29.1169f };
			uParam0->f_1742.f_124[3] = 354.9865f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 1028.4369f, -2409.6482f, 28.3444f };
			uParam0->f_1742.f_124[4] = 176.4828f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 45:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 870.89496f, -2230.8933f, 29.019482f };
			uParam0->f_38[0 /*27*/].f_3 = { 870.6178f, -2233.976f, 34.832703f };
			uParam0->f_38[0 /*27*/].f_6 = 4.75f;
			uParam0->f_38[0 /*27*/].f_7 = 355.1031f;
			uParam0->f_38[0 /*27*/].f_23 = { 873.1846f, -2233.2532f, 29.54528f };
			uParam0->f_38[0 /*27*/].f_16 = { 873.3047f, -2232.6067f, 31.0195f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -5f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 870.8577f, -2232.3228f, 29.5508f };
			uParam0->f_24 = { 839.1729f, -2251.336f, 36.3461f };
			uParam0->f_24.f_3 = { -2.4285f, 0f, -61.0109f };
			uParam0->f_24.f_6 = 27.8913f;
			*uParam0 = { 867.3748f, -2233.064f, 29.512f };
			uParam0->f_1922[0 /*9*/] = { 865.7656f, -2231.933f, 35.202f };
			uParam0->f_1922[0 /*9*/].f_3 = { -41.4886f, 0f, -115.6493f };
			uParam0->f_1922[0 /*9*/].f_6 = 52.8804f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 857.1803f, -2231.298f, 29.4231f };
			uParam0->f_1742.f_27 = 198.7231f;
			uParam0->f_1742.f_108[0 /*3*/] = { 870.4635f, -2235.9758f, 29.6135f };
			uParam0->f_1742.f_124[0] = 175.5827f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 865.8381f, -2235.6646f, 29.5193f };
			uParam0->f_1742.f_124[1] = 126.777f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 875.8398f, -2239.864f, 29.4001f };
			uParam0->f_1742.f_124[2] = 264.6278f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 864.8415f, -2239.6333f, 29.3801f };
			uParam0->f_1742.f_124[3] = 85.2316f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 857.426f, -2236.423f, 29.3134f };
			uParam0->f_1742.f_124[4] = 105.4882f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 46:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -662.18195f, -2377.9434f, 17.998512f };
			uParam0->f_38[0 /*27*/].f_3 = { -665.3298f, -2383.3962f, 12.702133f };
			uParam0->f_38[0 /*27*/].f_6 = 4.25f;
			uParam0->f_38[0 /*27*/].f_7 = 246.1582f;
			uParam0->f_38[0 /*27*/].f_23 = { -667.0486f, -2383.269f, 12.92401f };
			uParam0->f_38[0 /*27*/].f_16 = { -666.3141f, -2383.7715f, 14.6044f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -120f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -663.8541f, -2380.389f, 12.9446f };
			uParam0->f_24 = { -719.574f, -2366.9417f, 20.1524f };
			uParam0->f_24.f_3 = { 1.5858f, 0f, -92.4432f };
			uParam0->f_24.f_6 = 25.2947f;
			*uParam0 = { -662.9977f, -2375.8777f, 12.9198f };
			uParam0->f_1922[0 /*9*/] = { -666.2004f, -2383.66f, 17.4456f };
			uParam0->f_1922[0 /*9*/].f_3 = { -41.4322f, 0f, -22.9677f };
			uParam0->f_1922[0 /*9*/].f_6 = 64.8067f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 10;
			uParam0->f_1742.f_24 = { -659.9097f, -2368.972f, 12.9446f };
			uParam0->f_1742.f_27 = 49.4983f;
			uParam0->f_1742.f_108[0 /*3*/] = { -667.7959f, -2378.3474f, 12.8602f };
			uParam0->f_1742.f_124[0] = 59.5981f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -668.5652f, -2372.9788f, 12.8107f };
			uParam0->f_1742.f_124[1] = 27.3385f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -674.8391f, -2379.8542f, 12.8041f };
			uParam0->f_1742.f_124[2] = 100.3572f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -670.3742f, -2383.357f, 12.8684f };
			uParam0->f_1742.f_124[3] = 121.2465f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -679.6597f, -2387.9653f, 12.8113f };
			uParam0->f_1742.f_124[4] = 113.4791f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 47:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -1086.1321f, -2237.118f, 18.677397f };
			uParam0->f_38[0 /*27*/].f_3 = { -1091.1234f, -2232.1257f, 11.673464f };
			uParam0->f_38[0 /*27*/].f_6 = 3.75f;
			uParam0->f_38[0 /*27*/].f_7 = 132.9527f;
			uParam0->f_38[0 /*27*/].f_23 = { -1090.9869f, -2231.3916f, 12.22213f };
			uParam0->f_38[0 /*27*/].f_16 = { -1091.348f, -2231.6953f, 13.7872f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -135f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -1088.6158f, -2235.0977f, 12.2182f };
			uParam0->f_24 = { -1089.1172f, -2209.689f, 16.848f };
			uParam0->f_24.f_3 = { 1.8425f, 0f, -162.2026f };
			uParam0->f_24.f_6 = 38.658f;
			*uParam0 = { -1084.3058f, -2237.9534f, 12.2685f };
			uParam0->f_1922[0 /*9*/] = { -1092.002f, -2230.7087f, 18.7219f };
			uParam0->f_1922[0 /*9*/].f_3 = { -41.9243f, 0f, -135.0189f };
			uParam0->f_1922[0 /*9*/].f_6 = 57.1276f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 10;
			uParam0->f_1742.f_24 = { -1078.7614f, -2242.1765f, 12.2722f };
			uParam0->f_1742.f_27 = 307.3823f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1086.2666f, -2232.2776f, 12.2336f };
			uParam0->f_1742.f_124[0] = 314.623f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1082.5579f, -2234.5615f, 12.2378f };
			uParam0->f_1742.f_124[1] = 282.1199f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1089.8103f, -2228.242f, 12.235f };
			uParam0->f_1742.f_124[2] = 1.351f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1094.4353f, -2223.4783f, 12.2355f };
			uParam0->f_1742.f_124[3] = 23.0358f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1077.579f, -2238.8528f, 12.2399f };
			uParam0->f_1742.f_124[4] = 248.6185f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 48:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -341.6828f, -1466.3406f, 28.861671f };
			uParam0->f_38[0 /*27*/].f_3 = { -346.6502f, -1466.2253f, 32.950165f };
			uParam0->f_38[0 /*27*/].f_6 = 8.25f;
			uParam0->f_38[0 /*27*/].f_7 = 96.3665f;
			uParam0->f_38[0 /*27*/].f_23 = { -342.01886f, -1466.6672f, 29.61167f };
			uParam0->f_38[0 /*27*/].f_16 = { -342.7317f, -1466.6293f, 31.2761f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 90f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -342.5126f, -1468.6746f, 29.6107f };
			uParam0->f_24 = { -310.1259f, -1433.7842f, 36.4266f };
			uParam0->f_24.f_3 = { -2.5852f, 0f, 142.0256f };
			uParam0->f_24.f_6 = 23.0369f;
			*uParam0 = { -341.5999f, -1471.6276f, 29.7515f };
			uParam0->f_1922[0 /*9*/] = { -342.7205f, -1471.8623f, 33.2148f };
			uParam0->f_1922[0 /*9*/].f_3 = { -32.0401f, 0f, -23.2693f };
			uParam0->f_1922[0 /*9*/].f_6 = 56.3666f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { -356.7247f, -1463.1417f, 28.6324f };
			uParam0->f_1742.f_27 = 5.3571f;
			uParam0->f_1742.f_108[0 /*3*/] = { -339.002f, -1467.7991f, 29.5844f };
			uParam0->f_1742.f_124[0] = 281.1683f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -339.1405f, -1462.8916f, 29.59f };
			uParam0->f_1742.f_124[1] = 293.1545f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -332.1327f, -1458.45f, 29.4955f };
			uParam0->f_1742.f_124[2] = 306.6605f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -330.6393f, -1464.0457f, 29.5099f };
			uParam0->f_1742.f_124[3] = 298.5376f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -336.3814f, -1474.6881f, 29.5482f };
			uParam0->f_1742.f_124[4] = 212.1829f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 49:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -1240.1891f, -259.50583f, 41.044113f };
			uParam0->f_38[0 /*27*/].f_3 = { -1242.8137f, -260.9294f, 37.777046f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 211.7432f;
			uParam0->f_38[0 /*27*/].f_23 = { -1243.6361f, -260.3023f, 37.94491f };
			uParam0->f_38[0 /*27*/].f_16 = { -1243.329f, -261.0626f, 39.5057f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -151.5f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -1241.5399f, -259.8841f, 37.9445f };
			uParam0->f_24 = { -1238.6152f, -237.732f, 41.2694f };
			uParam0->f_24.f_3 = { -0.1405f, 0f, 174.5821f };
			uParam0->f_24.f_6 = 29.2463f;
			*uParam0 = { -1239.297f, -257.472f, 37.9577f };
			uParam0->f_1922[0 /*9*/] = { -1243.7146f, -261.1733f, 41.046f };
			uParam0->f_1922[0 /*9*/].f_3 = { -41.9739f, 0f, -52.1773f };
			uParam0->f_1922[0 /*9*/].f_6 = 64.1421f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { -1231.7517f, -261.1873f, 37.7356f };
			uParam0->f_1742.f_27 = 309.7137f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1243.3073f, -256.9916f, 38.0127f };
			uParam0->f_1742.f_124[0] = 28.1569f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1239.4128f, -252.4819f, 38.1356f };
			uParam0->f_1742.f_124[1] = 345.0404f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1247.6144f, -259.2161f, 38.0121f };
			uParam0->f_1742.f_124[2] = 83.7995f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1254.619f, -261.4668f, 38.0736f };
			uParam0->f_1742.f_124[3] = 117.0801f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1234.7942f, -253.125f, 38.1299f };
			uParam0->f_1742.f_124[4] = 250.101f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 50:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 901.9956f, -148.9021f, 79.34973f };
			uParam0->f_38[0 /*27*/].f_3 = { 897.7418f, -146.49408f, 75.32096f };
			uParam0->f_38[0 /*27*/].f_6 = 3.75f;
			uParam0->f_38[0 /*27*/].f_7 = 150.9974f;
			uParam0->f_38[0 /*27*/].f_23 = { 897.51843f, -145.34059f, 75.70785f };
			uParam0->f_38[0 /*27*/].f_16 = { 897.3796f, -145.9439f, 77.0859f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 150f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 899.8448f, -147.528f, 75.5674f };
			uParam0->f_24 = { 897.9404f, -97.0383f, 81.3473f };
			uParam0->f_24.f_3 = { -0.5489f, 0f, -176.1915f };
			uParam0->f_24.f_6 = 18.6505f;
			*uParam0 = { 895.2067f, -142.3797f, 75.9438f };
			uParam0->f_1922[0 /*9*/] = { 903.5604f, -148.9383f, 79.4718f };
			uParam0->f_1922[0 /*9*/].f_3 = { -33.5031f, 0f, 47.9397f };
			uParam0->f_1922[0 /*9*/].f_6 = 61.3316f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 896.6425f, -143.7906f, 75.8284f };
			uParam0->f_1742.f_27 = 331.8638f;
			uParam0->f_1742.f_108[0 /*3*/] = { 902.2581f, -143.8422f, 75.6196f };
			uParam0->f_1742.f_124[0] = 327.9151f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 908.1265f, -141.9543f, 75.409f };
			uParam0->f_1742.f_124[1] = 291.4932f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 901.1325f, -137.1122f, 75.7044f };
			uParam0->f_1742.f_124[2] = 16.3723f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 895.2284f, -133.0699f, 76.0953f };
			uParam0->f_1742.f_124[3] = 56.9496f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 914.0188f, -145.0915f, 74.9349f };
			uParam0->f_1742.f_124[4] = 237.7844f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 51:
			*uParam0 = { -1405.4109f, 526.8572f, 122.8361f };
			uParam0->f_3[0 /*3*/] = { -1405.4109f, 526.8572f, 122.8361f };
			uParam0->f_3[1 /*3*/] = { -1405.0873f, 540.0269f, 121.9285f };
			uParam0->f_24 = { -1426.9503f, 560.2891f, 134.0229f };
			uParam0->f_24.f_3 = { -12.2373f, 0f, -138.4202f };
			uParam0->f_24.f_6 = 30.8201f;
			uParam0->f_13 = { -1409.1404f, 534.6944f, 121.9111f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1404.915f, 526.85065f, 121.86746f };
			uParam0->f_38[0 /*27*/].f_3 = { -1406.637f, 526.84344f, 126.58611f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 262.0459f;
			uParam0->f_38[0 /*27*/].f_23 = { -1405.4109f, 526.8572f, 122.8361f };
			uParam0->f_38[0 /*27*/].f_16 = { -1405.4066f, 528.2228f, 124.34f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -88.8f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1406.1443f, 529.9474f, 122.8361f };
			uParam0->f_146[0 /*12*/].f_11 = 11.333f;
			uParam0->f_1922[0 /*9*/] = { -1405.9202f, 525.1206f, 126.2389f };
			uParam0->f_1922[0 /*9*/].f_3 = { -45.9372f, 0f, 12.568f };
			uParam0->f_1922[0 /*9*/].f_6 = 56.7555f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1404.6327f, 540.32086f, 120.9692f };
			uParam0->f_38[1 /*27*/].f_3 = { -1406.5497f, 540.3247f, 125.67733f };
			uParam0->f_38[1 /*27*/].f_6 = 8f;
			uParam0->f_38[1 /*27*/].f_7 = 265.3779f;
			uParam0->f_38[1 /*27*/].f_23 = { -1405.0873f, 540.0269f, 121.9285f };
			uParam0->f_38[1 /*27*/].f_16 = { -1405.477f, 535.6528f, 123.37f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -88.8f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1405.8713f, 543.8805f, 125.0912f };
			uParam0->f_1922[1 /*9*/].f_3 = { -41.1469f, 0f, 159.0998f };
			uParam0->f_1922[1 /*9*/].f_6 = 68.4407f;
			uParam0->f_1742.f_24 = { -1409.2903f, 538.0002f, 121.9135f };
			uParam0->f_1742.f_27 = 93.7343f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1409.0726f, 537.755f, 121.9144f };
			uParam0->f_1742.f_124[0] = 98.0524f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1409.0262f, 541.6954f, 121.918f };
			uParam0->f_1742.f_124[1] = 104.4953f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1417.0787f, 539.019f, 120.7941f };
			uParam0->f_1742.f_124[2] = 114.0971f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1416.728f, 535.2925f, 120.5692f };
			uParam0->f_1742.f_124[3] = 107.5656f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1423.5465f, 534.5643f, 119.4372f };
			uParam0->f_1742.f_124[4] = 106.4241f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 52:
			*uParam0 = { 1336.8986f, -1578.7438f, 53.4443f };
			uParam0->f_3[0 /*3*/] = { 1336.8986f, -1578.7438f, 53.4443f };
			uParam0->f_3[1 /*3*/] = { 1351.9443f, -1575.2987f, 53.0439f };
			uParam0->f_24 = { 1369.5925f, -1586.2245f, 56.3956f };
			uParam0->f_24.f_3 = { -2.2156f, 0f, 66.1587f };
			uParam0->f_24.f_6 = 26.8035f;
			uParam0->f_13 = { 1338.1633f, -1580.7217f, 53.0517f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 1337.2354f, -1579.3978f, 52.801712f };
			uParam0->f_38[0 /*27*/].f_3 = { 1336.6227f, -1578.6024f, 55.910572f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 44.401f;
			uParam0->f_38[0 /*27*/].f_23 = { 1336.8986f, -1578.7438f, 53.4443f };
			uParam0->f_38[0 /*27*/].f_16 = { 1335.67f, -1579.34f, 54.49f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 36.75f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 1338.1633f, -1580.7217f, 53.0517f };
			uParam0->f_146[0 /*12*/].f_11 = 233.6165f;
			uParam0->f_1922[0 /*9*/] = { 1344.8154f, -1579.6471f, 55.9164f };
			uParam0->f_1922[0 /*9*/].f_3 = { -20.7335f, 0f, 83.8051f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 1347.0309f, -1573.1041f, 52.919212f };
			uParam0->f_38[1 /*27*/].f_3 = { 1352.1914f, -1570.0033f, 55.655323f };
			uParam0->f_38[1 /*27*/].f_6 = 2.75f;
			uParam0->f_38[1 /*27*/].f_7 = 31.013f;
			uParam0->f_38[1 /*27*/].f_23 = { 1351.9443f, -1575.2987f, 53.0439f };
			uParam0->f_38[1 /*27*/].f_16 = { 1346.88f, -1573.19f, 54.49f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 30.65f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { 1347.8281f, -1577.4059f, 55.9645f };
			uParam0->f_1922[1 /*9*/].f_3 = { -20.5771f, 0f, -12.7006f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 1350.6079f, -1573.0576f, 53.0515f };
			uParam0->f_1742.f_27 = 214.7269f;
			uParam0->f_1742.f_108[0 /*3*/] = { 1354.6522f, -1578.6346f, 52.7106f };
			uParam0->f_1742.f_124[0] = 215.0819f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 1372.8141f, -1582.1458f, 52.6f };
			uParam0->f_1742.f_124[1] = 305.4971f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 1386.53f, -1572.2173f, 53.9185f };
			uParam0->f_1742.f_124[2] = 305.6955f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 1353.2223f, -1589.8846f, 51.5701f };
			uParam0->f_1742.f_124[3] = 128.0031f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 1344.0901f, -1596.9325f, 51.0919f };
			uParam0->f_1742.f_124[4] = 127.4157f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 53:
			*uParam0 = { -104.9801f, 6529.1636f, 29.1719f };
			uParam0->f_3[0 /*3*/] = { -104.9801f, 6529.1636f, 29.1719f };
			uParam0->f_3[1 /*3*/] = { -105.0318f, 6534.6777f, 28.8092f };
			uParam0->f_24 = { -110.173f, 6576.258f, 32.1717f };
			uParam0->f_24.f_3 = { 0.0198f, 0f, -177.4159f };
			uParam0->f_24.f_6 = 18.7421f;
			uParam0->f_13 = { -108.2526f, 6531.6304f, 28.8092f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -105.37359f, 6527.7646f, 28.952587f };
			uParam0->f_38[0 /*27*/].f_3 = { -106.473595f, 6528.8643f, 31.613363f };
			uParam0->f_38[0 /*27*/].f_6 = 1.25f;
			uParam0->f_38[0 /*27*/].f_7 = 134.6413f;
			uParam0->f_38[0 /*27*/].f_23 = { -104.9801f, 6529.1636f, 29.1719f };
			uParam0->f_38[0 /*27*/].f_16 = { -106.6888f, 6528.88f, 30.3018f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -137.2f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -108.2526f, 6531.6304f, 28.8092f };
			uParam0->f_146[0 /*12*/].f_11 = 49.2311f;
			uParam0->f_1922[0 /*9*/] = { -100.0377f, 6532.9863f, 31.7713f };
			uParam0->f_1922[0 /*9*/].f_3 = { -15.7838f, 0f, 102.1657f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -99.83927f, 6532.972f, 28.765419f };
			uParam0->f_38[1 /*27*/].f_3 = { -103.05063f, 6529.7603f, 31.86795f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 225.295f;
			uParam0->f_38[1 /*27*/].f_23 = { -105.0318f, 6534.6777f, 28.8092f };
			uParam0->f_38[1 /*27*/].f_16 = { -99.7988f, 6533.01f, 30.2618f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -134.5f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -110.8133f, 6530.848f, 31.812f };
			uParam0->f_1922[1 /*9*/].f_3 = { -16.9222f, 0f, -80.7392f };
			uParam0->f_1922[1 /*9*/].f_6 = 52.8642f;
			uParam0->f_1742.f_24 = { -103.1034f, 6532.659f, 28.8092f };
			uParam0->f_1742.f_27 = 43.8528f;
			uParam0->f_1742.f_108[0 /*3*/] = { -104.5972f, 6534.2437f, 28.8092f };
			uParam0->f_1742.f_124[0] = 46.119f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -110.2358f, 6539.6636f, 28.7473f };
			uParam0->f_1742.f_124[1] = 46.16f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -110.7653f, 6550.791f, 28.5617f };
			uParam0->f_1742.f_124[2] = 312.715f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -101.0747f, 6560.041f, 28.563f };
			uParam0->f_1742.f_124[3] = 312.1525f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -129.3656f, 6539.909f, 28.508f };
			uParam0->f_1742.f_124[4] = 136.403f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 54:
			*uParam0 = { -302.6793f, 6327.531f, 31.8915f };
			uParam0->f_3[0 /*3*/] = { -302.6793f, 6327.531f, 31.8915f };
			uParam0->f_3[1 /*3*/] = { -294.5604f, 6338.5225f, 31.2827f };
			uParam0->f_24 = { -338.4015f, 6342.9194f, 33.9788f };
			uParam0->f_24.f_3 = { -0.5933f, 0f, -109.2485f };
			uParam0->f_24.f_6 = 26.0857f;
			uParam0->f_13 = { -774.1072f, 303.6408f, 84.7069f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -301.29114f, 6327.5537f, 31.742939f };
			uParam0->f_38[0 /*27*/].f_3 = { -302.7279f, 6326.0015f, 34.444378f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 220.679f;
			uParam0->f_38[0 /*27*/].f_23 = { -302.6793f, 6327.531f, 31.8915f };
			uParam0->f_38[0 /*27*/].f_16 = { -301.07f, 6327.54f, 33.36f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -136.7f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -305.3481f, 6331.0146f, 31.4893f };
			uParam0->f_146[0 /*12*/].f_11 = 48.1647f;
			uParam0->f_1922[0 /*9*/] = { -306.7626f, 6327.715f, 34.1136f };
			uParam0->f_1922[0 /*9*/].f_3 = { -23.3308f, 0f, -79.0093f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -289.39127f, 6337.9424f, 29.08413f };
			uParam0->f_38[1 /*27*/].f_3 = { -293.8093f, 6333.272f, 34.088074f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 225.6549f;
			uParam0->f_38[1 /*27*/].f_23 = { -294.5604f, 6338.5225f, 31.2827f };
			uParam0->f_38[1 /*27*/].f_16 = { -294.03f, 6333.04f, 32.98f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -133f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -300.2161f, 6330.6045f, 33.8086f };
			uParam0->f_1922[1 /*9*/].f_3 = { -10.9035f, 0f, -49.6255f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -293.1363f, 6337.654f, 31.4098f };
			uParam0->f_1742.f_27 = 38.2211f;
			uParam0->f_1742.f_108[0 /*3*/] = { -295.2674f, 6339.1025f, 31.2112f };
			uParam0->f_1742.f_124[0] = 45.0538f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -303.0802f, 6346.869f, 29.8847f };
			uParam0->f_1742.f_124[1] = 45.1332f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -301.9123f, 6360.823f, 29.504f };
			uParam0->f_1742.f_124[2] = 312.3356f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -320.7206f, 6350.6987f, 29.3934f };
			uParam0->f_1742.f_124[3] = 133.3218f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -329.3412f, 6342.1123f, 29.2682f };
			uParam0->f_1742.f_124[4] = 134.0955f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 55:
			*uParam0 = { -14.8944f, 6557.818f, 32.2454f };
			uParam0->f_3[0 /*3*/] = { -14.8944f, 6557.818f, 32.2454f };
			uParam0->f_3[1 /*3*/] = { -12.2099f, 6563.895f, 30.9552f };
			uParam0->f_24 = { 13.1554f, 6522.455f, 33.9638f };
			uParam0->f_24.f_3 = { 2.0923f, 0f, 45.5912f };
			uParam0->f_24.f_6 = 22.9656f;
			uParam0->f_13 = { -12.7249f, 6559.9575f, 30.971f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -15.009585f, 6556.497f, 32.010277f };
			uParam0->f_38[0 /*27*/].f_3 = { -16.197723f, 6557.742f, 34.74551f };
			uParam0->f_38[0 /*27*/].f_6 = 1.25f;
			uParam0->f_38[0 /*27*/].f_7 = 136.3973f;
			uParam0->f_38[0 /*27*/].f_23 = { -14.8944f, 6557.818f, 32.2454f };
			uParam0->f_38[0 /*27*/].f_16 = { -14.66f, 6556.14f, 33.75f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 135f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -12.7249f, 6559.9575f, 30.971f };
			uParam0->f_146[0 /*12*/].f_11 = 315.8066f;
			uParam0->f_1922[0 /*9*/] = { -18.339f, 6560.119f, 34.7698f };
			uParam0->f_1922[0 /*9*/].f_3 = { -16.6529f, 0f, -109.5559f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -16.852196f, 6565.3486f, 30.65897f };
			uParam0->f_38[1 /*27*/].f_3 = { -13.642389f, 6568.558f, 33.626915f };
			uParam0->f_38[1 /*27*/].f_6 = 1.75f;
			uParam0->f_38[1 /*27*/].f_7 = 44.047f;
			uParam0->f_38[1 /*27*/].f_23 = { -12.2099f, 6563.895f, 30.9552f };
			uParam0->f_38[1 /*27*/].f_16 = { -16.99f, 6565.21f, 32.34f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 45.1f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -9.7957f, 6554.7085f, 35.1352f };
			uParam0->f_1922[1 /*9*/].f_3 = { -19.8197f, 0f, 18.0251f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -13.5522f, 6565.253f, 30.9267f };
			uParam0->f_1742.f_27 = 221.1647f;
			uParam0->f_1742.f_108[0 /*3*/] = { -7.4587f, 6559.077f, 30.9709f };
			uParam0->f_1742.f_124[0] = 224.95f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -3.6101f, 6555.2183f, 30.934f };
			uParam0->f_1742.f_124[1] = 225.1458f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 2.3391f, 6549.301f, 30.3709f };
			uParam0->f_1742.f_124[2] = 225.4122f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 0.4904f, 6539.524f, 30.3861f };
			uParam0->f_1742.f_124[3] = 135.0325f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 18.4567f, 6550.5386f, 30.3861f };
			uParam0->f_1742.f_124[4] = 314.7267f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 56:
			*uParam0 = { 1900.4055f, 3772.1484f, 31.886f };
			uParam0->f_3[0 /*3*/] = { 1898.9148f, 3781.8203f, 31.8819f };
			uParam0->f_3[1 /*3*/] = { 1883.8983f, 3774.326f, 31.7873f };
			uParam0->f_24 = { 1925.6063f, 3757.141f, 34.3505f };
			uParam0->f_24.f_3 = { 0.5929f, 0f, 63.7656f };
			uParam0->f_24.f_6 = 21.8329f;
			uParam0->f_13 = { 1901.7582f, 3770.1428f, 31.7519f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 1898.4327f, 3781.7324f, 31.735981f };
			uParam0->f_38[0 /*27*/].f_3 = { 1899.4484f, 3782.2832f, 35.303207f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 123.484f;
			uParam0->f_38[0 /*27*/].f_23 = { 1898.9148f, 3781.8203f, 31.8819f };
			uParam0->f_38[0 /*27*/].f_16 = { 1899.13f, 3780.52f, 33.31f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 119.1f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 1901.7582f, 3770.1428f, 31.7519f };
			uParam0->f_146[0 /*12*/].f_11 = 210.6425f;
			uParam0->f_1922[0 /*9*/] = { 1893.7781f, 3770.2517f, 35.0531f };
			uParam0->f_1922[0 /*9*/].f_3 = { -20.2686f, 0f, -84.6772f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 1880.1562f, 3772.4275f, 34.53546f };
			uParam0->f_38[1 /*27*/].f_3 = { 1886.4775f, 3776.0825f, 31.583681f };
			uParam0->f_38[1 /*27*/].f_6 = 1.75f;
			uParam0->f_38[1 /*27*/].f_7 = 39.8771f;
			uParam0->f_38[1 /*27*/].f_23 = { 1883.8983f, 3774.326f, 31.7873f };
			uParam0->f_38[1 /*27*/].f_16 = { 1880.01f, 3772.35f, 33.28f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 31.6f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { 1893.4165f, 3770.267f, 35.0829f };
			uParam0->f_1922[1 /*9*/].f_3 = { -17.6513f, 0f, 69.9366f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 1885.5829f, 3772.4214f, 31.8156f };
			uParam0->f_1742.f_27 = 203.6179f;
			uParam0->f_1742.f_108[0 /*3*/] = { 1884.5725f, 3767.7659f, 31.8607f };
			uParam0->f_1742.f_124[0] = 208.1913f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 1891.3075f, 3759.0137f, 31.607f };
			uParam0->f_1742.f_124[1] = 210.2192f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 1887.6562f, 3768.965f, 31.7966f };
			uParam0->f_1742.f_124[2] = 200.6109f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 1886.5502f, 3748.0466f, 31.6557f };
			uParam0->f_1742.f_124[3] = 121.3845f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 1905.5642f, 3753.2893f, 31.4482f };
			uParam0->f_1742.f_124[4] = 299.79f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 57:
			*uParam0 = { 1663.0311f, 4776.304f, 41.0075f };
			uParam0->f_3[0 /*3*/] = { 1663.0311f, 4776.304f, 41.0075f };
			uParam0->f_3[1 /*3*/] = { 1661.8176f, 4768.248f, 41.0075f };
			uParam0->f_24 = { 1696.0996f, 4776.849f, 43.6956f };
			uParam0->f_24.f_3 = { 6.4054f, 0f, 94.3951f };
			uParam0->f_24.f_6 = 28.4081f;
			uParam0->f_13 = { 1664.526f, 4776.464f, 40.9783f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 1661.9221f, 4775.2783f, 44.094707f };
			uParam0->f_38[0 /*27*/].f_3 = { 1661.731f, 4776.9414f, 40.89644f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 101.185f;
			uParam0->f_38[0 /*27*/].f_23 = { 1663.0311f, 4776.304f, 41.0075f };
			uParam0->f_38[0 /*27*/].f_16 = { 1662f, 4774.67f, 42.47f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 97.4f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 1664.526f, 4776.464f, 40.9783f };
			uParam0->f_146[0 /*12*/].f_11 = 270.1331f;
			uParam0->f_1922[0 /*9*/] = { 1662.7144f, 4770.4775f, 44.8333f };
			uParam0->f_1922[0 /*9*/].f_3 = { -26.9123f, 0f, -12.3788f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 1656.8752f, 4767.4014f, 40.507427f };
			uParam0->f_38[1 /*27*/].f_3 = { 1664.1013f, 4768.458f, 44.29094f };
			uParam0->f_38[1 /*27*/].f_6 = 4.25f;
			uParam0->f_38[1 /*27*/].f_7 = 98.8964f;
			uParam0->f_38[1 /*27*/].f_23 = { 1661.8176f, 4768.248f, 41.0075f };
			uParam0->f_38[1 /*27*/].f_16 = { 1657.89f, 4765.6f, 42.45f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 7.6f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { 1663.7917f, 4770.2515f, 43.9323f };
			uParam0->f_1922[1 /*9*/].f_3 = { -21.1548f, 0f, 134.314f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 1661.5612f, 4768.141f, 41.0075f };
			uParam0->f_1742.f_27 = 281.5633f;
			uParam0->f_1742.f_108[0 /*3*/] = { 1667.2184f, 4768.904f, 40.9318f };
			uParam0->f_1742.f_124[0] = 278.8245f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 1675.2478f, 4762.792f, 40.9741f };
			uParam0->f_1742.f_124[1] = 196.0204f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 1678.1053f, 4753.611f, 40.9893f };
			uParam0->f_1742.f_124[2] = 198.769f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 1679.1998f, 4778.5845f, 40.9837f };
			uParam0->f_1742.f_124[3] = 1.7503f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 1678.7386f, 4790.436f, 40.9947f };
			uParam0->f_1742.f_124[4] = 3.3935f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 58:
			uParam0->f_38[0 /*27*/].f_26 = 1;
			*uParam0 = { -194.9809f, 501.7973f, 132.4774f };
			uParam0->f_3[0 /*3*/] = { -177.2919f, 504.2896f, 135.8602f };
			uParam0->f_3[1 /*3*/] = { -191.7057f, 500.0735f, 133.4895f };
			uParam0->f_24 = { -197.7389f, 510.5206f, 136.3903f };
			uParam0->f_24.f_3 = { 4.4541f, 0f, -130.5121f };
			uParam0->f_24.f_6 = 50.4296f;
			uParam0->f_1922[0 /*9*/] = { -177.0029f, 501.2041f, 138.6498f };
			uParam0->f_1922[0 /*9*/].f_3 = { -23.7879f, 0f, -52.9233f };
			uParam0->f_1922[0 /*9*/].f_6 = 61.2835f;
			uParam0->f_1922[1 /*9*/] = { -184.3932f, 503.7115f, 136.354f };
			uParam0->f_1922[1 /*9*/].f_3 = { -19.4473f, 0f, 134.8015f };
			uParam0->f_1922[1 /*9*/].f_6 = 50.3357f;
			uParam0->f_38[0 /*27*/] = { -174.79698f, 503.20346f, 136.65361f };
			uParam0->f_38[0 /*27*/].f_3 = { -174.48763f, 501.88712f, 138.65361f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_23 = { -176.7676f, 503.9538f, 135.8529f };
			uParam0->f_38[0 /*27*/].f_7 = 282.6224f;
			uParam0->f_38[0 /*27*/].f_16 = { -173.997f, 501.8261f, 137.7961f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -78.8f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -176.7676f, 503.9538f, 135.8529f };
			uParam0->f_146[0 /*12*/].f_11 = 29.145f;
			uParam0->f_13 = { -176.7676f, 503.9538f, 135.8529f };
			uParam0->f_1742.f_24 = { -188.9353f, 502.4905f, 133.4325f };
			uParam0->f_1742.f_27 = 34.1741f;
			uParam0->f_146.f_1517.f_8 = { -173.976f, 501.86f, 136.464f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, -110f };
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/].f_23 = { -188.8384f, 499.6424f, 133.7361f };
			uParam0->f_38[1 /*27*/] = { -185.52762f, 501.6372f, 133.87791f };
			uParam0->f_38[1 /*27*/].f_3 = { -192.11807f, 500.2362f, 136.09386f };
			uParam0->f_38[1 /*27*/].f_6 = 2.81f;
			uParam0->f_38[1 /*27*/].f_7 = 193.6283f;
			uParam0->f_38[1 /*27*/].f_16 = { -192.375f, 498.75f, 134.886f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 189.5f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1742.f_108[0 /*3*/] = { -187.3407f, 503.5363f, 133.6252f };
			uParam0->f_1742.f_124[0] = 17.8818f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -190.5919f, 503.513f, 133.1963f };
			uParam0->f_1742.f_124[1] = 19.9412f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -197.0257f, 502.7821f, 132.2657f };
			uParam0->f_1742.f_124[2] = 104.2812f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -172.2021f, 509.0025f, 136.0632f };
			uParam0->f_1742.f_124[3] = 136.7116f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -206.8378f, 500.7487f, 130.7149f };
			uParam0->f_1742.f_124[4] = 100.8708f;
			uParam0->f_1742.f_130[4] = 0.6f;
			break;
		
		case 59:
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 346.96472f, 440.79642f, 146.70718f };
			uParam0->f_38[0 /*27*/].f_3 = { 345.87964f, 440.29715f, 149.99084f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 112.2264f;
			uParam0->f_38[0 /*27*/].f_23 = { 346.6832f, 440.3893f, 146.7075f };
			uParam0->f_38[0 /*27*/].f_16 = { 345.275f, 442f, 148.053f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 116.8f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146.f_1517.f_8 = { 345.261f, 441.95f, 146.75f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, 77f };
			*uParam0 = { 348.275f, 446.7f, 145f };
			uParam0->f_3[0 /*3*/] = { 347.2768f, 442.0909f, 146.7065f };
			uParam0->f_3[1 /*3*/] = { 353.3849f, 435.0725f, 146.124f };
			uParam0->f_24 = { 349.7426f, 463.4214f, 150.5502f };
			uParam0->f_24.f_3 = { -2.7041f, 0f, 161.0581f };
			uParam0->f_24.f_6 = 35.5099f;
			uParam0->f_1922[0 /*9*/] = { 347.4289f, 439.4345f, 149.7005f };
			uParam0->f_1922[0 /*9*/].f_3 = { -32.3614f, 0f, 3.6285f };
			uParam0->f_1922[0 /*9*/].f_6 = 91.4098f;
			uParam0->f_1922[1 /*9*/] = { 349.454f, 439.5841f, 150.1733f };
			uParam0->f_1922[1 /*9*/].f_3 = { -48.7754f, 0f, -127.4111f };
			uParam0->f_1922[1 /*9*/].f_6 = 92.1135f;
			uParam0->f_146[0 /*12*/].f_8 = { 350.0362f, 443.1544f, 146.9524f };
			uParam0->f_146[0 /*12*/].f_11 = 306.6064f;
			uParam0->f_13 = { 350.0362f, 443.1544f, 146.9524f };
			uParam0->f_1742.f_24 = { 353.7372f, 437.4555f, 145.6733f };
			uParam0->f_1742.f_27 = 301.9638f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 352.63065f, 432.43506f, 146.146f };
			uParam0->f_38[1 /*27*/].f_3 = { 349.0583f, 439.5597f, 150.0275f };
			uParam0->f_38[1 /*27*/].f_6 = 3.5f;
			uParam0->f_38[1 /*27*/].f_7 = 114.2784f;
			uParam0->f_38[1 /*27*/].f_23 = { 352.1213f, 436.8011f, 146.229f };
			uParam0->f_38[1 /*27*/].f_16 = { 352.4493f, 432.7883f, 147.83f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 115.775f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1742.f_108[0 /*3*/] = { 356.4036f, 436.1895f, 145.1594f };
			uParam0->f_1742.f_124[0] = 295.2705f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 354.2893f, 440.1214f, 145.0805f };
			uParam0->f_1742.f_124[1] = 300.6924f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 349.0107f, 448.4448f, 145.368f };
			uParam0->f_1742.f_124[2] = 228.5837f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 363.8029f, 438.9819f, 143.8032f };
			uParam0->f_1742.f_124[3] = 251.7819f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 364.4465f, 447.8789f, 144.3506f };
			uParam0->f_1742.f_124[4] = 66.8917f;
			uParam0->f_1742.f_130[4] = 0.6f;
			break;
		
		case 60:
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -754.0821f, 621.3502f, 140.77533f };
			uParam0->f_38[0 /*27*/].f_3 = { -753.38684f, 619.2969f, 144.67366f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5625f;
			uParam0->f_38[0 /*27*/].f_7 = 110.3481f;
			uParam0->f_38[0 /*27*/].f_23 = { -754.0821f, 621.3502f, 140.77533f };
			uParam0->f_38[0 /*27*/].f_16 = { -753.909f, 621.845f, 142.832f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 108.9f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146.f_1517.f_8 = { -753.86f, 621.628f, 142.025f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, 77f };
			*uParam0 = { -749.1125f, 616.125f, 140.9f };
			uParam0->f_3[0 /*3*/] = { -753.4206f, 620.2255f, 141.8517f };
			uParam0->f_3[1 /*3*/] = { -756.555f, 628.7863f, 141.8053f };
			uParam0->f_24 = { -736.233f, 620.3261f, 147.0935f };
			uParam0->f_24.f_3 = { -11.7133f, 0f, 89.1236f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_1922[0 /*9*/] = { -753.6261f, 621.4352f, 145.5712f };
			uParam0->f_1922[0 /*9*/].f_3 = { -61.2992f, 0f, -144.1396f };
			uParam0->f_1922[0 /*9*/].f_6 = 60.5044f;
			uParam0->f_1922[1 /*9*/] = { -753.89f, 622.1678f, 145.1428f };
			uParam0->f_1922[1 /*9*/].f_3 = { -28.3326f, 0f, 2.8184f };
			uParam0->f_1922[1 /*9*/].f_6 = 50.7379f;
			uParam0->f_146[0 /*12*/].f_8 = { -751.3826f, 621.3622f, 141.254f };
			uParam0->f_146[0 /*12*/].f_11 = 286.1973f;
			uParam0->f_13 = { -751.3826f, 621.3622f, 141.254f };
			uParam0->f_1742.f_24 = { -753.0756f, 627.3389f, 141.5332f };
			uParam0->f_1742.f_27 = 142.5343f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -754.10956f, 622.5068f, 140.29892f };
			uParam0->f_38[1 /*27*/].f_3 = { -757.1106f, 631.3733f, 145.00516f };
			uParam0->f_38[1 /*27*/].f_6 = 3.1875f;
			uParam0->f_38[1 /*27*/].f_7 = 110.3481f;
			uParam0->f_38[1 /*27*/].f_23 = { -754.10956f, 622.5068f, 140.29892f };
			uParam0->f_38[1 /*27*/].f_16 = { -757.2359f, 631.6739f, 143.0083f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 108.93f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1742.f_108[0 /*3*/] = { -752.8541f, 626.0184f, 141.5241f };
			uParam0->f_1742.f_124[0] = 337.0182f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -754.2813f, 631.2744f, 141.5919f };
			uParam0->f_1742.f_124[1] = 327.5519f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -747.2169f, 615.7965f, 141.1734f };
			uParam0->f_1742.f_124[2] = 15.4398f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -752.8635f, 640.1825f, 141.6789f };
			uParam0->f_1742.f_124[3] = 10.0842f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -753.9585f, 646.4396f, 141.8233f };
			uParam0->f_1742.f_124[4] = 9.884f;
			uParam0->f_1742.f_130[4] = 0.6f;
			break;
		
		case 61:
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -685.1532f, 596.21356f, 142.68356f };
			uParam0->f_38[0 /*27*/].f_3 = { -686.12665f, 595.388f, 145.5112f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5625f;
			uParam0->f_38[0 /*27*/].f_7 = 222.3235f;
			uParam0->f_38[0 /*27*/].f_23 = { -686.7532f, 596.7286f, 142.6471f };
			uParam0->f_38[0 /*27*/].f_16 = { -687.195f, 594.773f, 143.99f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -139.2f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146.f_1517.f_8 = { -687.152f, 594.762f, 142.71f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, -180f };
			*uParam0 = { -692.5033f, 596.4478f, 141.53f };
			uParam0->f_3[0 /*3*/] = { -685.5753f, 595.7667f, 143.0528f };
			uParam0->f_3[1 /*3*/] = { -682.1959f, 601.0403f, 142.7455f };
			uParam0->f_24 = { -717.0034f, 600.6978f, 147.893f };
			uParam0->f_24.f_3 = { -4.9085f, 0f, -98.586f };
			uParam0->f_24.f_6 = 32f;
			uParam0->f_1922[0 /*9*/] = { -685.3674f, 597.9558f, 147.095f };
			uParam0->f_1922[0 /*9*/].f_3 = { -57.9486f, 0f, 123.0923f };
			uParam0->f_1922[0 /*9*/].f_6 = 49.2029f;
			uParam0->f_1922[1 /*9*/] = { -679.6271f, 609.7404f, 146.4369f };
			uParam0->f_1922[1 /*9*/].f_3 = { -19.6156f, 0f, 148.6934f };
			uParam0->f_1922[1 /*9*/].f_6 = 41.7163f;
			uParam0->f_146[0 /*12*/].f_8 = { -687.2443f, 597.7927f, 142.6471f };
			uParam0->f_146[0 /*12*/].f_11 = 39.4563f;
			uParam0->f_13 = { -687.2443f, 597.7927f, 142.6471f };
			uParam0->f_1742.f_24 = { -682.754f, 601.2996f, 141.8721f };
			uParam0->f_1742.f_27 = 39.75f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -685.33276f, 599.23254f, 142.69452f };
			uParam0->f_38[1 /*27*/].f_3 = { -679.9803f, 603.75073f, 146.01254f };
			uParam0->f_38[1 /*27*/].f_6 = 1.625f;
			uParam0->f_38[1 /*27*/].f_7 = 204.6117f;
			uParam0->f_38[1 /*27*/].f_23 = { -682.4546f, 601.7089f, 142.6945f };
			uParam0->f_38[1 /*27*/].f_16 = { -679.7475f, 604.0975f, 144.0625f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -139.2f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1742.f_108[0 /*3*/] = { -682.9122f, 605.372f, 142.8277f };
			uParam0->f_1742.f_124[0] = 348.696f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -694.9319f, 597.1962f, 141.8161f };
			uParam0->f_1742.f_124[1] = 308.7104f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -679.9867f, 615.1488f, 143.8798f };
			uParam0->f_1742.f_124[2] = 338.6013f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -677.8329f, 622.587f, 144.7422f };
			uParam0->f_1742.f_124[3] = 347.6829f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -676.5367f, 633.3019f, 146.0182f };
			uParam0->f_1742.f_124[4] = 355.3295f;
			uParam0->f_1742.f_130[4] = 0.6f;
			break;
		
		case 62:
			*uParam0 = { 122.4f, 568.4f, 183.1f };
			uParam0->f_3[0 /*3*/] = { 118.1757f, 563.7846f, 182.9644f };
			uParam0->f_3[1 /*3*/] = { 128.9398f, 566.35f, 182.9644f };
			uParam0->f_13 = { 118.369f, 569.6913f, 183.3575f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/].f_23 = { 120.2f, 573.1f, 184.1f };
			uParam0->f_38[0 /*27*/] = { 120.22769f, 564.24f, 182.9644f };
			uParam0->f_38[0 /*27*/].f_3 = { 118.60087f, 564.1241f, 185.54662f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 182.947f;
			uParam0->f_24 = { 112.0956f, 573.5894f, 189.6378f };
			uParam0->f_24.f_3 = { -20.3798f, 0f, -141.0139f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_16 = { 118.3342f, 563.5432f, 184.299f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -173.88f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 118.369f, 569.6913f, 183.3575f };
			uParam0->f_146[0 /*12*/].f_11 = 4.6f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/].f_23 = { 133.2049f, 565.3521f, 182.9341f };
			uParam0->f_38[1 /*27*/] = { 134.19965f, 566.0651f, 182.87051f };
			uParam0->f_38[1 /*27*/].f_3 = { 129.5288f, 565.5358f, 185.12106f };
			uParam0->f_38[1 /*27*/].f_6 = 5f;
			uParam0->f_38[1 /*27*/].f_7 = 180.7678f;
			uParam0->f_38[1 /*27*/].f_16 = { 129.1583f, 565.8832f, 184.3003f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 180f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1742.f_24 = { 131.922f, 567.1509f, 182.6452f };
			uParam0->f_1742.f_27 = 15.8382f;
			uParam0->f_1742.f_108[0 /*3*/] = { 131.6537f, 568.9899f, 182.3411f };
			uParam0->f_1742.f_124[0] = 4.0689f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 133.885f, 577.6986f, 182.5053f };
			uParam0->f_1742.f_124[1] = 92.9431f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 128.1558f, 577.4041f, 182.2566f };
			uParam0->f_1742.f_124[2] = 93.0176f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 121.7724f, 577.1444f, 182.1052f };
			uParam0->f_1742.f_124[3] = 97.5507f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 130.489f, 581.2024f, 182.6389f };
			uParam0->f_1742.f_124[4] = 113.4962f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			break;
		
		case 63:
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -559.0781f, 663.3232f, 144.53966f };
			uParam0->f_38[0 /*27*/].f_3 = { -560.3202f, 663.63824f, 146.82597f };
			uParam0->f_38[0 /*27*/].f_6 = 1.4375f;
			uParam0->f_38[0 /*27*/].f_7 = 156.1758f;
			uParam0->f_38[0 /*27*/].f_23 = { -559.4445f, 663.9685f, 144.457f };
			uParam0->f_38[0 /*27*/].f_16 = { -558.77f, 663.24f, 145.67f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 160.3586f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146.f_1517.f_8 = { -687.152f, 594.762f, 142.71f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, -180f };
			*uParam0 = { -558.1771f, 669.1576f, 143.5971f };
			uParam0->f_3[0 /*3*/] = { -559.6165f, 663.6034f, 144.5187f };
			uParam0->f_3[1 /*3*/] = { -556.4049f, 662.471f, 144.6138f };
			uParam0->f_24 = { -543.6597f, 674.514f, 147.0296f };
			uParam0->f_24.f_3 = { -2.4999f, 0f, 129.3025f };
			uParam0->f_24.f_6 = 33f;
			uParam0->f_1922[0 /*9*/] = { -558.7669f, 663.3293f, 147.213f };
			uParam0->f_1922[0 /*9*/].f_3 = { -58.1066f, 0f, 31.9443f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_1922[1 /*9*/] = { -553.623f, 662.0633f, 147.18f };
			uParam0->f_1922[1 /*9*/].f_3 = { -54.5653f, 0f, 43.0157f };
			uParam0->f_1922[1 /*9*/].f_6 = 61.4621f;
			uParam0->f_146[0 /*12*/].f_8 = { -558.2228f, 664.6216f, 144.4907f };
			uParam0->f_146[0 /*12*/].f_11 = 310.6559f;
			uParam0->f_13 = { -558.2228f, 664.6216f, 144.4907f };
			uParam0->f_1742.f_24 = { -555.3579f, 664.1602f, 144.2354f };
			uParam0->f_1742.f_27 = 343.726f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -553.8307f, 661.7946f, 144.23982f };
			uParam0->f_38[1 /*27*/].f_3 = { -558.3751f, 662.9314f, 146.92105f };
			uParam0->f_38[1 /*27*/].f_6 = 2.625f;
			uParam0->f_38[1 /*27*/].f_7 = 167.8321f;
			uParam0->f_38[1 /*27*/].f_23 = { -555.9142f, 662.6932f, 144.49f };
			uParam0->f_38[1 /*27*/].f_16 = { -553.19f, 663.55f, 145.497f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 249.497f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1742.f_108[0 /*3*/] = { -554.8588f, 666.1501f, 143.8092f };
			uParam0->f_1742.f_124[0] = 342.3456f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -560.1591f, 671.697f, 144.2621f };
			uParam0->f_1742.f_124[1] = 253.1444f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -567.9676f, 673.9246f, 145.0193f };
			uParam0->f_1742.f_124[2] = 256.4467f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -577.1042f, 675.9783f, 145.7941f };
			uParam0->f_1742.f_124[3] = 257.1249f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -546.3216f, 666.6395f, 142.6902f };
			uParam0->f_1742.f_124[4] = 247.2661f;
			uParam0->f_1742.f_130[4] = 0.6f;
			break;
		
		case 64:
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -732.65314f, 593.1397f, 141.06187f };
			uParam0->f_38[0 /*27*/].f_3 = { -733.8533f, 593.8037f, 144.01506f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 147.7891f;
			uParam0->f_38[0 /*27*/].f_23 = { -733.2375f, 593.7828f, 141.4827f };
			uParam0->f_38[0 /*27*/].f_16 = { -734.1544f, 593.8073f, 142.5726f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 151f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146.f_1517.f_8 = { -733.287f, 593.431f, 141.456f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, -29.25f };
			*uParam0 = { -731.0388f, 593.46f, 140.6234f };
			uParam0->f_3[0 /*3*/] = { -733.4767f, 593.2111f, 141.5178f };
			uParam0->f_3[1 /*3*/] = { -744.303f, 599.5864f, 141.5458f };
			uParam0->f_24 = { -728.4564f, 610.9077f, 148.0444f };
			uParam0->f_24.f_3 = { -11.9555f, 0f, 138.3181f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_1922[0 /*9*/] = { -731.791f, 592.6054f, 144.7493f };
			uParam0->f_1922[0 /*9*/].f_3 = { -44.7805f, 0f, 41.0826f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_1922[1 /*9*/] = { -746.4487f, 604.9315f, 143.8863f };
			uParam0->f_1922[1 /*9*/].f_3 = { -13.5851f, 0f, -153.1004f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_146[0 /*12*/].f_8 = { -732.5507f, 594.9288f, 141.064f };
			uParam0->f_146[0 /*12*/].f_11 = 332.0094f;
			uParam0->f_13 = { -732.5507f, 594.9288f, 141.064f };
			uParam0->f_1742.f_24 = { -746.3018f, 601.5711f, 141.0995f };
			uParam0->f_1742.f_27 = 327.7594f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -741.25507f, 597.9217f, 141.0924f };
			uParam0->f_38[1 /*27*/].f_3 = { -747.4568f, 601.4027f, 144.5251f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 142.3104f;
			uParam0->f_38[1 /*27*/].f_23 = { -744.2535f, 600.0396f, 141.5243f };
			uParam0->f_38[1 /*27*/].f_16 = { -747.4618f, 602.1413f, 142.8174f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 151f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1742.f_108[0 /*3*/] = { -740.8754f, 602.3074f, 140.9152f };
			uParam0->f_1742.f_124[0] = 278.061f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -744.7444f, 610.6098f, 141.1045f };
			uParam0->f_1742.f_124[1] = 207.2077f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -733.4897f, 597.4697f, 140.8929f };
			uParam0->f_1742.f_124[2] = 235.7999f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -725.7398f, 594.1789f, 140.8683f };
			uParam0->f_1742.f_124[3] = 252.9259f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -715.8591f, 592.7691f, 140.936f };
			uParam0->f_1742.f_124[4] = 269.455f;
			uParam0->f_1742.f_130[4] = 0.6f;
			break;
		
		case 65:
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -852.30707f, 694.8876f, 147.86597f };
			uParam0->f_38[0 /*27*/].f_3 = { -853.6318f, 694.7849f, 150.55032f };
			uParam0->f_38[0 /*27*/].f_6 = 2.06f;
			uParam0->f_38[0 /*27*/].f_7 = 181.543f;
			uParam0->f_38[0 /*27*/].f_23 = { -853.0189f, 695.239f, 147.7879f };
			uParam0->f_38[0 /*27*/].f_16 = { -853.84f, 694.62f, 149.11f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -176f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146.f_1517.f_8 = { -853.81f, 694.6f, 147.8f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, 156f };
			*uParam0 = { -849.8375f, 702.65f, 147.325f };
			uParam0->f_3[0 /*3*/] = { -852.9005f, 694.7808f, 148.0741f };
			uParam0->f_3[1 /*3*/] = { -865.7102f, 695.9731f, 148.1733f };
			uParam0->f_24 = { -863.8798f, 714.2239f, 152.3501f };
			uParam0->f_24.f_3 = { -6.6228f, 0f, -167.161f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_1922[0 /*9*/] = { -851.5412f, 695.0746f, 151.411f };
			uParam0->f_1922[0 /*9*/].f_3 = { -49.9033f, 0f, 77.4696f };
			uParam0->f_1922[0 /*9*/].f_6 = 46.8069f;
			uParam0->f_1922[1 /*9*/] = { -869.0064f, 698.2f, 151.6408f };
			uParam0->f_1922[1 /*9*/].f_3 = { -42.0295f, 0f, -83.6115f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_146[0 /*12*/].f_8 = { -853.3578f, 697.1407f, 147.8176f };
			uParam0->f_146[0 /*12*/].f_11 = 4.32f;
			uParam0->f_13 = { -853.3578f, 697.1407f, 147.8176f };
			uParam0->f_1742.f_24 = { -863.2893f, 695.5299f, 148.0291f };
			uParam0->f_1742.f_27 = 336.7931f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -862.2796f, 694.62726f, 148.0229f };
			uParam0->f_38[1 /*27*/].f_3 = { -868.9159f, 697.3097f, 151.36082f };
			uParam0->f_38[1 /*27*/].f_6 = 3.43f;
			uParam0->f_38[1 /*27*/].f_7 = 155.3475f;
			uParam0->f_38[1 /*27*/].f_23 = { -865.5343f, 696.291f, 147.9989f };
			uParam0->f_38[1 /*27*/].f_16 = { -861.7898f, 695.125f, 149.3596f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 157.605f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1742.f_108[0 /*3*/] = { -863.5904f, 699.6087f, 148.0632f };
			uParam0->f_1742.f_124[0] = 326.1612f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -856.5907f, 699.4403f, 147.8406f };
			uParam0->f_1742.f_124[1] = 350.5732f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -849.4887f, 705.9847f, 147.6541f };
			uParam0->f_1742.f_124[2] = 287.6365f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -841.0287f, 708.6886f, 147.3639f };
			uParam0->f_1742.f_124[3] = 252.9259f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -871.8189f, 699.3496f, 148.4745f };
			uParam0->f_1742.f_124[4] = 326.451f;
			uParam0->f_1742.f_130[4] = 0.6f;
			break;
		
		case 66:
			*uParam0 = { -1302.4485f, 455.2224f, 96.771f };
			uParam0->f_3[0 /*3*/] = { -1294.2745f, 454.0578f, 96.7013f };
			uParam0->f_3[1 /*3*/] = { -1297.91f, 453.6508f, 96.7213f };
			uParam0->f_24 = { -1306.6085f, 466.3748f, 101.9808f };
			uParam0->f_24.f_3 = { -14.3811f, 0f, -141.5052f };
			uParam0->f_24.f_6 = 47.8726f;
			uParam0->f_13 = { -1295.0082f, 456.3158f, 96.1681f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1294.3732f, 454.6308f, 96.274605f };
			uParam0->f_38[0 /*27*/].f_3 = { -1294.3263f, 453.50403f, 99.189705f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 179.7048f;
			uParam0->f_38[0 /*27*/].f_23 = { -1294.3888f, 454.463f, 96.5513f };
			uParam0->f_38[0 /*27*/].f_16 = { -1295.118f, 454.025f, 97.915f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 180f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1294.309f, 455.405f, 96.3444f };
			uParam0->f_146[0 /*12*/].f_11 = 0.7367f;
			uParam0->f_1922[0 /*9*/] = { -1292.5781f, 454.2545f, 99.3409f };
			uParam0->f_1922[0 /*9*/].f_3 = { -39.6077f, 0f, 69.4682f };
			uParam0->f_1922[0 /*9*/].f_6 = 46.1469f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1298.0602f, 455.01114f, 96.28043f };
			uParam0->f_38[1 /*27*/].f_3 = { -1298.0776f, 451.717f, 99.54697f };
			uParam0->f_38[1 /*27*/].f_6 = 5f;
			uParam0->f_38[1 /*27*/].f_7 = 176.5304f;
			uParam0->f_38[1 /*27*/].f_23 = { -1297.903f, 454.2289f, 96.6315f };
			uParam0->f_38[1 /*27*/].f_16 = { -1300.563f, 454.0388f, 98.0586f };
			uParam0->f_38[1 /*27*/].f_19 = { -0.4682f, 0f, 180f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1300.9814f, 454.1239f, 99.3252f };
			uParam0->f_1922[1 /*9*/].f_3 = { -31.7665f, 0f, -72.5331f };
			uParam0->f_1922[1 /*9*/].f_6 = 42.2252f;
			uParam0->f_1742.f_24 = { -1298.4021f, 455.4963f, 96.4856f };
			uParam0->f_1742.f_27 = 356.4123f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1295.8458f, 457.1532f, 96.2299f };
			uParam0->f_1742.f_124[0] = 297.279f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1283.4493f, 459.2665f, 95.2123f };
			uParam0->f_1742.f_124[1] = 277.3313f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1307.9097f, 457.9644f, 97.3667f };
			uParam0->f_1742.f_124[2] = 270.7701f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1282.9124f, 466.1473f, 95.0291f };
			uParam0->f_1742.f_124[3] = 95.758f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1298.7336f, 464.2884f, 96.4425f };
			uParam0->f_1742.f_124[4] = 92.1621f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			break;
		
		case 67:
			*uParam0 = { 368.8f, 432.8f, 144.6f };
			uParam0->f_3[0 /*3*/] = { 373.8f, 428.4f, 145.7f };
			uParam0->f_3[1 /*3*/] = { 391.3558f, 427.1763f, 143.2039f };
			uParam0->f_24 = { 366.2502f, 450.5897f, 151.1863f };
			uParam0->f_24.f_3 = { -14.3367f, -1.2993f, -158.6361f };
			uParam0->f_24.f_6 = 40.2194f;
			uParam0->f_13 = { 372.453f, 431.8328f, 143.7681f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 374.61523f, 428.33435f, 146.90675f };
			uParam0->f_38[0 /*27*/].f_3 = { 374.33997f, 427.17514f, 144.89603f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 263.0232f;
			uParam0->f_38[0 /*27*/].f_23 = { 373.4f, 430.6f, 145.1f };
			uParam0->f_38[0 /*27*/].f_16 = { 372.6857f, 426.9829f, 146.0747f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 170f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 372.453f, 431.8328f, 143.7681f };
			uParam0->f_146[0 /*12*/].f_11 = 340.1881f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 394.89984f, 427.13037f, 146.29291f };
			uParam0->f_38[1 /*27*/].f_3 = { 387.6972f, 427.80933f, 143.24957f };
			uParam0->f_38[1 /*27*/].f_6 = 3.5f;
			uParam0->f_38[1 /*27*/].f_7 = 172.5183f;
			uParam0->f_38[1 /*27*/].f_23 = { 391.1181f, 427.7463f, 143.2038f };
			uParam0->f_38[1 /*27*/].f_16 = { 387.2895f, 428.0783f, 144.3926f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 170f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1742.f_24 = { 390.8834f, 429.929f, 142.7315f };
			uParam0->f_1742.f_27 = 359.9581f;
			uParam0->f_1742.f_108[0 /*3*/] = { 394.5217f, 433.2644f, 142.0235f };
			uParam0->f_1742.f_124[0] = 325.5933f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 384.9257f, 434.2468f, 142.507f };
			uParam0->f_1742.f_124[1] = 81.9996f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 373.5152f, 436.3026f, 143.1639f };
			uParam0->f_1742.f_124[2] = 77.5761f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 389.9466f, 441.0051f, 142.2565f };
			uParam0->f_1742.f_124[3] = 263.4446f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 399.8194f, 432.383f, 141.7439f };
			uParam0->f_1742.f_124[4] = 264.9702f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 10;
			uParam0->f_34 = 0;
			break;
	}
}

void func_58(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3)//Position - 0x20614
{
	struct<6> Var0;
	struct<6> Var1;
	struct<6> Var2;
	
	*uParam2 = { 0f, 0f, 0f };
	uParam2->f_3 = { 0f, 0f, 0f };
	switch (iParam3)
	{
		case 0:
			Var0 = { 285.8317f, -162.205f, 65.1628f };
			Var0.f_3 = { 0f, 0f, -110f };
			Var1 = { 285.138f, -162.024f, 63.614f };
			Var1.f_3 = { 0f, 0f, 160f };
			break;
		
		case 1:
			Var0 = { -968.2812f, -1432.9247f, 8.1858f };
			Var0.f_3 = { 0f, 0f, 70f };
			Var1 = { -968.944f, -1433.234f, 6.673f };
			Var1.f_3 = { 0f, 0f, -160f };
			break;
		
		case 2:
			Var0 = { -778.8333f, 313.5024f, 86.1362f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var1 = { -778.727f, 312.728f, 84.693f };
			Var1.f_3 = { 0f, 0f, -90f };
			break;
		
		case 3:
			Var0 = { -980.7506f, -1447.0208f, 4.5223f };
			Var0.f_3 = { 0f, 0f, -70f };
			Var1 = { -980.29f, -1447.934f, 3.723f };
			Var1.f_3 = { 0f, 0f, -70f };
			break;
		
		case 4:
			Var0 = { 895.5656f, -889.3296f, 27.6491f };
			Var0.f_3 = { 0f, 0f, -90f };
			Var1 = { 894.954f, -889.428f, 26.158f };
			Var1.f_3 = { 0f, 0f, 180f };
			break;
		
		case 5:
			Var0 = { 726.7885f, -1189.545f, 24.7175f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var1 = { 726.857f, -1190.163f, 23.27f };
			Var1.f_3 = { 0f, 0f, -90f };
			break;
		
		case 6:
			Var0 = { -833.9494f, -862.6305f, 21.2407f };
			Var0.f_3 = { 0f, 0f, 90f };
			Var1 = { -833.335f, -862.65f, 19.682f };
			Var1.f_3 = { 0f, 0f, 0f };
			break;
	}
	Var2 = { Param0 };
	Var2.f_3 = { Param1 };
	func_59(Var0, Var1, Var2, uParam2);
}

void func_59(struct<4> Param0, var uParam1, var uParam2, struct<6> Param3, struct<4> Param4, var uParam5, var uParam6, var uParam7)//Position - 0x2084A
{
	struct<3> Var0;
	
	*uParam7 = { Param3 };
	Var0 = { *uParam7 - Param0 };
	Var0 = { func_39(Var0, -Param0.f_3.f_2) };
	Var0 = { func_39(Var0, Param4.f_3.f_2) };
	*uParam7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param4, 0f, Var0) };
	if (!func_60(Param4.f_3, Param0.f_3, 0))
	{
		while (Param0.f_3.f_2 > 180f)
		{
			Param0.f_3.f_2 = (Param0.f_3.f_2 - 360f);
		}
		while (Param0.f_3.f_2 < -180f)
		{
			Param0.f_3.f_2 = (Param0.f_3.f_2 + 360f);
		}
		while (Param4.f_3.f_2 > 180f)
		{
			Param4.f_3.f_2 = (Param4.f_3.f_2 - 360f);
		}
		while (Param4.f_3.f_2 < -180f)
		{
			Param4.f_3.f_2 = (Param4.f_3.f_2 + 360f);
		}
		uParam7->f_3.f_2 = (uParam7->f_3.f_2 + (Param4.f_3.f_2 - Param0.f_3.f_2));
		while (uParam7->f_3.f_2 > 180f)
		{
			uParam7->f_3.f_2 = (uParam7->f_3.f_2 - 360f);
		}
		while (uParam7->f_3.f_2 < -180f)
		{
			uParam7->f_3.f_2 = (uParam7->f_3.f_2 + 360f);
		}
	}
}

bool func_60(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x209A4
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_61(var uParam0, int iParam1)//Position - 0x209EB
{
	switch (iParam1)
	{
		case 103:
			uParam0->f_35 = 68;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 103);
			uParam0->f_31 = 103;
			func_36(uParam0, 103);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 104:
			uParam0->f_35 = 68;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 104);
			uParam0->f_31 = 104;
			func_36(uParam0, 104);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 105:
			uParam0->f_35 = 68;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 105);
			uParam0->f_31 = 105;
			func_36(uParam0, 105);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 106:
			uParam0->f_35 = 69;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 106);
			uParam0->f_31 = 106;
			func_36(uParam0, 106);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 107:
			uParam0->f_35 = 69;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 107);
			uParam0->f_31 = 107;
			func_36(uParam0, 107);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 108:
			uParam0->f_35 = 69;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 108);
			uParam0->f_31 = 108;
			func_36(uParam0, 108);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 109:
			uParam0->f_35 = 70;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 109);
			uParam0->f_31 = 109;
			func_36(uParam0, 109);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 110:
			uParam0->f_35 = 70;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 110);
			uParam0->f_31 = 110;
			func_36(uParam0, 110);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 111:
			uParam0->f_35 = 70;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 111);
			uParam0->f_31 = 111;
			func_36(uParam0, 111);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 112:
			uParam0->f_35 = 71;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 112);
			uParam0->f_31 = 112;
			func_36(uParam0, 112);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 113:
			uParam0->f_35 = 71;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 113);
			uParam0->f_31 = 113;
			func_36(uParam0, 113);
			uParam0->f_34 = 5;
			return 1;
			break;
		
		case 114:
			uParam0->f_35 = 71;
			func_53(uParam0, uParam0->f_35);
			func_62(uParam0, 114);
			uParam0->f_31 = 114;
			func_36(uParam0, 114);
			uParam0->f_34 = 5;
			return 1;
			break;
	}
	return 0;
}

void func_62(var uParam0, int iParam1)//Position - 0x20C9B
{
	struct<3> Var0;
	int iVar1;
	
	uParam0->f_33 = 20;
	func_48(iParam1, 6, &Var0, 109, 0);
	uParam0->f_1742.f_20 = { Var0 };
	uParam0->f_1742.f_23 = Var0.f_3.f_2;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		func_48(iParam1, (913 + iVar1), &Var0, 109, 0);
		uParam0->f_1742.f_28[iVar1 /*3*/] = { Var0 };
		uParam0->f_1742.f_62[iVar1] = Var0.f_3.f_2;
		func_48(iParam1, (933 + iVar1), &Var0, 109, 0);
		uParam0->f_1742.f_74[iVar1 /*3*/] = { Var0 };
		iVar1++;
	}
	func_48(iParam1, 1, &Var0, 109, 0);
	uParam0->f_1742 = { Var0 };
	func_48(iParam1, 2, &Var0, 109, 0);
	uParam0->f_1742.f_3 = { Var0 };
	uParam0->f_1742.f_6 = 2f;
	uParam0->f_1742.f_7 = Var0.f_3.f_2;
	func_48(iParam1, 15, &Var0, 109, 0);
	uParam0->f_1742.f_136 = { Var0 };
	func_48(iParam1, 3, &Var0, 109, 0);
	uParam0->f_1742.f_150 = { Var0 };
	func_48(iParam1, 4, &Var0, 109, 0);
	uParam0->f_1742.f_153 = { Var0 };
	func_48(iParam1, 5, &Var0, 109, 0);
	uParam0->f_1742.f_153.f_3 = { Var0 };
	uParam0->f_1742.f_153.f_6 = 22.75f;
	uParam0->f_1742.f_149 = 0;
	func_48(iParam1, 137, &Var0, 109, 0);
	uParam0->f_1742.f_167 = { Var0 };
}

int func_63(var uParam0, int iParam1)//Position - 0x20E13
{
	switch (iParam1)
	{
		case 91:
			uParam0->f_35 = 72;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 91);
			uParam0->f_31 = 91;
			func_36(uParam0, 91);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 92:
			uParam0->f_35 = 73;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 91);
			uParam0->f_31 = 92;
			func_36(uParam0, 91);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 93:
			uParam0->f_35 = 74;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 91);
			uParam0->f_31 = 93;
			func_36(uParam0, 91);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 94:
			uParam0->f_35 = 75;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 91);
			uParam0->f_31 = 94;
			func_36(uParam0, 91);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 95:
			uParam0->f_35 = 76;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 91);
			uParam0->f_31 = 95;
			func_36(uParam0, 91);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 96:
			uParam0->f_35 = 77;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 91);
			uParam0->f_31 = 96;
			func_36(uParam0, 91);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 97:
			uParam0->f_35 = 78;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 97);
			uParam0->f_31 = 97;
			func_36(uParam0, 97);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 98:
			uParam0->f_35 = 79;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 97);
			uParam0->f_31 = 98;
			func_36(uParam0, 97);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 99:
			uParam0->f_35 = 80;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 97);
			uParam0->f_31 = 99;
			func_36(uParam0, 97);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 100:
			uParam0->f_35 = 81;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 97);
			uParam0->f_31 = 100;
			func_36(uParam0, 97);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 101:
			uParam0->f_35 = 82;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 97);
			uParam0->f_31 = 101;
			func_36(uParam0, 97);
			uParam0->f_34 = 4;
			return 1;
			break;
		
		case 102:
			uParam0->f_35 = 83;
			func_53(uParam0, uParam0->f_35);
			func_64(uParam0, 97);
			uParam0->f_31 = 102;
			func_36(uParam0, 97);
			uParam0->f_34 = 4;
			return 1;
			break;
	}
	return 0;
}

void func_64(var uParam0, int iParam1)//Position - 0x210C3
{
	switch (iParam1)
	{
		case 91:
			uParam0->f_33 = 10;
			uParam0->f_1742.f_20 = { 1105.6198f, -3163.5789f, -38.5186f };
			uParam0->f_1742.f_23 = 347.4298f;
			uParam0->f_1742.f_28[0 /*3*/] = { 1099.509f, -3153.0747f, -38.0166f };
			uParam0->f_1742.f_62[0] = -120f;
			uParam0->f_1742.f_28[1 /*3*/] = { 1099.509f, -3150.5747f, -38.0166f };
			uParam0->f_1742.f_62[1] = -120f;
			uParam0->f_1742.f_28[2 /*3*/] = { 1099.509f, -3148.0747f, -38.0166f };
			uParam0->f_1742.f_62[2] = -120f;
			uParam0->f_1742.f_28[3 /*3*/] = { 1099.509f, -3145.5747f, -38.0166f };
			uParam0->f_1742.f_62[3] = -120f;
			uParam0->f_1742.f_28[4 /*3*/] = { 1099.509f, -3143.0747f, -38.0166f };
			uParam0->f_1742.f_62[4] = -120f;
			uParam0->f_1742.f_28[5 /*3*/] = { 1103.249f, -3143.0747f, -38.0166f };
			uParam0->f_1742.f_62[5] = 120f;
			uParam0->f_1742.f_28[6 /*3*/] = { 1103.249f, -3145.5747f, -38.0166f };
			uParam0->f_1742.f_62[6] = 120f;
			uParam0->f_1742.f_28[7 /*3*/] = { 1103.249f, -3148.0747f, -38.0166f };
			uParam0->f_1742.f_62[7] = 120f;
			uParam0->f_1742.f_28[8 /*3*/] = { 1103.249f, -3150.5747f, -38.0166f };
			uParam0->f_1742.f_62[8] = 120f;
			uParam0->f_1742.f_28[9 /*3*/] = { 1103.249f, -3153.0747f, -38.0166f };
			uParam0->f_1742.f_62[9] = 120f;
			uParam0->f_1742 = { 1109.8734f, -3166.2302f, -38.476124f };
			uParam0->f_1742.f_3 = { 1109.8564f, -3167.784f, -34.36737f };
			uParam0->f_1742.f_6 = 5f;
			uParam0->f_1742.f_7 = 181.7343f;
			uParam0->f_1742.f_136 = { 1120.3073f, -3152.9365f, -35.6192f };
			uParam0->f_1742.f_149 = 0;
			uParam0->f_1742.f_167 = { 1111.6139f, -3158.7024f, -37.5608f };
			break;
		
		case 97:
			uParam0->f_33 = 10;
			uParam0->f_1742.f_20 = { 998.9226f, -3158.175f, -39.9075f };
			uParam0->f_1742.f_23 = 265.1815f;
			uParam0->f_1742.f_28[0 /*3*/] = { 1004f, -3167.315f, -39.4068f };
			uParam0->f_1742.f_62[0] = 70f;
			uParam0->f_1742.f_28[1 /*3*/] = { 1004f, -3169.565f, -39.4068f };
			uParam0->f_1742.f_62[1] = 70f;
			uParam0->f_1742.f_28[2 /*3*/] = { 1004f, -3171.815f, -39.4068f };
			uParam0->f_1742.f_62[2] = 70f;
			uParam0->f_1742.f_28[3 /*3*/] = { 1004f, -3174.065f, -39.4068f };
			uParam0->f_1742.f_62[3] = 70f;
			uParam0->f_1742.f_28[4 /*3*/] = { 1004f, -3176.315f, -39.4068f };
			uParam0->f_1742.f_62[4] = 70f;
			uParam0->f_1742.f_28[5 /*3*/] = { 999.7f, -3176.315f, -39.4068f };
			uParam0->f_1742.f_62[5] = -70f;
			uParam0->f_1742.f_28[6 /*3*/] = { 999.7f, -3174.065f, -39.4068f };
			uParam0->f_1742.f_62[6] = -70f;
			uParam0->f_1742.f_28[7 /*3*/] = { 999.7f, -3171.815f, -39.4068f };
			uParam0->f_1742.f_62[7] = -70f;
			uParam0->f_1742.f_28[8 /*3*/] = { 999.7f, -3169.565f, -39.4068f };
			uParam0->f_1742.f_62[8] = -70f;
			uParam0->f_1742.f_28[9 /*3*/] = { 999.7f, -3167.315f, -39.4068f };
			uParam0->f_1742.f_62[9] = -70f;
			uParam0->f_1742 = { 996.56213f, -3164.3682f, -40.40706f };
			uParam0->f_1742.f_3 = { 997.2445f, -3164.3188f, -35.907146f };
			uParam0->f_1742.f_6 = 4.5f;
			uParam0->f_1742.f_7 = 111.1633f;
			uParam0->f_1742.f_136 = { 996.6504f, -3157.1436f, -37.4737f };
			uParam0->f_1742.f_149 = 0;
			uParam0->f_1742.f_167 = { 1009.0786f, -3163.9946f, -39.909f };
			break;
	}
}

struct<4> func_65(int iParam0)//Position - 0x21580
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "MP_PROP_1DES" /* GXT: This luxury triplex is move-in ready! The previous owner was so rich he just left all his furniture. Just bring yourself and be ready for lots of new superficial friends when people find out you live on Eclipse Boulevard in Rockford Hills. Includes 10-car garage. */, 16);
			break;
		
		case 2:
			StringCopy(&Var0, "MP_PROP_2DES" /* GXT: A massive, furnished, luxury triplex at this price? You've gotta love a bargain like this! Snap it up now before President Lawton loses the next election and they tax the hell out of you. Includes 10-car garage. */, 16);
			break;
		
		case 3:
			StringCopy(&Var0, "MP_PROP_3DES" /* GXT: Eclipse Towers on Eclipse Boulevard... this is the best address in Rockford Hills! Stand at your floor-to-ceiling windows, take in the spectacular panoramic views, pour yourself a drink and toast how amazing your life is while you look down on everybody else. Includes 10-car garage. */, 16);
			break;
		
		case 4:
			StringCopy(&Var0, "MP_PROP_4DES" /* GXT: Upper class living at middle class prices! Are you a single-digit millionaire who wants to live like a double-digit millionaire? You'll never find a better deal on a luxury condo in Rockford Hills than this again. Act now, it won't last! Includes 10-car garage. */, 16);
			break;
		
		case 5:
			StringCopy(&Var0, "MP_PROP_5DES" /* GXT: With its own Bean Machine outlet on the ground floor and a short commute to the financial center, this luxury condo on Alta Street in Downtown Los Santos is the perfect pad for the banker who never sleeps because he's having too much fun gambling with other people's money. Includes 10-car garage. */, 16);
			break;
		
		case 6:
			StringCopy(&Var0, "MP_PROP_6DES" /* GXT: Situated at the epicenter of the Los Santos financial, business and high-end shopping districts, you'll never have to see a poor person again at this luxury condo on Alta Street if you don't want to. Everything you need is right on your doorstep. Includes 10-car garage. */, 16);
			break;
		
		case 7:
			StringCopy(&Var0, "MP_PROP_7DES" /* GXT: This luxury condo on Marathon Avenue and Prosperity Street, in one of the most stylish apartment buildings in hip Del Perro, directly opposite the Bahama Mamas nightclub for the perfect release at the end of a hard day's work. Includes 10-car garage. */, 16);
			break;
		
		case 8:
			StringCopy(&Var0, "MP_PROP_8DES" /* GXT: Located steps away from a skate park, this cute-as-a-button one-bedroom in Hawick is perfect for families with teenage children or tragic 30-something hipsters with fixies. Includes 6-car garage. */, 16);
			break;
		
		case 9:
			StringCopy(&Var0, "MP_PROP_9DES" /* GXT: This newly-renovated one-bedroom in Downtown Vinewood is a STEAL!~n~Hurry this one won't last! It did last!~n~$10,000 price reduction!~n~Crazy value!~n~Move NOW the price is right!~n~Everything's negotiable. Motivated seller.~n~Reduced again for quick sale!~n~WILL SOMEONE JUST BUY THIS ALREADY??? Includes 6-car garage. */, 16);
			break;
		
		case 10:
			StringCopy(&Var0, "MP_PROP_10DES" /* GXT: This building has seen better days - the closest thing to a doorman is a homeless guy you sometimes have to step over to get into the lobby at night - but how else are you going to find a Vinewood apartment in your price range? Hope you like the smell of urine.~n~Includes 6-car garage. */, 16);
			break;
		
		case 11:
			StringCopy(&Var0, "MP_PROP_11DES" /* GXT: Cozy one-bedroom in a cute West Vinewood apartment block! You'll only share the building with a few other units, meaning fewer neighbors for you to grow to despise. Includes 6-car garage. */, 16);
			break;
		
		case 12:
			StringCopy(&Var0, "MP_PROP_12DES" /* GXT: The Royale apartment building in West Vinewood might not look regal on the outside but you'll live like a prince on the inside! PS Princes are douches.~n~Includes 6-car garage. */, 16);
			break;
		
		case 13:
			StringCopy(&Var0, "MP_PROP_13DES" /* GXT: This modern, renovated one-bedroom is in a well-maintained building in a great West Vinewood location. Buy now at the bottom of the market! Property values can't go any lower! We're absolutely sure this time! Includes 6-car garage. */, 16);
			break;
		
		case 14:
			StringCopy(&Var0, "MP_PROP_14DES" /* GXT: Hello, sailor! This renovated, fully-furnished apartment is right on the waterfront in Puerto Del Sol. Perfect for picking up other sailors.~n~Includes 6-car garage. */, 16);
			break;
		
		case 15:
			StringCopy(&Var0, "MP_PROP_15DES" /* GXT: Location is in the eye of the beholder! Some might call this a busy traffic junction, we call it a Commuter's Dream! Some might call this Little Seoul, we call it Vespucci so we can up the price!~n~Includes 6-car garage. */, 16);
			break;
		
		case 16:
			StringCopy(&Var0, "MP_PROP_16DES" /* GXT: Join the other creative types flocking to this neighborhood. With easy access to both a movie theater and a church, this apartment in Dream Tower is perfect for lovers of fiction.~n~Includes 6-car garage. */, 16);
			break;
		
		case 17:
			StringCopy(&Var0, "MP_PROP_17DES" /* GXT: What this Hawick apartment lacks in space and all-round condition, it makes up for in proximity to the local liquor store. Drown in debt and your sorrows.~n~Includes 2-car garage. */, 16);
			break;
		
		case 18:
			StringCopy(&Var0, "MP_PROP_18DES" /* GXT: Original features! This cozy apartment in West Vinewood had only one owner, who didn't update a single thing since he moved in there 40 years ago and then passed away – it was days before anyone noticed. Includes 2-car garage. */, 16);
			break;
		
		case 19:
			StringCopy(&Var0, "MP_PROP_19DES" /* GXT: This compact apartment in a 2-story apartment building has been meticulously maintained in its original condition! Semi-partial ocean view! Includes 2-car garage. */, 16);
			break;
		
		case 20:
			StringCopy(&Var0, "MP_PROP_20DES" /* GXT: The apartment building has seen better days but this affordable unit still has a Little Soul and a Lot of Potential! Bring your imagination! And an exterminator.~n~Includes 2-car garage. */, 16);
			break;
		
		case 21:
			StringCopy(&Var0, "MP_PROP_21DES" /* GXT: This fixer-upper offers stunning views of the cemetery to at once remind you of your mortality and motivate you to get your act together and buy a better apartment one day.~n~Includes 2-car garage. */, 16);
			break;
		
		case 22:
			StringCopy(&Var0, "MP_PROP_22DES" /* GXT: With both Wigwam and Up-n-Atom right on your doorstep, burger enthusiasts will be spoiled for choice at this apartment located in Del Perro or Morningwood, depending on which side of the building you stand. Includes 2-car garage. */, 16);
			break;
		
		case 23:
			StringCopy(&Var0, "MP_PROP_23DES" /* GXT: With a funky retro décor and carpeted throughout, you can literally smell the history in this Del Perro apartment that features an almost unobstructed ocean view for an almost unbeatable price. Includes 2-car garage. */, 16);
			break;
		
		case 24:
			StringCopy(&Var0, "MP_PROP_24DES" /* GXT: 10-Car Garage - With good access to the major roadways in and out of Los Santos, this spacious garage is perfect for the man or woman who might need to leave town in a hurry. Or is obsessed with cars. */, 16);
			break;
		
		case 25:
			StringCopy(&Var0, "MP_PROP_25DES" /* GXT: 6-Car Garage - If you're an individual who likes to keep their business private, look no further than this secluded garage in East Los Santos. */, 16);
			break;
		
		case 26:
			StringCopy(&Var0, "MP_PROP_26DES" /* GXT: 10-Car Garage - Spacious garage in prime East Los Santos. Panoramic views of urban blight, walking distance to gang members. */, 16);
			break;
		
		case 27:
			StringCopy(&Var0, "MP_PROP_27DES" /* GXT: 10-Car Garage - Newly renovated garage with excellent square footage and direct road access. What better place to keep brand-new vehicles than the neighborhood with the highest crime rate in Los Santos? */, 16);
			break;
		
		case 28:
			StringCopy(&Var0, "MP_PROP_28DES" /* GXT: 6-Car Garage - A good-sized garage in a quiet location within walking distance of the train for those days when you feel extra guilty about your 6-car carbon footprint. */, 16);
			break;
		
		case 29:
			StringCopy(&Var0, "MP_PROP_29DES" /* GXT: 2-Car Garage - Located just a few brain-melting steps away from an electrical substation, you'll never have to worry losing power or reaching old age again at this garage in East Los Santos. */, 16);
			break;
		
		case 30:
			StringCopy(&Var0, "MP_PROP_30DES" /* GXT: 2-Car Garage - Affluent on the inside, effluent on the outside! This garage offers panoramic views of the Los Santos waterways. */, 16);
			break;
		
		case 31:
			StringCopy(&Var0, "MP_PROP_31DES" /* GXT: 2-Car Garage - Calling all bargain hunters! In today's economy, it's all about desirable properties in undesirable areas. East Los Santos? We prefer to call it 'South of Vinewood'! Plus if the economy keeps tanking, you can go live in it! */, 16);
			break;
		
		case 32:
			StringCopy(&Var0, "MP_PROP_32DES" /* GXT: 6-Car Garage - This garage is in a killer area... literally! Be first to gentrify this neighborhood! In 20 years, it will be the next big thing! */, 16);
			break;
		
		case 33:
			StringCopy(&Var0, "MP_PROP_33DES" /* GXT: 6-Car Garage - High standards in real estate, low standards in women? End the day with your own oil change at this garage located across from a strip club! */, 16);
			break;
		
		case 34:
			StringCopy(&Var0, "MP_PROP_34DES" /* GXT: Luxury Del Perro Heights apartment complex! For all you voyeurs out there! This spectacular condo is one of the lower units so might not boast the best views, but all the buildings around you will have a direct eyeline into your awesome life 24/7. Includes 10-car garage. */, 16);
			break;
		
		case 35:
			StringCopy(&Var0, "MP_PROP_35DES" /* GXT: Calling all actors! This is your chance to live on sought-after Movie Star Way in prime Rockford Hills directly opposite the legendary Richard Majestic film studios. Stagger out of your front door right onto set! Includes 10-car garage. */, 16);
			break;
		
		case 36:
			StringCopy(&Var0, "MP_PROP_36DES" /* GXT: Movie Star Way! Don't miss this opportunity to live in one of the most exclusive apartment complexes in Rockford Hills. Even the janitor earns six figures in this building.~n~Includes 10-car garage. */, 16);
			break;
		
		case 37:
			StringCopy(&Var0, "MP_PROP_37DES" /* GXT: This spectacular condo on Movie Star Way in prime Rockford Hills is move-in ready! Don't worry if you're a rich Los Santos philistine with no taste - it's all been picked out for you. All furniture, appliances, fixtures and art included.~n~Includes 10-car garage. */, 16);
			break;
		
		case 38:
			StringCopy(&Var0, "MP_PROP_38DES" /* GXT: No dropped calls here! This luxury condo is located in the same building as Tinkle Mobile's headquarters in the new real estate hotspot of Downtown Los Santos. This is such an up-and-coming neighborhood, you can literally see the construction from your window!~n~Includes 10-car garage. */, 16);
			break;
		
		case 39:
			StringCopy(&Var0, "MP_PROP_39DES" /* GXT: This beautiful Downtown triplex apartment has spectacular views of Los Santos and the iconic Vinewood Sign in the distance. Watch all the people chasing the dream while you live it! Includes 10-car garage. */, 16);
			break;
		
		case 40:
			StringCopy(&Var0, "MP_PROP_40DES" /* GXT: This breathtaking luxury condo on Movie Star Way in Rockford Hills is a stone's throw from Richards Majestic Movie Studios, AKAN Records and a Sperm Donor Clinic. The ultimate trifecta of dying industries! Includes 10-car garage. */, 16);
			break;
		
		case 41:
			StringCopy(&Var0, "MP_PROP_41DES" /* GXT: A luxury condo on Movie Star Way in Rockford Hills? This is one of the trendiest addresses in Los Santos! Imagine if all your neighbors were hedge fund managers and celebrities? Come on, live the dream. Includes 10-car garage. */, 16);
			break;
		
		case 42:
			StringCopy(&Var0, "MP_PROP_42DES" /* GXT: Your split personality will be right at home in this retro-slash-ultramodern apartment building on Boulevard Del Perro. Go mad in style. Includes 10-car garage. */, 16);
			break;
		
		case 43:
			StringCopy(&Var0, "MP_PROP_43DES" /* GXT: Parquet flooring, granite countertops, floating fireplace, bland modern art, walk-in closet, towel warmers, leather headboard, man cave...this luxury condo in Tinsel Towers on Boulevard Del Perro checks all the boxes on the new-money millionaire ticklist.~n~Includes 10-car garage. */, 16);
			break;
		
		case 44:
			StringCopy(&Var0, "MP_PROP_44DES" /* GXT: 2-Car Garage - Annexed to a gas station and within easy distance of a number of cheap motels, this garage on Paleto Blvd in Paleto Bay has all you need for the perfect escape from the city. */, 16);
			break;
		
		case 45:
			StringCopy(&Var0, "MP_PROP_45DES" /* GXT: 2-Car Garage - This garage near Paleto Blvd in Paleto Bay has seen better days but there's a barber's, a tattoo parlor and a Cluckin' Bell factory on your doorstep...so what more do you need? */, 16);
			break;
		
		case 46:
			StringCopy(&Var0, "MP_PROP_46DES" /* GXT: 2-Car Garage - The town of Grapeseed offer a unique blend of heavy industry and genetically-modified farming that explains why everyone born there in the last 20 years looks so funny. This small garage on Grapeseed Avenue needs some TLC but is priced to sell. */, 16);
			break;
		
		case 47:
			StringCopy(&Var0, "MP_PROP_48DES" /* GXT: 2-Car Garage - This garage is situated on the site of Ron Alternates on N. Senora Way. What better way to feel better about your carbon footprint than by storing your gas-guzzlers inside a wind farm? */, 16);
			break;
		
		case 48:
			StringCopy(&Var0, "MP_PROP_49DES" /* GXT: 2-Car Garage - Across from the beach, ocean views, steps from a delicious seafood restaurant, this property on Great Ocean Highway in North Chumash is in an unbeatable location! The catch? It's a garage... */, 16);
			break;
		
		case 49:
			StringCopy(&Var0, "MP_PROP_50DES" /* GXT: 2-Car Garage - Small one-door garage for sale on Route 68 on Harmony. With a rundown general store, a local arm-wrestling haunt and a seedy motel all nearby, park up and live the dream! */, 16);
			break;
		
		case 50:
			StringCopy(&Var0, "MP_PROP_51DES" /* GXT: 6-Car Garage - Garage in need of some TLC for sale on Senora Rd in the Grand Senora Desert. Nothing of great note in the surrounding area. It's a garage. In a desert. */, 16);
			break;
		
		case 51:
			StringCopy(&Var0, "MP_PROP_52DES" /* GXT: 2-Car Garage - Steps from a liquor store, a Dollar Pills pharmacy, a Suburban store, and an Animal Ark pet store, this garage on Route 68 in Harmony is a hipster's dream. Booze, cigarettes, faux-vintage clothing and organic dog food in one! */, 16);
			break;
		
		case 52:
			StringCopy(&Var0, "MP_PROP_57DES" /* GXT: 6-Car Garage - Located behind an Ammu-Nation store and near to the Fort Zancudo Military Base, you won't have to worry about security at this garage on Route 68. */, 16);
			break;
		
		case 53:
			StringCopy(&Var0, "MP_PROP_59DES" /* GXT: 6-Car Garage - Calling all Los Santos Panic fans! This garage on Crusade Road is in a prime location just down the road from the Maze Bank Arena! */, 16);
			break;
		
		case 54:
			StringCopy(&Var0, "MP_PROP_60DES" /* GXT: 10-Car Garage - Are you in need of a low-profile lock-up where people won't ask too many questions? Look no further than this garage on South Shambles in Cypress Flats. */, 16);
			break;
		
		case 55:
			StringCopy(&Var0, "MP_PROP_61DES" /* GXT: 6-Car Garage - If you're looking for a desolate, industrial lock-up far away from prying eyes, this garage on Dry Dock St in Cypress Flats is the one for you! */, 16);
			break;
		
		case 56:
			StringCopy(&Var0, "MP_PROP_62DES" /* GXT: 10-Car Garage - Garage for sale on Exceptionalists Way. Why would you need a spacious, anonymous, non-descript lock-up with lots of space for storage close to the airport? We won't ask if you don't tell. */, 16);
			break;
		
		case 57:
			StringCopy(&Var0, "MP_PROP_63DES" /* GXT: 10-Car Garage - In a prime location near Greenwich parkway in Los Santos International Airport, next door to Bilgeco Shipping services, this garage is perfect for a man or woman who might need to transport something in a hurry or get out of a town in a hurry. */, 16);
			break;
		
		case 58:
			StringCopy(&Var0, "MP_PROP_64DES" /* GXT: 2-Car Garage - Garage for sale on Innocence Blvd in La Puerta. How can there be this many garages for sale in Los Santos? We're as puzzled by this real estate boom as you are. */, 16);
			break;
		
		case 59:
			StringCopy(&Var0, "MP_PROP_65DES" /* GXT: 2-Car Garage - If you're feeling the pinch of the economic downturn but desperate for a prime Rockford Hills address, this garage on Boulevard Del Perro might be the perfect compromise! */, 16);
			break;
		
		case 60:
			StringCopy(&Var0, "MP_PROP_66DES" /* GXT: 2-Car Garage - Garage for sale on Mirror Park Blvd in East Vinewood. If you're looking for a garage in Los Santos, don't delay! It's an incredible buyer's market right now. They're everywhere! */, 16);
			break;
		
		case 61:
			StringCopy(&Var0, "MP_PROP_67DES" /* GXT: Part of The High Life Update. Perfectly proportioned, beautifully presented lateral living opportunity on exquisite Eclipse Blvd. This apartment is as unique as the new cheekbones your surgeon just gave you... by that we mean you'll see them all over town. Includes 10-car garage. */, 16);
			break;
		
		case 62:
			StringCopy(&Var0, "MP_PROP_68DES" /* GXT: Part of The High Life Update. Enjoy ocean views far above the fray of tourists and bums on Del Perro Beach with this lateral living opportunity for the super rich. If we can overpay for something, we have, and we're passing the expense on down to you. Includes 10-car garage. */, 16);
			break;
		
		case 63:
			StringCopy(&Var0, "MP_PROP_69DES" /* GXT: Part of The High Life Update. Own a piece of glamorous old Vinewood, albeit a very small and expensive piece that's been made to look just like the other super-rich corners of Los Santos. A contemporary lateral living experience with one foot in the past. Includes 10-car garage. */, 16);
			break;
		
		case 64:
			StringCopy(&Var0, "MP_PROP_70DES" /* GXT: Part of The High Life Update. A picture-perfect lateral living experience in one of Los Santos' most sought-after tower blocks. These gorgeous lateral apartments only become available when hedgefunder residents have massive drug-induced heart attacks or get arrested for killing hookers. Includes 10-car garage. */, 16);
			break;
		
		case 65:
			StringCopy(&Var0, "MP_PROP_71DES" /* GXT: Part of The High Life Update. Live in the clouds while your bank balance hits the floor. An apartment so conspicuously expensive all your friends will immediately know how much you paid for it. The Downtown lateral living experience for people who secretly want to be LC based. Includes 10-car garage. */, 16);
			break;
		
		case 66:
			StringCopy(&Var0, "MP_PROP_72DES" /* GXT: Part of The Independence Day Special. Crazy movie director across the road? Check. Astronomically over-priced property where your car has more square footage than you do? Check. If you're looking for the full Vinewood Hills experience, this modest home ticks all the boxes. Includes 6-car garage. */, 16);
			break;
		
		case 67:
			StringCopy(&Var0, "MP_PROP_73DES" /* GXT: Part of The Independence Day Special. Calling all gentrifiers... El Burro Heights is ripe for hostile takeover! Pack up the espresso machine, labradoodle and deliberately tousled toddler and snap up this property before it's too late! Act now, or you'll be priced out of this neighborhood within a year! Includes 6-car garage. */, 16);
			break;
		
		case 68:
			StringCopy(&Var0, "MP_PROP_74DES" /* GXT: Part of The Independence Day Special. Check out the water feature in the front yard! This is coastal, provincial living at its very finest. Worried about shade? Want easy access to groceries? How about two for the price of one? This house backs right onto the supermarket, blocking out all natural light. Includes 6-car garage. */, 16);
			break;
		
		case 69:
			StringCopy(&Var0, "MP_PROP_75DES" /* GXT: Part of The Independence Day Special. Stunning views of rapidly rising sea levels! And talk about amenities! This Paleto Bay beauty is walking distance to a dive bar, hospital, funeral home, crematorium and gun store, so you can go out on the town secure in the knowledge that you're covered for every eventuality. Includes 6-car garage. */, 16);
			break;
		
		case 70:
			StringCopy(&Var0, "MP_PROP_76DES" /* GXT: Part of The Independence Day Special. Fall asleep to the sounds of the ocean and bums dumpster-diving in the parking lot. This cute-as-a-button property is centrally located on Paleto Bay's main street, a short walk from the coast and next door to the local supermarket. Includes 2-car garage. */, 16);
			break;
		
		case 71:
			StringCopy(&Var0, "MP_PROP_77DES" /* GXT: Part of The Independence Day Special. Beggars CAN be choosers! Waterfront living at a bargain price! Steps away from both a Chinese restaurant and a tattoo parlor, this Sandy Shores location offers no shortage of late-night decisions you'll regret in the morning. Includes 2-car garage. */, 16);
			break;
		
		case 72:
			StringCopy(&Var0, "MP_PROP_78DES" /* GXT: Part of The Independence Day Special. Location, location, location! Across from a feed store, minimart and discount clothes emporium, this house is right in the heart of the action on Grapeseed's main drag. Living on the cutting edge of rural retail! Includes 2-car garage. */, 16);
			break;
		
		case 83:
			StringCopy(&Var0, "MP_PROP_79DES" /* GXT: Is the 1% starting to feel a little crowded? Are you tired of single-digit millionaires cluttering up your elevator and groping your bellboy? Do you need a new way of expressing your bottomless contempt for your fellow man? Look no further: this lavish penthouse suite at the best address in town is expensive enough to keep the riff raff at bay until at least the next federal bailout. Access to our same-day redecorating service included as standard. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 84:
			StringCopy(&Var0, "MP_PROP_80DES" /* GXT: Penthouse living isn't just about mindless luxury. It's about knowing that when you flush a dump you're literally crapping through every single one of the $500K hovels beneath you - and that's something that only money can buy. Access to our same-day redecorating service included as standard. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 85:
			StringCopy(&Var0, "MP_PROP_81DES" /* GXT: Let's face it: we had you at the pricetag. The fact that this happens to be one of the most decadent living spaces for hundreds of miles doesn't really matter. Just like its new owner, something this expensive doesn't need to be 'nice' or 'useful'. You're a perfect match. What are you waiting for? Access to our same-day redecorating service included as standard. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 73:
			StringCopy(&Var0, "MP_PROP_83DES" /* GXT: Welcome to the heights of the Vinewood hills, where the average first time buyer is 24 and the web 2.0 entrepreneurs are only outnumbered by the swarms of fading teenage pop sensations. Buy in now while the price is still ridiculously high - what are you, sensible? Part of Executives and Other Criminals. */, 16);
			break;
		
		case 74:
			StringCopy(&Var0, "MP_PROP_84DES" /* GXT: San Andreas is a place where property values can only go up and high magnitude earthquakes never happen, so where better to balance a luxury apartment on stilts over a steep hillside in a crowded residential area? The first time you feel yourself and everything you own sway in a light breeze you'll be surprised how good this sounded on paper. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 75:
			StringCopy(&Var0, "MP_PROP_85DES" /* GXT: The previous owner of this gorgeous cliffside manor died doing a yoga pose on the rear balcony railing... but at least they got the Snapmatic shot. It's a tough act to follow, but if you're rich and stupid enough to buy into this neighborhood you're already most of the way there. Just follow your fragile heart. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 76:
			StringCopy(&Var0, "MP_PROP_86DES" /* GXT: Clinging to the side of the Vinewood hills like a dying oil tycoon clutching his carer-turned-sixth-wife, this three story mansion more than compensates for deep structural flaws with sumptuous interior design. Open plan kitchen, minimalist furnishings, ever-present vertigo: this one really has it all. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 77:
			StringCopy(&Var0, "MP_PROP_87DES" /* GXT: The saps driving through downtown Vinewood on their morning commute need something to aspire to. They don't want to look up and see green, peaceful hills. They want to gaze through your floor-length windows and see you in nothing but a snakeskin posing pouch injecting cold press kale juice with your tantric yoga instructor. That's the kind of status that doesn't come cheap, so dig deep. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 78:
			StringCopy(&Var0, "MP_PROP_89DES" /* GXT: Act now to secure your place at one of the quietest and most exclusive addresses in the city. All the other houses on this street were bought in the nineties by legitimate foreign investors who needed somewhere to store vast sums of legally acquired capital, and they've been empty ever since. It'll feel like you're living in an investment portfolio, but isn't that the point? Part of Executives and Other Criminals. */, 16);
			break;
		
		case 79:
			StringCopy(&Var0, "MP_PROP_90DES" /* GXT: Skyscraper views and lateral living are last year's kind of vanity project. Put a more contemporary spin on your raging superiority complex by forcing your butler to wheeze up and down all three stories of this hillside palace, while you take selfies with the spectacular views of thousands of more comfortable, less expensive places to live behind you. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 80:
			StringCopy(&Var0, "MP_PROP_92DES" /* GXT: The tinnitus and smoker's cough are telling you that you've seen too much inner-city living, and we're telling you that this fantastically expensive apartment in leafy Vinewood is the answer to decades of hardened self-abuse. From here, you can gaze out across the whole town every morning as you retch into your green juice and paleo breakfast burrito. Just keep reminding yourself you're glad to get away from it all. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 81:
			StringCopy(&Var0, "MP_PROP_94DES" /* GXT: Built in the 60s and surprising everyone by still being in once piece, this understated property may not look like much on the outside, but don't worry: inside it's identical to every other brainless yuppie's fantasy of open plan, designer living. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 82:
			StringCopy(&Var0, "MP_PROP_95DES" /* GXT: Designed and constructed in direct violation of every building law in the state, this luxury apartment is a testament to the power of a can-do attitude and utter disregard for standards of health, safety and common sense. Time to pour yourself a drink, forget about the forty foot drop, and congratulate yourself on keeping that pioneer spirit alive. Part of Executives and Other Criminals. */, 16);
			break;
		
		case 87:
			StringCopy(&Var0, "MP_PROP_96DES" /* GXT: In a radical new step towards diversification of the banking sector, industry giant Lombank is selling office space to results-driven, high-liquidity kill squads and drug cartels. Be part of the change our financial industry needs. */, 16);
			break;
		
		case 88:
			StringCopy(&Var0, "MP_PROP_97DES" /* GXT: Maze has been the target for more boycotts, demonstrations and civil rights lawsuits than any other bank in America. Access to that wealth of experience doesn't come cheap, but a good education is an investment worth any price. */, 16);
			break;
		
		case 89:
			StringCopy(&Var0, "MP_PROP_98DES" /* GXT: The City within the City, the Arcadius Business Center boasts more AAA hedge funds, smoothie bars and executive suicides per square foot of office space than any other building in the business district. Welcome to the cutting edge. */, 16);
			break;
		
		case 90:
			StringCopy(&Var0, "MP_PROP_99DES" /* GXT: The building that defined the LS skyline for a generation. Taller, classier, more opulent, more shamelessly phallic, less structurally sound – you name it, the Maze Bank Tower is best in class. */, 16);
			break;
		
		case 91:
			StringCopy(&Var0, "MP_CLUBH1DES" /* GXT: This little gem is nestled so snugly in the heart of longstanding urban squalor that we'd forgotten it was even on our books. As far as we can tell it's not on any property register, so just give us the cash and make it disappear. */, 16);
			break;
		
		case 92:
			StringCopy(&Var0, "MP_CLUBH2DES" /* GXT: This functional ground floor property used to be a soup kitchen, and repossessing that kind of attack on American values isn't just business for us - it's pleasure. Now available for purchase by a patriotic entrepreneur or kingpin, this place will be serving the community again in no time. */, 16);
			break;
		
		case 93:
			StringCopy(&Var0, "MP_CLUBH3DES" /* GXT: The repo guys who raided this place died of smallpox three days later, which is almost certainly a coincidence and has in no way affected the valuation of the property. And hey, worst case scenario, you couldn't pay for a more robust security system. */, 16);
			break;
		
		case 94:
			StringCopy(&Var0, "MP_CLUBH4DES" /* GXT: We all thought there was a rock bottom, but nope, it turns out the value of a place like this just falls and falls! Get in here before we burn it for kicks. The authorities just want to forget it exists, so go wild. */, 16);
			break;
		
		case 95:
			StringCopy(&Var0, "MP_CLUBH5DES" /* GXT: You might assume this is a glass-half-empty kind of place, but the people of Paleto believe the glass is actually half full of cut-price real estate, disenfranchised workers and raw opportunity. That's right, this dingy storage unit is a step towards a brighter future for us all. */, 16);
			break;
		
		case 96:
			StringCopy(&Var0, "MP_CLUBH6DES" /* GXT: Are you a real fixer upper? Can you share the cool desert evenings with packs of wild dogs and openly incestuous couples? If so this is the project for you. It's got nothing but potential. */, 16);
			break;
		
		case 97:
			StringCopy(&Var0, "MP_CLUBH7DES" /* GXT: The locals assumed it was abandoned, but in fact this spacious warehouse was the heart and soul of the Los Santos snuff industry for years. Now tax hikes are forcing those pioneering filmmakers out of business, so this is your chance to buy your way under the radar and stay there for good. */, 16);
			break;
		
		case 98:
			StringCopy(&Var0, "MP_CLUBH8DES" /* GXT: Don't just sit there gorging on welfare and compassion. Take a stand for the trickle down economy today. Plunge capital back into your community. Buy up every last derelict and turn it into a living, breathing, buzzing hive of fugitives and meth heads. It's time to be the change, people. */, 16);
			break;
		
		case 99:
			StringCopy(&Var0, "MP_CLUBH9DES" /* GXT: You know a property must be something really special when the previous occupants have such a hard time letting go. You just can't fake that kind of helpless desperation and rage, and in a world as cynical as this that's the best review of all. */, 16);
			break;
		
		case 100:
			StringCopy(&Var0, "MP_CLUBH10DES" /* GXT: If you're looking for somewhere that's off the beaten path you just found it: miles from anywhere, deemed hazardous by the Los Santos Building Standards Commission, and the last occupants died in murder-suicide pact. How many reassurances of total privacy do you need? */, 16);
			break;
		
		case 101:
			StringCopy(&Var0, "MP_CLUBH11DES" /* GXT: Sure, coastal small town America has mile after mile of foreclosed retail premises within fifty feet of a church and a gun store, so why choose this one? Well ask yourself this: can you think of a better way to blend in and disappear? Act now before it stops making sense. */, 16);
			break;
		
		case 102:
			StringCopy(&Var0, "MP_CLUBH12DES" /* GXT: You know times are tough when not even a million hipsters getting a tattoo of a swallow in flight on their taint could save this place from going under. Bad news for those who wanted to follow up with that bold yet simple triangle design, but the rock bottom pricetag is good news for you. */, 16);
			break;
	}
	return Var0;
}

struct<4> func_66(int iParam0)//Position - 0x21C48
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "MP_PROP_1" /* GXT: Eclipse Towers, Apt 31 */, 16);
			break;
		
		case 2:
			StringCopy(&Var0, "MP_PROP_2" /* GXT: Eclipse Towers, Apt 9 */, 16);
			break;
		
		case 3:
			StringCopy(&Var0, "MP_PROP_3" /* GXT: Eclipse Towers, Apt 40 */, 16);
			break;
		
		case 4:
			StringCopy(&Var0, "MP_PROP_4" /* GXT: Eclipse Towers, Apt 5 */, 16);
			break;
		
		case 5:
			StringCopy(&Var0, "MP_PROP_5" /* GXT: 3 Alta St, Apt 10 */, 16);
			break;
		
		case 6:
			StringCopy(&Var0, "MP_PROP_6" /* GXT: 3 Alta St, Apt 57 */, 16);
			break;
		
		case 7:
			StringCopy(&Var0, "MP_PROP_7" /* GXT: Del Perro Heights, Apt 20 */, 16);
			break;
		
		case 8:
			StringCopy(&Var0, "MP_PROP_8" /* GXT: 1162 Power St, Apt 3 */, 16);
			break;
		
		case 9:
			StringCopy(&Var0, "MP_PROP_9" /* GXT: 0605 Spanish Ave, Apt 1 */, 16);
			break;
		
		case 10:
			StringCopy(&Var0, "MP_PROP_10" /* GXT: 0604 Las Lagunas Blvd, Apt 4 */, 16);
			break;
		
		case 11:
			StringCopy(&Var0, "MP_PROP_11" /* GXT: 0184 Milton Rd, Apt 13 */, 16);
			break;
		
		case 12:
			StringCopy(&Var0, "MP_PROP_12" /* GXT: The Royale, Apt 19 */, 16);
			break;
		
		case 13:
			StringCopy(&Var0, "MP_PROP_13" /* GXT: 0504 S Mo Milton Dr */, 16);
			break;
		
		case 14:
			StringCopy(&Var0, "MP_PROP_14" /* GXT: 0115 Bay City Ave, Apt 45 */, 16);
			break;
		
		case 15:
			StringCopy(&Var0, "MP_PROP_15" /* GXT: 0325 South Rockford Dr */, 16);
			break;
		
		case 16:
			StringCopy(&Var0, "MP_PROP_16" /* GXT: Dream Tower, Apt 15 */, 16);
			break;
		
		case 17:
			StringCopy(&Var0, "MP_PROP_17" /* GXT: 2143 Las Lagunas Blvd, Apt 9 */, 16);
			break;
		
		case 18:
			StringCopy(&Var0, "MP_PROP_18" /* GXT: 1561 San Vitas St, Apt 2 */, 16);
			break;
		
		case 19:
			StringCopy(&Var0, "MP_PROP_19" /* GXT: 0112 S Rockford Dr, Apt 13 */, 16);
			break;
		
		case 20:
			StringCopy(&Var0, "MP_PROP_20" /* GXT: 2057 Vespucci Blvd, Apt 1 */, 16);
			break;
		
		case 21:
			StringCopy(&Var0, "MP_PROP_21" /* GXT: 0069 Cougar Ave, Apt 19 */, 16);
			break;
		
		case 22:
			StringCopy(&Var0, "MP_PROP_22" /* GXT: 1237 Prosperity St, Apt 21 */, 16);
			break;
		
		case 23:
			StringCopy(&Var0, "MP_PROP_23" /* GXT: 1115 Blvd Del Perro, Apt 18 */, 16);
			break;
		
		case 24:
			StringCopy(&Var0, "MP_PROP_24" /* GXT: 0120 Murrieta Heights */, 16);
			break;
		
		case 25:
			StringCopy(&Var0, "MP_PROP_25" /* GXT: Unit 14 Popular St */, 16);
			break;
		
		case 26:
			StringCopy(&Var0, "MP_PROP_26" /* GXT: Unit 2 Popular St */, 16);
			break;
		
		case 27:
			StringCopy(&Var0, "MP_PROP_27" /* GXT: 331 Supply St */, 16);
			break;
		
		case 28:
			StringCopy(&Var0, "MP_PROP_28" /* GXT: Unit 1 Olympic Fwy */, 16);
			break;
		
		case 29:
			StringCopy(&Var0, "MP_PROP_29" /* GXT: 0754 Roy Lowenstein Blvd */, 16);
			break;
		
		case 30:
			StringCopy(&Var0, "MP_PROP_30" /* GXT: 12 Little Bighorn Ave */, 16);
			break;
		
		case 31:
			StringCopy(&Var0, "MP_PROP_31" /* GXT: Unit 124 Popular St */, 16);
			break;
		
		case 32:
			StringCopy(&Var0, "MP_PROP_32" /* GXT: 0552 Roy Lowenstein Blvd */, 16);
			break;
		
		case 33:
			StringCopy(&Var0, "MP_PROP_33" /* GXT: 0432 Davis Ave */, 16);
			break;
		
		case 34:
			StringCopy(&Var0, "MP_PROP_34" /* GXT: Del Perro Heights, Apt 7 */, 16);
			break;
		
		case 35:
			StringCopy(&Var0, "MP_PROP_35" /* GXT: Weazel Plaza, Apt 101 */, 16);
			break;
		
		case 36:
			StringCopy(&Var0, "MP_PROP_36" /* GXT: Weazel Plaza, Apt 70 */, 16);
			break;
		
		case 37:
			StringCopy(&Var0, "MP_PROP_37" /* GXT: Weazel Plaza, Apt 26 */, 16);
			break;
		
		case 38:
			StringCopy(&Var0, "MP_PROP_38" /* GXT: 4 Integrity Way, Apt 30 */, 16);
			break;
		
		case 39:
			StringCopy(&Var0, "MP_PROP_39" /* GXT: 4 Integrity Way, Apt 35 */, 16);
			break;
		
		case 40:
			StringCopy(&Var0, "MP_PROP_40" /* GXT: Richards Majestic, Apt 4 */, 16);
			break;
		
		case 41:
			StringCopy(&Var0, "MP_PROP_41" /* GXT: Richards Majestic, Apt 51 */, 16);
			break;
		
		case 42:
			StringCopy(&Var0, "MP_PROP_42" /* GXT: Tinsel Towers, Apt 45 */, 16);
			break;
		
		case 43:
			StringCopy(&Var0, "MP_PROP_43" /* GXT: Tinsel Towers, Apt 29 */, 16);
			break;
		
		case 44:
			StringCopy(&Var0, "MP_PROP_44" /* GXT: 142 Paleto Blvd */, 16);
			break;
		
		case 45:
			StringCopy(&Var0, "MP_PROP_45" /* GXT: 1 Strawberry Ave */, 16);
			break;
		
		case 46:
			StringCopy(&Var0, "MP_PROP_46" /* GXT: 1932 Grapeseed Ave */, 16);
			break;
		
		case 47:
			StringCopy(&Var0, "MP_PROP_48" /* GXT: 1920 Senora Way */, 16);
			break;
		
		case 48:
			StringCopy(&Var0, "MP_PROP_49" /* GXT: 2000 Great Ocean Highway */, 16);
			break;
		
		case 49:
			StringCopy(&Var0, "MP_PROP_50" /* GXT: 197 Route 68 */, 16);
			break;
		
		case 50:
			StringCopy(&Var0, "MP_PROP_51" /* GXT: 870 Route 68 Approach */, 16);
			break;
		
		case 51:
			StringCopy(&Var0, "MP_PROP_52" /* GXT: 1200 Route 68 */, 16);
			break;
		
		case 52:
			StringCopy(&Var0, "MP_PROP_57" /* GXT: 8754 Route 68 */, 16);
			break;
		
		case 53:
			StringCopy(&Var0, "MP_PROP_59" /* GXT: 1905 Davis Ave */, 16);
			break;
		
		case 54:
			StringCopy(&Var0, "MP_PROP_60" /* GXT: 1623 South Shambles St */, 16);
			break;
		
		case 55:
			StringCopy(&Var0, "MP_PROP_61" /* GXT: 4531 Dry Dock St */, 16);
			break;
		
		case 56:
			StringCopy(&Var0, "MP_PROP_62" /* GXT: 1337 Exceptionalists Way */, 16);
			break;
		
		case 57:
			StringCopy(&Var0, "MP_PROP_63" /* GXT: Unit 76 Greenwich Parkway */, 16);
			break;
		
		case 58:
			StringCopy(&Var0, "MP_PROP_64" /* GXT: Garage Innocence Blvd */, 16);
			break;
		
		case 59:
			StringCopy(&Var0, "MP_PROP_65" /* GXT: 634 Blvd Del Perro */, 16);
			break;
		
		case 60:
			StringCopy(&Var0, "MP_PROP_66" /* GXT: 0897 Mirror Park Blvd */, 16);
			break;
		
		case 61:
			StringCopy(&Var0, "MP_PROP_67" /* GXT: Eclipse Towers, Apt 3 */, 16);
			break;
		
		case 62:
			StringCopy(&Var0, "MP_PROP_68" /* GXT: Del Perro Heights, Apt 4 */, 16);
			break;
		
		case 63:
			StringCopy(&Var0, "MP_PROP_69" /* GXT: Richards Majestic, Apt 2 */, 16);
			break;
		
		case 64:
			StringCopy(&Var0, "MP_PROP_70" /* GXT: Tinsel Towers, Apt 42 */, 16);
			break;
		
		case 65:
			StringCopy(&Var0, "MP_PROP_71" /* GXT: 4 Integrity Way, Apt 28 */, 16);
			break;
		
		case 66:
			StringCopy(&Var0, "MP_PROP_72" /* GXT: 4 Hangman Ave */, 16);
			break;
		
		case 67:
			StringCopy(&Var0, "MP_PROP_73" /* GXT: 12 Sustancia Rd */, 16);
			break;
		
		case 68:
			StringCopy(&Var0, "MP_PROP_74" /* GXT: 4584 Procopio Dr */, 16);
			break;
		
		case 69:
			StringCopy(&Var0, "MP_PROP_75" /* GXT: 4401 Procopio Dr */, 16);
			break;
		
		case 70:
			StringCopy(&Var0, "MP_PROP_76" /* GXT: 0232 Paleto Blvd */, 16);
			break;
		
		case 71:
			StringCopy(&Var0, "MP_PROP_77" /* GXT: 140 Zancudo Ave */, 16);
			break;
		
		case 72:
			StringCopy(&Var0, "MP_PROP_78" /* GXT: 1893 Grapeseed Ave */, 16);
			break;
		
		case 83:
			StringCopy(&Var0, "MP_PROP_79" /* GXT: Eclipse Towers, Penthouse Suite 1 */, 16);
			break;
		
		case 84:
			StringCopy(&Var0, "MP_PROP_80" /* GXT: Eclipse Towers, Penthouse Suite 2 */, 16);
			break;
		
		case 85:
			StringCopy(&Var0, "MP_PROP_81" /* GXT: Eclipse Towers, Penthouse Suite 3 */, 16);
			break;
		
		case 73:
			StringCopy(&Var0, "MP_PROP_83" /* GXT: 3655 Wild Oats Drive */, 16);
			break;
		
		case 74:
			StringCopy(&Var0, "MP_PROP_84" /* GXT: 2044 North Conker Avenue */, 16);
			break;
		
		case 75:
			StringCopy(&Var0, "MP_PROP_85" /* GXT: 2868 Hillcrest Avenue */, 16);
			break;
		
		case 76:
			StringCopy(&Var0, "MP_PROP_86" /* GXT: 2862 Hillcrest Avenue */, 16);
			break;
		
		case 77:
			StringCopy(&Var0, "MP_PROP_87" /* GXT: 3677 Whispymound Drive */, 16);
			break;
		
		case 78:
			StringCopy(&Var0, "MP_PROP_89" /* GXT: 2117 Milton Road */, 16);
			break;
		
		case 79:
			StringCopy(&Var0, "MP_PROP_90" /* GXT: 2866 Hillcrest Avenue */, 16);
			break;
		
		case 80:
			StringCopy(&Var0, "MP_PROP_92" /* GXT: 2874 Hillcrest Avenue */, 16);
			break;
		
		case 81:
			StringCopy(&Var0, "MP_PROP_94" /* GXT: 2113 Mad Wayne Thunder Drive */, 16);
			break;
		
		case 82:
			StringCopy(&Var0, "MP_PROP_95" /* GXT: 2045 North Conker Avenue */, 16);
			break;
		
		case 86:
			StringCopy(&Var0, "PM_SPAWN_Y" /* GXT: Private Yacht */, 16);
			break;
		
		case 87:
			StringCopy(&Var0, "MP_PROP_OFF1" /* GXT: Lombank West */, 16);
			break;
		
		case 88:
			StringCopy(&Var0, "MP_PROP_OFF2" /* GXT: Maze Bank West */, 16);
			break;
		
		case 89:
			StringCopy(&Var0, "MP_PROP_OFF3" /* GXT: Arcadius Business Center */, 16);
			break;
		
		case 90:
			StringCopy(&Var0, "MP_PROP_OFF4" /* GXT: Maze Bank Tower */, 16);
			break;
		
		case 91:
			StringCopy(&Var0, "MP_PROP_CLUBH1" /* GXT: Rancho Clubhouse */, 16);
			break;
		
		case 92:
			StringCopy(&Var0, "MP_PROP_CLUBH2" /* GXT: Del Perro Beach Clubhouse */, 16);
			break;
		
		case 93:
			StringCopy(&Var0, "MP_PROP_CLUBH3" /* GXT: Pillbox Hill Clubhouse */, 16);
			break;
		
		case 94:
			StringCopy(&Var0, "MP_PROP_CLUBH4" /* GXT: Great Chaparral Clubhouse */, 16);
			break;
		
		case 95:
			StringCopy(&Var0, "MP_PROP_CLUBH5" /* GXT: Paleto Bay Clubhouse */, 16);
			break;
		
		case 96:
			StringCopy(&Var0, "MP_PROP_CLUBH6" /* GXT: Sandy Shores Clubhouse */, 16);
			break;
		
		case 97:
			StringCopy(&Var0, "MP_PROP_CLUBH7" /* GXT: La Mesa Clubhouse */, 16);
			break;
		
		case 98:
			StringCopy(&Var0, "MP_PROP_CLUBH8" /* GXT: Downtown Vinewood Clubhouse */, 16);
			break;
		
		case 99:
			StringCopy(&Var0, "MP_PROP_CLUBH9" /* GXT: Hawick Clubhouse */, 16);
			break;
		
		case 100:
			StringCopy(&Var0, "MP_PROP_CLUBH10" /* GXT: Grapeseed Clubhouse */, 16);
			break;
		
		case 101:
			StringCopy(&Var0, "MP_PROP_CLUBH11" /* GXT: Paleto Bay Clubhouse */, 16);
			break;
		
		case 102:
			StringCopy(&Var0, "MP_PROP_CLUBH12" /* GXT: Vespucci Beach Clubhouse */, 16);
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
			StringCopy(&Var0, "MP_PROP_OFFG1" /* GXT: Office Garage 1 */, 16);
			break;
		
		case 104:
		case 107:
		case 110:
		case 113:
			StringCopy(&Var0, "MP_PROP_OFFG2" /* GXT: Office Garage 2 */, 16);
			break;
		
		case 105:
		case 108:
		case 111:
		case 114:
			StringCopy(&Var0, "MP_PROP_OFFG3" /* GXT: Office Garage 3 */, 16);
			break;
		
		case 115:
			StringCopy(&Var0, "IE_WARE_1" /* GXT: Vehicle Warehouse */, 16);
			break;
	}
	return Var0;
}

int func_67(int iParam0)//Position - 0x2239B
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	struct<4> Var6;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_76())
	{
		iVar0 = 0;
		bVar1 = false;
		if (func_73(iParam0))
		{
			if (!func_69(iParam0))
			{
				iVar0 = 1;
			}
			else
			{
				bVar1 = true;
			}
		}
		func_68(&sVar2, iParam0, iVar0, bVar1);
		iVar3 = MISC::GET_HASH_KEY(&sVar2);
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(iVar3))
		{
			iVar4 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(iVar3, joaat("CATEGORY_PROPERTIE"), true);
			Var5 = { func_66(iParam0) };
			return iVar4;
		}
		else
		{
			Var6 = { func_66(iParam0) };
		}
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_3960 /* Tunable: PROPERTY_HIGH_APT_1_EXPENDITURE_MODIFIER */;
			break;
		
		case 2:
			return Global_262145.f_3961 /* Tunable: PROPERTY_HIGH_APT_2_EXPENDITURE_MODIFIER */;
			break;
		
		case 3:
			return Global_262145.f_3962 /* Tunable: PROPERTY_HIGH_APT_3_EXPENDITURE_MODIFIER */;
			break;
		
		case 4:
			return Global_262145.f_3963 /* Tunable: PROPERTY_HIGH_APT_4_EXPENDITURE_MODIFIER */;
			break;
		
		case 5:
			return Global_262145.f_3964 /* Tunable: PROPERTY_HIGH_APT_5_EXPENDITURE_MODIFIER */;
			break;
		
		case 6:
			return Global_262145.f_3965 /* Tunable: PROPERTY_HIGH_APT_6_EXPENDITURE_MODIFIER */;
			break;
		
		case 7:
			return Global_262145.f_3966 /* Tunable: PROPERTY_HIGH_APT_7_EXPENDITURE_MODIFIER */;
			break;
		
		case 34:
			return Global_262145.f_3967 /* Tunable: PROPERTY_HIGH_APT_8_EXPENDITURE_MODIFIER */;
			break;
		
		case 35:
			return Global_262145.f_3968 /* Tunable: PROPERTY_HIGH_APT_9_EXPENDITURE_MODIFIER */;
			break;
		
		case 36:
			return Global_262145.f_3969 /* Tunable: PROPERTY_HIGH_APT_10_EXPENDITURE_MODIFIER */;
			break;
		
		case 37:
			return Global_262145.f_3970 /* Tunable: PROPERTY_HIGH_APT_11_EXPENDITURE_MODIFIER */;
			break;
		
		case 38:
			return Global_262145.f_3971 /* Tunable: PROPERTY_HIGH_APT_12_EXPENDITURE_MODIFIER */;
			break;
		
		case 39:
			return Global_262145.f_3972 /* Tunable: PROPERTY_HIGH_APT_13_EXPENDITURE_MODIFIER */;
			break;
		
		case 40:
			return Global_262145.f_3973 /* Tunable: PROPERTY_HIGH_APT_14_EXPENDITURE_MODIFIER */;
			break;
		
		case 41:
			return Global_262145.f_3974 /* Tunable: PROPERTY_HIGH_APT_15_EXPENDITURE_MODIFIER */;
			break;
		
		case 42:
			return Global_262145.f_3975 /* Tunable: PROPERTY_HIGH_APT_16_EXPENDITURE_MODIFIER */;
			break;
		
		case 43:
			return Global_262145.f_3976 /* Tunable: PROPERTY_HIGH_APT_17_EXPENDITURE_MODIFIER */;
			break;
		
		case 8:
			return Global_262145.f_3977 /* Tunable: PROPERTY_MEDIUM_APT_1_EXPENDITURE_MODIFIER */;
			break;
		
		case 9:
			return Global_262145.f_3978 /* Tunable: PROPERTY_MEDIUM_APT_2_EXPENDITURE_MODIFIER */;
			break;
		
		case 10:
			return Global_262145.f_3979 /* Tunable: PROPERTY_MEDIUM_APT_3_EXPENDITURE_MODIFIER */;
			break;
		
		case 11:
			return Global_262145.f_3980 /* Tunable: PROPERTY_MEDIUM_APT_4_EXPENDITURE_MODIFIER */;
			break;
		
		case 12:
			return Global_262145.f_3981 /* Tunable: PROPERTY_MEDIUM_APT_5_EXPENDITURE_MODIFIER */;
			break;
		
		case 13:
			return Global_262145.f_3982 /* Tunable: PROPERTY_MEDIUM_APT_6_EXPENDITURE_MODIFIER */;
			break;
		
		case 14:
			return Global_262145.f_3983 /* Tunable: PROPERTY_MEDIUM_APT_7_EXPENDITURE_MODIFIER */;
			break;
		
		case 15:
			return Global_262145.f_3984 /* Tunable: PROPERTY_MEDIUM_APT_8_EXPENDITURE_MODIFIER */;
			break;
		
		case 16:
			return Global_262145.f_3985 /* Tunable: PROPERTY_MEDIUM_APT_9_EXPENDITURE_MODIFIER */;
			break;
		
		case 17:
			return Global_262145.f_3986 /* Tunable: PROPERTY_LOW_APT_1_EXPENDITURE_MODIFIER */;
			break;
		
		case 18:
			return Global_262145.f_3987 /* Tunable: PROPERTY_LOW_APT_2_EXPENDITURE_MODIFIER */;
			break;
		
		case 19:
			return Global_262145.f_3988 /* Tunable: PROPERTY_LOW_APT_3_EXPENDITURE_MODIFIER */;
			break;
		
		case 20:
			return Global_262145.f_3989 /* Tunable: PROPERTY_LOW_APT_4_EXPENDITURE_MODIFIER */;
			break;
		
		case 21:
			return Global_262145.f_3990 /* Tunable: PROPERTY_LOW_APT_5_EXPENDITURE_MODIFIER */;
			break;
		
		case 22:
			return Global_262145.f_3991 /* Tunable: PROPERTY_LOW_APT_6_EXPENDITURE_MODIFIER */;
			break;
		
		case 23:
			return Global_262145.f_3992 /* Tunable: PROPERTY_LOW_APT_7_EXPENDITURE_MODIFIER */;
			break;
		
		case 24:
			return Global_262145.f_3993 /* Tunable: PROPERTY_GARAGE_EAST_LOS_SANTOS_1_EXPENDITURE_MODIFIER */;
			break;
		
		case 25:
			return Global_262145.f_3994 /* Tunable: PROPERTY_GARAGE_EAST_LOS_SANTOS_2_EXPENDITURE_MODIFIER */;
			break;
		
		case 26:
			return Global_262145.f_3995 /* Tunable: PROPERTY_GARAGE_EAST_LOS_SANTOS_3_EXPENDITURE_MODIFIER */;
			break;
		
		case 27:
			return Global_262145.f_3996 /* Tunable: PROPERTY_GARAGE_EAST_LOS_SANTOS_4_EXPENDITURE_MODIFIER */;
			break;
		
		case 28:
			return Global_262145.f_3997 /* Tunable: PROPERTY_GARAGE_EAST_LOS_SANTOS_5_EXPENDITURE_MODIFIER */;
			break;
		
		case 29:
			return Global_262145.f_3998 /* Tunable: PROPERTY_GARAGE_EAST_LOS_SANTOS_6_EXPENDITURE_MODIFIER */;
			break;
		
		case 30:
			return Global_262145.f_3999 /* Tunable: PROPERTY_GARAGE_EAST_LOS_SANTOS_7_EXPENDITURE_MODIFIER */;
			break;
		
		case 31:
			return Global_262145.f_4000 /* Tunable: PROPERTY_GARAGE_EAST_LOS_SANTOS_8_EXPENDITURE_MODIFIER */;
			break;
		
		case 32:
			return Global_262145.f_4001 /* Tunable: PROPERTY_GARAGE_SOUTH_LOS_SANTOS_1_EXPENDITURE_MODIFIER */;
			break;
		
		case 33:
			return Global_262145.f_4002 /* Tunable: PROPERTY_GARAGE_SOUTH_LOS_SANTOS_2_EXPENDITURE_MODIFIER */;
			break;
		
		case 44:
			return Global_262145.f_4003 /* Tunable: PROPERTY_GARAGE_NEW_1_EXPENDITURE_MODIFIER */;
			break;
		
		case 45:
			return Global_262145.f_4004 /* Tunable: PROPERTY_GARAGE_NEW_2_EXPENDITURE_MODIFIER */;
			break;
		
		case 46:
			return Global_262145.f_4005 /* Tunable: PROPERTY_GARAGE_NEW_3_EXPENDITURE_MODIFIER */;
			break;
		
		case 47:
			return Global_262145.f_4006 /* Tunable: PROPERTY_GARAGE_NEW_5_EXPENDITURE_MODIFIER */;
			break;
		
		case 48:
			return Global_262145.f_4007 /* Tunable: PROPERTY_GARAGE_NEW_6_EXPENDITURE_MODIFIER */;
			break;
		
		case 49:
			return Global_262145.f_4008 /* Tunable: PROPERTY_GARAGE_NEW_7_EXPENDITURE_MODIFIER */;
			break;
		
		case 50:
			return Global_262145.f_4009 /* Tunable: PROPERTY_GARAGE_NEW_8_EXPENDITURE_MODIFIER */;
			break;
		
		case 51:
			return Global_262145.f_4010 /* Tunable: PROPERTY_GARAGE_NEW_9_EXPENDITURE_MODIFIER */;
			break;
		
		case 52:
			return Global_262145.f_4011 /* Tunable: PROPERTY_GARAGE_NEW_14_EXPENDITURE_MODIFIER */;
			break;
		
		case 53:
			return Global_262145.f_4012 /* Tunable: PROPERTY_GARAGE_NEW_16_EXPENDITURE_MODIFIER */;
			break;
		
		case 54:
			return Global_262145.f_4013 /* Tunable: PROPERTY_GARAGE_NEW_17_EXPENDITURE_MODIFIER */;
			break;
		
		case 55:
			return Global_262145.f_4014 /* Tunable: PROPERTY_GARAGE_NEW_18_EXPENDITURE_MODIFIER */;
			break;
		
		case 56:
			return Global_262145.f_4015 /* Tunable: PROPERTY_GARAGE_NEW_19_EXPENDITURE_MODIFIER */;
			break;
		
		case 57:
			return Global_262145.f_4016 /* Tunable: PROPERTY_GARAGE_NEW_20_EXPENDITURE_MODIFIER */;
			break;
		
		case 58:
			return Global_262145.f_4017 /* Tunable: PROPERTY_GARAGE_NEW_21_EXPENDITURE_MODIFIER */;
			break;
		
		case 59:
			return Global_262145.f_4018 /* Tunable: PROPERTY_GARAGE_NEW_22_EXPENDITURE_MODIFIER */;
			break;
		
		case 60:
			return Global_262145.f_4019 /* Tunable: PROPERTY_GARAGE_NEW_23_EXPENDITURE_MODIFIER */;
			break;
		
		case 61:
			return Global_262145.f_7063[0];
			break;
		
		case 62:
			return Global_262145.f_7063[1];
			break;
		
		case 63:
			return Global_262145.f_7063[2];
			break;
		
		case 64:
			return Global_262145.f_7063[3];
			break;
		
		case 65:
			return Global_262145.f_7063[4];
			break;
		
		case 66:
			return Global_262145.f_8290 /* Tunable: PROPERTY_3_ACE_JONES_DR */;
			break;
		
		case 67:
			return Global_262145.f_8291 /* Tunable: PROPERTY_12_SUSTANCIA_RD */;
			break;
		
		case 68:
			return Global_262145.f_8292 /* Tunable: PROPERTY_4584_PROCOPIO_DR */;
			break;
		
		case 69:
			return Global_262145.f_8293 /* Tunable: PROPERTY_4401_PROCOPIO_DR */;
			break;
		
		case 70:
			return Global_262145.f_8294 /* Tunable: PROPERTY_0232_PALETO_BLVD */;
			break;
		
		case 71:
			return Global_262145.f_8295 /* Tunable: PROPERTY_140_ZANCUDO_AVE */;
			break;
		
		case 72:
			return Global_262145.f_8296 /* Tunable: PROPERTY_1893_GRAPESEED_AVE */;
			break;
		
		case 73:
			return Global_262145.f_13315 /* Tunable: APARTMENT_CAR_MODSSTILT_3655_WILD_OATS_DRIVE */;
		
		case 74:
			return Global_262145.f_13316 /* Tunable: APARTMENT_CAR_MODSSTILT_2044_NORTH_CONKER_AVENUE */;
		
		case 75:
			return Global_262145.f_13317 /* Tunable: APARTMENT_CAR_MODSSTILT_2868_HILLCREST_AVENUE */;
		
		case 76:
			return Global_262145.f_13318 /* Tunable: APARTMENT_CAR_MODSSTILT_2862_HILLCREST_AVENUE */;
		
		case 77:
			return Global_262145.f_13319 /* Tunable: APARTMENT_CAR_MODSSTILT_3677_WHISPYMOUND_DRIVE */;
		
		case 78:
			return Global_262145.f_13320 /* Tunable: APARTMENT_CAR_MODSSTILT_2117_MILTON_ROAD */;
		
		case 79:
			return Global_262145.f_13321 /* Tunable: APARTMENT_CAR_MODSSTILT_2866_HILLCREST_AVENUE */;
		
		case 80:
			return Global_262145.f_13322 /* Tunable: APARTMENT_CAR_MODSSTILT_2874_HILLCREST_AVENUE */;
		
		case 81:
			return Global_262145.f_13323 /* Tunable: APARTMENT_CAR_MODSSTILT_2113_MAD_WAYNE_THUNDER_DRIVE */;
		
		case 82:
			return Global_262145.f_13324 /* Tunable: APARTMENT_CAR_MODSSTILT_2045_NORTH_CONKER_AVENUE */;
		
		case 83:
			return Global_262145.f_13312 /* Tunable: APARTMENT_CAR_MODSECLIPSE_TOWERS_PENTHOUSE_SUITE_1 */;
		
		case 84:
			return Global_262145.f_13313 /* Tunable: APARTMENT_CAR_MODSECLIPSE_TOWERS_PENTHOUSE_SUITE_2 */;
		
		case 85:
			return Global_262145.f_13314 /* Tunable: APARTMENT_CAR_MODSECLIPSE_TOWERS_PENTHOUSE_SUITE_3 */;
		
		case 86:
			return 27000000;
		
		case 87:
			return Global_262145.f_15892 /* Tunable: EXEC1_OFFICE1_LOMBANK */;
		
		case 88:
			return Global_262145.f_15893 /* Tunable: EXEC1_OFFICE2_MAZE1 */;
		
		case 89:
			return Global_262145.f_15894 /* Tunable: EXEC1_OFFICE3_ARCADIUS */;
		
		case 90:
			return Global_262145.f_15895 /* Tunable: EXEC1_OFFICE4_MAZE2 */;
		
		case 91:
			return Global_262145.f_17987 /* Tunable: 819519215 */;
		
		case 92:
			return Global_262145.f_17989 /* Tunable: 471352940 */;
		
		case 93:
			return Global_262145.f_17985 /* Tunable: 2023136086 */;
		
		case 94:
			return Global_262145.f_17994 /* Tunable: 217858651 */;
		
		case 95:
			return Global_262145.f_17991 /* Tunable: -1058611921 */;
		
		case 96:
			return Global_262145.f_17993 /* Tunable: -1767762009 */;
		
		case 97:
			return Global_262145.f_17986 /* Tunable: -1390109608 */;
		
		case 98:
			return Global_262145.f_17984 /* Tunable: 2033735347 */;
		
		case 99:
			return Global_262145.f_17983 /* Tunable: -1219608517 */;
		
		case 100:
			return Global_262145.f_17992 /* Tunable: 1669688233 */;
		
		case 101:
			return Global_262145.f_17990 /* Tunable: 1241258301 */;
		
		case 102:
			return Global_262145.f_17988 /* Tunable: 813618473 */;
		
		case 103:
			return Global_262145.f_19655 /* Tunable: IMPEXP_GARAGE_LEVEL1 */;
		
		case 104:
			return Global_262145.f_19548 /* Tunable: IMPEXP_GARAGE_LEVEL2_COST */;
		
		case 105:
			return Global_262145.f_19549 /* Tunable: IMPEXP_GARAGE_LEVEL3_COST */;
		
		case 106:
			return Global_262145.f_19655 /* Tunable: IMPEXP_GARAGE_LEVEL1 */;
		
		case 107:
			return Global_262145.f_19548 /* Tunable: IMPEXP_GARAGE_LEVEL2_COST */;
		
		case 108:
			return Global_262145.f_19549 /* Tunable: IMPEXP_GARAGE_LEVEL3_COST */;
		
		case 109:
			return Global_262145.f_19655 /* Tunable: IMPEXP_GARAGE_LEVEL1 */;
		
		case 110:
			return Global_262145.f_19548 /* Tunable: IMPEXP_GARAGE_LEVEL2_COST */;
		
		case 111:
			return Global_262145.f_19549 /* Tunable: IMPEXP_GARAGE_LEVEL3_COST */;
		
		case 112:
			return Global_262145.f_19655 /* Tunable: IMPEXP_GARAGE_LEVEL1 */;
		
		case 113:
			return Global_262145.f_19548 /* Tunable: IMPEXP_GARAGE_LEVEL2_COST */;
		
		case 114:
			return Global_262145.f_19549 /* Tunable: IMPEXP_GARAGE_LEVEL3_COST */;
		
		case 115:
			return 3000000;
	}
	return 0;
}

void func_68(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x22C36
{
	struct<4> Var0;
	
	StringCopy(sParam0, "FACTORY_INDEX_", 64);
	Var0 = { func_66(iParam1) };
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &Var0, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
	if (bParam3)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_69(int iParam0)//Position - 0x22C79
{
	if (func_70())
	{
		if (((iParam0 == 88 || iParam0 == 94) || iParam0 == 18) || iParam0 == 56)
		{
			return 1;
		}
	}
	return 0;
}

bool func_70()//Position - 0x22CB6
{
	return (func_72() || func_71());
}

int func_71()//Position - 0x22CCC
{
	switch (NETWORK::GET_USER_STARTER_ACCESS())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_72()//Position - 0x22CFA
{
	switch (NETWORK::GET_USER_PREMIUM_ACCESS())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_73(int iParam0)//Position - 0x22D28
{
	if (func_75() && func_74())
	{
		if (iParam0 == 31)
		{
			return 1;
		}
	}
	if (func_70())
	{
		if (func_69(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_74()//Position - 0x22D60
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (BitTest(Global_25, 5))
	{
		if (BitTest(Global_25, 1) || BitTest(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152525.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (BitTest(iVar3, 1) || BitTest(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_75()//Position - 0x22E99
{
	int iVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
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

int func_76()//Position - 0x22F51
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_77()//Position - 0x22F68
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	while (!bVar1)
	{
		bVar1 = true;
		bVar0 = false;
		while (bVar0 < 13)
		{
			if (!BitTest(uVar2, bVar0))
			{
				iVar3 = func_80(bVar0);
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar3);
				if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar3) && func_79(bVar0, uVar2))
				{
					SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iVar3, 1424);
					SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar3);
					MISC::SET_BIT(&uVar2, bVar0);
					if (func_78(bVar0))
					{
						bVar1 = false;
					}
					else
					{
						Jump @114; //curOff = 108
						bVar1 = false;
						bVar0++;
					}
					SYSTEM::WAIT(0);
				}

int func_78(bool bParam0)//Position - 0x22FEE
{
	switch (bParam0)
	{
		case 8:
		case 11:
			return 1;
			break;
	}
	return 0;
}

int func_79(bool bParam0, var uParam1)//Position - 0x23011
{
	switch (bParam0)
	{
		case 11:
			if (!BitTest(uParam1, 8))
			{
				return 0;
			}
			break;
		
		case 12:
			if (!BitTest(uParam1, 11))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_80(bool bParam0)//Position - 0x2304D
{
	switch (bParam0)
	{
		case 0:
			return joaat("mp_registration");
		
		case 1:
			return joaat("mp_fm_registration");
		
		case 2:
			return joaat("tunables_registration");
		
		case 3:
			return joaat("sc_lb_global_block");
		
		case 4:
			return joaat("mp_save_game_global_block");
		
		case 5:
			return joaat("mp_prop_global_block");
		
		case 6:
			return joaat("mp_prop_special_global_block");
		
		case 7:
			return joaat("title_update_registration");
		
		case 8:
			return joaat("title_update_registration_2");
		
		case 9:
			return joaat("globals_fmmc_struct_registration");
		
		case 10:
			return joaat("globals_fmmcstruct2_registration");
		
		case 11:
			return joaat("sp_dlc_registration");
		
		case 12:
			return joaat("sp_pilotschool_reg");
		
		default:
	}
	return -1;
}

int func_81()//Position - 0x23113
{
	if (((LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() || LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_MENU()) || NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA()) || NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT())
	{
		return 1;
	}
	return 0;
}

void func_82(int iParam0)//Position - 0x23148
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(func_80(iVar0));
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("standard_global_reg"));
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("standard_global_init"));
			break;
	}
}

