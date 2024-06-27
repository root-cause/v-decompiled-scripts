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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<9> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_51[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	bool bLocal_98 = 0;
	var uLocal_99[2] = { 0, 0 };
	float fLocal_102 = 0f;
	var uLocal_103 = 0;
	struct<3> Local_104 = { 0, 0, 0 } ;
	int iLocal_107 = 0;
	struct<3> Local_108 = { 0, 0, 0 } ;
	float fLocal_111 = 0f;
	struct<67> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_190[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_201 = 0;
	struct<261> Local_202[4];
	char* sLocal_1247[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1261 = NULL;
	int iLocal_1262 = 0;
	int iLocal_1263 = 0;
	int iLocal_1264 = 0;
	int iLocal_1265 = 0;
	int iLocal_1266 = 0;
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269 = 0;
	char* sLocal_1270 = NULL;
	var uLocal_1271 = 16;
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
	int iLocal_1436 = 0;
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
	sLocal_16 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_41 = 145;
	bLocal_98 = -1;
	fLocal_102 = 0f;
	Local_104 = { 0f, 0f, 0f };
	Local_108 = { 0f, 0f, 0f };
	fLocal_111 = 0f;
	iLocal_201 = 1;
	sLocal_1261 = "";
	iLocal_1264 = -1;
	iLocal_1267 = -1;
	iLocal_1269 = -1;
	iLocal_1436 = -1;
	if (!func_282(32))
	{
		iLocal_35 = Global_113969.f_10052.f_128;
		if (iLocal_35 == 2)
		{
			MISC::SET_BIT(&uLocal_103, 10);
			Local_108 = { func_281(25) };
			fLocal_111 = func_280(25);
			if (func_279(&Local_112, 25))
			{
				if (!BitTest(uLocal_103, 14))
				{
					MISC::SET_BIT(&uLocal_103, 14);
				}
			}
		}
	}
	else
	{
		func_277("AM_H_PREP8" /* GXT: A getaway vehicle is required for this setup. */, 2, 0, -1, 10000, 3, 0, 0, 0);
		Global_113969.f_10052.f_128 = iLocal_35;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			func_268(0);
			func_266(32, 1);
		}
		else
		{
			func_266(32, 0);
		}
	}
	func_261(1);
	while (true)
	{
		if (func_260(69))
		{
			func_256("AM_H_PREP8" /* GXT: A getaway vehicle is required for this setup. */, 1);
			func_266(32, 0);
		}
		if (!func_254(1))
		{
			if (func_253(PLAYER::PLAYER_PED_ID()))
			{
				func_245();
				func_238();
				func_237();
				func_226();
				switch (iLocal_35)
				{
					case 0:
						func_141();
						break;
					
					case 2:
						func_140();
						break;
					
					case 3:
						func_131();
						break;
					
					case 4:
						func_16(12);
						break;
					
					case 5:
						break;
					
					default:
						break;
				}
				func_7();
			}
			else
			{
				func_1(46, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, bool bParam1)//Position - 0x1D1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (46 - 1))
	{
		if (iParam0 != iVar0 && iParam0 != 46)
		{
			func_4(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iParam0 != 46)
		{
			if ((!func_2(func_3(iParam0)) && !Global_112606) && !BitTest(uLocal_103, 15))
			{
				MISC::SET_BIT(&uLocal_103, 15);
				HUD::CLEAR_HELP(true);
			}
		}
		else if ((HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_112606) && !BitTest(uLocal_103, 15))
		{
			MISC::SET_BIT(&uLocal_103, 15);
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_2(char* sParam0)//Position - 0x26E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

var func_3(bool bParam0)//Position - 0x281
{
	return sLocal_51[bParam0];
}

void func_4(bool bParam0)//Position - 0x28F
{
	int iVar0;
	
	iVar0 = func_6(bParam0);
	MISC::CLEAR_BIT(&(uLocal_99[func_5(bParam0)]), iVar0);
}

int func_5(int iParam0)//Position - 0x2AF
{
	int iVar0;
	
	if (iParam0 < 32)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_6(int iParam0)//Position - 0x2C9
{
	if (iParam0 > 31)
	{
		return (iParam0 - 32);
	}
	return iParam0;
}

void func_7()//Position - 0x2E2
{
	if (((BitTest(uLocal_103, 0) && !BitTest(uLocal_103, 1)) && !BitTest(uLocal_103, 14)) && func_13())
	{
		if (func_12(0, 172, 0) || func_12(0, 173, 0))
		{
			iLocal_1269 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_1269 != -1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1269) < 200)
			{
				iLocal_41 = func_8();
			}
			else
			{
				iLocal_1269 = -1;
			}
		}
	}
	else
	{
		iLocal_41 = 145;
		iLocal_1269 = -1;
	}
}

int func_8()//Position - 0x35B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar2 = 0;
	iVar3 = 145;
	if (Global_79389)
	{
		iVar3 = 145;
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911) == 1)
	{
		if (func_11())
		{
			if (func_10())
			{
				iVar6 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
				iVar0 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iVar4 = MISC::GET_GAME_TIMER();
				while ((!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar0) && iVar6 == 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911) == 1)
				{
					SYSTEM::WAIT(0);
					iVar5 = MISC::GET_GAME_TIMER();
					if ((iVar5 - iVar4) > 1500)
					{
						iVar6 = 1;
					}
				}
				iVar1 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iVar0);
				if (iVar1 > func_9() || iVar1 < 0)
				{
					iVar1 = func_9();
				}
				iVar2 = Global_20936[iVar1];
				iVar3 = iVar2;
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911) == 0)
				{
					iVar3 = 145;
				}
				if (iVar6 == 1)
				{
					iVar3 = 145;
				}
			}
			else
			{
				iVar3 = 145;
			}
		}
		else
		{
			iVar3 = 145;
		}
	}
	else
	{
		iVar3 = 145;
	}
	return iVar3;
}

int func_9()//Position - 0x447
{
	if (Global_32948 == 0 || Global_32948 == 2)
	{
		return 204;
	}
	return 161;
}

int func_10()//Position - 0x469
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_11()//Position - 0x483
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)//Position - 0x49D
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_13()//Position - 0x50F
{
	if (func_15(0) && func_14())
	{
		return 1;
	}
	return 0;
}

int func_14()//Position - 0x52D
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)//Position - 0x54A
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

void func_16(int iParam0)//Position - 0x5A1
{
	func_111();
	if (iLocal_38 == 0)
	{
		switch (iLocal_39)
		{
			case 0:
				func_110(1);
				iLocal_1265 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
				func_1(46, 1);
				iLocal_1266 = MISC::GET_GAME_TIMER() + 3000;
				if (!BitTest(uLocal_103, 10))
				{
					func_94();
				}
				func_93(iParam0, 1);
				iLocal_39 = 1;
				break;
			
			case 1:
				if (MISC::GET_GAME_TIMER() > iLocal_1266)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1265))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1265, "SHOW_MISSION_PASSED_MESSAGE");
						func_92("M_FB4P3_P" /* GXT: ~y~Mission Passed */);
						func_92("M_FB4P3" /* GXT: Getaway Vehicle */);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_1266 = MISC::GET_GAME_TIMER() + 10000;
						func_90(0);
						iLocal_39 = 2;
					}
				}
				break;
			
			case 2:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1265) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
				{
					if (MISC::GET_GAME_TIMER() < iLocal_1266)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_1265, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else if (MISC::GET_GAME_TIMER() < iLocal_1266 + 100)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1265, "TRANSITION_OUT");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_1266 = (iLocal_1266 - 100);
					}
					else if (MISC::GET_GAME_TIMER() < iLocal_1266 + 500)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_1265, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else
					{
						iLocal_39 = 3;
					}
				}
				break;
			
			case 3:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1265))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_1265);
				}
				func_110(0);
				if (iLocal_40 == 2)
				{
					func_89(108, 0);
				}
				if (func_87(iLocal_107))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_107, 1);
				}
				func_83("M_FHPE" /* GXT: Getaway Vehicle */, func_84());
				func_80(2, 0);
				break;
			}
	}
	func_17();
}

void func_17()//Position - 0x743
{
	int iVar0;
	
	if (!BitTest(uLocal_103, 2))
	{
		if (!func_79(0f, 0f, 0f, Local_108, 0))
		{
			if (func_78(PLAYER::PLAYER_PED_ID(), Local_108, 100f, 1) && !func_77())
			{
				if (func_87(func_76(25)))
				{
					iLocal_107 = func_76(25);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_107, true, true);
					if (func_87(iLocal_107))
					{
						if (!DECORATOR::DECOR_EXIST_ON(iLocal_107, "GetawayVehicleValid"))
						{
							if (DECORATOR::DECOR_SET_BOOL(iLocal_107, "GetawayVehicleValid", true))
							{
							}
						}
						MISC::SET_BIT(&uLocal_103, 0);
						MISC::SET_BIT(&uLocal_103, 2);
					}
				}
				else if (!func_75(25, 0))
				{
					if (!func_87(func_76(25)))
					{
						func_70(1);
					}
				}
			}
			else if (func_87(iLocal_107))
			{
				if (!func_78(PLAYER::PLAYER_PED_ID(), Local_108, 100f, 1))
				{
				}
			}
		}
	}
	else
	{
		if (!func_79(0f, 0f, 0f, Local_108, 0))
		{
			if (!func_78(PLAYER::PLAYER_PED_ID(), Local_108, 100f, 1))
			{
				if (func_87(iLocal_107))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_107, false))
					{
						func_21(iLocal_107, Local_108, fLocal_111, 25, 1);
						MISC::CLEAR_BIT(&uLocal_103, 2);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_107, false);
						func_20(&iLocal_107);
						MISC::CLEAR_BIT(&uLocal_103, 0);
					}
					else
					{
						func_70(0);
					}
				}
				else if (!func_75(25, 0))
				{
					func_70(1);
				}
			}
			else if (!func_75(25, 0))
			{
				if (!func_87(iLocal_107))
				{
					func_70(1);
				}
			}
			else if (!func_87(iLocal_107))
			{
				iVar0 = func_76(25);
				if (func_87(iVar0) && iVar0 != iLocal_107)
				{
					iLocal_107 = iVar0;
				}
			}
		}
		func_18();
	}
}

void func_18()//Position - 0x8E6
{
	if (BitTest(uLocal_103, 2) && BitTest(uLocal_103, 0))
	{
		if (func_87(iLocal_107))
		{
			if (func_19(PLAYER::PLAYER_PED_ID(), iLocal_107, 10f, 1))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_107, true), Local_108) >= 100f)
				{
					func_70(0);
				}
			}
		}
		else if (!func_75(25, 0))
		{
			if (func_87(iLocal_107))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_107, false);
			}
			func_20(&iLocal_107);
			func_70(1);
		}
	}
}

bool func_19(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x960
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_20(int* iParam0)//Position - 0x982
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_21(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x9BA
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78179.f_484[25], false))
			{
				if (Global_78179.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_69(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_64(iParam0, &Var0);
		if (func_79(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_79167 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_58(iParam5, &Var0, Param1, fParam4, func_63(iParam0));
		func_22(iParam5, iParam0, 0);
	}
}

void func_22(int iParam0, int iParam1, int iParam2)//Position - 0xAE3
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_54(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_78179.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_78179.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_78179.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_79086 != -1 && Global_79086 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113969.f_32753.f_4801 = func_43();
			}
			if (iParam1 != Global_78179.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_76(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_23(iVar0, 145);
					}
				}
				Global_79085 = iParam1;
				Global_79086 = iParam0;
				Global_79087 = iParam2;
			}
		}
	}
}

void func_23(int iParam0, int iParam1)//Position - 0xBFA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_24(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113969.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113969.f_32753.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113969.f_32753.f_5590 = iParam1;
	Global_79084 = iParam0;
	Global_113969.f_32753.f_5588 = 1;
	func_64(iParam0, &(Global_113969.f_32753.f_5510));
}

