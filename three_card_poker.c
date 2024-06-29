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
	var uLocal_92 = -1;
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
	struct<592> Local_116 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 32, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 32;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
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
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	struct<9> Local_749[32];
	struct<855> Local_1038 = { 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, -1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1893 = 3;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	struct<23> Local_1901 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_1924 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_1940 = 0;
	int iLocal_1941 = 0;
	int iLocal_1942 = 0;
	bool bLocal_1943 = 0;
	int iLocal_1944 = 0;
	int iLocal_1945 = 0;
	int iLocal_1946 = 0;
	bool bLocal_1947 = 0;
	bool bLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954[4] = { 0, 0, 0, 0 };
	int iLocal_1959[4] = { 0, 0, 0, 0 };
	int iLocal_1964 = 0;
	int iLocal_1965 = 0;
	bool bLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	int iLocal_1969 = 0;
	int iLocal_1970 = 0;
	int iLocal_1971 = 0;
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
	iLocal_1942 = 1;
	func_443();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_435())
		{
			func_431();
		}
		if (Global_1964416)
		{
			Global_1964416 = 0;
			func_431();
		}
		if (Global_2635563.f_2981 && Global_2640096 != 0)
		{
			if (Global_2640096 != 6)
			{
				func_431();
			}
		}
		if (func_430() && CAM::IS_SCREEN_FADED_OUT())
		{
			func_431();
		}
		if ((!func_429(PLAYER::PLAYER_ID()) && !func_428(PLAYER::PLAYER_ID())) && !func_427(PLAYER::PLAYER_ID()))
		{
			func_431();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !BitTest(Global_4718592.f_34, 6))
		{
			func_431();
		}
		if (func_428(PLAYER::PLAYER_ID()) && func_423() != func_422())
		{
			if (BitTest(Global_2657971[func_423() /*465*/].f_322.f_4, 0) && CAM::IS_SCREEN_FADED_OUT())
			{
				func_431();
			}
		}
		if (func_428(PLAYER::PLAYER_ID()) && func_423() != func_422())
		{
			if (Global_2657971[func_423() /*465*/].f_456 != Global_1964425 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_431();
			}
		}
		if (func_428(PLAYER::PLAYER_ID()) && func_420() != 0)
		{
			func_431();
		}
		if (func_428(PLAYER::PLAYER_ID()) && func_418(PLAYER::PLAYER_ID()))
		{
			func_431();
		}
		iVar0 = 0;
		while (iVar0 < Local_1038.f_26)
		{
			if ((!func_417() && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_50[iVar0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0]))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_116.f_50[iVar0], true);
			}
			iVar0++;
		}
		func_91();
		if (func_417())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x239
{
	int iVar0;
	int iVar1;
	
	func_90();
	func_87();
	func_81();
	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		switch (Local_116.f_586[iVar0])
		{
			case 0:
				if (Global_2708678 != iVar0 && (Global_2708678 != -1 || func_428(PLAYER::PLAYER_ID())))
				{
					Local_116.f_25[iVar0] = 1;
					func_80(&(Local_116.f_168[iVar0 /*55*/]));
					func_79(1, iVar0);
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0])))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0]))
					{
						Local_116.f_45[iVar0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_116.f_35[iVar0]);
						if (Local_116.f_45[iVar0] != -1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_78(), func_77(iVar0), 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), joaat("blend_out")))
								{
									Local_116.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_74(iVar0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iVar0]);
								}
							}
							else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), joaat("blend_out")))
							{
								Local_116.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_77(iVar0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iVar0]);
							}
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_116.f_117[(iVar0 * 4 + iVar1)] != func_422() && Global_2708678 != iVar0) && (Global_2708678 != -1 || func_428(PLAYER::PLAYER_ID())))
					{
						func_79(2, iVar0);
						Local_116.f_40[iVar0] = iVar1;
						func_73(&(Local_116.f_159[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0])))
				{
					if (func_72(&(Local_116.f_159[iVar0 /*2*/])) && func_71(&(Local_116.f_159[iVar0 /*2*/]), 2000, 0))
					{
						Local_116.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_70(iVar0, Local_116.f_40[iVar0]), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iVar0]);
						func_69(&(Local_116.f_159[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x5C1
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
	int iVar24;
	struct<5> Var25;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	
	iVar3 = 0;
	iVar4 = 0;
	bVar6 = false;
	if (Local_116.f_576[iParam0] > 7 && Local_116.f_576[iParam0] < 12)
	{
		bVar6 = true;
	}
	if ((!func_68(iParam0, bVar6) || Global_2708678 == iParam0) || Local_116[iParam0])
	{
		Local_116[iParam0] = 1;
		func_67(iParam0);
		return;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_50[iParam0]))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
		{
			Local_116.f_10[iParam0] = 0;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]);
		}
		else if (!Local_116.f_10[iParam0])
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_116.f_50[iParam0], false);
			Local_116.f_10[iParam0] = 1;
		}
	}
	Local_116.f_45[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_116.f_35[iParam0]);
	switch (Local_116.f_576[iParam0])
	{
		case 0:
			func_66(1, iParam0);
			break;
		
		case 1:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (Local_749[iVar1 /*9*/] != 0 || Local_749[iVar1 /*9*/].f_6 != 0)
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_65(&(Local_116.f_168[iParam0 /*55*/]));
				func_64(iParam0);
				func_66(2, iParam0);
			}
			break;
		
		case 2:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (!BitTest(Local_749[iVar1 /*9*/].f_6, 0))
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
				if (func_53(12, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 18);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
				{
					if (Local_116.f_45[iParam0] != -1)
					{
						if (Local_116.f_30[iParam0] == 1)
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
							}
						}
						else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
						{
							Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_50(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out")))
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_74(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
							}
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out")))
						{
							Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
						}
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]);
				}
			}
			bVar0 = true;
			iVar3 = 0;
			iVar4 = 0;
			if (!func_72(&(Local_116.f_150[iParam0 /*2*/])))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						iVar3++;
						if (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0)
						{
							func_73(&(Local_116.f_150[iParam0 /*2*/]), 0, 0);
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
					if (!func_72(&(Local_116.f_591[iParam0 /*2*/])))
					{
						func_73(&(Local_116.f_591[iParam0 /*2*/]), 0, 0);
					}
					else if (func_71(&(Local_116.f_591[iParam0 /*2*/]), 60000, 0))
					{
						func_64(iParam0);
						func_69(&(Local_116.f_591[iParam0 /*2*/]));
					}
					else if (func_71(&(Local_116.f_591[iParam0 /*2*/]), 30000, 0))
					{
						if (!func_63(iParam0, 17))
						{
							if (func_53(8, &(Local_116.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 17);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_116.f_591[iParam0 /*2*/]));
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0)
						{
							iVar8++;
						}
						if (!BitTest(Local_749[iVar1 /*9*/], 2))
						{
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (iVar8 > 0)
				{
					if (func_71(&(Local_116.f_150[iParam0 /*2*/]), 30000, 0) || bVar0)
					{
						func_69(&(Local_116.f_150[iParam0 /*2*/]));
						func_64(iParam0);
						func_66(4, iParam0);
					}
					else if (func_71(&(Local_116.f_150[iParam0 /*2*/]), 18000, 0))
					{
						if (!func_63(iParam0, 19))
						{
							if (func_53(13, &(Local_116.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 19);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_116.f_150[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_64(iParam0);
			if (!BitTest(Local_116.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					MISC::SET_BIT(&(Local_116.f_20[iParam0]), 11);
				}
			}
			else if (func_47(iParam0))
			{
				MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 11);
				func_66(5, iParam0);
			}
			break;
		
		case 5:
			if (!func_63(iParam0, 20))
			{
				if (func_53(21, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 20);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
			{
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]);
						bVar9 = true;
					}
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]);
						bVar9 = true;
					}
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]);
						bVar9 = true;
					}
					if (bVar9)
					{
						return;
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
					{
						if (!BitTest(Local_116.f_20[iParam0], 0))
						{
							Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
							MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
						}
						else if (!BitTest(Local_116.f_20[iParam0], 8))
						{
							if (Local_116.f_45[iParam0] != -1)
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out")))
								{
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_43(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									MISC::SET_BIT(&(Local_116.f_20[iParam0]), 8);
								}
							}
						}
						else if (Local_116.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out")))
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
								MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 8);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), true, false);
								func_66(6, iParam0);
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("showcards")))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), true, false);
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (!BitTest(Local_116.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					MISC::SET_BIT(&(Local_116.f_20[iParam0]), 11);
				}
			}
			else
			{
				Local_116.f_168[iParam0 /*55*/] = 0;
				func_66(7, iParam0);
			}
			break;
		
		case 7:
			Var11 = { func_76(iParam0) };
			Var11.f_2 = (Var11.f_2 + 0.914f);
			switch (Local_116.f_571[iParam0])
			{
				case 0:
					iVar1 = Local_116.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 0, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 1, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]);
										bVar14 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]);
										bVar14 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]);
										bVar14 = true;
									}
									if (bVar14)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!BitTest(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_38(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
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
						MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_116.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 0, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 1, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]);
										bVar15 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]);
										bVar15 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]);
										bVar15 = true;
									}
									if (bVar15)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!BitTest(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_35(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
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
						MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_116.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 0, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 1, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]);
										bVar16 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]);
										bVar16 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]);
										bVar16 = true;
									}
									if (bVar16)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!BitTest(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_34(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
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
						MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_116.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 0, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 3)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 1, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 3)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 3)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]);
										bVar17 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]);
										bVar17 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]);
										bVar17 = true;
									}
									if (bVar17)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!BitTest(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_33(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
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
						MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(4, iParam0);
					}
					break;
				
				case 4:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
					{
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_55[func_46(iParam0, 0)]))
						{
							iVar10 = Local_116.f_168[iParam0 /*55*/];
							STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
							}
							return;
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_55[func_46(iParam0, 1)]))
						{
							iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
							STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
							}
							return;
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_55[func_46(iParam0, 2)]))
						{
							iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
							STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
							}
							return;
						}
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]);
								bVar18 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]);
								bVar18 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]);
								bVar18 = true;
							}
							if (bVar18)
							{
								return;
							}
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
							{
								if (!BitTest(Local_116.f_20[iParam0], 0))
								{
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_32(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
								}
								else if (Local_116.f_45[iParam0] != -1)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out")))
									{
										bVar7 = true;
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										if (Local_116.f_389[iParam0 /*5*/] == 0)
										{
											func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
											Local_116.f_389[iParam0 /*5*/].f_1[0] = uVar5;
											func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
											Local_116.f_389[iParam0 /*5*/].f_1[1] = uVar5;
											func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
											Local_116.f_389[iParam0 /*5*/].f_1[2] = uVar5;
											Local_116.f_389[iParam0 /*5*/] = 3;
										}
										MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									if (Local_116.f_389[iParam0 /*5*/] == 0)
									{
										func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
										Local_116.f_389[iParam0 /*5*/].f_1[0] = uVar5;
										func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
										Local_116.f_389[iParam0 /*5*/].f_1[1] = uVar5;
										func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
										Local_116.f_389[iParam0 /*5*/].f_1[2] = uVar5;
										Local_116.f_389[iParam0 /*5*/] = 3;
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
						MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(0, iParam0);
						func_66(8, iParam0);
					}
					break;
			}
			break;
		
		case 8:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]) && Local_116.f_45[iParam0] != -1)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out")))
					{
						Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
						func_64(iParam0);
						func_66(9, iParam0);
					}
				}
			}
			break;
		
		case 9:
			bVar0 = true;
			if (!func_72(&(Local_116.f_150[iParam0 /*2*/])))
			{
				func_73(&(Local_116.f_150[iParam0 /*2*/]), 0, 0);
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if ((!BitTest(Local_749[iVar1 /*9*/], 1) && !BitTest(Local_749[iVar1 /*9*/], 3)) && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (!func_63(iParam0, 18))
							{
								if (func_53(14, &(Local_116.f_50[iParam0]), 0, -1))
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
					func_69(&(Local_116.f_150[iParam0 /*2*/]));
					func_66(10, iParam0);
				}
				else if (func_71(&(Local_116.f_150[iParam0 /*2*/]), 15000, 0))
				{
					if (!func_63(iParam0, 19))
					{
						if (func_53(9, &(Local_116.f_50[iParam0]), 0, -1))
						{
							func_52(iParam0, 19);
						}
					}
				}
			}
			break;
		
		case 10:
			switch (Local_116.f_581[iParam0])
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]);
								bVar19 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]);
								bVar19 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]);
								bVar19 = true;
							}
							if (bVar19)
							{
								return;
							}
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
							{
								if (!BitTest(Local_116.f_20[iParam0], 0))
								{
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_30(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
								}
								else if (Local_116.f_45[iParam0] != -1)
								{
									if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
									{
										bVar7 = true;
										Local_116.f_5[iParam0] = 1;
										MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_116.f_5[iParam0] = 1;
									MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
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
					iVar1 = Local_116.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)])) && (BitTest(Local_749[iVar1 /*9*/], 1) || BitTest(Local_749[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]);
										bVar20 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]);
										bVar20 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]);
										bVar20 = true;
									}
									if (bVar20)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!BitTest(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_749[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_28(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_749[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_27(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_749[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_26(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_116.f_20[iParam0]), 12);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
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
						MISC::SET_BIT(&(Local_116.f_20[iParam0]), 12);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_116.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)])) && (BitTest(Local_749[iVar1 /*9*/], 1) || BitTest(Local_749[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]);
										bVar21 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]);
										bVar21 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]);
										bVar21 = true;
									}
									if (bVar21)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!BitTest(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_749[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_20(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_749[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_19(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_749[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_18(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_116.f_20[iParam0]), 13);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
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
						MISC::SET_BIT(&(Local_116.f_20[iParam0]), 13);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_116.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)])) && (BitTest(Local_749[iVar1 /*9*/], 1) || BitTest(Local_749[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]);
										bVar22 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]);
										bVar22 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]);
										bVar22 = true;
									}
									if (bVar22)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!BitTest(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_749[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_17(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_749[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_16(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_749[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_15(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_116.f_20[iParam0]), 14);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
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
						MISC::SET_BIT(&(Local_116.f_20[iParam0]), 14);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(4, iParam0);
					}
					break;
				
				case 4:
					iVar1 = Local_116.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1 /*9*/].f_2 == iParam0 && (Local_749[iVar1 /*9*/].f_3 > 0 || Local_749[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)])) && (BitTest(Local_749[iVar1 /*9*/], 1) || BitTest(Local_749[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]);
										bVar23 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]);
										bVar23 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]);
										bVar23 = true;
									}
									if (bVar23)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!BitTest(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_749[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_14(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_749[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_13(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_749[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_12(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_116.f_20[iParam0]), 15);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
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
						MISC::SET_BIT(&(Local_116.f_20[iParam0]), 15);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(0, iParam0);
						func_66(11, iParam0);
					}
					break;
			}
			break;
		
		case 11:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
				{
					if (!BitTest(Local_116.f_20[iParam0], 0))
					{
						Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_8(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
						MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
					}
					else if (BitTest(Local_116.f_20[iParam0], 0) && !BitTest(Local_116.f_20[iParam0], 2))
					{
						if (Local_116.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out")))
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
								MISC::SET_BIT(&(Local_116.f_20[iParam0]), 9);
								MISC::SET_BIT(&(Local_116.f_20[iParam0]), 2);
							}
						}
					}
					else if (BitTest(Local_116.f_20[iParam0], 9))
					{
						if (Local_116.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out")))
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
								MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 9);
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
				if (func_53(1, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 21);
				}
			}
			Var25.f_1 = 3;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
			{
				if (!BitTest(Local_116.f_20[iParam0], 3))
				{
					iVar2 = iParam0 * 4;
					iVar24 = Local_116.f_117[iVar2];
					if (iVar24 != func_422() && iVar24 > -1)
					{
						if (Local_116.f_410[iVar24 /*5*/] > 0 || BitTest(Local_116.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]);
									bVar30 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]);
									bVar30 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]);
									bVar30 = true;
								}
								if (bVar30)
								{
									return;
								}
								if (!BitTest(Local_116.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_7(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
										{
											MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 3);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), false, false);
											Local_116.f_410[iVar24 /*5*/] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("hidecards")))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_116.f_20[iParam0]), 3);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), false, false);
										Local_116.f_410[iVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_116.f_20[iParam0]), 3);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_116.f_20[iParam0]), 3);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_116.f_20[iParam0]), 3);
					}
				}
				else if (!BitTest(Local_116.f_20[iParam0], 4))
				{
					iVar2 = iParam0 * 4 + 1;
					iVar24 = Local_116.f_117[iVar2];
					if (iVar24 != func_422() && iVar24 > -1)
					{
						if (Local_116.f_410[iVar24 /*5*/] > 0 || BitTest(Local_116.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]);
									bVar31 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]);
									bVar31 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]);
									bVar31 = true;
								}
								if (bVar31)
								{
									return;
								}
								if (!BitTest(Local_116.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_6(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
										{
											MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 4);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), false, false);
											Local_116.f_410[iVar24 /*5*/] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("hidecards")))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_116.f_20[iParam0]), 4);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), false, false);
										Local_116.f_410[iVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_116.f_20[iParam0]), 4);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_116.f_20[iParam0]), 4);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_116.f_20[iParam0]), 4);
					}
				}
				else if (!BitTest(Local_116.f_20[iParam0], 5))
				{
					iVar2 = iParam0 * 4 + 2;
					iVar24 = Local_116.f_117[iVar2];
					if (iVar24 != func_422() && iVar24 > -1)
					{
						if (Local_116.f_410[iVar24 /*5*/] > 0 || BitTest(Local_116.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]);
									bVar32 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]);
									bVar32 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]);
									bVar32 = true;
								}
								if (bVar32)
								{
									return;
								}
								if (!BitTest(Local_116.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_5(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
										{
											MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 5);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), false, false);
											Local_116.f_410[iVar24 /*5*/] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("hidecards")))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_116.f_20[iParam0]), 5);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), false, false);
										Local_116.f_410[iVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_116.f_20[iParam0]), 5);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_116.f_20[iParam0]), 5);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_116.f_20[iParam0]), 5);
					}
				}
				else if (!BitTest(Local_116.f_20[iParam0], 6))
				{
					iVar2 = iParam0 * 4 + 3;
					iVar24 = Local_116.f_117[iVar2];
					if (iVar24 != func_422() && iVar24 > -1)
					{
						if (Local_116.f_410[iVar24 /*5*/] > 0 || BitTest(Local_116.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]);
									bVar33 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]);
									bVar33 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]);
									bVar33 = true;
								}
								if (bVar33)
								{
									return;
								}
								if (!BitTest(Local_116.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_4(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("break_out")))
										{
											MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_116.f_20[iParam0]), 6);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), false, false);
											Local_116.f_410[iVar24 /*5*/] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("hidecards")))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_116.f_20[iParam0]), 6);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), false, false);
										Local_116.f_410[iVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_116.f_20[iParam0]), 6);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_116.f_20[iParam0]), 6);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_116.f_20[iParam0]), 6);
					}
				}
				else if (!BitTest(Local_116.f_20[iParam0], 7))
				{
					if (Local_116.f_389[iParam0 /*5*/] > 0 || BitTest(Local_116.f_20[iParam0], 0))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]);
								bVar34 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]);
								bVar34 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]);
								bVar34 = true;
							}
							if (bVar34)
							{
								return;
							}
							if (!BitTest(Local_116.f_20[iParam0], 0))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
								{
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_3(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									MISC::SET_BIT(&(Local_116.f_20[iParam0]), 0);
								}
							}
							else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
							{
								if (Local_116.f_45[iParam0] != -1)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out")))
									{
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_116.f_20[iParam0]), 7);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), false, false);
										Local_116.f_389[iParam0 /*5*/] = { Var25 };
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("hidecards")))
									{
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), false, false);
									}
								}
								else
								{
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
									MISC::SET_BIT(&(Local_116.f_20[iParam0]), 7);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), false, false);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), false, false);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), false, false);
									Local_116.f_389[iParam0 /*5*/] = { Var25 };
								}
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_116.f_20[iParam0]), 7);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_116.f_20[iParam0]), 7);
					}
				}
				else if (!BitTest(Local_116.f_20[iParam0], 10))
				{
					if (Local_116.f_45[iParam0] != -1)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out")))
						{
							if (Local_116.f_30[iParam0] == 1)
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
							}
							else
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
							}
							MISC::SET_BIT(&(Local_116.f_20[iParam0]), 10);
						}
					}
				}
				else
				{
					Local_116.f_5[iParam0] = 0;
					Local_116.f_20[iParam0] = 0;
					Local_116.f_25[iParam0]++;
					func_69(&(Local_116.f_150[iParam0 /*2*/]));
					func_66(0, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)//Position - 0x61FD
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_self";
	}
	return "cards_collect_self";
}

char* func_4(int iParam0)//Position - 0x621C
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p04";
	}
	return "cards_collect_p04";
}

char* func_5(int iParam0)//Position - 0x623B
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p03";
	}
	return "cards_collect_p03";
}

char* func_6(int iParam0)//Position - 0x625A
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p02";
	}
	return "cards_collect_p02";
}

char* func_7(int iParam0)//Position - 0x6279
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p01";
	}
	return "cards_collect_p01";
}

char* func_8(int iParam0)//Position - 0x6298
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 0, 0);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar2 = Local_116.f_117[(iParam0 * 4 + iVar3)];
		if (iVar2 != func_422())
		{
			iVar4 = func_9(&(Local_116.f_410[iVar2 /*5*/].f_1), 0, 0);
			if (iVar4 > iVar1 && (BitTest(Local_749[iVar2 /*9*/], 1) || Local_749[iVar2 /*9*/].f_3 <= 0))
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (Local_116.f_15[iParam0] >= 7)
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

int func_9(var uParam0, bool bParam1, bool bParam2)//Position - 0x649A
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

int func_10(int iParam0)//Position - 0x70FD
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

int func_11(int iParam0)//Position - 0x7255
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

char* func_12(int iParam0)//Position - 0x73D8
{
	if (Local_116.f_15[iParam0] > 7)
	{
		return "female_reveal_folded_p04";
	}
	return "reveal_folded_p04";
}

char* func_13(int iParam0)//Position - 0x73F7
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p04";
	}
	return "reveal_played_p04";
}

char* func_14(int iParam0)//Position - 0x7416
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p04";
	}
	return "reveal_blind_p04";
}

char* func_15(int iParam0)//Position - 0x7435
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p03";
	}
	return "reveal_folded_p03";
}

char* func_16(int iParam0)//Position - 0x7454
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p03";
	}
	return "reveal_played_p03";
}

char* func_17(int iParam0)//Position - 0x7473
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p03";
	}
	return "reveal_blind_p03";
}

char* func_18(int iParam0)//Position - 0x7492
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p02";
	}
	return "reveal_folded_p02";
}

char* func_19(int iParam0)//Position - 0x74B1
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p02";
	}
	return "reveal_played_p02";
}

char* func_20(int iParam0)//Position - 0x74D0
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p02";
	}
	return "reveal_blind_p02";
}

int func_21(int iParam0, int iParam1)//Position - 0x74EF
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
		return func_53(11, &(Local_116.f_50[iParam0]), 0, -1);
	}
	return 1;
}

int func_22(int iParam0)//Position - 0x754E
{
	int iVar0;
	
	if (Local_749[iParam0 /*9*/].f_5 > 0)
	{
		iVar0 = func_9(&(Local_116.f_410[iParam0 /*5*/].f_1), 0, 0);
		if (func_23(iVar0) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)//Position - 0x7585
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

int func_24(int iParam0, int iParam1)//Position - 0x75D6
{
	int iVar0;
	int iVar1;
	
	if (Local_749[iParam1 /*9*/].f_3 > 0 && BitTest(Local_749[iParam1 /*9*/], 1))
	{
		iVar0 = func_9(&(Local_116.f_410[iParam1 /*5*/].f_1), 0, 0);
		iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 0, 0);
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
			iVar0 = func_9(&(Local_116.f_410[iParam1 /*5*/].f_1), 1, 0);
			iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 1, 0);
			if (iVar0 > iVar1)
			{
				return 1;
			}
			if (iVar0 == iVar1)
			{
				iVar0 = func_9(&(Local_116.f_410[iParam1 /*5*/].f_1), 0, 1);
				iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 0, 1);
				if (iVar0 > iVar1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x76AA
{
	if (iParam0 >= 12)
	{
		return 1;
	}
	return 0;
}

char* func_26(int iParam0)//Position - 0x76BE
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p01";
	}
	return "reveal_folded_p01";
}

char* func_27(int iParam0)//Position - 0x76DD
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p01";
	}
	return "reveal_played_p01";
}

char* func_28(int iParam0)//Position - 0x76FC
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p01";
	}
	return "reveal_blind_p01";
}

void func_29(int iParam0, int iParam1)//Position - 0x771B
{
	Local_116.f_581[iParam1] = iParam0;
}

char* func_30(int iParam0)//Position - 0x772E
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_self";
	}
	return "reveal_self";
}

char* func_31(int iParam0)//Position - 0x774D
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_put_down";
	}
	return "deck_put_down";
}

char* func_32(int iParam0)//Position - 0x776C
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_self";
	}
	return "deck_deal_self";
}

char* func_33(int iParam0)//Position - 0x778B
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p04";
	}
	return "deck_deal_p04";
}

char* func_34(int iParam0)//Position - 0x77AA
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p03";
	}
	return "deck_deal_p03";
}

char* func_35(int iParam0)//Position - 0x77C9
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p02";
	}
	return "deck_deal_p02";
}

void func_36(int iParam0, int iParam1)//Position - 0x77E8
{
	Local_116.f_571[iParam1] = iParam0;
}

int func_37(var uParam0, var uParam1)//Position - 0x77FB
{
	if (*uParam0 >= uParam0->f_1)
	{
		return 0;
	}
	*uParam1 = uParam0->f_2[*uParam0];
	*uParam0++;
	return 1;
}

char* func_38(int iParam0)//Position - 0x7826
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p01";
	}
	return "deck_deal_p01";
}

int func_39(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x7845
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7, iParam12));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
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

int func_40(int iParam0, bool bParam1)//Position - 0x78EC
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

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x7FF3
{
	return ((iParam0 * 3 * 4 + iParam2 * 3) + iParam1);
}

char* func_42(int iParam0)//Position - 0x800B
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_idle";
	}
	return "deck_idle";
}

char* func_43(int iParam0)//Position - 0x802A
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_shuffle";
	}
	return "deck_shuffle";
}

char* func_44(int iParam0)//Position - 0x8049
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_pick_up";
	}
	return "deck_pick_up";
}

char* func_45()//Position - 0x8068
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_46(int iParam0, int iParam1)//Position - 0x8074
{
	return (iParam0 * 3 + iParam1);
}

int func_47(int iParam0)//Position - 0x8083
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	
	Var3 = { func_76(iParam0) };
	Var3.f_2 = (Var3.f_2 + 0.914f);
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar0 = func_46(iParam0, iVar6);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 53);
		iVar1 = func_40(iVar2, Local_1038.f_5);
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_55[iVar0]))
		{
			STREAMING::REQUEST_MODEL(iVar1);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1) || !func_39(&(Local_116.f_55[iVar0]), iVar1, Var3, 1, 1, 1, 1, 1, 1, 1, 0))
			{
				return 0;
			}
		}
		iVar6++;
	}
	return 1;
}

