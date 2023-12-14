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
	if (!func_283(32))
	{
		iLocal_35 = Global_114370.f_10052.f_128;
		if (iLocal_35 == 2)
		{
			MISC::SET_BIT(&uLocal_103, 10);
			Local_108 = { func_282(25) };
			fLocal_111 = func_281(25);
			if (func_280(&Local_112, 25))
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
		func_278("AM_H_PREP8" /* GXT: A getaway vehicle is required for this setup. */, 2, 0, -1, 10000, 3, 0, 0, 0);
		Global_114370.f_10052.f_128 = iLocal_35;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			func_269(0);
			func_267(32, 1);
		}
		else
		{
			func_267(32, 0);
		}
	}
	func_262(1);
	while (true)
	{
		if (func_261(69))
		{
			func_257("AM_H_PREP8" /* GXT: A getaway vehicle is required for this setup. */, 1);
			func_267(32, 0);
		}
		if (!func_255(1))
		{
			if (func_254(PLAYER::PLAYER_PED_ID()))
			{
				func_246();
				func_239();
				func_238();
				func_227();
				switch (iLocal_35)
				{
					case 0:
						func_142();
						break;
					
					case 2:
						func_141();
						break;
					
					case 3:
						func_132();
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
			if ((!func_2(func_3(iParam0)) && !Global_113009) && !BitTest(uLocal_103, 15))
			{
				MISC::SET_BIT(&uLocal_103, 15);
				HUD::CLEAR_HELP(true);
			}
		}
		else if ((HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_113009) && !BitTest(uLocal_103, 15))
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
	if (Global_79248)
	{
		iVar3 = 145;
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794) == 1)
	{
		if (func_11())
		{
			if (func_10())
			{
				iVar6 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "GET_CURRENT_SELECTION");
				iVar0 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iVar4 = MISC::GET_GAME_TIMER();
				while ((!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar0) && iVar6 == 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794) == 1)
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
				iVar2 = Global_20819[iVar1];
				iVar3 = iVar2;
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794) == 0)
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
	if (Global_32828 == 0 || Global_32828 == 2)
	{
		return 201;
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

void func_16(int iParam0)//Position - 0x5A1
{
	func_112();
	if (iLocal_38 == 0)
	{
		switch (iLocal_39)
		{
			case 0:
				func_111(1);
				iLocal_1265 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
				func_1(46, 1);
				iLocal_1266 = MISC::GET_GAME_TIMER() + 3000;
				if (!BitTest(uLocal_103, 10))
				{
					func_95();
				}
				func_94(iParam0, 1);
				iLocal_39 = 1;
				break;
			
			case 1:
				if (MISC::GET_GAME_TIMER() > iLocal_1266)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1265))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1265, "SHOW_MISSION_PASSED_MESSAGE");
						func_93("M_FB4P3_P" /* GXT: ~y~Mission Passed */);
						func_93("M_FB4P3" /* GXT: Getaway Vehicle */);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_1266 = MISC::GET_GAME_TIMER() + 10000;
						func_91(0);
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
				func_111(0);
				if (iLocal_40 == 2)
				{
					func_90(108, 0);
				}
				if (func_88(iLocal_107))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_107, 1);
				}
				func_84("M_FHPE" /* GXT: Getaway Vehicle */, func_85());
				func_81(2, 0);
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
		if (!func_80(0f, 0f, 0f, Local_108, 0))
		{
			if (func_79(PLAYER::PLAYER_PED_ID(), Local_108, 100f, 1) && !func_78())
			{
				if (func_88(func_77(25)))
				{
					iLocal_107 = func_77(25);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_107, true, true);
					if (func_88(iLocal_107))
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
				else if (!func_76(25, 0))
				{
					if (!func_88(func_77(25)))
					{
						func_71(1);
					}
				}
			}
			else if (func_88(iLocal_107))
			{
				if (!func_79(PLAYER::PLAYER_PED_ID(), Local_108, 100f, 1))
				{
				}
			}
		}
	}
	else
	{
		if (!func_80(0f, 0f, 0f, Local_108, 0))
		{
			if (!func_79(PLAYER::PLAYER_PED_ID(), Local_108, 100f, 1))
			{
				if (func_88(iLocal_107))
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
						func_71(0);
					}
				}
				else if (!func_76(25, 0))
				{
					func_71(1);
				}
			}
			else if (!func_76(25, 0))
			{
				if (!func_88(iLocal_107))
				{
					func_71(1);
				}
			}
			else if (!func_88(iLocal_107))
			{
				iVar0 = func_77(25);
				if (func_88(iVar0) && iVar0 != iLocal_107)
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
		if (func_88(iLocal_107))
		{
			if (func_19(PLAYER::PLAYER_PED_ID(), iLocal_107, 10f, 1))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_107, true), Local_108) >= 100f)
				{
					func_71(0);
				}
			}
		}
		else if (!func_76(25, 0))
		{
			if (func_88(iLocal_107))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_107, false);
			}
			func_20(&iLocal_107);
			func_71(1);
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
			if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78038.f_484[25], false))
			{
				if (Global_78038.f_484[25] == iParam0)
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
		func_70(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_65(iParam0, &Var0);
		if (func_80(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_79026 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_59(iParam5, &Var0, Param1, fParam4, func_64(iParam0));
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
	if (!func_55(&(Global_78038.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_78038.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_78038.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_78038.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78945 != -1 && Global_78945 != iParam0)
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
				Global_114370.f_32752.f_4801 = func_44();
			}
			if (iParam1 != Global_78038.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_77(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_23(iVar0, 145);
					}
				}
				Global_78944 = iParam1;
				Global_78945 = iParam0;
				Global_78946 = iParam2;
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
			iParam1 = Global_114370.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_114370.f_32752.f_5592[iVar1] = iVar2;
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114370.f_32752.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114370.f_32752.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114370.f_32752.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_114370.f_32752.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_114370.f_32752.f_5590 = iParam1;
	Global_78943 = iParam0;
	Global_114370.f_32752.f_5588 = 1;
	func_65(iParam0, &(Global_114370.f_32752.f_5510));
}

int func_24(int iParam0)//Position - 0xDFC
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_42(iParam0, 0, 0)) || func_42(iParam0, 1, 0)) || func_42(iParam0, 2, 0)) || func_64(iParam0) != 145) || func_41(iParam0)) || func_40(iParam0)) || func_39(iParam0)) || func_38(iParam0)) || !func_25(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_40(iParam0))
		{
		}
		if (func_40(iParam0))
		{
		}
		if (func_42(iParam0, 0, 0))
		{
		}
		if (func_42(iParam0, 1, 0))
		{
		}
		if (func_42(iParam0, 2, 0))
		{
		}
		if (func_64(iParam0) != 145)
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
		if (!func_37())
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
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_36() && !func_35()) && !func_34()) && !func_33()) && !func_37())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_32() || MISC::IS_PC_VERSION()) || func_31())
		{
		}
		else if (!func_34())
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

int func_27(int iParam0)//Position - 0x1219
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

