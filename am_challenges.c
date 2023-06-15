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
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_105[65];
	float fLocal_301 = 0f;
	struct<3> Local_302 = { 0, 0, 0 } ;
	struct<3> Local_305 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	float fLocal_314 = 0f;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	var uLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	float fLocal_335 = 0f;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	bool bLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	int iLocal_348 = 0;
	struct<3> Local_349[65];
	int iLocal_545[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_611[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_622 = 0;
	int iLocal_623 = 0;
	var uLocal_624 = 0;
	int iLocal_625[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	struct<68> Local_638 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	struct<535> Local_726 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1261 = -1;
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
	var uLocal_1283 = -1082130432;
	var uLocal_1284 = 3;
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
	var uLocal_1300 = -1;
	var uLocal_1301 = 0;
	var uLocal_1302 = -1;
	var uLocal_1303 = -1;
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
	var uLocal_1325 = -1082130432;
	var uLocal_1326 = 3;
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
	var uLocal_1342 = -1;
	var uLocal_1343 = 0;
	var uLocal_1344 = -1;
	var uLocal_1345 = -1;
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
	var uLocal_1367 = -1082130432;
	var uLocal_1368 = 3;
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
	var uLocal_1384 = -1;
	var uLocal_1385 = 0;
	var uLocal_1386 = -1;
	var uLocal_1387 = -1;
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
	var uLocal_1409 = -1082130432;
	var uLocal_1410 = 3;
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
	var uLocal_1426 = -1;
	var uLocal_1427 = 0;
	var uLocal_1428 = -1;
	var uLocal_1429 = -1;
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
	var uLocal_1451 = -1082130432;
	var uLocal_1452 = 3;
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
	var uLocal_1468 = -1;
	var uLocal_1469 = 0;
	var uLocal_1470 = -1;
	var uLocal_1471 = -1;
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
	var uLocal_1493 = -1082130432;
	var uLocal_1494 = 3;
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
	var uLocal_1510 = -1;
	var uLocal_1511 = 0;
	var uLocal_1512 = -1;
	var uLocal_1513 = -1;
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
	var uLocal_1535 = -1082130432;
	var uLocal_1536 = 3;
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
	var uLocal_1552 = -1;
	var uLocal_1553 = 0;
	var uLocal_1554 = -1;
	var uLocal_1555 = -1;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = -1082130432;
	var uLocal_1578 = 3;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = -1;
	var uLocal_1595 = 0;
	var uLocal_1596 = -1;
	var uLocal_1597 = -1;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = -1082130432;
	var uLocal_1620 = 3;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = -1;
	var uLocal_1637 = 0;
	var uLocal_1638 = -1;
	var uLocal_1639 = -1;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = -1082130432;
	var uLocal_1662 = 3;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = -1;
	var uLocal_1679 = 0;
	var uLocal_1680 = -1;
	var uLocal_1681 = -1;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = -1082130432;
	var uLocal_1704 = 3;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = -1;
	var uLocal_1721 = 0;
	var uLocal_1722 = -1;
	var uLocal_1723 = -1;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = -1082130432;
	var uLocal_1746 = 3;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = -1;
	var uLocal_1763 = 0;
	var uLocal_1764 = -1;
	var uLocal_1765 = -1;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = -1082130432;
	var uLocal_1788 = 3;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = -1;
	var uLocal_1805 = 0;
	var uLocal_1806 = -1;
	var uLocal_1807 = -1;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = -1082130432;
	var uLocal_1830 = 3;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = -1;
	var uLocal_1847 = 0;
	var uLocal_1848 = -1;
	var uLocal_1849 = -1;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = -1082130432;
	var uLocal_1872 = 3;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = -1;
	var uLocal_1889 = 0;
	var uLocal_1890 = -1;
	var uLocal_1891 = -1;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = -1082130432;
	var uLocal_1914 = 3;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = -1;
	var uLocal_1931 = 0;
	var uLocal_1932 = -1;
	var uLocal_1933 = -1;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = -1082130432;
	var uLocal_1956 = 3;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = -1;
	var uLocal_1973 = 0;
	var uLocal_1974 = -1;
	var uLocal_1975 = -1;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = -1082130432;
	var uLocal_1998 = 3;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = -1;
	var uLocal_2015 = 0;
	var uLocal_2016 = -1;
	var uLocal_2017 = -1;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = -1082130432;
	var uLocal_2040 = 3;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = -1;
	var uLocal_2057 = 0;
	var uLocal_2058 = -1;
	var uLocal_2059 = -1;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = -1082130432;
	var uLocal_2082 = 3;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = -1;
	var uLocal_2099 = 0;
	var uLocal_2100 = -1;
	var uLocal_2101 = -1;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = -1082130432;
	var uLocal_2124 = 3;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = -1;
	var uLocal_2141 = 0;
	var uLocal_2142 = -1;
	var uLocal_2143 = -1;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = -1082130432;
	var uLocal_2166 = 3;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = -1;
	var uLocal_2183 = 0;
	var uLocal_2184 = -1;
	var uLocal_2185 = -1;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = -1082130432;
	var uLocal_2208 = 3;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = -1;
	var uLocal_2225 = 0;
	var uLocal_2226 = -1;
	var uLocal_2227 = -1;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = -1082130432;
	var uLocal_2250 = 3;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = -1;
	var uLocal_2267 = 0;
	var uLocal_2268 = -1;
	var uLocal_2269 = -1;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = -1082130432;
	var uLocal_2292 = 3;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = -1;
	var uLocal_2309 = 0;
	var uLocal_2310 = -1;
	var uLocal_2311 = -1;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = -1082130432;
	var uLocal_2334 = 3;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = -1;
	var uLocal_2351 = 0;
	var uLocal_2352 = -1;
	var uLocal_2353 = -1;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = -1082130432;
	var uLocal_2376 = 3;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = -1;
	var uLocal_2393 = 0;
	var uLocal_2394 = -1;
	var uLocal_2395 = -1;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = -1082130432;
	var uLocal_2418 = 3;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = -1;
	var uLocal_2435 = 0;
	var uLocal_2436 = -1;
	var uLocal_2437 = -1;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = -1082130432;
	var uLocal_2460 = 3;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = -1;
	var uLocal_2477 = 0;
	var uLocal_2478 = -1;
	var uLocal_2479 = -1;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = -1082130432;
	var uLocal_2502 = 3;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = -1;
	var uLocal_2519 = 0;
	var uLocal_2520 = -1;
	var uLocal_2521 = -1;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = -1082130432;
	var uLocal_2544 = 3;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = -1;
	var uLocal_2561 = 0;
	var uLocal_2562 = -1;
	var uLocal_2563 = -1;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = -1082130432;
	var uLocal_2586 = 3;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = -1;
	var uLocal_2603 = 0;
	var uLocal_2604 = -1;
	struct<12> Local_2605[32];
	struct<12> Local_2990 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_301 = 40000f;
	iLocal_337 = AUDIO::GET_SOUND_ID();
	iLocal_338 = AUDIO::GET_SOUND_ID();
	iLocal_339 = -1;
	bLocal_340 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_796(ScriptParam_0))
		{
			func_758();
		}
	}
	while (true)
	{
		func_757();
		if (func_753() || func_751())
		{
			func_758();
		}
		if (func_749())
		{
			func_758();
		}
		func_722();
		switch (func_721(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_720() == 1)
				{
					if (func_719())
					{
						func_718(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_720() == 1)
				{
					func_151();
					func_139();
				}
				else if (func_720() == 3)
				{
					func_718(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_758();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_720())
			{
				case 0:
					if (func_125())
					{
						func_124(1);
					}
					break;
				
				case 1:
					if (Local_638.f_37 == 6)
					{
						func_124(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_315, 1000, 0))
					{
						func_124(3);
					}
					break;
				
				case 3:
					func_758();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x1BE
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

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x21C
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

void func_3()//Position - 0x261
{
	bool bVar0;
	
	if (func_45(2, 0, 0, 0, 0))
	{
		if (!BitTest(Local_638.f_2, 0))
		{
			MISC::SET_BIT(&(Local_638.f_2), 0);
			Local_638.f_1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	switch (Local_638.f_37)
	{
		case 0:
			if (func_44())
			{
				if (!func_32())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_31(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_638.f_43), func_30(), 0) || BitTest(Local_638.f_2, 0))
			{
				func_31(2);
			}
			func_32();
			break;
		
		case 2:
			Local_638.f_38 = NETWORK::GET_NETWORK_TIME();
			func_31(3);
			break;
		
		case 3:
			if (func_1(&(Local_638.f_39), func_29(0), 0) || BitTest(Local_638.f_2, 0))
			{
				if (!BitTest(Local_638.f_2, 1))
				{
					Local_638.f_1 = NETWORK::GET_NETWORK_TIME();
					MISC::SET_BIT(&(Local_638.f_2), 1);
					func_28(&(Local_638.f_39), 0, 0);
				}
				else
				{
					func_31(4);
				}
			}
			func_13();
			func_9(&bLocal_340, &iLocal_339);
			func_32();
			break;
		
		case 4:
			if ((func_1(&(Local_638.f_41), 20000, 0) || Local_638.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_638.f_3))
				{
					func_28(&(Local_638.f_45), 0, 0);
					func_31(5);
				}
				else
				{
					func_31(6);
				}
			}
			else
			{
				func_32();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_31(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()//Position - 0x3F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_638.f_67[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_638.f_67[iVar0 /*2*/].f_1), false))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)//Position - 0x440
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

int func_6()//Position - 0x478
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!func_7(bVar2))
			{
				if (!BitTest(Local_2605[iVar1 /*12*/].f_1, 1) || Local_2605[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (BitTest(Local_2605[iVar1 /*12*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_7(bool bParam0)//Position - 0x4FB
{
	if (func_8(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1895156[bParam0 /*609*/].f_1, 8);
}

bool func_8(bool bParam0)//Position - 0x51E
{
	return BitTest(Global_1895156[bParam0 /*609*/].f_1, 2);
}

void func_9(bool bParam0, int iParam1)//Position - 0x533
{
	struct<14> Var0;
	int iVar14;
	
	if (*bParam0 >= 0 && *iParam1 >= 0)
	{
		iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*bParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = -154142402;
			Var0.f_10 = iVar14;
			func_10(Var0, func_11(1));
		}
		*bParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x586
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)//Position - 0x5B3
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
			if (func_12(bVar2, 0, 0))
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

int func_12(bool bParam0, bool bParam1, bool bParam2)//Position - 0x610
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

void func_13()//Position - 0x670
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
		{
			MISC::SET_BIT(&uVar3, bVar0);
		}
		else
		{
			func_27(bVar0);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (BitTest(uVar3, bVar0))
		{
			func_24(bVar0);
			MISC::SET_BIT(&(Local_638.f_47), bVar0);
			iVar1++;
			if (func_18(bVar0, 0))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar4) && !func_14(bVar4, 0))
				{
					iVar2++;
				}
			}
		}
		bVar0++;
	}
	if (iVar1 > Local_638.f_50)
	{
		Local_638.f_50 = iVar1;
	}
	else
	{
		Local_638.f_66 = (Local_638.f_50 - iVar1);
	}
	if (iVar2 > Local_638.f_51)
	{
		Local_638.f_51 = iVar2;
	}
}

bool func_14(bool bParam0, int iParam1)//Position - 0x743
{
	bool bVar0;
	
	if (!func_17(bParam0))
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853988[bParam0 /*867*/].f_205 == 8;
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

int func_15(int iParam0, bool bParam1)//Position - 0x79C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
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

int func_16()//Position - 0x7DD
{
	return Global_1574918;
}

int func_17(int iParam0)//Position - 0x7E9
{
	int iVar0;
	
	iVar0 = iParam0;
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

int func_18(bool bParam0, bool bParam1)//Position - 0x80B
{
	float fVar0;
	
	if (bParam0 >= 0 && bParam0 < 32)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_2605[bParam0 /*12*/].f_4);
	}
	else if (bParam0 == -1)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_20())
		{
			return 1;
		}
	}
	if (func_19())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_638.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_11586 /* Tunable: CHALLENGE_LONGEST_JUMP */)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_11587 /* Tunable: CHALLENGE_HIGHEST_SPEED */)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_11588 /* Tunable: CHALLENGE_LONGEST_STOPPIE */)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_11589 /* Tunable: CHALLENGE_LONGEST_NO_CRASH */)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_11590 /* Tunable: CHALLENGE_LONGEST_WHEELIE */)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_11591 /* Tunable: CHALLENGE_LONGEST_SKYDIVE */)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_11592 /* Tunable: CHALLENGE_LOWEST_PARACHUTE */ && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_11593 /* Tunable: CHALLENGE_REVERSE_DRIVING */)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_11594 /* Tunable: CHALLENGE_LONGEST_FALL */)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_11595 /* Tunable: CHALLENGE_PVP_LONGEST_SNIPE */)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_11596 /* Tunable: CHALLENGE_LONGEST_BAIL */)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_11597 /* Tunable: CHALLENGE_MOST_VEHICLES_STOLEN */))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_11598 /* Tunable: CHALLENGE_MOST_NEAR_MISSES */))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_11710 /* Tunable: CHALLENGE_FURTHEST_DISTANCE_LOW_FLYING */)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_11711 /* Tunable: CHALLENGE_FURTHEST_DISTANCE_LOW_FLYING_INVERTED */)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_11601 /* Tunable: CHALLENGE_MOST_BRIDGES */))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_11603 /* Tunable: CHALLENGE_PVP_HEADSHOTS */))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_11604 /* Tunable: CHALLENGE_PVP_DRIVEBY */))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_11605 /* Tunable: CHALLENGE_PVP_MELEE */))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_19()//Position - 0xA7D
{
	switch (Local_638.f_3)
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

int func_20()//Position - 0xADC
{
	if ((func_21(0) || func_21(1)) || func_21(2))
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)//Position - 0xB07
{
	if (iParam0 >= 0)
	{
		if (Local_638.f_4[iParam0] == NETWORK::PARTICIPANT_ID_TO_INT() && func_22(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0, int iParam1)//Position - 0xB40
{
	if (!func_23())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_23()//Position - 0xB7A
{
	switch (Local_638.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_24(bool bParam0)//Position - 0xB97
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_2605[bParam0 /*12*/].f_4;
	iVar1 = Local_2605[bParam0 /*12*/].f_4.f_2;
	if (!BitTest(Local_638.f_48, bParam0))
	{
		fVar2 = SYSTEM::TO_FLOAT(Local_638.f_4[0]);
		if ((!func_23() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_23() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_638.f_49++;
			MISC::SET_BIT(&(Local_638.f_48), bParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_638.f_4[iVar3] == bParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_26(&(Local_638.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_638.f_4[iVar3] < 0 || func_22(iVar0, Local_2605[Local_638.f_4[iVar3] /*12*/].f_4)) || func_25(iVar0, Local_2605[Local_638.f_4[iVar3] /*12*/].f_4, iVar1, Local_2605[Local_638.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_638.f_4[iVar3];
			if (func_22(iVar0, 0))
			{
				iLocal_339 = iVar3;
				bLocal_340 = bParam0;
			}
			Local_638.f_4[iVar3] = bParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_638.f_4[iVar5] == bParam0)
				{
					Local_638.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_25(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD14
{
	if (Local_638.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_26(var uParam0, int iParam1)//Position - 0xD3C
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_27(bool bParam0)//Position - 0xD62
{
	int iVar0;
	
	if (BitTest(Local_638.f_47, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_638.f_4[iVar0] == bParam0)
			{
				Local_638.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(Local_638.f_48), bParam0);
		MISC::CLEAR_BIT(&(Local_638.f_47), bParam0);
	}
}

void func_28(var uParam0, bool bParam1, bool bParam2)//Position - 0xDBA
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

int func_29(bool bParam0)//Position - 0xDF7
{
	if (BitTest(Local_638.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_638.f_3)
	{
		case 0:
			return Global_262145.f_10896 /* Tunable: CHALLENGETIME_LONGEST_JUMP */;
		
		case 8:
			return Global_262145.f_10898 /* Tunable: CHALLENGETIME_MOST_NEAR_MISSES */;
		
		case 3:
			return Global_262145.f_10899 /* Tunable: CHALLENGETIME_LONGEST_STOPPIE */;
		
		case 1:
			return Global_262145.f_11696 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_FREEFALL */;
		
		case 6:
			return Global_262145.f_11697 /* Tunable: CHALLENGE_TIME_LIMIT_LOWEST_PARACHUTE_DEPLOY */;
		
		case 10:
			return Global_262145.f_11699 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_FALL_WITHOUT_DYING */;
		
		case 11:
			return Global_262145.f_11701 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_TIME_LOW_FLYING_UNDER_20M */;
		
		case 12:
			return Global_262145.f_11702 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_TIME_LOW_FLYING_INVERTED_UNDER_100M */;
		
		case 15:
			return Global_262145.f_11706 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_HIGHEST_NO_OF_PLAYER_HEADSHOTS */;
		
		case 16:
			return Global_262145.f_11707 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_HIGHEST_NO_OF_PLAYER_DRIVE_BY_KILLS */;
		
		case 17:
			return Global_262145.f_11708 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_HIGHEST_NO_OF_PLAYER_MELEE_KILLS */;
		
		case 18:
			return Global_262145.f_11709 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_SNIPER_PLAYER_KILLS */;
		
		case 13:
			return Global_262145.f_11700 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_VEHICLE_BAIL_WITHOUT_DYING */;
		
		case 14:
			return Global_262145.f_11703 /* Tunable: CHALLENGE_TIME_LIMIT_BRIDGES_FLOWN_UNDER */;
		
		case 2:
			return Global_262145.f_10901 /* Tunable: CHALLENGETIME_HIGHEST_SPEED */;
		
		case 7:
			return Global_262145.f_11698 /* Tunable: CHALLENGE_TIME_LIMIT_HIGHEST_VEHICLES_STOLEN */;
		
		case 9:
			return Global_262145.f_11704 /* Tunable: CHALLENGE_TIME_LIMIT_REVERSE_DRIVING_WITHOUT_CRASHING */;
		
		case 5:
			return Global_262145.f_10902 /* Tunable: CHALLENGETIME_LONGEST_NO_CRASH */;
		
		case 4:
			return Global_262145.f_10900 /* Tunable: CHALLENGETIME_LONGEST_WHEELIE */;
		
		default:
	}
	return -1;
}

int func_30()//Position - 0xF52
{
	return Global_262145.f_11666 /* Tunable: CHALLENGE_EVENT_START_COUNTDOWN_TIME */;
}

void func_31(int iParam0)//Position - 0xF61
{
	Local_638.f_37 = iParam0;
}

int func_32()//Position - 0xF70
{
	struct<2> Var0;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	
	if (func_44() && ((Local_638.f_37 == 0 || func_5(Local_638.f_3)) || Local_638.f_54 < 10))
	{
		Var0 = { Local_638.f_67[iLocal_334 /*2*/] };
		if (func_43(Var0.f_0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (func_41(Local_638.f_3, iLocal_334, &Var2, &fVar5))
				{
					Local_638.f_55[iLocal_334] = func_37(iLocal_334);
					if (BitTest(Local_2605[Local_638.f_55[iLocal_334] /*12*/].f_2, iLocal_334))
					{
						if (func_34(&(Local_638.f_67[iLocal_334 /*2*/].f_1), Var0.f_0, Var2, fVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_638.f_67[iLocal_334 /*2*/].f_1), true, 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_334 /*2*/].f_1), 1);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_334 /*2*/].f_1), true);
							VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_334 /*2*/].f_1), false);
							func_33(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_334 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_334 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_334 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_334 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar6, 10);
								MISC::SET_BIT(&iVar6, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_334 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_638.f_55[iLocal_334] = -1;
							Local_638.f_54++;
						}
					}
				}
			}
		}
		iLocal_334++;
		if (iLocal_334 >= 10)
		{
			iLocal_334 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_33(int iParam0, bool bParam1)//Position - 0x115C
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

int func_34(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x11AA
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
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2794162.f_6737 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_35(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_35(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x12B3
{
	int iVar0;
	
	if (func_36(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635560.f_3026[1 /*6*/].f_5 == iParam5 && Global_2635560.f_3026[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635560.f_3026[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635560.f_3026[iVar0 /*6*/] = { Global_2635560.f_3026[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635560.f_3026[1 /*6*/] = { Param0 };
		Global_2635560.f_3026[1 /*6*/].f_3 = fParam3;
		Global_2635560.f_3026[1 /*6*/].f_4 = iParam4;
		Global_2635560.f_3026[1 /*6*/].f_5 = iParam5;
	}
}

int func_36(int iParam0, struct<3> Param1, int iParam4)//Position - 0x1386
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
			if (Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_37(int iParam0)//Position - 0x1424
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar7;
	bool bVar8;
	
	fVar2 = 1000000f;
	if (func_40(iParam0, &Var4, &uVar7))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_12(bVar8, 1, 1))
				{
					fVar3 = func_38(func_39(bVar8), Var4);
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

float func_38(struct<3> Param0, struct<3> Param3)//Position - 0x149D
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return SYSTEM::VDIST(Param0, Param3);
}

Vector3 func_39(bool bParam0)//Position - 0x14BB
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_40(int iParam0, var uParam1, var uParam2)//Position - 0x14CE
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

int func_41(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x164A
{
	if (func_5(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1729.5818f, -2943.7695f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 1:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 2:
				*uParam2 = { 1073.972f, 3003.8894f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 3:
				*uParam2 = { 1928.635f, 4702.3267f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 4:
				*uParam2 = { 1278.6503f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 5:
				*uParam2 = { -1700.4066f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 6:
				*uParam2 = { -2733.5889f, 2925.5627f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 7:
				*uParam2 = { 1493.4181f, -2442.9897f, 64.9693f };
				*uParam3 = 52.9918f;
				break;
			
			case 8:
				*uParam2 = { 569.0449f, -772.5692f, 10.4088f };
				*uParam3 = 179.3501f;
				break;
			
			case 9:
				*uParam2 = { -905.1526f, 5548.172f, 5.5251f };
				*uParam3 = 95.8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_42(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -3132.9324f, 1130.5336f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 1:
				*uParam2 = { -1008.9172f, -1640.0266f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 2:
				*uParam2 = { 1075.0626f, -2445.1055f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 3:
				*uParam2 = { 1101.1985f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 4:
				*uParam2 = { 2658.8777f, 1667.5808f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 5:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 6:
				*uParam2 = { 156.5429f, 3117.2131f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 7:
				*uParam2 = { -2242.9233f, 4315.7485f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 8:
				*uParam2 = { -143.7363f, 6500.5728f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 9:
				*uParam2 = { 1939.4747f, 4628.652f, 39.3984f };
				*uParam3 = 350.0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_42(int iParam0)//Position - 0x194E
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

bool func_43(int iParam0)//Position - 0x196E
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_44()//Position - 0x198C
{
	return (func_5(Local_638.f_3) || func_42(Local_638.f_3));
}

int func_45(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x19AC
{
	if (func_123(PLAYER::PLAYER_ID(), 0) || func_120(PLAYER::PLAYER_ID(), 0))
	{
		if (func_119(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_52(sParam3, sParam4, 1);
		}
		if (func_51(26, -1))
		{
			func_49(26, -1);
		}
		return 1;
	}
	if (func_48(&(Global_1836866.f_18)))
	{
		if (!func_1(&(Global_1836866.f_18), 7500, 0))
		{
			return 0;
		}
		func_47(&(Global_1836866.f_18));
	}
	if (func_46())
	{
		if (bParam2)
		{
			func_52(sParam3, sParam4, 0);
		}
		if (func_51(26, -1))
		{
			func_49(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_52(sParam3, sParam4, 1);
		}
		if (func_51(26, -1))
		{
			func_49(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_46()//Position - 0x1AA3
{
	return BitTest(Global_1836866.f_1, 0);
}

void func_47(var uParam0)//Position - 0x1AB3
{
	uParam0->f_1 = 0;
}

bool func_48(var uParam0)//Position - 0x1AC0
{
	return uParam0->f_1;
}

void func_49(bool bParam0, int iParam1)//Position - 0x1ACC
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		
		default:
			iVar1 = func_50(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

int func_50(int iParam0)//Position - 0x1B25
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
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

bool func_51(int iParam0, int iParam1)//Position - 0x1B88
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = func_50(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

void func_52(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1BB1
{
	if ((!BitTest(Global_1836866.f_1, 2) && !func_8(PLAYER::PLAYER_ID())) && !func_7(PLAYER::PLAYER_ID()))
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
		func_53(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836866.f_1), 2);
	}
}

int func_53(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1C25
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
	func_116(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_114(&(Var0.f_69), iParam7);
	}
	return func_54(&Var0);
}

int func_54(var uParam0)//Position - 0x1CA5
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672524.f_2836)
		{
			return 0;
		}
	}
	func_69(uParam0, uParam0->f_17);
	func_66(uParam0);
	if (func_65())
	{
		func_66(uParam0);
	}
	if (func_64(uParam0->f_1))
	{
		func_57();
		if (Global_2672524.f_2514[0 /*80*/].f_2 == 0)
		{
			Global_2672524.f_2514[0 /*80*/] = { *uParam0 };
			if (func_56(uParam0->f_69, 8192))
			{
				Global_1935885 = 1;
			}
			return 1;
		}
		if (((Global_2672524.f_2514[0 /*80*/].f_1 == 13 || Global_2672524.f_2514[0 /*80*/].f_1 == 53) || Global_2672524.f_2514[0 /*80*/].f_1 == 54) || Global_2672524.f_2514[0 /*80*/].f_1 == 58)
		{
			Global_2672524.f_2514[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672524.f_2514[iVar0 + 1 /*80*/] = { Global_2672524.f_2514[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672524.f_2514[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672524.f_2514[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672524.f_2514[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_57();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_114(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 2);
				Global_2672524.f_2514[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_56(uParam0->f_69, 128))
			{
				if (func_55(Global_2672524.f_2514[iVar0 /*80*/].f_1))
				{
					Global_2672524.f_2514[iVar0 /*80*/].f_2 = 5;
					func_114(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x1E8A
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

bool func_56(var uParam0, int iParam1)//Position - 0x1F10
{
	return (uParam0 && iParam1) != 0;
}

void func_57()//Position - 0x1F1F
{
	bool bVar0;
	
	if (Global_2672524.f_2837)
	{
		return;
	}
	if (!Global_78958)
	{
		Global_78958 = 1;
		bVar0 = true;
	}
	else if (Global_78959)
	{
		Global_78959 = 0;
		bVar0 = true;
	}
	func_58();
	if (bVar0)
	{
		Global_78958 = 0;
	}
}

void func_58()//Position - 0x1F64
{
	Global_2672524.f_2838 = 0;
	Global_2672524.f_2838.f_582 = 0;
	func_62(&(Global_2672524.f_2838.f_1));
	Global_2672524.f_2838.f_1.f_1 = 0;
	func_59(&(Global_2672524.f_2838.f_1), 1);
}

void func_59(var uParam0, int iParam1)//Position - 0x1FA6
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
	if (!Global_78958)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78960)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_61(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_60(0);
}

void func_60(int iParam0)//Position - 0x2054
{
	Global_78950 = iParam0;
	Global_78951 = iParam0;
}

int func_61(bool bParam0)//Position - 0x2068
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_62(var uParam0)//Position - 0x2090
{
	func_63(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_63(var uParam0)//Position - 0x20BA
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

int func_64(int iParam0)//Position - 0x2139
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

bool func_65()//Position - 0x2251
{
	return Global_2683883.f_19;
}

void func_66(var uParam0)//Position - 0x225F
{
	if (func_68(uParam0->f_1))
	{
		uParam0->f_72 = func_67();
	}
}

int func_67()//Position - 0x227A
{
	return 21;
}

int func_68(int iParam0)//Position - 0x2284
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

void func_69(var uParam0, bool bParam1)//Position - 0x2316
{
	if (func_68(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_113() || !func_12(bParam1, 0, 1))
	{
		return;
	}
	if (func_55(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_70(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_70(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x236D
{
	int iVar0;
	int iVar1;
	
	if (!func_17(bParam0))
	{
		return 1;
	}
	if (func_111(bParam0) && !bParam4)
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
			if (Global_4718592.f_112316[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_111(PLAYER::PLAYER_ID()) || (func_110() && func_109())) && !BitTest(Global_2794162.f_4697, 31)) && !bParam4)
	{
		iVar1 = func_108();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_12(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_112316[iParam1] != -1)
							{
								return func_106(iParam1, bParam0, 0);
							}
							else
							{
								return func_85(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_85(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_112316[iParam1] != -1)
				{
					return func_106(iParam1, bParam0, 0);
				}
				else
				{
					return func_71(0, -1, 0);
				}
			}
			else
			{
				return func_71(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_112316[iParam1] != -1)
		{
			return func_106(iParam1, bParam0, 0);
		}
		else
		{
			return func_85(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_85(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_71(bool bParam0, int iParam1, bool bParam2)//Position - 0x2558
{
	return func_72(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_72(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x256E
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_84() || (func_83() && func_81())) && Global_1665516.f_1)
	{
		if (bParam1)
		{
			return func_80(iParam2, iVar0);
		}
		else
		{
			return func_80(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_77(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_76(1);
				}
				else
				{
					return func_76(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_73(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_73(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_76(1);
	}
	return func_76(0);
}

int func_73(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x2670
{
	int iVar0;
	
	iVar0 = func_75(iParam0, iParam1, iParam3);
	if (func_74(Global_4718592.f_117591, 1))
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

int func_74(int iParam0, bool bParam1)//Position - 0x2788
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_171044 == 65)
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
		if (iParam0 == Global_262145.f_9658[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2)//Position - 0x27D9
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
			if (!func_77(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_76(bool bParam0)//Position - 0x2821
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2838
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
		bVar0 = Global_1058071.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24064, bVar0))
			{
				bVar1 = Global_1058071.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_78(iParam0, bVar0, iParam1, bVar1) || !func_78(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (12 + iParam1));
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
					return BitTest(Global_4718592.f_1765, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2B83
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
	if (!BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24065, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1816[iParam2 /*24279*/].f_24065, bParam3))
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
		if (((!func_12(bVar1, 1, 1) || func_14(bVar1, 0)) || BitTest(Global_2657704[bVar1 /*463*/].f_199, 2)) || func_79(bVar1))
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

var func_79(bool bParam0)//Position - 0x2CAF
{
	return BitTest(Global_1853988[bParam0 /*867*/].f_36.f_18, 14);
}

int func_80(int iParam0, int iParam1)//Position - 0x2CC7
{
	if (iParam0 == -1)
	{
		iParam0 = func_75(iParam1, iParam0, 4);
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

int func_81()//Position - 0x2D15
{
	if (func_82())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_175236, 4);
}

bool func_82()//Position - 0x2D34
{
	return BitTest(Global_4718592.f_164769, 12);
}

bool func_83()//Position - 0x2D49
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_175236, 0);
	}
	return ((BitTest(Global_4718592.f_175236, 0) || Global_1927347) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_84()//Position - 0x2D90
{
	if (func_82() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2DAD
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
	if (Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853988[iVar2 /*867*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_94())
			{
				iVar3 = func_90(bParam0);
				if (!iVar3 == -1)
				{
					return func_88(iVar3);
				}
			}
			if ((func_87(bParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_77(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_76(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_86(1);
			}
			else
			{
				return func_72(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836600 || Global_1836590) || Global_1853988[bParam0 /*867*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836600 == 1 && Global_1836610 == 0))
			{
				return func_76(1);
			}
			else
			{
				return func_72(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836594 && Global_1836080.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_90(bParam0);
	if (!iVar4 == -1)
	{
		return func_88(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_86(bool bParam0)//Position - 0x2F45
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_87(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2F5C
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

int func_88(int iParam0)//Position - 0x2FD4
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_89(iParam0);
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

var func_89(int iParam0)//Position - 0x3097
{
	return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_90(bool bParam0)//Position - 0x30AE
{
	if (func_17(bParam0))
	{
		if (func_92(bParam0, 1))
		{
			return Global_2648711.f_818.f_11[func_91(bParam0)];
		}
	}
	return -1;
}

int func_91(int iParam0)//Position - 0x30DE
{
	if (func_17(iParam0))
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_113();
}

bool func_92(bool bParam0, bool bParam1)//Position - 0x3101
{
	if (!func_17(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_93(bParam0))
		{
			return 0;
		}
	}
	return Global_1895156[bParam0 /*609*/].f_10 != func_113();
}

int func_93(bool bParam0)//Position - 0x313A
{
	if (func_17(bParam0))
	{
		if (Global_1895156[bParam0 /*609*/].f_10 != func_113())
		{
			return Global_1895156[bParam0 /*609*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_94()//Position - 0x316F
{
	if (((((((func_105() || func_104()) || func_65()) || func_103()) || func_102()) || func_100()) || func_98()) || func_95())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_95()//Position - 0x31E1
{
	return func_96(Global_4718592.f_117591);
}

int func_96(int iParam0)//Position - 0x31F7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_97(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x3221
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33923 /* Tunable: 1597065378 */[iParam0];
	}
	return -1;
}

int func_98()//Position - 0x3240
{
	return func_99(Global_4718592.f_117591);
}

int func_99(int iParam0)//Position - 0x3256
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31922[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_100()//Position - 0x3285
{
	return func_101(Global_4718592.f_117591);
}

int func_101(int iParam0)//Position - 0x329B
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31258[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_102()//Position - 0x32D5
{
	return Global_2683883.f_24;
}

bool func_103()//Position - 0x32E3
{
	return Global_2683883.f_21;
}

var func_104()//Position - 0x32F1
{
	return Global_2683883.f_18;
}

var func_105()//Position - 0x32FF
{
	return Global_2683883.f_17;
}

int func_106(int iParam0, bool bParam1, bool bParam2)//Position - 0x330D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058071.f_14[iParam0];
	if (func_94())
	{
		iVar2 = func_90(bParam1);
		if (!iVar2 == -1)
		{
			return func_88(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_8104[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_113())
	{
		if (Global_4718592.f_112316[iParam0] != -1 && Global_4718592.f_112316[iParam0] <= 4)
		{
			if (Global_4718592.f_112316[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_112316[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_112316[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_112316[iParam0] == 4)
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
				iVar0 = Global_4718592.f_112316[iParam0];
			}
		}
		else
		{
			iVar0 = func_72(bParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_107(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_77(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0, -1))
		{
			iVar0 = func_86(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_107(int iParam0)//Position - 0x348D
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_171203;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_171204;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_171205;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_171206;
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

var func_108()//Position - 0x3562
{
	return Global_2621446.f_2;
}

var func_109()//Position - 0x3570
{
	return BitTest(Global_2621446, 4);
}

var func_110()//Position - 0x357E
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_111(int iParam0)//Position - 0x3598
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_112())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657704[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_112()//Position - 0x35D7
{
	return BitTest(Global_2621446, 3);
}

int func_113()//Position - 0x35E5
{
	return -1;
}

void func_114(var uParam0, int iParam1)//Position - 0x35EE
{
	func_115(uParam0, iParam1);
}

void func_115(var uParam0, var uParam1)//Position - 0x35FE
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_116(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x360F
{
	uParam1->f_17 = func_113();
	uParam1->f_18 = func_113();
	uParam1->f_19 = func_113();
	uParam1->f_20 = func_113();
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

bool func_117(bool bParam0)//Position - 0x368D
{
	return func_118(bParam0, 20);
}

var func_118(int iParam0, int iParam1)//Position - 0x369D
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_119(bool bParam0)//Position - 0x36B5
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_118(bParam0, 9);
	}
	return 0;
}

int func_120(int iParam0, int iParam1)//Position - 0x36D3
{
	if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 && func_121(Global_1895156[iParam0 /*609*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1)
	{
		if (func_121(Global_1895156[iParam0 /*609*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_121(int iParam0)//Position - 0x3739
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
	return func_122(iParam0, 0);
	return 0;
}

int func_122(int iParam0, int iParam1)//Position - 0x3793
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

int func_123(int iParam0, int iParam1)//Position - 0x37E8
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

void func_124(int iParam0)//Position - 0x382C
{
	Local_638.f_0 = iParam0;
}

int func_125()//Position - 0x3839
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_638.f_4[iVar0] = -1;
		iVar0++;
	}
	func_47(&(Local_638.f_39));
	func_130();
	if (func_44())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_638.f_55[iVar0] = func_37(iVar0);
			iVar0++;
		}
		func_126();
	}
	return 1;
}

void func_126()//Position - 0x3899
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_42(Local_638.f_3))
		{
			Local_638.f_67[iVar0 /*2*/] = func_129();
		}
		else
		{
			Local_638.f_67[iVar0 /*2*/] = func_127();
		}
		iVar0++;
	}
}

int func_127()//Position - 0x38DD
{
	int iVar0;
	
	switch (Local_638.f_3)
	{
		case 12:
			return func_128();
			break;
	}
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

int func_128()//Position - 0x392B
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		
		case 1:
			return joaat("besra");
		
		default:
	}
	return 0;
}

int func_129()//Position - 0x395F
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		
		case 1:
			return joaat("pcj");
		
		default:
	}
	return 0;
}

void func_130()//Position - 0x3993
{
	int iVar0;
	
	iVar0 = func_135();
	Local_638.f_3 = iVar0;
	func_131(func_133(133, iVar0, 0, 0));
}

void func_131(int iParam0)//Position - 0x39B6
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1927637822;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar3 = func_132(1, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

var func_132(int iParam0, bool bParam1)//Position - 0x39F0
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_12(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_14(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3A55
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
	if (func_134(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_134(int iParam0)//Position - 0x42D1
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
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		default:
	}
	return -1;
}

int func_135()//Position - 0x44DF
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_11995 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_JUMP */;
	iVar0[1] = Global_262145.f_11668 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_FREEFALL */;
	iVar0[2] = Global_262145.f_11999 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_HIGHEST_SPEED */;
	iVar0[3] = Global_262145.f_11997 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_STOPPIE */;
	iVar0[4] = Global_262145.f_11998 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_WHEELIE */;
	iVar0[5] = Global_262145.f_12000 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_NO_CRASH */;
	iVar0[6] = Global_262145.f_11669 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LOWEST_PARACHUTE_DEPLOY */;
	iVar0[7] = Global_262145.f_11670 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_HIGHEST_VEHICLES_STOLEN */;
	iVar0[8] = Global_262145.f_11996 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_MOST_NEAR_MISSES */;
	iVar0[9] = Global_262145.f_11676 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_REVERSE_DRIVING_WITHOUT_CRASHING */;
	iVar0[10] = Global_262145.f_11671 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_FALL_WITHOUT_DYING */;
	iVar0[11] = Global_262145.f_11673 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_TIME_LOW_FLYING_UNDER_20M */;
	iVar0[12] = Global_262145.f_11674 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_TIME_LOW_FLYING_INVERTED_UNDER_100M */;
	iVar0[13] = Global_262145.f_11672 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_VEHICLE_BAIL_WITHOUT_DYING */;
	iVar0[14] = Global_262145.f_11675 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_BRIDGES_FLOWN_UNDER */;
	iVar0[15] = Global_262145.f_11678 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_HIGHEST_NO_OF_PLAYER_HEADSHOTS */;
	iVar0[16] = Global_262145.f_11679 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_HIGHEST_NO_OF_PLAYER_DRIVE_BY_KILLS */;
	iVar0[17] = Global_262145.f_11680 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_HIGHEST_NO_OF_PLAYER_MELEE_KILLS */;
	iVar0[18] = Global_262145.f_11681 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_SNIPER_PLAYER_KILLS */;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_138(iVar21) || func_136(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar20);
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (fVar22 <= iVar0[iVar21])
		{
			return iVar21;
		}
		fVar22 = (fVar22 - iVar0[iVar21]);
		iVar21++;
	}
	return func_135();
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x465C
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_137(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8749 /* Tunable: NUMBER_OF_SCRIPTS_IN_LAUNCH_HISTORY_LIST */)
		{
			if (Global_2756336.f_136[iVar0 /*2*/] == iVar1 && Global_2756336.f_136[iVar0 /*2*/].f_1 == func_133(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0)//Position - 0x46E1
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_138(int iParam0)//Position - 0x4780
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10889 /* Tunable: DISABLE_LONGEST_JUMP */;
		
		case 1:
			return Global_262145.f_11682 /* Tunable: CHALLENGE_DISABLE_LONGEST_FREEFALL */;
		
		case 6:
			return Global_262145.f_11683 /* Tunable: CHALLENGE_DISABLE_LOWEST_PARACHUTE_DEPLOY */;
		
		case 7:
			return Global_262145.f_11684 /* Tunable: CHALLENGE_DISABLE_HIGHEST_VEHICLES_STOLEN */;
		
		case 8:
			return Global_262145.f_10890 /* Tunable: DISABLE_MOST_NEAR_MISSES */;
		
		case 3:
			return Global_262145.f_10891 /* Tunable: DISABLE_LONGEST_STOPPIE */;
		
		case 4:
			return Global_262145.f_10892 /* Tunable: DISABLE_LONGEST_WHEELIE */;
		
		case 2:
			return Global_262145.f_10893 /* Tunable: DISABLE_HIGHEST_SPEED */;
		
		case 5:
			return Global_262145.f_10895 /* Tunable: DISABLE_LONGEST_NO_CRASH */;
		
		case 9:
			return Global_262145.f_11690 /* Tunable: CHALLENGE_DISABLE_REVERSE_DRIVING_WITHOUT_CRASHING */;
		
		case 10:
			return Global_262145.f_11685 /* Tunable: CHALLENGE_DISABLE_LONGEST_FALL_WITHOUT_DYING */;
		
		case 11:
			return Global_262145.f_11687 /* Tunable: CHALLENGE_DISABLE_LONGEST_TIME_LOW_FLYING_UNDER_20M */;
		
		case 12:
			return Global_262145.f_11688 /* Tunable: CHALLENGE_DISABLE_LONGEST_TIME_LOW_FLYING_INVERTED_UNDER_100M */;
		
		case 15:
			return Global_262145.f_11692 /* Tunable: CHALLENGE_DISABLE_PVP_HIGHEST_NO_OF_PLAYER_HEADSHOTS */;
		
		case 16:
			return Global_262145.f_11693 /* Tunable: CHALLENGE_DISABLE_PVP_HIGHEST_NO_OF_PLAYER_DRIVE_BY_KILLS */;
		
		case 17:
			return Global_262145.f_11694 /* Tunable: CHALLENGE_DISABLE_PVP_HIGHEST_NO_OF_PLAYER_MELEE_KILLS */;
		
		case 18:
			return Global_262145.f_11695 /* Tunable: CHALLENGE_DISABLE_PVP_SNIPER_PLAYER_KILLS */;
		
		case 13:
			return Global_262145.f_11686 /* Tunable: CHALLENGE_DISABLE_LONGEST_VEHICLE_BAIL_WITHOUT_DYING */;
		
		case 14:
			return Global_262145.f_11689 /* Tunable: CHALLENGE_DISABLE_BRIDGES_FLOWN_UNDER */;
		
		default:
	}
	return 1;
}

void func_139()//Position - 0x48C0
{
	bool bVar0;
	
	if (func_44())
	{
		bVar0 = false;
		while (bVar0 < 10)
		{
			if (Local_638.f_55[bVar0] == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (func_140(bVar0))
				{
					if (!BitTest(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
					{
						MISC::SET_BIT(&(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
					}
				}
				else if (BitTest(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
				}
			}
			else if (BitTest(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
			{
				MISC::CLEAR_BIT(&(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
			}
			bVar0++;
		}
	}
}

int func_140(int iParam0)//Position - 0x4968
{
	struct<3> Var0;
	var uVar3;
	
	if (func_40(iParam0, &Var0, &uVar3))
	{
		if (func_141(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_141(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0x49AD
{
	Global_2635560.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (fParam14 > 0f)
	{
		if (func_146(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_142(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635560.f_2++;
	return 1;
}

int func_142(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x4ABF
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_144(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
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
		if (func_12(bVar1, 1, 1))
		{
			if (!func_14(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_143(bVar1) || !bParam10) && !Global_2657704[bVar1 /*463*/].f_270)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_144(bVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_144(bVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
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

int func_143(bool bParam0)//Position - 0x4C77
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657704[bParam0 /*463*/].f_255)
	{
		return 1;
	}
	return 0;
}

Vector3 func_144(bool bParam0)//Position - 0x4CA2
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_65() && Global_1853988[iVar0 /*867*/].f_834) && !func_145(Global_1853988[iVar0 /*867*/].f_835))
	{
		return Global_1853988[iVar0 /*867*/].f_835;
	}
	return func_39(bParam0);
}

int func_145(struct<3> Param0)//Position - 0x4CF5
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_146(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0x4D1F
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam8 == 0)
		{
			if (func_12(bVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_143(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_147(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_39(bVar1), Param0, true) < fParam3)
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

int func_147(bool bParam0)//Position - 0x4E23
{
	if (func_150(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2764376 = { func_149(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2764376))
	{
		return 1;
	}
	if (func_148(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_148(int iParam0, bool bParam1)//Position - 0x4E6A
{
	int iVar0;
	
	iVar0 = func_91(iParam0);
	if (func_17(iVar0))
	{
		if (iVar0 == func_91(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_149(bool bParam0)//Position - 0x4E93
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_150(bool bParam0, bool bParam1)//Position - 0x4EAA
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764376 = { func_149(bParam0) };
		Global_2764389 = { func_149(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764376))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764389))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764341, 35, &Global_2764389);
				if (Global_2764306 == Global_2764341)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_151()//Position - 0x4F17
{
	float fVar0;
	float fVar1;
	
	func_715();
	func_714();
	if (func_712())
	{
		func_594();
	}
	if (!func_7(PLAYER::PLAYER_ID()))
	{
		if (func_566(0, 1, 1))
		{
			if (BitTest(uLocal_329, 6))
			{
				MISC::CLEAR_BIT(&uLocal_329, 6);
			}
			switch (Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3)
			{
				case 0:
					if (Local_638.f_37 < 2)
					{
						if (Local_638.f_37 > 0)
						{
							if (Local_638.f_3 != -1)
							{
								func_565(1);
								func_564(1);
							}
						}
					}
					else
					{
						func_564(2);
					}
					break;
				
				case 1:
					func_558(9);
					if (Local_2990.f_8 == 0)
					{
						Local_2990.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					if (Local_638.f_37 >= 2)
					{
						func_564(2);
						Local_2990.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					if (func_44())
					{
						func_558(0);
					}
					func_556((func_30() - func_557(&(Local_638.f_43), 0, 0)));
					func_553(func_555((func_30() - func_557(&(Local_638.f_43), 0, 0)), 0), func_554(Local_638.f_3));
					func_478(0, func_552());
					func_462();
					func_440();
					if (func_439())
					{
						func_438();
					}
					break;
				
				case 2:
					if (Local_638.f_37 > 2)
					{
						func_565(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_437())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_419(133, fVar0, fVar1, 0, 0, 0, 0);
						func_418(Local_638.f_3, 1);
						func_417(23, 1);
						if (Local_2990.f_8 == 0)
						{
							Local_2990.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
						if (Local_2990.f_9 == 0)
						{
							Local_2990.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
						func_413();
						VEHICLE::SET_DISABLE_BMX_EXTRA_TRICK_FORCES(1);
						if (func_437())
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
						}
						if (Local_638.f_3 == 14)
						{
							func_412(&Local_349);
						}
						func_411();
						if (!func_7(PLAYER::PLAYER_ID()))
						{
							func_53(63, "AMCH_STARTED" /* GXT: CHALLENGE STARTED */, func_410(Local_638.f_3), func_67(), -1, func_67(), 1, 0);
							if (func_407("AMCH_WARN" /* GXT: The ~a~ Challenge will begin shortly. ~a~ The top 3 players will win cash and RP. */, func_409(Local_638.f_3), func_408(Local_638.f_3)))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						if (func_44())
						{
							func_389(678f, 794f, 206f, 8f, 0);
							func_389(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_389(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_564(3);
					}
					break;
				
				case 3:
					if (Local_638.f_37 > 3)
					{
						iLocal_331 = 0;
						func_564(4);
					}
					else
					{
						if (!BitTest(Local_638.f_2, 1))
						{
							func_347();
							func_344();
							func_343();
						}
						if (func_342(0) && !func_21(0))
						{
							func_341();
						}
					}
					if (func_437())
					{
						PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
					}
					func_340();
					func_315();
					func_594();
					func_478(0, 1);
					func_462();
					func_440();
					func_558(2);
					func_558(5);
					func_558(7);
					break;
				
				case 4:
					if (func_303(&uLocal_341, !BitTest(Local_638.f_2, 0)) || BitTest(Local_638.f_2, 0))
					{
						if (func_5(Local_638.f_3))
						{
							if (Local_638.f_37 == 5)
							{
								func_564(5);
							}
						}
						else
						{
							func_564(6);
						}
					}
					func_290();
					func_183();
					func_315();
					func_594();
					func_478(1, 1);
					func_411();
					break;
				
				case 5:
					if (Local_638.f_37 > 5)
					{
						func_564(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_178();
		}
	}
	else
	{
		func_178();
	}
	func_158();
	func_153();
	func_152();
}

void func_152()//Position - 0x529A
{
	struct<2> Var0;
	int iVar2;
	
	if (func_44())
	{
		Var0 = { Local_638.f_67[iLocal_348 /*2*/] };
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
		{
			iVar2 = NETWORK::NET_TO_VEH(Var0.f_1);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
				}
			}
		}
		iLocal_348++;
		if (iLocal_348 >= 10)
		{
			iLocal_348 = 0;
			iLocal_637 = iLocal_636;
			iLocal_636 = 0;
		}
	}
}

void func_153()//Position - 0x5306
{
	if (Local_638.f_37 == 5)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_638.f_67[iLocal_348 /*2*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_348 /*2*/].f_1), false))
			{
				if (!BitTest(uLocal_624, iLocal_348))
				{
					MISC::SET_BIT(&uLocal_624, iLocal_348);
					iLocal_625[iLocal_348] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_625[iLocal_348], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_348 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_625[iLocal_348], "Time", 30f);
				}
				if ((30000 - func_557(&(Local_638.f_45), 0, 0)) >= 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_348 /*2*/].f_1), false))
					{
						func_558(1);
						iLocal_636 = 1;
					}
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_638.f_67[iLocal_348 /*2*/].f_1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_348 /*2*/].f_1));
					NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_638.f_67[iLocal_348 /*2*/].f_1), true, false, -1);
				}
			}
			else if (BitTest(uLocal_624, iLocal_348) && !AUDIO::HAS_SOUND_FINISHED(iLocal_625[iLocal_348]))
			{
				AUDIO::STOP_SOUND(iLocal_625[iLocal_348]);
			}
		}
		if (iLocal_637)
		{
			if (!func_111(PLAYER::PLAYER_ID()))
			{
				func_155(func_555((30000 - func_557(&(Local_638.f_45), 0, 0)), 0), "HTV_DESTR" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_154();
			}
		}
	}
}

void func_154()//Position - 0x5482
{
	Global_1655612.f_1172 = 1;
}

void func_155(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x5492
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_157(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_156(7, iVar0);
		Global_1655612.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1655612.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655612.f_4659.f_172[iVar0] = iParam2;
		Global_1655612.f_4659.f_216[iVar0] = iParam3;
		Global_1655612.f_4659.f_183[iVar0] = iParam4;
		Global_1655612.f_4659.f_194[iVar0] = iParam5;
		Global_1655612.f_4659.f_249[iVar0] = iParam6;
		Global_1655612.f_4659.f_260[iVar0] = iParam7;
		Global_1655612.f_4659.f_205[iVar0] = iParam8;
		Global_1655612.f_4659.f_314[iVar0] = iParam9;
		Global_1655612.f_4659.f_325[iVar0] = iParam10;
		Global_1655612.f_4659.f_357[iVar0] = iParam11;
		Global_1655612.f_4659.f_238[iVar0] = iParam12;
		Global_1655612.f_4659.f_271[iVar0] = iParam13;
		Global_1655612.f_4659.f_368[iVar0] = iParam14;
		Global_1655612.f_4659.f_379[iVar0] = iParam15;
		Global_1655612.f_4659.f_390[iVar0] = iParam16;
		Global_1655612.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_156(int iParam0, int iParam1)//Position - 0x55EF
{
	MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), iParam1);
}

int func_157(int iParam0, int iParam1)//Position - 0x5608
{
	return BitTest(Global_1655612.f_7009[iParam0], iParam1);
}

void func_158()//Position - 0x561E
{
	if (((func_12(PLAYER::PLAYER_ID(), 1, 1) && !func_7(PLAYER::PLAYER_ID())) && !func_174(PLAYER::PLAYER_ID())) && func_566(0, 1, 1))
	{
		if (Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 1)
		{
			func_171(func_173(Local_638.f_3), func_409(Local_638.f_3), 0, 0);
		}
		else if (Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
		{
			if (!BitTest(uLocal_329, 10))
			{
				func_159(func_408(Local_638.f_3), 0);
			}
			else
			{
				func_159("AMCH_OBJLAND" /* GXT: Fly over land. */, 0);
			}
		}
		else
		{
			func_411();
		}
	}
	else
	{
		func_411();
	}
}

void func_159(char* sParam0, bool bParam1)//Position - 0x56C6
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_169(sParam0))
	{
		return;
	}
	func_163();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_162();
	func_161(bParam1);
	func_160();
}

void func_160()//Position - 0x5731
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_161(bool bParam0)//Position - 0x5744
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_162()//Position - 0x576A
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_163()//Position - 0x578F
{
	func_165();
	func_164(0);
}

void func_164(bool bParam0)//Position - 0x57A0
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

void func_165()//Position - 0x5832
{
	if (!func_168())
	{
	}
	if (func_167())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_166();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_166()//Position - 0x585B
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

int func_167()//Position - 0x5ACD
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_168()//Position - 0x5AE3
{
	if (!func_167())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_166();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_169(char* sParam0)//Position - 0x5B09
{
	if (!func_167())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_170(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}

bool func_170(char* sParam0)//Position - 0x5B4D
{
	if (!func_167())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_171(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x5B7F
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
	if (func_172(sParam0, sParam1) && iParam3 == Global_1574757.f_58)
	{
		return 0;
	}
	func_163();
	Global_1574757 = 3;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	Global_1574757.f_58 = iParam3;
	Global_1574757.f_56 = iParam3;
	func_162();
	func_161(bParam2);
	func_160();
	return 1;
}

bool func_172(char* sParam0, char* sParam1)//Position - 0x5C25
{
	if (!func_167())
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
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

char* func_173(int iParam0)//Position - 0x5C7D
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPLAND" /* GXT: Find a land vehicle and prepare for the ~a~ Challenge. */;
				}
				break;
			
			case 9:
				if ((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPCAR" /* GXT: Find a car and prepare for the ~a~ Challenge. */;
				}
				break;
			
			case 3:
			case 4:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					return "AMCH_PREPBIKE" /* GXT: Find a motorcycle and prepare for the ~a~ Challenge. */;
				}
				else
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1))
					{
						return "AMCH_PREPBIKE" /* GXT: Find a motorcycle and prepare for the ~a~ Challenge. */;
					}
				}
				break;
			
			case 12:
				if (!PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPPLANE" /* GXT: Find a plane and prepare for the ~a~ Challenge. */;
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPAIR" /* GXT: Find an air vehicle and prepare for the ~a~ Challenge. */;
				}
				break;
			
			case 18:
				if ((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), false) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), false)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE"), false))
				{
					return "AMCH_PREPSNIPER" /* GXT: Find a sniper rifle and prepare for the ~a~ Challenge. */;
				}
				break;
			
			case 16:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPLAND" /* GXT: Find a land vehicle and prepare for the ~a~ Challenge. */;
				}
				break;
			}
	}
	return "AMCH_PREPARE" /* GXT: Prepare for the ~a~ Challenge. */;
}

int func_174(int iParam0)//Position - 0x5ECB
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_177() && !func_176()) || func_175(PLAYER::PLAYER_ID(), 21)) || func_175(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_48(&(Global_1836866.f_13)))
		{
			if (!func_1(&(Global_1836866.f_13), Global_262145.f_14 /* Tunable: FM_EVENT_PASSIVE_COOL_DOWN */, 0))
			{
				return 1;
			}
			func_47(&(Global_1836866.f_13));
		}
	}
	else if (BitTest(Global_1895156[iParam0 /*609*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1895156[iParam0 /*609*/].f_1, 9);
}

bool func_175(int iParam0, int iParam1)//Position - 0x5F67
{
	return BitTest(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

bool func_176()//Position - 0x5F7D
{
	return Global_1574582.f_1;
}

bool func_177()//Position - 0x5F8B
{
	return Global_1574582;
}

void func_178()//Position - 0x5F97
{
	if (!BitTest(uLocal_329, 6))
	{
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_478(1, 1);
		AUDIO::STOP_SOUND(iLocal_337);
		MISC::CLEAR_BIT(&uLocal_329, 4);
		func_182();
		func_180();
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
		MISC::SET_BIT(&uLocal_329, 6);
		func_179();
	}
}

void func_179()//Position - 0x5FDD
{
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_7 = 0;
}

void func_180()//Position - 0x5FF3
{
	if (Global_2644655.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_181();
	}
}

void func_181()//Position - 0x600C
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644655.f_6))
	{
		if (!Global_2644655.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2644655 = { Var0 };
	Global_2644655.f_6 = -1;
}

void func_182()//Position - 0x6069
{
	struct<6> Var0;
	
	if (Global_2635560.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635560.f_490 = { Var0 };
	}
}

void func_183()//Position - 0x608E
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!BitTest(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 0))
	{
		if (func_7(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
			return;
		}
		if (func_174(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
			return;
		}
		func_251(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_2990.f_6 = (Local_2990.f_6 + iVar0);
			if (!Global_262145.f_12147 /* Tunable: CHALLENGE_DISABLE_SHARE_CASH */)
			{
				func_249(10, Local_2990.f_6);
			}
			Global_2696952 = iVar0;
			if (func_248())
			{
				func_236(joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"), iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_2990.f_7 = (Local_2990.f_7 + iVar1);
			func_235();
			func_184(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CHALLENGES"), iVar1, 1, -1, 0, 0, 0);
		}
		MISC::SET_BIT(&(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
	}
}

int func_184(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x6185
{
	return func_185(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_185(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x61A7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_195(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
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
				func_191(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_186(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_186(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x623A
{
	struct<3> Var0;
	
	Var0 = { func_189(iParam0, 1) };
	if (iParam0 == func_188(PLAYER::PLAYER_PED_ID()))
	{
		func_187(1);
	}
	func_191(Var0, iParam1, 0, sParam2, iParam3);
}

void func_187(int iParam0)//Position - 0x626E
{
	Global_2672524.f_1682 = iParam0;
}

int func_188(int iParam0)//Position - 0x627F
{
	return iParam0;
}

Vector3 func_189(int iParam0, bool bParam1)//Position - 0x6289
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_190(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_190(int iParam0)//Position - 0x634D
{
	return iParam0;
}

void func_191(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x6357
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672524.f_1081[iVar0 /*30*/].f_6 == 0 || Global_2672524.f_1081[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672524.f_1081[iVar1 /*30*/] = { Param0 };
			Global_2672524.f_1081[iVar1 /*30*/].f_6 = 1;
			Global_2672524.f_1081[iVar1 /*30*/].f_4 = func_194(Global_2672524.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672524.f_1081[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672524.f_1081[iVar1 /*30*/].f_3 = iParam3;
			Global_2672524.f_1081[iVar1 /*30*/].f_8 = iParam4;
			Global_2672524.f_1081[iVar1 /*30*/].f_9 = func_193();
			Global_2672524.f_1081[iVar1 /*30*/].f_10 = func_192();
			StringCopy(&(Global_2672524.f_1081[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672524.f_1081[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_192()//Position - 0x646E
{
	if (Global_2672524.f_1682)
	{
		Global_2672524.f_1682 = 0;
		return 1;
	}
	Global_2672524.f_1682 = 0;
	return 0;
}

var func_193()//Position - 0x6498
{
	var uVar0;
	
	uVar0 = Global_2672524.f_1684;
	Global_2672524.f_1684 = 1;
	return uVar0;
}

float func_194(struct<3> Param0, var uParam3, var uParam4)//Position - 0x64B3
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_195(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x654C
{
	var uVar0;
	
	uVar0 = func_196(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_196(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x656F
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_227();
	if (func_226(sParam2))
	{
	}
	if (func_225())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_223(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_222(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_220(0, &iVar1);
					break;
				
				case 3:
					func_220(1, &iVar1);
					break;
				
				case 1:
					func_218(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1962798)
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
			func_217(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_204((func_216(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 != -1)
				{
					func_217(1166, iVar1, -1);
				}
				func_201(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_197((func_199(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_197((func_199(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_197(int iParam0)//Position - 0x66DA
{
	if (func_225())
	{
		Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5 = iParam0;
		func_198(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_198(int iParam0, int iParam1)//Position - 0x6705
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_199(bool bParam0)//Position - 0x6721
{
	if (bParam0 > -1)
	{
		if (func_12(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_200(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853988[bParam0 /*867*/].f_205.f_5;
			}
		}
		else
		{
			return func_200(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x6772
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

void func_201(int iParam0)//Position - 0x6790
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_149(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_202(func_203(&Var0));
			if (iVar13 == 0)
			{
				func_198(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_200(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_198(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_200(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_198(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_200(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_198(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_200(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_198(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_200(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_202(int iParam0)//Position - 0x685A
{
	if (iParam0 == func_200(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_200(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_200(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_200(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_200(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_203(var* uParam0)//Position - 0x68D0
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2694518;
		}
	}
	return Global_2694518;
}

void func_204(int iParam0, int iParam1, int iParam2)//Position - 0x68F3
{
	if (func_225())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10242 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_215(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_215(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10241 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
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
		if (Global_262145.f_10241 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_214(PLAYER::PLAYER_ID()))
		{
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1 = iParam0;
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6 = func_211(iParam0, 1);
		}
		func_208(640, iParam0, -1, 1);
		func_208(641, func_211(iParam0, 1), -1, 1);
		func_205(-1109644434, 7, 0);
	}
}

void func_205(int iParam0, int iParam1, int iParam2)//Position - 0x6A05
{
	int iVar0;
	
	if (func_207(iParam1, iParam2))
	{
		iVar0 = func_206();
		Global_2694470[iVar0] = iParam1;
		Global_2694481[iVar0] = iParam0;
	}
}

int func_206()//Position - 0x6A32
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

int func_207(int iParam0, var uParam1)//Position - 0x6A67
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

void func_208(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6AED
{
	int iVar0;
	
	iVar0 = func_209(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_209(int iParam0, var uParam1)//Position - 0x6B10
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_210(uParam1));
}

int func_210(var uParam0)//Position - 0x6B25
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
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

int func_211(int iParam0, bool bParam1)//Position - 0x6B59
{
	if (bParam1)
	{
	}
	return func_212(iParam0, 0);
}

int func_212(int iParam0, int iParam1)//Position - 0x6B6D
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
		if (func_213(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_213(iVar3) < iParam0)
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

int func_213(int iParam0)//Position - 0x6C28
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return 663800;
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_214(int iParam0)//Position - 0x7163
{
	if (!func_17(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672524.f_1, iParam0);
}

int func_215(int iParam0, int iParam1)//Position - 0x7182
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_209(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_216(int iParam0)//Position - 0x71B1
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_215(640, -1);
			}
			else if (func_214(iParam0))
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_215(640, -1);
	}
	return 0;
}

void func_217(int iParam0, int iParam1, int iParam2)//Position - 0x7208
{
	int iVar0;
	
	iVar0 = func_215(iParam0, func_210(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_208(iParam0, iVar0, iParam2, 1);
}

void func_218(int iParam0)//Position - 0x7230
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
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_77(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_150(PLAYER::PLAYER_ID(), bVar5))
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
		iVar6 = SYSTEM::ROUND((func_219(*iParam0, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_219(*iParam0, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_219(int iParam0, int iParam1)//Position - 0x731C
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_220(bool bParam0, int iParam1)//Position - 0x733D
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
				if (func_12(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_150(PLAYER::PLAYER_ID(), bVar4))
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
			if (func_12(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_221(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_150(PLAYER::PLAYER_ID(), bVar4))
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
		iVar5 = SYSTEM::ROUND((func_219(*iParam1, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_219(*iParam1, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_221(int iParam0, bool bParam1)//Position - 0x7455
{
	return SYSTEM::VDIST(func_39(iParam0), func_39(bParam1));
	return 0f;
}

int func_222(int iParam0)//Position - 0x7471
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_219(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_223(int iParam0)//Position - 0x74A8
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_216(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_216(PLAYER::PLAYER_ID());
		}
	}
	if (func_224(8000, 0, 0) > 0)
	{
		if (func_224(8000, 0, 0) < (iParam0 + func_216(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_224(8000, 0, 0) - func_216(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_224(int iParam0, bool bParam1, int iParam2)//Position - 0x750C
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
	return func_213(iParam0);
}

int func_225()//Position - 0x7532
{
	return 1;
}

int func_226(char* sParam0)//Position - 0x753B
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

int func_227()//Position - 0x7574
{
	int iVar0;
	
	if (func_234(PLAYER::PLAYER_ID()) || func_233(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10274 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10274 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_231() || func_228(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23463 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23463 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (Global_262145.f_7178 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7178 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

int func_228(int iParam0)//Position - 0x760E
{
	return func_229(func_230(iParam0));
}

int func_229(int iParam0)//Position - 0x7620
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_230(int iParam0)//Position - 0x763A
{
	if (func_17(iParam0))
	{
		if (func_123(iParam0, 0))
		{
			return Global_1895156[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

bool func_231()//Position - 0x7666
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_65();
	}
	return func_232(Global_4718592.f_117591);
}

int func_232(int iParam0)//Position - 0x768A
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5043[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_233(int iParam0)//Position - 0x76C4
{
	return Global_2657704[iParam0 /*463*/].f_121 == 2;
}

bool func_234(int iParam0)//Position - 0x76D9
{
	return Global_2657704[iParam0 /*463*/].f_121 == 7;
}

void func_235()//Position - 0x76EE
{
	Global_2696289 = 1;
}

void func_236(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x76FB
{
	int iVar0;
	
	if (!func_248())
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
			if (iParam1 > 0 || Global_262145.f_28582 /* Tunable: 1103207774 */)
			{
				func_237(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_237(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			if (iParam1 > 0 || Global_262145.f_28582 /* Tunable: 1103207774 */)
			{
				func_237(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
			func_237(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x7FC0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_248())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_16()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4536679 = 1;
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
			*uParam0 = func_244(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			Global_4536677 = 1;
			Global_4536680 = iParam4;
			Global_4536682 = iParam3;
			Global_4536683 = 1;
			Global_4536681 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536680 = iParam4;
			Global_4536682 = iParam3;
			Global_4536683 = 1;
			Global_4536681 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_243(1, iParam4);
			Global_4536677 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_238(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_238(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x816E
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_239(iParam0);
	}
}

void func_239(int iParam0)//Position - 0x81A6
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_248())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_242(iParam0))
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
		func_240(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_240(var uParam0)//Position - 0x81FA
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
	func_241(&(uParam0->f_14));
	func_241(&(uParam0->f_14.f_13));
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

void func_241(var uParam0)//Position - 0x8306
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

int func_242(int iParam0)//Position - 0x834E
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_243(int iParam0, int iParam1)//Position - 0x8379
{
	Global_2697092 = iParam1;
	Global_2697091 = iParam0;
}

int func_244(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x838D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_248())
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
				func_245(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_245(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x84CA
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
	iVar36 = func_247(Var0.f_1);
	if ((Global_262145.f_24258 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24259 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24260 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_246();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_246()//Position - 0x855C
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_247(bool bParam0)//Position - 0x856C
{
	var uVar0;
	
	if (func_17(bParam0))
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_248()//Position - 0x8587
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_249(int iParam0, int iParam1)//Position - 0x859E
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_24178 /* Tunable: 277748102 */ != -1)
		{
			if (func_250())
			{
				Global_2794162.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7127 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7127 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2794162.f_284 = iParam1;
				Global_2794162.f_285 = 0;
			}
		}
	}
}

int func_250()//Position - 0x85F3
{
	if (MISC::IS_PC_VERSION() && Global_1984719 == 0)
	{
		return 0;
	}
	return 0;
}

void func_251(var uParam0, var uParam1)//Position - 0x8612
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_18(NETWORK::PARTICIPANT_ID_TO_INT(), 1))
	{
		iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_638.f_1 - iLocal_327)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_12082 /* Tunable: PARTICIPATION_T_CAP */)
		{
			iVar1 = Global_262145.f_12082 /* Tunable: PARTICIPATION_T_CAP */;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_289() * iVar1);
		*uParam1 = (func_288() * iVar1);
		fVar2 = func_287();
		if (fVar2 > 0f && !BitTest(Local_638.f_2, 0))
		{
			iVar3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_29(1)) / 60f) / 1000f));
			if (iVar3 > func_286())
			{
				iVar3 = func_286();
			}
			iVar4 = Local_638.f_51;
			if (iVar4 > func_285())
			{
				iVar4 = func_285();
			}
			*uParam0 = (*uParam0 + SYSTEM::ROUND((IntToFloat(func_278(func_284(), func_283(), iVar3, fVar2, func_282(), func_281(), func_280(), iVar4)) * Global_262145.f_12095 /* Tunable: CHALLENGE_EVENT_MULTIPLIER_CASH */)));
			*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_278(func_277(), func_276(), iVar3, fVar2, func_282(), func_281(), func_280(), iVar4)) * Global_262145.f_12096 /* Tunable: CHALLENGE_EVENT_MULTIPLIER_RP */)));
		}
		else
		{
			func_274(1);
		}
	}
	else
	{
		func_274(0);
	}
	func_252(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_252(var uParam0, int iParam1)//Position - 0x8757
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_273())
		{
			if (func_272(0))
			{
				if (!func_268(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_267()))
					{
						if (func_266() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_266());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_264(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_257("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_267(), iVar0, 0, 0, 1);
						}
						func_256(20);
						func_253(func_267(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_253(bool bParam0, int iParam1, int iParam2)//Position - 0x87F7
{
	struct<8> Var0;
	
	if (func_12(bParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_255(bParam0);
		func_254(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, func_247(bParam0));
	}
}

void func_254(var uParam0, var uParam1)//Position - 0x884D
{
	*uParam0 = Global_1924276.f_9;
	*uParam1 = Global_1924276.f_10;
}

var func_255(bool bParam0)//Position - 0x8867
{
	return Global_1895156[bParam0 /*609*/].f_511;
}

void func_256(int iParam0)//Position - 0x887B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2794162.f_5231.f_7[iVar0]), iVar1);
}

int func_257(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x88A4
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_70(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_262(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_258(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_258(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x893C
{
	int iVar0;
	
	if ((!func_261() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_14(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_259(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944768.f_5[iVar0 /*53*/] = iParam0;
		Global_1944768.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944768.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944768.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944768.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944768.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944768.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_259(int iParam0)//Position - 0x8A44
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944768 - 1))
	{
		if (iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1)
		{
			func_260(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944768++;
	if (Global_1944768 > 5)
	{
		Global_1944768 = 5;
		return Global_1944768;
	}
	return (Global_1944768 - 1);
}

void func_260(int iParam0)//Position - 0x8AA6
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944768.f_5[iVar0 /*53*/] = { Global_1944768.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_261()//Position - 0x8ADF
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_262(char* sParam0)//Position - 0x8AF0
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_263(&cVar0);
}

var func_263(char[4] cParam0)//Position - 0x8B14
{
	return cParam0;
}

void func_264(int iParam0, bool bParam1)//Position - 0x8B1E
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_265(1);
	}
	else
	{
		iVar1 = func_265(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_265(bool bParam0)//Position - 0x8B50
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_13038 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_266()//Position - 0x8B76
{
	return Global_262145.f_13037 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

bool func_267()//Position - 0x8B85
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_268(bool bParam0)//Position - 0x8B9A
{
	return func_269(PLAYER::PLAYER_ID(), bParam0);
}

int func_269(bool bParam0, bool bParam1)//Position - 0x8BAC
{
	return func_270(bParam0, bParam1, 1);
}

int func_270(int iParam0, bool bParam1, int iParam2)//Position - 0x8BBD
{
	int iVar0;
	
	if (!func_17(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_271(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_113() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_271(bool bParam0, int iParam1)//Position - 0x8C1A
{
	if (func_17(bParam0))
	{
		if (Global_1895156[bParam0 /*609*/].f_10 != func_113())
		{
			if (Global_1895156[bParam0 /*609*/].f_10 == bParam0 && Global_1895156[bParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_272(bool bParam0)//Position - 0x8C69
{
	return func_92(PLAYER::PLAYER_ID(), bParam0);
}

bool func_273()//Position - 0x8C7B
{
	return func_93(PLAYER::PLAYER_ID());
}

void func_274(bool bParam0)//Position - 0x8C8B
{
	if (bParam0)
	{
		if (func_275(1))
		{
			MISC::SET_BIT(&Global_1836891, 1);
		}
	}
	else if (func_275(2))
	{
		MISC::SET_BIT(&Global_1836891, 2);
	}
}

int func_275(int iParam0)//Position - 0x8CBD
{
	var uVar0;
	
	uVar0 = func_215(2537, -1);
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

int func_276()//Position - 0x8D69
{
	return Global_262145.f_11582 /* Tunable: CHALLENGE_RP_REWARD_SCALE */;
}

int func_277()//Position - 0x8D78
{
	return Global_262145.f_11580 /* Tunable: CHALLENGE_RP_REWARD_BASE */;
}

int func_278(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)//Position - 0x8D87
{
	return func_279(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_279(int iParam0, int iParam1, int iParam2)//Position - 0x8DB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_280()//Position - 0x8E00
{
	return Global_262145.f_11585 /* Tunable: CHALLENGE_REWARD_PLAYER_DIVIDER */;
}

float func_281()//Position - 0x8E0F
{
	return Global_262145.f_11584 /* Tunable: CHALLENGE_REWARD_PLAYER_WEIGHTING */;
}

float func_282()//Position - 0x8E1E
{
	return Global_262145.f_11583 /* Tunable: CHALLENGE_REWARD_TIME_WEIGHTING */;
}

int func_283()//Position - 0x8E2D
{
	return Global_262145.f_11581 /* Tunable: CHALLENGE_CASH_REWARD_SCALE */;
}

int func_284()//Position - 0x8E3C
{
	return Global_262145.f_11579 /* Tunable: CHALLENGE_CASH_REWARD_BASE */;
}

int func_285()//Position - 0x8E4B
{
	return Global_262145.f_11987 /* Tunable: CHALLENGE_P_CAP */;
}

int func_286()//Position - 0x8E5A
{
	return Global_262145.f_11986 /* Tunable: CHALLENGE_T_CAP */;
}

var func_287()//Position - 0x8E69
{
	if (func_21(0))
	{
		return Global_262145.f_11606 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_0 */;
	}
	if (func_21(1))
	{
		return Global_262145.f_11607 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_1 */;
	}
	if (func_21(2))
	{
		return Global_262145.f_11608 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_2 */;
	}
	return Global_262145.f_11609 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_3 */;
}

int func_288()//Position - 0x8EB7
{
	return Global_262145.f_11578 /* Tunable: CHALLENGE_EOM_DEFAULT_RP_REWARD */;
}

int func_289()//Position - 0x8EC6
{
	return Global_262145.f_11577 /* Tunable: CHALLENGE_EOM_DEFAULT_CASH_REWARD */;
}

void func_290()//Position - 0x8ED5
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (!BitTest(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 1) && (func_302() || BitTest(Local_638.f_2, 0)))
	{
		if (func_68(func_301()))
		{
			func_300();
		}
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(Local_638.f_2, 0))
			{
				if (func_342(0))
				{
					iVar2 = Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4;
					func_296(&iVar0, &fVar1, iVar2, 1);
					if (func_21(0))
					{
						if (func_19())
						{
							func_294(64, func_295(Local_638.f_3, 0, 0, 0), "AMCH_WINNER" /* GXT: You won the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_WIN" /* GXT: WINNER */, 15000, -1, fVar1, func_409(Local_638.f_3), 1, 2, 0);
						}
						else if (func_293())
						{
							func_294(69, func_295(Local_638.f_3, 0, 0, 0), "AMCH_WINNER_T" /* GXT: You won the ~a~ Challenge with a time of ~a~ */, "AMCH_WIN" /* GXT: WINNER */, 15000, iVar0, -1f, func_409(Local_638.f_3), 1, 2, 0);
						}
						else
						{
							func_294(64, func_295(Local_638.f_3, 0, 0, iVar0), "AMCH_WINNER" /* GXT: You won the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_WIN" /* GXT: WINNER */, 15000, iVar0, -1f, func_409(Local_638.f_3), 1, 2, 0);
						}
					}
					else if (func_21(1))
					{
						if (func_19())
						{
							func_294(67, func_295(Local_638.f_3, 0, 0, 0), "AMCH_2ND" /* GXT: You came second in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, -1, fVar1, func_409(Local_638.f_3), 1, 2, 0);
						}
						else if (func_293())
						{
							func_294(75, func_295(Local_638.f_3, 0, 0, 0), "AMCH_2ND_T" /* GXT: You came second in the ~a~ Challenge with a time of ~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_409(Local_638.f_3), 1, 2, 0);
						}
						else
						{
							func_294(67, func_295(Local_638.f_3, 0, 0, iVar0), "AMCH_2ND" /* GXT: You came second in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_409(Local_638.f_3), 1, 2, 0);
						}
					}
					else if (func_21(2))
					{
						if (func_19())
						{
							func_294(67, func_295(Local_638.f_3, 0, 0, 0), "AMCH_3RD" /* GXT: You came third in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, -1, fVar1, func_409(Local_638.f_3), 1, 2, 0);
						}
						else if (func_293())
						{
							func_294(75, func_295(Local_638.f_3, 0, 0, 0), "AMCH_3RD_T" /* GXT: You came third in the ~a~ Challenge with a time of ~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_409(Local_638.f_3), 1, 2, 0);
						}
						else
						{
							func_294(67, func_295(Local_638.f_3, 0, 0, iVar0), "AMCH_3RD" /* GXT: You came third in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_409(Local_638.f_3), 1, 2, 0);
						}
					}
					else
					{
						iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_638.f_4[0]);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
						{
							iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
							if (Local_2605[Local_638.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2605[Local_638.f_4[0] /*12*/].f_4;
							func_296(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE" /* GXT: <C>~a~</C>~s~ won the ~a~ Challenge with a score of ~1~~a~ */;
							if (func_19())
							{
								func_292(76, func_113(), func_295(Local_638.f_3, 0, 0, 0), sVar5, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, func_409(Local_638.f_3), -1, fVar1, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
							else if (func_293())
							{
								func_292(77, func_113(), func_295(Local_638.f_3, 0, 0, 0), "AMCH_LOSE_T" /* GXT: <C>~a~</C>~s~ won the ~a~ Challenge with a time of ~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, func_409(Local_638.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
							else
							{
								func_292(76, func_113(), func_295(Local_638.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, func_409(Local_638.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
						}
					}
				}
				else
				{
					func_53(66, "AMCH_OVER" /* GXT: CHALLENGE OVER */, "AMCH_NOWIN" /* GXT: No players achieved a score */, 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_52("", "", 1);
			}
			MISC::SET_BIT(&(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 1);
			func_291(133);
		}
	}
}

void func_291(int iParam0)//Position - 0x9291
{
	if (iParam0 == iParam0)
	{
	}
}

int func_292(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)//Position - 0x92A0
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
	func_116(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_54(&Var0);
}

int func_293()//Position - 0x932F
{
	return 0;
}

int func_294(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x9338
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
	func_116(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_114(&(Var0.f_69), iParam10);
	}
	return func_54(&Var0);
}

char* func_295(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x93C9
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

int func_296(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x9556
{
	if (func_19())
	{
		if (bParam3)
		{
			*fParam1 = (func_297(Local_638.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (SYSTEM::TO_FLOAT(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_297(int iParam0, int iParam1)//Position - 0x959D
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
				return func_299(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_298(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_298(float fParam0)//Position - 0x9640
{
	return (fParam0 / 1.609344f);
}

float func_299(float fParam0)//Position - 0x9650
{
	return (fParam0 / 0.3048f);
}

void func_300()//Position - 0x9660
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672524.f_2514[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672524.f_2514[iVar0 /*80*/].f_2 = 5;
			func_114(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_301()//Position - 0x96AB
{
	return Global_2672524.f_2514[0 /*80*/].f_1;
}

var func_302()//Position - 0x96BF
{
	return BitTest(Global_1836866.f_1, 25);
}

int func_303(var uParam0, bool bParam1)//Position - 0x96D0
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_314()) && !(func_123(PLAYER::PLAYER_ID(), 0) && (func_119(PLAYER::PLAYER_ID()) || func_313(PLAYER::PLAYER_ID())))) && !func_311(PLAYER::PLAYER_ID())) && !func_310(PLAYER::PLAYER_ID()))
	{
		func_309();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_48(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836866.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2794162.f_4694), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_308(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_48(&(uParam0->f_5)))
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
				func_305();
				func_308(uParam0, 2);
			}
			break;
		
		case 2:
			func_305();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_304("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
				{
					HUD::CLEAR_HELP(true);
				}
				func_308(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2794162.f_4694), 1);
				func_308(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2794162.f_4694), 1);
			return 1;
	}
	return 0;
}

bool func_304(char* sParam0)//Position - 0x985A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_305()//Position - 0x986D
{
	if (BitTest(Global_2794162.f_4694, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2794162.f_853, 2)) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75816) && !Global_60666) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2794162.f_4694), 1);
			func_307("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */, -1);
			func_306(1);
			MISC::CLEAR_BIT(&(Global_2794162.f_4694), 0);
		}
	}
}

void func_306(int iParam0)//Position - 0x98EA
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_314())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_307(char* sParam0, int iParam1)//Position - 0x9918
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

void func_308(var uParam0, int iParam1)//Position - 0x992F
{
	*uParam0 = iParam1;
}

void func_309()//Position - 0x993C
{
	Global_2696290 = 1;
}

int func_310(int iParam0)//Position - 0x9949
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_5, 4);
	}
	return 0;
}

int func_311(bool bParam0)//Position - 0x996E
{
	int iVar0;
	
	if (bParam0 != func_113())
	{
		if (func_12(bParam0, 1, 1))
		{
			if (Global_2657704[bParam0 /*463*/].f_321.f_7 != -1)
			{
				iVar0 = func_312(Global_2657704[bParam0 /*463*/].f_321.f_7);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_312(int iParam0)//Position - 0x99C3
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

bool func_313(bool bParam0)//Position - 0x9E77
{
	return func_118(bParam0, 19);
}

bool func_314()//Position - 0x9E87
{
	return Global_2672524.f_2514[0 /*80*/].f_1 != 0;
}

void func_315()//Position - 0x9E9D
{
	bool bVar0[3];
	bool bVar4;
	var uVar5[3];
	var uVar9[3];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26[3];
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	
	if (Local_638.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_339() && !func_111(PLAYER::PLAYER_ID()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			bVar0[iVar16] = func_113();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_638.f_4[iVar16] > -1)
			{
				iVar30 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_638.f_4[iVar16]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar30))
				{
					bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar30);
					if (func_12(bVar4, 0, 1))
					{
						if (!func_14(bVar4, 0))
						{
							if (Local_2605[Local_638.f_4[iVar16] /*12*/].f_4 != 0)
							{
								bVar0[iVar24] = bVar4;
								func_296(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2605[Local_638.f_4[iVar16] /*12*/].f_4, 1);
								iVar24++;
								if (func_272(1))
								{
									if (func_92(bVar4, 1))
									{
										uVar26[iVar16] = func_70(bVar4, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (func_111(PLAYER::PLAYER_ID()))
		{
			iVar31 = func_337();
			iVar32 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar31);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar32))
			{
				iVar33 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar32);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_296(&iVar13, &fVar18, iLocal_331, 1);
		func_296(&iVar14, &fVar19, Local_2605[iVar17 /*12*/].f_4, 1);
		iVar34 = func_29(0);
		iVar35 = func_557(&(Local_638.f_39), 0, 0);
		iVar15 = func_555(0, (iVar34 - iVar35));
		if (func_18(-1, 0))
		{
			func_334(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (BitTest(uLocal_329, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_339() || Local_638.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_638.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_19())
		{
			func_330(bVar0[0], bVar0[1], bVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_295(Local_638.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_331(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_293())
		{
			func_329(bVar0[0], bVar0[1], bVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_331(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_320(bVar0[0], bVar0[1], bVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_295(Local_638.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_331(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_316();
	}
}

void func_316()//Position - 0xA18D
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_319();
	if (fVar0 >= 0f)
	{
		if (Local_638.f_37 == 3)
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
					{
						func_318(iVar1, &fLocal_335);
						fVar2 = (fVar0 + fLocal_335);
						HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(fVar2, true, 21);
						func_317(fVar0);
						return;
					}
				}
			}
		}
		if (func_304("AMCH_FLYLOW" /* GXT: You must fly lower to score in the challenge. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (BitTest(uLocal_329, 4))
		{
			AUDIO::STOP_SOUND(iLocal_337);
			MISC::CLEAR_BIT(&uLocal_329, 4);
		}
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	}
}

void func_317(float fParam0)//Position - 0xA239
{
	float fVar0;
	
	if (STATS::STAT_GET_FLYING_ALTITUDE(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_558(6);
			if (!BitTest(uLocal_329, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_337, "Altitude_Warning", "EXILE_1", true);
				MISC::SET_BIT(&uLocal_329, 4);
			}
		}
		else
		{
			if (func_304("AMCH_FLYLOW" /* GXT: You must fly lower to score in the challenge. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (BitTest(uLocal_329, 4))
			{
				AUDIO::STOP_SOUND(iLocal_337);
				MISC::CLEAR_BIT(&uLocal_329, 4);
			}
		}
	}
}

float func_318(int iParam0, float* fParam1)//Position - 0xA2A5
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, fParam1, true, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar4, false, false);
	if (STATS::STAT_IS_PLAYER_VEHICLE_ABOVE_OCEAN())
	{
		func_558(3);
		MISC::SET_BIT(&uLocal_329, 10);
		func_28(&uLocal_325, 0, 0);
	}
	else if (BitTest(uLocal_329, 10))
	{
		if (func_1(&uLocal_325, 2000, 0))
		{
			MISC::CLEAR_BIT(&uLocal_329, 10);
		}
	}
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	fVar0 = (Var1.f_2 - *fParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_319()//Position - 0xA338
{
	switch (Local_638.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0xA367
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_326(0) == 0)
	{
		return;
	}
	func_325();
	iVar1 = 0;
	if (((Global_2695780[0] != iParam0 || Global_2695780[1] != iParam1) || Global_2695780[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2695780[0] = iParam0;
	Global_2695780[1] = iParam1;
	Global_2695780[2] = iParam2;
	Global_2695780[3] = 0;
	Global_2695780[4] = 0;
	if (Global_2695780[0] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[0]);
			Global_2695786[0 /*16*/] = { func_324(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_321(iParam3, &(Global_2695786[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695780[1] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[1]);
			Global_2695786[1 /*16*/] = { func_324(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_321(iParam4, &(Global_2695786[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695780[2] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[2]);
			Global_2695786[2 /*16*/] = { func_324(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_321(iParam5, &(Global_2695786[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_321(iParam6, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_113())
			{
				if (func_174(PLAYER::PLAYER_ID()) == 0)
				{
					func_321(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_321(iParam7, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_321(iParam7, "HUD_UBEST" /* GXT: YOUR BEST */, -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_226(sParam14))
	{
		sVar2 = sParam14;
	}
	func_155(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_154();
}

void func_321(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0xA636
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
			if (func_157(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_156(6, iVar0);
		Global_1655612.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1655612.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655612.f_4041.f_183[iVar0] = iParam3;
		Global_1655612.f_4041.f_172[iVar0] = iParam2;
		Global_1655612.f_4041.f_260[iVar0] = iParam4;
		Global_1655612.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1655612.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1655612.f_4041.f_443[iVar0] = iParam7;
		Global_1655612.f_4041.f_454[iVar0] = fParam8;
		Global_1655612.f_4041.f_497[iVar0] = iParam9;
		Global_1655612.f_4041.f_508[iVar0] = iParam10;
		Global_1655612.f_4041.f_205[iVar0] = iParam11;
		Global_1655612.f_4041.f_216[iVar0] = iParam12;
		Global_1655612.f_4041.f_227[iVar0] = iParam13;
		Global_1655612.f_4041.f_238[iVar0] = iParam14;
		Global_1655612.f_4041.f_249[iVar0] = iParam15;
		Global_1655612.f_4041.f_519[iVar0] = iParam16;
		Global_1655612.f_4041.f_530[iVar0] = iParam17;
		Global_1655612.f_4041.f_541[iVar0] = iParam18;
		Global_1655612.f_4041.f_552[iVar0] = iParam19;
		Global_1655612.f_4041.f_563[iVar0] = iParam20;
		Global_1655612.f_4041.f_574[iVar0] = iParam21;
		Global_1655612.f_4041.f_585[iVar0] = iParam22;
		Global_1655612.f_4041.f_596[iVar0] = iParam23;
		Global_1655612.f_4041.f_607[iVar0] = iParam24;
		Global_1655612.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_323())
		{
			Global_1655612.f_1172 = 1;
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
				Global_1655612.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1655612.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1655612.f_1172 = 1;
			}
			if (func_322())
			{
				Global_1655612.f_1176 = 1;
			}
		}
	}
}

int func_322()//Position - 0xA8A7
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

int func_323()//Position - 0xA8CB
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_324(int iParam0, char* sParam1)//Position - 0xA909
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

void func_325()//Position - 0xA9AB
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2696293 = 1;
}

int func_326(bool bParam0)//Position - 0xA9CE
{
	if (func_328())
	{
		return 0;
	}
	if (func_327())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_327()//Position - 0xAA05
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0;
}

bool func_328()//Position - 0xAA1C
{
	return BitTest(Global_2621446, 12);
}

void func_329(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xAA2B
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_326(0) == 0)
	{
		return;
	}
	func_325();
	iVar1 = 0;
	if (((Global_2695780[0] != iParam0 || Global_2695780[1] != iParam1) || Global_2695780[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2695780[0] = iParam0;
	Global_2695780[1] = iParam1;
	Global_2695780[2] = iParam2;
	Global_2695780[3] = 0;
	Global_2695780[4] = 0;
	if (Global_2695780[0] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[0]);
			Global_2695786[0 /*16*/] = { func_324(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_155(iParam3, &(Global_2695786[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2695780[1] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[1]);
			Global_2695786[1 /*16*/] = { func_324(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_155(iParam4, &(Global_2695786[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2695780[2] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[2]);
			Global_2695786[2 /*16*/] = { func_324(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_155(iParam5, &(Global_2695786[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_155(iParam6, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_113())
			{
				if (func_174(PLAYER::PLAYER_ID()) == 0)
				{
					func_155(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_155(iParam7, "HUD_USCORE" /* GXT: YOUR SCORE */, 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_155(iParam7, "HUD_UBEST" /* GXT: YOUR BEST */, 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_226(sParam13))
	{
		sVar2 = sParam13;
	}
	func_155(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_154();
}

void func_330(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)//Position - 0xACB5
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_326(0) == 0)
	{
		return;
	}
	func_325();
	iVar1 = 0;
	if (((Global_2695780[0] != iParam0 || Global_2695780[1] != iParam1) || Global_2695780[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2695780[0] = iParam0;
	Global_2695780[1] = iParam1;
	Global_2695780[2] = iParam2;
	Global_2695780[3] = 0;
	Global_2695780[4] = 0;
	if (Global_2695780[0] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[0]);
			Global_2695786[0 /*16*/] = { func_324(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_321(-1, &(Global_2695786[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695780[1] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[1]);
			Global_2695786[1 /*16*/] = { func_324(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_321(-1, &(Global_2695786[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2695780[2] != func_113())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2695780[2]);
			Global_2695786[2 /*16*/] = { func_324(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_321(-1, &(Global_2695786[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_321(-1, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_113())
			{
				if (func_174(PLAYER::PLAYER_ID()) == 0)
				{
					func_321(-1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_321(-1, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_174(PLAYER::PLAYER_ID()) == 0)
			{
				func_321(-1, "HUD_UBEST" /* GXT: YOUR BEST */, -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_226(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_155(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_154();
}

char* func_331()//Position - 0xAF8F
{
	return "HUD_COUNTDOWN" /* GXT: EVENT END */;
	switch (func_333(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG" /* GXT: MOVING TARGET END */;
		
		case 132:
			return "AET_CHK_COLL" /* GXT: CHECKPOINTS END */;
		
		case 133:
			switch (func_332())
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

int func_332()//Position - 0xB139
{
	if (func_333(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2794162.f_5152;
	}
	return -1;
}

int func_333(int iParam0)//Position - 0xB15C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/];
	}
	return -1;
}

void func_334(int iParam0)//Position - 0xB17B
{
	if (func_336(PLAYER::PLAYER_ID()) || func_335(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2794162.f_5068, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2794162.f_5070)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2794162.f_5070));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2794162.f_5078 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2794162.f_5078);
				Global_2794162.f_5078 = -1;
			}
			Global_2794162.f_5068 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2794162.f_5068, 0))
		{
			if (BitTest(Global_2794162.f_5068, 4))
			{
				if (!BitTest(Global_2794162.f_5068, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2794162.f_5070)))
						{
							StringCopy(&(Global_2794162.f_5070), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2794162.f_5068), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2794162.f_5068, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2794162.f_5068, 1))
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
				MISC::SET_BIT(&(Global_2794162.f_5068), 1);
			}
			else if (!BitTest(Global_2794162.f_5068, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2794162.f_5070), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2794162.f_5068), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2794162.f_5068, 3))
				{
					Global_2794162.f_5078 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2794162.f_5078, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2794162.f_5068), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2794162.f_5068, 0))
			{
				Global_2794162.f_5068 = 0;
				Global_2794162.f_5078 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2794162.f_5068), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2794162.f_5068, 2))
				{
					MISC::SET_BIT(&(Global_2794162.f_5068), 2);
					MISC::SET_BIT(&(Global_2794162.f_5068), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2794162.f_5068), 5);
					MISC::CLEAR_BIT(&(Global_2794162.f_5068), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2794162.f_5068, 0))
		{
			Global_2794162.f_5068 = 0;
			Global_2794162.f_5078 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2794162.f_5068), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2794162.f_5068), 2);
				MISC::SET_BIT(&(Global_2794162.f_5068), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2794162.f_5068), 2);
				MISC::CLEAR_BIT(&(Global_2794162.f_5068), 5);
			}
		}
	}
}

int func_335(bool bParam0)//Position - 0xB55C
{
	if (bParam0 != func_113() && func_12(bParam0, 1, 1))
	{
		return Global_2657704[bParam0 /*463*/].f_321.f_17;
	}
	return -1;
}

int func_336(int iParam0)//Position - 0xB58D
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

var func_337()//Position - 0xB5D4
{
	if (ENTITY::DOES_ENTITY_EXIST(func_338()))
	{
		return func_338();
	}
	return func_108();
}

var func_338()//Position - 0xB5F2
{
	return Global_2621446.f_3;
}

int func_339()//Position - 0xB600
{
	switch (Local_638.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_340()//Position - 0xB659
{
	int iVar0;
	struct<42> Var1;
	bool bVar43;
	int iVar44;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_726.f_534[iVar0 /*42*/] = { Var1 };
		Local_726.f_534[iVar0 /*42*/].f_1 = func_113();
		if (Local_638.f_4[iVar0] > -1)
		{
			iVar44 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_638.f_4[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar44))
			{
				bVar43 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar44);
				if (!func_14(bVar43, 0))
				{
					Local_726.f_534[iVar0 /*42*/] = Local_638.f_4[iVar0];
					Local_726.f_534[iVar0 /*42*/].f_1 = bVar43;
					Local_726.f_534[iVar0 /*42*/].f_7 = Local_2605[Local_638.f_4[iVar0] /*12*/].f_4;
					Local_726.f_534[iVar0 /*42*/].f_31 = -1;
					Local_726.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_341()//Position - 0xB746
{
	MISC::SET_BIT(&(Global_2794162.f_1834), 19);
}

int func_342(int iParam0)//Position - 0xB75B
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_638.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_22(Local_2605[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_343()//Position - 0xB790
{
}

void func_344()//Position - 0xB798
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_296(&iVar1, &fVar2, iLocal_331, 1);
	switch (Local_638.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_346(sVar0, fVar2 >= 70f);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = func_345(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = STATS::STAT_GET_CURRENT_SPEED();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_346(sVar0, bVar3);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = SYSTEM::TO_FLOAT(iVar1);
				fVar2 = func_345(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_345(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_336 != iLocal_331)
			{
				if (iLocal_331 > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_338, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", false);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_338, "Count", SYSTEM::TO_FLOAT(iVar1));
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", false);
				}
			}
			iLocal_336 = iLocal_331;
			break;
	}
	if (func_21(0))
	{
		if (!BitTest(uLocal_329, 3))
		{
			if (func_268(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&uLocal_329, 3);
		}
	}
	else if (BitTest(uLocal_329, 3))
	{
		if (func_268(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&uLocal_329, 3);
	}
}

float func_345(float fParam0, float fParam1)//Position - 0xB94F
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_346(char* sParam0, bool bParam1)//Position - 0xB966
{
	if (bParam1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		{
			AUDIO::START_AUDIO_SCENE(sParam0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

void func_347()//Position - 0xB996
{
	int iVar0;
	
	if ((!func_174(PLAYER::PLAYER_ID()) && !func_14(PLAYER::PLAYER_ID(), 0)) && func_12(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = func_373();
		if (iVar0 != Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4)
		{
			if (func_22(iVar0, iLocal_328) || func_372(iVar0, iLocal_328))
			{
				if (!func_371() || func_1(&uLocal_317, 1000, 0))
				{
					func_28(&uLocal_317, 0, 0);
					iLocal_328 = iVar0;
					Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = iVar0;
					func_350();
					if (iLocal_327 == 0)
					{
						iLocal_327 = NETWORK::GET_NETWORK_TIME();
					}
					if (Local_2990.f_11 == 0)
					{
						Local_2990.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
				}
			}
		}
		iLocal_331 = func_348();
	}
}

int func_348()//Position - 0xBA58
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_638.f_3)
	{
		case 0:
			fVar1 = STATS::STAT_GET_CURRENT_JUMP_DISTANCE();
			break;
		
		case 1:
			fVar1 = STATS::STAT_GET_CURRENT_SKYDIVING_DISTANCE();
			break;
		
		case 2:
			fVar1 = STATS::STAT_GET_CURRENT_SPEED();
			break;
		
		case 3:
			fVar1 = STATS::STAT_GET_CURRENT_FRONT_WHEEL_DISTANCE();
			break;
		
		case 4:
			fVar1 = STATS::STAT_GET_CURRENT_REAR_WHEEL_DISTANCE();
			break;
		
		case 5:
			fVar1 = STATS::STAT_GET_CURRENT_DRIVE_NOCRASH_DISTANCE();
			break;
		
		case 8:
			iVar0 = STATS::STAT_GET_CURRENT_NEAR_MISS_NOCRASH_PRECISE();
			break;
		
		case 9:
			fVar1 = STATS::STAT_GET_CURRENT_DRIVING_REVERSE_DISTANCE();
			break;
		
		case 11:
			fVar1 = STATS::STAT_GET_CHALLENGE_FLYING_DIST();
			break;
		
		case 12:
			fVar1 = STATS::STAT_GET_CHALLENGE_FLYING_DIST();
			break;
		
		case 13:
			fVar1 = STATS::STAT_GET_VEHICLE_BAIL_DISTANCE();
			break;
	}
	if (func_19())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	iVar2 = MISC::ABSI(iVar0);
	func_349(&iVar2);
	if (iVar2 == iLocal_330)
	{
		if (func_22(iVar2, 0))
		{
			if (!BitTest(uLocal_329, 1))
			{
				func_28(&uLocal_319, 0, 0);
				Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = func_557(&uLocal_319, 0, 0);
				MISC::SET_BIT(&uLocal_329, 1);
			}
			else if ((func_557(&uLocal_319, 0, 0) % 1000) == 0)
			{
				Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = func_557(&uLocal_319, 0, 0);
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_329, 1);
	}
	if ((func_22(iLocal_330, 0) && !func_22(iVar2, 0)) && !func_1(&uLocal_321, 2000, 0))
	{
		iVar2 = iLocal_330;
		MISC::SET_BIT(&uLocal_329, 2);
	}
	else
	{
		iLocal_330 = iVar2;
		func_47(&uLocal_321);
		MISC::CLEAR_BIT(&uLocal_329, 2);
	}
	return iVar2;
}

void func_349(int iParam0)//Position - 0xBC05
{
	switch (Local_638.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_350()//Position - 0xBC8E
{
	if (!BitTest(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 2))
	{
		MISC::SET_BIT(&(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 2);
		func_351(1);
	}
}

void func_351(bool bParam0)//Position - 0xBCBC
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
		{
			if (((!func_117(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID())) && !func_174(PLAYER::PLAYER_ID())) && !func_370(PLAYER::PLAYER_ID()))
			{
				if (func_177())
				{
					func_363(2, 0, 1);
					func_362();
				}
				if (func_360(func_361(func_333(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_215(2483, -1);
					MISC::CLEAR_BIT(&uVar0, func_361(func_333(PLAYER::PLAYER_ID())));
					func_362();
				}
				if (func_359())
				{
					func_362();
				}
				if (func_333(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 7);
					if (func_358(PLAYER::PLAYER_ID()))
					{
						func_357();
					}
					func_354(func_356(func_333(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 7);
		func_352();
	}
}

void func_352()//Position - 0xBDCA
{
	if (func_353())
	{
		MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 17);
	}
}

bool func_353()//Position - 0xBDEC
{
	return BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 17);
}

void func_354(int iParam0)//Position - 0xBE04
{
	int iVar0;
	
	if (Global_262145.f_9208 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_355() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
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

int func_355()//Position - 0xBE67
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_356(int iParam0)//Position - 0xBE74
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

void func_357()//Position - 0xBEA6
{
	if (!func_353())
	{
		Global_2794162.f_6871 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 17);
	}
}

int func_358(int iParam0)//Position - 0xBED4
{
	if (func_333(iParam0) == 236 || func_333(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_359()//Position - 0xBEFC
{
	if (Global_2672524.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_360(var uParam0)//Position - 0xBF16
{
	var uVar0;
	
	uVar0 = func_215(2483, -1);
	return BitTest(uVar0, uParam0);
}

int func_361(int iParam0)//Position - 0xBF2D
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
	return Global_262145.f_24324 /* Tunable: -1488550814 */;
}

void func_362()//Position - 0xBFBC
{
	if (func_359())
	{
		Global_2672524.f_947.f_16 = 1;
	}
}

void func_363(int iParam0, int iParam1, bool bParam2)//Position - 0xBFD5
{
	if (func_177())
	{
		if (iParam1 == 1)
		{
			if (Global_2794162.f_4499 == -1)
			{
				Global_2794162.f_4499 = Global_262145.f_27370 /* Tunable: 945146471 */;
			}
			func_28(&(Global_2794162.f_4497), 0, 0);
			if (bParam2)
			{
				if (Global_2794162.f_4502 == -1)
				{
					Global_2794162.f_4502 = Global_262145.f_27371 /* Tunable: -29732167 */;
				}
				func_28(&(Global_2794162.f_4500), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
				func_369(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
			func_369(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_368()) && !func_364(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_364(int iParam0)//Position - 0xC0A2
{
	if (func_365(iParam0, 1, 0))
	{
		if (Global_1853988[iParam0 /*867*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_365(int iParam0, bool bParam1, bool bParam2)//Position - 0xC0C7
{
	if (bParam1)
	{
		if (func_366(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853988[iParam0 /*867*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_366(int iParam0)//Position - 0xC0F9
{
	return func_367(iParam0);
}

var func_367(int iParam0)//Position - 0xC107
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

bool func_368()//Position - 0xC11E
{
	return Global_2683883.f_841;
}

void func_369(bool bParam0)//Position - 0xC12D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_177())
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 0))
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
			if (func_12(PLAYER::PLAYER_ID(), 1, 1))
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

int func_370(int iParam0)//Position - 0xC226
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

int func_371()//Position - 0xC292
{
	switch (Local_638.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_372(int iParam0, int iParam1)//Position - 0xC2F1
{
	if (Local_638.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_373()//Position - 0xC30F
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_388())
	{
		if (Local_638.f_3 == 14)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_387(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if ((!func_386(&iVar2, 0) || ENTITY::GET_ENTITY_MODEL(iVar2) != joaat("dodo")) && ENTITY::IS_ENTITY_IN_AIR(iVar2))
				{
					func_379(Local_638.f_3 != 14, 1, 0);
					if (func_378())
					{
						iVar3 = func_377();
						if (iVar3 >= 0)
						{
							if (!BitTest(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[func_376(iVar3)], func_375(iVar3)))
							{
								iLocal_332++;
								MISC::SET_BIT(&(Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[func_376(iVar3)]), func_375(iVar3));
							}
						}
					}
					iVar0 = iLocal_332;
				}
			}
		}
		else
		{
			iVar0 = func_374();
		}
	}
	else
	{
		STATS::STAT_GET_RECORDED_VALUE(&fVar1);
		if (func_19())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	return MISC::ABSI(iVar0);
}

int func_374()//Position - 0xC415
{
	switch (Local_638.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_375(int iParam0)//Position - 0xC43C
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_376(iParam0) * 31);
}

int func_376(int iParam0)//Position - 0xC46D
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

int func_377()//Position - 0xC493
{
	return iLocal_94;
}

int func_378()//Position - 0xC49D
{
	if (iLocal_101 == 1)
	{
		iLocal_101 = 0;
		return 1;
	}
	return 0;
}

void func_379(bool bParam0, bool bParam1, int iParam2)//Position - 0xC4B3
{
	func_381(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_302.f_2 < Local_305.f_2)
		{
			Local_302.f_2 = 0f;
		}
		else
		{
			Local_305.f_2 = 0f;
		}
		if (Local_308.f_2 < Local_311.f_2)
		{
			Local_308.f_2 = 0f;
		}
		else
		{
			Local_311.f_2 = 0f;
		}
	}
	switch (iLocal_95)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_105[iLocal_94 /*3*/]) < fLocal_301)
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0))
							{
								bLocal_96 = true;
								iLocal_95 = 1;
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
							{
								bLocal_97 = true;
								iLocal_95 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					func_380();
				}
				else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					func_380();
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !bParam1)
				{
					func_380();
				}
				if (bLocal_96)
				{
					if (iLocal_100)
					{
						if (iLocal_99)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
							{
								func_380();
								iLocal_101 = 1;
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
						{
							iLocal_99 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
						{
							func_380();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
					{
						iLocal_100 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
					{
						func_380();
					}
				}
				else if (bLocal_97)
				{
					if (iLocal_100)
					{
						if (iLocal_98)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
							{
								func_380();
								iLocal_101 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
						{
							iLocal_98 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
						{
							func_380();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
					{
						iLocal_100 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_302, Local_305, fLocal_314, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_308, Local_311, fLocal_314, false, true, 0))
					{
						func_380();
					}
				}
			}
			break;
	}
}

void func_380()//Position - 0xC8B3
{
	bLocal_96 = false;
	bLocal_97 = false;
	iLocal_98 = 0;
	iLocal_99 = 0;
	iLocal_100 = 0;
	iLocal_95 = 0;
}

void func_381(var uParam0, var uParam1)//Position - 0xC8CD
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_102 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	fVar1 = 10000000f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_385(iVar0)) && (uParam1 || !func_384(iVar0)))
		{
			if (func_383(Local_102, Local_105[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = SYSTEM::VDIST(Local_102, Local_105[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_94 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_382(iLocal_94);
}

void func_382(int iParam0)//Position - 0xC963
{
	switch (iParam0)
	{
		case 0:
			Local_302 = { 1103.0139f, -233.03737f, 56.13004f };
			Local_305 = { 1073.1909f, -214.8478f, 66.059296f };
			fLocal_314 = 30f;
			Local_308 = { 1093.5886f, -248.5926f, 56.88639f };
			Local_311 = { 1063.7744f, -230.14253f, 66.67847f };
			break;
		
		case 1:
			Local_302 = { 1044.1819f, -324.59036f, 49.334076f };
			Local_305 = { 1016.7097f, -307.73825f, 64.81343f };
			fLocal_314 = 30f;
			Local_308 = { 1007.98315f, -320.61588f, 48.454296f };
			Local_311 = { 1036.0067f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_302 = { 916.599f, -419.8782f, 35.62748f };
			Local_305 = { 910.37933f, -383.88257f, 47.54339f };
			fLocal_314 = 7f;
			Local_308 = { 912.13617f, -420.51614f, 35.380337f };
			Local_311 = { 906.8952f, -384.6779f, 47.249256f };
			break;
		
		case 3:
			Local_302 = { 757.7189f, -472.92395f, 19.253498f };
			Local_305 = { 696.5936f, -420.21146f, 35.460842f };
			fLocal_314 = 20.75f;
			Local_308 = { 744.91144f, -480.73734f, 19.065138f };
			Local_311 = { 682.5614f, -429.55334f, 37.0266f };
			break;
		
		case 4:
			Local_302 = { 680.3677f, -581.1792f, 14.214504f };
			Local_305 = { 599.81006f, -528.3059f, 33.40958f };
			fLocal_314 = 45f;
			Local_308 = { 667.3692f, -610.53564f, 13.854013f };
			Local_311 = { 582.84326f, -556.7818f, 33.403355f };
			break;
		
		case 5:
			Local_302 = { 644.2497f, -844.7504f, 12.367073f };
			Local_305 = { 526.86084f, -845.2521f, 35.9896f };
			fLocal_314 = 25f;
			Local_308 = { 644.3659f, -859.38776f, 12.596766f };
			Local_311 = { 526.8615f, -857.52075f, 36.32857f };
			break;
		
		case 6:
			Local_302 = { 634.972f, -1011.6402f, 10.925943f };
			Local_305 = { 539.6501f, -1024.0171f, 35.958515f };
			fLocal_314 = 25f;
			Local_308 = { 634.96124f, -1029.123f, 10.618461f };
			Local_311 = { 543.4893f, -1038.2615f, 35.9593f };
			break;
		
		case 7:
			Local_302 = { 645.7223f, -1191.2153f, 10.451977f };
			Local_305 = { 524.30176f, -1197.1669f, 39.611725f };
			fLocal_314 = 50f;
			Local_308 = { 645.7223f, -1228.9664f, 10.98015f };
			Local_311 = { 521.93787f, -1217.6073f, 39.47172f };
			break;
		
		case 8:
			Local_302 = { 642.12164f, -1295.7301f, 9.005976f };
			Local_305 = { 568.17017f, -1375.3508f, 20.129887f };
			fLocal_314 = 7f;
			Local_308 = { 644.7772f, -1298.1683f, 9.128529f };
			Local_311 = { 571.63416f, -1378.6444f, 20.358023f };
			break;
		
		case 9:
			Local_302 = { 686.5675f, -1444.7098f, 9.065001f };
			Local_305 = { 598.9328f, -1444.438f, 25.688457f };
			fLocal_314 = 25f;
			Local_308 = { 682.3027f, -1429.872f, 9.890836f };
			Local_311 = { 593.82166f, -1432.9955f, 25.600723f };
			break;
		
		case 10:
			Local_302 = { 718.76166f, -1734.3129f, 9.082874f };
			Local_305 = { 615.0017f, -1725.8973f, 27.54585f };
			fLocal_314 = 30f;
			Local_308 = { 717.53546f, -1748.6456f, 9.363478f };
			Local_311 = { 614.21796f, -1734.8475f, 27.357079f };
			break;
		
		case 11:
			Local_302 = { 694.31647f, -2049.8057f, 0.009695f };
			Local_305 = { 618.6845f, -2040.0137f, 25.834118f };
			fLocal_314 = 30f;
			Local_308 = { 693.1836f, -2063.225f, 0.429037f };
			Local_311 = { 607.59436f, -2055.3264f, 26.918158f };
			break;
		
		case 12:
			Local_302 = { 642.66705f, -2494.5513f, 0.468485f };
			Local_305 = { 570.18066f, -2513.9587f, 11.787938f };
			fLocal_314 = 20f;
			Local_308 = { 647.0339f, -2506.2021f, 0.583701f };
			Local_311 = { 571.14154f, -2522.9753f, 10.450453f };
			break;
		
		case 13:
			Local_302 = { 691.82355f, -2558.2185f, 0.363352f };
			Local_305 = { 645.8863f, -2600.3113f, 9.898791f };
			fLocal_314 = 10.25f;
			Local_308 = { 695.79285f, -2561.0337f, 0.346731f };
			Local_311 = { 656.3919f, -2601.9717f, 9.643657f };
			break;
		
		case 14:
			Local_302 = { 723.6254f, -2562.1707f, 0.255647f };
			Local_305 = { 720.75195f, -2619.7695f, 15.732105f };
			fLocal_314 = 15f;
			Local_308 = { 735.76495f, -2561.935f, 0.311182f };
			Local_311 = { 736.1214f, -2618.7666f, 15.790609f };
			break;
		
		case 15:
			Local_302 = { 891.43866f, -2603.12f, 0f };
			Local_305 = { 704.49316f, -2634.7932f, 45f };
			fLocal_314 = 20f;
			Local_308 = { 893.2578f, -2616.235f, 0f };
			Local_311 = { 707.72614f, -2647.6956f, 45f };
			break;
		
		case 16:
			Local_302 = { -2669.587f, 2491.96f, 2.043799f };
			Local_305 = { -2617.7646f, 2841.5947f, 14.082197f };
			fLocal_314 = 26.5f;
			Local_308 = { -2687.6057f, 2494.8682f, 2.608733f };
			Local_311 = { -2637.0847f, 2846.8752f, 14.159884f };
			break;
		
		case 17:
			Local_302 = { -1986.1726f, 4521.799f, 0f };
			Local_305 = { -1809.9026f, 4699.5513f, 53.508797f };
			fLocal_314 = 17f;
			Local_308 = { -1995.6681f, 4531.2593f, 0f };
			Local_311 = { -1817.5435f, 4708.3945f, 53.50917f };
			break;
		
		case 18:
			Local_302 = { -526.0265f, 4472.4424f, 0f };
			Local_305 = { -505.57144f, 4335.7246f, 86.73311f };
			fLocal_314 = 10f;
			Local_308 = { -519.9281f, 4476.3457f, 0f };
			Local_311 = { -500.73132f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_302 = { 98.1615f, 3384.489f, 45.45169f };
			Local_305 = { 154.97403f, 3350.694f, 30.033585f };
			fLocal_314 = 8f;
			Local_308 = { 152.68018f, 3346.7935f, 45.021557f };
			Local_311 = { 95.57188f, 3380.0906f, 30.432842f };
			break;
		
		case 20:
			Local_302 = { 147.86061f, 3406.7961f, 38.036716f };
			Local_305 = { 126.132935f, 3416.9268f, 30.029865f };
			fLocal_314 = 14.5f;
			Local_308 = { 130.09163f, 3425.4172f, 38.056725f };
			Local_311 = { 151.87035f, 3415.3914f, 30.057804f };
			break;
		
		case 21:
			Local_302 = { 2830.9722f, 4967.1396f, 34.560127f };
			Local_305 = { 2818.7188f, 4992.2983f, 51.2909f };
			fLocal_314 = 10f;
			Local_308 = { 2826.7668f, 4964.185f, 34.10636f };
			Local_311 = { 2814.2163f, 4989.9834f, 51.21849f };
			break;
		
		case 22:
			Local_302 = { -151.57642f, 4264.417f, 31.047348f };
			Local_305 = { -193.19623f, 4224.604f, 43.87255f };
			fLocal_314 = 10f;
			Local_308 = { -148.38419f, 4261.0713f, 31.57409f };
			Local_311 = { -190.47188f, 4222.076f, 43.954426f };
			break;
		
		case 23:
			Local_302 = { -426.69186f, 2964.272f, 14.848002f };
			Local_305 = { -396.2298f, 2959.2776f, 23.506374f };
			fLocal_314 = 7f;
			Local_308 = { -425.0283f, 2967.8613f, 15.226991f };
			Local_311 = { -395.60727f, 2962.6067f, 24.38079f };
			break;
		
		case 24:
			Local_302 = { -192.34137f, 2864.9163f, 30.72595f };
			Local_305 = { -170.15094f, 2857.1282f, 43.941822f };
			fLocal_314 = 10f;
			Local_308 = { -192.01286f, 2871.6025f, 29.999426f };
			Local_311 = { -169.59575f, 2863.8384f, 44.032505f };
			break;
		
		case 25:
			Local_302 = { 2539.185f, 2228.7717f, 18.610205f };
			Local_305 = { 2574.3733f, 2169.4014f, 27.265978f };
			fLocal_314 = 10f;
			Local_308 = { 2543.7075f, 2231.4016f, 18.331003f };
			Local_311 = { 2578.0789f, 2171.5837f, 27.26057f };
			break;
		
		case 26:
			Local_302 = { 2954.0867f, 815.7209f, 0.037901f };
			Local_305 = { 2933.1892f, 796.4688f, 12.983917f };
			fLocal_314 = 35f;
			Local_308 = { 2966.1226f, 806.88885f, 0.544056f };
			Local_311 = { 2950.8013f, 786.78156f, 11.745959f };
			break;
		
		case 27:
			Local_302 = { 2329.6726f, -459.66476f, 70.24277f };
			Local_305 = { 2413.3838f, -361.21884f, 91.77886f };
			fLocal_314 = 12f;
			Local_308 = { 2324.752f, -455.52377f, 70.25145f };
			Local_311 = { 2407.4094f, -356.20032f, 91.43083f };
			break;
		
		case 28:
			Local_302 = { 1943.4285f, -753.251f, 80.17905f };
			Local_305 = { 1850.3645f, -760.95874f, 93.025215f };
			fLocal_314 = 7f;
			Local_308 = { 1943.366f, -758.28705f, 80.322914f };
			Local_311 = { 1851.3535f, -765.18066f, 92.935455f };
			break;
		
		case 29:
			Local_302 = { -271.2849f, -2414.9932f, -10f };
			Local_305 = { -542.9096f, -2225.856f, 52.650043f };
			fLocal_314 = 30f;
			Local_308 = { -279.83987f, -2427.2117f, -10f };
			Local_311 = { -551.26556f, -2237.7905f, 52.64634f };
			break;
		
		case 30:
			Local_302 = { -1483.0004f, 2691.4277f, -10f };
			Local_305 = { -1377.1682f, 2600.7688f, 15.955276f };
			fLocal_314 = 12f;
			Local_308 = { -1478.1521f, 2696.688f, -10f };
			Local_311 = { -1378.5032f, 2608.6978f, 15.609236f };
			break;
		
		case 31:
			Local_302 = { 222.15187f, -2343.4866f, 0.039199f };
			Local_305 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_314 = 12f;
			Local_308 = { 216.95901f, -2343.4866f, 0.207734f };
			Local_311 = { 216.60204f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_302 = { 346.46216f, -2244.374f, 0.159779f };
			Local_305 = { 346.83472f, -2389.5906f, 7.852059f };
			fLocal_314 = 20f;
			Local_308 = { 359.60904f, -2244.4678f, 0.129684f };
			Local_311 = { 355.40543f, -2390.2583f, 7.080691f };
			break;
		
		case 33:
			Local_302 = { -1859.6799f, -322.63574f, 56.16368f };
			Local_305 = { -1836.6136f, -335.41412f, 96.116104f };
			fLocal_314 = 7.5f;
			Local_308 = { -1860.2698f, -327.86343f, 57.543f };
			Local_311 = { -1837.2709f, -339.22272f, 95.69325f };
			break;
		
		case 34:
			Local_302 = { -680.26324f, -600.818f, 69.11289f };
			Local_305 = { -706.66125f, -600.7515f, 30.476036f };
			fLocal_314 = 31.5f;
			Local_308 = { -680.6077f, -618.36584f, 69.27496f };
			Local_311 = { -706.3596f, -618.23846f, 30.312347f };
			break;
		
		case 35:
			Local_302 = { -1468.0961f, -591.71576f, 67.055176f };
			Local_305 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_314 = 11.75f;
			Local_308 = { -1474.903f, -591.12146f, 67.08091f };
			Local_311 = { -1457.1731f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_302 = { -1544.9578f, -537.1475f, 72.443474f };
			Local_305 = { -1564.6162f, -551.1829f, 32.861633f };
			fLocal_314 = 11.75f;
			Local_308 = { -1541.0079f, -541.5494f, 71.61972f };
			Local_311 = { -1561.2189f, -555.86804f, 32.927902f };
			break;
		
		case 37:
			Local_302 = { 333.2108f, -2727.2737f, 20.716625f };
			Local_305 = { 333.4297f, -2791.609f, 41.990227f };
			fLocal_314 = 20f;
			Local_308 = { 343.11273f, -2727.2358f, 20.236126f };
			Local_311 = { 343.66782f, -2791.6023f, 41.379284f };
			break;
		
		case 38:
			Local_302 = { 1928.0713f, 6228.3555f, 43.493977f };
			Local_305 = { 2039.8823f, 6167.3975f, 55.46405f };
			fLocal_314 = 13f;
			Local_308 = { 1931.8202f, 6235.634f, 43.373817f };
			Local_311 = { 2039.5975f, 6176.5254f, 55.25597f };
			break;
		
		case 39:
			Local_302 = { -736.4309f, -1590.9208f, 10.808919f };
			Local_305 = { -710.81104f, -1516.3495f, -0.098598f };
			fLocal_314 = 15f;
			Local_308 = { -727.2307f, -1585.2212f, 11.78027f };
			Local_311 = { -700.02014f, -1511.7826f, -0.341655f };
			break;
		
		case 40:
			Local_302 = { -676.3775f, -1548.5526f, 12.337475f };
			Local_305 = { -659.329f, -1507.0629f, -0.788618f };
			fLocal_314 = 25f;
			Local_308 = { -654.203f, -1536.146f, 9.191055f };
			Local_311 = { -645.9954f, -1500.2194f, -2.406948f };
			break;
		
		case 41:
			Local_302 = { -624.2344f, -1537.0453f, 12.601933f };
			Local_305 = { -622.1749f, -1472.8766f, -0.292606f };
			fLocal_314 = 8f;
			Local_308 = { -615.4003f, -1536.65f, 12.402705f };
			Local_311 = { -619.7385f, -1472.9371f, -0.243267f };
			break;
		
		case 42:
			Local_302 = { -492.5057f, -1632.4572f, 24.3307f };
			Local_305 = { -418.2088f, -1487.4521f, 0f };
			fLocal_314 = 25f;
			Local_308 = { -486.2016f, -1636.095f, 24.208052f };
			Local_311 = { -398.76483f, -1490.4403f, 0f };
			break;
		
		case 43:
			Local_302 = { -359.3541f, -1639.6927f, 13.134555f };
			Local_305 = { -388.49548f, -1690.9452f, -0.183164f };
			fLocal_314 = 25f;
			Local_308 = { -378.15182f, -1705.6597f, 12.471957f };
			Local_311 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_302 = { -243.44357f, -1814.6228f, 25.694649f };
			Local_305 = { -183.99873f, -1780.6447f, -0.085802f };
			fLocal_314 = 25f;
			Local_308 = { -235.13191f, -1822.0938f, 25.865416f };
			Local_311 = { -175.51047f, -1788.2748f, -0.506062f };
			break;
		
		case 45:
			Local_302 = { 84.55537f, -2046.1588f, 13.307674f };
			Local_305 = { 17.93164f, -2045.1519f, -0.031946f };
			fLocal_314 = 25f;
			Local_308 = { 17.907875f, -2035.773f, 12.627057f };
			Local_311 = { 84.57207f, -2034.1838f, 0.048385f };
			break;
		
		case 46:
			Local_302 = { 221.50294f, -2232.7664f, 9.88676f };
			Local_305 = { 221.68253f, -2244.081f, 4.479149f };
			fLocal_314 = 8f;
			Local_308 = { 218.58301f, -2232.7664f, 9.886198f };
			Local_311 = { 218.72896f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_302 = { 221.65178f, -2184.6348f, 11.664567f };
			Local_305 = { 221.61394f, -2208.1372f, 5.876424f };
			fLocal_314 = 8f;
			Local_308 = { 217.89954f, -2184.6348f, 11.540504f };
			Local_311 = { 218.33266f, -2208.1372f, 5.864793f };
			break;
		
		case 48:
			Local_302 = { 2326.57f, 1096.0305f, 76.314575f };
			Local_305 = { 2290.332f, 1136.1307f, 58.857056f };
			fLocal_314 = 21f;
			Local_308 = { 2334.4534f, 1103.0668f, 76.26603f };
			Local_311 = { 2297.8457f, 1142.8969f, 58.84243f };
			break;
		
		case 49:
			Local_302 = { 2379.4421f, 1150.7755f, 58.796318f };
			Local_305 = { 2327.658f, 1212.3663f, 72.8333f };
			fLocal_314 = 12f;
			Local_308 = { 2374.0637f, 1146.2821f, 58.833305f };
			Local_311 = { 2320.8945f, 1209.5961f, 72.79299f };
			break;
		
		case 50:
			Local_302 = { -1179.4052f, -355.25543f, 56.53003f };
			Local_305 = { -1198.0641f, -357.8363f, 35.35551f };
			fLocal_314 = 12.5f;
			Local_308 = { -1178.3853f, -361.87842f, 56.150814f };
			Local_311 = { -1197.1038f, -364.70044f, 36.494755f };
			break;
		
		case 51:
			Local_302 = { -921.3846f, -384.93997f, 137.01813f };
			Local_305 = { -912.4324f, -429.22897f, 36.701126f };
			fLocal_314 = 16f;
			Local_308 = { -914.1658f, -387.94437f, 137.07936f };
			Local_311 = { -906.25336f, -424.69104f, 47.11882f };
			break;
		
		case 52:
			Local_302 = { -740.2564f, 246.45285f, 132.29219f };
			Local_305 = { -718.3602f, 201.00415f, 80.95571f };
			fLocal_314 = 22f;
			Local_308 = { -726.6429f, 253.06764f, 132.33194f };
			Local_311 = { -705.5858f, 210.43356f, 78.70573f };
			break;
		
		case 53:
			Local_302 = { -771.2068f, 268.2729f, 132.16891f };
			Local_305 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_314 = 16f;
			Local_308 = { -770.8035f, 310.86252f, 137.41614f };
			Local_311 = { -763.06805f, 269.04404f, 83.31474f };
			break;
		
		case 54:
			Local_302 = { 259.22052f, 135.41461f, 136.70827f };
			Local_305 = { 279.23962f, 128.13794f, 100.8233f };
			fLocal_314 = 16f;
			Local_308 = { 261.96936f, 142.96764f, 136.68892f };
			Local_311 = { 281.72034f, 134.95508f, 100.77042f };
			break;
		
		case 55:
			Local_302 = { 393.54797f, -30.871658f, 152.66345f };
			Local_305 = { 369.9622f, -23.884607f, 88.35776f };
			fLocal_314 = 8f;
			Local_308 = { 390.5358f, -36.088818f, 152.78125f };
			Local_311 = { 368.12747f, -28.818884f, 88.69447f };
			break;
		
		case 56:
			Local_302 = { 114.31391f, -648.42975f, 261.8488f };
			Local_305 = { 131.07816f, -733.7684f, 39.343933f };
			fLocal_314 = 20f;
			Local_308 = { 124.8467f, -646.65753f, 261.8488f };
			Local_311 = { 140.05025f, -737.427f, 39.349304f };
			break;
		
		case 57:
			Local_302 = { -215.91899f, -823.8436f, 126.02239f };
			Local_305 = { -193.22368f, -761.77814f, 27.913818f };
			fLocal_314 = 20f;
			Local_308 = { -225.39696f, -820.39374f, 126.08122f };
			Local_311 = { -202.94325f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_302 = { -296.4725f, -802.08154f, 95.401085f };
			Local_305 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_314 = 20f;
			Local_308 = { -305.46024f, -798.8369f, 95.48194f };
			Local_311 = { -285.73764f, -745.0959f, 49.576508f };
			break;
		
		case 59:
			Local_302 = { -292.30344f, -823.3569f, 95.376205f };
			Local_305 = { -258.59906f, -835.56323f, 27.979462f };
			fLocal_314 = 20f;
			Local_308 = { -288.92062f, -814.02203f, 95.375565f };
			Local_311 = { -255.2116f, -826.25604f, 27.737495f };
			break;
		
		case 60:
			Local_302 = { -256.35886f, -714.78375f, 110.16166f };
			Local_305 = { -212.90544f, -730.53204f, 32.21946f };
			fLocal_314 = 20f;
			Local_308 = { -253.77232f, -705.6632f, 110.17357f };
			Local_311 = { -210.05878f, -722.6748f, 32.465363f };
			break;
		
		case 61:
			Local_302 = { 1808.2145f, 1949.2458f, 71.73707f };
			Local_305 = { 1837.9062f, 2127.2832f, 52.80491f };
			fLocal_314 = 9.75f;
			Local_308 = { 1802.7859f, 1950.2617f, 71.74002f };
			Local_311 = { 1831.9944f, 2127.4326f, 52.83893f };
			break;
		
		case 62:
			Local_302 = { 2388.733f, 2931.941f, 46.62681f };
			Local_305 = { 2426.6807f, 2883.0662f, 36.215237f };
			fLocal_314 = 10f;
			Local_308 = { 2392.5466f, 2934.8672f, 46.626797f };
			Local_311 = { 2430.3325f, 2885.9084f, 36.28148f };
			break;
		
		case 63:
			Local_302 = { 2700.0557f, 4836.381f, 42.078537f };
			Local_305 = { 2685.6733f, 4893.3804f, 30.908669f };
			fLocal_314 = 20.75f;
			Local_308 = { 2685.6719f, 4821.653f, 42.184708f };
			Local_311 = { 2672.8123f, 4880.3564f, 31.133106f };
			break;
		
		case 64:
			Local_302 = { -1053.4464f, 4766.245f, 234.32512f };
			Local_305 = { -1040.2634f, 4737.1567f, 204.49164f };
			fLocal_314 = 5f;
			Local_308 = { -1051.4143f, 4767.193f, 234.4293f };
			Local_311 = { -1037.9542f, 4738.3545f, 204.52815f };
			break;
	}
}

int func_383(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0xE1DF
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

int func_384(int iParam0)//Position - 0xE25A
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_385(int iParam0)//Position - 0xE2AD
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
			return 1;
			break;
	}
	return 0;
}

int func_386(int iParam0, int iParam1)//Position - 0xE31E
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_387(int iParam0, bool bParam1)//Position - 0xE353
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

int func_388()//Position - 0xE3D8
{
	switch (Local_638.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
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
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_389(struct<3> Param0, float fParam3, int iParam4)//Position - 0xE45B
{
	int iVar0;
	
	iVar0 = -1;
	if (func_406() < 10)
	{
		iVar0 = func_405();
		func_390(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_390(struct<3> Param0, var uParam3, int iParam4, var uParam5)//Position - 0xE488
{
	func_391(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_391(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)//Position - 0xE4A2
{
	struct<12> Var0;
	
	if (func_400(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_399(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_394(Var0))
		{
			Global_2635560.f_45.f_64 = func_393(PLAYER::PLAYER_ID());
			func_392(Var0, iParam8);
		}
	}
}

void func_392(struct<12> Param0, int iParam12)//Position - 0xE518
{
	Global_2635560.f_368[iParam12 /*12*/] = { Param0 };
	Global_2635560.f_368[iParam12 /*12*/].f_9 = 1;
}

int func_393(int iParam0)//Position - 0xE541
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2657704[iParam0 /*463*/].f_1;
	}
	return 0;
}

int func_394(struct<12> Param0)//Position - 0xE563
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2635560.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_395(Global_2635560.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_395(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xE5C3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_398(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_396(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_398(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_396(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_396(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0xE6FC
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.70710677f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_397(Param0, Param3, Var0, Var3);
}

int func_397(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)//Position - 0xE740
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_398(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)//Position - 0xE797
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_399(var uParam0, var uParam1)//Position - 0xE7C2
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var3.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var3.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_400(bool bParam0)//Position - 0xE859
{
	if (((func_403(bParam0, 1) || func_402(bParam0)) || func_123(bParam0, 0)) || func_401(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_401(bool bParam0)//Position - 0xE895
{
	if (!func_12(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2);
}

int func_402(int iParam0)//Position - 0xE8BD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/] != -1;
	}
	return 0;
}

bool func_403(int iParam0, bool bParam1)//Position - 0xE8DE
{
	if (func_404() != 0)
	{
		return func_393(iParam0) != 0;
	}
	return func_365(iParam0, bParam1, 0);
}

int func_404()//Position - 0xE905
{
	return Global_32283;
}

int func_405()//Position - 0xE910
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2635560.f_368[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_406()//Position - 0xE942
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635560.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_407(char* sParam0, char* sParam1, char* sParam2)//Position - 0xE975
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_408(int iParam0)//Position - 0xE994
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0" /* GXT: Perform the longest jump in a land vehicle. */;
		
		case 1:
			return "AMCH_1" /* GXT: Fall the longest distance with a parachute before opening it. */;
		
		case 2:
			return "AMCH_2" /* GXT: Achieve the highest speed in a land vehicle. */;
		
		case 3:
			return "AMCH_3" /* GXT: Perform the longest stoppie on a motorcycle. */;
		
		case 4:
			return "AMCH_4" /* GXT: Perform the longest wheelie on a motorcycle. */;
		
		case 5:
			return "AMCH_5" /* GXT: Drive the furthest distance in a land vehicle without crashing. */;
		
		case 6:
			return "AMCH_6" /* GXT: Open your parachute closest to the ground while freefalling. */;
		
		case 7:
			return "AMCH_7" /* GXT: Steal the most vehicles. */;
		
		case 8:
			return "AMCH_8" /* GXT: Perform the most near misses with other vehicles in a land vehicle without crashing. */;
		
		case 14:
			return "AMCH_9" /* GXT: Fly under the most ~y~bridges~s~ in the time limit. */;
		
		case 9:
			return "AMCH_12" /* GXT: Reverse the longest distance without crashing. */;
		
		case 10:
			return "AMCH_13" /* GXT: Fall the longest distance without dying. */;
		
		case 11:
			return "AMCH_15" /* GXT: Fly low to the ground for the longest distance. */;
		
		case 12:
			return "AMCH_16" /* GXT: Fly upside-down near the ground for the longest distance. */;
		
		case 15:
			return "AMCH_19" /* GXT: Achieve the highest number of headshot kills on players. */;
		
		case 16:
			return "AMCH_20" /* GXT: Achieve the highest number of driveby kills on players. */;
		
		case 17:
			return "AMCH_21" /* GXT: Achieve the highest number of melee kills on players. */;
		
		case 18:
			return "AMCH_22" /* GXT: Achieve the highest number of sniper rifle kills on players. */;
		
		case 13:
			return "AMCH_23" /* GXT: Travel the furthest distance when bailing from a land vehicle. */;
		
		default:
	}
	return "";
}

char* func_409(int iParam0)//Position - 0xEA9D
{
	switch (iParam0)
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
		
		case 14:
			return "AMCH_9SLC" /* GXT: Fly Under Bridges */;
		
		case 9:
			return "AMCH_12SLC" /* GXT: Reverse Driving */;
		
		case 10:
			return "AMCH_13SLC" /* GXT: Longest Fall Survived */;
		
		case 11:
			return "AMCH_15SLC" /* GXT: Low Flying */;
		
		case 12:
			return "AMCH_16SLC" /* GXT: Inverted Flying */;
		
		case 15:
			return "AMCH_19SLC" /* GXT: Headshot Kills */;
		
		case 16:
			return "AMCH_20SLC" /* GXT: Driveby */;
		
		case 17:
			return "AMCH_21SLC" /* GXT: Melee */;
		
		case 18:
			return "AMCH_22SLC" /* GXT: Sniper Kills */;
		
		case 13:
			return "AMCH_23SLC" /* GXT: Longest Bail */;
		
		default:
	}
	return "";
}

char* func_410(int iParam0)//Position - 0xEBA6
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0" /* GXT: Perform the longest jump in a land vehicle */;
		
		case 1:
			return "AMCH_BIG_1" /* GXT: Fall the longest distance with a parachute before opening it */;
		
		case 2:
			return "AMCH_BIG_2" /* GXT: Achieve the highest speed in a land vehicle */;
		
		case 3:
			return "AMCH_BIG_3" /* GXT: Perform the longest stoppie on a motorcycle */;
		
		case 4:
			return "AMCH_BIG_4" /* GXT: Perform the longest wheelie on a motorcycle */;
		
		case 5:
			return "AMCH_BIG_5" /* GXT: Drive the furthest distance in a land vehicle without crashing */;
		
		case 6:
			return "AMCH_BIG_6" /* GXT: Open your parachute closest to the ground while freefalling */;
		
		case 7:
			return "AMCH_BIG_7" /* GXT: Steal the most vehicles */;
		
		case 8:
			return "AMCH_BIG_8" /* GXT: Perform the most near misses with other vehicles in a land vehicle without crashing */;
		
		case 14:
			return "AMCH_BIG_9" /* GXT: Fly under the most bridges in the time limit */;
		
		case 9:
			return "AMCH_BIG_12" /* GXT: Reverse the longest distance without crashing */;
		
		case 10:
			return "AMCH_BIG_13" /* GXT: Fall the longest distance without dying */;
		
		case 11:
			return "AMCH_BIG_15" /* GXT: Fly low to the ground for the longest distance */;
		
		case 12:
			return "AMCH_BIG_16" /* GXT: Fly upside-down near the ground for the longest distance */;
		
		case 15:
			return "AMCH_BIG_19" /* GXT: Achieve the highest number of headshot kills on players */;
		
		case 16:
			return "AMCH_BIG_20" /* GXT: Achieve the highest number of driveby kills on players */;
		
		case 17:
			return "AMCH_BIG_21" /* GXT: Achieve the highest number of melee kills on players */;
		
		case 18:
			return "AMCH_BIG_22" /* GXT: Achieve the highest number of sniper rifle kills on players */;
		
		case 13:
			return "AMCH_BIG_23" /* GXT: Travel the furthest distance when bailing from a vehicle */;
		
		default:
	}
	return "";
}

void func_411()//Position - 0xECAF
{
	if (!func_167())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_163();
}

void func_412(var uParam0)//Position - 0xECDC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_385(iVar0) && !func_384(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_105[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_413()//Position - 0xED1D
{
	if (!func_388())
	{
		if (Local_638.f_3 == 14)
		{
			func_416();
		}
		Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_1 = func_374();
	}
	else if ((!BitTest(Global_1836866.f_1, 4) && !BitTest(Global_1836866.f_1, 5)) && !func_415(PLAYER::PLAYER_ID()))
	{
		func_414();
	}
}

void func_414()//Position - 0xED7B
{
	switch (Local_638.f_3)
	{
		case 0:
			STATS::STAT_START_RECORD_STAT(8, 2);
			break;
		
		case 1:
			STATS::STAT_START_RECORD_STAT(13, 2);
			break;
		
		case 2:
			STATS::STAT_START_RECORD_STAT(4, 2);
			break;
		
		case 4:
			STATS::STAT_START_RECORD_STAT(1, 2);
			break;
		
		case 3:
			STATS::STAT_START_RECORD_STAT(2, 2);
			break;
		
		case 5:
			STATS::STAT_START_RECORD_STAT(3, 2);
			break;
		
		case 6:
			STATS::STAT_START_RECORD_STAT(11, 3);
			break;
		
		case 7:
			STATS::STAT_START_RECORD_STAT(14, 1);
			break;
		
		case 8:
			STATS::STAT_START_RECORD_STAT(29, 2);
			break;
		
		case 9:
			STATS::STAT_START_RECORD_STAT(12, 2);
			break;
		
		case 10:
			STATS::STAT_START_RECORD_STAT(10, 2);
			break;
		
		case 11:
			STATS::STAT_START_RECORD_STAT(18, 2);
			break;
		
		case 12:
			STATS::STAT_START_RECORD_STAT(20, 2);
			break;
		
		case 13:
			STATS::STAT_START_RECORD_STAT(27, 2);
			break;
		
		case 15:
			STATS::STAT_START_RECORD_STAT(26, 1);
			break;
		
		case 16:
			STATS::STAT_START_RECORD_STAT(25, 1);
			break;
		
		case 17:
			STATS::STAT_START_RECORD_STAT(22, 1);
			break;
		
		case 18:
			STATS::STAT_START_RECORD_STAT(24, 1);
			break;
	}
	MISC::SET_BIT(&uLocal_329, 8);
}

bool func_415(bool bParam0)//Position - 0xEEC4
{
	return func_14(bParam0, 0);
}

void func_416()//Position - 0xEED3
{
	Local_105[0 /*3*/] = { 1083f, -231f, 60f };
	Local_105[1 /*3*/] = { 1024f, -325f, 60f };
	Local_105[2 /*3*/] = { 910f, -401f, 43f };
	Local_105[3 /*3*/] = { 721f, -457f, 26f };
	Local_105[4 /*3*/] = { 643f, -579f, 26f };
	Local_105[5 /*3*/] = { 590f, -851f, 26f };
	Local_105[6 /*3*/] = { 590f, -1023f, 16f };
	Local_105[7 /*3*/] = { 582f, -1205f, 24f };
	Local_105[8 /*3*/] = { 608f, -1335f, 16f };
	Local_105[9 /*3*/] = { 640f, -1434f, 16f };
	Local_105[10 /*3*/] = { 671f, -1742f, 20f };
	Local_105[11 /*3*/] = { 651f, -2046f, 16f };
	Local_105[12 /*3*/] = { 603f, -2505f, 9f };
	Local_105[13 /*3*/] = { 673f, -2582f, 4f };
	Local_105[14 /*3*/] = { 728f, -2594f, 10f };
	Local_105[15 /*3*/] = { 794f, -2624f, 27f };
	Local_105[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_105[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_105[18 /*3*/] = { -513f, 4427f, 40f };
	Local_105[19 /*3*/] = { 126f, 3366f, 40f };
	Local_105[20 /*3*/] = { 143f, 3418f, 36f };
	Local_105[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_105[22 /*3*/] = { -162f, 4249f, 40f };
	Local_105[23 /*3*/] = { -408f, 2964f, 20f };
	Local_105[24 /*3*/] = { -181f, 2862f, 38f };
	Local_105[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_105[26 /*3*/] = { 2950f, 803f, 8f };
	Local_105[27 /*3*/] = { 2369f, -409f, 80f };
	Local_105[28 /*3*/] = { 1906f, -755f, 84f };
	Local_105[29 /*3*/] = { -403f, -2333f, 40f };
	Local_105[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_105[31 /*3*/] = { 219f, -2315f, 5f };
	Local_105[32 /*3*/] = { 350f, -2315f, 5f };
	Local_105[33 /*3*/] = { -1848f, -333f, 75f };
	Local_105[34 /*3*/] = { -693f, -608f, 69f };
	Local_105[35 /*3*/] = { -1461f, -582f, 53f };
	Local_105[36 /*3*/] = { -1553f, -546f, 59f };
	Local_105[37 /*3*/] = { 338f, -2758f, 23f };
	Local_105[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_105[39 /*3*/] = { -713f, -1538f, 13f };
	Local_105[40 /*3*/] = { -659f, -1518f, 13f };
	Local_105[41 /*3*/] = { -620f, -1502f, 16f };
	Local_105[42 /*3*/] = { -445f, -1575f, 26f };
	Local_105[43 /*3*/] = { -373f, -1680f, 19f };
	Local_105[44 /*3*/] = { -212f, -1805f, 29f };
	Local_105[45 /*3*/] = { 47f, -2040f, 18f };
	Local_105[46 /*3*/] = { 223f, -2240f, 6f };
	Local_105[47 /*3*/] = { 218f, -2189f, 6f };
	Local_105[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_105[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_105[50 /*3*/] = { -1186f, -365f, 46f };
	Local_105[51 /*3*/] = { -916f, -407f, 93f };
	Local_105[52 /*3*/] = { -726f, 235f, 105f };
	Local_105[53 /*3*/] = { -774f, 286f, 112f };
	Local_105[54 /*3*/] = { 271f, 134f, 125f };
	Local_105[55 /*3*/] = { 377f, -28f, 125f };
	Local_105[56 /*3*/] = { 121f, -703f, 150f };
	Local_105[57 /*3*/] = { -204f, -784f, 74f };
	Local_105[58 /*3*/] = { -287f, -774f, 72f };
	Local_105[59 /*3*/] = { -272f, -824f, 71f };
	Local_105[60 /*3*/] = { -230f, -723f, 80f };
	Local_105[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_105[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_105[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_105[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_417(bool bParam0, bool bParam1)//Position - 0xF496
{
	if (bParam1)
	{
		if (!BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
	}
}

void func_418(var uParam0, int iParam1)//Position - 0xF4F3
{
	if (func_333(PLAYER::PLAYER_ID()) == 133 && iParam1)
	{
		Global_2794162.f_5152 = uParam0;
	}
	else
	{
		Global_2794162.f_5152 = -1;
	}
}

void func_419(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xF524
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2794162.f_5078 = -1;
	bVar0 = (func_123(PLAYER::PLAYER_ID(), 0) && func_119(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_417(func_436(iParam0), 1);
	}
	else
	{
		func_435(iParam0, -1);
		if (func_8(PLAYER::PLAYER_ID()))
		{
			Global_1836866.f_3 = iParam0;
		}
		else
		{
			func_434(iParam0);
		}
		Global_1836866.f_4 = -1;
		if (func_8(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836866.f_1), 5);
		}
		if (((func_177() && !func_176()) || func_175(PLAYER::PLAYER_ID(), 21)) || func_175(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836866.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 17);
		MISC::SET_BIT(&(Global_1836866.f_1), 20);
		if (func_433(iParam0))
		{
			func_432();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_429(fParam1);
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
		if (func_427(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836866.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_4593985)
			{
				func_425(1);
				if (func_275(0))
				{
					MISC::SET_BIT(&(Global_1836866.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836866.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_423(1);
			MISC::SET_BIT(&(Global_1836866.f_1), 12);
		}
		if (bParam5)
		{
			func_422();
			MISC::SET_BIT(&(Global_1836866.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_420(iParam0))
			{
				MISC::SET_BIT(&(Global_1836866.f_1), 21);
			}
		}
	}
	Global_2764267 = 1;
}

int func_420(int iParam0)//Position - 0xF708
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
	if (func_134(iParam0) == 1)
	{
		return 1;
	}
	if (func_421())
	{
		return 1;
	}
	return 0;
}

int func_421()//Position - 0xF777
{
	switch (func_332())
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

void func_422()//Position - 0xF7A5
{
	MISC::SET_BIT(&(Global_2794162.f_5069), 0);
}

void func_423(bool bParam0)//Position - 0xF7B9
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100885.f_8 = 1;
	}
	else
	{
		Global_100885.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_424(iVar0);
		iVar0++;
	}
}

void func_424(int iParam0)//Position - 0xF7F0
{
	Global_100885.f_205[iParam0] = 1;
	Global_100885.f_204 = 1;
}

void func_425(int iParam0)//Position - 0xF80A
{
	if (func_426() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_4593985)
	{
		return;
	}
	Global_4593985 = iParam0;
	Global_4593987 = 0;
	Global_4593988 = 0;
}

int func_426()//Position - 0xF83F
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_427(int iParam0)//Position - 0xF885
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_428(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_428(bool bParam0)//Position - 0xF8C3
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

void func_429(float fParam0)//Position - 0xF8E6
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_430())
	{
		return;
	}
	fVar0 = (Global_2794162.f_5226 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2794162.f_5227))
	{
		if (!Global_2794162.f_5227 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2794162.f_5226 = fParam0;
	Global_2794162.f_5227 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_430()//Position - 0xF952
{
	switch (func_404())
	{
		case 0:
			return func_431();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_431()//Position - 0xF985
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_432()//Position - 0xF9A9
{
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_210 = 0;
	MISC::CLEAR_BIT(&(Global_2794162.f_4667), 1);
}

int func_433(int iParam0)//Position - 0xF9CB
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_434(int iParam0)//Position - 0xF9E5
{
	Global_1895156[PLAYER::PLAYER_ID() /*609*/] = iParam0;
}

void func_435(int iParam0, int iParam1)//Position - 0xF9FA
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_360(func_361(iVar0)))
		{
			MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 2);
		}
	}
}

int func_436(int iParam0)//Position - 0xFA55
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

int func_437()//Position - 0xFA7B
{
	switch (Local_638.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

void func_438()//Position - 0xFAAA
{
	Global_1945796 = 1;
	if (!BitTest(Global_2803781, 0))
	{
		MISC::SET_BIT(&Global_2803781, 0);
		MISC::SET_BIT(&Global_1945797, 0);
	}
	if (!BitTest(Global_2803781, 1))
	{
		MISC::SET_BIT(&Global_2803781, 1);
		MISC::SET_BIT(&Global_1945797, 1);
	}
	if (!BitTest(Global_2803781, 5))
	{
		MISC::SET_BIT(&Global_2803781, 5);
		MISC::SET_BIT(&Global_1945797, 5);
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

int func_439()//Position - 0xFBB3
{
	switch (Local_638.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_440()//Position - 0xFBE8
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_638.f_3))
	{
		if (Local_638.f_3 == 1 || Local_638.f_3 == 6)
		{
			iVar0 = func_461(PLAYER::PLAYER_ID(), 1);
			iVar1 = func_211(iVar0, 1);
			if (iVar1 < 11)
			{
				if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
					func_441(1);
				}
			}
			else
			{
				PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), true);
			}
		}
	}
}

void func_441(bool bParam0)//Position - 0xFC5A
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		func_459(PLAYER::PLAYER_ID(), func_215(586, -1), 0);
		if (func_458(3610, -1))
		{
		}
		iVar0 = func_215(2042, -1);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_457(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_272(0))
		{
			func_459(PLAYER::PLAYER_ID(), func_215(586, -1), 0);
		}
		else
		{
			func_459(PLAYER::PLAYER_ID(), func_456(Global_2804094), 0);
		}
		func_454(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_447(PLAYER::PLAYER_PED_ID(), iVar0), func_446(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_445(func_215(2042, -1), 1);
		Global_2794162.f_287 = 1;
		func_442(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_442(int iParam0, int iParam1, int iParam2)//Position - 0xFD2F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_444();
		if (iParam2 == -1)
		{
			iParam2 = func_215(2042, -1);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_447(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_446(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_457(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_447(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_446(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_457(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_215(586, -1);
		}
		if (func_272(1) && func_443(iParam0))
		{
			func_459(iParam0, func_456(Global_2804094), 0);
		}
		else
		{
			func_459(iParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			func_459(iParam0, Global_1836628, 1);
		}
		func_454(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

var func_443(int iParam0)//Position - 0xFE1C
{
	return func_118(iParam0, 10);
}

void func_444()//Position - 0xFE2C
{
	Global_78661 = 0;
	Global_78662 = -1;
	Global_78663 = -1;
	Global_78664 = -1;
	Global_78665 = -1;
	Global_78669 = -1;
}

void func_445(int iParam0, int iParam1)//Position - 0xFE52
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_444();
		func_208(2042, iParam0, -1, 1);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_447(PLAYER::PLAYER_PED_ID(), iParam0), func_446(PLAYER::PLAYER_PED_ID(), iParam0), false);
		func_454(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_457(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_442(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_446(int iParam0, int iParam1)//Position - 0xFED7
{
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
		
		case 67:
			return 0;
			break;
	}
	return 0;
}

var func_447(int iParam0, int iParam1)//Position - 0x1039C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
	bVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar6 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if (((((((bVar3 != Global_78661 || iParam1 != Global_78662) || iVar4 != Global_78663) || iVar5 != Global_78664) || iVar6 != Global_78665) || iVar0 != Global_78666) || iVar1 != Global_78667) || iVar2 != Global_78668)
	{
		Global_78661 = bVar3;
		Global_78662 = iParam1;
		Global_78663 = iVar4;
		Global_78664 = iVar5;
		Global_78665 = iVar6;
		Global_78666 = iVar0;
		Global_78667 = iVar1;
		Global_78668 = iVar2;
		Global_78669 = func_448(iParam0, iParam1);
	}
	return Global_78669;
}

int func_448(int iParam0, int iParam1)//Position - 0x104AC
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("MP_M_Freemode_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_453(iParam0, iParam1, 1);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8))
			{
				return func_453(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_453(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_453(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_453(iParam0, iParam1, 6);
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_453(iParam0, iParam1, 7);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_453(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_453(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		return func_453(iParam0, iParam1, 9);
	}
	if (func_452(iParam0))
	{
		if (bVar1)
		{
			return func_453(iParam0, iParam1, 7);
		}
		else
		{
			return func_453(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT01"), 0))
		{
			return func_453(iParam0, iParam1, 0);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT02"), 0))
		{
			return func_453(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT03"), 0))
		{
			return func_453(iParam0, iParam1, 2);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT04"), 0))
		{
			return func_453(iParam0, iParam1, 3);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT05"), 0))
		{
			return func_453(iParam0, iParam1, 4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT06"), 0))
		{
			return func_453(iParam0, iParam1, 5);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT07"), 0))
		{
			return func_453(iParam0, iParam1, 6);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT08"), 0))
		{
			return func_453(iParam0, iParam1, 7);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT09"), 0))
		{
			return func_453(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT10"), 0))
		{
			return func_453(iParam0, iParam1, 9);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT11"), 0))
		{
			return func_453(iParam0, iParam1, 10);
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MINI_DRESS"), 0))
		{
			return func_453(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_453(iParam0, iParam1, 5);
			}
			else
			{
				return func_453(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_453(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_451(iVar4, 0);
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_453(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_453(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_450(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_453(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_450(iVar4);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_449(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_453(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_453(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_453(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_453(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_453(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
						return func_453(iParam0, iParam1, 9);
					}
					else
					{
						return func_453(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
						return func_453(iParam0, iParam1, 9);
					}
					else
					{
						return func_453(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_453(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_450(iVar4);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 1);
			}
			else
			{
				return func_453(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 1);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 8);
			}
			else
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_453(iParam0, iParam1, 10);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 1);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 6);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_F_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 9);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 5);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_13"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_16"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_453(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 0);
			}
			else
			{
				return func_453(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("MP_M_Freemode_01"))
				{
					return func_453(iParam0, iParam1, 10);
				}
				else
				{
					return func_453(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 1);
			}
			else
			{
				return func_453(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 3);
			}
			else
			{
				return func_453(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 1);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 9);
			}
			else
			{
				return func_453(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 10);
			}
			else
			{
				return func_453(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("MP_F_Freemode_01"))
		{
			if (bVar1)
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("MP_F_Freemode_01"))
		{
			if (bVar1)
			{
				return func_453(iParam0, iParam1, 7);
			}
			else
			{
				return func_453(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_453(iParam0, iParam1, 2);
			}
			else
			{
				return func_453(iParam0, iParam1, 7);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
		{
			return func_453(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_450(iVar4);
		}
	}
	if (iVar2 == joaat("MP_M_Freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 6);
				}
				else
				{
					return func_453(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 2);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 2);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 2);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 2);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 6);
				}
				else
				{
					return func_453(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 5);
				}
				else
				{
					return func_453(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 6);
				}
				else
				{
					return func_453(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 3);
				}
				else
				{
					return func_453(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 5);
				}
				else
				{
					return func_453(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 6);
				}
				else
				{
					return func_453(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 6);
				}
				else
				{
					return func_453(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 6);
				}
				else
				{
					return func_453(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_453(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 6);
				}
				else
				{
					return func_453(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 7);
				}
				else
				{
					return func_453(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_453(iParam0, iParam1, 1);
				}
				else
				{
					return func_453(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_453(iParam0, iParam1, 0);
	return 0;
}

int func_449(int iParam0, int iParam1)//Position - 0x12C4E
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_450(int iParam0)//Position - 0x12DEE
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_451(int iParam0, int iParam1)//Position - 0x12F5B
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_452(int iParam0)//Position - 0x1309F
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("DUNGAREES")))
	{
		return 1;
	}
	return 0;
}

int func_453(int iParam0, int iParam1, int iParam2)//Position - 0x130BB
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
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
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
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
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
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
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
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
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
		
		case 67:
			switch (iParam2)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 101;
					break;
				
				case 2:
					return 102;
					break;
				
				case 3:
					return 103;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 105;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 107;
					break;
				
				case 8:
					return 108;
					break;
				
				case 9:
					return 109;
					break;
				
				case 10:
					return 110;
					break;
			}
			break;
	}
	return 0;
}

void func_454(int iParam0, int iParam1)//Position - 0x1377C
{
	int iVar0;
	
	iVar0 = func_455(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_455(int iParam0)//Position - 0x137A7
{
	if (iParam0 > 66)
	{
		return joaat("reh_p_para_bag_reh_s_01a");
	}
	else if (iParam0 > 63)
	{
		return joaat("p_para_bag_tr_s_01a");
	}
	else if (iParam0 > 61)
	{
		return joaat("vw_p_para_bag_vine_s");
	}
	else if (iParam0 > 51)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	else if (iParam0 > 46)
	{
		return joaat("p_para_bag_xmas_s");
	}
	else if (iParam0 > 26)
	{
		return joaat("lts_p_para_bag_lts_s");
	}
	else if (iParam0 > 0)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	return joaat("p_parachute_s");
}

int func_456(var uParam0)//Position - 0x1382E
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_457(int iParam0, int iParam1)//Position - 0x138E6
{
	return 0;
}

bool func_458(int iParam0, int iParam1)//Position - 0x138EF
{
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_459(int iParam0, int iParam1, int iParam2)//Position - 0x1390B
{
	int iVar0;
	int iVar1;
	
	if (func_460(iParam1, iParam2, &iVar0, &iVar1))
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iVar1);
		PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, 0);
		PLAYER::CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0);
	}
}

bool func_460(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x13942
{
	*uParam2 = 0;
	*uParam3 = 0;
	switch (iParam1)
	{
		case 1:
			*uParam2 = joaat("xm_prop_x17_para_sp_s");
			*uParam3 = iParam0;
			break;
		
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 0;
					break;
				
				case 1:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 1;
					break;
				
				case 2:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 2;
					break;
				
				case 3:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 3;
					break;
				
				case 4:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 4;
					break;
				
				case 5:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 5;
					break;
				
				case 6:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 6;
					break;
				
				case 7:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 7;
					break;
				
				case 8:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 8;
					break;
				
				case 9:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 9;
					break;
				
				case 10:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 10;
					break;
				
				case 11:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 11;
					break;
				
				case 12:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 12;
					break;
				
				case 13:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 13;
					break;
				
				case 14:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 1;
					break;
				
				case 15:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 2;
					break;
				
				case 16:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 3;
					break;
				
				case 17:
					*uParam2 = joaat("reh_prop_reh_para_sp_s_01a");
					*uParam3 = 1;
					break;
			}
			break;
	}
	return *uParam2 != 0;
}

int func_461(int iParam0, bool bParam1)//Position - 0x13B01
{
	if (bParam1)
	{
	}
	return func_216(iParam0);
}

void func_462()//Position - 0x13B14
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	var uVar5;
	float fVar6;
	int iVar7;
	struct<3> Var8;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	float fVar18;
	
	if ((((!func_7(PLAYER::PLAYER_ID()) && !func_174(PLAYER::PLAYER_ID())) && !func_327()) && !func_475(PLAYER::PLAYER_ID(), 0, -1)) && !func_474(PLAYER::PLAYER_ID()))
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			fVar6 = 2.1474836E+09f;
			iVar7 = -1;
			Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			bVar11 = func_5(Local_638.f_3);
			bVar12 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			bVar13 = func_473();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				iVar14 = Local_638.f_67[iVar4 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar14) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iVar14), false))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == NETWORK::NET_TO_VEH(iVar14))
						{
							func_351(1);
						}
					}
					MISC::SET_BIT(&uVar5, iVar4);
					if (bVar11 && func_41(Local_638.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar14), true) };
						if (SYSTEM::VDIST(Var15, Var0) <= 10f)
						{
							fVar18 = SYSTEM::VDIST(Var15, Var8);
							if (fVar18 < fVar6)
							{
								fVar6 = fVar18;
								iVar7 = iVar4;
							}
						}
					}
				}
				iVar4++;
			}
			if (func_42(Local_638.f_3))
			{
				MISC::SET_BIT(&uVar5, 31);
			}
			Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_7 = uVar5;
			if (func_5(Local_638.f_3))
			{
				if ((PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || func_18(-1, 0))
				{
					if ((fVar6 < 2.1474836E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_41(Local_638.f_3, iVar7, &Var0, &uVar3))
						{
							func_472(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_471(Var0, 1, 0);
							func_464(10, 0, 0, 0, 0);
							MISC::SET_BIT(&uLocal_329, 5);
						}
					}
				}
				else
				{
					func_463();
				}
			}
		}
	}
	else
	{
		func_463();
	}
}

void func_463()//Position - 0x13D46
{
	if (BitTest(uLocal_329, 5))
	{
		func_182();
		func_180();
		MISC::CLEAR_BIT(&uLocal_329, 5);
		func_179();
	}
}

void func_464(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x13D6A
{
	if (Global_2672524.f_1685.f_703.f_16 != func_113())
	{
		if (BitTest(Global_2657704[Global_2672524.f_1685.f_703.f_16 /*463*/].f_424, 0) && func_465())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643396 = 0;
	}
	Global_2635560.f_490 = iParam0;
	Global_2635560.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635560.f_490.f_2 = iParam1;
	Global_2635560.f_490.f_3 = iParam2;
	Global_2635560.f_490.f_4 = iParam3;
	Global_2635560.f_490.f_5 = iParam4;
}

int func_465()//Position - 0x13E06
{
	if ((((((func_230(PLAYER::PLAYER_ID()) == 229 || func_230(PLAYER::PLAYER_ID()) == 191) || func_470()) || func_469()) || func_468()) || Global_2765084.f_227 == 1) || (Global_2635560.f_1853 && func_466(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_466(int iParam0)//Position - 0x13E78
{
	if (func_467(iParam0))
	{
		return 1;
	}
	if (func_117(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_467(bool bParam0)//Position - 0x13E9B
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 7);
	}
	return 0;
}

bool func_468()//Position - 0x13EBE
{
	return Global_2765083;
}

bool func_469()//Position - 0x13ECA
{
	return Global_1836594;
}

int func_470()//Position - 0x13ED6
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_471(struct<3> Param0, int iParam3, int iParam4)//Position - 0x13EEB
{
	Global_2635560.f_45.f_49 = { Param0 };
	Global_2635560.f_45.f_52 = iParam3;
	Global_2635560.f_45.f_53 = iParam4;
}

void func_472(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x13F15
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2644655.f_6))
	{
		if (!Global_2644655.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2644655.f_6))
	{
		Global_2644655.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2644655.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_400(PLAYER::PLAYER_ID()))
	{
		if (iParam13 || iParam7)
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
	Var0.f_24 = iParam11;
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2644655 = { Var0 };
}

int func_473()//Position - 0x1403F
{
	if ((((((func_467(PLAYER::PLAYER_ID()) || func_177()) || func_176()) || func_175(PLAYER::PLAYER_ID(), 21)) || func_175(PLAYER::PLAYER_ID(), 25)) || func_8(PLAYER::PLAYER_ID())) || func_7(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_474(int iParam0)//Position - 0x140A7
{
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

int func_475(int iParam0, bool bParam1, int iParam2)//Position - 0x140E0
{
	if (Global_1853988[iParam0 /*867*/].f_267.f_33 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
	{
		if (iParam2 == -1 || func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) != iParam2)
		{
			if (bParam1)
			{
				return func_476(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_476(int iParam0)//Position - 0x14167
{
	int iVar0;
	
	if (iParam0 == func_113())
	{
		return iParam0;
	}
	if (func_477(iParam0) != -1)
	{
		iVar0 = func_312(func_477(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_92(iParam0, 0))
			{
				return func_91(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_113();
		}
		return Global_2657704[iParam0 /*463*/].f_321.f_10;
	}
	return func_113();
}

int func_477(int iParam0)//Position - 0x141F6
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575063 || Global_2635560.f_2780) && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

void func_478(bool bParam0, bool bParam1)//Position - 0x14265
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_551())
	{
		if (bParam1)
		{
			iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
			if (func_111(PLAYER::PLAYER_ID()))
			{
				iVar1 = func_337();
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
				{
					iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_550())
				{
					switch (Local_638.f_3)
					{
						case 14:
							if (!func_385(iVar4) && !func_384(iVar4))
							{
								func_547("AMCH_BRIDGE" /* GXT: Bridge */, bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_44())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_638.f_67[iVar5 /*2*/].f_1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_638.f_67[iVar5 /*2*/].f_1), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_638.f_67[iVar5 /*2*/].f_1), -1, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_611[iVar5]))
				{
					iLocal_611[iVar5] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_638.f_67[iVar5 /*2*/].f_1));
					HUD::SET_BLIP_SPRITE(iLocal_611[iVar5], func_546(iVar5));
					HUD::SET_BLIP_PRIORITY(iLocal_611[iVar5], 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_611[iVar5], func_545(iVar5));
					func_543(&(iLocal_611[iVar5]), 9);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (SYSTEM::VDIST(Var6, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_638.f_67[iVar5 /*2*/].f_1), true)) <= 150f)
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_611[iVar5], true);
						}
						else
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_611[iVar5], false);
						}
					}
					func_479(iLocal_611[iVar5], 0, 1152319488, 1137180672);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_611[iVar5]))
			{
				HUD::REMOVE_BLIP(&(iLocal_611[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_479(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x14463
{
	HUD::SET_BLIP_ALPHA(iParam0, func_480(iParam0, iParam1, fParam2, fParam3));
}

int func_480(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x1447D
{
	float fVar0;
	
	if (!func_542(Global_2672524) && !func_84())
	{
		fVar0 = func_482(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_481();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_481()//Position - 0x144CB
{
	if (func_403(Global_2672524, 1))
	{
		return 50;
	}
	return 0;
}

float func_482(int iParam0, float fParam1, float fParam2)//Position - 0x144E5
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = Global_2672524;
	Var2 = { func_541(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1581982 || func_537())
	{
		if (func_536(iVar0))
		{
			Var5 = { func_485(iVar0) };
		}
		else if (func_484(iVar0))
		{
			Var5 = { func_483(iVar0) };
		}
	}
	else
	{
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false) };
	}
	Var5.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(Var5 - Var2);
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

Vector3 func_483(int iParam0)//Position - 0x14595
{
	int iVar0;
	
	if (func_484(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	return 0f, 0f, 0f;
}

int func_484(int iParam0)//Position - 0x145C9
{
	int iVar0;
	
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
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

Vector3 func_485(int iParam0)//Position - 0x14625
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
	
	if (iParam0 == func_113())
	{
	}
	if (func_535(iParam0))
	{
		iVar0 = func_534(iParam0);
		if (iVar0 != func_113())
		{
			if (!func_533(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_254[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_254[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2657704[func_534(iParam0) /*463*/].f_321.f_12;
				}
			}
			else
			{
				iVar1 = func_530(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1950844.f_543[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_529(iParam0))
	{
		iVar2 = func_528(iParam0);
		if (iVar2 != func_113())
		{
			if (!func_527(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1968944[iVar2]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_1968944[iVar2], false);
				}
				else
				{
					return Global_2657704[func_534(iParam0) /*463*/].f_321.f_12;
				}
			}
			else
			{
				iVar3 = 160;
				if (!iVar3 == -1)
				{
					return Global_1950844.f_543[iVar3 /*3*/];
				}
			}
		}
	}
	else if (func_526(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_308))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2794162.f_308, false);
		}
	}
	else if (func_525(iParam0) && !func_524(iParam0))
	{
		iVar4 = Global_2657704[iParam0 /*463*/].f_321.f_10;
		if (iVar4 != func_113())
		{
			iVar5 = func_530(iVar4);
			if (!iVar5 == -1)
			{
				return Global_1950844.f_543[iVar5 /*3*/];
			}
		}
	}
	else if (func_523(iParam0) && !func_522(iParam0))
	{
		if (func_536(iParam0) && func_521())
		{
			return Global_1950844.f_543[Global_2657704[iParam0 /*463*/].f_321.f_7 /*3*/];
		}
		iVar6 = Global_2657704[iParam0 /*463*/].f_321.f_10;
		if (iVar6 != func_113())
		{
			if (func_520(iVar6))
			{
				iVar7 = func_517(iVar6);
				if (iVar7 != -1)
				{
					return Global_1950844.f_543[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_516(iParam0))
	{
		iVar8 = func_515(iParam0);
		if (iVar8 != func_113())
		{
			if (!func_514(iVar8) && !func_513(iVar8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_351[iVar8]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_351[iVar8], false);
				}
				else
				{
					return Global_2657704[func_515(iParam0) /*463*/].f_321.f_20;
				}
			}
			else if (func_520(iVar8) && func_514(iVar8))
			{
				iVar9 = func_517(iVar8);
				if (!iVar9 == -1)
				{
					return Global_1950844.f_543[iVar9 /*3*/];
				}
			}
			else if (func_512(iVar8) && func_513(iVar8))
			{
				iVar10 = func_509(iVar8);
				if (!iVar10 == -1)
				{
					return Global_1950844.f_543[iVar10 /*3*/];
				}
			}
		}
	}
	else if (func_508(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2794162.f_310, false);
		}
	}
	else if (func_507(iParam0) && !func_506(iParam0))
	{
		iVar11 = Global_2657704[iParam0 /*463*/].f_321.f_10;
		if (iVar11 != func_113())
		{
			if (func_505(iVar11))
			{
				iVar12 = func_502(iVar11);
				if (iVar12 != -1)
				{
					return func_501(iVar12);
				}
			}
		}
	}
	else if (func_500(iParam0) && !func_499(iParam0))
	{
		iVar13 = Global_2657704[iParam0 /*463*/].f_321.f_10;
		if (iVar13 != func_113())
		{
			if (func_498(iVar13))
			{
				iVar14 = func_495(iVar13);
				if (iVar14 != -1)
				{
					return Global_1950844.f_543[iVar14 /*3*/];
				}
			}
		}
	}
	else if (func_494(iParam0, 0))
	{
		iVar15 = func_493(iParam0);
		if (iVar15 != func_113())
		{
			if (!func_492(iVar15))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_384[iVar15]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_384[iVar15], false);
				}
				else
				{
					return Global_1895156[func_493(iParam0) /*609*/].f_591;
				}
			}
			else
			{
				iVar16 = func_495(iVar15);
				if (!iVar16 == -1)
				{
					return Global_1950844.f_543[iVar16 /*3*/];
				}
			}
		}
	}
	else if (func_491(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_490(iParam0))
	{
		iVar17 = func_476(iParam0);
		if (iVar17 != func_113())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_417[iVar17]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_417[iVar17], false);
			}
			else
			{
				return Global_1914706[iVar17 /*299*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_507(iParam0))
	{
		return func_501(Global_2657704[iParam0 /*463*/].f_321.f_7);
	}
	if (func_486(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1950844.f_543[Global_2657704[iParam0 /*463*/].f_321.f_7 /*3*/];
}

int func_486(int iParam0)//Position - 0x14B6E
{
	if (((func_489(iParam0) || func_488(iParam0)) || func_487(iParam0)) || func_336(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_487(int iParam0)//Position - 0x14BA8
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_488(int iParam0)//Position - 0x14BEF
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_489(int iParam0)//Position - 0x14C36
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_490(int iParam0)//Position - 0x14C7D
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 20;
			}
		}
		else if (((Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_1575063) && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 20;
		}
	}
	return 0;
}

int func_491(int iParam0)//Position - 0x14D14
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

int func_492(int iParam0)//Position - 0x14D5B
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_3, 4);
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x14D80
{
	if (iParam0 == func_113())
	{
		return iParam0;
	}
	return Global_2657704[iParam0 /*463*/].f_321.f_10;
}

int func_494(int iParam0, bool bParam1)//Position - 0x14DA4
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
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_113())
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_495(int iParam0)//Position - 0x14E32
{
	int iVar0;
	
	if (iParam0 != func_113())
	{
		iVar0 = func_497(iParam0);
		if (iVar0 != 0)
		{
			return func_496(iVar0);
		}
	}
	return -1;
}

int func_496(int iParam0)//Position - 0x14E5B
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

int func_497(int iParam0)//Position - 0x14ED9
{
	if (iParam0 != func_113())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_311;
	}
	return 0;
}

int func_498(int iParam0)//Position - 0x14EFD
{
	if (iParam0 != func_113())
	{
		if (Global_1853988[iParam0 /*867*/].f_267.f_311 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_499(int iParam0)//Position - 0x14F26
{
	if (iParam0 != func_113())
	{
		if (func_500(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0)//Position - 0x14F5B
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_501(int iParam0)//Position - 0x14FA2
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
	return Global_1950844.f_543[iParam0 /*3*/];
}

int func_502(int iParam0)//Position - 0x150AE
{
	int iVar0;
	
	if (iParam0 != func_113())
	{
		iVar0 = func_504(iParam0);
		if (iVar0 != 0)
		{
			return func_503(iVar0);
		}
	}
	return -1;
}

int func_503(int iParam0)//Position - 0x150D7
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

int func_504(int iParam0)//Position - 0x15155
{
	if (iParam0 != func_113())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_354;
	}
	return 0;
}

int func_505(int iParam0)//Position - 0x15179
{
	if (iParam0 != func_113())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_354 != 0;
	}
	return 0;
}

int func_506(int iParam0)//Position - 0x1519F
{
	if (iParam0 != func_113())
	{
		if (func_507(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_507(int iParam0)//Position - 0x151D4
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_508(int iParam0)//Position - 0x1521B
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_509(int iParam0)//Position - 0x15262
{
	int iVar0;
	
	if (iParam0 == func_113())
	{
		return -1;
	}
	iVar0 = func_511(iParam0);
	if (!iVar0 == 0)
	{
		return func_510(iVar0);
	}
	return -1;
}

int func_510(int iParam0)//Position - 0x15291
{
	switch (iParam0)
	{
		case 1:
			return 83;
			break;
		
		case 2:
			return 84;
			break;
		
		case 3:
			return 85;
			break;
		
		case 4:
			return 86;
			break;
		
		case 5:
			return 87;
			break;
	}
	return -1;
}

int func_511(int iParam0)//Position - 0x152E7
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	return Global_1853988[iParam0 /*867*/].f_267.f_293;
}

int func_512(int iParam0)//Position - 0x1530B
{
	if (iParam0 != func_113())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_293 != 0;
	}
	return 0;
}

int func_513(int iParam0)//Position - 0x15331
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_6, 16);
	}
	return 0;
}

int func_514(int iParam0)//Position - 0x15357
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_2, 6);
	}
	return 0;
}

int func_515(int iParam0)//Position - 0x1537C
{
	if (iParam0 == func_113())
	{
		return iParam0;
	}
	return Global_2657704[iParam0 /*463*/].f_321.f_10;
}

int func_516(int iParam0)//Position - 0x153A0
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_113())
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_517(int iParam0)//Position - 0x15400
{
	int iVar0;
	
	if (iParam0 == func_113())
	{
		return -1;
	}
	iVar0 = func_519(iParam0);
	if (!iVar0 == 0)
	{
		return func_518(iVar0);
	}
	return -1;
}

int func_518(int iParam0)//Position - 0x1542F
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

int func_519(int iParam0)//Position - 0x154BD
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	return Global_1853988[iParam0 /*867*/].f_267.f_300;
}

int func_520(int iParam0)//Position - 0x154E1
{
	if (iParam0 != func_113())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_300 != 0;
	}
	return 0;
}

int func_521()//Position - 0x15507
{
	if (BitTest(Global_1950844.f_2, 13) || Global_1950844.f_3348)
	{
		return 1;
	}
	return 0;
}

int func_522(int iParam0)//Position - 0x1552D
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	if (func_523(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_523(int iParam0)//Position - 0x15566
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_524(int iParam0)//Position - 0x155AD
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	if (func_525(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_525(int iParam0)//Position - 0x155E6
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 4;
			}
		}
	}
	return 0;
}

int func_526(int iParam0)//Position - 0x1562C
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_527(int iParam0)//Position - 0x15672
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_5, 26);
	}
	return 0;
}

int func_528(int iParam0)//Position - 0x15698
{
	if (iParam0 == func_113())
	{
		return iParam0;
	}
	return Global_2657704[iParam0 /*463*/].f_321.f_10;
}

int func_529(int iParam0)//Position - 0x156BC
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_113())
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_530(int iParam0)//Position - 0x1571C
{
	int iVar0;
	
	if (iParam0 == func_113())
	{
		return -1;
	}
	iVar0 = func_532(iParam0);
	if (!iVar0 == 0)
	{
		return func_531(iVar0);
	}
	return -1;
}

int func_531(int iParam0)//Position - 0x1574B
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

int func_532(int iParam0)//Position - 0x1591B
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	return Global_1853988[iParam0 /*867*/].f_267.f_193[5 /*13*/];
}

int func_533(int iParam0)//Position - 0x15941
{
	if (iParam0 != func_113())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321, 6);
	}
	return 0;
}

int func_534(int iParam0)//Position - 0x15964
{
	if (iParam0 == func_113())
	{
		return iParam0;
	}
	return Global_2657704[iParam0 /*463*/].f_321.f_10;
}

int func_535(int iParam0)//Position - 0x15988
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_113())
			{
				return func_312(Global_2657704[iParam0 /*463*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_536(int iParam0)//Position - 0x159E7
{
	if (iParam0 != func_113())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575063 && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_537()//Position - 0x15A4D
{
	if ((func_540() || func_539()) || func_538(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_538(int iParam0)//Position - 0x15A79
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	return BitTest(Global_1890739[iParam0 /*138*/].f_29, 20);
}

var func_539()//Position - 0x15A9B
{
	return BitTest(Global_1963775, 1);
}

bool func_540()//Position - 0x15AA9
{
	return BitTest(Global_1963795, 5);
}

Vector3 func_541(int iParam0)//Position - 0x15AB7
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

int func_542(int iParam0)//Position - 0x15B00
{
	if ((BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 9) && !(BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 6) && BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 7))) || ((BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 6) && !BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 7)) && !BitTest(Global_2657704[iParam0 /*463*/].f_73.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_543(var uParam0, int iParam1)//Position - 0x15B89
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_544(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_544(int iParam0)//Position - 0x15BAF
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

char* func_545(int iParam0)//Position - 0x15E17
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_638.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC" /* GXT: Air Vehicle */;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_638.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC" /* GXT: Air Vehicle */;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_638.f_67[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_638.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE" /* GXT: Motorcycle */;
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_546(int iParam0)//Position - 0x15E8A
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_638.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_638.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_638.f_67[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_638.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_547(char* sParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x15EF1
{
	struct<3> Var0;
	
	if (!BitTest(Local_2605[iParam2 /*12*/].f_8[func_376(iParam3)], func_375(iParam3)) && !bParam1)
	{
		Var0 = { func_549(iParam3) };
		if (!HUD::DOES_BLIP_EXIST(iLocal_545[iParam3]))
		{
			if (!func_548(Var0, 0f, 0f, 0f, 0) && !func_548(Var0, 0f, 0f, -2000f, 0))
			{
				iLocal_545[iParam3] = HUD::ADD_BLIP_FOR_COORD(Var0);
				HUD::SET_BLIP_PRIORITY(iLocal_545[iParam3], 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_545[iParam3], sParam0);
				func_479(iLocal_545[iParam3], 25, 1152319488, 1137180672);
				func_543(&(iLocal_545[iParam3]), 12);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_545[iParam3], true);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(iLocal_545[iParam3], 255);
		}
		else
		{
			func_479(iLocal_545[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_545[iParam3]))
	{
		HUD::REMOVE_BLIP(&(iLocal_545[iParam3]));
		if (!bParam1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", false);
		}
	}
}

bool func_548(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x16015
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_549(int iParam0)//Position - 0x1605C
{
	switch (Local_638.f_3)
	{
		case 14:
			return Local_349[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_550()//Position - 0x16083
{
	switch (Local_638.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_551()//Position - 0x160A1
{
	switch (Local_638.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_552()//Position - 0x160BE
{
	switch (Local_638.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_553(var uParam0, char* sParam1)//Position - 0x160DE
{
	char* sVar0;
	
	if (func_326(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING" /* GXT: EVENT START */;
	if (!func_226(sParam1))
	{
		sVar0 = sParam1;
	}
	func_155(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_554(int iParam0)//Position - 0x1611E
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

int func_555(int iParam0, int iParam1)//Position - 0x16327
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_556(int iParam0)//Position - 0x1633D
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2794162.f_5068 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2794162.f_5068, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2794162.f_5068 = 0;
			MISC::SET_BIT(&(Global_2794162.f_5068), 1);
		}
	}
}

int func_557(var uParam0, bool bParam1, bool bParam2)//Position - 0x16391
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

void func_558(bool bParam0)//Position - 0x163D8
{
	if (!HUD::IS_RADAR_HIDDEN() && !CAM::IS_SCREEN_FADED_OUT())
	{
		switch (bParam0)
		{
			case 0:
				if (!BitTest(uLocal_622, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (func_5(Local_638.f_3))
						{
							if (Local_638.f_3 == 12)
							{
								func_307("AMCH_AIRAVI" /* GXT: Air vehicles ~HUD_COLOUR_BLUE~~BLIP_PLANE_DROP~~s~ are available at several locations. These will self-destruct once the event is over. */, 30000);
							}
							else
							{
								func_307("AMCH_AIRAV" /* GXT: Air vehicles ~HUD_COLOUR_BLUE~~BLIP_HELICOPTER~ ~BLIP_PLANE_DROP~~s~ are available at several locations. These will self-destruct once the event is over. */, 30000);
							}
						}
						else if (func_42(Local_638.f_3))
						{
							func_307("AMCH_BIKEAV" /* GXT: Motorcycles ~HUD_COLOUR_BLUE~~BLIP_GANG_BIKE~~s~ are available at several locations. */, 30000);
						}
						func_306(1);
						MISC::SET_BIT(&uLocal_622, bParam0);
					}
				}
				break;
			
			case 1:
				if (!BitTest(uLocal_622, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						func_307("AMCH_BLOW" /* GXT: This vehicle will now self-destruct. */, 30000);
						func_306(1);
						MISC::SET_BIT(&uLocal_622, bParam0);
					}
				}
				break;
			
			case 2:
				if (!BitTest(uLocal_622, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_563(63))
					{
						switch (Local_638.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										func_307("AMCH_ALTI" /* GXT: When flying close to the ground, a purple box is displayed on the Radar showing the height you must remain within to score in this challenge. */, 30000);
										func_306(1);
										MISC::SET_BIT(&uLocal_622, bParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_307("AMCH_NMIS" /* GXT: Points will be given for passing close to another land vehicle at speed without crashing. You must be driving a land vehicle to score. */, 30000);
									func_306(1);
									MISC::SET_BIT(&uLocal_622, bParam0);
								}
								break;
							
							case 1:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_307("AMCH_FRFALL" /* GXT: Deploy your parachute close to the ground for a higher score. Your score will only be counted if you land safely. Secondary parachutes will not count. */, -1);
									func_306(1);
									MISC::SET_BIT(&uLocal_622, bParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_307("AMCH_PVPO1" /* GXT: Points will only be given for eliminating other players and not the citizens of Los Santos and Blaine County. */, -1);
									func_306(1);
									MISC::SET_BIT(&uLocal_622, bParam0);
								}
								break;
							
							case 17:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_307("AMCH_PVPO2" /* GXT: Points will only be given for eliminating other players and not the citizens of Los Santos and Blaine County. Points will be deducted for kills with guns. */, -1);
									func_306(1);
									MISC::SET_BIT(&uLocal_622, bParam0);
								}
								break;
							
							case 4:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_307("AMCH_WHEELIE" /* GXT: Only wheelies performed on motorcycles will count towards this challenge. */, 30000);
									func_306(1);
									MISC::SET_BIT(&uLocal_622, bParam0);
								}
								break;
							
							case 3:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_307("AMCH_STOPPIE" /* GXT: Only stoppies performed on motorcycles will count towards this challenge. */, 30000);
									func_306(1);
									MISC::SET_BIT(&uLocal_622, bParam0);
								}
								break;
							
							case 10:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_307("AMCH_LFALL" /* GXT: Falls into water will not count towards this challenge. */, 30000);
									func_306(1);
									MISC::SET_BIT(&uLocal_622, bParam0);
								}
								break;
							
							case 6:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_307("AMCH_LPARA" /* GXT: Landing in water will not count towards this challenge. */, 30000);
									func_306(1);
									MISC::SET_BIT(&uLocal_622, bParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_622, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_563(63))
					{
						switch (Local_638.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if (func_1(&uLocal_323, 1000, 0))
										{
											func_307("AMCH_OCEAN" /* GXT: Flying low over deep water will not be counted for this challenge. */, 30000);
											func_306(1);
											func_47(&uLocal_323);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!BitTest(uLocal_622, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_563(63))
					{
						switch (Local_638.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if (func_542(PLAYER::PLAYER_ID()) && !func_560(PLAYER::PLAYER_ID()))
										{
											func_307("AMCH_ALTIEXP" /* GXT: The altimeter won't display on the expanded Radar. Return to the normal Radar to track your height above ground. */, 30000);
											func_306(1);
											MISC::SET_BIT(&uLocal_622, bParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!BitTest(uLocal_622, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_563(63))
					{
						if (func_1(&uLocal_323, 1000, 0))
						{
							func_307("AMCH_FLYLOW" /* GXT: You must fly lower to score in the challenge. */, 30000);
							func_306(1);
							func_47(&uLocal_323);
						}
					}
				}
				break;
			
			case 7:
				if (!BitTest(uLocal_622, bParam0))
				{
					if (Local_638.f_3 == 7)
					{
						if (iLocal_623 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_563(63))
							{
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_307("AMCH_MVS1" /* GXT: Points will only be given for stealing vehicles from the citizens of Los Santos and Blaine County. */, 30000);
									func_306(1);
									iLocal_623 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_563(63))
						{
							if (func_12(PLAYER::PLAYER_ID(), 1, 1))
							{
								func_307("AMCH_MVS2" /* GXT: Points will not be given for stealing from other players or taking vehicles that have already been stolen. */, 30000);
								func_306(1);
								MISC::SET_BIT(&uLocal_622, bParam0);
							}
						}
					}
					if (Local_638.f_3 == 14)
					{
						if (iLocal_623 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_563(63))
							{
								if (func_12(PLAYER::PLAYER_ID(), 1, 1))
								{
									func_307("AMCH_BRBL" /* GXT: The bridges ~HUD_COLOUR_YELLOW~~BLIP_OBJECTIVE~~s~ that count towards this challenge are displayed on your Radar. */, 30000);
									func_306(1);
									iLocal_623 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_563(63))
						{
							if (func_12(PLAYER::PLAYER_ID(), 1, 1))
							{
								func_307("AMCH_BRBL2" /* GXT: Flying under a bridge does not deny the points for that bridge to other players. Points will not be given for flying under a bridge more than once. */, 30000);
								func_306(1);
								MISC::SET_BIT(&uLocal_622, bParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!BitTest(uLocal_622, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_559("AMCH_WARN" /* GXT: The ~a~ Challenge will begin shortly. ~a~ The top 3 players will win cash and RP. */, func_409(Local_638.f_3), func_408(Local_638.f_3), 30000);
						func_306(0);
						Local_2990.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						MISC::SET_BIT(&uLocal_622, bParam0);
					}
				}
				break;
			}
	}
}

void func_559(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x169A4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

bool func_560(int iParam0)//Position - 0x169C7
{
	return BitTest(Global_1654054.f_241.f_136[func_562(9) /*33*/][iParam0], func_561(9));
}

int func_561(int iParam0)//Position - 0x169EA
{
	return (iParam0 % 32);
}

int func_562(int iParam0)//Position - 0x169F7
{
	return (iParam0 / 32);
}

bool func_563(int iParam0)//Position - 0x16A04
{
	return Global_2672524.f_2514[0 /*80*/].f_1 == iParam0;
}

void func_564(int iParam0)//Position - 0x16A1B
{
	Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 = iParam0;
}

void func_565(bool bParam0)//Position - 0x16A30
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
	}
}

int func_566(bool bParam0, bool bParam1, bool bParam2)//Position - 0x16A64
{
	if (func_593(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_175(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_175(PLAYER::PLAYER_ID(), 25))
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
	if (func_364(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_592())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_591(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_590())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_117(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_582(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_581(PLAYER::PLAYER_ID()) != func_113() && func_581(PLAYER::PLAYER_ID()) == func_91(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_579(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_578(func_301()) && !func_358(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_577())
	{
		return 0;
	}
	if (func_327())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_366(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_575())
	{
		return 0;
	}
	if (func_175(PLAYER::PLAYER_ID(), 0) || func_175(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_175(PLAYER::PLAYER_ID(), 12) || func_175(PLAYER::PLAYER_ID(), 14)) || func_175(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_574(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_540() && !Global_2764662)
		{
			return 0;
		}
	}
	if (func_573(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_572())
	{
		return 0;
	}
	if (Global_1935879)
	{
		return 0;
	}
	if (func_401(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_571())
	{
		return 0;
	}
	if (func_569(PLAYER::PLAYER_ID()) && Global_1853632.f_172)
	{
		return 0;
	}
	if (func_568())
	{
		return 0;
	}
	if (func_468())
	{
		return 0;
	}
	if (Global_2793197)
	{
		return 0;
	}
	if (Global_1969131)
	{
		return 0;
	}
	if (func_310(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_467(PLAYER::PLAYER_ID()))
	{
		if (func_567(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_567(int iParam0)//Position - 0x16CD0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890739[iVar0 /*138*/].f_77.f_60 != 0;
	}
	return 0;
}

bool func_568()//Position - 0x16CF4
{
	return Global_1950844.f_529;
}

int func_569(int iParam0)//Position - 0x16D03
{
	if (func_570(Global_1853988[iParam0 /*867*/].f_267.f_33))
	{
		return 1;
	}
	return 0;
}

int func_570(int iParam0)//Position - 0x16D25
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

int func_571()//Position - 0x16D54
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_572()//Position - 0x16D6C
{
	return Global_100885.f_394 > 0;
}

bool func_573(int iParam0)//Position - 0x16D7D
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 11);
}

int func_574(int iParam0, bool bParam1, bool bParam2)//Position - 0x16D96
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_575()//Position - 0x16DFA
{
	if (func_576() == 0)
	{
		return 1;
	}
	return 0;
}

int func_576()//Position - 0x16E0F
{
	return Global_1574632.f_18;
}

bool func_577()//Position - 0x16E1D
{
	return Global_1575063;
}

int func_578(int iParam0)//Position - 0x16E29
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

int func_579(int iParam0, int iParam1)//Position - 0x16E73
{
	if (func_123(iParam0, 0))
	{
		return func_580(Global_1895156[iParam0 /*609*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_580(int iParam0)//Position - 0x16E9D
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

int func_581(int iParam0)//Position - 0x17127
{
	return Global_1895156[iParam0 /*609*/].f_10.f_35;
}

int func_582(bool bParam0)//Position - 0x1713C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_402(bParam0) && !func_8(bParam0)) && !BitTest(Global_1895156[bParam0 /*609*/].f_1, 8));
	bVar2 = func_117(bParam0);
	uVar3 = func_177();
	uVar4 = func_583();
	if ((bVar1 && (func_467(bParam0) || func_428(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_119(bParam0)) && !func_313(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2794162.f_5231.f_221 != iVar0)
	{
		Global_2794162.f_5231.f_221 = iVar0;
	}
	return iVar0;
}

int func_583()//Position - 0x171F7
{
	if ((func_118(PLAYER::PLAYER_ID(), 21) || func_118(PLAYER::PLAYER_ID(), 22)) || func_587())
	{
		return 1;
	}
	if (func_585())
	{
		func_584(22);
		return 1;
	}
	return 0;
}

void func_584(int iParam0)//Position - 0x1723C
{
	MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), iParam0);
}

int func_585()//Position - 0x17259
{
	if (func_123(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_177() && !func_176()) || func_175(PLAYER::PLAYER_ID(), 21)) || func_175(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_586(27);
		}
	}
	return 0;
}

void func_586(int iParam0)//Position - 0x172AC
{
	MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), iParam0);
}

int func_587()//Position - 0x172C9
{
	return func_588(424, -1);
}

int func_588(int iParam0, int iParam1)//Position - 0x172D9
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_589(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_589(int iParam0, var uParam1)//Position - 0x172FD
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_210(uParam1));
}

bool func_590()//Position - 0x17312
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 5;
}

int func_591(int iParam0)//Position - 0x17327
{
	if (Global_2657704[iParam0 /*463*/].f_272.f_4 != 0 || Global_2657704[iParam0 /*463*/].f_272.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_592()//Position - 0x1735B
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 0);
}

bool func_593(int iParam0, int iParam1)//Position - 0x17374
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_5, iParam1);
}

void func_594()//Position - 0x1738C
{
	func_595(&(Local_726.f_534), &Local_726, 27, &(Local_726.f_1), &(Local_726.f_117), Local_638.f_3, 0, 0);
}

void func_595(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x173B4
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	bool bVar36;
	char* sVar37;
	int iVar38;
	struct<4> Var39;
	int iVar43;
	int iVar44;
	bool bVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	struct<2> Var58;
	
	if (func_711(iParam2))
	{
		return;
	}
	fVar46 = -1f;
	iVar47 = -1;
	iVar48 = -1;
	iVar50 = 0;
	iVar51 = 0;
	uParam3->f_36 = 0;
	if (func_709() || iParam2 == 28)
	{
		if (func_663(iParam1, iParam2, uParam3, Global_1836371, 0, func_712(), sParam7))
		{
			func_662(1);
			if ((!func_661() && !func_660()) || BitTest(Global_2794162.f_4694, 1))
			{
				if (func_659())
				{
					func_658();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_657(1);
						Global_1836371 = 0;
						iVar55 = -1;
						if (Global_1836595 != 1)
						{
							func_656(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar53 = 0;
							while (iVar53 < 32)
							{
								iVar1[iVar53] = -1;
								iVar53++;
							}
							iVar53 = 0;
							while (iVar53 < 32)
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar53), 0, 1))
								{
									bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
									if (!func_14(bVar36, 0))
									{
										if (func_652(bVar36) || func_650(bVar36, bVar35))
										{
											bVar45 = bVar36;
											if (func_93(bVar36))
											{
												iVar1[bVar45] = iVar56;
												iVar56++;
												iVar0++;
												func_647(&iVar1, bVar36, &iVar56, &iVar0, bVar35);
											}
										}
									}
								}
								iVar53++;
							}
						}
						if (!func_120(PLAYER::PLAYER_ID(), 0) && func_230(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar53 = 0;
						while (iVar53 < 32)
						{
							if (func_646())
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar53), 0, 1))
								{
									bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
								}
								else
								{
									bVar36 = func_113();
								}
							}
							else
							{
								bVar36 = (uParam0[iVar53 /*42*/])->f_1;
							}
							if ((func_645(bVar36) && func_642(bVar36, iParam2, bVar35)) && func_12(bVar36, 0, 1))
							{
								bVar45 = bVar36;
								iVar43 = Global_1853988[bVar45 /*867*/].f_205.f_6;
								Var39 = { func_636(bVar36) };
								if (bVar36 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar54;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar36), 64);
								*(uParam4[iVar53 /*13*/]) = { func_149(bVar36) };
								iVar38 = func_630(bVar36);
								sVar37 = "";
								if (iVar38 != 0)
								{
									sVar37 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar38);
								}
								Global_1836371++;
								if ((uParam0[iVar53 /*42*/])->f_22 != -1f)
								{
									fVar46 = (uParam0[iVar53 /*42*/])->f_22;
								}
								if ((uParam0[iVar53 /*42*/])->f_31 != -1)
								{
									iVar47 = (uParam0[iVar53 /*42*/])->f_31;
								}
								if ((uParam0[iVar53 /*42*/])->f_41 != -1)
								{
									iVar48 = (uParam0[iVar53 /*42*/])->f_41;
								}
								iVar44 = (uParam0[iVar53 /*42*/])->f_7;
								if (((uParam0[iVar53 /*42*/])->f_7 != -1 || (uParam0[iVar53 /*42*/])->f_22 != -1f) || (uParam0[iVar53 /*42*/])->f_31 != -1)
								{
									if (!func_646())
									{
										iVar51 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_628(&iVar44, &fVar46, (uParam0[iVar53 /*42*/])->f_7, iParam5);
									StringCopy(&(uParam3->f_104), func_295(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar49 = (uParam0[iVar53 /*42*/])->f_2 + 1;
									if (iVar55 != iVar49)
									{
										iVar55 = iVar49;
									}
									else
									{
										iVar49 = -2;
									}
								}
								iVar52 = func_627(bVar36, 0);
								if (bVar34)
								{
									if (func_92(bVar36, 1) && iVar1[bVar45] != -1)
									{
										iVar54 = iVar1[bVar45];
									}
									else
									{
										iVar54 = (iVar0 + iVar57);
										iVar57++;
									}
								}
								uParam3->f_38[bVar45 /*2*/].f_1 = iVar54;
								if ((uParam0[iVar53 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var58, "UW_TM", 16);
									StringIntConCat(&Var58, (uParam0[iVar53 /*42*/])->f_39, 16);
								}
								if (func_626(iParam5))
								{
									func_625(bVar36, iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar44, iVar52, iVar51, fVar46, iVar44, iVar48, &Var58, (uParam0[iVar53 /*42*/])->f_40, iVar49, bParam6);
								}
								else
								{
									func_625(bVar36, iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar44, iVar52, iVar51, fVar46, iVar47, iVar48, &Var58, (uParam0[iVar53 /*42*/])->f_40, iVar49, bParam6);
								}
								MISC::SET_BIT(&iVar50, bVar36);
								iVar54++;
							}
							iVar53++;
						}
						iVar53 = 0;
						while (iVar53 < 32)
						{
							bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
							if (func_12(bVar36, 0, 1) && !BitTest(iVar50, bVar36))
							{
								bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
							}
							else
							{
								bVar36 = func_113();
							}
							if (func_645(bVar36))
							{
								if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar53), 0, 1))
								{
									bVar45 = bVar36;
									iVar43 = Global_1853988[bVar45 /*867*/].f_205.f_6;
									Var39 = { func_636(bVar36) };
									*(uParam4[iVar53 /*13*/]) = { func_149(bVar36) };
									iVar38 = func_630(bVar36);
									sVar37 = "";
									if (iVar38 != 0)
									{
										sVar37 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar38);
									}
									Global_1836371++;
									iVar52 = func_627(bVar36, 1);
									if (bVar34)
									{
										if (func_92(bVar36, 1))
										{
											iVar54 = iVar1[iVar53];
										}
										else
										{
											iVar54 = (iVar0 + iVar57);
											iVar57++;
										}
									}
									uParam3->f_38[bVar45 /*2*/].f_1 = iVar54;
									func_608(bVar36, PLAYER::GET_PLAYER_NAME(bVar36), iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar52, iVar51);
									iVar54++;
								}
							}
							iVar53++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_605(uParam3, iParam1, iParam2);
						}
						func_47(&(uParam3->f_21));
						func_604();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_603(uParam3, iParam1);
							func_602(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_603(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_598(uParam3))
						{
							Global_1836595 = 1;
						}
						func_596(uParam3);
						if (Global_1836595 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836595 == 2)
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
			func_604();
			func_657(0);
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

void func_596(var uParam0)//Position - 0x179E2
{
	if (!func_48(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_47(&(uParam0->f_21));
		func_597(0);
	}
}

void func_597(bool bParam0)//Position - 0x17A1E
{
	if (bParam0)
	{
		if (Global_1836595 != 2)
		{
			Global_1836595 = 2;
		}
	}
	else
	{
		switch (Global_1836595)
		{
			case 0:
				Global_1836595 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_598(var uParam0)//Position - 0x17A64
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_113() && func_12(bVar15, 0, 1))
	{
		Var2 = { func_149(bVar15) };
		iVar1 = func_601(uParam0, uParam0->f_37);
		if (func_600(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_599(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_599(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_599(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_599(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_599(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_599(uParam0, iVar0, 0);
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
	return iVar16;
}

void func_599(var uParam0, int iParam1, int iParam2)//Position - 0x17B91
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_600(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x17BA3
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_601(var uParam0, int iParam1)//Position - 0x17BB3
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_602(int* iParam0, bool bParam1, int iParam2)//Position - 0x17BC3
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

void func_603(var uParam0, int* iParam1)//Position - 0x17BFB
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_604()//Position - 0x17C30
{
	if (Global_1836595 != 0)
	{
		Global_1836595 = 0;
	}
}

void func_605(var uParam0, int* iParam1, int iParam2)//Position - 0x17C45
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_113())
		{
			if (func_12(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_607(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_606(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853988[iVar0 /*867*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_606(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17CBA
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

int func_607(int iParam0, bool bParam1, int iParam2)//Position - 0x17CF7
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

void func_608(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x17D3E
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_624() && iParam4 < func_623())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836373)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836595 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_622("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_622(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_622("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_622("");
			if (uParam3->f_108 == 6)
			{
				func_622("");
			}
			else
			{
				func_622(&sParam5);
			}
			func_613(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_612(uParam3))
			{
				func_611("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_610(uParam3))
			{
				func_611("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_609(uParam3))
			{
				func_611("DPAD_CREW" /* GXT: C */);
			}
			else
			{
				func_611("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_609(var uParam0)//Position - 0x17E65
{
	return BitTest(uParam0->f_33, 6);
}

bool func_610(var uParam0)//Position - 0x17E73
{
	return BitTest(uParam0->f_33, 5);
}

void func_611(char* sParam0)//Position - 0x17E81
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_612(var uParam0)//Position - 0x17E93
{
	if (func_610(uParam0) && func_609(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_613(var uParam0, bool bParam1)//Position - 0x17EB4
{
	if (func_621(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_617(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2657704[bParam1 /*463*/].f_433, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_614())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_614()//Position - 0x17F2F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_615() || func_105())
		{
			return 1;
		}
	}
	return 0;
}

int func_615()//Position - 0x17F54
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_105();
	}
	return func_616(Global_4718592.f_117591);
}

int func_616(int iParam0)//Position - 0x17F78
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5025[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_617(bool bParam0)//Position - 0x17FB2
{
	if ((func_12(bParam0, 0, 1) && func_618()) && func_269(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_618()//Position - 0x17FDF
{
	if (func_402(PLAYER::PLAYER_ID()) || func_620())
	{
		if (!func_619(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_619(int iParam0)//Position - 0x18010
{
	if (func_333(iParam0) == 236 || func_333(iParam0) == 150)
	{
		return func_467(iParam0);
	}
	return 0;
}

int func_620()//Position - 0x1803D
{
	switch (func_230(PLAYER::PLAYER_ID()))
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

int func_621(bool bParam0)//Position - 0x1807B
{
	if (func_614())
	{
		if (func_12(bParam0, 0, 1))
		{
			return func_93(bParam0);
		}
	}
	if ((func_12(bParam0, 0, 1) && func_618()) && func_271(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_622(char* sParam0)//Position - 0x180C3
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_623()//Position - 0x180D1
{
	int iVar0;
	
	if (Global_1836373)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_624()//Position - 0x180ED
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836373)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_625(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x18105
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_624() && iParam3 < func_623())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836373)
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
		if (Global_1836595 == 1)
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
					func_622("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_611(sParam16);
				}
				else
				{
					func_622(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_622("");
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
				if (func_646())
				{
					func_622("");
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
						func_611(&(uParam2->f_104));
					}
					else
					{
						func_622("");
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
					func_622("");
				}
				if (uParam2->f_108 == 6)
				{
					func_622("");
				}
				else
				{
					func_622(&sParam4);
				}
				func_613(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_622("");
					func_622("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_612(uParam2))
				{
					func_611("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_610(uParam2))
				{
					func_611("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_609(uParam2))
				{
					func_611("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					func_611("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_626(int iParam0)//Position - 0x1845C
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

int func_627(bool bParam0, bool bParam1)//Position - 0x18480
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_402(bParam0)) && !func_117(bParam0))
	{
		iVar0 = func_67();
	}
	iVar1 = func_90(bParam0);
	if (!iVar1 == -1)
	{
		return func_88(iVar1);
	}
	return iVar0;
}

int func_628(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x184CA
{
	if (func_629(iParam3))
	{
		*fParam1 = (func_297(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_626(iParam3))
	{
		*fParam1 = (func_297(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_629(int iParam0)//Position - 0x1851A
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

int func_630(bool bParam0)//Position - 0x18576
{
	int iVar0;
	
	iVar0 = func_633(bParam0);
	if (iVar0 == -1)
	{
		func_631(bParam0, 1);
		return 0;
	}
	Global_1666485[iVar0 /*5*/].f_4 = 1;
	return Global_1666485[iVar0 /*5*/].f_2;
}

void func_631(bool bParam0, bool bParam1)//Position - 0x185AC
{
	if (!func_12(bParam0, 0, 1))
	{
		return;
	}
	if (func_633(bParam0) != -1)
	{
		return;
	}
	if (Global_1666648)
	{
		if (bParam0 == Global_1666648.f_1)
		{
			return;
		}
	}
	if (func_632(bParam0))
	{
		return;
	}
	if (Global_1666686 >= 32)
	{
		return;
	}
	Global_1666653[Global_1666686] = bParam0;
	Global_1666686++;
	if (bParam1)
	{
	}
}

int func_632(bool bParam0)//Position - 0x18618
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666686)
	{
		if (Global_1666653[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_633(bool bParam0)//Position - 0x1864A
{
	int iVar0;
	
	if (!func_12(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1666646 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666646)
	{
		if (Global_1666485[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1666485[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666485[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_634(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_634(int iParam0)//Position - 0x186C9
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1666646)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1666485[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1666485[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666485[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1666485[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1666646)
	{
		Global_1666485[iVar32 /*5*/] = { Global_1666485[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_635(&(Global_1666485[iVar32 /*5*/]));
	Global_1666646 = (Global_1666646 - 1);
}

void func_635(var uParam0)//Position - 0x1877F
{
	*uParam0 = 0;
	uParam0->f_1 = func_113();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_636(bool bParam0)//Position - 0x187AC
{
	char cVar0[32];
	
	if (func_12(bParam0, 0, 1))
	{
		Global_2764376 = { func_149(bParam0) };
		if (func_641())
		{
			if (func_600(Global_2764376))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2764376))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_640(&Global_2764376))
		{
			Global_2764306 = { func_638(bParam0) };
			func_637(&Global_2764306, &cVar0);
		}
	}
	return cVar0;
}

void func_637(var* uParam0, char* sParam1)//Position - 0x1882D
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_638(bool bParam0)//Position - 0x1883F
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_639(bParam0))
	{
		return Global_1575095[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_149(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_639(int iParam0)//Position - 0x1887B
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_640(var* uParam0)//Position - 0x18891
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

bool func_641()//Position - 0x188B7
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_642(bool bParam0, int iParam1, bool bParam2)//Position - 0x188CD
{
	if (iParam1 == 27)
	{
		if ((func_8(bParam0) || func_644(bParam0)) || func_7(bParam0))
		{
			return 0;
		}
	}
	if (!func_643(bParam0))
	{
		return 0;
	}
	if (!func_652(bParam0) && !func_650(bParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_643(bool bParam0)//Position - 0x1892C
{
	return BitTest(Global_1853988[bParam0 /*867*/].f_139, 22);
}

int func_644(bool bParam0)//Position - 0x18942
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1895156[bParam0 /*609*/].f_1, 10) || BitTest(Global_1895156[bParam0 /*609*/].f_1, 9));
	}
	return 0;
}

int func_645(bool bParam0)//Position - 0x1897A
{
	bool bVar0;
	
	if (bParam0 == func_113())
	{
		return 0;
	}
	if (func_14(bParam0, 0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (BitTest(Global_1853988[bVar0 /*867*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_646()//Position - 0x189BC
{
	switch (func_230(PLAYER::PLAYER_ID()))
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
	switch (func_333(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_117(PLAYER::PLAYER_ID()))
	{
		switch (func_230(PLAYER::PLAYER_ID()))
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
	if (func_619(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_647(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x18AF6
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_14(bVar1, 0))
			{
				if (func_652(bVar1) || func_650(bVar1, bParam4))
				{
					if (func_648(bVar1, bParam1, 0))
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

int func_648(bool bParam0, int iParam1, bool bParam2)//Position - 0x18B6F
{
	if (func_17(iParam1))
	{
		if (!bParam2)
		{
			if (func_649(bParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1895156[bParam0 /*609*/].f_10 != func_113())
		{
			return iParam1 == Global_1895156[bParam0 /*609*/].f_10;
		}
	}
	return 0;
}

int func_649(int iParam0, int iParam1)//Position - 0x18BB9
{
	if (iParam1 != func_113())
	{
		if (iParam0 != func_113())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 != func_113())
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

bool func_650(bool bParam0, bool bParam1)//Position - 0x18BFE
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2657704[bParam0 /*463*/].f_246 != -1 || func_651(bParam0));
}

bool func_651(int iParam0)//Position - 0x18C28
{
	return Global_1853988[iParam0 /*867*/].f_192 != 0;
}

int func_652(bool bParam0)//Position - 0x18C3D
{
	if (!func_12(bParam0, 0, 1))
	{
		return 0;
	}
	if (!func_12(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_653(bParam0))
	{
		return 0;
	}
	if ((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(bParam0, PLAYER::PLAYER_ID()) || func_230(bParam0) == 233) || func_230(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_653(int iParam0)//Position - 0x18CA6
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_654(PLAYER::PLAYER_ID());
	bVar1 = func_654(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_654(int iParam0)//Position - 0x18CE2
{
	return func_655(&(Global_2657704[iParam0 /*463*/].f_442), 0);
}

var func_655(var uParam0, int iParam1)//Position - 0x18CFB
{
	return BitTest(*uParam0, iParam1);
}

void func_656(int* iParam0, int iParam1, int iParam2)//Position - 0x18D09
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_657(bool bParam0)//Position - 0x18D37
{
	if (bParam0)
	{
		if (Global_1654051.f_2 == 0)
		{
			Global_1654051.f_2 = 1;
		}
	}
	else if (Global_1654051.f_2 == 1)
	{
		Global_1654051.f_2 = 0;
	}
}

void func_658()//Position - 0x18D69
{
	if (BitTest(Global_2794162.f_4694, 1))
	{
		if (func_314())
		{
			func_300();
		}
	}
}

int func_659()//Position - 0x18D88
{
	if (BitTest(Global_2794162.f_4694, 0) && func_314())
	{
		return 1;
	}
	if (BitTest(Global_2794162.f_4694, 1) && func_314())
	{
		return 1;
	}
	return 0;
}

int func_660()//Position - 0x18DC3
{
	if (func_314())
	{
		if (func_55(Global_2672524.f_2514[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_661()//Position - 0x18DEA
{
	if (func_314())
	{
		if (func_68(Global_2672524.f_2514[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_662(int iParam0)//Position - 0x18E11
{
	if (Global_1654051.f_1 != Global_1654051)
	{
		Global_1654051.f_1 = Global_1654051;
	}
	if (Global_1654051 != iParam0)
	{
		Global_1654051 = iParam0;
	}
}

int func_663(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x18E3F
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_708(iParam1);
	fVar7 = func_707();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_706())
		{
			if (func_705() > 0 && Global_1836373)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
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
		if (!func_694())
		{
			func_693(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2794162.f_4697, 26))
	{
		func_693(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_48(&(uParam2->f_19)))
	{
		if (func_705() == 1)
		{
			func_692(bVar6, iParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_693(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2794162.f_4699), 5);
		}
	}
	if (func_48(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_705() == 0 && !bParam5))
		{
			func_693(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_691();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_691();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_692(bVar6, iParam0, 0))
				{
					func_656(iParam0, 0, 0);
					sVar4 = func_689(iParam1, &(Global_4718592.f_117598), bParam4);
					Var0 = { func_687(iParam1) };
					if (bParam4)
					{
						func_684(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_678(iParam0, func_681(uParam2), func_679(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_672(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_670(iParam0, sVar9, func_671(), -1);
					}
					else if (func_614())
					{
						uParam2->f_34 = Global_1836372;
						func_684(iParam0, sVar4, &Var0, 1, -1, Global_1836372, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_665(iParam1);
						uParam2->f_34 = Global_1836372;
						func_684(iParam0, sVar4, "", 0, iVar8, func_664(), 1);
					}
					else
					{
						iVar8 = func_665(iParam1);
						func_684(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836371 = uParam3;
				Global_1836370 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1836372)
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

int func_664()//Position - 0x19112
{
	return Global_1836372;
}

int func_665(int iParam0)//Position - 0x1911E
{
	int iVar0;
	
	iVar0 = -1;
	if (func_669())
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
		case 43:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_668(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_667(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_666(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_231())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_666(int iParam0)//Position - 0x19289
{
	return Global_2657704[iParam0 /*463*/].f_121 == 4;
}

bool func_667(int iParam0)//Position - 0x1929E
{
	return Global_2657704[iParam0 /*463*/].f_121 == 7;
}

bool func_668(int iParam0)//Position - 0x192B3
{
	return Global_2657704[iParam0 /*463*/].f_121 == 2;
}

bool func_669()//Position - 0x192C8
{
	return Global_4718592.f_1 == 0;
}

void func_670(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x192D8
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_611(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_611("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_671()//Position - 0x19337
{
	switch (func_230(PLAYER::PLAYER_ID()))
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

char* func_672(var uParam0)//Position - 0x1938F
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
	switch (func_230(PLAYER::PLAYER_ID()))
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
			if (func_674())
			{
				return "LBD_BKVBK" /* GXT: Deathmatch */;
			}
			return "PIM_MAGM201" /* GXT: Executive Deathmatch */;
			break;
		
		case 151:
			if (func_268(1))
			{
				return "GB_DPAD_BMFD" /* GXT: Marked For Death */;
			}
			return "PIM_MAGM202" /* GXT: Put Out a Hit */;
			break;
		
		case 152:
			return "PIM_MAGM204" /* GXT: Piracy Prevention */;
			break;
		
		case 153:
			if (func_268(1))
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
			if (func_673(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_182))
			{
				return "GB_DPAD_BSET" /* GXT: Business Setup */;
			}
			return "GB_DPAD_BBUY" /* GXT: Resupply */;
			break;
	}
	return "";
}

int func_673(int iParam0)//Position - 0x197BB
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

bool func_674()//Position - 0x197ED
{
	return (func_677() && func_675(func_676()));
}

int func_675(int iParam0)//Position - 0x19806
{
	return func_271(iParam0, 1);
}

int func_676()//Position - 0x19815
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_35;
}

bool func_677()//Position - 0x1982C
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 148;
}

void func_678(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x19842
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_611(sParam1);
		}
		else if (func_333(PLAYER::PLAYER_ID()) == 133)
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
		func_611("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_679(var uParam0)//Position - 0x198C9
{
	int iVar0;
	
	iVar0 = func_333(PLAYER::PLAYER_ID());
	if (func_680())
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
			switch (func_332())
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

bool func_680()//Position - 0x19A74
{
	return Global_1853861;
}

char* func_681(var uParam0)//Position - 0x19A80
{
	int iVar0;
	
	iVar0 = func_333(PLAYER::PLAYER_ID());
	if (func_680())
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
			if (func_683() == 0)
			{
				return "CPC_TILEL" /* GXT: Checkpoints */;
			}
			else if (func_683() == 1)
			{
				return "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			return "PIM_TA0" /* GXT: Checkpoints */;
			break;
		
		case 133:
			switch (func_332())
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
			if (func_682() == 1)
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

int func_682()//Position - 0x19C75
{
	return Global_2794162.f_5155;
}

int func_683()//Position - 0x19C84
{
	if (func_333(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2794162.f_5150;
	}
	return -1;
}

void func_684(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x19CA7
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_622(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_611(sParam1);
		}
		if (func_706() && iParam6)
		{
			if (func_686())
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
			func_611(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_685(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_65())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_685(int iParam0)//Position - 0x19D68
{
	if (func_668(iParam0) || func_667(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_686()//Position - 0x19D8A
{
	return Global_1836373;
}

struct<4> func_687(int iParam0)//Position - 0x19D96
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_688(PLAYER::PLAYER_ID()) || func_666(PLAYER::PLAYER_ID()))
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
			StringIntConCat(&Var0, Global_4718592.f_1749, 16);
			break;
	}
	if (func_614() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_1749, 16);
	}
	return Var0;
}

bool func_688(int iParam0)//Position - 0x19E33
{
	return Global_2657704[iParam0 /*463*/].f_121 == 5;
}

char* func_689(int iParam0, char* sParam1, bool bParam2)//Position - 0x19E48
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_614() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_690();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP" /* GXT: One on One Deathmatch */;
	}
	else if (iParam0 == 25)
	{
		if (Global_1836615 == 0)
		{
			Global_1836615 = 1;
		}
		return "HUD_LBD_OVR" /* GXT: Overall Results */;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836615 == 1)
		{
			Global_1836615 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836615 == 0)
		{
			Global_1836615 = 1;
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

char* func_690()//Position - 0x19FB2
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

void func_691()//Position - 0x19FF6
{
	Global_44323 = 1;
}

bool func_692(bool bParam0, int* iParam1, bool bParam2)//Position - 0x1A002
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

void func_693(int* iParam0, var uParam1, bool bParam2)//Position - 0x1A042
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836371 = 0;
	func_604();
	Global_1836370 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_48(&(uParam1->f_19)))
		{
			func_47(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2794162.f_4699), 5);
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

int func_694()//Position - 0x1A0B1
{
	if (func_704())
	{
		return 0;
	}
	if (func_590())
	{
		return 0;
	}
	if (!func_702())
	{
		return 0;
	}
	if (!func_575())
	{
		return 0;
	}
	if (func_701(8, -1))
	{
		return 0;
	}
	if (func_705() == 2)
	{
		return 0;
	}
	if (Global_2794162.f_4649)
	{
		return 0;
	}
	if (func_327())
	{
		return 0;
	}
	else if (!func_365(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_700(1) || func_698(1)) || Global_23251.f_124) || Global_23251)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_697() && Global_1970692 == 2)
	{
		return 0;
	}
	if (func_111(PLAYER::PLAYER_ID()) && !func_697())
	{
		return 0;
	}
	if (Global_1935879)
	{
		return 0;
	}
	if (Global_1935884)
	{
		return 0;
	}
	if (func_696(0))
	{
		return 0;
	}
	if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 4))
	{
		return 0;
	}
	if (Global_1648760)
	{
		return 0;
	}
	if ((Global_1964804.f_718.f_5 || Global_1967630.f_718.f_5) || Global_1963832.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1971696.f_724.f_5 || Global_1971696.f_744.f_724.f_5) || Global_1971696.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1978495.f_726.f_5)
	{
		return 0;
	}
	if (func_695(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1648802 || Global_1648803) || Global_1648804)
	{
		return 0;
	}
	return 1;
}

int func_695(int iParam0)//Position - 0x1A289
{
	if (iParam0 == func_113())
	{
		return 0;
	}
	return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_4, 6);
}

bool func_696(int iParam0)//Position - 0x1A2AE
{
	return BitTest(Global_2794162.f_5231.f_48, iParam0);
}

bool func_697()//Position - 0x1A2C2
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1970693, 0));
}

int func_698(bool bParam0)//Position - 0x1A2DE
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_699(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23251.f_130)
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

int func_699(int iParam0)//Position - 0x1A3C9
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

bool func_700(bool bParam0)//Position - 0x1A426
{
	if (bParam0)
	{
		return (Global_23251.f_4 && Global_23251.f_104 == 4);
	}
	return Global_23251.f_4;
}

bool func_701(int iParam0, int iParam1)//Position - 0x1A44F
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

int func_702()//Position - 0x1A487
{
	if (func_703())
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

bool func_703()//Position - 0x1A4C6
{
	return Global_1574604;
}

bool func_704()//Position - 0x1A4D2
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

int func_705()//Position - 0x1A4E7
{
	return Global_1654054.f_68;
}

int func_706()//Position - 0x1A4F5
{
	if (Global_1836372 > 16)
	{
		return 1;
	}
	return 0;
}

float func_707()//Position - 0x1A50B
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_708(int iParam0)//Position - 0x1A52F
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

int func_709()//Position - 0x1A561
{
	if (func_712())
	{
		return 1;
	}
	if (func_7(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_680())
	{
		return 1;
	}
	if (func_402(PLAYER::PLAYER_ID()))
	{
		switch (func_333(PLAYER::PLAYER_ID()))
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
				if (!func_710(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_710(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_710(PLAYER::PLAYER_ID()))
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

bool func_710(int iParam0)//Position - 0x1A63C
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_1, 4);
}

int func_711(int iParam0)//Position - 0x1A651
{
	if (iParam0 == 28)
	{
		if ((func_402(PLAYER::PLAYER_ID()) && !func_117(PLAYER::PLAYER_ID())) && !func_619(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_123(PLAYER::PLAYER_ID(), 0) && func_117(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_582(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_712()//Position - 0x1A6C0
{
	if (func_713(PLAYER::PLAYER_ID()))
	{
		return Global_1581969;
	}
	return 0;
}

int func_713(bool bParam0)//Position - 0x1A6DB
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_14(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return 0;
}

void func_714()//Position - 0x1A6FE
{
	if (Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
	{
		if (!BitTest(uLocal_329, 8))
		{
			if ((!func_7(PLAYER::PLAYER_ID()) && !func_174(PLAYER::PLAYER_ID())) && !func_415(PLAYER::PLAYER_ID()))
			{
				func_414();
			}
		}
		else if (!BitTest(uLocal_329, 9))
		{
			if ((func_7(PLAYER::PLAYER_ID()) || func_174(PLAYER::PLAYER_ID())) || func_415(PLAYER::PLAYER_ID()))
			{
				STATS::STAT_STOP_RECORD_STAT();
				Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = 0;
				MISC::SET_BIT(&uLocal_329, 9);
			}
		}
	}
}

void func_715()//Position - 0x1A799
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_333)))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_333));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			func_716(bVar0, 2);
		}
	}
	iLocal_333++;
	if (iLocal_333 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_333 = 0;
	}
}

void func_716(bool bParam0, int iParam1)//Position - 0x1A7E2
{
	bool bVar0;
	
	if (BitTest(Global_1836866.f_1, 0))
	{
		return;
	}
	if (func_48(&(Global_1836866.f_18)))
	{
		return;
	}
	if (BitTest(Global_1836866.f_2, bParam0))
	{
		if (Global_1836866 < iParam1 && BitTest(Global_1836866.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1836866.f_1), 0);
			return;
		}
		if (Global_1836866 != 0)
		{
			MISC::SET_BIT(&(Global_1836866.f_1), 1);
		}
		Global_1836866 = 0;
		Global_1836866.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1836866.f_2), bParam0);
	bVar0 = true;
	if (func_8(bParam0))
	{
		bVar0 = false;
	}
	if (func_717(bParam0))
	{
		bVar0 = false;
	}
	if (func_14(bParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1836866++;
	}
}

bool func_717(bool bParam0)//Position - 0x1A8A7
{
	return BitTest(Global_1895156[bParam0 /*609*/].f_1, 10);
}

void func_718(int iParam0, int iParam1)//Position - 0x1A8BD
{
	Local_2605[iParam0 /*12*/] = iParam1;
}

int func_719()//Position - 0x1A8CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_726.f_534[iVar0 /*42*/].f_1 = func_113();
		iVar0++;
	}
	return 1;
}

int func_720()//Position - 0x1A8FA
{
	return Local_638.f_0;
}

int func_721(int iParam0)//Position - 0x1A905
{
	return Local_2605[iParam0 /*12*/];
}

void func_722()//Position - 0x1A914
{
	if (BitTest(Global_1836866.f_1, 6))
	{
		func_746();
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 6);
	}
	if (!BitTest(Global_1836866.f_1, 7))
	{
		if (BitTest(Global_1836866.f_1, 4) || BitTest(Global_1836866.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_314()) && func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836866.f_1), 7);
				func_307("FME_PASINT" /* GXT: You will not be able to take part in this event in Passive Mode. */, 30000);
				func_306(1);
			}
		}
		else if (BitTest(Global_1836866.f_1, 17))
		{
			if (func_177() && !func_176())
			{
				MISC::CLEAR_BIT(&(Global_1836866.f_1), 17);
				MISC::SET_BIT(&(Global_1836866.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836866.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2794162.f_853, 2)) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75816) && !Global_60666) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_744())
			{
				func_307("AMEV_GA_RP" /* GXT: When in an active Gang Attack location, some other players may not be attackable. */, -1);
				if (func_230(PLAYER::PLAYER_ID()) != 200)
				{
					func_306(1);
				}
				MISC::SET_BIT(&(Global_1836866.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_428(PLAYER::PLAYER_ID()))
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
	if (BitTest(Global_1836866.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_314()) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !func_175(PLAYER::PLAYER_ID(), 21)) && !func_175(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836866.f_1), 9);
			func_743(0);
			func_307("FME_TBL00" /* GXT: Job & Activity Triggers have been temporarily hidden as you are now an active participant in the current Freemode Event. They will return once the Event is over. */, -1);
			func_306(1);
		}
	}
	if (func_402(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836866.f_1, 18))
		{
			if ((func_175(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836866.f_1, 20)) && !BitTest(Global_1836866.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836866.f_1), 18);
			}
		}
		else if (BitTest(Global_1836866.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_314()) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_742())
			{
				MISC::CLEAR_BIT(&(Global_1836866.f_1), 18);
				MISC::SET_BIT(&(Global_1836866.f_1), 19);
				func_307("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				func_306(1);
			}
		}
	}
	if (((((func_402(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID())) && func_333(PLAYER::PLAYER_ID()) != 146) && !func_7(PLAYER::PLAYER_ID())) && !func_174(PLAYER::PLAYER_ID())) && !func_732())
	{
		if (func_427(func_333(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836866.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836866.f_1), 22);
		}
		if (func_467(PLAYER::PLAYER_ID()) || func_421())
		{
			if (!BitTest(Global_1836866.f_1, 10))
			{
				if (func_731(func_333(PLAYER::PLAYER_ID())))
				{
					if (func_275(0) && !Global_4593985)
					{
						MISC::SET_BIT(&(Global_1836866.f_1), 9);
					}
					if (!Global_4593985)
					{
						func_425(1);
						MISC::SET_BIT(&(Global_1836866.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836866.f_1), 10);
			}
		}
		if (func_428(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836866.f_1, 11))
			{
				if (!Global_100885.f_8)
				{
					MISC::SET_BIT(&(Global_1836866.f_1), 12);
					func_423(1);
				}
				if (!func_730())
				{
					MISC::SET_BIT(&(Global_1836866.f_1), 13);
					func_422();
				}
				if (!Global_4593985)
				{
					MISC::SET_BIT(&(Global_1836866.f_1), 14);
					if (func_275(0) && !Global_4593985)
					{
						MISC::SET_BIT(&(Global_1836866.f_1), 9);
					}
					func_425(1);
				}
				MISC::SET_BIT(&(Global_1836866.f_1), 11);
			}
		}
		else
		{
			func_728(0);
		}
	}
	else
	{
		func_728(1);
	}
	func_723();
	if (func_420(func_333(PLAYER::PLAYER_ID())) && !BitTest(Global_1836866.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836866.f_1), 21);
	}
	if (((func_177() && !func_176()) || func_175(PLAYER::PLAYER_ID(), 21)) || func_175(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 10);
	}
}

void func_723()//Position - 0x1AE1B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_314())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_563(iVar2))
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
				if (BitTest(Global_1836866.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1836866.f_1), 26);
				}
				func_724(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836866.f_1, 26))
	{
		func_47(&(Global_1836866.f_22));
		MISC::SET_BIT(&(Global_1836866.f_1), 26);
	}
}

void func_724(int iParam0, int iParam1)//Position - 0x1AEB8
{
	if (!func_48(&(Global_1836866.f_22)))
	{
		func_2(&(Global_1836866.f_22), 0, 0);
	}
	else if (func_1(&(Global_1836866.f_22), iParam1, 0))
	{
		if (func_705() > 0)
		{
			func_727(iParam0);
			if (func_304("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_47(&(Global_1836866.f_22));
		}
	}
	else
	{
		func_726(0);
		func_725();
	}
}

void func_725()//Position - 0x1AF21
{
	Global_2794162.f_4636 = 0;
}

void func_726(int iParam0)//Position - 0x1AF31
{
	Global_1654054.f_68 = iParam0;
}

void func_727(int iParam0)//Position - 0x1AF41
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672524.f_2514[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2672524.f_2514[iVar0 /*80*/].f_2 = 5;
			func_114(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_728(int iParam0)//Position - 0x1AF8D
{
	if ((BitTest(Global_1836866.f_1, 11) || (BitTest(Global_1836866.f_1, 10) && iParam0)) || (BitTest(Global_1836866.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836866.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836866.f_1), 12);
			func_423(0);
		}
		if (BitTest(Global_1836866.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836866.f_1), 13);
			func_729();
		}
		if (BitTest(Global_1836866.f_1, 14) && !func_123(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836866.f_1), 14);
			func_425(0);
		}
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 22);
	}
}

void func_729()//Position - 0x1B056
{
	MISC::CLEAR_BIT(&(Global_2794162.f_5069), 0);
}

bool func_730()//Position - 0x1B06A
{
	return BitTest(Global_2794162.f_5069, 0);
}

int func_731(int iParam0)//Position - 0x1B07B
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
			return func_428(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_421() || func_5(func_332()));
		
		default:
	}
	return 0;
}

int func_732()//Position - 0x1B0EB
{
	if (((((((((func_741() || func_740()) || func_739()) || func_327()) || (func_738() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_735() && !func_734())) || Global_2625211) || Global_2625211.f_1 != 0) || Global_2625286 != 0) || (func_733() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_733()//Position - 0x1B17F
{
	return Global_1057409;
}

bool func_734()//Position - 0x1B18B
{
	return BitTest(Global_2683883.f_2, 27);
}

int func_735()//Position - 0x1B19C
{
	if (func_737() || func_736())
	{
		return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_95 == 8;
	}
	return 0;
}

var func_736()//Position - 0x1B1C9
{
	return Global_2683883.f_735;
}

var func_737()//Position - 0x1B1D8
{
	return BitTest(Global_2683883.f_2, 11);
}

var func_738()//Position - 0x1B1E9
{
	return BitTest(Global_2683883, 5);
}

var func_739()//Position - 0x1B1F7
{
	return BitTest(Global_2683883, 2);
}

var func_740()//Position - 0x1B205
{
	return BitTest(Global_2683883, 20);
}

bool func_741()//Position - 0x1B214
{
	return Global_2683883.f_698;
}

bool func_742()//Position - 0x1B223
{
	return Global_2794162.f_5164 != -1;
}

void func_743(int iParam0)//Position - 0x1B234
{
	int iVar0;
	
	iVar0 = func_215(2537, -1);
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
	func_208(2537, iVar0, -1, 1);
}

int func_744()//Position - 0x1B346
{
	int iVar0;
	
	if (!func_48(&(Global_1836866.f_15)))
	{
		func_2(&(Global_1836866.f_15), 0, 0);
		Global_1836866.f_17 = 0;
	}
	else if (func_1(&(Global_1836866.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836866.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836866.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_745(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_39(PLAYER::PLAYER_ID()), func_39(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836866.f_17++;
		if (Global_1836866.f_17 >= 32)
		{
			Global_1836866.f_17 = 0;
			func_47(&(Global_1836866.f_15));
		}
	}
	return 0;
}

int func_745(int iParam0, int iParam1)//Position - 0x1B40E
{
	int iVar0;
	
	if (func_404() != 0)
	{
		return 0;
	}
	if (!func_214(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853988[iVar0 /*867*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_746()//Position - 0x1B447
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_748();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836866.f_1), 8);
	func_747();
}

void func_747()//Position - 0x1B46D
{
	if (Global_1945796)
	{
		if (BitTest(Global_1945797, 0))
		{
			MISC::CLEAR_BIT(&Global_2803781, 0);
		}
		if (BitTest(Global_1945797, 1))
		{
			MISC::CLEAR_BIT(&Global_2803781, 1);
		}
		if (BitTest(Global_1945797, 5))
		{
			MISC::CLEAR_BIT(&Global_2803781, 5);
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
		Global_1945797 = 0;
	}
	Global_1945796 = 0;
}

void func_748()//Position - 0x1B564
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2794162.f_5227))
	{
		if (!Global_2794162.f_5227 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2794162.f_5226 < 1f)
		{
			return;
		}
	}
	Global_2794162.f_5227 = -1;
	Global_2794162.f_5226 = 1f;
}

int func_749()//Position - 0x1B5AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2794162.f_5067)
	{
		return 0;
	}
	if ((!func_48(&(Local_638.f_39)) && !func_48(&(Local_638.f_41))) && !func_48(&(Local_638.f_43)))
	{
		return 0;
	}
	iVar2 = NETWORK::GET_NETWORK_TIME();
	if (func_48(&(Local_638.f_41)))
	{
		iVar0 = func_750(&iVar2, &(Local_638.f_41));
		iVar1 = 20000;
	}
	else if (func_48(&(Local_638.f_39)))
	{
		iVar0 = func_750(&iVar2, &(Local_638.f_39));
		iVar1 = func_29(0);
	}
	else if (func_48(&(Local_638.f_43)))
	{
		iVar0 = func_750(&iVar2, &(Local_638.f_43));
		iVar1 = func_30();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_750(int iParam0, var uParam1)//Position - 0x1B66E
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*iParam0, *uParam1));
}

int func_751()//Position - 0x1B684
{
	if (func_752())
	{
		return 1;
	}
	return 0;
}

bool func_752()//Position - 0x1B698
{
	return Global_1836866.f_24;
}

int func_753()//Position - 0x1B6A6
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_756())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_755())
	{
		return 1;
	}
	if (func_754(159))
	{
		if (!func_741())
		{
			return 1;
		}
	}
	if (func_754(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_430() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_430()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_754(int iParam0)//Position - 0x1B72A
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_755()//Position - 0x1B741
{
	return Global_2694576;
}

bool func_756()//Position - 0x1B74D
{
	return Global_2683883.f_693;
}

void func_757()//Position - 0x1B75C
{
	SYSTEM::WAIT(0);
}

void func_758()//Position - 0x1B769
{
	int iVar0;
	
	if (func_753())
	{
		Local_2990.f_5 = 5;
	}
	else if (BitTest(Local_638.f_2, 0))
	{
		Local_2990.f_5 = 6;
	}
	else if (func_21(0))
	{
		Local_2990.f_5 = 1;
	}
	else
	{
		Local_2990.f_5 = 2;
	}
	Local_2990.f_0 = Local_638.f_52;
	Local_2990.f_1 = Local_638.f_53;
	Local_2990.f_4 = Local_638.f_66;
	Local_2990.f_3 = Local_638.f_51;
	Local_2990.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_2990.f_9);
	if (!Global_262145.f_12147 /* Tunable: CHALLENGE_DISABLE_SHARE_CASH */)
	{
		if (Local_2990.f_6 > 0)
		{
		}
	}
	if (func_19())
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
		{
			func_794(Local_2990, Local_638.f_3, Local_2605[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (BitTest(uLocal_329, 4))
	{
		AUDIO::STOP_SOUND(iLocal_337);
		MISC::CLEAR_BIT(&uLocal_329, 4);
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_337);
	AUDIO::RELEASE_SOUND_ID(iLocal_338);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((BitTest(uLocal_624, iVar0) && iLocal_625[iVar0] != -1) && !AUDIO::HAS_SOUND_FINISHED(iLocal_625[iVar0]))
		{
			AUDIO::STOP_SOUND(iLocal_625[iVar0]);
			AUDIO::RELEASE_SOUND_ID(iLocal_625[iVar0]);
		}
		iVar0++;
	}
	func_411();
	func_478(1, 1);
	VEHICLE::SET_DISABLE_BMX_EXTRA_TRICK_FORCES(0);
	func_565(0);
	func_418(Local_638.f_3, 0);
	func_759(133, 0, Local_638.f_37 == 6);
	func_417(23, 0);
	if (func_319() >= 0f)
	{
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	}
	if (!BitTest(uLocal_329, 9))
	{
		STATS::STAT_STOP_RECORD_STAT();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_759(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B8F9
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 13);
		}
		if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836866.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836866.f_1), 21);
	}
	func_790();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_789(func_333(PLAYER::PLAYER_ID()));
		func_417(func_436(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_788(PLAYER::PLAYER_ID()) >= 12)
		{
			func_787(2549, -1);
			iVar1 = func_215(2549, -1);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836892, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836892, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836892, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836892, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836892, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836892, 5);
			}
		}
		func_786();
		func_785();
		func_784();
		if ((!func_119(PLAYER::PLAYER_ID()) && !func_313(PLAYER::PLAYER_ID())) && !func_469())
		{
			func_768();
		}
		func_767();
		if (!BitTest(Global_1948431.f_3, 0) && !BitTest(Global_1948431.f_3, 1))
		{
			func_746();
		}
		func_766();
		MISC::CLEAR_BIT(&(Global_2794162.f_1848), 2);
		func_765();
		func_179();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_175(PLAYER::PLAYER_ID(), 21)) && !func_175(PLAYER::PLAYER_ID(), 25)) && !func_123(PLAYER::PLAYER_ID(), 0))
		{
			func_425(0);
			func_423(0);
			if (!bParam1)
			{
				func_764();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_51(26, -1))
		{
			Global_2696922 = -1;
			func_49(26, -1);
		}
	}
	if (!func_760())
	{
		Global_2764267 = 1;
	}
}

int func_760()//Position - 0x1BB55
{
	if (((((((!func_685(PLAYER::PLAYER_ID()) && !func_666(PLAYER::PLAYER_ID())) && func_333(PLAYER::PLAYER_ID()) != 146) && !func_763()) && !func_762()) && !func_761(Global_4718592.f_171044)) && !func_103()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_761(int iParam0)//Position - 0x1BBD0
{
	return iParam0 == 57;
}

int func_762()//Position - 0x1BBDD
{
	if (Global_4718592.f_117591 == Global_262145.f_10235 /* Tunable: TRANSFORM_INFERNO */)
	{
		return 1;
	}
	return 0;
}

int func_763()//Position - 0x1BBFE
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_171044 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_764()//Position - 0x1BC96
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_4543629[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_4543629[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_4543629[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_765()//Position - 0x1BCE6
{
	if (BitTest(Global_2794162.f_5068, 1))
	{
		MISC::CLEAR_BIT(&(Global_2794162.f_5068), 1);
	}
	if (Global_2794162.f_5068 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2794162.f_5068 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2794162.f_5078 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2794162.f_5078);
				Global_2794162.f_5078 = -1;
			}
		}
	}
}

void func_766()//Position - 0x1BD81
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836866 = { Var0 };
}

void func_767()//Position - 0x1BDB0
{
	var uVar0;
	
	Global_1581969 = uVar0;
}

void func_768()//Position - 0x1BDBE
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_24), &Global_2639951, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_26), &Global_2639953, 19);
	func_782();
	func_771(1, 1, 0);
	func_769();
}

void func_769()//Position - 0x1BDF4
{
	func_770(0, 0);
}

void func_770(int iParam0, int iParam1)//Position - 0x1BE02
{
	Global_2635560.f_22 = iParam0;
	Global_2635560.f_23 = iParam1;
}

void func_771(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1BE1A
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_45), &Global_2639972, 323);
	}
	else
	{
		Global_2635560.f_45 = { Global_2639972 };
		Global_2635560.f_45.f_49 = { Global_2639972.f_49 };
		Global_2635560.f_45.f_52 = Global_2639972.f_52;
		Global_2635560.f_45.f_53 = Global_2639972.f_53;
	}
	if (bParam0)
	{
		func_781();
	}
	if (!bParam2)
	{
		func_773(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_772(0);
	func_182();
}

void func_772(bool bParam0)//Position - 0x1BEC0
{
	if (bParam0)
	{
		Global_2635560.f_713 = 0;
	}
	else
	{
		Global_2635560.f_713 = 1;
	}
}

void func_773(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1BEE0
{
	if (bParam0)
	{
		if (func_780())
		{
			func_779();
		}
		Global_2635560.f_714.f_568 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635560.f_714.f_554 = iParam1;
		Global_2635560.f_714.f_555 = iParam2;
		Global_2635560.f_714.f_556 = iParam10;
		func_777();
		func_464(8, 0, 0, 0, 0);
		Global_2635560.f_714.f_557 = iParam11;
		Global_2635560.f_714.f_562 = iParam3;
		Global_2635560.f_714.f_563 = iParam4;
		Global_2635560.f_714.f_560 = iParam5;
		Global_2635560.f_714.f_561 = iParam6;
		Global_2635560.f_714.f_564 = iParam7;
		Global_2635560.f_714.f_565 = iParam8;
		Global_2635560.f_714.f_566 = iParam9;
		Global_2635560.f_714.f_567 = iParam14;
		Global_2635560.f_714.f_558 = iParam12;
		Global_2635560.f_714.f_559 = iParam13;
		Global_2635560.f_1853 = 1;
	}
	else
	{
		func_774();
	}
}

void func_774()//Position - 0x1BFCB
{
	if (func_780() && !func_776())
	{
		func_779();
	}
	if (func_776())
	{
		func_775();
	}
	else
	{
		func_777();
		func_464(0, 0, 0, 0, 0);
		Global_2635560.f_1853 = 0;
		Global_2635560.f_1852 = 0;
	}
}

void func_775()//Position - 0x1C013
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_714), &(Global_2635560.f_1283), 569);
	Global_2635560.f_490 = { Global_2635560.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_714.f_568)
	{
		Global_2635560.f_1852 = 0;
	}
}

int func_776()//Position - 0x1C05B
{
	if ((Global_2635560.f_1852 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_1283.f_568) && SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_1283.f_568))
	{
		return 1;
	}
	return 0;
}

void func_777()//Position - 0x1C09A
{
	if (func_780() && !func_776())
	{
		func_779();
	}
	func_778();
	Global_2635560.f_714 = 0;
	Global_2635560.f_714.f_502 = 0;
}

void func_778()//Position - 0x1C0CE
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var6;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635560.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
	Var6 = -1;
	Var6.f_2 = -3;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_2635560.f_714.f_503[iVar0 /*3*/] = { Var6 };
		iVar0++;
	}
}

void func_779()//Position - 0x1C13F
{
	if (func_776())
	{
		if (Global_2635560.f_714.f_568 == Global_2635560.f_1283.f_568)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_714.f_568)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_1283), &(Global_2635560.f_714), 569);
		Global_2635560.f_496 = { Global_2635560.f_490 };
		Global_2635560.f_1852 = 1;
	}
}

int func_780()//Position - 0x1C1AD
{
	if ((Global_2635560.f_1853 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_714.f_568) && SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_714.f_568))
	{
		return 1;
	}
	return 0;
}

void func_781()//Position - 0x1C1EC
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_368), &Global_2640295, 121);
}

void func_782()//Position - 0x1C205
{
	func_783();
}

void func_783()//Position - 0x1C211
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2635560.f_2363[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635560.f_2362 = 0;
}

void func_784()//Position - 0x1C245
{
	Global_2794162.f_5069 = 0;
}

void func_785()//Position - 0x1C255
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1 = 0;
	}
}

void func_786()//Position - 0x1C273
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1895156[iVar0 /*609*/] = -1;
	}
}

void func_787(int iParam0, int iParam1)//Position - 0x1C291
{
	int iVar0;
	
	iVar0 = func_215(iParam0, func_210(iParam1));
	iVar0++;
	func_208(iParam0, iVar0, iParam1, 1);
}

int func_788(int iParam0)//Position - 0x1C2B8
{
	return Global_1853988[iParam0 /*867*/].f_205.f_6;
}

int func_789(int iParam0)//Position - 0x1C2CD
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
			if (func_428(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_790()//Position - 0x1C32F
{
	if (BitTest(Global_2794162.f_1835, 3) || BitTest(Global_2794162.f_1835, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2794162.f_1835, 5))
	{
		MISC::CLEAR_BIT(&(Global_2794162.f_1835), 5);
	}
	if (BitTest(Global_2794162.f_1835, 3))
	{
		MISC::CLEAR_BIT(&(Global_2794162.f_1835), 3);
	}
	if (BitTest(Global_2794162.f_1835, 4))
	{
		MISC::CLEAR_BIT(&(Global_2794162.f_1835), 4);
	}
	func_793(0);
	func_792(0);
	func_791(0);
}

void func_791(int iParam0)//Position - 0x1C3C1
{
	if (Global_2794162.f_4624 != iParam0)
	{
		Global_2794162.f_4624 = iParam0;
	}
}

void func_792(bool bParam0)//Position - 0x1C3DE
{
	if (Global_2794162.f_4623 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2794162.f_4623 = bParam0;
	}
}

void func_793(int iParam0)//Position - 0x1C403
{
	if (Global_2794162.f_4621 != iParam0)
	{
		Global_2794162.f_4621 = iParam0;
	}
}

void func_794(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x1C420
{
	char* sVar0;
	struct<13> Var1;
	struct<17> Var14;
	struct<18> Var31;
	struct<14> Var55;
	struct<13> Var69;
	struct<14> Var82;
	struct<14> Var96;
	struct<16> Var110;
	struct<13> Var126;
	struct<14> Var139;
	struct<14> Var153;
	struct<13> Var167;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_78689)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_VEHICLETARGET(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_795()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			Var14.f_14 = iParam14;
			Var14.f_15 = iParam15;
			Var14.f_16 = iParam16;
			STATS::PLAYSTATS_FM_EVENT_ATOB(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var31 = { Param0 };
			Var31.f_12 = uParam12;
			Var31.f_13 = iParam13;
			Var31.f_14 = iParam14;
			Var31.f_15 = iParam15;
			Var31.f_16 = iParam16;
			Var31.f_17 = iParam17;
			STATS::PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(&Var31);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var55 = { Param0 };
			Var55.f_12 = uParam12;
			Var55.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var55.f_13 = (Var55.f_13 / 10f);
			}
			STATS::PLAYSTATS_FM_EVENT_CHALLENGES(&Var55);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::PLAYSTATS_FM_EVENT_PENNEDIN(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var69 = { Param0 };
			Var69.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_PASSTHEPARCEL(&Var69);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var82 = { Param0 };
			Var82.f_12 = uParam12;
			Var82.f_13 = iParam13;
			STATS::PLAYSTATS_FM_EVENT_HOTPROPERTY(&Var82);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var96 = { Param0 };
			Var96.f_12 = uParam12;
			Var96.f_13 = iParam13;
			STATS::PLAYSTATS_FM_EVENT_DEADDROP(&Var96);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var110 = { Param0 };
			Var110.f_12 = uParam12;
			Var110.f_13 = iParam13;
			Var110.f_14 = iParam14;
			Var110.f_15 = iParam15;
			STATS::PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(&Var110);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var126 = { Param0 };
			Var126.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(&Var126);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var139 = { Param0 };
				Var139.f_12 = uParam12;
				Var139.f_13 = iParam13;
				STATS::PLAYSTATS_FM_EVENT_URBANWARFARE(&Var139);
			}
			else
			{
				Var153 = { Param0 };
				Var153.f_12 = uParam12;
				Var153.f_13 = iParam13;
				STATS::PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(&Var153);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var167 = { Param0 };
			Var167.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_HUNTBEAST(&Var167);
		}
	}
}

char* func_795()//Position - 0x1C6A7
{
	switch (Global_2697098)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_796(struct<21> Param0)//Position - 0x1C6C9
{
	int iVar0;
	
	func_805(func_806(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(func_804(9));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_803(9));
	func_800(0, -1, 0);
	func_798(133);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_638, 88, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_2605, 385, 0);
	if (!func_797())
	{
		func_758();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_638.f_52), &(Local_638.f_53));
	}
	Local_2990.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_625[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

int func_797()//Position - 0x1C763
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
		if (func_756())
		{
			return 0;
		}
		if (func_754(157))
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

void func_798(int iParam0)//Position - 0x1C7BC
{
	func_766();
	func_799();
	func_784();
	Global_1836866.f_4 = iParam0;
	Global_1836866.f_5 = iParam0;
	func_435(iParam0, -1);
	func_28(&(Global_1836866.f_18), 0, 0);
	Global_2794162.f_4694 = 0;
	Global_2695780[0] = func_113();
	Global_2695780[1] = func_113();
	Global_2695780[2] = func_113();
	Global_2695780[3] = func_113();
	Global_2695780[4] = func_113();
	func_179();
	if (!func_578(func_301()))
	{
		func_300();
	}
	if (func_177() && !func_176())
	{
		MISC::SET_BIT(&(Global_1836866.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836866.f_1), 17);
	}
}

void func_799()//Position - 0x1C872
{
	var uVar0;
	
	Global_1836891 = uVar0;
}

int func_800(int iParam0, int iParam1, bool bParam2)//Position - 0x1C880
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_802();
			}
			else
			{
				return 0;
			}
		}
		if (!func_801(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_802();
					}
					else
					{
						return 0;
					}
				}
				if (func_756())
				{
					if (!bParam2)
					{
						func_802();
					}
					else
					{
						return 0;
					}
				}
				if (func_754(157))
				{
					if (!bParam2)
					{
						func_802();
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
					func_802();
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
				func_802();
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
			func_802();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_801(bool bParam0)//Position - 0x1C996
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

void func_802()//Position - 0x1C9A7
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_803(int iParam0)//Position - 0x1C9B3
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

int func_804(int iParam0)//Position - 0x1CA8D
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
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
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
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

void func_805(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x1CB65
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_802();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_806(int iParam0)//Position - 0x1CB84
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
		
		case 180:
			return 32;
		
		case 181:
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
		
		case 192:
			return 32;
		
		case 193:
			return 32;
		
		case 182:
			return 32;
		
		case 183:
			return 32;
		
		case 187:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 194:
			return 32;
		
		case 195:
			return 32;
		
		case 196:
			return 32;
		
		case 197:
			return 32;
		
		case 198:
			return 2;
		
		case 203:
			return 1;
		
		case 199:
			return 2;
		
		case 200:
			return 4;
		
		case 201:
			return 2;
		
		case 202:
			return 2;
		
		case 184:
			return 1;
		
		case 204:
			return 2;
		
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			return 0;
		
		case 226:
			return 1;
		
		case 211:
			return 4;
		
		case 214:
			return 4;
		
		case 215:
			return 1;
		
		case 216:
			return 1;
		
		case 222:
			return 1;
		
		case 218:
			return 2;
		
		case 223:
			return 1;
		
		case 219:
			return 1;
		
		case 217:
			return 2;
		
		case 220:
			return 8;
		
		case 221:
			return 8;
		
		case 224:
			return 1;
		
		case 225:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 178:
			return 1;
		
		case 212:
			return 16;
		
		case 213:
			return 32;
		
		default:
	}
	switch (func_134(func_807(iParam0, 1)))
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

int func_807(int iParam0, bool bParam1)//Position - 0x1D30F
{
	switch (iParam0)
	{
		case 198:
			return 15;
		
		case 205:
			return 8;
		
		case 199:
			return 14;
		
		case 203:
			return 122;
		
		case 206:
			return 1;
		
		case 204:
			return 5;
		
		case 207:
			return 6;
		
		case 200:
			return 11;
		
		case 208:
			return 0;
		
		case 209:
			return 2;
		
		case 201:
			return 13;
		
		case 210:
			return 3;
		
		case 202:
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
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 315;
		
		case 176:
			return 316;
		
		case 177:
			return 317;
		
		case 178:
			return 318;
		
		case 179:
			return 320;
		
		default:
	}
	if (bParam1)
	{
	}
	return 322;
}