int func_48(int iParam0)//Position - 0x811B
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
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[iVar1]))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[iVar1]))
				{
					func_49(&(Local_116.f_68[iVar1]));
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[iVar1]);
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
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_55[iVar1]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[iVar1]))
			{
				func_49(&(Local_116.f_55[iVar1]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[iVar1]);
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

void func_49(var uParam0)//Position - 0x81F6
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

char* func_50(int iParam0)//Position - 0x822F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_116.f_117[(iParam0 * 4 + iVar2)] != func_422())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_116.f_15[iParam0] >= 7)
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

char* func_51(int iParam0, int iParam1)//Position - 0x8386
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_422())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_116.f_15[iParam0] >= 7)
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

void func_52(int iParam0, int iParam1)//Position - 0x844B
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	MISC::SET_BIT(&(Local_116.f_20[iParam0]), iParam1);
}

int func_53(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x848A
{
	char cVar0[64];
	int iVar16;
	char* sVar17;
	
	StringCopy(&cVar0, func_55(iParam0, iParam3), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar16 = NETWORK::NET_TO_PED(*uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar16, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar16))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar16))
	{
		return 0;
	}
	sVar17 = func_54(7);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iVar16, &cVar0, sVar17, 1);
	return 1;
}

int func_54(int iParam0)//Position - 0x84FF
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

char* func_55(int iParam0, int iParam1)//Position - 0x86F4
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

char* func_56(int iParam0)//Position - 0x8827
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

int func_57(int iParam0)//Position - 0x88A0
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0)//Position - 0x88BF
{
	int iVar0;
	
	iVar0 = Local_749[*iParam0 /*9*/].f_2;
	return func_59(iVar0, Local_1038.f_26);
}

int func_59(int iParam0, int iParam1)//Position - 0x88DE
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x8906
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

int func_61(int iParam0)//Position - 0x8927
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
		if (!Global_45036[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_62(int iParam0, bool bParam1, bool bParam2)//Position - 0x8970
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

int func_63(int iParam0, int iParam1)//Position - 0x89D0
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return BitTest(Local_116.f_20[iParam0], iParam1);
}

void func_64(int iParam0)//Position - 0x8A0E
{
	MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 16);
	MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 17);
	MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 18);
	MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 19);
	MISC::CLEAR_BIT(&(Local_116.f_20[iParam0]), 21);
}

void func_65(var uParam0)//Position - 0x8A5C
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
			iVar0 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, uParam0->f_1);
			uVar2 = uParam0->f_2[iVar1];
			uParam0->f_2[iVar1] = uParam0->f_2[iVar0];
			uParam0->f_2[iVar0] = uVar2;
			iVar1++;
		}
		iVar3++;
	}
}

void func_66(int iParam0, int iParam1)//Position - 0x8AC4
{
	Local_116.f_576[iParam1] = iParam0;
}

void func_67(int iParam0)//Position - 0x8AD7
{
	struct<5> Var0;
	
	Local_116[iParam0] = 1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
			{
				Local_116.f_45[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_116.f_35[iParam0]);
				if (Local_116.f_45[iParam0] == -1 || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), joaat("blend_out"))))
				{
					Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]);
			}
			return;
		}
	}
	if (func_48(iParam0))
	{
		Local_116.f_20[iParam0] = 0;
		Var0.f_1 = 3;
		Local_116.f_389[iParam0 /*5*/] = { Var0 };
		Local_116.f_5[iParam0] = 0;
		func_69(&(Local_116.f_150[iParam0 /*2*/]));
		func_79(1, iParam0);
		func_66(0, iParam0);
		func_36(0, iParam0);
		func_29(0, iParam0);
		Local_116.f_25[iParam0]++;
		Local_116[iParam0] = 0;
	}
}

int func_68(int iParam0, bool bParam1)//Position - 0x8C79
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_422() && Local_116.f_410[Local_116.f_117[(iParam0 * 4 + iVar1)] /*5*/] > 0)
			{
				iVar0++;
			}
			else
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 0, iVar1)]));
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 1, iVar1)]));
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 2, iVar1)]));
					}
				}
			}
		}
		else if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_422())
		{
			iVar0++;
		}
		else
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 0, iVar1)]));
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 1, iVar1)]));
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 2, iVar1)]));
				}
			}
		}
		iVar1++;
	}
	if (Local_116.f_30[iParam0] != iVar0)
	{
		Local_116.f_30[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0)//Position - 0x8F1D
{
	uParam0->f_1 = 0;
}

char* func_70(int iParam0, int iParam1)//Position - 0x8F2A
{
	if (Local_116.f_15[iParam0] >= 7)
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

int func_71(var uParam0, int iParam1, bool bParam2)//Position - 0x8FBB
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

bool func_72(var uParam0)//Position - 0x9019
{
	return uParam0->f_1;
}

void func_73(var uParam0, bool bParam1, bool bParam2)//Position - 0x9025
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

char* func_74(int iParam0)//Position - 0x906A
{
	if (Local_116.f_15[iParam0] >= 7)
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

float func_75(int iParam0)//Position - 0x911D
{
	if (Local_1038.f_26 == 1)
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

Vector3 func_76(int iParam0)//Position - 0x9179
{
	if (Local_1038.f_26 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1143.3379f, 264.2453f, -52.8409f;
			
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

char* func_77(int iParam0)//Position - 0x9209
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_78()//Position - 0x9228
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_79(int iParam0, int iParam1)//Position - 0x9234
{
	Local_116.f_586[iParam1] = iParam0;
}

void func_80(var uParam0)//Position - 0x9247
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	iVar4 = 52;
	iVar5 = 0;
	while (iVar5 < 52)
	{
		iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar4);
		iVar6 = 0;
		while (iVar6 < 52)
		{
			iVar8 = (iVar6 / 32);
			bVar9 = (iVar6 % 32);
			if (iVar7 == iVar3 && !BitTest(uVar0[iVar8], bVar9))
			{
				MISC::SET_BIT(&(uVar0[iVar8]), bVar9);
				uParam0->f_2[iVar5] = iVar6 + 1;
			}
			else
			{
				if (!BitTest(uVar0[iVar8], bVar9))
				{
					iVar7++;
				}
				iVar6++;
			}
		}
		iVar7 = 0;
		iVar4 = (iVar4 - 1);
		iVar5++;
	}
	uParam0->f_1 = 52;
}

void func_81()//Position - 0x92E9
{
	int iVar0;
	
	if (!func_85(PLAYER::PLAYER_ID()))
	{
		iVar0 = iLocal_1971;
		if (Global_2708678 != iVar0 && (Global_2708678 != -1 || func_428(PLAYER::PLAYER_ID())))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]))
			{
				func_82(iVar0);
			}
		}
		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0]))
			{
				func_49(&(Local_116.f_50[iVar0]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0]);
			}
		}
	}
	iLocal_1971++;
	if (iLocal_1971 >= Local_1038.f_26)
	{
		iLocal_1971 = 0;
	}
}

void func_82(int iParam0)//Position - 0x938F
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("S_M_Y_Casino_01");
	if (Local_116.f_15[iParam0] >= 7)
	{
		iVar0 = joaat("S_F_Y_Casino_01");
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
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]))
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
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar1, true);
			PED::SET_PED_CAN_EVASIVE_DIVE(iVar1, false);
			PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iVar1, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar1, false);
			PED::SET_PED_CONFIG_FLAG(iVar1, 208, true);
			PED::SET_PED_CAN_RAGDOLL(iVar1, false);
			func_84(Local_116.f_15[iParam0], &iVar1);
			func_83(Local_116.f_15[iParam0], &iVar1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_76(iParam0), false, false, true);
			ENTITY::SET_ENTITY_HEADING(iVar1, func_75(iParam0));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				Local_116.f_50[iParam0] = NETWORK::PED_TO_NET(iVar1);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_116.f_50[iParam0], false);
					Local_116.f_10[iParam0] = 1;
					Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 1000f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
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

void func_83(int iParam0, int iParam1)//Position - 0x9570
{
	switch (iParam0)
	{
		case 0:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_84(int iParam0, int iParam1)//Position - 0x96CF
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
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false, 1);
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
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false, 1);
			break;
	}
}

