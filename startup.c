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
	Local_50 = { 1694.74f, 3276.502f, 41.2796f };
	Local_51 = { 8.79494f, 0.59893f, 154.8464f };
	func_82(0);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	HUD::_SET_PLAYER_IS_IN_DIRECTOR_MODE(false);
	MISC::_SET_PLAYER_IS_IN_ANIMAL_FORM(false);
	STREAMING::REMOVE_IPL("prologue_DistantLights");
	STREAMING::REMOVE_IPL("prologue_LODLights");
	iLocal_52 = 0;
	bVar0 = func_81();
	if (MISC::_IS_COMMAND_LINE_BENCHMARK_VALUE_SET() || MISC::_LANDING_MENU_IS_ACTIVE())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		SCRIPT::_0xB1577667C3708F9B();
	}
	MISC::SET_INSTANCE_PRIORITY_MODE(0);
	func_77();
	Global_4542087 = 0;
	MISC::SET_BIT(&Global_4542087, 0);
	MISC::SET_BIT(&Global_4542087, 1);
	iVar1 = 0;
	while (iVar1 < 129)
	{
		func_34(&(Global_1312193[iVar1 /*1951*/]), iVar1);
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
	Global_78321 = 1;
	Global_2 = bVar0;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	switch (iLocal_52)
	{
		case 0:
			Global_2883694 = 0;
			Global_2883693 = 0;
			func_32(joaat("standard_global_reg"), 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("standard_global_reg");
			while ((!BitTest(Global_4542087, 0) || !BitTest(Global_4542087, 1)) || !BitTest(Global_4542087, 2))
			{
				if (!BitTest(Global_4542087, 0))
				{
				}
				if (!BitTest(Global_4542087, 1))
				{
				}
				if (!BitTest(Global_4542087, 2))
				{
				}
				SYSTEM::WAIT(0);
			}
			MISC::START_SAVE_DATA(&Global_113386, 1, true);
			MISC::REGISTER_FLOAT_TO_SAVE(&Global_113386, "fSaveVersion");
			MISC::STOP_SAVE_DATA();
			if (Global_1)
			{
				Global_0 = Global_113386;
			}
			Global_113386 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_21(Global_0);
				}
			}
			break;
	}
	MISC::START_SAVE_DATA(&Global_2359296, 5568, false);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&Global_2359296, 5568, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_19(&(Global_2359296[iVar1 /*5567*/]), iVar1);
		func_17(&(Global_2359296[iVar1 /*5567*/]), iVar1);
		func_14(&(Global_2359296[iVar1 /*5567*/]), iVar1);
		func_12(&(Global_2359296[iVar1 /*5567*/]), iVar1);
		func_11(&(Global_2359296[iVar1 /*5567*/]), iVar1);
		func_10(&(Global_2359296[iVar1 /*5567*/]), iVar1);
		func_3(&(Global_2359296[iVar1 /*5567*/]), iVar1);
		iVar1++;
	}
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_DATA();
	iVar2 = 5568;
	iVar3 = MISC::GET_SIZE_OF_SAVE_DATA(false);
	if (iVar2 != iVar3)
	{
	}
	if (!NETWORK::IS_COMMERCE_DATA_VALID() && !NETWORK::_0x1D4DC17C38FEAFF0())
	{
		NETWORK::_0xB606E6CC59664972(0);
	}
	PATHFIND::SET_ALL_PATHS_CACHE_BOUNDINGSTRUCT(false);
	MISC::_SET_PLAYER_IS_IN_ANIMAL_FORM(false);
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
	Global_152255 = 1;
	Global_152256 = 1;
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
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5540.f_19), 8, &cVar0);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_5540.f_19[0 /*7*/]), 7, "TEMPSTAT_DATE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5540.f_19[0 /*7*/]), "TEMPSTAT_DATE.year");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5540.f_19[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5540.f_19[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5540.f_19[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5540.f_19[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5540.f_19[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5540.f_19[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_ARRAY();
}

void func_5(var uParam0, int iParam1)//Position - 0xB39
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5540.f_15), 4, &cVar0);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_5540.f_15[0 /*3*/]), 3, "TEMPSTAT_VEC");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5540.f_15[0 /*3*/]), "TEMPSTAT_VEC.x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5540.f_15[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5540.f_15[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_ARRAY();
}

void func_6(var uParam0, int iParam1)//Position - 0xBB2
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5540.f_6), 9, &cVar0);
	MISC::_0x8269816F6CFD40F8(&(uParam0->f_5540.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	MISC::STOP_SAVE_ARRAY();
}

void func_7(var uParam0, int iParam1)//Position - 0xBED
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5540.f_4), 2, &cVar0);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5540.f_4[0]), "TEMPSTAT_BOOL");
	MISC::STOP_SAVE_ARRAY();
}

void func_8(var uParam0, int iParam1)//Position - 0xC27
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5540.f_2), 2, &cVar0);
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_5540.f_2[0]), "TEMPSTAT_FLOAT");
	MISC::STOP_SAVE_ARRAY();
}

void func_9(var uParam0, int iParam1)//Position - 0xC61
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5540), 2, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5540[0]), "TEMPSTAT_INT1");
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
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_5390), 150, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5390), "MPATM_CARET_");
	iVar1 = 0;
	StringCopy(&Var2, "MPATMLOGVAL", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5390.f_1), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar3 = { Var2 };
		StringIntConCat(&cVar3, iVar1, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5390.f_1[iVar1]), &cVar3);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "MPATMLOGSCRS", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5390.f_18), 97, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar4 = { Var2 };
		StringIntConCat(&cVar4, iVar1, 16);
		MISC::_0x48F069265A0E4BEC(&(uParam0->f_5390.f_18[iVar1 /*6*/]), &cVar4);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "MPATMLOGACT", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5390.f_115), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar5 = { Var2 };
		StringIntConCat(&cVar5, iVar1, 16);
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_5390.f_115[iVar1]), &cVar5);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var2, "MPATMLOGDAT", 16);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5390.f_132), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar6 = { Var2 };
		StringIntConCat(&cVar6, iVar1, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5390.f_132[iVar1]), &cVar6);
		iVar1++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_5390.f_149), "mpAnyVecBought");
	MISC::STOP_SAVE_STRUCT();
}

void func_11(var uParam0, int iParam1)//Position - 0xE11
{
	struct<6> Var0;
	char cVar1[32];
	int iVar2;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	MISC::START_SAVE_STRUCT_WITH_SIZE(&(uParam0->f_5149), 241, &Var0);
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149), "BOUNTY_GAMERH64_1");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_1), "BOUNTY_GAMERH64_2");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_2), "BOUNTY_GAMERH64_3");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_3), "BOUNTY_GAMERH64_4");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_4), "BOUNTY_GAMERH64_5");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_5), "BOUNTY_GAMERH64_6");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_6), "BOUNTY_GAMERH64_7");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_7), "BOUNTY_GAMERH64_8");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_8), "BOUNTY_GAMERH64_9");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_9), "BOUNTY_GAMERH64_10");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_10), "BOUNTY_GAMERH64_11");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_11), "BOUNTY_GAMERH64_12");
	MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_12), "BOUNTY_GAMERH64_13");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5149.f_13), "BOUNTY_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5149.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5149.f_15), 209, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_1", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/]), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_2", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_1), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_3", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_2), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_4", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_3), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_5", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_4), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_6", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_5), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_7", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_6), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_8", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_7), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_9", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_8), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_10", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_9), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_11", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_10), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_12", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_11), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_13", 32);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_5149.f_15[iVar2 /*13*/].f_12), &cVar1);
		iVar2++;
	}
	MISC::STOP_SAVE_ARRAY();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_5149.f_224), 17, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringIntConCat(&cVar1, iVar2, 32);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5149.f_224[iVar2]), &cVar1);
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
	
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 4468, sParam1);
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
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_40), 7, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_40)
	{
		StringCopy(&Var1, "CLOTHES", 16);
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
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1333), "LAST_ACC_SMPLINT");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1305), 28, "PROP_ARY_VAL");
	iVar4 = 0;
	while (iVar4 < uParam0->f_1305)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1305[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1334), "KR_PATCH_UPDATE");
	iVar4 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2690), 919, "DLC_MODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_2690)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2690[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	iVar4 = 0;
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_3609), 627, "DLC_SUPERMODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_3609)
	{
		StringCopy(&Var1, "DLC_SMODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3609[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1335), 274, "OUTFIT_CompDraw");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1335[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1335[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1609), 274, "OUTFIT_CompTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1609[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1609[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1883), 211, "OUTFIT_PropID");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_1883[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1883[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2094), 211, "OUTFIT_PropTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2094[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2094[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		MISC::STOP_SAVE_ARRAY();
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2305), 22, "OUTFIT_Stored");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2305[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2327), 22, "OUTFIT_CrewTatA");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2327[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2349), 22, "OUTFIT_CrewTatB");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2349[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2371), 22, "OUTFIT_CrewTatC");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2371[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2393), 22, "OUTFIT_CrewTatD");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2393[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2415), 22, "OUTFIT_CrewTatE");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalE", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2415[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2437), 22, "OUTFIT_CrewTatF");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalF", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2437[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2628), 22, "OUTFIT_Shirt");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2628[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2459), 169, "OUTFIT_Name");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_0x8269816F6CFD40F8(&(uParam0->f_2459[iVar4 /*8*/]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_2650), 40, "LAST_JobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_1", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/]), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_2", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_1), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_3", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_2), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_4", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_3), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_5", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_4), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_6", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_5), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_7", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_6), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_8", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_7), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_9", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_8), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_10", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_9), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_11", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_10), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_12", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_11), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_13", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_2650[iVar4 /*13*/].f_12), &cVar6);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4236), "DO_CompletedObjectives");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4237), "DO_LoggedInToday");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4238), "DO_xValue");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4239), "DO_LastHistoryLength");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4240), "DO_LastResetTime");
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4241), 10, "DO_Objectives");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4241[iVar4 /*3*/]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_4241[iVar4 /*3*/].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4241[iVar4 /*3*/].f_2), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4251), 25, "DO_History");
	iVar4 = 0;
	while (iVar4 < 24)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4251[iVar4]), &Var1);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4276), 49, "LAST_JobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar7 = { Var1 };
		StringConCat(&cVar7, "_1", 16);
		MISC::_0xFAA457EF263E8763(&(uParam0->f_4276[iVar4 /*16*/]), &cVar7);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4325), 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "BGSAVEINT", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4325[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4336), 3, "PROPLIB");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4336)
	{
		StringCopy(&Var1, "PROPLIB", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4336[iVar0]), &Var1);
		iVar0++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4339), 40, "LAST_GOGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGOG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_1", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/]), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_2", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_1), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_3", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_2), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_4", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_3), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_5", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_4), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_6", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_5), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_7", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_6), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_8", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_7), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_9", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_8), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_10", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_9), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_11", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_10), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_12", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_11), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_13", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4339[iVar4 /*13*/].f_12), &cVar8);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4379), 40, "LAST_GOJobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_1", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/]), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_2", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_1), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_3", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_2), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_4", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_3), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_5", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_4), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_6", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_5), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_7", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_6), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_8", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_7), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_9", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_8), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_10", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_9), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_11", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_10), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_12", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_11), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_13", 16);
		MISC::_REGISTER_INT64_TO_SAVE(&(uParam0->f_4379[iVar4 /*13*/].f_12), &cVar9);
		iVar4++;
	}
	MISC::STOP_SAVE_ARRAY();
	MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_4419), 49, "LAST_GOJobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar10 = { Var1 };
		StringConCat(&cVar10, "_1", 16);
		MISC::_0xFAA457EF263E8763(&(uParam0->f_4419[iVar4 /*16*/]), &cVar10);
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
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_56), &cVar0);
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
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_21), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iPlateBack");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "UID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "Cost");
	MISC::_REGISTER_TEXT_LABEL_TO_SAVE_2(&(uParam0->f_28), "tlPlateText_pending");
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
		MISC::_0xFAA457EF263E8763(&(uParam0->f_105[iVar0 /*16*/]), &cVar1);
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
	Global_113386.f_26434.f_4 = 0;
}

void func_23()//Position - 0x2C1B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	STATS::STAT_GET_INT(joaat("content_hanger_veh"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("content_marina_veh"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("content_heli_veh"), &iVar2, -1);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_113386.f_668.f_1312 = (Global_113386.f_668.f_1312 - iVar0);
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
			if (BitTest(Global_113386.f_25182[iVar1], bVar0))
			{
				MISC::CLEAR_BIT(&(Global_113386.f_25182[iVar1]), bVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				MISC::SET_BIT(&(Global_113386.f_25182[iVar2]), bVar0);
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
		MISC::SET_BIT(&(Global_113386.f_10016.f_25), 6);
	}
}

int func_26(int iParam0)//Position - 0x2D35
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_27()//Position - 0x2D61
{
}

