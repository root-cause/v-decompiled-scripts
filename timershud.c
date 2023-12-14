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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
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
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	bool bVar2;
	
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_65 = 0.952f;
	fLocal_66 = 0.949f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		if (func_252(&uVar0, 5, 0))
		{
			func_44();
		}
		if (Global_1669875.f_1 == 0)
		{
			bVar2 = true;
		}
		func_43();
		func_42();
		func_11();
		if (bVar2)
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("timerbar_lines");
			func_1();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xEA
{
	int iVar0;
	struct<2> Var1;
	
	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_1669875 = 0;
	Global_1669875.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1669875.f_2[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_23[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_44[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_65[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_86[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_107[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_128[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_149[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_170[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_191[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_212[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_233[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_254[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_275[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_296[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_317[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_338[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_359[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_506[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_527[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_548[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_569[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_590[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_611[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_632[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_653[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_674[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_695[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_716[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_737[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_758[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_779[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_800[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_821[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_905[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_1129[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_937[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_969[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_1001[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_1033[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_1065[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_1097[iVar0 /*2*/] = { Var1 };
		Global_1669875.f_926[iVar0] = 0;
		Global_1669875.f_958[iVar0] = 0;
		Global_1669875.f_990[iVar0] = 0;
		Global_1669875.f_1022[iVar0] = 0;
		Global_1669875.f_1054[iVar0] = 0;
		Global_1669875.f_1086[iVar0] = 0;
		Global_1669875.f_1118[iVar0] = 0;
		Global_1669875.f_1150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		Global_1669875.f_7064[iVar0] = 0;
		Global_1669875.f_7080[iVar0] = 0;
		Global_1669875.f_7096[iVar0] = 0;
		Global_1669875.f_7112[iVar0] = 0;
		iVar0++;
	}
	Global_1669875.f_7128 = 0;
	Global_1669875.f_7129 = 0f;
}

void func_2()//Position - 0x4A5
{
	struct<227> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	if (Global_2672740)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1669875.f_5115), &Var0, 227);
	}
	else
	{
		Global_1669875.f_5115 = { Var0 };
	}
}

void func_3()//Position - 0x507
{
	struct<401> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	if (Global_2672740)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1669875.f_4714), &Var0, 401);
	}
	else
	{
		Global_1669875.f_4714 = { Var0 };
	}
}

void func_4()//Position - 0x5D9
{
	struct<629> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_443 = 10;
	Var0.f_454 = 10;
	Var0.f_465 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	Var0.f_508 = 10;
	Var0.f_519 = 10;
	Var0.f_530 = 10;
	Var0.f_541 = 10;
	Var0.f_552 = 10;
	Var0.f_563 = 10;
	Var0.f_574 = 10;
	Var0.f_585 = 10;
	Var0.f_596 = 10;
	Var0.f_607 = 10;
	Var0.f_618 = 10;
	if (Global_2672740)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1669875.f_4085), &Var0, 629);
	}
	else
	{
		Global_1669875.f_4085 = { Var0 };
	}
}

void func_5()//Position - 0x6EB
{
	struct<336> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	if (Global_2672740)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1669875.f_3749), &Var0, 336);
	}
	else
	{
		Global_1669875.f_3749 = { Var0 };
	}
}

void func_6()//Position - 0x796
{
	struct<358> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_347 = 10;
	if (Global_2672740)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1669875.f_3391), &Var0, 358);
	}
	else
	{
		Global_1669875.f_3391 = { Var0 };
	}
}

void func_7()//Position - 0x851
{
	struct<519> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_248 = 10;
	Var0.f_259 = 10;
	Var0.f_420 = 10;
	Var0.f_431 = 10;
	Var0.f_442 = 10;
	Var0.f_453 = 10;
	Var0.f_464 = 10;
	Var0.f_475 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	Var0.f_508 = 10;
	if (Global_2672740)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1669875.f_2872), &Var0, 519);
	}
	else
	{
		Global_1669875.f_2872 = { Var0 };
	}
}

void func_8()//Position - 0x914
{
	struct<719> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_33 = 10;
	Var0.f_44 = 10;
	Var0.f_55 = 10;
	Var0.f_66 = 10;
	Var0.f_77 = 10;
	Var0.f_88 = 10;
	Var0.f_99 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_293 = 10;
	Var0.f_304 = 10;
	Var0.f_315 = 10;
	Var0.f_326 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	Var0.f_401 = 10;
	Var0.f_412 = 10;
	Var0.f_423 = 10;
	Var0.f_434 = 10;
	Var0.f_445 = 10;
	Var0.f_456 = 10;
	Var0.f_467 = 10;
	Var0.f_478 = 10;
	Var0.f_489 = 10;
	Var0.f_500 = 10;
	Var0.f_511 = 10;
	Var0.f_522 = 10;
	Var0.f_533 = 10;
	Var0.f_544 = 10;
	Var0.f_555 = 10;
	Var0.f_576 = 10;
	Var0.f_587 = 10;
	Var0.f_598 = 10;
	Var0.f_609 = 10;
	Var0.f_620 = 10;
	Var0.f_631 = 10;
	Var0.f_642 = 10;
	Var0.f_653 = 10;
	Var0.f_664 = 10;
	Var0.f_675 = 10;
	Var0.f_686 = 10;
	Var0.f_697 = 10;
	Var0.f_708 = 10;
	if (Global_2672740)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1669875.f_2153), &Var0, 719);
	}
	else
	{
		Global_1669875.f_2153 = { Var0 };
	}
}

void func_9()//Position - 0xAC6
{
	struct<345> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	if (Global_2672740)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1669875.f_1808), &Var0, 345);
	}
	else
	{
		Global_1669875.f_1808 = { Var0 };
	}
}

void func_10()//Position - 0xB6A
{
	struct<631> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_291 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	Var0.f_345 = 10;
	Var0.f_356 = 10;
	Var0.f_367 = 10;
	Var0.f_378 = 10;
	Var0.f_389 = 10;
	Var0.f_400 = 10;
	Var0.f_411 = 10;
	Var0.f_422 = 10;
	Var0.f_433 = 10;
	Var0.f_444 = 10;
	Var0.f_455 = 10;
	Var0.f_466 = 10;
	Var0.f_477 = 10;
	Var0.f_488 = 10;
	Var0.f_499 = 10;
	Var0.f_510 = 10;
	Var0.f_521 = 10;
	Var0.f_532 = 10;
	Var0.f_543 = 10;
	Var0.f_554 = 10;
	Var0.f_565 = 10;
	Var0.f_576 = 10;
	Var0.f_587 = 10;
	Var0.f_598 = 10;
	Var0.f_609 = 10;
	Var0.f_620 = 10;
	if (Global_2672740)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1669875.f_1177), &Var0, 631);
	}
	else
	{
		Global_1669875.f_1177 = { Var0 };
	}
}

void func_11()//Position - 0xCDD
{
	int iVar0;
	
	func_41();
	Global_1669875 = 0;
	Global_1669875.f_1162 = 0.725f;
	Global_1669875.f_1161 = func_32();
	Global_1669875.f_1 = 0;
	Global_1669875.f_1163 = 0;
	Global_1669875.f_1164 = 0;
	Global_1669875.f_1165 = 0;
	Global_1669875.f_1166 = 0;
	Global_1669875.f_1167 = 0;
	Global_1669875.f_1168 = 0;
	Global_1669875.f_1169 = 0;
	Global_1669875.f_1170 = 0;
	Global_1669875.f_1171 = 0;
	Global_1669875.f_1172 = 0;
	Global_1669875.f_1173 = 0;
	Global_1669875.f_1174 = 0;
	Global_1669875.f_1175 = 0;
	Global_1669875.f_1176 = 0;
	Global_2697830 = 0;
	Global_2695965 = 0;
	Global_2695966 = 0;
	Global_2697805 = 1;
	Global_2698529 = 0;
	if (func_31(3))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(3, iVar0) && func_29(3, iVar0))
			{
				func_28(iVar0);
				func_27(3, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(6))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(6, iVar0) && func_29(6, iVar0))
			{
				func_26(iVar0);
				func_27(6, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(7))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(7, iVar0) && func_29(7, iVar0))
			{
				func_25(iVar0);
				func_27(7, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(4))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(4, iVar0) && func_29(4, iVar0))
			{
				func_24(iVar0);
				func_27(4, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(5))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(5, iVar0) && func_29(5, iVar0))
			{
				func_23(iVar0);
				func_27(5, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(1, iVar0) && func_29(1, iVar0))
			{
				func_22(iVar0);
				func_27(1, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(0))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(0, iVar0) && func_29(0, iVar0))
			{
				func_21(iVar0);
				func_27(0, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(2, iVar0) && func_29(2, iVar0) == 0)
			{
				func_20(iVar0);
				func_27(2, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(8))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(8, iVar0) && func_29(8, iVar0) == 0)
			{
				func_19(iVar0);
				func_27(8, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(9))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(9, iVar0) && func_29(9, iVar0) == 0)
			{
				func_18(iVar0);
				func_27(9, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(10))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(10, iVar0) && func_29(10, iVar0) == 0)
			{
				func_16(iVar0);
				func_27(10, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(11))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(11, iVar0) && func_29(11, iVar0) == 0)
			{
				func_15(iVar0);
				func_27(11, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(12))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(12, iVar0) && func_29(12, iVar0) == 0)
			{
				func_14(iVar0);
				func_27(12, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(13))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(13, iVar0) && func_29(13, iVar0) == 0)
			{
				func_13(iVar0);
				func_27(13, iVar0);
			}
			iVar0++;
		}
	}
	if (func_31(14))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(14, iVar0) && func_29(14, iVar0) == 0)
			{
				func_12(iVar0);
				func_27(14, iVar0);
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)//Position - 0x1163
{
	StringCopy(&(Global_1669875.f_6676[iParam0 /*16*/]), "", 64);
	StringCopy(&(Global_1669875.f_6676.f_161[iParam0 /*16*/]), "", 64);
	Global_1669875.f_6676.f_322[iParam0] = 0;
	Global_1669875.f_6676.f_333[iParam0] = 0;
	Global_1669875.f_6676.f_344[iParam0] = 2;
	Global_1669875.f_6676.f_355[iParam0] = 0;
	Global_1669875.f_6676.f_366[iParam0] = 0;
	Global_1669875.f_6676.f_377[iParam0] = 0;
}

void func_13(int iParam0)//Position - 0x11E7
{
	Global_1669875.f_6445[iParam0] = 0;
	Global_1669875.f_6445.f_11[iParam0] = 0;
	Global_1669875.f_6445.f_22[iParam0] = 0;
	Global_1669875.f_6445.f_33[iParam0] = 0;
	Global_1669875.f_6445.f_44[iParam0] = 0;
	Global_1669875.f_6445.f_55[iParam0] = 0;
	Global_1669875.f_6445.f_66[iParam0] = 0;
	Global_1669875.f_6445.f_77[iParam0] = 0;
	Global_1669875.f_6445.f_88[iParam0] = 0;
	Global_1669875.f_6445.f_99[iParam0] = 0;
	Global_1669875.f_6445.f_110[iParam0] = 0;
	Global_1669875.f_6445.f_121[iParam0] = 0;
	Global_1669875.f_6445.f_132[iParam0] = 0;
	Global_1669875.f_6445.f_143[iParam0] = 2;
	Global_1669875.f_6445.f_154[iParam0] = 0;
	Global_1669875.f_6445.f_165[iParam0] = 0;
	Global_1669875.f_6445.f_176[iParam0] = 0;
	Global_1669875.f_6445.f_187[iParam0] = 0;
	Global_1669875.f_6445.f_198[iParam0] = 0;
	Global_1669875.f_6445.f_209[iParam0] = 0;
	Global_1669875.f_6445.f_220[iParam0] = -1;
}

void func_14(int iParam0)//Position - 0x1313
{
	Global_1669875.f_6043[iParam0] = 0;
	Global_1669875.f_6043.f_11[iParam0] = 0;
	Global_1669875.f_6043.f_22[iParam0] = 0f;
	StringCopy(&(Global_1669875.f_6043.f_33[iParam0 /*6*/]), "", 24);
	Global_1669875.f_6043.f_94[iParam0] = 0;
	Global_1669875.f_6043.f_105[iParam0] = 0;
	Global_1669875.f_6043.f_116[iParam0] = 0;
	Global_1669875.f_6043.f_127[iParam0] = 0;
	Global_1669875.f_6043.f_138[iParam0] = 0;
	Global_1669875.f_6043.f_149[iParam0] = 0;
	Global_1669875.f_6043.f_160[iParam0] = 0;
	Global_1669875.f_6043.f_171[iParam0] = 0;
	Global_1669875.f_6043.f_182[iParam0] = 0;
	Global_1669875.f_6043.f_193[iParam0] = 0;
	Global_1669875.f_6043.f_204[iParam0] = 0;
	Global_1669875.f_6043.f_215[iParam0] = 0;
	Global_1669875.f_6043.f_226[iParam0] = 0;
	Global_1669875.f_6043.f_237[iParam0] = 2;
	Global_1669875.f_6043.f_248[iParam0] = 0;
	Global_1669875.f_6043.f_259[iParam0] = 0;
	Global_1669875.f_6043.f_270[iParam0] = 0;
	Global_1669875.f_6043.f_281[iParam0] = 0;
	Global_1669875.f_6043.f_292[iParam0] = 0;
	Global_1669875.f_6043.f_303[iParam0] = 0;
	Global_1669875.f_6043.f_314[iParam0] = 0;
	Global_1669875.f_6043.f_325[iParam0] = 0;
	Global_1669875.f_6043.f_336[iParam0] = 0;
	Global_1669875.f_6043.f_347[iParam0] = 0;
	Global_1669875.f_6043.f_358[iParam0] = 0;
	Global_1669875.f_6043.f_369[iParam0] = 0;
	Global_1669875.f_6043.f_380[iParam0] = 0;
	Global_1669875.f_6043.f_391[iParam0] = 0;
}

void func_15(int iParam0)//Position - 0x14EA
{
	Global_1669875.f_5878[iParam0] = 0;
	Global_1669875.f_5878.f_11[iParam0] = 0;
	Global_1669875.f_5878.f_22[iParam0] = 0;
	Global_1669875.f_5878.f_33[iParam0] = 0;
	Global_1669875.f_5878.f_44[iParam0] = 0;
	Global_1669875.f_5878.f_55[iParam0] = 0;
	Global_1669875.f_5878.f_66[iParam0] = 0;
	Global_1669875.f_5878.f_77[iParam0] = 0;
	Global_1669875.f_5878.f_88[iParam0] = 0;
	Global_1669875.f_5878.f_99[iParam0] = 2;
	Global_1669875.f_5878.f_110[iParam0] = 0;
	Global_1669875.f_5878.f_121[iParam0] = 0;
	Global_1669875.f_5878.f_132[iParam0] = 0;
	Global_1669875.f_5878.f_143[iParam0] = 0;
	Global_1669875.f_5878.f_154[iParam0] = -1;
}

void func_16(int iParam0)//Position - 0x15C2
{
	Global_1669875.f_5375.f_6[iParam0] = 0;
	Global_1669875.f_5375.f_17[iParam0] = 0;
	StringCopy(&(Global_1669875.f_5375.f_28[iParam0 /*16*/]), "", 64);
	Global_1669875.f_5375.f_189[iParam0] = -1;
	Global_1669875.f_5375.f_200[iParam0] = 1;
	Global_1669875.f_5375.f_211[iParam0] = -1;
	Global_1669875.f_5375.f_222[iParam0] = 2;
	Global_1669875.f_5375.f_233[iParam0] = 0;
	Global_1669875.f_5375.f_244[iParam0] = 0;
	func_17(&(Global_1669875.f_5375.f_255[iParam0 /*2*/]));
	Global_1669875.f_5375.f_276[iParam0] = -1;
	Global_1669875.f_5375.f_470[iParam0] = 0;
}

void func_17(var uParam0)//Position - 0x167B
{
	uParam0->f_1 = 0;
}

void func_18(int iParam0)//Position - 0x1688
{
	Global_1669875.f_5342[iParam0] = 0;
	Global_1669875.f_5342.f_11[iParam0] = 1;
	Global_1669875.f_5342.f_22[iParam0] = 2;
}

void func_19(int iParam0)//Position - 0x16B8
{
	Global_1669875.f_5115[iParam0] = 0f;
	StringCopy(&(Global_1669875.f_5115.f_11[iParam0 /*16*/]), "", 64);
	Global_1669875.f_5115.f_172[iParam0] = 0;
	Global_1669875.f_5115[iParam0] = 0f;
	Global_1669875.f_5115.f_183[iParam0] = 0;
	Global_1669875.f_5115.f_194[iParam0] = 0;
	Global_1669875.f_5115.f_205[iParam0] = 0;
	Global_1669875.f_5115.f_216[iParam0] = 2;
}

void func_20(int iParam0)//Position - 0x1730
{
	Global_1669875.f_2153[iParam0] = 0;
	Global_1669875.f_2153.f_11[iParam0] = 0;
	Global_1669875.f_2153.f_22[iParam0] = 0;
	Global_1669875.f_2153.f_33[iParam0] = 0;
	Global_1669875.f_2153.f_44[iParam0] = 0;
	Global_1669875.f_2153.f_55[iParam0] = 0;
	Global_1669875.f_2153.f_66[iParam0] = 0;
	Global_1669875.f_2153.f_77[iParam0] = 0;
	Global_1669875.f_2153.f_88[iParam0] = 0;
	StringCopy(&(Global_1669875.f_2153.f_99[iParam0 /*16*/]), "", 64);
	Global_1669875.f_2153.f_260[iParam0] = -1;
	Global_1669875.f_2153.f_271[iParam0] = -1;
	Global_1669875.f_2153.f_282[iParam0] = 18;
	Global_1669875.f_2153.f_293[iParam0] = 6;
	Global_1669875.f_2153.f_304[iParam0] = -1;
	Global_1669875.f_2153.f_315[iParam0] = 2;
	Global_1669875.f_2153.f_326[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1669875.f_2153.f_357[iParam0] = 0;
	Global_1669875.f_2153.f_368[iParam0] = 1;
	Global_1669875.f_2153.f_379[iParam0] = 1;
	Global_1669875.f_2153.f_390[iParam0] = 1;
	Global_1669875.f_2153.f_401[iParam0] = 1;
	Global_1669875.f_2153.f_412[iParam0] = 1;
	Global_1669875.f_2153.f_423[iParam0] = 1;
	Global_1669875.f_2153.f_434[iParam0] = 1;
	Global_1669875.f_2153.f_445[iParam0] = 1;
	Global_1669875.f_2153.f_456[iParam0] = 1;
	Global_1669875.f_2153.f_467[iParam0] = 1;
	Global_1669875.f_2153.f_478[iParam0] = 1;
	Global_1669875.f_2153.f_489[iParam0] = 1;
	Global_1669875.f_2153.f_500[iParam0] = 1;
	Global_1669875.f_2153.f_511[iParam0] = 1;
	Global_1669875.f_2153.f_522[iParam0] = 1;
	Global_1669875.f_2153.f_533[iParam0] = 1;
	func_17(&(Global_1669875.f_2153.f_555[iParam0 /*2*/]));
	Global_1669875.f_2153.f_576[iParam0] = -1;
	Global_1669875.f_2153.f_609[iParam0] = 0;
}

void func_21(int iParam0)//Position - 0x196B
{
	Global_1669875.f_1177[iParam0] = 0;
	Global_1669875.f_1177.f_11[iParam0] = 0;
	StringCopy(&(Global_1669875.f_1177.f_22[iParam0 /*16*/]), "", 64);
	Global_1669875.f_1177.f_183[iParam0] = -1;
	Global_1669875.f_1177.f_194[iParam0] = 1;
	Global_1669875.f_1177.f_205[iParam0] = -1;
	Global_1669875.f_1177.f_227[iParam0] = 2;
	Global_1669875.f_1177.f_238[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1669875.f_1177.f_269[iParam0] = 0;
	Global_1669875.f_1177.f_280[iParam0] = 0;
	func_17(&(Global_1669875.f_1177.f_291[iParam0 /*2*/]));
	Global_1669875.f_1177.f_312[iParam0] = -1;
	Global_1669875.f_1177.f_345[iParam0] = 0;
	Global_1669875.f_1177.f_356[iParam0] = 0;
	Global_1669875.f_1177.f_367[iParam0] = 0;
	Global_1669875.f_1177.f_455[iParam0] = 1;
	Global_1669875.f_1177.f_466[iParam0] = -1;
}

void func_22(int iParam0)//Position - 0x1A7B
{
	Global_1669875.f_1808[iParam0] = 0;
	Global_1669875.f_1808.f_11[iParam0] = 0;
	StringCopy(&(Global_1669875.f_1808.f_22[iParam0 /*16*/]), "", 64);
	Global_1669875.f_1808.f_183[iParam0] = -1;
	Global_1669875.f_1808.f_194[iParam0] = 1;
	Global_1669875.f_1808.f_205[iParam0] = -1;
	Global_1669875.f_1808.f_216[iParam0] = 2;
	Global_1669875.f_1808.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1669875.f_1808.f_258[iParam0] = 0;
	Global_2748970[iParam0] = 0;
	Global_2748981[iParam0] = 0;
	Global_2748992[iParam0] = 0;
	Global_2749003[iParam0] = 0;
	Global_2749014[iParam0] = 0;
	Global_2749025[iParam0] = 0;
	Global_2749036[iParam0] = 0;
	Global_2749047[iParam0] = 0;
	Global_2749058[iParam0] = 0;
	Global_2749069[iParam0] = 0;
	Global_2749080[iParam0] = 0;
	Global_2749091[iParam0] = 0;
	Global_2749102[iParam0] = 0;
	Global_2749113[iParam0] = 0;
	Global_2749124[iParam0] = 0;
	Global_2749135[iParam0] = 0;
	func_17(&(Global_1669875.f_1808.f_280[iParam0 /*2*/]));
	Global_1669875.f_1808.f_301[iParam0] = -1;
}

void func_23(int iParam0)//Position - 0x1BC1
{
	Global_1669875.f_3749[iParam0] = 0;
	StringCopy(&(Global_1669875.f_3749.f_11[iParam0 /*16*/]), "", 64);
	Global_1669875.f_3749.f_172[iParam0] = -1;
	Global_1669875.f_3749.f_183[iParam0] = -1;
	Global_1669875.f_3749.f_194[iParam0] = 1;
	Global_1669875.f_3749.f_205[iParam0] = -1;
	Global_1669875.f_3749.f_216[iParam0] = 2;
	Global_1669875.f_3749.f_227[iParam0] = 0;
	func_17(&(Global_1669875.f_3749.f_238[iParam0 /*2*/]));
	Global_1669875.f_3749.f_259[iParam0] = -1;
	Global_1669875.f_3749.f_314[iParam0] = 0;
	Global_1669875.f_3749.f_325[iParam0] = 0;
}

void func_24(int iParam0)//Position - 0x1C79
{
	Global_1669875.f_3391[iParam0] = -1;
	StringCopy(&(Global_1669875.f_3391.f_11[iParam0 /*16*/]), "", 64);
	Global_1669875.f_3391.f_172[iParam0] = -1;
	Global_1669875.f_3391.f_183[iParam0] = -1;
	Global_1669875.f_3391.f_194[iParam0] = 1;
	Global_1669875.f_3391.f_205[iParam0] = -1;
	Global_1669875.f_3391.f_216[iParam0] = 2;
	Global_1669875.f_3391.f_227[iParam0] = 0;
	func_17(&(Global_1669875.f_3391.f_238[iParam0 /*2*/]));
	Global_1669875.f_3391.f_259[iParam0] = -1;
}

void func_25(int iParam0)//Position - 0x1D13
{
	Global_1669875.f_4714[iParam0] = 0;
	StringCopy(&(Global_1669875.f_4714.f_11[iParam0 /*16*/]), "", 64);
	Global_1669875.f_4714.f_172[iParam0] = -1;
	Global_1669875.f_4714.f_183[iParam0] = -1;
	Global_1669875.f_4714.f_194[iParam0] = 0;
	Global_1669875.f_4714.f_205[iParam0] = 1;
	Global_1669875.f_4714.f_216[iParam0] = 0;
	Global_1669875.f_4714.f_227[iParam0] = -1;
	Global_1669875.f_4714.f_249[iParam0] = 2;
	Global_1669875.f_4714.f_260[iParam0] = 0;
	func_17(&(Global_1669875.f_4714.f_282[iParam0 /*2*/]));
	Global_1669875.f_4714.f_303[iParam0] = -1;
}

void func_26(int iParam0)//Position - 0x1DCB
{
	Global_1669875.f_4085[iParam0] = 0;
	StringCopy(&(Global_1669875.f_4085.f_11[iParam0 /*16*/]), "", 64);
	Global_1669875.f_4085.f_172[iParam0] = -1;
	Global_1669875.f_4085.f_183[iParam0] = 1;
	Global_1669875.f_4085.f_194[iParam0] = -1;
	Global_1669875.f_4085.f_260[iParam0] = 2;
	Global_1669875.f_4085.f_271[iParam0] = 0;
	StringCopy(&(Global_1669875.f_4085.f_282[iParam0 /*16*/]), "", 64);
	Global_1669875.f_4085.f_443[iParam0] = 0;
	Global_1669875.f_4085.f_454[iParam0] = -1f;
	func_17(&(Global_1669875.f_4085.f_465[iParam0 /*2*/]));
	Global_1669875.f_4085.f_486[iParam0] = -1;
	Global_1669875.f_4085.f_519[iParam0] = 0;
}

void func_27(int iParam0, int iParam1)//Position - 0x1E9A
{
	MISC::CLEAR_BIT(&(Global_1669875.f_7096[iParam0]), iParam1);
}

void func_28(int iParam0)//Position - 0x1EB3
{
	Global_1669875.f_2872[iParam0] = 0;
	StringCopy(&(Global_1669875.f_2872.f_11[iParam0 /*16*/]), "", 64);
	Global_1669875.f_2872.f_172[iParam0] = -1;
	Global_1669875.f_2872.f_183[iParam0] = 1;
	Global_1669875.f_2872.f_194[iParam0] = -1;
	Global_1669875.f_2872.f_205[iParam0] = 2;
	Global_1669875.f_2872.f_216[iParam0] = 0;
	func_17(&(Global_1669875.f_2872.f_227[iParam0 /*2*/]));
	Global_1669875.f_2872.f_248[iParam0] = -1;
	Global_1669875.f_2872.f_508[iParam0] = 0;
}

bool func_29(int iParam0, int iParam1)//Position - 0x1F4D
{
	return BitTest(Global_1669875.f_7064[iParam0], iParam1);
}

var func_30(int iParam0, int iParam1)//Position - 0x1F63
{
	return BitTest(Global_1669875.f_7096[iParam0], iParam1);
}

int func_31(int iParam0)//Position - 0x1F79
{
	if (Global_1669875.f_7064[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

float func_32()//Position - 0x1F95
{
	float fVar0;
	
	fVar0 = (0.925f - 0.002f);
	fVar0 = (fVar0 + (-0.036f * IntToFloat(Global_1669875.f_1163)));
	if (Global_1669875.f_1164 == 1)
	{
		fVar0 = (fVar0 + -0.15f);
	}
	else if (Global_1669875.f_1165 == 1)
	{
		fVar0 = (fVar0 + (-0.048f - 0.753f));
	}
	if (Global_1669875.f_1168 == 1)
	{
		fVar0 = (fVar0 + -0.919f);
	}
	if (Global_1669875.f_1169 == 1)
	{
		fVar0 = (fVar0 + -0.184f);
	}
	if (Global_1669875.f_1170 == 1)
	{
		fVar0 = (fVar0 + -0.522f);
	}
	if (Global_1669875.f_1166 == 1 && Global_1669875.f_1167 == 0)
	{
		switch (func_34())
		{
			case 0:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 2:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 1:
				fVar0 = (fVar0 + -0.414f);
				break;
			
			default:
				if (!func_33())
				{
					fVar0 = (fVar0 + -0.405f);
				}
				break;
			}
	}
	return fVar0;
}

int func_33()//Position - 0x20A2
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()//Position - 0x20BF
{
	func_35();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_35()//Position - 0x20D8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_39(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_38(PLAYER::PLAYER_PED_ID());
			if (func_37(iVar0) && (!func_36(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_37(Global_114370.f_2366.f_539.f_4321))
				{
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
				}
				Global_114370.f_2366.f_539.f_4323 = iVar0;
				Global_114370.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != 145)
			{
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114370.f_2366.f_539.f_4321 = 145;
}

bool func_36(int iParam0)//Position - 0x21D5
{
	return Global_43922 == iParam0;
}

bool func_37(int iParam0)//Position - 0x21E3
{
	return iParam0 < 3;
}

int func_38(int iParam0)//Position - 0x21EF
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)//Position - 0x222C
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)//Position - 0x2251
{
	return Global_2139[iParam0 /*29*/];
}

void func_41()//Position - 0x2260
{
	Global_1679407 = Global_1669875;
	Global_1679408 = Global_1669875.f_1163;
}

void func_42()//Position - 0x227B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1669875.f_7064[iVar0] = 0;
		iVar0++;
	}
}

void func_43()//Position - 0x22A2
{
	Global_2697678 = 0;
}

void func_44()//Position - 0x22AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[12];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (HUD::BUSYSPINNER_IS_DISPLAYING())
	{
		if (Global_1669875.f_1163 == 0)
		{
			func_251(1);
		}
	}
	func_247();
	if (func_242())
	{
		if ((MISC::GET_FRAME_COUNT() % 100) == 0)
		{
			if (func_236(PLAYER::PLAYER_ID()))
			{
				func_235();
			}
		}
		if (func_234())
		{
			Global_1668317.f_1185 = 1;
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			iVar16 = 0;
			if (func_29(7, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_4085.f_260[iVar0];
			}
			iVar16 = 1;
			if (func_29(3, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_2872.f_205[iVar0];
			}
			iVar16 = 2;
			if (func_29(4, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_3391.f_216[iVar0];
			}
			iVar16 = 3;
			if (func_29(5, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_3749.f_216[iVar0];
			}
			iVar16 = 4;
			if (func_29(1, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_1808.f_216[iVar0];
			}
			iVar16 = 5;
			if (func_29(0, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_1177.f_227[iVar0];
			}
			iVar16 = 6;
			if (func_29(6, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_4085.f_260[iVar0];
			}
			iVar16 = 7;
			if (func_29(2, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_2153.f_315[iVar0];
			}
			iVar16 = 8;
			if (func_29(8, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_5115.f_216[iVar0];
			}
			iVar16 = 9;
			if (func_29(9, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_5342.f_22[iVar0];
			}
			iVar16 = 10;
			if (func_29(10, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_5375.f_222[iVar0];
			}
			iVar16 = 11;
			if (func_29(11, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_5878.f_99[iVar0];
			}
			iVar16 = 12;
			if (func_29(12, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_6043.f_237[iVar0];
			}
			iVar16 = 13;
			if (func_29(13, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_6445.f_143[iVar0];
			}
			iVar16 = 14;
			if (func_29(14, iVar0))
			{
				Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_6676.f_344[iVar0];
			}
			iVar0++;
		}
		iVar16 = 0;
		if (Global_1668317.f_1185 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar16 = 0;
				if (func_29(7, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_4714.f_249[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_4714.f_249[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_4714.f_249[iVar0] == 2) || Global_1669875.f_4714.f_249[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_4714.f_249[iVar0] == 13) || Global_1669875.f_4714.f_249[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_4714.f_249[iVar0];
						}
					}
				}
				iVar16 = 1;
				if (func_29(3, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_2872.f_205[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_2872.f_205[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_2872.f_205[iVar0] == 2) || Global_1669875.f_2872.f_205[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_2872.f_205[iVar0] == 13) || Global_1669875.f_2872.f_205[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_2872.f_205[iVar0];
						}
					}
				}
				iVar16 = 2;
				if (func_29(4, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_3391.f_216[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_3391.f_216[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_3391.f_216[iVar0] == 2) || Global_1669875.f_3391.f_216[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_3391.f_216[iVar0] == 13) || Global_1669875.f_3391.f_216[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_3391.f_216[iVar0];
						}
					}
				}
				iVar16 = 3;
				if (func_29(5, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_3749.f_216[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_3749.f_216[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_3749.f_216[iVar0] == 2) || Global_1669875.f_3749.f_216[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_3749.f_216[iVar0] == 13) || Global_1669875.f_3749.f_216[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_3749.f_216[iVar0];
						}
					}
				}
				iVar16 = 4;
				if (func_29(1, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_1808.f_216[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_1808.f_216[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_1808.f_216[iVar0] == 2) || Global_1669875.f_1808.f_216[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_1808.f_216[iVar0] == 13) || Global_1669875.f_1808.f_216[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_1808.f_216[iVar0];
						}
					}
				}
				iVar16 = 5;
				if (func_29(0, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_1177.f_227[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_1177.f_227[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_1177.f_227[iVar0] == 2) || Global_1669875.f_1177.f_227[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_1177.f_227[iVar0] == 13) || Global_1669875.f_1177.f_227[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_1177.f_227[iVar0];
						}
					}
				}
				iVar16 = 6;
				if (func_29(6, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_4085.f_260[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_4085.f_260[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_4085.f_260[iVar0] == 2) || Global_1669875.f_4085.f_260[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_4085.f_260[iVar0] == 13) || Global_1669875.f_4085.f_260[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_4085.f_260[iVar0];
						}
					}
				}
				iVar16 = 7;
				if (func_29(2, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_2153.f_315[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_2153.f_315[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_2153.f_315[iVar0] == 2) || Global_1669875.f_2153.f_315[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_2153.f_315[iVar0] == 13) || Global_1669875.f_2153.f_315[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_2153.f_315[iVar0];
						}
					}
				}
				iVar16 = 8;
				if (func_29(8, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_5115.f_216[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_5115.f_216[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_5115.f_216[iVar0] == 2) || Global_1669875.f_5115.f_216[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_5115.f_216[iVar0] == 13) || Global_1669875.f_5115.f_216[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_5115.f_216[iVar0];
						}
					}
				}
				iVar16 = 9;
				if (func_29(9, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_5342.f_22[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_5342.f_22[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_5342.f_22[iVar0] == 2) || Global_1669875.f_5342.f_22[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_5342.f_22[iVar0] == 13) || Global_1669875.f_5342.f_22[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_5342.f_22[iVar0];
						}
					}
				}
				iVar16 = 10;
				if (func_29(10, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_5375.f_222[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_5375.f_222[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_5375.f_222[iVar0] == 2) || Global_1669875.f_5375.f_222[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_5375.f_222[iVar0] == 13) || Global_1669875.f_5375.f_222[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_5375.f_222[iVar0];
						}
					}
				}
				iVar16 = 11;
				if (func_29(11, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_5878.f_99[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_5878.f_99[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_5878.f_99[iVar0] == 2) || Global_1669875.f_5878.f_99[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_5878.f_99[iVar0] == 13) || Global_1669875.f_5878.f_99[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_5878.f_99[iVar0];
						}
					}
				}
				iVar16 = 12;
				if (func_29(12, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_6043.f_237[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_6043.f_237[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_6043.f_237[iVar0] == 2) || Global_1669875.f_6043.f_237[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_6043.f_237[iVar0] == 13) || Global_1669875.f_6043.f_237[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_6043.f_237[iVar0];
						}
					}
				}
				iVar16 = 13;
				if (func_29(13, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_6445.f_143[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_6445.f_143[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_6445.f_143[iVar0] == 2) || Global_1669875.f_6445.f_143[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_6445.f_143[iVar0] == 13) || Global_1669875.f_6445.f_143[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_6445.f_143[iVar0];
						}
					}
				}
				iVar16 = 14;
				if (func_29(14, iVar0))
				{
					Global_1668317.f_1186[iVar16 /*11*/][iVar0] = Global_1669875.f_6676.f_344[iVar0];
					if (Global_1668317.f_1186[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] != Global_1669875.f_6676.f_344[iVar0] && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_6676.f_344[iVar0] == 2) || Global_1669875.f_6676.f_344[iVar0] != 2)) && ((Global_1668317.f_1352[iVar16 /*11*/][iVar0] == 0 && Global_1669875.f_6676.f_344[iVar0] == 13) || Global_1669875.f_6676.f_344[iVar0] != 13))
						{
							Global_1668317.f_1352[iVar16 /*11*/][iVar0] = Global_1669875.f_6676.f_344[iVar0];
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 14)
				{
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] != Global_1668317.f_1352[iVar1 /*11*/][iVar0])
					{
						Global_1668317.f_1352[iVar1 /*11*/][iVar0] = 0;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				iVar3[iVar2] = 0;
				iVar2++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 14)
				{
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 3)
					{
						iVar3[0] = 1;
					}
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 4)
					{
						iVar3[1] = 1;
					}
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 5)
					{
						iVar3[2] = 1;
					}
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 6)
					{
						iVar3[3] = 1;
					}
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 7)
					{
						iVar3[4] = 1;
					}
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 8)
					{
						iVar3[5] = 1;
					}
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 9)
					{
						iVar3[6] = 1;
					}
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 10)
					{
						iVar3[7] = 1;
					}
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 11)
					{
						iVar3[8] = 1;
					}
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 12)
					{
						iVar3[9] = 1;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 14)
				{
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 2)
					{
						iVar2 = 0;
						while (iVar2 <= 11)
						{
							if (iVar3[iVar2] == 0)
							{
								Global_1668317.f_1186[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1668317.f_1352[iVar1 /*11*/][iVar0] = Global_1668317.f_1186[iVar1 /*11*/][iVar0];
								iVar2 = 12;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 14)
				{
					if (Global_1668317.f_1186[iVar1 /*11*/][iVar0] == 13)
					{
						iVar2 = 11;
						while (iVar2 >= 1)
						{
							if (iVar3[iVar2] == 0 && iVar3[(iVar2 - 1)] == 1)
							{
								Global_1668317.f_1186[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1668317.f_1352[iVar1 /*11*/][iVar0] = Global_1668317.f_1186[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							else if (iVar2 == 1 && iVar3[0] == 0)
							{
								Global_1668317.f_1186[iVar1 /*11*/][iVar0] = 3;
								iVar3[0] = 1;
								Global_1668317.f_1352[iVar1 /*11*/][iVar0] = Global_1668317.f_1186[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							iVar2 = (iVar2 + -1);
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			Global_1668317.f_1185 = 0;
		}
		if (Global_1669875.f_1168)
		{
			iVar17 = 84;
		}
		else
		{
			iVar17 = 66;
		}
		if (func_242())
		{
			iVar1 = 0;
			while (iVar1 <= 15)
			{
				if (func_233(0))
				{
					if (func_31(func_231(0)))
					{
						iVar0 = 0;
						while (iVar0 <= 9)
						{
							iVar18 = func_230(func_231(0));
							if (func_229(iVar18))
							{
								if (Global_1668317.f_1352[iVar18 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[iVar18 /*11*/][iVar0] == 1)
								{
									if (func_225(Global_1668317.f_1186[iVar18 /*11*/][iVar0]))
									{
										func_221(1);
										if (Global_1669875.f_1165 == 0)
										{
											GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
											GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
										}
										func_220(func_231(0), iVar0);
										if (Global_1669875.f_1165 == 0)
										{
											GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
										}
										func_221(0);
									}
								}
							}
							iVar0++;
						}
					}
				}
				if (func_233(1))
				{
					if (func_31(func_231(1)))
					{
						iVar0 = 0;
						while (iVar0 <= 9)
						{
							iVar19 = func_230(func_231(1));
							if (func_229(iVar19))
							{
								if (Global_1668317.f_1352[iVar19 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[iVar19 /*11*/][iVar0] == 1)
								{
									if (func_225(Global_1668317.f_1186[iVar19 /*11*/][iVar0]))
									{
										func_221(1);
										if (Global_1669875.f_1165 == 0)
										{
											GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
											GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
										}
										func_220(func_231(1), iVar0);
										if (Global_1669875.f_1165 == 0)
										{
											GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
										}
										func_221(0);
									}
								}
							}
							iVar0++;
						}
					}
				}
				if (func_31(7) && !func_219(7))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[0 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[0 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[0 /*11*/][iVar0]))
							{
								func_221(1);
								if (Global_1669875.f_1165 == 0)
								{
									GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
									GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								}
								func_203(iVar0, Global_1669875.f_4714[iVar0], &(Global_1669875.f_4714.f_11[iVar0 /*16*/]), Global_1669875.f_4714.f_172[iVar0], Global_1669875.f_4714.f_194[iVar0], Global_1669875.f_4714.f_216[iVar0], Global_1669875.f_4714.f_205[iVar0], Global_1669875.f_4714.f_183[iVar0], Global_1669875.f_4714.f_227[iVar0], Global_1669875.f_4714.f_260[iVar0], Global_1669875.f_4714.f_314[iVar0], Global_1669875.f_4714.f_325[iVar0], Global_1669875.f_4714.f_357[iVar0], Global_1669875.f_4714.f_238[iVar0], Global_1669875.f_4714.f_271[iVar0], Global_1669875.f_4714.f_368[iVar0], Global_1669875.f_4714.f_379[iVar0], Global_1669875.f_4714.f_390[iVar0]);
								if (Global_1669875.f_1165 == 0)
								{
									GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								}
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(3) && !func_219(3))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[1 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[1 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[1 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_202(iVar0, Global_1669875.f_2872[iVar0], &(Global_1669875.f_2872.f_11[iVar0 /*16*/]), Global_1669875.f_2872.f_183[iVar0], Global_1669875.f_2872.f_172[iVar0], Global_1669875.f_2872.f_194[iVar0], Global_1669875.f_2872.f_216[iVar0], &(Global_1669875.f_2872.f_259[iVar0 /*16*/]), Global_1669875.f_2872.f_420[iVar0], Global_1669875.f_2872.f_453[iVar0], Global_1669875.f_2872.f_431[iVar0], Global_1669875.f_2872.f_442[iVar0], Global_1669875.f_2872.f_464[iVar0], Global_1669875.f_2872.f_475[iVar0], Global_1669875.f_2872.f_486[iVar0], Global_1669875.f_2872.f_497[iVar0], Global_1669875.f_2872.f_508[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(4) && !func_219(4))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[2 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[2 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[2 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_201(iVar0, Global_1669875.f_3391[iVar0], Global_1669875.f_3391.f_172[iVar0], &(Global_1669875.f_3391.f_11[iVar0 /*16*/]), Global_1669875.f_3391.f_194[iVar0], Global_1669875.f_3391.f_183[iVar0], Global_1669875.f_3391.f_205[iVar0], Global_1669875.f_3391.f_227[iVar0], Global_1669875.f_3391.f_270[iVar0], Global_1669875.f_3391.f_281[iVar0], Global_1669875.f_3391.f_292[iVar0], Global_1669875.f_3391.f_303[iVar0], Global_1669875.f_3391.f_314[iVar0], Global_1669875.f_3391.f_325[iVar0], Global_1669875.f_3391.f_336[iVar0], Global_1669875.f_3391.f_347[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(5) && !func_219(5))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[3 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[3 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[3 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_200(iVar0, Global_1669875.f_3749[iVar0], Global_1669875.f_3749.f_172[iVar0], &(Global_1669875.f_3749.f_11[iVar0 /*16*/]), Global_1669875.f_3749.f_194[iVar0], Global_1669875.f_3749.f_183[iVar0], Global_1669875.f_3749.f_205[iVar0], Global_1669875.f_3749.f_227[iVar0], Global_1669875.f_3749.f_270[iVar0], Global_1669875.f_3749.f_281[iVar0], Global_1669875.f_3749.f_292[iVar0], Global_1669875.f_3749.f_303[iVar0], Global_1669875.f_3749.f_314[iVar0], Global_1669875.f_3749.f_325[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(1) && !func_219(1))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[4 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[4 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[4 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_190(iVar0, Global_1669875.f_1808[iVar0], Global_1669875.f_1808.f_11[iVar0], &(Global_1669875.f_1808.f_22[iVar0 /*16*/]), Global_1669875.f_1808.f_194[iVar0], Global_1669875.f_1808.f_205[iVar0], Global_1669875.f_1808.f_258[iVar0], Global_1669875.f_1808.f_183[iVar0], Global_1669875.f_1808.f_227[iVar0 /*3*/], Global_1669875.f_1808.f_227[iVar0 /*3*/].f_1, Global_1669875.f_1808.f_312[iVar0], Global_1669875.f_1808.f_323[iVar0], Global_1669875.f_1808.f_269[iVar0], Global_2748970[iVar0], Global_2748981[iVar0], Global_2748992[iVar0], Global_2749003[iVar0], Global_2749014[iVar0], Global_2749025[iVar0], Global_2749036[iVar0], Global_2749047[iVar0], Global_1669875.f_1808.f_334[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(0) && !func_219(0))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[5 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[5 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[5 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_180(iVar0, Global_1669875.f_1177[iVar0], Global_1669875.f_1177.f_11[iVar0], &(Global_1669875.f_1177.f_22[iVar0 /*16*/]), Global_1669875.f_1177.f_194[iVar0], Global_1669875.f_1177.f_183[iVar0], Global_1669875.f_1177.f_238[iVar0 /*3*/], Global_1669875.f_1177.f_238[iVar0 /*3*/].f_1, Global_1669875.f_1177.f_269[iVar0], Global_1669875.f_1177.f_205[iVar0], Global_1669875.f_1177.f_280[iVar0], Global_1669875.f_1177.f_323[iVar0], Global_1669875.f_1177.f_334[iVar0], Global_1669875.f_1177.f_345[iVar0], Global_1669875.f_1177.f_356[iVar0], Global_1669875.f_1177.f_367[iVar0], Global_1669875.f_1177.f_378[iVar0], Global_1669875.f_1177.f_389[iVar0], Global_1669875.f_1177.f_400[iVar0], Global_1669875.f_1177.f_411[iVar0], Global_1669875.f_1177.f_422[iVar0], Global_1669875.f_1177.f_433[iVar0], Global_1669875.f_1177.f_444[iVar0], Global_1669875.f_1177.f_455[iVar0], Global_1669875.f_1177.f_466[iVar0], Global_1669875.f_1177.f_477[iVar0], Global_1669875.f_1177.f_488[iVar0], Global_1669875.f_1177.f_499[iVar0], Global_1669875.f_1177.f_510[iVar0], Global_1669875.f_1177.f_521[iVar0], Global_1669875.f_1177.f_532[iVar0], Global_1669875.f_1177.f_543[iVar0], Global_1669875.f_1177.f_554[iVar0], Global_1669875.f_1177.f_565[iVar0], Global_1669875.f_1177.f_576[iVar0], Global_1669875.f_1177.f_587[iVar0], Global_1669875.f_1177.f_598[iVar0], Global_1669875.f_1177.f_609[iVar0], Global_1669875.f_1177.f_620[iVar0], Global_1669875.f_1177.f_216[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(6) && !func_219(6))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[6 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[6 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[6 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_179(iVar0, Global_1669875.f_4085[iVar0], &(Global_1669875.f_4085.f_11[iVar0 /*16*/]), Global_1669875.f_4085.f_183[iVar0], Global_1669875.f_4085.f_172[iVar0], Global_1669875.f_4085.f_194[iVar0], Global_1669875.f_4085.f_271[iVar0], &(Global_1669875.f_4085.f_282[iVar0 /*16*/]), Global_1669875.f_4085.f_443[iVar0], Global_1669875.f_4085.f_454[iVar0], Global_1669875.f_4085.f_497[iVar0], Global_1669875.f_4085.f_508[iVar0], Global_1669875.f_4085.f_205[iVar0], Global_1669875.f_4085.f_216[iVar0], Global_1669875.f_4085.f_227[iVar0], Global_1669875.f_4085.f_238[iVar0], Global_1669875.f_4085.f_249[iVar0], Global_1669875.f_4085.f_519[iVar0], Global_1669875.f_4085.f_530[iVar0], Global_1669875.f_4085.f_541[iVar0], Global_1669875.f_4085.f_552[iVar0], Global_1669875.f_4085.f_563[iVar0], Global_1669875.f_4085.f_574[iVar0], Global_1669875.f_4085.f_585[iVar0], Global_1669875.f_4085.f_596[iVar0], Global_1669875.f_4085.f_607[iVar0], Global_1669875.f_4085.f_618[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(2) && !func_219(2))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[7 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[7 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[7 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_167(iVar0, Global_1669875.f_2153[iVar0], &(Global_1669875.f_2153.f_99[iVar0 /*16*/]), Global_1669875.f_2153.f_282[iVar0], Global_1669875.f_2153.f_293[iVar0], Global_1669875.f_2153.f_260[iVar0], Global_1669875.f_2153.f_11[iVar0], Global_1669875.f_2153.f_22[iVar0], Global_1669875.f_2153.f_33[iVar0], Global_1669875.f_2153.f_44[iVar0], Global_1669875.f_2153.f_55[iVar0], Global_1669875.f_2153.f_66[iVar0], Global_1669875.f_2153.f_77[iVar0], Global_1669875.f_2153.f_88[iVar0], Global_1669875.f_2153.f_271[iVar0], Global_1669875.f_2153.f_304[iVar0], Global_1669875.f_2153.f_357[iVar0], Global_1669875.f_2153.f_326[iVar0 /*3*/], Global_1669875.f_2153.f_326[iVar0 /*3*/].f_1, Global_1669875.f_2153.f_368[iVar0], Global_1669875.f_2153.f_379[iVar0], Global_1669875.f_2153.f_390[iVar0], Global_1669875.f_2153.f_401[iVar0], Global_1669875.f_2153.f_412[iVar0], Global_1669875.f_2153.f_423[iVar0], Global_1669875.f_2153.f_434[iVar0], Global_1669875.f_2153.f_445[iVar0], Global_1669875.f_2153.f_456[iVar0], Global_1669875.f_2153.f_467[iVar0], Global_1669875.f_2153.f_478[iVar0], Global_1669875.f_2153.f_489[iVar0], Global_1669875.f_2153.f_500[iVar0], Global_1669875.f_2153.f_511[iVar0], Global_1669875.f_2153.f_522[iVar0], Global_1669875.f_2153.f_533[iVar0], Global_1669875.f_2153.f_587[iVar0], Global_1669875.f_2153.f_598[iVar0], Global_1669875.f_2153.f_544[iVar0], Global_2749058[iVar0], Global_2749069[iVar0], Global_2749080[iVar0], Global_2749091[iVar0], Global_2749102[iVar0], Global_2749113[iVar0], Global_2749124[iVar0], Global_2749135[iVar0], Global_1669875.f_2153.f_609[iVar0], Global_1669875.f_2153.f_620[iVar0], Global_1669875.f_2153.f_631[iVar0], Global_1669875.f_2153.f_642[iVar0], Global_1669875.f_2153.f_653[iVar0], Global_1669875.f_2153.f_664[iVar0], Global_1669875.f_2153.f_675[iVar0], Global_1669875.f_2153.f_686[iVar0], Global_1669875.f_2153.f_697[iVar0], Global_1669875.f_2153.f_708[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(8) && !func_219(8))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[8 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[8 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[8 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_164(iVar0, &(Global_1669875.f_5115.f_11[iVar0 /*16*/]), Global_1669875.f_5115[iVar0], Global_1669875.f_5115.f_172[iVar0], Global_1669875.f_5115.f_183[iVar0], Global_1669875.f_5115.f_194[iVar0], Global_1669875.f_5115.f_205[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(9) && !func_219(9))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[9 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[9 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[9 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_159(iVar0, Global_1669875.f_5342[iVar0], Global_1669875.f_5342.f_11[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(10) && !func_219(10))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[10 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[10 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[10 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_144(iVar0, Global_1669875.f_5375.f_6[iVar0], Global_1669875.f_5375.f_17[iVar0], &(Global_1669875.f_5375.f_28[iVar0 /*16*/]), Global_1669875.f_5375.f_200[iVar0], Global_1669875.f_5375.f_189[iVar0], Global_1669875.f_5375.f_233[iVar0], Global_1669875.f_5375.f_211[iVar0], Global_1669875.f_5375.f_244[iVar0], Global_1669875.f_5375.f_287[iVar0], Global_1669875.f_5375.f_298[iVar0], &(Global_1669875.f_5375.f_309[iVar0 /*16*/]), &(Global_1669875.f_5375), Global_1669875.f_5375.f_470[iVar0], Global_1669875.f_5375.f_481[iVar0], Global_1669875.f_5375.f_492[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(11) && !func_219(11))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[11 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[11 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[11 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_141(iVar0, Global_1669875.f_5878[iVar0], Global_1669875.f_5878.f_11[iVar0], Global_1669875.f_5878.f_22[iVar0], Global_1669875.f_5878.f_33[iVar0], Global_1669875.f_5878.f_44[iVar0], Global_1669875.f_5878.f_55[iVar0], Global_1669875.f_5878.f_66[iVar0], Global_1669875.f_5878.f_77[iVar0], Global_1669875.f_5878.f_88[iVar0], Global_1669875.f_5878.f_110[iVar0], Global_1669875.f_5878.f_121[iVar0], Global_1669875.f_5878.f_132[iVar0], Global_1669875.f_5878.f_143[iVar0], Global_1669875.f_5878.f_154[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(12) && !func_219(12))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[12 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[12 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[12 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_132(iVar0, Global_1669875.f_6043[iVar0], Global_1669875.f_6043.f_22[iVar0], &(Global_1669875.f_6043.f_33[iVar0 /*6*/]), Global_1669875.f_6043.f_94[iVar0], Global_1669875.f_6043.f_11[iVar0], Global_1669875.f_6043.f_105[iVar0], Global_1669875.f_6043.f_116[iVar0], Global_1669875.f_6043.f_127[iVar0], Global_1669875.f_6043.f_138[iVar0], Global_1669875.f_6043.f_149[iVar0], Global_1669875.f_6043.f_160[iVar0], Global_1669875.f_6043.f_171[iVar0], Global_1669875.f_6043.f_182[iVar0], Global_1669875.f_6043.f_193[iVar0], Global_1669875.f_6043.f_204[iVar0], Global_1669875.f_6043.f_215[iVar0], Global_1669875.f_6043.f_226[iVar0], Global_1669875.f_6043.f_248[iVar0], Global_1669875.f_6043.f_259[iVar0], Global_1669875.f_6043.f_270[iVar0], Global_1669875.f_6043.f_281[iVar0], Global_1669875.f_6043.f_292[iVar0], Global_1669875.f_6043.f_303[iVar0], Global_1669875.f_6043.f_314[iVar0], Global_1669875.f_6043.f_325[iVar0], Global_1669875.f_6043.f_336[iVar0], Global_1669875.f_6043.f_347[iVar0], Global_1669875.f_6043.f_358[iVar0], Global_1669875.f_6043.f_369[iVar0], Global_1669875.f_6043.f_380[iVar0], Global_1669875.f_6043.f_391[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(13) && !func_219(13))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[13 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[13 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[13 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_127(iVar0, Global_1669875.f_6445[iVar0], Global_1669875.f_6445.f_11[iVar0], Global_1669875.f_6445.f_22[iVar0], Global_1669875.f_6445.f_33[iVar0], Global_1669875.f_6445.f_44[iVar0], Global_1669875.f_6445.f_55[iVar0], Global_1669875.f_6445.f_66[iVar0], Global_1669875.f_6445.f_77[iVar0], Global_1669875.f_6445.f_88[iVar0], Global_1669875.f_6445.f_99[iVar0], Global_1669875.f_6445.f_110[iVar0], Global_1669875.f_6445.f_121[iVar0], Global_1669875.f_6445.f_132[iVar0], Global_1669875.f_6445.f_154[iVar0], Global_1669875.f_6445.f_165[iVar0], Global_1669875.f_6445.f_176[iVar0], Global_1669875.f_6445.f_187[iVar0], Global_1669875.f_6445.f_198[iVar0], Global_1669875.f_6445.f_209[iVar0], Global_1669875.f_6445.f_220[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				if (func_31(14) && !func_219(14))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1668317.f_1352[14 /*11*/][iVar0] == iVar1 + 3 || Global_1668317.f_1186[14 /*11*/][iVar0] == 1)
						{
							if (func_225(Global_1668317.f_1186[14 /*11*/][iVar0]))
							{
								func_221(1);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_46(iVar0, &(Global_1669875.f_6676[iVar0 /*16*/]), &(Global_1669875.f_6676.f_161[iVar0 /*16*/]), Global_1669875.f_6676.f_322[iVar0], Global_1669875.f_6676.f_333[iVar0], Global_1669875.f_6676.f_355[iVar0], Global_1669875.f_6676.f_366[iVar0], Global_1669875.f_6676.f_377[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_221(0);
							}
						}
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		func_45();
	}
}

void func_45()//Position - 0x510D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1669875.f_7080[iVar0] = Global_1669875.f_7064[iVar0];
		iVar0++;
	}
}

void func_46(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x513E
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_29(14, iParam0))
	{
		func_47(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, 0, 1, sParam1, iParam5, 0, 0, bParam3, "", 0, 0f, 0, 0, iParam5, 0, 0, 0, 0, 0, sParam2, 0, 0, 255, 0, 0, 0, 0, 1, 0, 0, -1, 1, bParam4, bParam6, iParam7, 0);
	}
}

void func_47(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11, char* sParam12, int iParam13, float fParam14, int iParam15, int iParam16, int iParam17, bool bParam18, int iParam19, bool bParam20, int iParam21, int iParam22, char* sParam23, bool bParam24, int iParam25, int iParam26, bool bParam27, int iParam28, bool bParam29, bool bParam30, int iParam31, bool bParam32, int iParam33, int iParam34, bool bParam35, bool bParam36, bool bParam37, int iParam38, int iParam39)//Position - 0x518D
{
	struct<8> Var0;
	struct<9> Var9;
	struct<9> Var18;
	struct<9> Var27;
	bool bVar36;
	int iVar37;
	struct<9> Var38;
	bool bVar47;
	float fVar48;
	float fVar49;
	struct<8> Var50;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	struct<8> Var63;
	struct<8> Var72;
	int iVar81;
	char* sVar82;
	char* sVar83;
	int iVar84;
	char* sVar85;
	char* sVar86;
	int iVar87;
	struct<11> Var88;
	
	Global_1669875++;
	if (func_126())
	{
		func_125(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_125(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_125(&Var18, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_125(&Var27, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (func_124())
		{
			if (bParam24)
			{
				func_123(uParam1, 0);
			}
			else if (bParam11)
			{
				func_122(uParam1, 3);
			}
			else
			{
				func_123(uParam1, 0);
			}
		}
		else if (bParam24)
		{
			func_121(uParam1, 0);
		}
		else if (bParam11)
		{
			func_122(uParam1, 3);
		}
		else
		{
			func_121(uParam1, 0);
		}
		if (Global_2695965 && bParam11)
		{
			if (func_124())
			{
				func_123(uParam1, 0);
			}
			else
			{
				func_121(uParam1, 0);
			}
		}
		if (iParam5 < 1000000)
		{
			if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && fParam14 >= 100f) && MISC::ARE_STRINGS_EQUAL("AMCH_KMHN" /* GXT: ~1~km/h */, sParam12))
			{
				func_120(uParam2, 0, 0);
			}
			else if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12) && ((iParam5 > 999 || iParam19 > 999) || fParam14 > 1000f))
			{
				func_120(uParam2, 0, 0);
			}
			else if (iParam19 > 99)
			{
				func_119(uParam2, 0, 0);
			}
			else
			{
				func_118(uParam2, 0, 0);
			}
		}
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && (MISC::ARE_STRINGS_EQUAL("HUD_CASH" /* GXT: $~1~ */, sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /* GXT: -$~1~ */, sParam12)))
		{
			func_120(uParam2, 0, 0);
		}
		else
		{
			func_119(uParam2, 0, 0);
		}
		func_116(uParam1);
		func_115(uParam2);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_113())));
		func_112(6, iParam0);
		if (Global_1669875 == 1)
		{
			func_111(iParam6);
		}
		func_106(uParam2, uParam3, uParam4, iParam6, uParam1);
		if (iParam22 == 1)
		{
			iParam17 = 2;
			iParam8 = 2;
		}
		func_105(uParam2, iParam8);
		if (iParam9 == 0)
		{
			func_104(iParam0);
		}
		if (iParam16 == 0)
		{
			func_103(iParam0);
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar37 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar37);
			if (func_101(iParam9, &(Global_1669875.f_86[iParam0 /*2*/]), &(Global_1669875.f_107[iParam0 /*2*/])))
			{
				bVar36 = true;
			}
			else
			{
				bVar36 = false;
			}
			Var27.f_0 = *uParam3;
			Var27.f_1 = uParam3->f_1;
			Var0.f_0 = *uParam3;
			Var0.f_1 = (uParam3->f_1 + 0.001f);
			if (iParam22 == 1)
			{
				Var27.f_0 = (Var27.f_0 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.002f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.049f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else if (iParam5 < 1000000)
			{
				Var27.f_0 = (Var27.f_0 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.008f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.036f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else
			{
				Var27.f_0 = (Var27.f_0 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.01f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.033f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			if (func_124())
			{
				Var27.f_0 = (Var27.f_0 + -0.025f);
				Var27.f_2 = (Var27.f_2 + 0.05f);
			}
			Global_1669875.f_7129 = (Global_1669875.f_7129 + Var27.f_3);
			if (iParam16 > 0)
			{
				Var38 = { Var27 };
				if (func_252(&(Global_1669875.f_1129[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_100(Global_1669875.f_1129[iParam0 /*2*/], 1250, 0))
					{
						Global_1669875.f_1150[iParam0] = (Global_1669875.f_1150[iParam0] - 17);
					}
					Var38.f_7 = Global_1669875.f_1150[iParam0];
					if (iParam15 == 2)
					{
						func_99(&Var38, 6);
					}
					else if (iParam15 == 3)
					{
						func_99(&Var38, 18);
					}
					else
					{
						func_99(&Var38, iParam8);
					}
					func_91("TimerBars", "ALL_WHITE_bg", &Var38, 1, 0, iVar37, 0);
				}
			}
			else
			{
				Global_1669875.f_1150[iParam0] = 255;
				func_90(&(Global_1669875.f_1129[iParam0 /*2*/]), 0, 0);
			}
			if (iParam22 == 1 || iParam39 != 0)
			{
				if (iParam39 != 0)
				{
					func_99(&Var27, iParam39);
				}
				func_91("TimerBars", "ALL_WHITE_bg", &Var27, 1, 0, iVar37, 0);
			}
			else
			{
				func_91("TimerBars", "ALL_BLACK_bg", &Var27, 1, 0, iVar37, 0);
			}
			func_84(&Var27, iParam25);
			iVar37 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar37);
			func_83(uParam1, iParam17);
			bVar47 = true;
			if (Global_2695965)
			{
				bVar47 = false;
			}
			if (Global_2695966 == 1)
			{
				bVar47 = true;
			}
			func_82(uParam1, 0);
			if (func_124())
			{
				if (bParam11)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.004f);
					}
				}
				else if (func_124())
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.008f);
					}
				}
			}
			else if (bParam24)
			{
				uParam3->f_1 = (uParam3->f_1 + 0f);
			}
			else if (bParam11 && Global_2695965 == 0)
			{
				uParam3->f_1 = (uParam3->f_1 + (-0.002f - 0.004f));
			}
			if (iParam22 == 1)
			{
				uParam3->f_1 = (uParam3->f_1 - 0.007f);
				uParam4->f_1 = (uParam4->f_1 - 0.007f);
			}
			if (iParam21 == 2 && MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				sParam7 = "HUD_ROCKET" /* GXT: ROCKETS */;
			}
			else if (iParam21 == 4)
			{
				sParam7 = "HUD_BOOST" /* GXT: BOOST */;
			}
			else if (iParam21 == 1)
			{
				sParam7 = "HUD_SPIKES" /* GXT: SPIKES */;
			}
			uParam1->f_6 = iParam26;
			uParam2->f_6 = iParam26;
			if (bParam27)
			{
				uParam2->f_6 = 0;
			}
			if (bParam37)
			{
				*uParam1 = iParam38;
			}
			if (bParam29)
			{
				if (bVar36)
				{
					func_79(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar47);
				}
			}
			else
			{
				func_79(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar47);
			}
			if (bParam32)
			{
				if (iParam34 > 0)
				{
					if (!func_78(&(Global_1669875.f_884[iParam0 /*2*/])))
					{
						func_77(&(Global_1669875.f_884[iParam0 /*2*/]), 0, 0);
					}
					else if (func_252(&(Global_1669875.f_884[iParam0 /*2*/]), iParam34, 0))
					{
						func_90(&(Global_1669875.f_884[iParam0 /*2*/]), 0, 0);
					}
					func_74(uParam2, iParam8, iParam33, iParam34, Global_1669875.f_884[iParam0 /*2*/]);
				}
			}
			if (iParam22 == 1)
			{
				Var9.f_0 = uParam2->f_9;
				Var9.f_1 = (uParam4->f_1 - 0.0175f);
				Var18.f_0 = uParam2->f_9;
				Var18.f_1 = (uParam4->f_1 + 0.0175f);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArrow", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArrow"))
				{
					Var9.f_0 = (Var9.f_0 + 0.0095f);
					Var9.f_0 = (Var9.f_0 - 0.015f);
					Var9.f_1 = (Var9.f_1 + 0.019f);
					Var9.f_2 = (Var9.f_2 + 0.01f);
					Var9.f_3 = (Var9.f_3 + 0.01f);
					Var9.f_4 = Var9.f_4;
					Var9.f_5 = Var9.f_5;
					Var9.f_6 = Var9.f_6;
					Var9.f_7 = (Var9.f_7 - 50);
					Var9.f_8 = -90f;
					func_91("MPArrow", "MP_ArrowXLarge", &Var9, 1, 0, iVar37, 0);
					Var18.f_0 = (Var18.f_0 + 0.0095f);
					Var18.f_0 = (Var18.f_0 - 0.015f);
					Var18.f_1 = (Var18.f_1 + 0.019f);
					Var18.f_2 = (Var18.f_2 + 0.01f);
					Var18.f_3 = (Var18.f_3 + 0.01f);
					Var18.f_4 = Var18.f_4;
					Var18.f_5 = Var18.f_5;
					Var18.f_6 = Var18.f_6;
					Var18.f_7 = (Var18.f_7 - 50);
					Var18.f_8 = 90f;
					func_91("MPArrow", "MP_ArrowXLarge", &Var18, 1, 0, iVar37, 0);
				}
			}
			if (bParam30)
			{
				fVar48 = (func_73() + func_72(iParam6));
				fVar49 = func_71();
				if (func_124())
				{
					Var50.f_0 = (fVar49 - 0.061f);
				}
				else
				{
					Var50.f_0 = (fVar49 - 0.0365f);
				}
				Var50.f_1 = (fVar48 + 0.057f);
				Var50.f_2 = (Var27.f_2 - 0.004f);
				Var50.f_3 = 0.01f;
				Var50.f_4 = 255;
				Var50.f_5 = 255;
				Var50.f_6 = 255;
				Var50.f_7 = 255;
				func_99(&Var50, iParam31);
				func_91("TimerBars", "DamagebarFill_128", &Var50, 0, 0, iVar37, 0);
			}
			if (bParam18)
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
				{
					fVar59 = 0f;
					if (bParam11 == 1)
					{
						HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						fVar60 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
					}
					else
					{
						HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam7);
						if (iParam10 != -1)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
						}
						fVar60 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
					}
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && bParam11 == 0)
					{
						fVar61 = (0.153f - 0.072f);
						fVar62 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10 && bParam11 == 0)
					{
						fVar61 = ((0.153f - 0.01f) - 0.06f);
						fVar62 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 && bParam11 == 0)
					{
						fVar61 = ((0.153f - 0.012f) - 0.06f);
						fVar62 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 12 && bParam11 == 0)
					{
						fVar61 = ((0.153f - 0.012f) - 0.06f);
						fVar62 = -0.457f;
					}
					else
					{
						fVar61 = ((0.153f - 0.037f) - 0.036f);
						fVar62 = (-0.457f + 0.194f);
					}
					fVar61 = (fVar61 + 0.03f);
					if (Global_1669875.f_1172)
					{
						fVar61 = (fVar61 + -0.03f);
					}
					if (MISC::IS_PC_VERSION() && !GRAPHICS::GET_IS_WIDESCREEN())
					{
						fVar61 = (fVar61 + -0.015f);
					}
					if (Global_1669875.f_1173 && Global_1669875.f_1172 == 0)
					{
						fVar61 = (fVar61 + (-0.015f - 0.003f));
					}
					fVar59 = ((fVar62 * fVar60) + fVar61);
					Var0.f_0 = (Var0.f_0 + fVar59);
					Var0.f_0 = (Var0.f_0 - 0.015f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.022f);
					Var0.f_3 = (Var0.f_3 + 0.04f);
					Var0.f_4 += 194;
					Var0.f_5 += 80;
					Var0.f_6 += 80;
					Var0.f_7 = (Var0.f_7 - 50);
					func_91("CommonMenu", "MP_AlertTriangle", &Var0, 1, 0, iVar37, 0);
				}
			}
			if (bVar36)
			{
				if (iParam21 != 0)
				{
					func_70(uParam2);
					Var63.f_0 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_124())
					{
						Var63.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var63.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var63.f_2 = (0.016f + 0.003f);
					Var63.f_3 = (0.032f + 0.004f);
					Var63.f_7 = iParam26;
					func_99(&Var63, 1);
					Var72.f_0 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_124())
					{
						Var72.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var72.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var72.f_2 = (0.016f + 0.003f);
					Var72.f_3 = (0.032f + 0.004f);
					Var72.f_7 = 255;
					func_99(&Var72, 1);
					if (bParam27)
					{
						Var63.f_7 = 0;
					}
					sVar82 = "";
					iVar84 = 1;
					sVar85 = "";
					iVar87 = 1;
					switch (iParam21)
					{
						case 5:
							Var63.f_3 = (Var63.f_3 + -0.009f);
							Var63.f_2 = (Var63.f_2 + -0.002f);
							if (func_124())
							{
								Var63.f_1 = (Var63.f_1 + 0.0055f);
							}
							else
							{
								Var63.f_1 = (Var63.f_1 + 0.0025f);
							}
							sVar85 = "MPRPSymbol";
							sVar86 = "RP";
							break;
						
						case 2:
							sVar85 = "TimerBars";
							sVar86 = "Rockets";
							break;
						
						case 3:
							sVar85 = "MpSpecialRace";
							sVar86 = "HOMING_ROCKET";
							break;
						
						case 1:
							sVar85 = "TimerBars";
							sVar86 = "Spikes";
							break;
						
						case 4:
							sVar85 = "TimerBars";
							sVar86 = "Boost";
							break;
						
						case 6:
							sVar85 = "CrossTheLine";
							sVar86 = "Timer_LargeTick_32";
							iVar87 = 18;
							break;
						
						case 7:
							sVar85 = "CrossTheLine";
							sVar86 = "Timer_LargeCross_32";
							iVar87 = 6;
							break;
						
						case 8:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Beast";
							iVar87 = 118;
							break;
						
						case 9:
							sVar85 = "MPSpecialRace";
							sVar86 = "MACHINE_GUN";
							break;
						
						case 10:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Random";
							iVar87 = 118;
							break;
						
						case 11:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Slow_Time";
							break;
						
						case 12:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Swap";
							iVar87 = 118;
							break;
						
						case 13:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Testosterone";
							iVar87 = 118;
							break;
						
						case 14:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Thermal";
							iVar87 = 118;
							break;
						
						case 15:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Weed";
							iVar87 = 118;
							break;
						
						case 16:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Hidden";
							iVar87 = 118;
							break;
						
						case 17:
						case 18:
							if (iParam28 != func_69())
							{
								iVar81 = func_62(iParam28);
								if (iVar81 != 0)
								{
									sVar85 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar81);
									sVar86 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar81);
								}
							}
							if (func_124())
							{
								Var63.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
							}
							else
							{
								Var63.f_1 = (uParam4->f_1 + 0.0185f);
							}
							Var63.f_2 = (0.016f + 0.004f);
							Var63.f_3 = (0.032f + 0.002f);
							if (iParam21 == 18)
							{
								if (func_124())
								{
									Var72.f_1 = (uParam4->f_1 + 0.016f);
								}
								else
								{
									Var72.f_1 = (uParam4->f_1 + 0.019f);
								}
								Var72.f_2 = (0.016f + 0.004f);
								Var72.f_3 = (0.032f + 0.002f);
								sVar82 = "timerbar_sr";
								sVar83 = "timer_cross";
								iVar84 = iParam17;
								Var63.f_7 = 127;
							}
							break;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar85))
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar85, false);
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar85))
						{
							func_99(&Var63, iVar87);
							func_91(sVar85, sVar86, &Var63, 1, 0, 4, 0);
						}
					}
					if (iParam21 == 18)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar82))
						{
							GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar82, false);
							if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar82))
							{
								func_99(&Var72, iVar84);
								func_91(sVar82, sVar83, &Var72, 1, 0, 4, 0);
							}
						}
					}
				}
				func_82(uParam2, 0);
				iVar37 = func_102();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar37);
				if ((iParam21 == 0 || iParam21 == 5) || iParam21 == 9)
				{
					Var88 = { *uParam1 };
					func_115(&Var88);
					if (bParam20)
					{
						func_61(uParam4, uParam2, "???", "", 1, 2);
					}
					else if (iParam21 == 5)
					{
						if (bParam35)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam23))
							{
								func_79(&Var88, uParam3, sParam23, iParam17, iParam8, -1, bParam36, bVar47);
							}
						}
						else if (iParam13 == 0)
						{
							func_59(uParam4, uParam2, "HUD_KSMULTI" /* GXT: ~1~x */, iParam5, 2);
						}
						else
						{
							func_57(uParam4, uParam2, "HUD_KSMULTI" /* GXT: ~1~x */, fParam14, Global_2697805, 2);
						}
					}
					else if (func_56(sParam12))
					{
						if (bParam35)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam23))
							{
								func_79(&Var88, uParam3, sParam23, iParam17, iParam8, -1, bParam36, bVar47);
							}
						}
						else if (iParam19 == 0)
						{
							if (iParam13 == 0)
							{
								func_59(uParam4, uParam2, "NUMBER", iParam5, 2);
							}
							else
							{
								func_57(uParam4, uParam2, "NUMBER", fParam14, Global_2697805, 2);
							}
						}
						else
						{
							func_54(uParam4, uParam2, "TIMER_DASHES" /* GXT: ~1~/~1~ */, iParam5, iParam19, 2, 0);
						}
					}
					else if (bParam35)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam23))
						{
							func_79(&Var88, uParam3, sParam23, iParam17, iParam8, -1, bParam36, bVar47);
						}
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH" /* GXT: $~1~ */, sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S" /* GXT: $~a~ */, sParam12))
					{
						sParam12 = "HUD_CASH_S" /* GXT: $~a~ */;
						*uParam2 = 5;
						func_82(uParam2, 0);
						func_49(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /* GXT: -$~1~ */, sParam12) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S" /* GXT: -$~a~ */, sParam12))
					{
						*uParam2 = 5;
						func_82(uParam2, 0);
						sParam12 = "HUD_CASH_NEG_S" /* GXT: -$~a~ */;
						func_49(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (iParam13 == 0)
					{
						func_59(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else
					{
						func_57(uParam4, uParam2, sParam12, fParam14, Global_2697805, 2);
					}
				}
			}
			func_48();
		}
	}
}

void func_48()//Position - 0x6263
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}

void func_49(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x6270
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_56(sVar0))
	{
		if (func_52())
		{
			func_82(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam3, true);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_51(*uParam0), func_50(uParam0->f_1), 0);
		}
	}
}

float func_50(var uParam0)//Position - 0x62C1
{
	return uParam0;
}

float func_51(var uParam0)//Position - 0x62CB
{
	return uParam0;
}

int func_52()//Position - 0x62D5
{
	if (func_53())
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

bool func_53()//Position - 0x6314
{
	return Global_1574604;
}

void func_54(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x6320
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_56(sVar0))
	{
		if (func_52())
		{
			func_82(uParam1, 0);
			HUD::SET_TEXT_CENTRE(bParam6);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_55(func_51(*uParam0), func_50(uParam0->f_1), sVar0, iParam3, iParam4);
		}
	}
}

void func_55(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x6369
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

int func_56(char* sParam0)//Position - 0x638C
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

void func_57(var uParam0, var uParam1, char* sParam2, float fParam3, int iParam4, int iParam5)//Position - 0x63C5
{
	if (!func_56(sParam2))
	{
		if (func_52())
		{
			func_82(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_58(func_51(*uParam0), func_50(uParam0->f_1), sParam2, fParam3, iParam4);
		}
	}
}

void func_58(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x6404
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_59(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x6423
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_56(sVar0))
	{
		if (func_52())
		{
			func_82(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			func_60(func_51(*uParam0), func_50(uParam0->f_1), sVar0, iParam3, 0);
		}
	}
}

void func_60(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x6465
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_61(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x6483
{
	char* sVar0;
	
	if (!func_56(sParam2))
	{
		if (func_52())
		{
			func_82(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			if (func_56(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_51(*uParam0), func_50(uParam0->f_1), 0);
		}
	}
}

int func_62(int iParam0)//Position - 0x64E4
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (iVar0 == -1)
	{
		func_63(iParam0, 1);
		return 0;
	}
	Global_1680805[iVar0 /*5*/].f_4 = 1;
	return Global_1680805[iVar0 /*5*/].f_2;
}

void func_63(int iParam0, bool bParam1)//Position - 0x651A
{
	if (!func_65(iParam0, 0, 1))
	{
		return;
	}
	if (func_66(iParam0) != -1)
	{
		return;
	}
	if (Global_1680968)
	{
		if (iParam0 == Global_1680968.f_1)
		{
			return;
		}
	}
	if (func_64(iParam0))
	{
		return;
	}
	if (Global_1681006 >= 32)
	{
		return;
	}
	Global_1680973[Global_1681006] = iParam0;
	Global_1681006++;
	if (bParam1)
	{
	}
}

int func_64(int iParam0)//Position - 0x6586
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681006)
	{
		if (Global_1680973[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_65(int iParam0, bool bParam1, bool bParam2)//Position - 0x65B8
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

int func_66(int iParam0)//Position - 0x6618
{
	int iVar0;
	
	if (!func_65(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1680966 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1680966)
	{
		if (Global_1680805[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1680805[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_67(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_67(int iParam0)//Position - 0x6697
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1680966)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1680805[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1680805[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1680805[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1680966)
	{
		Global_1680805[iVar32 /*5*/] = { Global_1680805[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_68(&(Global_1680805[iVar32 /*5*/]));
	Global_1680966 = (Global_1680966 - 1);
}

void func_68(var uParam0)//Position - 0x674D
{
	*uParam0 = 0;
	uParam0->f_1 = func_69();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_69()//Position - 0x677A
{
	return -1;
}

void func_70(var uParam0)//Position - 0x6783
{
	uParam0->f_9 = (((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) - 0.002f) - 0.001f);
}

float func_71()//Position - 0x67BE
{
	float fVar0;
	
	fVar0 = (((((0.919f - 0.081f) + 0.028f) + 0.05f) - 0.001f) - 0.002f);
	return fVar0;
}

float func_72(int iParam0)//Position - 0x67ED
{
	switch (iParam0)
	{
		case 1:
			return Global_1669875.f_1161;
			break;
		
		case 2:
			return Global_1669875.f_1162;
			break;
	}
	return Global_1669875.f_1161;
}

float func_73()//Position - 0x6829
{
	float fVar0;
	
	fVar0 = ((((0.013f - 0.002f) + 0.001f) + 0.001f) - 0.001f);
	return fVar0;
}

void func_74(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x6852
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
	float fVar9;
	
	iVar8 = func_76(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (SYSTEM::TO_FLOAT((iVar8 / 2)) / SYSTEM::TO_FLOAT((iParam3 / 2)));
		HUD::GET_HUD_COLOUR(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iParam3));
		HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_3 = SYSTEM::FLOOR(func_75(SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(iVar4), fVar9));
	uParam0->f_4 = SYSTEM::FLOOR(func_75(SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iVar5), fVar9));
	uParam0->f_5 = SYSTEM::FLOOR(func_75(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar6), fVar9));
	uParam0->f_6 = SYSTEM::FLOOR(func_75(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar7), fVar9));
}

float func_75(float fParam0, float fParam1, float fParam2)//Position - 0x6932
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_76(var uParam0, bool bParam1, bool bParam2)//Position - 0x6947
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

void func_77(var uParam0, bool bParam1, bool bParam2)//Position - 0x698E
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

bool func_78(var uParam0)//Position - 0x69D3
{
	return uParam0->f_1;
}

void func_79(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x69DF
{
	if (bParam6 == 1)
	{
		if (bParam7)
		{
			func_61(uParam1, uParam0, sParam2, "", iParam3, 2);
		}
		else
		{
			func_61(uParam1, uParam0, sParam2, "", iParam4, 2);
		}
	}
	else if (iParam5 == -1)
	{
		func_80(uParam1, uParam0, sParam2, 0, 1);
	}
	else
	{
		uParam1->f_1 = (uParam1->f_1 + (-0.003f - 0.001f));
		func_59(uParam1, uParam0, sParam2, iParam5, 2);
	}
}

void func_80(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4)//Position - 0x6A4E
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_56(sVar0))
	{
		if (func_52())
		{
			func_82(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(bParam4);
			HUD::SET_TEXT_CENTRE(bParam3);
			func_81(func_51(*uParam0), func_50(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_81(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x6A94
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_82(var uParam0, bool bParam1)//Position - 0x6AAC
{
	HUD::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_83(var uParam0, int iParam1)//Position - 0x6B45
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_84(var uParam0, int iParam1)//Position - 0x6B6D
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_0 = 0.951f;
	Var0.f_1 = uParam0->f_1;
	Var0.f_2 = 0.002f;
	Var0.f_3 = uParam0->f_3;
	HUD::GET_HUD_COLOUR(iParam1, &uVar8, &uVar9, &uVar10, &uVar11);
	Var0.f_4 = uVar8;
	Var0.f_5 = uVar9;
	Var0.f_6 = uVar10;
	Var0.f_7 = uVar11;
	func_85(Var0, 0, 0);
}

void func_85(struct<8> Param0, int iParam8, int iParam9)//Position - 0x6BCF
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_89(&Var0);
			break;
		
		case 1:
			func_88(&Var0);
			break;
		
		case 3:
			func_87(&Var0);
			break;
		
		case 4:
			func_86(&Var0);
			break;
	}
	if (func_52())
	{
		if (iParam9 == 1)
		{
			GRAPHICS::DRAW_RECT(func_51(Var0.f_0), func_50(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, false);
		}
		else
		{
			GRAPHICS::DRAW_RECT(func_51(Var0.f_0), func_50(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, false);
		}
	}
}

void func_86(var uParam0)//Position - 0x6C8A
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_87(var uParam0)//Position - 0x6CAA
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_88(var uParam0)//Position - 0x6CCA
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_89(var uParam0)//Position - 0x6CF3
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_90(var uParam0, bool bParam1, bool bParam2)//Position - 0x6D10
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

void func_91(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x6D4D
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_98(&Var0);
			break;
		
		case 1:
			func_97(&Var0);
			break;
		
		case 5:
			func_96(&Var0);
			break;
		
		case 6:
			func_95(&Var0);
			break;
		
		case 7:
			func_94(&Var0);
			break;
		
		case 8:
			func_93(&Var0);
			break;
		
		case 9:
			func_92(&Var0);
			break;
	}
	if (func_52())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_51(Var0.f_0), func_50(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_51(Var0.f_0), func_50(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_92(var uParam0)//Position - 0x6E54
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_93(var uParam0)//Position - 0x6E6E
{
	uParam0->f_7 = 2;
}

void func_94(var uParam0)//Position - 0x6E7B
{
	uParam0->f_7 = 5;
}

void func_95(var uParam0)//Position - 0x6E88
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_96(var uParam0)//Position - 0x6EA5
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_97(var uParam0)//Position - 0x6EC2
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_98(var uParam0)//Position - 0x6EEB
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_99(var uParam0, int iParam1)//Position - 0x6F13
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

int func_100(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x6F3B
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, var uParam1, var uParam2)//Position - 0x6F8E
{
	if (func_252(uParam1, iParam0, 0))
	{
		return 1;
	}
	if (!func_78(uParam2))
	{
		func_77(uParam2, 0, 0);
	}
	else if (func_252(uParam2, 300, 0))
	{
		if (func_252(uParam2, 800, 0))
		{
			func_17(uParam2);
			return 1;
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
	return 1;
}

int func_102()//Position - 0x6FEE
{
	int iVar0;
	
	iVar0 = 1;
	if (Global_1669875.f_1171)
	{
		iVar0 = 7;
	}
	return iVar0;
}

void func_103(int iParam0)//Position - 0x7008
{
	func_17(&(Global_1669875.f_590[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_611[iParam0 /*2*/]));
}

void func_104(int iParam0)//Position - 0x702E
{
	func_17(&(Global_1669875.f_86[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_107[iParam0 /*2*/]));
}

void func_105(var uParam0, int iParam1)//Position - 0x7052
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
	uParam0->f_6 = uVar3;
}

void func_106(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)//Position - 0x7080
{
	float fVar0;
	
	fVar0 = func_110(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_72(iParam3);
	uParam1->f_1 = (uParam1->f_1 + func_109(uParam4));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_108(uParam0));
	func_107(iParam3, -fVar0);
}

void func_107(int iParam0, float fParam1)//Position - 0x70D1
{
	switch (iParam0)
	{
		case 1:
			Global_1669875.f_1161 = (Global_1669875.f_1161 + fParam1);
			break;
		
		case 2:
			Global_1669875.f_1162 = (Global_1669875.f_1162 + fParam1);
			break;
	}
}

float func_108(var uParam0)//Position - 0x7114
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = ((((((-0.01f - 0.005f) + 0.004f) - 0.0005f) - 0.002f) + 0.002f) + 0.0005f);
			break;
		
		case 10:
			fVar0 = ((((-0.025f - 0.003f) + 0.002f) - 0.006f) + 0.001f);
			break;
		
		case 11:
			fVar0 = ((((-0.047f - 0.004f) + 0.012f) + 0.001f) + 0.007f);
			break;
		
		case 12:
			fVar0 = ((-0.019f + 0.011f) + 0.004f);
			break;
		
		case 13:
			fVar0 = (-0.012f + 0.001f);
			break;
		
		case 14:
			fVar0 = ((-0.012f + 0.001f) + 0.001f);
			break;
		
		case 15:
			fVar0 = ((((-0.035f - 0.008f) + 0.006f) + 0.013f) + 0.0005f);
			break;
		
		case 16:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) - 0.001f) + 0.001f);
			break;
		
		case 17:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.0007f);
			break;
		
		case 18:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.003f);
			break;
		
		case 6:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
		
		case 19:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
	}
	if (func_124())
	{
		fVar0 = (fVar0 + 0.003f);
	}
	return fVar0;
}

float func_109(var uParam0)//Position - 0x72EE
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 6:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

float func_110(var uParam0)//Position - 0x730D
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = (((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.0018f) + 0.0005f) - 0.0005f);
			break;
		
		case 10:
			fVar0 = (((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) + 0.003f) + 0.002f) - 0.004f);
			break;
		
		case 11:
			fVar0 = (((((0.065f + 0.009f) - 0.006f) - 0.009f) + 0.001f) - 0.009f);
			break;
		
		case 12:
			fVar0 = 0f;
			break;
		
		case 13:
			fVar0 = (0.065f + 0.009f);
			break;
		
		case 14:
			fVar0 = (((0.065f + 0.009f) - 0.015f) - 0.022f);
			break;
		
		case 15:
			fVar0 = 0f;
			break;
		
		case 16:
			fVar0 = ((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.002f) + 0.0003f);
			break;
		
		case 17:
			fVar0 = ((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) - 0.0005f);
			break;
		
		case 18:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
		
		case 19:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
	}
	return fVar0;
}

void func_111(int iParam0)//Position - 0x74EE
{
	switch (iParam0)
	{
		case 1:
			Global_1669875.f_1161 = func_32();
			break;
		
		case 2:
			Global_1669875.f_1162 = func_32();
			break;
	}
}

void func_112(int iParam0, int iParam1)//Position - 0x7525
{
	MISC::SET_BIT(&(Global_1669875.f_7096[iParam0]), iParam1);
}

float func_113()//Position - 0x753E
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	fVar0 = GRAPHICS::GET_ASPECT_RATIO(false);
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar1, &iVar2);
	fVar3 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar2));
	fVar0 = func_114(fVar0, fVar3);
	if (fVar3 > 3.5f && fVar0 > 1.7f)
	{
		return 1.4f;
	}
	if (fVar0 > 1.7f)
	{
		return 1f;
	}
	else if (fVar0 > 1.5f)
	{
		return 1.2f;
	}
	else if (fVar0 > 1.3f)
	{
		return 1.3f;
	}
	return 1.4f;
}

float func_114(float fParam0, float fParam1)//Position - 0x75CE
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_115(var uParam0)//Position - 0x75E5
{
	float fVar0;
	
	fVar0 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) + 0.001f);
	uParam0->f_9 = fVar0;
	if (Global_1669875.f_1165 == 0)
	{
		switch (uParam0->f_10)
		{
			case 11:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			case 10:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			default:
				break;
			}
	}
	if (Global_1669875.f_1165 == 1)
	{
		uParam0->f_9 = fVar0;
		uParam0->f_9 = (uParam0->f_9 + -0.113f);
	}
}

void func_116(var uParam0)//Position - 0x767C
{
	float fVar0;
	
	fVar0 = ((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.03f);
	if (Global_1669875.f_1172)
	{
		fVar0 = (fVar0 + -0.034f);
		if (GRAPHICS::GET_IS_WIDESCREEN() == 0)
		{
			fVar0 = (fVar0 + -0.02f);
		}
	}
	if (Global_1669875.f_1173 && Global_1669875.f_1172 == 0)
	{
		fVar0 = (fVar0 + (-0.015f - 0.003f));
		if (GRAPHICS::GET_IS_WIDESCREEN() == 0)
		{
			fVar0 = (fVar0 + -0.017f);
		}
	}
	if ((Global_1669875.f_1174 && Global_1669875.f_1173 == 0) && Global_1669875.f_1172 == 0)
	{
		fVar0 = (fVar0 + -0.038f);
	}
	if (Global_1669875.f_1165 == 1)
	{
		fVar0 = (fVar0 + -0.113f);
	}
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 && LOCALIZATION::GET_CURRENT_LANGUAGE() == 1) && !GRAPHICS::GET_IS_WIDESCREEN()) && Global_1669875.f_1174)
	{
		fVar0 = (fVar0 + -0.007f);
	}
	if (Global_1669875.f_1175)
	{
		if (((((LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 12)
		{
			fVar0 = (fVar0 + -0.009f);
		}
		else
		{
			fVar0 = (fVar0 + -0.009f);
		}
	}
	if (Global_1669875.f_1176)
	{
		if (func_117())
		{
			fVar0 = (fVar0 + -0.03f);
		}
		else if (((((LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11) && LOCALIZATION::GET_CURRENT_LANGUAGE() != 12)
		{
			fVar0 = (fVar0 + -0.024f);
		}
		else
		{
			fVar0 = (fVar0 + -0.019f);
		}
	}
	if (((((((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 7) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 1) && Global_1669875.f_1173 == 0) && Global_1669875.f_1172 == 0) && Global_1669875.f_1165 == 0) && Global_1669875.f_1174 == 0) && Global_1669875.f_1175 == 0) && Global_1669875.f_1176 == 0) && MISC::IS_PC_VERSION())
	{
		fVar0 = (fVar0 + -0.005f);
	}
	uParam0->f_9 = fVar0;
}

int func_117()//Position - 0x78E7
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

void func_118(var uParam0, int iParam1, int iParam2)//Position - 0x790B
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 16;
}

void func_119(var uParam0, int iParam1, int iParam2)//Position - 0x7970
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 17;
}

void func_120(var uParam0, int iParam1, int iParam2)//Position - 0x79E7
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f) - 0.06f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 18;
}

void func_121(var uParam0, int iParam1)//Position - 0x7A64
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_122(var uParam0, int iParam1)//Position - 0x7AB0
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.355f + 0.092f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 6;
}

void func_123(var uParam0, int iParam1)//Position - 0x7B01
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.416f + 0.089f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

int func_124()//Position - 0x7B53
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_125(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)//Position - 0x7B91
{
	*uParam0 = fParam1;
	uParam0->f_1 = (fParam2 + fParam9);
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
}

int func_126()//Position - 0x7BCB
{
	return 1;
}

void func_127(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, int iParam20)//Position - 0x7BD4
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_29(13, iParam0))
	{
		func_128(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, bParam14, bParam15, bParam16, bParam17, bParam18, bParam19, iParam20);
	}
}

void func_128(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, int iParam25)//Position - 0x7C1E
{
	struct<8> Var0;
	bool bVar9;
	int iVar10;
	struct<8> Var11;
	struct<8> Var20;
	struct<8> Var29;
	struct<8> Var38;
	struct<8> Var47;
	struct<8> Var56;
	struct<8> Var65;
	struct<8> Var74;
	struct<8> Var83;
	struct<8> Var92;
	struct<8> Var101;
	struct<8> Var110;
	var uVar119;
	var uVar120;
	var uVar121;
	var uVar122;
	var uVar123;
	var uVar124;
	char cVar125[24];
	struct<3> Var131;
	char cVar137[24];
	struct<3> Var143;
	char cVar149[24];
	struct<3> Var155;
	char cVar161[24];
	struct<3> Var167;
	char cVar173[24];
	struct<3> Var179;
	char cVar185[24];
	struct<3> Var191;
	char[] cVar197[8];
	char[] cVar203[8];
	char[] cVar209[8];
	char[] cVar215[8];
	char[] cVar221[8];
	char[] cVar227[8];
	char[] cVar233[8];
	char[] cVar239[8];
	char[] cVar245[8];
	char[] cVar251[8];
	char[] cVar257[8];
	char[] cVar263[8];
	int iVar269;
	int iVar270;
	int iVar271;
	int iVar272;
	int iVar273;
	int iVar274;
	int iVar275;
	int iVar276;
	int iVar277;
	int iVar278;
	int iVar279;
	int iVar280;
	
	Global_1669875++;
	if (func_126())
	{
		func_112(13, iParam0);
		func_121(uParam1, 0);
		func_116(uParam1);
		if (Global_1669875 == 1)
		{
			func_111(iParam6);
		}
		func_118(uParam2, 0, 0);
		func_115(uParam2);
		func_106(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_125(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (iParam25 == 0)
		{
			func_131(iParam0);
		}
		if (func_101(iParam25, &(Global_1669875.f_464[iParam0 /*2*/]), &(Global_1669875.f_485[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			Var0.f_0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			Var0.f_0 = (Var0.f_0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_124())
			{
				Var0.f_0 = (Var0.f_0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1669875.f_7129 = (Global_1669875.f_7129 + Var0.f_3);
			func_91("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_82(uParam1, 0);
			Var11.f_0 = ((*uParam4 + 0.145f) + 0.001f);
			Var20.f_0 = ((*uParam4 + 0.145f) + 0.001f);
			Var29.f_0 = (*uParam4 + 0.123f);
			Var38.f_0 = (*uParam4 + 0.123f);
			Var47.f_0 = (*uParam4 + 0.101f);
			Var56.f_0 = (*uParam4 + 0.101f);
			Var65.f_0 = (*uParam4 + 0.078f);
			Var74.f_0 = (*uParam4 + 0.078f);
			Var83.f_0 = (*uParam4 + 0.056f);
			Var92.f_0 = (*uParam4 + 0.056f);
			Var101.f_0 = (*uParam4 + 0.034f);
			Var110.f_0 = (*uParam4 + 0.034f);
			if (func_124())
			{
				Var11.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var20.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var29.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var38.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var47.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var56.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var65.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var74.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var83.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var92.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var101.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var110.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
			}
			else
			{
				Var11.f_1 = (uParam4->f_1 + 0.0185f);
				Var20.f_1 = (uParam4->f_1 + 0.019f);
				Var29.f_1 = (uParam4->f_1 + 0.0185f);
				Var38.f_1 = (uParam4->f_1 + 0.019f);
				Var47.f_1 = (uParam4->f_1 + 0.0185f);
				Var56.f_1 = (uParam4->f_1 + 0.019f);
				Var65.f_1 = (uParam4->f_1 + 0.0185f);
				Var74.f_1 = (uParam4->f_1 + 0.019f);
				Var83.f_1 = (uParam4->f_1 + 0.0185f);
				Var92.f_1 = (uParam4->f_1 + 0.019f);
				Var101.f_1 = (uParam4->f_1 + 0.0185f);
				Var110.f_1 = (uParam4->f_1 + 0.019f);
			}
			Var11.f_2 = (0.016f + 0.003f);
			Var20.f_2 = (0.016f + 0.003f);
			Var29.f_2 = (0.016f + 0.003f);
			Var38.f_2 = (0.016f + 0.003f);
			Var47.f_2 = (0.016f + 0.003f);
			Var56.f_2 = (0.016f + 0.003f);
			Var65.f_2 = (0.016f + 0.003f);
			Var74.f_2 = (0.016f + 0.003f);
			Var83.f_2 = (0.016f + 0.003f);
			Var92.f_2 = (0.016f + 0.003f);
			Var101.f_2 = (0.016f + 0.003f);
			Var110.f_2 = (0.016f + 0.003f);
			Var11.f_3 = (0.032f + 0.004f);
			Var20.f_3 = (0.032f + 0.004f);
			Var29.f_3 = (0.032f + 0.004f);
			Var38.f_3 = (0.032f + 0.004f);
			Var47.f_3 = (0.032f + 0.004f);
			Var56.f_3 = (0.032f + 0.004f);
			Var65.f_3 = (0.032f + 0.004f);
			Var74.f_3 = (0.032f + 0.004f);
			Var83.f_3 = (0.032f + 0.004f);
			Var92.f_3 = (0.032f + 0.004f);
			Var101.f_3 = (0.032f + 0.004f);
			Var110.f_3 = (0.032f + 0.004f);
			Var11.f_7 = 255;
			Var20.f_7 = 255;
			Var29.f_7 = 255;
			Var38.f_7 = 255;
			Var47.f_7 = 255;
			Var56.f_7 = 255;
			Var65.f_7 = 255;
			Var74.f_7 = 255;
			Var83.f_7 = 255;
			Var92.f_7 = 255;
			Var101.f_7 = 255;
			Var110.f_7 = 255;
			func_99(&Var11, 1);
			func_99(&Var20, 1);
			func_99(&Var29, 1);
			func_99(&Var38, 1);
			func_99(&Var47, 1);
			func_99(&Var56, 1);
			func_99(&Var65, 1);
			func_99(&Var74, 1);
			func_99(&Var83, 1);
			func_99(&Var92, 1);
			func_99(&Var101, 1);
			func_99(&Var110, 1);
			StringCopy(&cVar125, "", 24);
			StringCopy(&Var131, "", 24);
			StringCopy(&cVar137, "", 24);
			StringCopy(&Var143, "", 24);
			StringCopy(&cVar149, "", 24);
			StringCopy(&Var155, "", 24);
			StringCopy(&cVar161, "", 24);
			StringCopy(&Var167, "", 24);
			StringCopy(&cVar173, "", 24);
			StringCopy(&Var179, "", 24);
			StringCopy(&cVar185, "", 24);
			StringCopy(&Var191, "", 24);
			iVar269 = 1;
			iVar270 = 1;
			iVar271 = 1;
			iVar272 = 1;
			iVar273 = 1;
			iVar274 = 1;
			iVar275 = 1;
			iVar276 = 1;
			iVar277 = 1;
			iVar278 = 1;
			iVar279 = 1;
			iVar280 = 1;
			func_130(&iParam13, &Var11, &cVar125, &cVar197, &iVar269, &uParam7, &uVar119, &Var20, &Var131, &cVar203, &iVar270, iParam5, 0);
			func_130(&iParam14, &Var29, &cVar137, &cVar209, &iVar271, &uParam8, &uVar120, &Var38, &Var143, &cVar215, &iVar272, iParam5, 0);
			func_130(&iParam15, &Var47, &cVar149, &cVar221, &iVar273, &uParam9, &uVar121, &Var56, &Var155, &cVar227, &iVar274, iParam5, 0);
			func_130(&iParam16, &Var65, &cVar161, &cVar233, &iVar275, &uParam10, &uVar122, &Var74, &Var167, &cVar239, &iVar276, iParam5, 0);
			func_130(&iParam17, &Var83, &cVar173, &cVar245, &iVar277, &uParam11, &uVar123, &Var92, &Var179, &cVar251, &iVar278, iParam5, 0);
			func_130(&iParam18, &Var101, &cVar185, &cVar257, &iVar279, &uParam12, &uVar124, &Var110, &Var191, &cVar263, &iVar280, iParam5, 0);
			if (bParam19)
			{
				if (bVar9)
				{
					func_129(iParam13, &Var11, &Var20, &cVar125, &cVar197, iVar269, &Var131, &cVar203, iVar270);
				}
			}
			else
			{
				func_129(iParam13, &Var11, &Var20, &cVar125, &cVar197, iVar269, &Var131, &cVar203, iVar270);
			}
			if (bParam20)
			{
				if (bVar9)
				{
					func_129(iParam14, &Var29, &Var38, &cVar137, &cVar209, iVar271, &Var143, &cVar215, iVar272);
				}
			}
			else
			{
				func_129(iParam14, &Var29, &Var38, &cVar137, &cVar209, iVar271, &Var143, &cVar215, iVar272);
			}
			if (bParam21)
			{
				if (bVar9)
				{
					func_129(iParam15, &Var47, &Var56, &cVar149, &cVar221, iVar273, &Var155, &cVar227, iVar274);
				}
			}
			else
			{
				func_129(iParam15, &Var47, &Var56, &cVar149, &cVar221, iVar273, &Var155, &cVar227, iVar274);
			}
			if (bParam22)
			{
				if (bVar9)
				{
					func_129(iParam16, &Var65, &Var74, &cVar161, &cVar233, iVar275, &Var167, &cVar239, iVar276);
				}
			}
			else
			{
				func_129(iParam16, &Var65, &Var74, &cVar161, &cVar233, iVar275, &Var167, &cVar239, iVar276);
			}
			if (bParam23)
			{
				if (bVar9)
				{
					func_129(iParam17, &Var83, &Var92, &cVar173, &cVar245, iVar277, &Var179, &cVar251, iVar278);
				}
			}
			else
			{
				func_129(iParam17, &Var83, &Var92, &cVar173, &cVar245, iVar277, &Var179, &cVar251, iVar278);
			}
			if (bParam24)
			{
				if (bVar9)
				{
					func_129(iParam18, &Var101, &Var110, &cVar185, &cVar257, iVar279, &Var191, &cVar263, iVar280);
				}
			}
			else
			{
				func_129(iParam18, &Var101, &Var110, &cVar185, &cVar257, iVar279, &Var191, &cVar263, iVar280);
			}
		}
		func_48();
	}
}

void func_129(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)//Position - 0x846A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam3))
		{
			func_99(uParam1, iParam5);
			func_91(sParam3, sParam4, uParam1, 1, 0, 4, 0);
		}
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		HUD::GET_HUD_COLOUR(2, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::DRAW_RECT(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, iVar0, iVar1, iVar2, 153, false);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam6, false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam6))
			{
				func_99(uParam2, iParam8);
				func_91(sParam6, sParam7, uParam2, 1, 0, 4, 0);
			}
		}
	}
}

void func_130(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, var uParam5, var uParam6, var uParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x85E2
{
	switch (*uParam0)
	{
		case 5:
			uParam1->f_3 = (uParam1->f_3 + -0.009f);
			uParam1->f_2 = (uParam1->f_2 + -0.002f);
			if (func_124())
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0055f);
			}
			else
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0025f);
			}
			StringCopy(sParam2, "MPRPSymbol", 24);
			StringCopy(sParam3, "RP", 24);
			break;
		
		case 2:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Rockets", 24);
			break;
		
		case 3:
			StringCopy(sParam2, "MpSpecialRace", 24);
			StringCopy(sParam3, "HOMING_ROCKET", 24);
			break;
		
		case 1:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Spikes", 24);
			break;
		
		case 4:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Boost", 24);
			break;
		
		case 6:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeTick_32", 24);
			break;
		
		case 7:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeCross_32", 24);
			break;
		
		case 8:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Beast", 24);
			*iParam4 = 118;
			break;
		
		case 9:
			StringCopy(sParam2, "MPSpecialRace", 24);
			StringCopy(sParam3, "MACHINE_GUN", 24);
			break;
		
		case 10:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Random", 24);
			*iParam4 = 118;
			break;
		
		case 11:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Slow_Time", 24);
			break;
		
		case 12:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Swap", 24);
			*iParam4 = 118;
			break;
		
		case 13:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Testosterone", 24);
			*iParam4 = 118;
			break;
		
		case 14:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Thermal", 24);
			*iParam4 = 118;
			break;
		
		case 15:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Weed", 24);
			*iParam4 = 118;
			break;
		
		case 16:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Hidden", 24);
			*iParam4 = 118;
			break;
		
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
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
			if (*uParam5 != func_69())
			{
				*uParam6 = func_62(*uParam5);
				if (*uParam6 != 0)
				{
					StringCopy(sParam2, PED::GET_PEDHEADSHOT_TXD_STRING(*uParam6), 24);
					StringCopy(sParam3, PED::GET_PEDHEADSHOT_TXD_STRING(*uParam6), 24);
				}
			}
			uParam1->f_2 = (0.016f + 0.004f);
			uParam1->f_3 = 0.034f;
			if (*uParam0 == 18)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_cross", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 19)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_tick", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 20 || *uParam0 == 27)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_0", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 21 || *uParam0 == 28)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_1", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 22 || *uParam0 == 29)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_2", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 23 || *uParam0 == 30)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_3", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 24 || *uParam0 == 31)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_4", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 25 || *uParam0 == 32)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_5", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 26)
			{
				*iParam10 = iParam11;
			}
			if ((((((*uParam0 == 20 || *uParam0 == 21) || *uParam0 == 22) || *uParam0 == 23) || *uParam0 == 24) || *uParam0 == 25) || *uParam0 == 26)
			{
				uParam1->f_7 = 127;
			}
			break;
		
		case 0:
			uParam1->f_7 = 0;
			uParam7->f_7 = 0;
			break;
	}
}

void func_131(int iParam0)//Position - 0x8A36
{
	func_17(&(Global_1669875.f_464[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_485[iParam0 /*2*/]));
}

void func_132(int iParam0, int iParam1, float fParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, var uParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, bool bParam26, int iParam27, int iParam28, var uParam29, int iParam30, int iParam31)//Position - 0x8A5C
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_29(12, iParam0))
	{
		func_133(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, fParam2, sParam3, iParam4, iParam5, bParam6, iParam7, 1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, uParam18, bParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, bParam26, iParam27, iParam28, uParam29, iParam30, iParam31);
	}
}

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, var uParam23, bool bParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, bool bParam31, int iParam32, int iParam33, var uParam34, int iParam35, int iParam36)//Position - 0x8ABC
{
	struct<8> Var0;
	struct<8> Var9;
	struct<8> Var18;
	struct<8> Var27;
	struct<8> Var36;
	struct<8> Var45;
	struct<8> Var54;
	struct<8> Var63;
	struct<8> Var72;
	struct<8> Var81;
	struct<8> Var90;
	struct<8> Var99;
	struct<8> Var108;
	struct<8> Var117;
	struct<8> Var126;
	struct<8> Var135;
	var uVar144;
	var uVar145;
	var uVar146;
	var uVar147;
	var uVar148;
	char cVar149[24];
	struct<3> Var155;
	char cVar161[24];
	char cVar167[24];
	struct<3> Var173;
	char cVar179[24];
	char cVar185[24];
	struct<3> Var191;
	char cVar197[24];
	char cVar203[24];
	struct<3> Var209;
	char cVar215[24];
	char cVar221[24];
	struct<3> Var227;
	char cVar233[24];
	char cVar239[24];
	char cVar245[24];
	char cVar251[24];
	char cVar257[24];
	char cVar263[24];
	char cVar269[24];
	char cVar275[24];
	char cVar281[24];
	char cVar287[24];
	char cVar293[24];
	char cVar299[24];
	char cVar305[24];
	char cVar311[24];
	char cVar317[24];
	char cVar323[24];
	int iVar329;
	int iVar330;
	int iVar331;
	int iVar332;
	int iVar333;
	int iVar334;
	int iVar335;
	int iVar336;
	int iVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	int iVar341;
	int iVar342;
	int iVar343;
	int iVar344;
	bool bVar345;
	bool bVar346;
	
	Global_1669875++;
	if (func_126())
	{
		func_125(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_121(uParam1, 3);
		if (iParam5 < 1000000)
		{
			if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && fParam6 >= 100f) && MISC::ARE_STRINGS_EQUAL("AMCH_KMHN" /* GXT: ~1~km/h */, sParam7))
			{
				func_120(uParam2, 0, 0);
			}
			else if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12) && ((iParam5 > 999 || iParam9 > 999) || fParam6 > 1000f))
			{
				func_120(uParam2, 0, 0);
			}
			else if (iParam9 > 99)
			{
				func_119(uParam2, 0, 0);
			}
			else
			{
				func_118(uParam2, 0, 0);
			}
		}
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && (MISC::ARE_STRINGS_EQUAL("HUD_CASH" /* GXT: $~1~ */, sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /* GXT: -$~1~ */, sParam7)))
		{
			func_120(uParam2, 0, 0);
		}
		else
		{
			func_119(uParam2, 0, 0);
		}
		func_116(uParam1);
		func_115(uParam2);
		func_112(12, iParam0);
		if (Global_1669875 == 1)
		{
			func_111(iParam12);
		}
		func_106(uParam2, uParam3, uParam4, iParam12, uParam1);
		func_105(uParam2, iParam11);
		uParam2->f_6 = 255;
		Var9.f_0 = (*uParam4 + 0.095f);
		Var18.f_0 = (*uParam4 + 0.095f);
		Var27.f_0 = (*uParam4 + 0.095f);
		Var36.f_0 = (*uParam4 + 0.072f);
		Var45.f_0 = (*uParam4 + 0.072f);
		Var54.f_0 = (*uParam4 + 0.072f);
		Var63.f_0 = (*uParam4 + 0.049f);
		Var72.f_0 = (*uParam4 + 0.049f);
		Var81.f_0 = (*uParam4 + 0.049f);
		Var90.f_0 = (*uParam4 + 0.026f);
		Var99.f_0 = (*uParam4 + 0.026f);
		Var108.f_0 = (*uParam4 + 0.026f);
		Var117.f_0 = (*uParam4 + 0.003f);
		Var126.f_0 = (*uParam4 + 0.003f);
		Var135.f_0 = (*uParam4 + 0.003f);
		if (func_124())
		{
			Var9.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var18.f_1 = (uParam4->f_1 + 0.016f);
			Var27.f_1 = (uParam4->f_1 + 0.016f);
			Var36.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var45.f_1 = (uParam4->f_1 + 0.016f);
			Var54.f_1 = (uParam4->f_1 + 0.016f);
			Var63.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var72.f_1 = (uParam4->f_1 + 0.016f);
			Var81.f_1 = (uParam4->f_1 + 0.016f);
			Var90.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var99.f_1 = (uParam4->f_1 + 0.016f);
			Var108.f_1 = (uParam4->f_1 + 0.016f);
			Var117.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var126.f_1 = (uParam4->f_1 + 0.016f);
			Var135.f_1 = (uParam4->f_1 + 0.016f);
		}
		else
		{
			Var9.f_1 = (uParam4->f_1 + 0.0185f);
			Var18.f_1 = (uParam4->f_1 + 0.019f);
			Var27.f_1 = (uParam4->f_1 + 0.019f);
			Var36.f_1 = (uParam4->f_1 + 0.0185f);
			Var45.f_1 = (uParam4->f_1 + 0.019f);
			Var54.f_1 = (uParam4->f_1 + 0.019f);
			Var63.f_1 = (uParam4->f_1 + 0.0185f);
			Var72.f_1 = (uParam4->f_1 + 0.019f);
			Var81.f_1 = (uParam4->f_1 + 0.019f);
			Var90.f_1 = (uParam4->f_1 + 0.0185f);
			Var99.f_1 = (uParam4->f_1 + 0.019f);
			Var108.f_1 = (uParam4->f_1 + 0.019f);
			Var117.f_1 = (uParam4->f_1 + 0.0185f);
			Var126.f_1 = (uParam4->f_1 + 0.019f);
			Var135.f_1 = (uParam4->f_1 + 0.019f);
		}
		Var9.f_2 = (0.016f + 0.003f);
		Var18.f_2 = (0.016f + 0.003f);
		Var27.f_2 = (0.016f + 0.003f);
		Var36.f_2 = (0.016f + 0.003f);
		Var45.f_2 = (0.016f + 0.003f);
		Var54.f_2 = (0.016f + 0.003f);
		Var63.f_2 = (0.016f + 0.003f);
		Var72.f_2 = (0.016f + 0.003f);
		Var81.f_2 = (0.016f + 0.003f);
		Var90.f_2 = (0.016f + 0.003f);
		Var99.f_2 = (0.016f + 0.003f);
		Var108.f_2 = (0.016f + 0.003f);
		Var117.f_2 = (0.016f + 0.003f);
		Var126.f_2 = (0.016f + 0.003f);
		Var135.f_2 = (0.016f + 0.003f);
		Var9.f_3 = (0.032f + 0.004f);
		Var18.f_3 = (0.032f + 0.004f);
		Var27.f_3 = (0.032f + 0.004f);
		Var36.f_3 = (0.032f + 0.004f);
		Var45.f_3 = (0.032f + 0.004f);
		Var54.f_3 = (0.032f + 0.004f);
		Var63.f_3 = (0.032f + 0.004f);
		Var72.f_3 = (0.032f + 0.004f);
		Var81.f_3 = (0.032f + 0.004f);
		Var90.f_3 = (0.032f + 0.004f);
		Var99.f_3 = (0.032f + 0.004f);
		Var108.f_3 = (0.032f + 0.004f);
		Var117.f_3 = (0.032f + 0.004f);
		Var126.f_3 = (0.032f + 0.004f);
		Var135.f_3 = (0.032f + 0.004f);
		Var9.f_7 = 255;
		Var18.f_7 = 255;
		Var27.f_7 = 255;
		Var36.f_7 = 255;
		Var45.f_7 = 255;
		Var54.f_7 = 255;
		Var63.f_7 = 255;
		Var72.f_7 = 255;
		Var81.f_7 = 255;
		Var90.f_7 = 255;
		Var99.f_7 = 255;
		Var108.f_7 = 255;
		Var117.f_7 = 255;
		Var126.f_7 = 255;
		Var135.f_7 = 255;
		func_99(&Var9, 1);
		func_99(&Var18, 1);
		func_99(&Var27, 1);
		func_99(&Var36, 1);
		func_99(&Var45, 1);
		func_99(&Var54, 1);
		func_99(&Var63, 1);
		func_99(&Var72, 1);
		func_99(&Var81, 1);
		func_99(&Var90, 1);
		func_99(&Var99, 1);
		func_99(&Var108, 1);
		func_99(&Var117, 1);
		func_99(&Var126, 1);
		func_99(&Var135, 1);
		StringCopy(&cVar149, "", 24);
		StringCopy(&Var155, "", 24);
		StringCopy(&cVar161, "", 24);
		StringCopy(&cVar167, "", 24);
		StringCopy(&Var173, "", 24);
		StringCopy(&cVar179, "", 24);
		StringCopy(&cVar185, "", 24);
		StringCopy(&Var191, "", 24);
		StringCopy(&cVar197, "", 24);
		StringCopy(&cVar203, "", 24);
		StringCopy(&Var209, "", 24);
		StringCopy(&cVar215, "", 24);
		StringCopy(&cVar221, "", 24);
		StringCopy(&Var227, "", 24);
		StringCopy(&cVar233, "", 24);
		StringCopy(&cVar239, "", 24);
		StringCopy(&cVar245, "", 24);
		StringCopy(&cVar251, "", 24);
		StringCopy(&cVar257, "", 24);
		StringCopy(&cVar263, "", 24);
		StringCopy(&cVar269, "", 24);
		StringCopy(&cVar275, "", 24);
		StringCopy(&cVar281, "", 24);
		StringCopy(&cVar287, "", 24);
		StringCopy(&cVar293, "", 24);
		StringCopy(&cVar299, "", 24);
		StringCopy(&cVar305, "", 24);
		StringCopy(&cVar311, "", 24);
		StringCopy(&cVar317, "", 24);
		StringCopy(&cVar323, "", 24);
		iVar329 = 1;
		iVar330 = 1;
		iVar331 = 1;
		iVar332 = 1;
		iVar333 = 1;
		iVar334 = 1;
		iVar335 = 1;
		iVar336 = 1;
		iVar337 = 1;
		iVar338 = 1;
		iVar339 = 1;
		iVar340 = 1;
		iVar341 = 1;
		iVar342 = 1;
		iVar343 = 1;
		func_130(&iParam18, &Var9, &cVar149, &cVar239, &iVar329, &iParam13, &uVar144, &Var18, &Var155, &cVar245, &iVar330, iParam11, iParam25);
		func_130(&iParam19, &Var36, &cVar167, &cVar257, &iVar332, &iParam14, &uVar145, &Var45, &Var173, &cVar263, &iVar333, iParam11, iParam26);
		func_130(&iParam20, &Var63, &cVar185, &cVar275, &iVar335, &iParam15, &uVar146, &Var72, &Var191, &cVar281, &iVar336, iParam11, iParam27);
		func_130(&iParam21, &Var90, &cVar203, &cVar293, &iVar338, &iParam16, &uVar147, &Var99, &Var209, &cVar299, &iVar339, iParam11, iParam28);
		func_130(&iParam22, &Var117, &cVar221, &cVar311, &iVar341, &iParam17, &uVar148, &Var126, &Var227, &cVar317, &iVar342, iParam11, iParam29);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (func_139(&cVar149, &Var155, &cVar167, &Var173, &cVar185, &Var191, &cVar203, &Var209, &cVar221, &Var227) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar344 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar344);
			Var0.f_0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			if (iParam5 < 1000000)
			{
				Var0.f_0 = (Var0.f_0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.008f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.036f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			else
			{
				Var0.f_0 = (Var0.f_0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.01f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.033f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			if (func_124())
			{
				Var0.f_0 = (Var0.f_0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1669875.f_7129 = (Global_1669875.f_7129 + Var0.f_3);
			func_91("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_82(uParam1, 0);
			if (iParam35 == 0)
			{
				func_138(iParam0);
			}
			if (func_101(iParam35, &(Global_1669875.f_422[iParam0 /*2*/]), &(Global_1669875.f_443[iParam0 /*2*/])))
			{
				bVar345 = true;
			}
			else
			{
				bVar345 = false;
			}
			if (uParam34 && GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS())
			{
				if (bVar345)
				{
					if (iParam33 == iParam13 && iParam36 == 5)
					{
						func_137(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
					}
					if (iParam33 == iParam14 && iParam36 == 4)
					{
						func_137(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
					}
					if (iParam33 == iParam15 && iParam36 == 3)
					{
						func_137(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
					}
					if (iParam33 == iParam16 && iParam36 == 2)
					{
						func_137(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
					}
					if (iParam33 == iParam17 && iParam36 == 1)
					{
						func_137(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
					}
				}
				if (iParam33 == iParam13 && iParam36 != 5)
				{
					func_137(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				}
				if (iParam33 == iParam14 && iParam36 != 4)
				{
					func_137(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				}
				if (iParam33 == iParam15 && iParam36 != 3)
				{
					func_137(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				}
				if (iParam33 == iParam16 && iParam36 != 2)
				{
					func_137(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				}
				if (iParam33 == iParam17 && iParam36 != 1)
				{
					func_137(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
				}
				if (iParam33 != iParam13)
				{
					func_137(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				}
				if (iParam33 != iParam14)
				{
					func_137(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				}
				if (iParam33 != iParam15)
				{
					func_137(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				}
				if (iParam33 != iParam16)
				{
					func_137(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				}
				if (iParam33 != iParam17)
				{
					func_137(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
				}
			}
			else
			{
				func_137(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				func_137(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				func_137(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				func_137(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				func_137(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
			}
			if (iParam32 == 0)
			{
				func_136(iParam0);
			}
			if (func_101(iParam32, &(Global_1669875.f_380[iParam0 /*2*/]), &(Global_1669875.f_401[iParam0 /*2*/])))
			{
				bVar346 = true;
			}
			else
			{
				bVar346 = false;
			}
			if (bParam24)
			{
				switch (iParam30)
				{
					case -1:
						func_135(&Var27, &cVar161, &cVar251, &iVar331, &iParam13, &uParam23, iParam11);
						func_135(&Var54, &cVar179, &cVar269, &iVar334, &iParam14, &uParam23, iParam11);
						func_135(&Var81, &cVar197, &cVar287, &iVar337, &iParam15, &uParam23, iParam11);
						func_135(&Var108, &cVar215, &cVar305, &iVar340, &iParam16, &uParam23, iParam11);
						func_135(&Var135, &cVar233, &cVar323, &iVar343, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_134(&Var27, &cVar161, &cVar251, iVar331);
								func_134(&Var54, &cVar179, &cVar269, iVar334);
								func_134(&Var81, &cVar197, &cVar287, iVar337);
								func_134(&Var108, &cVar215, &cVar305, iVar340);
								func_134(&Var135, &cVar233, &cVar323, iVar343);
							}
						}
						else
						{
							func_134(&Var27, &cVar161, &cVar251, iVar331);
							func_134(&Var54, &cVar179, &cVar269, iVar334);
							func_134(&Var81, &cVar197, &cVar287, iVar337);
							func_134(&Var108, &cVar215, &cVar305, iVar340);
							func_134(&Var135, &cVar233, &cVar323, iVar343);
						}
						break;
					
					case 0:
						break;
					
					case 1:
						func_135(&Var27, &cVar161, &cVar251, &iVar331, &iParam13, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_134(&Var27, &cVar161, &cVar251, iVar331);
							}
						}
						else
						{
							func_134(&Var27, &cVar161, &cVar251, iVar331);
						}
						break;
					
					case 2:
						func_135(&Var54, &cVar179, &cVar269, &iVar334, &iParam14, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_134(&Var54, &cVar179, &cVar269, iVar334);
							}
						}
						else
						{
							func_134(&Var54, &cVar179, &cVar269, iVar334);
						}
						break;
					
					case 3:
						func_135(&Var81, &cVar197, &cVar287, &iVar337, &iParam15, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_134(&Var81, &cVar197, &cVar287, iVar337);
							}
						}
						else
						{
							func_134(&Var81, &cVar197, &cVar287, iVar337);
						}
						break;
					
					case 4:
						func_135(&Var108, &cVar215, &cVar305, &iVar340, &iParam16, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_134(&Var108, &cVar215, &cVar305, iVar340);
							}
						}
						else
						{
							func_134(&Var108, &cVar215, &cVar305, iVar340);
						}
						break;
					
					case 5:
						func_135(&Var135, &cVar233, &cVar323, &iVar343, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_134(&Var135, &cVar233, &cVar323, iVar343);
							}
						}
						else
						{
							func_134(&Var135, &cVar233, &cVar323, iVar343);
						}
						break;
					}
			}
			func_82(uParam2, 0);
			if (bParam10)
			{
				func_61(uParam4, uParam2, "???", "", 1, 2);
			}
			else if (func_56(sParam7))
			{
				if (iParam9 == 0)
				{
					if (iParam8 == 0)
					{
						if (iParam5 != -999)
						{
							func_59(uParam4, uParam2, "NUMBER", iParam5, 2);
						}
					}
					else
					{
						func_57(uParam4, uParam2, "NUMBER", fParam6, Global_2697805, 2);
					}
				}
				else
				{
					func_54(uParam4, uParam2, "TIMER_DASHES" /* GXT: ~1~/~1~ */, iParam5, iParam9, 2, 0);
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH" /* GXT: $~1~ */, sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S" /* GXT: $~a~ */, sParam7))
			{
				sParam7 = "HUD_CASH_S" /* GXT: $~a~ */;
				*uParam2 = 5;
				func_82(uParam2, 0);
				func_49(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /* GXT: -$~1~ */, sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S" /* GXT: -$~a~ */, sParam7))
			{
				*uParam2 = 5;
				func_82(uParam2, 0);
				sParam7 = "HUD_CASH_NEG_S" /* GXT: -$~a~ */;
				func_49(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (iParam8 == 0)
			{
				func_59(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else
			{
				func_57(uParam4, uParam2, sParam7, fParam6, Global_2697805, 2);
			}
			func_48();
		}
	}
}

void func_134(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x9B25
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1))
		{
			func_99(uParam0, iParam3);
			func_91(sParam1, sParam2, uParam0, 1, 0, 4, 0);
		}
	}
}

void func_135(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6)//Position - 0x9B60
{
	if (*uParam5 != func_69() && *iParam4 != func_69())
	{
		if (*uParam5 == *iParam4)
		{
			StringCopy(sParam1, "timerbar_sr", 24);
			StringCopy(sParam2, "timer_box", 24);
			*iParam3 = iParam6;
			uParam0->f_2 = (0.016f + 0.008f);
			uParam0->f_3 = 0.038f;
		}
	}
}

void func_136(int iParam0)//Position - 0x9BB6
{
	func_17(&(Global_1669875.f_380[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_401[iParam0 /*2*/]));
}

void func_137(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)//Position - 0x9BDC
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_99(uParam1, iParam5);
		func_91(sParam3, sParam4, uParam1, 1, 0, 4, 0);
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		HUD::GET_HUD_COLOUR(2, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::DRAW_RECT(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, iVar0, iVar1, iVar2, 153, false);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		{
			func_99(uParam2, iParam8);
			func_91(sParam6, sParam7, uParam2, 1, 0, 4, 0);
		}
	}
}

void func_138(int iParam0)//Position - 0x9D2E
{
	func_17(&(Global_1669875.f_422[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_443[iParam0 /*2*/]));
}

int func_139(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9)//Position - 0x9D54
{
	int iVar0;
	
	iVar0 = 1;
	if (func_140(sParam0, sParam1) == 0)
	{
		iVar0 = 0;
	}
	if (func_140(sParam2, sParam3) == 0)
	{
		iVar0 = 0;
	}
	if (func_140(sParam4, sParam5) == 0)
	{
		iVar0 = 0;
	}
	if (func_140(sParam6, sParam7) == 0)
	{
		iVar0 = 0;
	}
	if (func_140(sParam8, sParam9) == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_140(char* sParam0, char* sParam1)//Position - 0x9DAC
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam0, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam0))
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1))
		{
			iVar1 = 1;
		}
	}
	else
	{
		iVar1 = 1;
	}
	if (iVar0 && iVar1)
	{
		return 1;
	}
	return 0;
}

void func_141(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)//Position - 0x9E11
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_29(11, iParam0))
	{
		func_142(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, uParam1, 1, uParam2, uParam3, uParam4, uParam5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, iParam14);
	}
}

void func_142(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)//Position - 0x9E4F
{
	struct<8> Var0;
	bool bVar9;
	int iVar10;
	struct<8> Var11;
	struct<8> Var20;
	struct<8> Var29;
	struct<8> Var38;
	struct<8> Var47;
	struct<8> Var56;
	struct<8> Var65;
	struct<8> Var74;
	var uVar83;
	var uVar84;
	var uVar85;
	var uVar86;
	char cVar87[24];
	struct<3> Var93;
	char cVar99[24];
	struct<3> Var105;
	char cVar111[24];
	struct<3> Var117;
	char cVar123[24];
	struct<3> Var129;
	char[] cVar135[8];
	char[] cVar141[8];
	char[] cVar147[8];
	char[] cVar153[8];
	char[] cVar159[8];
	char[] cVar165[8];
	char[] cVar171[8];
	char[] cVar177[8];
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	
	Global_1669875++;
	if (func_126())
	{
		func_112(11, iParam0);
		func_121(uParam1, 0);
		func_116(uParam1);
		if (Global_1669875 == 1)
		{
			func_111(iParam6);
		}
		func_118(uParam2, 0, 0);
		func_115(uParam2);
		func_106(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_125(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (iParam19 == 0)
		{
			func_143(iParam0);
		}
		if (func_101(iParam19, &(Global_1669875.f_338[iParam0 /*2*/]), &(Global_1669875.f_359[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			Var0.f_0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			Var0.f_0 = (Var0.f_0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_124())
			{
				Var0.f_0 = (Var0.f_0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1669875.f_7129 = (Global_1669875.f_7129 + Var0.f_3);
			func_91("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_82(uParam1, 0);
			Var11.f_0 = ((*uParam4 + 0.145f) + 0.001f);
			Var20.f_0 = ((*uParam4 + 0.145f) + 0.001f);
			Var29.f_0 = (*uParam4 + 0.123f);
			Var38.f_0 = (*uParam4 + 0.123f);
			Var47.f_0 = (*uParam4 + 0.101f);
			Var56.f_0 = (*uParam4 + 0.101f);
			Var65.f_0 = (*uParam4 + 0.078f);
			Var74.f_0 = (*uParam4 + 0.078f);
			if (func_124())
			{
				Var11.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var20.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var29.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var38.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var47.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var56.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var65.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var74.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
			}
			else
			{
				Var11.f_1 = (uParam4->f_1 + 0.0185f);
				Var20.f_1 = (uParam4->f_1 + 0.019f);
				Var29.f_1 = (uParam4->f_1 + 0.0185f);
				Var38.f_1 = (uParam4->f_1 + 0.019f);
				Var47.f_1 = (uParam4->f_1 + 0.0185f);
				Var56.f_1 = (uParam4->f_1 + 0.019f);
				Var65.f_1 = (uParam4->f_1 + 0.0185f);
				Var74.f_1 = (uParam4->f_1 + 0.019f);
			}
			Var11.f_2 = (0.016f + 0.003f);
			Var20.f_2 = (0.016f + 0.003f);
			Var29.f_2 = (0.016f + 0.003f);
			Var38.f_2 = (0.016f + 0.003f);
			Var47.f_2 = (0.016f + 0.003f);
			Var56.f_2 = (0.016f + 0.003f);
			Var65.f_2 = (0.016f + 0.003f);
			Var74.f_2 = (0.016f + 0.003f);
			Var11.f_3 = (0.032f + 0.004f);
			Var20.f_3 = (0.032f + 0.004f);
			Var29.f_3 = (0.032f + 0.004f);
			Var38.f_3 = (0.032f + 0.004f);
			Var47.f_3 = (0.032f + 0.004f);
			Var56.f_3 = (0.032f + 0.004f);
			Var65.f_3 = (0.032f + 0.004f);
			Var74.f_3 = (0.032f + 0.004f);
			Var11.f_7 = 255;
			Var20.f_7 = 255;
			Var29.f_7 = 255;
			Var38.f_7 = 255;
			Var47.f_7 = 255;
			Var56.f_7 = 255;
			Var65.f_7 = 255;
			Var74.f_7 = 255;
			func_99(&Var11, 1);
			func_99(&Var20, 1);
			func_99(&Var29, 1);
			func_99(&Var38, 1);
			func_99(&Var47, 1);
			func_99(&Var56, 1);
			func_99(&Var65, 1);
			func_99(&Var74, 1);
			StringCopy(&cVar87, "", 24);
			StringCopy(&Var93, "", 24);
			StringCopy(&cVar99, "", 24);
			StringCopy(&Var105, "", 24);
			StringCopy(&cVar111, "", 24);
			StringCopy(&Var117, "", 24);
			StringCopy(&cVar123, "", 24);
			StringCopy(&Var129, "", 24);
			iVar183 = 1;
			iVar184 = 1;
			iVar185 = 1;
			iVar186 = 1;
			iVar187 = 1;
			iVar188 = 1;
			iVar189 = 1;
			iVar190 = 1;
			func_130(&iParam11, &Var11, &cVar87, &cVar135, &iVar183, &uParam7, &uVar83, &Var20, &Var93, &cVar141, &iVar184, uParam5, 0);
			func_130(&iParam12, &Var29, &cVar99, &cVar147, &iVar185, &uParam8, &uVar84, &Var38, &Var105, &cVar153, &iVar186, uParam5, 0);
			func_130(&iParam13, &Var47, &cVar111, &cVar159, &iVar187, &uParam9, &uVar85, &Var56, &Var117, &cVar165, &iVar188, uParam5, 0);
			func_130(&iParam14, &Var65, &cVar123, &cVar171, &iVar189, &uParam10, &uVar86, &Var74, &Var129, &cVar177, &iVar190, uParam5, 0);
			if (bParam15)
			{
				if (bVar9)
				{
					func_129(iParam11, &Var11, &Var20, &cVar87, &cVar135, iVar183, &Var93, &cVar141, iVar184);
				}
			}
			else
			{
				func_129(iParam11, &Var11, &Var20, &cVar87, &cVar135, iVar183, &Var93, &cVar141, iVar184);
			}
			if (bParam16)
			{
				if (bVar9)
				{
					func_129(iParam12, &Var29, &Var38, &cVar99, &cVar147, iVar185, &Var105, &cVar153, iVar186);
				}
			}
			else
			{
				func_129(iParam12, &Var29, &Var38, &cVar99, &cVar147, iVar185, &Var105, &cVar153, iVar186);
			}
			if (bParam17)
			{
				if (bVar9)
				{
					func_129(iParam13, &Var47, &Var56, &cVar111, &cVar159, iVar187, &Var117, &cVar165, iVar188);
				}
			}
			else
			{
				func_129(iParam13, &Var47, &Var56, &cVar111, &cVar159, iVar187, &Var117, &cVar165, iVar188);
			}
			if (bParam18)
			{
				if (bVar9)
				{
					func_129(iParam14, &Var65, &Var74, &cVar123, &cVar171, iVar189, &Var129, &cVar177, iVar190);
				}
			}
			else
			{
				func_129(iParam14, &Var65, &Var74, &cVar123, &cVar171, iVar189, &Var129, &cVar177, iVar190);
			}
		}
		func_48();
	}
}

void func_143(int iParam0)//Position - 0xA429
{
	func_17(&(Global_1669875.f_338[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_359[iParam0 /*2*/]));
}

void func_144(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, bool bParam13, int iParam14, int iParam15)//Position - 0xA44F
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_29(10, iParam0))
	{
		uVar13 = 4;
		func_145(iParam0, &uVar0, &uVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam7, bParam6, iParam5, uParam8, iParam9, iParam10, sParam11, sParam12, bParam13, iParam14, iParam15);
	}
}

void func_145(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, bool bParam17, int iParam18, int iParam19)//Position - 0xA492
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	
	Global_1669875++;
	if (func_126())
	{
		if (iParam13 == 2)
		{
		}
		func_112(10, iParam0);
		if (func_124())
		{
			func_158(uParam1, 0);
		}
		else if (bParam17)
		{
			func_121(uParam1, 0);
		}
		else if (bParam10)
		{
			func_122(uParam1, 3);
		}
		else
		{
			func_121(uParam1, 0);
		}
		if (Global_1669875 == 1)
		{
			func_111(iParam6);
		}
		func_154(uParam2, uParam3, &Var0, iParam6, uParam1);
		func_116(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_113())));
		if (iParam11 == 0)
		{
			func_153(iParam0);
		}
		if (iParam14 == 0)
		{
			func_152(iParam0);
		}
		if (func_101(iParam11, &(Global_1669875.f_296[iParam0 /*2*/]), &(Global_1669875.f_317[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			Var0.f_0 = *uParam2;
			Var0.f_1 = uParam2->f_1;
			Var0.f_0 = (Var0.f_0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_124())
			{
				Var0.f_0 = (Var0.f_0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1669875.f_7129 = (Global_1669875.f_7129 + Var0.f_3);
			if (iParam14 > 0)
			{
				Var11 = { Var0 };
				if (func_252(&(Global_1669875.f_905[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_100(Global_1669875.f_905[iParam0 /*2*/], 1250, 0))
					{
						Global_1669875.f_926[iParam0] = (Global_1669875.f_926[iParam0] - 17);
					}
					Var11.f_7 = Global_1669875.f_926[iParam0];
					func_99(&Var11, iParam8);
					func_91("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
				}
			}
			else
			{
				Global_1669875.f_926[iParam0] = 255;
				func_90(&(Global_1669875.f_905[iParam0 /*2*/]), 0, 0);
			}
			func_91("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			func_84(&Var0, iParam18);
			if (func_124())
			{
				if (bParam10)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
			}
			iVar10 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			if (bParam17)
			{
				func_83(uParam1, iParam8);
				func_82(uParam1, 0);
				func_61(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else if (bParam10 == 1)
			{
				func_83(uParam1, iParam8);
				func_82(uParam1, 0);
				func_61(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else
			{
				func_82(uParam1, 0);
				if (iParam9 == -1)
				{
					func_80(uParam2, uParam1, sParam7, 0, 1);
				}
				else
				{
					func_59(uParam2, uParam1, sParam7, iParam9, 2);
				}
			}
			iVar10 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			if (bVar9)
			{
				func_148(iParam4, iParam5, uParam3, iParam8, uParam12, iVar10);
				func_146(sParam15, uParam3, iVar10, sParam16);
			}
			func_48();
		}
	}
}

void func_146(char* sParam0, var uParam1, int iParam2, char* sParam3)//Position - 0xA821
{
	struct<9> Var0[1];
	
	Var0[0 /*9*/] = 0f;
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = -0.015f;
	Var0[0 /*9*/].f_3 = -0.025f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam3))
	{
		func_147(uParam1[0 /*9*/], &(Var0[0 /*9*/]));
		func_99(uParam1[0 /*9*/], 1);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
		(uParam1[0 /*9*/])->f_7 = 255;
		func_91(sParam3, sParam0, uParam1[0 /*9*/], 0, 0, iParam2, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	}
}

void func_147(var uParam0, var uParam1)//Position - 0xA8A6
{
	*uParam0 = (*uParam0 + *uParam1);
	uParam0->f_1 = (uParam0->f_1 + uParam1->f_1);
	uParam0->f_2 = (uParam0->f_2 + uParam1->f_2);
	uParam0->f_3 = (uParam0->f_3 + uParam1->f_3);
	uParam0->f_4 = (uParam0->f_4 + uParam1->f_4);
	uParam0->f_5 = (uParam0->f_5 + uParam1->f_5);
	uParam0->f_6 = (uParam0->f_6 + uParam1->f_6);
	uParam0->f_7 = (uParam0->f_7 + uParam1->f_7);
}

void func_148(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)//Position - 0xA913
{
	struct<9> Var0[2];
	float fVar19;
	
	Var0[0 /*9*/] = 0.003f;
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.011f;
	Var0[0 /*9*/].f_3 = 0.059f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.011f;
	Var0[1 /*9*/].f_3 = 0.059f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_147(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_147(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_99(uParam2[1 /*9*/], iParam3);
		func_99(uParam2[3 /*9*/], iParam3);
		fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_91("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_99(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_91("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_149(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4, 0, 1);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_91("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_149(struct<9> Param0, float fParam9, var uParam10, int iParam11, int iParam12, var uParam13, float fParam14, bool bParam15)//Position - 0xAA68
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
	float fVar9;
	float fVar10;
	
	fVar0 = Param0.f_2;
	fVar1 = 0f;
	fVar2 = func_151(Param0);
	fVar3 = fParam9;
	if (fParam9 < 0f)
	{
		fVar3 = 0f;
	}
	if (fParam9 > 100f)
	{
		fVar3 = 100f;
	}
	if (bParam15)
	{
		if (fParam9 > 95f && fParam9 < 100f)
		{
			fVar3 = 96f;
		}
	}
	if (iParam12 == 0)
	{
		fVar4 = ((fVar1 - fVar0) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar0;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		fVar2 = Param0.f_0;
		fVar8 = func_150(Param0);
		fVar9 = (fVar8 - (fVar7 / 2f));
	}
	else
	{
		fVar4 = ((fVar0 - fVar1) / 100f);
		fVar5 = fVar3;
		fVar6 = 0f;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		if (fParam9 >= 100f)
		{
			fVar7 = Param0.f_2;
		}
		fVar8 = Param0.f_0;
		fVar4 = ((fVar8 - fVar2) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar2;
		fVar9 = ((fVar4 * fVar5) + fVar6);
	}
	if (fParam14 > 0f && fParam14 < 100f)
	{
		fVar10 = (Param0.f_2 * 0.01f);
		fVar9 = (fVar9 + (fParam14 * fVar10));
	}
	*uParam10 = fVar9;
	uParam10->f_1 = Param0.f_1;
	uParam10->f_2 = fVar7;
	if (iParam11 == 1)
	{
		uParam10->f_3 = Param0.f_3;
	}
	uParam10->f_8 = Param0.f_8;
}

float func_150(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0xABAD
{
	float fVar0;
	float fVar1;
	
	fVar0 = (Param0.f_2 / 2f);
	fVar1 = Param0.f_0;
	fVar1 = (fVar1 + fVar0);
	fVar1 = (fVar1 - 0.002f);
	return fVar1;
}

float func_151(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0xABD4
{
	float fVar0;
	float fVar1;
	
	fVar0 = (Param0.f_2 / 2f);
	fVar1 = Param0.f_0;
	fVar1 = (fVar1 - fVar0);
	return fVar1;
}

void func_152(int iParam0)//Position - 0xABF1
{
	func_17(&(Global_1669875.f_800[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_821[iParam0 /*2*/]));
}

void func_153(int iParam0)//Position - 0xAC17
{
	func_17(&(Global_1669875.f_296[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_317[iParam0 /*2*/]));
	Global_1669875.f_1177.f_205[iParam0] = -1;
}

void func_154(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)//Position - 0xAC4B
{
	float fVar0;
	
	fVar0 = func_157(0, 1);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_72(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_109(uParam4));
	func_155(uParam1, iParam3, -1f, -1f);
	func_107(iParam3, -fVar0);
	func_125(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_155(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0xAC9F
{
	float fVar0;
	float fVar1;
	
	if (!func_156(fParam2, fParam3))
	{
		fVar0 = (func_73() + func_72(iParam1));
		fVar1 = func_71();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.062f;
	(uParam0[0 /*9*/])->f_3 = 0.016f;
	(uParam0[0 /*9*/])->f_4 = 255;
	(uParam0[0 /*9*/])->f_5 = 255;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.069f;
	(uParam0[1 /*9*/])->f_3 = 0.011f;
	(uParam0[1 /*9*/])->f_4 = 255;
	(uParam0[1 /*9*/])->f_5 = 255;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.069f;
	(uParam0[2 /*9*/])->f_3 = 0.009f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 120;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.069f;
	(uParam0[3 /*9*/])->f_3 = 0.008f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 90;
}

int func_156(float fParam0, float fParam1)//Position - 0xADF9
{
	if (fParam0 == -1f && fParam1 == -1f)
	{
		return 0;
	}
	return 1;
}

float func_157(int iParam0, bool bParam1)//Position - 0xAE16
{
	float fVar0;
	
	fVar0 = ((0.025f + 0.006f) + 0.0009f);
	if (iParam0 == 1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	if (bParam1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	return fVar0;
}

void func_158(var uParam0, int iParam1)//Position - 0xAE52
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.508f - 0.03f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_159(int iParam0, int iParam1, int iParam2)//Position - 0xAEA4
{
	var uVar0;
	var uVar11;
	
	if (func_29(9, iParam0))
	{
		func_160(iParam0, &uVar0, &uVar11, 1, iParam1, iParam2);
	}
}

void func_160(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0xAEC6
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	var uVar5;
	
	Global_1669875++;
	if (func_126())
	{
		HUD::GET_HUD_COLOUR(iParam5, &uVar0, &uVar1, &uVar2, &uVar3);
		func_163(uParam1, 3, uVar0, uVar1, uVar2);
		if (func_124())
		{
			uParam1->f_1 = 2f;
			uParam1->f_2 = 2.7f;
		}
		if (Global_1669875 == 1)
		{
			func_111(iParam3);
		}
		fVar4 = 0.131f;
		if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
		{
			fVar4 = 0.0872f;
		}
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
		{
			fVar4 = 0.095f;
		}
		*uParam2 = 0.795f;
		uParam2->f_1 = ((func_72(iParam3) + func_108(uParam1)) - fVar4);
		func_115(uParam1);
		func_82(uParam1, 0);
		func_112(9, iParam0);
		Global_1669875.f_7129 = (Global_1669875.f_7129 + (fVar4 - 0.036f));
		func_162(&uVar5, iParam4);
		func_80(uParam2, uParam1, func_161(&uVar5), 0, 1);
		func_48();
	}
}

var func_161(var uParam0)//Position - 0xAFAB
{
	return uParam0;
}

void func_162(var uParam0, int iParam1)//Position - 0xAFB5
{
	struct<4> Var0;
	
	StringCopy(&Var0, "RACE_POS_", 16);
	StringIntConCat(&Var0, iParam1, 16);
	*uParam0 = { Var0 };
}

void func_163(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0xAFD3
{
	*uParam0 = 6;
	uParam0->f_1 = 3f;
	uParam0->f_2 = 3.7f;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	uParam0->f_5 = uParam4;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 11;
}

void func_164(int iParam0, char* sParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0xB01B
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_29(8, iParam0))
	{
		uVar13 = 2;
		func_165(iParam0, &uVar0, &uVar11, &uVar13, 1, sParam1, iParam3, uParam2, uParam4, uParam5, uParam6);
	}
}

void func_165(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0xB04C
{
	struct<9> Var0;
	struct<8> Var9;
	
	Global_1669875++;
	if (func_126())
	{
		func_125(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_121(uParam1, 0);
		func_116(uParam1);
		func_112(8, iParam0);
		if (Global_1669875 == 1)
		{
			func_111(iParam4);
		}
		func_166(uParam2, iParam4, uParam1, &Var0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Hunting", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Hunting"))
		{
			Var9.f_0 = *uParam2;
			Var9.f_1 = uParam2->f_1;
			Var9.f_0 = (Var9.f_0 + 0.079f);
			Var9.f_1 = (Var9.f_1 + 0.008f);
			Var9.f_2 = (Var9.f_2 + 0.157f);
			Var9.f_3 = (Var9.f_3 + 0.036f);
			Var9.f_4 += 255;
			Var9.f_5 += 255;
			Var9.f_6 += 255;
			Var9.f_7 = 140;
			if (func_124())
			{
				Var9.f_0 = (Var9.f_0 + -0.025f);
				Var9.f_2 = (Var9.f_2 + 0.05f);
			}
			Global_1669875.f_7129 = (Global_1669875.f_7129 + Var9.f_3);
			func_91("TimerBars", "ALL_BLACK_bg", &Var9, 1, 0, 4, 0);
			Var0.f_4 = uParam8;
			Var0.f_5 = uParam9;
			Var0.f_6 = uParam10;
			Var0.f_7 = 255;
			Var0.f_8 = uParam7;
			func_91("Hunting", "HuntingWindArrow_32", &Var0, 1, 0, 4, 0);
			uParam1->f_3 = uParam8;
			uParam1->f_4 = uParam9;
			uParam1->f_5 = uParam10;
			uParam1->f_6 = 255;
			func_82(uParam1, 0);
			uParam7 = uParam7;
			(*uParam3)[0 /*9*/] = (*uParam3)[0 /*9*/];
			func_59(uParam2, uParam1, sParam5, iParam6, 2);
			func_48();
		}
	}
}

void func_166(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0xB1E1
{
	float fVar0;
	
	fVar0 = func_157(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_72(iParam1);
	uParam0->f_1 = (uParam0->f_1 + func_109(uParam2));
	func_107(iParam1, -fVar0);
	uParam0->f_1 = (uParam0->f_1 + func_109(uParam2));
	*uParam3 = 0.9375f;
	uParam3->f_1 = (uParam0->f_1 + 0.009f);
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
}

void func_167(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, float fParam17, float fParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, bool bParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55)//Position - 0xB252
{
	var uVar0;
	var uVar11;
	var uVar13;
	var uVar95;
	
	if (func_29(2, iParam0))
	{
		uVar13 = 9;
		if (iParam1 < 9)
		{
			func_168(iParam0, &uVar0, &uVar11, &uVar13, &uVar95, iParam1, 1, iParam3, iParam4, sParam2, iParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, iParam14, iParam15, bParam16, fParam17, fParam18, uParam19, uParam20, uParam21, uParam22, uParam23, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, iParam35, iParam36, iParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45, bParam46, iParam47, iParam48, iParam49, iParam50, iParam51, iParam52, iParam53, iParam54, iParam55);
		}
	}
}

void func_168(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20, bool bParam21, float fParam22, float fParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, bool bParam51, int iParam52, int iParam53, int iParam54, int iParam55, int iParam56, int iParam57, int iParam58, int iParam59, int iParam60)//Position - 0xB2F1
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	
	Global_1669875++;
	if (func_126())
	{
		if (iParam40 == 2)
		{
		}
		func_112(2, iParam0);
		if (Global_1669875 == 1)
		{
			func_111(iParam6);
		}
		func_175(uParam2, uParam3, &Var0, uParam4, iParam6, fParam22, fParam23, uParam1);
		if (func_124())
		{
			func_158(uParam1, 0);
		}
		else if (bParam51)
		{
			func_121(uParam1, 0);
		}
		else if (bParam21)
		{
			func_122(uParam1, 3);
		}
		else
		{
			func_121(uParam1, 0);
		}
		func_116(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_113())));
		if (iParam19 == 0)
		{
			func_174(iParam0);
		}
		if (iParam41 == 0)
		{
			func_173(iParam0);
		}
		iVar10 = func_102();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			if (func_101(iParam19, &(Global_1669875.f_212[iParam0 /*2*/]), &(Global_1669875.f_233[iParam0 /*2*/])))
			{
				bVar9 = true;
			}
			else
			{
				bVar9 = false;
			}
			if (!func_156(fParam22, fParam23))
			{
				Var0.f_0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				Var0.f_0 = (Var0.f_0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.012f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.028f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
				if (func_124())
				{
					Var0.f_0 = (Var0.f_0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1669875.f_7129 = (Global_1669875.f_7129 + Var0.f_3);
				if (iParam41 > 0)
				{
					Var11 = { Var0 };
					if (func_252(&(Global_1669875.f_1065[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_100(Global_1669875.f_1065[iParam0 /*2*/], 1250, 0))
						{
							Global_1669875.f_1086[iParam0] = (Global_1669875.f_1086[iParam0] - 17);
						}
						Var11.f_7 = Global_1669875.f_1086[iParam0];
						func_99(&Var11, iParam7);
						func_91("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1669875.f_1086[iParam0] = 255;
					func_90(&(Global_1669875.f_1065[iParam0 /*2*/]), 0, 0);
				}
				func_91("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_84(&Var0, iParam52);
			iVar10 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			func_83(uParam1, iParam42);
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
			{
				uParam2->f_1 = (uParam2->f_1 + -0.009f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + -0.003f);
			}
			if (func_124())
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.007f);
				}
			}
			if (func_124() == 0)
			{
				if (bParam51)
				{
					uParam2->f_1 = (uParam2->f_1 + 0.003f);
				}
				else if (bParam21)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.002f);
				}
			}
			else if (bParam21)
			{
				uParam2->f_1 = (uParam2->f_1 + 0.007f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + 0.003f);
			}
			if (!func_156(fParam22, fParam23))
			{
				func_82(uParam1, 0);
				if (bParam51)
				{
					func_61(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (bParam21 == 1)
				{
					func_61(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam20 == -1)
				{
					func_80(uParam2, uParam1, sParam9, 0, 1);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 - -0.003f);
					func_59(uParam2, uParam1, sParam9, iParam20, 2);
				}
			}
			if (bVar9)
			{
				func_169(iParam5, uParam3, iParam7, iParam8, iParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16, uParam17, uParam18, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, uParam35, uParam36, uParam37, uParam38, uParam39, iVar10, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50, iParam53, iParam54, iParam55, iParam56, iParam57, iParam58, iParam59, iParam60);
			}
			func_48();
		}
	}
}

void func_169(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45)//Position - 0xB6FF
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<9> Var5;
	bool bVar14;
	
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Cross", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Cross"))
	{
		fVar3 = -0.0094f;
		iVar4 = 0;
		while (iVar4 <= (iParam0 - 1))
		{
			(*uParam1)[iVar4 /*9*/] = ((*uParam1)[iVar4 /*9*/] + (fVar3 * IntToFloat(iVar4)));
			if (func_172(iVar4, iParam4))
			{
				switch (iVar4)
				{
					case 0:
						bVar0 = uParam5;
						iVar1 = uParam13;
						iVar2 = uParam21;
						break;
					
					case 1:
						bVar0 = uParam6;
						iVar1 = uParam14;
						iVar2 = uParam22;
						break;
					
					case 2:
						bVar0 = uParam7;
						iVar1 = uParam15;
						iVar2 = uParam23;
						break;
					
					case 3:
						bVar0 = uParam8;
						iVar1 = uParam16;
						iVar2 = uParam24;
						break;
					
					case 4:
						bVar0 = uParam9;
						iVar1 = uParam17;
						iVar2 = uParam25;
						break;
					
					case 5:
						bVar0 = uParam10;
						iVar1 = uParam18;
						iVar2 = uParam26;
						break;
					
					case 6:
						bVar0 = uParam11;
						iVar1 = uParam19;
						iVar2 = uParam27;
						break;
					
					case 7:
						bVar0 = uParam12;
						iVar1 = uParam20;
						iVar2 = uParam28;
						break;
				}
				bVar14 = false;
				if (iVar2 == 2)
				{
					bVar14 = true;
					iVar2 = 1;
				}
				Var5 = { func_171(*(uParam1[iVar4 /*9*/]), bVar0, iParam2, iParam3, iVar1, iVar2) };
				if (bVar14)
				{
					Var5.f_7 = 51;
				}
				func_91("TimerBars", "Circle_checkpoints", &Var5, 0, 0, iParam29, 0);
				if (func_170(iVar4, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37))
				{
					switch (iVar4)
					{
						case 0:
							func_99(uParam1[iVar4 /*9*/], iParam38);
							break;
						
						case 1:
							func_99(uParam1[iVar4 /*9*/], iParam39);
							break;
						
						case 2:
							func_99(uParam1[iVar4 /*9*/], iParam40);
							break;
						
						case 3:
							func_99(uParam1[iVar4 /*9*/], iParam41);
							break;
						
						case 4:
							func_99(uParam1[iVar4 /*9*/], iParam42);
							break;
						
						case 5:
							func_99(uParam1[iVar4 /*9*/], iParam43);
							break;
						
						case 6:
							func_99(uParam1[iVar4 /*9*/], iParam44);
							break;
						
						case 7:
							func_99(uParam1[iVar4 /*9*/], iParam45);
							break;
					}
					func_91("Cross", "Circle_checkpoints_Cross", uParam1[iVar4 /*9*/], 0, 0, iParam29, 0);
				}
			}
			iVar4++;
		}
	}
}

int func_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xB93F
{
	if (iParam0 == 0 && iParam1 == 1)
	{
		return 1;
	}
	if (iParam0 == 1 && iParam2 == 1)
	{
		return 1;
	}
	if (iParam0 == 2 && iParam3 == 1)
	{
		return 1;
	}
	if (iParam0 == 3 && iParam4 == 1)
	{
		return 1;
	}
	if (iParam0 == 4 && iParam5 == 1)
	{
		return 1;
	}
	if (iParam0 == 5 && iParam6 == 1)
	{
		return 1;
	}
	if (iParam0 == 6 && iParam7 == 1)
	{
		return 1;
	}
	if (iParam0 == 7 && iParam8 == 1)
	{
		return 1;
	}
	return 0;
}

struct<9> func_171(struct<9> Param0, bool bParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xB9E8
{
	struct<9> Var0;
	
	Var0 = { Param0 };
	if (iParam12 == 0)
	{
		if (bParam9)
		{
			func_99(&Var0, iParam10);
		}
		else
		{
			func_99(&Var0, iParam11);
		}
	}
	else if (bParam9)
	{
		func_99(&Var0, iParam12);
	}
	else
	{
		func_99(&Var0, iParam13);
	}
	if (bParam9 == 0)
	{
	}
	return Var0;
}

int func_172(int iParam0, int iParam1)//Position - 0xBA3E
{
	if (iParam1 == -1)
	{
		return 1;
	}
	if (iParam0 > iParam1)
	{
		return 0;
	}
	return 1;
}

void func_173(int iParam0)//Position - 0xBA5C
{
	func_17(&(Global_1669875.f_716[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_737[iParam0 /*2*/]));
}

void func_174(int iParam0)//Position - 0xBA82
{
	func_17(&(Global_1669875.f_212[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_233[iParam0 /*2*/]));
}

void func_175(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, float fParam6, var uParam7)//Position - 0xBAA6
{
	float fVar0;
	
	fVar0 = func_157(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_72(iParam4);
	uParam0->f_1 = (uParam0->f_1 + func_109(uParam7));
	func_177(uParam1, iParam4, fParam5, fParam6);
	func_176(uParam3);
	if (!func_156(fParam5, fParam6))
	{
		func_107(iParam4, -fVar0);
	}
	func_125(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_176(var uParam0)//Position - 0xBB0E
{
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
}

void func_177(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0xBB4E
{
	float fVar0;
	float fVar1;
	
	if (!func_156(fParam2, fParam3))
	{
		fVar0 = (func_73() + func_72(iParam1));
		fVar1 = func_178();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
}

float func_178()//Position - 0xBDC8
{
	float fVar0;
	
	fVar0 = ((((((((0.919f - 0.081f) + 0.004f) - 0.006f) + 0.05f) - 0.001f) - 0.005f) + 0.065f) - 0.0005f);
	return fVar0;
}

void func_179(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, int iParam19, int iParam20, bool bParam21, int iParam22, bool bParam23, bool bParam24, int iParam25, int iParam26)//Position - 0xBE09
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_29(6, iParam0))
	{
		func_47(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, iParam8, fParam9, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, "", bParam18, iParam19, iParam20, bParam21, iParam22, bParam23, bParam24, iParam25, 0, 0, -1, 0, 0, 0, 0, iParam26);
	}
}

void func_180(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, var uParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, int iParam24, bool bParam25, float fParam26, float fParam27, bool bParam28, int iParam29, float fParam30, bool bParam31, int iParam32, int iParam33, float fParam34, int iParam35, bool bParam36, var uParam37, int iParam38, float fParam39)//Position - 0xBE68
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_29(0, iParam0))
	{
		uVar13 = 4;
		func_181(iParam0, &uVar0, &uVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam9, bParam8, iParam5, fParam6, fParam7, uParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, iParam18, bParam19, iParam20, bParam21, iParam22, iParam23, iParam24, bParam25, fParam26, fParam27, bParam28, iParam29, fParam30, bParam31, iParam32, iParam33, fParam34, iParam35, bParam36, uParam37, iParam38, fParam39);
	}
}

void func_181(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, bool bParam23, int iParam24, bool bParam25, int iParam26, int iParam27, int iParam28, bool bParam29, float fParam30, float fParam31, bool bParam32, int iParam33, float fParam34, bool bParam35, int iParam36, int iParam37, float fParam38, int iParam39, bool bParam40, var uParam41, int iParam42, float fParam43)//Position - 0xBEDA
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	float fVar20;
	float fVar21;
	struct<8> Var22;
	
	Global_1669875++;
	if (func_126())
	{
		if (iParam15 == 2)
		{
		}
		func_112(0, iParam0);
		if (func_124())
		{
			if (bParam17)
			{
				func_189(uParam1, 0);
			}
			else
			{
				func_158(uParam1, 0);
			}
		}
		else if (bParam19)
		{
			func_121(uParam1, 0);
		}
		else if (bParam10)
		{
			func_122(uParam1, 3);
		}
		else if (bParam17)
		{
			func_188(uParam1, 0);
		}
		else
		{
			func_121(uParam1, 0);
		}
		if (Global_1669875 == 1)
		{
			func_111(iParam6);
		}
		func_187(uParam2, uParam3, &Var0, iParam6, fParam12, fParam13, uParam1, bParam17);
		func_116(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_113())));
		if (iParam11 == 0)
		{
			func_153(iParam0);
		}
		if (iParam16 == 0)
		{
			func_152(iParam0);
		}
		if (func_101(iParam11, &(Global_1669875.f_296[iParam0 /*2*/]), &(Global_1669875.f_317[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			if (!func_156(fParam12, fParam13))
			{
				Var0.f_0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (bParam17)
				{
					Var0.f_0 = (Var0.f_0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0.f_0 = (Var0.f_0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_124())
				{
					Var0.f_0 = (Var0.f_0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1669875.f_7129 = (Global_1669875.f_7129 + (Var0.f_3 + 0.01f));
				if (iParam16 > 0)
				{
					Var11 = { Var0 };
					if (func_252(&(Global_1669875.f_905[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_100(Global_1669875.f_905[iParam0 /*2*/], 1250, 0))
						{
							Global_1669875.f_926[iParam0] = (Global_1669875.f_926[iParam0] - 17);
						}
						Var11.f_7 = Global_1669875.f_926[iParam0];
						func_99(&Var11, iParam8);
						func_91("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1669875.f_926[iParam0] = 255;
					func_90(&(Global_1669875.f_905[iParam0 /*2*/]), 0, 0);
				}
				if (iParam42 != 0)
				{
					func_99(&Var0, iParam42);
					func_91("TimerBars", "ALL_WHITE_bg", &Var0, 1, 0, iVar10, 0);
				}
				else
				{
					func_91("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
				}
			}
			func_84(&Var0, iParam21);
			if (func_124())
			{
				if (bParam17)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.01f);
				}
				else if (bParam10)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (bParam17 == 0)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam17)
			{
				uParam2->f_1 = (uParam2->f_1 + ((-0.01f + 0.0022f) + 0.001f));
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
				uParam2->f_1 = (uParam2->f_1 + -0.002f);
			}
			iVar10 = func_102();
			if (iParam39 != -1)
			{
				if (func_186(iParam39))
				{
					iVar10 = iParam39;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			if (!func_156(fParam12, fParam13))
			{
				if (bParam19)
				{
					func_83(uParam1, iParam8);
					func_82(uParam1, 0);
					func_61(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else if (bParam10 == 1)
				{
					func_83(uParam1, iParam8);
					func_82(uParam1, 0);
					func_61(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else
				{
					func_83(uParam1, iParam22);
					func_82(uParam1, 0);
					if (bParam29)
					{
						func_185(uParam2, uParam1, sParam7, 0, 1, iParam4, iParam5);
					}
					else if (iParam9 == -1 && fParam43 == -1f)
					{
						func_80(uParam2, uParam1, sParam7, 0, 1);
					}
					else if (fParam43 != -1f)
					{
						func_57(uParam2, uParam1, sParam7, fParam43, 1, 2);
					}
					else
					{
						func_59(uParam2, uParam1, sParam7, iParam9, 2);
					}
				}
			}
			if (bParam23)
			{
				if (!func_156(fParam12, fParam13))
				{
					fVar20 = (func_73() + func_72(iParam6));
					fVar21 = func_71();
				}
				else
				{
					fVar20 = fParam13;
					fVar21 = fParam12;
				}
				Var22.f_1 = (fVar20 + 0.0486f);
				Var22.f_0 = (fVar21 - 0.0505f);
				Var22.f_2 = 0.18f;
				Var22.f_3 = 0.01f;
				Var22.f_4 = 255;
				Var22.f_5 = 255;
				Var22.f_6 = 255;
				Var22.f_7 = 255;
				func_99(&Var22, iParam24);
				func_91("TimerBars", "TPBar", &Var22, 0, 0, iVar10, 0);
			}
			iVar10 = func_102();
			if (iParam39 != -1)
			{
				if (func_186(iParam39))
				{
					iVar10 = iParam39;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			if (bVar9)
			{
				if (bParam17)
				{
					func_184(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, iParam20, &(Global_1669875.f_842[iParam0 /*2*/]), &(Global_1669875.f_863[iParam0 /*2*/]), fParam30, fParam31, iParam27, iParam28, bParam32, iParam33, fParam34, bParam35, iParam36, iParam37, fParam38, bParam40, uParam41);
				}
				else
				{
					func_182(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, &(Global_1669875.f_842[iParam0 /*2*/]), &(Global_1669875.f_863[iParam0 /*2*/]), iParam18, iParam20, bParam25, iParam26, fParam30, fParam31, iParam27, iParam28, bParam32, iParam33, fParam34, bParam35, iParam36, iParam37, fParam38, bParam40, uParam41);
				}
			}
			func_48();
		}
	}
}

void func_182(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, var uParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, bool bParam16, int iParam17, float fParam18, bool bParam19, int iParam20, int iParam21, float fParam22, bool bParam23, var uParam24)//Position - 0xC519
{
	struct<9> Var0[2];
	float fVar19;
	struct<9> Var20;
	char* sVar29;
	
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.004f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.004f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (iParam9 != 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_147(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_147(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_99(uParam2[1 /*9*/], iParam3);
		if (bParam10)
		{
			func_99(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_99(uParam2[3 /*9*/], iParam3);
		}
		if (iParam11 != 0 && iParam0 < iParam11)
		{
			func_99(uParam2[1 /*9*/], 6);
		}
		if (iParam15 > 0)
		{
			if (!func_78(uParam6))
			{
				func_77(uParam6, 0, 0);
			}
			else if (func_252(uParam6, iParam15, 0))
			{
				func_90(uParam6, 0, 0);
			}
			func_183(uParam2[1 /*9*/], iParam3, iParam14, iParam15, *uParam6);
		}
		fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		if (fParam12 != -1f && fParam13 != -1f)
		{
			fVar19 = ((fParam12 / fParam13) * 100f);
		}
		else if (fParam12 != -1f && fParam13 == -1f)
		{
			fVar19 = ((fParam12 / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		}
		else if (fParam12 == -1f && fParam13 != -1f)
		{
			fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / fParam13) * 100f);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_91("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		if (bParam10)
		{
			func_99(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_99(uParam2[3 /*9*/], iParam3);
		}
		(uParam2[3 /*9*/])->f_7 = 51;
		func_91("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_149(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4, 0, bParam23);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_91("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (bParam16)
		{
			Var20 = { *(uParam2[1 /*9*/]) };
			func_149(*(uParam2[0 /*9*/]), fParam18, &Var20, 1, 1, uParam4, fParam22, bParam23);
			func_99(&Var20, iParam17);
			Var20.f_7 = uParam24;
			if (iParam21 > 0)
			{
				if (!func_78(uParam7))
				{
					func_77(uParam7, 0, 0);
				}
				else if (func_252(uParam7, iParam21, 0))
				{
					func_90(uParam7, 0, 0);
				}
				func_183(&Var20, iParam17, iParam20, iParam21, *uParam7);
			}
			if (bParam19)
			{
				if (fVar19 <= fParam22)
				{
					Var20.f_7 = 100;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_91("TimerBars", "DamageBarFill_128", &Var20, 0, 0, iParam5, 0);
		}
		if (iParam9 != 0)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("timerbar_lines"))
			{
				if (iParam9 != 10)
				{
					sVar29 = "LineMarker90_128";
					switch (iParam9)
					{
						case 1:
							sVar29 = "LineMarker10_128";
							break;
						
						case 2:
							sVar29 = "LineMarker20_128";
							break;
						
						case 3:
							sVar29 = "LineMarker30_128";
							break;
						
						case 4:
							sVar29 = "LineMarker40_128";
							break;
						
						case 5:
							sVar29 = "LineMarker50_128";
							break;
						
						case 6:
							sVar29 = "LineMarker60_128";
							break;
						
						case 7:
							sVar29 = "LineMarker70_128";
							break;
						
						case 8:
							sVar29 = "LineMarker80_128";
							break;
						
						case 9:
							sVar29 = "LineMarker90_128";
							break;
					}
					(uParam2[3 /*9*/])->f_7 = 255;
					func_99(uParam2[3 /*9*/], 2);
					func_91("timerbar_lines", sVar29, uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
				else
				{
					(uParam2[3 /*9*/])->f_7 = 255;
					func_99(uParam2[3 /*9*/], 2);
					func_91("timerbar_lines", "LineMarker20_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_91("timerbar_lines", "LineMarker40_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_91("timerbar_lines", "LineMarker60_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_91("timerbar_lines", "LineMarker80_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam8 > 0 && fVar19 >= IntToFloat(iParam8))
		{
			func_99(uParam2[1 /*9*/], 6);
			func_149(*(uParam2[0 /*9*/]), SYSTEM::TO_FLOAT(iParam8), uParam2[1 /*9*/], 1, 1, uParam4, 0, bParam23);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_91("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0xC996
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
	float fVar9;
	
	iVar8 = func_76(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (SYSTEM::TO_FLOAT((iVar8 / 2)) / SYSTEM::TO_FLOAT((iParam3 / 2)));
		HUD::GET_HUD_COLOUR(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iParam3));
		HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		HUD::GET_HUD_COLOUR(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_4 = SYSTEM::FLOOR(func_75(SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(iVar4), fVar9));
	uParam0->f_5 = SYSTEM::FLOOR(func_75(SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iVar5), fVar9));
	uParam0->f_6 = SYSTEM::FLOOR(func_75(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar6), fVar9));
	uParam0->f_7 = SYSTEM::FLOOR(func_75(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar7), fVar9));
}

void func_184(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, var uParam7, var uParam8, float fParam9, float fParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, bool bParam16, int iParam17, int iParam18, float fParam19, bool bParam20, var uParam21)//Position - 0xCA76
{
	struct<9> Var0[2];
	float fVar19;
	struct<9> Var20;
	char* sVar29;
	
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.016f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.016f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (iParam6 != 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_147(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_147(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_99(uParam2[1 /*9*/], iParam3);
		func_99(uParam2[3 /*9*/], iParam3);
		if (iParam12 > 0)
		{
			if (!func_78(uParam7))
			{
				func_77(uParam7, 0, 0);
			}
			else if (func_252(uParam7, iParam12, 0))
			{
				func_90(uParam7, 0, 0);
			}
			func_183(uParam2[1 /*9*/], iParam3, iParam11, iParam12, *uParam7);
		}
		fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		if (fParam9 != -1f && fParam10 != -1f)
		{
			fVar19 = ((fParam9 / fParam10) * 100f);
		}
		else if (fParam9 != -1f && fParam10 == -1f)
		{
			fVar19 = ((fParam9 / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		}
		else if (fParam9 == -1f && fParam10 != -1f)
		{
			fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / fParam10) * 100f);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_91("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_99(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_91("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_149(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4, 0, bParam20);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_91("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (bParam13)
		{
			Var20 = { *(uParam2[1 /*9*/]) };
			func_149(*(uParam2[0 /*9*/]), fParam15, &Var20, 1, 1, uParam4, fParam19, bParam20);
			func_99(&Var20, iParam14);
			Var20.f_7 = uParam21;
			if (iParam18 > 0)
			{
				if (!func_78(uParam8))
				{
					func_77(uParam8, 0, 0);
				}
				else if (func_252(uParam8, iParam18, 0))
				{
					func_90(uParam8, 0, 0);
				}
				func_183(&Var20, iParam14, iParam17, iParam18, *uParam8);
			}
			if (bParam16)
			{
				if (fVar19 <= fParam19)
				{
					Var20.f_7 = 100;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_91("TimerBars", "DamageBarFill_128", &Var20, 0, 0, iParam5, 0);
		}
		if (iParam6 != 0)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("timerbar_lines"))
			{
				sVar29 = "LineMarker90_128";
				switch (iParam6)
				{
					case 1:
						sVar29 = "LineMarker10_128";
						break;
					
					case 2:
						sVar29 = "LineMarker20_128";
						break;
					
					case 3:
						sVar29 = "LineMarker30_128";
						break;
					
					case 4:
						sVar29 = "LineMarker40_128";
						break;
					
					case 5:
						sVar29 = "LineMarker50_128";
						break;
					
					case 6:
						sVar29 = "LineMarker60_128";
						break;
					
					case 7:
						sVar29 = "LineMarker70_128";
						break;
					
					case 8:
						sVar29 = "LineMarker80_128";
						break;
					
					case 9:
						sVar29 = "LineMarker90_128";
						break;
				}
				(uParam2[1 /*9*/])->f_7 = 255;
				func_99(uParam2[1 /*9*/], 2);
				func_91("timerbar_lines", sVar29, uParam2[1 /*9*/], 0, 0, iParam5, 0);
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_185(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)//Position - 0xCDEA
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_56(sVar0))
	{
		if (func_52())
		{
			func_82(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(bParam4);
			HUD::SET_TEXT_CENTRE(bParam3);
			func_55(func_51(*uParam0), func_50(uParam0->f_1), sVar0, iParam5, iParam6);
		}
	}
}

bool func_186(int iParam0)//Position - 0xCE33
{
	return (iParam0 >= 0 && iParam0 <= 8);
}

void func_187(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7)//Position - 0xCE49
{
	float fVar0;
	
	fVar0 = func_157(bParam7, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_72(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_109(uParam6));
	func_155(uParam1, iParam3, fParam4, fParam5);
	if (!func_156(fParam4, fParam5))
	{
		func_107(iParam3, -fVar0);
	}
	func_125(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_188(var uParam0, int iParam1)//Position - 0xCEAC
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) - 0.106f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 21;
}

void func_189(var uParam0, int iParam1)//Position - 0xCF04
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) + 0.086f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_190(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)//Position - 0xCF5C
{
	var uVar0;
	var uVar11;
	var uVar13;
	var uVar113;
	var uVar124;
	var uVar126;
	
	if (func_29(1, iParam0))
	{
		uVar13 = 11;
		func_191(iParam0, &uVar0, &uVar11, &uVar13, &uVar126, &uVar113, &uVar124, iParam1, iParam2, 1, sParam3, iParam4, iParam5, bParam6, iParam7, fParam8, fParam9, iParam10, iParam11, 1, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, iParam21);
	}
}

void func_191(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29)//Position - 0xCFB2
{
	struct<9> Var0;
	struct<2> Var9;
	struct<3> Var11;
	bool bVar22;
	int iVar23;
	int iVar24;
	struct<9> Var25;
	
	Global_1669875++;
	if (func_126())
	{
		if (iParam17 == 2)
		{
		}
		func_112(1, iParam0);
		if (func_124())
		{
			func_158(uParam1, 0);
		}
		else if (bParam13)
		{
			func_122(uParam1, 3);
		}
		else
		{
			func_121(uParam1, 0);
		}
		func_121(&Var11, 0);
		Var11.f_2 = (Var11.f_2 + (0.166f + 0.095f));
		if (Global_1669875 == 1)
		{
			func_111(iParam9);
		}
		func_199(uParam5, 0, 0);
		func_115(uParam5);
		func_82(uParam5, 0);
		iVar23 = 0;
		if (iParam20 > 0)
		{
			iVar23 = 1;
		}
		func_197(iParam8, uParam2, uParam3, &Var0, uParam6, uParam5, uParam4, iParam9, fParam15, fParam16, uParam1, iVar23);
		Var9.f_0 = *uParam2;
		Var9.f_1 = uParam2->f_1;
		Var9.f_1 = (Var9.f_1 + (-0.006f - 0.007f));
		func_116(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_113())));
		func_196(&Var11);
		if (iParam14 == 0)
		{
			func_195(iParam0);
		}
		if (iParam18 == 0)
		{
			func_194(iParam0);
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar24 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar24);
			if (func_101(iParam14, &(Global_1669875.f_254[iParam0 /*2*/]), &(Global_1669875.f_275[iParam0 /*2*/])))
			{
				bVar22 = true;
			}
			else
			{
				bVar22 = false;
			}
			if (!func_156(fParam15, fParam16))
			{
				Var0.f_0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (iParam8 < 9 && iParam20 == 0)
				{
					Var0.f_0 = (Var0.f_0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0.f_0 = (Var0.f_0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_124())
				{
					Var0.f_0 = (Var0.f_0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1669875.f_7129 = (Global_1669875.f_7129 + Var0.f_3);
				if ((iParam7 == iParam8 && iParam7 > 0) || iParam18 > 0)
				{
					Var25 = { Var0 };
					if (func_252(&(Global_1669875.f_1097[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_100(Global_1669875.f_1097[iParam0 /*2*/], 1250, 0))
						{
							Global_1669875.f_1118[iParam0] = (Global_1669875.f_1118[iParam0] - 17);
						}
						Var25.f_7 = Global_1669875.f_1118[iParam0];
						func_99(&Var25, iParam11);
						func_91("TimerBars", "ALL_WHITE_bg", &Var25, 1, 0, iVar24, 0);
					}
				}
				else
				{
					Global_1669875.f_1118[iParam0] = 255;
					func_90(&(Global_1669875.f_1097[iParam0 /*2*/]), 0, 0);
				}
				func_91("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar24, 0);
			}
			func_84(&Var0, iParam29);
			if (bParam13)
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
					if (func_124() == 0)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.002f);
					}
				}
			}
			else if (func_124())
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
				}
			}
			iVar24 = func_102();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar24);
			if (!func_156(fParam15, fParam16))
			{
				func_82(uParam1, 0);
				if (bParam13 == 1)
				{
					func_61(uParam2, uParam1, sParam10, "", 1, 2);
				}
				else if (iParam12 == -1)
				{
					func_80(uParam2, uParam1, sParam10, 0, 1);
				}
				else
				{
					func_59(uParam2, uParam1, sParam10, iParam12, 2);
				}
			}
			if (iParam20 > 0)
			{
				func_59(&Var9, &Var11, "HUD_MULTSMAL" /* GXT: ~1~x */, iParam20, 2);
			}
			if (bVar22)
			{
				func_192(iParam7, iParam8, uParam3, uParam5, uParam6, iParam11, iVar24, bParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
			}
			func_48();
		}
	}
}

void func_192(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xD40E
{
	float fVar0;
	int iVar1;
	char* sVar2;
	
	if (iParam1 < 9)
	{
		fVar0 = -0.0094f;
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar1 = 0;
			while (iVar1 <= (iParam1 - 1))
			{
				(*uParam2)[iVar1 /*9*/] = ((*uParam2)[iVar1 /*9*/] + (fVar0 * IntToFloat(iVar1)));
				if ((iParam1 - iVar1) > iParam0)
				{
					func_99(uParam2[iVar1 /*9*/], iParam5);
					(uParam2[iVar1 /*9*/])->f_7 = 51;
					func_91("TimerBars", "Circle_checkpoints_Outline", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
				}
				else
				{
					func_99(uParam2[iVar1 /*9*/], iParam5);
					func_91("TimerBars", "Circle_checkpoints", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					if (func_170(iVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_99(uParam2[iVar1 /*9*/], 2);
						func_91("Cross", "Circle_checkpoints_Cross", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					}
				}
				iVar1++;
			}
		}
	}
	else if (iParam5 == 1)
	{
		func_54(uParam4, uParam3, "TIMER_DASHES" /* GXT: ~1~/~1~ */, iParam0, iParam1, 2, 0);
	}
	else
	{
		func_193(uParam3);
		if (bParam7)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
			{
				(*uParam2)[0 /*9*/] = ((*uParam2)[0 /*9*/] + (0.058f - 0.06f));
				(uParam2[0 /*9*/])->f_1 = ((uParam2[0 /*9*/])->f_1 + -0.005f);
				(uParam2[0 /*9*/])->f_2 = ((uParam2[0 /*9*/])->f_2 + ((0.003f - 0.005f) + 0.002f));
				(uParam2[0 /*9*/])->f_3 = ((uParam2[0 /*9*/])->f_3 + (0.009f - 0.01f));
				func_99(uParam2[0 /*9*/], iParam5);
				func_91("TimerBars", "Circle_checkpoints_Big", uParam2[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
		sVar2 = "TIMER_DASHES" /* GXT: ~1~/~1~ */;
		if ((bParam7 == 1 && iParam0 > 99) && iParam1 > 99)
		{
			sVar2 = "TIMER_DASHES" /* GXT: ~1~/~1~ */;
		}
		func_54(uParam4, uParam3, sVar2, iParam0, iParam1, 2, 0);
	}
}

void func_193(var uParam0)//Position - 0xD5ED
{
	uParam0->f_9 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f);
}

void func_194(int iParam0)//Position - 0xD61C
{
	func_17(&(Global_1669875.f_758[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_779[iParam0 /*2*/]));
}

void func_195(int iParam0)//Position - 0xD642
{
	func_17(&(Global_1669875.f_254[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_275[iParam0 /*2*/]));
	Global_1669875.f_1808.f_205[iParam0] = -1;
}

void func_196(var uParam0)//Position - 0xD675
{
	float fVar0;
	
	fVar0 = (((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.037f) + 0.003f);
	uParam0->f_9 = fVar0;
}

void func_197(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, float fParam8, float fParam9, var uParam10, int iParam11)//Position - 0xD6A8
{
	float fVar0;
	
	fVar0 = func_110(uParam5);
	if (iParam0 < 9)
	{
		fVar0 = func_157(iParam11, 0);
	}
	*uParam1 = 0.795f;
	uParam1->f_1 = func_72(iParam7);
	uParam1->f_1 = (uParam1->f_1 + func_109(uParam10));
	*uParam4 = 0.795f;
	uParam4->f_1 = (uParam1->f_1 + func_108(uParam5));
	func_198(uParam2, iParam7, fParam8, fParam9);
	func_176(uParam6);
	if (!func_156(fParam8, fParam9))
	{
		func_107(iParam7, -fVar0);
	}
	func_125(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_198(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0xD737
{
	float fVar0;
	float fVar1;
	
	if (!func_156(fParam2, fParam3))
	{
		fVar0 = (func_73() + func_72(iParam1));
		fVar1 = func_178();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
	(*uParam0)[8 /*9*/] = fVar1;
	(uParam0[8 /*9*/])->f_1 = fVar0;
	(uParam0[8 /*9*/])->f_2 = 0.012f;
	(uParam0[8 /*9*/])->f_3 = 0.023f;
	(uParam0[8 /*9*/])->f_4 = 0;
	(uParam0[8 /*9*/])->f_5 = 0;
	(uParam0[8 /*9*/])->f_6 = 0;
	(uParam0[8 /*9*/])->f_7 = 250;
	(*uParam0)[9 /*9*/] = fVar1;
	(uParam0[9 /*9*/])->f_1 = fVar0;
	(uParam0[9 /*9*/])->f_2 = 0.012f;
	(uParam0[9 /*9*/])->f_3 = 0.023f;
	(uParam0[9 /*9*/])->f_4 = 0;
	(uParam0[9 /*9*/])->f_5 = 0;
	(uParam0[9 /*9*/])->f_6 = 0;
	(uParam0[9 /*9*/])->f_7 = 250;
}

void func_199(var uParam0, int iParam1, int iParam2)//Position - 0xDA51
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_200(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13)//Position - 0xDAC2
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_29(5, iParam0))
	{
		func_47(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam10, 0, iParam2, 0, 0, 0, "", 0, iParam11, 255, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, bParam12, iParam13, 0);
	}
}

void func_201(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15)//Position - 0xDB17
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_29(4, iParam0))
	{
		func_47(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam12, bParam10, iParam2, 0, 0, 0, "", bParam11, iParam13, iParam14, 0, 0, bParam15, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0);
	}
}

void func_202(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, int iParam15, int iParam16)//Position - 0xDB6D
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_29(3, iParam0))
	{
		func_47(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, 0, 0f, iParam10, iParam11, iParam8, 0, 0, bParam9, 0, 0, "", 0, iParam12, 255, 0, 0, 0, 0, 1, bParam13, iParam14, iParam15, 0, 0, 0, 0, iParam16);
	}
}

void func_203(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, int iParam16, bool bParam17)//Position - 0xDBC3
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar33;
	var uVar35;
	var uVar37;
	
	if (func_29(7, iParam0))
	{
		func_204(iParam0, &uVar0, &uVar11, &uVar22, &uVar33, &uVar35, &uVar37, iParam1, 1, iParam3, iParam4, sParam2, iParam6, iParam5, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, iParam13, bParam14, iParam15, iParam16, bParam17);
	}
}

void func_204(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, bool bParam24)//Position - 0xDC0A
{
	var uVar0;
	var uVar11;
	struct<9> Var13;
	bool bVar22;
	int iVar23;
	struct<8> Var24;
	struct<9> Var33;
	
	Global_1669875++;
	if (iParam17 == 2)
	{
	}
	func_125(&Var13, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_112(7, iParam0);
	if (bParam21)
	{
		func_121(uParam1, 0);
	}
	else if (bParam16)
	{
		func_122(uParam1, 3);
	}
	else if (func_124())
	{
		func_123(uParam1, 0);
	}
	else
	{
		func_121(uParam1, 0);
	}
	func_218(&uVar0, 0);
	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (bParam19)
			{
				func_217(uParam3, 0);
				func_199(uParam2, 0, 0);
			}
			else
			{
				func_217(uParam3, 0);
				func_199(uParam2, 0, 5);
			}
			func_115(uParam2);
			func_115(uParam3);
			break;
		
		case 2:
			func_199(uParam2, 0, 0);
			func_115(&uVar0);
			func_115(uParam3);
			func_216(uParam2);
			break;
		
		case 3:
			func_199(uParam2, 0, 0);
			func_115(&uVar0);
			func_115(uParam3);
			func_216(uParam2);
			break;
		
		case 4:
			func_199(uParam3, 0, 0);
			if (bParam19)
			{
				func_199(uParam2, 0, 0);
			}
			else
			{
				func_199(uParam2, 0, 5);
			}
			func_115(uParam2);
			func_115(uParam3);
			break;
	}
	func_116(uParam1);
	if (Global_1669875.f_1172 == 0 && Global_1669875.f_1173 == 0)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + -0.016f);
			if (func_124())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.008f);
			}
		}
	}
	else if (Global_1669875.f_1172 == 0 && Global_1669875.f_1173 == 1)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + 0f);
			if (func_124())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.009f);
			}
		}
	}
	if (Global_1669875 == 1)
	{
		func_111(iParam8);
	}
	func_215(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &uVar0, &uVar11);
	uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_113())));
	func_105(uParam2, iParam12);
	if (iParam14 == 0)
	{
		func_214(iParam0);
	}
	if (iParam18 == 0)
	{
		func_213(iParam0);
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		iVar23 = func_102();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar23);
		if (func_101(iParam14, &(Global_1669875.f_170[iParam0 /*2*/]), &(Global_1669875.f_191[iParam0 /*2*/])))
		{
			bVar22 = true;
		}
		else
		{
			bVar22 = false;
		}
		Var13.f_0 = *uParam4;
		Var13.f_1 = uParam4->f_1;
		if (Global_1669875.f_1165 == 1)
		{
			Var13.f_0 = (Var13.f_0 + -0.113f);
		}
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				Var13.f_0 = (Var13.f_0 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 2:
				Var13.f_0 = (Var13.f_0 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 3:
				Var13.f_0 = (Var13.f_0 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 4:
				Var13.f_0 = (Var13.f_0 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
		}
		Var24.f_0 = ((*uParam5 + 0.145f) + 0.001f);
		if (func_124())
		{
			Var24.f_1 = ((uParam5->f_1 + 0.019f) - 0.006f);
		}
		else
		{
			Var24.f_1 = (uParam5->f_1 + 0.019f);
		}
		Var24.f_2 = (0.016f + 0.003f);
		Var24.f_3 = (0.032f + 0.004f);
		Var24.f_7 = 255;
		func_99(&Var24, 1);
		Var24.f_0 = (uParam1->f_9 - ((uParam2->f_9 - uParam1->f_9) / 8f));
		if (func_124())
		{
			Var24.f_0 = (Var24.f_0 - 0.003f);
		}
		switch (iParam23)
		{
			case 5:
				Var24.f_3 = (Var24.f_3 + -0.009f);
				Var24.f_2 = (Var24.f_2 + -0.002f);
				if (func_124())
				{
					Var24.f_1 = (Var24.f_1 + 0.0055f);
				}
				else
				{
					Var24.f_1 = (Var24.f_1 + 0.0025f);
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPRPSymbol", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPRPSymbol"))
				{
					func_91("MPRPSymbol", "RP", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 2:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
				{
					func_91("TimerBars", "Rockets", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 1:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
				{
					func_91("TimerBars", "Spikes", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 4:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
				{
					func_91("TimerBars", "Boost", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 6:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CrossTheLine"))
				{
					func_99(&Var24, 18);
					func_91("CrossTheLine", "Timer_LargeTick_32", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 7:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CrossTheLine"))
				{
					func_99(&Var24, 6);
					func_91("CrossTheLine", "Timer_LargeCross_32", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 8:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_99(&Var24, 118);
					func_91("TimerBar_Icons", "Pickup_Beast", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 9:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_99(&Var24, 118);
					func_91("TimerBar_Icons", "Pickup_B_Time", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 10:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_99(&Var24, 118);
					func_91("TimerBar_Icons", "Pickup_Random", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 11:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_99(&Var24, 118);
					func_91("TimerBar_Icons", "Pickup_Slow_Time", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 12:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_99(&Var24, 118);
					func_91("TimerBar_Icons", "Pickup_Swap", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 13:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_99(&Var24, 118);
					func_91("TimerBar_Icons", "Pickup_Testosterone", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 14:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_99(&Var24, 118);
					func_91("TimerBar_Icons", "Pickup_Thermal", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 15:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_99(&Var24, 118);
					func_91("TimerBar_Icons", "Pickup_Weed", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 16:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_99(&Var24, 118);
					func_91("TimerBar_Icons", "Pickup_Hidden", &Var24, 1, 0, 4, 0);
				}
				break;
		}
		if (func_124())
		{
			Var13.f_0 = (Var13.f_0 + -0.025f);
			Var13.f_2 = (Var13.f_2 + 0.05f);
		}
		Global_1669875.f_7129 = (Global_1669875.f_7129 + Var13.f_3);
		if (Global_1669875.f_1165 == 0)
		{
			if (iParam18 > 0)
			{
				Var33 = { Var13 };
				if (func_252(&(Global_1669875.f_1033[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_100(Global_1669875.f_1033[iParam0 /*2*/], 1250, 0))
					{
						Global_1669875.f_1054[iParam0] = (Global_1669875.f_1054[iParam0] - 17);
					}
					Var33.f_7 = Global_1669875.f_1054[iParam0];
					if (iParam17 == 2)
					{
						func_99(&Var33, 6);
					}
					else if (iParam17 == 3)
					{
						func_99(&Var33, 18);
					}
					else
					{
						func_99(&Var33, iParam12);
					}
					func_91("TimerBars", "ALL_WHITE_bg", &Var33, 1, 0, iVar23, 0);
				}
			}
			else
			{
				Global_1669875.f_1054[iParam0] = 255;
				func_90(&(Global_1669875.f_1033[iParam0 /*2*/]), 0, 0);
			}
			func_91("TimerBars", "ALL_BLACK_bg", &Var13, 1, 0, iVar23, 0);
		}
		func_84(&Var13, iParam22);
		if (bParam16)
		{
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.004f);
			}
		}
		else if (func_124())
		{
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.008f);
			}
		}
		iVar23 = func_102();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar23);
		func_105(uParam1, iParam20);
		if (Global_1669875.f_1165 == 0)
		{
			if (func_56(sParam11) == 0)
			{
				func_82(uParam1, 0);
				if (bParam21 == 1)
				{
					func_61(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (bParam16 == 1)
				{
					*uParam1 = 4;
					func_61(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (iParam15 == -1)
				{
					func_80(uParam4, uParam1, sParam11, 0, 1);
				}
				else
				{
					func_59(uParam4, uParam1, sParam11, iParam15, 2);
				}
			}
		}
		if (bVar22)
		{
			if (iParam9 == 0)
			{
				func_212(iParam0);
			}
			if (iParam9 != 0 && func_252(&(Global_1669875.f_4714.f_336[iParam0 /*2*/]), 4000, 0) == 0)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_211(uParam3);
						func_210(uParam6, uParam3, iParam9, 66, "TIMER_POS" /* GXT: +~a~ */, 0, 1);
						func_209(uParam3);
					}
					else
					{
						func_208(uParam3);
						func_210(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_209(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_208(uParam3);
					func_210(uParam6, uParam3, iParam9, 66, "TIMER_POS" /* GXT: +~a~ */, 0, 1);
					func_209(uParam3);
				}
				else
				{
					func_211(uParam3);
					func_210(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_209(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
				{
					if (iParam10 == 1)
					{
						func_207(uParam2);
					}
					else if (iParam10 == 2)
					{
						func_206(uParam2);
					}
					else if (iParam10 == 3)
					{
						func_205(uParam2);
					}
				}
				if (Global_1669875.f_1165 == 1)
				{
					uParam2->f_7 = 0;
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				}
				func_82(uParam2, 0);
				switch (iParam13)
				{
					case 1:
						if (bParam19)
						{
							func_61(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							if (bParam24)
							{
								func_210(uParam5, uParam2, iParam7, 2627, "", 0, 1);
							}
							else
							{
								func_210(uParam5, uParam2, iParam7, 2567, "", 0, 1);
							}
						}
						break;
					
					case 0:
						if (bParam19)
						{
							func_61(uParam5, uParam2, "--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							func_210(uParam5, uParam2, iParam7, 6, "", 0, 1);
						}
						break;
					
					case 2:
						*uParam5 = (*uParam5 + 0.12f);
						func_210(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_80(&uVar11, &uVar0, "TIMER_AM_O" /* GXT: AM */, 0, 1);
						break;
					
					case 3:
						*uParam5 = (*uParam5 + 0.12f);
						func_210(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_80(&uVar11, &uVar0, "TIMER_PM_O" /* GXT: PM */, 0, 1);
						break;
					
					case 4:
						*uParam5 = (*uParam5 + 0.12f);
						if (bParam19)
						{
							func_61(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							func_210(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
					
					case 5:
						*uParam5 = (*uParam5 + 0.117f);
						func_210(uParam5, uParam2, iParam7, 2, "", 0, 1);
						break;
					}
				}
		}
		func_48();
	}
}

void func_205(var uParam0)//Position - 0xE8BB
{
	func_83(uParam0, 109);
}

void func_206(var uParam0)//Position - 0xE8CB
{
	func_83(uParam0, 108);
}

void func_207(var uParam0)//Position - 0xE8DB
{
	func_83(uParam0, 107);
}

void func_208(var uParam0)//Position - 0xE8EB
{
	func_83(uParam0, 6);
}

void func_209(var uParam0)//Position - 0xE8FA
{
	func_83(uParam0, 1);
}

void func_210(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)//Position - 0xE909
{
	char* sVar0;
	
	if (func_52())
	{
		func_82(uParam1, 0);
		HUD::SET_TEXT_RIGHT_JUSTIFY(bParam6);
		HUD::SET_TEXT_CENTRE(bParam5);
		if (func_56(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_51(*uParam0), func_50(uParam0->f_1), 0);
	}
}

void func_211(var uParam0)//Position - 0xE962
{
	func_83(uParam0, 18);
}

void func_212(int iParam0)//Position - 0xE972
{
	func_17(&(Global_1669875.f_4714.f_336[iParam0 /*2*/]));
}

void func_213(int iParam0)//Position - 0xE98C
{
	func_17(&(Global_1669875.f_674[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_695[iParam0 /*2*/]));
}

void func_214(int iParam0)//Position - 0xE9B2
{
	func_17(&(Global_1669875.f_170[iParam0 /*2*/]));
	func_17(&(Global_1669875.f_191[iParam0 /*2*/]));
}

void func_215(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)//Position - 0xE9D6
{
	float fVar0;
	
	fVar0 = func_110(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_72(iParam4);
	uParam1->f_1 = (uParam1->f_1 + func_109(uParam5));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_108(uParam0));
	*uParam7 = 0.795f;
	uParam7->f_1 = (uParam1->f_1 + func_108(uParam6));
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_107(iParam4, -fVar0);
}

void func_216(var uParam0)//Position - 0xEA4C
{
	uParam0->f_9 = ((((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) + 0.014f) - 0.024f) + 0.005f);
}

void func_217(var uParam0, int iParam1)//Position - 0xEA8D
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_218(var uParam0, int iParam1)//Position - 0xEADF
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.5f + 0.004f) - 0.01f) - 0.11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

int func_219(int iParam0)//Position - 0xEB3D
{
	int iVar0;
	int iVar1;
	
	if (func_229(iParam0))
	{
		iVar1 = 2;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (Global_1666261[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_220(int iParam0, int iParam1)//Position - 0xEB76
{
	switch (iParam0)
	{
		case 7:
			func_203(iParam1, Global_1669875.f_4714[iParam1], &(Global_1669875.f_4714.f_11[iParam1 /*16*/]), Global_1669875.f_4714.f_172[iParam1], Global_1669875.f_4714.f_194[iParam1], Global_1669875.f_4714.f_216[iParam1], Global_1669875.f_4714.f_205[iParam1], Global_1669875.f_4714.f_183[iParam1], Global_1669875.f_4714.f_227[iParam1], Global_1669875.f_4714.f_260[iParam1], Global_1669875.f_4714.f_314[iParam1], Global_1669875.f_4714.f_325[iParam1], Global_1669875.f_4714.f_357[iParam1], Global_1669875.f_4714.f_238[iParam1], Global_1669875.f_4714.f_271[iParam1], Global_1669875.f_4714.f_368[iParam1], Global_1669875.f_4714.f_379[iParam1], Global_1669875.f_4714.f_390[iParam1]);
			break;
		
		case 3:
			func_202(iParam1, Global_1669875.f_2872[iParam1], &(Global_1669875.f_2872.f_11[iParam1 /*16*/]), Global_1669875.f_2872.f_183[iParam1], Global_1669875.f_2872.f_172[iParam1], Global_1669875.f_2872.f_194[iParam1], Global_1669875.f_2872.f_216[iParam1], &(Global_1669875.f_2872.f_259[iParam1 /*16*/]), Global_1669875.f_2872.f_420[iParam1], Global_1669875.f_2872.f_453[iParam1], Global_1669875.f_2872.f_431[iParam1], Global_1669875.f_2872.f_442[iParam1], Global_1669875.f_2872.f_464[iParam1], Global_1669875.f_2872.f_475[iParam1], Global_1669875.f_2872.f_486[iParam1], Global_1669875.f_2872.f_497[iParam1], Global_1669875.f_2872.f_508[iParam1]);
			break;
		
		case 4:
			func_201(iParam1, Global_1669875.f_3391[iParam1], Global_1669875.f_3391.f_172[iParam1], &(Global_1669875.f_3391.f_11[iParam1 /*16*/]), Global_1669875.f_3391.f_194[iParam1], Global_1669875.f_3391.f_183[iParam1], Global_1669875.f_3391.f_205[iParam1], Global_1669875.f_3391.f_227[iParam1], Global_1669875.f_3391.f_270[iParam1], Global_1669875.f_3391.f_281[iParam1], Global_1669875.f_3391.f_292[iParam1], Global_1669875.f_3391.f_303[iParam1], Global_1669875.f_3391.f_314[iParam1], Global_1669875.f_3391.f_325[iParam1], Global_1669875.f_3391.f_336[iParam1], Global_1669875.f_3391.f_347[iParam1]);
			break;
		
		case 5:
			func_200(iParam1, Global_1669875.f_3749[iParam1], Global_1669875.f_3749.f_172[iParam1], &(Global_1669875.f_3749.f_11[iParam1 /*16*/]), Global_1669875.f_3749.f_194[iParam1], Global_1669875.f_3749.f_183[iParam1], Global_1669875.f_3749.f_205[iParam1], Global_1669875.f_3749.f_227[iParam1], Global_1669875.f_3749.f_270[iParam1], Global_1669875.f_3749.f_281[iParam1], Global_1669875.f_3749.f_292[iParam1], Global_1669875.f_3749.f_303[iParam1], Global_1669875.f_3749.f_314[iParam1], Global_1669875.f_3749.f_325[iParam1]);
			break;
		
		case 1:
			func_190(iParam1, Global_1669875.f_1808[iParam1], Global_1669875.f_1808.f_11[iParam1], &(Global_1669875.f_1808.f_22[iParam1 /*16*/]), Global_1669875.f_1808.f_194[iParam1], Global_1669875.f_1808.f_205[iParam1], Global_1669875.f_1808.f_258[iParam1], Global_1669875.f_1808.f_183[iParam1], Global_1669875.f_1808.f_227[iParam1 /*3*/], Global_1669875.f_1808.f_227[iParam1 /*3*/].f_1, Global_1669875.f_1808.f_312[iParam1], Global_1669875.f_1808.f_323[iParam1], Global_1669875.f_1808.f_269[iParam1], Global_2748970[iParam1], Global_2748981[iParam1], Global_2748992[iParam1], Global_2749003[iParam1], Global_2749014[iParam1], Global_2749025[iParam1], Global_2749036[iParam1], Global_2749047[iParam1], Global_1669875.f_1808.f_334[iParam1]);
			break;
		
		case 0:
			func_180(iParam1, Global_1669875.f_1177[iParam1], Global_1669875.f_1177.f_11[iParam1], &(Global_1669875.f_1177.f_22[iParam1 /*16*/]), Global_1669875.f_1177.f_194[iParam1], Global_1669875.f_1177.f_183[iParam1], Global_1669875.f_1177.f_238[iParam1 /*3*/], Global_1669875.f_1177.f_238[iParam1 /*3*/].f_1, Global_1669875.f_1177.f_269[iParam1], Global_1669875.f_1177.f_205[iParam1], Global_1669875.f_1177.f_280[iParam1], Global_1669875.f_1177.f_323[iParam1], Global_1669875.f_1177.f_334[iParam1], Global_1669875.f_1177.f_345[iParam1], Global_1669875.f_1177.f_356[iParam1], Global_1669875.f_1177.f_367[iParam1], Global_1669875.f_1177.f_378[iParam1], Global_1669875.f_1177.f_389[iParam1], Global_1669875.f_1177.f_400[iParam1], Global_1669875.f_1177.f_411[iParam1], Global_1669875.f_1177.f_422[iParam1], Global_1669875.f_1177.f_433[iParam1], Global_1669875.f_1177.f_444[iParam1], Global_1669875.f_1177.f_455[iParam1], Global_1669875.f_1177.f_466[iParam1], Global_1669875.f_1177.f_477[iParam1], Global_1669875.f_1177.f_488[iParam1], Global_1669875.f_1177.f_499[iParam1], Global_1669875.f_1177.f_510[iParam1], Global_1669875.f_1177.f_521[iParam1], Global_1669875.f_1177.f_532[iParam1], Global_1669875.f_1177.f_543[iParam1], Global_1669875.f_1177.f_554[iParam1], Global_1669875.f_1177.f_565[iParam1], Global_1669875.f_1177.f_576[iParam1], Global_1669875.f_1177.f_587[iParam1], Global_1669875.f_1177.f_598[iParam1], Global_1669875.f_1177.f_609[iParam1], 0, -1082130432);
			break;
		
		case 6:
			func_179(iParam1, Global_1669875.f_4085[iParam1], &(Global_1669875.f_4085.f_11[iParam1 /*16*/]), Global_1669875.f_4085.f_183[iParam1], Global_1669875.f_4085.f_172[iParam1], Global_1669875.f_4085.f_194[iParam1], Global_1669875.f_4085.f_271[iParam1], &(Global_1669875.f_4085.f_282[iParam1 /*16*/]), Global_1669875.f_4085.f_443[iParam1], Global_1669875.f_4085.f_454[iParam1], Global_1669875.f_4085.f_497[iParam1], Global_1669875.f_4085.f_508[iParam1], Global_1669875.f_4085.f_205[iParam1], Global_1669875.f_4085.f_216[iParam1], Global_1669875.f_4085.f_227[iParam1], Global_1669875.f_4085.f_238[iParam1], Global_1669875.f_4085.f_249[iParam1], Global_1669875.f_4085.f_519[iParam1], Global_1669875.f_4085.f_530[iParam1], Global_1669875.f_4085.f_541[iParam1], Global_1669875.f_4085.f_552[iParam1], Global_1669875.f_4085.f_563[iParam1], Global_1669875.f_4085.f_574[iParam1], Global_1669875.f_4085.f_585[iParam1], Global_1669875.f_4085.f_596[iParam1], Global_1669875.f_4085.f_607[iParam1], Global_1669875.f_4085.f_618[iParam1]);
			break;
		
		case 2:
			func_167(iParam1, Global_1669875.f_2153[iParam1], &(Global_1669875.f_2153.f_99[iParam1 /*16*/]), Global_1669875.f_2153.f_282[iParam1], Global_1669875.f_2153.f_293[iParam1], Global_1669875.f_2153.f_260[iParam1], Global_1669875.f_2153.f_11[iParam1], Global_1669875.f_2153.f_22[iParam1], Global_1669875.f_2153.f_33[iParam1], Global_1669875.f_2153.f_44[iParam1], Global_1669875.f_2153.f_55[iParam1], Global_1669875.f_2153.f_66[iParam1], Global_1669875.f_2153.f_77[iParam1], Global_1669875.f_2153.f_88[iParam1], Global_1669875.f_2153.f_271[iParam1], Global_1669875.f_2153.f_304[iParam1], Global_1669875.f_2153.f_357[iParam1], Global_1669875.f_2153.f_326[iParam1 /*3*/], Global_1669875.f_2153.f_326[iParam1 /*3*/].f_1, Global_1669875.f_2153.f_368[iParam1], Global_1669875.f_2153.f_379[iParam1], Global_1669875.f_2153.f_390[iParam1], Global_1669875.f_2153.f_401[iParam1], Global_1669875.f_2153.f_412[iParam1], Global_1669875.f_2153.f_423[iParam1], Global_1669875.f_2153.f_434[iParam1], Global_1669875.f_2153.f_445[iParam1], Global_1669875.f_2153.f_456[iParam1], Global_1669875.f_2153.f_467[iParam1], Global_1669875.f_2153.f_478[iParam1], Global_1669875.f_2153.f_489[iParam1], Global_1669875.f_2153.f_500[iParam1], Global_1669875.f_2153.f_511[iParam1], Global_1669875.f_2153.f_522[iParam1], Global_1669875.f_2153.f_533[iParam1], Global_1669875.f_2153.f_587[iParam1], Global_1669875.f_2153.f_598[iParam1], Global_1669875.f_2153.f_544[iParam1], Global_2749058[iParam1], Global_2749069[iParam1], Global_2749080[iParam1], Global_2749091[iParam1], Global_2749102[iParam1], Global_2749113[iParam1], Global_2749124[iParam1], Global_2749135[iParam1], Global_1669875.f_2153.f_609[iParam1], Global_1669875.f_2153.f_620[iParam1], Global_1669875.f_2153.f_631[iParam1], Global_1669875.f_2153.f_642[iParam1], Global_1669875.f_2153.f_653[iParam1], Global_1669875.f_2153.f_664[iParam1], Global_1669875.f_2153.f_675[iParam1], Global_1669875.f_2153.f_686[iParam1], Global_1669875.f_2153.f_697[iParam1], Global_1669875.f_2153.f_708[iParam1]);
			break;
		
		case 8:
			func_164(iParam1, &(Global_1669875.f_5115.f_11[iParam1 /*16*/]), Global_1669875.f_5115[iParam1], Global_1669875.f_5115.f_172[iParam1], Global_1669875.f_5115.f_183[iParam1], Global_1669875.f_5115.f_194[iParam1], Global_1669875.f_5115.f_205[iParam1]);
			break;
		
		case 9:
			func_159(iParam1, Global_1669875.f_5342[iParam1], Global_1669875.f_5342.f_11[iParam1]);
			break;
		
		case 10:
			func_144(iParam1, Global_1669875.f_5375.f_6[iParam1], Global_1669875.f_5375.f_17[iParam1], &(Global_1669875.f_5375.f_28[iParam1 /*16*/]), Global_1669875.f_5375.f_200[iParam1], Global_1669875.f_5375.f_189[iParam1], Global_1669875.f_5375.f_233[iParam1], Global_1669875.f_5375.f_211[iParam1], Global_1669875.f_5375.f_244[iParam1], Global_1669875.f_5375.f_287[iParam1], Global_1669875.f_5375.f_298[iParam1], &(Global_1669875.f_5375.f_309[iParam1 /*16*/]), &(Global_1669875.f_5375), Global_1669875.f_5375.f_470[iParam1], Global_1669875.f_5375.f_481[iParam1], Global_1669875.f_5375.f_492[iParam1]);
			break;
		
		case 11:
			func_141(iParam1, Global_1669875.f_5878[iParam1], Global_1669875.f_5878.f_11[iParam1], Global_1669875.f_5878.f_22[iParam1], Global_1669875.f_5878.f_33[iParam1], Global_1669875.f_5878.f_44[iParam1], Global_1669875.f_5878.f_55[iParam1], Global_1669875.f_5878.f_66[iParam1], Global_1669875.f_5878.f_77[iParam1], Global_1669875.f_5878.f_88[iParam1], Global_1669875.f_5878.f_110[iParam1], Global_1669875.f_5878.f_121[iParam1], Global_1669875.f_5878.f_132[iParam1], Global_1669875.f_5878.f_143[iParam1], Global_1669875.f_5878.f_154[iParam1]);
			break;
		
		case 12:
			func_132(iParam1, Global_1669875.f_6043[iParam1], Global_1669875.f_6043.f_22[iParam1], &(Global_1669875.f_6043.f_33[iParam1 /*6*/]), Global_1669875.f_6043.f_94[iParam1], Global_1669875.f_6043.f_11[iParam1], Global_1669875.f_6043.f_105[iParam1], Global_1669875.f_6043.f_116[iParam1], Global_1669875.f_6043.f_127[iParam1], Global_1669875.f_6043.f_138[iParam1], Global_1669875.f_6043.f_149[iParam1], Global_1669875.f_6043.f_160[iParam1], Global_1669875.f_6043.f_171[iParam1], Global_1669875.f_6043.f_182[iParam1], Global_1669875.f_6043.f_193[iParam1], Global_1669875.f_6043.f_204[iParam1], Global_1669875.f_6043.f_215[iParam1], Global_1669875.f_6043.f_226[iParam1], Global_1669875.f_6043.f_248[iParam1], Global_1669875.f_6043.f_259[iParam1], Global_1669875.f_6043.f_270[iParam1], Global_1669875.f_6043.f_281[iParam1], Global_1669875.f_6043.f_292[iParam1], Global_1669875.f_6043.f_303[iParam1], Global_1669875.f_6043.f_314[iParam1], Global_1669875.f_6043.f_325[iParam1], Global_1669875.f_6043.f_336[iParam1], Global_1669875.f_6043.f_347[iParam1], Global_1669875.f_6043.f_358[iParam1], Global_1669875.f_6043.f_369[iParam1], Global_1669875.f_6043.f_380[iParam1], Global_1669875.f_6043.f_391[iParam1]);
			break;
		
		case 13:
			func_127(iParam1, Global_1669875.f_6445[iParam1], Global_1669875.f_6445.f_11[iParam1], Global_1669875.f_6445.f_22[iParam1], Global_1669875.f_6445.f_33[iParam1], Global_1669875.f_6445.f_44[iParam1], Global_1669875.f_6445.f_55[iParam1], Global_1669875.f_6445.f_66[iParam1], Global_1669875.f_6445.f_77[iParam1], Global_1669875.f_6445.f_88[iParam1], Global_1669875.f_6445.f_99[iParam1], Global_1669875.f_6445.f_110[iParam1], Global_1669875.f_6445.f_121[iParam1], Global_1669875.f_6445.f_132[iParam1], Global_1669875.f_6445.f_154[iParam1], Global_1669875.f_6445.f_165[iParam1], Global_1669875.f_6445.f_176[iParam1], Global_1669875.f_6445.f_187[iParam1], Global_1669875.f_6445.f_198[iParam1], Global_1669875.f_6445.f_209[iParam1], Global_1669875.f_6445.f_220[iParam1]);
			break;
		
		case 14:
			func_46(iParam1, &(Global_1669875.f_6676[iParam1 /*16*/]), &(Global_1669875.f_6676.f_161[iParam1 /*16*/]), Global_1669875.f_6676.f_322[iParam1], Global_1669875.f_6676.f_333[iParam1], Global_1669875.f_6676.f_355[iParam1], Global_1669875.f_6676.f_366[iParam1], Global_1669875.f_6676.f_377[iParam1]);
			break;
	}
}

void func_221(bool bParam0)//Position - 0xFB8A
{
	if (func_222())
	{
		if (bParam0)
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
		}
		else
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
		}
	}
}

int func_222()//Position - 0xFBAB
{
	if (func_223(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)//Position - 0xFBC3
{
	switch (func_224(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_224(int iParam0)//Position - 0xFC23
{
	return Global_1845263[iParam0 /*877*/].f_192;
}

int func_225(int iParam0)//Position - 0xFC36
{
	if (Global_2697830 == 1)
	{
		return 0;
	}
	if (func_228() == 0)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			return 0;
		}
	}
	if ((iParam0 != 1 && Global_1669875.f_1166 == 0) && Global_1669875.f_1167 == 0)
	{
		if (func_226())
		{
			return 0;
		}
	}
	return 1;
}

int func_226()//Position - 0xFC8C
{
	struct<3> Var0;
	
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	if (func_227())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20758 == 0)
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

int func_227()//Position - 0xFCFA
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_228()//Position - 0xFD14
{
	return Global_32828;
}

bool func_229(int iParam0)//Position - 0xFD1F
{
	return (iParam0 > -1 && iParam0 < 15);
}

int func_230(int iParam0)//Position - 0xFD35
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 7:
			return 0;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 3;
		
		case 1:
			return 4;
		
		case 0:
			return 5;
		
		case 6:
			return 6;
		
		case 2:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		default:
	}
	return -1;
}

int func_231(int iParam0)//Position - 0xFDEC
{
	if (func_232(iParam0))
	{
		return Global_1666261[iParam0];
	}
	return -1;
}

bool func_232(int iParam0)//Position - 0xFE09
{
	return (iParam0 >= 0 && iParam0 < 2);
}

int func_233(int iParam0)//Position - 0xFE1E
{
	if (func_232(iParam0))
	{
		return Global_1666261[iParam0] != -1;
	}
	return 0;
}

int func_234()//Position - 0xFE3D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Global_1669875.f_7080[iVar0] != Global_1669875.f_7064[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if (Global_1669875.f_7128)
	{
		Global_1669875.f_7128 = 0;
		return 1;
	}
	return 0;
}

void func_235()//Position - 0xFE8C
{
	Global_1669875.f_7128 = 1;
}

int func_236(int iParam0)//Position - 0xFE9C
{
	if (func_238(iParam0, 0))
	{
		return 1;
	}
	if (func_237())
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

bool func_237()//Position - 0xFEDB
{
	return BitTest(Global_2621446, 3);
}

bool func_238(int iParam0, int iParam1)//Position - 0xFEE9
{
	bool bVar0;
	
	if (!func_241(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_239(-1, 0) == 8;
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

int func_239(int iParam0, bool bParam1)//Position - 0xFF42
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_240();
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

int func_240()//Position - 0xFF83
{
	return Global_1574925;
}

int func_241(var uParam0)//Position - 0xFF8F
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

int func_242()//Position - 0xFFB1
{
	if (Global_1574529)
	{
		return 0;
	}
	if (Global_76369)
	{
		return 0;
	}
	if (HUD::IS_MP_TEXT_CHAT_TYPING())
	{
		return 0;
	}
	if (Global_1936604.f_4)
	{
		return 0;
	}
	if (Global_1669875.f_1169 || Global_1669875.f_1170)
	{
		if (Global_1669875.f_1171 == 0)
		{
			if (func_246(PLAYER::PLAYER_PED_ID()))
			{
				func_245();
			}
		}
		return 1;
	}
	if (func_53())
	{
		if (Global_1669875.f_1171 == 0)
		{
			if (func_246(PLAYER::PLAYER_PED_ID()))
			{
				func_245();
			}
		}
		return 1;
	}
	if (Global_2698529)
	{
		return 0;
	}
	if (Global_1577907)
	{
		return 0;
	}
	if (func_244())
	{
		if (Global_1669875.f_1171 == 0)
		{
			if (func_246(PLAYER::PLAYER_PED_ID()))
			{
				func_245();
			}
		}
		return 1;
	}
	if (Global_23572.f_4 && func_223(PLAYER::PLAYER_ID()) == 0)
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_1669875.f_1171 == 0)
	{
		if (func_246(PLAYER::PLAYER_PED_ID()))
		{
			func_245();
		}
	}
	if (func_243(8, -1))
	{
		return 0;
	}
	if (HUD::IS_HUD_PREFERENCE_SWITCHED_ON() == 0)
	{
		return 0;
	}
	if (func_228() == 0)
	{
		if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_232 != 99)
		{
			if (((NETWORK::NETWORK_IS_IN_SPECTATOR_MODE() == 0 && Global_1836659 == 0) && !BitTest(Global_2672741.f_1689.f_756, 11)) && Global_1845263[PLAYER::PLAYER_ID() /*877*/] != 0)
			{
				return 0;
			}
		}
	}
	if (BitTest(Global_2621446, 11))
	{
		return 0;
	}
	return 1;
}

bool func_243(int iParam0, int iParam1)//Position - 0x1013D
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

int func_244()//Position - 0x10175
{
	if (Global_1918313)
	{
		return 1;
	}
	return 0;
}

void func_245()//Position - 0x10189
{
	Global_1669875.f_1171 = 1;
}

int func_246(int iParam0)//Position - 0x10199
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

void func_247()//Position - 0x101F6
{
	int iVar0;
	
	if (func_250(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_30(2, iVar0) && func_29(2, iVar0))
			{
				func_17(&(Global_1669875.f_2153.f_555[iVar0 /*2*/]));
			}
			else if (func_252(&(Global_1669875.f_2153.f_555[iVar0 /*2*/]), Global_1669875.f_2153.f_576[iVar0], 0) == 0)
			{
				Global_1669875.f_1 = 1;
				func_249(2, iVar0);
			}
			else
			{
				func_248(2, iVar0);
			}
			iVar0++;
		}
	}
}

void func_248(int iParam0, int iParam1)//Position - 0x10281
{
	MISC::CLEAR_BIT(&(Global_1669875.f_7112[iParam0]), iParam1);
}

void func_249(int iParam0, int iParam1)//Position - 0x1029A
{
	MISC::SET_BIT(&(Global_1669875.f_7064[iParam0]), iParam1);
}

int func_250(int iParam0)//Position - 0x102B3
{
	if (Global_1669875.f_7112[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

void func_251(int iParam0)//Position - 0x102CF
{
	Global_1669875.f_1163 = iParam0;
}

int func_252(var uParam0, int iParam1, bool bParam2)//Position - 0x102E0
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_77(uParam0, bParam2, 0);
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