int func_85(int iParam0)//Position - 0x9E04
{
	if (iParam0 != func_422() && func_62(iParam0, 1, 1))
	{
		if (func_86(iParam0) && !func_427(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x9E3D
{
	if (iParam0 != func_422() && func_62(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

void func_87()//Position - 0x9E6E
{
	struct<5> Var0;
	bool bVar5;
	int iVar6;
	
	Var0.f_1 = 3;
	bVar5 = false;
	iVar6 = iLocal_1970;
	if (Local_749[iVar6 /*9*/].f_2 == -1)
	{
		Local_116.f_410[iVar6 /*5*/] = { Var0 };
	}
	if (Local_749[iVar6 /*9*/].f_7 == 0)
	{
		if (Local_116.f_600[iVar6] != 0)
		{
			Local_116.f_600[iVar6] = 0;
		}
	}
	if (!bVar5)
	{
		if (func_88(iVar6))
		{
			bVar5 = true;
		}
	}
	iLocal_1970++;
	if (iLocal_1970 >= 32)
	{
		iLocal_1970 = 0;
	}
}

int func_88(int iParam0)//Position - 0x9EED
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_417())
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
	iVar2 = Local_749[iParam0 /*9*/].f_7.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_749[iParam0 /*9*/].f_7 == 1)
	{
		if (func_53(2, &(Local_116.f_50[iVar2]), 0, iParam0))
		{
			func_89(iParam0, 1);
		}
		return 1;
	}
	if (Local_749[iParam0 /*9*/].f_7 == 2)
	{
		if (func_53(3, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 2);
		}
		return 1;
	}
	if (Local_749[iParam0 /*9*/].f_7 == 4)
	{
		if (func_53(4, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 4);
		}
		return 1;
	}
	if (Local_749[iParam0 /*9*/].f_7 == 5)
	{
		if (func_53(5, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 5);
		}
		return 1;
	}
	if (Local_749[iParam0 /*9*/].f_7 == 6)
	{
		if (func_53(6, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 6);
		}
		return 1;
	}
	if (Local_749[iParam0 /*9*/].f_7 == 7)
	{
		if (func_53(7, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1)//Position - 0xA04F
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
	MISC::SET_BIT(&(Local_116.f_600[iParam0]), iVar0);
}

void func_90()//Position - 0xA094
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1969;
	if (Local_116.f_117[iVar0] != func_422())
	{
		iVar1 = Local_116.f_117[iVar0];
		if (((!func_62(Local_116.f_117[iVar0], 1, 1) || Local_749[iVar1 /*9*/].f_1 == -1) || Local_749[iVar1 /*9*/].f_1 != iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_116.f_117[iVar0]))
		{
			Local_116.f_117[iVar0] = func_422();
			if (Local_116.f_600[iVar0] != 0)
			{
				Local_116.f_600[iVar0] = 0;
			}
		}
	}
	if (func_62(iVar0, 1, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		if (Local_749[iVar0 /*9*/].f_1 > -1 && Local_749[iVar0 /*9*/].f_1 < 32)
		{
			if (Local_116.f_117[Local_749[iVar0 /*9*/].f_1] == func_422())
			{
				if (func_62(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
				{
					Local_116.f_117[Local_749[iVar0 /*9*/].f_1] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
			}
		}
	}
	iLocal_1969++;
	if (iLocal_1969 >= 32)
	{
		iLocal_1969 = 0;
	}
}

void func_91()//Position - 0xA1A8
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<16> Var6;
	struct<3> Var22;
	
	if (!Local_1038.f_5)
	{
		if (func_428(PLAYER::PLAYER_ID()) && func_423() != func_422())
		{
			if (BitTest(Global_2657971[func_423() /*465*/].f_322.f_4, 4))
			{
				Local_1038.f_5 = 1;
				func_416();
				iLocal_1964 = 1;
			}
		}
	}
	else if (iLocal_1964)
	{
		if (func_415())
		{
			iLocal_1964 = 0;
		}
	}
	func_414();
	Local_1038.f_19 = func_410();
	func_400();
	func_396();
	func_393();
	if (Local_1038.f_798 > 2)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/))
		{
		}
		if (func_392(Local_1038.f_18) >= 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_76(func_392(Local_1038.f_18)), true) > 5f)
		{
			func_387(0);
		}
	}
	if (Local_1038.f_798 > 5)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		func_385(1);
		func_384(1, 0);
	}
	if (Local_1038.f_798 > 6)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/))
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
		CAM::BLOCK_FIRST_PERSON_ORIENTATION_RESET_THIS_UPDATE();
	}
	if (Local_1038.f_798 > 7)
	{
		func_380(&(Local_749[PLAYER::PLAYER_ID() /*9*/]));
	}
	if (func_379())
	{
		bLocal_1966 = true;
	}
	else if (bLocal_1966)
	{
		func_378(&uLocal_1967, 0, 0);
		bLocal_1966 = false;
	}
	else if (func_72(&uLocal_1967) && func_71(&uLocal_1967, 500, 0))
	{
		func_69(&uLocal_1967);
	}
	switch (Local_1038.f_798)
	{
		case 0:
			if (func_373())
			{
				Local_1038.f_796 = "idle_cardgames";
				Local_1038.f_22 = 0;
				Local_749[PLAYER::PLAYER_ID() /*9*/] = 0;
				Local_749[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
				Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
				Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
				func_372(PLAYER::PLAYER_ID());
				func_371(1);
			}
			break;
		
		case 1:
			switch (func_392(Local_1038.f_18))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_1038.f_16 = 5000;
					Local_1038.f_17 = 10;
					Local_1038.f_27 = 500;
					Local_1038.f_28 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_1038.f_16 = 50000;
					Local_1038.f_17 = 1000;
					Local_1038.f_27 = 5000;
					Local_1038.f_28 = 1000;
					break;
			}
			if (Local_1038.f_26 == 1)
			{
				bVar0 = true;
				Local_1038.f_16 = 50000;
				Local_1038.f_17 = 1000;
				Local_1038.f_27 = 5000;
				Local_1038.f_28 = 1000;
			}
			if (((((((((((((((((((((((!Global_262145.f_26509 /* Tunable: VC_CASINO_DISABLE_POKER */ && !(Global_262145.f_26511 /* Tunable: VC_CASINO_DISABLE_POKER_LOW */ && !bVar0)) && !(Global_262145.f_26510 /* Tunable: VC_CASINO_DISABLE_POKER_HIGH */ && bVar0)) && ((func_370(joaat("rm_GamingFloor_02")) || func_370(joaat("rm_GamingFloor_03"))) || func_428(PLAYER::PLAYER_ID()))) && func_368(PLAYER::PLAYER_PED_ID(), func_369(Local_1038.f_18), 1.5f, 1)) && func_363(PLAYER::PLAYER_PED_ID(), func_367(Local_1038.f_18), 40f)) && Local_116.f_410[PLAYER::PLAYER_ID() /*5*/] == 0) && !BitTest(Global_1943520.f_4, 2)) && !Global_2635563.f_2981) && Global_2708678 != func_392(Local_1038.f_18)) && (Global_2708678 != -1 || func_428(PLAYER::PLAYER_ID()))) && func_362()) && !func_358()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_355(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2635563.f_2981) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_354()) && !func_353()) && !func_351()) && !Global_2696212.f_12) && Global_1943513 != 33) && !func_350())
			{
				func_371(2);
			}
			else
			{
				Local_1038.f_18++;
				if (Local_1038.f_18 >= Local_1038.f_26 * 4)
				{
					Local_1038.f_18 = 0;
				}
			}
			break;
		
		case 2:
			func_349();
			func_372(PLAYER::PLAYER_ID());
			if (((((((((((((((((((((func_370(joaat("rm_GamingFloor_02")) || func_370(joaat("rm_GamingFloor_03"))) || func_428(PLAYER::PLAYER_ID())) && func_368(PLAYER::PLAYER_PED_ID(), func_369(Local_1038.f_18), 1.5f, 1)) && func_363(PLAYER::PLAYER_PED_ID(), func_367(Local_1038.f_18), 40f)) && Local_116.f_410[PLAYER::PLAYER_ID() /*5*/] == 0) && Global_2708678 != func_392(Local_1038.f_18)) && (Global_2708678 != -1 || func_428(PLAYER::PLAYER_ID()))) && func_362()) && !func_358()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_355(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2635563.f_2981) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_354()) && !func_353()) && !func_351()) && !Global_2696212.f_12) && Global_1943513 != 33) && !Local_116[func_392(Local_1038.f_18)]) && !func_350())
			{
				if ((((((func_62(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_348()) && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !bLocal_1966) && !func_72(&uLocal_1967))
				{
					if (func_346(2, &uVar1))
					{
						if (!func_345("TCP_NA" /* GXT: This feature is not available for you. */))
						{
							func_344("TCP_NA" /* GXT: This feature is not available for you. */);
						}
					}
					else if (Local_116.f_117[Local_1038.f_18] != func_422())
					{
						if (!func_345("TCP_USED" /* GXT: This seat is currently in use. */))
						{
							func_344("TCP_USED" /* GXT: This seat is currently in use. */);
						}
					}
					else if (func_343())
					{
						if (func_339() == 2)
						{
							if (!func_345("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */))
							{
								func_344("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */);
							}
						}
						else if (!func_345("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */))
						{
							func_344("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */);
						}
					}
					else if ((!func_338(PLAYER::PLAYER_ID()) && (func_392(Local_1038.f_18) == 2 || func_392(Local_1038.f_18) == 3)) && !(func_337(1) && func_338(func_336())))
					{
						if (!func_345("CAS_MG_SUITE2" /* GXT: A VIP Membership is required to play High Limit. Purchase a Penthouse from www.thediamondcasinoandresort.com to become a VIP member. */))
						{
							func_344("CAS_MG_SUITE2" /* GXT: A VIP Membership is required to play High Limit. Purchase a Penthouse from www.thediamondcasinoandresort.com to become a VIP member. */);
						}
					}
					else if (!func_335() && !(func_337(1) && func_334(func_336())))
					{
						if (!func_332("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, func_333(1)))
						{
							func_331("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, func_333(1));
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/))
						{
							HUD::CLEAR_HELP(true);
							func_330();
							func_371(3);
						}
					}
					else if (Local_1038.f_19 <= 0)
					{
						if (func_428(PLAYER::PLAYER_ID()))
						{
							if (!func_345("CAS_MG_NOCHIPS7" /* GXT: Chips are required to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */))
							{
								func_344("CAS_MG_NOCHIPS7" /* GXT: Chips are required to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */);
							}
						}
						else if (!func_345("CAS_MG_NOCHIPS3" /* GXT: Chips are required to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */))
						{
							func_344("CAS_MG_NOCHIPS3" /* GXT: Chips are required to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */);
						}
					}
					else if (Local_1038.f_19 < Local_1038.f_28)
					{
						if (func_428(PLAYER::PLAYER_ID()))
						{
							if (!func_345("CAS_MG_LOWCHIPS7" /* GXT: You don't have enough Chips to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */))
							{
								func_344("CAS_MG_LOWCHIPS7" /* GXT: You don't have enough Chips to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */);
							}
						}
						else if (!func_345("CAS_MG_LOWCHIPS3" /* GXT: You don't have enough Chips to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */))
						{
							func_344("CAS_MG_LOWCHIPS3" /* GXT: You don't have enough Chips to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */);
						}
					}
					else if (Local_1038.f_31 == -1)
					{
						if (func_329())
						{
							HUD::CLEAR_HELP(true);
						}
						if (((!func_338(PLAYER::PLAYER_ID()) && (func_392(Local_1038.f_18) == 2 || func_392(Local_1038.f_18) == 3)) && !(func_337(1) && func_338(func_336()))) || (!func_335() && (func_337(1) && func_334(func_336()))))
						{
							if (func_326(func_336()) == 1)
							{
								Local_1038.f_25 = 1;
								func_325(&(Local_1038.f_31), 4, "TCP_PLAY_A" /* GXT: Press ~INPUT_CONTEXT~ to play Three Card Poker using your MC President's casino membership. */, 0, 0, 0, 0);
							}
							else if (func_324(func_336()))
							{
								Local_1038.f_25 = 2;
								func_325(&(Local_1038.f_31), 4, "TCP_PLAY_B" /* GXT: Press ~INPUT_CONTEXT~ to play Three Card Poker using your CEO's casino membership. */, 0, 0, 0, 0);
							}
							else
							{
								Local_1038.f_25 = 3;
								func_325(&(Local_1038.f_31), 4, "TCP_PLAY_C" /* GXT: Press ~INPUT_CONTEXT~ to play Three Card Poker using your VIP's casino membership. */, 0, 0, 0, 0);
							}
						}
						else
						{
							Local_1038.f_25 = 0;
							func_325(&(Local_1038.f_31), 4, "TCP_PLAY" /* GXT: Press ~INPUT_CONTEXT~ to play Three Card Poker. */, 0, 0, 0, 0);
						}
					}
					else if (func_323(Local_1038.f_31, 1))
					{
						func_321(&(Local_1038.f_31));
						Local_1038.f_31 = -1;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
						func_320();
						func_309(PLAYER::PLAYER_ID(), 0, 1048832, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						func_371(4);
					}
				}
				else
				{
					if (func_329())
					{
						HUD::CLEAR_HELP(true);
					}
					if (Local_1038.f_31 != -1)
					{
						func_321(&(Local_1038.f_31));
						Local_1038.f_31 = -1;
					}
					Local_1038.f_18 = 0;
					func_371(1);
				}
			}
			else
			{
				if (func_329())
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_1038.f_31 != -1)
				{
					func_321(&(Local_1038.f_31));
					Local_1038.f_31 = -1;
				}
				Local_1038.f_18 = 0;
				func_371(1);
			}
			break;
		
		case 3:
			if (!func_308())
			{
				func_371(2);
			}
			break;
		
		case 4:
			func_385(1);
			sVar2 = "CasinoUI_Cards_Three";
			if ((func_392(Local_1038.f_18) == 2 || func_392(Local_1038.f_18) == 3) || func_428(PLAYER::PLAYER_ID()))
			{
				sVar2 = "CasinoUI_Cards_Three_High";
			}
			if (BitTest(Global_1943520.f_5, 22))
			{
				func_378(&(Local_1038.f_792), 0, 0);
				func_307(Local_1038.f_18);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					func_309(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				else
				{
					func_309(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				func_371(5);
			}
			else
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar2, false);
				if (func_305(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar2))
				{
					if (!iLocal_1965)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
						func_304(0, 0);
						func_302(1, sVar2, sVar2);
						func_301("TCP_TITLE" /* GXT: THREE CARD POKER */);
						func_300(-1, 1, 1);
						func_299("TCP_DIS" /* GXT: ~a~~n~~n~~a~~n~~n~~a~ */, 0, 0);
						func_298("TCP_DIS1" /* GXT: The aim of Three Card Poker is to make the best poker hand possible with three cards, comparing your hand against the Dealer's hand. */);
						func_298("TCP_DIS2" /* GXT: Bets can be placed on the Ante, Pair Plus, or both. Play and Ante bets pay out 1 to 1 if your hand beats the Dealer's hand. A Straight or higher is needed to receive the Ante Bonus. */);
						func_298("TCP_DIS3" /* GXT: For Pair Plus, you are betting on your own hand only, and must have a Pair or better to receive a payout. */);
						func_297(202, "TCP_EXIT" /* GXT: Quit */, -1);
						func_297(201, "TCP_CONT" /* GXT: Continue */, -1);
						iLocal_1965 = 1;
					}
					func_270(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_267(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_1965 = 0;
					func_258();
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_267(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_1965 = 0;
					MISC::SET_BIT(&(Global_1943520.f_5), 22);
					func_378(&(Local_1038.f_792), 0, 0);
					func_307(Local_1038.f_18);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						func_309(PLAYER::PLAYER_ID(), 0, 0, 0);
					}
					else
					{
						func_309(PLAYER::PLAYER_ID(), 0, 256, 0);
					}
					func_371(5);
				}
			}
			break;
		
		case 5:
			if ((((func_257(Local_1038.f_18) && !func_347()) && !func_379()) && func_362()) && !func_358())
			{
				func_69(&(Local_1038.f_792));
				MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4), 3);
				func_248(2);
				func_371(6);
			}
			else
			{
				if (func_347())
				{
					func_258();
				}
				if (func_379())
				{
					func_258();
				}
				if (func_247(Local_1038.f_18))
				{
					func_258();
				}
				if (func_246())
				{
					func_258();
				}
				if (!func_362())
				{
					func_258();
				}
				if (func_358())
				{
					func_258();
				}
			}
			break;
		
		case 6:
			if (!func_347() && !func_379())
			{
				if (func_245())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 1 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 2)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
					}
					fVar3 = func_243(PLAYER::PLAYER_PED_ID(), func_244(Local_1038.f_18, 0), 1);
					fVar4 = func_243(PLAYER::PLAYER_PED_ID(), func_244(Local_1038.f_18, 1), 1);
					fVar5 = func_243(PLAYER::PLAYER_PED_ID(), func_244(Local_1038.f_18, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_1038.f_21 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_1038.f_21 = 2;
					}
					else
					{
						Local_1038.f_21 = 0;
					}
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_244(Local_1038.f_18, Local_1038.f_21), 1f, 5000, func_242(Local_1038.f_18, Local_1038.f_21), 0.01f);
					func_371(7);
				}
			}
			else
			{
				func_258();
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
			{
				Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_1038.f_18), func_240(Local_1038.f_18), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_239(), func_238(Local_1038.f_21), 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
				Local_749[PLAYER::PLAYER_ID() /*9*/].f_7.f_1 = Local_749[PLAYER::PLAYER_ID() /*9*/].f_2;
				func_371(8);
			}
			break;
		
		case 8:
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(joaat("CASINO_POKER_CAMERA"));
			Local_1038.f_30 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_1038.f_24);
			if (func_237())
			{
				func_236(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 2);
			}
			else
			{
				func_236(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 1);
			}
			if (Local_1038.f_30 != -1)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showui"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))
				{
					func_309(PLAYER::PLAYER_ID(), 0, 256, 0);
					Local_1924 = { Var6 };
					if (func_428(PLAYER::PLAYER_ID()))
					{
						Local_1924.f_0 = 1695074466;
					}
					else if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 == 3)
					{
						Local_1924.f_0 = joaat("high stakes");
					}
					else
					{
						Local_1924.f_0 = joaat("standard");
					}
					Local_1924.f_1 = Local_749[PLAYER::PLAYER_ID() /*9*/].f_2;
					Local_1924.f_6 = 1;
					if (func_338(PLAYER::PLAYER_ID()))
					{
						Local_1924.f_15 = joaat("VIP membership");
					}
					else if (func_335())
					{
						Local_1924.f_15 = joaat("paid membership");
					}
					else if (func_337(1) && (func_338(func_336()) || func_234(PLAYER::PLAYER_ID())))
					{
						Local_1924.f_15 = joaat("Gang membership");
					}
					else
					{
						Local_1924.f_15 = joaat("no membership");
					}
					func_378(&uLocal_1899, 0, 0);
					func_233();
					Local_1038.f_32 = func_410();
					func_371(9);
				}
			}
			break;
		
		case 9:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(joaat("CASINO_POKER_CAMERA"));
			func_95();
			break;
		
		case 10:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
			{
				func_236(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), func_94());
				Var22 = { PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/), PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/), 0f };
				Local_1038.f_30 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_1038.f_24);
				if (Local_1038.f_7)
				{
					if (Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
					{
						Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_1038.f_18), func_240(Local_1038.f_18), 2, false, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_239(), func_93(Local_1038.f_18), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
						Local_1038.f_7 = 0;
					}
				}
				else if (Local_1038.f_30 != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) || (SYSTEM::VMAG(Var22) >= 0.24f && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")))))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_309(PLAYER::PLAYER_ID(), 1, 0, 0);
					STREAMING::REMOVE_ANIM_DICT(func_45());
					STREAMING::REMOVE_ANIM_DICT(func_78());
					STREAMING::REMOVE_ANIM_DICT(func_92());
					STREAMING::REMOVE_ANIM_DICT(func_239());
					func_416();
					MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4), 3);
					func_349();
					func_371(2);
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_309(PLAYER::PLAYER_ID(), 1, 0, 0);
				STREAMING::REMOVE_ANIM_DICT(func_45());
				STREAMING::REMOVE_ANIM_DICT(func_78());
				STREAMING::REMOVE_ANIM_DICT(func_92());
				STREAMING::REMOVE_ANIM_DICT(func_239());
				MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4), 3);
				func_349();
				func_371(2);
			}
			break;
	}
}

char* func_92()//Position - 0xB303
{
	return "anim_casino_b@amb@casino@games@threecardpoker@player";
}

char* func_93(int iParam0)//Position - 0xB30F
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

int func_94()//Position - 0xB359
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_410();
	iVar1 = (iVar0 - Local_1038.f_32);
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

void func_95()//Position - 0xB386
{
	int iVar0;
	struct<9> Var1;
	struct<5> Var10;
	struct<23> Var15;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	bool bVar49;
	int iVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	int iVar54;
	bool bVar55;
	bool bVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	bool bVar60;
	int iVar61;
	int iVar62;
	char* sVar63;
	bool bVar64;
	bool bVar65;
	
	if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
	{
		if (func_232(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2))
		{
			func_231("TCP_ERROR" /* GXT: Something went wrong with the game. */, -1);
			return;
		}
	}
	func_218();
	if (func_417())
	{
		Local_1924.f_10 = 1;
	}
	Local_1924.f_11 = func_216();
	if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_pickup", 3)) && !BitTest(Local_1038.f_20, 0)) && !BitTest(Local_1038.f_20, 3)) && !Local_1038.f_1) && !func_215())
	{
		Local_1901.f_4 = joaat("QUIT");
		Local_1924.f_2 = joaat("QUIT");
		Local_1901.f_22 = joaat("QUIT");
		Local_1901.f_7 = func_410();
		Local_1901.f_17 = func_214(&uLocal_1897, 0, 0);
		Local_1901.f_18 = func_417();
		Local_1901.f_19 = func_216();
		if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
		{
			Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2];
		}
		if ((Local_1038.f_797 > 1 || Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 != 0) || Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 != 0)
		{
			if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
			{
				STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
			}
		}
		if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 > 0 && !Local_1038.f_2)
		{
			func_213(Local_749[PLAYER::PLAYER_ID() /*9*/].f_3);
		}
		if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 > 0 && !Local_1038.f_6)
		{
			func_213(Local_749[PLAYER::PLAYER_ID() /*9*/].f_5);
		}
		if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 > 0 && !Local_1038.f_3)
		{
			func_213(Local_749[PLAYER::PLAYER_ID() /*9*/].f_4);
		}
		SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_749[PLAYER::PLAYER_ID() /*9*/].f_3));
		SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_749[PLAYER::PLAYER_ID() /*9*/].f_5));
		SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_749[PLAYER::PLAYER_ID() /*9*/].f_4));
		func_387(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (((Global_2708678 == Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 || Global_2696212.f_12) || Global_1943513 == 33) || !func_211())
	{
		Local_1901.f_7 = func_410();
		Local_1901.f_17 = func_214(&uLocal_1897, 0, 0);
		Local_1901.f_18 = func_417();
		Local_1901.f_19 = func_216();
		if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
		{
			Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2];
		}
		if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
		{
			STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
		}
		func_387(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (Local_1038.f_24 > -1)
	{
		Local_1038.f_30 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_1038.f_24);
		if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_idle", 3)) && !BitTest(Local_1038.f_22, 0)) && !Local_1038.f_1)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_239(), "idle_cardgames", 3))
			{
				if (Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
				{
					Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_239(), "idle_cardgames", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
					Local_1038.f_796 = "idle_cardgames";
				}
			}
			else if (Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
			{
				Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_239(), func_210(0), 2f, -2f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
			}
		}
	}
	if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
	{
		func_208(&(Local_1038.f_90));
		if (!BitTest(Local_1038.f_20, 0) && !BitTest(Local_1038.f_20, 3))
		{
			func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), "TCP_EXIT" /* GXT: Quit */, &(Local_1038.f_90), 0);
			if (((((Local_1038.f_797 == 3 && Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 > 0) && !BitTest(Local_1038.f_22, 2)) && !BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_1038.f_22, 1)) && !BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 3))
			{
				func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "TCP_PLAY_HAND" /* GXT: Play */, &(Local_1038.f_90), 0);
				func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true), "TCP_FOLD_HAND" /* GXT: Fold */, &(Local_1038.f_90), 0);
			}
			if (Local_116.f_576[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2] == 3 && ((Local_1038.f_19 >= Local_1038.f_28 || Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 != 0) || Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 != 0))
			{
				if (!BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 0) && !BitTest(Local_1038.f_22, 0))
				{
					if (Local_1038.f_19 >= Local_1038.f_17 * 2)
					{
						func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "TCP_PLACE" /* GXT: Place Ante Bet */, &(Local_1038.f_90), 0);
					}
					func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true), "TCP_DECLINEA" /* GXT: Decline Ante Bet */, &(Local_1038.f_90), 0);
					if (Local_1038.f_19 >= Local_1038.f_17 * 2)
					{
						if (!BitTest(Local_1038.f_22, 8))
						{
							func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/, true), "TCP_BET_MAX" /* GXT: Max Bet */, &(Local_1038.f_90), 0);
						}
						func_206(2, 7, "TCP_BET_NUM" /* GXT: Adjust Bet */, &(Local_1038.f_90));
					}
				}
				else if ((!BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 2) && Local_1038.f_19 >= (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_1038.f_28)) && !BitTest(Local_1038.f_22, 0))
				{
					func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "TCP_PLACE_PP" /* GXT: Place Pair Plus Bet */, &(Local_1038.f_90), 0);
					func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true), "TCP_DECLINE" /* GXT: Decline Pair Plus Bet */, &(Local_1038.f_90), 0);
					if (!BitTest(Local_1038.f_22, 8))
					{
						func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/, true), "TCP_BET_MAX" /* GXT: Max Bet */, &(Local_1038.f_90), 0);
					}
					func_206(2, 7, "TCP_BET_NUM" /* GXT: Adjust Bet */, &(Local_1038.f_90));
				}
			}
		}
		if (BitTest(Local_1038.f_20, 0))
		{
			func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), "IB_BACK" /* GXT: Back */, &(Local_1038.f_90), 0);
			func_206(2, 8, "IB_TAB" /* GXT: Previous/Next Page */, &(Local_1038.f_90));
		}
		else if (BitTest(Local_1038.f_20, 3))
		{
			func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), "IB_BACK" /* GXT: Back */, &(Local_1038.f_90), 0);
		}
		if (Local_116.f_576[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2] < 12)
		{
			if (Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] > 0)
			{
				func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/, true), "TCP_DLR" /* GXT: Dealer's Cards */, &(Local_1038.f_90), 0);
			}
			if (Local_116.f_410[PLAYER::PLAYER_ID() /*5*/] > 0)
			{
				if (BitTest(Local_1038.f_22, 4) || BitTest(Local_116.f_20[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2], func_205(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1)))
				{
					func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true), "TCP_CARDS" /* GXT: Your Cards */, &(Local_1038.f_90), 0);
				}
				else if (((((Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 > 0 && Local_1038.f_797 == 3) && !BitTest(Local_1038.f_22, 2)) && !BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_1038.f_22, 1)) && !BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 3))
				{
					func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true), "TCP_PICK_UP" /* GXT: Pick Up Cards */, &(Local_1038.f_90), 0);
				}
			}
		}
		if (!BitTest(Local_1038.f_20, 0) && !BitTest(Local_1038.f_20, 3))
		{
			func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true), "TCP_RULESb" /* GXT: Rules */, &(Local_1038.f_90), 0);
			func_207(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/, true), "TCP_HANDSb" /* GXT: Hand Rankings */, &(Local_1038.f_90), 0);
		}
		Var1 = { func_204() };
		func_203(&(Local_1038.f_90), 1f);
		func_195(&(Local_1038.f_89), &Var1, &(Local_1038.f_90), func_202(&(Local_1038.f_90)));
		func_194(1);
	}
	func_189();
	func_169();
	switch (Local_1038.f_797)
	{
		case 0:
			if (Local_116.f_576[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2] == 3)
			{
				if ((Local_1038.f_15 > (Local_1038.f_19 / 2) || Local_1038.f_15 < Local_1038.f_17) || Local_1038.f_15 > Local_1038.f_16)
				{
					Local_1038.f_15 = Local_1038.f_17;
				}
				if ((((Local_1038.f_23 > Local_1038.f_19 || Local_1038.f_23 > Local_1038.f_27) || Local_1038.f_23 < Local_1038.f_28) || Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_1038.f_23 > Local_1038.f_19)
				{
					Local_1038.f_23 = Local_1038.f_28;
				}
				Var10.f_1 = 3;
				Local_1038.f_854 = { Var10 };
				Local_1901 = { Var15 };
				Local_1901.f_10 = 1;
				Local_1901.f_0 = -941885798;
				Local_1901.f_11 = func_338(PLAYER::PLAYER_ID());
				if (func_338(PLAYER::PLAYER_ID()))
				{
					Local_1901.f_20 = joaat("VIP membership");
				}
				else if (func_335())
				{
					Local_1901.f_20 = joaat("paid membership");
				}
				else if (func_337(1) && (func_338(func_336()) || func_234(PLAYER::PLAYER_ID())))
				{
					Local_1901.f_20 = joaat("Gang membership");
				}
				else
				{
					Local_1901.f_20 = joaat("no membership");
				}
				if (func_428(PLAYER::PLAYER_ID()))
				{
					Local_1901.f_1 = 1695074466;
				}
				else if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 == 3)
				{
					Local_1901.f_1 = joaat("high stakes");
				}
				else
				{
					Local_1901.f_1 = joaat("standard");
				}
				func_378(&uLocal_1897, 0, 0);
				Local_1901.f_3 = Local_116.f_25[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2];
				Local_1901.f_2 = Local_749[PLAYER::PLAYER_ID() /*9*/].f_2;
				func_168(1);
			}
			break;
		
		case 1:
			if ((!func_335() && !(func_337(1) && func_334(func_336()))) || ((!func_338(PLAYER::PLAYER_ID()) && (func_392(Local_1038.f_18) == 2 || func_392(Local_1038.f_18) == 3)) && !(func_337(1) && func_338(func_336()))))
			{
				if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				Local_1924.f_2 = joaat("no membership");
				Local_1901.f_4 = joaat("no membership");
				Local_1901.f_7 = func_410();
				Local_1901.f_17 = func_214(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_417();
				Local_1901.f_19 = func_216();
				if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
				}
				func_387(1);
				HUD::CLEAR_HELP(true);
				if (Local_1038.f_25 == 1)
				{
					func_231("IT_MEMBOc" /* GXT: You have been removed from the game because you no longer have access to your MC President's casino membership. */, -1);
				}
				else if (Local_1038.f_25 == 2)
				{
					func_231("IT_MEMBOa" /* GXT: You have been removed from the game because you no longer have access to your CEO's casino membership. */, -1);
				}
				else if (Local_1038.f_25 == 3)
				{
					func_231("IT_MEMBOb" /* GXT: You have been removed from the game because you no longer have access to your VIP's casino membership. */, -1);
				}
				return;
			}
			if ((((Local_1038.f_19 < Local_1038.f_28 && Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 == 0) && Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 == 0) && Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 == 0) && !Local_1038.f_1)
			{
				Local_1901.f_4 = joaat("low chips");
				Local_1924.f_2 = joaat("low chips");
				Local_1901.f_7 = func_410();
				Local_1901.f_17 = func_214(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_417();
				Local_1901.f_19 = func_216();
				if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
				}
				func_387(1);
				HUD::CLEAR_HELP(true);
				if (func_428(PLAYER::PLAYER_ID()))
				{
					if (Local_1038.f_19 <= 0)
					{
						func_231("CAS_MG_NOCHIPS7" /* GXT: Chips are required to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */, -1);
					}
					else
					{
						func_231("CAS_MG_LOWCHIPS7" /* GXT: You don't have enough Chips to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */, -1);
					}
				}
				else if (Local_1038.f_19 <= 0)
				{
					func_231("CAS_MG_NOCHIPS3" /* GXT: Chips are required to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */, -1);
				}
				else
				{
					func_231("CAS_MG_LOWCHIPS3" /* GXT: You don't have enough Chips to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */, -1);
				}
				return;
			}
			if (func_343())
			{
				switch (func_339())
				{
					case 0:
						Local_1901.f_4 = joaat("win cutoff");
						break;
					
					case 1:
						Local_1901.f_4 = joaat("loss cutoff");
						break;
					
					case 2:
						Local_1901.f_4 = joaat("time cutoff");
						break;
				}
				switch (func_339())
				{
					case 0:
						Local_1924.f_2 = joaat("win cutoff");
						break;
					
					case 1:
						Local_1924.f_2 = joaat("loss cutoff");
						break;
					
					case 2:
						Local_1924.f_2 = joaat("time cutoff");
						break;
				}
				Local_1901.f_7 = func_410();
				Local_1901.f_17 = func_214(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_417();
				Local_1901.f_19 = func_216();
				if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
				}
				func_387(1);
				HUD::CLEAR_HELP(true);
				if (func_339() == 2)
				{
					func_231("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */, -1);
				}
				else
				{
					func_231("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */, -1);
				}
				return;
			}
			if (((!BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 0) && !BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 2)) && !BitTest(Local_1038.f_22, 0)) && (!func_362() || func_358()))
			{
				Local_1901.f_7 = func_410();
				Local_1901.f_17 = func_214(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_417();
				Local_1901.f_19 = func_216();
				if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
				}
				func_387(1);
				HUD::CLEAR_HELP(true);
				return;
			}
			if (!BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 0))
			{
				if (!BitTest(Local_1038.f_22, 0))
				{
					if ((((((!BitTest(Local_1038.f_29, 1) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1038.f_20, 0)) && !BitTest(Local_1038.f_20, 3))
					{
						bVar39 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
						bVar40 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
						if (bVar40 || ((((((bVar39 && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1038.f_20, 0)) && !BitTest(Local_1038.f_20, 3)))
						{
							func_73(&(Local_1038.f_790), 0, 0);
							MISC::SET_BIT(&(Local_1038.f_29), 1);
						}
					}
					else if (func_71(&(Local_1038.f_790), 100, 0))
					{
						func_69(&(Local_1038.f_790));
						MISC::CLEAR_BIT(&(Local_1038.f_29), 1);
					}
					if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) && !bVar40) && !bVar39) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1038.f_20, 0)) && !BitTest(Local_1038.f_20, 3)) && !BitTest(Local_1038.f_22, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar38 = true;
					}
					if (bVar38)
					{
						while (bVar38)
						{
							if (Local_1038.f_15 >= 10000)
							{
								iVar41 = 5000;
							}
							else if (Local_1038.f_15 >= 5000)
							{
								iVar41 = 1000;
							}
							else if (Local_1038.f_15 >= 500)
							{
								iVar41 = 500;
							}
							else if (Local_1038.f_15 >= 100)
							{
								iVar41 = 50;
							}
							else
							{
								iVar41 = 10;
							}
							if (Local_1038.f_15 > (Local_1038.f_19 / 2))
							{
								Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							}
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 > Local_1038.f_16)
							{
								Local_1038.f_15 = Local_1038.f_16;
							}
							Local_1038.f_15 = (Local_1038.f_15 + iVar41);
							if (Local_1038.f_15 > (Local_1038.f_19 / 2))
							{
								bVar38 = false;
								Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							}
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 > Local_1038.f_16)
							{
								bVar38 = false;
								Local_1038.f_15 = Local_1038.f_16;
							}
						}
					}
					else
					{
						if (Local_1038.f_15 >= 10000)
						{
							iVar41 = 5000;
						}
						else if (Local_1038.f_15 >= 5000)
						{
							iVar41 = 1000;
						}
						else if (Local_1038.f_15 >= 500)
						{
							iVar41 = 500;
						}
						else if (Local_1038.f_15 >= 100)
						{
							iVar41 = 50;
						}
						else
						{
							iVar41 = 10;
						}
						if (Local_1038.f_15 > (Local_1038.f_19 / 2))
						{
							Local_1038.f_15 = (Local_1038.f_15 - iVar41);
						}
						if (Local_1038.f_15 < Local_1038.f_17)
						{
							Local_1038.f_15 = Local_1038.f_17;
						}
						if (Local_1038.f_15 > Local_1038.f_16)
						{
							Local_1038.f_15 = Local_1038.f_16;
						}
						iVar42 = Local_1038.f_15;
						if (bVar39)
						{
							Local_1038.f_15 = (Local_1038.f_15 + iVar41);
							if (Local_1038.f_15 > (Local_1038.f_19 / 2))
							{
								Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							}
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 > Local_1038.f_16)
							{
								Local_1038.f_15 = Local_1038.f_16;
							}
							if (Local_1038.f_15 == iVar42)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || !BitTest(Local_1038.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_1038.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar40)
						{
							if (Local_1038.f_15 <= 100)
							{
								iVar41 = 10;
							}
							else if (Local_1038.f_15 <= 500)
							{
								iVar41 = 50;
							}
							else if (Local_1038.f_15 <= 5000)
							{
								iVar41 = 500;
							}
							else if (Local_1038.f_15 <= 10000)
							{
								iVar41 = 1000;
							}
							else
							{
								iVar41 = 5000;
							}
							Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 == iVar42)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || !BitTest(Local_1038.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_1038.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_1038.f_15 == Local_1038.f_16 || (Local_1038.f_15 + iVar41) > Local_1038.f_16) || (Local_1038.f_15 + iVar41) > (Local_1038.f_19 / 2))
					{
						MISC::SET_BIT(&(Local_1038.f_22), 8);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_1038.f_22), 8);
					}
					MISC::SET_BIT(&(Local_1038.f_29), 0);
					iVar0 = (30 - (func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
					{
						if ((((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1038.f_20, 0)) && !BitTest(Local_1038.f_20, 3))
						{
							if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && Local_1038.f_15 >= Local_1038.f_17) && Local_1038.f_19 >= Local_1038.f_17 * 2)
							{
								MISC::SET_BIT(&(Local_1038.f_22), 0);
								Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								if (func_167(Local_1038.f_15))
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "bet_ante_large", 2f, -2f, 13, 16, 1000f, 0);
								}
								else
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "bet_ante", 2f, -2f, 13, 16, 1000f, 0);
								}
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							}
							else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || Local_1038.f_19 < Local_1038.f_28)
							{
								Local_1038.f_19 = func_410();
								if ((((Local_1038.f_23 > Local_1038.f_19 || Local_1038.f_23 > Local_1038.f_27) || Local_1038.f_23 < Local_1038.f_28) || Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_1038.f_23 > Local_1038.f_19)
								{
									Local_1038.f_23 = Local_1038.f_28;
								}
								MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 0);
							}
						}
						if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (Local_1038.f_19 < Local_1038.f_17 * 2)
						{
							if (((!func_345("TCP_LOW" /* GXT: You do not have enough Chips to place the Ante and Play Bet.~n~You can still bet on Pair Plus. */) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
							{
								func_165("TCP_LOW" /* GXT: You do not have enough Chips to place the Ante and Play Bet.~n~You can still bet on Pair Plus. */);
							}
						}
						else if (((!func_345("TCP_PLACE_ANTE" /* GXT: Place an Ante bet to receive a hand that can be played against the Dealer. */) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
						{
							func_165("TCP_PLACE_ANTE" /* GXT: Place an Ante bet to receive a hand that can be played against the Dealer. */);
						}
					}
				}
				else
				{
					if (((!func_345("TCP_PLACE_ANTE" /* GXT: Place an Ante bet to receive a hand that can be played against the Dealer. */) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_165("TCP_PLACE_ANTE" /* GXT: Place an Ante bet to receive a hand that can be played against the Dealer. */);
					}
					if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_1038.f_30 != -1 && !BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 0))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
						{
							MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 0);
							MISC::CLEAR_BIT(&(Local_1038.f_22), 0);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showchips")) && Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
						{
							Local_1038.f_1 = 1;
						}
						if (Local_1038.f_1)
						{
							if (func_156(Local_1038.f_15, &(Local_1038.f_14), 2, Local_1038.f_0))
							{
								if (Local_1038.f_14 == 3)
								{
									Local_1038.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_1038.f_22), 0);
									Local_1038.f_14 = 0;
								}
								else
								{
									Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 = Local_1038.f_15;
									SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_749[PLAYER::PLAYER_ID() /*9*/].f_3));
									if (Local_1038.f_15 >= 10000)
									{
										iVar43 = 5000;
									}
									else if (Local_1038.f_15 >= 5000)
									{
										iVar43 = 1000;
									}
									else if (Local_1038.f_15 >= 500)
									{
										iVar43 = 500;
									}
									else if (Local_1038.f_15 >= 100)
									{
										iVar43 = 50;
									}
									else
									{
										iVar43 = 10;
									}
									if ((Local_1038.f_15 == Local_1038.f_16 || (Local_1038.f_15 + iVar43) > Local_1038.f_16) || (Local_1038.f_15 + iVar43) > (Local_1038.f_19 / 2))
									{
										Local_1901.f_5 = 1;
									}
									Local_1901.f_6 = (Local_1901.f_6 - Local_1038.f_15);
									Local_1924.f_3 = (Local_1924.f_3 - Local_1038.f_15);
									Local_1924.f_7 = (Local_1924.f_7 + Local_1038.f_15);
									Local_1901.f_12 = (Local_1901.f_12 + Local_1038.f_15);
									Local_1038.f_19 = func_410();
									if ((((Local_1038.f_23 > Local_1038.f_19 || Local_1038.f_23 > Local_1038.f_27) || Local_1038.f_23 < Local_1038.f_28) || Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_1038.f_23 > Local_1038.f_19)
									{
										Local_1038.f_23 = Local_1038.f_28;
									}
									Local_1038.f_1 = 0;
								}
							}
						}
					}
				}
				func_152(Local_1038.f_15, "TCP_BET2" /* GXT: ANTE BET */, -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
			}
			else if (!BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 2))
			{
				if (!BitTest(Local_1038.f_22, 0))
				{
					if ((((((!BitTest(Local_1038.f_29, 1) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1038.f_20, 0)) && !BitTest(Local_1038.f_20, 3)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
					{
						bVar44 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
						bVar45 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
						if (bVar45 || ((((((bVar44 && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1038.f_20, 0)) && !BitTest(Local_1038.f_20, 3)))
						{
							func_73(&(Local_1038.f_790), 0, 0);
							MISC::SET_BIT(&(Local_1038.f_29), 1);
						}
					}
					else if (func_71(&(Local_1038.f_790), 100, 0))
					{
						func_69(&(Local_1038.f_790));
						MISC::CLEAR_BIT(&(Local_1038.f_29), 1);
					}
					if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) && !bVar45) && !bVar44) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1038.f_20, 0)) && !BitTest(Local_1038.f_20, 3)) && !BitTest(Local_1038.f_22, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar38 = true;
					}
					if (bVar38)
					{
						while (bVar38)
						{
							if (Local_1038.f_23 >= 10000)
							{
								iVar46 = 5000;
							}
							else if (Local_1038.f_23 >= 5000)
							{
								iVar46 = 1000;
							}
							else if (Local_1038.f_23 >= 500)
							{
								iVar46 = 500;
							}
							else if (Local_1038.f_23 >= 100)
							{
								iVar46 = 50;
							}
							else
							{
								iVar46 = 10;
							}
							if (Local_1038.f_23 > Local_1038.f_19)
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 > Local_1038.f_27)
							{
								Local_1038.f_23 = Local_1038.f_27;
							}
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							Local_1038.f_23 = (Local_1038.f_23 + iVar46);
							if (Local_1038.f_23 > Local_1038.f_19)
							{
								bVar38 = false;
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 > Local_1038.f_27)
							{
								bVar38 = false;
								Local_1038.f_23 = Local_1038.f_27;
							}
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								bVar38 = false;
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
						}
					}
					else
					{
						if (Local_1038.f_23 >= 10000)
						{
							iVar46 = 5000;
						}
						else if (Local_1038.f_23 >= 5000)
						{
							iVar46 = 1000;
						}
						else if (Local_1038.f_23 >= 500)
						{
							iVar46 = 500;
						}
						else if (Local_1038.f_23 >= 100)
						{
							iVar46 = 50;
						}
						else
						{
							iVar46 = 10;
						}
						if (Local_1038.f_23 > Local_1038.f_19)
						{
							Local_1038.f_23 = (Local_1038.f_23 - iVar46);
						}
						if (Local_1038.f_23 > Local_1038.f_27)
						{
							Local_1038.f_23 = Local_1038.f_27;
						}
						if (Local_1038.f_23 < Local_1038.f_28)
						{
							Local_1038.f_23 = Local_1038.f_28;
						}
						if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3))
						{
							Local_1038.f_23 = (Local_1038.f_23 - iVar46);
						}
						iVar47 = Local_1038.f_23;
						if (bVar44)
						{
							Local_1038.f_23 = (Local_1038.f_23 + iVar46);
							if (Local_1038.f_23 > Local_1038.f_19)
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 > Local_1038.f_27)
							{
								Local_1038.f_23 = Local_1038.f_27;
							}
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 == iVar47)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || !BitTest(Local_1038.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_1038.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar45)
						{
							if (Local_1038.f_23 <= 100)
							{
								iVar46 = 10;
							}
							else if (Local_1038.f_23 <= 500)
							{
								iVar46 = 50;
							}
							else if (Local_1038.f_23 <= 5000)
							{
								iVar46 = 500;
							}
							else if (Local_1038.f_23 <= 10000)
							{
								iVar46 = 1000;
							}
							else
							{
								iVar46 = 5000;
							}
							Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 == iVar47)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || !BitTest(Local_1038.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_1038.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_1038.f_23 == Local_1038.f_27 || (Local_1038.f_23 + iVar46) > Local_1038.f_27) || (Local_1038.f_23 + iVar46) > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3))
					{
						MISC::SET_BIT(&(Local_1038.f_22), 8);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_1038.f_22), 8);
					}
					MISC::SET_BIT(&(Local_1038.f_29), 0);
					iVar0 = (30 - (func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
					{
						if ((((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1038.f_20, 0)) && !BitTest(Local_1038.f_20, 3))
						{
							if (((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && Local_1038.f_23 >= Local_1038.f_28) && Local_1038.f_23 <= Local_1038.f_19) && Local_1038.f_19 >= (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_1038.f_28))
							{
								MISC::SET_BIT(&(Local_1038.f_22), 0);
								Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								if (func_167(Local_1038.f_23))
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "bet_plus_large", 2f, -2f, 13, 16, 1000f, 0);
								}
								else
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "bet_plus", 2f, -2f, 13, 16, 1000f, 0);
								}
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							}
							else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) || Local_1038.f_19 < (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_1038.f_28))
							{
								if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
								{
									MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 2);
								}
								else
								{
									Local_1901.f_4 = joaat("QUIT");
									Local_1924.f_2 = joaat("QUIT");
									Local_1901.f_7 = func_410();
									Local_1901.f_17 = func_214(&uLocal_1897, 0, 0);
									Local_1901.f_18 = func_417();
									Local_1901.f_19 = func_216();
									if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
									{
										Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2];
									}
									if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
									{
										STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
									}
									func_387(1);
									HUD::CLEAR_HELP(true);
									return;
								}
							}
						}
						if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (((!func_345("TCP_PLACE_PAIR" /* GXT: Pair Plus is a side bet. This will win if your hand has a Pair or higher. */) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
						{
							func_165("TCP_PLACE_PAIR" /* GXT: Pair Plus is a side bet. This will win if your hand has a Pair or higher. */);
						}
					}
				}
				else
				{
					if (((!func_345("TCP_PLACE_PAIR" /* GXT: Pair Plus is a side bet. This will win if your hand has a Pair or higher. */) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_165("TCP_PLACE_PAIR" /* GXT: Pair Plus is a side bet. This will win if your hand has a Pair or higher. */);
					}
					if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_1038.f_30 != -1 && !BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 2))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 > 0)
						{
							MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 2);
							MISC::CLEAR_BIT(&(Local_1038.f_22), 0);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showchips")) && Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
						{
							Local_1038.f_1 = 1;
						}
						if (Local_1038.f_1)
						{
							if (func_156(Local_1038.f_23, &(Local_1038.f_14), 2, Local_1038.f_0))
							{
								if (Local_1038.f_14 == 3)
								{
									Local_1038.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_1038.f_22), 0);
									Local_1038.f_14 = 0;
								}
								else
								{
									Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 = Local_1038.f_23;
									SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_749[PLAYER::PLAYER_ID() /*9*/].f_5));
									if (Local_1038.f_23 >= 10000)
									{
										iVar48 = 5000;
									}
									else if (Local_1038.f_23 >= 5000)
									{
										iVar48 = 1000;
									}
									else if (Local_1038.f_23 >= 500)
									{
										iVar48 = 500;
									}
									else if (Local_1038.f_23 >= 100)
									{
										iVar48 = 50;
									}
									else
									{
										iVar48 = 10;
									}
									if ((Local_1038.f_23 == Local_1038.f_27 || (Local_1038.f_23 + iVar48) > Local_1038.f_27) || (Local_1038.f_23 + iVar48) > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3))
									{
										Local_1901.f_5 = 1;
									}
									Local_1901.f_6 = (Local_1901.f_6 - Local_1038.f_23);
									Local_1924.f_3 = (Local_1924.f_3 - Local_1038.f_23);
									Local_1924.f_8 = (Local_1924.f_8 + Local_1038.f_23);
									Local_1901.f_13 = (Local_1901.f_13 + Local_1038.f_23);
									Local_1038.f_19 = func_410();
									Local_1038.f_1 = 0;
								}
							}
						}
					}
				}
				func_152(Local_1038.f_23, "TCP_BET3" /* GXT: PAIR PLUS BET */, -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
			}
			else
			{
				bVar49 = true;
				iVar50 = 0;
				while (iVar50 < 4)
				{
					iVar51 = Local_116.f_117[(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar50)];
					if (iVar51 != -1)
					{
						if (!BitTest(Local_749[iVar51 /*9*/], 2))
						{
							bVar49 = false;
						}
					}
					iVar50++;
				}
				if ((((!func_345("TCP_WAIT" /* GXT: Waiting for other players. */) && !bVar49) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
				{
					func_165("TCP_WAIT" /* GXT: Waiting for other players. */);
				}
				if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
				{
					if (func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
					{
						func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
			}
			if ((Local_116.f_576[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2] > 3 && !BitTest(Local_1038.f_22, 0)) && !Local_1038.f_1)
			{
				if (BitTest(Local_1038.f_29, 0))
				{
					HUD::CLEAR_HELP(true);
					Local_1924.f_12++;
					if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0 && Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
					{
						MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 5);
					}
					func_168(2);
				}
				else
				{
					bVar52 = true;
					iVar53 = 0;
					while (iVar53 < 4)
					{
						iVar54 = Local_116.f_117[(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar53)];
						if (iVar54 != -1)
						{
							if (!BitTest(Local_749[iVar54 /*9*/], 2))
							{
								bVar52 = false;
							}
						}
						iVar53++;
					}
					if ((((!func_345("TCP_WAIT" /* GXT: Waiting for other players. */) && !bVar52) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_165("TCP_WAIT" /* GXT: Waiting for other players. */);
					}
					if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
			{
				if (Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] == 3)
				{
					if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						MISC::SET_BIT(&(Local_1038.f_22), 6);
					}
					MISC::CLEAR_BIT(&(Local_1038.f_22), 0);
					func_168(3);
				}
			}
			break;
		
		case 3:
			if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0 && Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
			{
				MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 3);
				if (!BitTest(Local_1038.f_22, 4))
				{
					MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 4);
				}
				func_168(4);
				return;
			}
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar55 = true;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar55 = true;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar55 = true;
				}
				if (bVar55)
				{
					return;
				}
				if ((((((!BitTest(Local_1038.f_22, 0) && !BitTest(Local_1038.f_22, 4)) && !BitTest(Local_1038.f_22, 2)) && !BitTest(Local_1038.f_22, 1)) && !BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 3)) && Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
				{
					if ((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_pickup", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_pickup_card_a", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_pickup_card_b", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_pickup_card_c", 1000f, -1000f, 13);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							MISC::SET_BIT(&(Local_1038.f_22), 7);
							MISC::SET_BIT(&(Local_1038.f_22), 0);
						}
					}
				}
				if (!BitTest(Local_1038.f_22, 0))
				{
					if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						iVar0 = (30 - (func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
						if (iVar0 > 0)
						{
							if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
							{
								if (func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
								{
									func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								}
								else
								{
									func_166((30000 - func_214(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
							if (((!func_345("TCP_PLACE_PLAY" /* GXT: Place a Play bet equal to your Ante to compare your hand against the Dealer. Folding will forfeit your Ante bet. */) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
							{
								func_165("TCP_PLACE_PLAY" /* GXT: Place a Play bet equal to your Ante to compare your hand against the Dealer. Folding will forfeit your Ante bet. */);
							}
							if ((((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1038.f_20, 0)) && !BitTest(Local_1038.f_20, 3))
							{
								if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) || BitTest(Local_1038.f_22, 4)))
								{
									if (BitTest(Local_1038.f_22, 4))
									{
										Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_play", 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_play_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_play_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_play_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
									}
									MISC::SET_BIT(&(Local_1038.f_22), 0);
									MISC::SET_BIT(&(Local_1038.f_22), 2);
								}
								else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) && (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) || BitTest(Local_1038.f_22, 4)))
								{
									if (BitTest(Local_1038.f_22, 4))
									{
										Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
									}
									MISC::SET_BIT(&(Local_1038.f_22), 0);
									MISC::SET_BIT(&(Local_1038.f_22), 1);
								}
							}
						}
						else if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
						{
							if (BitTest(Local_1038.f_22, 4))
							{
								Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							}
							MISC::SET_BIT(&(Local_1038.f_22), 0);
							MISC::SET_BIT(&(Local_1038.f_22), 1);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 3);
						if (!BitTest(Local_1038.f_22, 4))
						{
							MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 4);
						}
						func_168(4);
						return;
					}
				}
				else if (BitTest(Local_1038.f_22, 2))
				{
					if (!BitTest(Local_1038.f_22, 3))
					{
						if ((Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))) || !BitTest(Local_1038.f_22, 4))
						{
							Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							if (func_167(Local_749[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_bet_large", 2f, -2f, 13, 16, 1000f, 0);
							}
							else
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_bet", 2f, -2f, 13, 16, 1000f, 0);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							MISC::SET_BIT(&(Local_1038.f_22), 3);
						}
					}
					else if (Local_1038.f_30 != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 > 0)
						{
							Local_1038.f_796 = "idle_cardgames";
							Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_239(), Local_1038.f_796, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							MISC::CLEAR_BIT(&(Local_1038.f_22), 0);
							MISC::CLEAR_BIT(&(Local_1038.f_22), 1);
							MISC::CLEAR_BIT(&(Local_1038.f_22), 2);
							MISC::CLEAR_BIT(&(Local_1038.f_22), 3);
							MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 1);
							if (!BitTest(Local_1038.f_22, 4))
							{
								MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 4);
							}
							func_168(4);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showchips")) && Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 <= 0)
						{
							Local_1038.f_1 = 1;
						}
						if (Local_1038.f_1)
						{
							if (func_156(Local_749[PLAYER::PLAYER_ID() /*9*/].f_3, &(Local_1038.f_14), 2, Local_1038.f_0))
							{
								if (Local_1038.f_14 == 3)
								{
									Local_1038.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_1038.f_22), 0);
									MISC::CLEAR_BIT(&(Local_1038.f_22), 1);
									MISC::CLEAR_BIT(&(Local_1038.f_22), 2);
									MISC::CLEAR_BIT(&(Local_1038.f_22), 3);
									if (BitTest(Local_1038.f_22, 4))
									{
										Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, false, true, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_idle", 1000f, -1000f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
									}
									Local_1038.f_14 = 0;
								}
								else
								{
									Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 = Local_749[PLAYER::PLAYER_ID() /*9*/].f_3;
									SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_749[PLAYER::PLAYER_ID() /*9*/].f_4));
									Local_1901.f_6 = (Local_1901.f_6 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3);
									Local_1924.f_3 = (Local_1924.f_3 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_3);
									Local_1038.f_19 = func_410();
									Local_1038.f_1 = 0;
								}
							}
						}
					}
				}
				else if (BitTest(Local_1038.f_22, 1))
				{
					if ((Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))) || !BitTest(Local_1038.f_22, 4))
					{
						Local_1038.f_796 = "idle_cardgames";
						Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_239(), Local_1038.f_796, 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
						MISC::CLEAR_BIT(&(Local_1038.f_22), 0);
						MISC::CLEAR_BIT(&(Local_1038.f_22), 1);
						MISC::CLEAR_BIT(&(Local_1038.f_22), 2);
						MISC::CLEAR_BIT(&(Local_1038.f_22), 3);
						MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 3);
						if (!BitTest(Local_1038.f_22, 4))
						{
							MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/]), 4);
						}
						func_168(4);
					}
				}
				else if (BitTest(Local_1038.f_22, 7) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_pickup", 3))
				{
					if (Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
					{
						Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_idle", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
						MISC::CLEAR_BIT(&(Local_1038.f_22), 0);
						MISC::CLEAR_BIT(&(Local_1038.f_22), 7);
						MISC::SET_BIT(&(Local_1038.f_22), 4);
					}
				}
				if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
				{
					func_152(Local_749[PLAYER::PLAYER_ID() /*9*/].f_3, "TCP_BET4" /* GXT: PLAY WAGER */, -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
				}
			}
			break;
		
		case 4:
			if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
			{
				bVar56 = true;
				iVar57 = 0;
				while (iVar57 < 4)
				{
					iVar58 = Local_116.f_117[(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar57)];
					if (iVar58 != -1)
					{
						if ((!BitTest(Local_749[iVar58 /*9*/], 1) && !BitTest(Local_749[iVar58 /*9*/], 3)) && (Local_749[iVar58 /*9*/].f_3 > 0 || Local_749[iVar58 /*9*/].f_5 > 0))
						{
							bVar56 = false;
						}
					}
					iVar57++;
				}
				if (Local_116.f_576[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2] == 9 && !bVar56)
				{
					if (((!func_345("TCP_WAIT" /* GXT: Waiting for other players. */) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_165("TCP_WAIT" /* GXT: Waiting for other players. */);
					}
				}
				else if (func_345("TCP_WAIT" /* GXT: Waiting for other players. */) || func_345("TCP_PLACE_PLAY" /* GXT: Place a Play bet equal to your Ante to compare your hand against the Dealer. Folding will forfeit your Ante bet. */))
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_116.f_576[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2] == 1)
				{
					if (BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 5))
					{
						bVar59 = true;
					}
					if (Local_1038.f_31 != -1)
					{
						func_321(&(Local_1038.f_31));
						Local_1038.f_31 = -1;
					}
					Local_1038.f_2 = 0;
					Local_1038.f_3 = 0;
					Local_1038.f_4 = 0;
					Local_1038.f_6 = 0;
					Local_1038.f_22 = 0;
					Local_749[PLAYER::PLAYER_ID() /*9*/] = 0;
					Local_749[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
					Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
					Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
					Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
					func_168(0);
					Local_1901.f_7 = func_410();
					Local_1901.f_17 = func_214(&uLocal_1897, 0, 0);
					Local_1901.f_18 = func_417();
					Local_1901.f_19 = func_216();
					if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
					{
						Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2];
					}
					if (!func_362() || func_358())
					{
						if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */ && !bVar59)
						{
							STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
						}
						func_387(1);
						HUD::CLEAR_HELP(true);
						return;
					}
					if (func_343())
					{
						switch (func_339())
						{
							case 0:
								Local_1901.f_4 = joaat("win cutoff");
								break;
							
							case 1:
								Local_1901.f_4 = joaat("loss cutoff");
								break;
							
							case 2:
								Local_1901.f_4 = joaat("time cutoff");
								break;
						}
						switch (func_339())
						{
							case 0:
								Local_1924.f_2 = joaat("win cutoff");
								break;
							
							case 1:
								Local_1924.f_2 = joaat("loss cutoff");
								break;
							
							case 2:
								Local_1924.f_2 = joaat("time cutoff");
								break;
						}
						if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */ && !bVar59)
						{
							STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
						}
						func_387(1);
						HUD::CLEAR_HELP(true);
						if (func_339() == 2)
						{
							func_231("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */, -1);
						}
						else
						{
							func_231("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */, -1);
						}
						return;
					}
					if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */ && !bVar59)
					{
						STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
					}
					return;
				}
				if ((Local_116.f_5[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2] && Local_116.f_410[PLAYER::PLAYER_ID() /*5*/] > 0) && BitTest(Local_116.f_20[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2], func_205(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1)))
				{
					iVar61 = func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0);
					iVar62 = func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
					if (func_25(iVar61))
					{
						bVar60 = true;
					}
					if (iVar62 > 500)
					{
						Local_1901.f_22 = joaat("StraightFlush");
					}
					else if (iVar62 > 400)
					{
						Local_1901.f_22 = 588481795;
					}
					else if (iVar62 > 300)
					{
						Local_1901.f_22 = joaat("straight");
					}
					else if (iVar62 > 200)
					{
						Local_1901.f_22 = joaat("flush");
					}
					else if (iVar62 > 100)
					{
						Local_1901.f_22 = 378531009;
					}
					else
					{
						Local_1901.f_22 = 201584577;
					}
					if (((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6)
					{
						if (!BitTest(Local_1038.f_22, 5))
						{
							Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							sVar63 = func_151(Local_1901.f_6);
							if ((Local_1038.f_26 == 1 || func_392(Local_1038.f_18) == 2) || func_392(Local_1038.f_18) == 3)
							{
								if (((Local_1038.f_15 >= 35000 && iVar62 > iVar61) && iVar62 > 300) || (Local_1038.f_23 >= 3500 && iVar62 > 300))
								{
									sVar63 = func_150();
								}
								else if (((Local_1038.f_15 >= 35000 && iVar62 > 300) && iVar62 < iVar61) && !(Local_1038.f_23 >= 3500 && iVar62 > 300))
								{
									sVar63 = func_148();
								}
							}
							else if (((Local_1038.f_15 >= 4500 && iVar62 > iVar61) && iVar62 > 300) || (Local_1038.f_23 >= 450 && iVar62 > 300))
							{
								sVar63 = func_150();
							}
							else if (((Local_1038.f_15 >= 4500 && iVar62 > 300) && iVar62 < iVar61) && !(Local_1038.f_23 >= 450 && iVar62 > 300))
							{
								sVar63 = func_148();
							}
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_239(), sVar63, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							MISC::SET_BIT(&(Local_1038.f_22), 5);
						}
						if (Local_1901.f_14 > 0)
						{
							if (!BitTest(Local_1038.f_22, 9))
							{
								if (func_102(Local_1901.f_14, &(Local_1038.f_14), 2))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_1038.f_22), 9);
									if (func_429(PLAYER::PLAYER_ID()) && iVar62 > 500)
									{
										MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_856), 11);
									}
								}
							}
						}
					}
					if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						if (!BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/], 3))
						{
							if (!bVar60)
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (!func_100("TCP_WIN_NP" /* GXT: The Dealer has less than Queen High and does not play. You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN_NP" /* GXT: The Dealer has less than Queen High and does not play. You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
								if (!Local_1038.f_2)
								{
									Local_1038.f_2 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
								}
								if (!Local_1038.f_3)
								{
									Local_1038.f_3 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_1924.f_13++;
									Local_1901.f_15 = 1;
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_1901.f_4 = joaat("win");
								}
							}
							else if (iVar62 > iVar61)
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (iVar62 > 500 && iVar61 > 500)
									{
										bVar64 = true;
									}
									if ((iVar62 > 400 && iVar61 > 400) && (iVar62 < 500 && iVar61 < 500))
									{
										bVar64 = true;
									}
									if ((iVar62 > 300 && iVar61 > 300) && (iVar62 < 400 && iVar61 < 400))
									{
										bVar64 = true;
									}
									if ((iVar62 > 200 && iVar61 > 200) && (iVar62 < 300 && iVar61 < 300))
									{
										bVar64 = true;
									}
									if ((iVar62 > 100 && iVar61 > 100) && (iVar62 < 200 && iVar61 < 200))
									{
										bVar64 = true;
									}
									if (bVar64)
									{
										if (!func_100("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
										{
											func_99("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
										}
									}
									else if (!func_100("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
								if (!Local_1038.f_2)
								{
									Local_1038.f_2 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
								}
								if (!Local_1038.f_3)
								{
									Local_1038.f_3 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_1924.f_13++;
									Local_1901.f_15 = 1;
									Local_1901.f_4 = joaat("win");
								}
							}
							else if (iVar62 == iVar61)
							{
								iVar61 = func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 1, 0);
								iVar62 = func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 1, 0);
								if (iVar62 == iVar61)
								{
									iVar61 = func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 1);
									iVar62 = func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 1);
									if (iVar62 > iVar61)
									{
										if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
										{
											if (!func_100("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
											{
												func_99("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
											}
										}
										if (!Local_1038.f_2)
										{
											Local_1038.f_2 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										}
										if (!Local_1038.f_3)
										{
											Local_1038.f_3 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_1924.f_13++;
											Local_1901.f_15 = 1;
											Local_1901.f_4 = joaat("win");
										}
									}
									else if (iVar62 == iVar61)
									{
										if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
										{
											if (!func_345("TCP_LOSE_PUSH" /* GXT: You and the Dealer have the same hand. The hand is a push. */))
											{
												func_165("TCP_LOSE_PUSH" /* GXT: You and the Dealer have the same hand. The hand is a push. */);
											}
										}
										if (!Local_1038.f_2)
										{
											Local_1038.f_2 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3);
											func_213(Local_749[PLAYER::PLAYER_ID() /*9*/].f_3);
										}
										if (!Local_1038.f_3)
										{
											Local_1038.f_3 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_1924.f_13++;
											Local_1901.f_15 = 1;
											Local_1901.f_4 = joaat("win");
										}
										Local_1038.f_2 = 1;
									}
									else
									{
										if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
										{
											if (Local_1901.f_14 > 0)
											{
												if (!func_100("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
												{
													func_99("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
												}
											}
											else if (!func_98("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
											{
												func_97("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
											}
										}
										Local_1901.f_4 = joaat("lose");
										if (!Local_1038.f_3)
										{
											func_213((Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3));
											Local_1038.f_3 = 1;
											Local_1924.f_14++;
										}
										Local_1038.f_2 = 1;
									}
								}
								else if (iVar62 > iVar61)
								{
									if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
									{
										if (!func_100("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
										{
											func_99("TCP_WIN2" /* GXT: You have ~a~ higher than the Dealer's. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
										}
									}
									if (!Local_1038.f_2)
									{
										Local_1038.f_2 = 1;
										SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
										Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									}
									if (!Local_1038.f_3)
									{
										Local_1038.f_3 = 1;
										SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
										Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_1924.f_13++;
										Local_1901.f_15 = 1;
										Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_1901.f_4 = joaat("win");
									}
								}
								else
								{
									if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
									{
										if (Local_1901.f_14 > 0)
										{
											if (!func_100("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
											{
												func_99("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									Local_1901.f_4 = joaat("lose");
									if (!Local_1038.f_3)
									{
										func_213((Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3));
										Local_1038.f_3 = 1;
										Local_1924.f_14++;
									}
									Local_1038.f_2 = 1;
								}
							}
							else
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (iVar62 > 500 && iVar61 > 500)
									{
										bVar65 = true;
									}
									if ((iVar62 > 400 && iVar61 > 400) && (iVar62 < 500 && iVar61 < 500))
									{
										bVar65 = true;
									}
									if ((iVar62 > 300 && iVar61 > 300) && (iVar62 < 400 && iVar61 < 400))
									{
										bVar65 = true;
									}
									if ((iVar62 > 200 && iVar61 > 200) && (iVar62 < 300 && iVar61 < 300))
									{
										bVar65 = true;
									}
									if ((iVar62 > 100 && iVar61 > 100) && (iVar62 < 200 && iVar61 < 200))
									{
										bVar65 = true;
									}
									if (bVar65)
									{
										if (Local_1901.f_14 > 0)
										{
											if (!func_100("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14))
											{
												func_99("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1901.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2" /* GXT: The Dealer has ~a~ higher than yours. You lose. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									else if (Local_1901.f_14 > 0)
									{
										if (!func_100("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1901.f_14))
										{
											func_99("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1901.f_14);
										}
									}
									else if (!func_98("TCP_LOSE_PLAY" /* GXT: The Dealer has ~a~. You lose. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PLAY" /* GXT: The Dealer has ~a~. You lose. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
									}
								}
								Local_1901.f_4 = joaat("lose");
								if (!Local_1038.f_3)
								{
									func_213((Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_749[PLAYER::PLAYER_ID() /*9*/].f_3));
									Local_1038.f_3 = 1;
									Local_1924.f_14++;
								}
								Local_1038.f_2 = 1;
							}
							iVar62 = func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
							if (!Local_1038.f_4)
							{
								SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
								if (func_96(iVar62) > 0)
								{
									Local_1924.f_3 = (Local_1924.f_3 + (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar62)));
									Local_1901.f_6 = (Local_1901.f_6 + (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar62)));
									Local_1924.f_13++;
									Local_1901.f_15 = 1;
									Local_1901.f_14 = (Local_1901.f_14 + (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar62)));
								}
								Local_1038.f_4 = 1;
							}
						}
						else
						{
							if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 >= 0)
							{
								Local_1901.f_4 = joaat("fold");
							}
							if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
							{
								if (Local_1901.f_14 > 0)
								{
									if (!func_100("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
								else if (!func_98("TCP_LOSE_FOLD" /* GXT: The Dealer has ~a~. You folded your hand. You lose. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
								{
									func_97("TCP_LOSE_FOLD" /* GXT: The Dealer has ~a~. You folded your hand. You lose. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
								}
							}
							if (!Local_1038.f_3)
							{
								func_213(Local_749[PLAYER::PLAYER_ID() /*9*/].f_3);
								Local_1038.f_3 = 1;
								Local_1924.f_14++;
							}
							Local_1038.f_4 = 1;
							Local_1038.f_2 = 1;
						}
					}
					else
					{
						Local_1038.f_2 = 1;
						Local_1038.f_3 = 1;
						Local_1038.f_4 = 1;
					}
					iVar62 = func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
					if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 > 0)
					{
						Local_1901.f_21 = 1;
						if (func_23(iVar62) > 0)
						{
							if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (!func_100("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN" /* GXT: You have ~a~. You win ~1~ Chips! */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
							}
							if (!Local_1038.f_6)
							{
								Local_1038.f_6 = 1;
								SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
								Local_1924.f_3 = (Local_1924.f_3 + (Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar62))));
								Local_1901.f_6 = (Local_1901.f_6 + (Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar62))));
								Local_1924.f_13++;
								Local_1901.f_15 = 1;
								Local_1901.f_14 = (Local_1901.f_14 + (Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar62))));
								Local_1901.f_4 = joaat("win");
							}
						}
						else
						{
							if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
							{
								Local_1901.f_4 = joaat("lose");
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (!func_98("TCP_LOSE_PP" /* GXT: You have ~a~. You lose. */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PP" /* GXT: You have ~a~. You lose. */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0));
									}
								}
							}
							if (!Local_1038.f_6)
							{
								func_213(Local_749[PLAYER::PLAYER_ID() /*9*/].f_5);
								Local_1038.f_6 = 1;
								if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
								{
									Local_1924.f_14++;
								}
							}
						}
					}
					else
					{
						Local_1038.f_6 = 1;
					}
				}
				else
				{
					if (!Local_116.f_5[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2])
					{
					}
					if (Local_116.f_410[PLAYER::PLAYER_ID() /*5*/] <= 0)
					{
					}
					if (!BitTest(Local_116.f_20[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2], func_205(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1)))
					{
					}
					if (((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6)
					{
						if (Local_116.f_410[PLAYER::PLAYER_ID() /*5*/] <= 0)
						{
							Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
							Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
							Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
							SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_749[PLAYER::PLAYER_ID() /*9*/].f_3));
							SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_749[PLAYER::PLAYER_ID() /*9*/].f_5));
							SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_749[PLAYER::PLAYER_ID() /*9*/].f_4));
						}
					}
				}
			}
			break;
	}
}