void func_28()//Position - 0x2D69
{
	if (Global_113386.f_9085.f_99.f_205[7] != 0)
	{
		if (!Global_113386.f_9085.f_330[86 /*6*/])
		{
			Global_113386.f_9085.f_330[86 /*6*/] = 1;
		}
	}
	if (Global_113386.f_9085.f_99.f_205[8] != 0)
	{
		if (!Global_113386.f_9085.f_330[71 /*6*/])
		{
			Global_113386.f_9085.f_330[71 /*6*/] = 1;
		}
	}
	if (Global_113386.f_9085.f_99.f_205[9] != 0)
	{
		if (!Global_113386.f_9085.f_330[91 /*6*/])
		{
			Global_113386.f_9085.f_330[91 /*6*/] = 1;
		}
	}
	if (Global_113386.f_9085.f_99.f_205[10] != 0)
	{
		if (!Global_113386.f_9085.f_330[67 /*6*/])
		{
			Global_113386.f_9085.f_330[67 /*6*/] = 1;
		}
	}
	if (Global_113386.f_9085.f_99.f_205[11] != 0)
	{
		if (!Global_113386.f_9085.f_330[77 /*6*/])
		{
			Global_113386.f_9085.f_330[77 /*6*/] = 1;
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
	
	Var0 = { Global_113386.f_10194[iParam0 /*12*/] };
	uVar1 = Global_113386.f_10194[iParam0 /*12*/].f_4;
	uVar2 = Global_113386.f_10194[iParam0 /*12*/].f_5;
	uVar3 = Global_113386.f_10194[iParam0 /*12*/].f_6;
	uVar4 = Global_113386.f_10194[iParam0 /*12*/].f_7;
	uVar5 = Global_113386.f_10194[iParam0 /*12*/].f_8;
	uVar6 = Global_113386.f_10194[iParam0 /*12*/].f_9;
	uVar7 = Global_113386.f_10194[iParam0 /*12*/].f_10;
	uVar8 = Global_113386.f_10194[iParam0 /*12*/].f_11;
	Global_113386.f_10194[iParam0 /*12*/] = { Global_113386.f_10194[iParam1 /*12*/] };
	Global_113386.f_10194[iParam0 /*12*/].f_4 = Global_113386.f_10194[iParam1 /*12*/].f_4;
	Global_113386.f_10194[iParam0 /*12*/].f_5 = Global_113386.f_10194[iParam1 /*12*/].f_5;
	Global_113386.f_10194[iParam0 /*12*/].f_6 = Global_113386.f_10194[iParam1 /*12*/].f_6;
	Global_113386.f_10194[iParam0 /*12*/].f_7 = Global_113386.f_10194[iParam1 /*12*/].f_7;
	Global_113386.f_10194[iParam0 /*12*/].f_8 = Global_113386.f_10194[iParam1 /*12*/].f_8;
	Global_113386.f_10194[iParam0 /*12*/].f_9 = Global_113386.f_10194[iParam1 /*12*/].f_9;
	Global_113386.f_10194[iParam0 /*12*/].f_10 = Global_113386.f_10194[iParam1 /*12*/].f_10;
	Global_113386.f_10194[iParam0 /*12*/].f_11 = Global_113386.f_10194[iParam1 /*12*/].f_11;
	Global_113386.f_10194[iParam1 /*12*/] = { Var0 };
	Global_113386.f_10194[iParam1 /*12*/].f_4 = uVar1;
	Global_113386.f_10194[iParam1 /*12*/].f_5 = uVar2;
	Global_113386.f_10194[iParam1 /*12*/].f_6 = uVar3;
	Global_113386.f_10194[iParam1 /*12*/].f_7 = uVar4;
	Global_113386.f_10194[iParam1 /*12*/].f_8 = uVar5;
	Global_113386.f_10194[iParam1 /*12*/].f_9 = uVar6;
	Global_113386.f_10194[iParam1 /*12*/].f_10 = uVar7;
	Global_113386.f_10194[iParam1 /*12*/].f_11 = uVar8;
}

void func_30()//Position - 0x308D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_31(Global_113386.f_24904[iVar0 /*4*/]))
		{
			if (Global_113386.f_24904[iVar0 /*4*/] != 145)
			{
				Global_113386.f_24904[iVar0 /*4*/] = 145;
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
	REPLAY::_0x7E2BD3EF6C205F09("No_Filter", true);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam1", true);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam2", true);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam3", true);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam4", true);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam5", true);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam6", true);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam7", true);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam9", true);
	REPLAY::_0x7E2BD3EF6C205F09("phone_cam12", false);
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
			uParam0->f_38[0 /*27*/].f_8 = { 347.3975f, -1001.446f, -100.1982f };
			uParam0->f_38[0 /*27*/].f_11 = 4.881f;
			uParam0->f_146[0 /*12*/] = { 347.0897f, -1002.554f, -96.94618f };
			uParam0->f_146[0 /*12*/].f_3 = { 347.0861f, -1003.8f, -100.886f };
			uParam0->f_146[0 /*12*/].f_6 = 2.5f;
			uParam0->f_146[0 /*12*/].f_7 = 176.3655f;
			uParam0->f_146.f_37 = { 338.7102f, -1002.236f, -100.2119f };
			uParam0->f_146.f_40 = { 342.9461f, -999.73f, -98.0236f };
			uParam0->f_146.f_43 = { 0f, 0f, 37.7289f };
			uParam0->f_146.f_46 = 50f;
			uParam0->f_146.f_47 = { 348.132f, -997.2031f, -100.1741f };
			func_43(&(uParam0->f_146.f_57), iParam1);
			uParam0->f_146.f_50 = { 346.4337f, -1002.827f, -97.7941f };
			func_37(iParam1, &(uParam0->f_146.f_53), &(uParam0->f_146.f_56), -1);
			uParam0->f_146.f_82[1 /*102*/] = { 349.9853f, -997.8344f, -99.1952f };
			uParam0->f_146.f_82[1 /*102*/].f_3 = 285.4278f;
			uParam0->f_146.f_82[2 /*102*/] = { 343.8862f, -1002.251f, -100.1962f };
			uParam0->f_146.f_82[2 /*102*/].f_3 = 277.1949f;
			uParam0->f_146.f_82[2 /*102*/].f_22 = { 344.6448f, -1003.755f, -98.7875f };
			uParam0->f_146.f_82[2 /*102*/].f_25 = { -2.7747f, -1.6005f, 17.2117f };
			uParam0->f_146.f_82[2 /*102*/].f_29 = { 344.6427f, -1003.999f, -98.7826f };
			uParam0->f_146.f_82[2 /*102*/].f_32 = { -0.1925f, -1.5516f, 18.2611f };
			uParam0->f_146.f_82[2 /*102*/].f_59 = { 342.347f, -1003.119f, -97.9876f };
			uParam0->f_146.f_82[2 /*102*/].f_62 = { -27.0125f, -1.6193f, -66.8063f };
			uParam0->f_146.f_82[2 /*102*/].f_7 = { Vector(-99.095f, -1002.38f, 344.482f) + Vector(0.0058f, 0.066f, 0.0651f) };
			uParam0->f_146.f_82[2 /*102*/].f_10 = { 0f, 0f, -129.96f };
			uParam0->f_146.f_82[2 /*102*/].f_16 = { 344.6f, -1002.3f, -100.1962f };
			uParam0->f_146.f_82[2 /*102*/].f_19 = { 343.5f, -1002.3f, -98.1962f };
			uParam0->f_146.f_82[6 /*102*/].f_81 = { 341.9066f, -1001.67f, -99.233f };
			uParam0->f_146.f_82[0 /*102*/] = { 339.6112f, -996.2951f, -99.1962f };
			uParam0->f_146.f_82[0 /*102*/].f_3 = 10.8f;
			uParam0->f_146.f_82[0 /*102*/].f_7 = { 339.435f, -995.849f, -100.196f };
			uParam0->f_146.f_82[0 /*102*/].f_10 = { 0f, 0f, -169.2f };
			uParam0->f_146.f_82[0 /*102*/].f_22 = { 348.8181f, -993.7432f, -99.2265f };
			uParam0->f_146.f_82[0 /*102*/].f_25 = { -9.5524f, 0f, -143.8996f };
			uParam0->f_146.f_82[0 /*102*/].f_16 = { 339.3881f, -996.7233f, -100.1962f };
			uParam0->f_146.f_82[0 /*102*/].f_19 = { 340.2585f, -996.2639f, -98.19622f };
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
			uParam0->f_146.f_82[4 /*102*/].f_93 = { 348.1615f, -993.4734f, -100.6962f };
			uParam0->f_146.f_82[6 /*102*/] = { 342.6041f, -1001.584f, -100.1962f };
			uParam0->f_146.f_82[6 /*102*/].f_3 = 88.0775f;
			uParam0->f_146.f_82[6 /*102*/].f_7 = { Vector(-99.25f, -1001.646f, 341.9f) + Vector(-0.0027f, -0.0238f, 0.0066f) };
			uParam0->f_146.f_82[6 /*102*/].f_10 = { 0f, 0f, 90f };
			uParam0->f_146.f_82[6 /*102*/].f_22 = { 341.3749f, -1002.883f, -98.9319f };
			uParam0->f_146.f_82[6 /*102*/].f_25 = { -2.0018f, -0.0676f, -25.1089f };
			uParam0->f_146.f_82[6 /*102*/].f_59 = { 341.3749f, -1002.883f, -98.9319f };
			uParam0->f_146.f_82[6 /*102*/].f_62 = { -2.0018f, -0.0676f, -25.1089f };
			uParam0->f_146.f_82[6 /*102*/].f_16 = { 342f, -1001.549f, -100.1962f };
			uParam0->f_146.f_82[6 /*102*/].f_19 = { 343f, -1001.549f, -98.1962f };
			uParam0->f_146.f_1517.f_8 = { 346.7972f, -1004.445f, -100.1919f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, 180f };
			uParam0->f_146.f_1517 = { 346.796f, -1002.232f, -99.19f };
			uParam0->f_146.f_1517.f_3 = 178.66f;
			uParam0->f_146.f_1517.f_4 = { 346.55f, -1006.26f, -100.1962f };
			uParam0->f_146.f_1517.f_7 = 359.8999f;
			uParam0->f_146.f_1517.f_14 = { 346.2292f, -1000.979f, -99.19f };
			uParam0->f_146.f_1517.f_17 = -132.94f;
			uParam0->f_146.f_1517.f_18 = { 347.2401f, -1001.856f, -99.19f };
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
			uParam0->f_38[0 /*27*/].f_8 = { 264.5677f, -1000.625f, -100.0086f };
			uParam0->f_38[0 /*27*/].f_11 = 38.4697f;
			uParam0->f_146[0 /*12*/] = { 265.082f, -1000.701f, -100.0086f };
			uParam0->f_146[0 /*12*/].f_3 = { 265.0666f, -1002.635f, -97.25862f };
			uParam0->f_146[0 /*12*/].f_6 = 1.75f;
			uParam0->f_146[0 /*12*/].f_7 = 182.9622f;
			uParam0->f_146.f_37 = { 264.4842f, -997.0889f, -100.0086f };
			uParam0->f_146.f_40 = { 262.9771f, -999.9382f, -97.7223f };
			uParam0->f_146.f_43 = { 0f, 0f, 46.9484f };
			uParam0->f_146.f_46 = 50f;
			uParam0->f_146.f_47 = { 262.6717f, -1000.425f, -100.0087f };
			func_43(&(uParam0->f_146.f_57), iParam1);
			uParam0->f_146.f_50 = { 265.9362f, -1001.305f, -97.6834f };
			func_37(iParam1, &(uParam0->f_146.f_53), &(uParam0->f_146.f_56), -1);
			uParam0->f_146.f_82[1 /*102*/] = { 261.2055f, -1003.92f, -100.0086f };
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
			uParam0->f_146.f_82[0 /*102*/].f_16 = { 258.6503f, -995.9299f, -100.0086f };
			uParam0->f_146.f_82[0 /*102*/].f_19 = { 259.761f, -996.1004f, -98.00862f };
			uParam0->f_146.f_82[0 /*102*/].f_85 = 1;
			uParam0->f_146.f_82[3 /*102*/] = { 262.4687f, -999.5469f, -100.0086f };
			uParam0->f_146.f_82[3 /*102*/].f_3 = 187.4952f;
			uParam0->f_146.f_82[4 /*102*/] = { 254.3181f, -1000.806f, -98.9226f };
			uParam0->f_146.f_82[4 /*102*/].f_3 = 357.3586f;
			uParam0->f_146.f_82[4 /*102*/].f_4 = { 0.6f, 0.6f, 0.6f };
			uParam0->f_146.f_82[4 /*102*/].f_7 = { 254.847f, -1000.64f, -99.768f };
			uParam0->f_146.f_82[4 /*102*/].f_10 = { 0f, 0f, -180f };
			uParam0->f_146.f_82[4 /*102*/].f_22 = { 254.5649f, -1001.635f, -98.2143f };
			uParam0->f_146.f_82[4 /*102*/].f_25 = { -13.1864f, 0f, 14.3302f };
			uParam0->f_146.f_82[4 /*102*/].f_35 = { 254.0852f, -1001.056f, -97.9779f };
			uParam0->f_146.f_82[4 /*102*/].f_38 = { 8.8526f, -0.0221f, -37.4062f };
			uParam0->f_146.f_82[4 /*102*/].f_41 = { 254.2074f, -1001.658f, -98.3661f };
			uParam0->f_146.f_82[4 /*102*/].f_44 = { -2.5954f, -0.0719f, -0.3961f };
			uParam0->f_146.f_82[4 /*102*/].f_47 = { 254.2738f, -1001.01f, -97.76f };
			uParam0->f_146.f_82[4 /*102*/].f_50 = { -32.3906f, -0.0172f, 0.3708f };
			uParam0->f_146.f_82[4 /*102*/].f_53 = { 254.2738f, -1001.01f, -97.76f };
			uParam0->f_146.f_82[4 /*102*/].f_56 = { -32.3906f, -0.0172f, 0.3708f };
			uParam0->f_146.f_82[4 /*102*/].f_59 = { 256.8365f, -1001.02f, -98.767f };
			uParam0->f_146.f_82[4 /*102*/].f_62 = { -3.3968f, -0.0144f, 88.4273f };
			uParam0->f_146.f_82[4 /*102*/].f_65 = { 254.5308f, -1000.291f, -97.67236f };
			uParam0->f_146.f_82[4 /*102*/].f_68 = { -45f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_71 = { 254.5308f, -1000.291f, -97.67236f };
			uParam0->f_146.f_82[4 /*102*/].f_74 = { -45f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_16 = { 253.8433f, -1000.755f, -100f };
			uParam0->f_146.f_82[4 /*102*/].f_19 = { 257.2739f, -1000.765f, -97f };
			uParam0->f_146.f_82[4 /*102*/].f_86 = 2f;
			uParam0->f_146.f_82[4 /*102*/].f_87 = { 257.2896f, -1001.255f, -98.8587f };
			uParam0->f_146.f_82[4 /*102*/].f_90 = { 0f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_77 = { 255.2676f, -1000.978f, -100.0099f };
			uParam0->f_146.f_82[4 /*102*/].f_80 = 274.0441f;
			uParam0->f_146.f_82[4 /*102*/].f_93 = { 257.2361f, -1000.592f, -99.50992f };
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
			uParam0->f_146.f_1517 = { 265.425f, -1000.753f, -100.0086f };
			uParam0->f_146.f_1517.f_3 = 178.66f;
			uParam0->f_146.f_1517.f_4 = { 265.1576f, -1002.991f, -100.0086f };
			uParam0->f_146.f_1517.f_7 = 0.8739f;
			uParam0->f_146.f_1517.f_14 = { 264.8582f, -999.4998f, -100.0086f };
			uParam0->f_146.f_1517.f_17 = -132.94f;
			uParam0->f_146.f_1517.f_18 = { 265.8691f, -1000.377f, -100.0086f };
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
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0[1 /*6*/], 0f, Var1) };
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
	if (iVar2 && MISC::_GET_BASE_ELEMENT_METADATA(&Var0, &(Var0.f_3), iParam0, bVar1))
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
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 0:
			Var0 = { -3555.115f, 1473.013f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 1:
			Var0 = { -3147.049f, 2827.088f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 2:
			Var0 = { -3277.473f, 2159.85f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 3:
			Var0 = { -2822.419f, 4054.84f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 4:
			Var0 = { -3249.849f, 3704.681f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 5:
			Var0 = { -2383.193f, 4685.003f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 6:
			Var0 = { -3224.686f, -215.9825f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 7:
			Var0 = { -3447.876f, 291.9275f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 97f };
			break;
		
		case 8:
			Var0 = { -2713.098f, -528.3185f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -33f };
			break;
		
		case 9:
			Var0 = { -1981.618f, -1537.269f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 142f };
			break;
		
		case 10:
			Var0 = { -2100.817f, -2533.233f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -143f };
			break;
		
		case 11:
			Var0 = { -1599.642f, -1891.277f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 112f };
			break;
		
		case 12:
			Var0 = { -733.6151f, -3916.985f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -168f };
			break;
		
		case 13:
			Var0 = { -363.3534f, -3568.56f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 14:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 15:
			Var0 = { 1535.974f, -3061.877f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 62f };
			break;
		
		case 16:
			Var0 = { 2471.418f, -2430.93f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 12f };
			break;
		
		case 17:
			Var0 = { 2067.371f, -2813.01f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 18:
			Var0 = { 3021.088f, -1513.602f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 19:
			Var0 = { 3025.956f, -704.3854f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 20:
			Var0 = { 2961.863f, -2007.631f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 21:
			Var0 = { 3398.169f, 1958.521f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 77f };
			break;
		
		case 22:
			Var0 = { 3428.681f, 1202.06f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 23:
			Var0 = { 3787.83f, 2567.884f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 24:
			Var0 = { 4235.946f, 4004.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -118f };
			break;
		
		case 25:
			Var0 = { 4245.151f, 4595.375f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -68f };
			break;
		
		case 26:
			Var0 = { 4209.057f, 3392.705f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 27:
			Var0 = { 3738.81f, 5768.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -43f };
			break;
		
		case 28:
			Var0 = { 3472.966f, 6315.245f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -23f };
			break;
		
		case 29:
			Var0 = { 3693.468f, 5194.659f, 9.7027f };
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
			Var0 = { 1377.296f, 6863.23f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 33:
			Var0 = { -1169.36f, 6000.214f, 9.7027f };
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
			Var0 = { 50.6219f, -3312.563f, 9.7065f };
			Var0.f_3 = { 0f, 0f, 90.05f };
			break;
		
		case 38:
			Var0 = { -3556.677f, 738.4581f, 9.7065f };
			Var0.f_3 = { 0f, 0f, 0.05f };
			break;
		
		case 39:
			Var0 = { -1766.835f, 5334.093f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -9.95f };
			break;
		
		case 40:
			Var0 = { -3280.707f, -1580.809f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -12.45f };
			break;
		
		case 41:
			Var0 = { -833.0568f, -4809.808f, 9.7065f };
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
			*(uParam0[0 /*8*/]) = { 355.0766f, -998.9677f, -96.51934f };
			(uParam0[0 /*8*/])->f_3 = { 336.4037f, -998.4084f, -100.9239f };
			(uParam0[0 /*8*/])->f_6 = 15.75f;
			*(uParam0[1 /*8*/]) = { 347.1432f, -1013.496f, -100.4462f };
			(uParam0[1 /*8*/])->f_3 = { 347.1626f, -1003.188f, -96.91225f };
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
			*(uParam0[0 /*8*/]) = { 270.2482f, -1000.776f, -95.95466f };
			(uParam0[0 /*8*/])->f_3 = { 251.7831f, -1001.064f, -102.2478f };
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
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0[1 /*6*/], 0f, Var1) };
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
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
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
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
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
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
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
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
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
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
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
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
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
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
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
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
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
				Var0 = { -1384.538f, -475.8829f, 48.1f };
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
				Var0 = { -1378.994f, -477.2481f, 56.1f };
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
			uParam0->f_1742.f_20 = { 173.1406f, -1008.099f, -99.9999f };
			uParam0->f_1742.f_23 = 343.276f;
			uParam0->f_1742.f_16 = { 178.4598f, -1006.157f, -99.9999f };
			uParam0->f_1742.f_19 = 98.8495f;
			uParam0->f_1742.f_28[0 /*3*/] = { 171.4693f, -1003.677f, -99.9999f };
			uParam0->f_1742.f_62[0] = 178.4085f;
			uParam0->f_1742.f_28[1 /*3*/] = { 175.2003f, -1003.816f, -99.9999f };
			uParam0->f_1742.f_62[1] = 178.4085f;
			uParam0->f_1742.f_28[10 /*3*/] = { 170.7203f, -1007.513f, -99.9999f };
			uParam0->f_1742.f_62[10] = 255.2687f;
			uParam0->f_1742 = { 172.86f, -1007.823f, -100.2499f };
			uParam0->f_1742.f_3 = { 172.8513f, -1008.995f, -96.24992f };
			uParam0->f_1742.f_6 = 6.25f;
			uParam0->f_1742.f_7 = 188.1891f;
			uParam0->f_1742.f_139 = { 177.9457f, -1008.697f, -97.2447f };
			uParam0->f_1742.f_139.f_3 = { -25.359f, 2.3332f, 44.174f };
			uParam0->f_1742.f_139.f_6 = 50f;
			uParam0->f_1742.f_150 = { 172.7787f, -1003.21f, -99.9999f };
			func_52(&(uParam0->f_1742.f_153), 2);
			uParam0->f_1742.f_136 = { 177.9406f, -1008.594f, -97.7757f };
			uParam0->f_1742.f_8 = { 179.0661f, -1003.424f, -100.0622f };
			uParam0->f_1742.f_8.f_3 = { 179.089f, -1006.223f, -97.24995f };
			uParam0->f_1742.f_8.f_6 = 1.75f;
			uParam0->f_1742.f_8.f_7 = 354.2478f;
			uParam0->f_1742.f_149 = 1;
			uParam0->f_1742.f_161 = { 179.13f, -1003.859f, -98.766f };
			uParam0->f_1742.f_164 = { 90f, 0f, 0f };
			uParam0->f_1742.f_167 = { 173.259f, -1006.1f, -99.9999f };
			break;
		
		case 6:
			uParam0->f_33 = iParam1;
			uParam0->f_1742.f_20 = { 206.1946f, -1006.424f, -99.999f };
			uParam0->f_1742.f_23 = 11.222f;
			uParam0->f_1742.f_16 = { 206.7599f, -999.1566f, -100f };
			uParam0->f_1742.f_19 = 84.8064f;
			uParam0->f_1742.f_28[0 /*3*/] = { 193.1573f, -1003.332f, -99.9999f };
			uParam0->f_1742.f_62[0] = 0.0168f;
			uParam0->f_1742.f_28[1 /*3*/] = { 196.6948f, -1003.332f, -99.9999f };
			uParam0->f_1742.f_62[1] = 0.0168f;
			uParam0->f_1742.f_28[2 /*3*/] = { 200.1865f, -1003.332f, -99.9999f };
			uParam0->f_1742.f_62[2] = 0.0168f;
			uParam0->f_1742.f_28[3 /*3*/] = { 203.8078f, -1003.332f, -99.9999f };
			uParam0->f_1742.f_62[3] = 0.0168f;
			uParam0->f_1742.f_28[4 /*3*/] = { 193.5414f, -997.6031f, -99.9999f };
			uParam0->f_1742.f_62[4] = 211.0307f;
			uParam0->f_1742.f_28[5 /*3*/] = { 198.0267f, -997.2191f, -99.9999f };
			uParam0->f_1742.f_62[5] = 206.5741f;
			uParam0->f_1742.f_28[10 /*3*/] = { 201.0628f, -995.7986f, -99.9999f };
			uParam0->f_1742.f_62[10] = 191.848f;
			uParam0->f_1742 = { 198.3915f, -1007.091f, -100.25f };
			uParam0->f_1742.f_3 = { 198.4052f, -1008.852f, -96.25018f };
			uParam0->f_1742.f_6 = 13.75f;
			uParam0->f_1742.f_7 = 186.5288f;
			uParam0->f_1742.f_139 = { 190.7409f, -1007.672f, -97.4883f };
			uParam0->f_1742.f_139.f_3 = { -21.4541f, -6.6235f, -45.6924f };
			uParam0->f_1742.f_139.f_6 = 50f;
			uParam0->f_1742.f_150 = { 198.6071f, -1000.536f, -100f };
			func_52(&(uParam0->f_1742.f_153), 6);
			uParam0->f_1742.f_136 = { 207.1707f, -1007.917f, -97.6376f };
			uParam0->f_1742.f_8 = { 207.8867f, -999.075f, -100.25f };
			uParam0->f_1742.f_8.f_3 = { 207.0936f, -999.0939f, -97.49996f };
			uParam0->f_1742.f_8.f_6 = 1.75f;
			uParam0->f_1742.f_8.f_7 = 272.9543f;
			uParam0->f_1742.f_149 = 2;
			uParam0->f_1742.f_161 = { 208.69f, -99.051f, -99f };
			uParam0->f_1742.f_164 = { 90f, 0f, 0f };
			uParam0->f_1742.f_167 = { 203.25f, -997.1685f, -99.999f };
			break;
		
		case 10:
			uParam0->f_33 = iParam1;
			uParam0->f_1742.f_20 = { 229.2159f, -1005.104f, -99.9999f };
			uParam0->f_1742.f_23 = 352.7715f;
			uParam0->f_1742.f_16 = { 237.6044f, -1004.748f, -99.9999f };
			uParam0->f_1742.f_19 = 80.2776f;
			uParam0->f_1742.f_28[0 /*3*/] = { 224.3354f, -980.8477f, -99.9999f };
			uParam0->f_1742.f_62[0] = 241.3985f;
			uParam0->f_1742.f_28[1 /*3*/] = { 224.3354f, -986.3477f, -99.9999f };
			uParam0->f_1742.f_62[1] = 241.3985f;
			uParam0->f_1742.f_28[2 /*3*/] = { 224.3354f, -991.8477f, -99.9999f };
			uParam0->f_1742.f_62[2] = 241.3985f;
			uParam0->f_1742.f_28[3 /*3*/] = { 224.3354f, -997.3477f, -99.9999f };
			uParam0->f_1742.f_62[3] = 241.3985f;
			uParam0->f_1742.f_28[4 /*3*/] = { 224.3354f, -1002.848f, -99.9999f };
			uParam0->f_1742.f_62[4] = 241.3985f;
			uParam0->f_1742.f_28[5 /*3*/] = { 232.6471f, -980.8477f, -99.9999f };
			uParam0->f_1742.f_62[5] = 116.3088f;
			uParam0->f_1742.f_28[6 /*3*/] = { 232.6471f, -986.3477f, -99.9999f };
			uParam0->f_1742.f_62[6] = 116.3088f;
			uParam0->f_1742.f_28[7 /*3*/] = { 232.6471f, -991.8477f, -99.9999f };
			uParam0->f_1742.f_62[7] = 116.3088f;
			uParam0->f_1742.f_28[8 /*3*/] = { 232.6471f, -997.3477f, -99.9999f };
			uParam0->f_1742.f_62[8] = 116.3088f;
			uParam0->f_1742.f_28[9 /*3*/] = { 232.6471f, -1002.848f, -99.9999f };
			uParam0->f_1742.f_62[9] = 116.3088f;
			uParam0->f_1742.f_28[10 /*3*/] = { 223.414f, -977.0094f, -99.9999f };
			uParam0->f_1742.f_62[10] = 259.4501f;
			uParam0->f_1742 = { 228.4083f, -1006.032f, -100.2499f };
			uParam0->f_1742.f_3 = { 228.3396f, -1011.415f, -95.77734f };
			uParam0->f_1742.f_6 = 13.75f;
			uParam0->f_1742.f_7 = 177.8521f;
			uParam0->f_1742.f_139 = { 228.277f, -1007.014f, -96.7812f };
			uParam0->f_1742.f_139.f_3 = { -22.3788f, -1.5101f, -0.1088f };
			uParam0->f_1742.f_139.f_6 = 50f;
			uParam0->f_1742.f_150 = { 227.8602f, -991.1093f, -99.9999f };
			func_52(&(uParam0->f_1742.f_153), 10);
			uParam0->f_1742.f_136 = { 237.4485f, -1006.803f, -98.3606f };
			uParam0->f_1742.f_8 = { 237.9517f, -1004.842f, -100.2499f };
			uParam0->f_1742.f_8.f_3 = { 239.1281f, -1004.828f, -97.26435f };
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
			*uParam0 = { 175.0434f, -998.7965f, -100.2256f };
			uParam0->f_3 = { 175.0878f, -1009.004f, -95.99992f };
			uParam0->f_6 = 14f;
			break;
		
		case 6:
			*uParam0 = { 212.9084f, -999.6776f, -99.99996f };
			uParam0->f_3 = { 189.6844f, -1000.068f, -95.2507f };
			uParam0->f_6 = 16.75f;
			break;
		
		case 10:
			*uParam0 = { 230.0094f, -1009.124f, -100.6539f };
			uParam0->f_3 = { 230.5939f, -964.022f, -94.53618f };
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
			uParam0->f_38[0 /*27*/] = { -778.3268f, 313.4883f, 84.23003f };
			uParam0->f_38[0 /*27*/].f_3 = { -769.4003f, 313.4886f, 87.72968f };
			uParam0->f_38[0 /*27*/].f_6 = 2.75f;
			uParam0->f_38[0 /*27*/].f_7 = 6.2405f;
			uParam0->f_38[0 /*27*/].f_23 = { -778.7825f, 312.6918f, 84.69943f };
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
			uParam0->f_38[1 /*27*/].f_23 = { -790.3141f, 308.086f, 84.70361f };
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
			uParam0->f_24 = { -213.5606f, -1073.008f, 32.9946f };
			uParam0->f_24.f_3 = { 22.7554f, 0f, 28.5746f };
			uParam0->f_24.f_6 = 50.0029f;
			uParam0->f_13 = { -258.657f, -979.0373f, 30.2196f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -263.6241f, -971.4352f, 30.21947f };
			uParam0->f_38[0 /*27*/].f_3 = { -259.7462f, -969.7329f, 33.21964f };
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
			uParam0->f_38[1 /*27*/] = { -283.6628f, -994.5131f, 22.88622f };
			uParam0->f_38[1 /*27*/].f_3 = { -278.3134f, -996.5045f, 26.92348f };
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
			uParam0->f_1742.f_24 = { -246.8039f, -1002.965f, 28.0879f };
			uParam0->f_1742.f_27 = 317.9801f;
			uParam0->f_1742.f_108[0 /*3*/] = { -275.3677f, -999.8269f, 24.4617f };
			uParam0->f_1742.f_124[0] = 250.0199f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -267.1935f, -1002.824f, 25.8638f };
			uParam0->f_1742.f_124[1] = 250.0199f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -259.9177f, -1005.336f, 27.0322f };
			uParam0->f_1742.f_124[2] = 250.0199f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -253.0097f, -1007.822f, 28.0031f };
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
			*uParam0 = { -1438.141f, -546.4819f, 33.7424f };
			uParam0->f_3[0 /*3*/] = { -1443.094f, -544.7684f, 33.7424f };
			uParam0->f_3[1 /*3*/] = { -1456.146f, -503.6975f, 31.125f };
			uParam0->f_24 = { -1392.074f, -570.8373f, 31.4774f };
			uParam0->f_24.f_3 = { 30.5301f, 0f, 64.2307f };
			uParam0->f_24.f_6 = 35.9982f;
			uParam0->f_13 = { -1437.538f, -548.4748f, 33.7424f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1443.327f, -544.2654f, 33.24239f };
			uParam0->f_38[0 /*27*/].f_3 = { -1442.532f, -545.398f, 36.74239f };
			uParam0->f_38[0 /*27*/].f_6 = 3f;
			uParam0->f_38[0 /*27*/].f_7 = 33.6492f;
			uParam0->f_38[0 /*27*/].f_23 = { -1441.437f, -543.9649f, 33.74239f };
			uParam0->f_38[0 /*27*/].f_16 = { -1441.855f, -543.4296f, 35.2561f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 34.3f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1441.411f, -546.8956f, 33.7424f };
			uParam0->f_146[0 /*12*/].f_11 = 228.9348f;
			uParam0->f_1922[0 /*9*/] = { -1440.397f, -543.9622f, 38.4101f };
			uParam0->f_1922[0 /*9*/].f_3 = { -50.8306f, 0f, 146.0578f };
			uParam0->f_1922[0 /*9*/].f_6 = 66.686f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1454.587f, -504.5946f, 30.90982f };
			uParam0->f_38[1 /*27*/].f_3 = { -1456.92f, -501.0045f, 34.77502f };
			uParam0->f_38[1 /*27*/].f_6 = 7.75f;
			uParam0->f_38[1 /*27*/].f_7 = 215.8951f;
			uParam0->f_38[1 /*27*/].f_23 = { -1453.772f, -499.8347f, 31.65348f };
			uParam0->f_38[1 /*27*/].f_16 = { -1453.515f, -500.2265f, 33.0628f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -145.7f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1461.336f, -504.5396f, 34.18f };
			uParam0->f_1922[1 /*9*/].f_3 = { -33.3185f, 0f, -101.1299f };
			uParam0->f_1922[1 /*9*/].f_6 = 79.7441f;
			uParam0->f_1742.f_24 = { -1461.478f, -502.4903f, 31.9616f };
			uParam0->f_1742.f_27 = 344.4053f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1457.942f, -500.4242f, 31.5223f };
			uParam0->f_1742.f_124[0] = 34.5619f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1456.427f, -494.6811f, 32.0311f };
			uParam0->f_1742.f_124[1] = 327.6367f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1451.832f, -489.7961f, 33.1993f };
			uParam0->f_1742.f_124[2] = 303.4561f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1460.209f, -490.6057f, 32.3611f };
			uParam0->f_1742.f_124[3] = 305.0743f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1454.507f, -486.7246f, 33.346f };
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
			uParam0->f_38[0 /*27*/] = { -916.7118f, -448.5001f, 38.83544f };
			uParam0->f_38[0 /*27*/].f_3 = { -912.639f, -456.8022f, 41.34456f };
			uParam0->f_38[0 /*27*/].f_6 = 1.25f;
			uParam0->f_38[0 /*27*/].f_7 = 283.8998f;
			uParam0->f_38[0 /*27*/].f_23 = { -913.5948f, -456.4432f, 38.59986f };
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
			uParam0->f_38[1 /*27*/] = { -820.2496f, -436.8228f, 35.22919f };
			uParam0->f_38[1 /*27*/].f_3 = { -824.7759f, -439.0703f, 39.39095f };
			uParam0->f_38[1 /*27*/].f_6 = 8.75f;
			uParam0->f_38[1 /*27*/].f_7 = 303.8392f;
			uParam0->f_38[1 /*27*/].f_23 = { -819.691f, -440.6334f, 35.63988f };
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
			uParam0->f_38[0 /*27*/] = { -47.95183f, -585.8011f, 36.45932f };
			uParam0->f_38[0 /*27*/].f_3 = { -46.80829f, -586.2078f, 40.02329f };
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
			uParam0->f_38[1 /*27*/] = { -29.23775f, -623.1992f, 33.63252f };
			uParam0->f_38[1 /*27*/].f_3 = { -34.74736f, -621.2883f, 38.78943f };
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
			uParam0->f_38[0 /*27*/] = { -932.0299f, -383.2085f, 37.46125f };
			uParam0->f_38[0 /*27*/].f_3 = { -933.4816f, -383.9475f, 40.96125f };
			uParam0->f_38[0 /*27*/].f_6 = 2.75f;
			uParam0->f_38[0 /*27*/].f_7 = 294.3158f;
			uParam0->f_38[0 /*27*/].f_23 = { -934.8823f, -380.3759f, 37.96125f };
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
			uParam0->f_38[1 /*27*/] = { -878.4114f, -358.7202f, 34.31583f };
			uParam0->f_38[1 /*27*/].f_3 = { -875.6465f, -363.7974f, 38.61643f };
			uParam0->f_38[1 /*27*/].f_6 = 5.5f;
			uParam0->f_38[1 /*27*/].f_7 = 25.4424f;
			uParam0->f_38[1 /*27*/].f_23 = { -875.5203f, -359.5458f, 34.85448f };
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
			uParam0->f_38[0 /*27*/] = { -622.614f, 38.36953f, 42.70671f };
			uParam0->f_38[0 /*27*/].f_3 = { -613.7298f, 38.36672f, 45.55016f };
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
			uParam0->f_38[1 /*27*/] = { -629.8716f, 56.23208f, 42.22496f };
			uParam0->f_38[1 /*27*/].f_3 = { -634.5947f, 56.23968f, 47.22496f };
			uParam0->f_38[1 /*27*/].f_6 = 10.75f;
			uParam0->f_38[1 /*27*/].f_7 = 272.9018f;
			uParam0->f_38[1 /*27*/].f_23 = { -631.3143f, 52.52833f, 42.72496f };
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
			uParam0->f_38[0 /*27*/] = { 286.7726f, -159.5756f, 63.18133f };
			uParam0->f_38[0 /*27*/].f_3 = { 286.0667f, -161.5137f, 66.6778f };
			uParam0->f_38[0 /*27*/].f_6 = 2.5f;
			uParam0->f_38[0 /*27*/].f_7 = 250.5252f;
			uParam0->f_38[0 /*27*/].f_23 = { 285.2146f, -162.0428f, 63.62207f };
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
			uParam0->f_38[1 /*27*/] = { 286.9199f, -145.6808f, 63.5647f };
			uParam0->f_38[1 /*27*/].f_3 = { 284.9288f, -151.1508f, 67.92525f };
			uParam0->f_38[1 /*27*/].f_6 = 5.25f;
			uParam0->f_38[1 /*27*/].f_7 = 250.4756f;
			uParam0->f_38[1 /*27*/].f_23 = { 285.9212f, -144.6046f, 64.08031f };
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
			uParam0->f_38[0 /*27*/].f_3 = { 4.666537f, 37.20284f, 73.37553f };
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
			uParam0->f_38[1 /*27*/] = { -15.47612f, 44.57702f, 69.84895f };
			uParam0->f_38[1 /*27*/].f_3 = { -4.834036f, 40.70276f, 73.87646f };
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
			uParam0->f_38[0 /*27*/] = { 10.32504f, 80.74281f, 77.24245f };
			uParam0->f_38[0 /*27*/].f_3 = { 8.381888f, 81.45248f, 80.49538f };
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
			uParam0->f_38[1 /*27*/] = { 28.16142f, 75.67027f, 73.52016f };
			uParam0->f_38[1 /*27*/].f_3 = { 22.64169f, 77.67749f, 77.29105f };
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
			uParam0->f_38[0 /*27*/] = { -510.4756f, 107.9882f, 60.59078f };
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
			uParam0->f_38[1 /*27*/] = { -495.9238f, 87.28843f, 54.63787f };
			uParam0->f_38[1 /*27*/].f_3 = { -496.0893f, 81.49071f, 58.33294f };
			uParam0->f_38[1 /*27*/].f_6 = 3.75f;
			uParam0->f_38[1 /*27*/].f_7 = 272.1017f;
			uParam0->f_38[1 /*27*/].f_23 = { -497.0595f, 78.38213f, 54.88129f };
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
			uParam0->f_38[0 /*27*/] = { -197.096f, 85.23809f, 67.55541f };
			uParam0->f_38[0 /*27*/].f_3 = { -198.5943f, 85.55336f, 71.30595f };
			uParam0->f_38[0 /*27*/].f_6 = 2.75f;
			uParam0->f_38[0 /*27*/].f_7 = 171.9653f;
			uParam0->f_38[0 /*27*/].f_23 = { -198.9633f, 86.33958f, 68.75433f };
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
			uParam0->f_38[1 /*27*/] = { -211.7682f, 31.64632f, 58.19961f };
			uParam0->f_38[1 /*27*/].f_3 = { -209.5516f, 43.9165f, 62.87999f };
			uParam0->f_38[1 /*27*/].f_6 = 5f;
			uParam0->f_38[1 /*27*/].f_7 = 267.3955f;
			uParam0->f_38[1 /*27*/].f_23 = { -212.2958f, 32.53296f, 58.82444f };
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
			uParam0->f_38[0 /*27*/] = { -627.3895f, 171.0531f, 62.46693f };
			uParam0->f_38[0 /*27*/].f_3 = { -627.3917f, 168.3466f, 59.97893f };
			uParam0->f_38[0 /*27*/].f_6 = 2.25f;
			uParam0->f_38[0 /*27*/].f_7 = 277.959f;
			uParam0->f_38[0 /*27*/].f_23 = { -628.056f, 168.0867f, 60.15696f };
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
			uParam0->f_38[1 /*27*/] = { -625.9822f, 155.9878f, 59.13111f };
			uParam0->f_38[1 /*27*/].f_3 = { -625.9763f, 148.7176f, 55.12997f };
			uParam0->f_38[1 /*27*/].f_6 = 2.5f;
			uParam0->f_38[1 /*27*/].f_7 = 274.2654f;
			uParam0->f_38[1 /*27*/].f_23 = { -626.4587f, 149.2809f, 55.50729f };
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
			*uParam0 = { -973.3757f, -1429.425f, 6.6791f };
			uParam0->f_3[0 /*3*/] = { -970.4616f, -1431.552f, 6.6791f };
			uParam0->f_3[1 /*3*/] = { -979.8791f, -1449.725f, 3.7352f };
			uParam0->f_24 = { -1005.595f, -1485.397f, 16.3224f };
			uParam0->f_24.f_3 = { -0.7255f, 0f, -31.8818f };
			uParam0->f_24.f_6 = 38.7981f;
			uParam0->f_13 = { -990.0446f, -1438.654f, 4.0512f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -969.6593f, -1429.292f, 9.274211f };
			uParam0->f_38[0 /*27*/].f_3 = { -968.3226f, -1432.8f, 5.267247f };
			uParam0->f_38[0 /*27*/].f_6 = 2.5f;
			uParam0->f_38[0 /*27*/].f_7 = 288.7475f;
			uParam0->f_38[0 /*27*/].f_23 = { -968.9998f, -1433.182f, 6.67908f };
			uParam0->f_38[0 /*27*/].f_16 = { -968.2812f, -1432.925f, 8.1858f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 70f };
			uParam0->f_38[0 /*27*/].f_22 = 1;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -975.5323f, -1435.457f, 6.6791f };
			uParam0->f_146[0 /*12*/].f_11 = 114.4599f;
			uParam0->f_1922[0 /*9*/] = { -974.1971f, -1427.844f, 9.1311f };
			uParam0->f_1922[0 /*9*/].f_3 = { -10.871f, 0f, -136.918f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -979.5995f, -1446.877f, 6.075722f };
			uParam0->f_38[1 /*27*/].f_3 = { -977.9403f, -1451.485f, 3.582479f };
			uParam0->f_38[1 /*27*/].f_6 = 2.25f;
			uParam0->f_38[1 /*27*/].f_7 = 290.9057f;
			uParam0->f_38[1 /*27*/].f_23 = { -980.5159f, -1447.772f, 3.72778f };
			uParam0->f_38[1 /*27*/].f_16 = { -980.7506f, -1447.021f, 4.5223f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -70f };
			uParam0->f_38[1 /*27*/].f_22 = 3;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -977.2012f, -1452.591f, 6.194f };
			uParam0->f_1922[1 /*9*/].f_3 = { -22.1332f, 1.2127f, 61.7078f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -988.2418f, -1447.773f, 4.1853f };
			uParam0->f_1742.f_27 = 119.0613f;
			uParam0->f_1742.f_108[0 /*3*/] = { -992.6162f, -1425.061f, 4.0163f };
			uParam0->f_1742.f_124[0] = 108.4024f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -998.91f, -1427.121f, 4.0575f };
			uParam0->f_1742.f_124[1] = 109.1714f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1003.862f, -1434.213f, 4.0621f };
			uParam0->f_1742.f_124[2] = 145.2133f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1003.106f, -1424.053f, 4.0372f };
			uParam0->f_1742.f_124[3] = 109.7396f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1010.441f, -1426.668f, 4.0384f };
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
			uParam0->f_38[0 /*27*/] = { -828.7973f, -862.9904f, 21.95895f };
			uParam0->f_38[0 /*27*/].f_3 = { -833.8962f, -862.9568f, 19.44106f };
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
			uParam0->f_38[1 /*27*/] = { -763.5058f, -874.874f, 23.62881f };
			uParam0->f_38[1 /*27*/].f_3 = { -763.5212f, -866.5589f, 19.64355f };
			uParam0->f_38[1 /*27*/].f_6 = 2.5f;
			uParam0->f_38[1 /*27*/].f_7 = 91.3542f;
			uParam0->f_38[1 /*27*/].f_23 = { -762.8984f, -866.1638f, 19.91171f };
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
			uParam0->f_38[0 /*27*/].f_3 = { -763.8939f, -750.9608f, 25.51395f };
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
			uParam0->f_38[1 /*27*/] = { -791.6463f, -798.5154f, 23.02112f };
			uParam0->f_38[1 /*27*/].f_3 = { -781.8895f, -798.5438f, 19.49486f };
			uParam0->f_38[1 /*27*/].f_6 = 4f;
			uParam0->f_38[1 /*27*/].f_7 = 332.1913f;
			uParam0->f_38[1 /*27*/].f_23 = { -782.696f, -799.9818f, 19.759f };
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
			uParam0->f_38[0 /*27*/] = { -40.1706f, -58.13974f, 65.36941f };
			uParam0->f_38[0 /*27*/].f_3 = { -40.6294f, -59.63993f, 62.3827f };
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
			uParam0->f_38[1 /*27*/].f_3 = { -28.90347f, -65.97524f, 58.49137f };
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
			uParam0->f_38[0 /*27*/] = { -200.399f, 186.916f, 81.71852f };
			uParam0->f_38[0 /*27*/].f_3 = { -200.399f, 185.5356f, 75.23538f };
			uParam0->f_38[0 /*27*/].f_6 = 2f;
			uParam0->f_38[0 /*27*/].f_7 = 271.6089f;
			uParam0->f_38[0 /*27*/].f_23 = { -200.9272f, 185.1394f, 79.31755f };
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
			uParam0->f_38[1 /*27*/] = { -200.468f, 196.4228f, 82.00661f };
			uParam0->f_38[1 /*27*/].f_3 = { -200.399f, 189.0262f, 77.97586f };
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
			uParam0->f_24 = { -813.5714f, -1050.236f, 23.4961f };
			uParam0->f_24.f_3 = { -2.8056f, 0f, -3.2598f };
			uParam0->f_24.f_6 = 18.4201f;
			uParam0->f_13 = { -816.0616f, -992.5058f, 12.4806f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -812.9588f, -978.9105f, 16.24657f };
			uParam0->f_38[0 /*27*/].f_3 = { -811.21f, -981.4077f, 12.69891f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 306.7349f;
			uParam0->f_38[0 /*27*/].f_23 = { -813.5463f, -979.8727f, 13.18758f };
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
			uParam0->f_38[1 /*27*/] = { -800.3867f, -981.6565f, 12.04055f };
			uParam0->f_38[1 /*27*/].f_3 = { -802.4772f, -978.6157f, 15.51671f };
			uParam0->f_38[1 /*27*/].f_6 = 6.75f;
			uParam0->f_38[1 /*27*/].f_7 = 44.5014f;
			uParam0->f_38[1 /*27*/].f_23 = { -802.6703f, -982.9598f, 12.21205f };
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
			uParam0->f_38[0 /*27*/] = { -662.4266f, -854.6357f, 25.98962f };
			uParam0->f_38[0 /*27*/].f_3 = { -662.4232f, -853.7543f, 23.2082f };
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
			uParam0->f_38[1 /*27*/] = { -664.9603f, -856.6751f, 26.88633f };
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
			*uParam0 = { -1534.025f, -324.5247f, 46.5237f };
			uParam0->f_3[0 /*3*/] = { -1533.916f, -326.4442f, 46.9108f };
			uParam0->f_3[1 /*3*/] = { -1529.016f, -344.6623f, 44.3427f };
			uParam0->f_24 = { -1548.386f, -299.5765f, 56.3053f };
			uParam0->f_24.f_3 = { -6.1519f, 0f, -133.5596f };
			uParam0->f_24.f_6 = 41.7577f;
			uParam0->f_13 = { -1540.297f, -322.4765f, 46.3136f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1532.288f, -326.3052f, 49.22947f };
			uParam0->f_38[0 /*27*/].f_3 = { -1534.089f, -328.0757f, 46.22101f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 237.6246f;
			uParam0->f_38[0 /*27*/].f_23 = { -1532.792f, -325.7376f, 46.91117f };
			uParam0->f_38[0 /*27*/].f_16 = { -1532.43f, -325.3266f, 48.5029f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -45f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1535.193f, -325.2051f, 46.4857f };
			uParam0->f_146[0 /*12*/].f_11 = 51.5003f;
			uParam0->f_1922[0 /*9*/] = { -1536.047f, -328.864f, 50.8195f };
			uParam0->f_1922[0 /*9*/].f_3 = { -41.4352f, 0f, -18.8051f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1530.623f, -341.288f, 47.99068f };
			uParam0->f_38[1 /*27*/].f_3 = { -1525.619f, -346.0659f, 43.99908f };
			uParam0->f_38[1 /*27*/].f_6 = 1.5f;
			uParam0->f_38[1 /*27*/].f_7 = 324.1467f;
			uParam0->f_38[1 /*27*/].f_23 = { -1526.119f, -345.6634f, 44.32087f };
			uParam0->f_38[1 /*27*/].f_16 = { -1525.825f, -346.0658f, 45.7772f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -135f };
			uParam0->f_38[1 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1532.078f, -340.942f, 47.9153f };
			uParam0->f_1922[1 /*9*/].f_3 = { -26.7709f, 0.8689f, -155.4644f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -1533.735f, -342.6815f, 44.6768f };
			uParam0->f_1742.f_27 = 131.1871f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1531.969f, -344.8956f, 44.4344f };
			uParam0->f_1742.f_124[0] = 123.1062f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1538.738f, -348.5782f, 44.6988f };
			uParam0->f_1742.f_124[1] = 119.3949f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1528.724f, -347.6192f, 44.0972f };
			uParam0->f_1742.f_124[2] = 145.9691f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1533.385f, -355.9714f, 43.7891f };
			uParam0->f_1742.f_124[3] = 152.8662f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1536.266f, -352.611f, 44.1812f };
			uParam0->f_1742.f_124[4] = 135.3279f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 22:
			*uParam0 = { -1561.381f, -412.1974f, 41.389f };
			uParam0->f_3[0 /*3*/] = { -1562.949f, -406.2817f, 41.389f };
			uParam0->f_3[1 /*3*/] = { -1557.401f, -400.0025f, 40.9881f };
			uParam0->f_24 = { -1549.536f, -453.3481f, 56.7394f };
			uParam0->f_24.f_3 = { -6.3982f, 0f, 10.7246f };
			uParam0->f_24.f_6 = 34.3497f;
			uParam0->f_13 = { -1556.617f, -417.2538f, 41.1883f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1564.903f, -406.1853f, 43.81025f };
			uParam0->f_38[0 /*27*/].f_3 = { -1563.757f, -404.7879f, 41.28488f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 53.1375f;
			uParam0->f_38[0 /*27*/].f_23 = { -1562.454f, -404.2675f, 41.38898f };
			uParam0->f_38[0 /*27*/].f_16 = { -1562.817f, -403.8937f, 43.0028f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 50f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1560.323f, -409.2578f, 41.389f };
			uParam0->f_146[0 /*12*/].f_11 = 216.3644f;
			uParam0->f_1922[0 /*9*/] = { -1566.96f, -415.1502f, 46.0548f };
			uParam0->f_1922[0 /*9*/].f_3 = { -29.7021f, 0f, -70.8796f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1560.775f, -401.2273f, 44.12476f };
			uParam0->f_38[1 /*27*/].f_3 = { -1556.795f, -396.4833f, 40.57999f };
			uParam0->f_38[1 /*27*/].f_6 = 2.5f;
			uParam0->f_38[1 /*27*/].f_7 = 48.7978f;
			uParam0->f_38[1 /*27*/].f_23 = { -1556.072f, -396.7669f, 40.98813f };
			uParam0->f_38[1 /*27*/].f_16 = { -1556.446f, -396.3038f, 42.5343f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 50f };
			uParam0->f_38[1 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1552.687f, -398.0967f, 44.8597f };
			uParam0->f_1922[1 /*9*/].f_3 = { -30.5051f, 2.4603f, 165.9363f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -1551.265f, -399.6432f, 40.9881f };
			uParam0->f_1742.f_27 = 221.7628f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1555.492f, -401.5921f, 40.9881f };
			uParam0->f_1742.f_124[0] = 229.0269f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1550.09f, -406.281f, 40.9881f };
			uParam0->f_1742.f_124[1] = 229.035f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1548.697f, -401.6271f, 40.9881f };
			uParam0->f_1742.f_124[2] = 257.9825f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1542.325f, -399.0072f, 40.9881f };
			uParam0->f_1742.f_124[3] = 292.403f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1543.977f, -405.3359f, 40.989f };
			uParam0->f_1742.f_124[4] = 291.6289f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 23:
			*uParam0 = { -1608.851f, -429.184f, 39.439f };
			uParam0->f_3[0 /*3*/] = { -1606.781f, -431.8483f, 39.4372f };
			uParam0->f_3[1 /*3*/] = { -1606.729f, -448.6675f, 37.1799f };
			uParam0->f_24 = { -1616.953f, -505.0326f, 53.6363f };
			uParam0->f_24.f_3 = { -6.7901f, 0f, -19.8142f };
			uParam0->f_24.f_6 = 34.4399f;
			uParam0->f_13 = { -1614.846f, -425.6327f, 39.3947f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1604.96f, -431.835f, 41.95771f };
			uParam0->f_38[0 /*27*/].f_3 = { -1606.788f, -434.0118f, 38.44287f };
			uParam0->f_38[0 /*27*/].f_6 = 2f;
			uParam0->f_38[0 /*27*/].f_7 = 232.2676f;
			uParam0->f_38[0 /*27*/].f_23 = { -1607.479f, -433.7236f, 39.43241f };
			uParam0->f_38[0 /*27*/].f_16 = { -1607.04f, -434.1056f, 41.0649f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -130f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1609.212f, -429.7664f, 39.4372f };
			uParam0->f_146[0 /*12*/].f_11 = 55.7531f;
			uParam0->f_1922[0 /*9*/] = { -1604.806f, -429.8766f, 44.8098f };
			uParam0->f_1922[0 /*9*/].f_3 = { -48.1096f, 0f, 102.1529f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1608.379f, -446.1646f, 36.55541f };
			uParam0->f_38[1 /*27*/].f_3 = { -1603.769f, -450.0924f, 40.71634f };
			uParam0->f_38[1 /*27*/].f_6 = 2.5f;
			uParam0->f_38[1 /*27*/].f_7 = 314.7102f;
			uParam0->f_38[1 /*27*/].f_23 = { -1604.147f, -449.441f, 37.20527f };
			uParam0->f_38[1 /*27*/].f_16 = { -1603.724f, -449.8294f, 38.7276f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -130f };
			uParam0->f_38[1 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1603.83f, -449.2337f, 40.259f };
			uParam0->f_1922[1 /*9*/].f_3 = { -35.7033f, -0.9669f, 99.5657f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -1607.45f, -456.7893f, 36.8592f };
			uParam0->f_1742.f_27 = 148.0527f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1607.822f, -450.3613f, 37.1359f };
			uParam0->f_1742.f_124[0] = 139.9644f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1609.779f, -458.7872f, 36.8884f };
			uParam0->f_1742.f_124[1] = 168.1596f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1613.238f, -456.8185f, 37.0621f };
			uParam0->f_1742.f_124[2] = 140.1804f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1617.052f, -454.571f, 37.3955f };
			uParam0->f_1742.f_124[3] = 112.6241f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1621.3f, -453.1793f, 37.4966f };
			uParam0->f_1742.f_124[4] = 48.5007f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 24:
			uParam0->f_3[0 /*3*/] = { 963.4199f, -1022.13f, 39.8475f };
			uParam0->f_24 = { 1002.128f, -1023.431f, 49.5466f };
			uParam0->f_24.f_3 = { -2.4589f, 0f, 88.9038f };
			uParam0->f_24.f_6 = 36.2121f;
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 961.8676f, -1022.555f, 39.34748f };
			uParam0->f_38[0 /*27*/].f_3 = { 965.0557f, -1022.582f, 44.09748f };
			uParam0->f_38[0 /*27*/].f_6 = 22.5f;
			uParam0->f_38[0 /*27*/].f_7 = 80.8479f;
			uParam0->f_38[0 /*27*/].f_23 = { 964.2448f, -1022.683f, 39.84748f };
			uParam0->f_38[0 /*27*/].f_16 = { 963.2421f, -1022.59f, 41.5091f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 90f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			*uParam0 = { 965.1798f, -1031.32f, 39.8384f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 10;
			uParam0->f_1742.f_24 = { 966.2585f, -1010.017f, 40.0476f };
			uParam0->f_1742.f_27 = 263.2577f;
			uParam0->f_1742.f_108[0 /*3*/] = { 966.338f, -1031.135f, 39.839f };
			uParam0->f_1742.f_124[0] = 266.5586f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 967.1743f, -1025.61f, 39.8475f };
			uParam0->f_1742.f_124[1] = 270.8348f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 967.6329f, -1020.004f, 39.8475f };
			uParam0->f_1742.f_124[2] = 270.4741f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 966.9617f, -1013.71f, 39.8475f };
			uParam0->f_1742.f_124[3] = 271.1738f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 965.698f, -1037.592f, 39.8303f };
			uParam0->f_1742.f_124[4] = 263.0311f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 25:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 896.3395f, -889.294f, 26.00315f };
			uParam0->f_38[0 /*27*/].f_3 = { 894.2404f, -889.2759f, 30.36714f };
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
			uParam0->f_38[0 /*27*/] = { 817.637f, -926.1711f, 25.39701f };
			uParam0->f_38[0 /*27*/].f_3 = { 817.6722f, -923.8012f, 29.42732f };
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
			uParam0->f_38[0 /*27*/] = { 758.1571f, -755.4667f, 25.43073f };
			uParam0->f_38[0 /*27*/].f_3 = { 759.6239f, -755.4764f, 30.15429f };
			uParam0->f_38[0 /*27*/].f_6 = 10.5f;
			uParam0->f_38[0 /*27*/].f_7 = 86.9705f;
			uParam0->f_38[0 /*27*/].f_23 = { 759.4803f, -749.9961f, 26.13875f };
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
			uParam0->f_38[0 /*27*/] = { 842.03f, -1167.654f, 23.76806f };
			uParam0->f_38[0 /*27*/].f_3 = { 841.8851f, -1163.102f, 28.51806f };
			uParam0->f_38[0 /*27*/].f_6 = 4.75f;
			uParam0->f_38[0 /*27*/].f_7 = 187.1127f;
			uParam0->f_38[0 /*27*/].f_23 = { 844.5606f, -1164.146f, 24.26806f };
			uParam0->f_38[0 /*27*/].f_16 = { 844.5184f, -1164.657f, 25.939f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -176.5f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 842.1298f, -1165.075f, 24.3046f };
			uParam0->f_24 = { 873.2134f, -1114.663f, 48.9161f };
			uParam0->f_24.f_3 = { -13.8258f, 0f, 144.1864f };
			uParam0->f_24.f_6 = 37.2109f;
			*uParam0 = { 842.0649f, -1162.52f, 24.2681f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 841.5887f, -1163.36f, 24.2681f };
			uParam0->f_1742.f_27 = 7.7576f;
			uParam0->f_1742.f_108[0 /*3*/] = { 841.6375f, -1160.785f, 24.2678f };
			uParam0->f_1742.f_124[0] = 2.6753f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 834.491f, -1153.009f, 24.2281f };
			uParam0->f_1742.f_124[1] = 272.6176f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 835.1475f, -1156.969f, 24.2681f };
			uParam0->f_1742.f_124[2] = 273.0558f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 844.0175f, -1156.497f, 24.2681f };
			uParam0->f_1742.f_124[3] = 273.0678f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 846.6666f, -1151.596f, 24.1599f };
			uParam0->f_1742.f_124[4] = 269.9492f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 29:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 529.376f, -1604.027f, 27.83152f };
			uParam0->f_38[0 /*27*/].f_3 = { 527.9105f, -1602.797f, 32.47459f };
			uParam0->f_38[0 /*27*/].f_6 = 4.75f;
			uParam0->f_38[0 /*27*/].f_7 = 216.8423f;
			uParam0->f_38[0 /*27*/].f_23 = { 526.6204f, -1604.665f, 28.27846f };
			uParam0->f_38[0 /*27*/].f_16 = { 527.0496f, -1605.207f, 29.8629f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -130f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 528.8805f, -1603.029f, 28.3225f };
			uParam0->f_24 = { 511.6405f, -1541.918f, 41.1761f };
			uParam0->f_24.f_3 = { -4.7034f, 0f, -169.109f };
			uParam0->f_24.f_6 = 20.2458f;
			*uParam0 = { 527.3356f, -1602.143f, 28.1478f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 525.8525f, -1604.599f, 28.255f };
			uParam0->f_1742.f_27 = 45.4901f;
			uParam0->f_1742.f_108[0 /*3*/] = { 525.7641f, -1601.401f, 28.1769f };
			uParam0->f_1742.f_124[0] = 50.8529f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 517.8649f, -1601.587f, 28.2864f };
			uParam0->f_1742.f_124[1] = 73.5817f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 515.6566f, -1605.229f, 28.3055f };
			uParam0->f_1742.f_124[2] = 78.3556f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 526.7875f, -1592.32f, 28.2797f };
			uParam0->f_1742.f_124[3] = 8.7291f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 512.2185f, -1609.11f, 28.3116f };
			uParam0->f_1742.f_124[4] = 80.5639f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 30:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 569.6525f, -1570.559f, 27.3277f };
			uParam0->f_38[0 /*27*/].f_3 = { 570.5089f, -1569.585f, 31.84068f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 135.5236f;
			uParam0->f_38[0 /*27*/].f_23 = { 568.2858f, -1568.318f, 27.70387f };
			uParam0->f_38[0 /*27*/].f_16 = { 567.9484f, -1568.682f, 29.2407f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 140f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 569.9441f, -1570.293f, 27.5777f };
			uParam0->f_24 = { 595.9171f, -1540.184f, 32.4308f };
			uParam0->f_24.f_3 = { 0.5723f, 0f, 138.7878f };
			uParam0->f_24.f_6 = 24.2761f;
			*uParam0 = { 571.3317f, -1569.211f, 27.5769f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 571.9505f, -1570.715f, 27.4944f };
			uParam0->f_1742.f_27 = 316.8053f;
			uParam0->f_1742.f_108[0 /*3*/] = { 572.6698f, -1566.701f, 27.6227f };
			uParam0->f_1742.f_124[0] = 318.9168f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 567.3885f, -1564.272f, 27.8734f };
			uParam0->f_1742.f_124[1] = 11.3999f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 576.4351f, -1571.697f, 27.346f };
			uParam0->f_1742.f_124[2] = 284.5693f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 579.3066f, -1574.521f, 27.102f };
			uParam0->f_1742.f_124[3] = 316.8582f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 563.3011f, -1560.777f, 28.0953f };
			uParam0->f_1742.f_124[4] = 319.6255f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 31:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 724.8976f, -1188.177f, 23.18106f };
			uParam0->f_38[0 /*27*/].f_3 = { 724.7759f, -1191.176f, 27.52946f };
			uParam0->f_38[0 /*27*/].f_6 = 3.5f;
			uParam0->f_38[0 /*27*/].f_7 = 8.0958f;
			uParam0->f_38[0 /*27*/].f_23 = { 726.7602f, -1189.995f, 23.27746f };
			uParam0->f_38[0 /*27*/].f_16 = { 726.7885f, -1189.545f, 24.7175f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 0f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 727.757f, -1189.837f, 23.2765f };
			uParam0->f_24 = { 751.2015f, -1201.478f, 25.9253f };
			uParam0->f_24.f_3 = { 0.2972f, 0f, 68.1021f };
			uParam0->f_24.f_6 = 28.04f;
			*uParam0 = { 724.9683f, -1191.589f, 23.2793f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 722.4882f, -1190.696f, 23.2818f };
			uParam0->f_1742.f_27 = 226.8115f;
			uParam0->f_1742.f_108[0 /*3*/] = { 727.2533f, -1192.654f, 23.2769f };
			uParam0->f_1742.f_124[0] = 225.7019f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 734.2759f, -1194.892f, 23.2741f };
			uParam0->f_1742.f_124[1] = 270.6564f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 742.4778f, -1194.803f, 23.2677f };
			uParam0->f_1742.f_124[2] = 270.655f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 743.9144f, -1198.586f, 23.26f };
			uParam0->f_1742.f_124[3] = 268.5719f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 721.1934f, -1193.58f, 23.2832f };
			uParam0->f_1742.f_124[4] = 223.0747f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 32:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 504.4415f, -1492.073f, 27.90107f };
			uParam0->f_38[0 /*27*/].f_3 = { 504.4351f, -1493.984f, 32.53869f };
			uParam0->f_38[0 /*27*/].f_6 = 13f;
			uParam0->f_38[0 /*27*/].f_7 = 6.0979f;
			uParam0->f_38[0 /*27*/].f_23 = { 504.6553f, -1493.162f, 28.28859f };
			uParam0->f_38[0 /*27*/].f_16 = { 504.7454f, -1492.723f, 29.8382f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 0f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 504.6782f, -1492.887f, 28.2886f };
			uParam0->f_24 = { 489.3747f, -1518.901f, 31.5557f };
			uParam0->f_24.f_3 = { -1.829f, 0f, -32.9606f };
			uParam0->f_24.f_6 = 22.1333f;
			*uParam0 = { 501.0715f, -1494.16f, 28.289f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 497.347f, -1493.924f, 28.2893f };
			uParam0->f_1742.f_27 = 211.2587f;
			uParam0->f_1742.f_108[0 /*3*/] = { 501.0577f, -1496.164f, 28.2891f };
			uParam0->f_1742.f_124[0] = 178.7652f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 501.4612f, -1502.653f, 28.2889f };
			uParam0->f_1742.f_124[1] = 189.8566f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 507.9253f, -1496.236f, 28.2885f };
			uParam0->f_1742.f_124[2] = 179.6585f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 507.9807f, -1502.452f, 28.2883f };
			uParam0->f_1742.f_124[3] = 182.123f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 504.4424f, -1506.796f, 28.2716f };
			uParam0->f_1742.f_124[4] = 268.4133f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 33:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 474.9897f, -1547.675f, 27.78279f };
			uParam0->f_38[0 /*27*/].f_3 = { 475.861f, -1546.61f, 32.53279f };
			uParam0->f_38[0 /*27*/].f_6 = 9f;
			uParam0->f_38[0 /*27*/].f_7 = 137.901f;
			uParam0->f_38[0 /*27*/].f_23 = { 472.2744f, -1543.771f, 28.28258f };
			uParam0->f_38[0 /*27*/].f_16 = { 471.8385f, -1544.341f, 29.8348f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 140f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 475.7058f, -1547.123f, 28.2828f };
			uParam0->f_24 = { 474.4796f, -1526.742f, 32.3941f };
			uParam0->f_24.f_3 = { -1.0343f, 0f, -175.9226f };
			uParam0->f_24.f_6 = 31.816f;
			*uParam0 = { 478.0967f, -1547.739f, 28.2826f };
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 481.4461f, -1551.521f, 28.2828f };
			uParam0->f_1742.f_27 = 319.4575f;
			uParam0->f_1742.f_108[0 /*3*/] = { 476.7013f, -1543.273f, 28.2688f };
			uParam0->f_1742.f_124[0] = 317.4218f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 478.8961f, -1546.518f, 28.2828f };
			uParam0->f_1742.f_124[1] = 321.1352f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 487.6636f, -1543.096f, 28.2618f };
			uParam0->f_1742.f_124[2] = 230.0298f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 481.2663f, -1537.818f, 28.2474f };
			uParam0->f_1742.f_124[3] = 230.3941f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 471.9972f, -1530.952f, 28.2219f };
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
			*uParam0 = { 252.3021f, -1813.148f, 26.1691f };
			uParam0->f_3[0 /*3*/] = { 254.0506f, -1809.112f, 26.2643f };
			uParam0->f_3[1 /*3*/] = { 259.5366f, -1802.303f, 26.2152f };
			uParam0->f_24 = { 239.7418f, -1811.535f, 32.0606f };
			uParam0->f_24.f_3 = { -11.7578f, 0f, -67.7135f };
			uParam0->f_24.f_6 = 44.6712f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 253.3115f, -1808.408f, 25.86314f };
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
			uParam0->f_146[0 /*12*/].f_8 = { 253.3365f, -1799.67f, 26.1131f };
			uParam0->f_146[0 /*12*/].f_11 = 57.3276f;
			uParam0->f_1922[0 /*9*/] = { 252.8545f, -1809.944f, 29.2059f };
			uParam0->f_1922[0 /*9*/].f_3 = { -48.2796f, 0f, -25.9045f };
			uParam0->f_1922[0 /*9*/].f_6 = 69.8427f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 259.5206f, -1802.301f, 26.07127f };
			uParam0->f_38[1 /*27*/].f_3 = { 258.0708f, -1801.066f, 29.36314f };
			uParam0->f_38[1 /*27*/].f_6 = 3.75f;
			uParam0->f_38[1 /*27*/].f_7 = 232.4453f;
			uParam0->f_38[1 /*27*/].f_23 = { 259.5366f, -1802.303f, 26.2152f };
			uParam0->f_146[1 /*12*/].f_8 = { 257.5821f, -1800.841f, 26.1131f };
			uParam0->f_146[1 /*12*/].f_11 = 56.3008f;
			uParam0->f_1922[1 /*9*/] = { 257.8029f, -1803.087f, 28.5437f };
			uParam0->f_1922[1 /*9*/].f_3 = { -37.1543f, 0f, -31.4609f };
			uParam0->f_1922[1 /*9*/].f_6 = 83.2505f;
			uParam0->f_1742.f_24 = { 257.5821f, -1800.841f, 26.1131f };
			uParam0->f_1742.f_27 = 56.3008f;
			uParam0->f_1742.f_108[0 /*3*/] = { 256.502f, -1801.248f, 26.1131f };
			uParam0->f_1742.f_124[0] = 90.9405f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 254.0294f, -1803.602f, 26.1131f };
			uParam0->f_1742.f_124[1] = 116.4148f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 251.8847f, -1800.821f, 26.1131f };
			uParam0->f_1742.f_124[2] = 141.4167f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 255.4657f, -1796.401f, 26.1131f };
			uParam0->f_1742.f_124[3] = 140.919f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 248.3528f, -1806.442f, 26.1131f };
			uParam0->f_1742.f_124[4] = 124.5272f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 73:
			*uParam0 = { -1485.757f, -923.3176f, 19.59506f };
			uParam0->f_3[0 /*3*/] = { -1471.832f, -920.1343f, 9.0249f };
			uParam0->f_3[1 /*3*/] = { -1469.627f, -929.1902f, 9.1865f };
			uParam0->f_24 = { -1455.513f, -921.6072f, 16.84116f };
			uParam0->f_24.f_3 = { -20.00212f, 0f, 100.7331f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1471.107f, -919.8443f, 9.0237f };
			uParam0->f_38[0 /*27*/].f_3 = { -1472.094f, -920.9706f, 12.0346f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 50f;
			uParam0->f_38[0 /*27*/].f_23 = { -1471.832f, -920.1343f, 9.0249f };
			uParam0->f_38[0 /*27*/].f_16 = { -1472.809f, -920.902f, 10.376f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 50f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1469.037f, -922.352f, 9.0291f };
			uParam0->f_146[0 /*12*/].f_11 = 230f;
			uParam0->f_1922[0 /*9*/] = { -1469.621f, -917.4292f, 12.42505f };
			uParam0->f_1922[0 /*9*/].f_3 = { -33.26217f, 0f, 156.6873f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1473.404f, -926.0901f, 9.1849f };
			uParam0->f_38[1 /*27*/].f_3 = { -1466.255f, -932.0925f, 13.1885f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 140f;
			uParam0->f_38[1 /*27*/].f_23 = { -1469.627f, -929.1902f, 9.1865f };
			uParam0->f_146[1 /*12*/].f_8 = { -1466.577f, -925.1134f, 9.0269f };
			uParam0->f_146[1 /*12*/].f_11 = 320f;
			uParam0->f_1922[1 /*9*/] = { -1465.914f, -932.2122f, 12.6039f };
			uParam0->f_1922[1 /*9*/].f_3 = { -23.17142f, 0f, 42.55543f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -1465.492f, -923.8866f, 9.0338f };
			uParam0->f_1742.f_27 = 320f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1465.492f, -923.8866f, 9.0338f };
			uParam0->f_1742.f_124[0] = 320f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1458.839f, -922.0121f, 9.058f };
			uParam0->f_1742.f_124[1] = 230.6614f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1449.963f, -930.0195f, 8.8814f };
			uParam0->f_1742.f_124[2] = 227.8659f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1444.983f, -936.6174f, 7.8077f };
			uParam0->f_1742.f_124[3] = 227.132f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1464.854f, -918.0606f, 9.0349f };
			uParam0->f_1742.f_124[4] = 231.8444f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 74:
			*uParam0 = { 48.13491f, -1031.287f, 35.66264f };
			uParam0->f_3[0 /*3*/] = { 37.272f, -1029.302f, 28.5669f };
			uParam0->f_3[1 /*3*/] = { 40.1411f, -1022.589f, 28.5317f };
			uParam0->f_24 = { 22.92001f, -1039.358f, 37.23633f };
			uParam0->f_24.f_3 = { -18.07756f, 0f, -71.81333f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 37.492f, -1028.755f, 28.5675f };
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
			uParam0->f_1922[0 /*9*/] = { 34.73594f, -1034.843f, 32.46852f };
			uParam0->f_1922[0 /*9*/].f_3 = { -32.01322f, 0f, -11.85664f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 40.9591f, -1020.495f, 28.5168f };
			uParam0->f_38[1 /*27*/].f_3 = { 39.2666f, -1024.672f, 32.5593f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 247f;
			uParam0->f_38[1 /*27*/].f_23 = { 40.0932f, -1022.631f, 28.531f };
			uParam0->f_146[1 /*12*/].f_8 = { 37.0577f, -1021.25f, 28.4798f };
			uParam0->f_146[1 /*12*/].f_11 = 67f;
			uParam0->f_1922[1 /*9*/] = { 41.9218f, -1018.612f, 33.16658f };
			uParam0->f_1922[1 /*9*/].f_3 = { -43.81764f, 0f, 135.396f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 33.227f, -1016.954f, 28.4567f };
			uParam0->f_1742.f_27 = 340.9914f;
			uParam0->f_1742.f_108[0 /*3*/] = { 33.227f, -1016.954f, 28.4567f };
			uParam0->f_1742.f_124[0] = 340.9914f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 36.3108f, -1007.784f, 28.4626f };
			uParam0->f_1742.f_124[1] = 340.1653f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 39.3771f, -999.3572f, 28.4154f };
			uParam0->f_1742.f_124[2] = 339.819f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 29.4222f, -1029.543f, 28.4506f };
			uParam0->f_1742.f_124[3] = 157.1595f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 31.7689f, -1033.425f, 28.4128f };
			uParam0->f_1742.f_124[4] = 158.5681f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 75:
			*uParam0 = { 53.03948f, 2791.662f, 65.01231f };
			uParam0->f_3[0 /*3*/] = { 46.7547f, 2789.646f, 57.1054f };
			uParam0->f_3[1 /*3*/] = { 56.1234f, 2785.71f, 56.8783f };
			uParam0->f_24 = { 32.84365f, 2787.493f, 64.48982f };
			uParam0->f_24.f_3 = { -19.86183f, 0f, -72.68176f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 45.7077f, 2789.347f, 56.8783f };
			uParam0->f_38[0 /*27*/].f_3 = { 46.9525f, 2788.618f, 59.8783f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 322f;
			uParam0->f_38[0 /*27*/].f_23 = { 46.8107f, 2789.601f, 57.1054f };
			uParam0->f_38[0 /*27*/].f_16 = { 45.86126f, 2789.767f, 58.2f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 322f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 44.7758f, 2786.824f, 56.8781f };
			uParam0->f_146[0 /*12*/].f_11 = 142f;
			uParam0->f_1922[0 /*9*/] = { 42.79881f, 2791.531f, 61.48584f };
			uParam0->f_1922[0 /*9*/].f_3 = { -39.60403f, 1E-06f, -137.5007f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 52.021f, 2788.568f, 56.8783f };
			uParam0->f_38[1 /*27*/].f_3 = { 57.2193f, 2784.678f, 60.8783f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 322f;
			uParam0->f_38[1 /*27*/].f_23 = { 56.2014f, 2785.769f, 56.8783f };
			uParam0->f_146[1 /*12*/].f_8 = { 53.9654f, 2782.903f, 56.8783f };
			uParam0->f_146[1 /*12*/].f_11 = 142f;
			uParam0->f_1922[1 /*9*/] = { 50.61052f, 2788.691f, 60.97519f };
			uParam0->f_1922[1 /*9*/].f_3 = { -21.14123f, -1E-06f, -131.5959f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 49.9789f, 2783.608f, 56.884f };
			uParam0->f_1742.f_27 = 79.034f;
			uParam0->f_1742.f_108[0 /*3*/] = { 49.9789f, 2783.608f, 56.884f };
			uParam0->f_1742.f_124[0] = 79.034f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 57.3569f, 2777.62f, 56.8783f };
			uParam0->f_1742.f_124[1] = 189.5871f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 47.4214f, 2776.271f, 56.884f };
			uParam0->f_1742.f_124[2] = 58.7704f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 35.2752f, 2782.377f, 56.8781f };
			uParam0->f_1742.f_124[3] = 132.5531f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 59.3515f, 2768.592f, 56.8783f };
			uParam0->f_1742.f_124[4] = 185.7522f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 76:
			*uParam0 = { -349.0252f, 6061.301f, 46.64357f };
			uParam0->f_3[0 /*3*/] = { -342.0963f, 6065.629f, 30.5093f };
			uParam0->f_3[1 /*3*/] = { -353.9768f, 6066.256f, 30.4985f };
			uParam0->f_24 = { -345.5061f, 6083.811f, 39.05644f };
			uParam0->f_24.f_3 = { -21.42789f, 0f, 171.8696f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -341.6371f, 6065.159f, 30.5111f };
			uParam0->f_38[0 /*27*/].f_3 = { -342.6248f, 6066.132f, 33.5077f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 135f;
			uParam0->f_38[0 /*27*/].f_23 = { -342.0963f, 6065.629f, 30.5093f };
			uParam0->f_38[0 /*27*/].f_16 = { -343.174f, 6066.212f, 31.82f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 135f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -339.2251f, 6068.469f, 30.3603f };
			uParam0->f_146[0 /*12*/].f_11 = 315f;
			uParam0->f_1922[0 /*9*/] = { -339.342f, 6063.225f, 34.01251f };
			uParam0->f_1922[0 /*9*/].f_3 = { -32.05714f, 0f, 43.11824f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -352.3805f, 6067.916f, 30.4979f };
			uParam0->f_38[1 /*27*/].f_3 = { -355.7214f, 6064.556f, 34.4992f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 225f;
			uParam0->f_38[1 /*27*/].f_23 = { -353.9768f, 6066.256f, 30.4985f };
			uParam0->f_146[1 /*12*/].f_8 = { -357.9002f, 6069.958f, 30.4985f };
			uParam0->f_146[1 /*12*/].f_11 = 45f;
			uParam0->f_1922[1 /*9*/] = { -349.0343f, 6071.203f, 35.3861f };
			uParam0->f_1922[1 /*9*/].f_3 = { -32.46475f, -1E-06f, 121.3122f };
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
			*uParam0 = { 1733.58f, 3702.429f, 42.48087f };
			uParam0->f_3[0 /*3*/] = { 1737.922f, 3709.11f, 33.1355f };
			uParam0->f_3[1 /*3*/] = { 1729.305f, 3706.807f, 33.1207f };
			uParam0->f_24 = { 1745.779f, 3725.659f, 39.6445f };
			uParam0->f_24.f_3 = { -17.60909f, 0f, 158.5415f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 1738.503f, 3709.221f, 33.145f };
			uParam0->f_38[0 /*27*/].f_3 = { 1737.325f, 3708.843f, 36.1273f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 201f;
			uParam0->f_38[0 /*27*/].f_23 = { 1737.922f, 3709.11f, 33.1355f };
			uParam0->f_38[0 /*27*/].f_16 = { 1737.132f, 3708.37f, 34.44f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 201f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 1736.702f, 3712.456f, 33.1196f };
			uParam0->f_146[0 /*12*/].f_11 = 21f;
			uParam0->f_1922[0 /*9*/] = { 1741.286f, 3711f, 36.02699f };
			uParam0->f_1922[0 /*9*/].f_3 = { -20.29556f, 1E-06f, 115.6026f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 1733.846f, 3708.501f, 33.1237f };
			uParam0->f_38[1 /*27*/].f_3 = { 1724.795f, 3705.227f, 37.1555f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 201f;
			uParam0->f_38[1 /*27*/].f_23 = { 1729.305f, 3706.807f, 33.1207f };
			uParam0->f_146[1 /*12*/].f_8 = { 1726.33f, 3714.007f, 33.1908f };
			uParam0->f_146[1 /*12*/].f_11 = 21f;
			uParam0->f_1922[1 /*9*/] = { 1735.765f, 3710.417f, 37.93658f };
			uParam0->f_1922[1 /*9*/].f_3 = { -28.01882f, 0f, 110.9721f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 1724.014f, 3712.982f, 33.2183f };
			uParam0->f_1742.f_27 = 21f;
			uParam0->f_1742.f_108[0 /*3*/] = { 1724.014f, 3712.982f, 33.2183f };
			uParam0->f_1742.f_124[0] = 21f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 1729.075f, 3714.975f, 33.1545f };
			uParam0->f_1742.f_124[1] = 21f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 1728.612f, 3721.61f, 33.0577f };
			uParam0->f_1742.f_124[2] = 355.1809f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 1723.226f, 3721.503f, 33.0942f };
			uParam0->f_1742.f_124[3] = 3.5273f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 1733.556f, 3723.331f, 33.0045f };
			uParam0->f_1742.f_124[4] = 357.9914f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 78:
			*uParam0 = { 948.7073f, -1462.662f, 42.38476f };
			uParam0->f_3[0 /*3*/] = { 939.6351f, -1458.981f, 30.47f };
			uParam0->f_3[1 /*3*/] = { 943.48f, -1458.63f, 30.4708f };
			uParam0->f_24 = { 928.796f, -1445.592f, 37.12785f };
			uParam0->f_24.f_3 = { -16.38287f, 0f, -147.7017f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 940.2686f, -1458.946f, 32.73f };
			uParam0->f_38[0 /*27*/].f_3 = { 939.013f, -1458.946f, 30f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 180f;
			uParam0->f_38[0 /*27*/].f_23 = { 939.6578f, -1458.977f, 30.4699f };
			uParam0->f_38[0 /*27*/].f_16 = { 938.6f, -1458.778f, 31.68f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 180f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 939.6075f, -1456.724f, 30.3631f };
			uParam0->f_146[0 /*12*/].f_11 = 0f;
			uParam0->f_1922[0 /*9*/] = { 935.2814f, -1458.618f, 34.20869f };
			uParam0->f_1922[0 /*9*/].f_3 = { -33.6694f, 0f, -80.5335f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 941.444f, -1458.384f, 30f };
			uParam0->f_38[1 /*27*/].f_3 = { 945.3676f, -1458.384f, 34f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 180f;
			uParam0->f_38[1 /*27*/].f_23 = { 943.4398f, -1458.702f, 30.474f };
			uParam0->f_146[1 /*12*/].f_8 = { 943.4383f, -1453.285f, 30.14f };
			uParam0->f_146[1 /*12*/].f_11 = 0f;
			uParam0->f_1922[1 /*9*/] = { 974.5536f, -1476f, 46.41779f };
			uParam0->f_1922[1 /*9*/].f_3 = { -23.05029f, 0f, 88.1022f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 943.4383f, -1453.285f, 30.14f };
			uParam0->f_1742.f_27 = 0f;
			uParam0->f_1742.f_108[0 /*3*/] = { 943.401f, -1454.059f, 30.637f };
			uParam0->f_1742.f_124[0] = -5.77f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 947.8489f, -1454.679f, 30.6761f };
			uParam0->f_1742.f_124[1] = -17.76f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 932.9202f, -1454.874f, 30.2099f };
			uParam0->f_1742.f_124[2] = 319.729f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 935.9636f, -1455.289f, 30.2326f };
			uParam0->f_1742.f_124[3] = -16.32f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 950.9557f, -1454.989f, 30.2025f };
			uParam0->f_1742.f_124[4] = 337.6744f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 79:
			*uParam0 = { 177.8842f, 318.7285f, 122.2674f };
			uParam0->f_3[0 /*3*/] = { 189.8949f, 309.2079f, 104.3896f };
			uParam0->f_3[1 /*3*/] = { 177.9027f, 308.8062f, 104.3697f };
			uParam0->f_24 = { 196.2953f, 298.5883f, 113.4047f };
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
			uParam0->f_1922[0 /*9*/] = { 185.6942f, 308.8315f, 107.8885f };
			uParam0->f_1922[0 /*9*/].f_3 = { -28.51068f, 0f, -98.60703f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 176.0313f, 308.3507f, 104.371f };
			uParam0->f_38[1 /*27*/].f_3 = { 180.1147f, 308.6703f, 108.3695f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 5f;
			uParam0->f_38[1 /*27*/].f_23 = { 177.9027f, 308.8062f, 104.3697f };
			uParam0->f_146[1 /*12*/].f_8 = { 178.2772f, 305.5948f, 104.3732f };
			uParam0->f_146[1 /*12*/].f_11 = 185f;
			uParam0->f_1922[1 /*9*/] = { 183.7406f, 308.4999f, 108.0378f };
			uParam0->f_1922[1 /*9*/].f_3 = { -25.27182f, 0f, 99.13209f };
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
			*uParam0 = { -19.17074f, -185.0379f, 68.971f };
			uParam0->f_3[0 /*3*/] = { -22.0633f, -192.056f, 51.3638f };
			uParam0->f_3[1 /*3*/] = { -16.5396f, -191.6055f, 53.94998f };
			uParam0->f_24 = { -40.05846f, -199.4656f, 60.36575f };
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
			uParam0->f_1922[0 /*9*/] = { -25.03923f, -190.7715f, 54.12894f };
			uParam0->f_1922[0 /*9*/].f_3 = { -26.30859f, -1E-06f, -125.9742f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -19.0774f, -193.0987f, 51.3675f };
			uParam0->f_38[1 /*27*/].f_3 = { -15.1719f, -194.4668f, 56.3675f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 340f;
			uParam0->f_38[1 /*27*/].f_23 = { -16.5396f, -191.6055f, 53.94998f };
			uParam0->f_146[1 /*12*/].f_8 = { -27.2982f, -193.4763f, 51.3583f };
			uParam0->f_146[1 /*12*/].f_11 = 160f;
			uParam0->f_1922[1 /*9*/] = { -30.74519f, -189.1472f, 56.23203f };
			uParam0->f_1922[1 /*9*/].f_3 = { -31.82227f, -1E-06f, -116.9683f };
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
			*uParam0 = { 2473.099f, 4096.519f, 52.16207f };
			uParam0->f_3[0 /*3*/] = { 2471.944f, 4110.662f, 37.0647f };
			uParam0->f_3[1 /*3*/] = { 2467.937f, 4100.745f, 37.0647f };
			uParam0->f_24 = { 2462.311f, 4123.169f, 47.58656f };
			uParam0->f_24.f_3 = { -17.71301f, 0f, -152.8097f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 2472.114f, 4111.497f, 37.0647f };
			uParam0->f_38[0 /*27*/].f_3 = { 2471.534f, 4109.984f, 40.0647f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 248f;
			uParam0->f_38[0 /*27*/].f_23 = { 2471.944f, 4110.662f, 37.0647f };
			uParam0->f_38[0 /*27*/].f_16 = { 2471.648f, 4109.449f, 38.409f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 248f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 2469.991f, 4111.604f, 37.0647f };
			uParam0->f_146[0 /*12*/].f_11 = 68f;
			uParam0->f_1922[0 /*9*/] = { 2470.287f, 4107.252f, 40.90748f };
			uParam0->f_1922[0 /*9*/].f_3 = { -35.72808f, -1E-06f, -15.28071f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 2468.277f, 4102.203f, 37.0647f };
			uParam0->f_38[1 /*27*/].f_3 = { 2467.25f, 4099.537f, 41.0647f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 248f;
			uParam0->f_38[1 /*27*/].f_23 = { 2467.937f, 4100.745f, 37.0647f };
			uParam0->f_146[1 /*12*/].f_8 = { 2465.368f, 4101.881f, 37.0647f };
			uParam0->f_146[1 /*12*/].f_11 = 68f;
			uParam0->f_1922[1 /*9*/] = { 2466.078f, 4097.307f, 40.99406f };
			uParam0->f_1922[1 /*9*/].f_3 = { -29.99574f, 0f, -11.94392f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 2465.368f, 4101.881f, 37.0647f };
			uParam0->f_1742.f_27 = 68f;
			uParam0->f_1742.f_108[0 /*3*/] = { 2465.404f, 4102.017f, 37.0647f };
			uParam0->f_1742.f_124[0] = 353.905f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 2467.214f, 4107.929f, 37.0647f };
			uParam0->f_1742.f_124[1] = 340.5299f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 2470.307f, 4113.582f, 37.0647f };
			uParam0->f_1742.f_124[2] = 329.253f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 2473.95f, 4116.216f, 37.0647f };
			uParam0->f_1742.f_124[3] = 291.3084f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 2481.989f, 4118.289f, 37.0647f };
			uParam0->f_1742.f_124[4] = 264.1184f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 82:
			*uParam0 = { -45.74868f, 6429.791f, 56.77554f };
			uParam0->f_3[0 /*3*/] = { -39.1115f, 6420.475f, 30.6905f };
			uParam0->f_3[1 /*3*/] = { -35.3235f, 6424.116f, 30.4333f };
			uParam0->f_24 = { -38.01412f, 6407.127f, 40.71259f };
			uParam0->f_24.f_3 = { -21.77988f, 0f, 16.05135f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -39.4762f, 6419.823f, 30.4904f };
			uParam0->f_38[0 /*27*/].f_3 = { -38.4606f, 6420.841f, 33.4904f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 45f;
			uParam0->f_38[0 /*27*/].f_23 = { -39.1115f, 6420.475f, 30.6905f };
			uParam0->f_38[0 /*27*/].f_16 = { -38.42f, 6421.227f, 31.826f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 45f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -37.188f, 6418.535f, 30.4904f };
			uParam0->f_146[0 /*12*/].f_11 = 225f;
			uParam0->f_1922[0 /*9*/] = { -37.06559f, 6422.331f, 33.24395f };
			uParam0->f_1922[0 /*9*/].f_3 = { -25.03947f, 0f, 150.0942f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -36.7141f, 6422.576f, 30.4632f };
			uParam0->f_38[1 /*27*/].f_3 = { -33.7452f, 6425.517f, 34.4328f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 45f;
			uParam0->f_38[1 /*27*/].f_23 = { -35.3235f, 6424.116f, 30.4333f };
			uParam0->f_146[1 /*12*/].f_8 = { -32.4131f, 6421.936f, 30.4598f };
			uParam0->f_146[1 /*12*/].f_11 = 225f;
			uParam0->f_1922[1 /*9*/] = { -32.62138f, 6426.55f, 34.62805f };
			uParam0->f_1922[1 /*9*/].f_3 = { -34.96296f, -1E-06f, 146.7703f };
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
			uParam0->f_1742.f_108[3 /*3*/] = { -32.4584f, 6412.813f, 30.4904f };
			uParam0->f_1742.f_124[3] = 225f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -27.9055f, 6408.169f, 30.4904f };
			uParam0->f_1742.f_124[4] = 225f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_34 = 4;
			break;
		
		case 83:
			*uParam0 = { -1136.59f, -1564.309f, 12.93727f };
			uParam0->f_3[0 /*3*/] = { -1134.796f, -1568.819f, 3.4081f };
			uParam0->f_3[1 /*3*/] = { -1147.438f, -1577.577f, 3.5701f };
			uParam0->f_24 = { -1117.043f, -1574.494f, 13.51503f };
			uParam0->f_24.f_3 = { -17.01023f, 0f, 75.32748f };
			uParam0->f_24.f_6 = 50f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1135.533f, -1569.254f, 3.4117f };
			uParam0->f_38[0 /*27*/].f_3 = { -1134.223f, -1568.373f, 6.4057f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 35f;
			uParam0->f_38[0 /*27*/].f_23 = { -1134.796f, -1568.819f, 3.4081f };
			uParam0->f_38[0 /*27*/].f_16 = { -1134.403f, -1568.09f, 4.715f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 35f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1133.713f, -1570.185f, 3.2607f };
			uParam0->f_146[0 /*12*/].f_11 = 215f;
			uParam0->f_1922[0 /*9*/] = { -1137.457f, -1570.62f, 7.014599f };
			uParam0->f_1922[0 /*9*/].f_3 = { -33.61084f, 1E-06f, -69.27267f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1149.151f, -1578.9f, 3.4373f };
			uParam0->f_38[1 /*27*/].f_3 = { -1145.536f, -1576.384f, 7.4348f };
			uParam0->f_38[1 /*27*/].f_6 = 3f;
			uParam0->f_38[1 /*27*/].f_7 = 35f;
			uParam0->f_38[1 /*27*/].f_23 = { -1147.438f, -1577.577f, 3.5701f };
			uParam0->f_146[1 /*12*/].f_8 = { -1146.254f, -1579.146f, 3.2626f };
			uParam0->f_146[1 /*12*/].f_11 = 215f;
			uParam0->f_1922[1 /*9*/] = { -1150.86f, -1580.059f, 6.993506f };
			uParam0->f_1922[1 /*9*/].f_3 = { -35.34602f, 1E-06f, -71.9474f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -1146.254f, -1579.146f, 3.2626f };
			uParam0->f_1742.f_27 = 215f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1146.254f, -1579.146f, 3.2626f };
			uParam0->f_1742.f_124[0] = 215f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1125.634f, -1577.498f, 3.2418f };
			uParam0->f_1742.f_124[1] = 305.4502f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1144.936f, -1590.746f, 3.2428f };
			uParam0->f_1742.f_124[2] = 304.4731f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1139.747f, -1575.177f, 3.2834f };
			uParam0->f_1742.f_124[3] = 126.4407f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1157.151f, -1587.071f, 3.2301f };
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
			uParam0->f_24 = { -1566.36f, -485.2462f, 40.503f };
			uParam0->f_24.f_3 = { 23.8802f, 0.0288f, 173.8406f };
			uParam0->f_24.f_6 = 55.7454f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1580.198f, -557.6818f, 33.95282f };
			uParam0->f_38[0 /*27*/].f_3 = { -1582.202f, -559.1873f, 36.45286f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 216.2582f;
			uParam0->f_38[0 /*27*/].f_23 = { -1583.52f, -558.453f, 33.9535f };
			uParam0->f_38[0 /*27*/].f_16 = { -1582.046f, -559.602f, 35.25f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -142.2f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1584.053f, -554.6662f, 33.9762f };
			uParam0->f_146[0 /*12*/].f_11 = 39.6483f;
			uParam0->f_1922[0 /*9*/] = { -1577.825f, -557.2221f, 41.1317f };
			uParam0->f_1922[0 /*9*/].f_3 = { -44.1509f, 0f, 89.9985f };
			uParam0->f_1922[0 /*9*/].f_6 = 77.4526f;
			uParam0->f_38[1 /*27*/].f_26 = 1;
			uParam0->f_38[1 /*27*/] = { -1559.692f, -568.1177f, 113.4493f };
			uParam0->f_38[1 /*27*/].f_3 = { -1562.036f, -569.738f, 115.6993f };
			uParam0->f_38[1 /*27*/].f_6 = 1f;
			uParam0->f_38[1 /*27*/].f_7 = 209.3411f;
			uParam0->f_38[1 /*27*/].f_23 = { -1563.515f, -568.7156f, 113.4493f };
			uParam0->f_38[1 /*27*/].f_16 = { -1561.895f, -570.2933f, 114.859f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -142.3f };
			uParam0->f_38[1 /*27*/].f_12 = { -1562.338f, -569.6094f, 114.4321f };
			uParam0->f_146[1 /*12*/].f_8 = { -1561.962f, -567.2552f, 113.4493f };
			uParam0->f_146[1 /*12*/].f_11 = 24.255f;
			uParam0->f_1922[1 /*9*/] = { -1556.47f, -566.1495f, 119.3585f };
			uParam0->f_1922[1 /*9*/].f_3 = { -31.7605f, 0f, 104.6976f };
			uParam0->f_1922[1 /*9*/].f_6 = 59.2455f;
			uParam0->f_1742.f_139 = { -1554.82f, -561.2455f, 30.5729f };
			uParam0->f_1742.f_139.f_3 = { -52.3398f, 0f, -28.4273f };
			uParam0->f_1742.f_139.f_6 = 67.3726f;
			uParam0->f_38[2 /*27*/].f_26 = 2;
			uParam0->f_38[2 /*27*/] = { -1545.798f, -557.46f, 24.36f };
			uParam0->f_38[2 /*27*/].f_3 = { -1553.65f, -562.815f, 28.91f };
			uParam0->f_38[2 /*27*/].f_6 = 6.45f;
			uParam0->f_38[2 /*27*/].f_7 = 217.4663f;
			uParam0->f_38[2 /*27*/].f_23 = { -1565.646f, -537.89f, 33.8479f };
			uParam0->f_1742.f_108[0 /*3*/] = { -1566.882f, -531.6985f, 34.5696f };
			uParam0->f_1742.f_124[0] = 35.4988f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1568.705f, -529.1504f, 34.5097f };
			uParam0->f_1742.f_124[1] = 35.6329f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1550.61f, -534.6669f, 34.0739f };
			uParam0->f_1742.f_124[2] = 37.468f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1546.099f, -540.9735f, 33.5649f };
			uParam0->f_1742.f_124[3] = 39.0033f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1540.052f, -549.1758f, 32.9157f };
			uParam0->f_1742.f_124[4] = 38.612f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_38[2 /*27*/].f_16 = { -1554.339f, -561.571f, 26.2058f };
			uParam0->f_38[2 /*27*/].f_19 = { 0f, 0f, 125.125f };
			uParam0->f_38[2 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[2 /*27*/].f_16, uParam0->f_38[2 /*27*/].f_19, &Var0, uParam0->f_38[2 /*27*/].f_22);
			uParam0->f_38[2 /*27*/].f_12 = { Var0 };
			uParam0->f_38[2 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[2 /*12*/].f_8 = { -1569.724f, -531.7974f, 34.4859f };
			uParam0->f_146[2 /*12*/].f_11 = 47.1292f;
			uParam0->f_3[2 /*3*/] = { -1565.646f, -537.89f, 33.8479f };
			uParam0->f_36 = 3;
			uParam0->f_34 = 3;
			break;
		
		case 69:
			*uParam0 = { -1363.756f, -510.9757f, 30.2801f };
			uParam0->f_3[0 /*3*/] = { -1370.348f, -503.0963f, 32.1574f };
			uParam0->f_3[1 /*3*/] = { -1369.749f, -472.048f, 83.7585f };
			uParam0->f_24 = { -1382.802f, -576.5264f, 33.7159f };
			uParam0->f_24.f_3 = { 14.0594f, 0.016f, -6.0004f };
			uParam0->f_24.f_6 = 48.6496f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1369.998f, -502.7983f, 31.94083f };
			uParam0->f_38[0 /*27*/].f_3 = { -1370.934f, -503.4724f, 35.40741f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 307.1366f;
			uParam0->f_38[0 /*27*/].f_23 = { -1370.348f, -503.0963f, 32.1574f };
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
			uParam0->f_38[1 /*27*/] = { -1369.871f, -472.2444f, 83.33684f };
			uParam0->f_38[1 /*27*/].f_3 = { -1369.224f, -471.7853f, 86.69694f };
			uParam0->f_38[1 /*27*/].f_6 = 1.75f;
			uParam0->f_38[1 /*27*/].f_7 = 124.2775f;
			uParam0->f_38[1 /*27*/].f_23 = { -1369.569f, -471.9889f, 83.4469f };
			uParam0->f_38[1 /*27*/].f_16 = { -1370.197f, -471.486f, 84.8834f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 122.74f };
			uParam0->f_38[1 /*27*/].f_12 = { -1369.618f, -471.1026f, 84.4431f };
			uParam0->f_146[1 /*12*/].f_8 = { -1367.407f, -471.275f, 83.4469f };
			uParam0->f_146[1 /*12*/].f_11 = 192.5905f;
			uParam0->f_1922[1 /*9*/] = { -1364.575f, -486.9128f, 89.3676f };
			uParam0->f_1922[1 /*9*/].f_3 = { -16.1979f, 0f, 47.8232f };
			uParam0->f_1922[1 /*9*/].f_6 = 71.8136f;
			uParam0->f_1742.f_139 = { -1416.971f, -473.9347f, 37.9568f };
			uParam0->f_1742.f_139.f_3 = { -48.1546f, 0f, -177.9143f };
			uParam0->f_1742.f_139.f_6 = 57.6609f;
			uParam0->f_38[2 /*27*/].f_26 = 2;
			uParam0->f_38[2 /*27*/] = { -1411.05f, -480.325f, 37.675f };
			uParam0->f_38[2 /*27*/].f_3 = { -1416.075f, -472.925f, 32.175f };
			uParam0->f_38[2 /*27*/].f_6 = 9.35f;
			uParam0->f_38[2 /*27*/].f_7 = 303.723f;
			uParam0->f_38[2 /*27*/].f_23 = { -1415.362f, -477.7129f, 32.5229f };
			uParam0->f_1742.f_108[0 /*3*/] = { -1420.727f, -479.2959f, 32.8519f };
			uParam0->f_1742.f_124[0] = 125.1182f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1428.926f, -473.8968f, 33.1141f };
			uParam0->f_1742.f_124[1] = 34.1439f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1418.69f, -489.0421f, 32.2947f };
			uParam0->f_1742.f_124[2] = 33.2319f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1413.883f, -496.0346f, 31.8743f };
			uParam0->f_1742.f_124[3] = 33.365f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1408.146f, -504.3559f, 31.3764f };
			uParam0->f_1742.f_124[4] = 33.883f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_38[2 /*27*/].f_16 = { -1413.486f, -481.671f, 33.8948f };
			uParam0->f_38[2 /*27*/].f_19 = { 0f, 0f, -146.595f };
			uParam0->f_38[2 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[2 /*27*/].f_16, uParam0->f_38[2 /*27*/].f_19, &Var0, uParam0->f_38[2 /*27*/].f_22);
			uParam0->f_38[2 /*27*/].f_12 = { Var0 };
			uParam0->f_38[2 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[2 /*12*/].f_8 = { -1418.95f, -479.073f, 32.8152f };
			uParam0->f_146[2 /*12*/].f_11 = 124.8494f;
			uParam0->f_3[2 /*3*/] = { -1415.362f, -477.7129f, 32.5229f };
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
			uParam0->f_38[0 /*27*/] = { -119.6858f, -609.6423f, 35.25896f };
			uParam0->f_38[0 /*27*/].f_3 = { -115.8885f, -599.1504f, 38.39197f };
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
			uParam0->f_38[1 /*27*/] = { -133.5413f, -585.7881f, 200.6802f };
			uParam0->f_38[1 /*27*/].f_3 = { -135.2397f, -583.7808f, 203.3786f };
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
			uParam0->f_24 = { -50.6769f, -1013.942f, 183.2113f };
			uParam0->f_24.f_3 = { 18.7747f, -0.0159f, 7.6518f };
			uParam0->f_24.f_6 = 44.5136f;
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -82.05029f, -797.7917f, 43.22731f };
			uParam0->f_38[0 /*27*/].f_3 = { -78.21367f, -796.7432f, 45.72731f };
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
			uParam0->f_38[1 /*27*/] = { -68.30604f, -822.9664f, 320.2975f };
			uParam0->f_38[1 /*27*/].f_3 = { -67.01254f, -819.4177f, 322.7896f };
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
			uParam0->f_38[0 /*27*/] = { -66.96652f, 6427.382f, 34.2641f };
			uParam0->f_38[0 /*27*/].f_3 = { -69.53132f, 6424.848f, 29.28271f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 238.4392f;
			uParam0->f_38[0 /*27*/].f_23 = { -70.23156f, 6425.214f, 30.43954f };
			uParam0->f_38[0 /*27*/].f_16 = { -69.804f, 6424.731f, 31.8753f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -135f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -68.702f, 6426.148f, 30.439f };
			uParam0->f_24 = { -83.3466f, 6436.804f, 35.1359f };
			uParam0->f_24.f_3 = { 9.9582f, 0f, -134.7812f };
			uParam0->f_24.f_6 = 58.8827f;
			*uParam0 = { -67.0695f, 6429.729f, 30.4383f };
			uParam0->f_1922[0 /*9*/] = { -66.4177f, 6428.49f, 35.0323f };
			uParam0->f_1922[0 /*9*/].f_3 = { -39.6313f, 0f, 112.9385f };
			uParam0->f_1922[0 /*9*/].f_6 = 57.0534f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { -71.5713f, 6434.253f, 30.4396f };
			uParam0->f_1742.f_27 = 70.9241f;
			uParam0->f_1742.f_108[0 /*3*/] = { -71.1927f, 6428.891f, 30.4394f };
			uParam0->f_1742.f_124[0] = 45.2484f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -73.277f, 6435.93f, 30.4402f };
			uParam0->f_1742.f_124[1] = 45.8937f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -78.9433f, 6441.69f, 30.4971f };
			uParam0->f_1742.f_124[2] = 44.1069f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -81.1158f, 6436.341f, 30.4943f };
			uParam0->f_1742.f_124[3] = 45.7366f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -75.5796f, 6424.689f, 30.4904f };
			uParam0->f_1742.f_124[4] = 44.5217f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 35:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -249.0387f, 6239.045f, 33.51245f };
			uParam0->f_38[0 /*27*/].f_3 = { -245.7872f, 6242.423f, 30.08331f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 46.1642f;
			uParam0->f_38[0 /*27*/].f_23 = { -249.0587f, 6237.587f, 30.48934f };
			uParam0->f_38[0 /*27*/].f_16 = { -249.5378f, 6237.945f, 31.93f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 45f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -245.5158f, 6239.048f, 30.4892f };
			uParam0->f_24 = { -223.8007f, 6241.24f, 34.9939f };
			uParam0->f_24.f_3 = { -0.6584f, 0f, 98.1777f };
			uParam0->f_24.f_6 = 33.186f;
			*uParam0 = { -249.6617f, 6235.997f, 30.4891f };
			uParam0->f_1922[0 /*9*/] = { -244.8033f, 6242.578f, 34.2428f };
			uParam0->f_1922[0 /*9*/].f_3 = { -40.6708f, 0f, 145.1215f };
			uParam0->f_1922[0 /*9*/].f_6 = 64.184f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { -251.6962f, 6234.687f, 30.4891f };
			uParam0->f_1742.f_27 = 243.0621f;
			uParam0->f_1742.f_108[0 /*3*/] = { -244.7509f, 6238.024f, 30.4896f };
			uParam0->f_1742.f_124[0] = 225.149f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -246.2962f, 6231.415f, 30.4894f };
			uParam0->f_1742.f_124[1] = 134.7321f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -244.3101f, 6228.875f, 30.5019f };
			uParam0->f_1742.f_124[2] = 134.7857f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -235.0201f, 6237.399f, 30.4898f };
			uParam0->f_1742.f_124[3] = 134.9227f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -237.9496f, 6240.667f, 30.4907f };
			uParam0->f_1742.f_124[4] = 132.8805f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 36:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 2556.065f, 4668.818f, 37.05597f };
			uParam0->f_38[0 /*27*/].f_3 = { 2552.245f, 4667.132f, 32.03184f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 208.9861f;
			uParam0->f_38[0 /*27*/].f_23 = { 2556.194f, 4669.482f, 33.05043f };
			uParam0->f_38[0 /*27*/].f_16 = { 2556.394f, 4669.029f, 34.5895f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -154f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 2554.165f, 4668.059f, 33.0233f };
			uParam0->f_24 = { 2524.19f, 4696.846f, 35.3387f };
			uParam0->f_24.f_3 = { 6.4304f, 0f, -121.3408f };
			uParam0->f_24.f_6 = 32.2333f;
			*uParam0 = { 2556.83f, 4671.37f, 32.9989f };
			uParam0->f_1922[0 /*9*/] = { 2551.094f, 4666.864f, 37.0818f };
			uParam0->f_1922[0 /*9*/].f_3 = { -36.8487f, 0f, -50.5276f };
			uParam0->f_1922[0 /*9*/].f_6 = 57.5607f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 2549.016f, 4668.996f, 33.0767f };
			uParam0->f_1742.f_27 = 359.9875f;
			uParam0->f_1742.f_108[0 /*3*/] = { 2552.807f, 4671.207f, 32.9544f };
			uParam0->f_1742.f_124[0] = 23.4604f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 2549.964f, 4678.307f, 32.9764f };
			uParam0->f_1742.f_124[1] = 21.7014f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 2545.627f, 4688.416f, 32.5933f };
			uParam0->f_1742.f_124[2] = 23.9501f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 2552.973f, 4681.752f, 32.9039f };
			uParam0->f_1742.f_124[3] = 16.9448f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 2549.834f, 4690.195f, 32.6529f };
			uParam0->f_1742.f_124[4] = 19.1831f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 37:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 2460.893f, 1587.034f, 36.20595f };
			uParam0->f_38[0 /*27*/].f_3 = { 2460.913f, 1591.732f, 29.72712f };
			uParam0->f_38[0 /*27*/].f_6 = 4.75f;
			uParam0->f_38[0 /*27*/].f_7 = 90.6692f;
			uParam0->f_38[0 /*27*/].f_23 = { 2461.743f, 1592.128f, 31.72039f };
			uParam0->f_38[0 /*27*/].f_16 = { 2461.013f, 1592.082f, 33.506f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 90f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 2461.22f, 1589.255f, 32.0443f };
			uParam0->f_24 = { 2554.219f, 1605.985f, 39.4534f };
			uParam0->f_24.f_3 = { 2.9221f, 0f, 108.0557f };
			uParam0->f_24.f_6 = 32.0143f;
			*uParam0 = { 2463.384f, 1585.373f, 31.7201f };
			uParam0->f_1922[0 /*9*/] = { 2461.326f, 1592.225f, 36.2419f };
			uParam0->f_1922[0 /*9*/].f_3 = { -48.7504f, 0f, -174.4014f };
			uParam0->f_1922[0 /*9*/].f_6 = 60.2443f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 2462.87f, 1593.299f, 31.7201f };
			uParam0->f_1742.f_27 = 232.3503f;
			uParam0->f_1742.f_108[0 /*3*/] = { 2464.2f, 1589.407f, 31.7204f };
			uParam0->f_1742.f_124[0] = 270.5459f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 2472.122f, 1589.47f, 31.7204f };
			uParam0->f_1742.f_124[1] = 270.4538f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 2481.73f, 1589.536f, 31.7204f };
			uParam0->f_1742.f_124[2] = 270.3932f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 2472.543f, 1582.706f, 31.7204f };
			uParam0->f_1742.f_124[3] = 236.267f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 2482.195f, 1578.474f, 31.7204f };
			uParam0->f_1742.f_124[4] = 249.5383f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 38:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -2204.263f, 4241.036f, 47.07064f };
			uParam0->f_38[0 /*27*/].f_3 = { -2206.512f, 4244.067f, 50.31763f };
			uParam0->f_38[0 /*27*/].f_6 = 9f;
			uParam0->f_38[0 /*27*/].f_7 = 215.8775f;
			uParam0->f_38[0 /*27*/].f_23 = { -2201.778f, 4245.773f, 47.29582f };
			uParam0->f_38[0 /*27*/].f_16 = { -2201.597f, 4245.499f, 48.8956f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -143f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -2203.335f, 4244.427f, 47.3305f };
			uParam0->f_24 = { -2203.167f, 4289.137f, 57.1272f };
			uParam0->f_24.f_3 = { -14.5968f, 0f, 165.7235f };
			uParam0->f_24.f_6 = 26.2662f;
			*uParam0 = { -2203.834f, 4245.811f, 46.9031f };
			uParam0->f_1922[0 /*9*/] = { -2201.486f, 4245.646f, 50.0007f };
			uParam0->f_1922[0 /*9*/].f_3 = { -39.3492f, 0f, 97.0326f };
			uParam0->f_1922[0 /*9*/].f_6 = 63.7082f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { -2210.007f, 4257.927f, 46.3102f };
			uParam0->f_1742.f_27 = 0f;
			uParam0->f_1742.f_108[0 /*3*/] = { -2204.835f, 4247.093f, 46.6831f };
			uParam0->f_1742.f_124[0] = 37.0444f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -2211.009f, 4253.173f, 46.3205f };
			uParam0->f_1742.f_124[1] = 65.1199f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -2220.877f, 4256.592f, 45.5691f };
			uParam0->f_1742.f_124[2] = 67.5084f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -2209.193f, 4246.208f, 46.5722f };
			uParam0->f_1742.f_124[3] = 57.1749f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -2219.052f, 4250.296f, 45.6889f };
			uParam0->f_1742.f_124[4] = 67.5023f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 39:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 220.7273f, 2601.928f, 48.24141f };
			uParam0->f_38[0 /*27*/].f_3 = { 215.3755f, 2600.983f, 43.25517f };
			uParam0->f_38[0 /*27*/].f_6 = 5.5f;
			uParam0->f_38[0 /*27*/].f_7 = 194.0507f;
			uParam0->f_38[0 /*27*/].f_23 = { 215.0567f, 2601.512f, 44.75016f };
			uParam0->f_38[0 /*27*/].f_16 = { 215.0199f, 2601.026f, 46.297f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -170f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 218.0665f, 2601.817f, 44.7668f };
			uParam0->f_24 = { 203.8715f, 2620.372f, 47.9511f };
			uParam0->f_24.f_3 = { 0.9185f, 0f, -139.0046f };
			uParam0->f_24.f_6 = 25.1587f;
			*uParam0 = { 211.8593f, 2605.902f, 44.9672f };
			uParam0->f_1922[0 /*9*/] = { 214.6859f, 2601.036f, 47.936f };
			uParam0->f_1922[0 /*9*/].f_3 = { -35.1379f, 0f, -59.8548f };
			uParam0->f_1922[0 /*9*/].f_6 = 62.3358f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { 221.5349f, 2608.276f, 45.219f };
			uParam0->f_1742.f_27 = 2.3625f;
			uParam0->f_1742.f_108[0 /*3*/] = { 217.5363f, 2604.545f, 44.9176f };
			uParam0->f_1742.f_124[0] = 10.8359f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 215.546f, 2615.004f, 46.0539f };
			uParam0->f_1742.f_124[1] = 10.3759f;
			uParam0->f_1742.f_130[0] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 208.0219f, 2618.404f, 46.4394f };
			uParam0->f_1742.f_124[2] = 38.3398f;
			uParam0->f_1742.f_130[0] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 225.5106f, 2608.12f, 45.156f };
			uParam0->f_1742.f_124[3] = 34.4217f;
			uParam0->f_1742.f_130[0] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 221.6936f, 2616.874f, 45.894f };
			uParam0->f_1742.f_124[4] = 14.1856f;
			uParam0->f_1742.f_130[0] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 40:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 186.232f, 2784.173f, 49.26564f };
			uParam0->f_38[0 /*27*/].f_3 = { 185.4784f, 2788.869f, 42.74625f };
			uParam0->f_38[0 /*27*/].f_6 = 4f;
			uParam0->f_38[0 /*27*/].f_7 = 96.4365f;
			uParam0->f_38[0 /*27*/].f_23 = { 185.9816f, 2789.387f, 44.5275f };
			uParam0->f_38[0 /*27*/].f_16 = { 185.4518f, 2789.384f, 46.0915f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 99.5f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 186.1719f, 2786.343f, 45.0144f };
			uParam0->f_24 = { 204.1797f, 2781.61f, 46.8041f };
			uParam0->f_24.f_3 = { 2.1959f, 0f, 70.7072f };
			uParam0->f_24.f_6 = 30.0687f;
			*uParam0 = { 187.7611f, 2782.947f, 44.6553f };
			uParam0->f_1922[0 /*9*/] = { 186.8019f, 2782.575f, 49.2501f };
			uParam0->f_1922[0 /*9*/].f_3 = { -40.3641f, 0f, -20.6897f };
			uParam0->f_1922[0 /*9*/].f_6 = 61.8127f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 188.1871f, 2790.814f, 44.5641f };
			uParam0->f_1742.f_27 = 263.0688f;
			uParam0->f_1742.f_108[0 /*3*/] = { 190.1576f, 2787.299f, 44.6088f };
			uParam0->f_1742.f_124[0] = 282.2347f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 188.926f, 2794.514f, 44.6552f };
			uParam0->f_1742.f_124[1] = 6.4226f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 193.6776f, 2794.987f, 44.6552f };
			uParam0->f_1742.f_124[2] = 8.4438f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 188.1367f, 2802.647f, 44.6552f };
			uParam0->f_1742.f_124[3] = 4.8248f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 192.7628f, 2803.063f, 44.6552f };
			uParam0->f_1742.f_124[4] = 8.5929f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 41:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 641.296f, 2771.37f, 40.68779f };
			uParam0->f_38[0 /*27*/].f_3 = { 637.1742f, 2771.076f, 44.58272f };
			uParam0->f_38[0 /*27*/].f_6 = 2f;
			uParam0->f_38[0 /*27*/].f_7 = 184.4578f;
			uParam0->f_38[0 /*27*/].f_23 = { 636.962f, 2772.022f, 41.02439f };
			uParam0->f_38[0 /*27*/].f_16 = { 636.8882f, 2771.198f, 42.5919f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -176f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 639.45f, 2771.2f, 41.2f };
			uParam0->f_24 = { 680.7204f, 2782.697f, 45.1229f };
			uParam0->f_24.f_3 = { 0.1065f, 0f, 80.5649f };
			uParam0->f_24.f_6 = 34.4741f;
			*uParam0 = { 643.8202f, 2787.873f, 40.9563f };
			uParam0->f_1922[0 /*9*/] = { 641.882f, 2794.91f, 44.633f };
			uParam0->f_1922[0 /*9*/].f_3 = { -39.3967f, 0f, -161.2362f };
			uParam0->f_1922[0 /*9*/].f_6 = 55.4012f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { 637.2254f, 2784.663f, 41.0101f };
			uParam0->f_1742.f_27 = 227.5745f;
			uParam0->f_1742.f_108[0 /*3*/] = { 638.8456f, 2776.42f, 40.969f };
			uParam0->f_1742.f_124[0] = 4.5972f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 644.3888f, 2779.171f, 40.9367f };
			uParam0->f_1742.f_124[1] = 275.5146f;
			uParam0->f_1742.f_130[0] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 647.0148f, 2770.983f, 40.9766f };
			uParam0->f_1742.f_124[2] = 183.5678f;
			uParam0->f_1742.f_130[0] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 649.6042f, 2757.442f, 40.9613f };
			uParam0->f_1742.f_124[3] = 202.3017f;
			uParam0->f_1742.f_130[0] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 653.1031f, 2764.209f, 40.9388f };
			uParam0->f_1742.f_124[4] = 228.5975f;
			uParam0->f_1742.f_130[0] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 42:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -1131.622f, 2702.445f, 20.78433f };
			uParam0->f_38[0 /*27*/].f_3 = { -1129.754f, 2700.222f, 17.56647f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 308.0592f;
			uParam0->f_38[0 /*27*/].f_23 = { -1128.031f, 2697.541f, 17.80039f };
			uParam0->f_38[0 /*27*/].f_16 = { -1127.666f, 2697.752f, 19.3395f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -48f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -1130.938f, 2701.133f, 17.8004f };
			uParam0->f_24 = { -1154.722f, 2665.794f, 20.9318f };
			uParam0->f_24.f_3 = { 2.0466f, 0f, -47.8797f };
			uParam0->f_24.f_6 = 26.9081f;
			*uParam0 = { -1129.377f, 2697.944f, 17.8005f };
			uParam0->f_1922[0 /*9*/] = { -1128.825f, 2698.855f, 21.1368f };
			uParam0->f_1922[0 /*9*/].f_3 = { -34.5325f, 0f, 54.3263f };
			uParam0->f_1922[0 /*9*/].f_6 = 59.8904f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { -1129.415f, 2697.958f, 17.8003f };
			uParam0->f_1742.f_27 = 148.8793f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1131.814f, 2697.076f, 17.8004f };
			uParam0->f_1742.f_124[0] = 153.0315f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1135.403f, 2690.03f, 17.8004f };
			uParam0->f_1742.f_124[1] = 152.989f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1138.859f, 2682.206f, 17.1049f };
			uParam0->f_1742.f_124[2] = 174.7645f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1135.563f, 2672.686f, 17.0939f };
			uParam0->f_1742.f_124[3] = 219.4992f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1138.647f, 2667.399f, 17.0928f };
			uParam0->f_1742.f_124[4] = 178.486f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 43:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -9.27419f, -1648.472f, 33.09653f };
			uParam0->f_38[0 /*27*/].f_3 = { -13.00892f, -1645.338f, 27.81558f };
			uParam0->f_38[0 /*27*/].f_6 = 4f;
			uParam0->f_38[0 /*27*/].f_7 = 153.8012f;
			uParam0->f_38[0 /*27*/].f_23 = { -8.29621f, -1648.12f, 28.32089f };
			uParam0->f_38[0 /*27*/].f_16 = { -8.7565f, -1648.45f, 29.9717f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 140f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -10.944f, -1646.76f, 28.3125f };
			uParam0->f_24 = { 30.3715f, -1607.508f, 36.8431f };
			uParam0->f_24.f_3 = { -3.1524f, 0f, 139.9197f };
			uParam0->f_24.f_6 = 21.3688f;
			*uParam0 = { -7.1931f, -1648.7f, 28.3206f };
			uParam0->f_1922[0 /*9*/] = { -7.8353f, -1649.2f, 32.719f };
			uParam0->f_1922[0 /*9*/].f_3 = { -35.0705f, 0f, 28.4357f };
			uParam0->f_1922[0 /*9*/].f_6 = 56.1118f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 6;
			uParam0->f_1742.f_24 = { -1.0175f, -1653.235f, 28.3206f };
			uParam0->f_1742.f_27 = 308.6224f;
			uParam0->f_1742.f_108[0 /*3*/] = { -8.7616f, -1644f, 28.1685f };
			uParam0->f_1742.f_124[0] = 319.3071f;
			uParam0->f_1742.f_130[0] = 50.0901f;
			uParam0->f_1742.f_108[1 /*3*/] = { -13.2855f, -1639.263f, 28.1651f };
			uParam0->f_1742.f_124[1] = 320.2909f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -4.2297f, -1646.732f, 28.1645f };
			uParam0->f_1742.f_124[2] = 231.2027f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 0.6959f, -1650.679f, 28.1606f };
			uParam0->f_1742.f_124[3] = 231.2781f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 6.6154f, -1654.31f, 28.1579f };
			uParam0->f_1742.f_124[4] = 264.0044f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 44:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 1023.65f, -2401.359f, 34.94485f };
			uParam0->f_38[0 /*27*/].f_3 = { 1024.32f, -2395.398f, 28.73516f };
			uParam0->f_38[0 /*27*/].f_6 = 5f;
			uParam0->f_38[0 /*27*/].f_7 = 92.2894f;
			uParam0->f_38[0 /*27*/].f_23 = { 1026.166f, -2394.392f, 29.07515f };
			uParam0->f_38[0 /*27*/].f_16 = { 1025.504f, -2394.214f, 30.7512f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 85f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 1024.263f, -2398.404f, 29.1261f };
			uParam0->f_24 = { 1056.391f, -2400.214f, 36.3721f };
			uParam0->f_24.f_3 = { 1.2159f, 0f, 86.3154f };
			uParam0->f_24.f_6 = 41.0913f;
			*uParam0 = { 1026.017f, -2404.073f, 28.72f };
			uParam0->f_1922[0 /*9*/] = { 1025.464f, -2394.471f, 35.467f };
			uParam0->f_1922[0 /*9*/].f_3 = { -52.0974f, 0f, 175.3725f };
			uParam0->f_1922[0 /*9*/].f_6 = 63.314f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 10;
			uParam0->f_1742.f_24 = { 1026.868f, -2383.195f, 29.3707f };
			uParam0->f_1742.f_27 = 278.7988f;
			uParam0->f_1742.f_108[0 /*3*/] = { 1028.058f, -2398.673f, 28.785f };
			uParam0->f_1742.f_124[0] = 263.1474f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 1028.79f, -2403.651f, 28.5859f };
			uParam0->f_1742.f_124[1] = 211.1604f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 1030.302f, -2394.42f, 28.9265f };
			uParam0->f_1742.f_124[2] = 323.9013f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 1030.851f, -2388.205f, 29.1169f };
			uParam0->f_1742.f_124[3] = 354.9865f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 1028.437f, -2409.648f, 28.3444f };
			uParam0->f_1742.f_124[4] = 176.4828f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 45:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 870.895f, -2230.893f, 29.01948f };
			uParam0->f_38[0 /*27*/].f_3 = { 870.6178f, -2233.976f, 34.8327f };
			uParam0->f_38[0 /*27*/].f_6 = 4.75f;
			uParam0->f_38[0 /*27*/].f_7 = 355.1031f;
			uParam0->f_38[0 /*27*/].f_23 = { 873.1846f, -2233.253f, 29.54528f };
			uParam0->f_38[0 /*27*/].f_16 = { 873.3047f, -2232.607f, 31.0195f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -5f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { 870.8577f, -2232.323f, 29.5508f };
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
			uParam0->f_1742.f_108[0 /*3*/] = { 870.4635f, -2235.976f, 29.6135f };
			uParam0->f_1742.f_124[0] = 175.5827f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 865.8381f, -2235.665f, 29.5193f };
			uParam0->f_1742.f_124[1] = 126.777f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 875.8398f, -2239.864f, 29.4001f };
			uParam0->f_1742.f_124[2] = 264.6278f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 864.8415f, -2239.633f, 29.3801f };
			uParam0->f_1742.f_124[3] = 85.2316f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 857.426f, -2236.423f, 29.3134f };
			uParam0->f_1742.f_124[4] = 105.4882f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 46:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -662.1819f, -2377.943f, 17.99851f };
			uParam0->f_38[0 /*27*/].f_3 = { -665.3298f, -2383.396f, 12.70213f };
			uParam0->f_38[0 /*27*/].f_6 = 4.25f;
			uParam0->f_38[0 /*27*/].f_7 = 246.1582f;
			uParam0->f_38[0 /*27*/].f_23 = { -667.0486f, -2383.269f, 12.92401f };
			uParam0->f_38[0 /*27*/].f_16 = { -666.3141f, -2383.771f, 14.6044f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -120f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -663.8541f, -2380.389f, 12.9446f };
			uParam0->f_24 = { -719.574f, -2366.942f, 20.1524f };
			uParam0->f_24.f_3 = { 1.5858f, 0f, -92.4432f };
			uParam0->f_24.f_6 = 25.2947f;
			*uParam0 = { -662.9977f, -2375.878f, 12.9198f };
			uParam0->f_1922[0 /*9*/] = { -666.2004f, -2383.66f, 17.4456f };
			uParam0->f_1922[0 /*9*/].f_3 = { -41.4322f, 0f, -22.9677f };
			uParam0->f_1922[0 /*9*/].f_6 = 64.8067f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 10;
			uParam0->f_1742.f_24 = { -659.9097f, -2368.972f, 12.9446f };
			uParam0->f_1742.f_27 = 49.4983f;
			uParam0->f_1742.f_108[0 /*3*/] = { -667.7959f, -2378.347f, 12.8602f };
			uParam0->f_1742.f_124[0] = 59.5981f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -668.5652f, -2372.979f, 12.8107f };
			uParam0->f_1742.f_124[1] = 27.3385f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -674.8391f, -2379.854f, 12.8041f };
			uParam0->f_1742.f_124[2] = 100.3572f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -670.3742f, -2383.357f, 12.8684f };
			uParam0->f_1742.f_124[3] = 121.2465f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -679.6597f, -2387.965f, 12.8113f };
			uParam0->f_1742.f_124[4] = 113.4791f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 47:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -1086.132f, -2237.118f, 18.6774f };
			uParam0->f_38[0 /*27*/].f_3 = { -1091.123f, -2232.126f, 11.67346f };
			uParam0->f_38[0 /*27*/].f_6 = 3.75f;
			uParam0->f_38[0 /*27*/].f_7 = 132.9527f;
			uParam0->f_38[0 /*27*/].f_23 = { -1090.987f, -2231.392f, 12.22213f };
			uParam0->f_38[0 /*27*/].f_16 = { -1091.348f, -2231.695f, 13.7872f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -135f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -1088.616f, -2235.098f, 12.2182f };
			uParam0->f_24 = { -1089.117f, -2209.689f, 16.848f };
			uParam0->f_24.f_3 = { 1.8425f, 0f, -162.2026f };
			uParam0->f_24.f_6 = 38.658f;
			*uParam0 = { -1084.306f, -2237.953f, 12.2685f };
			uParam0->f_1922[0 /*9*/] = { -1092.002f, -2230.709f, 18.7219f };
			uParam0->f_1922[0 /*9*/].f_3 = { -41.9243f, 0f, -135.0189f };
			uParam0->f_1922[0 /*9*/].f_6 = 57.1276f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 10;
			uParam0->f_1742.f_24 = { -1078.761f, -2242.177f, 12.2722f };
			uParam0->f_1742.f_27 = 307.3823f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1086.267f, -2232.278f, 12.2336f };
			uParam0->f_1742.f_124[0] = 314.623f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1082.558f, -2234.562f, 12.2378f };
			uParam0->f_1742.f_124[1] = 282.1199f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1089.81f, -2228.242f, 12.235f };
			uParam0->f_1742.f_124[2] = 1.351f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1094.435f, -2223.478f, 12.2355f };
			uParam0->f_1742.f_124[3] = 23.0358f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1077.579f, -2238.853f, 12.2399f };
			uParam0->f_1742.f_124[4] = 248.6185f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 48:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -341.6828f, -1466.341f, 28.86167f };
			uParam0->f_38[0 /*27*/].f_3 = { -346.6502f, -1466.225f, 32.95016f };
			uParam0->f_38[0 /*27*/].f_6 = 8.25f;
			uParam0->f_38[0 /*27*/].f_7 = 96.3665f;
			uParam0->f_38[0 /*27*/].f_23 = { -342.0189f, -1466.667f, 29.61167f };
			uParam0->f_38[0 /*27*/].f_16 = { -342.7317f, -1466.629f, 31.2761f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 90f };
			uParam0->f_38[0 /*27*/].f_22 = 5;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -342.5126f, -1468.675f, 29.6107f };
			uParam0->f_24 = { -310.1259f, -1433.784f, 36.4266f };
			uParam0->f_24.f_3 = { -2.5852f, 0f, 142.0256f };
			uParam0->f_24.f_6 = 23.0369f;
			*uParam0 = { -341.5999f, -1471.628f, 29.7515f };
			uParam0->f_1922[0 /*9*/] = { -342.7205f, -1471.862f, 33.2148f };
			uParam0->f_1922[0 /*9*/].f_3 = { -32.0401f, 0f, -23.2693f };
			uParam0->f_1922[0 /*9*/].f_6 = 56.3666f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { -356.7247f, -1463.142f, 28.6324f };
			uParam0->f_1742.f_27 = 5.3571f;
			uParam0->f_1742.f_108[0 /*3*/] = { -339.002f, -1467.799f, 29.5844f };
			uParam0->f_1742.f_124[0] = 281.1683f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -339.1405f, -1462.892f, 29.59f };
			uParam0->f_1742.f_124[1] = 293.1545f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -332.1327f, -1458.45f, 29.4955f };
			uParam0->f_1742.f_124[2] = 306.6605f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -330.6393f, -1464.046f, 29.5099f };
			uParam0->f_1742.f_124[3] = 298.5376f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -336.3814f, -1474.688f, 29.5482f };
			uParam0->f_1742.f_124[4] = 212.1829f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 49:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { -1240.189f, -259.5058f, 41.04411f };
			uParam0->f_38[0 /*27*/].f_3 = { -1242.814f, -260.9294f, 37.77705f };
			uParam0->f_38[0 /*27*/].f_6 = 3.25f;
			uParam0->f_38[0 /*27*/].f_7 = 211.7432f;
			uParam0->f_38[0 /*27*/].f_23 = { -1243.636f, -260.3023f, 37.94491f };
			uParam0->f_38[0 /*27*/].f_16 = { -1243.329f, -261.0626f, 39.5057f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -151.5f };
			uParam0->f_38[0 /*27*/].f_22 = 6;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_3[0 /*3*/] = { -1241.54f, -259.8841f, 37.9445f };
			uParam0->f_24 = { -1238.615f, -237.732f, 41.2694f };
			uParam0->f_24.f_3 = { -0.1405f, 0f, 174.5821f };
			uParam0->f_24.f_6 = 29.2463f;
			*uParam0 = { -1239.297f, -257.472f, 37.9577f };
			uParam0->f_1922[0 /*9*/] = { -1243.715f, -261.1733f, 41.046f };
			uParam0->f_1922[0 /*9*/].f_3 = { -41.9739f, 0f, -52.1773f };
			uParam0->f_1922[0 /*9*/].f_6 = 64.1421f;
			uParam0->f_36 = 1;
			uParam0->f_33 = 2;
			uParam0->f_1742.f_24 = { -1231.752f, -261.1873f, 37.7356f };
			uParam0->f_1742.f_27 = 309.7137f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1243.307f, -256.9916f, 38.0127f };
			uParam0->f_1742.f_124[0] = 28.1569f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1239.413f, -252.4819f, 38.1356f };
			uParam0->f_1742.f_124[1] = 345.0404f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1247.614f, -259.2161f, 38.0121f };
			uParam0->f_1742.f_124[2] = 83.7995f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1254.619f, -261.4668f, 38.0736f };
			uParam0->f_1742.f_124[3] = 117.0801f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1234.794f, -253.125f, 38.1299f };
			uParam0->f_1742.f_124[4] = 250.101f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_34 = 1;
			break;
		
		case 50:
			uParam0->f_38[0 /*27*/].f_26 = 2;
			uParam0->f_38[0 /*27*/] = { 901.9956f, -148.9021f, 79.34973f };
			uParam0->f_38[0 /*27*/].f_3 = { 897.7418f, -146.4941f, 75.32096f };
			uParam0->f_38[0 /*27*/].f_6 = 3.75f;
			uParam0->f_38[0 /*27*/].f_7 = 150.9974f;
			uParam0->f_38[0 /*27*/].f_23 = { 897.5184f, -145.3406f, 75.70785f };
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
			*uParam0 = { -1405.411f, 526.8572f, 122.8361f };
			uParam0->f_3[0 /*3*/] = { -1405.411f, 526.8572f, 122.8361f };
			uParam0->f_3[1 /*3*/] = { -1405.087f, 540.0269f, 121.9285f };
			uParam0->f_24 = { -1426.95f, 560.2891f, 134.0229f };
			uParam0->f_24.f_3 = { -12.2373f, 0f, -138.4202f };
			uParam0->f_24.f_6 = 30.8201f;
			uParam0->f_13 = { -1409.14f, 534.6944f, 121.9111f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1404.915f, 526.8506f, 121.8675f };
			uParam0->f_38[0 /*27*/].f_3 = { -1406.637f, 526.8434f, 126.5861f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 262.0459f;
			uParam0->f_38[0 /*27*/].f_23 = { -1405.411f, 526.8572f, 122.8361f };
			uParam0->f_38[0 /*27*/].f_16 = { -1405.407f, 528.2228f, 124.34f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -88.8f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1406.144f, 529.9474f, 122.8361f };
			uParam0->f_146[0 /*12*/].f_11 = 11.333f;
			uParam0->f_1922[0 /*9*/] = { -1405.92f, 525.1206f, 126.2389f };
			uParam0->f_1922[0 /*9*/].f_3 = { -45.9372f, 0f, 12.568f };
			uParam0->f_1922[0 /*9*/].f_6 = 56.7555f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1404.633f, 540.3209f, 120.9692f };
			uParam0->f_38[1 /*27*/].f_3 = { -1406.55f, 540.3247f, 125.6773f };
			uParam0->f_38[1 /*27*/].f_6 = 8f;
			uParam0->f_38[1 /*27*/].f_7 = 265.3779f;
			uParam0->f_38[1 /*27*/].f_23 = { -1405.087f, 540.0269f, 121.9285f };
			uParam0->f_38[1 /*27*/].f_16 = { -1405.477f, 535.6528f, 123.37f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -88.8f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1405.871f, 543.8805f, 125.0912f };
			uParam0->f_1922[1 /*9*/].f_3 = { -41.1469f, 0f, 159.0998f };
			uParam0->f_1922[1 /*9*/].f_6 = 68.4407f;
			uParam0->f_1742.f_24 = { -1409.29f, 538.0002f, 121.9135f };
			uParam0->f_1742.f_27 = 93.7343f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1409.073f, 537.755f, 121.9144f };
			uParam0->f_1742.f_124[0] = 98.0524f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1409.026f, 541.6954f, 121.918f };
			uParam0->f_1742.f_124[1] = 104.4953f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1417.079f, 539.019f, 120.7941f };
			uParam0->f_1742.f_124[2] = 114.0971f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1416.728f, 535.2925f, 120.5692f };
			uParam0->f_1742.f_124[3] = 107.5656f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1423.547f, 534.5643f, 119.4372f };
			uParam0->f_1742.f_124[4] = 106.4241f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 52:
			*uParam0 = { 1336.899f, -1578.744f, 53.4443f };
			uParam0->f_3[0 /*3*/] = { 1336.899f, -1578.744f, 53.4443f };
			uParam0->f_3[1 /*3*/] = { 1351.944f, -1575.299f, 53.0439f };
			uParam0->f_24 = { 1369.593f, -1586.224f, 56.3956f };
			uParam0->f_24.f_3 = { -2.2156f, 0f, 66.1587f };
			uParam0->f_24.f_6 = 26.8035f;
			uParam0->f_13 = { 1338.163f, -1580.722f, 53.0517f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 1337.235f, -1579.398f, 52.80171f };
			uParam0->f_38[0 /*27*/].f_3 = { 1336.623f, -1578.602f, 55.91057f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 44.401f;
			uParam0->f_38[0 /*27*/].f_23 = { 1336.899f, -1578.744f, 53.4443f };
			uParam0->f_38[0 /*27*/].f_16 = { 1335.67f, -1579.34f, 54.49f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 36.75f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 1338.163f, -1580.722f, 53.0517f };
			uParam0->f_146[0 /*12*/].f_11 = 233.6165f;
			uParam0->f_1922[0 /*9*/] = { 1344.815f, -1579.647f, 55.9164f };
			uParam0->f_1922[0 /*9*/].f_3 = { -20.7335f, 0f, 83.8051f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 1347.031f, -1573.104f, 52.91921f };
			uParam0->f_38[1 /*27*/].f_3 = { 1352.191f, -1570.003f, 55.65532f };
			uParam0->f_38[1 /*27*/].f_6 = 2.75f;
			uParam0->f_38[1 /*27*/].f_7 = 31.013f;
			uParam0->f_38[1 /*27*/].f_23 = { 1351.944f, -1575.299f, 53.0439f };
			uParam0->f_38[1 /*27*/].f_16 = { 1346.88f, -1573.19f, 54.49f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 30.65f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { 1347.828f, -1577.406f, 55.9645f };
			uParam0->f_1922[1 /*9*/].f_3 = { -20.5771f, 0f, -12.7006f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 1350.608f, -1573.058f, 53.0515f };
			uParam0->f_1742.f_27 = 214.7269f;
			uParam0->f_1742.f_108[0 /*3*/] = { 1354.652f, -1578.635f, 52.7106f };
			uParam0->f_1742.f_124[0] = 215.0819f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 1372.814f, -1582.146f, 52.6f };
			uParam0->f_1742.f_124[1] = 305.4971f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 1386.53f, -1572.217f, 53.9185f };
			uParam0->f_1742.f_124[2] = 305.6955f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 1353.222f, -1589.885f, 51.5701f };
			uParam0->f_1742.f_124[3] = 128.0031f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 1344.09f, -1596.932f, 51.0919f };
			uParam0->f_1742.f_124[4] = 127.4157f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 6;
			uParam0->f_34 = 0;
			break;
		
		case 53:
			*uParam0 = { -104.9801f, 6529.164f, 29.1719f };
			uParam0->f_3[0 /*3*/] = { -104.9801f, 6529.164f, 29.1719f };
			uParam0->f_3[1 /*3*/] = { -105.0318f, 6534.678f, 28.8092f };
			uParam0->f_24 = { -110.173f, 6576.258f, 32.1717f };
			uParam0->f_24.f_3 = { 0.0198f, 0f, -177.4159f };
			uParam0->f_24.f_6 = 18.7421f;
			uParam0->f_13 = { -108.2526f, 6531.63f, 28.8092f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -105.3736f, 6527.765f, 28.95259f };
			uParam0->f_38[0 /*27*/].f_3 = { -106.4736f, 6528.864f, 31.61336f };
			uParam0->f_38[0 /*27*/].f_6 = 1.25f;
			uParam0->f_38[0 /*27*/].f_7 = 134.6413f;
			uParam0->f_38[0 /*27*/].f_23 = { -104.9801f, 6529.164f, 29.1719f };
			uParam0->f_38[0 /*27*/].f_16 = { -106.6888f, 6528.88f, 30.3018f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -137.2f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -108.2526f, 6531.63f, 28.8092f };
			uParam0->f_146[0 /*12*/].f_11 = 49.2311f;
			uParam0->f_1922[0 /*9*/] = { -100.0377f, 6532.986f, 31.7713f };
			uParam0->f_1922[0 /*9*/].f_3 = { -15.7838f, 0f, 102.1657f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -99.83927f, 6532.972f, 28.76542f };
			uParam0->f_38[1 /*27*/].f_3 = { -103.0506f, 6529.76f, 31.86795f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 225.295f;
			uParam0->f_38[1 /*27*/].f_23 = { -105.0318f, 6534.678f, 28.8092f };
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
			uParam0->f_1742.f_108[0 /*3*/] = { -104.5972f, 6534.244f, 28.8092f };
			uParam0->f_1742.f_124[0] = 46.119f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -110.2358f, 6539.664f, 28.7473f };
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
			uParam0->f_3[1 /*3*/] = { -294.5604f, 6338.522f, 31.2827f };
			uParam0->f_24 = { -338.4015f, 6342.919f, 33.9788f };
			uParam0->f_24.f_3 = { -0.5933f, 0f, -109.2485f };
			uParam0->f_24.f_6 = 26.0857f;
			uParam0->f_13 = { -774.1072f, 303.6408f, 84.7069f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -301.2911f, 6327.554f, 31.74294f };
			uParam0->f_38[0 /*27*/].f_3 = { -302.7279f, 6326.001f, 34.44438f };
			uParam0->f_38[0 /*27*/].f_6 = 1f;
			uParam0->f_38[0 /*27*/].f_7 = 220.679f;
			uParam0->f_38[0 /*27*/].f_23 = { -302.6793f, 6327.531f, 31.8915f };
			uParam0->f_38[0 /*27*/].f_16 = { -301.07f, 6327.54f, 33.36f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, -136.7f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -305.3481f, 6331.015f, 31.4893f };
			uParam0->f_146[0 /*12*/].f_11 = 48.1647f;
			uParam0->f_1922[0 /*9*/] = { -306.7626f, 6327.715f, 34.1136f };
			uParam0->f_1922[0 /*9*/].f_3 = { -23.3308f, 0f, -79.0093f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -289.3913f, 6337.942f, 29.08413f };
			uParam0->f_38[1 /*27*/].f_3 = { -293.8093f, 6333.272f, 34.08807f };
			uParam0->f_38[1 /*27*/].f_6 = 2f;
			uParam0->f_38[1 /*27*/].f_7 = 225.6549f;
			uParam0->f_38[1 /*27*/].f_23 = { -294.5604f, 6338.522f, 31.2827f };
			uParam0->f_38[1 /*27*/].f_16 = { -294.03f, 6333.04f, 32.98f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, -133f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -300.2161f, 6330.604f, 33.8086f };
			uParam0->f_1922[1 /*9*/].f_3 = { -10.9035f, 0f, -49.6255f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -293.1363f, 6337.654f, 31.4098f };
			uParam0->f_1742.f_27 = 38.2211f;
			uParam0->f_1742.f_108[0 /*3*/] = { -295.2674f, 6339.103f, 31.2112f };
			uParam0->f_1742.f_124[0] = 45.0538f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -303.0802f, 6346.869f, 29.8847f };
			uParam0->f_1742.f_124[1] = 45.1332f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -301.9123f, 6360.823f, 29.504f };
			uParam0->f_1742.f_124[2] = 312.3356f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -320.7206f, 6350.699f, 29.3934f };
			uParam0->f_1742.f_124[3] = 133.3218f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -329.3412f, 6342.112f, 29.2682f };
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
			uParam0->f_13 = { -12.7249f, 6559.958f, 30.971f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -15.00959f, 6556.497f, 32.01028f };
			uParam0->f_38[0 /*27*/].f_3 = { -16.19772f, 6557.742f, 34.74551f };
			uParam0->f_38[0 /*27*/].f_6 = 1.25f;
			uParam0->f_38[0 /*27*/].f_7 = 136.3973f;
			uParam0->f_38[0 /*27*/].f_23 = { -14.8944f, 6557.818f, 32.2454f };
			uParam0->f_38[0 /*27*/].f_16 = { -14.66f, 6556.14f, 33.75f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 135f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -12.7249f, 6559.958f, 30.971f };
			uParam0->f_146[0 /*12*/].f_11 = 315.8066f;
			uParam0->f_1922[0 /*9*/] = { -18.339f, 6560.119f, 34.7698f };
			uParam0->f_1922[0 /*9*/].f_3 = { -16.6529f, 0f, -109.5559f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -16.8522f, 6565.349f, 30.65897f };
			uParam0->f_38[1 /*27*/].f_3 = { -13.64239f, 6568.558f, 33.62691f };
			uParam0->f_38[1 /*27*/].f_6 = 1.75f;
			uParam0->f_38[1 /*27*/].f_7 = 44.047f;
			uParam0->f_38[1 /*27*/].f_23 = { -12.2099f, 6563.895f, 30.9552f };
			uParam0->f_38[1 /*27*/].f_16 = { -16.99f, 6565.21f, 32.34f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 45.1f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -9.7957f, 6554.708f, 35.1352f };
			uParam0->f_1922[1 /*9*/].f_3 = { -19.8197f, 0f, 18.0251f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { -13.5522f, 6565.253f, 30.9267f };
			uParam0->f_1742.f_27 = 221.1647f;
			uParam0->f_1742.f_108[0 /*3*/] = { -7.4587f, 6559.077f, 30.9709f };
			uParam0->f_1742.f_124[0] = 224.95f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -3.6101f, 6555.218f, 30.934f };
			uParam0->f_1742.f_124[1] = 225.1458f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 2.3391f, 6549.301f, 30.3709f };
			uParam0->f_1742.f_124[2] = 225.4122f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 0.4904f, 6539.524f, 30.3861f };
			uParam0->f_1742.f_124[3] = 135.0325f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 18.4567f, 6550.539f, 30.3861f };
			uParam0->f_1742.f_124[4] = 314.7267f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 56:
			*uParam0 = { 1900.406f, 3772.148f, 31.886f };
			uParam0->f_3[0 /*3*/] = { 1898.915f, 3781.82f, 31.8819f };
			uParam0->f_3[1 /*3*/] = { 1883.898f, 3774.326f, 31.7873f };
			uParam0->f_24 = { 1925.606f, 3757.141f, 34.3505f };
			uParam0->f_24.f_3 = { 0.5929f, 0f, 63.7656f };
			uParam0->f_24.f_6 = 21.8329f;
			uParam0->f_13 = { 1901.758f, 3770.143f, 31.7519f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 1898.433f, 3781.732f, 31.73598f };
			uParam0->f_38[0 /*27*/].f_3 = { 1899.448f, 3782.283f, 35.30321f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 123.484f;
			uParam0->f_38[0 /*27*/].f_23 = { 1898.915f, 3781.82f, 31.8819f };
			uParam0->f_38[0 /*27*/].f_16 = { 1899.13f, 3780.52f, 33.31f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 119.1f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 1901.758f, 3770.143f, 31.7519f };
			uParam0->f_146[0 /*12*/].f_11 = 210.6425f;
			uParam0->f_1922[0 /*9*/] = { 1893.778f, 3770.252f, 35.0531f };
			uParam0->f_1922[0 /*9*/].f_3 = { -20.2686f, 0f, -84.6772f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 1880.156f, 3772.427f, 34.53546f };
			uParam0->f_38[1 /*27*/].f_3 = { 1886.478f, 3776.083f, 31.58368f };
			uParam0->f_38[1 /*27*/].f_6 = 1.75f;
			uParam0->f_38[1 /*27*/].f_7 = 39.8771f;
			uParam0->f_38[1 /*27*/].f_23 = { 1883.898f, 3774.326f, 31.7873f };
			uParam0->f_38[1 /*27*/].f_16 = { 1880.01f, 3772.35f, 33.28f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 31.6f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { 1893.417f, 3770.267f, 35.0829f };
			uParam0->f_1922[1 /*9*/].f_3 = { -17.6513f, 0f, 69.9366f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 1885.583f, 3772.421f, 31.8156f };
			uParam0->f_1742.f_27 = 203.6179f;
			uParam0->f_1742.f_108[0 /*3*/] = { 1884.573f, 3767.766f, 31.8607f };
			uParam0->f_1742.f_124[0] = 208.1913f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 1891.307f, 3759.014f, 31.607f };
			uParam0->f_1742.f_124[1] = 210.2192f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 1887.656f, 3768.965f, 31.7966f };
			uParam0->f_1742.f_124[2] = 200.6109f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 1886.55f, 3748.047f, 31.6557f };
			uParam0->f_1742.f_124[3] = 121.3845f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 1905.564f, 3753.289f, 31.4482f };
			uParam0->f_1742.f_124[4] = 299.79f;
			uParam0->f_1742.f_130[4] = 0.6f;
			uParam0->f_36 = 2;
			uParam0->f_33 = 2;
			uParam0->f_34 = 0;
			break;
		
		case 57:
			*uParam0 = { 1663.031f, 4776.304f, 41.0075f };
			uParam0->f_3[0 /*3*/] = { 1663.031f, 4776.304f, 41.0075f };
			uParam0->f_3[1 /*3*/] = { 1661.818f, 4768.248f, 41.0075f };
			uParam0->f_24 = { 1696.1f, 4776.849f, 43.6956f };
			uParam0->f_24.f_3 = { 6.4054f, 0f, 94.3951f };
			uParam0->f_24.f_6 = 28.4081f;
			uParam0->f_13 = { 1664.526f, 4776.464f, 40.9783f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { 1661.922f, 4775.278f, 44.09471f };
			uParam0->f_38[0 /*27*/].f_3 = { 1661.731f, 4776.941f, 40.89644f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5f;
			uParam0->f_38[0 /*27*/].f_7 = 101.185f;
			uParam0->f_38[0 /*27*/].f_23 = { 1663.031f, 4776.304f, 41.0075f };
			uParam0->f_38[0 /*27*/].f_16 = { 1662f, 4774.67f, 42.47f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 97.4f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { 1664.526f, 4776.464f, 40.9783f };
			uParam0->f_146[0 /*12*/].f_11 = 270.1331f;
			uParam0->f_1922[0 /*9*/] = { 1662.714f, 4770.478f, 44.8333f };
			uParam0->f_1922[0 /*9*/].f_3 = { -26.9123f, 0f, -12.3788f };
			uParam0->f_1922[0 /*9*/].f_6 = 50f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { 1656.875f, 4767.401f, 40.50743f };
			uParam0->f_38[1 /*27*/].f_3 = { 1664.101f, 4768.458f, 44.29094f };
			uParam0->f_38[1 /*27*/].f_6 = 4.25f;
			uParam0->f_38[1 /*27*/].f_7 = 98.8964f;
			uParam0->f_38[1 /*27*/].f_23 = { 1661.818f, 4768.248f, 41.0075f };
			uParam0->f_38[1 /*27*/].f_16 = { 1657.89f, 4765.6f, 42.45f };
			uParam0->f_38[1 /*27*/].f_19 = { 0f, 0f, 7.6f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { 1663.792f, 4770.251f, 43.9323f };
			uParam0->f_1922[1 /*9*/].f_3 = { -21.1548f, 0f, 134.314f };
			uParam0->f_1922[1 /*9*/].f_6 = 50f;
			uParam0->f_1742.f_24 = { 1661.561f, 4768.141f, 41.0075f };
			uParam0->f_1742.f_27 = 281.5633f;
			uParam0->f_1742.f_108[0 /*3*/] = { 1667.218f, 4768.904f, 40.9318f };
			uParam0->f_1742.f_124[0] = 278.8245f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { 1675.248f, 4762.792f, 40.9741f };
			uParam0->f_1742.f_124[1] = 196.0204f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { 1678.105f, 4753.611f, 40.9893f };
			uParam0->f_1742.f_124[2] = 198.769f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { 1679.2f, 4778.584f, 40.9837f };
			uParam0->f_1742.f_124[3] = 1.7503f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { 1678.739f, 4790.436f, 40.9947f };
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
			uParam0->f_38[0 /*27*/] = { -174.797f, 503.2035f, 136.6536f };
			uParam0->f_38[0 /*27*/].f_3 = { -174.4876f, 501.8871f, 138.6536f };
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
			uParam0->f_38[1 /*27*/] = { -185.5276f, 501.6372f, 133.8779f };
			uParam0->f_38[1 /*27*/].f_3 = { -192.1181f, 500.2362f, 136.0939f };
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
			uParam0->f_38[0 /*27*/] = { 346.9647f, 440.7964f, 146.7072f };
			uParam0->f_38[0 /*27*/].f_3 = { 345.8796f, 440.2971f, 149.9908f };
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
			uParam0->f_38[1 /*27*/] = { 352.6306f, 432.4351f, 146.146f };
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
			uParam0->f_38[0 /*27*/] = { -754.0821f, 621.3502f, 140.7753f };
			uParam0->f_38[0 /*27*/].f_3 = { -753.3868f, 619.2969f, 144.6737f };
			uParam0->f_38[0 /*27*/].f_6 = 1.5625f;
			uParam0->f_38[0 /*27*/].f_7 = 110.3481f;
			uParam0->f_38[0 /*27*/].f_23 = { -754.0821f, 621.3502f, 140.7753f };
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
			uParam0->f_38[1 /*27*/] = { -754.1096f, 622.5068f, 140.2989f };
			uParam0->f_38[1 /*27*/].f_3 = { -757.1106f, 631.3733f, 145.0052f };
			uParam0->f_38[1 /*27*/].f_6 = 3.1875f;
			uParam0->f_38[1 /*27*/].f_7 = 110.3481f;
			uParam0->f_38[1 /*27*/].f_23 = { -754.1096f, 622.5068f, 140.2989f };
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
			uParam0->f_38[0 /*27*/] = { -685.1532f, 596.2136f, 142.6836f };
			uParam0->f_38[0 /*27*/].f_3 = { -686.1266f, 595.388f, 145.5112f };
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
			uParam0->f_38[1 /*27*/] = { -685.3328f, 599.2325f, 142.6945f };
			uParam0->f_38[1 /*27*/].f_3 = { -679.9803f, 603.7507f, 146.0125f };
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
			uParam0->f_38[0 /*27*/] = { 120.2277f, 564.24f, 182.9644f };
			uParam0->f_38[0 /*27*/].f_3 = { 118.6009f, 564.1241f, 185.5466f };
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
			uParam0->f_38[1 /*27*/] = { 134.1996f, 566.0651f, 182.8705f };
			uParam0->f_38[1 /*27*/].f_3 = { 129.5288f, 565.5358f, 185.1211f };
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
			uParam0->f_38[0 /*27*/] = { -559.0781f, 663.3232f, 144.5397f };
			uParam0->f_38[0 /*27*/].f_3 = { -560.3202f, 663.6382f, 146.826f };
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
			uParam0->f_38[1 /*27*/] = { -553.8307f, 661.7946f, 144.2398f };
			uParam0->f_38[1 /*27*/].f_3 = { -558.3751f, 662.9314f, 146.9211f };
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
			uParam0->f_38[0 /*27*/] = { -732.6531f, 593.1397f, 141.0619f };
			uParam0->f_38[0 /*27*/].f_3 = { -733.8533f, 593.8037f, 144.0151f };
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
			uParam0->f_38[1 /*27*/] = { -741.2551f, 597.9217f, 141.0924f };
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
			uParam0->f_38[0 /*27*/] = { -852.3071f, 694.8876f, 147.866f };
			uParam0->f_38[0 /*27*/].f_3 = { -853.6318f, 694.7849f, 150.5503f };
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
			uParam0->f_38[1 /*27*/] = { -862.2796f, 694.6273f, 148.0229f };
			uParam0->f_38[1 /*27*/].f_3 = { -868.9159f, 697.3097f, 151.3608f };
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
			*uParam0 = { -1302.448f, 455.2224f, 96.771f };
			uParam0->f_3[0 /*3*/] = { -1294.275f, 454.0578f, 96.7013f };
			uParam0->f_3[1 /*3*/] = { -1297.91f, 453.6508f, 96.7213f };
			uParam0->f_24 = { -1306.609f, 466.3748f, 101.9808f };
			uParam0->f_24.f_3 = { -14.3811f, 0f, -141.5052f };
			uParam0->f_24.f_6 = 47.8726f;
			uParam0->f_13 = { -1295.008f, 456.3158f, 96.1681f };
			uParam0->f_38[0 /*27*/].f_26 = 1;
			uParam0->f_38[0 /*27*/] = { -1294.373f, 454.6308f, 96.2746f };
			uParam0->f_38[0 /*27*/].f_3 = { -1294.326f, 453.504f, 99.1897f };
			uParam0->f_38[0 /*27*/].f_6 = 1.75f;
			uParam0->f_38[0 /*27*/].f_7 = 179.7048f;
			uParam0->f_38[0 /*27*/].f_23 = { -1294.389f, 454.463f, 96.5513f };
			uParam0->f_38[0 /*27*/].f_16 = { -1295.118f, 454.025f, 97.915f };
			uParam0->f_38[0 /*27*/].f_19 = { 0f, 0f, 180f };
			uParam0->f_38[0 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
			uParam0->f_38[0 /*27*/].f_12 = { Var0 };
			uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_146[0 /*12*/].f_8 = { -1294.309f, 455.405f, 96.3444f };
			uParam0->f_146[0 /*12*/].f_11 = 0.7367f;
			uParam0->f_1922[0 /*9*/] = { -1292.578f, 454.2545f, 99.3409f };
			uParam0->f_1922[0 /*9*/].f_3 = { -39.6077f, 0f, 69.4682f };
			uParam0->f_1922[0 /*9*/].f_6 = 46.1469f;
			uParam0->f_38[1 /*27*/].f_26 = 2;
			uParam0->f_38[1 /*27*/] = { -1298.06f, 455.0111f, 96.28043f };
			uParam0->f_38[1 /*27*/].f_3 = { -1298.078f, 451.717f, 99.54697f };
			uParam0->f_38[1 /*27*/].f_6 = 5f;
			uParam0->f_38[1 /*27*/].f_7 = 176.5304f;
			uParam0->f_38[1 /*27*/].f_23 = { -1297.903f, 454.2289f, 96.6315f };
			uParam0->f_38[1 /*27*/].f_16 = { -1300.563f, 454.0388f, 98.0586f };
			uParam0->f_38[1 /*27*/].f_19 = { -0.4682f, 0f, 180f };
			uParam0->f_38[1 /*27*/].f_22 = 2;
			func_58(uParam0->f_38[1 /*27*/].f_16, uParam0->f_38[1 /*27*/].f_19, &Var0, uParam0->f_38[1 /*27*/].f_22);
			uParam0->f_38[1 /*27*/].f_12 = { Var0 };
			uParam0->f_38[1 /*27*/].f_15 = Var0.f_3.f_2;
			uParam0->f_1922[1 /*9*/] = { -1300.981f, 454.1239f, 99.3252f };
			uParam0->f_1922[1 /*9*/].f_3 = { -31.7665f, 0f, -72.5331f };
			uParam0->f_1922[1 /*9*/].f_6 = 42.2252f;
			uParam0->f_1742.f_24 = { -1298.402f, 455.4963f, 96.4856f };
			uParam0->f_1742.f_27 = 356.4123f;
			uParam0->f_1742.f_108[0 /*3*/] = { -1295.846f, 457.1532f, 96.2299f };
			uParam0->f_1742.f_124[0] = 297.279f;
			uParam0->f_1742.f_130[0] = 1f;
			uParam0->f_1742.f_108[1 /*3*/] = { -1283.449f, 459.2665f, 95.2123f };
			uParam0->f_1742.f_124[1] = 277.3313f;
			uParam0->f_1742.f_130[1] = 0.9f;
			uParam0->f_1742.f_108[2 /*3*/] = { -1307.91f, 457.9644f, 97.3667f };
			uParam0->f_1742.f_124[2] = 270.7701f;
			uParam0->f_1742.f_130[2] = 0.8f;
			uParam0->f_1742.f_108[3 /*3*/] = { -1282.912f, 466.1473f, 95.0291f };
			uParam0->f_1742.f_124[3] = 95.758f;
			uParam0->f_1742.f_130[3] = 0.7f;
			uParam0->f_1742.f_108[4 /*3*/] = { -1298.734f, 464.2884f, 96.4425f };
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
			uParam0->f_38[0 /*27*/] = { 374.6152f, 428.3344f, 146.9068f };
			uParam0->f_38[0 /*27*/].f_3 = { 374.34f, 427.1751f, 144.896f };
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
			uParam0->f_38[1 /*27*/] = { 394.8998f, 427.1304f, 146.2929f };
			uParam0->f_38[1 /*27*/].f_3 = { 387.6972f, 427.8093f, 143.2496f };
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
			Var0 = { -968.2812f, -1432.925f, 8.1858f };
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
			Var0 = { -980.7506f, -1447.021f, 4.5223f };
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
	*uParam7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param4, 0f, Var0) };
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
			uParam0->f_1742.f_20 = { 1105.62f, -3163.579f, -38.5186f };
			uParam0->f_1742.f_23 = 347.4298f;
			uParam0->f_1742.f_28[0 /*3*/] = { 1099.509f, -3153.075f, -38.0166f };
			uParam0->f_1742.f_62[0] = -120f;
			uParam0->f_1742.f_28[1 /*3*/] = { 1099.509f, -3150.575f, -38.0166f };
			uParam0->f_1742.f_62[1] = -120f;
			uParam0->f_1742.f_28[2 /*3*/] = { 1099.509f, -3148.075f, -38.0166f };
			uParam0->f_1742.f_62[2] = -120f;
			uParam0->f_1742.f_28[3 /*3*/] = { 1099.509f, -3145.575f, -38.0166f };
			uParam0->f_1742.f_62[3] = -120f;
			uParam0->f_1742.f_28[4 /*3*/] = { 1099.509f, -3143.075f, -38.0166f };
			uParam0->f_1742.f_62[4] = -120f;
			uParam0->f_1742.f_28[5 /*3*/] = { 1103.249f, -3143.075f, -38.0166f };
			uParam0->f_1742.f_62[5] = 120f;
			uParam0->f_1742.f_28[6 /*3*/] = { 1103.249f, -3145.575f, -38.0166f };
			uParam0->f_1742.f_62[6] = 120f;
			uParam0->f_1742.f_28[7 /*3*/] = { 1103.249f, -3148.075f, -38.0166f };
			uParam0->f_1742.f_62[7] = 120f;
			uParam0->f_1742.f_28[8 /*3*/] = { 1103.249f, -3150.575f, -38.0166f };
			uParam0->f_1742.f_62[8] = 120f;
			uParam0->f_1742.f_28[9 /*3*/] = { 1103.249f, -3153.075f, -38.0166f };
			uParam0->f_1742.f_62[9] = 120f;
			uParam0->f_1742 = { 1109.873f, -3166.23f, -38.47612f };
			uParam0->f_1742.f_3 = { 1109.856f, -3167.784f, -34.36737f };
			uParam0->f_1742.f_6 = 5f;
			uParam0->f_1742.f_7 = 181.7343f;
			uParam0->f_1742.f_136 = { 1120.307f, -3152.937f, -35.6192f };
			uParam0->f_1742.f_149 = 0;
			uParam0->f_1742.f_167 = { 1111.614f, -3158.702f, -37.5608f };
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
			uParam0->f_1742 = { 996.5621f, -3164.368f, -40.40706f };
			uParam0->f_1742.f_3 = { 997.2445f, -3164.319f, -35.90715f };
			uParam0->f_1742.f_6 = 4.5f;
			uParam0->f_1742.f_7 = 111.1633f;
			uParam0->f_1742.f_136 = { 996.6504f, -3157.144f, -37.4737f };
			uParam0->f_1742.f_149 = 0;
			uParam0->f_1742.f_167 = { 1009.079f, -3163.995f, -39.909f };
			break;
	}
}

struct<4> func_65(int iParam0)//Position - 0x21580
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "MP_PROP_1DES", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "MP_PROP_2DES", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "MP_PROP_3DES", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "MP_PROP_4DES", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "MP_PROP_5DES", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "MP_PROP_6DES", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "MP_PROP_7DES", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "MP_PROP_8DES", 16);
			break;
		
		case 9:
			StringCopy(&Var0, "MP_PROP_9DES", 16);
			break;
		
		case 10:
			StringCopy(&Var0, "MP_PROP_10DES", 16);
			break;
		
		case 11:
			StringCopy(&Var0, "MP_PROP_11DES", 16);
			break;
		
		case 12:
			StringCopy(&Var0, "MP_PROP_12DES", 16);
			break;
		
		case 13:
			StringCopy(&Var0, "MP_PROP_13DES", 16);
			break;
		
		case 14:
			StringCopy(&Var0, "MP_PROP_14DES", 16);
			break;
		
		case 15:
			StringCopy(&Var0, "MP_PROP_15DES", 16);
			break;
		
		case 16:
			StringCopy(&Var0, "MP_PROP_16DES", 16);
			break;
		
		case 17:
			StringCopy(&Var0, "MP_PROP_17DES", 16);
			break;
		
		case 18:
			StringCopy(&Var0, "MP_PROP_18DES", 16);
			break;
		
		case 19:
			StringCopy(&Var0, "MP_PROP_19DES", 16);
			break;
		
		case 20:
			StringCopy(&Var0, "MP_PROP_20DES", 16);
			break;
		
		case 21:
			StringCopy(&Var0, "MP_PROP_21DES", 16);
			break;
		
		case 22:
			StringCopy(&Var0, "MP_PROP_22DES", 16);
			break;
		
		case 23:
			StringCopy(&Var0, "MP_PROP_23DES", 16);
			break;
		
		case 24:
			StringCopy(&Var0, "MP_PROP_24DES", 16);
			break;
		
		case 25:
			StringCopy(&Var0, "MP_PROP_25DES", 16);
			break;
		
		case 26:
			StringCopy(&Var0, "MP_PROP_26DES", 16);
			break;
		
		case 27:
			StringCopy(&Var0, "MP_PROP_27DES", 16);
			break;
		
		case 28:
			StringCopy(&Var0, "MP_PROP_28DES", 16);
			break;
		
		case 29:
			StringCopy(&Var0, "MP_PROP_29DES", 16);
			break;
		
		case 30:
			StringCopy(&Var0, "MP_PROP_30DES", 16);
			break;
		
		case 31:
			StringCopy(&Var0, "MP_PROP_31DES", 16);
			break;
		
		case 32:
			StringCopy(&Var0, "MP_PROP_32DES", 16);
			break;
		
		case 33:
			StringCopy(&Var0, "MP_PROP_33DES", 16);
			break;
		
		case 34:
			StringCopy(&Var0, "MP_PROP_34DES", 16);
			break;
		
		case 35:
			StringCopy(&Var0, "MP_PROP_35DES", 16);
			break;
		
		case 36:
			StringCopy(&Var0, "MP_PROP_36DES", 16);
			break;
		
		case 37:
			StringCopy(&Var0, "MP_PROP_37DES", 16);
			break;
		
		case 38:
			StringCopy(&Var0, "MP_PROP_38DES", 16);
			break;
		
		case 39:
			StringCopy(&Var0, "MP_PROP_39DES", 16);
			break;
		
		case 40:
			StringCopy(&Var0, "MP_PROP_40DES", 16);
			break;
		
		case 41:
			StringCopy(&Var0, "MP_PROP_41DES", 16);
			break;
		
		case 42:
			StringCopy(&Var0, "MP_PROP_42DES", 16);
			break;
		
		case 43:
			StringCopy(&Var0, "MP_PROP_43DES", 16);
			break;
		
		case 44:
			StringCopy(&Var0, "MP_PROP_44DES", 16);
			break;
		
		case 45:
			StringCopy(&Var0, "MP_PROP_45DES", 16);
			break;
		
		case 46:
			StringCopy(&Var0, "MP_PROP_46DES", 16);
			break;
		
		case 47:
			StringCopy(&Var0, "MP_PROP_48DES", 16);
			break;
		
		case 48:
			StringCopy(&Var0, "MP_PROP_49DES", 16);
			break;
		
		case 49:
			StringCopy(&Var0, "MP_PROP_50DES", 16);
			break;
		
		case 50:
			StringCopy(&Var0, "MP_PROP_51DES", 16);
			break;
		
		case 51:
			StringCopy(&Var0, "MP_PROP_52DES", 16);
			break;
		
		case 52:
			StringCopy(&Var0, "MP_PROP_57DES", 16);
			break;
		
		case 53:
			StringCopy(&Var0, "MP_PROP_59DES", 16);
			break;
		
		case 54:
			StringCopy(&Var0, "MP_PROP_60DES", 16);
			break;
		
		case 55:
			StringCopy(&Var0, "MP_PROP_61DES", 16);
			break;
		
		case 56:
			StringCopy(&Var0, "MP_PROP_62DES", 16);
			break;
		
		case 57:
			StringCopy(&Var0, "MP_PROP_63DES", 16);
			break;
		
		case 58:
			StringCopy(&Var0, "MP_PROP_64DES", 16);
			break;
		
		case 59:
			StringCopy(&Var0, "MP_PROP_65DES", 16);
			break;
		
		case 60:
			StringCopy(&Var0, "MP_PROP_66DES", 16);
			break;
		
		case 61:
			StringCopy(&Var0, "MP_PROP_67DES", 16);
			break;
		
		case 62:
			StringCopy(&Var0, "MP_PROP_68DES", 16);
			break;
		
		case 63:
			StringCopy(&Var0, "MP_PROP_69DES", 16);
			break;
		
		case 64:
			StringCopy(&Var0, "MP_PROP_70DES", 16);
			break;
		
		case 65:
			StringCopy(&Var0, "MP_PROP_71DES", 16);
			break;
		
		case 66:
			StringCopy(&Var0, "MP_PROP_72DES", 16);
			break;
		
		case 67:
			StringCopy(&Var0, "MP_PROP_73DES", 16);
			break;
		
		case 68:
			StringCopy(&Var0, "MP_PROP_74DES", 16);
			break;
		
		case 69:
			StringCopy(&Var0, "MP_PROP_75DES", 16);
			break;
		
		case 70:
			StringCopy(&Var0, "MP_PROP_76DES", 16);
			break;
		
		case 71:
			StringCopy(&Var0, "MP_PROP_77DES", 16);
			break;
		
		case 72:
			StringCopy(&Var0, "MP_PROP_78DES", 16);
			break;
		
		case 83:
			StringCopy(&Var0, "MP_PROP_79DES", 16);
			break;
		
		case 84:
			StringCopy(&Var0, "MP_PROP_80DES", 16);
			break;
		
		case 85:
			StringCopy(&Var0, "MP_PROP_81DES", 16);
			break;
		
		case 73:
			StringCopy(&Var0, "MP_PROP_83DES", 16);
			break;
		
		case 74:
			StringCopy(&Var0, "MP_PROP_84DES", 16);
			break;
		
		case 75:
			StringCopy(&Var0, "MP_PROP_85DES", 16);
			break;
		
		case 76:
			StringCopy(&Var0, "MP_PROP_86DES", 16);
			break;
		
		case 77:
			StringCopy(&Var0, "MP_PROP_87DES", 16);
			break;
		
		case 78:
			StringCopy(&Var0, "MP_PROP_89DES", 16);
			break;
		
		case 79:
			StringCopy(&Var0, "MP_PROP_90DES", 16);
			break;
		
		case 80:
			StringCopy(&Var0, "MP_PROP_92DES", 16);
			break;
		
		case 81:
			StringCopy(&Var0, "MP_PROP_94DES", 16);
			break;
		
		case 82:
			StringCopy(&Var0, "MP_PROP_95DES", 16);
			break;
		
		case 87:
			StringCopy(&Var0, "MP_PROP_96DES", 16);
			break;
		
		case 88:
			StringCopy(&Var0, "MP_PROP_97DES", 16);
			break;
		
		case 89:
			StringCopy(&Var0, "MP_PROP_98DES", 16);
			break;
		
		case 90:
			StringCopy(&Var0, "MP_PROP_99DES", 16);
			break;
		
		case 91:
			StringCopy(&Var0, "MP_CLUBH1DES", 16);
			break;
		
		case 92:
			StringCopy(&Var0, "MP_CLUBH2DES", 16);
			break;
		
		case 93:
			StringCopy(&Var0, "MP_CLUBH3DES", 16);
			break;
		
		case 94:
			StringCopy(&Var0, "MP_CLUBH4DES", 16);
			break;
		
		case 95:
			StringCopy(&Var0, "MP_CLUBH5DES", 16);
			break;
		
		case 96:
			StringCopy(&Var0, "MP_CLUBH6DES", 16);
			break;
		
		case 97:
			StringCopy(&Var0, "MP_CLUBH7DES", 16);
			break;
		
		case 98:
			StringCopy(&Var0, "MP_CLUBH8DES", 16);
			break;
		
		case 99:
			StringCopy(&Var0, "MP_CLUBH9DES", 16);
			break;
		
		case 100:
			StringCopy(&Var0, "MP_CLUBH10DES", 16);
			break;
		
		case 101:
			StringCopy(&Var0, "MP_CLUBH11DES", 16);
			break;
		
		case 102:
			StringCopy(&Var0, "MP_CLUBH12DES", 16);
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
			StringCopy(&Var0, "MP_PROP_1", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "MP_PROP_2", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "MP_PROP_3", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "MP_PROP_4", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "MP_PROP_5", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "MP_PROP_6", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "MP_PROP_7", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "MP_PROP_8", 16);
			break;
		
		case 9:
			StringCopy(&Var0, "MP_PROP_9", 16);
			break;
		
		case 10:
			StringCopy(&Var0, "MP_PROP_10", 16);
			break;
		
		case 11:
			StringCopy(&Var0, "MP_PROP_11", 16);
			break;
		
		case 12:
			StringCopy(&Var0, "MP_PROP_12", 16);
			break;
		
		case 13:
			StringCopy(&Var0, "MP_PROP_13", 16);
			break;
		
		case 14:
			StringCopy(&Var0, "MP_PROP_14", 16);
			break;
		
		case 15:
			StringCopy(&Var0, "MP_PROP_15", 16);
			break;
		
		case 16:
			StringCopy(&Var0, "MP_PROP_16", 16);
			break;
		
		case 17:
			StringCopy(&Var0, "MP_PROP_17", 16);
			break;
		
		case 18:
			StringCopy(&Var0, "MP_PROP_18", 16);
			break;
		
		case 19:
			StringCopy(&Var0, "MP_PROP_19", 16);
			break;
		
		case 20:
			StringCopy(&Var0, "MP_PROP_20", 16);
			break;
		
		case 21:
			StringCopy(&Var0, "MP_PROP_21", 16);
			break;
		
		case 22:
			StringCopy(&Var0, "MP_PROP_22", 16);
			break;
		
		case 23:
			StringCopy(&Var0, "MP_PROP_23", 16);
			break;
		
		case 24:
			StringCopy(&Var0, "MP_PROP_24", 16);
			break;
		
		case 25:
			StringCopy(&Var0, "MP_PROP_25", 16);
			break;
		
		case 26:
			StringCopy(&Var0, "MP_PROP_26", 16);
			break;
		
		case 27:
			StringCopy(&Var0, "MP_PROP_27", 16);
			break;
		
		case 28:
			StringCopy(&Var0, "MP_PROP_28", 16);
			break;
		
		case 29:
			StringCopy(&Var0, "MP_PROP_29", 16);
			break;
		
		case 30:
			StringCopy(&Var0, "MP_PROP_30", 16);
			break;
		
		case 31:
			StringCopy(&Var0, "MP_PROP_31", 16);
			break;
		
		case 32:
			StringCopy(&Var0, "MP_PROP_32", 16);
			break;
		
		case 33:
			StringCopy(&Var0, "MP_PROP_33", 16);
			break;
		
		case 34:
			StringCopy(&Var0, "MP_PROP_34", 16);
			break;
		
		case 35:
			StringCopy(&Var0, "MP_PROP_35", 16);
			break;
		
		case 36:
			StringCopy(&Var0, "MP_PROP_36", 16);
			break;
		
		case 37:
			StringCopy(&Var0, "MP_PROP_37", 16);
			break;
		
		case 38:
			StringCopy(&Var0, "MP_PROP_38", 16);
			break;
		
		case 39:
			StringCopy(&Var0, "MP_PROP_39", 16);
			break;
		
		case 40:
			StringCopy(&Var0, "MP_PROP_40", 16);
			break;
		
		case 41:
			StringCopy(&Var0, "MP_PROP_41", 16);
			break;
		
		case 42:
			StringCopy(&Var0, "MP_PROP_42", 16);
			break;
		
		case 43:
			StringCopy(&Var0, "MP_PROP_43", 16);
			break;
		
		case 44:
			StringCopy(&Var0, "MP_PROP_44", 16);
			break;
		
		case 45:
			StringCopy(&Var0, "MP_PROP_45", 16);
			break;
		
		case 46:
			StringCopy(&Var0, "MP_PROP_46", 16);
			break;
		
		case 47:
			StringCopy(&Var0, "MP_PROP_48", 16);
			break;
		
		case 48:
			StringCopy(&Var0, "MP_PROP_49", 16);
			break;
		
		case 49:
			StringCopy(&Var0, "MP_PROP_50", 16);
			break;
		
		case 50:
			StringCopy(&Var0, "MP_PROP_51", 16);
			break;
		
		case 51:
			StringCopy(&Var0, "MP_PROP_52", 16);
			break;
		
		case 52:
			StringCopy(&Var0, "MP_PROP_57", 16);
			break;
		
		case 53:
			StringCopy(&Var0, "MP_PROP_59", 16);
			break;
		
		case 54:
			StringCopy(&Var0, "MP_PROP_60", 16);
			break;
		
		case 55:
			StringCopy(&Var0, "MP_PROP_61", 16);
			break;
		
		case 56:
			StringCopy(&Var0, "MP_PROP_62", 16);
			break;
		
		case 57:
			StringCopy(&Var0, "MP_PROP_63", 16);
			break;
		
		case 58:
			StringCopy(&Var0, "MP_PROP_64", 16);
			break;
		
		case 59:
			StringCopy(&Var0, "MP_PROP_65", 16);
			break;
		
		case 60:
			StringCopy(&Var0, "MP_PROP_66", 16);
			break;
		
		case 61:
			StringCopy(&Var0, "MP_PROP_67", 16);
			break;
		
		case 62:
			StringCopy(&Var0, "MP_PROP_68", 16);
			break;
		
		case 63:
			StringCopy(&Var0, "MP_PROP_69", 16);
			break;
		
		case 64:
			StringCopy(&Var0, "MP_PROP_70", 16);
			break;
		
		case 65:
			StringCopy(&Var0, "MP_PROP_71", 16);
			break;
		
		case 66:
			StringCopy(&Var0, "MP_PROP_72", 16);
			break;
		
		case 67:
			StringCopy(&Var0, "MP_PROP_73", 16);
			break;
		
		case 68:
			StringCopy(&Var0, "MP_PROP_74", 16);
			break;
		
		case 69:
			StringCopy(&Var0, "MP_PROP_75", 16);
			break;
		
		case 70:
			StringCopy(&Var0, "MP_PROP_76", 16);
			break;
		
		case 71:
			StringCopy(&Var0, "MP_PROP_77", 16);
			break;
		
		case 72:
			StringCopy(&Var0, "MP_PROP_78", 16);
			break;
		
		case 83:
			StringCopy(&Var0, "MP_PROP_79", 16);
			break;
		
		case 84:
			StringCopy(&Var0, "MP_PROP_80", 16);
			break;
		
		case 85:
			StringCopy(&Var0, "MP_PROP_81", 16);
			break;
		
		case 73:
			StringCopy(&Var0, "MP_PROP_83", 16);
			break;
		
		case 74:
			StringCopy(&Var0, "MP_PROP_84", 16);
			break;
		
		case 75:
			StringCopy(&Var0, "MP_PROP_85", 16);
			break;
		
		case 76:
			StringCopy(&Var0, "MP_PROP_86", 16);
			break;
		
		case 77:
			StringCopy(&Var0, "MP_PROP_87", 16);
			break;
		
		case 78:
			StringCopy(&Var0, "MP_PROP_89", 16);
			break;
		
		case 79:
			StringCopy(&Var0, "MP_PROP_90", 16);
			break;
		
		case 80:
			StringCopy(&Var0, "MP_PROP_92", 16);
			break;
		
		case 81:
			StringCopy(&Var0, "MP_PROP_94", 16);
			break;
		
		case 82:
			StringCopy(&Var0, "MP_PROP_95", 16);
			break;
		
		case 86:
			StringCopy(&Var0, "PM_SPAWN_Y", 16);
			break;
		
		case 87:
			StringCopy(&Var0, "MP_PROP_OFF1", 16);
			break;
		
		case 88:
			StringCopy(&Var0, "MP_PROP_OFF2", 16);
			break;
		
		case 89:
			StringCopy(&Var0, "MP_PROP_OFF3", 16);
			break;
		
		case 90:
			StringCopy(&Var0, "MP_PROP_OFF4", 16);
			break;
		
		case 91:
			StringCopy(&Var0, "MP_PROP_CLUBH1", 16);
			break;
		
		case 92:
			StringCopy(&Var0, "MP_PROP_CLUBH2", 16);
			break;
		
		case 93:
			StringCopy(&Var0, "MP_PROP_CLUBH3", 16);
			break;
		
		case 94:
			StringCopy(&Var0, "MP_PROP_CLUBH4", 16);
			break;
		
		case 95:
			StringCopy(&Var0, "MP_PROP_CLUBH5", 16);
			break;
		
		case 96:
			StringCopy(&Var0, "MP_PROP_CLUBH6", 16);
			break;
		
		case 97:
			StringCopy(&Var0, "MP_PROP_CLUBH7", 16);
			break;
		
		case 98:
			StringCopy(&Var0, "MP_PROP_CLUBH8", 16);
			break;
		
		case 99:
			StringCopy(&Var0, "MP_PROP_CLUBH9", 16);
			break;
		
		case 100:
			StringCopy(&Var0, "MP_PROP_CLUBH10", 16);
			break;
		
		case 101:
			StringCopy(&Var0, "MP_PROP_CLUBH11", 16);
			break;
		
		case 102:
			StringCopy(&Var0, "MP_PROP_CLUBH12", 16);
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
			StringCopy(&Var0, "MP_PROP_OFFG1", 16);
			break;
		
		case 104:
		case 107:
		case 110:
		case 113:
			StringCopy(&Var0, "MP_PROP_OFFG2", 16);
			break;
		
		case 105:
		case 108:
		case 111:
		case 114:
			StringCopy(&Var0, "MP_PROP_OFFG3", 16);
			break;
		
		case 115:
			StringCopy(&Var0, "IE_WARE_1", 16);
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
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar3))
		{
			iVar4 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(iVar3, 426439576, true);
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
			return Global_262145.f_3959;
			break;
		
		case 2:
			return Global_262145.f_3960;
			break;
		
		case 3:
			return Global_262145.f_3961;
			break;
		
		case 4:
			return Global_262145.f_3962;
			break;
		
		case 5:
			return Global_262145.f_3963;
			break;
		
		case 6:
			return Global_262145.f_3964;
			break;
		
		case 7:
			return Global_262145.f_3965;
			break;
		
		case 34:
			return Global_262145.f_3966;
			break;
		
		case 35:
			return Global_262145.f_3967;
			break;
		
		case 36:
			return Global_262145.f_3968;
			break;
		
		case 37:
			return Global_262145.f_3969;
			break;
		
		case 38:
			return Global_262145.f_3970;
			break;
		
		case 39:
			return Global_262145.f_3971;
			break;
		
		case 40:
			return Global_262145.f_3972;
			break;
		
		case 41:
			return Global_262145.f_3973;
			break;
		
		case 42:
			return Global_262145.f_3974;
			break;
		
		case 43:
			return Global_262145.f_3975;
			break;
		
		case 8:
			return Global_262145.f_3976;
			break;
		
		case 9:
			return Global_262145.f_3977;
			break;
		
		case 10:
			return Global_262145.f_3978;
			break;
		
		case 11:
			return Global_262145.f_3979;
			break;
		
		case 12:
			return Global_262145.f_3980;
			break;
		
		case 13:
			return Global_262145.f_3981;
			break;
		
		case 14:
			return Global_262145.f_3982;
			break;
		
		case 15:
			return Global_262145.f_3983;
			break;
		
		case 16:
			return Global_262145.f_3984;
			break;
		
		case 17:
			return Global_262145.f_3985;
			break;
		
		case 18:
			return Global_262145.f_3986;
			break;
		
		case 19:
			return Global_262145.f_3987;
			break;
		
		case 20:
			return Global_262145.f_3988;
			break;
		
		case 21:
			return Global_262145.f_3989;
			break;
		
		case 22:
			return Global_262145.f_3990;
			break;
		
		case 23:
			return Global_262145.f_3991;
			break;
		
		case 24:
			return Global_262145.f_3992;
			break;
		
		case 25:
			return Global_262145.f_3993;
			break;
		
		case 26:
			return Global_262145.f_3994;
			break;
		
		case 27:
			return Global_262145.f_3995;
			break;
		
		case 28:
			return Global_262145.f_3996;
			break;
		
		case 29:
			return Global_262145.f_3997;
			break;
		
		case 30:
			return Global_262145.f_3998;
			break;
		
		case 31:
			return Global_262145.f_3999;
			break;
		
		case 32:
			return Global_262145.f_4000;
			break;
		
		case 33:
			return Global_262145.f_4001;
			break;
		
		case 44:
			return Global_262145.f_4002;
			break;
		
		case 45:
			return Global_262145.f_4003;
			break;
		
		case 46:
			return Global_262145.f_4004;
			break;
		
		case 47:
			return Global_262145.f_4005;
			break;
		
		case 48:
			return Global_262145.f_4006;
			break;
		
		case 49:
			return Global_262145.f_4007;
			break;
		
		case 50:
			return Global_262145.f_4008;
			break;
		
		case 51:
			return Global_262145.f_4009;
			break;
		
		case 52:
			return Global_262145.f_4010;
			break;
		
		case 53:
			return Global_262145.f_4011;
			break;
		
		case 54:
			return Global_262145.f_4012;
			break;
		
		case 55:
			return Global_262145.f_4013;
			break;
		
		case 56:
			return Global_262145.f_4014;
			break;
		
		case 57:
			return Global_262145.f_4015;
			break;
		
		case 58:
			return Global_262145.f_4016;
			break;
		
		case 59:
			return Global_262145.f_4017;
			break;
		
		case 60:
			return Global_262145.f_4018;
			break;
		
		case 61:
			return Global_262145.f_7062[0];
			break;
		
		case 62:
			return Global_262145.f_7062[1];
			break;
		
		case 63:
			return Global_262145.f_7062[2];
			break;
		
		case 64:
			return Global_262145.f_7062[3];
			break;
		
		case 65:
			return Global_262145.f_7062[4];
			break;
		
		case 66:
			return Global_262145.f_8289;
			break;
		
		case 67:
			return Global_262145.f_8290;
			break;
		
		case 68:
			return Global_262145.f_8291;
			break;
		
		case 69:
			return Global_262145.f_8292;
			break;
		
		case 70:
			return Global_262145.f_8293;
			break;
		
		case 71:
			return Global_262145.f_8294;
			break;
		
		case 72:
			return Global_262145.f_8295;
			break;
		
		case 73:
			return Global_262145.f_13312;
		
		case 74:
			return Global_262145.f_13313;
		
		case 75:
			return Global_262145.f_13314;
		
		case 76:
			return Global_262145.f_13315;
		
		case 77:
			return Global_262145.f_13316;
		
		case 78:
			return Global_262145.f_13317;
		
		case 79:
			return Global_262145.f_13318;
		
		case 80:
			return Global_262145.f_13319;
		
		case 81:
			return Global_262145.f_13320;
		
		case 82:
			return Global_262145.f_13321;
		
		case 83:
			return Global_262145.f_13309;
		
		case 84:
			return Global_262145.f_13310;
		
		case 85:
			return Global_262145.f_13311;
		
		case 86:
			return 27000000;
		
		case 87:
			return Global_262145.f_15947;
		
		case 88:
			return Global_262145.f_15948;
		
		case 89:
			return Global_262145.f_15949;
		
		case 90:
			return Global_262145.f_15950;
		
		case 91:
			return Global_262145.f_18035;
		
		case 92:
			return Global_262145.f_18037;
		
		case 93:
			return Global_262145.f_18033;
		
		case 94:
			return Global_262145.f_18042;
		
		case 95:
			return Global_262145.f_18039;
		
		case 96:
			return Global_262145.f_18041;
		
		case 97:
			return Global_262145.f_18034;
		
		case 98:
			return Global_262145.f_18032;
		
		case 99:
			return Global_262145.f_18031;
		
		case 100:
			return Global_262145.f_18040;
		
		case 101:
			return Global_262145.f_18038;
		
		case 102:
			return Global_262145.f_18036;
		
		case 103:
			return Global_262145.f_19700;
		
		case 104:
			return Global_262145.f_19593;
		
		case 105:
			return Global_262145.f_19594;
		
		case 106:
			return Global_262145.f_19700;
		
		case 107:
			return Global_262145.f_19593;
		
		case 108:
			return Global_262145.f_19594;
		
		case 109:
			return Global_262145.f_19700;
		
		case 110:
			return Global_262145.f_19593;
		
		case 111:
			return Global_262145.f_19594;
		
		case 112:
			return Global_262145.f_19700;
		
		case 113:
			return Global_262145.f_19593;
		
		case 114:
			return Global_262145.f_19594;
		
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
	switch (NETWORK::_0x155467ACA0F55705())
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
	switch (NETWORK::_0x754615490A029508())
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
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1))
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
		if (Global_152261.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
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
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar4);
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

int func_76()//Position - 0x22F51
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
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
	if (((LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE() || LOADINGSCREEN::_0xF2CA003F167E21D2()) || NETWORK::_0x88B588B41FF7868E()) || NETWORK::_0x67FC09BC554A75E5())
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