int func_28()//Position - 0x12DF
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_29(int iParam0, int iParam1)//Position - 0x12F6
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2707028 && iParam1 >= 0) && iParam1 <= 515)
	{
		if (BitTest(Global_1586504[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2707027)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7131 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !Global_262145.f_13597 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE */) && iVar1 < Global_262145.f_13598 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14940 /* Tunable: ENABLE_LOWRIDER2_FACTION */ && iVar1 < Global_262145.f_14952 /* Tunable: ENABLE_LOWRIDER2_FACTION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14936 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */ && iVar1 < Global_262145.f_14948 /* Tunable: ENABLE_LOWRIDER2_VIRGO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14937 /* Tunable: ENABLE_LOWRIDER2_SABREGT */ && iVar1 < Global_262145.f_14949 /* Tunable: ENABLE_LOWRIDER2_SABREGT_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14938 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */ && iVar1 < Global_262145.f_14950 /* Tunable: ENABLE_LOWRIDER2_TORNADO5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14939 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */ && iVar1 < Global_262145.f_14951 /* Tunable: ENABLE_LOWRIDER2_MINIVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14941 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */ && iVar1 < Global_262145.f_14953 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14942 /* Tunable: ENABLEEXEC1_GROTTI_PROTO */ && iVar1 < Global_262145.f_14945 /* Tunable: ENABLEEXEC1_GROTTI_PROTO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14943 /* Tunable: ENABLEEXEC1_DEWBAUCHEE */ && iVar1 < Global_262145.f_14946 /* Tunable: ENABLEEXEC1_DEWBAUCHEE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14944 /* Tunable: ENABLEEXEC1_PFISTER */ && iVar1 < Global_262145.f_14947 /* Tunable: ENABLEEXEC1_PFISTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17521 /* Tunable: ENABLESTUNT_BF400 */ && iVar1 < Global_262145.f_17486 /* Tunable: ENABLESTUNT_BF400_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17516 /* Tunable: ENABLESTUNT_BRIOSO_RA */ && iVar1 < Global_262145.f_17481 /* Tunable: ENABLESTUNT_BRIOSO_RA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17520 /* Tunable: ENABLESTUNT_CLIFFHANGER */ && iVar1 < Global_262145.f_17485 /* Tunable: ENABLESTUNT_CLIFFHANGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17519 /* Tunable: ENABLESTUNT_CONTENDER */ && iVar1 < Global_262145.f_17484 /* Tunable: ENABLESTUNT_CONTENDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17513 /* Tunable: ENABLESTUNT_LE7B */ && iVar1 < Global_262145.f_17478 /* Tunable: ENABLESTUNT_LE7B_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17514 /* Tunable: ENABLESTUNT_OMNIS */ && iVar1 < Global_262145.f_17479 /* Tunable: ENABLESTUNT_OMNIS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17517 /* Tunable: ENABLESTUNT_TROPHY_TRUCK */ && iVar1 < Global_262145.f_17482 /* Tunable: ENABLESTUNT_TROPHY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17518 /* Tunable: ENABLESTUNT_TROPHY_CAR */ && iVar1 < Global_262145.f_17483 /* Tunable: ENABLESTUNT_TROPHY_CAR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17515 /* Tunable: ENABLESTUNT_TROPOS_RALLYE */ && iVar1 < Global_262145.f_17480 /* Tunable: ENABLESTUNT_TROPOS_RALLYE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17523 /* Tunable: ENABLESTUNT_GARGOYLE */ && iVar1 < Global_262145.f_17488 /* Tunable: ENABLESTUNT_GARGOYLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17524 /* Tunable: ENABLESTUNT_RALLY_TRUCK */ && iVar1 < Global_262145.f_17489 /* Tunable: ENABLESTUNT_RALLY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17512 /* Tunable: ENABLESTUNT_DRIFT_TAMPA */ && iVar1 < Global_262145.f_17477 /* Tunable: ENABLESTUNT_DRIFT_TAMPA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17511 /* Tunable: ENABLESTUNT_TYRUS */ && iVar1 < Global_262145.f_17476 /* Tunable: ENABLESTUNT_TYRUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17510 /* Tunable: ENABLESTUNT_ET1 */ && iVar1 < Global_262145.f_17475 /* Tunable: ENABLESTUNT_ET1_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17522 /* Tunable: ENABLESTUNT_LYNX */ && iVar1 < Global_262145.f_17487 /* Tunable: ENABLESTUNT_LYNX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17525 /* Tunable: ENABLESTUNT_STALLION */ && iVar1 < Global_262145.f_17490 /* Tunable: ENABLESTUNT_STALLION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17526 /* Tunable: ENABLESTUNT_GAUNTLET */ && iVar1 < Global_262145.f_17491 /* Tunable: ENABLESTUNT_GAUNTLET_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17527 /* Tunable: ENABLESTUNT_DOMINATOR */ && iVar1 < Global_262145.f_17492 /* Tunable: ENABLESTUNT_DOMINATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17528 /* Tunable: ENABLESTUNT_BUFFALO */ && iVar1 < Global_262145.f_17493 /* Tunable: ENABLESTUNT_BUFFALO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17682 /* Tunable: ENABLE_BIKER_DEFILER */ && iVar1 < Global_262145.f_17704 /* Tunable: ENABLE_BIKER_DEFILER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17683 /* Tunable: ENABLE_BIKER_NIGHTBLADE */ && iVar1 < Global_262145.f_17705 /* Tunable: ENABLE_BIKER_NIGHTBLADE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17684 /* Tunable: ENABLE_BIKER_ZOMBIEA */ && iVar1 < Global_262145.f_17706 /* Tunable: ENABLE_BIKER_ZOMBIEA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17685 /* Tunable: ENABLE_BIKER_ESSKEY */ && iVar1 < Global_262145.f_17707 /* Tunable: ENABLE_BIKER_ESSKEY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17686 /* Tunable: ENABLE_BIKER_AVARUS */ && iVar1 < Global_262145.f_17708 /* Tunable: ENABLE_BIKER_AVARUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17687 /* Tunable: ENABLE_BIKER_ZOMBIEB */ && iVar1 < Global_262145.f_17709 /* Tunable: ENABLE_BIKER_ZOMBIEB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17689 /* Tunable: ENABLE_BIKER_HAKUCHOU2 */ && iVar1 < Global_262145.f_17710 /* Tunable: ENABLE_BIKER_HAKUCHOU2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17690 /* Tunable: ENABLE_BIKER_VORTEX */ && iVar1 < Global_262145.f_17711 /* Tunable: ENABLE_BIKER_VORTEX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17691 /* Tunable: ENABLE_BIKER_SHOTARO */ && iVar1 < Global_262145.f_17712 /* Tunable: ENABLE_BIKER_SHOTARO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17692 /* Tunable: ENABLE_BIKER_CHIMERA */ && iVar1 < Global_262145.f_17713 /* Tunable: ENABLE_BIKER_CHIMERA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17693 /* Tunable: ENABLE_BIKER_RAPTOR */ && iVar1 < Global_262145.f_17714 /* Tunable: ENABLE_BIKER_RAPTOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17694 /* Tunable: ENABLE_BIKER_WESTERNDAEMON */ && iVar1 < Global_262145.f_17715 /* Tunable: ENABLE_BIKER_WESTERNDAEMON_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17695 /* Tunable: ENABLE_BIKER_BLAZER4 */ && iVar1 < Global_262145.f_17716 /* Tunable: ENABLE_BIKER_BLAZER4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17701 /* Tunable: ENABLE_BIKER_TORNADO6 */ && iVar1 < Global_262145.f_17723 /* Tunable: ENABLE_BIKER_TORNADO6_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17698 /* Tunable: ENABLE_BIKER_YOUGA2 */ && iVar1 < Global_262145.f_17719 /* Tunable: ENABLE_BIKER_YOUGA2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17699 /* Tunable: ENABLE_BIKER_WOLFSBANE */ && iVar1 < Global_262145.f_17720 /* Tunable: ENABLE_BIKER_WOLFSBANE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17700 /* Tunable: ENABLE_BIKER_FAGGIO3 */ && iVar1 < Global_262145.f_17721 /* Tunable: ENABLE_BIKER_FAGGIO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17688 /* Tunable: ENABLE_BIKER_FAGGIO */ && iVar1 < Global_262145.f_17722 /* Tunable: ENABLE_BIKER_FAGGIO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17702 /* Tunable: ENABLE_BIKER_BAGGER */ && iVar1 < Global_262145.f_17724 /* Tunable: ENABLE_BIKER_BAGGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17696 /* Tunable: ENABLE_BIKER_SANCTUS */ && iVar1 < Global_262145.f_17717 /* Tunable: ENABLE_BIKER_SANCTUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17697 /* Tunable: ENABLE_BIKER_MANCHEZ */ && iVar1 < Global_262145.f_17718 /* Tunable: ENABLE_BIKER_MANCHEZ_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17703 /* Tunable: ENABLE_BIKER_RATBIKE */ && iVar1 < Global_262145.f_17725 /* Tunable: ENABLE_BIKER_RATBIKE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19341 /* Tunable: ENABLE_IE_VOLTIC2 */ && iVar1 < Global_262145.f_19438 /* Tunable: ENABLE_IE_VOLTIC2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19342 /* Tunable: ENABLE_IE_RUINER2 */ && iVar1 < Global_262145.f_19439 /* Tunable: ENABLE_IE_RUINER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19343 /* Tunable: ENABLE_IE_DUNE4 */ && iVar1 < Global_262145.f_19440 /* Tunable: ENABLE_IE_DUNE4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19344 /* Tunable: ENABLE_IE_DUNE5 */ && iVar1 < Global_262145.f_19441 /* Tunable: ENABLE_IE_DUNE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19345 /* Tunable: ENABLE_IE_PHANTOM2 */ && iVar1 < Global_262145.f_19442 /* Tunable: ENABLE_IE_PHANTOM2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19346 /* Tunable: ENABLE_IE_TECHNICAL2 */ && iVar1 < Global_262145.f_19443 /* Tunable: ENABLE_IE_TECHNICAL2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19347 /* Tunable: ENABLE_IE_BOXVILLE5 */ && iVar1 < Global_262145.f_19444 /* Tunable: ENABLE_IE_BOXVILLE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19348 /* Tunable: ENABLE_IE_WASTELANDER */ && iVar1 < Global_262145.f_19445 /* Tunable: ENABLE_IE_WASTELANDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19349 /* Tunable: ENABLE_IE_BLAZER5 */ && iVar1 < Global_262145.f_19446 /* Tunable: ENABLE_IE_BLAZER5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19350 /* Tunable: ENABLE_IE_COMET2 */ && iVar1 < Global_262145.f_19447 /* Tunable: ENABLE_IE_COMET2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19351 /* Tunable: ENABLE_IE_COMET3 */ && iVar1 < Global_262145.f_19448 /* Tunable: ENABLE_IE_COMET3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19352 /* Tunable: ENABLE_IE_DIABLOUS */ && iVar1 < Global_262145.f_19449 /* Tunable: ENABLE_IE_DIABLOUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19353 /* Tunable: ENABLE_IE_DIABLOUS2 */ && iVar1 < Global_262145.f_19450 /* Tunable: ENABLE_IE_DIABLOUS2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19354 /* Tunable: ENABLE_IE_ELEGY */ && iVar1 < Global_262145.f_19451 /* Tunable: ENABLE_IE_ELEGY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19355 /* Tunable: ENABLE_IE_ELEGY2 */ && iVar1 < Global_262145.f_19452 /* Tunable: ENABLE_IE_ELEGY2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19356 /* Tunable: ENABLE_IE_FCR */ && iVar1 < Global_262145.f_19453 /* Tunable: ENABLE_IE_FCR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19357 /* Tunable: ENABLE_IE_FCR2 */ && iVar1 < Global_262145.f_19454 /* Tunable: ENABLE_IE_FCR2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19358 /* Tunable: ENABLE_IE_ITALIGTB */ && iVar1 < Global_262145.f_19455 /* Tunable: ENABLE_IE_ITALIGTB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19359 /* Tunable: ENABLE_IE_ITALIGTB2 */ && iVar1 < Global_262145.f_19456 /* Tunable: ENABLE_IE_ITALIGTB2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19360 /* Tunable: ENABLE_IE_NERO */ && iVar1 < Global_262145.f_19457 /* Tunable: ENABLE_IE_NERO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19361 /* Tunable: ENABLE_IE_NERO2 */ && iVar1 < Global_262145.f_19458 /* Tunable: ENABLE_IE_NERO2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19362 /* Tunable: ENABLE_IE_PENETRATOR */ && iVar1 < Global_262145.f_19459 /* Tunable: ENABLE_IE_PENETRATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19363 /* Tunable: ENABLE_IE_SPECTER */ && iVar1 < Global_262145.f_19460 /* Tunable: ENABLE_IE_SPECTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19364 /* Tunable: ENABLE_IE_SPECTER2 */ && iVar1 < Global_262145.f_19461 /* Tunable: ENABLE_IE_SPECTER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19365 /* Tunable: ENABLE_IE_TEMPESTA */ && iVar1 < Global_262145.f_19462 /* Tunable: ENABLE_IE_TEMPESTA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20422 /* Tunable: ENABLEGP1 */ && iVar1 < Global_262145.f_20418 /* Tunable: LAUNCHPOSIXGP1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20423 /* Tunable: ENABLEINFERNUS2 */ && iVar1 < Global_262145.f_20419 /* Tunable: LAUNCHPOSIXINFERNUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20424 /* Tunable: ENABLERUSTON */ && iVar1 < Global_262145.f_20420 /* Tunable: LAUNCHPOSIXRUSTON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20425 /* Tunable: ENABLETURISMO2 */ && iVar1 < Global_262145.f_20421 /* Tunable: LAUNCHPOSIXTURISMO2 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21304 /* Tunable: ENABLE_XA21 */ && iVar1 < Global_262145.f_21312 /* Tunable: LAUNCHPOSIX_XA21 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21305 /* Tunable: ENABLE_CHEETAH2 */ && iVar1 < Global_262145.f_21313 /* Tunable: LAUNCHPOSIX_CHEETAH2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21306 /* Tunable: ENABLE_TORERO */ && iVar1 < Global_262145.f_21314 /* Tunable: LAUNCHPOSIX_TORERO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21307 /* Tunable: ENABLE_VAGNER */ && iVar1 < Global_262145.f_21315 /* Tunable: LAUNCHPOSIX_VAGNER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21308 /* Tunable: ENABLE_ARDENT */ && iVar1 < Global_262145.f_21316 /* Tunable: LAUNCHPOSIX_ARDENT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21309 /* Tunable: ENABLE_NIGHTSHARK */ && iVar1 < Global_262145.f_21317 /* Tunable: LAUNCHPOSIX_NIGHTSHARK */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_22103 /* Tunable: ENABLE_ULTRALIGHT */ && iVar1 < Global_262145.f_22123 /* Tunable: LAUNCHPOSIX_ULTRALIGHT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_22115 /* Tunable: ENABLE_MOGUL */ && iVar1 < Global_262145.f_22135 /* Tunable: LAUNCHPOSIX_MOGUL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_22106 /* Tunable: ENABLE_ROGUE */ && iVar1 < Global_262145.f_22126 /* Tunable: LAUNCHPOSIX_ROGUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_22116 /* Tunable: ENABLE_STARLING */ && iVar1 < Global_262145.f_22136 /* Tunable: LAUNCHPOSIX_STARLING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_22104 /* Tunable: ENABLE_SEABREEZE */ && iVar1 < Global_262145.f_22124 /* Tunable: LAUNCHPOSIX_SEABREEZE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_22120 /* Tunable: ENABLE_TULA */ && iVar1 < Global_262145.f_22140 /* Tunable: LAUNCHPOSIX_TULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_22118 /* Tunable: ENABLE_PYRO */ && iVar1 < Global_262145.f_22138 /* Tunable: LAUNCHPOSIX_PYRO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_22119 /* Tunable: ENABLE_MOLOTOK */ && iVar1 < Global_262145.f_22139 /* Tunable: LAUNCHPOSIX_MOLOTOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_22114 /* Tunable: ENABLE_NOKOTA */ && iVar1 < Global_262145.f_22134 /* Tunable: LAUNCHPOSIX_NOKOTA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_22121 /* Tunable: ENABLE_BOMBUSHKA */ && iVar1 < Global_262145.f_22141 /* Tunable: LAUNCHPOSIX_BOMBUSHKA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_22117 /* Tunable: ENABLE_HUNTER */ && iVar1 < Global_262145.f_22137 /* Tunable: LAUNCHPOSIX_HUNTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_22113 /* Tunable: ENABLE_HAVOK */ && iVar1 < Global_262145.f_22133 /* Tunable: LAUNCHPOSIX_HAVOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_22105 /* Tunable: ENABLE_HOWARD */ && iVar1 < Global_262145.f_22125 /* Tunable: LAUNCHPOSIX_HOWARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_22107 /* Tunable: ENABLE_ALPHAZ1 */ && iVar1 < Global_262145.f_22127 /* Tunable: LAUNCHPOSIX_ALPHAZ1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_22108 /* Tunable: ENABLE_CYCLONE */ && iVar1 < Global_262145.f_22128 /* Tunable: LAUNCHPOSIX_CYCLONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_22109 /* Tunable: ENABLE_VISIONE */ && iVar1 < Global_262145.f_22129 /* Tunable: LAUNCHPOSIX_VISIONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_22110 /* Tunable: ENABLE_VIGILANTE */ && iVar1 < Global_262145.f_22130 /* Tunable: LAUNCHPOSIX_VIGILANTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_22111 /* Tunable: ENABLE_RETINUE */ && iVar1 < Global_262145.f_22131 /* Tunable: LAUNCHPOSIX_RETINUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_22112 /* Tunable: ENABLE_RAPIDGT3 */ && iVar1 < Global_262145.f_22132 /* Tunable: LAUNCHPOSIX_RAPIDGT3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_23071 /* Tunable: ENABLE_DELUXO */ && iVar1 < Global_262145.f_23099 /* Tunable: LAUNCHPOSIX_DELUXO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_23072 /* Tunable: ENABLE_STROMBERG */ && iVar1 < Global_262145.f_23100 /* Tunable: LAUNCHPOSIX_STROMBERG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_23073 /* Tunable: ENABLE_RIOT2 */ && iVar1 < Global_262145.f_23101 /* Tunable: LAUNCHPOSIX_RIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_23074 /* Tunable: ENABLE_CHERNOBOG */ && iVar1 < Global_262145.f_23102 /* Tunable: LAUNCHPOSIX_CHERNOBOG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_23075 /* Tunable: ENABLE_KHANJALI */ && iVar1 < Global_262145.f_23103 /* Tunable: LAUNCHPOSIX_KHANJALI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_23076 /* Tunable: ENABLE_AKULA */ && iVar1 < Global_262145.f_23104 /* Tunable: LAUNCHPOSIX_AKULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_23077 /* Tunable: ENABLE_THRUSTER */ && iVar1 < Global_262145.f_23105 /* Tunable: LAUNCHPOSIX_THRUSTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_23078 /* Tunable: ENABLE_BARRAGE */ && iVar1 < Global_262145.f_23106 /* Tunable: LAUNCHPOSIX_BARRAGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_23079 /* Tunable: ENABLE_VOLATOL */ && iVar1 < Global_262145.f_23107 /* Tunable: LAUNCHPOSIX_VOLATOL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_23080 /* Tunable: ENABLE_COMET4 */ && iVar1 < Global_262145.f_23108 /* Tunable: LAUNCHPOSIX_COMET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_23081 /* Tunable: ENABLE_NEON */ && iVar1 < Global_262145.f_23109 /* Tunable: LAUNCHPOSIX_NEON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_23082 /* Tunable: ENABLE_STREITER */ && iVar1 < Global_262145.f_23110 /* Tunable: LAUNCHPOSIX_STREITER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_23083 /* Tunable: ENABLE_SENTINEL3 */ && iVar1 < Global_262145.f_23111 /* Tunable: LAUNCHPOSIX_SENTINEL3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_23084 /* Tunable: ENABLE_YOSEMITE */ && iVar1 < Global_262145.f_23112 /* Tunable: LAUNCHPOSIX_YOSEMITE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_23085 /* Tunable: ENABLE_SC1 */ && iVar1 < Global_262145.f_23113 /* Tunable: LAUNCHPOSIX_SC1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_23086 /* Tunable: ENABLE_AUTARCH */ && iVar1 < Global_262145.f_23114 /* Tunable: LAUNCHPOSIX_AUTARCH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_23087 /* Tunable: ENABLE_GT500 */ && iVar1 < Global_262145.f_23115 /* Tunable: LAUNCHPOSIX_GT500 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_23088 /* Tunable: ENABLE_HUSTLER */ && iVar1 < Global_262145.f_23116 /* Tunable: LAUNCHPOSIX_HUSTLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_23089 /* Tunable: ENABLE_REVOLTER */ && iVar1 < Global_262145.f_23117 /* Tunable: LAUNCHPOSIX_REVOLTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_23090 /* Tunable: ENABLE_PARIAH */ && iVar1 < Global_262145.f_23118 /* Tunable: LAUNCHPOSIX_PARIAH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_23091 /* Tunable: ENABLE_RAIDEN */ && iVar1 < Global_262145.f_23119 /* Tunable: LAUNCHPOSIX_RAIDEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_23092 /* Tunable: ENABLE_SAVESTRA */ && iVar1 < Global_262145.f_23120 /* Tunable: LAUNCHPOSIX_SAVESTRA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_23093 /* Tunable: ENABLE_RIATA */ && iVar1 < Global_262145.f_23121 /* Tunable: LAUNCHPOSIX_RIATA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_23094 /* Tunable: ENABLE_HERMES */ && iVar1 < Global_262145.f_23122 /* Tunable: LAUNCHPOSIX_HERMES */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_23095 /* Tunable: ENABLE_COMET5 */ && iVar1 < Global_262145.f_23123 /* Tunable: LAUNCHPOSIX_COMET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_23096 /* Tunable: ENABLE_Z190 */ && iVar1 < Global_262145.f_23124 /* Tunable: LAUNCHPOSIX_Z190 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_23097 /* Tunable: ENABLE_VISERIS */ && iVar1 < Global_262145.f_23125 /* Tunable: LAUNCHPOSIX_VISERIS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_23098 /* Tunable: ENABLE_KAMACHO */ && iVar1 < Global_262145.f_23126 /* Tunable: LAUNCHPOSIX_KAMACHO */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24293 /* Tunable: ENABLE_GB200 */ && iVar1 < Global_262145.f_24309 /* Tunable: LAUNCHPOSIX_GB200 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24294 /* Tunable: ENABLE_FAGALOA */ && iVar1 < Global_262145.f_24310 /* Tunable: LAUNCHPOSIX_FAGALOA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24298 /* Tunable: ENABLE_ELLIE */ && iVar1 < Global_262145.f_24314 /* Tunable: LAUNCHPOSIX_ELLIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24301 /* Tunable: ENABLE_ISSI3 */ && iVar1 < Global_262145.f_24317 /* Tunable: LAUNCHPOSIX_ISSI3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24306 /* Tunable: ENABLE_MICHELLI */ && iVar1 < Global_262145.f_24322 /* Tunable: LAUNCHPOSIX_MICHELLI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24300 /* Tunable: ENABLE_FLASHGT */ && iVar1 < Global_262145.f_24316 /* Tunable: LAUNCHPOSIX_FLASHGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24292 /* Tunable: ENABLE_HOTRING */ && iVar1 < Global_262145.f_24308 /* Tunable: LAUNCHPOSIX_HOTRING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24299 /* Tunable: ENABLE_TEZERACT */ && iVar1 < Global_262145.f_24315 /* Tunable: LAUNCHPOSIX_TEZERACT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24305 /* Tunable: ENABLE_TYRANT */ && iVar1 < Global_262145.f_24321 /* Tunable: LAUNCHPOSIX_TYRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24304 /* Tunable: ENABLE_DOMINATOR3 */ && iVar1 < Global_262145.f_24320 /* Tunable: LAUNCHPOSIX_DOMINATOR3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24295 /* Tunable: ENABLE_TAIPAN */ && iVar1 < Global_262145.f_24311 /* Tunable: LAUNCHPOSIX_TAIPAN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24297 /* Tunable: ENABLE_ENTITY2 */ && iVar1 < Global_262145.f_24313 /* Tunable: LAUNCHPOSIX_ENTITY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24307 /* Tunable: ENABLE_JESTER3 */ && iVar1 < Global_262145.f_24323 /* Tunable: LAUNCHPOSIX_JESTER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24303 /* Tunable: ENABLE_CHEBUREK */ && iVar1 < Global_262145.f_24319 /* Tunable: LAUNCHPOSIX_CHEBUREK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24296 /* Tunable: ENABLE_CARACARA */ && iVar1 < Global_262145.f_24312 /* Tunable: LAUNCHPOSIX_CARACARA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24302 /* Tunable: ENABLE_SEASPARROW */ && iVar1 < Global_262145.f_24318 /* Tunable: LAUNCHPOSIX_SEASPARROW */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24383 /* Tunable: ENABLE_TERBYTE */ && iVar1 < Global_262145.f_24370 /* Tunable: LAUNCHPOSIX_TERBYTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24384 /* Tunable: ENABLE_PBUS2 */ && iVar1 < Global_262145.f_24371 /* Tunable: LAUNCHPOSIX_PBUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24389 /* Tunable: ENABLE_MULE4 */ && iVar1 < Global_262145.f_24376 /* Tunable: LAUNCHPOSIX_MULE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24388 /* Tunable: ENABLE_POUNDER2 */ && iVar1 < Global_262145.f_24375 /* Tunable: LAUNCHPOSIX_POUNDER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24386 /* Tunable: ENABLE_SWINGER */ && iVar1 < Global_262145.f_24373 /* Tunable: LAUNCHPOSIX_SWINGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24392 /* Tunable: ENABLE_MENACER */ && iVar1 < Global_262145.f_24379 /* Tunable: LAUNCHPOSIX_MENACER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24394 /* Tunable: ENABLE_SCRAMJET */ && iVar1 < Global_262145.f_24381 /* Tunable: LAUNCHPOSIX_SCRAMJET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24395 /* Tunable: ENABLE_STRIKEFORCE */ && iVar1 < Global_262145.f_24382 /* Tunable: LAUNCHPOSIX_STRIKEFORCE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24393 /* Tunable: ENABLE_OPPRESSOR2 */ && iVar1 < Global_262145.f_24380 /* Tunable: LAUNCHPOSIX_OPPRESSOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24385 /* Tunable: ENABLE_PATRIOT2 */ && iVar1 < Global_262145.f_24372 /* Tunable: LAUNCHPOSIX_PATRIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24387 /* Tunable: ENABLE_STAFFORD */ && iVar1 < Global_262145.f_24374 /* Tunable: LAUNCHPOSIX_STAFFORD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24391 /* Tunable: ENABLE_FREECRAWLER */ && iVar1 < Global_262145.f_24378 /* Tunable: LAUNCHPOSIX_FREECRAWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24390 /* Tunable: ENABLE_BLIMP3 */ && iVar1 < Global_262145.f_24377 /* Tunable: LAUNCHPOSIX_BLIMP3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_27026 /* Tunable: ENABLE_VEHICLE_DEVESTE */ && iVar1 < Global_262145.f_27028 /* Tunable: LAUNCHPOSIX_DEVESTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_26039 /* Tunable: ENABLE_VEHICLE_TOROS */ && iVar1 < Global_262145.f_26032 /* Tunable: LAUNCHPOSIX_TOROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_26040 /* Tunable: ENABLE_VEHICLE_CLIQUE */ && iVar1 < Global_262145.f_26033 /* Tunable: LAUNCHPOSIX_CLIQUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_26041 /* Tunable: ENABLE_VEHICLE_ITALIGTO */ && iVar1 < Global_262145.f_26034 /* Tunable: LAUNCHPOSIX_ITALIGTO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_26042 /* Tunable: ENABLE_VEHICLE_DEVIANT */ && iVar1 < Global_262145.f_26035 /* Tunable: LAUNCHPOSIX_DEVIANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_27027 /* Tunable: ENABLE_VEHICLE_VAMOS */ && iVar1 < Global_262145.f_27029 /* Tunable: LAUNCHPOSIX_VAMOS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_26043 /* Tunable: ENABLE_VEHICLE_TULIP */ && iVar1 < Global_262145.f_26036 /* Tunable: LAUNCHPOSIX_TULIP */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_26044 /* Tunable: ENABLE_VEHICLE_SCHLAGEN */ && iVar1 < Global_262145.f_26037 /* Tunable: LAUNCHPOSIX_SCHLAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_26045 /* Tunable: ENABLE_VEHICLE_BANDITO */ && iVar1 < Global_262145.f_26038 /* Tunable: LAUNCHPOSIX_BANDITO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_26050 /* Tunable: ENABLE_VEHICLE_THRAX */ && iVar1 < Global_262145.f_26071 /* Tunable: LAUNCHPOSIX_THRAX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_26051 /* Tunable: ENABLE_VEHICLE_DRAFTER */ && iVar1 < Global_262145.f_26072 /* Tunable: LAUNCHPOSIX_DRAFTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_26052 /* Tunable: ENABLE_VEHICLE_LOCUST */ && iVar1 < Global_262145.f_26073 /* Tunable: LAUNCHPOSIX_LOCUST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_26053 /* Tunable: ENABLE_VEHICLE_NOVAK */ && iVar1 < Global_262145.f_26074 /* Tunable: LAUNCHPOSIX_NOVAK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_26054 /* Tunable: ENABLE_VEHICLE_ZORRUSSO */ && iVar1 < Global_262145.f_26075 /* Tunable: LAUNCHPOSIX_ZORRUSSO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_26055 /* Tunable: ENABLE_VEHICLE_GAUNTLET3 */ && iVar1 < Global_262145.f_26076 /* Tunable: LAUNCHPOSIX_GAUNTLET3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_26056 /* Tunable: ENABLE_VEHICLE_ISSI7 */ && iVar1 < Global_262145.f_26077 /* Tunable: LAUNCHPOSIX_ISSI7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_26057 /* Tunable: ENABLE_VEHICLE_ZION3 */ && iVar1 < Global_262145.f_26078 /* Tunable: LAUNCHPOSIX_ZION3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_26058 /* Tunable: ENABLE_VEHICLE_NEBULA */ && iVar1 < Global_262145.f_26079 /* Tunable: LAUNCHPOSIX_NEBULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_26059 /* Tunable: ENABLE_VEHICLE_HELLION */ && iVar1 < Global_262145.f_26080 /* Tunable: LAUNCHPOSIX_HELLION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_26060 /* Tunable: ENABLE_VEHICLE_DYNASTY */ && iVar1 < Global_262145.f_26081 /* Tunable: LAUNCHPOSIX_DYNASTY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_26061 /* Tunable: ENABLE_VEHICLE_RROCKET */ && iVar1 < Global_262145.f_26082 /* Tunable: LAUNCHPOSIX_RROCKET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_26062 /* Tunable: ENABLE_VEHICLE_PEYOTE2 */ && iVar1 < Global_262145.f_26083 /* Tunable: LAUNCHPOSIX_PEYOTE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_26063 /* Tunable: ENABLE_VEHICLE_GAUNTLET4 */ && iVar1 < Global_262145.f_26084 /* Tunable: LAUNCHPOSIX_GAUNTLET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_26064 /* Tunable: ENABLE_VEHICLE_CARACARA2 */ && iVar1 < Global_262145.f_26085 /* Tunable: LAUNCHPOSIX_CARACARA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_26065 /* Tunable: ENABLE_VEHICLE_JUGULAR */ && iVar1 < Global_262145.f_26086 /* Tunable: LAUNCHPOSIX_JUGULAR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_26066 /* Tunable: ENABLE_VEHICLE_S80 */ && iVar1 < Global_262145.f_26087 /* Tunable: LAUNCHPOSIX_S80 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_26067 /* Tunable: ENABLE_VEHICLE_KRIEGER */ && iVar1 < Global_262145.f_26088 /* Tunable: LAUNCHPOSIX_KRIEGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_26068 /* Tunable: ENABLE_VEHICLE_EMERUS */ && iVar1 < Global_262145.f_26089 /* Tunable: LAUNCHPOSIX_EMERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_26069 /* Tunable: ENABLE_VEHICLE_NEO */ && iVar1 < Global_262145.f_26090 /* Tunable: LAUNCHPOSIX_NEO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_26070 /* Tunable: ENABLE_VEHICLE_PARAGON */ && iVar1 < Global_262145.f_26091 /* Tunable: LAUNCHPOSIX_PARAGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28890 /* Tunable: ENABLE_VEHICLE_ASBO */ && iVar1 < Global_262145.f_28911 /* Tunable: LAUNCHPOSIX_ASBO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28891 /* Tunable: ENABLE_VEHICLE_KANJO */ && iVar1 < Global_262145.f_28912 /* Tunable: LAUNCHPOSIX_KANJO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28892 /* Tunable: ENABLE_VEHICLE_EVERON */ && iVar1 < Global_262145.f_28913 /* Tunable: LAUNCHPOSIX_EVERON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28893 /* Tunable: ENABLE_VEHICLE_RETINUE2 */ && iVar1 < Global_262145.f_28914 /* Tunable: LAUNCHPOSIX_RETINUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28894 /* Tunable: ENABLE_VEHICLE_YOSEMITE2 */ && iVar1 < Global_262145.f_28915 /* Tunable: LAUNCHPOSIX_YOSEMITE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28895 /* Tunable: ENABLE_VEHICLE_SUGOI */ && iVar1 < Global_262145.f_28916 /* Tunable: LAUNCHPOSIX_SUGOI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28896 /* Tunable: ENABLE_VEHICLE_SULTAN2 */ && iVar1 < Global_262145.f_28917 /* Tunable: LAUNCHPOSIX_SULTAN2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28897 /* Tunable: ENABLE_VEHICLE_OUTLAW */ && iVar1 < Global_262145.f_28918 /* Tunable: LAUNCHPOSIX_OUTLAW */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28898 /* Tunable: ENABLE_VEHICLE_VAGRANT */ && iVar1 < Global_262145.f_28919 /* Tunable: LAUNCHPOSIX_VAGRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28899 /* Tunable: ENABLE_VEHICLE_KOMODA */ && iVar1 < Global_262145.f_28920 /* Tunable: LAUNCHPOSIX_KOMODA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28900 /* Tunable: ENABLE_VEHICLE_STRYDER */ && iVar1 < Global_262145.f_28921 /* Tunable: LAUNCHPOSIX_STRYDER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28901 /* Tunable: ENABLE_VEHICLE_FURIA */ && iVar1 < Global_262145.f_28922 /* Tunable: LAUNCHPOSIX_FURIA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28902 /* Tunable: ENABLE_VEHICLE_ZHABA */ && iVar1 < Global_262145.f_28923 /* Tunable: LAUNCHPOSIX_ZHABA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28903 /* Tunable: ENABLE_VEHICLE_JB7002 */ && iVar1 < Global_262145.f_28924 /* Tunable: LAUNCHPOSIX_JB7002 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28904 /* Tunable: ENABLE_VEHICLE_FIRETRUCK */ && iVar1 < Global_262145.f_28925 /* Tunable: LAUNCHPOSIX_FIRETRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28905 /* Tunable: ENABLE_VEHICLE_BURRITO2 */ && iVar1 < Global_262145.f_28926 /* Tunable: LAUNCHPOSIX_BURRITO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28906 /* Tunable: ENABLE_VEHICLE_BOXVILLE */ && iVar1 < Global_262145.f_28927 /* Tunable: LAUNCHPOSIX_BOXVILLE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28907 /* Tunable: ENABLE_VEHICLE_STOCKADE */ && iVar1 < Global_262145.f_28928 /* Tunable: LAUNCHPOSIX_STOCKADE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28908 /* Tunable: ENABLE_VEHICLE_MINITANK */ && iVar1 < Global_262145.f_28929 /* Tunable: LAUNCHPOSIX_MINITANK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28909 /* Tunable: ENABLE_VEHICLE_LGUARD */ && iVar1 < Global_262145.f_28930 /* Tunable: LAUNCHPOSIX_LGUARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28910 /* Tunable: ENABLE_VEHICLE_BLAZER2 */ && iVar1 < Global_262145.f_28931 /* Tunable: LAUNCHPOSIX_BLAZER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28933 /* Tunable: ENABLE_VEHICLE_FORMULA */ && iVar1 < Global_262145.f_28934 /* Tunable: LAUNCHPOSIX_FORMULA */) && !Global_262145.f_28888 /* Tunable: ENABLE_VEHICLE_FORMULA_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28936 /* Tunable: ENABLE_VEHICLE_FORMULA2 */ && iVar1 < Global_262145.f_28937 /* Tunable: LAUNCHPOSIX_FORMULA2 */) && !Global_262145.f_28889 /* Tunable: ENABLE_VEHICLE_FORMULA2_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28941 /* Tunable: ENABLE_VEHICLE_IMORGEN */ && iVar1 < Global_262145.f_28944 /* Tunable: LAUNCHPOSIX_IMORGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28942 /* Tunable: ENABLE_VEHICLE_REBLA */ && iVar1 < Global_262145.f_28945 /* Tunable: LAUNCHPOSIX_REBLA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28943 /* Tunable: ENABLE_VEHICLE_VSTR */ && iVar1 < Global_262145.f_28946 /* Tunable: LAUNCHPOSIX_VSTR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29959 /* Tunable: ENABLE_VEH_GAUNTLET5 */ && iVar1 < Global_262145.f_29624 /* Tunable: LAUNCHPOSIX_GAUNTLET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29610 /* Tunable: ENABLE_VEH_CLUB */ && iVar1 < Global_262145.f_29631 /* Tunable: LAUNCHPOSIX_CLUB */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29611 /* Tunable: ENABLE_VEH_DUKES3 */ && iVar1 < Global_262145.f_29617 /* Tunable: LAUNCHPOSIX_DUKES3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29957 /* Tunable: ENABLE_VEH_YOSEMITE3 */ && iVar1 < Global_262145.f_29625 /* Tunable: LAUNCHPOSIX_YOSEMITE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29958 /* Tunable: ENABLE_VEH_PEYOTE3 */ && iVar1 < Global_262145.f_29626 /* Tunable: LAUNCHPOSIX_PEYOTE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29604 /* Tunable: ENABLE_VEH_GLENDALE2 */ && iVar1 < Global_262145.f_29623 /* Tunable: LAUNCHPOSIX_GLENDALE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29605 /* Tunable: ENABLE_VEH_PENUMBRA2 */ && iVar1 < Global_262145.f_29632 /* Tunable: LAUNCHPOSIX_PENUMBRA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29606 /* Tunable: ENABLE_VEH_LANDSTALKER2 */ && iVar1 < Global_262145.f_29622 /* Tunable: LAUNCHPOSIX_LANDSTALKER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29607 /* Tunable: ENABLE_VEH_SEMINOLE2 */ && iVar1 < Global_262145.f_29620 /* Tunable: LAUNCHPOSIX_SEMINOLE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29953 /* Tunable: ENABLE_VEH_TIGON */ && iVar1 < Global_262145.f_29627 /* Tunable: LAUNCHPOSIX_TIGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29954 /* Tunable: ENABLE_VEH_OPENWHEEL1 */ && iVar1 < Global_262145.f_29628 /* Tunable: LAUNCHPOSIX_OPENWHEEL1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29955 /* Tunable: ENABLE_VEH_OPENWHEEL2 */ && iVar1 < Global_262145.f_29629 /* Tunable: LAUNCHPOSIX_OPENWHEEL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29956 /* Tunable: ENABLE_VEH_COQUETTE4 */ && iVar1 < Global_262145.f_29630 /* Tunable: LAUNCHPOSIX_COQUETTE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29608 /* Tunable: ENABLE_VEH_MANANA2 */ && iVar1 < Global_262145.f_29619 /* Tunable: LAUNCHPOSIX_MANANA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29609 /* Tunable: ENABLE_VEH_YOUGA3 */ && iVar1 < Global_262145.f_29621 /* Tunable: LAUNCHPOSIX_YOUGA3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30418 /* Tunable: ENABLE_VEHICLE_TOREADOR */ && iVar1 < Global_262145.f_30401 /* Tunable: LAUNCHPOSIX_TOREADOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30419 /* Tunable: ENABLE_VEHICLE_ANNIHILATOR2 */ && iVar1 < Global_262145.f_30402 /* Tunable: LAUNCHPOSIX_ANNIHILATOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30420 /* Tunable: ENABLE_VEHICLE_ALKONOST */ && iVar1 < Global_262145.f_30403 /* Tunable: LAUNCHPOSIX_ALKONOST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30421 /* Tunable: ENABLE_VEHICLE_PATROLBOAT */ && iVar1 < Global_262145.f_30404 /* Tunable: LAUNCHPOSIX_PATROLBOAT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30422 /* Tunable: ENABLE_VEHICLE_LONGFIN */ && iVar1 < Global_262145.f_30405 /* Tunable: LAUNCHPOSIX_LONGFIN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30423 /* Tunable: ENABLE_VEHICLE_WINKY */ && iVar1 < Global_262145.f_30406 /* Tunable: LAUNCHPOSIX_WINKY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30424 /* Tunable: ENABLE_VEHICLE_VETO */ && iVar1 < Global_262145.f_30407 /* Tunable: LAUNCHPOSIX_VETO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30425 /* Tunable: ENABLE_VEHICLE_VETO2 */ && iVar1 < Global_262145.f_30408 /* Tunable: LAUNCHPOSIX_VETO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30426 /* Tunable: ENABLE_VEHICLE_ITALIRSX */ && iVar1 < Global_262145.f_30409 /* Tunable: LAUNCHPOSIX_ITALIRSX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30435 /* Tunable: -552682736 */)
		{
		}
		else if (!Global_262145.f_30427 /* Tunable: ENABLE_VEHICLE_WEEVIL */ && iVar1 < Global_262145.f_30410 /* Tunable: LAUNCHPOSIX_WEEVIL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30428 /* Tunable: ENABLE_VEHICLE_MANCHEZ2 */ && iVar1 < Global_262145.f_30411 /* Tunable: LAUNCHPOSIX_MANCHEZ2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30429 /* Tunable: ENABLE_VEHICLE_SLAMTRUCK */ && iVar1 < Global_262145.f_30412 /* Tunable: LAUNCHPOSIX_SLAMTRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30430 /* Tunable: ENABLE_VEHICLE_VETIR */ && iVar1 < Global_262145.f_30413 /* Tunable: LAUNCHPOSIX_VETIR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30431 /* Tunable: ENABLE_VEHICLE_SQUADDIE */ && iVar1 < Global_262145.f_30414 /* Tunable: LAUNCHPOSIX_SQUADDIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30436 /* Tunable: 976860524 */)
		{
		}
		else if (!Global_262145.f_30432 /* Tunable: ENABLE_VEHICLE_BRIOSO2 */ && iVar1 < Global_262145.f_30415 /* Tunable: LAUNCHPOSIX_BRIOSO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30433 /* Tunable: ENABLE_VEHICLE_DINGY5 */ && iVar1 < Global_262145.f_30416 /* Tunable: LAUNCHPOSIX_DINGY5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30434 /* Tunable: ENABLE_VEHICLE_VERUS */ && iVar1 < Global_262145.f_30417 /* Tunable: LAUNCHPOSIX_VERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31290 /* Tunable: ENABLE_VEHICLE_TAILGATER2 */ && iVar1 < Global_262145.f_31273 /* Tunable: LAUNCHPOSIX_TAILGATER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31291 /* Tunable: ENABLE_VEHICLE_EUROS */ && iVar1 < Global_262145.f_31274 /* Tunable: LAUNCHPOSIX_EUROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31292 /* Tunable: ENABLE_VEHICLE_SULTAN3 */ && iVar1 < Global_262145.f_31275 /* Tunable: LAUNCHPOSIX_SULTAN3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31293 /* Tunable: ENABLE_VEHICLE_RT3000 */ && iVar1 < Global_262145.f_31276 /* Tunable: LAUNCHPOSIX_RT3000 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31294 /* Tunable: ENABLE_VEHICLE_VECTRE */ && iVar1 < Global_262145.f_31277 /* Tunable: LAUNCHPOSIX_VECTRE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31295 /* Tunable: ENABLE_VEHICLE_ZR350 */ && iVar1 < Global_262145.f_31278 /* Tunable: LAUNCHPOSIX_ZR350 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31296 /* Tunable: ENABLE_VEHICLE_WARRENER2 */ && iVar1 < Global_262145.f_31279 /* Tunable: LAUNCHPOSIX_WARRENER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31297 /* Tunable: ENABLE_VEHICLE_CALICO */ && iVar1 < Global_262145.f_31280 /* Tunable: LAUNCHPOSIX_CALICO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31298 /* Tunable: ENABLE_VEHICLE_REMUS */ && iVar1 < Global_262145.f_31281 /* Tunable: LAUNCHPOSIX_REMUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31299 /* Tunable: ENABLE_VEHICLE_CYPHER */ && iVar1 < Global_262145.f_31282 /* Tunable: LAUNCHPOSIX_CYPHER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31300 /* Tunable: ENABLE_VEHICLE_DOMINATOR7 */ && iVar1 < Global_262145.f_31283 /* Tunable: LAUNCHPOSIX_DOMINATOR7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31301 /* Tunable: ENABLE_VEHICLE_JESTER4 */ && iVar1 < Global_262145.f_31284 /* Tunable: LAUNCHPOSIX_JESTER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31302 /* Tunable: ENABLE_VEHICLE_FUTO2 */ && iVar1 < Global_262145.f_31285 /* Tunable: LAUNCHPOSIX_FUTO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31303 /* Tunable: ENABLE_VEHICLE_DOMINATOR8 */ && iVar1 < Global_262145.f_31286 /* Tunable: LAUNCHPOSIX_DOMINATOR8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31304 /* Tunable: ENABLE_VEHICLE_PREVION */ && iVar1 < Global_262145.f_31287 /* Tunable: LAUNCHPOSIX_PREVION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31305 /* Tunable: ENABLE_VEHICLE_GROWLER */ && iVar1 < Global_262145.f_31288 /* Tunable: LAUNCHPOSIX_GROWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31306 /* Tunable: ENABLE_VEHICLE_COMET6 */ && iVar1 < Global_262145.f_31289 /* Tunable: LAUNCHPOSIX_COMET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_32214 /* Tunable: ENABLE_VEHICLE_CHAMPION */ && iVar1 < Global_262145.f_32199 /* Tunable: LAUNCHPOSIX_CHAMPION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_32215 /* Tunable: ENABLE_VEHICLE_BUFFALO4 */ && iVar1 < Global_262145.f_32200 /* Tunable: LAUNCHPOSIX_BUFFALO4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_32216 /* Tunable: ENABLE_VEHICLE_DEITY */ && iVar1 < Global_262145.f_32201 /* Tunable: LAUNCHPOSIX_DEITY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_32217 /* Tunable: ENABLE_VEHICLE_JUBILEE */ && iVar1 < Global_262145.f_32202 /* Tunable: LAUNCHPOSIX_JUBILEE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_32218 /* Tunable: ENABLE_VEHICLE_IGNUS */ && iVar1 < Global_262145.f_32203 /* Tunable: LAUNCHPOSIX_IGNUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_32219 /* Tunable: ENABLE_VEHICLE_CINQUEMILA */ && iVar1 < Global_262145.f_32204 /* Tunable: LAUNCHPOSIX_CINQUEMILA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_32220 /* Tunable: ENABLE_VEHICLE_ASTRON */ && iVar1 < Global_262145.f_32205 /* Tunable: LAUNCHPOSIX_ASTRON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_32221 /* Tunable: ENABLE_VEHICLE_COMET7 */ && iVar1 < Global_262145.f_32206 /* Tunable: LAUNCHPOSIX_COMET7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_32222 /* Tunable: ENABLE_VEHICLE_ZENO */ && iVar1 < Global_262145.f_32207 /* Tunable: LAUNCHPOSIX_ZENO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_32223 /* Tunable: ENABLE_VEHICLE_REEVER */ && iVar1 < Global_262145.f_32208 /* Tunable: LAUNCHPOSIX_REEVER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_32224 /* Tunable: ENABLE_VEHICLE_IWAGEN */ && iVar1 < Global_262145.f_32209 /* Tunable: LAUNCHPOSIX_IWAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_32225 /* Tunable: ENABLE_VEHICLE_GRANGER2 */ && iVar1 < Global_262145.f_32210 /* Tunable: LAUNCHPOSIX_GRANGER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_32226 /* Tunable: ENABLE_VEHICLE_PATRIOT3 */ && iVar1 < Global_262145.f_32211 /* Tunable: LAUNCHPOSIX_PATRIOT3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_32227 /* Tunable: ENABLE_VEHICLE_SHINOBI */ && iVar1 < Global_262145.f_32212 /* Tunable: LAUNCHPOSIX_FAST_MOTORBIKE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_32292 /* Tunable: 991164709 */)
		{
		}
		else if (!Global_262145.f_32228 /* Tunable: ENABLE_VEHICLE_BALLER7 */ && iVar1 < Global_262145.f_32213 /* Tunable: LAUNCHPOSIX_BALLER7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33472 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */ && iVar1 < Global_262145.f_33453 /* Tunable: LAUNCHPOSIX_BRIOSO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33466 /* Tunable: ENABLE_VEHICLE_CORSITA */ && iVar1 < Global_262145.f_33447 /* Tunable: LAUNCHPOSIX_CORSITA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33470 /* Tunable: ENABLE_VEHICLE_DRAUGUR */ && iVar1 < Global_262145.f_33451 /* Tunable: LAUNCHPOSIX_DRAUGUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33464 /* Tunable: ENABLE_VEHICLE_GREENWOOD */ && iVar1 < Global_262145.f_33445 /* Tunable: LAUNCHPOSIX_GREENWOOD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33475 /* Tunable: ENABLE_VEHICLE_KANJOSJ */ && iVar1 < Global_262145.f_33456 /* Tunable: LAUNCHPOSIX_KANJOSJ */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33467 /* Tunable: ENABLE_VEHICLE_LM87 */ && iVar1 < Global_262145.f_33448 /* Tunable: LAUNCHPOSIX_LM87 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33476 /* Tunable: ENABLE_VEHICLE_POSTLUDE */ && iVar1 < Global_262145.f_33457 /* Tunable: LAUNCHPOSIX_POSTLUDE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33478 /* Tunable: ENABLE_VEHICLE_RHINEHART */ && iVar1 < Global_262145.f_33459 /* Tunable: LAUNCHPOSIX_RHINEHART */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33469 /* Tunable: ENABLE_VEHICLE_SM722 */ && iVar1 < Global_262145.f_33450 /* Tunable: LAUNCHPOSIX_SM722 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33477 /* Tunable: ENABLE_VEHICLE_TENF */ && iVar1 < Global_262145.f_33458 /* Tunable: LAUNCHPOSIX_TENF */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33480 /* Tunable: ENABLE_VEHICLE_TENF2 */ && iVar1 < Global_262145.f_33461 /* Tunable: LAUNCHPOSIX_TENF2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33465 /* Tunable: ENABLE_VEHICLE_TORERO2 */ && iVar1 < Global_262145.f_33446 /* Tunable: LAUNCHPOSIX_TORERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33473 /* Tunable: ENABLE_VEHICLE_VIGERO2 */ && iVar1 < Global_262145.f_33454 /* Tunable: LAUNCHPOSIX_VIGERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33479 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */ && iVar1 < Global_262145.f_33460 /* Tunable: LAUNCHPOSIX_WEEVIL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33471 /* Tunable: ENABLE_VEHICLE_RUINER4 */ && iVar1 < Global_262145.f_33452 /* Tunable: LAUNCHPOSIX_RUINER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33481 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */ && iVar1 < Global_262145.f_33462 /* Tunable: LAUNCHPOSIX_MODEL_SENTINEL4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33468 /* Tunable: ENABLE_VEHICLE_CONADA */ && iVar1 < Global_262145.f_33449 /* Tunable: LAUNCHPOSIX_CONADA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33463 /* Tunable: ENABLE_VEHICLE_OMNISEGT */ && iVar1 < Global_262145.f_33444 /* Tunable: LAUNCHPOSIX_OMNISEGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez3"))
	{
		if (!Global_262145.f_34451 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_34435 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brickade2"))
	{
		if (!Global_262145.f_34451 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_34435 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("eudora"))
	{
		if (!Global_262145.f_34460 /* Tunable: ENABLE_VEHICLE_EUDORA */ && iVar1 < Global_262145.f_34443 /* Tunable: LAUNCHPOSIX_EUDORA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("powersurge"))
	{
		if (!Global_262145.f_34454 /* Tunable: ENABLE_VEHICLE_POWERSURGE */ && iVar1 < Global_262145.f_34438 /* Tunable: LAUNCHPOSIX_POWERSURGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("journey2"))
	{
		if (!Global_262145.f_34448 /* Tunable: ENABLE_VEHICLE_JOURNEY2 */ && iVar1 < Global_262145.f_34432 /* Tunable: LAUNCHPOSIX_JOURNEY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surfer3"))
	{
		if (!Global_262145.f_34449 /* Tunable: ENABLE_VEHICLE_SURFER3 */ && iVar1 < Global_262145.f_34433 /* Tunable: LAUNCHPOSIX_SURFER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity3"))
	{
		if (!Global_262145.f_34446 /* Tunable: ENABLE_VEHICLE_ENTITY3 */ && iVar1 < Global_262145.f_34430 /* Tunable: LAUNCHPOSIX_ENTITY3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("panthere"))
	{
		if (!Global_262145.f_34457 /* Tunable: ENABLE_VEHICLE_PANTHERE */ && iVar1 < Global_262145.f_34441 /* Tunable: LAUNCHPOSIX_PANTHERE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boor"))
	{
		if (!Global_262145.f_34461 /* Tunable: ENABLE_VEHICLE_BOOR */ && iVar1 < Global_262145.f_34445 /* Tunable: LAUNCHPOSIX_BOOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon2"))
	{
		if (!Global_262145.f_34458 /* Tunable: ENABLE_VEHICLE_EVERON2 */ && iVar1 < Global_262145.f_34442 /* Tunable: LAUNCHPOSIX_EVERON2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip2"))
	{
		if (!Global_262145.f_34447 /* Tunable: ENABLE_VEHICLE_TULIP2 */ && iVar1 < Global_262145.f_34431 /* Tunable: LAUNCHPOSIX_TULIP2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("r300"))
	{
		if (!Global_262145.f_34450 /* Tunable: ENABLE_VEHICLE_R300 */ && iVar1 < Global_262145.f_34434 /* Tunable: LAUNCHPOSIX_R300 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virtue"))
	{
		if (!Global_262145.f_34459 /* Tunable: ENABLE_VEHICLE_VIRTUE */ && iVar1 < Global_262145.f_34444 /* Tunable: LAUNCHPOSIX_VIRTUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi8"))
	{
		if (!Global_262145.f_34455 /* Tunable: ENABLE_VEHICLE_ISSI8 */ && iVar1 < Global_262145.f_34439 /* Tunable: LAUNCHPOSIX_ISSI8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("broadway"))
	{
		if (!Global_262145.f_34456 /* Tunable: ENABLE_VEHICLE_BROADWAY */ && iVar1 < Global_262145.f_34440 /* Tunable: LAUNCHPOSIX_BROADWAY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tahoma"))
	{
		if (!Global_262145.f_34453 /* Tunable: ENABLE_VEHICLE_TAHOMA */ && iVar1 < Global_262145.f_34437 /* Tunable: LAUNCHPOSIX_TAHOMA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_34452 /* Tunable: ENABLE_VEHICLE_TAXI */ && iVar1 < Global_262145.f_34436 /* Tunable: LAUNCHPOSIX_TAXI */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("exemplar"))
	{
		if (!Global_262145.f_35402 /* Tunable: ENABLE_VEHICLE_EXEMPLAR */ && !Global_262145.f_35403 /* Tunable: ENABLE_VEHICLE_EXEMPLAR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cogcabrio"))
	{
		if (!Global_262145.f_35404 /* Tunable: ENABLE_VEHICLE_COGCABRIO */ && !Global_262145.f_35405 /* Tunable: ENABLE_VEHICLE_COGCABRIO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrust"))
	{
		if (!Global_262145.f_35406 /* Tunable: ENABLE_VEHICLE_THRUST */ && !Global_262145.f_35407 /* Tunable: ENABLE_VEHICLE_THRUST_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vindicator"))
	{
		if (!Global_262145.f_35408 /* Tunable: ENABLE_VEHICLE_VINDICATOR */ && !Global_262145.f_35409 /* Tunable: ENABLE_VEHICLE_VINDICATOR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette3"))
	{
		if (!Global_262145.f_35410 /* Tunable: ENABLE_VEHICLE_COQUETTE3 */ && !Global_262145.f_35411 /* Tunable: ENABLE_VEHICLE_COQUETTE3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brawler"))
	{
		if (!Global_262145.f_35412 /* Tunable: ENABLE_VEHICLE_BRAWLER */ && !Global_262145.f_35413 /* Tunable: ENABLE_VEHICLE_BRAWLER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		if (!Global_262145.f_35414 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI */ && !Global_262145.f_35415 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti2"))
	{
		if (!Global_262145.f_35416 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI2 */ && !Global_262145.f_35417 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog55"))
	{
		if (!Global_262145.f_35418 /* Tunable: ENABLE_VEHICLE_COG55 */ && !Global_262145.f_35419 /* Tunable: ENABLE_VEHICLE_COG55_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog552"))
	{
		if (!Global_262145.f_35420 /* Tunable: ENABLE_VEHICLE_COG552 */ && !Global_262145.f_35421 /* Tunable: ENABLE_VEHICLE_COG552_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("superd"))
	{
		if (!Global_262145.f_35422 /* Tunable: ENABLE_VEHICLE_SUPERD */ && !Global_262145.f_35423 /* Tunable: ENABLE_VEHICLE_SUPERD_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter4"))
	{
		if (!Global_262145.f_35424 /* Tunable: ENABLE_VEHICLE_SCHAFTER4 */ && !Global_262145.f_35425 /* Tunable: ENABLE_VEHICLE_SCHAFTER4_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter6"))
	{
		if (!Global_262145.f_35426 /* Tunable: ENABLE_VEHICLE_SCHAFTER6 */ && !Global_262145.f_35427 /* Tunable: ENABLE_VEHICLE_SCHAFTER6_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alpha"))
	{
		if (!Global_262145.f_35428 /* Tunable: ENABLE_VEHICLE_ALPHA */ && !Global_262145.f_35429 /* Tunable: ENABLE_VEHICLE_ALPHA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer2"))
	{
		if (!Global_262145.f_35430 /* Tunable: ENABLE_VEHICLE_FELTZER2 */ && !Global_262145.f_35431 /* Tunable: ENABLE_VEHICLE_FELTZER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro"))
	{
		if (!Global_262145.f_35432 /* Tunable: ENABLE_VEHICLE_MASSACRO */ && !Global_262145.f_35433 /* Tunable: ENABLE_VEHICLE_MASSACRO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt"))
	{
		if (!Global_262145.f_35434 /* Tunable: ENABLE_VEHICLE_RAPIDGT */ && !Global_262145.f_35435 /* Tunable: ENABLE_VEHICLE_RAPIDGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt2"))
	{
		if (!Global_262145.f_35436 /* Tunable: ENABLE_VEHICLE_RAPIDGT2 */ && !Global_262145.f_35437 /* Tunable: ENABLE_VEHICLE_RAPIDGT2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_35438 /* Tunable: ENABLE_VEHICLE_SEVEN70 */ && !Global_262145.f_35439 /* Tunable: ENABLE_VEHICLE_SEVEN70_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester"))
	{
		if (!Global_262145.f_35440 /* Tunable: ENABLE_VEHICLE_JESTER */ && !Global_262145.f_35441 /* Tunable: ENABLE_VEHICLE_JESTER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		if (!Global_262145.f_35442 /* Tunable: ENABLE_VEHICLE_BESTIAGTS */ && !Global_262145.f_35443 /* Tunable: ENABLE_VEHICLE_BESTIAGTS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("carbonizzare"))
	{
		if (!Global_262145.f_35444 /* Tunable: ENABLE_VEHICLE_CARBONIZZARE */ && !Global_262145.f_35445 /* Tunable: ENABLE_VEHICLE_CARBONIZZARE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette"))
	{
		if (!Global_262145.f_35446 /* Tunable: ENABLE_VEHICLE_COQUETTE */ && !Global_262145.f_35447 /* Tunable: ENABLE_VEHICLE_COQUETTE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furoregt"))
	{
		if (!Global_262145.f_35448 /* Tunable: ENABLE_VEHICLE_FUROREGT */ && !Global_262145.f_35449 /* Tunable: ENABLE_VEHICLE_FUROREGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef"))
	{
		if (!Global_262145.f_35450 /* Tunable: ENABLE_VEHICLE_NINEF */ && !Global_262145.f_35451 /* Tunable: ENABLE_VEHICLE_NINEF_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef2"))
	{
		if (!Global_262145.f_35452 /* Tunable: ENABLE_VEHICLE_NINEF2 */ && !Global_262145.f_35453 /* Tunable: ENABLE_VEHICLE_NINEF2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		if (!Global_262145.f_35454 /* Tunable: ENABLE_VEHICLE_VERLIERER2 */ && !Global_262145.f_35455 /* Tunable: ENABLE_VEHICLE_VERLIERER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype"))
	{
		if (!Global_262145.f_35456 /* Tunable: ENABLE_VEHICLE_BTYPE */ && !Global_262145.f_35457 /* Tunable: ENABLE_VEHICLE_BTYPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		if (!Global_262145.f_35458 /* Tunable: ENABLE_VEHICLE_FELTZER3 */ && !Global_262145.f_35459 /* Tunable: ENABLE_VEHICLE_FELTZER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingergt"))
	{
		if (!Global_262145.f_35460 /* Tunable: ENABLE_VEHICLE_STINGERGT */ && !Global_262145.f_35461 /* Tunable: ENABLE_VEHICLE_STINGERGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stinger"))
	{
		if (!Global_262145.f_35462 /* Tunable: ENABLE_VEHICLE_STINGER */ && !Global_262145.f_35463 /* Tunable: ENABLE_VEHICLE_STINGER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette2"))
	{
		if (!Global_262145.f_35464 /* Tunable: ENABLE_VEHICLE_COQUETTE2 */ && !Global_262145.f_35465 /* Tunable: ENABLE_VEHICLE_COQUETTE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb700"))
	{
		if (!Global_262145.f_35466 /* Tunable: ENABLE_VEHICLE_JB700 */ && !Global_262145.f_35467 /* Tunable: ENABLE_VEHICLE_JB700_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mamba"))
	{
		if (!Global_262145.f_35468 /* Tunable: ENABLE_VEHICLE_MAMBA */ && !Global_262145.f_35469 /* Tunable: ENABLE_VEHICLE_MAMBA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monroe"))
	{
		if (!Global_262145.f_35470 /* Tunable: ENABLE_VEHICLE_MONROE */ && !Global_262145.f_35471 /* Tunable: ENABLE_VEHICLE_MONROE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype3"))
	{
		if (!Global_262145.f_35472 /* Tunable: ENABLE_VEHICLE_BTYPE3 */ && !Global_262145.f_35473 /* Tunable: ENABLE_VEHICLE_BTYPE3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ztype"))
	{
		if (!Global_262145.f_35474 /* Tunable: ENABLE_VEHICLE_ZTYPE */ && !Global_262145.f_35475 /* Tunable: ENABLE_VEHICLE_ZTYPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("voltic"))
	{
		if (!Global_262145.f_35476 /* Tunable: ENABLE_VEHICLE_VOLTIC */ && !Global_262145.f_35477 /* Tunable: ENABLE_VEHICLE_VOLTIC_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_35478 /* Tunable: ENABLE_VEHICLE_SHEAVA */ && !Global_262145.f_35479 /* Tunable: ENABLE_VEHICLE_SHEAVA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah"))
	{
		if (!Global_262145.f_35480 /* Tunable: ENABLE_VEHICLE_CHEETAH */ && !Global_262145.f_35481 /* Tunable: ENABLE_VEHICLE_CHEETAH_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entityxf"))
	{
		if (!Global_262145.f_35482 /* Tunable: ENABLE_VEHICLE_ENTITYXF */ && !Global_262145.f_35483 /* Tunable: ENABLE_VEHICLE_ENTITYXF_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus"))
	{
		if (!Global_262145.f_35484 /* Tunable: ENABLE_VEHICLE_INFERNUS */ && !Global_262145.f_35485 /* Tunable: ENABLE_VEHICLE_INFERNUS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vacca"))
	{
		if (!Global_262145.f_35486 /* Tunable: ENABLE_VEHICLE_VACCA */ && !Global_262145.f_35487 /* Tunable: ENABLE_VEHICLE_VACCA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bullet"))
	{
		if (!Global_262145.f_35488 /* Tunable: ENABLE_VEHICLE_BULLET */ && !Global_262145.f_35489 /* Tunable: ENABLE_VEHICLE_BULLET_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fmj"))
	{
		if (!Global_262145.f_35490 /* Tunable: ENABLE_VEHICLE_FMJ */ && !Global_262145.f_35491 /* Tunable: ENABLE_VEHICLE_FMJ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller2"))
	{
		if (!Global_262145.f_35492 /* Tunable: ENABLE_VEHICLE_BALLER2 */ && !Global_262145.f_35493 /* Tunable: ENABLE_VEHICLE_BALLER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller3"))
	{
		if (!Global_262145.f_35494 /* Tunable: ENABLE_VEHICLE_BALLER3 */ && !Global_262145.f_35495 /* Tunable: ENABLE_VEHICLE_BALLER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller5"))
	{
		if (!Global_262145.f_35496 /* Tunable: ENABLE_VEHICLE_BALLER5 */ && !Global_262145.f_35497 /* Tunable: ENABLE_VEHICLE_BALLER5_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller4"))
	{
		if (!Global_262145.f_35498 /* Tunable: ENABLE_VEHICLE_BALLER4 */ && !Global_262145.f_35499 /* Tunable: ENABLE_VEHICLE_BALLER4_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller6"))
	{
		if (!Global_262145.f_35500 /* Tunable: ENABLE_VEHICLE_BALLER6 */ && !Global_262145.f_35501 /* Tunable: ENABLE_VEHICLE_BALLER6_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls"))
	{
		if (!Global_262145.f_35502 /* Tunable: ENABLE_VEHICLE_XLS */ && !Global_262145.f_35503 /* Tunable: ENABLE_VEHICLE_XLS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls2"))
	{
		if (!Global_262145.f_35504 /* Tunable: ENABLE_VEHICLE_XLS2 */ && !Global_262145.f_35505 /* Tunable: ENABLE_VEHICLE_XLS2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("prairie"))
	{
		if (!Global_262145.f_35506 /* Tunable: ENABLE_VEHICLE_PRAIRIE */ && !Global_262145.f_35507 /* Tunable: ENABLE_VEHICLE_PRAIRIE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi2"))
	{
		if (!Global_262145.f_35508 /* Tunable: ENABLE_VEHICLE_ISSI2 */ && !Global_262145.f_35509 /* Tunable: ENABLE_VEHICLE_ISSI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dilettante"))
	{
		if (!Global_262145.f_35510 /* Tunable: ENABLE_VEHICLE_DILETTANTE */ && !Global_262145.f_35511 /* Tunable: ENABLE_VEHICLE_DILETTANTE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon"))
	{
		if (!Global_262145.f_35512 /* Tunable: ENABLE_VEHICLE_FELON */ && !Global_262145.f_35513 /* Tunable: ENABLE_VEHICLE_FELON_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon2"))
	{
		if (!Global_262145.f_35514 /* Tunable: ENABLE_VEHICLE_FELON2 */ && !Global_262145.f_35515 /* Tunable: ENABLE_VEHICLE_FELON2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("f620"))
	{
		if (!Global_262145.f_35516 /* Tunable: ENABLE_VEHICLE_F620 */ && !Global_262145.f_35517 /* Tunable: ENABLE_VEHICLE_F620_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jackal"))
	{
		if (!Global_262145.f_35518 /* Tunable: ENABLE_VEHICLE_JACKAL */ && !Global_262145.f_35519 /* Tunable: ENABLE_VEHICLE_JACKAL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle2"))
	{
		if (!Global_262145.f_35520 /* Tunable: ENABLE_VEHICLE_ORACLE2 */ && !Global_262145.f_35521 /* Tunable: ENABLE_VEHICLE_ORACLE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle"))
	{
		if (!Global_262145.f_35522 /* Tunable: ENABLE_VEHICLE_ORACLE */ && !Global_262145.f_35523 /* Tunable: ENABLE_VEHICLE_ORACLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel2"))
	{
		if (!Global_262145.f_35524 /* Tunable: ENABLE_VEHICLE_SENTINEL2 */ && !Global_262145.f_35525 /* Tunable: ENABLE_VEHICLE_SENTINEL2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion"))
	{
		if (!Global_262145.f_35526 /* Tunable: ENABLE_VEHICLE_ZION */ && !Global_262145.f_35527 /* Tunable: ENABLE_VEHICLE_ZION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion2"))
	{
		if (!Global_262145.f_35528 /* Tunable: ENABLE_VEHICLE_ZION2 */ && !Global_262145.f_35529 /* Tunable: ENABLE_VEHICLE_ZION2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akuma"))
	{
		if (!Global_262145.f_35530 /* Tunable: ENABLE_VEHICLE_AKUMA */ && !Global_262145.f_35531 /* Tunable: ENABLE_VEHICLE_AKUMA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("double"))
	{
		if (!Global_262145.f_35532 /* Tunable: ENABLE_VEHICLE_DOUBLE */ && !Global_262145.f_35533 /* Tunable: ENABLE_VEHICLE_DOUBLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("enduro"))
	{
		if (!Global_262145.f_35534 /* Tunable: ENABLE_VEHICLE_ENDURO */ && !Global_262145.f_35535 /* Tunable: ENABLE_VEHICLE_ENDURO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hexer"))
	{
		if (!Global_262145.f_35536 /* Tunable: ENABLE_VEHICLE_HEXER */ && !Global_262145.f_35537 /* Tunable: ENABLE_VEHICLE_HEXER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("innovation"))
	{
		if (!Global_262145.f_35538 /* Tunable: ENABLE_VEHICLE_INNOVATION */ && !Global_262145.f_35539 /* Tunable: ENABLE_VEHICLE_INNOVATION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez"))
	{
		if (!Global_262145.f_35540 /* Tunable: ENABLE_VEHICLE_SANCHEZ */ && !Global_262145.f_35541 /* Tunable: ENABLE_VEHICLE_SANCHEZ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez2"))
	{
		if (!Global_262145.f_35542 /* Tunable: ENABLE_VEHICLE_SANCHEZ2 */ && !Global_262145.f_35543 /* Tunable: ENABLE_VEHICLE_SANCHEZ2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bati2"))
	{
		if (!Global_262145.f_35544 /* Tunable: ENABLE_VEHICLE_BATI2 */ && !Global_262145.f_35545 /* Tunable: ENABLE_VEHICLE_BATI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio2"))
	{
		if (!Global_262145.f_35546 /* Tunable: ENABLE_VEHICLE_FAGGIO2 */ && !Global_262145.f_35547 /* Tunable: ENABLE_VEHICLE_FAGGIO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruffian"))
	{
		if (!Global_262145.f_35548 /* Tunable: ENABLE_VEHICLE_RUFFIAN */ && !Global_262145.f_35549 /* Tunable: ENABLE_VEHICLE_RUFFIAN_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nemesis"))
	{
		if (!Global_262145.f_35550 /* Tunable: ENABLE_VEHICLE_NEMESIS */ && !Global_262145.f_35551 /* Tunable: ENABLE_VEHICLE_NEMESIS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		if (!Global_262145.f_35552 /* Tunable: ENABLE_VEHICLE_HAKUCHOU */ && !Global_262145.f_35553 /* Tunable: ENABLE_VEHICLE_HAKUCHOU_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pcj"))
	{
		if (!Global_262145.f_35554 /* Tunable: ENABLE_VEHICLE_PCJ */ && !Global_262145.f_35555 /* Tunable: ENABLE_VEHICLE_PCJ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vader"))
	{
		if (!Global_262145.f_35556 /* Tunable: ENABLE_VEHICLE_VADER */ && !Global_262145.f_35557 /* Tunable: ENABLE_VEHICLE_VADER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sovereign"))
	{
		if (!Global_262145.f_35558 /* Tunable: ENABLE_VEHICLE_SOVEREIGN */ && !Global_262145.f_35559 /* Tunable: ENABLE_VEHICLE_SOVEREIGN_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet"))
	{
		if (!Global_262145.f_35560 /* Tunable: ENABLE_VEHICLE_GAUNTLET */ && !Global_262145.f_35561 /* Tunable: ENABLE_VEHICLE_GAUNTLET_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratloader"))
	{
		if (!Global_262145.f_35562 /* Tunable: ENABLE_VEHICLE_RATLOADER */ && !Global_262145.f_35563 /* Tunable: ENABLE_VEHICLE_RATLOADER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("picador"))
	{
		if (!Global_262145.f_35564 /* Tunable: ENABLE_VEHICLE_PICADOR */ && !Global_262145.f_35565 /* Tunable: ENABLE_VEHICLE_PICADOR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero"))
	{
		if (!Global_262145.f_35566 /* Tunable: ENABLE_VEHICLE_VIGERO */ && !Global_262145.f_35567 /* Tunable: ENABLE_VEHICLE_VIGERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner"))
	{
		if (!Global_262145.f_35568 /* Tunable: ENABLE_VEHICLE_RUINER */ && !Global_262145.f_35569 /* Tunable: ENABLE_VEHICLE_RUINER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa"))
	{
		if (!Global_262145.f_35570 /* Tunable: ENABLE_VEHICLE_TAMPA */ && !Global_262145.f_35571 /* Tunable: ENABLE_VEHICLE_TAMPA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blade"))
	{
		if (!Global_262145.f_35572 /* Tunable: ENABLE_VEHICLE_BLADE */ && !Global_262145.f_35573 /* Tunable: ENABLE_VEHICLE_BLADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bifta"))
	{
		if (!Global_262145.f_35574 /* Tunable: ENABLE_VEHICLE_BIFTA */ && !Global_262145.f_35575 /* Tunable: ENABLE_VEHICLE_BIFTA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune"))
	{
		if (!Global_262145.f_35576 /* Tunable: ENABLE_VEHICLE_DUNE */ && !Global_262145.f_35577 /* Tunable: ENABLE_VEHICLE_DUNE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bfinjection"))
	{
		if (!Global_262145.f_35578 /* Tunable: ENABLE_VEHICLE_BFINJECTION */ && !Global_262145.f_35579 /* Tunable: ENABLE_VEHICLE_BFINJECTION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bodhi2"))
	{
		if (!Global_262145.f_35580 /* Tunable: ENABLE_VEHICLE_BODHI2 */ && !Global_262145.f_35581 /* Tunable: ENABLE_VEHICLE_BODHI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kalahari"))
	{
		if (!Global_262145.f_35582 /* Tunable: ENABLE_VEHICLE_KALAHARI */ && !Global_262145.f_35583 /* Tunable: ENABLE_VEHICLE_KALAHARI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rancherxl"))
	{
		if (!Global_262145.f_35584 /* Tunable: ENABLE_VEHICLE_RANCHERXL */ && !Global_262145.f_35585 /* Tunable: ENABLE_VEHICLE_RANCHERXL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel2"))
	{
		if (!Global_262145.f_35586 /* Tunable: ENABLE_VEHICLE_REBEL2 */ && !Global_262145.f_35587 /* Tunable: ENABLE_VEHICLE_REBEL2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel"))
	{
		if (!Global_262145.f_35588 /* Tunable: ENABLE_VEHICLE_REBEL */ && !Global_262145.f_35589 /* Tunable: ENABLE_VEHICLE_REBEL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer"))
	{
		if (!Global_262145.f_35590 /* Tunable: ENABLE_VEHICLE_BLAZER */ && !Global_262145.f_35591 /* Tunable: ENABLE_VEHICLE_BLAZER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer3"))
	{
		if (!Global_262145.f_35592 /* Tunable: ENABLE_VEHICLE_BLAZER3 */ && !Global_262145.f_35593 /* Tunable: ENABLE_VEHICLE_BLAZER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sandking2"))
	{
		if (!Global_262145.f_35594 /* Tunable: ENABLE_VEHICLE_SANDKING2 */ && !Global_262145.f_35595 /* Tunable: ENABLE_VEHICLE_SANDKING2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("washington"))
	{
		if (!Global_262145.f_35596 /* Tunable: ENABLE_VEHICLE_WASHINGTON */ && !Global_262145.f_35597 /* Tunable: ENABLE_VEHICLE_WASHINGTON_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter2"))
	{
		if (!Global_262145.f_35598 /* Tunable: ENABLE_VEHICLE_SCHAFTER2 */ && !Global_262145.f_35599 /* Tunable: ENABLE_VEHICLE_SCHAFTER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("romero"))
	{
		if (!Global_262145.f_35600 /* Tunable: ENABLE_VEHICLE_ROMERO */ && !Global_262145.f_35601 /* Tunable: ENABLE_VEHICLE_ROMERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fugitive"))
	{
		if (!Global_262145.f_35602 /* Tunable: ENABLE_VEHICLE_FUGITIVE */ && !Global_262145.f_35603 /* Tunable: ENABLE_VEHICLE_FUGITIVE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surge"))
	{
		if (!Global_262145.f_35604 /* Tunable: ENABLE_VEHICLE_SURGE */ && !Global_262145.f_35605 /* Tunable: ENABLE_VEHICLE_SURGE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asea"))
	{
		if (!Global_262145.f_35606 /* Tunable: ENABLE_VEHICLE_ASEA */ && !Global_262145.f_35607 /* Tunable: ENABLE_VEHICLE_ASEA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("premier"))
	{
		if (!Global_262145.f_35608 /* Tunable: ENABLE_VEHICLE_PREMIER */ && !Global_262145.f_35609 /* Tunable: ENABLE_VEHICLE_PREMIER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("regina"))
	{
		if (!Global_262145.f_35610 /* Tunable: ENABLE_VEHICLE_REGINA */ && !Global_262145.f_35611 /* Tunable: ENABLE_VEHICLE_REGINA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asterope"))
	{
		if (!Global_262145.f_35612 /* Tunable: ENABLE_VEHICLE_ASTEROPE */ && !Global_262145.f_35613 /* Tunable: ENABLE_VEHICLE_ASTEROPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("intruder"))
	{
		if (!Global_262145.f_35614 /* Tunable: ENABLE_VEHICLE_INTRUDER */ && !Global_262145.f_35615 /* Tunable: ENABLE_VEHICLE_INTRUDER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater"))
	{
		if (!Global_262145.f_35616 /* Tunable: ENABLE_VEHICLE_TAILGATER */ && !Global_262145.f_35617 /* Tunable: ENABLE_VEHICLE_TAILGATER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stanier"))
	{
		if (!Global_262145.f_35618 /* Tunable: ENABLE_VEHICLE_STANIER */ && !Global_262145.f_35619 /* Tunable: ENABLE_VEHICLE_STANIER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ingot"))
	{
		if (!Global_262145.f_35620 /* Tunable: ENABLE_VEHICLE_INGOT */ && !Global_262145.f_35621 /* Tunable: ENABLE_VEHICLE_INGOT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener"))
	{
		if (!Global_262145.f_35622 /* Tunable: ENABLE_VEHICLE_WARRENER */ && !Global_262145.f_35623 /* Tunable: ENABLE_VEHICLE_WARRENER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stratum"))
	{
		if (!Global_262145.f_35624 /* Tunable: ENABLE_VEHICLE_STRATUM */ && !Global_262145.f_35625 /* Tunable: ENABLE_VEHICLE_STRATUM_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schwarzer"))
	{
		if (!Global_262145.f_35626 /* Tunable: ENABLE_VEHICLE_SCHWARZER */ && !Global_262145.f_35627 /* Tunable: ENABLE_VEHICLE_SCHWARZER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surano"))
	{
		if (!Global_262145.f_35628 /* Tunable: ENABLE_VEHICLE_SURANO */ && !Global_262145.f_35629 /* Tunable: ENABLE_VEHICLE_SURANO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo"))
	{
		if (!Global_262145.f_35630 /* Tunable: ENABLE_VEHICLE_BUFFALO */ && !Global_262145.f_35631 /* Tunable: ENABLE_VEHICLE_BUFFALO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo2"))
	{
		if (!Global_262145.f_35632 /* Tunable: ENABLE_VEHICLE_BUFFALO2 */ && !Global_262145.f_35633 /* Tunable: ENABLE_VEHICLE_BUFFALO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro2"))
	{
		if (!Global_262145.f_35634 /* Tunable: ENABLE_VEHICLE_MASSACRO2 */ && !Global_262145.f_35635 /* Tunable: ENABLE_VEHICLE_MASSACRO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester2"))
	{
		if (!Global_262145.f_35636 /* Tunable: ENABLE_VEHICLE_JESTER2 */ && !Global_262145.f_35637 /* Tunable: ENABLE_VEHICLE_JESTER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo"))
	{
		if (!Global_262145.f_35638 /* Tunable: ENABLE_VEHICLE_FUTO */ && !Global_262145.f_35639 /* Tunable: ENABLE_VEHICLE_FUTO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra"))
	{
		if (!Global_262145.f_35640 /* Tunable: ENABLE_VEHICLE_PENUMBRA */ && !Global_262145.f_35641 /* Tunable: ENABLE_VEHICLE_PENUMBRA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fusilade"))
	{
		if (!Global_262145.f_35642 /* Tunable: ENABLE_VEHICLE_FUSILADE */ && !Global_262145.f_35643 /* Tunable: ENABLE_VEHICLE_FUSILADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype2"))
	{
		if (!Global_262145.f_35644 /* Tunable: ENABLE_VEHICLE_BTYPE2 */ && !Global_262145.f_35645 /* Tunable: ENABLE_VEHICLE_BTYPE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pigalle"))
	{
		if (!Global_262145.f_35646 /* Tunable: ENABLE_VEHICLE_PIGALLE */ && !Global_262145.f_35647 /* Tunable: ENABLE_VEHICLE_PIGALLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade"))
	{
		if (!Global_262145.f_35648 /* Tunable: ENABLE_VEHICLE_CAVALCADE */ && !Global_262145.f_35649 /* Tunable: ENABLE_VEHICLE_CAVALCADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade2"))
	{
		if (!Global_262145.f_35650 /* Tunable: ENABLE_VEHICLE_CAVALCADE2 */ && !Global_262145.f_35651 /* Tunable: ENABLE_VEHICLE_CAVALCADE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bjxl"))
	{
		if (!Global_262145.f_35652 /* Tunable: ENABLE_VEHICLE_BJXL */ && !Global_262145.f_35653 /* Tunable: ENABLE_VEHICLE_BJXL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("serrano"))
	{
		if (!Global_262145.f_35654 /* Tunable: ENABLE_VEHICLE_SERRANO */ && !Global_262145.f_35655 /* Tunable: ENABLE_VEHICLE_SERRANO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gresley"))
	{
		if (!Global_262145.f_35656 /* Tunable: ENABLE_VEHICLE_GRESLEY */ && !Global_262145.f_35657 /* Tunable: ENABLE_VEHICLE_GRESLEY_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole"))
	{
		if (!Global_262145.f_35658 /* Tunable: ENABLE_VEHICLE_SEMINOLE */ && !Global_262145.f_35659 /* Tunable: ENABLE_VEHICLE_SEMINOLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger"))
	{
		if (!Global_262145.f_35660 /* Tunable: ENABLE_VEHICLE_GRANGER */ && !Global_262145.f_35661 /* Tunable: ENABLE_VEHICLE_GRANGER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker"))
	{
		if (!Global_262145.f_35662 /* Tunable: ENABLE_VEHICLE_LANDSTALKER */ && !Global_262145.f_35663 /* Tunable: ENABLE_VEHICLE_LANDSTALKER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("habanero"))
	{
		if (!Global_262145.f_35664 /* Tunable: ENABLE_VEHICLE_HABANERO */ && !Global_262145.f_35665 /* Tunable: ENABLE_VEHICLE_HABANERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fq2"))
	{
		if (!Global_262145.f_35666 /* Tunable: ENABLE_VEHICLE_FQ2 */ && !Global_262145.f_35667 /* Tunable: ENABLE_VEHICLE_FQ2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller"))
	{
		if (!Global_262145.f_35668 /* Tunable: ENABLE_VEHICLE_BALLER */ && !Global_262145.f_35669 /* Tunable: ENABLE_VEHICLE_BALLER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot"))
	{
		if (!Global_262145.f_35670 /* Tunable: ENABLE_VEHICLE_PATRIOT */ && !Global_262145.f_35671 /* Tunable: ENABLE_VEHICLE_PATRIOT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rocoto"))
	{
		if (!Global_262145.f_35672 /* Tunable: ENABLE_VEHICLE_ROCOTO */ && !Global_262145.f_35673 /* Tunable: ENABLE_VEHICLE_ROCOTO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("radi"))
	{
		if (!Global_262145.f_35674 /* Tunable: ENABLE_VEHICLE_RADI */ && !Global_262145.f_35675 /* Tunable: ENABLE_VEHICLE_RADI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mesa3"))
	{
		if (!Global_262145.f_35676 /* Tunable: ENABLE_VEHICLE_MESA3 */ && !Global_262145.f_35677 /* Tunable: ENABLE_VEHICLE_MESA3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monster"))
	{
		if (!Global_262145.f_35678 /* Tunable: ENABLE_VEHICLE_MONSTER */ && !Global_262145.f_35679 /* Tunable: ENABLE_VEHICLE_MONSTER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet6"))
	{
		if (!Global_262145.f_35708 /* Tunable: ENABLE_VEHICLE_GAUNTLET6 */ && iVar1 < Global_262145.f_35695 /* Tunable: LAUNCHPOSIX_GAUNTLET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada2"))
	{
		if (!Global_262145.f_35707 /* Tunable: ENABLE_VEHICLE_CONADA2 */ && iVar1 < Global_262145.f_35694 /* Tunable: LAUNCHPOSIX_CONADA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brigham"))
	{
		if (!Global_262145.f_35709 /* Tunable: ENABLE_VEHICLE_BRIGHAM */ && iVar1 < Global_262145.f_35696 /* Tunable: LAUNCHPOSIX_BRIGHAM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique2"))
	{
		if (!Global_262145.f_35700 /* Tunable: ENABLE_VEHICLE_CLIQUE2 */ && iVar1 < Global_262145.f_35687 /* Tunable: LAUNCHPOSIX_CLIQUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("l35"))
	{
		if (!Global_262145.f_35697 /* Tunable: ENABLE_VEHICLE_L35 */ && iVar1 < Global_262145.f_35684 /* Tunable: LAUNCHPOSIX_L35 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == func_30(1))
	{
		iVar0 = 1;
	}
	else if (iParam0 == joaat("ratel"))
	{
		if (!Global_262145.f_35698 /* Tunable: ENABLE_VEHICLE_RATEL */ && iVar1 < Global_262145.f_35685 /* Tunable: LAUNCHPOSIX_RATEL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingertt"))
	{
		if (!Global_262145.f_35701 /* Tunable: ENABLE_VEHICLE_STINGERTT */ && iVar1 < Global_262145.f_35688 /* Tunable: LAUNCHPOSIX_STINGERTT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo5"))
	{
		if (!Global_262145.f_35704 /* Tunable: ENABLE_VEHICLE_BUFFALO5 */ && iVar1 < Global_262145.f_35691 /* Tunable: LAUNCHPOSIX_BUFFALO5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streamer216"))
	{
		if (!Global_262145.f_35702 /* Tunable: ENABLE_VEHICLE_STREAMER216 */ && iVar1 < Global_262145.f_35689 /* Tunable: LAUNCHPOSIX_STREAMER216 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monstrociti"))
	{
		if (!Global_262145.f_35699 /* Tunable: ENABLE_VEHICLE_MONSTROCITI */ && iVar1 < Global_262145.f_35686 /* Tunable: LAUNCHPOSIX_MONSTROCITI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coureur"))
	{
		if (!Global_262145.f_35706 /* Tunable: ENABLE_VEHICLE_COUREUR */ && iVar1 < Global_262145.f_35693 /* Tunable: LAUNCHPOSIX_COUREUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiju"))
	{
		if (!Global_262145.f_35703 /* Tunable: ENABLE_VEHICLE_RAIJU */ && iVar1 < Global_262145.f_35690 /* Tunable: LAUNCHPOSIX_RAIJU */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor"))
	{
		if (!Global_262145.f_35705 /* Tunable: ENABLE_VEHICLE_INDUCTOR */ && iVar1 < Global_262145.f_35692 /* Tunable: LAUNCHPOSIX_INDUCTOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor2"))
	{
		if (!Global_262145.f_35705 /* Tunable: ENABLE_VEHICLE_INDUCTOR */ && iVar1 < Global_262145.f_35692 /* Tunable: LAUNCHPOSIX_INDUCTOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo3"))
	{
		if (!Global_262145.f_36286 /* Tunable: ENABLE_VEHICLE_TURISMO3 */ && iVar1 < Global_262145.f_36266 /* Tunable: LAUNCHPOSIX_TURISMO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("aleutian"))
	{
		if (!Global_262145.f_36291 /* Tunable: ENABLE_VEHICLE_ALEUTIAN */ && iVar1 < Global_262145.f_36271 /* Tunable: LAUNCHPOSIX_ALEUTIAN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fr36"))
	{
		if (!Global_262145.f_36285 /* Tunable: ENABLE_VEHICLE_FR36 */ && iVar1 < Global_262145.f_36265 /* Tunable: LAUNCHPOSIX_FR36 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator9"))
	{
		if (!Global_262145.f_36292 /* Tunable: ENABLE_VEHICLE_DOMINATOR9 */ && iVar1 < Global_262145.f_36272 /* Tunable: LAUNCHPOSIX_DOMINATOR9 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("polgauntlet"))
	{
		if (!Global_262145.f_36297 /* Tunable: ENABLE_VEHICLE_POLGAUNTLET */ && iVar1 < Global_262145.f_36277 /* Tunable: LAUNCHPOSIX_POLGAUNTLET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("police5"))
	{
		if (!Global_262145.f_36288 /* Tunable: ENABLE_VEHICLE_POLICE5 */ && iVar1 < Global_262145.f_36268 /* Tunable: LAUNCHPOSIX_POLICE5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("impaler5"))
	{
		if (!Global_262145.f_36296 /* Tunable: ENABLE_VEHICLE_IMPALER5 */ && iVar1 < Global_262145.f_36276 /* Tunable: LAUNCHPOSIX_IMPALER5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade3"))
	{
		if (!Global_262145.f_36295 /* Tunable: ENABLE_VEHICLE_CAVALCADE3 */ && iVar1 < Global_262145.f_36275 /* Tunable: LAUNCHPOSIX_CAVALCADE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("police4"))
	{
		if (!Global_262145.f_36289 /* Tunable: ENABLE_VEHICLE_POLICE4 */ && iVar1 < Global_262145.f_36269 /* Tunable: LAUNCHPOSIX_POLICE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero3"))
	{
		if (!Global_262145.f_36287 /* Tunable: ENABLE_VEHICLE_VIGERO3 */ && iVar1 < Global_262145.f_36267 /* Tunable: LAUNCHPOSIX_VIGERO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asterope2"))
	{
		if (!Global_262145.f_36293 /* Tunable: ENABLE_VEHICLE_ASTEROPE2 */ && iVar1 < Global_262145.f_36273 /* Tunable: LAUNCHPOSIX_ASTEROPE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller8"))
	{
		if (!Global_262145.f_36301 /* Tunable: ENABLE_VEHICLE_BALLER8 */ && iVar1 < Global_262145.f_36281 /* Tunable: LAUNCHPOSIX_BALLER8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dorado"))
	{
		if (!Global_262145.f_36300 /* Tunable: ENABLE_VEHICLE_DORADO */ && iVar1 < Global_262145.f_36280 /* Tunable: LAUNCHPOSIX_DORADO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("impaler6"))
	{
		if (!Global_262145.f_36299 /* Tunable: ENABLE_VEHICLE_IMPALER6 */ && iVar1 < Global_262145.f_36279 /* Tunable: LAUNCHPOSIX_IMPALER6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("terminus"))
	{
		if (!Global_262145.f_36302 /* Tunable: ENABLE_VEHICLE_TERMINUS */ && iVar1 < Global_262145.f_36282 /* Tunable: LAUNCHPOSIX_TERMINUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vivanite"))
	{
		if (!Global_262145.f_36298 /* Tunable: ENABLE_VEHICLE_VIVANITE */ && iVar1 < Global_262145.f_36278 /* Tunable: LAUNCHPOSIX_VIVANITE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville6"))
	{
		if (!Global_262145.f_36303 /* Tunable: ENABLE_VEHICLE_BOXVILLE6 */ && iVar1 < Global_262145.f_36283 /* Tunable: LAUNCHPOSIX_BOXVILLE6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("benson2"))
	{
		if (!Global_262145.f_36304 /* Tunable: ENABLE_VEHICLE_BENSON2 */ && iVar1 < Global_262145.f_36284 /* Tunable: LAUNCHPOSIX_BENSON2 */)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_30(bool bParam0)//Position - 0x682F
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

bool func_31()//Position - 0x6849
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_32()//Position - 0x685F
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_33()//Position - 0x6875
{
	return 0;
}

int func_34()//Position - 0x687E
{
	return 1;
}

int func_35()//Position - 0x6887
{
	return 1;
}

int func_36()//Position - 0x6890
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_37()//Position - 0x68A9
{
	int iVar0;
	
	if (Global_153246 == 2)
	{
		return 1;
	}
	else if (Global_153246 == 3)
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

int func_38(int iParam0)//Position - 0x6961
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

int func_39(int iParam0)//Position - 0x69A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98733[iVar0]))
		{
			if (Global_98733[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x69E3
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98703[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98703[iVar0], false))
			{
				if (Global_98703[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98703[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x6A5F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[24]))
	{
		if (iParam0 == Global_78038.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78038.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0, int iParam1, bool bParam2)//Position - 0x6B47
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_43(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_114370.f_7232[iVar9], 0))
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

int func_43(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x6BB5
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

var func_44()//Position - 0x6C8C
{
	var uVar0;
	
	func_54(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_53(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_52(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_47(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_46(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_45(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_45(var uParam0, int iParam1)//Position - 0x6CD2
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

void func_46(var uParam0, int iParam1)//Position - 0x6D58
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_47(var uParam0, int iParam1)//Position - 0x6D8B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_51(*uParam0);
	iVar1 = func_49(*uParam0);
	if (iParam1 < 1 || iParam1 > func_48(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_48(int iParam0, int iParam1)//Position - 0x6DDC
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

var func_49(int iParam0)//Position - 0x6E7E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_50(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_50(bool bParam0, int iParam1, int iParam2)//Position - 0x6EA0
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_51(var uParam0)//Position - 0x6EB7
{
	return uParam0 & 15;
}

void func_52(var uParam0, int iParam1)//Position - 0x6EC4
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_53(var uParam0, int iParam1)//Position - 0x6EFE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_54(var uParam0, int iParam1)//Position - 0x6F39
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_55(var uParam0, int iParam1)//Position - 0x6F75
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
			uParam0->f_4 = func_56(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_56(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_56(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_56(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_56(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_56(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_56(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_56(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_56(2, 1);
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
			if (func_37())
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
			if (func_37())
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
		uParam0->f_4 = Global_114370.f_32752.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_80(Global_114370.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114370.f_32752.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_114370.f_32752.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_114370.f_32752.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_80(Global_114370.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114370.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114370.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_80(Global_114370.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114370.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114370.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_56(int iParam0, int iParam1)//Position - 0x8663
{
	struct<82> Var0;
	
	if (func_58(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_57(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_57(int iParam0, var uParam1, int iParam2)//Position - 0x86A5
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
			if (Global_114370.f_9088.f_99.f_58[128] && !Global_114370.f_9088.f_99.f_58[131])
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
					if (Global_114370.f_9088.f_99.f_58[119])
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
			else if (Global_114370.f_9088.f_99.f_58[118])
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

bool func_58(int iParam0)//Position - 0x8901
{
	return iParam0 < 3;
}

void func_59(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x890D
{
	if (func_55(&(Global_78038.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_78038.f_555[0 /*21*/].f_9, 10))
		{
			func_63(iParam0);
			func_62(uParam1, &(Global_114370.f_32752.f_69[Global_78038.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_78038.f_555[0 /*21*/].f_9, 11))
			{
				Global_114370.f_32752.f_1864[Global_78038.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_114370.f_32752.f_1934[Global_78038.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_114370.f_32752.f_1864[Global_78038.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_114370.f_32752.f_1934[Global_78038.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_114370.f_32752.f_1958[Global_78038.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_60(iParam0, 1);
		}
	}
}

void func_60(int iParam0, bool bParam1)//Position - 0x8A06
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_76(iParam0, 0))
		{
			func_61(iParam0, 1, 0);
			func_61(iParam0, 2, 0);
			func_61(iParam0, 3, 0);
			func_61(iParam0, 4, 0);
			func_61(iParam0, 0, 1);
			Global_78038[iParam0] = 1;
		}
	}
	else
	{
		func_61(iParam0, 0, 0);
	}
}

void func_61(int iParam0, int iParam1, bool bParam2)//Position - 0x8A63
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_114370.f_32752[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114370.f_32752[iParam0]), iParam1);
	}
}

void func_62(var uParam0, var uParam1)//Position - 0x8A9E
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

void func_63(int iParam0)//Position - 0x8B6A
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_55(&(Global_78038.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_78038.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_78038.f_139[iParam0]));
			Global_78038.f_139[iParam0] = 0;
		}
		if (BitTest(Global_78038.f_555[0 /*21*/].f_9, 13))
		{
			func_60(iParam0, 0);
		}
	}
}

int func_64(int iParam0)//Position - 0x8BE1
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_98703[iVar0]))
		{
			if (Global_98703[iVar0] == iParam0)
			{
				return Global_98713[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_65(int iParam0, var uParam1)//Position - 0x8C44
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_69(uParam1);
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
		if (uParam1->f_65 == -1 && !func_68(uParam1->f_66))
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
		func_67(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_66(iVar0 + 1));
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

int func_66(int iParam0)//Position - 0x8EEF
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

int func_67(int iParam0, var uParam1, var uParam2)//Position - 0x8F9F
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

int func_68(int iParam0)//Position - 0x9192
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

void func_69(var uParam0)//Position - 0x91B2
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

void func_70(int iParam0)//Position - 0x9261
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_63(iParam0);
	func_60(iParam0, 0);
}

void func_71(bool bParam0)//Position - 0x9288
{
	if (BitTest(uLocal_103, 14))
	{
		if (func_73(PLAYER::PLAYER_PED_ID()) == 0)
		{
			if (bParam0)
			{
				func_72(10);
			}
			else
			{
				func_72(12);
			}
		}
		else if (bParam0)
		{
			func_72(11);
		}
		else
		{
			func_72(13);
		}
		if (iLocal_40 == 0)
		{
			func_94(45, 0);
		}
		else if (iLocal_40 == 1)
		{
			func_94(12, 0);
		}
		else if (iLocal_40 == 2)
		{
			func_94(34, 0);
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
			func_111(0);
		}
		func_81(0, 0);
	}
}

void func_72(int iParam0)//Position - 0x936C
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	MISC::SET_BIT(&(uLocal_99[func_5(iParam0)]), iVar0);
}

int func_73(int iParam0)//Position - 0x938C
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_74(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_74(int iParam0)//Position - 0x93C9
{
	if (func_58(iParam0))
	{
		return func_75(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_75(int iParam0)//Position - 0x93EE
{
	return Global_2139[iParam0 /*29*/];
}

int func_76(int iParam0, int iParam1)//Position - 0x93FD
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_114370.f_32752[iParam0], iParam1);
}

int func_77(int iParam0)//Position - 0x941D
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_78038.f_139[iParam0];
}

int func_78()//Position - 0x9439
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

bool func_79(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x9455
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

bool func_80(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x9473
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_81(int iParam0, bool bParam1)//Position - 0x94BA
{
	Global_114370.f_10052.f_128 = iParam0;
	iLocal_35 = iParam0;
	if (bParam1)
	{
		return;
	}
	func_82();
}

int func_82()//Position - 0x94DE
{
	if (func_83(0))
	{
		return 0;
	}
	if (Global_101431.f_8)
	{
		if (Global_101431.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101431.f_10 > 1)
	{
		return 0;
	}
	Global_101431.f_10++;
	return 1;
}

int func_83(bool bParam0)//Position - 0x9529
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

void func_84(char* sParam0, var uParam1)//Position - 0x9551
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

int func_85()//Position - 0x95A2
{
	func_86();
	switch (Global_114370.f_2366.f_539.f_4321)
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

void func_86()//Position - 0x95E8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_74(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_73(PLAYER::PLAYER_PED_ID());
			if (func_58(iVar0) && (!func_87(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_58(Global_114370.f_2366.f_539.f_4321))
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

bool func_87(int iParam0)//Position - 0x96E5
{
	return Global_43922 == iParam0;
}

int func_88(int iParam0)//Position - 0x96F3
{
	if (func_89(iParam0))
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

int func_89(int iParam0)//Position - 0x971D
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

void func_90(int iParam0, int iParam1)//Position - 0x973E
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_114370.f_8616[iParam0] = 1;
	Global_114370.f_8616.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_91(bool bParam0)//Position - 0x977B
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_92())
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

bool func_92()//Position - 0x97EE
{
	func_86();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_93(char* sParam0)//Position - 0x9807
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_94(int iParam0, int iParam1)//Position - 0x9819
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_114370.f_9088.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_114370.f_9088.f_99.f_58[iParam0] = iParam1;
}

void func_95()//Position - 0x985E
{
	Global_114370.f_10019.f_21++;
	if (iLocal_40 == 0)
	{
		STATS::STAT_SET_INT(joaat("FL_CO_FB4P3"), Global_114370.f_10019.f_21, true);
		if (func_104())
		{
			if (func_261(74) || (func_261(75) && func_103()))
			{
				func_94(46, 1);
			}
		}
	}
	func_96();
	MISC::SET_BIT(&uLocal_103, 10);
}

void func_96()//Position - 0x98CC
{
	if (iLocal_40 == 0)
	{
		func_97(23, 0, 0);
	}
	else if (iLocal_40 == 1)
	{
	}
	else if (iLocal_40 == 2)
	{
	}
}

void func_97(int iParam0, int iParam1, int iParam2)//Position - 0x98F4
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
		func_101((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114370.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114370.f_10197[iParam0 /*12*/].f_6 == 11 || Global_114370.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114370.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_114370.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_114370.f_10197[iParam0 /*12*/].f_11 = iParam2;
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
		func_98();
	}
}

void func_98()//Position - 0x99DA
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
	Global_114106 = 0;
	Global_114107 = 0;
	Global_114108 = 0;
	Global_114109 = 0;
	Global_114110 = 0;
	Global_114111 = 0;
	Global_114112 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114370.f_10197.f_3853;
	Global_114370.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114370.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114370.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114106++;
					fVar1 = (fVar1 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_114107++;
					fVar2 = (fVar2 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_114108++;
					fVar3 = (fVar3 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_114109++;
					fVar4 = (fVar4 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_114110++;
					fVar5 = (fVar5 + (Global_114370.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_114111++;
					fVar6 = (fVar6 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_114112++;
					fVar7 = (fVar7 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_114089 > 0)
	{
		if (Global_114106 == Global_114089)
		{
			fVar1 = 55f;
		}
	}
	if (Global_114090 > 0)
	{
		if (Global_114107 == Global_114090)
		{
			fVar2 = 10f;
		}
	}
	if (Global_114091 > 0)
	{
		if (Global_114108 == Global_114091)
		{
			fVar3 = 0f;
		}
	}
	if (Global_114092 > 0)
	{
		if (Global_114109 == Global_114092)
		{
			fVar4 = 10f;
		}
	}
	if (Global_114093 > 0)
	{
		if (((Global_114110 == Global_114093 || (Global_114093 * 10 / Global_114110) < 41) || Global_114110 > Global_114096) || Global_114110 == Global_114096)
		{
			if (!BitTest(Global_114370.f_10197.f_3856, 14))
			{
				if (Global_114110 == Global_114093)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_114093, 0);
					MISC::SET_BIT(&(Global_114370.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_114094 > 0)
	{
		if (Global_114111 == Global_114094)
		{
			fVar6 = 15f;
		}
	}
	if (Global_114095 > 0)
	{
		if (Global_114112 == Global_114095)
		{
			fVar7 = 5f;
		}
	}
	Global_114370.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_114110 > Global_114096 || Global_114110 == Global_114096)
	{
		iVar9 = Global_114096;
	}
	else
	{
		iVar9 = Global_114110;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_114106, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_114089, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_114107, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_114090, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_114108, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_114091, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_114109, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_114092, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_114096, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_114112 + Global_114111), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_114095 + Global_114094), true);
	Global_114113 = (Global_114106 * 100 / Global_114089);
	Global_114115 = ((Global_114108 + Global_114107) * 100 / (Global_114091 + Global_114090));
	Global_114114 = ((Global_114109 + iVar9) * 100 / (Global_114092 + Global_114096));
	Global_114116 = ((Global_114111 + Global_114112) * 100 / (Global_114094 + Global_114095));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114370.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_114113, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_114114, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_114115, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114370.f_10197.f_3853))
	{
		func_100(13, SYSTEM::FLOOR(Global_114370.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79248)
		{
			if (func_99() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114104 = 0;
				}
				if (!Global_64038)
				{
					func_82();
				}
			}
		}
	}
}

int func_99()//Position - 0x9E98
{
	return Global_32828;
}

int func_100(int iParam0, int iParam1)//Position - 0x9EA3
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

void func_101(int iParam0, bool bParam1, int iParam2)//Position - 0x9EF4
{
	if (iParam2 == -1)
	{
		iParam2 = func_102();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_102()//Position - 0x9F12
{
	return Global_1574925;
}

int func_103()//Position - 0x9F1E
{
	if ((func_261(41) && func_261(3)) && func_261(21))
	{
		return 1;
	}
	return 0;
}

int func_104()//Position - 0x9F49
{
	if (iLocal_40 == 0)
	{
		return func_109();
	}
	else if (iLocal_40 == 1)
	{
		return func_108();
	}
	else if (iLocal_40 == 2)
	{
		return func_105();
	}
	return 0;
}

int func_105()//Position - 0x9F7F
{
	if ((func_261(79) && func_261(83)) && func_106(func_107()))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)//Position - 0x9FAD
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114370.f_9088.f_99.f_58[iParam0];
}

int func_107()//Position - 0x9FDA
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

int func_108()//Position - 0xA00A
{
	if (func_261(68))
	{
		return 1;
	}
	return 0;
}

int func_109()//Position - 0xA020
{
	if (func_110(33, 37) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0, int iParam1)//Position - 0xA038
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (func_261(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_106(func_107()))
	{
		iVar0++;
	}
	return iVar0;
}

void func_111(int iParam0)//Position - 0xA079
{
	Global_79509 = iParam0;
	Global_79510 = iParam0;
}

void func_112()//Position - 0xA08D
{
	struct<6> Var0;
	
	if (iLocal_38 != 0)
	{
		Var0 = { func_131() };
		switch (iLocal_38)
		{
			case 1:
				if (iLocal_40 != 2)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
						{
							func_130("LOCAUD", Local_42.f_7);
							func_129(1);
							iLocal_38 = 2;
						}
						else if (BitTest(uLocal_103, 10) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 0)
						{
							func_130("LOCAUD", Local_42.f_7);
							func_129(1);
							iLocal_38 = 2;
						}
					}
				}
				else
				{
					iLocal_38 = 0;
				}
				if (func_128())
				{
					iLocal_38 = 3;
				}
				break;
			
			case 2:
				if (func_128())
				{
					iLocal_38 = 3;
				}
				if (!BitTest(uLocal_103, 10))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
					{
						func_121(Var0);
					}
				}
				else
				{
					iLocal_38 = 3;
				}
				break;
			
			case 3:
				if (!func_120())
				{
					iLocal_38 = 4;
				}
				break;
			
			case 4:
				if (!func_15(0))
				{
					if (iLocal_40 == 1)
					{
						func_117(Local_42.f_8);
					}
					iLocal_38 = 5;
				}
				break;
			
			case 5:
				if (func_92() == 0)
				{
					if (iLocal_40 == 0)
					{
						if (func_104())
						{
							if ((func_261(74) || func_261(75)) && func_103())
							{
								func_113(1);
								iLocal_38 = 0;
							}
							else
							{
								func_113(0);
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
						if (func_104())
						{
							if (!func_261(3))
							{
								func_90(50, 0);
							}
						}
					}
					iLocal_38 = 0;
				}
				break;
			}
	}
}

void func_113(bool bParam0)//Position - 0xA200
{
	if (bParam0)
	{
		func_114(1527885205, 0, func_92(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_261(3))
	{
		func_114(-224691627, 0, func_92(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_114(-224691627, 0, func_92(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_114(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0xA271
{
	struct<15> Var0;
	int iVar15;
	
	if (func_83(0))
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
	if (Global_114370.f_7691.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_114370.f_7691.f_911 == Var0.f_0)
		{
			Global_114370.f_7691.f_911 = -1;
		}
		Var0.f_3 = func_116(iParam1);
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
		Global_114370.f_7691[Global_114370.f_7691.f_136 /*15*/] = { Var0 };
		Global_114370.f_7691.f_136++;
		func_115(bParam2);
		return 1;
	}
	return 0;
}

void func_115(bool bParam0)//Position - 0xA3C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_58(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_136)
	{
		if (BitTest(Global_114370.f_7691[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_114370.f_7691[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_114370.f_7691[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_114370.f_7691.f_764)
	{
		if (BitTest(Global_114370.f_7691.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_114370.f_7691.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_114370.f_7691.f_919[bParam0] = iVar1;
}

int func_116(int iParam0)//Position - 0xA480
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

void func_117(int iParam0)//Position - 0xA4EA
{
	if (Global_118[iParam0 /*10*/].f_8 != 178)
	{
		func_119(iParam0, 0, 0);
		func_119(iParam0, 1, 0);
		func_119(iParam0, 2, 0);
		func_118(iParam0, 0, 0);
		func_118(iParam0, 1, 0);
		func_118(iParam0, 2, 0);
	}
}

void func_118(int iParam0, int iParam1, int iParam2)//Position - 0xA530
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2139[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114370.f_28053[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_119(int iParam0, int iParam1, int iParam2)//Position - 0xA575
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2139[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114370.f_28053[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_120()//Position - 0xA5BA
{
	if (Global_22166 == 4)
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

void func_121(struct<6> Param0)//Position - 0xA5DF
{
	if (iLocal_40 == 0)
	{
		func_126(Param0);
	}
	else if (iLocal_40 == 1)
	{
		func_122(Param0);
	}
}

void func_122(struct<6> Param0)//Position - 0xA606
{
	if (func_104())
	{
		func_123(Param0, 1);
	}
	else
	{
		func_123(Param0, 0);
	}
}

void func_123(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)//Position - 0xA62A
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
					Var0 = { func_125(bParam6) };
					func_94(46, 1);
					func_130(sLocal_1270, &Var0);
					func_129(1);
				}
				else if (iLocal_40 == 1)
				{
					Var0 = { func_124(bParam6) };
					func_130(sLocal_1270, &Var0);
					func_129(1);
				}
				iLocal_38 = 3;
			}
		}
	}
}

struct<4> func_124(bool bParam0)//Position - 0xA69A
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_92())
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
		switch (func_92())
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

struct<4> func_125(bool bParam0)//Position - 0xA704
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_92())
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
		switch (func_92())
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

void func_126(struct<6> Param0)//Position - 0xA76E
{
	if (func_104())
	{
		if (func_127())
		{
			if (func_92() != 0)
			{
				func_123(Param0, 1);
			}
			else
			{
				iLocal_38 = 3;
			}
		}
		else if (func_92() != 0)
		{
			func_123(Param0, 0);
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

int func_127()//Position - 0xA7BB
{
	if (iLocal_40 == 0)
	{
		if ((func_261(74) || func_261(74)) && func_103())
		{
			return 1;
		}
	}
	else if (iLocal_40 == 1)
	{
		if (func_261(68))
		{
			return 1;
		}
	}
	return 0;
}

int func_128()//Position - 0xA802
{
	if (Global_22215 == 1 || Global_23182 == 1)
	{
		return 1;
	}
	return 0;
}

void func_129(bool bParam0)//Position - 0xA825
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

void func_130(char* sParam0, char* sParam1)//Position - 0xA839
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_22223 = 1;
		StringCopy(&Global_22230, sParam0, 24);
		StringCopy(&Global_22224, sParam1, 24);
	}
}

struct<6> func_131()//Position - 0xA85A
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22166 == 4)
	{
		return Global_21785;
	}
	return Var0;
}

void func_132()//Position - 0xA87E
{
	func_133();
}

void func_133()//Position - 0xA88A
{
	func_139();
	func_134();
}

void func_134()//Position - 0xA89A
{
	if (func_138() == 69)
	{
		if (func_137() && !func_76(25, 0))
		{
			if (Local_112.f_66 != 0)
			{
				func_59(25, &Local_112, Local_108, fLocal_111, 145);
			}
		}
	}
	else if (func_138() == -1)
	{
		if (!BitTest(uLocal_103, 1))
		{
			if (!func_79(PLAYER::PLAYER_PED_ID(), Local_104, 5f, 1))
			{
				if (func_136())
				{
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (func_135())
						{
							func_72(1);
						}
						else if (Global_113425)
						{
							func_72(2);
						}
						else
						{
							func_72(0);
						}
						iLocal_37 = 1;
						fLocal_102 = 0f;
					}
				}
			}
		}
	}
}

bool func_135()//Position - 0xA934
{
	return SCRIPT::IS_THREAD_ACTIVE(Global_114370.f_18106.f_395);
}

int func_136()//Position - 0xA94A
{
	if (func_13())
	{
		if (func_92() == 0)
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

int func_137()//Position - 0xA991
{
	if (Global_101392 == 10 || Global_101392 == 9)
	{
		return 1;
	}
	return 0;
}

int func_138()//Position - 0xA9B5
{
	return Global_79511;
}

void func_139()//Position - 0xA9C1
{
	if (!func_80(Local_108, 0f, 0f, 0f, 0) && func_138() != func_140())
	{
		if (func_79(PLAYER::PLAYER_PED_ID(), Local_108, 60f, 1))
		{
			if (func_88(func_77(25)))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_77(25), true), Local_108) >= 100f)
				{
					func_71(0);
				}
			}
			else if (!func_76(25, 0))
			{
				func_71(1);
			}
		}
	}
}

int func_140()//Position - 0xAA3D
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

void func_141()//Position - 0xAA6D
{
	func_17();
	func_112();
}

void func_142()//Position - 0xAA7D
{
	int iVar0;
	
	func_226();
	func_212();
	func_178();
	func_112();
	func_177();
	if (func_173())
	{
		if (func_143(&iVar0))
		{
			func_269(0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (func_88(iLocal_107))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_107, 2);
			}
			func_81(iVar0, 0);
		}
	}
}

int func_143(var uParam0)//Position - 0xAAE8
{
	char* sVar0;
	
	if (BitTest(uLocal_103, 0))
	{
		func_162();
		if (func_144())
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

int func_144()//Position - 0xAB28
{
	if (func_146(&uLocal_1271, Local_42.f_8, sLocal_1270, Local_42.f_4, 9, 1, 0, 0, 0))
	{
		iLocal_38 = 1;
		func_145(192, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		return 1;
	}
	return 0;
}

void func_145(int iParam0, struct<3> Param1)//Position - 0xAB62
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(Global_33208[iParam0 /*23*/].f_19))
	{
		HUD::SET_BLIP_COORDS(Global_33208[iParam0 /*23*/].f_19, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_33208[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

bool func_146(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0xABB1
{
	func_161(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_22214 = 0;
	Global_22173 = 1;
	Global_22180 = 0;
	Global_22175 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_22171 = 0;
	Global_22218 = 0;
	Global_22220 = 0;
	if (iParam5 == 1)
	{
		Global_22178 = 1;
	}
	else
	{
		Global_22178 = 0;
	}
	Global_2883585 = 0;
	return func_147(sParam3, iParam4, bParam8);
}

int func_147(char* sParam0, int iParam1, bool bParam2)//Position - 0xAC10
{
	Global_22167 = 0;
	if (Global_22166 == 0 || Global_22168 == 2)
	{
		if (Global_22166 != 0)
		{
			if (iParam1 > Global_22168)
			{
				if (Global_22173 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20813.f_1 = 3;
					Global_22166 = 0;
					Global_22167 = 1;
					Global_22219 = 0;
					Global_22162 = 0;
					Global_22163 = 0;
					Global_22177 = 0;
					Global_22176 = 0;
					Global_20812 = 0;
				}
				else
				{
					func_160();
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
		if (func_159(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_158();
		Global_21455 = { Global_21620 };
		Global_22172 = Global_22173;
		Global_22179 = Global_22180;
		Global_2883586 = Global_2883585;
		Global_22181 = { Global_22197 };
		Global_22174 = Global_22175;
		Global_23156 = Global_23157;
		Global_23164 = { Global_23170 };
		Global_23158 = Global_23159;
		Global_23160 = Global_23161;
		Global_23162 = Global_23163;
		Global_21785.f_370 = Global_23155;
		Global_21785.f_368 = Global_23153;
		Global_21785.f_369 = Global_23154;
		Global_22162 = Global_22163;
		if (Global_22172)
		{
			MISC::CLEAR_BIT(&Global_8683, 20);
			MISC::CLEAR_BIT(&Global_8684, 17);
			MISC::CLEAR_BIT(&Global_8685, 0);
			if (bParam2)
			{
				func_157();
				if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20813.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20779 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_156())
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
				if (!Global_79248)
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
			if (func_155())
			{
				return 0;
			}
			else
			{
				switch (Global_20813.f_1)
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
				if (BitTest(Global_8683, 9))
				{
					return 0;
				}
			}
			func_154();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_153();
		func_148();
		return 1;
	}
	if (Global_22166 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22168 || iParam1 == Global_22168)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_160();
	}
	return 0;
}

void func_148()//Position - 0xAEDE
{
	if (!func_149())
	{
		return;
	}
	if (Global_22172)
	{
		MemCopy(&(Global_1970561.f_1), {Global_21785}, 4);
		Global_1970561 = Global_7998;
		Global_1970561.f_6 = Global_22176;
	}
}

int func_149()//Position - 0xAF15
{
	if (!Global_262145.f_29155 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_152())
	{
		return 0;
	}
	if (func_150(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_150(int iParam0)//Position - 0xAF78
{
	return func_151(iParam0, 20);
}

var func_151(int iParam0, int iParam1)//Position - 0xAF88
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_152()//Position - 0xAFA0
{
	return -1;
}

void func_153()//Position - 0xAFA9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21034[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22166 = 1;
}

void func_154()//Position - 0xAFD9
{
	Global_22219 = Global_22218;
	Global_22213 = Global_22214;
	Global_22260 = { Global_22248 };
	Global_22266 = { Global_22254 };
	Global_22221 = Global_22220;
	Global_22290 = { Global_22272 };
	Global_22296 = { Global_22278 };
	Global_22302 = { Global_22284 };
	Global_22308 = { Global_22314 };
	Global_7998 = Global_7999;
	Global_8000 = Global_8001;
	Global_22177 = Global_22178;
	Global_22179 = Global_22180;
	Global_22181 = { Global_22197 };
	Global_22170 = Global_22171;
	Global_23182 = 0;
	Global_22215 = 0;
	Global_22216 = 0;
	MISC::CLEAR_BIT(&Global_8684, 16);
}

int func_155()//Position - 0xB06E
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_156()//Position - 0xB095
{
	int iVar0;
	int iVar1;
	
	if (Global_79248)
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

void func_157()//Position - 0xB12E
{
	if (func_87(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[2 /*29*/])
			{
				Global_20813 = 2;
			}
			else
			{
				Global_20813 = 0;
			}
		}
	}
	else
	{
		Global_20813 = func_92();
		if (Global_20813 == 145)
		{
			Global_20813 = 3;
		}
		if (Global_79248)
		{
			Global_20813 = 3;
		}
		if (Global_20813 > 3)
		{
			Global_20813 = 3;
		}
	}
}

void func_158()//Position - 0xB1D0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21455[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21455[iVar0 /*10*/].f_1), "", 24);
		Global_21455[iVar0 /*10*/].f_7 = 0;
		Global_21455[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21455.f_161 = -99;
	Global_21455.f_162 = { 0f, 0f, 0f };
}

bool func_159(int iParam0, int iParam1)//Position - 0xB226
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

void func_160()//Position - 0xB25E
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20813.f_1 == 9) || Global_20812 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
		Global_20813.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

void func_161(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB2B5
{
	Global_21620 = { *uParam0 };
	Global_7999 = uParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = iParam5;
	if (iParam3 == 0)
	{
		Global_23153 = 1;
		Global_23151 = 0;
	}
	else
	{
		Global_23153 = 0;
		Global_23151 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23154 = 1;
		Global_23152 = 0;
	}
	else
	{
		Global_23154 = 0;
		Global_23152 = 1;
	}
}

void func_162()//Position - 0xB30B
{
	bool bVar0;
	
	bVar0 = func_92();
	func_163(bVar0, func_172(bVar0));
}

void func_163(bool bParam0, var uParam1)//Position - 0xB325
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
			func_170(bParam0);
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
			func_170(bParam0);
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
			func_170(bParam0);
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
		func_165(Local_42.f_8, iVar0, 0);
	}
	func_164(&uLocal_1271, Local_42.f_0, PLAYER::PLAYER_PED_ID(), Local_42.f_1, 0, 1);
	func_164(&uLocal_1271, Local_42.f_2, 0, Local_42.f_3, 0, 1);
	Local_42.f_4 = uParam1;
}

void func_164(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xB49B
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79248)
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

void func_165(int iParam0, int iParam1, bool bParam2)//Position - 0xB536
{
	int iVar0;
	
	Global_9369 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 178)
	{
		func_157();
		if (iParam1 == 4)
		{
			func_119(iParam0, 0, 1);
			func_119(iParam0, 1, 1);
			func_119(iParam0, 2, 1);
			func_118(iParam0, 0, 1);
			func_118(iParam0, 1, 1);
			func_118(iParam0, 2, 1);
		}
		else
		{
			if (func_169(iParam0, iParam1) == 1 && func_168(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_119(iParam0, iVar0, 1);
			func_118(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2738587.f_6931, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2738587.f_6931, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2738587.f_6931, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79248)
			{
				if (iParam1 != 4)
				{
					if (Global_20813 != iParam1)
					{
						Global_9342[iParam1 /*4*/] = { func_167(iParam0) };
						Global_9359[iParam1] = 1;
						Global_9364[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20813)
					{
					}
					else
					{
						Global_9293[1 /*6*/] = { func_167(iParam0) };
						Global_9293[1 /*6*/].f_5 = iParam1;
						func_166();
					}
				}
				else
				{
					Global_9293[1 /*6*/] = { func_167(iParam0) };
					Global_9293[1 /*6*/].f_5 = iParam1;
					func_166();
				}
			}
			else
			{
				Global_9293[1 /*6*/] = { func_167(iParam0) };
				Global_9293[1 /*6*/].f_5 = iParam1;
				func_166();
			}
		}
	}
}

void func_166()//Position - 0xB6B4
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[Global_9369 /*29*/].f_7)), 64);
	if (Global_9388 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_9293[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_9293[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8683, 0);
}

struct<4> func_167(int iParam0)//Position - 0xB72D
{
	return Global_2139[iParam0 /*29*/].f_3;
}

int func_168(int iParam0, int iParam1)//Position - 0xB740
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2139[iParam0 /*29*/].f_24[iParam1];
}

int func_169(int iParam0, int iParam1)//Position - 0xB76A
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2139[iParam0 /*29*/].f_12[iParam1];
}

void func_170(int iParam0)//Position - 0xB794
{
	Local_42.f_6 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	func_171(iParam0);
}

void func_171(int iParam0)//Position - 0xB7B3
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

char* func_172(bool bParam0)//Position - 0xD043
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

int func_173()//Position - 0xD14D
{
	if (BitTest(uLocal_103, 0))
	{
		if (func_88(iLocal_107))
		{
			if (BitTest(uLocal_103, 1))
			{
				if ((func_176(0) || func_176(12)) || func_176(1))
				{
					func_174();
					func_1(46, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_174()//Position - 0xD19B
{
	if (!BitTest(uLocal_103, 6))
	{
		if (func_88(iLocal_107))
		{
			Local_108 = { ENTITY::GET_ENTITY_COORDS(iLocal_107, true) };
			fLocal_111 = ENTITY::GET_ENTITY_HEADING(iLocal_107);
			MISC::SET_BIT(&uLocal_103, 6);
			MISC::SET_BIT(&uLocal_103, 2);
			func_65(iLocal_107, &Local_112);
			func_21(iLocal_107, Local_108, fLocal_111, 25, 1);
			MISC::SET_BIT(&uLocal_103, 14);
			func_175(iLocal_107);
		}
	}
}

int func_175(int iParam0)//Position - 0xD1FB
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

int func_176(int iParam0)//Position - 0xD22B
{
	if (Global_23281 == 0)
	{
		return 0;
	}
	if (Global_118[iParam0 /*10*/].f_8 != 178)
	{
		if (Global_20813.f_1 == 10)
		{
			if (Global_7998 == iParam0)
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

void func_177()//Position - 0xD274
{
	if (BitTest(uLocal_103, 0) && BitTest(uLocal_103, 1))
	{
		if (!BitTest(uLocal_103, 11))
		{
			func_269(1);
		}
	}
	else if (BitTest(uLocal_103, 11))
	{
		func_269(0);
	}
}

void func_178()//Position - 0xD2AA
{
	if ((BitTest(uLocal_103, 0) && Global_43922 == 15) && !func_211())
	{
		if (iLocal_36 == 0)
		{
			if (!BitTest(uLocal_103, 1) && BitTest(uLocal_103, 0))
			{
				if (!func_79(PLAYER::PLAYER_PED_ID(), Local_104, 5f, 1))
				{
					if (BitTest(uLocal_103, 20) || func_136())
					{
						if ((func_254(PLAYER::PLAYER_PED_ID()) && !BitTest(uLocal_99[0], 17)) && !BitTest(uLocal_99[1], 18))
						{
							if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
							{
								func_210(24, 46);
								if (BitTest(uLocal_103, 0))
								{
									if (!func_208() && func_188(ENTITY::GET_ENTITY_COORDS(iLocal_107, true)))
									{
										if (func_185(iLocal_107))
										{
											if (func_184(iLocal_107))
											{
												MISC::SET_BIT(&uLocal_103, 1);
												if (func_73(PLAYER::PLAYER_PED_ID()) == 0)
												{
													func_72(7);
													func_1(7, 1);
												}
												else
												{
													func_72(8);
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
								func_210(7, 8);
								if (BitTest(uLocal_103, 20))
								{
									MISC::CLEAR_BIT(&uLocal_103, 20);
									iLocal_1436 = -1;
								}
								else
								{
									func_72(24);
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
				if (!func_79(PLAYER::PLAYER_PED_ID(), Local_104, 10f, 1))
				{
					MISC::CLEAR_BIT(&uLocal_103, 1);
				}
				else if (!PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!BitTest(uLocal_103, 20))
						{
							func_72(24);
						}
						func_1(24, 1);
						MISC::CLEAR_BIT(&uLocal_103, 1);
						func_180(0);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_88(iLocal_107))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_107)
						{
							func_1(46, 0);
							func_180(0);
							func_179();
						}
					}
				}
			}
		}
	}
}

void func_179()//Position - 0xD518
{
	MISC::CLEAR_BIT(&uLocal_103, 0);
	MISC::CLEAR_BIT(&uLocal_103, 8);
	MISC::CLEAR_BIT(&uLocal_103, 7);
}

void func_180(int iParam0)//Position - 0xD536
{
	if (func_183())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_182())
		{
			func_181(1, 1);
		}
		else
		{
			func_181(0, 0);
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
	if (!func_155())
	{
		Global_20813.f_1 = 3;
	}
}

void func_181(bool bParam0, bool bParam1)//Position - 0xD5C0
{
	if (bParam0)
	{
		if (func_15(0))
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

bool func_182()//Position - 0xD634
{
	return BitTest(Global_1956030, 5);
}

bool func_183()//Position - 0xD642
{
	return BitTest(Global_1956030, 19);
}

int func_184(int iParam0)//Position - 0xD651
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		func_72(39);
		return 0;
	}
	if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, -1, false, false) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, 0, false, false))
	{
		func_72(37);
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
	{
		func_72(36);
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	if (Var0.f_0 >= 10f || Var0.f_0 <= -10f)
	{
		func_72(42);
		return 0;
	}
	else if (Var0.f_1 >= 15f || Var0.f_1 <= -15f)
	{
		func_72(43);
		return 0;
	}
	return 1;
}

int func_185(int iParam0)//Position - 0xD706
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	if (iParam0 != 0)
	{
		if (func_88(iParam0))
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
				func_72(38);
			}
			if (!func_187())
			{
				iVar0++;
			}
			else if (func_13())
			{
				func_72(35);
			}
			if (iVar0 == 2)
			{
				if (func_186(ENTITY::GET_ENTITY_COORDS(iParam0, true)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_186(struct<3> Param0)//Position - 0xD7BB
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
		func_72(37);
	}
	return 0;
}

int func_187()//Position - 0xD817
{
	var uVar0[5];
	int iVar6;
	
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar6 = 0;
	while (iVar6 <= 4)
	{
		if (func_254(uVar0[iVar6]) && uVar0[iVar6] != PLAYER::PLAYER_PED_ID())
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

int func_188(struct<3> Param0)//Position - 0xD880
{
	if (!func_204() && !func_203(Param0))
	{
		if (!func_200())
		{
			if (!func_196(Param0))
			{
				if (!func_194(Param0) && !func_189(Param0))
				{
					return 1;
				}
			}
			else
			{
				func_72(0);
			}
		}
	}
	return 0;
}

int func_189(struct<3> Param0)//Position - 0xD8D9
{
	if (func_192(Param0) || func_190(Param0))
	{
		if (func_13())
		{
			func_72(22);
		}
		return 1;
	}
	return 0;
}

int func_190(struct<3> Param0)//Position - 0xD90C
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, Global_96511[func_191(Param0, 0) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 1;
	}
	return 0;
}

int func_191(struct<3> Param0, bool bParam3)//Position - 0xD941
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
		if (Global_96511[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam3 || BitTest(Global_114370.f_7232.f_17[iVar0], 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_96511[iVar0 /*9*/].f_3, true);
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

int func_192(struct<3> Param0)//Position - 0xD9BB
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, Global_96575[func_193(Param0, 0) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 1;
	}
	return 0;
}

int func_193(struct<3> Param0, bool bParam3)//Position - 0xD9F0
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
		if (Global_96575[iVar0 /*9*/].f_7 != 263)
		{
			if (!bParam3 || BitTest(Global_114370.f_7232.f_11[iVar0], 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_96575[iVar0 /*9*/].f_3, true);
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

int func_194(struct<3> Param0)//Position - 0xDA6A
{
	struct<3> Var0;
	float fVar3;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, 0, 3f, 0f))
	{
		fVar3 = SYSTEM::VDIST2(Param0, Var0);
		if (fVar3 >= 400f || !func_195(Param0, Var0))
		{
			return 0;
		}
		else if (fVar3 < 20f && fVar3 > 6f)
		{
			if (func_13())
			{
				func_72(40);
			}
			return 1;
		}
		else
		{
			if (func_13())
			{
				func_72(41);
			}
			return 1;
		}
	}
	return 0;
}

int func_195(struct<3> Param0, struct<3> Param3)//Position - 0xDAF3
{
	float fVar0;
	
	fVar0 = MISC::ABSF((Param0.f_2 - Param3.f_2));
	if (fVar0 <= 5f)
	{
		return 1;
	}
	return 0;
}

int func_196(struct<3> Param0)//Position - 0xDB16
{
	if (!func_199(1))
	{
		if (!func_199(0))
		{
			if (func_197(Param0, 0))
			{
				return 1;
			}
		}
		else if (func_197(Param0, 1))
		{
			return 1;
		}
	}
	if (!func_199(7))
	{
		if (!func_199(4))
		{
			if (func_197(Param0, 4))
			{
				return 1;
			}
		}
		else
		{
			if (func_197(Param0, 5))
			{
				return 1;
			}
			if (func_197(Param0, 6))
			{
				return 1;
			}
		}
	}
	if (func_197(Param0, 2))
	{
		return 1;
	}
	if (func_197(Param0, 3))
	{
		return 1;
	}
	if (!func_199(8))
	{
		if (func_197(Param0, 8))
		{
			return 1;
		}
	}
	if (!func_199(16))
	{
		if (func_197(Param0, 16))
		{
			return 1;
		}
		if (!func_199(15))
		{
			if (func_197(Param0, 15))
			{
				return 1;
			}
			if (!func_199(14))
			{
				if (func_197(Param0, 14))
				{
					return 1;
				}
				if (!func_199(13))
				{
					if (func_197(Param0, 13))
					{
						return 1;
					}
					if (!func_199(12))
					{
						if (func_197(Param0, 12))
						{
							return 1;
						}
						if (!func_199(11))
						{
							if (func_197(Param0, 11))
							{
								return 1;
							}
							if (!func_199(10))
							{
								if (func_197(Param0, 10))
								{
									return 1;
								}
								if (!func_199(9))
								{
									if (func_197(Param0, 9))
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
	if (!func_199(20))
	{
		if (func_197(Param0, 20))
		{
			return 1;
		}
		if (!func_199(19))
		{
			if (func_197(Param0, 19))
			{
				return 1;
			}
			if (!func_199(18))
			{
				if (func_197(Param0, 18))
				{
					return 1;
				}
				if (!func_199(17))
				{
					if (func_197(Param0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_199(21))
	{
		if (func_197(Param0, 21))
		{
			return 1;
		}
	}
	if (!func_199(22))
	{
		if (func_197(Param0, 22))
		{
			return 1;
		}
	}
	if (!func_199(23))
	{
		if (func_197(Param0, 23))
		{
			return 1;
		}
	}
	if (!func_199(24))
	{
		if (func_197(Param0, 24))
		{
			return 1;
		}
	}
	if (!func_199(26))
	{
		if (!func_199(25))
		{
			if (func_197(Param0, 25))
			{
				return 1;
			}
		}
		else if (func_197(Param0, 26))
		{
			return 1;
		}
	}
	if (!func_199(30))
	{
		if (func_197(Param0, 30))
		{
			return 1;
		}
		if (!func_199(29))
		{
			if (func_197(Param0, 29))
			{
				return 1;
			}
			if (!func_199(28))
			{
				if (func_197(Param0, 28))
				{
					return 1;
				}
				if (!func_199(27))
				{
					if (func_197(Param0, 27))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_199(31))
	{
		if (func_197(Param0, 31))
		{
			return 1;
		}
	}
	if (!func_199(34))
	{
		if (func_197(Param0, 34))
		{
			return 1;
		}
		if (!func_199(33))
		{
			if (func_197(Param0, 33))
			{
				return 1;
			}
			if (!func_199(32))
			{
				if (func_197(Param0, 32))
				{
					return 1;
				}
			}
		}
	}
	if (!func_199(35))
	{
		if (func_197(Param0, 35))
		{
			return 1;
		}
	}
	if (!func_199(36))
	{
		if (func_197(Param0, 36))
		{
			return 1;
		}
	}
	if (!func_199(43))
	{
		if (func_197(Param0, 43))
		{
			return 1;
		}
		if (!func_199(42))
		{
			if (func_197(Param0, 42))
			{
				return 1;
			}
			if (!func_199(38))
			{
				if (func_197(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_199(39))
			{
				if (func_197(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_199(40))
			{
				if (func_197(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_199(41))
			{
				if (func_197(Param0, 42))
				{
					return 1;
				}
			}
			if (!func_199(37))
			{
				if (func_197(Param0, 42))
				{
					return 1;
				}
			}
		}
	}
	if (!func_199(45))
	{
		if (func_197(Param0, 45))
		{
			return 1;
		}
		if (!func_199(44))
		{
			if (func_197(Param0, 44))
			{
				return 1;
			}
		}
	}
	if (!func_199(51))
	{
		if (func_197(Param0, 51))
		{
			return 1;
		}
		if (!func_199(48))
		{
			if (func_197(Param0, 48))
			{
				return 1;
			}
			if (!func_199(49))
			{
				if (func_197(Param0, 49))
				{
					return 1;
				}
			}
			if (!func_199(50))
			{
				if (func_197(Param0, 50))
				{
					return 1;
				}
			}
			if (!func_199(47))
			{
				if (func_197(Param0, 47))
				{
					return 1;
				}
				if (!func_199(46))
				{
					if (func_197(Param0, 46))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!func_199(53))
	{
		if (func_197(Param0, 53))
		{
			return 1;
		}
		if (!func_199(56))
		{
			if (func_197(Param0, 56))
			{
				return 1;
			}
			if (!func_199(55))
			{
				if (func_197(Param0, 55))
				{
					return 1;
				}
			}
			if (!func_199(54))
			{
				if (func_197(Param0, 54))
				{
					return 1;
				}
			}
			if (!func_199(52))
			{
				if (func_197(Param0, 52))
				{
					return 1;
				}
			}
		}
	}
	if (!func_199(57))
	{
		if (func_197(Param0, 57))
		{
			return 1;
		}
	}
	if (!func_199(62))
	{
		if (func_197(Param0, 62))
		{
			return 1;
		}
		if (!func_199(61))
		{
			if (func_197(Param0, 61))
			{
				return 1;
			}
			if (!func_199(60))
			{
				if (func_197(Param0, 60))
				{
					return 1;
				}
				if (!func_199(59))
				{
					if (func_197(Param0, 59))
					{
						return 1;
					}
					if (!func_199(58))
					{
						if (func_197(Param0, 58))
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

int func_197(struct<3> Param0, int iParam3)//Position - 0xE189
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, func_198(iParam3));
	if (fVar0 <= 625f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_198(int iParam0)//Position - 0xE1B1
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

int func_199(int iParam0)//Position - 0xE88E
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_114370.f_18577[iParam0 /*6*/], 3);
}

int func_200()//Position - 0xE8B9
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
				if (func_202(sLocal_1261))
				{
					if (Local_202[iVar0 /*261*/].f_260 == 0)
					{
						if (func_13())
						{
							func_72(21);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 2)
					{
						if (func_13())
						{
							func_72(22);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 1)
					{
						if (func_13())
						{
							func_72(23);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 3)
					{
						if (func_13())
						{
							func_72(20);
						}
					}
					return 1;
				}
				if (func_201(&(Local_202[iVar0 /*261*/][bVar1 /*8*/])))
				{
					if (Local_202[iVar0 /*261*/].f_260 == 0)
					{
						if (func_13())
						{
							func_72(21);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 2)
					{
						if (func_13())
						{
							func_72(22);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 1)
					{
						if (func_13())
						{
							func_72(23);
						}
					}
					else if (Local_202[iVar0 /*261*/].f_260 == 3)
					{
						if (func_13())
						{
							func_72(20);
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

int func_201(var uParam0)//Position - 0xEA11
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_4, uParam0->f_7, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_202(char* sParam0)//Position - 0xEA3C
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

int func_203(struct<3> Param0)//Position - 0xEA88
{
	if (Param0.f_2 < -90f)
	{
		return 1;
	}
	if ((SYSTEM::VDIST2(Param0, -89.377f, 92.6583f, 71.2349f) <= 400f || SYSTEM::VDIST2(Param0, -62.0307f, -1839.8585f, 25.6787f) <= 400f) || SYSTEM::VDIST2(Param0, -234.7648f, -1150.3105f, 21.9224f) <= 400f)
	{
		func_72(21);
		return 1;
	}
	return 0;
}

int func_204()//Position - 0xEB12
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_206(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 1);
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_96410[iVar0 /*10*/].f_3);
	if (fVar1 <= 10000f)
	{
		if (func_13())
		{
			func_205(iVar0);
		}
		return 1;
	}
	return 0;
}

void func_205(int iParam0)//Position - 0xEB64
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		func_72(32);
	}
	else if (iParam0 == 5 || iParam0 == 6)
	{
		func_72(33);
	}
	else if ((iParam0 == 2 || iParam0 == 3) || iParam0 == 4)
	{
		func_72(34);
	}
}

int func_206(struct<3> Param0, int iParam3, int iParam4)//Position - 0xEBC1
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
		if (Global_96410[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_96410[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_207(iVar0) || iParam4 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_96410[iVar0 /*10*/].f_3, true);
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

var func_207(int iParam0)//Position - 0xEC50
{
	return BitTest(Global_114370.f_7232[iParam0], 0);
}

int func_208()//Position - 0xEC65
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1276.1234f, -1723.6653f, 53.6551f) <= 52900f)
	{
		if (func_13())
		{
			func_72(30);
		}
		return 1;
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 111.8564f, -751.7169f, 44.757f) <= 160000f)
	{
		if (func_13())
		{
			func_72(31);
		}
		return 1;
	}
	else if (func_209(200f))
	{
		if (func_13())
		{
			func_72(19);
		}
		return 1;
	}
	return 0;
}

int func_209(float fParam0)//Position - 0xECFD
{
	if (iLocal_40 == 1)
	{
		if (func_79(PLAYER::PLAYER_PED_ID(), Global_97318[1 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	else if (iLocal_40 == 2)
	{
		if (func_79(PLAYER::PLAYER_PED_ID(), Global_97318[0 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	else if (iLocal_40 == 0)
	{
		if (func_79(PLAYER::PLAYER_PED_ID(), Global_97318[3 /*15*/], fParam0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_210(bool bParam0, bool bParam1)//Position - 0xED6F
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

int func_211()//Position - 0xEDBE
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 13);
	}
	return 0;
}

void func_212()//Position - 0xEDE1
{
	int iVar0;
	int iVar1;
	
	if ((Global_43922 == 15 && iLocal_36 == 0) && !func_211())
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!BitTest(uLocal_103, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!func_224())
					{
						if (!BitTest(uLocal_103, 7))
						{
							iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (func_88(iVar0))
							{
								if (!func_223(iVar0))
								{
									if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Getaway_Winched"))
									{
										if (func_216(iVar0) && !func_215())
										{
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
											{
												if (func_73(PLAYER::PLAYER_PED_ID()) == 0)
												{
													func_72(17);
												}
												else
												{
													func_72(18);
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
								else if (func_214(iVar0))
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
							if (!func_88(iLocal_107))
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
					if (func_88(iVar1))
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
			else if (func_88(iLocal_107))
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
						func_210(17, 46);
						func_210(18, 46);
						func_210(14, 46);
						func_179();
					}
					else if (func_224())
					{
						func_20(&iLocal_107);
						func_179();
					}
				}
				else if (!func_213(iLocal_107))
				{
					if (DECORATOR::DECOR_SET_BOOL(iLocal_107, "GetawayVehicleValid", false))
					{
					}
					func_210(17, 46);
					func_210(18, 46);
					func_20(&iLocal_107);
					func_179();
				}
			}
			else
			{
				func_20(&iLocal_107);
				func_179();
			}
		}
	}
}

int func_213(int iParam0)//Position - 0xF0BB
{
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < 300f)
	{
		func_72(6);
		return 0;
	}
	return 1;
}

int func_214(int iParam0)//Position - 0xF0EC
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

int func_215()//Position - 0xF111
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

int func_216(int iParam0)//Position - 0xF174
{
	if ((func_222() && func_218(iParam0)) && func_217(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)//Position - 0xF19E
{
	int iVar0;
	
	iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 >= 3)
	{
		return 1;
	}
	func_72(15);
	return 0;
}

int func_218(int iParam0)//Position - 0xF1BF
{
	if ((func_220(iParam0) && !func_219(iParam0)) && func_213(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xF1EC
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (iVar0 == 0)
	{
		func_72(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		func_72(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		func_72(27);
		return 1;
	}
	if (func_39(iParam0))
	{
		func_72(14);
		return 1;
	}
	return 0;
}

int func_220(int iParam0)//Position - 0xF240
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_221(iVar0))
	{
		if (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f)
		{
			return 1;
		}
	}
	func_72(14);
	return 0;
}

int func_221(int iParam0)//Position - 0xF285
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iLocal_190[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !func_261(33))
			{
				MISC::SET_BIT(&uLocal_103, 3);
			}
			else if (iVar0 == 1 && !func_261(34))
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

int func_222()//Position - 0xF2F1
{
	if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
	{
		func_72(14);
		return 0;
	}
	return 1;
}

int func_223(int iParam0)//Position - 0xF347
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		return 1;
	}
	return 0;
}

int func_224()//Position - 0xF360
{
	int iVar0;
	
	if (func_225(&iVar0))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Getaway_Winched"))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "Getaway_Winched", true);
			func_72(16);
			return 1;
		}
		else if (DECORATOR::DECOR_GET_BOOL(iVar0, "Getaway_Winched"))
		{
			return 0;
		}
	}
	return 0;
}

int func_225(var uParam0)//Position - 0xF3AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_254(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_88(iVar0))
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
						if (func_88(*uParam0))
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

void func_226()//Position - 0xF43B
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

void func_227()//Position - 0xF569
{
	int iVar0;
	bool bVar1;
	
	if (((((((Global_43922 == 15 && iLocal_35 != 3) && BitTest(uLocal_103, 5)) && !func_211()) && Global_79245 == -1) && !func_237()) && !func_87(9)) || func_106(35))
	{
		func_236();
		func_234();
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
							func_233(uLocal_99[0], &iVar0);
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
							func_233(uLocal_99[1], &iVar0);
						}
					}
					MISC::SET_BIT(&uLocal_103, 17);
				}
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
				func_228(bLocal_98, 1);
				break;
		}
	}
	else if (((((((Global_43922 != 15 || Global_43922 != 0) || Global_43922 != 2) || Global_43922 != 4) || Global_43922 != 17) || func_211()) || Global_79245 == -1) || Global_113425)
	{
		bVar1 = false;
		if (func_135())
		{
			bVar1 = true;
		}
		else if (Global_113425)
		{
			bVar1 = 2;
		}
		if (BitTest(uLocal_99[func_5(bVar1)], bVar1))
		{
			func_228(bVar1, 0);
		}
	}
}

void func_228(bool bParam0, bool bParam1)//Position - 0xF6F1
{
	switch (iLocal_37)
	{
		case 1:
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_231(func_92())) && !func_230())
			{
				func_229(func_3(bParam0), 15000);
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

void func_229(char* sParam0, int iParam1)//Position - 0xF7FB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_230()//Position - 0xF812
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_231(bool bParam0)//Position - 0xF82C
{
	int iVar0;
	
	if (func_58(bParam0))
	{
		if (func_232(bParam0))
		{
			iVar0 = 0;
			while (iVar0 < Global_114370.f_7691.f_136)
			{
				if (Global_114370.f_7691[iVar0 /*15*/].f_3 == 5)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_232(bool bParam0)//Position - 0xF876
{
	int iVar0;
	
	if (!func_58(bParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_136)
	{
		if (BitTest(Global_114370.f_7691[iVar0 /*15*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_764)
	{
		if (BitTest(Global_114370.f_7691.f_651[iVar0 /*14*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_7691.f_866)
	{
		if (BitTest(Global_114370.f_7691.f_765[iVar0 /*10*/].f_2, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_233(var uParam0, int iParam1)//Position - 0xF924
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

void func_234()//Position - 0xF990
{
	if (iLocal_35 == 0 || iLocal_35 == 1)
	{
		switch (iLocal_36)
		{
			case 0:
				if (func_235(func_3(3), 0, 0))
				{
					MISC::SET_BIT(&uLocal_103, 15);
					HUD::CLEAR_HELP(true);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_135()) && !Global_113009)
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
							if (func_88(iLocal_107))
							{
								func_72(3);
								func_1(3, 1);
							}
						}
						iLocal_36 = 2;
					}
					else
					{
						if (func_88(iLocal_107))
						{
							func_72(3);
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

bool func_235(char* sParam0, int iParam1, char* sParam2)//Position - 0xFAE5
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_236()//Position - 0xFB03
{
	if ((((!func_106(func_107()) && !func_106(35)) && !func_231(func_92())) && !func_230()) && !func_120())
	{
		if (iLocal_1268 < 2 && (MISC::GET_GAME_TIMER() - iLocal_1267) > 480000)
		{
			if (iLocal_40 != 2)
			{
				func_72(44);
			}
			else
			{
				func_72(45);
			}
			iLocal_1268++;
		}
	}
}

int func_237()//Position - 0xFB7C
{
	if (Global_79509)
	{
		return 1;
	}
	else if (Global_64032 && !Global_64038)
	{
		return 1;
	}
	return 0;
}

void func_238()//Position - 0xFBA6
{
	if (func_78())
	{
		if (BitTest(uLocal_103, 2))
		{
			if (func_88(iLocal_107))
			{
				func_21(iLocal_107, Local_108, fLocal_111, 25, 1);
				func_20(&iLocal_107);
			}
			MISC::CLEAR_BIT(&uLocal_103, 2);
		}
		func_1(46, 1);
		func_269(0);
	}
}

void func_239()//Position - 0xFBED
{
	if (!func_244())
	{
		if (!func_237())
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					func_241();
				}
			}
		}
	}
	else if (iLocal_35 != 3)
	{
		func_240();
	}
}

void func_240()//Position - 0xFC2E
{
	if (iLocal_35 != 4)
	{
		if (iLocal_35 != 2)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_113009)
			{
				MISC::SET_BIT(&uLocal_103, 15);
				HUD::CLEAR_HELP(true);
			}
			if (BitTest(uLocal_103, 0))
			{
				if (func_88(iLocal_107))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_107, false);
				}
				func_20(&iLocal_107);
				func_179();
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
			if (func_88(iLocal_107))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_107, false);
			}
			func_20(&iLocal_107);
			func_179();
		}
		if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
		{
			HUD::CLEAR_ADDITIONAL_TEXT(5, false);
			MISC::CLEAR_BIT(&uLocal_103, 4);
			MISC::CLEAR_BIT(&uLocal_103, 5);
			func_269(0);
			if (func_135())
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

void func_241()//Position - 0xFD07
{
	func_243();
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
				func_242();
				iLocal_37 = 0;
				MISC::CLEAR_BIT(&uLocal_103, 7);
				MISC::CLEAR_BIT(&uLocal_103, 0);
				MISC::CLEAR_BIT(&uLocal_103, 1);
				if (func_2(func_3(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				func_4(0);
				iLocal_35 = Global_114370.f_10052.f_128;
			}
		}
	}
}

void func_242()//Position - 0xFD90
{
	if (!func_106(func_107()))
	{
		if (!BitTest(uLocal_103, 12))
		{
			if (func_104())
			{
				if (iLocal_40 != 2)
				{
					func_72(44);
				}
				else
				{
					func_72(45);
				}
				MISC::SET_BIT(&uLocal_103, 12);
			}
		}
	}
}

void func_243()//Position - 0xFDD1
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

int func_244()//Position - 0xFDF3
{
	if (iLocal_40 != 2)
	{
		if (iLocal_40 == 1 && func_92() == 2)
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
		if (func_245())
		{
			return 0;
		}
	}
	else if (func_106(35))
	{
		return 0;
	}
	else if (func_245())
	{
		return 0;
	}
	return 1;
}

int func_245()//Position - 0xFE65
{
	if (((((Global_43922 == 15 && !func_211()) && Global_79245 == -1) && !func_135()) && !func_209(1112014848)) && !Global_113425)
	{
		return 1;
	}
	return 0;
}

void func_246()//Position - 0xFEB3
{
	if (!BitTest(uLocal_103, 13))
	{
		if (func_247())
		{
			MISC::SET_BIT(&uLocal_103, 13);
		}
	}
	else if (!func_247())
	{
		MISC::CLEAR_BIT(&uLocal_103, 7);
		MISC::CLEAR_BIT(&uLocal_103, 0);
		MISC::CLEAR_BIT(&uLocal_103, 1);
		MISC::CLEAR_BIT(&uLocal_103, 13);
	}
}

int func_247()//Position - 0xFEFB
{
	if (((((func_248(39) || func_248(40)) || func_248(41)) || func_248(42)) || func_248(43)) || func_248(44))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)//Position - 0xFF4D
{
	return func_249(iParam0, 6, 1);
}

int func_249(int iParam0, int iParam1, bool bParam2)//Position - 0xFF5D
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101444.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_99() == 0)
		{
			return BitTest(func_250(func_253(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114370.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_250(int iParam0, int iParam1)//Position - 0xFFBD
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_251(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_251(int iParam0, var uParam1)//Position - 0xFFEC
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_252(uParam1));
}

int func_252(var uParam0)//Position - 0x10003
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_102();
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

int func_253(int iParam0)//Position - 0x10037
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
			return 12725;
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
	return 14626;
}

int func_254(int iParam0)//Position - 0x103DF
{
	if (func_89(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_255(bool bParam0)//Position - 0x103FF
{
	if (bParam0)
	{
		if (func_256())
		{
			return 1;
		}
	}
	if (func_87(14))
	{
		return 1;
	}
	return 0;
}

int func_256()//Position - 0x10425
{
	if (Global_113314)
	{
		return 1;
	}
	if (!func_87(14) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_257(char* sParam0, int iParam1)//Position - 0x10457
{
	int iVar0;
	int iVar1;
	
	if (Global_113009 && iParam1)
	{
		if (func_2(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_114370.f_20413[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_114370.f_20413.f_145 - 2))
			{
				func_260(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_259((Global_114370.f_20413.f_145 - 1));
			Global_114370.f_20413.f_145 = (Global_114370.f_20413.f_145 - 1);
			func_258();
			return;
		}
		iVar0++;
	}
}

void func_258()//Position - 0x10504
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114370.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[0])
			{
				Global_114370.f_20413.f_146[0] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[1])
			{
				Global_114370.f_20413.f_146[1] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[2])
			{
				Global_114370.f_20413.f_146[2] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_259(int iParam0)//Position - 0x1061B
{
	StringCopy(&(Global_114370.f_20413[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_114370.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_114370.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_114370.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_15 = 0;
}

void func_260(int iParam0, int iParam1)//Position - 0x106B3
{
	Global_114370.f_20413[iParam0 /*16*/] = { Global_114370.f_20413[iParam1 /*16*/] };
	Global_114370.f_20413[iParam0 /*16*/].f_4 = { Global_114370.f_20413[iParam1 /*16*/].f_4 };
	Global_114370.f_20413[iParam0 /*16*/].f_8 = Global_114370.f_20413[iParam1 /*16*/].f_8;
	Global_114370.f_20413[iParam0 /*16*/].f_10 = Global_114370.f_20413[iParam1 /*16*/].f_10;
	Global_114370.f_20413[iParam0 /*16*/].f_9 = Global_114370.f_20413[iParam1 /*16*/].f_9;
	Global_114370.f_20413[iParam0 /*16*/].f_11 = Global_114370.f_20413[iParam1 /*16*/].f_11;
	Global_114370.f_20413[iParam0 /*16*/].f_12 = Global_114370.f_20413[iParam1 /*16*/].f_12;
	Global_114370.f_20413[iParam0 /*16*/].f_13 = Global_114370.f_20413[iParam1 /*16*/].f_13;
	Global_114370.f_20413[iParam0 /*16*/].f_14 = Global_114370.f_20413[iParam1 /*16*/].f_14;
	Global_114370.f_20413[iParam0 /*16*/].f_15 = Global_114370.f_20413[iParam1 /*16*/].f_15;
}

int func_261(int iParam0)//Position - 0x107C3
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114370.f_9088.f_330[iParam0 /*6*/];
}

void func_262(int iParam0)//Position - 0x107EF
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
	func_265();
	func_263();
	MISC::SET_BIT(&uLocal_103, 17);
	iLocal_1267 = MISC::GET_GAME_TIMER();
}

void func_263()//Position - 0x108B5
{
	sLocal_51[0] = "AM_H_FBIC1A" /* GXT: This area is unsuitable for the getaway vehicle. Find a more discreet location. */;
	sLocal_51[1] = "AM_H_FBIC1B" /* GXT: The getaway vehicle cannot be placed while meeting a friend. */;
	sLocal_51[2] = "AM_H_FBIC1C" /* GXT: The getaway vehicle cannot be placed while on a taxi job. */;
	sLocal_51[3] = "PRC_WANT";
	sLocal_51[4] = "PRC_DROPOFF";
	sLocal_51[5] = "PRC_INVALVEH";
	sLocal_51[6] = "PRC_HEALTH";
	sLocal_51[7] = func_264(7);
	sLocal_51[8] = func_264(8);
	sLocal_51[9] = "PRC_USEFIRST";
	sLocal_51[10] = func_264(10);
	sLocal_51[11] = func_264(11);
	sLocal_51[13] = func_264(13);
	sLocal_51[12] = func_264(12);
	sLocal_51[14] = "PRC_UNUSE";
	sLocal_51[15] = "PRC_SEATS";
	sLocal_51[16] = "PRC_CBOBVAL";
	sLocal_51[17] = func_264(17);
	sLocal_51[18] = func_264(18);
	sLocal_51[20] = func_264(20);
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

char* func_264(int iParam0)//Position - 0x10A92
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

void func_265()//Position - 0x10C58
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
	Local_202[0 /*261*/][0 /*8*/] = { func_266("DELBE" /* GXT: Del Perro Beach */, -1615.2574f, -952.59436f, 20.01716f, -2160.7058f, -423f, -1.28679f, 327.8f) };
	Local_202[0 /*261*/][1 /*8*/] = { func_266("DELBE" /* GXT: Del Perro Beach */, -1521.7163f, -914.56757f, 20.17247f, -1855.7148f, -1325.784f, -44.79295f, 254.8f) };
	Local_202[0 /*261*/][2 /*8*/] = { func_266("BEACH" /* GXT: Vespucci Beach */, -1162.3699f, -1815.0084f, 15.33822f, -1553.2072f, -1098.6849f, 0.46467f, 253.91f) };
	Local_202[0 /*261*/][3 /*8*/] = { func_266("BEACH" /* GXT: Vespucci Beach */, -1464.2185f, -1136.7828f, 0.32167f, -2241.5664f, -358.88486f, 20.32481f, 282.21f) };
	Local_202[0 /*261*/][4 /*8*/] = { func_266("PBOX" /* GXT: Pillbox Hill */, 156.41087f, -1042.6412f, 22.31273f, 238.63815f, -821.1217f, 35.10069f, 176.96f) };
	Local_202[0 /*261*/][5 /*8*/] = { func_266("CHIL" /* GXT: Vinewood Hills */, 883.1121f, 534.72833f, 115.72503f, 559.7425f, 644.602f, 150.59714f, 301.08f) };
	Local_202[0 /*261*/][6 /*8*/] = { func_266("EAST_V" /* GXT: East Vinewood */, 941.45306f, -329.4256f, 60.77003f, 727.76514f, -200.95193f, 75.59085f, 88.89f) };
	Local_202[0 /*261*/][7 /*8*/] = { func_266("EAST_V" /* GXT: East Vinewood */, 689.1177f, -273.14056f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) };
	Local_202[0 /*261*/][8 /*8*/] = { func_266("MIRR" /* GXT: Mirror Park */, 1048.4985f, -357.0332f, 60.92149f, 1401.5808f, -783.8975f, 75.7477f, 325.93f) };
	Local_202[0 /*261*/][9 /*8*/] = { func_266("MIRR" /* GXT: Mirror Park */, 892.28357f, -461.57523f, 70.86029f, 1161.3007f, -829.8299f, 45.90131f, 184.12f) };
	Local_202[0 /*261*/][10 /*8*/] = { func_266("VCANA" /* GXT: Vespucci Canals */, -1161.3606f, -1143.7163f, -5.71593f, -864.9714f, -981.12573f, 21.09691f, 328.65f) };
	Local_202[0 /*261*/][11 /*8*/] = { func_266("BAYTRE" /* GXT: Baytree Canyon */, 251.40108f, 1068.3472f, 280.6663f, 189.60123f, 1272.3522f, 143.80351f, 160.32f) };
	Local_202[0 /*261*/][13 /*8*/] = { func_266("OBSERV" /* GXT: Galileo Observatory */, -450.98346f, 1048.4084f, 252.94498f, -389.56403f, 1244.5039f, 370.24692f, 199.93f) };
	Local_202[0 /*261*/][14 /*8*/] = { func_266("AIRP" /* GXT: Los Santos International Airport */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][15 /*8*/] = { func_266("TERMINA" /* GXT: Terminal */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][16 /*8*/] = { func_266("STAD" /* GXT: Maze Bank Arena */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][17 /*8*/] = { func_266("MOVIE" /* GXT: Richards Majestic */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][18 /*8*/] = { func_266("GOLF" /* GXT: GWC and Golfing Society */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][19 /*8*/] = { func_266("HORS" /* GXT: Vinewood Racetrack */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[0 /*261*/][20 /*8*/] = { func_266("PBOX" /* GXT: Pillbox Hill */, -28.39781f, -1071.2449f, 50.21438f, -49.8352f, -1131.2766f, 20.02555f, 55.12f) };
	Local_202[0 /*261*/][21 /*8*/] = { func_266("LOSSF" /* GXT: Los Santos Freeway */, 843.19617f, 25.93548f, 65.16061f, 1138.6865f, 363.05872f, 105.41279f, 61.11f) };
	Local_202[0 /*261*/][22 /*8*/] = { func_266("ROCKF" /* GXT: Rockford Hills */, -992.56384f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) };
	Local_202[0 /*261*/][23 /*8*/] = { func_266("ROCKF" /* GXT: Rockford Hills */, -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) };
	Local_202[0 /*261*/][24 /*8*/] = { func_266("ALTA" /* GXT: Alta */, 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) };
	Local_202[0 /*261*/][25 /*8*/] = { func_266("ALTA" /* GXT: Alta */, 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) };
	Local_202[0 /*261*/][26 /*8*/] = { func_266("RANCHO" /* GXT: Rancho */, 414.5057f, -2092.0999f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) };
	Local_202[0 /*261*/][27 /*8*/] = { func_266("RANCHO" /* GXT: Rancho */, 283.7474f, -2103.9177f, 12.9242f, 391.8871f, -1983.2037f, 33.0042f, 100f) };
	Local_202[0 /*261*/][28 /*8*/] = { func_266("PBOX" /* GXT: Pillbox Hill */, 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) };
	Local_202[0 /*261*/][29 /*8*/] = { func_266("PBOX" /* GXT: Pillbox Hill */, -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) };
	Local_202[0 /*261*/][30 /*8*/] = { func_266("TEXTI" /* GXT: Textile City */, 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) };
	Local_202[0 /*261*/][31 /*8*/] = { func_266("ROCKF" /* GXT: Rockford Hills */, -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) };
	Local_202[0 /*261*/].f_260 = 0;
	Local_202[0 /*261*/].f_257 = 32;
	Local_202[2 /*261*/][0 /*8*/] = { func_266("PBOX" /* GXT: Pillbox Hill */, -25.50944f, -932.38464f, 20.41711f, 119.94056f, -523.43976f, 33.07988f, 363.4f) };
	Local_202[2 /*261*/][1 /*8*/] = { func_266("DOWNT" /* GXT: Downtown */, -25.50944f, -932.38464f, 20.41711f, 119.94056f, -523.43976f, 33.07988f, 363.4f) };
	Local_202[2 /*261*/][2 /*8*/] = { func_266("COSI" /* GXT: Countryside */, 1426.9344f, 1225.1151f, 90.76305f, 1429.9823f, 1006.8307f, 120.66425f, 259.89f) };
	Local_202[2 /*261*/][3 /*8*/] = { func_266("COSI" /* GXT: Countryside */, 3503.5603f, 3546.4026f, 20.18748f, 3513.9546f, 3875.7952f, 72.94806f, 393.78f) };
	Local_202[2 /*261*/][4 /*8*/] = { func_266("SKID" /* GXT: Mission Row */, 403.54044f, -864.46936f, 20.33799f, 396.34406f, -1127.3247f, 35.49262f, 325.93f) };
	Local_202[2 /*261*/][5 /*8*/] = { func_266("JAIL" /* GXT: Bolingbroke Penitentiary */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[2 /*261*/][6 /*8*/] = { func_266("ARMYB" /* GXT: Fort Zancudo */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[2 /*261*/].f_260 = 2;
	Local_202[2 /*261*/].f_257 = 7;
	Local_202[1 /*261*/][0 /*8*/] = { func_266("PALETO" /* GXT: Paleto Bay */, -422.86185f, 6068.399f, 20.34662f, -282.74524f, 6206.324f, 50.46586f, 196.61f) };
	Local_202[1 /*261*/][1 /*8*/] = { func_266("ROCKF" /* GXT: Rockford Hills */, -755.2506f, 147.4266f, 75.41048f, -1079.0332f, 169.38055f, 50.46801f, 179.12f) };
	Local_202[1 /*261*/][2 /*8*/] = { func_266("ROCKF" /* GXT: Rockford Hills */, -752.36743f, 90.76733f, 65.5171f, -938.79803f, -15.91457f, 35.48347f, 205.78f) };
	Local_202[1 /*261*/][3 /*8*/] = { func_266("ROCKF" /* GXT: Rockford Hills */, -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) };
	Local_202[1 /*261*/][4 /*8*/] = { func_266("ROCKF" /* GXT: Rockford Hills */, -752.36743f, 90.76733f, 65.5171f, -938.79803f, -15.91457f, 35.48347f, 205.78f) };
	Local_202[1 /*261*/][5 /*8*/] = { func_266("ROCKF" /* GXT: Rockford Hills */, -1198.1826f, 638.63666f, 115.10664f, -444.509f, 750.9377f, 198.29713f, 473.88f) };
	Local_202[1 /*261*/][6 /*8*/] = { func_266("ROCKF" /* GXT: Rockford Hills */, -844.40753f, 400.9413f, 80.433f, -109.53111f, 420.5014f, 120.2088f, 256.03f) };
	Local_202[1 /*261*/][7 /*8*/] = { func_266("ROCKF" /* GXT: Rockford Hills */, -518.62134f, 648.82654f, 130.93524f, -64.0709f, 582.45044f, 215.30841f, 162.72f) };
	Local_202[1 /*261*/][8 /*8*/] = { func_266("RICHM" /* GXT: Richman */, -934.98016f, 349.61014f, 85.77298f, -1432.4509f, 269.98038f, 50.7303f, 185.03f) };
	Local_202[1 /*261*/][9 /*8*/] = { func_266("RICHM" /* GXT: Richman */, -1633.8134f, -69.53224f, 65.10236f, -1446.8229f, 69.71544f, 48.23926f, 214.92f) };
	Local_202[1 /*261*/][10 /*8*/] = { func_266("RICHM" /* GXT: Richman */, -1732.258f, 444.13525f, 130.12581f, -2065.6904f, 412.21207f, 98.09863f, 175.17f) };
	Local_202[1 /*261*/][11 /*8*/] = { func_266("RICHM" /* GXT: Richman */, -1618.0363f, 50.95197f, 70.95364f, -1396.5143f, 221.1004f, 50.84464f, 161.61f) };
	Local_202[1 /*261*/][12 /*8*/] = { func_266("RICHM" /* GXT: Richman */, -1801.285f, 106.8786f, 72.12892f, -1541.7401f, 263.37378f, 50.44112f, 155.88f) };
	Local_202[1 /*261*/][13 /*8*/] = { func_266("PELUFF", -2208.5627f, 146.41006f, 150.93246f, -2350.1223f, 486.60657f, 200.5952f, 299.18f) };
	Local_202[1 /*261*/][14 /*8*/] = { func_266("PELUFF", -1852.3263f, 134.41718f, 70.06226f, -1994.3872f, 299.62833f, 100.96516f, 182.04f) };
	Local_202[1 /*261*/][15 /*8*/] = { func_266("CHIL" /* GXT: Vinewood Hills */, -1982.6697f, 505.9648f, 100.93644f, -1918.8427f, 713.6382f, 150.73953f, 168.9f) };
	Local_202[1 /*261*/][16 /*8*/] = { func_266("CHIL" /* GXT: Vinewood Hills */, -1455.7506f, 887.3351f, 191.97572f, -1663.2073f, 767.3684f, 160.81076f, 239.65f) };
	Local_202[1 /*261*/][17 /*8*/] = { func_266("CHIL" /* GXT: Vinewood Hills */, -1570.2218f, 508.20563f, 140.38838f, -808.95325f, 526.43335f, 90.18556f, 238.43f) };
	Local_202[1 /*261*/][18 /*8*/] = { func_266("CHIL" /* GXT: Vinewood Hills */, 242.62039f, 583.59045f, 159.40428f, 268.04242f, 827.4494f, 201.69531f, 105.09f) };
	Local_202[1 /*261*/][19 /*8*/] = { func_266("CHIL" /* GXT: Vinewood Hills */, -21.10285f, 706.8648f, 150.72626f, -210.43822f, 1056.2755f, 280.31824f, 290.15f) };
	Local_202[1 /*261*/][20 /*8*/] = { func_266("RGLEN" /* GXT: Richman Glen */, -1837.5383f, 774.2984f, 120.56287f, -1765.8419f, 831.0044f, 160.35838f, 68.09f) };
	Local_202[1 /*261*/][21 /*8*/] = { func_266("DIVINE", -372.0849f, 372.71826f, 100.60433f, 390.2198f, 532.5167f, 180.53801f, 305.88f) };
	Local_202[1 /*261*/].f_260 = 1;
	Local_202[1 /*261*/].f_257 = 22;
	Local_202[3 /*261*/][0 /*8*/] = { func_266("MTCHIL" /* GXT: Mount Chiliad */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[3 /*261*/][1 /*8*/] = { func_266("MTGORDO" /* GXT: Mount Gordo */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[3 /*261*/][2 /*8*/] = { func_266("SANCHIA" /* GXT: San Chianski Mountain Range */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[3 /*261*/][3 /*8*/] = { func_266("TATAMO" /* GXT: Tataviam Mountains */, 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_202[3 /*261*/][4 /*8*/] = { func_266("ELYSIAN" /* GXT: Elysian Island */, 531.2397f, -3019.2666f, 50f, 530.1656f, -3393.6226f, -22.4165f, 210f) };
	Local_202[3 /*261*/][5 /*8*/] = { func_266("ELYSIAN" /* GXT: Elysian Island */, 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) };
	Local_202[3 /*261*/][6 /*8*/] = { func_266("ELYSIAN" /* GXT: Elysian Island */, 495.1012f, -2833.1753f, 5.164f, 460.1983f, -2813.5283f, 0.4269f, 12f) };
	Local_202[3 /*261*/][7 /*8*/] = { func_266("ELYSIAN" /* GXT: Elysian Island */, 675.2973f, -2747.4504f, 4.952f, 689.2358f, -2747.3955f, 10.9001f, 4.3f) };
	Local_202[3 /*261*/][8 /*8*/] = { func_266("CYPRE" /* GXT: Cypress Flats */, 533.437f, -2693.2793f, 17.4952f, 588.6345f, -2693.4624f, 5.3007f, 15f) };
	Local_202[3 /*261*/][9 /*8*/] = { func_266("CYPRE" /* GXT: Cypress Flats */, 534.9656f, -2699.1365f, 4.9004f, 560.1779f, -2662.1921f, 9.0007f, 15f) };
	Local_202[3 /*261*/][10 /*8*/] = { func_266("CYPRE" /* GXT: Cypress Flats */, 583.903f, -2689.2068f, 16.9771f, 549.8469f, -2665.3176f, 3.9007f, 17.3f) };
	Local_202[3 /*261*/][11 /*8*/] = { func_266("CYPRE" /* GXT: Cypress Flats */, 683.428f, -2635.1343f, 9.3367f, 694.4725f, -2679.6597f, 4.7815f, 10f) };
	Local_202[3 /*261*/][12 /*8*/] = { func_266("CYPRE" /* GXT: Cypress Flats */, 695.2171f, -2694.7688f, 5.9815f, 695.5035f, -2679.1677f, 4.8365f, 10f) };
	Local_202[3 /*261*/][13 /*8*/] = { func_266("CYPRE" /* GXT: Cypress Flats */, 731.7991f, -2659.5796f, 4.7713f, 732.5307f, -2678.4001f, 10.5065f, 25f) };
	Local_202[3 /*261*/][14 /*8*/] = { func_266("ELYSIAN" /* GXT: Elysian Island */, 86.1885f, -2430.6963f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) };
	Local_202[3 /*261*/][15 /*8*/] = { func_266("ELYSIAN" /* GXT: Elysian Island */, 260.3166f, -2426.7773f, 21.2819f, 313.7871f, -2433.6558f, 6.5609f, 20.5f) };
	Local_202[3 /*261*/][16 /*8*/] = { func_266("ELYSIAN" /* GXT: Elysian Island */, 260.3166f, -2426.7773f, 21.2819f, 313.7871f, -2433.6558f, 6.5609f, 20.5f) };
	Local_202[3 /*261*/][17 /*8*/] = { func_266("ELYSIAN" /* GXT: Elysian Island */, 283.1514f, -2456.7773f, 19.4609f, 290.2325f, -2403.6113f, 4.2465f, 20.5f) };
	Local_202[3 /*261*/][18 /*8*/] = { func_266("ELYSIAN" /* GXT: Elysian Island */, 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.5442f, 4.5423f, 20.5f) };
	Local_202[3 /*261*/][19 /*8*/] = { func_266("ELYSIAN" /* GXT: Elysian Island */, 303.5269f, -2451.4456f, 19.4091f, 270.9798f, -2409.4517f, 4.4609f, 20.5f) };
	Local_202[3 /*261*/][20 /*8*/] = { func_266("RANCHO" /* GXT: Rancho */, 515.026f, -1653.5404f, 37.2615f, 582.571f, -1577.8248f, 26.3365f, 100f) };
	Local_202[3 /*261*/][21 /*8*/] = { func_266("BURTON" /* GXT: Burton */, -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) };
	Local_202[3 /*261*/][22 /*8*/] = { func_266("SanAnd" /* GXT: San Andreas */, 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) };
	Local_202[3 /*261*/][23 /*8*/] = { func_266("ALTA" /* GXT: Alta */, 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) };
	Local_202[3 /*261*/][24 /*8*/] = { func_266("DTVINE" /* GXT: Downtown Vinewood */, 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) };
	Local_202[3 /*261*/][25 /*8*/] = { func_266("DTVINE" /* GXT: Downtown Vinewood */, 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) };
	Local_202[3 /*261*/][26 /*8*/] = { func_266("DTVINE" /* GXT: Downtown Vinewood */, 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) };
	Local_202[3 /*261*/][27 /*8*/] = { func_266("DTVINE" /* GXT: Downtown Vinewood */, 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) };
	Local_202[3 /*261*/][28 /*8*/] = { func_266("WVINE" /* GXT: West Vinewood */, 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) };
	Local_202[3 /*261*/][29 /*8*/] = { func_266("WVINE" /* GXT: West Vinewood */, -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) };
	Local_202[3 /*261*/][30 /*8*/] = { func_266("ELGORL" /* GXT: El Gordo Lighthouse */, 3449.839f, 5173.9814f, 0.0662f, 3412.309f, 5166.8896f, 14.8342f, 33.7f) };
	Local_202[3 /*261*/].f_260 = 3;
	Local_202[3 /*261*/].f_257 = 31;
	if (func_254(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_1261 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
}

struct<8> func_266(char* sParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x11F92
{
	struct<8> Var0;
	
	Var0.f_0 = sParam0;
	Var0.f_1 = { Param1 };
	Var0.f_4 = { Param4 };
	Var0.f_7 = fParam7;
	return Var0;
}

void func_267(int iParam0, bool bParam1)//Position - 0x11FBD
{
	if (func_88(iLocal_107))
	{
		func_20(&iLocal_107);
	}
	if (!bParam1)
	{
		func_268(iParam0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_268(int iParam0)//Position - 0x11FE5
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
	if (BitTest(Global_114370.f_9088.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_114370.f_9088.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_269(bool bParam0)//Position - 0x1203C
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "PRC_MARK";
		if (iLocal_40 == 2)
		{
			sVar0 = "PRC_MARKVEH";
			func_277(sVar0);
		}
		else if (iLocal_40 == 0)
		{
			if (func_92() == 0)
			{
				func_276(sVar0);
				func_275(sVar0);
			}
			else if (func_92() == 1)
			{
				func_274(sVar0);
			}
			else
			{
				func_274(sVar0);
			}
		}
		else if (iLocal_40 == 1)
		{
			if (func_92() == 0)
			{
				func_276(sVar0);
				func_277(sVar0);
			}
			else if (func_92() == 1)
			{
				func_274(sVar0);
				func_277(sVar0);
			}
			else
			{
				func_274(sVar0);
				func_277(sVar0);
			}
		}
		MISC::SET_BIT(&uLocal_103, 11);
	}
	else if (BitTest(uLocal_103, 11))
	{
		func_273();
		func_272();
		func_271();
		func_270();
		MISC::CLEAR_BIT(&uLocal_103, 11);
	}
}

void func_270()//Position - 0x12106
{
	StringCopy(&(Global_8521[3 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_271()//Position - 0x1211C
{
	StringCopy(&(Global_8521[2 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_272()//Position - 0x12132
{
	StringCopy(&(Global_8521[1 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_273()//Position - 0x12148
{
	StringCopy(&(Global_8521[0 /*16*/].f_8), "CELL_SFUN_NULL" /* GXT: This is a dummy and should not be displayed but is referenced by script. Please leave. */, 32);
}

void func_274(char* sParam0)//Position - 0x1215E
{
	StringCopy(&(Global_8521[0 /*16*/].f_8), sParam0, 32);
}

void func_275(char* sParam0)//Position - 0x12172
{
	StringCopy(&(Global_8521[2 /*16*/].f_8), sParam0, 32);
}

void func_276(char* sParam0)//Position - 0x12186
{
	StringCopy(&(Global_8521[1 /*16*/].f_8), sParam0, 32);
}

void func_277(char* sParam0)//Position - 0x1219A
{
	StringCopy(&(Global_8521[3 /*16*/].f_8), sParam0, 32);
}

void func_278(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x121AE
{
	func_279(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_279(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x121CE
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
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114370.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114370.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_114370.f_20413.f_145++;
		func_258();
	}
}

int func_280(var uParam0, int iParam1)//Position - 0x123A0
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_55(&(Global_78038.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_62(&(Global_114370.f_32752.f_69[Global_78038.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

float func_281(int iParam0)//Position - 0x123EB
{
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (!func_55(&(Global_78038.f_555[0 /*21*/]), iParam0))
	{
		return 0f;
	}
	return Global_78038.f_555[0 /*21*/].f_3;
}

Vector3 func_282(int iParam0)//Position - 0x12421
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (!func_55(&(Global_78038.f_555[0 /*21*/]), iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_78038.f_555[0 /*21*/];
}

int func_283(int iParam0)//Position - 0x1245B
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
	if (BitTest(Global_114370.f_9088.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_114370.f_9088.f_99.f_219[iVar0]), bVar1);
	return 1;
}