int func_96(int iParam0)//Position - 0x107B2
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

void func_97(char* sParam0, char* sParam1)//Position - 0x107E5
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_98(char* sParam0, char* sParam1)//Position - 0x10801
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_99(char* sParam0, char* sParam1, int iParam2)//Position - 0x1081A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_100(char* sParam0, char* sParam1, int iParam2)//Position - 0x1083C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_101(int iParam0, bool bParam1)//Position - 0x1085B
{
	if (bParam1)
	{
		if (iParam0 > 500)
		{
			return "TCP_STRAIGHTF_F" /* GXT: a Straight Flush */;
		}
		else if (iParam0 > 400)
		{
			return "TCP_TOFAKIND_F" /* GXT: Three of a Kind */;
		}
		else if (iParam0 > 300)
		{
			return "TCP_STRAIGHT_F" /* GXT: a Straight */;
		}
		else if (iParam0 > 200)
		{
			return "TCP_FLUSH_F" /* GXT: a Flush */;
		}
		else if (iParam0 > 100)
		{
			return "TCP_PAIR_F" /* GXT: a Pair */;
		}
		else if (iParam0 == 12)
		{
			return "TCP_HIGH_Q_F" /* GXT: Queen High */;
		}
		else if (iParam0 == 13)
		{
			return "TCP_HIGH_K_F" /* GXT: King High */;
		}
		else
		{
			return "TCP_HIGH_A_F" /* GXT: Ace High */;
		}
	}
	else if (iParam0 > 500)
	{
		return "TCP_STRAIGHTF" /* GXT: a Straight Flush */;
	}
	else if (iParam0 > 400)
	{
		return "TCP_TOFAKIND" /* GXT: Three of a Kind */;
	}
	else if (iParam0 > 300)
	{
		return "TCP_STRAIGHT" /* GXT: a Straight */;
	}
	else if (iParam0 > 200)
	{
		return "TCP_FLUSH" /* GXT: a Flush */;
	}
	else if (iParam0 > 100)
	{
		if (iParam0 == 128)
		{
			return "TCP_PAIR_A" /* GXT: a Pair of Aces */;
		}
		else if (iParam0 == 104)
		{
			return "TCP_PAIR_2" /* GXT: a Pair of 2s */;
		}
		else if (iParam0 == 106)
		{
			return "TCP_PAIR_3" /* GXT: a Pair of 3s */;
		}
		else if (iParam0 == 108)
		{
			return "TCP_PAIR_4" /* GXT: a Pair of 4s */;
		}
		else if (iParam0 == 110)
		{
			return "TCP_PAIR_5" /* GXT: a Pair of 5s */;
		}
		else if (iParam0 == 112)
		{
			return "TCP_PAIR_6" /* GXT: a Pair of 6s */;
		}
		else if (iParam0 == 114)
		{
			return "TCP_PAIR_7" /* GXT: a Pair of 7s */;
		}
		else if (iParam0 == 116)
		{
			return "TCP_PAIR_8" /* GXT: a Pair of 8s */;
		}
		else if (iParam0 == 118)
		{
			return "TCP_PAIR_9" /* GXT: a Pair of 9s */;
		}
		else if (iParam0 == 120)
		{
			return "TCP_PAIR_10" /* GXT: a Pair of 10s */;
		}
		else if (iParam0 == 122)
		{
			return "TCP_PAIR_J" /* GXT: a Pair of Jacks */;
		}
		else if (iParam0 == 124)
		{
			return "TCP_PAIR_Q" /* GXT: a Pair of Queens */;
		}
		else if (iParam0 == 126)
		{
			return "TCP_PAIR_K" /* GXT: a Pair of Kings */;
		}
	}
	else if (iParam0 == 5)
	{
		return "TCP_HIGH_5" /* GXT: 5 High */;
	}
	else if (iParam0 == 6)
	{
		return "TCP_HIGH_6" /* GXT: 6 High */;
	}
	else if (iParam0 == 7)
	{
		return "TCP_HIGH_7" /* GXT: 7 High */;
	}
	else if (iParam0 == 8)
	{
		return "TCP_HIGH_8" /* GXT: 8 High */;
	}
	else if (iParam0 == 9)
	{
		return "TCP_HIGH_9" /* GXT: 9 High */;
	}
	else if (iParam0 == 10)
	{
		return "TCP_HIGH_10" /* GXT: 10 High */;
	}
	else if (iParam0 == 11)
	{
		return "TCP_HIGH_J" /* GXT: Jack High */;
	}
	else if (iParam0 == 12)
	{
		return "TCP_HIGH_Q" /* GXT: Queen High */;
	}
	else if (iParam0 == 13)
	{
		return "TCP_HIGH_K" /* GXT: King High */;
	}
	else
	{
		return "TCP_HIGH_A" /* GXT: Ace High */;
	}
	return "";
}