int func_24(int iParam0)//Position - 0xDFC
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_41(iParam0, 0, 0)) || func_41(iParam0, 1, 0)) || func_41(iParam0, 2, 0)) || func_63(iParam0) != 145) || func_40(iParam0)) || func_39(iParam0)) || func_38(iParam0)) || func_37(iParam0)) || !func_25(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_39(iParam0))
		{
		}
		if (func_39(iParam0))
		{
		}
		if (func_41(iParam0, 0, 0))
		{
		}
		if (func_41(iParam0, 1, 0))
		{
		}
		if (func_41(iParam0, 2, 0))
		{
		}
		if (func_63(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_25(int iParam0)//Position - 0xED9
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_26(iParam0, 0, -1))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_26(int iParam0, bool bParam1, int iParam2)//Position - 0x1097
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_36())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_35() && !func_34()) && !func_33()) && !func_32()) && !func_36())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_31() || MISC::IS_PC_VERSION()) || func_30())
					{
					}
					else if (!func_33())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_29(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_27(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_27(int iParam0)//Position - 0x121C
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_28())
	{
		return 1;
	}
	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_28()//Position - 0x12E2
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_29(int iParam0, int iParam1)//Position - 0x12F9
{
	int iVar0;
	int iVar1;
	
	if (Global_2707347)
	{
		return 1;
	}
	if ((!Global_2707348 && iParam1 >= 0) && iParam1 <= 517)
	{
		if (BitTest(Global_1586521[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = 0;
	switch (iParam0)
	{
		case joaat("vorschlaghammer"):
			iVar1 = Global_262145.f_35588[0] /* Tunable: LAUNCHPOSIX_VEHICLE_0 */;
			break;
		
		case joaat("driftvorschlag"):
			iVar1 = Global_262145.f_35588[1] /* Tunable: LAUNCHPOSIX_VEHICLE_1 */;
			break;
		
		case joaat("driftnebula"):
			iVar1 = Global_262145.f_35588[2] /* Tunable: LAUNCHPOSIX_VEHICLE_2 */;
			break;
		
		case joaat("driftcypher"):
			iVar1 = Global_262145.f_35588[3] /* Tunable: LAUNCHPOSIX_VEHICLE_3 */;
			break;
		
		case joaat("polimpaler5"):
			iVar1 = Global_262145.f_35588[4] /* Tunable: LAUNCHPOSIX_VEHICLE_4 */;
			break;
		
		case joaat("driftsentinel"):
			iVar1 = Global_262145.f_35588[5] /* Tunable: LAUNCHPOSIX_VEHICLE_5 */;
			break;
		
		case joaat("castigator"):
			iVar1 = Global_262145.f_35588[6] /* Tunable: LAUNCHPOSIX_VEHICLE_6 */;
			break;
		
		case joaat("polgreenwood"):
			iVar1 = Global_262145.f_35588[7] /* Tunable: LAUNCHPOSIX_VEHICLE_7 */;
			break;
		
		case joaat("pipistrello"):
			iVar1 = Global_262145.f_35588[8] /* Tunable: LAUNCHPOSIX_VEHICLE_8 */;
			break;
		
		case joaat("envisage"):
			iVar1 = Global_262145.f_35588[9] /* Tunable: LAUNCHPOSIX_VEHICLE_9 */;
			break;
		
		case joaat("poldorado"):
			iVar1 = Global_262145.f_35588[10] /* Tunable: LAUNCHPOSIX_VEHICLE_10 */;
			break;
		
		case joaat("paragon3"):
			iVar1 = Global_262145.f_35588[11] /* Tunable: LAUNCHPOSIX_VEHICLE_11 */;
			break;
		
		case joaat("dominator10"):
			iVar1 = Global_262145.f_35588[12] /* Tunable: LAUNCHPOSIX_VEHICLE_12 */;
			break;
		
		case joaat("poldominator10"):
			iVar1 = Global_262145.f_35588[13] /* Tunable: LAUNCHPOSIX_VEHICLE_13 */;
			break;
		
		case joaat("pizzaboy"):
			iVar1 = Global_262145.f_35588[14] /* Tunable: LAUNCHPOSIX_VEHICLE_14 */;
			break;
		
		case joaat("coquette5"):
			iVar1 = Global_262145.f_35588[15] /* Tunable: LAUNCHPOSIX_VEHICLE_15 */;
			break;
		
		case joaat("niobe"):
			iVar1 = Global_262145.f_35588[16] /* Tunable: LAUNCHPOSIX_VEHICLE_16 */;
			break;
		
		case joaat("eurosx32"):
			iVar1 = Global_262145.f_35588[17] /* Tunable: LAUNCHPOSIX_VEHICLE_17 */;
			break;
		
		case joaat("yosemite1500"):
			iVar1 = Global_262145.f_35588[18] /* Tunable: LAUNCHPOSIX_VEHICLE_18 */;
			break;
		
		case joaat("polimpaler6"):
			iVar1 = Global_262145.f_35588[19] /* Tunable: LAUNCHPOSIX_VEHICLE_19 */;
			break;
		
		case joaat("policet3"):
			iVar1 = Global_262145.f_35588[20] /* Tunable: LAUNCHPOSIX_VEHICLE_20 */;
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_30()//Position - 0x154A
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_31()//Position - 0x1560
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_32()//Position - 0x1576
{
	return 0;
}

int func_33()//Position - 0x157F
{
	return 1;
}

int func_34()//Position - 0x1588
{
	return 1;
}

int func_35()//Position - 0x1591
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x15AA
{
	int iVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
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
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
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

int func_37(int iParam0)//Position - 0x1662
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_26(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x16A9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98874[iVar0]))
		{
			if (Global_98874[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x16E4
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98844[iVar0], false))
			{
				if (Global_98844[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98844[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x1760
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[24]))
	{
		if (iParam0 == Global_78179.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78179.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_41(int iParam0, int iParam1, bool bParam2)//Position - 0x1848
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_42(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x18B6
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

var func_43()//Position - 0x198D
{
	var uVar0;
	
	func_53(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_52(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_51(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_46(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_45(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_44(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_44(var uParam0, int iParam1)//Position - 0x19D3
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_45(var uParam0, int iParam1)//Position - 0x1A59
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_46(var uParam0, int iParam1)//Position - 0x1A8C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_50(*uParam0);
	iVar1 = func_48(*uParam0);
	if (iParam1 < 1 || iParam1 > func_47(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_47(int iParam0, int iParam1)//Position - 0x1ADD
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_48(int iParam0)//Position - 0x1B7F
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_49(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_49(bool bParam0, int iParam1, int iParam2)//Position - 0x1BA1
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_50(var uParam0)//Position - 0x1BB8
{
	return uParam0 & 15;
}

void func_51(var uParam0, int iParam1)//Position - 0x1BC5
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_52(var uParam0, int iParam1)//Position - 0x1BFF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_53(var uParam0, int iParam1)//Position - 0x1C3A
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_54(var uParam0, int iParam1)//Position - 0x1C76
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_55(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_55(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_55(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_55(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_55(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_55(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_55(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_55(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_55(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_36())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_36())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113969.f_32753.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_79(Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113969.f_32753.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113969.f_32753.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_79(Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_79(Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_55(int iParam0, int iParam1)//Position - 0x3363
{
	struct<82> Var0;
	
	if (func_57(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_56(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_56(int iParam0, var uParam1, int iParam2)//Position - 0x33A5
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113969.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113969.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_57(int iParam0)//Position - 0x3601
{
	return iParam0 < 3;
}

void func_58(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x360D
{
	if (func_54(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 10))
		{
			func_62(iParam0);
			func_61(uParam1, &(Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 11))
			{
				Global_113969.f_32753.f_1864[Global_78179.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113969.f_32753.f_1934[Global_78179.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_113969.f_32753.f_1864[Global_78179.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113969.f_32753.f_1934[Global_78179.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_59(iParam0, 1);
		}
	}
}

void func_59(int iParam0, bool bParam1)//Position - 0x3706
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_75(iParam0, 0))
		{
			func_60(iParam0, 1, 0);
			func_60(iParam0, 2, 0);
			func_60(iParam0, 3, 0);
			func_60(iParam0, 4, 0);
			func_60(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_60(iParam0, 0, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)//Position - 0x3763
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113969.f_32753[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_32753[iParam0]), iParam1);
	}
}

void func_61(var uParam0, var uParam1)//Position - 0x379E
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_62(int iParam0)//Position - 0x386A
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_54(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_78179.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_78179.f_139[iParam0]));
			Global_78179.f_139[iParam0] = 0;
		}
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 13))
		{
			func_59(iParam0, 0);
		}
	}
}

int func_63(int iParam0)//Position - 0x38E1
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				return Global_98854[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_64(int iParam0, var uParam1)//Position - 0x3944
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_68(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_67(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_66(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_65(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_65(int iParam0)//Position - 0x3BEF
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_66(int iParam0, var uParam1, var uParam2)//Position - 0x3C9F
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_67(int iParam0)//Position - 0x3E92
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_68(var uParam0)//Position - 0x3EB2
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_69(int iParam0)//Position - 0x3F61
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_62(iParam0);
	func_59(iParam0, 0);
}

void func_70(bool bParam0)//Position - 0x3F88
{
	if (BitTest(uLocal_103, 14))
	{
		if (func_72(PLAYER::PLAYER_PED_ID()) == 0)
		{
			if (bParam0)
			{
				func_71(10);
			}
			else
			{
				func_71(12);
			}
		}
		else if (bParam0)
		{
			func_71(11);
		}
		else
		{
			func_71(13);
		}
		if (iLocal_40 == 0)
		{
			func_93(45, 0);
		}
		else if (iLocal_40 == 1)
		{
			func_93(12, 0);
		}
		else if (iLocal_40 == 2)
		{
			func_93(34, 0);
		}
		if (iLocal_40 != 2)
		{
			Local_104 = { 0f, 0f, 0f };
		}
		iLocal_38 = 0;
		iLocal_39 = 0;
		MISC::CLEAR_BIT(&uLocal_103, 6);
		MISC::CLEAR_BIT(&uLocal_103, 7);
		MISC::CLEAR_BIT(&uLocal_103, 0);
		MISC::CLEAR_BIT(&uLocal_103, 1);
		MISC::CLEAR_BIT(&uLocal_103, 8);
		MISC::CLEAR_BIT(&uLocal_103, 12);
		MISC::CLEAR_BIT(&uLocal_103, 2);
		MISC::CLEAR_BIT(&uLocal_103, 14);
		if (iLocal_35 == 4)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1265))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_1265);
			}
			func_110(0);
		}
		func_80(0, 0);
	}
}

void func_71(int iParam0)//Position - 0x406D
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	MISC::SET_BIT(&(uLocal_99[func_5(iParam0)]), iVar0);
}

int func_72(int iParam0)//Position - 0x408D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)//Position - 0x40CA
{
	if (func_57(iParam0))
	{
		return func_74(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_74(int iParam0)//Position - 0x40EF
{
	return Global_2169[iParam0 /*29*/];
}

int func_75(int iParam0, int iParam1)//Position - 0x40FE
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

int func_76(int iParam0)//Position - 0x411E
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_78179.f_139[iParam0];
}

int func_77()//Position - 0x413A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

bool func_78(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x4156
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

bool func_79(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x4174
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_80(int iParam0, bool bParam1)//Position - 0x41BB
{
	Global_113969.f_10052.f_128 = iParam0;
	iLocal_35 = iParam0;
	if (bParam1)
	{
		return;
	}
	func_81();
}

int func_81()//Position - 0x41DF
{
	if (func_82(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

int func_82(bool bParam0)//Position - 0x422A
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_83(char* sParam0, var uParam1)//Position - 0x4252
{
	STATS::STAT_SET_GXT_LABEL(joaat("SP_LAST_MISSION_NAME"), sParam0, true);
	if (BitTest(uParam1, 0))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("SP0_LAST_MISSION_NAME"), sParam0, true);
	}
	if (BitTest(uParam1, 1))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("SP1_LAST_MISSION_NAME"), sParam0, true);
	}
	if (BitTest(uParam1, 2))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("SP2_LAST_MISSION_NAME"), sParam0, true);
	}
}

int func_84()//Position - 0x42A3
{
	func_85();
	switch (Global_113969.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_85()//Position - 0x42E9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_73(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_72(PLAYER::PLAYER_PED_ID());
			if (func_57(iVar0) && (!func_86(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_57(Global_113969.f_2366.f_539.f_4321))
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

bool func_86(int iParam0)//Position - 0x43E6
{
	return Global_44042 == iParam0;
}

int func_87(int iParam0)//Position - 0x43F4
{
	if (func_88(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88(int iParam0)//Position - 0x441E
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

void func_89(int iParam0, int iParam1)//Position - 0x443F
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113969.f_8616[iParam0] = 1;
	Global_113969.f_8616.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_90(bool bParam0)//Position - 0x447C
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_91())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

bool func_91()//Position - 0x44EF
{
	func_85();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_92(char* sParam0)//Position - 0x4508
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_93(int iParam0, int iParam1)//Position - 0x451A
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113969.f_9088.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113969.f_9088.f_99.f_58[iParam0] = iParam1;
}

void func_94()//Position - 0x455F
{
	Global_113969.f_10019.f_21++;
	if (iLocal_40 == 0)
	{
		STATS::STAT_SET_INT(joaat("FL_CO_FB4P3"), Global_113969.f_10019.f_21, true);
		if (func_103())
		{
			if (func_260(74) || (func_260(75) && func_102()))
			{
				func_93(46, 1);
			}
		}
	}
	func_95();
	MISC::SET_BIT(&uLocal_103, 10);
}

void func_95()//Position - 0x45CD
{
	if (iLocal_40 == 0)
	{
		func_96(23, 0, 0);
	}
	else if (iLocal_40 == 1)
	{
	}
	else if (iLocal_40 == 2)
	{
	}
}

void func_96(int iParam0, int iParam1, int iParam2)//Position - 0x45F5
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_100((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_97();
	}
}

void func_97()//Position - 0x46DB
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113969.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113705++;
					fVar1 = (fVar1 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113706++;
					fVar2 = (fVar2 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113707++;
					fVar3 = (fVar3 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113708++;
					fVar4 = (fVar4 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113709++;
					fVar5 = (fVar5 + (Global_113969.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113710++;
					fVar6 = (fVar6 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113711++;
					fVar7 = (fVar7 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113688 > 0)
	{
		if (Global_113705 == Global_113688)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113689 > 0)
	{
		if (Global_113706 == Global_113689)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113690 > 0)
	{
		if (Global_113707 == Global_113690)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113691 > 0)
	{
		if (Global_113708 == Global_113691)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113692 > 0)
	{
		if (((Global_113709 == Global_113692 || (Global_113692 * 10 / Global_113709) < 41) || Global_113709 > Global_113695) || Global_113709 == Global_113695)
		{
			if (!BitTest(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113692, 0);
					MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113693 > 0)
	{
		if (Global_113710 == Global_113693)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113694 > 0)
	{
		if (Global_113711 == Global_113694)
		{
			fVar7 = 5f;
		}
	}
	Global_113969.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
	{
		iVar9 = Global_113695;
	}
	else
	{
		iVar9 = Global_113709;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113705, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113688, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113706, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113689, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113707, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113690, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113708, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113691, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113695, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113711 + Global_113710), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113694 + Global_113693), true);
	Global_113712 = (Global_113705 * 100 / Global_113688);
	Global_113714 = ((Global_113707 + Global_113706) * 100 / (Global_113690 + Global_113689));
	Global_113713 = ((Global_113708 + iVar9) * 100 / (Global_113691 + Global_113695));
	Global_113715 = ((Global_113710 + Global_113711) * 100 / (Global_113693 + Global_113694));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113969.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113712, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113713, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113714, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113969.f_10197.f_3853))
	{
		func_99(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_98() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_81();
				}
			}
		}
	}
}

int func_98()//Position - 0x4B99
{
	return Global_32948;
}

int func_99(int iParam0, int iParam1)//Position - 0x4BA4
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_100(int iParam0, bool bParam1, int iParam2)//Position - 0x4BF5
{
	if (iParam2 == -1)
	{
		iParam2 = func_101();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_101()//Position - 0x4C13
{
	return Global_1574926;
}

int func_102()//Position - 0x4C1F
{
	if ((func_260(41) && func_260(3)) && func_260(21))
	{
		return 1;
	}
	return 0;
}

int func_103()//Position - 0x4C4A
{
	if (iLocal_40 == 0)
	{
		return func_108();
	}
	else if (iLocal_40 == 1)
	{
		return func_107();
	}
	else if (iLocal_40 == 2)
	{
		return func_104();
	}
	return 0;
}

int func_104()//Position - 0x4C80
{
	if ((func_260(79) && func_260(83)) && func_105(func_106()))
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0)//Position - 0x4CAE
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

int func_106()//Position - 0x4CDB
{
	if (iLocal_40 == 0)
	{
		return 45;
	}
	else if (iLocal_40 == 1)
	{
		return 12;
	}
	else if (iLocal_40 == 2)
	{
		return 34;
	}
	return -1;
}

int func_107()//Position - 0x4D0B
{
	if (func_260(68))
	{
		return 1;
	}
	return 0;
}

int func_108()//Position - 0x4D21
{
	if (func_109(33, 37) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, int iParam1)//Position - 0x4D39
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (func_260(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_105(func_106()))
	{
		iVar0++;
	}
	return iVar0;
}

void func_110(int iParam0)//Position - 0x4D7A
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

void func_111()//Position - 0x4D8E
{
	struct<6> Var0;
	
	if (iLocal_38 != 0)
	{
		Var0 = { func_130() };
		switch (iLocal_38)
		{
			case 1:
				if (iLocal_40 != 2)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
						{
							func_129("LOCAUD", Local_42.f_7);
							func_128(1);
							iLocal_38 = 2;
						}
						else if (BitTest(uLocal_103, 10) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 0)
						{
							func_129("LOCAUD", Local_42.f_7);
							func_128(1);
							iLocal_38 = 2;
						}
					}
				}
				else
				{
					iLocal_38 = 0;
				}
				if (func_127())
				{
					iLocal_38 = 3;
				}
				break;
			
			case 2:
				if (func_127())
				{
					iLocal_38 = 3;
				}
				if (!BitTest(uLocal_103, 10))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
					{
						func_120(Var0);
					}
				}
				else
				{
					iLocal_38 = 3;
				}
				break;
			
			case 3:
				if (!func_119())
				{
					iLocal_38 = 4;
				}
				break;
			
			case 4:
				if (!func_15(0))
				{
					if (iLocal_40 == 1)
					{
						func_116(Local_42.f_8);
					}
					iLocal_38 = 5;
				}
				break;
			
			case 5:
				if (func_91() == 0)
				{
					if (iLocal_40 == 0)
					{
						if (func_103())
						{
							if ((func_260(74) || func_260(75)) && func_102())
							{
								func_112(1);
								iLocal_38 = 0;
							}
							else
							{
								func_112(0);
								iLocal_38 = 0;
							}
						}
						else
						{
							iLocal_38 = 0;
						}
					}
					else
					{
						iLocal_38 = 0;
					}
				}
				else
				{
					if (iLocal_40 == 0)
					{
						if (func_103())
						{
							if (!func_260(3))
							{
								func_89(50, 0);
							}
						}
					}
					iLocal_38 = 0;
				}
				break;
			}
	}
}

void func_112(bool bParam0)//Position - 0x4F01
{
	if (bParam0)
	{
		func_113(1527885205, 0, func_91(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_260(3))
	{
		func_113(-224691627, 0, func_91(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_113(-224691627, 0, func_91(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_113(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x4F72
{
	struct<15> Var0;
	int iVar15;
	
	if (func_82(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
	{
		return 0;
	}
	if (Global_113969.f_7691.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113969.f_7691.f_911 == Var0.f_0)
		{
			Global_113969.f_7691.f_911 = -1;
		}
		Var0.f_3 = func_115(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, bParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113969.f_7691[Global_113969.f_7691.f_136 /*15*/] = { Var0 };
		Global_113969.f_7691.f_136++;
		func_114(bParam2);
		return 1;
	}
	return 0;
}

void func_114(bool bParam0)//Position - 0x50C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_57(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_136)
	{
		if (BitTest(Global_113969.f_7691[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113969.f_7691[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113969.f_7691[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113969.f_7691.f_764)
	{
		if (BitTest(Global_113969.f_7691.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113969.f_7691.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113969.f_7691.f_919[bParam0] = iVar1;
}

int func_115(int iParam0)//Position - 0x5181
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_116(int iParam0)//Position - 0x51EB
{
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_118(iParam0, 0, 0);
		func_118(iParam0, 1, 0);
		func_118(iParam0, 2, 0);
		func_117(iParam0, 0, 0);
		func_117(iParam0, 1, 0);
		func_117(iParam0, 2, 0);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)//Position - 0x5231
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_118(int iParam0, int iParam1, int iParam2)//Position - 0x5276
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_119()//Position - 0x52BB
{
	if (Global_22286 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
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

void func_120(struct<6> Param0)//Position - 0x52E0
{
	if (iLocal_40 == 0)
	{
		func_125(Param0);
	}
	else if (iLocal_40 == 1)
	{
		func_121(Param0);
	}
}

void func_121(struct<6> Param0)//Position - 0x5307
{
	if (func_103())
	{
		func_122(Param0, 1);
	}
	else
	{
		func_122(Param0, 0);
	}
}

void func_122(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)//Position - 0x532B
{
	struct<4> Var0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, Local_42.f_7))
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
			{
				if (iLocal_40 == 0)
				{
					Var0 = { func_124(bParam6) };
					func_93(46, 1);
					func_129(sLocal_1270, &Var0);
					func_128(1);
				}
				else if (iLocal_40 == 1)
				{
					Var0 = { func_123(bParam6) };
					func_129(sLocal_1270, &Var0);
					func_128(1);
				}
				iLocal_38 = 3;
			}
		}
	}
}

struct<4> func_123(bool bParam0)//Position - 0x539B
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_91())
		{
			case 1:
				StringCopy(&Var0, "AHF_C8", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C5", 16);
				break;
		}
	}
	else
	{
		switch (func_91())
		{
			case 1:
				StringCopy(&Var0, "AHF_C9", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C6", 16);
				break;
			}
	}
	return Var0;
}

struct<4> func_124(bool bParam0)//Position - 0x5405
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_91())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_91())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

void func_125(struct<6> Param0)//Position - 0x546F
{
	if (func_103())
	{
		if (func_126())
		{
			if (func_91() != 0)
			{
				func_122(Param0, 1);
			}
			else
			{
				iLocal_38 = 3;
			}
		}
		else if (func_91() != 0)
		{
			func_122(Param0, 0);
		}
		else
		{
			iLocal_38 = 3;
		}
	}
	else
	{
		iLocal_38 = 3;
	}
}

int func_126()//Position - 0x54BC
{
	if (iLocal_40 == 0)
	{
		if ((func_260(74) || func_260(74)) && func_102())
		{
			return 1;
		}
	}
	else if (iLocal_40 == 1)
	{
		if (func_260(68))
		{
			return 1;
		}
	}
	return 0;
}

int func_127()//Position - 0x5503
{
	if (Global_22335 == 1 || Global_23302 == 1)
	{
		return 1;
	}
	return 0;
}

void func_128(bool bParam0)//Position - 0x5526
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

void func_129(char* sParam0, char* sParam1)//Position - 0x553A
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_22343 = 1;
		StringCopy(&Global_22350, sParam0, 24);
		StringCopy(&Global_22344, sParam1, 24);
	}
}

struct<6> func_130()//Position - 0x555B
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

void func_131()//Position - 0x557F
{
	func_132();
}

void func_132()//Position - 0x558B
{
	func_138();
	func_133();
}

void func_133()//Position - 0x559B
{
	if (func_137() == 69)
	{
		if (func_136() && !func_75(25, 0))
		{
			if (Local_112.f_66 != 0)
			{
				func_58(25, &Local_112, Local_108, fLocal_111, 145);
			}
		}
	}
	else if (func_137() == -1)
	{
		if (!BitTest(uLocal_103, 1))
		{
			if (!func_78(PLAYER::PLAYER_PED_ID(), Local_104, 5f, 1))
			{
				if (func_135())
				{
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (func_134())
						{
							func_71(1);
						}
						else if (Global_113024)
						{
							func_71(2);
						}
						else
						{
							func_71(0);
						}
						iLocal_37 = 1;
						fLocal_102 = 0f;
					}
				}
			}
		}
	}
}

bool func_134()//Position - 0x5635
{
	return SCRIPT::IS_THREAD_ACTIVE(Global_113969.f_18106.f_395);
}

int func_135()//Position - 0x564B
{
	if (func_13())
	{
		if (func_91() == 0)
		{
			if (iLocal_41 == 12 || iLocal_41 == 1)
			{
				return 1;
			}
		}
		else if (iLocal_41 == 0 || iLocal_41 == 12)
		{
			return 1;
		}
	}
	return 0;
}

int func_136()//Position - 0x5692
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

int func_137()//Position - 0x56B6
{
	return Global_79652;
}

void func_138()//Position - 0x56C2
{
	if (!func_79(Local_108, 0f, 0f, 0f, 0) && func_137() != func_139())
	{
		if (func_78(PLAYER::PLAYER_PED_ID(), Local_108, 60f, 1))
		{
			if (func_87(func_76(25)))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_76(25), true), Local_108) >= 100f)
				{
					func_70(0);
				}
			}
			else if (!func_75(25, 0))
			{
				func_70(1);
			}
		}
	}
}

int func_139()//Position - 0x573E
{
	if (iLocal_40 == 0)
	{
		return 38;
	}
	else if (iLocal_40 == 1)
	{
		return 69;
	}
	else if (iLocal_40 == 2)
	{
		return 85;
	}
	return -1;
}

void func_140()//Position - 0x576E
{
	func_17();
	func_111();
}

void func_141()//Position - 0x577E
{
	int iVar0;
	
	func_225();
	func_211();
	func_177();
	func_111();
	func_176();
	if (func_172())
	{
		if (func_142(&iVar0))
		{
			func_268(0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (func_87(iLocal_107))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_107, 2);
			}
			func_80(iVar0, 0);
		}
	}
}

int func_142(var uParam0)//Position - 0x57E9
{
	char* sVar0;
	
	if (BitTest(uLocal_103, 0))
	{
		func_161();
		if (func_143())
		{
			sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (iLocal_40 == 2)
				{
					*uParam0 = 1;
				}
				else
				{
					*uParam0 = 4;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_143()//Position - 0x5829
{
	if (func_145(&uLocal_1271, Local_42.f_8, sLocal_1270, Local_42.f_4, 9, 1, 0, 0, 0))
	{
		iLocal_38 = 1;
		func_144(192, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		return 1;
	}
	return 0;
}

void func_144(int iParam0, struct<3> Param1)//Position - 0x5863
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(Global_33328[iParam0 /*23*/].f_19))
	{
		HUD::SET_BLIP_COORDS(Global_33328[iParam0 /*23*/].f_19, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_33328[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

bool func_145(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x58B2
{
	func_160(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	if (iParam5 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	Global_2883585 = 0;
	return func_146(sParam3, iParam4, bParam8);
}

int func_146(char* sParam0, int iParam1, bool bParam2)//Position - 0x5911
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
					func_159();
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
		if (func_158(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_157();
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
				func_156();
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
				if (func_155())
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
			if (func_154())
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
			func_153();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_152();
		func_147();
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
		func_159();
	}
	return 0;
}

void func_147()//Position - 0x5BDF
{
	if (!func_148())
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

int func_148()//Position - 0x5C16
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_151())
	{
		return 0;
	}
	if (func_149(PLAYER::PLAYER_ID()))
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

bool func_149(int iParam0)//Position - 0x5C79
{
	return func_150(iParam0, 20);
}

var func_150(int iParam0, int iParam1)//Position - 0x5C89
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_151()//Position - 0x5CA1
{
	return -1;
}

void func_152()//Position - 0x5CAA
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

void func_153()//Position - 0x5CDA
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

int func_154()//Position - 0x5D6F
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_155()//Position - 0x5D96
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

void func_156()//Position - 0x5E2F
{
	if (func_86(14))
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
		Global_20930 = func_91();
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

void func_157()//Position - 0x5ED1
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

bool func_158(int iParam0, int iParam1)//Position - 0x5F27
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

void func_159()//Position - 0x5F5F
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

void func_160(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5FB6
{
	Global_21740 = { *uParam0 };
	Global_8116 = uParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
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

void func_161()//Position - 0x600C
{
	bool bVar0;
	
	bVar0 = func_91();
	func_162(bVar0, func_171(bVar0));
}

void func_162(bool bParam0, var uParam1)//Position - 0x6026
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0:
			Local_42.f_0 = 0;
			Local_42.f_1 = "MICHAEL";
			if (iLocal_40 == 0)
			{
				Local_42.f_2 = 1;
				Local_42.f_3 = "FRANKLIN";
				Local_42.f_8 = 5;
			}
			else
			{
				Local_42.f_2 = 3;
				Local_42.f_3 = "LESTER";
				if (iLocal_40 == 1)
				{
					Local_42.f_8 = 6;
				}
				else
				{
					Local_42.f_8 = 12;
				}
			}
			Local_42.f_5 = "FBI_3_FRESP";
			func_169(bParam0);
			break;
		
		case 1:
			Local_42.f_0 = 1;
			Local_42.f_1 = "FRANKLIN";
			if (iLocal_40 == 0)
			{
				Local_42.f_2 = 0;
				Local_42.f_3 = "MICHAEL";
				Local_42.f_8 = 9;
			}
			else
			{
				Local_42.f_2 = 3;
				Local_42.f_3 = "LESTER";
				if (iLocal_40 == 1)
				{
					Local_42.f_8 = 7;
				}
				else
				{
					Local_42.f_8 = 12;
				}
			}
			Local_42.f_5 = "FBI_3_MRESP";
			func_169(bParam0);
			break;
		
		case 2:
			Local_42.f_0 = 2;
			Local_42.f_1 = "TREVOR";
			if (iLocal_40 == 0)
			{
				Local_42.f_2 = 0;
				Local_42.f_3 = "MICHAEL";
				Local_42.f_8 = 8;
			}
			else
			{
				Local_42.f_2 = 3;
				Local_42.f_3 = "LESTER";
				if (iLocal_40 == 1)
				{
					Local_42.f_8 = 7;
				}
				else
				{
					Local_42.f_8 = 12;
				}
			}
			Local_42.f_5 = "FBI_3_MRESP";
			func_169(bParam0);
			break;
	}
	if (iLocal_40 == 1)
	{
		if (bParam0 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
		func_164(Local_42.f_8, iVar0, 0);
	}
	func_163(&uLocal_1271, Local_42.f_0, PLAYER::PLAYER_PED_ID(), Local_42.f_1, 0, 1);
	func_163(&uLocal_1271, Local_42.f_2, 0, Local_42.f_3, 0, 1);
	Local_42.f_4 = uParam1;
}

void func_163(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x619C
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

void func_164(int iParam0, int iParam1, bool bParam2)//Position - 0x6237
{
	int iVar0;
	
	Global_9486 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_156();
		if (iParam1 == 4)
		{
			func_118(iParam0, 0, 1);
			func_118(iParam0, 1, 1);
			func_118(iParam0, 2, 1);
			func_117(iParam0, 0, 1);
			func_117(iParam0, 1, 1);
			func_117(iParam0, 2, 1);
		}
		else
		{
			if (func_168(iParam0, iParam1) == 1 && func_167(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_118(iParam0, iVar0, 1);
			func_117(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2738934.f_6969, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (iParam1 != 4)
				{
					if (Global_20930 != iParam1)
					{
						Global_9459[iParam1 /*4*/] = { func_166(iParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_166(iParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_165();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_166(iParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_165();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_166(iParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_165();
			}
		}
	}
}

void func_165()//Position - 0x63B5
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_9486 /*29*/].f_7)), 64);
	if (Global_9505 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_9410[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_9410[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8800, 0);
}

struct<4> func_166(int iParam0)//Position - 0x642E
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_167(int iParam0, int iParam1)//Position - 0x6441
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

int func_168(int iParam0, int iParam1)//Position - 0x646B
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

void func_169(int iParam0)//Position - 0x6495
{
	Local_42.f_6 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	func_170(iParam0);
}

void func_170(int iParam0)//Position - 0x64B4
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_42.f_6))
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "SanAnd" /* GXT: San Andreas */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M77";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F78";
			}
			else
			{
				Local_42.f_7 = "LOC_T78";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Alamo" /* GXT: Alamo Sea */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M101";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F1";
			}
			else
			{
				Local_42.f_7 = "LOC_T1";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Alta" /* GXT: Alta */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M1";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F2";
			}
			else
			{
				Local_42.f_7 = "LOC_T2";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Airp" /* GXT: Los Santos International Airport */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M48";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F49";
			}
			else
			{
				Local_42.f_7 = "LOC_T49";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ArmyB" /* GXT: Fort Zancudo */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M28";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F29";
			}
			else
			{
				Local_42.f_7 = "LOC_T29";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "BhamCa" /* GXT: Banham Canyon */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M2";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F3";
			}
			else
			{
				Local_42.f_7 = "LOC_T3";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Banning" /* GXT: Banning */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M3";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F4";
			}
			else
			{
				Local_42.f_7 = "LOC_T4";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Baytre" /* GXT: Baytree Canyon */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M4";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F5";
			}
			else
			{
				Local_42.f_7 = "LOC_T5";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Beach" /* GXT: Vespucci Beach */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M93";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F94";
			}
			else
			{
				Local_42.f_7 = "LOC_T94";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "BradT" /* GXT: Braddock Tunnel */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M7";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F8";
			}
			else
			{
				Local_42.f_7 = "LOC_T8";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "BradP" /* GXT: Braddock Pass */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M6";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F7";
			}
			else
			{
				Local_42.f_7 = "LOC_T7";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Burton" /* GXT: Burton */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M8";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F9";
			}
			else
			{
				Local_42.f_7 = "LOC_T9";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CANNY" /* GXT: Raton Canyon */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M70";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F71";
			}
			else
			{
				Local_42.f_7 = "LOC_T71";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CCreak" /* GXT: Cassidy Creek */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M10";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F11";
			}
			else
			{
				Local_42.f_7 = "LOC_T11";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CalafB" /* GXT: Calafia Bridge */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M9";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F10";
			}
			else
			{
				Local_42.f_7 = "LOC_T10";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ChamH" /* GXT: Chamberlain Hills */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M11";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F12";
			}
			else
			{
				Local_42.f_7 = "LOC_T12";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CHU" /* GXT: Chumash */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M13";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F14";
			}
			else
			{
				Local_42.f_7 = "LOC_T14";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CHIL" /* GXT: Vinewood Hills */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M96";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F97";
			}
			else
			{
				Local_42.f_7 = "LOC_T97";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "COSI" /* GXT: Countryside */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M14";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F15";
			}
			else
			{
				Local_42.f_7 = "LOC_T15";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CMSW" /* GXT: Chiliad Mountain State Wilderness */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M12";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F13";
			}
			else
			{
				Local_42.f_7 = "LOC_T13";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Cypre" /* GXT: Cypress Flats */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M15";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F16";
			}
			else
			{
				Local_42.f_7 = "LOC_T16";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Davis" /* GXT: Davis */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M16";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F17";
			}
			else
			{
				Local_42.f_7 = "LOC_T17";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Desrt" /* GXT: Grand Senora Desert */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M32";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F33";
			}
			else
			{
				Local_42.f_7 = "LOC_T33";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "DelBe" /* GXT: Del Perro Beach */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M19";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F20";
			}
			else
			{
				Local_42.f_7 = "LOC_T20";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "DelPe" /* GXT: Del Perro */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M18";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F19";
			}
			else
			{
				Local_42.f_7 = "LOC_T19";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "DelSol" /* GXT: La Puerta */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F42";
			}
			else
			{
				Local_42.f_7 = "LOC_T42";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Downt" /* GXT: Downtown */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M20";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F21";
			}
			else
			{
				Local_42.f_7 = "LOC_T21";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "DTVine" /* GXT: Downtown Vinewood */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M21";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F22";
			}
			else
			{
				Local_42.f_7 = "LOC_T22";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Eclips" /* GXT: Eclipse */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M24";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F25";
			}
			else
			{
				Local_42.f_7 = "LOC_T25";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ELSant" /* GXT: East Los Santos */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M22";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F23";
			}
			else
			{
				Local_42.f_7 = "LOC_T23";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "EBuro" /* GXT: El Burro Heights */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M25";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F26";
			}
			else
			{
				Local_42.f_7 = "LOC_T26";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ELGorl" /* GXT: El Gordo Lighthouse */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M26";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F27";
			}
			else
			{
				Local_42.f_7 = "LOC_T27";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Elysian" /* GXT: Elysian Island */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M27";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F28";
			}
			else
			{
				Local_42.f_7 = "LOC_T28";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Galli" /* GXT: Galileo Park */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M31";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F32";
			}
			else
			{
				Local_42.f_7 = "LOC_T32";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Galfish" /* GXT: Galilee */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M29";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F30";
			}
			else
			{
				Local_42.f_7 = "LOC_T30";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Greatc" /* GXT: Great Chaparral */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M34";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F35";
			}
			else
			{
				Local_42.f_7 = "LOC_T35";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Golf" /* GXT: GWC and Golfing Society */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M35";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F36";
			}
			else
			{
				Local_42.f_7 = "LOC_T36";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "GrapeS" /* GXT: Grapeseed */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M33";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F34";
			}
			else
			{
				Local_42.f_7 = "LOC_T34";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Hawick" /* GXT: Hawick */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M37";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F38";
			}
			else
			{
				Local_42.f_7 = "LOC_T38";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Harmo" /* GXT: Harmony */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M36";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F37";
			}
			else
			{
				Local_42.f_7 = "LOC_T37";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Heart" /* GXT: Heart Attacks Beach */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M38";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F39";
			}
			else
			{
				Local_42.f_7 = "LOC_T39";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "HumLab" /* GXT: Humane Labs and Research */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M39";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F40";
			}
			else
			{
				Local_42.f_7 = "LOC_T40";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "HORS" /* GXT: Vinewood Racetrack */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M97";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F98";
			}
			else
			{
				Local_42.f_7 = "LOC_T98";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Koreat" /* GXT: Little Seoul */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M46";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F47";
			}
			else
			{
				Local_42.f_7 = "LOC_T47";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Jail" /* GXT: Bolingbroke Penitentiary */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M5";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F6";
			}
			else
			{
				Local_42.f_7 = "LOC_T6";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LAct" /* GXT: Land Act Reservoir */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M45";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F46";
			}
			else
			{
				Local_42.f_7 = "LOC_T46";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LDam" /* GXT: Land Act Dam */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M44";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F45";
			}
			else
			{
				Local_42.f_7 = "LOC_T45";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Lago" /* GXT: Lago Zancudo */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M43";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F44";
			}
			else
			{
				Local_42.f_7 = "LOC_T44";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LegSqu" /* GXT: Legion Square */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F";
			}
			else
			{
				Local_42.f_7 = "LOC_T";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LosSF" /* GXT: Los Santos Freeway */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M47";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F48";
			}
			else
			{
				Local_42.f_7 = "LOC_T48";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LMesa" /* GXT: La Mesa */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M40";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F41";
			}
			else
			{
				Local_42.f_7 = "LOC_T41";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LosPuer" /* GXT: La Puerta */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F42";
			}
			else
			{
				Local_42.f_7 = "LOC_T42";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LosPFy" /* GXT: La Puerta Fwy */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M42";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F43";
			}
			else
			{
				Local_42.f_7 = "LOC_T43";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LOSTMC" /* GXT: Lost MC */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F";
			}
			else
			{
				Local_42.f_7 = "LOC_T";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Mirr" /* GXT: Mirror Park */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M50";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F51";
			}
			else
			{
				Local_42.f_7 = "LOC_T51";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Morn" /* GXT: Morningwood */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M52";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F53";
			}
			else
			{
				Local_42.f_7 = "LOC_T53";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Murri" /* GXT: Murrieta Heights */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M56";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F57";
			}
			else
			{
				Local_42.f_7 = "LOC_T57";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "MTChil" /* GXT: Mount Chiliad */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M53";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F54";
			}
			else
			{
				Local_42.f_7 = "LOC_T54";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "MTJose" /* GXT: Mount Josiah */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M55";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F56";
			}
			else
			{
				Local_42.f_7 = "LOC_T56";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "MTGordo" /* GXT: Mount Gordo */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M54";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F55";
			}
			else
			{
				Local_42.f_7 = "LOC_T55";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Movie" /* GXT: Richards Majestic */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M72";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F73";
			}
			else
			{
				Local_42.f_7 = "LOC_T73";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "NCHU" /* GXT: North Chumash */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M57";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F58";
			}
			else
			{
				Local_42.f_7 = "LOC_T58";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Noose" /* GXT: N.O.O.S.E */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F85";
			}
			else
			{
				Local_42.f_7 = "LOC_T85";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Oceana" /* GXT: Pacific Ocean */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M60";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F61";
			}
			else
			{
				Local_42.f_7 = "LOC_T61";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Observ" /* GXT: Galileo Observatory */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M30";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F31";
			}
			else
			{
				Local_42.f_7 = "LOC_T31";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Palmpow" /* GXT: Palmer-Taylor Power Station */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M64";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F65";
			}
			else
			{
				Local_42.f_7 = "LOC_T65";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "PBOX" /* GXT: Pillbox Hill */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M66";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F67";
			}
			else
			{
				Local_42.f_7 = "LOC_T67";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "PBluff" /* GXT: Pacific Bluffs */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M59";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F60";
			}
			else
			{
				Local_42.f_7 = "LOC_T60";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Paleto" /* GXT: Paleto Bay */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M61";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F62";
			}
			else
			{
				Local_42.f_7 = "LOC_T62";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "PalCov" /* GXT: Paleto Cove */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M62";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F63";
			}
			else
			{
				Local_42.f_7 = "LOC_T63";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "PalFor" /* GXT: Paleto Forest */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M63";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F64";
			}
			else
			{
				Local_42.f_7 = "LOC_T64";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "PalHigh" /* GXT: Palomino Highlands */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M65";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F66";
			}
			else
			{
				Local_42.f_7 = "LOC_T66";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ProcoB" /* GXT: Procopio Beach */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M68";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F69";
			}
			else
			{
				Local_42.f_7 = "LOC_T69";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Prol" /* GXT: North Yankton */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M58";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F59";
			}
			else
			{
				Local_42.f_7 = "LOC_T59";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "RTRAK" /* GXT: Redwood Lights Track */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M71";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F72";
			}
			else
			{
				Local_42.f_7 = "LOC_T72";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Rancho" /* GXT: Rancho */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M69";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F70";
			}
			else
			{
				Local_42.f_7 = "LOC_T70";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "RGLEN" /* GXT: Richman Glen */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M74";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F75";
			}
			else
			{
				Local_42.f_7 = "LOC_T75";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Richm" /* GXT: Richman */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M73";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F74";
			}
			else
			{
				Local_42.f_7 = "LOC_T74";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Rockf" /* GXT: Rockford Hills */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M75";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F76";
			}
			else
			{
				Local_42.f_7 = "LOC_T76";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "SANDY" /* GXT: Sandy Shores */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M79";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F80";
			}
			else
			{
				Local_42.f_7 = "LOC_T80";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "TongvaH" /* GXT: Tongva Hills */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M87";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F88";
			}
			else
			{
				Local_42.f_7 = "LOC_T88";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "TongvaV" /* GXT: Tongva Valley */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M88";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F89";
			}
			else
			{
				Local_42.f_7 = "LOC_T89";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "East_V" /* GXT: East Vinewood */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M23";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F24";
			}
			else
			{
				Local_42.f_7 = "LOC_T24";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Zenora" /* GXT: Senora Freeway */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M80";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F81";
			}
			else
			{
				Local_42.f_7 = "LOC_T81";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Slab" /* GXT: Stab City */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M81";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F82";
			}
			else
			{
				Local_42.f_7 = "LOC_T82";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "SKID" /* GXT: Mission Row */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M51";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F52";
			}
			else
			{
				Local_42.f_7 = "LOC_T52";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "SLSant" /* GXT: South Los Santos */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M82";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F83";
			}
			else
			{
				Local_42.f_7 = "LOC_T83";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Stad" /* GXT: Maze Bank Arena */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M49";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F50";
			}
			else
			{
				Local_42.f_7 = "LOC_T50";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Tatamo" /* GXT: Tataviam Mountains */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F85";
			}
			else
			{
				Local_42.f_7 = "LOC_T85";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Termina" /* GXT: Terminal */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M85";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F86";
			}
			else
			{
				Local_42.f_7 = "LOC_T86";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "TEXTI" /* GXT: Textile City */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M86";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F87";
			}
			else
			{
				Local_42.f_7 = "LOC_T87";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "WVine" /* GXT: West Vinewood */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M99";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F100";
			}
			else
			{
				Local_42.f_7 = "LOC_T100";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "UtopiaG" /* GXT: Utopia Gardens */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M89";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F90";
			}
			else
			{
				Local_42.f_7 = "LOC_T90";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Vesp" /* GXT: Vespucci */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M92";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F93";
			}
			else
			{
				Local_42.f_7 = "LOC_T93";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "VCana" /* GXT: Vespucci Canals */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M94";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F95";
			}
			else
			{
				Local_42.f_7 = "LOC_T95";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Vine" /* GXT: Vinewood */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M95";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F96";
			}
			else
			{
				Local_42.f_7 = "LOC_T96";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "WMirror" /* GXT: West Mirror Drive */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M98";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F99";
			}
			else
			{
				Local_42.f_7 = "LOC_T99";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "WindF" /* GXT: Ron Alternates Wind Farm */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M76";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F77";
			}
			else
			{
				Local_42.f_7 = "LOC_T77";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Zancudo" /* GXT: Zancudo River */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M100";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F101";
			}
			else
			{
				Local_42.f_7 = "LOC_T101";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "SanChia" /* GXT: San Chianski Mountain Range */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M78";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F79";
			}
			else
			{
				Local_42.f_7 = "LOC_T79";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "STRAW" /* GXT: Strawberry */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M83";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F84";
			}
			else
			{
				Local_42.f_7 = "LOC_T84";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "zQ_UAR" /* GXT: Davis Quartz */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M17";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F18";
			}
			else
			{
				Local_42.f_7 = "LOC_T18";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ZP_ORT" /* GXT: Port of South Los Santos */))
		{
			if (iParam0 == 0)
			{
				Local_42.f_7 = "LOC_M67";
			}
			else if (iParam0 == 1)
			{
				Local_42.f_7 = "LOC_F68";
			}
			else
			{
				Local_42.f_7 = "LOC_T68";
			}
			return;
		}
		if (iParam0 == 0)
		{
			Local_42.f_7 = "LOC_M";
		}
		else if (iParam0 == 1)
		{
			Local_42.f_7 = "LOC_M";
		}
		else
		{
			Local_42.f_7 = "LOC_M";
		}
	}
	else if (iParam0 == 0)
	{
		Local_42.f_7 = "LOC_M";
	}
	else if (iParam0 == 1)
	{
		Local_42.f_7 = "LOC_F";
	}
	else
	{
		Local_42.f_7 = "LOC_T";
	}
}

char* func_171(bool bParam0)//Position - 0x7D43
{
	char* sVar0;
	
	if (!BitTest(uLocal_103, 10))
	{
		if (iLocal_40 == 0)
		{
			sLocal_1270 = "FBIPRAU";
		}
		else if (iLocal_40 == 1)
		{
			sLocal_1270 = "AHFAUD";
		}
		else if (iLocal_40 == 2)
		{
			sLocal_1270 = "FHFAUD";
		}
		if (iLocal_40 == 0)
		{
			if (bParam0 == 0)
			{
				sVar0 = "FBI_3_MDRPC";
			}
			else if (bParam0 == 1)
			{
				sVar0 = "FBI_3_FDRPC";
			}
			else if (bParam0 == 2)
			{
				sVar0 = "FBI_3_TDRPC";
			}
		}
		else if (iLocal_40 == 1)
		{
			if (bParam0 == 0)
			{
				sVar0 = "AH_MDRPC";
			}
			else if (bParam0 == 1)
			{
				sVar0 = "AH_FDRPC";
			}
			else if (bParam0 == 2)
			{
				sVar0 = "AH_TDRPC";
			}
		}
		else if (iLocal_40 == 2)
		{
			if (bParam0 == 0)
			{
				sVar0 = "FHP_PICKCM";
			}
			else if (bParam0 == 1)
			{
				sVar0 = "FHP_PICKCF";
			}
			else if (bParam0 == 2)
			{
				sVar0 = "FHP_PICKCT";
			}
		}
	}
	else
	{
		sLocal_1270 = "FHFAUD";
		if (bParam0 == 0)
		{
			sVar0 = "FHP_MOVEM";
		}
		else if (bParam0 == 1)
		{
			sVar0 = "FHP_MOVEF";
		}
		else if (bParam0 == 2)
		{
			sVar0 = "FHP_MOVET";
		}
	}
	return sVar0;
}

int func_172()//Position - 0x7E4D
{
	if (BitTest(uLocal_103, 0))
	{
		if (func_87(iLocal_107))
		{
			if (BitTest(uLocal_103, 1))
			{
				if ((func_175(0) || func_175(12)) || func_175(1))
				{
					func_173();
					func_1(46, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_173()//Position - 0x7E9B
{
	if (!BitTest(uLocal_103, 6))
	{
		if (func_87(iLocal_107))
		{
			Local_108 = { ENTITY::GET_ENTITY_COORDS(iLocal_107, true) };
			fLocal_111 = ENTITY::GET_ENTITY_HEADING(iLocal_107);
			MISC::SET_BIT(&uLocal_103, 6);
			MISC::SET_BIT(&uLocal_103, 2);
			func_64(iLocal_107, &Local_112);
			func_21(iLocal_107, Local_108, fLocal_111, 25, 1);
			MISC::SET_BIT(&uLocal_103, 14);
			func_174(iLocal_107);
		}
	}
}

int func_174(int iParam0)//Position - 0x7EFB
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave"))
	{
		if (DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true))
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

int func_175(int iParam0)//Position - 0x7F2B
{
	if (Global_23401 == 0)
	{
		return 0;
	}
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		if (Global_20930.f_1 == 10)
		{
			if (Global_8115 == iParam0)
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
	return 0;
}

void func_176()//Position - 0x7F74
{
	if (BitTest(uLocal_103, 0) && BitTest(uLocal_103, 1))
	{
		if (!BitTest(uLocal_103, 11))
		{
			func_268(1);
		}
	}
	else if (BitTest(uLocal_103, 11))
	{
		func_268(0);
	}
}

void func_177()//Position - 0x7FAA
{
	if ((BitTest(uLocal_103, 0) && Global_44042 == 15) && !func_210())
	{
		if (iLocal_36 == 0)
		{
			if (!BitTest(uLocal_103, 1) && BitTest(uLocal_103, 0))
			{
				if (!func_78(PLAYER::PLAYER_PED_ID(), Local_104, 5f, 1))
				{
					if (BitTest(uLocal_103, 20) || func_135())
					{
						if ((func_253(PLAYER::PLAYER_PED_ID()) && !BitTest(uLocal_99[0], 17)) && !BitTest(uLocal_99[1], 18))
						{
							if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
							{
								func_209(24, 46);
								if (BitTest(uLocal_103, 0))
								{
									if (!func_207() && func_187(ENTITY::GET_ENTITY_COORDS(iLocal_107, true)))
									{
										if (func_184(iLocal_107))
										{
											if (func_183(iLocal_107))
											{
												MISC::SET_BIT(&uLocal_103, 1);
												if (func_72(PLAYER::PLAYER_PED_ID()) == 0)
												{
													func_71(7);
													func_1(7, 1);
												}
												else
												{
													func_71(8);
													func_1(8, 1);
												}
												Local_104 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
												return;
											}
										}
									}
									if (BitTest(uLocal_103, 20))
									{
										func_1(46, 0);
										MISC::CLEAR_BIT(&uLocal_103, 20);
										iLocal_1436 = -1;
									}
									Local_104 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								func_209(7, 8);
								if (BitTest(uLocal_103, 20))
								{
									MISC::CLEAR_BIT(&uLocal_103, 20);
									iLocal_1436 = -1;
								}
								else
								{
									func_71(24);
								}
							}
						}
					}
					else if (!func_13())
					{
						if ((PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !BitTest(uLocal_103, 20))
						{
							if (iLocal_1436 != -1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_1436) > 1000)
								{
									MISC::SET_BIT(&uLocal_103, 20);
								}
							}
							else
							{
								iLocal_1436 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							MISC::CLEAR_BIT(&uLocal_103, 20);
						}
					}
				}
				else if (func_13())
				{
					Local_104 = { 0f, 0f, 0f };
				}
			}
			else if (BitTest(uLocal_103, 0))
			{
				if (!func_78(PLAYER::PLAYER_PED_ID(), Local_104, 10f, 1))
				{
					MISC::CLEAR_BIT(&uLocal_103, 1);
				}
				else if (!PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!BitTest(uLocal_103, 20))
						{
							func_71(24);
						}
						func_1(24, 1);
						MISC::CLEAR_BIT(&uLocal_103, 1);
						func_179(0);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_87(iLocal_107))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_107)
						{
							func_1(46, 0);
							func_179(0);
							func_178();
						}
					}
				}
			}
		}
	}
}

void func_178()//Position - 0x821A
{
	MISC::CLEAR_BIT(&uLocal_103, 0);
	MISC::CLEAR_BIT(&uLocal_103, 8);
	MISC::CLEAR_BIT(&uLocal_103, 7);
}

void func_179(int iParam0)//Position - 0x8238
{
	if (func_182())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_181())
		{
			func_180(1, 1);
		}
		else
		{
			func_180(0, 0);
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
	if (!func_154())
	{
		Global_20930.f_1 = 3;
	}
}

void func_180(bool bParam0, bool bParam1)//Position - 0x82C2
{
	if (bParam0)
	{
		if (func_15(0))
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

bool func_181()//Position - 0x8336
{
	return BitTest(Global_1956920, 5);
}

bool func_182()//Position - 0x8344
{
	return BitTest(Global_1956920, 19);
}

int func_183(int iParam0)//Position - 0x8353
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		func_71(39);
		return 0;
	}
	if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, -1, false, false) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, 0, false, false))
	{
		func_71(37);
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
	{
		func_71(36);
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	if (Var0.f_0 >= 10f || Var0.f_0 <= -10f)
	{
		func_71(42);
		return 0;
	}
	else if (Var0.f_1 >= 15f || Var0.f_1 <= -15f)
	{
		func_71(43);
		return 0;
	}
	return 1;
}

int func_184(int iParam0)//Position - 0x8408
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	if (iParam0 != 0)
	{
		if (func_87(iParam0))
		{
			MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var4);
			Var1 = { Var1 + Vector(-1f, -1f, -2f) };
			Var4 = { Var4 + Vector(1f, 1f, 2f) };
			if (!MISC::IS_AREA_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var4), false, true, false, false, false, iParam0, false))
			{
				iVar0++;
			}
			else if (func_13())
			{
				func_71(38);
			}
			if (!func_186())
			{
				iVar0++;
			}
			else if (func_13())
			{
				func_71(35);
			}
			if (iVar0 == 2)
			{
				if (func_185(ENTITY::GET_ENTITY_COORDS(iParam0, true)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_185(struct<3> Param0)//Position - 0x84BD
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	Var2 = { Param0 + Vector(3.2f, 0f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &fVar0, false, false) && MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &fVar1, false, false))
	{
		if (MISC::ABSF((fVar0 - fVar1)) < 0.9f)
		{
			return 1;
		}
	}
	if (func_13())
	{
		func_71(37);
	}
	return 0;
}

int func_186()//Position - 0x8519
{
	var uVar0[5];
	int iVar6;
	
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar6 = 0;
	while (iVar6 <= 4)
	{
		if (func_253(uVar0[iVar6]) && uVar0[iVar6] != PLAYER::PLAYER_PED_ID())
		{
			if (SYSTEM::VDIST2(Local_104, ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true)) <= 16f)
			{
				return 1;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_187(struct<3> Param0)//Position - 0x8582
{
	if (!func_203() && !func_202(Param0))
	{
		if (!func_199())
		{
			if (!func_195(Param0))
			{
				if (!func_193(Param0) && !func_188(Param0))
				{
					return 1;
				}
			}
			else
			{
				func_71(0);
			}
		}
	}
	return 0;
}

int func_188(struct<3> Param0)//Position - 0x85DB
{
	if (func_191(Param0) || func_189(Param0))
	{
		if (func_13())
		{
			func_71(22);
		}
		return 1;
	}
	return 0;
}

int func_189(struct<3> Param0)//Position - 0x860E
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, Global_96652[func_190(Param0, 0) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 1;
	}
	return 0;
}

int func_190(struct<3> Param0, bool bParam3)//Position - 0x8643
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 7;
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (Global_96652[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam3 || BitTest(Global_113969.f_7232.f_17[iVar0], 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_96652[iVar0 /*9*/].f_3, true);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_191(struct<3> Param0)//Position - 0x86BD
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, Global_96716[func_192(Param0, 0) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 1;
	}
	return 0;
}

int func_192(struct<3> Param0, bool bParam3)//Position - 0x86F2
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 10000000f;
	iVar3 = 5;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (Global_96716[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam3 || BitTest(Global_113969.f_7232.f_11[iVar0], 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_96716[iVar0 /*9*/].f_3, true);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_193(struct<3> Param0)//Position - 0x876C
{
	struct<3> Var0;
	float fVar3;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, 0, 3f, 0f))
	{
		fVar3 = SYSTEM::VDIST2(Param0, Var0);
		if (fVar3 >= 400f || !func_194(Param0, Var0))
		{
			return 0;
		}
		else if (fVar3 < 20f && fVar3 > 6f)
		{
			if (func_13())
			{
				func_71(40);
			}
			return 1;
		}
		else
		{
			if (func_13())
			{
				func_71(41);
			}
			return 1;
		}
	}
	return 0;
}

int func_194(struct<3> Param0, struct<3> Param3)//Position - 0x87F5
{
	float fVar0;
	
	fVar0 = MISC::ABSF((Param0.f_2 - Param3.f_2));
	if (fVar0 <= 5f)
	{
		return 1;
	}
	return 0;
}

int func_195(struct<3> Param0)//Position - 0x8818
{
	if (!func_198(1))
	{
		if (!func_198(0))
		{
			if (func_196(Param0, 0))
			{
				return 1;
			}
		}
		else if (func_196(Param0, 1))
		{
			return 1;
		}
	}
	if (!func_198(7))
	{
		if (!func_198(4))
		{
			if (func_196(Param0, 4))
			{
				return 1;
			}
		}
		else
		{
			if (func_196(Param0, 5))
			{
				return 1;
			}
			if (func_196(Param0, 6))
			{
				return 1;
			}
		}
	}
	if (func_196(Param0, 2))
	{
		return 1;
	}
	if (func_196(Param0, 3))
	{
		return 1;
	}
	if (!func_198(8))
	{
		if (func_196(Param0, 8))
		{
			return 1;
		}
	}
	if (!func_198(16))
	{
		if (func_196(Param0, 16))
		{
			return 1;
		}
		if (!func_198(15))
		{
			if (func_196(Param0, 15))
			{
				return 1;
			}
			if (!func_198(14))
			{
				if (func_196(Param0, 14))
				{
					return 1;
				}
				if (!func_198(13))
				{
					if (func_196(Param0, 13))
					{
						return 1;
					}
					if (!func_198(12))
					{
						if (func_196(Param0, 12))
						{
							return 1;
						}
						if (!func_198(11))
						{
							if (func_196(Param0, 11))
							{
								return 1;
							}
							if (!func_198(10))
							{
								if (func_196(Param0, 10))
								{
									return 1;
								}
								if (!func_198(9))
								{
									if (func_196(Param0, 9))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!func_198(20))
	{
		if (func_196(Param0, 20))
		{
			return 1;
		}
		if (!func_198(19))
		{
			if (func_196(Param0, 19))
			{
				return 1;
			}
			if (!func_198(18))
			{
				if (func_196(Param0, 18))
				{
					return 1;
				}
				if (!func_198(17))
				{
					if (func_196(Param0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_198(21))
	{
		if (func_196(Param0, 21))
		{
			return 1;
		}
	}
	if (!func_198(22))
	{
		if (func_196(Param0, 22))
		{
			return 1;
		}
	}
	if (!func_198(23))
	{
		if (func_196(Param0, 23))
		{
			return 1;
		}
	}
	if (!func_198(24))
	{
		if (func_196(Param0, 24))
		{
			return 1;
		}
	}
	if (!func_198(26))
	{
		if (!func_198(25))
		{
			if (func_196(Param0, 25))
			{
				return 1;
			}
		}
		else if (func_196(Param0, 26))
		{
			return 1;
		}
	}
	if (!func_198(30))
	{
		if (func_196(Param0, 30))
		{
			return 1;
		}
		if (!func_198(29))
		{
			if (func_196(Param0, 29))
			{
				return 1;
			}
			if (!func_198(28))
			{
				if (func_196(Param0, 28))
				{
					return 1;
				}
				if (!func_198(27))
				{
					if (func_196(Param0, 27))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_198(31))
	{
		if (func_196(Param0, 31))
		{
			return 1;
		}
	}
	if (!func_198(34))
	{
		if (func_196(Param0, 34))
		{
			return 1;
		}
		if (!func_198(33))
		{
			if (func_196(Param0, 33))
			{
				return 1;
			}
			if (!func_198(32))
			{
				if (func_196(Param0, 32))
				{
					return 1;
				}
			}
		}
	}
	if (!func_198(35))
	{
		if (func_196(Param0, 35))
		{
			return 1;
		}
	}
	if (!func_198(36))
	{
		if (func_196(Param0, 36))
		{
			return 1;
		}
	}
	if (!func_198(43))
	{
		if (func_196(Param0, 43))
		{
			return 1;
		}
		if (!func_198(42))
		{
			if (func_196(Param0, 42))
			{
				return 1;
			}
			if (!func_198(38))
			{
				if (func_196(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_198(39))
			{
				if (func_196(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_198(40))
			{
				if (func_196(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_198(41))
			{
				if (func_196(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_198(37))
			{
				if (func_196(Param0, 42))
				{
					return 1;
				}
			}
		}
	}
	if (!func_198(45))
	{
		if (func_196(Param0, 45))
		{
			return 1;
		}
		if (!func_198(44))
		{
			if (func_196(Param0, 44))
			{
				return 1;
			}
		}
	}
	if (!func_198(51))
	{
		if (func_196(Param0, 51))
		{
			return 1;
		}
		if (!func_198(48))
		{
			if (func_196(Param0, 48))
			{
				return 1;
			}
			if (!func_198(49))
			{
				if (func_196(Param0, 49))
				{
					return 1;
				}
			}
			if (!func_198(50))
			{
				if (func_196(Param0, 50))
				{
					return 1;
				}
			}
			if (!func_198(47))
			{
				if (func_196(Param0, 47))
				{
					return 1;
				}
				if (!func_198(46))
				{
					if (func_196(Param0, 46))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_198(53))
	{
		if (func_196(Param0, 53))
		{
			return 1;
		}
		if (!func_198(56))
		{
			if (func_196(Param0, 56))
			{
				return 1;
			}
			if (!func_198(55))
			{
				if (func_196(Param0, 55))
				{
					return 1;
				}
			}
			if (!func_198(54))
			{
				if (func_196(Param0, 54))
				{
					return 1;
				}
			}
			if (!func_198(52))
			{
				if (func_196(Param0, 52))
				{
					return 1;
				}
			}
		}
	}
	if (!func_198(57))
	{
		if (func_196(Param0, 57))
		{
			return 1;
		}
	}
	if (!func_198(62))
	{
		if (func_196(Param0, 62))
		{
			return 1;
		}
		if (!func_198(61))
		{
			if (func_196(Param0, 61))
			{
				return 1;
			}
			if (!func_198(60))
			{
				if (func_196(Param0, 60))
				{
					return 1;
				}
				if (!func_198(59))
				{
					if (func_196(Param0, 59))
					{
						return 1;
					}
					if (!func_198(58))
					{
						if (func_196(Param0, 58))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_196(struct<3> Param0, int iParam3)//Position - 0x8E8B
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, func_197(iParam3));
	if (fVar0 <= 625f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_197(int iParam0)//Position - 0x8EB3
{
	struct<3> Var0;
	
	if (iParam0 == 0)
	{
		Var0 = { -1604.668f, 5239.1f, 3.01f };
	}
	else if (iParam0 == 1)
	{
		Var0 = { -1592.84f, 5214.04f, 3.01f };
	}
	else if (iParam0 == 2)
	{
		Var0 = { 190.26f, -956.35f, 29.63f };
	}
	else if (iParam0 == 3)
	{
		Var0 = { 190.26f, -956.35f, 29.63f };
	}
	else if (iParam0 == 4)
	{
		Var0 = { 414f, -761f, 29f };
	}
	else if (iParam0 == 5)
	{
		Var0 = { 1199.27f, -1255.63f, 34.23f };
	}
	else if (iParam0 == 6)
	{
		Var0 = { -468.9f, -1713.06f, 18.21f };
	}
	else if (iParam0 == 7)
	{
		Var0 = { 237.65f, -385.41f, 44.4f };
	}
	else if (iParam0 == 8)
	{
		Var0 = { -1458.97f, 485.99f, 115.38f };
	}
	else if (iParam0 == 9)
	{
		Var0 = { -1622.89f, 4204.87f, 83.3f };
	}
	else if (iParam0 == 10)
	{
		Var0 = { 242.7f, 362.7f, 104.74f };
	}
	else if (iParam0 == 11)
	{
		Var0 = { 1835.53f, 4705.86f, 38.1f };
	}
	else if (iParam0 == 12)
	{
		Var0 = { 1826.13f, 4698.88f, 38.92f };
	}
	else if (iParam0 == 13)
	{
		Var0 = { 637.02f, 119.7093f, 89.5f };
	}
	else if (iParam0 == 14)
	{
		Var0 = { -2892.93f, 3192.37f, 11.66f };
	}
	else if (iParam0 == 15)
	{
		Var0 = { 524.43f, 3079.82f, 39.48f };
	}
	else if (iParam0 == 16)
	{
		Var0 = { -697.75f, 45.38f, 43.03f };
	}
	else if (iParam0 == 17)
	{
		Var0 = { -188.22f, 1296.1f, 302.86f };
	}
	else if (iParam0 == 18)
	{
		Var0 = { -954.19f, -2760.05f, 14.64f };
	}
	else if (iParam0 == 19)
	{
		Var0 = { -63.8f, -809.5f, 321.8f };
	}
	else if (iParam0 == 20)
	{
		Var0 = { 1731.41f, 96.96f, 170.39f };
	}
	else if (iParam0 == 21)
	{
		Var0 = { -1877.82f, -440.649f, 45.05f };
	}
	else if (iParam0 == 22)
	{
		Var0 = { 809.66f, 1279.76f, 360.49f };
	}
	else if (iParam0 == 23)
	{
		Var0 = { -915.6f, 6139.2f, 5.5f };
	}
	else if (iParam0 == 24)
	{
		Var0 = { -72.29f, -1260.63f, 28.14f };
	}
	else if (iParam0 == 25)
	{
		Var0 = { 1804.32f, 3931.33f, 32.82f };
	}
	else if (iParam0 == 26)
	{
		Var0 = { -684.17f, 5839.16f, 16.09f };
	}
	else if (iParam0 == 27)
	{
		Var0 = { -1104.93f, 291.25f, 64.3f };
	}
	else if (iParam0 == 28)
	{
		Var0 = { 565.39f, -1772.88f, 29.77f };
	}
	else if (iParam0 == 29)
	{
		Var0 = { 565.39f, -1772.88f, 29.77f };
	}
	else if (iParam0 == 30)
	{
		Var0 = { -1104.93f, 291.25f, 64.3f };
	}
	else if (iParam0 == 31)
	{
		Var0 = { 2726.1f, 4145f, 44.3f };
	}
	else if (iParam0 == 32)
	{
		Var0 = { 327.85f, 3405.7f, 35.73f };
	}
	else if (iParam0 == 33)
	{
		Var0 = { 18f, 4527f, 105f };
	}
	else if (iParam0 == 34)
	{
		Var0 = { -303.82f, 6211.29f, 31.05f };
	}
	else if (iParam0 == 35)
	{
		Var0 = { 1972.59f, 3816.43f, 32.42f };
	}
	else if (iParam0 == 36)
	{
		Var0 = { 0f, 0f, 0f };
	}
	else if (iParam0 == 37)
	{
		Var0 = { -1097.16f, 790.01f, 164.52f };
	}
	else if (iParam0 == 38)
	{
		Var0 = { -558.65f, 284.49f, 90.86f };
	}
	else if (iParam0 == 39)
	{
		Var0 = { -1034.15f, 366.08f, 80.11f };
	}
	else if (iParam0 == 40)
	{
		Var0 = { -623.91f, -266.17f, 37.76f };
	}
	else if (iParam0 == 41)
	{
		Var0 = { -1096.85f, 67.68f, 52.95f };
	}
	else if (iParam0 == 42)
	{
		Var0 = { -1310.7f, -640.22f, 26.54f };
	}
	else if (iParam0 == 43)
	{
		Var0 = { -44.75f, -1288.67f, 28.21f };
	}
	else if (iParam0 == 44)
	{
		Var0 = { 2468.51f, 3437.39f, 49.9f };
	}
	else if (iParam0 == 45)
	{
		Var0 = { 2319.44f, 2583.58f, 46.76f };
	}
	else if (iParam0 == 46)
	{
		Var0 = { -149.75f, 285.81f, 93.67f };
	}
	else if (iParam0 == 47)
	{
		Var0 = { -70.71f, 301.43f, 106.79f };
	}
	else if (iParam0 == 48)
	{
		Var0 = { -257.22f, 292.85f, 90.63f };
	}
	else if (iParam0 == 49)
	{
		Var0 = { 305.52f, 157.19f, 102.94f };
	}
	else if (iParam0 == 50)
	{
		Var0 = { 1040.96f, -534.42f, 60.17f };
	}
	else if (iParam0 == 51)
	{
		Var0 = { -484.2f, 229.68f, 82.21f };
	}
	else if (iParam0 == 52)
	{
		Var0 = { 908f, 3643.7f, 32.2f };
	}
	else if (iParam0 == 54)
	{
		Var0 = { 465.1f, -1849.3f, 27.8f };
	}
	else if (iParam0 == 55)
	{
		Var0 = { -161f, -1669.7f, 33f };
	}
	else if (iParam0 == 56)
	{
		Var0 = { -1298.2f, 2504.14f, 21.09f };
	}
	else if (iParam0 == 53)
	{
		Var0 = { 1181.5f, -400.1f, 67.5f };
	}
	else if (iParam0 == 57)
	{
		Var0 = { -1298.98f, 4640.16f, 105.67f };
	}
	else if ((iParam0 == 58 || iParam0 == 59) || iParam0 == 62)
	{
		Var0 = { -14.39f, -1472.69f, 29.58f };
	}
	else if (iParam0 == 60)
	{
		Var0 = { 0f, 0f, 0f };
	}
	else if (iParam0 == 61)
	{
		Var0 = { 0f, 0f, 0f };
	}
	return Var0;
}

int func_198(int iParam0)//Position - 0x9590
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_18577[iParam0 /*6*/], 3);
}

int func_199()//Position - 0x95BB
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		bVar1 = false;
		while (bVar1 <= (Local_202[iVar0 /*261*/].f_257 - 1))
		{
			if (BitTest(Local_202[iVar0 /*261*/].f_258, bVar1))
			{
				if (func_201(sLocal_1261))
				{
					if (Local_202[iVar0 /*261*/].f_260 == 0)
					{
						if (func_13())
						{
							func_71(21);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 2)
					{
						if (func_13())
						{
							func_71(22);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 1)
					{
						if (func_13())
						{
							func_71(23);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 3)
					{
						if (func_13())
						{
							func_71(20);
						}
					}
					return 1;
				}
				if (func_200(&(Local_202[iVar0 /*261*/][bVar1 /*8*/])))
				{
					if (Local_202[iVar0 /*261*/].f_260 == 0)
					{
						if (func_13())
						{
							func_71(21);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 2)
					{
						if (func_13())
						{
							func_71(22);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 1)
					{
						if (func_13())
						{
							func_71(23);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 3)
					{
						if (func_13())
						{
							func_71(20);
						}
					}
					return 1;
				}
			}
			bVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_200(var uParam0)//Position - 0x9713
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_4, uParam0->f_7, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_201(char* sParam0)//Position - 0x973E
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!MISC::IS_STRING_NULL(sLocal_1247[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL(sLocal_1247[iVar0], sParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_202(struct<3> Param0)//Position - 0x978A
{
	if (Param0.f_2 < -90f)
	{
		return 1;
	}
	if ((SYSTEM::VDIST2(Param0, -89.377f, 92.6583f, 71.2349f) <= 400f || SYSTEM::VDIST2(Param0, -62.0307f, -1839.8585f, 25.6787f) <= 400f) || SYSTEM::VDIST2(Param0, -234.7648f, -1150.3105f, 21.9224f) <= 400f)
	{
		func_71(21);
		return 1;
	}
	return 0;
}

int func_203()//Position - 0x9814
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_205(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 1);
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_96551[iVar0 /*10*/].f_3);
	if (fVar1 <= 10000f)
	{
		if (func_13())
		{
			func_204(iVar0);
		}
		return 1;
	}
	return 0;
}

void func_204(int iParam0)//Position - 0x9866
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		func_71(32);
	}
	else if (iParam0 == 5 || iParam0 == 6)
	{
		func_71(33);
	}
	else if ((iParam0 == 2 || iParam0 == 3) || iParam0 == 4)
	{
		func_71(34);
	}
}

int func_205(struct<3> Param0, int iParam3, int iParam4)//Position - 0x98C3
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_96551[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_96551[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_206(iVar0) || iParam4 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_96551[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_206(int iParam0)//Position - 0x9952
{
	return BitTest(Global_113969.f_7232[iParam0], 0);
}

int func_207()//Position - 0x9967
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1276.1234f, -1723.6653f, 53.6551f) <= 52900f)
	{
		if (func_13())
		{
			func_71(30);
		}
		return 1;
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 111.8564f, -751.7169f, 44.757f) <= 160000f)
	{
		if (func_13())
		{
			func_71(31);
		}
		return 1;
	}
	else if (func_208(200f))
	{
		if (func_13())
		{
			func_71(19);
		}
		return 1;
	}
	return 0;
}

int func_208(float fParam0)//Position - 0x99FF
{
	if (iLocal_40 == 1)
	{
		if (func_78(PLAYER::PLAYER_PED_ID(), Global_97459[1 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	else if (iLocal_40 == 2)
	{
		if (func_78(PLAYER::PLAYER_PED_ID(), Global_97459[0 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	else if (iLocal_40 == 0)
	{
		if (func_78(PLAYER::PLAYER_PED_ID(), Global_97459[3 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_209(bool bParam0, bool bParam1)//Position - 0x9A71
{
	func_4(bParam0);
	if (func_2(func_3(bParam0)))
	{
		HUD::CLEAR_HELP(true);
		MISC::SET_BIT(&uLocal_103, 15);
	}
	if (bParam1 != 46)
	{
		func_4(bParam1);
		if (func_2(func_3(bParam1)))
		{
			HUD::CLEAR_HELP(true);
			MISC::SET_BIT(&uLocal_103, 15);
		}
	}
}

int func_210()//Position - 0x9AC0
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

void func_211()//Position - 0x9AE3
{
	int iVar0;
	int iVar1;
	
	if ((Global_44042 == 15 && iLocal_36 == 0) && !func_210())
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!BitTest(uLocal_103, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!func_223())
					{
						if (!BitTest(uLocal_103, 7))
						{
							iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (func_87(iVar0))
							{
								if (!func_222(iVar0))
								{
									if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Getaway_Winched"))
									{
										if (func_215(iVar0) && !func_214())
										{
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
											{
												if (func_72(PLAYER::PLAYER_PED_ID()) == 0)
												{
													func_71(17);
												}
												else
												{
													func_71(18);
												}
												iLocal_107 = iVar0;
												if (DECORATOR::DECOR_SET_BOOL(iLocal_107, "GetawayVehicleValid", true))
												{
												}
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_107, true, true);
												MISC::SET_BIT(&uLocal_103, 0);
												MISC::SET_BIT(&uLocal_103, 8);
												MISC::SET_BIT(&uLocal_103, 7);
												return;
											}
											else
											{
												func_20(&iLocal_107);
												MISC::CLEAR_BIT(&uLocal_103, 7);
												MISC::CLEAR_BIT(&uLocal_103, 0);
												return;
											}
										}
									}
									if (DECORATOR::DECOR_SET_BOOL(iVar0, "GetawayVehicleValid", false))
									{
									}
									MISC::SET_BIT(&uLocal_103, 7);
								}
								else if (func_213(iVar0))
								{
									iLocal_107 = iVar0;
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_107, true, true);
									MISC::SET_BIT(&uLocal_103, 0);
									MISC::SET_BIT(&uLocal_103, 8);
									MISC::SET_BIT(&uLocal_103, 7);
									return;
								}
							}
							else
							{
								func_20(&iLocal_107);
								MISC::SET_BIT(&uLocal_103, 7);
								MISC::CLEAR_BIT(&uLocal_103, 0);
							}
						}
						else if (BitTest(uLocal_103, 0))
						{
							if (!func_87(iLocal_107))
							{
								func_20(&iLocal_107);
								MISC::SET_BIT(&uLocal_103, 0);
								MISC::SET_BIT(&uLocal_103, 8);
								MISC::SET_BIT(&uLocal_103, 7);
							}
						}
					}
				}
				else if (BitTest(uLocal_103, 8))
				{
					iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (func_87(iVar1))
					{
						if (func_19(PLAYER::PLAYER_PED_ID(), iVar1, 10f, 1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "Getaway_Winched"))
						{
							iLocal_107 = iVar1;
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_107, true, true);
							MISC::SET_BIT(&uLocal_103, 0);
							MISC::SET_BIT(&uLocal_103, 7);
						}
					}
				}
				else
				{
					MISC::CLEAR_BIT(&uLocal_103, 7);
				}
			}
			else if (func_87(iLocal_107))
			{
				if (!func_19(PLAYER::PLAYER_PED_ID(), iLocal_107, 80f, 1))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iLocal_107, "Getaway_Winched"))
					{
						MISC::SET_BIT(&(uLocal_99[func_5(5)]), 5);
						MISC::SET_BIT(&uLocal_103, 8);
					}
					else
					{
						MISC::CLEAR_BIT(&uLocal_103, 8);
					}
					func_20(&iLocal_107);
					MISC::CLEAR_BIT(&uLocal_103, 0);
					MISC::CLEAR_BIT(&uLocal_103, 7);
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_107)
					{
						func_20(&iLocal_107);
						func_209(17, 46);
						func_209(18, 46);
						func_209(14, 46);
						func_178();
					}
					else if (func_223())
					{
						func_20(&iLocal_107);
						func_178();
					}
				}
				else if (!func_212(iLocal_107))
				{
					if (DECORATOR::DECOR_SET_BOOL(iLocal_107, "GetawayVehicleValid", false))
					{
					}
					func_209(17, 46);
					func_209(18, 46);
					func_20(&iLocal_107);
					func_178();
				}
			}
			else
			{
				func_20(&iLocal_107);
				func_178();
			}
		}
	}
}

int func_212(int iParam0)//Position - 0x9DBD
{
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < 300f)
	{
		func_71(6);
		return 0;
	}
	return 1;
}

int func_213(int iParam0)//Position - 0x9DEE
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		if (DECORATOR::DECOR_GET_BOOL(iParam0, "GetawayVehicleValid"))
		{
			return 1;
		}
	}
	return 0;
}

int func_214()//Position - 0x9E13
{
	if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
	{
		if ((VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, false) == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1, false) == PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_215(int iParam0)//Position - 0x9E76
{
	if ((func_221() && func_217(iParam0)) && func_216(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)//Position - 0x9EA0
{
	int iVar0;
	
	iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 >= 3)
	{
		return 1;
	}
	func_71(15);
	return 0;
}

int func_217(int iParam0)//Position - 0x9EC1
{
	if ((func_219(iParam0) && !func_218(iParam0)) && func_212(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)//Position - 0x9EEE
{
	int iVar0;
	
	iVar0 = func_63(iParam0);
	if (iVar0 == 0)
	{
		func_71(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		func_71(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		func_71(27);
		return 1;
	}
	if (func_38(iParam0))
	{
		func_71(14);
		return 1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x9F42
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_220(iVar0))
	{
		if (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f)
		{
			return 1;
		}
	}
	func_71(14);
	return 0;
}

int func_220(int iParam0)//Position - 0x9F87
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iLocal_190[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !func_260(33))
			{
				MISC::SET_BIT(&uLocal_103, 3);
			}
			else if (iVar0 == 1 && !func_260(34))
			{
				MISC::SET_BIT(&uLocal_103, 3);
			}
			else
			{
				MISC::CLEAR_BIT(&uLocal_103, 3);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_221()//Position - 0x9FF3
{
	if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
	{
		func_71(14);
		return 0;
	}
	return 1;
}

int func_222(int iParam0)//Position - 0xA049
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0xA062
{
	int iVar0;
	
	if (func_224(&iVar0))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Getaway_Winched"))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "Getaway_Winched", true);
			func_71(16);
			return 1;
		}
		else if (DECORATOR::DECOR_GET_BOOL(iVar0, "Getaway_Winched"))
		{
			return 0;
		}
	}
	return 0;
}

int func_224(var uParam0)//Position - 0xA0AC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_253(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_87(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iVar0))
				{
					iVar2 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						*uParam0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
						if (func_87(*uParam0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_225()//Position - 0xA13D
{
	switch (iLocal_201)
	{
		case 0:
			if (BitTest(uLocal_103, 0))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1264) > 500)
				{
					sLocal_1261 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
					iLocal_201 = 1;
				}
				else if (iLocal_1264 == -1)
				{
					iLocal_1264 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - Local_202[iLocal_1263 /*261*/].f_259) > 500)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1261) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_202[iLocal_1263 /*261*/][iLocal_1262 /*8*/]))
				{
					if (MISC::ARE_STRINGS_EQUAL(sLocal_1261, Local_202[iLocal_1263 /*261*/][iLocal_1262 /*8*/]))
					{
						MISC::SET_BIT(&(Local_202[iLocal_1263 /*261*/].f_258), iLocal_1262);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_202[iLocal_1263 /*261*/].f_258), iLocal_1262);
					}
				}
				else
				{
					sLocal_1261 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
				iLocal_1262++;
				if (iLocal_1262 >= (Local_202[iLocal_1263 /*261*/].f_257 - 1))
				{
					iLocal_1262 = 0;
					Local_202[iLocal_1263 /*261*/].f_259 = MISC::GET_GAME_TIMER();
					iLocal_1263++;
					if (iLocal_1263 >= 4)
					{
						iLocal_1263 = 0;
						iLocal_1264 = MISC::GET_GAME_TIMER();
						iLocal_201 = 0;
					}
				}
			}
			break;
	}
}

void func_226()//Position - 0xA26B
{
	int iVar0;
	bool bVar1;
	
	if (((((((Global_44042 == 15 && iLocal_35 != 3) && BitTest(uLocal_103, 5)) && !func_210()) && Global_79386 == -1) && !func_236()) && !func_86(9)) || func_105(35))
	{
		func_235();
		func_233();
		switch (iLocal_37)
		{
			case 0:
				if (BitTest(uLocal_103, 17))
				{
					iVar0 = -1;
					while (iVar0 < (36 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_232(uLocal_99[0], &iVar0);
						}
					}
					MISC::CLEAR_BIT(&uLocal_103, 17);
				}
				else
				{
					iVar0 = 31;
					while (iVar0 < (46 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_232(uLocal_99[1], &iVar0);
						}
					}
					MISC::SET_BIT(&uLocal_103, 17);
				}
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
				func_227(bLocal_98, 1);
				break;
		}
	}
	else if (((((((Global_44042 != 15 || Global_44042 != 0) || Global_44042 != 2) || Global_44042 != 4) || Global_44042 != 17) || func_210()) || Global_79386 == -1) || Global_113024)
	{
		bVar1 = false;
		if (func_134())
		{
			bVar1 = true;
		}
		else if (Global_113024)
		{
			bVar1 = 2;
		}
		if (BitTest(uLocal_99[func_5(bVar1)], bVar1))
		{
			func_227(bVar1, 0);
		}
	}
}

void func_227(bool bParam0, bool bParam1)//Position - 0xA3F3
{
	switch (iLocal_37)
	{
		case 1:
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_230(func_91())) && !func_229())
			{
				func_228(func_3(bParam0), 15000);
				iLocal_37 = 2;
			}
			break;
		
		case 2:
			if (func_2(func_3(bParam0)))
			{
				fLocal_102 = 0f;
				iLocal_37 = 3;
			}
			else
			{
				fLocal_102 = (fLocal_102 + MISC::GET_FRAME_TIME());
				if (fLocal_102 >= 20f)
				{
					iLocal_37 = 4;
				}
				else if (BitTest(uLocal_103, 15))
				{
					func_4(bParam0);
					MISC::CLEAR_BIT(&uLocal_103, 15);
					iLocal_37 = 4;
				}
			}
			break;
		
		case 3:
			if (!func_2(func_3(bParam0)))
			{
				if (fLocal_102 >= 7.5f || BitTest(uLocal_103, 15))
				{
					func_4(bParam0);
					MISC::CLEAR_BIT(&uLocal_103, 15);
					iLocal_37 = 4;
				}
				else if (bParam1)
				{
					iLocal_37 = 0;
				}
				else
				{
					iLocal_37 = 1;
					fLocal_102 = 0f;
				}
			}
			else
			{
				fLocal_102 = (fLocal_102 + MISC::GET_FRAME_TIME());
			}
			break;
		
		case 4:
			fLocal_102 = 0f;
			iLocal_37 = 0;
			break;
	}
}

void func_228(char* sParam0, int iParam1)//Position - 0xA4FD
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_229()//Position - 0xA514
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_230(bool bParam0)//Position - 0xA52E
{
	int iVar0;
	
	if (func_57(bParam0))
	{
		if (func_231(bParam0))
		{
			iVar0 = 0;
			while (iVar0 < Global_113969.f_7691.f_136)
			{
				if (Global_113969.f_7691[iVar0 /*15*/].f_3 == 5)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_231(bool bParam0)//Position - 0xA578
{
	int iVar0;
	
	if (!func_57(bParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_136)
	{
		if (BitTest(Global_113969.f_7691[iVar0 /*15*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_764)
	{
		if (BitTest(Global_113969.f_7691.f_651[iVar0 /*14*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_866)
	{
		if (BitTest(Global_113969.f_7691.f_765[iVar0 /*10*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_232(var uParam0, int iParam1)//Position - 0xA626
{
	bool bVar0;
	
	bVar0 = func_6(*iParam1);
	if (BitTest(uParam0, bVar0))
	{
		if (!BitTest(uLocal_103, 3))
		{
			bLocal_98 = *iParam1;
			iLocal_37 = 1;
			fLocal_102 = 0f;
			func_4(44);
			func_4(45);
			iLocal_1267 = MISC::GET_GAME_TIMER();
			*iParam1 = 46;
		}
		else if (14 == bVar0)
		{
			func_4(bVar0);
			*iParam1 = 46;
		}
		else
		{
			bLocal_98 = *iParam1;
			iLocal_37 = 1;
			fLocal_102 = 0f;
			*iParam1 = 46;
		}
	}
}

void func_233()//Position - 0xA692
{
	if (iLocal_35 == 0 || iLocal_35 == 1)
	{
		switch (iLocal_36)
		{
			case 0:
				if (func_234(func_3(3), 0, 0))
				{
					MISC::SET_BIT(&uLocal_103, 15);
					HUD::CLEAR_HELP(true);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_134()) && !Global_112606)
					{
						MISC::SET_BIT(&uLocal_103, 15);
						HUD::CLEAR_HELP(true);
					}
					iLocal_36 = 1;
				}
				break;
			
			case 1:
				if (BitTest(uLocal_103, 0))
				{
					if (iLocal_40 == 2)
					{
						if (iLocal_35 == 1)
						{
							if (func_87(iLocal_107))
							{
								func_71(3);
								func_1(3, 1);
							}
						}
						iLocal_36 = 2;
					}
					else
					{
						if (func_87(iLocal_107))
						{
							func_71(3);
							func_1(3, 1);
						}
						iLocal_36 = 2;
					}
				}
				else
				{
					iLocal_36 = 2;
				}
				break;
			
			case 2:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_2(func_3(3)))
					{
						MISC::SET_BIT(&uLocal_103, 15);
						HUD::CLEAR_HELP(true);
					}
					iLocal_36 = 0;
				}
				break;
			}
	}
}

bool func_234(char* sParam0, int iParam1, char* sParam2)//Position - 0xA7E7
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_235()//Position - 0xA805
{
	if ((((!func_105(func_106()) && !func_105(35)) && !func_230(func_91())) && !func_229()) && !func_119())
	{
		if (iLocal_1268 < 2 && (MISC::GET_GAME_TIMER() - iLocal_1267) > 480000)
		{
			if (iLocal_40 != 2)
			{
				func_71(44);
			}
			else
			{
				func_71(45);
			}
			iLocal_1268++;
		}
	}
}

int func_236()//Position - 0xA87E
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

void func_237()//Position - 0xA8A8
{
	if (func_77())
	{
		if (BitTest(uLocal_103, 2))
		{
			if (func_87(iLocal_107))
			{
				func_21(iLocal_107, Local_108, fLocal_111, 25, 1);
				func_20(&iLocal_107);
			}
			MISC::CLEAR_BIT(&uLocal_103, 2);
		}
		func_1(46, 1);
		func_268(0);
	}
}

void func_238()//Position - 0xA8EF
{
	if (!func_243())
	{
		if (!func_236())
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					func_240();
				}
			}
		}
	}
	else if (iLocal_35 != 3)
	{
		func_239();
	}
}

void func_239()//Position - 0xA930
{
	if (iLocal_35 != 4)
	{
		if (iLocal_35 != 2)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_112606)
			{
				MISC::SET_BIT(&uLocal_103, 15);
				HUD::CLEAR_HELP(true);
			}
			if (BitTest(uLocal_103, 0))
			{
				if (func_87(iLocal_107))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_107, false);
				}
				func_20(&iLocal_107);
				func_178();
				if (iLocal_40 != 2)
				{
					Local_104 = { 0f, 0f, 0f };
				}
				MISC::CLEAR_BIT(&uLocal_103, 8);
			}
		}
		else if (BitTest(uLocal_103, 0))
		{
			func_21(iLocal_107, Local_108, fLocal_111, 25, 1);
			if (func_87(iLocal_107))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_107, false);
			}
			func_20(&iLocal_107);
			func_178();
		}
		if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
		{
			HUD::CLEAR_ADDITIONAL_TEXT(5, false);
			MISC::CLEAR_BIT(&uLocal_103, 4);
			MISC::CLEAR_BIT(&uLocal_103, 5);
			func_268(0);
			if (func_134())
			{
				func_1(1, 1);
			}
			else
			{
				func_1(0, 1);
			}
		}
		iLocal_35 = 3;
	}
}

void func_240()//Position - 0xAA09
{
	func_242();
	if (BitTest(uLocal_103, 4))
	{
		if (!BitTest(uLocal_103, 5) && !BitTest(uLocal_103, 16))
		{
			HUD::REQUEST_ADDITIONAL_TEXT("GETAWY", 5);
			if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
			{
				MISC::SET_BIT(&uLocal_103, 5);
			}
			if (BitTest(uLocal_103, 5))
			{
				func_241();
				iLocal_37 = 0;
				MISC::CLEAR_BIT(&uLocal_103, 7);
				MISC::CLEAR_BIT(&uLocal_103, 0);
				MISC::CLEAR_BIT(&uLocal_103, 1);
				if (func_2(func_3(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				func_4(0);
				iLocal_35 = Global_113969.f_10052.f_128;
			}
		}
	}
}

void func_241()//Position - 0xAA92
{
	if (!func_105(func_106()))
	{
		if (!BitTest(uLocal_103, 12))
		{
			if (func_103())
			{
				if (iLocal_40 != 2)
				{
					func_71(44);
				}
				else
				{
					func_71(45);
				}
				MISC::SET_BIT(&uLocal_103, 12);
			}
		}
	}
}

void func_242()//Position - 0xAAD3
{
	if (!HUD::IS_STREAMING_ADDITIONAL_TEXT(5))
	{
		MISC::SET_BIT(&uLocal_103, 4);
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_103, 4);
	}
}

int func_243()//Position - 0xAAF5
{
	if (iLocal_40 != 2)
	{
		if (iLocal_40 == 1 && func_91() == 2)
		{
			if (!BitTest(uLocal_103, 16))
			{
				MISC::SET_BIT(&uLocal_103, 16);
			}
			return 1;
		}
		else if (BitTest(uLocal_103, 16))
		{
			MISC::CLEAR_BIT(&uLocal_103, 16);
		}
		if (func_244())
		{
			return 0;
		}
	}
	else if (func_105(35))
	{
		return 0;
	}
	else if (func_244())
	{
		return 0;
	}
	return 1;
}

int func_244()//Position - 0xAB67
{
	if (((((Global_44042 == 15 && !func_210()) && Global_79386 == -1) && !func_134()) && !func_208(1112014848)) && !Global_113024)
	{
		return 1;
	}
	return 0;
}

void func_245()//Position - 0xABB5
{
	if (!BitTest(uLocal_103, 13))
	{
		if (func_246())
		{
			MISC::SET_BIT(&uLocal_103, 13);
		}
	}
	else if (!func_246())
	{
		MISC::CLEAR_BIT(&uLocal_103, 7);
		MISC::CLEAR_BIT(&uLocal_103, 0);
		MISC::CLEAR_BIT(&uLocal_103, 1);
		MISC::CLEAR_BIT(&uLocal_103, 13);
	}
}

int func_246()//Position - 0xABFD
{
	if (((((func_247(39) || func_247(40)) || func_247(41)) || func_247(42)) || func_247(43)) || func_247(44))
	{
		return 1;
	}
	return 0;
}

int func_247(int iParam0)//Position - 0xAC4F
{
	return func_248(iParam0, 6, 1);
}

int func_248(int iParam0, int iParam1, bool bParam2)//Position - 0xAC5F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_98() == 0)
		{
			return BitTest(func_249(func_252(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_249(int iParam0, int iParam1)//Position - 0xACBF
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_250(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_250(int iParam0, var uParam1)//Position - 0xACEE
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_251(uParam1));
}

int func_251(var uParam0)//Position - 0xAD03
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_101();
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

int func_252(int iParam0)//Position - 0xAD37
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_253(int iParam0)//Position - 0xB0DF
{
	if (func_88(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_254(bool bParam0)//Position - 0xB0FF
{
	if (bParam0)
	{
		if (func_255())
		{
			return 1;
		}
	}
	if (func_86(14))
	{
		return 1;
	}
	return 0;
}

int func_255()//Position - 0xB125
{
	if (Global_112911)
	{
		return 1;
	}
	if (!func_86(14) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_256(char* sParam0, int iParam1)//Position - 0xB157
{
	int iVar0;
	int iVar1;
	
	if (Global_112606 && iParam1)
	{
		if (func_2(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_113969.f_20413[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_113969.f_20413.f_145 - 2))
			{
				func_259(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_258((Global_113969.f_20413.f_145 - 1));
			Global_113969.f_20413.f_145 = (Global_113969.f_20413.f_145 - 1);
			func_257();
			return;
		}
		iVar0++;
	}
}

void func_257()//Position - 0xB204
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_258(int iParam0)//Position - 0xB31B
{
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_113969.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = 0;
}

void func_259(int iParam0, int iParam1)//Position - 0xB3B3
{
	Global_113969.f_20413[iParam0 /*16*/] = { Global_113969.f_20413[iParam1 /*16*/] };
	Global_113969.f_20413[iParam0 /*16*/].f_4 = { Global_113969.f_20413[iParam1 /*16*/].f_4 };
	Global_113969.f_20413[iParam0 /*16*/].f_8 = Global_113969.f_20413[iParam1 /*16*/].f_8;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = Global_113969.f_20413[iParam1 /*16*/].f_10;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = Global_113969.f_20413[iParam1 /*16*/].f_9;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = Global_113969.f_20413[iParam1 /*16*/].f_11;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = Global_113969.f_20413[iParam1 /*16*/].f_12;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = Global_113969.f_20413[iParam1 /*16*/].f_13;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = Global_113969.f_20413[iParam1 /*16*/].f_14;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = Global_113969.f_20413[iParam1 /*16*/].f_15;
}

int func_260(int iParam0)//Position - 0xB4C3
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_261(int iParam0)//Position - 0xB4EF
{
	iLocal_40 = iParam0;
	if (iLocal_40 == 0)
	{
		sLocal_1270 = "FBIPRAU";
	}
	else if (iLocal_40 == 1)
	{
		sLocal_1270 = "AHFAUD";
	}
	else if (iLocal_40 == 2)
	{
		sLocal_1270 = "FHFAUD";
	}
	iLocal_190[0] = joaat("trash");
	iLocal_190[1] = joaat("towtruck");
	iLocal_190[2] = joaat("ambulance");
	iLocal_190[3] = joaat("barracks2");
	iLocal_190[4] = joaat("stretch");
	iLocal_190[5] = joaat("phantom");
	iLocal_190[6] = joaat("packer");
	iLocal_190[7] = joaat("blazer");
	iLocal_190[8] = joaat("blazer2");
	if (iLocal_40 != 0)
	{
		iLocal_190[9] = joaat("sentinel2");
	}
	else
	{
		iLocal_190[9] = 0;
	}
	func_264();
	func_262();
	MISC::SET_BIT(&uLocal_103, 17);
	iLocal_1267 = MISC::GET_GAME_TIMER();
}

void func_262()//Position - 0xB5B5
{
	sLocal_51[0] = "AM_H_FBIC1A" /* GXT: This area is unsuitable for the getaway vehicle. Find a more discreet location. */;
	sLocal_51[1] = "AM_H_FBIC1B" /* GXT: The getaway vehicle cannot be placed while meeting a friend. */;
	sLocal_51[2] = "AM_H_FBIC1C" /* GXT: The getaway vehicle cannot be placed while on a taxi job. */;
	sLocal_51[3] = "PRC_WANT";
	sLocal_51[4] = "PRC_DROPOFF";
	sLocal_51[5] = "PRC_INVALVEH";
	sLocal_51[6] = "PRC_HEALTH";
	sLocal_51[7] = func_263(7);
	sLocal_51[8] = func_263(8);
	sLocal_51[9] = "PRC_USEFIRST";
	sLocal_51[10] = func_263(10);
	sLocal_51[11] = func_263(11);
	sLocal_51[13] = func_263(13);
	sLocal_51[12] = func_263(12);
	sLocal_51[14] = "PRC_UNUSE";
	sLocal_51[15] = "PRC_SEATS";
	sLocal_51[16] = "PRC_CBOBVAL";
	sLocal_51[17] = func_263(17);
	sLocal_51[18] = func_263(18);
	sLocal_51[20] = func_263(20);
	sLocal_51[21] = "PRC_PUBAREA";
	sLocal_51[22] = "PRC_LAWAREA";
	sLocal_51[23] = "PRC_RESAREA";
	sLocal_51[24] = "PRC_STOP";
	sLocal_51[25] = "PRC_OWNEDM";
	sLocal_51[26] = "PRC_OWNEDF";
	sLocal_51[27] = "PRC_OWNEDT";
	sLocal_51[28] = "PRC_SECROUTE";
	sLocal_51[29] = "PRC_CLOSELOT";
	sLocal_51[30] = "PRC_CLOSELES";
	sLocal_51[31] = "PRC_CLSAGNT";
	sLocal_51[32] = "PRC_CLOSESAFE_M";
	sLocal_51[33] = "PRC_CLOSESAFE_F";
	sLocal_51[34] = "PRC_CLOSESAFE_T";
	sLocal_51[35] = "PRC_PEDS";
	sLocal_51[36] = "PRC_WATER";
	sLocal_51[37] = "PRC_OBST";
	sLocal_51[38] = "PRC_OBSTVEH";
	sLocal_51[39] = "PRC_UPDWN";
	sLocal_51[40] = "PRC_NEARROAD";
	sLocal_51[41] = "PRC_ONROAD";
	sLocal_51[19] = "PRC_PLAN";
	sLocal_51[42] = "PRC_TOOSTEEP";
	sLocal_51[43] = "PRC_UNEVEN";
	sLocal_51[44] = "PRC_REMIND";
	sLocal_51[45] = "PRC_REMINDA";
}

char* func_263(int iParam0)//Position - 0xB792
{
	char* sVar0;
	
	if (iLocal_40 == 0)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFT";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEM";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARTF";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARM";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWM";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWTF";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACC";
		}
	}
	else if (iLocal_40 == 1)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEML";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCRFL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCRML";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWML";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWFL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFL";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITML";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	else if (iLocal_40 == 2)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	return sVar0;
}

void func_264()//Position - 0xB958
{
	sLocal_1247[0] = "ARMYB" /* GXT: Fort Zancudo */;
	sLocal_1247[1] = "AIRP" /* GXT: Los Santos International Airport */;
	sLocal_1247[2] = "STAD" /* GXT: Maze Bank Arena */;
	sLocal_1247[3] = "TERMINA" /* GXT: Terminal */;
	sLocal_1247[4] = "MOVIE" /* GXT: Richards Majestic */;
	sLocal_1247[5] = "JAIL" /* GXT: Bolingbroke Penitentiary */;
	sLocal_1247[6] = "OCEANA" /* GXT: Pacific Ocean */;
	sLocal_1247[7] = "GOLF" /* GXT: GWC and Golfing Society */;
	sLocal_1247[8] = "HORS" /* GXT: Vinewood Racetrack */;
	sLocal_1247[9] = "MTCHIL" /* GXT: Mount Chiliad */;
	sLocal_1247[10] = "MTGORDO" /* GXT: Mount Gordo */;
	sLocal_1247[11] = "SANCHIA" /* GXT: San Chianski Mountain Range */;
	sLocal_1247[12] = "TATAMO" /* GXT: Tataviam Mountains */;
	Local_202[0 /*261*/][0 /*8*/] = { func_265("DELBE" /* GXT: Del Perro Beach */, -1615.2574f, -952.59436f, 20.01716f, -2160.7058f, -423f, -1.28679f, 327.8f) };
	Local_202[0 /*261*/][1 /*8*/] = { func_265("DELBE" /* GXT: Del Perro Beach */, -1521.7163f, -914.56757f, 20.17247f, -1855.7148f, -1325.784f, -44.79295f, 254.8f) };
	Local_202[0 /*261*/][2 /*8*/] = { func_265("BEACH" /* GXT: Vespucci Beach */, -1162.3699f, -1815.0084f, 15.33822f, -1553.2072f, -1098.6849f, 0.46467f, 253.91f) };
	Local_202[0 /*261*/][3 /*8*/] = { func_265("BEACH" /* GXT: Vespucci Beach */, -1464.2185f, -1136.7828f, 0.32167f, -2241.5664f, -358.88486f, 20.32481f, 282.21f) };
	Local_202[0 /*261*/][4 /*8*/] = { func_265("PBOX" /* GXT: Pillbox Hill */, 156.41087f, -1042.6412f, 22.31273f, 238.63815f, -821.1217f, 35.10069f, 176.96f) };
	Local_202[0 /*261*/][5 /*8*/] = { func_265("CHIL" /* GXT: Vinewood Hills */, 883.1121f, 534.72833f, 115.72503f, 559.7425f, 644.602f, 150.59714f, 301.08f) };
	Local_202[0 /*261*/][6 /*8*/] = { func_265("EAST_V" /* GXT: East Vinewood */, 941.45306f, -329.4256f, 60.77003f, 727.76514f, -200.95193f, 75.59085f, 88.89f) };
	Local_202[0 /*261*/][7 /*8*/] = { func_265("EAST_V" /* GXT: East Vinewood */, 689.1177f, -273.14056f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) };
	Local_202[0 /*261*/][8 /*8*/] = { func_265("MIRR" /* GXT: Mirror Park */, 1048.4985f, -357.0332f, 60.92149f, 1401.5808f, -783.8975f, 75.7477f, 325.93f) };
	Local_202[0 /*261*/][9 /*8*/] = { func_265("MIRR" /* GXT: Mirror Park */, 892.28357f, -461.57523f, 70.86029f, 1161.3007f, -829.8299f, 45.90131f, 184.12f) };
	Local_202[0 /*261*/][10 /*8*/] = { func_265("VCANA" /* GXT: Vespucci Canals */, -1161.3606f, -1143.7163f, -5.71593f, -864.9714f, -981.12573f, 21.09691f, 328.65f) };
	Local_202[0 /*261*/][11 /*8*/] = { func_265("BAYTRE" /* GXT: Baytree Canyon */, 251.40108f, 1068.3472f, 280.6663f, 189.60123f, 1272.3522f, 143.80351f, 160.32f) };
	Local_202[0 /*261*/][13 /*8*/] = { func_265("OBSERV" /* GXT: Galileo Observatory */, -450.98346f, 1048.4084f, 252.94498f, -389.56403f, 1244.5039f, 370.24692f, 199.93f) };
	Local_202[0 /*261*/][14 /*8*/] = { func_265("AIRP" /* GXT: Los Santos International Airport */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][15 /*8*/] = { func_265("TERMINA" /* GXT: Terminal */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][16 /*8*/] = { func_265("STAD" /* GXT: Maze Bank Arena */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][17 /*8*/] = { func_265("MOVIE" /* GXT: Richards Majestic */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][18 /*8*/] = { func_265("GOLF" /* GXT: GWC and Golfing Society */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][19 /*8*/] = { func_265("HORS" /* GXT: Vinewood Racetrack */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][20 /*8*/] = { func_265("PBOX" /* GXT: Pillbox Hill */, -28.39781f, -1071.2449f, 50.21438f, -49.8352f, -1131.2766f, 20.02555f, 55.12f) };
	Local_202[0 /*261*/][21 /*8*/] = { func_265("LOSSF" /* GXT: Los Santos Freeway */, 843.19617f, 25.93548f, 65.16061f, 1138.6865f, 363.05872f, 105.41279f, 61.11f) };
	Local_202[0 /*261*/][22 /*8*/] = { func_265("ROCKF" /* GXT: Rockford Hills */, -992.56384f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) };
	Local_202[0 /*261*/][23 /*8*/] = { func_265("ROCKF" /* GXT: Rockford Hills */, -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) };
	Local_202[0 /*261*/][24 /*8*/] = { func_265("ALTA" /* GXT: Alta */, 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) };
	Local_202[0 /*261*/][25 /*8*/] = { func_265("ALTA" /* GXT: Alta */, 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) };
	Local_202[0 /*261*/][26 /*8*/] = { func_265("RANCHO" /* GXT: Rancho */, 414.5057f, -2092.0999f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) };
	Local_202[0 /*261*/][27 /*8*/] = { func_265("RANCHO" /* GXT: Rancho */, 283.7474f, -2103.9177f, 12.9242f, 391.8871f, -1983.2037f, 33.0042f, 100f) };
	Local_202[0 /*261*/][28 /*8*/] = { func_265("PBOX" /* GXT: Pillbox Hill */, 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) };
	Local_202[0 /*261*/][29 /*8*/] = { func_265("PBOX" /* GXT: Pillbox Hill */, -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) };
	Local_202[0 /*261*/][30 /*8*/] = { func_265("TEXTI" /* GXT: Textile City */, 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) };
	Local_202[0 /*261*/][31 /*8*/] = { func_265("ROCKF" /* GXT: Rockford Hills */, -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) };
	Local_202[0 /*261*/].f_260 = 0;
	Local_202[0 /*261*/].f_257 = 32;
	Local_202[2 /*261*/][0 /*8*/] = { func_265("PBOX" /* GXT: Pillbox Hill */, -25.50944f, -932.38464f, 20.41711f, 119.94056f, -523.43976f, 33.07988f, 363.4f) };
	Local_202[2 /*261*/][1 /*8*/] = { func_265("DOWNT" /* GXT: Downtown */, -25.50944f, -932.38464f, 20.41711f, 119.94056f, -523.43976f, 33.07988f, 363.4f) };
	Local_202[2 /*261*/][2 /*8*/] = { func_265("COSI" /* GXT: Countryside */, 1426.9344f, 1225.1151f, 90.76305f, 1429.9823f, 1006.8307f, 120.66425f, 259.89f) };
	Local_202[2 /*261*/][3 /*8*/] = { func_265("COSI" /* GXT: Countryside */, 3503.5603f, 3546.4026f, 20.18748f, 3513.9546f, 3875.7952f, 72.94806f, 393.78f) };
	Local_202[2 /*261*/][4 /*8*/] = { func_265("SKID" /* GXT: Mission Row */, 403.54044f, -864.46936f, 20.33799f, 396.34406f, -1127.3247f, 35.49262f, 325.93f) };
	Local_202[2 /*261*/][5 /*8*/] = { func_265("JAIL" /* GXT: Bolingbroke Penitentiary */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[2 /*261*/][6 /*8*/] = { func_265("ARMYB" /* GXT: Fort Zancudo */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[2 /*261*/].f_260 = 2;
	Local_202[2 /*261*/].f_257 = 7;
	Local_202[1 /*261*/][0 /*8*/] = { func_265("PALETO" /* GXT: Paleto Bay */, -422.86185f, 6068.399f, 20.34662f, -282.74524f, 6206.324f, 50.46586f, 196.61f) };
	Local_202[1 /*261*/][1 /*8*/] = { func_265("ROCKF" /* GXT: Rockford Hills */, -755.2506f, 147.4266f, 75.41048f, -1079.0332f, 169.38055f, 50.46801f, 179.12f) };
	Local_202[1 /*261*/][2 /*8*/] = { func_265("ROCKF" /* GXT: Rockford Hills */, -752.36743f, 90.76733f, 65.5171f, -938.79803f, -15.91457f, 35.48347f, 205.78f) };
	Local_202[1 /*261*/][3 /*8*/] = { func_265("ROCKF" /* GXT: Rockford Hills */, -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) };
	Local_202[1 /*261*/][4 /*8*/] = { func_265("ROCKF" /* GXT: Rockford Hills */, -752.36743f, 90.76733f, 65.5171f, -938.79803f, -15.91457f, 35.48347f, 205.78f) };
	Local_202[1 /*261*/][5 /*8*/] = { func_265("ROCKF" /* GXT: Rockford Hills */, -1198.1826f, 638.63666f, 115.10664f, -444.509f, 750.9377f, 198.29713f, 473.88f) };
	Local_202[1 /*261*/][6 /*8*/] = { func_265("ROCKF" /* GXT: Rockford Hills */, -844.40753f, 400.9413f, 80.433f, -109.53111f, 420.5014f, 120.2088f, 256.03f) };
	Local_202[1 /*261*/][7 /*8*/] = { func_265("ROCKF" /* GXT: Rockford Hills */, -518.62134f, 648.82654f, 130.93524f, -64.0709f, 582.45044f, 215.30841f, 162.72f) };
	Local_202[1 /*261*/][8 /*8*/] = { func_265("RICHM" /* GXT: Richman */, -934.98016f, 349.61014f, 85.77298f, -1432.4509f, 269.98038f, 50.7303f, 185.03f) };
	Local_202[1 /*261*/][9 /*8*/] = { func_265("RICHM" /* GXT: Richman */, -1633.8134f, -69.53224f, 65.10236f, -1446.8229f, 69.71544f, 48.23926f, 214.92f) };
	Local_202[1 /*261*/][10 /*8*/] = { func_265("RICHM" /* GXT: Richman */, -1732.258f, 444.13525f, 130.12581f, -2065.6904f, 412.21207f, 98.09863f, 175.17f) };
	Local_202[1 /*261*/][11 /*8*/] = { func_265("RICHM" /* GXT: Richman */, -1618.0363f, 50.95197f, 70.95364f, -1396.5143f, 221.1004f, 50.84464f, 161.61f) };
	Local_202[1 /*261*/][12 /*8*/] = { func_265("RICHM" /* GXT: Richman */, -1801.285f, 106.8786f, 72.12892f, -1541.7401f, 263.37378f, 50.44112f, 155.88f) };
	Local_202[1 /*261*/][13 /*8*/] = { func_265("PELUFF", -2208.5627f, 146.41006f, 150.93246f, -2350.1223f, 486.60657f, 200.5952f, 299.18f) };
	Local_202[1 /*261*/][14 /*8*/] = { func_265("PELUFF", -1852.3263f, 134.41718f, 70.06226f, -1994.3872f, 299.62833f, 100.96516f, 182.04f) };
	Local_202[1 /*261*/][15 /*8*/] = { func_265("CHIL" /* GXT: Vinewood Hills */, -1982.6697f, 505.9648f, 100.93644f, -1918.8427f, 713.6382f, 150.73953f, 168.9f) };
	Local_202[1 /*261*/][16 /*8*/] = { func_265("CHIL" /* GXT: Vinewood Hills */, -1455.7506f, 887.3351f, 191.97572f, -1663.2073f, 767.3684f, 160.81076f, 239.65f) };
	Local_202[1 /*261*/][17 /*8*/] = { func_265("CHIL" /* GXT: Vinewood Hills */, -1570.2218f, 508.20563f, 140.38838f, -808.95325f, 526.43335f, 90.18556f, 238.43f) };
	Local_202[1 /*261*/][18 /*8*/] = { func_265("CHIL" /* GXT: Vinewood Hills */, 242.62039f, 583.59045f, 159.40428f, 268.04242f, 827.4494f, 201.69531f, 105.09f) };
	Local_202[1 /*261*/][19 /*8*/] = { func_265("CHIL" /* GXT: Vinewood Hills */, -21.10285f, 706.8648f, 150.72626f, -210.43822f, 1056.2755f, 280.31824f, 290.15f) };
	Local_202[1 /*261*/][20 /*8*/] = { func_265("RGLEN" /* GXT: Richman Glen */, -1837.5383f, 774.2984f, 120.56287f, -1765.8419f, 831.0044f, 160.35838f, 68.09f) };
	Local_202[1 /*261*/][21 /*8*/] = { func_265("DIVINE", -372.0849f, 372.71826f, 100.60433f, 390.2198f, 532.5167f, 180.53801f, 305.88f) };
	Local_202[1 /*261*/].f_260 = 1;
	Local_202[1 /*261*/].f_257 = 22;
	Local_202[3 /*261*/][0 /*8*/] = { func_265("MTCHIL" /* GXT: Mount Chiliad */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[3 /*261*/][1 /*8*/] = { func_265("MTGORDO" /* GXT: Mount Gordo */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[3 /*261*/][2 /*8*/] = { func_265("SANCHIA" /* GXT: San Chianski Mountain Range */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[3 /*261*/][3 /*8*/] = { func_265("TATAMO" /* GXT: Tataviam Mountains */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[3 /*261*/][4 /*8*/] = { func_265("ELYSIAN" /* GXT: Elysian Island */, 531.2397f, -3019.2666f, 50f, 530.1656f, -3393.6226f, -22.4165f, 210f) };
	Local_202[3 /*261*/][5 /*8*/] = { func_265("ELYSIAN" /* GXT: Elysian Island */, 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) };
	Local_202[3 /*261*/][6 /*8*/] = { func_265("ELYSIAN" /* GXT: Elysian Island */, 495.1012f, -2833.1753f, 5.164f, 460.1983f, -2813.5283f, 0.4269f, 12f) };
	Local_202[3 /*261*/][7 /*8*/] = { func_265("ELYSIAN" /* GXT: Elysian Island */, 675.2973f, -2747.4504f, 4.952f, 689.2358f, -2747.3955f, 10.9001f, 4.3f) };
	Local_202[3 /*261*/][8 /*8*/] = { func_265("CYPRE" /* GXT: Cypress Flats */, 533.437f, -2693.2793f, 17.4952f, 588.6345f, -2693.4624f, 5.3007f, 15f) };
	Local_202[3 /*261*/][9 /*8*/] = { func_265("CYPRE" /* GXT: Cypress Flats */, 534.9656f, -2699.1365f, 4.9004f, 560.1779f, -2662.1921f, 9.0007f, 15f) };
	Local_202[3 /*261*/][10 /*8*/] = { func_265("CYPRE" /* GXT: Cypress Flats */, 583.903f, -2689.2068f, 16.9771f, 549.8469f, -2665.3176f, 3.9007f, 17.3f) };
	Local_202[3 /*261*/][11 /*8*/] = { func_265("CYPRE" /* GXT: Cypress Flats */, 683.428f, -2635.1343f, 9.3367f, 694.4725f, -2679.6597f, 4.7815f, 10f) };
	Local_202[3 /*261*/][12 /*8*/] = { func_265("CYPRE" /* GXT: Cypress Flats */, 695.2171f, -2694.7688f, 5.9815f, 695.5035f, -2679.1677f, 4.8365f, 10f) };
	Local_202[3 /*261*/][13 /*8*/] = { func_265("CYPRE" /* GXT: Cypress Flats */, 731.7991f, -2659.5796f, 4.7713f, 732.5307f, -2678.4001f, 10.5065f, 25f) };
	Local_202[3 /*261*/][14 /*8*/] = { func_265("ELYSIAN" /* GXT: Elysian Island */, 86.1885f, -2430.6963f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) };
	Local_202[3 /*261*/][15 /*8*/] = { func_265("ELYSIAN" /* GXT: Elysian Island */, 260.3166f, -2426.7773f, 21.2819f, 313.7871f, -2433.6558f, 6.5609f, 20.5f) };
	Local_202[3 /*261*/][16 /*8*/] = { func_265("ELYSIAN" /* GXT: Elysian Island */, 260.3166f, -2426.7773f, 21.2819f, 313.7871f, -2433.6558f, 6.5609f, 20.5f) };
	Local_202[3 /*261*/][17 /*8*/] = { func_265("ELYSIAN" /* GXT: Elysian Island */, 283.1514f, -2456.7773f, 19.4609f, 290.2325f, -2403.6113f, 4.2465f, 20.5f) };
	Local_202[3 /*261*/][18 /*8*/] = { func_265("ELYSIAN" /* GXT: Elysian Island */, 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.5442f, 4.5423f, 20.5f) };
	Local_202[3 /*261*/][19 /*8*/] = { func_265("ELYSIAN" /* GXT: Elysian Island */, 303.5269f, -2451.4456f, 19.4091f, 270.9798f, -2409.4517f, 4.4609f, 20.5f) };
	Local_202[3 /*261*/][20 /*8*/] = { func_265("RANCHO" /* GXT: Rancho */, 515.026f, -1653.5404f, 37.2615f, 582.571f, -1577.8248f, 26.3365f, 100f) };
	Local_202[3 /*261*/][21 /*8*/] = { func_265("BURTON" /* GXT: Burton */, -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) };
	Local_202[3 /*261*/][22 /*8*/] = { func_265("SanAnd" /* GXT: San Andreas */, 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) };
	Local_202[3 /*261*/][23 /*8*/] = { func_265("ALTA" /* GXT: Alta */, 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) };
	Local_202[3 /*261*/][24 /*8*/] = { func_265("DTVINE" /* GXT: Downtown Vinewood */, 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) };
	Local_202[3 /*261*/][25 /*8*/] = { func_265("DTVINE" /* GXT: Downtown Vinewood */, 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) };
	Local_202[3 /*261*/][26 /*8*/] = { func_265("DTVINE" /* GXT: Downtown Vinewood */, 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) };
	Local_202[3 /*261*/][27 /*8*/] = { func_265("DTVINE" /* GXT: Downtown Vinewood */, 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) };
	Local_202[3 /*261*/][28 /*8*/] = { func_265("WVINE" /* GXT: West Vinewood */, 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) };
	Local_202[3 /*261*/][29 /*8*/] = { func_265("WVINE" /* GXT: West Vinewood */, -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) };
	Local_202[3 /*261*/][30 /*8*/] = { func_265("ELGORL" /* GXT: El Gordo Lighthouse */, 3449.839f, 5173.9814f, 0.0662f, 3412.309f, 5166.8896f, 14.8342f, 33.7f) };
	Local_202[3 /*261*/].f_260 = 3;
	Local_202[3 /*261*/].f_257 = 31;
	if (func_253(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_1261 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
}

struct<8> func_265(char* sParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0xCC94
{
	struct<8> Var0;
	
	Var0.f_0 = sParam0;
	Var0.f_1 = { Param1 };
	Var0.f_4 = { Param4 };
	Var0.f_7 = fParam7;
	return Var0;
}

void func_266(int iParam0, bool bParam1)//Position - 0xCCBF
{
	if (func_87(iLocal_107))
	{
		func_20(&iLocal_107);
	}
	if (!bParam1)
	{
		func_267(iParam0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_267(int iParam0)//Position - 0xCCE7
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_268(bool bParam0)//Position - 0xCD3E
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "PRC_MARK";
		if (iLocal_40 == 2)
		{
			sVar0 = "PRC_MARKVEH";
			func_276(sVar0);
		}
		else if (iLocal_40 == 0)
		{
			if (func_91() == 0)
			{
				func_275(sVar0);
				func_274(sVar0);
			}
			else if (func_91() == 1)
			{
				func_273(sVar0);
			}
			else
			{
				func_273(sVar0);
			}
		}
		else if (iLocal_40 == 1)
		{
			if (func_91() == 0)
			{
				func_275(sVar0);
				func_276(sVar0);
			}
			else if (func_91() == 1)
			{
				func_273(sVar0);
				func_276(sVar0);
			}
			else
			{
				func_273(sVar0);
				func_276(sVar0);
			}
		}
		MISC::SET_BIT(&uLocal_103, 11);
	}
	else if (BitTest(uLocal_103, 11))
	{
		func_272();
		func_271();
		func_270();
		func_269();
		MISC::CLEAR_BIT(&uLocal_103, 11);
	}
}

void func_269()//Position - 0xCE08
{
	StringCopy(&(Global_8638[3 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_270()//Position - 0xCE1E
{
	StringCopy(&(Global_8638[2 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_271()//Position - 0xCE34
{
	StringCopy(&(Global_8638[1 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_272()//Position - 0xCE4A
{
	StringCopy(&(Global_8638[0 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_273(char* sParam0)//Position - 0xCE60
{
	StringCopy(&(Global_8638[0 /*16*/].f_8), sParam0, 32);
}

void func_274(char* sParam0)//Position - 0xCE74
{
	StringCopy(&(Global_8638[2 /*16*/].f_8), sParam0, 32);
}

void func_275(char* sParam0)//Position - 0xCE88
{
	StringCopy(&(Global_8638[1 /*16*/].f_8), sParam0, 32);
}

void func_276(char* sParam0)//Position - 0xCE9C
{
	StringCopy(&(Global_8638[3 /*16*/].f_8), sParam0, 32);
}

void func_277(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xCEB0
{
	func_278(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_278(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xCED0
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_257();
	}
}

int func_279(var uParam0, int iParam1)//Position - 0xD0A2
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_54(&(Global_78179.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_61(&(Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

float func_280(int iParam0)//Position - 0xD0ED
{
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (!func_54(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		return 0f;
	}
	return Global_78179.f_555[0 /*21*/].f_3;
}

Vector3 func_281(int iParam0)//Position - 0xD123
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (!func_54(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_78179.f_555[0 /*21*/];
}

int func_282(int iParam0)//Position - 0xD15D
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
	return 1;
}