bool func_102(int iParam0, var uParam1, int iParam2)//Position - 0x10AB8
{
	return func_103(iParam0, 3, uParam1, iParam2, -1);
}

int func_103(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x10ACC
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
	else if (!func_147(iParam1))
	{
	}
	else
	{
		iVar0 = func_410();
		iVar1 = (Global_262145.f_26736 /* Tunable: VC_CASINO_CHIP_MAX_HELD */ - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_145();
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
			iVar4 = (func_410() - Global_1964421);
			func_123(iVar4, 1);
			func_121();
			func_120();
			Global_1964421 = (Global_1964421 + iVar4);
			if (iParam1 == 0)
			{
				func_114(iVar4);
				Global_2696123 = 1;
			}
			else if (iParam1 == 3)
			{
				func_107(iVar4);
				if (iVar4 >= Global_262145.f_26744 /* Tunable: VC_CASINO_SAVE_MAJOR_WIN_THRESHOLD */)
				{
					Global_2696122 = 1;
				}
				else if (iVar4 >= Global_262145.f_26743 /* Tunable: VC_CASINO_SAVE_BIG_WIN_THRESHOLD */)
				{
					Global_2696123 = 1;
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
			Var5.f_6 = Global_1964421;
			STATS::PLAYSTATS_CASINO_CHIP(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_104(int iParam0)//Position - 0x10C05
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

int func_105(int iParam0, int iParam1, int iParam2)//Position - 0x10C2E
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
			case 12:
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

int func_106(int iParam0)//Position - 0x10DF7
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CCUR_BUY");
			break;
		
		case 1:
			iVar0 = joaat("CCUR_SELL");
			break;
		
		case 2:
			iVar0 = joaat("CCUR_BET");
			break;
		
		case 3:
			iVar0 = joaat("CCUR_PAYOUT");
			break;
		
		case 4:
			iVar0 = joaat("CCUR_COLLECTIBLE_REWARD");
			break;
		
		case 5:
			iVar0 = joaat("CCUR_MEMBERSHIP_PURCHASE");
			break;
		
		case 6:
			iVar0 = joaat("CCUR_MISSION_REWARD");
			break;
		
		case 11:
			iVar0 = joaat("CCUR_MISSION_REWARD");
			break;
		
		case 7:
			iVar0 = joaat("CCUR_DAILY_BONUS");
			break;
		
		case 8:
			iVar0 = joaat("CCUR_PAYOUT");
			break;
		
		case 9:
			iVar0 = joaat("CCUR_VEH_PURCHASE_REWARD");
			break;
		
		case 10:
			iVar0 = joaat("CCU_PURCHASE_SHOP_ITEM");
			break;
		
		case 12:
			iVar0 = joaat("CCUR_MISSION_REWARD");
			break;
	}
	return iVar0;
}

void func_107(int iParam0)//Position - 0x10EDB
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
	else if ((iVar0 - iVar1) >= Global_262145.f_26738 /* Tunable: VC_CASINO_CHIP_MAX_WIN_LOSS_COOLDOWN */)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26740 /* Tunable: VC_CASINO_CHIP_MAX_WIN_DAILY */)
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26740 /* Tunable: VC_CASINO_CHIP_MAX_WIN_DAILY */);
		func_109();
		Global_2696123 = 1;
	}
	else
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 + iParam0));
	}
}

void func_108(int iParam0, int iParam1)//Position - 0x10F54
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

void func_109()//Position - 0x10F70
{
	func_110();
}

void func_110()//Position - 0x10F7C
{
	func_108(joaat("MPPLY_CASINO_CHIPS_WONTIM"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_111()//Position - 0x10F91
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_WON_GD"));
}

int func_112(int iParam0)//Position - 0x10FA2
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

int func_113()//Position - 0x10FC0
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_WONTIM"));
}

void func_114(int iParam0)//Position - 0x10FD1
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
	else if ((iVar0 - iVar1) >= Global_262145.f_26737 /* Tunable: VC_CASINO_CHIP_MAX_BUY_COOLDOWN */)
	{
		func_116();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_115()
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), func_115());
		func_116();
	}
	else
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), (iVar2 + iParam0));
	}
}

int func_115()//Position - 0x1103F
{
	if (func_338(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_26535 /* Tunable: VC_CASINO_CHIP_MAX_BUY_PENTHOUSE */;
	}
	return Global_262145.f_26534 /* Tunable: VC_CASINO_CHIP_MAX_BUY */;
}

void func_116()//Position - 0x11063
{
	func_117();
}

void func_117()//Position - 0x1106F
{
	func_108(joaat("MPPLY_CASINO_CHIPS_PURTIM"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_118()//Position - 0x11084
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_PUR_GD"));
}

int func_119()//Position - 0x11095
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_PURTIM"));
}

void func_120()//Position - 0x110A6
{
	if (BitTest(Global_1964494, 6))
	{
		MISC::SET_BIT(&Global_1964494, 9);
		func_378(&Global_1964497, 0, 0);
	}
}

void func_121()//Position - 0x110CE
{
	if (func_122())
	{
		MISC::SET_BIT(&Global_1964494, 1);
	}
}

bool func_122()//Position - 0x110E9
{
	return (BitTest(Global_1964494, 6) || BitTest(Global_1964494, 5));
}

void func_123(int iParam0, int iParam1)//Position - 0x11103
{
	if (iParam0 < 0)
	{
		return;
	}
	MISC::SET_BIT(&Global_1964494, 6);
	Global_1964495 = iParam0;
	Global_1964496 = iParam1;
}

bool func_124(var uParam0, int iParam1, int iParam2)//Position - 0x11129
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
	if (func_144())
	{
		if (*uParam0 == 0)
		{
			if (func_143() != -1)
			{
				return 0;
			}
			iVar3 = joaat("CASINO_CHIPS_v0");
			iVar4 = func_106(iParam1);
			iVar5 = joaat("NET_SHOP_ACTION_SELL_CASINO_CHIPS");
			if (func_147(iParam1))
			{
				iVar5 = joaat("NET_SHOP_ACTION_BUY_CASINO_CHIPS");
			}
			if (func_139(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CASINO_CHIPS"), iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_139(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CASINO_CHIP_REASON"), iVar4, iVar5, 1, 0, 0, 4, 0, 3))
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
			if (func_131(func_143()))
			{
				if (func_130(func_143()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_129(func_143()));
					if (func_147(iParam1))
					{
						MONEY::NETWORK_CASINO_BUY_CHIPS(iVar0, iParam2);
					}
					else
					{
						MONEY::NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_125(func_143());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		if (func_147(iParam1))
		{
			MONEY::NETWORK_CASINO_BUY_CHIPS(iVar0, iParam2);
		}
		else
		{
			MONEY::NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_125(int iParam0)//Position - 0x112A6
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_144())
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
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_126(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_126(var uParam0)//Position - 0x112FA
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

void func_127(var uParam0)//Position - 0x1140A
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

int func_128(int iParam0)//Position - 0x11452
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x1147D
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_130(int iParam0)//Position - 0x114A4
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x114CD
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_132()//Position - 0x114F8
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_144())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_143();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_138()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_137(Global_4535950[iVar2 /*85*/].f_66.f_6, Global_4535950[iVar2 /*85*/].f_66.f_4, Global_4535950[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4537456 = 1;
			}
			return 0;
		}
		if (Global_2697634)
		{
			if (Global_4535950[iVar2 /*85*/].f_66.f_6 == joaat("CATEGORY_WEAPON_AMMO") || Global_4535950[iVar2 /*85*/].f_66.f_6 == joaat("CATEGORY_MART"))
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_129(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4535950[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535950[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4535950[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535950[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535950[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_133(Global_4535950[iVar2 /*85*/], iVar2);
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	return 0;
}

void func_133(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x11658
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_135(Var0.f_1);
	if ((Global_262145.f_23711 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_23712 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_23713 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_134();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_134()//Position - 0x116EC
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_135(int iParam0)//Position - 0x116FC
{
	var uVar0;
	
	if (func_136(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_136(var uParam0)//Position - 0x11717
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

int func_137(int iParam0, int iParam1, int iParam2)//Position - 0x11739
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
			case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
			case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
			case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
			case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
			case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
			case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
			case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
			case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
			case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
			case 2131157548:
			case joaat("SERVICE_EARN_BAIL_OFFICE_PRISONER"):
			case joaat("SERVICE_EARN_BAIL_OFFICE_HIGH_VALUE_PRISONER"):
			case joaat("SERVICE_EARN_BOUNTY_STANDARD_TARGET_BOSS"):
			case joaat("SERVICE_EARN_BOUNTY_STANDARD_TARGET_GOON"):
			case joaat("SERVICE_EARN_BOUNTY_HIGH_VALUE_TARGET_BOSS"):
			case joaat("SERVICE_EARN_BOUNTY_HIGH_VALUE_TARGET_GOON"):
			case joaat("SERVICE_EARN_BOUNTY24_DISPATCH_WORK"):
			case joaat("SERVICE_EARN_BOUNTY24_PIZZA_DELIVERY"):
			case joaat("SERVICE_EARN_BOUNTY24_UFO_ABDUCTION"):
			case joaat("SERVICE_EARN_BOUNTY24_AWARD"):
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

int func_138()//Position - 0x11E0C
{
	return Global_1574926;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x11E18
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_144())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_138()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam1 == joaat("CATEGORY_WEAPON_AMMO") || iParam1 == joaat("CATEGORY_MART"))
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_143();
	if (iVar1 == -1)
	{
		if (!func_141(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_140(iParam1))
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
		Global_4535950[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535950[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535950[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x11F3A
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

int func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x11FC9
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_144())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_138()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam2 == joaat("CATEGORY_WEAPON_AMMO") || iParam2 == joaat("CATEGORY_MART"))
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535950[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535950[iVar1 /*85*/].f_66.f_5 == 1)
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
		*iParam0 = func_142(uVar3, iParam1, joaat("SERVICE_INVALID"), iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_142(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0x120C6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_144())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = uParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && bParam10)
			{
				func_133(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_143()//Position - 0x12203
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

int func_144()//Position - 0x1223E
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_145()//Position - 0x12255
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_115() - func_118());
	iVar1 = (Global_262145.f_26736 /* Tunable: VC_CASINO_CHIP_MAX_HELD */ - func_410());
	iVar2 = func_146();
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

int func_146()//Position - 0x12294
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (MONEY::NETWORK_CASINO_CAN_BUY_CHIPS_PVC())
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

int func_147(int iParam0)//Position - 0x122F4
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_148()//Position - 0x1231D
{
	if (func_149())
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

bool func_149()//Position - 0x123BE
{
	return func_57(PLAYER::PLAYER_ID());
}

char* func_150()//Position - 0x123CE
{
	if (func_149())
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

char* func_151(int iParam0)//Position - 0x1246F
{
	if (func_149())
	{
		if ((func_428(PLAYER::PLAYER_ID()) || func_392(Local_1038.f_18) == 2) || func_392(Local_1038.f_18) == 3)
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
	else if ((func_428(PLAYER::PLAYER_ID()) || func_392(Local_1038.f_18) == 2) || func_392(Local_1038.f_18) == 3)
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

void func_152(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0x128E9
{
	int iVar0;
	int iVar1;
	
	if (func_155(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_154(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_153(3, iVar0);
		Global_1670224.f_2872[iVar0] = uParam0;
		StringCopy(&(Global_1670224.f_2872.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_2872.f_183[iVar0] = iParam3;
		Global_1670224.f_2872.f_172[iVar0] = iParam2;
		Global_1670224.f_2872.f_205[iVar0] = iParam4;
		Global_1670224.f_2872.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1670224.f_2872.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1670224.f_2872.f_420[iVar0] = iParam7;
		Global_1670224.f_2872.f_453[iVar0] = iParam8;
		Global_1670224.f_2872.f_431[iVar0] = iParam9;
		Global_1670224.f_2872.f_442[iVar0] = iParam10;
		Global_1670224.f_2872.f_464[iVar0] = iParam11;
		Global_1670224.f_2872.f_475[iVar0] = iParam12;
		Global_1670224.f_2872.f_486[iVar0] = iParam13;
		Global_1670224.f_2872.f_497[iVar0] = iParam14;
		Global_1670224.f_2872.f_508[iVar0] = iParam15;
	}
}

void func_153(int iParam0, int iParam1)//Position - 0x12A3B
{
	MISC::SET_BIT(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_154(int iParam0, int iParam1)//Position - 0x12A54
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

int func_155(char* sParam0)//Position - 0x12A6A
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

int func_156(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x12AA4
{
	if (func_144() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_164(iParam0))
	{
		return func_157(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_157(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0x12AEA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_147(iParam1))
	{
	}
	else
	{
		iVar0 = func_410();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_144() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_124(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1964421 - func_410());
			if (iParam1 == 1)
			{
				func_158(iParam0);
				Global_2696122 = 1;
			}
			else if (iVar2 >= Global_262145.f_26745 /* Tunable: VC_CASINO_SAVE_LOSS_THRESHOLD */)
			{
				Global_2696123 = 1;
			}
			func_123(iVar2, 0);
			func_121();
			func_120();
			Global_1964421 = (Global_1964421 - iVar2);
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
			Var3.f_6 = Global_1964421;
			Var3.f_7 = iParam5;
			STATS::PLAYSTATS_CASINO_CHIP(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_158(int iParam0)//Position - 0x12BF2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_163();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_162();
	if (iVar0 == 0)
	{
		func_161();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26537 /* Tunable: -606357593 */)
	{
		func_160();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_159()
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_SOLD"), func_159());
		func_160();
	}
	else
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_SOLD"), (iVar2 + iParam0));
	}
}

int func_159()//Position - 0x12C60
{
	return Global_262145.f_26536 /* Tunable: -947558831 */;
}

void func_160()//Position - 0x12C6F
{
	func_161();
}

void func_161()//Position - 0x12C7B
{
	func_108(joaat("MPPLY_CASINO_CHIPS_SELTIM"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_162()//Position - 0x12C90
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_SOLD"));
}

int func_163()//Position - 0x12CA1
{
	return func_112(joaat("MPPLY_CASINO_CHIPS_SELTIM"));
}

int func_164(int iParam0)//Position - 0x12CB2
{
	int iVar0;
	
	if (func_343())
	{
		return 0;
	}
	iVar0 = func_410();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_165(char* sParam0)//Position - 0x12CD7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

void func_166(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x12CED
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_154(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_153(7, iVar0);
		Global_1670224.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[iVar0] = iParam2;
		Global_1670224.f_4714.f_216[iVar0] = iParam3;
		Global_1670224.f_4714.f_183[iVar0] = iParam4;
		Global_1670224.f_4714.f_194[iVar0] = iParam5;
		Global_1670224.f_4714.f_249[iVar0] = iParam6;
		Global_1670224.f_4714.f_260[iVar0] = iParam7;
		Global_1670224.f_4714.f_205[iVar0] = iParam8;
		Global_1670224.f_4714.f_314[iVar0] = iParam9;
		Global_1670224.f_4714.f_325[iVar0] = iParam10;
		Global_1670224.f_4714.f_357[iVar0] = iParam11;
		Global_1670224.f_4714.f_238[iVar0] = iParam12;
		Global_1670224.f_4714.f_271[iVar0] = iParam13;
		Global_1670224.f_4714.f_368[iVar0] = iParam14;
		Global_1670224.f_4714.f_379[iVar0] = iParam15;
		Global_1670224.f_4714.f_390[iVar0] = iParam16;
		Global_1670224.f_4714.f_227[iVar0] = iParam17;
	}
}

int func_167(int iParam0)//Position - 0x12E4A
{
	if ((Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 == 3) || func_428(PLAYER::PLAYER_ID()))
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

void func_168(int iParam0)//Position - 0x12ECB
{
	Local_1038.f_797 = iParam0;
}

void func_169()//Position - 0x12EDB
{
	char* sVar0;
	int iVar1;
	
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/, true);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/);
	if (!BitTest(Local_1038.f_20, 3))
	{
		if ((PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/)) && !BitTest(Local_1038.f_20, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_1038.f_20), 3);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_392(Local_1038.f_18) == 2 || func_392(Local_1038.f_18) == 3) || func_428(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (func_305(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!BitTest(Local_1038.f_20, 4))
			{
				func_304(0, 0);
				func_302(1, sVar0, sVar0);
				func_301("TCP_HANDS" /* GXT: HAND RANKINGS */);
				func_188(1, 2, 2, 2, 1);
				func_187(1, 1, 1, 1, 0);
				iVar1 = 0;
				func_183(iVar1, "TCP_HAND1" /* GXT: Straight Flush */, 0, 1, 0, 0, 0);
				func_183(iVar1, "TCP_10" /* GXT: 10 */, 1, 1, 0, 0, 0);
				func_170(62, 0);
				func_183(iVar1, "TCP_9" /* GXT: 9 */, 1, 1, 0, 0, 0);
				func_170(62, 0);
				func_183(iVar1, "TCP_8" /* GXT: 8 */, 1, 1, 0, 0, 0);
				func_170(62, 0);
				iVar1 = 1;
				func_183(iVar1, "TCP_HAND2" /* GXT: Three of a Kind */, 0, 1, 0, 0, 0);
				func_183(iVar1, "TCP_5" /* GXT: 5 */, 1, 1, 0, 0, 0);
				func_170(60, 0);
				func_183(iVar1, "TCP_5" /* GXT: 5 */, 1, 1, 0, 0, 0);
				func_170(61, 0);
				func_183(iVar1, "TCP_5" /* GXT: 5 */, 1, 1, 0, 0, 0);
				func_170(59, 0);
				iVar1 = 2;
				func_183(iVar1, "TCP_HAND3" /* GXT: Straight */, 0, 1, 0, 0, 0);
				func_183(iVar1, "TCP_2" /* GXT: 2 */, 1, 1, 0, 0, 0);
				func_170(60, 0);
				func_183(iVar1, "TCP_3" /* GXT: 3 */, 1, 1, 0, 0, 0);
				func_170(62, 0);
				func_183(iVar1, "TCP_4" /* GXT: 4 */, 1, 1, 0, 0, 0);
				func_170(60, 0);
				iVar1 = 3;
				func_183(iVar1, "TCP_HAND4" /* GXT: Flush */, 0, 1, 0, 0, 0);
				func_183(iVar1, "TCP_A" /* GXT: A */, 1, 1, 0, 0, 0);
				func_170(62, 0);
				func_183(iVar1, "TCP_Q" /* GXT: Q */, 1, 1, 0, 0, 0);
				func_170(62, 0);
				func_183(iVar1, "TCP_9" /* GXT: 9 */, 1, 1, 0, 0, 0);
				func_170(62, 0);
				iVar1 = 4;
				func_183(iVar1, "TCP_HAND5" /* GXT: Pair */, 0, 1, 0, 0, 0);
				func_183(iVar1, "TCP_K" /* GXT: K */, 1, 1, 0, 0, 0);
				func_170(60, 0);
				func_183(iVar1, "TCP_K" /* GXT: K */, 1, 1, 0, 0, 0);
				func_170(62, 0);
				func_183(iVar1, "TCP_7" /* GXT: 7 */, 1, 1, 0, 0, 0);
				func_170(59, 0);
				iVar1 = 5;
				func_183(iVar1, "TCP_HAND6" /* GXT: High Card */, 0, 1, 0, 0, 0);
				func_183(iVar1, "TCP_A" /* GXT: A */, 1, 1, 0, 0, 0);
				func_170(59, 0);
				func_183(iVar1, "TCP_7" /* GXT: 7 */, 1, 1, 0, 0, 0);
				func_170(60, 0);
				func_183(iVar1, "TCP_3" /* GXT: 3 */, 1, 1, 0, 0, 0);
				func_170(62, 0);
				func_300(-1, 1, 1);
				MISC::SET_BIT(&(Local_1038.f_20), 4);
			}
			func_270(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_267(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_1942 = 1;
			Local_1038.f_20 = 0;
			MISC::SET_BIT(&(Local_1038.f_20), 2);
		}
	}
}

void func_170(int iParam0, bool bParam1)//Position - 0x13217
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_23831.f_5827 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 >= 4)
	{
		return;
	}
	if (Global_23831.f_6347 != 1)
	{
		return;
	}
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		return;
	}
	Global_23831.f_4984[Global_23831.f_5827] = iParam0;
	Global_23831.f_5827++;
	Global_23831.f_2387[Global_23831.f_6345 /*5*/][Global_23831.f_6346] = 4;
	Global_23831.f_6346++;
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		fVar0 = func_180();
		if (Global_23831.f_5678[Global_23831.f_5822] && Global_23831.f_6346 == Global_23831.f_6344)
		{
			func_172(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23831.f_5671[(Global_23831.f_5822 - 1)])
		{
			Global_23831.f_5671[(Global_23831.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23831.f_6346 >= Global_23831.f_6344)
		{
			fVar3 = func_171();
			if (fVar3 > Global_23831.f_6348[Global_23831.f_5821])
			{
				Global_23831.f_6348[Global_23831.f_5821] = fVar3;
			}
		}
	}
}

float func_171()//Position - 0x13352
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23831.f_6346)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23831.f_4984[((Global_23831.f_5827 - iVar1) + iVar0)] != 0)
		{
			if (func_172(Global_23831.f_4984[((Global_23831.f_5827 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
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

int func_172(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x13405
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_179(iParam0), 64);
	StringCopy(&cVar16, func_176(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_174(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_173(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23831.f_7680[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23830)
			{
				*fParam4 = (*fParam4 * (Global_23830 / *fParam3));
				*fParam3 = Global_23830;
			}
		}
		return 1;
	}
	return 0;
}

float func_173(int iParam0)//Position - 0x13531
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
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0.5f;
			break;
		
		case 64:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_174(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0x13605
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_175(*iParam1, *iParam2))
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

bool func_175(int iParam0, int iParam1)//Position - 0x1368D
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

var func_176(int iParam0, bool bParam1)//Position - 0x136A8
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_7680[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23831.f_7680[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_178(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_177(&uVar3);
			}
		}
		else
		{
			return func_177(&(Global_23831.f_7680[iParam0 /*16*/]));
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
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
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

var func_177(var uParam0)//Position - 0x13BD2
{
	return uParam0;
}

struct<13> func_178(int iParam0)//Position - 0x13BDC
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_179(int iParam0)//Position - 0x13BF3
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_6623[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23831.f_6623[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_178(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_177(&uVar0);
		}
		else
		{
			return func_177(&(Global_23831.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_180()//Position - 0x13C68
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
	while (iVar7 < Global_23831.f_6346)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_181(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23831.f_79[Global_23831.f_6345 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23831.f_6346)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(Global_23831.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(Global_23831.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[((Global_23831.f_5825 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[((Global_23831.f_5826 - iVar4) + iVar10)], Global_23831.f_4855[((Global_23831.f_5826 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
	{
		fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23831.f_4984[((Global_23831.f_5827 - iVar5) + iVar7)] != 0)
		{
			func_172(Global_23831.f_4984[((Global_23831.f_5827 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x140B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_182(Global_23831.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_182(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1425E
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

void func_183(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x144E8
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23831.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23831.f_5821 >= 128)
	{
		return;
	}
	if (Global_23831.f_5823 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 < Global_23831.f_6344)
	{
		return;
	}
	if (Global_23831.f_5821 != iParam0)
	{
		Global_23831.f_5821 = iParam0;
		Global_23831.f_5822 = 0;
	}
	iVar0 = Global_23831.f_5659[Global_23831.f_5822];
	if (iVar0 != 1)
	{
		while (Global_23831.f_5822 < 4 && iVar0 != 1)
		{
			Global_23831.f_5822++;
			iVar0 = Global_23831.f_5659[Global_23831.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23831.f_1616[Global_23831.f_5823] = bParam3;
	Global_23831.f_1873[Global_23831.f_5823] = iParam4;
	Global_23831.f_2130[Global_23831.f_5823] = iParam6;
	Global_23831.f_5823++;
	if (!bParam3)
	{
		func_186(Global_23831.f_5821, 1);
	}
	else
	{
		func_186(Global_23831.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_185(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
		if (Global_23831.f_5678[Global_23831.f_5822])
		{
			func_172(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23831.f_5671[Global_23831.f_5822])
		{
			Global_23831.f_5671[Global_23831.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_184(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
			if (fVar4 > Global_23831.f_6348[iParam0])
			{
				Global_23831.f_6348[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23831.f_5692[iParam0]), Global_23831.f_5822);
	Global_23831.f_5822++;
	Global_23831.f_6347 = 1;
	Global_23831.f_6345 = (Global_23831.f_5823 - 1);
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = iParam2;
}

float func_184(char* sParam0)//Position - 0x14704
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_185(char* sParam0)//Position - 0x14720
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
	func_181(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_186(int iParam0, bool bParam1)//Position - 0x1475D
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x147A9
{
	Global_23831.f_5659[0] = iParam0;
	Global_23831.f_5659[1] = iParam1;
	Global_23831.f_5659[2] = iParam2;
	Global_23831.f_5659[3] = iParam3;
	Global_23831.f_5659[4] = iParam4;
	Global_23831.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_23831.f_5829++;
	}
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14853
{
	Global_23831.f_5686[0] = iParam0;
	Global_23831.f_5686[1] = iParam1;
	Global_23831.f_5686[2] = iParam2;
	Global_23831.f_5686[3] = iParam3;
	Global_23831.f_5686[4] = iParam4;
}

void func_189()//Position - 0x14892
{
	char* sVar0;
	
	if (BitTest(Local_1038.f_20, 2))
	{
		MISC::CLEAR_BIT(&(Local_1038.f_20), 2);
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/);
	if (!BitTest(Local_1038.f_20, 0))
	{
		if ((PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/)) && !BitTest(Local_1038.f_20, 3))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_1038.f_20), 0);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_392(Local_1038.f_18) == 2 || func_392(Local_1038.f_18) == 3) || func_428(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (func_305(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!BitTest(Local_1038.f_20, 1))
			{
				func_304(0, 0);
				func_302(1, sVar0, sVar0);
				func_301("TCP_RULES" /* GXT: RULES */);
				func_193(1, iLocal_1942, 6);
				func_192(1, 1, 1, 1, 1);
				func_300(-1, 1, 1);
				func_299(func_191(iLocal_1942), 0, 0);
				func_298(func_190(iLocal_1942));
				MISC::SET_BIT(&(Local_1038.f_20), 1);
			}
			func_270(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_267(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_1942 = 1;
			Local_1038.f_20 = 0;
			MISC::SET_BIT(&(Local_1038.f_20), 2);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			iLocal_1942++;
			if (iLocal_1942 > 6)
			{
				iLocal_1942 = 1;
			}
			MISC::CLEAR_BIT(&(Local_1038.f_20), 1);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			iLocal_1942 = (iLocal_1942 - 1);
			if (iLocal_1942 < 1)
			{
				iLocal_1942 = 6;
			}
			MISC::CLEAR_BIT(&(Local_1038.f_20), 1);
		}
	}
}

char* func_190(int iParam0)//Position - 0x14A56
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1" /* GXT: A single standard 52-card pack is used. This is shuffled at the start of every hand. */;
		
		case 2:
			return "TCP_RULE_2" /* GXT: The Dealer must have a Queen high or better to play. If the Dealer does not play, Ante wagers are paid 1 to 1 and Play wagers are returned. */;
		
		case 3:
			return "TCP_RULE_3" /* GXT: Players can choose to bet on the Ante, Pair Plus, or both. After being dealt their cards, players that have bet the Ante must place an equal Play bet to compare their hand with the Dealer.~n~~n~Play and Ante bets pay out 1 to 1 if the player's hand beats the Dealer. The player needs a Straight or better to receive the Ante Bonus. For Pair Plus, the player must have a Pair or better to receive a payout. This is paid independently of what hand the Dealer has. */;
		
		case 4:
			return "TCP_RULE_4" /* GXT: Straight Flush: 40 to 1~n~Three of a Kind: 30 to 1~n~Straight: 6 to 1~n~Flush: 4 to 1~n~Pair: 1 to 1 */;
		
		case 5:
			return "TCP_RULE_5" /* GXT: Straight Flush: 5 to 1~n~Three of a Kind: 4 to 1~n~Straight: 1 to 1 */;
		
		case 6:
			if ((func_392(Local_1038.f_18) == 2 || func_392(Local_1038.f_18) == 3) || func_428(PLAYER::PLAYER_ID()))
			{
				return "TCP_RULE_6b" /* GXT: Ante and Play:~n~- Minimum: 1000 Chips~n~- Maximum: 50000 Chips~n~~n~Pair Plus:~n~- Minimum: 1000 Chips~n~- Maximum: 5000 Chips */;
			}
			else
			{
				return "TCP_RULE_6a" /* GXT: Ante and Play:~n~- Minimum: 10 Chips~n~- Maximum: 5000 Chips~n~~n~Pair Plus:~n~- Minimum: 10 Chips~n~- Maximum: 500 Chips */;
			}
			break;
	}
	return "";
}

char* func_191(int iParam0)//Position - 0x14AF1
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1T" /* GXT: The Pack~n~~a~ */;
		
		case 2:
			return "TCP_RULE_2T" /* GXT: Dealer Hand~n~~a~ */;
		
		case 3:
			return "TCP_RULE_3T" /* GXT: Player Hand~n~~a~ */;
		
		case 4:
			return "TCP_RULE_4T" /* GXT: Pair Plus Payouts~n~~a~ */;
		
		case 5:
			return "TCP_RULE_5T" /* GXT: Ante Bonus Payouts~n~~a~ */;
		
		case 6:
			if ((func_392(Local_1038.f_18) == 2 || func_392(Local_1038.f_18) == 3) || func_428(PLAYER::PLAYER_ID()))
			{
				return "TCP_RULE_6Tb" /* GXT: Bet Limits~n~~a~ */;
			}
			else
			{
				return "TCP_RULE_6Ta" /* GXT: Bet Limits~n~~a~ */;
			}
			break;
	}
	return "";
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14B8C
{
	Global_23831.f_5678[0] = iParam0;
	Global_23831.f_5678[1] = iParam1;
	Global_23831.f_5678[2] = iParam2;
	Global_23831.f_5678[3] = iParam3;
	Global_23831.f_5678[4] = iParam4;
}

void func_193(int iParam0, int iParam1, int iParam2)//Position - 0x14BCB
{
	Global_23831.f_6338 = iParam0;
	Global_23831.f_6339 = iParam1;
	Global_23831.f_6340 = iParam2;
}

void func_194(int iParam0)//Position - 0x14BEB
{
	Global_1670224.f_1163 = iParam0;
}

void func_195(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x14BFC
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
		func_201(uParam2);
	}
	if (Global_1577937 < 2)
	{
		func_200(1);
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
						func_199(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 365)
						{
							func_199(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_199(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
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
						func_198(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_199(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_199(&(uParam2->f_1[bVar0 /*57*/].f_16));
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
						func_198(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
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
	if (*uParam2 == 1 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_197(*uParam0, uParam1);
	}
	func_196();
}

void func_196()//Position - 0x14FA4
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_197(int iParam0, var uParam1)//Position - 0x14FC2
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_198(char* sParam0)//Position - 0x14FE1
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_199(char* sParam0)//Position - 0x14FF3
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_200(int iParam0)//Position - 0x15001
{
	Global_1577937 = iParam0;
}

void func_201(var uParam0)//Position - 0x1500F
{
	Global_1979636 = 0;
	uParam0->f_692 = 0;
}

int func_202(var uParam0)//Position - 0x15022
{
	return (Global_1979636 || uParam0->f_692);
}

void func_203(var uParam0, float fParam1)//Position - 0x15039
{
	uParam0->f_699 = fParam1;
}

struct<9> func_204()//Position - 0x15048
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

int func_205(int iParam0)//Position - 0x1508C
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

void func_206(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x15110
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

void func_207(char* sParam0, char* sParam1, var uParam2, char* sParam3)//Position - 0x15174
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

void func_208(var uParam0)//Position - 0x151C4
{
	func_209(uParam0);
	uParam0->f_692 = 1;
}

void func_209(var uParam0)//Position - 0x151D8
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
		uParam0->f_1[iVar0 /*57*/].f_55 = 365;
		uParam0->f_1[iVar0 /*57*/].f_56 = 365;
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
	Global_1979636 = 0;
}

var func_210(bool bParam0)//Position - 0x152C6
{
	if (func_149())
	{
		if (!bParam0)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					Local_1038.f_796 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_1038.f_796 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_1038.f_796 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_1038.f_796 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_1038.f_796 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_1038.f_796 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_1038.f_796 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_1038.f_796 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
		{
			case 0:
				Local_1038.f_796 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_1038.f_796 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_1038.f_796 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_1038.f_796 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_1038.f_796 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_1038.f_796 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_1038.f_796 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_1038.f_796 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_1038.f_796 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_1038.f_796 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_1038.f_796 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_1038.f_796 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_1038.f_796 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_1038.f_796;
}

int func_211()//Position - 0x15491
{
	if (func_212() == 0)
	{
		return 1;
	}
	return 0;
}

int func_212()//Position - 0x154A6
{
	return Global_1574633.f_18;
}

void func_213(int iParam0)//Position - 0x154B4
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
	else if ((iVar0 - iVar1) >= Global_262145.f_26738 /* Tunable: VC_CASINO_CHIP_MAX_WIN_LOSS_COOLDOWN */)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26739 /* Tunable: VC_CASINO_CHIP_MAX_LOSS_DAILY */)
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26739 /* Tunable: VC_CASINO_CHIP_MAX_LOSS_DAILY */);
		func_109();
		Global_2696123 = 1;
	}
	else
	{
		func_108(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 - iParam0));
	}
}

int func_214(var uParam0, bool bParam1, bool bParam2)//Position - 0x1552D
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

int func_215()//Position - 0x15574
{
	if ((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && (!BitTest(Local_1038.f_22, 9) && Local_1901.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_216()//Position - 0x155C1
{
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_217())
	{
		return NETWORK::NETWORK_GET_PLAYER_ACCOUNT_ID(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	return 0;
}

int func_217()//Position - 0x155E4
{
	return -1;
}

void func_218()//Position - 0x155ED
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	float fVar23;
	
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/))
	{
		if (bLocal_1948)
		{
			func_309(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_1948 = false;
	}
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/))
	{
		if (bLocal_1947)
		{
			func_309(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_1947 = false;
	}
	if ((((Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0 && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_347()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && Local_116.f_576[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2] < 12)
	{
		if (Local_116.f_410[PLAYER::PLAYER_ID() /*5*/] > 0 && (BitTest(Local_1038.f_22, 4) || BitTest(Local_116.f_20[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2], func_205(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1))))
		{
			if ((((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/)) && !bLocal_1947) && !func_72(&uLocal_1949)) && !CAM::DOES_CAM_EXIST(Local_1038.f_13))
			{
				if (!bLocal_1948)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						bLocal_1943 = true;
					}
					func_309(PLAYER::PLAYER_ID(), 0, 0, 0);
					bLocal_1948 = true;
				}
			}
		}
		else
		{
			if (bLocal_1948)
			{
				func_309(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_1948 = false;
		}
		if (Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] > 0)
		{
			if ((((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/)) && !bLocal_1948) && !func_72(&uLocal_1949)) && !CAM::DOES_CAM_EXIST(Local_1038.f_13))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_309(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				bLocal_1947 = true;
			}
		}
		else
		{
			if (bLocal_1947)
			{
				func_309(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_1947 = false;
		}
	}
	else
	{
		if (bLocal_1948 || bLocal_1947)
		{
			func_309(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_1948 = false;
		bLocal_1947 = false;
	}
	if (bLocal_1947 || bLocal_1948)
	{
		CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 166, true);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!CAM::DOES_CAM_EXIST(Local_1038.f_13))
		{
			Local_1038.f_13 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			CAM::SET_CAM_PARAMS(Local_1038.f_13, func_230(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1, Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1947), func_229(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1, Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1947), func_228(bLocal_1947), 0, 1, 1, 2);
			CAM::SHAKE_CAM(Local_1038.f_13, "HAND_SHAKE", 0.03f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else if (bLocal_1947)
		{
			if (Local_116.f_5[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2])
			{
				if (!func_98("TCP_D_HAND" /* GXT: The Dealer has ~a~. */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
				{
					func_97("TCP_D_HAND" /* GXT: The Dealer has ~a~. */, func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
				}
			}
			else if (!func_345("TCP_D_HAND_D" /* GXT: The Dealer's cards will be shown once all players have made their decisions. */))
			{
				func_165("TCP_D_HAND_D" /* GXT: The Dealer's cards will be shown once all players have made their decisions. */);
			}
			fVar0 = CAM::GET_CAM_FOV(Local_1038.f_13);
			fVar1 = 50f;
			fVar1 = func_227();
			fVar0 = func_225(fVar0, fVar1, 0.2f, 4);
			CAM::SET_CAM_PARAMS(Local_1038.f_13, func_230(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1, Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1947), func_229(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1, Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1947), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_1948)
		{
			if (bLocal_1943)
			{
				fVar2 = CAM::GET_CAM_FOV(Local_1038.f_13);
				fVar3 = 50f;
				Var4 = { CAM::GET_CAM_ROT(Local_1038.f_13, 2) };
				Var7 = { 0f, 0f, 0f };
				Var10 = { -38.1166f, -0.0930717f, -102.613f };
				Var13 = { CAM::GET_CAM_COORD(Local_1038.f_13) };
				Var16 = { 0f, 0f, 0f };
				Var19 = { 966.621f, 32.009f, 116.621f };
				if (Var4.f_2 < 0f)
				{
					Var4.f_2 = (Var4.f_2 + 360f);
				}
				Var19 = { func_224(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1) };
				Var10 = { func_223(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1) };
				fVar3 = func_227();
				if (Var10.f_2 < 0f)
				{
					Var10.f_2 = (Var10.f_2 + 360f);
				}
				Var7 = { func_221(Var4, Var10, 0.35f, 4) };
				Var16 = { func_220(Var13, Var19, 0.35f, 4) };
				if (Var7.f_2 > 180f)
				{
					Var7.f_2 = (Var7.f_2 - 360f);
				}
				else if (Var7.f_2 < -180f)
				{
					Var7.f_2 = (Var7.f_2 + 360f);
				}
				if (func_219(Var4, Var10, 10f, 0) && func_219(Var13, Var19, 0.1f, 0))
				{
					fVar2 = func_225(fVar2, fVar3, 0.35f, 4);
				}
				CAM::SET_CAM_PARAMS(Local_1038.f_13, Var16, Var7, fVar2, 0, 1, 1, 2);
			}
			else
			{
				fVar22 = CAM::GET_CAM_FOV(Local_1038.f_13);
				fVar23 = 50f;
				fVar23 = func_227();
				fVar22 = func_225(fVar22, fVar23, 0.35f, 4);
				CAM::SET_CAM_PARAMS(Local_1038.f_13, func_230(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1, Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1947), func_229(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1, Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1947), fVar22, 0, 1, 1, 2);
			}
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (CAM::DOES_CAM_EXIST(Local_1038.f_13))
		{
			CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
			if (!func_72(&uLocal_1949) && bLocal_1943)
			{
				func_73(&uLocal_1949, 0, 0);
				GRAPHICS::ANIMPOSTFX_PLAY("PokerCamTransition", 0, false);
			}
			else if (func_71(&uLocal_1949, 100, 0) || !bLocal_1943)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(Local_1038.f_13, false);
				HUD::CLEAR_HELP(true);
				func_69(&uLocal_1949);
				bLocal_1943 = false;
			}
		}
	}
	if (bLocal_1948 || bLocal_1943)
	{
		if (BitTest(Local_1038.f_22, 4) || BitTest(Local_116.f_20[Local_749[PLAYER::PLAYER_ID() /*9*/].f_2], func_205(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1)))
		{
			if (!func_98("TCP_P_HAND" /* GXT: You have ~a~. */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
			{
				func_97("TCP_P_HAND" /* GXT: You have ~a~. */, func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0));
			}
		}
	}
}

int func_219(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x15CA9
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_220(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)//Position - 0x15D24
{
	struct<3> Var0;
	
	Var0.f_0 = func_225(Param0.f_0, Param3.f_0, fParam6, iParam7);
	Var0.f_1 = func_225(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_225(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

Vector3 func_221(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)//Position - 0x15D66
{
	struct<3> Var0;
	
	Var0.f_0 = func_222(Param0.f_0, Param3.f_0, fParam6, iParam7);
	Var0.f_1 = func_222(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_222(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

float func_222(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x15DA8
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
	fVar1 = func_225(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_223(int iParam0)//Position - 0x15E18
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_240(iParam0) };
	Var3 = { -47.16f, 0f, -87.475f };
	return Vector(Var0.f_2, 0f, 0f) + Var3;
}

Vector3 func_224(int iParam0)//Position - 0x15E44
{
	struct<3> Var0;
	
	Var0 = { func_240(iParam0) };
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_369(iParam0), Var0.f_2, 0.198f, 0f, 1.388f);
}

float func_225(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x15E6F
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
			fParam2 = ((-SYSTEM::COS(func_226((3.1415927f * fParam2))) / 2f) + 0.5f);
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
			fVar0 = func_225(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_225(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_226(float fParam0)//Position - 0x15F82
{
	return (fParam0 * 57.29578f);
}

float func_227()//Position - 0x15F92
{
	if (bLocal_1947)
	{
		return 37.8425f;
	}
	return 43.3518f;
}

float func_228(bool bParam0)//Position - 0x15FAD
{
	float fVar0;
	
	fVar0 = 44.6546f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	if (bLocal_1943)
	{
		fVar0 = 50f;
	}
	return fVar0;
}

Vector3 func_229(int iParam0, int iParam1, bool bParam2)//Position - 0x15FD7
{
	struct<3> Var0;
	
	if (bParam2)
	{
		Var0 = { -74.52f, 0f, 0f };
	}
	else if (bLocal_1943)
	{
		return CAM::GET_GAMEPLAY_CAM_ROT(2);
	}
	else
	{
		return func_223(iParam0);
	}
	return Vector(func_75(iParam1), 0f, 0f) + Var0;
}

Vector3 func_230(int iParam0, int iParam1, bool bParam2)//Position - 0x16019
{
	struct<3> Var0;
	
	if (bParam2)
	{
		Var0 = { 0f, -0.02f, 1.62f };
	}
	else if (bLocal_1943)
	{
		return CAM::GET_GAMEPLAY_CAM_COORD();
	}
	else
	{
		return func_224(iParam0);
	}
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iParam1), func_75(iParam1), Var0);
}

void func_231(char* sParam0, int iParam1)//Position - 0x16065
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_232(int iParam0)//Position - 0x1607C
{
	if (Local_116.f_576[iParam0] == 2)
	{
		if (!BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/].f_6, 0))
		{
			Local_1038.f_799 = { Local_116.f_168[iParam0 /*55*/] };
			MISC::SET_BIT(&(Local_749[PLAYER::PLAYER_ID() /*9*/].f_6), 0);
		}
	}
	else if (Local_116.f_576[iParam0] > 2 && BitTest(Local_749[PLAYER::PLAYER_ID() /*9*/].f_6, 0))
	{
		if (Local_116.f_410[PLAYER::PLAYER_ID() /*5*/] > 0)
		{
			if (Local_1038.f_854 != Local_116.f_410[PLAYER::PLAYER_ID() /*5*/])
			{
				Local_1038.f_854 = { Local_116.f_410[PLAYER::PLAYER_ID() /*5*/] };
			}
			else
			{
				if (Local_1038.f_854.f_1[iLocal_1946] != Local_116.f_410[PLAYER::PLAYER_ID() /*5*/].f_1[iLocal_1946])
				{
					iLocal_1945 = 0;
					iLocal_1946 = 0;
					if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
					{
						STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
					}
					func_387(1);
					HUD::CLEAR_HELP(true);
					return 1;
				}
				iLocal_1946++;
				if (iLocal_1946 >= Local_1038.f_854)
				{
					iLocal_1946 = 0;
				}
			}
		}
		if (Local_116.f_168[iParam0 /*55*/].f_2[iLocal_1945] != Local_1038.f_799.f_2[iLocal_1945])
		{
			iLocal_1945 = 0;
			iLocal_1946 = 0;
			if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
			{
				STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
			}
			func_387(1);
			HUD::CLEAR_HELP(true);
			return 1;
		}
		iLocal_1945++;
		if (iLocal_1945 >= 52)
		{
			iLocal_1945 = 0;
		}
	}
	return 0;
}

void func_233()//Position - 0x161E0
{
	int iVar0;
	
	iVar0 = func_392(Local_1038.f_18);
	if (iVar0 < 32)
	{
		MISC::SET_BIT(&(Local_1038.f_33), iVar0);
	}
}

int func_234(int iParam0)//Position - 0x16205
{
	int iVar0;
	
	if (iParam0 == func_422())
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	if (iVar0 != func_422())
	{
		return func_334(iVar0);
	}
	return 0;
}

int func_235(int iParam0)//Position - 0x16235
{
	if (func_136(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_422();
}

void func_236(var uParam0, int iParam1)//Position - 0x16258
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
		if (func_343())
		{
			func_236(uParam0, 7);
			return;
		}
	}
	uParam0->f_7 = iParam1;
	func_69(&(Local_1038.f_794));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_73(&(Local_1038.f_794), 0, 0);
	}
}

int func_237()//Position - 0x162E4
{
	int iVar0;
	
	iVar0 = func_392(Local_1038.f_18);
	if (iVar0 < 32)
	{
		return BitTest(Local_1038.f_33, iVar0);
	}
	return 0;
}

char* func_238(int iParam0)//Position - 0x1630A
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

char* func_239()//Position - 0x16344
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_240(int iParam0)//Position - 0x16350
{
	int iVar0;
	
	if (Local_1038.f_26 == 1)
	{
		if (func_423() != func_422())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_392(iParam0)), 1f, func_241(Global_2657971[func_423() /*465*/].f_456), false, false, false);
		}
	}
	else if (func_392(iParam0) == 0 || func_392(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_392(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_392(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_241(int iParam0)//Position - 0x16591
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

var func_242(int iParam0, int iParam1)//Position - 0x165E9
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_239(), func_238(iParam1), func_369(iParam0), func_240(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

float func_243(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x16619
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
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

Vector3 func_244(int iParam0, int iParam1)//Position - 0x16653
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_239(), func_238(iParam1), func_369(iParam0), func_240(iParam0), 0.01f, 2) };
	return Var0;
}

int func_245()//Position - 0x16683
{
	STREAMING::REQUEST_ANIM_DICT(func_45());
	STREAMING::REQUEST_ANIM_DICT(func_78());
	STREAMING::REQUEST_ANIM_DICT(func_92());
	STREAMING::REQUEST_ANIM_DICT(func_239());
	if (((STREAMING::HAS_ANIM_DICT_LOADED(func_45()) && STREAMING::HAS_ANIM_DICT_LOADED(func_78())) && STREAMING::HAS_ANIM_DICT_LOADED(func_92())) && STREAMING::HAS_ANIM_DICT_LOADED(func_239()))
	{
		return 1;
	}
	return 0;
}

int func_246()//Position - 0x166E2
{
	if (func_71(&(Local_1038.f_792), 3500, 0))
	{
		func_69(&(Local_1038.f_792));
		return 1;
	}
	return 0;
}

bool func_247(int iParam0)//Position - 0x1670A
{
	if (Local_116.f_117[iParam0] == func_422())
	{
		return 0;
	}
	return Local_116.f_117[iParam0] != PLAYER::PLAYER_ID();
}

void func_248(int iParam0)//Position - 0x16732
{
	Global_1964433 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1964451 = iParam0;
	if (!func_256())
	{
		func_253();
	}
	if (!func_252())
	{
		func_249();
	}
}

void func_249()//Position - 0x16760
{
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_PX"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_251();
	func_250();
	Global_1964447 = 1;
	Global_1964442 = 0;
}

void func_250()//Position - 0x16787
{
	func_108(joaat("MPPLY_CAS_24H_GMBLNG_PX"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

void func_251()//Position - 0x1679C
{
	func_108(joaat("MPPLY_CAS_GMBLNG_L24"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_1"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_2"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_3"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_4"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_5"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_6"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_7"), 0);
	func_108(joaat("MPPLY_CAS_GMBLNG_L24_8"), 0);
	func_108(joaat("MPPLY_CAS_CUR_GMBLNG_HR"), 0);
	func_108(joaat("MPPLY_CAS_24H_GMBLNG_PX"), 0);
}

bool func_252()//Position - 0x16812
{
	return Global_1964447;
}

void func_253()//Position - 0x1681E
{
	func_108(joaat("MPPLY_CASINO_GMBLNG_GD"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_255();
	func_254((NETWORK::GET_CLOUD_TIME_AS_INT() + 86400));
	Global_1964446 = 1;
}

void func_254(int iParam0)//Position - 0x16849
{
	Global_1964441 = iParam0;
}

void func_255()//Position - 0x16857
{
	func_108(joaat("MPPLY_CAS_CUR_GMBLNG_PX"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

bool func_256()//Position - 0x1686C
{
	return func_112(joaat("MPPLY_CASINO_GMBLNG_GD")) != 0;
}

bool func_257(int iParam0)//Position - 0x1687F
{
	return Local_116.f_117[iParam0] == PLAYER::PLAYER_ID();
}

void func_258()//Position - 0x16894
{
	func_371(2);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
	func_349();
	func_309(PLAYER::PLAYER_ID(), 1, 0, 0);
	func_266();
	MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4), 3);
	func_259();
}

void func_259()//Position - 0x168D8
{
	int iVar0;
	int iVar1;
	
	if (Global_1964451 != -1)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1964433);
		iVar1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1964434);
		if (Global_1964434 == -1)
		{
			func_260(iVar0);
		}
		else
		{
			func_260(iVar1);
		}
		func_255();
		func_250();
		Global_1964433 = -1;
		Global_1964434 = -1;
		Global_1964451 = -1;
	}
}

void func_260(int iParam0)//Position - 0x1692F
{
	int iVar0;
	
	iVar0 = func_265();
	Global_1964442 = (Global_1964442 + iParam0);
	func_261(iVar0, iParam0);
	func_250();
}

void func_261(int iParam0, int iParam1)//Position - 0x16954
{
	int iVar0;
	var uVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_264((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_112(iVar14);
		iVar0++;
	}
	iVar15 = func_263(&uVar1, iParam0, 12);
	iVar15 = (iVar15 + iParam1);
	func_262(&uVar1, iParam0, 12, iVar15);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		uVar16 = func_264((iVar13 + iVar0));
		func_108(uVar16, uVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_262(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16A20
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

int func_263(var uParam0, int iParam1, int iParam2)//Position - 0x16B07
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

int func_264(int iParam0)//Position - 0x16BDF
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

int func_265()//Position - 0x16C09
{
	return func_112(joaat("MPPLY_CAS_CUR_GMBLNG_HR"));
}

void func_266()//Position - 0x16C1A
{
	if (Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 0;
	}
}

void func_267(bool bParam0, int iParam1)//Position - 0x16C38
{
	int iVar0;
	
	if (!func_269(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23831.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23831.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_268(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_268(int* iParam0)//Position - 0x16CFE
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

int func_269(var uParam0, bool bParam1, int iParam2)//Position - 0x16D2A
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23831.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23831.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23831.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_270(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x16DC7
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
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	float fVar96;
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_269(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_294(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23831)
	{
		if (func_172(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23831 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23830;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_23829;
	}
	else
	{
		fVar59 = (((Global_23829 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_174(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23831.f_5821 <= 1)
		{
			func_183(Global_23831.f_5821 + 1, "DFLT_MNU_OPT" /* GXT: Exit */, 0, 1, 0, 0, 0);
			Global_23831.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23831.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_23829;
			}
			else
			{
				if (Global_23831)
				{
					StringCopy(&cVar63, func_179(29), 64);
					StringCopy(&cVar79, func_176(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23831.f_7680[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_293(Global_23828, Global_23829, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23828 + (fParam5 * 0.5f)), (Global_23829 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23828 + (fParam5 * 0.5f)), (Global_23829 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23831.f_9086)
				{
					iVar1 = Global_23831.f_9082;
					iVar2 = Global_23831.f_9083;
					iVar3 = Global_23831.f_9084;
					iVar4 = Global_23831.f_9085;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_293(Global_23828, (Global_23829 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23829 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) != 0)
				{
					func_292();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23831.f_74)
					{
						if (Global_23831.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23831.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_14[iVar16], Global_23831.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23831.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23828 + 0.00390625f), ((Global_23829 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23831.f_6338)
				{
					func_292();
					func_290((((Global_23828 + fParam5) - 0.00390625f) - func_291("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23831.f_6339, Global_23831.f_6340)), ((Global_23829 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23831.f_6339, Global_23831.f_6340);
				}
				else if (Global_23831.f_6334 > Global_23831.f_5828)
				{
					if (Global_23831.f_6337 != 0)
					{
						func_292();
						func_290((((Global_23828 + fParam5) - 0.00390625f) - func_291("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23831.f_6337, Global_23831.f_6336)), ((Global_23829 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23831.f_6337, Global_23831.f_6336);
					}
				}
			}
			iVar6 = Global_23831.f_6341;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23831.f_9096)
			{
				iVar1 = Global_23831.f_9092;
				iVar2 = Global_23831.f_9093;
				iVar3 = Global_23831.f_9094;
				iVar4 = Global_23831.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23831.f_5828 && iVar6 <= Global_23831.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_23831.f_6088[iVar6])
					{
						if (Global_23831.f_5959[iVar6] && iVar6 != Global_23831.f_6341)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar56 = Global_23831.f_6348[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23831.f_6334 > Global_23831.f_5828)
			{
				if (Global_23831.f_9101)
				{
					iVar1 = Global_23831.f_9097;
					iVar2 = Global_23831.f_9098;
					iVar3 = Global_23831.f_9099;
					iVar4 = Global_23831.f_9100;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_293(Global_23828, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23831.f_9114)
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
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23831.f_5241)) != 0 && Global_23831.f_5323 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				if (Global_23831.f_5325 != 0)
				{
					func_172(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23828 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_289(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_293(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_289(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23831.f_5325 != 0)
				{
					func_172(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_288(Global_23831.f_5325, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_179(Global_23831.f_5325), func_176(Global_23831.f_5325, 1), ((Global_23828 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_5247)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_289(fVar42);
					fVar96 = 0.35f;
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23831.f_5247))) > 600)
					{
						fVar96 = (0.35f * 0.625f);
					}
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5247));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_293(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23831.f_9106)
					{
						iVar1 = Global_23831.f_9102;
						iVar2 = Global_23831.f_9103;
						iVar3 = Global_23831.f_9104;
						iVar4 = Global_23831.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
					func_289(fVar42);
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5247));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23831.f_5323 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23831.f_5324) > Global_23831.f_5323)
					{
						StringCopy(&(Global_23831.f_5241), "", 24);
						Global_23831.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_5247)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				fVar97 = 0.35f;
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23831.f_5247))) > 600)
				{
					fVar97 = (0.35f * 0.625f);
				}
				func_289(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_293(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
				func_289(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5247));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_21)) != 0 && Global_4541740.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				if (Global_4541740.f_67 != 0)
				{
					func_172(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23828 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_289(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_293(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_289(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4541740.f_67 != 0)
				{
					func_172(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_288(Global_4541740.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_179(Global_4541740.f_67), func_176(Global_4541740.f_67, 1), ((Global_23828 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4541740.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4541740.f_66) > Global_4541740.f_65)
					{
						StringCopy(&(Global_4541740.f_21), "", 16);
						Global_4541740.f_65 = -1;
					}
				}
			}
			func_283(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23831.f_6331)
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
			iVar98 = Global_23831.f_5821;
			if (Global_23831.f_6332)
			{
				iVar98 = (Global_23831.f_6335 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_23831.f_6348[iVar6] != 0f)
				{
					fVar56 = Global_23831.f_6348[iVar6];
				}
				if (Global_23831.f_6332)
				{
					iVar6 = Global_23831.f_8737[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23831.f_6341 && iVar9 < Global_23831.f_5828)
				{
					bVar33 = true;
					if (Global_23831.f_6342 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_23831.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23831.f_6482[iVar6] = fVar35;
				fVar34 = (Global_23828 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23831.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_23831.f_9108)
					{
						HUD::GET_HUD_COLOUR(Global_23831.f_9107, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23828 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, false, 0);
					Global_23831.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23831.f_5829)
				{
					if (BitTest(Global_23831.f_5692[iVar6], iVar8) || Global_23831.f_5659[iVar8] == 5)
					{
						if (Global_23831.f_6332)
						{
							iVar19 = Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar20 = Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar21 = Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar22 = Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar23 = Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)];
						}
						else
						{
							Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar19;
							Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar20;
							Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar21;
							Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar22;
							Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_23831.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_23831.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_23831.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_23828 + 0.0046875f) + Global_23831.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_23831.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_23831.f_5665[iVar8 + 1])
						{
							fVar46 = (Global_23831.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23828 + Global_23830) - 0.0046875f) - fVar34);
						}
						if ((Global_23831.f_5678[iVar8] && Global_23831.f_6477) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23831.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23831.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_181(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23831.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_172(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23831.f_4984[(iVar22 + iVar14)] == 2 || Global_23831.f_4984[(iVar22 + iVar14)] == 54) || Global_23831.f_4984[(iVar22 + iVar14)] == 64)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
										Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar44;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_23831.f_5686[iVar101] == 2)
												{
													Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar101)] = (Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar101)] - Global_23831.f_5671[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar44 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_172(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_172(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_288(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(26), func_176(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_172(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_172(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_288(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(27), func_176(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
									if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23831.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_181(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_282(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar28)] == 2 || Global_23831.f_4984[(iVar22 + iVar28)] == 54) || Global_23831.f_4984[(iVar22 + iVar28)] == 64)
											{
												if (func_172(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_172(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_288(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23831.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_179(Global_23831.f_4984[(iVar22 + iVar28)]), func_176(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_179(Global_23831.f_4984[(iVar22 + iVar28)]), func_176(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23831.f_5686[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_281() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23831.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_181(0, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23831.f_6341 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar14)] != 2 && Global_23831.f_4984[(iVar22 + iVar14)] != 54) && Global_23831.f_4984[(iVar22 + iVar14)] != 64)
											{
												if (func_172(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_172(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_288(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23831.f_4984[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_179(Global_23831.f_4984[(iVar22 + iVar14)]), func_176(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (Global_23828 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23831.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_179(Global_23831.f_4984[(iVar22 + iVar14)]), func_176(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_179(Global_23831.f_4984[(iVar22 + iVar14)]), func_176(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_181(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_282(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[iVar20]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_172(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_172(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_288(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(26), func_176(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_172(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_172(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_288(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(27), func_176(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_181(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										func_280((fVar34 + fVar42), fVar35, "NUMBER", Global_23831.f_4469[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_181(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_282(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_172(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_172(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_288(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(26), func_176(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_172(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_172(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_288(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(27), func_176(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_181(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
									func_279((fVar34 + fVar42), fVar35, "NUMBER", Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_172(Global_23831.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23831.f_6332)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23831.f_5686[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
											Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
											fVar44 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
										}
										if (bVar54)
										{
											if (func_172(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23831.f_5686[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_172(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_288(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_179(26), func_176(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_172(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_172(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_288(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_179(27), func_176(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_172(Global_23831.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_288(Global_23831.f_4984[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_179(Global_23831.f_4984[iVar22]), func_176(Global_23831.f_4984[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_278(Global_23831.f_4984[iVar22])), (fVar37 * func_278(Global_23831.f_4984[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23831.f_5659[iVar8] == 5)
						{
							if (Global_23831.f_5671[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							if (Global_23831.f_5678[iVar8])
							{
								if (func_172(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23831.f_8737[iVar9] = iVar6;
						Global_23831.f_6343 = iVar6;
						iVar9++;
						if (Global_23831.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_23831.f_6348[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_23831.f_6331)
					{
						Global_23831.f_6088[iVar6] = 1;
						if (Global_23831.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_23831.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23831.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23831.f_6331)
			{
				Global_23831.f_6333 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_23831.f_6336 = iVar11;
				Global_23831.f_6334 = iVar10;
				Global_23831.f_6331 = 1;
			}
		}
		if (!Global_23831.f_6332)
		{
			Global_23831.f_6335 = iVar9;
			Global_23831.f_6332 = 1;
		}
		iVar5++;
	}
	Global_23831.f_6479 = fVar51;
	Global_23831.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23831.f_6479);
	if (!Global_23831.f_9081)
	{
		func_271(0);
	}
	Global_23831.f_9081 = 0;
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
		func_194(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_271(int iParam0)//Position - 0x19F85
{
	if (func_277())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_276(0))
		{
			func_272(iParam0);
		}
		MISC::SET_BIT(&Global_8801, 2);
	}
}

void func_272(int iParam0)//Position - 0x19FB8
{
	if (func_277())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_275())
		{
			func_274(1, 1);
		}
		else
		{
			func_274(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_273())
	{
		Global_20930.f_1 = 3;
	}
}

int func_273()//Position - 0x1A042
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_274(bool bParam0, bool bParam1)//Position - 0x1A069
{
	if (bParam0)
	{
		if (func_276(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

bool func_275()//Position - 0x1A0DD
{
	return BitTest(Global_1956920, 5);
}

int func_276(int iParam0)//Position - 0x1A0EB
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_277()//Position - 0x1A142
{
	return BitTest(Global_1956920, 19);
}

float func_278(int iParam0)//Position - 0x1A151
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_279(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x1A1C0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_280(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1A1DF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_281()//Position - 0x1A1FD
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_282(bool bParam0)//Position - 0x1A20E
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23831.f_9109[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23831.f_9109[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_283(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1A254
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_269(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_294(bParam4, bParam8))
	{
		return;
	}
	if (func_286())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_284(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_23831.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (Global_23831.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23831.f_5625[iVar1], true), 64);
				}
				else if (Global_23831.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23831.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23831.f_5327 = 0;
		}
		if (!Global_23831.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23831.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23831.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_199(&(Global_23831.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23831.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_199(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[iVar1] == -1)
					{
						func_198(&(Global_23831.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23831.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23831.f_5553[iVar1 /*4*/]));
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
						if (Global_23831.f_5625[iVar1] != 365 && BitTest(Global_23831.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5625[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5326);
				func_199(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_198(&(Global_4541740.f_16));
				}
				else
				{
					iVar4 = Global_23831.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23831.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23831.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23831.f_5326)
		{
			if (Global_23831.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23831.f_5553[iVar1 /*4*/]));
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
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
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
			if (!Global_23831.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23831.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23831.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23831.f_6263[iVar0 /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23831.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_284(int iParam0, int iParam1)//Position - 0x1A759
{
	bool bVar0;
	
	if (!func_136(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_285(-1, 0) == 8;
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

int func_285(int iParam0, bool bParam1)//Position - 0x1A7B2
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_138();
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

int func_286()//Position - 0x1A7F3
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_287())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20875 == 0)
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

int func_287()//Position - 0x1A861
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_288(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x1A87B
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
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 57:
			*iParam5 = 100;
			break;
		
		case 65:
			*iParam5 = 100;
			break;
		
		case 58:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_289(float fParam0)//Position - 0x1A99C
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
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23828 + Global_23830) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_290(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1A9FB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_291(char* sParam0, int iParam1, int iParam2)//Position - 0x1AA1E
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
	func_292();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_292()//Position - 0x1AA60
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23831.f_9091)
	{
		iVar0 = Global_23831.f_9087;
		iVar1 = Global_23831.f_9088;
		iVar2 = Global_23831.f_9089;
		iVar3 = Global_23831.f_9090;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23828 + 0.0046875f), ((Global_23828 + Global_23830) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_293(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1AAEA
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

int func_294(bool bParam0, bool bParam1)//Position - 0x1AB19
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_296(8, -1) && func_295() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79650) || Global_23831.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_295()//Position - 0x1ABB6
{
	return Global_1575011;
}

var func_296(int iParam0, int iParam1)//Position - 0x1ABC2
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

void func_297(int iParam0, char* sParam1, int iParam2)//Position - 0x1ABFA
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23831.f_5655), Global_23831.f_5326);
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

void func_298(char* sParam0)//Position - 0x1ACA9
{
	if (Global_23831.f_5322 >= 3 || Global_23831.f_5319 >= 4)
	{
		return;
	}
	Global_23831.f_5253[Global_23831.f_5319] = 1;
	Global_23831.f_5319++;
	StringCopy(&(Global_23831.f_5270[Global_23831.f_5322 /*16*/]), sParam0, 64);
	Global_23831.f_5322++;
}

void func_299(char* sParam0, int iParam1, int iParam2)//Position - 0x1AD0A
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_5241), sParam0, 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = iParam1;
	Global_23831.f_5324 = MISC::GET_GAME_TIMER();
	Global_23831.f_5325 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
}

void func_300(int iParam0, bool bParam1, int iParam2)//Position - 0x1AD6F
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_6342 = iParam0;
	Global_23831.f_6477 = iParam2;
	if (Global_23831.f_6342 < Global_23831.f_6341)
	{
		Global_23831.f_6341 = Global_23831.f_6342;
	}
	else if ((Global_23831.f_6332 && Global_23831.f_6342 > Global_23831.f_6343) || (!Global_23831.f_6332 && Global_23831.f_6342 >= (Global_23831.f_6341 + Global_23831.f_5828)))
	{
		iVar0 = Global_23831.f_6341;
		while (iVar0 <= Global_23831.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23831.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23831.f_5828 && Global_23831.f_6341 < 128)
		{
			Global_23831.f_6341++;
			iVar1 = 0;
			iVar0 = Global_23831.f_6341;
			while (iVar0 <= Global_23831.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23831.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23831.f_5241), "", 24);
		StringCopy(&(Global_4541740.f_21), "", 16);
	}
}

void func_301(char* sParam0)//Position - 0x1AEC1
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_1), sParam0, 16);
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_302(int iParam0, char* sParam1, char* sParam2)//Position - 0x1AF0C
{
	Global_23831 = iParam0;
	func_303(29, sParam1, sParam2);
}

void func_303(int iParam0, char* sParam1, char* sParam2)//Position - 0x1AF23
{
	StringCopy(&(Global_23831.f_6623[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23831.f_7680[iParam0 /*16*/]), sParam2, 64);
}

void func_304(bool bParam0, bool bParam1)//Position - 0x1AF47
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23831.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23831.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696723[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_5692[iVar0] = 0;
		Global_23831.f_5830[iVar0] = 0;
		Global_23831.f_5959[iVar0] = 0;
		Global_23831.f_6482[iVar0] = 0f;
		Global_23831.f_6088[iVar0] = 0;
		Global_23831.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23831.f_5659[iVar0] = 0;
		Global_23831.f_5671[iVar0] = 0f;
		Global_23831.f_5665[iVar0] = -1f;
		Global_23831.f_5678[iVar0] = 0;
		Global_23831.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23831.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23831.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23831.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	Global_23831 = 0;
	Global_23831.f_5821 = 0;
	Global_23831.f_5822 = 0;
	Global_23831.f_5823 = 0;
	Global_23831.f_5825 = 0;
	Global_23831.f_5826 = 0;
	Global_23831.f_5827 = 0;
	Global_23831.f_5824 = 0;
	Global_23831.f_6477 = 0;
	Global_23831.f_6617 = 0;
	Global_23831.f_6342 = 0;
	Global_23831.f_6341 = 0;
	Global_23831.f_6343 = 0;
	StringCopy(&(Global_23831.f_5241), "", 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = 0;
	Global_23831.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_5325 = 0;
	StringCopy(&(Global_4541740.f_21), "", 16);
	Global_4541740.f_61 = 0;
	Global_4541740.f_62 = 0;
	Global_4541740.f_63 = 0;
	Global_4541740.f_64 = 0;
	Global_4541740.f_65 = 0;
	Global_4541740.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4541740.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4541740.f_67 = 0;
	StringCopy(&(Global_23831.f_1), "", 16);
	Global_23831.f_5677 = 0f;
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_6347 = 0;
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = 0;
	Global_23831.f_6345 = 0;
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	Global_23831.f_5828 = 10;
	Global_23831.f_5829 = 0;
	Global_23831.f_6479 = 0f;
	Global_23831.f_6480 = 0f;
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	Global_23831.f_6333 = 0f;
	Global_23831.f_6334 = 0;
	Global_23831.f_6336 = 0;
	Global_23831.f_6335 = 0;
	Global_23831.f_6337 = 0;
	Global_23831.f_6338 = 0;
	Global_23831.f_6339 = 0;
	Global_23831.f_6340 = 0;
	Global_23831.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23831.f_6611[iVar0] = -1;
		Global_23831.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23831.f_5684 = 0f;
	Global_23831.f_5655 = 0;
	Global_23831.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23831.f_6618)
	{
		Global_23831.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_9091 = 0;
	Global_23831.f_9086 = 0;
	Global_23831.f_9096 = 0;
	Global_23831.f_9101 = 0;
	Global_23831.f_9106 = 0;
	Global_23831.f_9108 = 0;
	Global_23831.f_9114 = 0;
	Global_23828 = 0.05f;
	Global_23829 = 0.05f;
	Global_23830 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23830 = (0.225f * (1.7777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23830 = (0.225f * (1.7777778f / fVar2));
	}
	else
	{
		Global_23830 = 0.225f;
	}
}

bool func_305(char* sParam0, int iParam1, bool bParam2)//Position - 0x1B43A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_269(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23831.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23831.f_6238[iVar0 /*4*/]), 9);
		Global_23831.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23831.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_23831.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23831.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23831.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_306(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_306(var uParam0)//Position - 0x1B548
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

void func_307(int iParam0)//Position - 0x1B5EA
{
	Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam0;
	Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 = func_392(iParam0);
}

bool func_308()//Position - 0x1B610
{
	return Global_4537448 == 1;
}

void func_309(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1B61E
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
	if (func_319())
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
		if (!func_211())
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
				else if (bVar14 || ((!func_284(PLAYER::PLAYER_ID(), 0) && !func_318()) && !func_317(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657971[iParam0 /*465*/].f_255 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_314(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_313(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_312();
					func_311();
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
				Global_2657971[iParam0 /*465*/].f_256 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697540)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697540 = 0;
				}
				if (Global_2635563.f_2981)
				{
					Global_2635563.f_2981 = 0;
				}
			}
			else
			{
				if (!func_313(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_310(Global_4718592.f_185586))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575055)
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

bool func_310(int iParam0)//Position - 0x1BAD1
{
	return iParam0 == 17;
}

void func_311()//Position - 0x1BADE
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_312()//Position - 0x1BB2B
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_313(int iParam0)//Position - 0x1BB69
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

void func_314(bool bParam0, int iParam1, int iParam2)//Position - 0x1BB9A
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
				func_316();
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
		if (func_284(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_315(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_315(int iParam0, bool bParam1)//Position - 0x1BC6A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_316()//Position - 0x1BC86
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

int func_317(int iParam0)//Position - 0x1BCDE
{
	if (func_284(iParam0, 0))
	{
		return 1;
	}
	if (func_318())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_318()//Position - 0x1BD1D
{
	return BitTest(Global_2621446, 3);
}

int func_319()//Position - 0x1BD2B
{
	if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_320()//Position - 0x1BD5C
{
	if (!Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 1;
	}
}

void func_321(var uParam0)//Position - 0x1BD7B
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_322(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_322(int iParam0)//Position - 0x1BDD2
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
		if (Global_44799[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_323(int iParam0, bool bParam1)//Position - 0x1BE0D
{
	int iVar0;
	
	iVar0 = func_322(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_276(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/] == 1 && Global_44799[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44799[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44799[iVar0 /*32*/].f_5 = 1;
			Global_44799[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44799[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44799[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_324(int iParam0)//Position - 0x1BEC5
{
	if (!func_136(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 26);
}

void func_325(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1BEEC
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_321(uParam0);
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
		if (!Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/] = 1;
			Global_44799[iVar0 /*32*/].f_1 = Global_45000;
			Global_45000++;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_29 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44799[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44799[iVar0 /*32*/].f_6 = iParam3;
			Global_44799[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44799[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44799[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44799[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[iVar0 /*32*/].f_12 = 0;
				Global_44799[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_326(int iParam0)//Position - 0x1C019
{
	if (func_327(iParam0, 1))
	{
		return Global_1887305[func_235(iParam0) /*610*/].f_10.f_430;
	}
	return -1;
}

int func_327(int iParam0, bool bParam1)//Position - 0x1C041
{
	if (!func_136(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_328(iParam0))
		{
			return 0;
		}
	}
	return func_136(Global_1887305[iParam0 /*610*/].f_10);
}

int func_328(int iParam0)//Position - 0x1C079
{
	if (func_136(iParam0))
	{
		if (func_136(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_329()//Position - 0x1C0AE
{
	if (((((((((func_345("TCP_USED" /* GXT: This seat is currently in use. */) || func_345("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */)) || func_345("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */)) || func_332("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, func_333(1))) || func_345("CAS_MG_SUITE2" /* GXT: A VIP Membership is required to play High Limit. Purchase a Penthouse from www.thediamondcasinoandresort.com to become a VIP member. */)) || func_345("CAS_MG_NOCHIPS3" /* GXT: Chips are required to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */)) || func_345("CAS_MG_LOWCHIPS3" /* GXT: You don't have enough Chips to play Three Card Poker. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */)) || func_345("CAS_MG_NOCHIPS7" /* GXT: Chips are required to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */)) || func_345("CAS_MG_LOWCHIPS7" /* GXT: You don't have enough Chips to play Three Card Poker. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */)) || func_345("TCP_NA" /* GXT: This feature is not available for you. */))
	{
		return 1;
	}
	return 0;
}

void func_330()//Position - 0x1C149
{
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_333(0), false, true, false, -1, 0))
	{
		func_231("MAITRD_M_D0E" /* GXT: You do not have enough money to purchase the Casino Membership. */, -1);
	}
	else if (func_334(PLAYER::PLAYER_ID()))
	{
	}
	else if (BitTest(Global_1943520.f_5, 31))
	{
	}
	else if (Global_4537448 != 0)
	{
	}
	else
	{
		MISC::SET_BIT(&(Global_1943520.f_5), 30);
	}
}

void func_331(char* sParam0, int iParam1)//Position - 0x1C1A3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_332(char* sParam0, int iParam1)//Position - 0x1C1BF
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_333(bool bParam0)//Position - 0x1C1D8
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_334(int iParam0)//Position - 0x1C1EE
{
	if (iParam0 == func_422())
	{
		return 0;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 18);
}

bool func_335()//Position - 0x1C217
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_409.f_1, 18);
}

int func_336()//Position - 0x1C235
{
	return Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10;
}

int func_337(bool bParam0)//Position - 0x1C24A
{
	return func_327(PLAYER::PLAYER_ID(), bParam0);
}

int func_338(int iParam0)//Position - 0x1C25C
{
	if (iParam0 != func_422())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_409 != 0;
	}
	return 0;
}

int func_339()//Position - 0x1C282
{
	if (func_342() <= 0)
	{
		return 0;
	}
	if (func_341() <= 0)
	{
		return 1;
	}
	if (func_340())
	{
		return 2;
	}
	return 3;
}

bool func_340()//Position - 0x1C2AE
{
	return Global_1964440 != 0;
}

int func_341()//Position - 0x1C2BC
{
	return (Global_262145.f_26739 /* Tunable: VC_CASINO_CHIP_MAX_LOSS_DAILY */ + func_111());
}

int func_342()//Position - 0x1C2D0
{
	return (Global_262145.f_26740 /* Tunable: VC_CASINO_CHIP_MAX_WIN_DAILY */ - func_111());
}

bool func_343()//Position - 0x1C2E4
{
	return func_339() != 3;
}

void func_344(char* sParam0)//Position - 0x1C2F2
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_345(char* sParam0)//Position - 0x1C308
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_346(int iParam0, var uParam1)//Position - 0x1C31B
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("GTAO_CASINO_SLOTS");
			break;
		
		case 1:
			iVar0 = joaat("GTAO_CASINO_BLACKJACK");
			break;
		
		case 2:
			iVar0 = joaat("GTAO_CASINO_3CARDPOKER");
			break;
		
		case 5:
			iVar0 = joaat("GTAO_CASINO_INSIDETRACK");
			break;
		
		case 3:
			iVar0 = joaat("GTAO_CASINO_ROULETTE");
			break;
		
		case 4:
			iVar0 = joaat("GTAO_CASINO_LUCKYWHEEL");
			break;
	}
	if (!MONEY::NETWORK_CASINO_CAN_BET(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_347()//Position - 0x1C39D
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_348()//Position - 0x1C3AB
{
	if (Global_4521801.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_349()//Position - 0x1C3C3
{
	if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 != -1)
	{
		Local_1038.f_2 = 0;
		Local_1038.f_3 = 0;
		Local_1038.f_4 = 0;
		Local_1038.f_6 = 0;
		Local_1038.f_22 = 0;
		Local_749[PLAYER::PLAYER_ID() /*9*/] = 0;
		Local_749[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
		Local_749[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
		Local_749[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Local_749[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
		Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	}
}

bool func_350()//Position - 0x1C44A
{
	return Global_2738934.f_6962;
}

int func_351()//Position - 0x1C459
{
	if (((func_352() != -1 && func_352() != 28) && func_352() != 17) && func_352() != 12)
	{
		return 1;
	}
	return 0;
}

int func_352()//Position - 0x1C493
{
	return Global_1057440;
}

bool func_353()//Position - 0x1C49F
{
	return BitTest(Global_2684504.f_2, 11);
}

bool func_354()//Position - 0x1C4B0
{
	return Global_2684504.f_693;
}

int func_355(int iParam0)//Position - 0x1C4BF
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
	iVar0 = func_357(iParam0);
	iVar1 = func_356(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_45036[iVar1 /*5*/].f_3;
}

int func_356(int iParam0)//Position - 0x1C502
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45036[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_357(int iParam0)//Position - 0x1C532
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
		if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
		{
			return Global_45036[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_358()//Position - 0x1C573
{
	int iVar0;
	
	if (func_327(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_336();
		if (func_62(iVar0, 1, 1) && BitTest(Global_1845281[iVar0 /*883*/].f_268.f_409.f_3, 6))
		{
			return 1;
		}
		if ((func_361(PLAYER::PLAYER_ID(), 0) && func_359(PLAYER::PLAYER_ID())) || func_418(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_359(int iParam0)//Position - 0x1C5E0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_360(iParam0, 9);
	}
	return 0;
}

var func_360(int iParam0, int iParam1)//Position - 0x1C5FE
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_361(int iParam0, int iParam1)//Position - 0x1C616
{
	if (func_136(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_362()//Position - 0x1C65A
{
	if (func_428(PLAYER::PLAYER_ID()) && func_423() != func_422())
	{
		if ((BitTest(Global_2657971[func_423() /*465*/].f_322.f_4, 0) || BitTest(Global_1943520.f_6, 10)) || Global_2657971[func_423() /*465*/].f_456 != Global_1964425)
		{
			return 0;
		}
	}
	return 1;
}

bool func_363(int iParam0, struct<3> Param1, float fParam4)//Position - 0x1C6BD
{
	return func_364(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam4);
}

bool func_364(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)//Position - 0x1C6DC
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(0f, 0f, 0f, fParam3, 0f, 1f, 0f) };
	fVar3 = func_365(func_366(Var0), func_366(Param4 - Param0));
	return MISC::ACOS(fVar3) <= fParam7;
}

float func_365(struct<3> Param0, struct<3> Param3)//Position - 0x1C718
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_366(struct<3> Param0)//Position - 0x1C739
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

Vector3 func_367(int iParam0)//Position - 0x1C778
{
	if (Local_1038.f_26 == 1)
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
				return 1142.7981f, 263.5501f, -51.7869f;
			
			case 1:
				return 1142.82f, 264.2595f, -51.8004f;
			
			case 2:
				return 1143.3395f, 264.7519f, -51.8289f;
			
			case 3:
				return 1144.0516f, 264.7396f, -51.7913f;
			
			case 4:
				return 1146.8492f, 261.9344f, -51.8167f;
			
			case 5:
				return 1146.8649f, 261.2238f, -51.8003f;
			
			case 6:
				return 1146.3254f, 260.7546f, -51.812f;
			
			case 7:
				return 1145.6301f, 260.7765f, -51.7979f;
			
			case 8:
				return 1134.4108f, 266.1568f, -50.9898f;
			
			case 9:
				return 1133.7075f, 266.1863f, -50.9883f;
			
			case 10:
				return 1133.2422f, 266.7186f, -50.9969f;
			
			case 11:
				return 1133.261f, 267.4263f, -50.9812f;
			
			case 12:
				return 1149.4203f, 251.1891f, -50.9655f;
			
			case 13:
				return 1148.7267f, 251.1957f, -50.9855f;
			
			case 14:
				return 1148.2361f, 251.7239f, -51.0083f;
			
			case 15:
				return 1148.2625f, 252.4149f, -51.0019f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_368(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x1C97D
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

Vector3 func_369(int iParam0)//Position - 0x1C99B
{
	int iVar0;
	
	if (Local_1038.f_26 == 1)
	{
		if (func_423() != func_422())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_392(iParam0)), 1f, func_241(Global_2657971[func_423() /*465*/].f_456), false, false, false);
		}
	}
	else if (func_392(iParam0) == 0 || func_392(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_392(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_392(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_370(int iParam0)//Position - 0x1CBDC
{
	return Global_101585.f_392 == iParam0;
}

void func_371(int iParam0)//Position - 0x1CBEE
{
	Local_1038.f_798 = iParam0;
}

void func_372(int iParam0)//Position - 0x1CBFE
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_236(&(Local_749[iParam0 /*9*/]), 0);
	Local_749[iParam0 /*9*/].f_7.f_1 = -1;
}

int func_373()//Position - 0x1CC33
{
	int iVar0;
	
	if (Local_1038.f_26 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_34))
		{
			if (func_423() != func_422())
			{
				iVar0 = func_241(Global_2657971[func_423() /*465*/].f_456);
				STREAMING::REQUEST_MODEL(iVar0);
				if (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					return 0;
				}
				Local_1038.f_34 = OBJECT::CREATE_OBJECT(iVar0, func_76(0), false, false, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_34, func_76(0), false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_1038.f_34, func_75(0));
				OBJECT::SET_OBJECT_TINT_INDEX(Local_1038.f_34, func_374(func_423()));
				ENTITY::FREEZE_ENTITY_POSITION(Local_1038.f_34, true);
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

int func_374(int iParam0)//Position - 0x1CCE6
{
	if (func_377(iParam0))
	{
		return 1;
	}
	else if (func_376(iParam0))
	{
		return 2;
	}
	else if (func_375(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_375(int iParam0)//Position - 0x1CD1C
{
	if (iParam0 != func_422())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 21);
	}
	return 0;
}

int func_376(int iParam0)//Position - 0x1CD45
{
	if (iParam0 != func_422())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 20);
	}
	return 0;
}

int func_377(int iParam0)//Position - 0x1CD6E
{
	if (iParam0 != func_422())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 19);
	}
	return 0;
}

void func_378(var uParam0, bool bParam1, bool bParam2)//Position - 0x1CD97
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

int func_379()//Position - 0x1CDD4
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_380(var uParam0)//Position - 0x1CDEE
{
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			if ((func_383(PLAYER::PLAYER_ID(), 1) || func_383(PLAYER::PLAYER_ID(), 2)) || func_382())
			{
				func_236(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_383(PLAYER::PLAYER_ID(), 1) || func_383(PLAYER::PLAYER_ID(), 2)) || func_382())
			{
				func_236(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_381())
			{
				func_236(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_381()//Position - 0x1CEAE
{
	if ((((func_383(PLAYER::PLAYER_ID(), 4) || func_383(PLAYER::PLAYER_ID(), 5)) || func_383(PLAYER::PLAYER_ID(), 6)) || func_383(PLAYER::PLAYER_ID(), 7)) || func_382())
	{
		return 1;
	}
	return 0;
}

int func_382()//Position - 0x1CEFE
{
	if (func_71(&(Local_1038.f_794), 3500, 0))
	{
		func_69(&(Local_1038.f_794));
		return 1;
	}
	return 0;
}

int func_383(int iParam0, int iParam1)//Position - 0x1CF26
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
	return BitTest(Local_116.f_600[iParam0], iVar0);
}

void func_384(int iParam0, int iParam1)//Position - 0x1CF6A
{
	Global_23692.f_9 = iParam0;
	Global_23692.f_10 = iParam1;
}

void func_385(bool bParam0)//Position - 0x1CF80
{
	if (bParam0)
	{
		func_386(1);
		func_272(1);
	}
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
		PAD::ENABLE_ALL_CONTROL_ACTIONS(1 /*CAMERA_CONTROL*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
	}
}

void func_386(bool bParam0)//Position - 0x1CFF8
{
	if (bParam0)
	{
		if (func_353())
		{
			Global_2684504.f_41 = 1;
		}
	}
	else
	{
		Global_2684504.f_41 = 0;
	}
}

void func_387(bool bParam0)//Position - 0x1D01D
{
	char* sVar0;
	
	if (Local_1038.f_798 > 2 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
	{
		if (((((!func_391() && !func_390()) && !func_389()) && !func_388()) && !func_86(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_309(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_266();
	}
	if (Local_1038.f_798 > 2)
	{
		func_266();
	}
	if (BitTest(Local_1038.f_20, 0) || BitTest(Local_1038.f_20, 3))
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_392(Local_1038.f_18) == 2 || func_392(Local_1038.f_18) == 3) || func_428(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		func_267(1, -1);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
		iLocal_1942 = 1;
		Local_1038.f_20 = 0;
	}
	if (CAM::DOES_CAM_EXIST(Local_1038.f_13))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(Local_1038.f_13, false);
		bLocal_1943 = false;
	}
	if (Local_1038.f_31 != -1)
	{
		func_321(&(Local_1038.f_31));
		Local_1038.f_31 = -1;
	}
	if (bParam0)
	{
		if (BitTest(Local_1038.f_22, 4) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_idle", 3))
		{
			Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), func_240(Local_749[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_749[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
			Local_1038.f_7 = 1;
		}
		else
		{
			Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_369(Local_1038.f_18), func_240(Local_1038.f_18), 2, false, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_239(), func_93(Local_1038.f_18), 2f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
		}
	}
	Local_1038.f_15 = 0;
	Local_1038.f_23 = 0;
	Local_1038.f_22 = 0;
	Local_1038.f_29 = 0;
	Local_749[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Local_1038.f_1 = 0;
	Local_1038.f_2 = 0;
	Local_1038.f_3 = 0;
	Local_1038.f_4 = 0;
	Local_1038.f_6 = 0;
	Local_1038.f_14 = 0;
	if (!bParam0)
	{
		func_349();
	}
	Local_1924.f_4 = func_410();
	Local_1924.f_5 = func_214(&uLocal_1899, 0, 0);
	if (Local_1038.f_798 > 2)
	{
		if (Global_262145.f_26390 /* Tunable: ENABLE_THREE_CARD_POKER_LIGHT */)
		{
			STATS::PLAYSTATS_CASINO_THREE_CARD_POKER_LIGHT(&Local_1924);
		}
	}
	if (!bParam0)
	{
		MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4), 3);
	}
	if (bParam0 || Local_1038.f_798 > 2)
	{
		func_259();
	}
	func_371(10);
	func_168(0);
}

int func_388()//Position - 0x1D3D7
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_389()//Position - 0x1D3F1
{
	return Global_1575083;
}

int func_390()//Position - 0x1D3FD
{
	if (func_212() == 3 || func_212() == 2)
	{
		return 1;
	}
	return 0;
}

int func_391()//Position - 0x1D41F
{
	if (func_212() == 1 || func_212() == 4)
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)//Position - 0x1D441
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

void func_393()//Position - 0x1D4C1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(Local_116.f_50[iVar0]);
			if (func_395(iVar1))
			{
				if (func_394(iVar0))
				{
					AUDIO::BLOCK_ALL_SPEECH_FROM_PED(iVar1, false, true);
				}
				else
				{
					AUDIO::BLOCK_ALL_SPEECH_FROM_PED(iVar1, true, false);
				}
			}
		}
		iVar0++;
	}
}

int func_394(int iParam0)//Position - 0x1D525
{
	if (BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4, 5) || BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4, 2))
	{
		return 0;
	}
	if (BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_4, 3))
	{
		if (Local_749[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_395(int iParam0)//Position - 0x1D588
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

void func_396()//Position - 0x1D5A9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		if (Global_2708678 != iVar0 && (Global_2708678 != -1 || func_428(PLAYER::PLAYER_ID())))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_35[iVar0]))
			{
				func_399(iVar0);
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0])))
			{
				if (!iLocal_1954[iVar0])
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_45(), func_44(iVar0), 3))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), joaat("pick_up_deck")))
						{
							iLocal_1959[iVar0] = 1;
						}
					}
					else
					{
						iLocal_1959[iVar0] = 0;
					}
					if (((iLocal_1959[iVar0] || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_45(), func_43(iVar0), 3)) || Local_116.f_576[iVar0] == 6) || Local_116.f_576[iVar0] == 7)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_1038.f_35[iVar0]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_1038.f_35[iVar0], false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1038.f_35[iVar0], NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
						}
						iLocal_1954[iVar0] = 1;
					}
				}
				else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_45(), func_31(iVar0), 3) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), joaat("put_down_deck"))) || ((Local_116.f_576[iVar0] < 5 && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_45(), func_44(iVar0), 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_45(), func_43(iVar0), 3)))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_1038.f_35[iVar0]))
					{
						ENTITY::DETACH_ENTITY(Local_1038.f_35[iVar0], true, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_35[iVar0], func_398(iVar0), false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_1038.f_35[iVar0], func_397(iVar0), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_1038.f_35[iVar0], true);
					}
					iLocal_1954[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_397(int iParam0)//Position - 0x1D819
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

Vector3 func_398(int iParam0)//Position - 0x1D849
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

void func_399(int iParam0)//Position - 0x1D879
{
	int iVar0;
	
	if (Local_1038.f_5)
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
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_35[iParam0]))
	{
		Local_1038.f_35[iParam0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, func_398(iParam0), false, false, true, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_35[iParam0], func_398(iParam0), false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_1038.f_35[iParam0], func_397(iParam0), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_1038.f_35[iParam0], true);
		STREAMING::REMOVE_ANIM_DICT(func_45());
	}
}

void func_400()//Position - 0x1D935
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	
	if (((func_370(joaat("rm_GamingFloor_02")) || func_370(joaat("rm_GamingFloor_03"))) || func_428(PLAYER::PLAYER_ID())) && !func_409())
	{
		iLocal_1941 = 1;
		if (!bLocal_1940)
		{
			bLocal_1940 = (func_415() && func_408());
		}
	}
	else
	{
		if (iLocal_1941)
		{
			func_416();
			func_406();
			iLocal_1941 = 0;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		if (iVar0 != iLocal_1944 && iVar0 != Local_749[PLAYER::PLAYER_ID() /*9*/].f_2)
		{
		}
		else
		{
			bVar1 = false;
			if (func_59(iVar0, Local_1038.f_26))
			{
				bVar1 = true;
			}
			Var3 = { 0f, 0f, func_75(iVar0) };
			iVar6 = 0;
			while (iVar6 < 4)
			{
				iVar7 = Local_116.f_117[(iVar0 * 4 + iVar6)];
				if (iVar7 < 0 || ((!func_370(joaat("rm_GamingFloor_02")) && !func_370(joaat("rm_GamingFloor_03"))) && !func_428(PLAYER::PLAYER_ID())))
				{
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_405(iVar0, iVar6, iVar2)]))
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_405(iVar0, iVar6, iVar2)]));
						}
						iVar2++;
					}
				}
				else
				{
					if (Local_749[iVar7 /*9*/].f_3 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_405(iVar0, iVar6, 0)]))
						{
							if (func_404(Local_749[iVar7 /*9*/].f_3, bVar1) != 0)
							{
								Local_1038.f_40[func_405(iVar0, iVar6, 0)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(Local_749[iVar7 /*9*/].f_3, bVar1), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_403(Local_749[iVar7 /*9*/].f_3, 0, iVar6, bVar1, 0)), false, false, true, 0);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_40[func_405(iVar0, iVar6, 0)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_403(Local_749[iVar7 /*9*/].f_3, 0, iVar6, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_1038.f_40[func_405(iVar0, iVar6, 0)], Var3 + func_402(Local_749[iVar7 /*9*/].f_4, 0, iVar6, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_401(Local_749[iVar7 /*9*/].f_3)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_401(Local_749[iVar7 /*9*/].f_3), Local_1038.f_40[func_405(iVar0, iVar6, 0)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 0)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_405(iVar0, iVar6, 0)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_405(iVar0, iVar6, 0)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 0)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 0)], SYSTEM::FLOOR(func_225(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 0)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_405(iVar0, iVar6, 0)]));
						}
					}
					if (Local_749[iVar7 /*9*/].f_5 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_405(iVar0, iVar6, 1)]))
						{
							if (func_404(Local_749[iVar7 /*9*/].f_5, bVar1) != 0)
							{
								Local_1038.f_40[func_405(iVar0, iVar6, 1)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(Local_749[iVar7 /*9*/].f_5, bVar1), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_403(Local_749[iVar7 /*9*/].f_5, 1, iVar6, bVar1, 0)), false, false, true, 0);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_40[func_405(iVar0, iVar6, 1)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_403(Local_749[iVar7 /*9*/].f_5, 1, iVar6, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_1038.f_40[func_405(iVar0, iVar6, 1)], Var3 + func_402(Local_749[iVar7 /*9*/].f_4, 1, iVar6, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_401(Local_749[iVar7 /*9*/].f_5)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_401(Local_749[iVar7 /*9*/].f_5), Local_1038.f_40[func_405(iVar0, iVar6, 1)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 1)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_405(iVar0, iVar6, 1)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_405(iVar0, iVar6, 1)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 1)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 1)], SYSTEM::FLOOR(func_225(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 1)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_405(iVar0, iVar6, 1)]));
						}
					}
					if (Local_749[iVar7 /*9*/].f_4 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_405(iVar0, iVar6, 2)]))
						{
							if (func_404(Local_749[iVar7 /*9*/].f_4, bVar1) != 0)
							{
								Local_1038.f_40[func_405(iVar0, iVar6, 2)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_404(Local_749[iVar7 /*9*/].f_4, bVar1), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_403(Local_749[iVar7 /*9*/].f_4, 2, iVar6, bVar1, 1)), false, false, true, 0);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_40[func_405(iVar0, iVar6, 2)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_403(Local_749[iVar7 /*9*/].f_4, 2, iVar6, bVar1, 1)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_1038.f_40[func_405(iVar0, iVar6, 2)], Var3 + func_402(Local_749[iVar7 /*9*/].f_4, 2, iVar6, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_401(Local_749[iVar7 /*9*/].f_4)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_401(Local_749[iVar7 /*9*/].f_4), Local_1038.f_40[func_405(iVar0, iVar6, 2)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 2)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_405(iVar0, iVar6, 2)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_405(iVar0, iVar6, 2)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 2)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 2)], SYSTEM::FLOOR(func_225(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_405(iVar0, iVar6, 2)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_405(iVar0, iVar6, 2)]));
						}
					}
				}
				iVar6++;
			}
			if (!Local_116.f_5[iVar0])
			{
				Local_1038.f_8[iVar0] = 1;
			}
			else
			{
				Local_1038.f_8[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iLocal_1944++;
	if (iLocal_1944 >= Local_1038.f_26)
	{
		iLocal_1944 = 0;
	}
}

char* func_401(int iParam0)//Position - 0x1E04E
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

Vector3 func_402(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1E269
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

Vector3 func_403(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1E5DB
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

int func_404(int iParam0, bool bParam1)//Position - 0x1EFD3
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

int func_405(int iParam0, int iParam1, int iParam2)//Position - 0x1F453
{
	return ((iParam0 * 3 * 4 + iParam1 * 3) + iParam2);
}

void func_406()//Position - 0x1F469
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_407(iVar0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		iVar0++;
	}
}

int func_407(int iParam0)//Position - 0x1F492
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

int func_408()//Position - 0x1F59E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_407(iVar0);
		STREAMING::REQUEST_MODEL(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_409()//Position - 0x1F5D6
{
	return BitTest(Global_1943520.f_6, 12);
}

int func_410()//Position - 0x1F5E7
{
	return func_411(8251, -1);
}

int func_411(int iParam0, int iParam1)//Position - 0x1F5F7
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_412(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_412(int iParam0, var uParam1)//Position - 0x1F626
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_413(uParam1));
}

int func_413(var uParam0)//Position - 0x1F63B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_138();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

void func_414()//Position - 0x1F66F
{
	if (Local_1038.f_26 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1951))
		{
			if (func_423() != func_422())
			{
				iLocal_1951 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(0), 1f, func_241(Global_2657971[func_423() /*465*/].f_456), false, false, false);
			}
		}
		else if (func_423() != func_422() && CAM::IS_SCREEN_FADED_OUT())
		{
			if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_1951) != func_374(func_423()))
			{
				OBJECT::SET_OBJECT_TINT_INDEX(iLocal_1951, func_374(func_423()));
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1952))
		{
			iLocal_1952 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1133.74f, 266.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
		}
		else if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_1952) != 3)
		{
			OBJECT::SET_OBJECT_TINT_INDEX(iLocal_1952, 3);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1953))
		{
			iLocal_1953 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1148.74f, 251.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
		}
		else if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_1953) != 3)
		{
			OBJECT::SET_OBJECT_TINT_INDEX(iLocal_1953, 3);
		}
	}
}

int func_415()//Position - 0x1F774
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_1038.f_5);
		STREAMING::REQUEST_MODEL(iVar2);
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_416()//Position - 0x1F7B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_1038.f_5);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		iVar0++;
	}
}

int func_417()//Position - 0x1F7EB
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	return 0;
}

int func_418(int iParam0)//Position - 0x1F808
{
	if (func_419(iParam0) != func_422())
	{
		return func_419(iParam0) == func_235(iParam0);
	}
	return 0;
}

int func_419(int iParam0)//Position - 0x1F82E
{
	return Global_1887305[iParam0 /*610*/].f_10.f_35;
}

int func_420()//Position - 0x1F843
{
	return func_421(PLAYER::PLAYER_ID());
}

int func_421(int iParam0)//Position - 0x1F853
{
	return MISC::GET_BITS_IN_RANGE(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

int func_422()//Position - 0x1F870
{
	return -1;
}

int func_423()//Position - 0x1F879
{
	return func_424(PLAYER::PLAYER_ID());
}

int func_424(int iParam0)//Position - 0x1F889
{
	int iVar0;
	
	if (iParam0 == func_422())
	{
		return iParam0;
	}
	if (func_426(iParam0) != -1)
	{
		iVar0 = func_425(func_426(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_327(iParam0, 0))
			{
				return func_235(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_422();
		}
		return Global_2657971[iParam0 /*465*/].f_322.f_11;
	}
	return func_422();
}

int func_425(int iParam0)//Position - 0x1F918
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
	}
	return -1;
}

int func_426(int iParam0)//Position - 0x1FE18
{
	if (iParam0 != func_422())
	{
		if (func_62(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && iParam0 == PLAYER::PLAYER_ID()) && func_62(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

int func_427(int iParam0)//Position - 0x1FE87
{
	if (iParam0 != func_422() && func_62(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 4);
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x1FEB8
{
	if (iParam0 != func_422())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_425(Global_2657971[iParam0 /*465*/].f_322.f_8) == 15;
			}
		}
	}
	return 0;
}

int func_429(int iParam0)//Position - 0x1FEFF
{
	if (iParam0 != func_422())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_425(Global_2657971[iParam0 /*465*/].f_322.f_8) == 14;
			}
		}
	}
	return 0;
}

var func_430()//Position - 0x1FF46
{
	return BitTest(Global_1943520.f_3, 2);
}

void func_431()//Position - 0x1FF56
{
	if (Local_1038.f_798 > 2)
	{
		if (Global_262145.f_26384 /* Tunable: ENABLE_THREE_CARD_POKER_HEAVY */)
		{
			STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1901);
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
	func_387(0);
	func_416();
	func_406();
	func_434();
	func_433();
	if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_34))
	{
		OBJECT::DELETE_OBJECT(&(Local_1038.f_34));
	}
	if (Local_1038.f_798 > 0)
	{
		STREAMING::REMOVE_ANIM_DICT(func_45());
		STREAMING::REMOVE_ANIM_DICT(func_78());
		STREAMING::REMOVE_ANIM_DICT(func_92());
		STREAMING::REMOVE_ANIM_DICT(func_239());
	}
	Global_1964423 = 0;
	func_432();
}

void func_432()//Position - 0x1FFFC
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_433()//Position - 0x2000C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_35[iVar0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_1038.f_35[iVar0]))
			{
				ENTITY::DETACH_ENTITY(Local_1038.f_35[iVar0], true, true);
			}
			OBJECT::DELETE_OBJECT(&(Local_1038.f_35[iVar0]));
		}
		iVar0++;
	}
}

void func_434()//Position - 0x20062
{
	int iVar0;
	int iVar1;
	
	iVar0 = 48;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(Local_1038.f_40[iVar1]));
		}
		iVar1++;
	}
}

int func_435()//Position - 0x2009E
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_442())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_441())
	{
		return 1;
	}
	if (func_440(159))
	{
		if (!func_439())
		{
			return 1;
		}
	}
	if (func_440(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_436() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_436()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_436()//Position - 0x20122
{
	switch (func_438())
	{
		case 0:
			return func_437();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_437()//Position - 0x20155
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_438()//Position - 0x20179
{
	return Global_32948;
}

bool func_439()//Position - 0x20184
{
	return Global_2684504.f_700;
}

int func_440(int iParam0)//Position - 0x20193
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_441()//Position - 0x201AA
{
	return Global_2696172;
}

bool func_442()//Position - 0x201B6
{
	return Global_2684504.f_695;
}

void func_443()//Position - 0x201C5
{
	int iVar0;
	
	if (Global_1964416)
	{
		Global_1964416 = 0;
	}
	if (func_428(PLAYER::PLAYER_ID()) && func_423() != func_422())
	{
		if (BitTest(Global_2657971[func_423() /*465*/].f_322.f_4, 4))
		{
			Local_1038.f_5 = 1;
		}
		Global_1964425 = Global_2657971[func_423() /*465*/].f_456;
	}
	while (!(Global_2708678 != -1 || func_428(PLAYER::PLAYER_ID())))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_431();
		}
		if (func_435())
		{
			func_431();
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	if (func_428(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_447();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, iVar0);
	func_445(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_116, 633, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_749, 289, 0);
	if (func_428(PLAYER::PLAYER_ID()))
	{
		while (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(15))
		{
			SYSTEM::WAIT(0);
		}
		Local_1038.f_26 = 1;
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(1);
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(15);
	}
	else
	{
		while (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(45))
		{
			SYSTEM::WAIT(0);
		}
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(3);
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(45);
	}
	if (!func_444())
	{
		func_431();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else
	{
		func_431();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_428(PLAYER::PLAYER_ID()))
		{
			Local_116.f_15[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
		}
		else
		{
			Local_116.f_15[0] = Global_2708696[0];
			Local_116.f_15[1] = Global_2708696[1];
			Local_116.f_15[2] = Global_2708696[2];
			Local_116.f_15[3] = Global_2708696[3];
		}
	}
	Global_1964423 = 1;
}

int func_444()//Position - 0x2035D
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
		if (func_442())
		{
			return 0;
		}
		if (func_440(157))
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

int func_445(int iParam0, int iParam1, bool bParam2)//Position - 0x203B6
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_432();
			}
			else
			{
				return 0;
			}
		}
		if (!func_446(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_432();
					}
					else
					{
						return 0;
					}
				}
				if (func_442())
				{
					if (!bParam2)
					{
						func_432();
					}
					else
					{
						return 0;
					}
				}
				if (func_440(157))
				{
					if (!bParam2)
					{
						func_432();
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
					func_432();
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
				func_432();
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
			func_432();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_446(bool bParam0)//Position - 0x204CC
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

int func_447()//Position - 0x204DD
{
	var uVar0;
	
	uVar0 = Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_9;
	return uVar0;
}

