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
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = -1;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 1000;
	var uLocal_53 = 1000;
	var uLocal_54 = 0;
	int iLocal_55[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
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
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int* iLocal_88 = NULL;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	bool bLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 1132396544;
	var uLocal_99 = 1132396544;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 0;
	var uLocal_102 = -1082130432;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 8;
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
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = 1092616192;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 5;
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
	struct<10> Local_188[15];
	int iLocal_339 = 0;
	float fLocal_340 = 0f;
	struct<2> Local_341 = { 0, 16 } ;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
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
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
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
	var uLocal_386 = 0;
	var uLocal_387 = 0;
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
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	struct<3> Local_407[8];
	struct<3> Local_432[12];
	struct<3> Local_469[6];
	struct<3> Local_488[5];
	struct<3> Local_504[20];
	struct<3> Local_565[11];
	struct<3> Local_599[3];
	struct<3> Local_609[3];
	struct<3> Local_619[4];
	struct<3> Local_632[7];
	struct<3> Local_654[3];
	struct<3> Local_664[4];
	struct<3> Local_677[2];
	struct<3> Local_684[4];
	struct<3> Local_697[7];
	struct<3> Local_719[7];
	struct<3> Local_741[8];
	struct<3> Local_766[5];
	struct<3> Local_782[5];
	struct<3> Local_798[6];
	struct<3> Local_817[6];
	struct<3> Local_836[6];
	var uLocal_855 = 0;
	int iLocal_856 = 0;
	struct<429> Local_857 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	struct<13> Local_1295 = { 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1308 = 23;
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
	var uLocal_1561 = 0;
	int iLocal_1562 = 0;
	bool bLocal_1563 = 0;
	struct<28> Local_1564 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 5;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
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
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
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
	var uLocal_1636 = 0;
	var uLocal_1637 = 1097859072;
	var uLocal_1638 = 1500;
	var uLocal_1639 = 45;
	var uLocal_1640 = 1103626240;
	var uLocal_1641 = 5;
	var uLocal_1642 = 0;
	float fLocal_1643 = 0f;
	bool bLocal_1644 = 0;
	int iLocal_1645 = 0;
	struct<2> Local_1646 = { 0, 0 } ;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	iLocal_75 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_76 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_81 = { 500f, 500f, 500f };
	bLocal_1644 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_437();
	}
	MISC::SET_MISSION_FLAG(true);
	func_421();
	func_419(&uLocal_1308);
	func_418();
	func_399();
	Local_857.f_14 = { 4186.797f, -3657.3494f, -0.5762f };
	while (true)
	{
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xDF
{
	int iVar0;
	
	if (func_398(&Local_857))
	{
		func_397(&Local_857);
		if (Local_857.f_410 > 0)
		{
			switch (iLocal_856)
			{
				case 0:
					if (func_396(&Local_857, 0))
					{
						iLocal_856 = 1;
					}
					break;
				
				case 1:
					func_394();
					break;
			}
		}
		else if (func_393(&Local_857, 31) > 5f)
		{
			func_437();
		}
	}
	else
	{
		if (Local_857.f_410 <= 9)
		{
			func_358(&Local_857, &uLocal_1635);
			func_357(&Local_857);
		}
		func_356(&Local_857);
		func_355(&Local_857, &uLocal_1642, 0);
		if (Local_857.f_410 > 2)
		{
			if (!func_354(&Local_857))
			{
				func_319();
			}
			else
			{
				func_300(&Local_857, "Taxi Not Driveable", func_318(&Local_857));
			}
		}
		if (Local_857.f_410 == 9)
		{
			func_276(&Local_857, 0, 1);
		}
		if (func_275("TC_HOWTOSTART" /* GXT: ~s~While driving a taxi, become available for jobs by pressing ~INPUT_VEH_HORN~ */))
		{
			HUD::CLEAR_HELP(true);
		}
		switch (Local_857.f_410)
		{
			case 2:
				if (func_269(&uLocal_1308, &(Local_857.f_14), 1))
				{
					func_268(&Local_857, 0);
				}
				break;
			
			case 0:
				if (func_263(&Local_857))
				{
					func_260();
					func_268(&Local_857, 1);
				}
				break;
			
			case 1:
				if (func_258())
				{
					func_257(&Local_857);
					func_268(&Local_857, 3);
				}
				break;
			
			case 3:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_857.f_3))
				{
					func_256(&Local_857, Local_857.f_14);
					Local_857.f_11 = { Local_857.f_14 };
					func_255(Local_857.f_14, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_857.f_14, 2f, 0);
					Local_857.f_3 = PED::CREATE_PED(26, iLocal_1562, Local_857.f_11, 0f, true, true);
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_857.f_3, Local_857.f_145);
					func_254(&(Local_857.f_244), 3, Local_857.f_3, "TaxiGeneric", 0, 1);
					PED::SET_PED_RESET_FLAG(Local_857.f_3, 112, true);
					if (!PED::IS_PED_INJURED(Local_857.f_3))
					{
						PED::SET_PED_CONFIG_FLAG(Local_857.f_3, 32, false);
						PED::SET_PED_CONFIG_FLAG(Local_857.f_3, 177, true);
						PED::SET_PED_CONFIG_FLAG(Local_857.f_3, 317, true);
						Local_857.f_8 = func_253(Local_857.f_3, 0, 0);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_857.f_8, "TAXI_BLIP_PASS" /* GXT: Passenger */);
						HUD::SET_GPS_FLAGS(1, 0f);
						HUD::SET_BLIP_ROUTE(Local_857.f_8, true);
						PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(Local_857.f_413));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Local_857.f_413, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, Local_857.f_413, joaat("COP"));
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_857.f_3, Local_857.f_413);
						TASK::TASK_LOOK_AT_ENTITY(Local_857.f_3, Local_857.f_4, -1, 2048, 4);
					}
					func_252(&Local_857, 1, 0);
					func_268(&Local_857, 5);
				}
				break;
			
			case 5:
				if (!func_251(Global_113810.f_19100, 2))
				{
					if (func_250(9) >= 2)
					{
						func_249("TAXI_2CANCEL", -1);
						func_247(&(Global_113810.f_19100), 2);
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/) && !Local_857.f_48 > 0)
				{
					func_300(&Local_857, "Player cancelled on dispatch", 19);
				}
				if (func_221(&Local_857, 0, 1109393408))
				{
					func_268(&Local_857, 15);
				}
				break;
			
			case 15:
				if (func_220(&Local_857))
				{
					func_215(&Local_1295);
					Local_857.f_17 = { func_214(Local_1295.f_1) };
					Local_857.f_29 = { func_213(Local_1295.f_1) };
					func_209(&Local_857, 9, 1, 0, 0);
					if (!HUD::DOES_BLIP_EXIST(Local_857.f_9))
					{
						Local_857.f_9 = func_208(Local_857.f_17, 1);
					}
					func_207(&Local_857);
					func_206();
					func_268(&Local_857, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_857.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_857.f_2, Local_857.f_4, false))
					{
						func_202(&Local_857);
						func_268(&Local_857, 5);
					}
				}
				break;
			
			case 9:
				if (func_186(&Local_857))
				{
					func_185(&Local_857, &(Local_857.f_43));
					func_180();
					func_177(&Local_857);
					func_171(&Local_857, 1097859072, 1117782016);
					if (func_167(&Local_857, func_170()))
					{
						fLocal_1643 = ((Local_1295.f_12 / func_393(&Local_857, 7)) * 3600f);
						if (fLocal_1643 > 40f)
						{
							Local_857.f_56 = Local_857.f_59;
						}
						else if (fLocal_1643 > 30f)
						{
							Local_857.f_56 = Local_857.f_58;
						}
						else
						{
							Local_857.f_56 = 0;
						}
						HUD::REMOVE_BLIP(&(Local_857.f_9));
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar0 < 10)
						{
							bLocal_1644 = true;
						}
						else
						{
							bLocal_1644 = false;
						}
						func_165(&Local_857);
						func_160(bLocal_1644);
						func_159(&Local_857);
						if (bLocal_1644)
						{
							func_268(&Local_857, 28);
						}
						else
						{
							func_268(&Local_857, 27);
						}
					}
				}
				break;
			
			case 27:
				if (func_149(&Local_857, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_857.f_3, false))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1645);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1645);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(func_213(Local_1295.f_1), 5f, true))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, func_213(Local_1295.f_1), 5f, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_213(Local_1295.f_1), 1f, -1, 0.25f, 0, 40000f);
							TASK::TASK_STAND_STILL(0, 500);
							TASK::TASK_START_SCENARIO_IN_PLACE(0, func_147(func_148(), "WORLD_HUMAN_STAND_MOBILE", "WORLD_HUMAN_AA_SMOKE"), 5000, true);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1645);
						TASK::TASK_PERFORM_SEQUENCE(Local_857.f_3, iLocal_1645);
						PED::SET_PED_KEEP_TASK(Local_857.f_3, true);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_268(&Local_857, 29);
				}
				break;
			
			case 28:
				if (func_105(&uLocal_1287, &Local_857, &(Local_857.f_3), &uLocal_1288, 1))
				{
					func_268(&Local_857, 29);
				}
				break;
			
			case 29:
				switch (iLocal_166)
				{
					case 0:
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
						func_103(&Local_1646, "TAXI_FARE_FIN", Local_857.f_50, Local_857.f_56, (Local_857.f_50 + Local_857.f_56), "TAXI_FARE_DET", 4000, 1);
						Local_1646.f_1 = 4000;
						func_102(1);
						iLocal_166 = 6;
						break;
					
					case 6:
						if (!func_98(&Local_1646, 1))
						{
							func_72(&Local_857);
							func_69(&Local_857, 0, 0, 0);
							func_102(0);
							iLocal_166 = 7;
						}
						break;
					
					case 7:
						func_2(1, &Local_857, 1);
						func_268(&Local_857, 30);
						break;
				}
				break;
			
			case 30:
				func_437();
				break;
			}
	}
}

void func_2(bool bParam0, var uParam1, bool bParam2)//Position - 0x733
{
	if (bParam0)
	{
		func_44(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_42(1, 0);
	}
	func_3(uParam1, bParam2);
}

void func_3(var uParam0, bool bParam1)//Position - 0x76F
{
	func_397(uParam0);
	if (func_41())
	{
		func_39();
	}
	func_37();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_32(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_255(uParam0->f_14, 1);
	func_30(uParam0->f_14, 1, 1114636288);
	func_29(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (func_26())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	func_15(0, 1, 1, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (func_251(Global_113810.f_19100, 4))
	{
		func_13(&(Global_113810.f_19100), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_12(), false);
	}
	if (bParam1)
	{
		func_11(uParam0);
	}
	func_10(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_8(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_4(&iLocal_88) * 1000f)), 12, false);
}

float func_4(var uParam0)//Position - 0x8C5
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_5(bool bParam0)//Position - 0x8FE
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_6(var uParam0)//Position - 0x956
{
	return BitTest(*uParam0, 2);
}

bool func_7(var uParam0)//Position - 0x963
{
	return BitTest(*uParam0, 1);
}

void func_8(int iParam0)//Position - 0x970
{
	var uVar0;
	
	if (iLocal_55[0] != 0)
	{
		MemCopy(&uVar0, {func_9(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_9(int iParam0)//Position - 0x997
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_10(var uParam0)//Position - 0xA60
{
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uParam0->f_51[0]);
}

void func_11(var uParam0)//Position - 0xA74
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
			{
				PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_413, joaat("PLAYER"));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_12()//Position - 0xB6D
{
	return joaat("taxi");
}

void func_13(var uParam0, int iParam1)//Position - 0xB7A
{
	func_14(uParam0, iParam1);
}

void func_14(var uParam0, int iParam1)//Position - 0xB8A
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_15(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xB9F
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_25(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_24())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_23(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_25(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_23(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_21(PLAYER::PLAYER_ID())) && !func_17(PLAYER::PLAYER_ID(), 0)) && !func_16()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_21(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_16()//Position - 0xCEC
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

bool func_17(int iParam0, int iParam1)//Position - 0xD06
{
	bool bVar0;
	
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0xD5F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0xDA0
{
	return Global_1574918;
}

int func_20(var uParam0)//Position - 0xDAC
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

int func_21(int iParam0)//Position - 0xDCE
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_22())
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

bool func_22()//Position - 0xE0D
{
	return BitTest(Global_2621446, 3);
}

int func_23(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xE1B
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_24()//Position - 0xE4E
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_25(int iParam0)//Position - 0xE75
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 13);
	}
}

int func_26()//Position - 0xE98
{
	if (!func_28() && !func_27())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_27()//Position - 0xEC3
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_28()//Position - 0xEDD
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_29(var uParam0, int iParam1)//Position - 0xEF7
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_30(struct<3> Param0, bool bParam3, float fParam4)//Position - 0xF14
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_31(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_31(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		PATHFIND::SET_ROADS_IN_AREA(Var0, Var3, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var3, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

Vector3 func_31(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)//Position - 0xF89
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

void func_32(int iParam0)//Position - 0xFD6
{
	if (func_36())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_35())
		{
			func_33(1, 1);
		}
		else
		{
			func_33(0, 0);
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
	if (!func_24())
	{
		Global_20500.f_1 = 3;
	}
}

void func_33(bool bParam0, bool bParam1)//Position - 0x1060
{
	if (bParam0)
	{
		if (func_34(0))
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

int func_34(int iParam0)//Position - 0x10D4
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

bool func_35()//Position - 0x112B
{
	return BitTest(Global_1963795, 5);
}

bool func_36()//Position - 0x1139
{
	return BitTest(Global_1963795, 19);
}

void func_37()//Position - 0x1148
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97746[iVar0 /*17*/] && !Global_97746[iVar0 /*17*/].f_1)
		{
			if (Global_97746[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_97746[iVar0 /*17*/].f_5 != 88 && Global_97746[iVar0 /*17*/].f_5 != 89) && Global_97746[iVar0 /*17*/].f_5 != 92)
				{
					func_38(Global_97746[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_38(int iParam0, bool bParam1)//Position - 0x11CF
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94798[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94798[iParam0 /*2*/] = 0;
	}
}

void func_39()//Position - 0x120D
{
	Global_20711 = 0;
	func_40();
}

void func_40()//Position - 0x121D
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
	}
}

int func_41()//Position - 0x123E
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_42(int iParam0, int iParam1)//Position - 0x1260
{
	switch (iParam0)
	{
		case 0:
			Global_113810.f_19100.f_22[0]++;
			func_43("Fares Completed ++ = ", Global_113810.f_19100.f_22[0]);
			break;
		
		case 1:
			Global_113810.f_19100.f_22[1]++;
			func_43("Fares Failed ++ = ", Global_113810.f_19100.f_22[1]);
			break;
		
		case 2:
			Global_113810.f_19100.f_22[2]++;
			func_43("Fares Accepted ++ ", Global_113810.f_19100.f_22[2]);
			break;
		
		case 3:
			Global_113810.f_19100.f_22[3]++;
			func_43("Fares Expired ++ ", Global_113810.f_19100.f_22[3]);
			break;
		
		case 13:
			Global_113810.f_19100.f_22[13]++;
			func_43("Passengers run ++ = ", Global_113810.f_19100.f_22[13]);
			break;
		
		case 14:
			Global_113810.f_19100.f_22[14]++;
			func_43("Passenger Forced to Pay ++ = ", Global_113810.f_19100.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113810.f_19100.f_22[4])
				{
					Global_113810.f_19100.f_22[4] = iParam1;
					func_43("This distance ", iParam1);
					func_43(" is longer than current best", Global_113810.f_19100.f_22[4]);
				}
				else
				{
					func_43("Longest Distance Not Beat ", Global_113810.f_19100.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_113810.f_19100.f_22[5] = (Global_113810.f_19100.f_22[5] + iParam1);
			func_43("Total Distance w/ Passenger = ", Global_113810.f_19100.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_113810.f_19100.f_22[6]++;
			}
			else
			{
				Global_113810.f_19100.f_22[6] = (Global_113810.f_19100.f_22[6] + iParam1);
			}
			func_43("Wanted Levels ++ = ", Global_113810.f_19100.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_113810.f_19100.f_22[7] = (Global_113810.f_19100.f_22[7] + iParam1);
			}
			else
			{
				Global_113810.f_19100.f_22[7]++;
			}
			func_43("Wanted Levels Lost = ", Global_113810.f_19100.f_22[7]);
			break;
		
		case 8:
			Global_113810.f_19100.f_22[8]++;
			func_43("Taxis wrecked ++ = ", Global_113810.f_19100.f_22[8]);
			break;
		
		case 9:
			Global_113810.f_19100.f_22[9]++;
			func_43("Horn Honked ++ = ", Global_113810.f_19100.f_22[9]);
			break;
		
		case 10:
			Global_113810.f_19100.f_22[10] = (Global_113810.f_19100.f_22[10] + iParam1);
			func_43("Total Money Earned = ", Global_113810.f_19100.f_22[10]);
			break;
		
		case 11:
			Global_113810.f_19100.f_22[11] = (Global_113810.f_19100.f_22[11] + iParam1);
			func_43("Total Tips Earned = ", Global_113810.f_19100.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_113810.f_19100.f_22[12])
			{
				Global_113810.f_19100.f_22[12] = iParam1;
				func_43("New Highest Tip = ", Global_113810.f_19100.f_22[12]);
			}
			else
			{
				func_43("Highest Tip Not Reached = ", Global_113810.f_19100.f_22[12]);
			}
			break;
	}
}

void func_43(char* sParam0, int iParam1)//Position - 0x1651
{
}

void func_44(var uParam0)//Position - 0x1659
{
	func_42(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_68(1);
		func_54(15, 1);
	}
	func_247(&(Global_113810.f_19100), 1024);
	if (!func_251(Global_113810.f_19100, 64))
	{
		func_45(func_52(func_53(uParam0)), 0, 0);
	}
}

void func_45(int iParam0, int iParam1, int iParam2)//Position - 0x16AD
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
		func_51((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113810.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113810.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113810.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113810.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113810.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113810.f_10197[iParam0 /*12*/].f_11 = iParam2;
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
		func_46();
	}
}

void func_46()//Position - 0x1793
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
	Global_113546 = 0;
	Global_113547 = 0;
	Global_113548 = 0;
	Global_113549 = 0;
	Global_113550 = 0;
	Global_113551 = 0;
	Global_113552 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113810.f_10197.f_3853;
	Global_113810.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113810.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113810.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113546++;
					fVar1 = (fVar1 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113547++;
					fVar2 = (fVar2 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113548++;
					fVar3 = (fVar3 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113549++;
					fVar4 = (fVar4 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113550++;
					fVar5 = (fVar5 + (Global_113810.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113551++;
					fVar6 = (fVar6 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113552++;
					fVar7 = (fVar7 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113529 > 0)
	{
		if (Global_113546 == Global_113529)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113530 > 0)
	{
		if (Global_113547 == Global_113530)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113531 > 0)
	{
		if (Global_113548 == Global_113531)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113532 > 0)
	{
		if (Global_113549 == Global_113532)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113533 > 0)
	{
		if (((Global_113550 == Global_113533 || (Global_113533 * 10 / Global_113550) < 41) || Global_113550 > Global_113536) || Global_113550 == Global_113536)
		{
			if (!BitTest(Global_113810.f_10197.f_3856, 14))
			{
				if (Global_113550 == Global_113533)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113533, 0);
					MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113534 > 0)
	{
		if (Global_113551 == Global_113534)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113535 > 0)
	{
		if (Global_113552 == Global_113535)
		{
			fVar7 = 5f;
		}
	}
	Global_113810.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113550 > Global_113536 || Global_113550 == Global_113536)
	{
		iVar9 = Global_113536;
	}
	else
	{
		iVar9 = Global_113550;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113546, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113529, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113547, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113530, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113548, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113531, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113549, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113532, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113536, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113552 + Global_113551), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113535 + Global_113534), true);
	Global_113553 = (Global_113546 * 100 / Global_113529);
	Global_113555 = ((Global_113548 + Global_113547) * 100 / (Global_113531 + Global_113530));
	Global_113554 = ((Global_113549 + iVar9) * 100 / (Global_113532 + Global_113536));
	Global_113556 = ((Global_113551 + Global_113552) * 100 / (Global_113534 + Global_113535));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113810.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113553, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113554, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113555, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113810.f_10197.f_3853))
	{
		func_50(13, SYSTEM::FLOOR(Global_113810.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78689)
		{
			if (func_49() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113544 = 0;
				}
				if (!Global_63485)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()//Position - 0x1C51
{
	if (func_48(0))
	{
		return 0;
	}
	if (Global_100872.f_8)
	{
		if (Global_100872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100872.f_10 > 1)
	{
		return 0;
	}
	Global_100872.f_10++;
	return 1;
}

int func_48(bool bParam0)//Position - 0x1C9C
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

int func_49()//Position - 0x1CC4
{
	return Global_32283;
}

int func_50(int iParam0, int iParam1)//Position - 0x1CCF
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

void func_51(int iParam0, bool bParam1, int iParam2)//Position - 0x1D20
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_52(int iParam0)//Position - 0x1D3E
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_53(var uParam0)//Position - 0x1DD4
{
	return uParam0->f_411;
}

int func_54(int iParam0, int iParam1)//Position - 0x1DE1
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_55(iParam0, iParam1);
}

int func_55(int iParam0, int iParam1)//Position - 0x1DFC
{
	if (func_67(14) && !func_66(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32534 != 0 && !Global_78689)
	{
		return 0;
	}
	if (func_65(&Global_4542602))
	{
		if (func_63(&Global_4542602, iParam0))
		{
			return 0;
		}
		if (func_56(&Global_4542602, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_56(var uParam0, int iParam1)//Position - 0x1E99
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_67(14) && !func_66(iParam1))
	{
		return 0;
	}
	if (func_63(uParam0, iParam1))
	{
		return 0;
	}
	if (func_62(uParam0) < 0f)
	{
		func_61(uParam0, 0);
	}
	func_59(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_57(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_57(var uParam0, int iParam1)//Position - 0x1F4A
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_67(14) && !func_66(iParam1))
	{
		return 0;
	}
	if (func_63(uParam0, iParam1))
	{
		return 0;
	}
	if (func_62(uParam0) < 0f)
	{
		func_61(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_58(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_58(var uParam0, int iParam1)//Position - 0x1FC5
{
	return (*uParam0)[iParam1] == 78;
}

void func_59(var uParam0)//Position - 0x1FD6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_60(uParam0, iVar0);
		iVar0++;
	}
	func_61(uParam0, (Global_4542601 - 0.5f));
}

void func_60(var uParam0, int iParam1)//Position - 0x200A
{
	(*uParam0)[iParam1] = 78;
}

void func_61(var uParam0, float fParam1)//Position - 0x201A
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_62(var uParam0)//Position - 0x2037
{
	return uParam0->f_80;
}

bool func_63(var uParam0, int iParam1)//Position - 0x2043
{
	return func_64(uParam0, iParam1) != -1;
}

int func_64(var uParam0, int iParam1)//Position - 0x2055
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_65(var uParam0)//Position - 0x2082
{
	return uParam0->f_79 == 1;
}

int func_66(int iParam0)//Position - 0x2090
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_67(int iParam0)//Position - 0x20E0
{
	return Global_43377 == iParam0;
}

void func_68(int iParam0)//Position - 0x20EE
{
	Global_112519.f_22 = iParam0;
}

void func_69(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x20FE
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_71(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_70(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_71(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_70(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_70(int* iParam0)//Position - 0x2170
{
	func_71(iParam0, 0f);
}

void func_71(int* iParam0, float fParam1)//Position - 0x217F
{
	iParam0->f_1 = (func_5(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_72(var uParam0)//Position - 0x21AA
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_73(func_92(), 21, iVar0, 0, 0);
		func_42(10, iVar0);
		iLocal_55[0] = iVar0;
	}
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x21E8
{
	int iVar0;
	int iVar1;
	
	if (func_91(iParam0) == 3)
	{
		return;
	}
	if (func_91(iParam0) == 4)
	{
		return;
	}
	func_74(func_91(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x22BA
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_90();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_89(99, 1);
					func_88(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_88(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_88(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_87(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_84(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_84(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
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
					switch (iParam0)
					{
						case 0:
							func_88(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_84(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_83(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_89(95, iParam3);
					break;
				
				case 1:
					func_89(97, iParam3);
					break;
				
				case 2:
					func_89(96, iParam3);
					break;
			}
			func_89(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_77(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_77(bVar1);
	}
	iVar5 = (Global_60659[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60659[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60659[iVar2] = 2147483647;
				}
				else
				{
					Global_60659[iVar2] = (Global_60659[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_88(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_88(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_88(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60659[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60659[iVar2];
			Global_60659[iVar2] = (Global_60659[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113810.f_20567.f_233[iVar2 /*69*/]++;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_76(iParam0);
	if (Global_43377 == 15)
	{
		func_75(0);
	}
	return 1;
}

void func_75(bool bParam0)//Position - 0x28B9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60667[iVar0 /*3*/][0] = Global_113810.f_20567[iVar0];
		Global_60667.f_31[iVar0 /*3*/][0] = Global_113810.f_20567.f_11[iVar0];
		Global_60667.f_62[iVar0 /*3*/][0] = Global_113810.f_20567.f_22[iVar0];
		Global_60667.f_93[iVar0 /*3*/][0] = Global_113810.f_20567.f_33[iVar0];
		Global_60667.f_124[iVar0 /*3*/][0] = Global_113810.f_20567.f_44[iVar0];
		Global_60667.f_155[iVar0 /*3*/][0] = Global_113810.f_20567.f_55[iVar0];
		Global_60667.f_186[iVar0 /*3*/][0] = Global_113810.f_20567.f_66[iVar0];
		Global_60667.f_217[iVar0 /*3*/][0] = Global_113810.f_20567.f_77[iVar0];
		Global_60667.f_248[iVar0 /*3*/][0] = Global_113810.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_60667[iVar0 /*3*/][1] = Global_113810.f_20567[iVar0];
			Global_60667.f_31[iVar0 /*3*/][1] = Global_113810.f_20567.f_11[iVar0];
			Global_60667.f_62[iVar0 /*3*/][1] = Global_113810.f_20567.f_22[iVar0];
			Global_60667.f_93[iVar0 /*3*/][1] = Global_113810.f_20567.f_33[iVar0];
			Global_60667.f_124[iVar0 /*3*/][1] = Global_113810.f_20567.f_44[iVar0];
			Global_60667.f_155[iVar0 /*3*/][1] = Global_113810.f_20567.f_55[iVar0];
			Global_60667.f_186[iVar0 /*3*/][1] = Global_113810.f_20567.f_66[iVar0];
			Global_60667.f_217[iVar0 /*3*/][1] = Global_113810.f_20567.f_77[iVar0];
			Global_60667.f_248[iVar0 /*3*/][1] = Global_113810.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_76(int iParam0)//Position - 0x2B3B
{
	int iVar0;
	
	iVar0 = Global_60659[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

void func_77(bool bParam0)//Position - 0x2B95
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_51(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_51(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_51(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_51(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_80(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_80(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_80(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_80(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_80(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_80(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113810.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113810.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_79() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_79() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_78(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_78(bool bParam0)//Position - 0x2D0F
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC" /* GXT: one free haircut. */;
		
		case 1:
			return "COUP_TATTOO" /* GXT: one free tattoo. */;
		
		case 2:
			return "COUP_WARSTOCK" /* GXT: 10% off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 3:
			return "COUP_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 4:
			return "COUP_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 5:
			return "COUP_MEDSPENS" /* GXT: 10 percent off your next medical expenses. */;
		
		case 6:
			return "COUP_SPRUNK" /* GXT: one free can of Sprunk. */;
		
		case 7:
			return "COUP_RESPRAY" /* GXT: one free respray. */;
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 13:
			return "COUP_CAS_DOCKTEASE" /* GXT: 10 percent off your next purchase at DockTease.com. */;
		
		case 14:
			return "COUP_CAS_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 15:
			return "COUP_CAS_SSASA" /* GXT: 10 percent off your next purchase at southernsanandreassuperautos.com. */;
		
		case 16:
			return "COUP_CAS_WARSTOCK" /* GXT: 10 percent off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 17:
			return "COUP_CAS_PANDM" /* GXT: 10 percent off your next purchase at pandmcycles.com. */;
			break;
		
		default:
			break;
	}
	return "";
}

int func_79()//Position - 0x2E12
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_80(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2E1F
{
	int iVar0;
	
	iVar0 = func_81(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_81(int iParam0, var uParam1)//Position - 0x2E42
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_82(uParam1));
}

int func_82(var uParam0)//Position - 0x2E57
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

void func_83(int iParam0)//Position - 0x2E8B
{
	func_89(93, iParam0);
	func_89(29, iParam0);
	func_89(30, iParam0);
}

int func_84(int iParam0)//Position - 0x2EAB
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
	
	if (iParam0 == 8)
	{
		return func_86(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_86(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_86(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_86(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_85(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_85(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_85(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_85(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_85(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_85(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113810.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_79() /*5568*/].f_681.f_10, iParam0);
}

int func_85(int iParam0, int iParam1)//Position - 0x304B
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_81(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_86(int iParam0, int iParam1)//Position - 0x307A
{
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_87(bool bParam0)//Position - 0x3096
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_50(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_54(27, 1);
	return 1;
}

void func_88(int iParam0, int iParam1)//Position - 0x314D
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_89(int iParam0, int iParam1)//Position - 0x3170
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_90()//Position - 0x31CD
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[0] == iVar0)
		{
			Global_60659[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[1] == iVar0)
		{
			Global_60659[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[2] == iVar0)
		{
			Global_60659[2] = iVar0;
		}
	}
}

int func_91(int iParam0)//Position - 0x3242
{
	return Global_2058[iParam0 /*29*/].f_17;
}

int func_92()//Position - 0x3253
{
	func_93();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_93()//Position - 0x326C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_96(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_95(PLAYER::PLAYER_PED_ID());
			if (func_94(iVar0) && (!func_67(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_94(Global_113810.f_2366.f_539.f_4321))
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

bool func_94(int iParam0)//Position - 0x3369
{
	return iParam0 < 3;
}

int func_95(int iParam0)//Position - 0x3375
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_96(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_96(int iParam0)//Position - 0x33B2
{
	if (func_94(iParam0))
	{
		return func_97(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_97(int iParam0)//Position - 0x33D7
{
	return Global_2058[iParam0 /*29*/];
}

int func_98(var uParam0, int iParam1)//Position - 0x33E6
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_70(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || uParam0->f_8)
		{
			if (!func_7(&(uParam0->f_5)))
			{
				func_70(&(uParam0->f_5));
				func_101(uParam0, 1051260355);
			}
		}
		if (func_7(&(uParam0->f_5)))
		{
			if (func_100(&(uParam0->f_5)) > 0.33f)
			{
				func_99(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_100(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_7(&(uParam0->f_5)))
		{
			func_70(&(uParam0->f_5));
			func_101(uParam0, 1051260355);
		}
		else if (func_100(&(uParam0->f_5)) > 0.33f)
		{
			func_99(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_99(var uParam0)//Position - 0x34E9
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_100(var uParam0)//Position - 0x34FF
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_101(var uParam0, float fParam1)//Position - 0x353B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_102(int iParam0)//Position - 0x3561
{
	Global_78950 = iParam0;
	Global_78951 = iParam0;
}

void func_103(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)//Position - 0x3575
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, func_104());
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam7);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_70(&(iParam0->f_2));
	iParam0->f_1 = iParam6;
	iParam0->f_9 = 1;
}

char* func_104()//Position - 0x35D4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

int func_105(var uParam0, var uParam1, int* iParam2, var uParam3, bool bParam4)//Position - 0x35EE
{
	int iVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				func_142(uParam1, 320, bParam4);
				PED::SET_PED_MONEY(*iParam2, MISC::GET_RANDOM_INT_IN_RANGE(100, 300));
				func_140(uParam1, iParam2, "TAXI_BLIP_PASS" /* GXT: Passenger */, 1);
				func_42(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam2, false))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				func_111(&uLocal_43, *iParam2, 0, 0, 1, 1, 1);
				if (!func_110(uParam1->f_2, *iParam2))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, false))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam2, uParam1->f_4, true))
						{
							*uParam0 = 3;
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam2, uParam1->f_2, true))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 20f, 20f, 10f, false, true, 0))
							{
								if (PED::IS_PED_SHOOTING(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 2f, 2f, 10f, false, true, 0))
									{
										*uParam0 = 3;
									}
									if (WEAPON::IS_PED_ARMED(uParam1->f_2, 6))
									{
										if (CAM::IS_AIM_CAM_ACTIVE())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 50f, 50f, 10f, false, true, 0))
							{
								if (PED::IS_PED_SHOOTING(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 50f, 50f, 25f, false, true, 0))
						{
							if (PED::IS_PED_SHOOTING(uParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_109(&uLocal_43, 0, 0);
					uParam1->f_109 = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				func_109(&uLocal_43, 0, 0);
				*uParam0 = 5;
			}
			break;
		
		case 3:
			func_109(&uLocal_43, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_8));
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COWER(0, 5000);
				TASK::TASK_SMART_FLEE_PED(0, uParam1->f_2, 1000f, -1, false, false);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				PED::SET_PED_KEEP_TASK(*iParam2, true);
				func_209(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				HUD::CLEAR_PRINTS();
			}
			else
			{
				*uParam0 = 4;
				HUD::CLEAR_PRINTS();
			}
			if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_8));
			}
			func_106(*iParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uParam3->f_6))
			{
				if (HUD::DOES_BLIP_EXIST(uParam3->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam3->f_5));
				}
				func_165(uParam1);
				func_42(14, 0);
				uParam1->f_56 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_8));
				}
			}
			else
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::GET_PLAYER_INDEX(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
			}
			return 1;
			break;
	}
	return 0;
}

void func_106(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x3922
{
	struct<3> Var0;
	
	uParam1->f_1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		uParam1->f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		PED::SET_PED_MONEY(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { PED::GET_DEAD_PED_PICKUP_COORDS(iParam0, 1.2f, 1.5f) };
	}
	MISC::SET_BIT(&(uParam1->f_1), 3);
	MISC::SET_BIT(&(uParam1->f_1), 4);
	Var0 = { OBJECT::GET_SAFE_PICKUP_COORDS(uParam1->f_2, 1.2f, 1.5f) };
	uParam1->f_6 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_VARIABLE"), Var0, uParam1->f_1, *uParam1, true, 0);
	if (bParam2)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam1->f_5))
		{
			uParam1->f_5 = func_107(uParam1->f_6);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_107(int iParam0)//Position - 0x39FE
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_108(bool bParam0, float fParam1, float fParam2)//Position - 0x3A36
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_109(var uParam0, int iParam1, bool bParam2)//Position - 0x3A4D
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2794162.f_4697, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			sVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_275(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_275(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_110(int iParam0, int iParam1)//Position - 0x3B27
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, 100f, 100f, 50f, false, true, 0))
		{
			if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, true), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_111(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3B70
{
	func_112(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_112(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x3B8A
{
	func_113(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_113(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x3BA7
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_109(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_114(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_114(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x3BDF
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (func_275(iVar0))
	{
		func_139();
	}
	if (func_138(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_133(uParam0, bParam7, bParam9, 0))
			{
				func_129(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_118(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_275(iVar0))
							{
								func_249(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
								{
									func_117(1);
								}
							}
						}
					}
				}
			}
			else if (func_118(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_275(iVar0))
						{
							func_249(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								func_117(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_275(sParam5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_109(uParam0, iVar0, 1);
				}
			}
			if (!func_133(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_116(uParam0))
				{
					func_115(uParam0);
				}
			}
		}
	}
	else
	{
		func_109(uParam0, iVar0, 0);
	}
}

void func_115(var uParam0)//Position - 0x3F4C
{
	if (func_138(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_116(var uParam0)//Position - 0x3FB5
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_117(bool bParam0)//Position - 0x3FE0
{
	switch (Global_43377)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113810.f_10052.f_100++;
			}
			return Global_113810.f_10052.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113810.f_10052.f_101++;
			}
			return Global_113810.f_10052.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113810.f_10052.f_102++;
			}
			return Global_113810.f_10052.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_118(char* sParam0)//Position - 0x40A2
{
	if (!func_119(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_275(sParam0)) || func_275("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43377)
	{
		case 0:
		case 3:
			if (func_117(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_117(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_117(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)//Position - 0x413B
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_34(0))
	{
		return 0;
	}
	if (func_128())
	{
		return 0;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	if (Global_75816)
	{
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60666)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_127() || func_126(Global_4718592.f_171044)) || func_125())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_124(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_123(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1962809)
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0)//Position - 0x4394
{
	if (iParam0 != func_122())
	{
		if (func_121(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575063 && iParam0 == PLAYER::PLAYER_ID()) && func_121(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_121(int iParam0, bool bParam1, bool bParam2)//Position - 0x43FA
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

int func_122()//Position - 0x445A
{
	return -1;
}

int func_123(int iParam0, int iParam1)//Position - 0x4463
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_124(int iParam0, bool bParam1)//Position - 0x44C5
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

var func_125()//Position - 0x454A
{
	return Global_2683883.f_19;
}

bool func_126(int iParam0)//Position - 0x4558
{
	return iParam0 == 51;
}

var func_127()//Position - 0x4565
{
	return Global_2683883.f_18;
}

bool func_128()//Position - 0x4573
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

void func_129(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x4588
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581988 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_109(uParam0, 0, 0);
	}
	if (func_132(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_130())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_130()//Position - 0x4698
{
	return func_131(PLAYER::PLAYER_ID());
}

int func_131(int iParam0)//Position - 0x46A8
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_132(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x46C7
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_133(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x470E
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_137(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_136(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_136(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_137(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_116(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_137(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_136(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_136(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_137(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!func_137(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_136(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_136(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_137(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_135(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_134(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_134(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_135(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_116(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_119(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_139();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_134(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4A7A
{
	if (!func_119(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_135(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4ACC
{
	if (!func_119(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_136(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4B15
{
	if (!func_119(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_137(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4B74
{
	if (!func_119(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x4BCA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_139()//Position - 0x4C25
{
	MISC::SET_BIT(&Global_8371, 4);
}

void func_140(var uParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x4C35
{
	if (bParam3)
	{
		func_397(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = func_141(*uParam1, 0, 0);
	}
	if (!MISC::IS_STRING_NULL(sParam2))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, sParam2);
	}
}

int func_141(int iParam0, bool bParam1, bool bParam2)//Position - 0x4C75
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_142(var uParam0, int iParam1, bool bParam2)//Position - 0x4D19
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((func_146(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_145(uParam0->f_29)) && !bParam2)
		{
			func_143(uParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

void func_143(var uParam0)//Position - 0x4E0D
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_132(func_144(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(uParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_29, 1f, -1, 0.25f, 0, 40000f);
			if (uParam0->f_411 == 2)
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (uParam0->f_411 == 0)
			{
				TASK::TASK_CLIMB_LADDER(0, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.6809f, 329.7988f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (uParam0->f_411 == 4)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 20000);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_29, 15f, true))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

Vector3 func_144()//Position - 0x4FF2
{
	struct<3> Var0;
	
	return Var0;
}

int func_145(struct<3> Param0)//Position - 0x4FFE
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_146(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x5028
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1, bParam4);
}

char* func_147(bool bParam0, char* sParam1, char* sParam2)//Position - 0x5052
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_148()//Position - 0x5069
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_149(var uParam0, bool bParam1)//Position - 0x5087
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_158(uParam0) && func_154(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_153(uParam0, 2097152))
				{
					func_150(uParam0);
				}
			}
			else
			{
				func_150(uParam0);
			}
		}
		else if (!func_158(uParam0))
		{
			if (bParam1)
			{
				if (func_153(uParam0, 2097152))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
					{
						return 1;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_150(var uParam0)//Position - 0x5124
{
	struct<3> Var0;
	
	if (func_145(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_151(uParam0, Var0);
}

void func_151(var uParam0, struct<3> Param1)//Position - 0x515A
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_152(uParam0->f_3, uParam0->f_4) == 0)
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 1, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 2, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_152(int iParam0, int iParam1)//Position - 0x527B
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_153(var uParam0, int iParam1)//Position - 0x52ED
{
	if (iParam1 != 1073741824)
	{
		return (func_251(uParam0->f_81, iParam1) && !func_41());
	}
	return func_41();
}

int func_154(var uParam0, bool bParam1, float fParam2)//Position - 0x531A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (func_34(1))
			{
				func_32(0);
			}
			if (func_26())
			{
				func_157();
				return 1;
			}
			else if (func_155(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, true);
		}
	}
	return 0;
}

int func_155(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x539B
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 352 /*INPUT_VEH_FLY_BOOST*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 131 /*INPUT_VEH_SUB_ASCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 132 /*INPUT_VEH_SUB_DESCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 123 /*INPUT_VEH_SUB_TURN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 126 /*INPUT_VEH_SUB_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 129 /*INPUT_VEH_SUB_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 130 /*INPUT_VEH_SUB_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 133 /*INPUT_VEH_SUB_TURN_HARD_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 134 /*INPUT_VEH_SUB_TURN_HARD_RIGHT*/, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_156(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_156(int iParam0)//Position - 0x5533
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_157()//Position - 0x555F
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
}

int func_158(var uParam0)//Position - 0x557C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_159(var uParam0)//Position - 0x55B1
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_251(uParam0->f_55, 1))
	{
		func_247(&(uParam0->f_55), 1);
	}
}

void func_160(bool bParam0)//Position - 0x5625
{
	func_163();
	HUD::CLEAR_PRINTS();
	if (bParam0)
	{
		func_209(&Local_857, 105, 1, 0, 0);
	}
	else if (Local_857.f_56 < Local_857.f_58)
	{
		if (!PED::IS_PED_INJURED(Local_857.f_3))
		{
			func_161(Local_857.f_3, "GENERIC_INSULT_MED", Local_857.f_145, 4);
		}
	}
	else if (Local_857.f_56 >= Local_857.f_59)
	{
		if (!PED::IS_PED_INJURED(Local_857.f_3))
		{
			func_161(Local_857.f_3, "TAXI_GOOD", Local_857.f_145, 4);
		}
	}
	else if (!PED::IS_PED_INJURED(Local_857.f_3))
	{
		func_161(Local_857.f_3, "GENERIC_THANKS", Local_857.f_145, 4);
	}
	func_247(&(Local_857.f_81), 2097152);
	func_69(&Local_857, 16, 4f, 0);
}

void func_161(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x56E1
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_162(iParam3), false);
}

int func_162(int iParam0)//Position - 0x56FA
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

void func_163()//Position - 0x58EF
{
	Global_20711 = 0;
	func_164();
}

void func_164()//Position - 0x58FF
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22856 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

void func_165(var uParam0)//Position - 0x5923
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_166(fVar0);
	iLocal_55[4] = SYSTEM::CEIL(fVar0);
	iLocal_55[5] = SYSTEM::CEIL(fVar0);
	func_42(4, SYSTEM::CEIL(fVar0));
	func_42(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_166(float fParam0)//Position - 0x5975
{
	return (fParam0 * 0.0006213712f);
}

int func_167(var uParam0, float fParam1)//Position - 0x5985
{
	if (func_53(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_169(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_168(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return func_154(uParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_168(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return func_154(uParam0, 1, fParam1);
	}
	return 0;
}

int func_168(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5A5C
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_169(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x5B41
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

float func_170()//Position - 0x5B7B
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(Local_857.f_4);
	if (fVar0 >= 5f)
	{
		return (fVar0 * 0.5f);
	}
	return 6f;
}

void func_171(var uParam0, float fParam1, float fParam2)//Position - 0x5BA1
{
	if (func_158(uParam0) && func_251(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && func_176(uParam0))
		{
			if (!func_175(uParam0, 2))
			{
				func_173(uParam0, 2);
			}
			else if (func_158(uParam0))
			{
				if (func_393(uParam0, 2) > fParam1 && !func_175(uParam0, 14))
				{
					if (func_28())
					{
						func_209(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_209(uParam0, 48, 1, 0, 0);
					}
					func_69(uParam0, 2, 0, 0);
					if (func_175(uParam0, 10))
					{
						func_69(uParam0, 10, 0, 0);
					}
				}
				if (!func_175(uParam0, 3))
				{
					func_69(uParam0, 3, 0, 0);
				}
				else if (func_393(uParam0, 3) >= fParam2)
				{
					func_172(uParam0, 3, 0);
					func_300(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_175(uParam0, 2))
			{
				func_172(uParam0, 2, 0);
			}
			if (func_175(uParam0, 3))
			{
				func_172(uParam0, 3, 0);
			}
		}
	}
}

void func_172(var uParam0, int iParam1, bool bParam2)//Position - 0x5CBC
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_99(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_99(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_173(var uParam0, int iParam1)//Position - 0x5D05
{
	func_174(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_174(int* iParam0)//Position - 0x5D19
{
	if (!func_7(iParam0))
	{
		func_70(iParam0);
	}
}

bool func_175(var uParam0, int iParam1)//Position - 0x5D31
{
	return func_7(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_176(var uParam0)//Position - 0x5D45
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

void func_177(var uParam0)//Position - 0x5D6F
{
	if (func_179(uParam0))
	{
		func_178(uParam0);
	}
}

void func_178(var uParam0)//Position - 0x5D86
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_172(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_393(uParam0, 20) > 3f)
				{
					func_209(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_251(uParam0->f_81, 262144) || !func_251(uParam0->f_81, 1048576))
				{
					if (func_393(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_209(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_251(uParam0->f_82, 67108864))
				{
					if (func_393(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_209(uParam0, 85, 1, 0, 0);
						func_172(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_393(uParam0, 20) > 8f)
				{
					func_209(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_251(uParam0->f_81, 262144) || func_251(uParam0->f_82, 67108864))
			{
				if (!func_175(uParam0, 22))
				{
					func_173(uParam0, 22);
				}
			}
			if (func_175(uParam0, 22) && func_393(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_251(uParam0->f_81, 1048576))
					{
						func_209(uParam0, 84, 1, 0, 0);
						func_172(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_251(uParam0->f_82, 134217728))
					{
						func_209(uParam0, 85, 1, 0, 0);
						func_172(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_179(var uParam0)//Position - 0x6001
{
	return uParam0->f_120;
}

void func_180()//Position - 0x600D
{
	if (!func_251(Local_857.f_44, 1))
	{
		switch (Local_857.f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_393(&Local_857, 9) > 1f)
					{
						func_184(&Local_857, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						func_69(&Local_857, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(Local_857.f_9))
						{
							HUD::SET_BLIP_ALPHA(Local_857.f_9, 0);
							HUD::SET_BLIP_ROUTE(Local_857.f_9, false);
						}
						Local_857.f_140 = 1;
						Local_857.f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_41() && func_393(&Local_857, 9) > 4f)
				{
					func_209(&Local_857, 52, 1, 0, 0);
					Local_857.f_412 = 2;
				}
				break;
			
			case 2:
				if (func_183("TAXI_OBJ_POL", 0, 0))
				{
					Local_857.f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					Local_857.f_412 = 3;
				}
				break;
			
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_182(&Local_857)))
				{
					func_184(&Local_857, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_42(6, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_183("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(Local_857.f_9))
					{
						HUD::SET_BLIP_ALPHA(Local_857.f_9, 255);
						HUD::SET_BLIP_ROUTE(Local_857.f_9, true);
					}
					Local_857.f_140 = 0;
					Local_857.f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_41())
				{
					func_42(7, func_182(&Local_857));
					func_184(&Local_857, 0);
					Local_857.f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_41())
				{
					func_181(&Local_1564, -1, 4);
					Local_857.f_412 = 0;
				}
				break;
			}
	}
}

void func_181(var uParam0, int iParam1, int iParam2)//Position - 0x61CD
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_182(var uParam0)//Position - 0x61E6
{
	return uParam0->f_106;
}

bool func_183(char* sParam0, int iParam1, char* sParam2)//Position - 0x61F2
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_184(var uParam0, int iParam1)//Position - 0x6210
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_185(var uParam0, float* fParam1)//Position - 0x6227
{
	STATS::STAT_GET_FLOAT(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

int func_186(var uParam0)//Position - 0x6248
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_300(uParam0, "Passenger left car.", 9);
			}
			else if (func_198(uParam0))
			{
				if (func_183("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_187(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_187(var uParam0, bool bParam1)//Position - 0x62D7
{
	func_197(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!func_175(uParam0, 14))
			{
				if (func_41())
				{
					func_196(1);
				}
				func_195(uParam0, 11, 1);
				func_190(uParam0, 1);
				func_69(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_158(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
					{
						if (func_393(uParam0, 15) > 5f)
						{
							func_69(uParam0, 15, 0f, 1);
						}
					}
					if (func_393(uParam0, 14) > 20f)
					{
						func_300(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_393(uParam0, 14) > 20f)
				{
					if (func_188(uParam0->f_4, 1) > 40f)
					{
						func_300(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_300(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_188(int iParam0, bool bParam1)//Position - 0x63E2
{
	return func_189(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_189(int iParam0, int iParam1, bool bParam2)//Position - 0x63FA
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

void func_190(var uParam0, bool bParam1)//Position - 0x6458
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				func_194(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (func_158(uParam0))
				{
					func_209(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_194(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_191(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_191(var uParam0, bool bParam1, bool bParam2)//Position - 0x6576
{
	if (bParam1)
	{
		func_397(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = func_141(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_10, true);
		func_192(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_209(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_192(var uParam0)//Position - 0x65D1
{
	func_69(uParam0, 14, 0, 0);
	func_193();
}

void func_193()//Position - 0x65E7
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off" /* GXT: Off */, iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_194(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x6610
{
	if (!func_251(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_209(uParam0, iParam3, 1, 0, 0);
		func_247(uParam1, iParam2);
	}
}

void func_195(var uParam0, int iParam1, bool bParam2)//Position - 0x663C
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_196(int iParam0)//Position - 0x6650
{
	Global_22856 = iParam0;
}

void func_197(var uParam0, int iParam1)//Position - 0x665D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_STUNGUN"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_300(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

int func_198(var uParam0)//Position - 0x66C2
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (func_175(uParam0, 14))
			{
				func_199(uParam0);
			}
			func_190(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_199(var uParam0)//Position - 0x6704
{
	func_172(uParam0, 14, 0);
	func_172(uParam0, 15, 0);
	func_201();
	if (func_200())
	{
		func_196(0);
	}
}

int func_200()//Position - 0x672E
{
	if (Global_22856 == 1)
	{
		return 1;
	}
	return 0;
}

void func_201()//Position - 0x6745
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_202(var uParam0)//Position - 0x676E
{
	func_205(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	func_203();
	func_199(uParam0);
}

void func_203()//Position - 0x67BA
{
	Global_20711 = 0;
	func_204();
}

void func_204()//Position - 0x67CA
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

void func_205(var uParam0, int iParam1)//Position - 0x6821
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
}

void func_206()//Position - 0x685B
{
	func_247(&(Local_857.f_55), 2);
	func_247(&(Local_857.f_55), 4);
	func_247(&(Local_857.f_55), 16);
	func_247(&(Local_857.f_55), 64);
	func_247(&(Local_857.f_55), 256);
	func_247(&(Local_857.f_55), 512);
	func_247(&(Local_857.f_55), 1024);
	func_247(&(Local_857.f_55), 2048);
	func_247(&(Local_857.f_55), 4096);
	func_247(&(Local_857.f_55), 1073741824);
	func_247(&(Local_857.f_100), 8);
	func_247(&(Local_857.f_100), 2048);
	func_247(&(Local_857.f_100), 256);
	func_247(&uLocal_1635, 2);
	func_173(&Local_857, 7);
}

void func_207(var uParam0)//Position - 0x690A
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	func_205(uParam0, 1000);
}

int func_208(struct<3> Param0, bool bParam3)//Position - 0x692D
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_209(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6959
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_69(uParam0, 16, 4f, 0);
		if (func_210(uParam0))
		{
			func_39();
		}
	}
	func_252(uParam0, iParam2, bParam3);
}

int func_210(var uParam0)//Position - 0x698E
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_41())
	{
		Var6 = { func_212() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_211(&Var0);
			if (MISC::ARE_STRINGS_EQUAL(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_211(char* sParam0)//Position - 0x69F4
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_212()//Position - 0x6A04
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21845 == 4)
	{
		return Global_21464;
	}
	return Var0;
}

Vector3 func_213(int iParam0)//Position - 0x6A28
{
	switch (iParam0)
	{
		case 0:
			return -59.3352f, 6524.735f, 30.4908f;
		
		case 1:
			return -132.9203f, 6376.9097f, 31.18f;
		
		case 2:
			return -300.9561f, 6256.123f, 30.4934f;
		
		case 3:
			return -697.4664f, 5802.419f, 16.3311f;
		
		case 4:
			return -570.0295f, 5333.1123f, 69.2148f;
		
		case 5:
			return -1578.7666f, 5195.2183f, 2.98937f;
		
		case 6:
			return -2192.8992f, 4293.567f, 48.177f;
		
		case 7:
			return -1308.83f, 2507.66f, 20.92f;
		
		case 8:
			return -2558.7935f, 2317.3074f, 32.2157f;
		
		case 9:
			return -2241.6902f, 385.825f, 173.6019f;
		
		case 10:
			return -3047.2861f, 615.7632f, 6.3175f;
		
		case 11:
			return -3427.0144f, 967.4479f, 7.315f;
		
		case 12:
			return -1123.3428f, 2682.3726f, 17.7356f;
		
		case 13:
			return -121.4933f, 1895.2855f, 196.3327f;
		
		case 14:
			return 593.7659f, 2744.0955f, 41.0225f;
		
		case 15:
			return 1219.9203f, 2726.2744f, 37.0041f;
		
		case 16:
			return -201.79492f, 3934.5935f, 33.56364f;
		
		case 17:
			return 1584.5454f, 6451.589f, 24.319f;
		
		case 18:
			return 1737.2251f, 6415.12f, 34.0373f;
		
		case 19:
			return 1653.4873f, 4850.271f, 41.0103f;
		
		case 20:
			return 2166.3257f, 4670.86f, 32.24834f;
		
		case 21:
			return 2304.7068f, 5761.063f, 142.263f;
		
		case 22:
			return 2242.4556f, 5153.376f, 56.3431f;
		
		case 23:
			return 3351.2966f, 5153.1255f, 18.9279f;
		
		case 24:
			return 3855.8118f, 4463.865f, 1.7019f;
		
		case 25:
			return 2392.0347f, 4296.5605f, 33.8303f;
		
		case 26:
			return -167.1902f, -342.5854f, 33.6663f;
		
		case 27:
			return -1870.6389f, -339.964f, 56.0797f;
		
		case 28:
			return -1656.6364f, -1038.1971f, 12.1523f;
		
		case 29:
			return -1157.2524f, -1424.156f, 3.7189f;
		
		case 30:
			return -280.5858f, -1915.3394f, 28.9458f;
		
		case 31:
			return 354.0562f, -2120.6094f, 14.8566f;
		
		case 32:
			return 954.7517f, -2010.2772f, 29.2413f;
		
		case 33:
			return 2578.2114f, -291.1939f, 92.0786f;
		
		case 34:
			return 1118.5309f, -630.3503f, 55.7513f;
		
		case 35:
			return -99.4315f, 359.0916f, 111.8854f;
		
		case 36:
			return 178.19048f, 702.91504f, 206.04823f;
		
		case 37:
			return -664.351f, 311.5536f, 82.0848f;
		
		case 38:
			return -331.9954f, 1389.2573f, 339.8977f;
		
		case 39:
			return 1042.35f, 700.06f, 157.83f;
		
		case 40:
			return 2328.3364f, 2542.2468f, 45.5186f;
		
		case 41:
			return 727.8768f, 4188.966f, 39.70889f;
		
		case 42:
			return 1501.7274f, 3775.8198f, 32.5121f;
		
		case 43:
			return 1894.9761f, 3712.496f, 31.7588f;
		
		case 44:
			return 1769.1031f, 3339.951f, 40.2607f;
		
		case 45:
			return 437.4482f, 3560.3691f, 32.2387f;
		
		case 46:
			return -503.3234f, 30.6442f, 43.7251f;
		
		case 47:
			return 164.496f, -975.3979f, 29.0917f;
		
		case 48:
			return -1721.1082f, -214.6897f, 56.5442f;
		
		case 49:
			return -11.903f, -152.7058f, 55.619f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_214(int iParam0)//Position - 0x6EEA
{
	switch (iParam0)
	{
		case 0:
			return -36.6529f, 6521.831f, 30.4908f;
		
		case 1:
			return -120.6537f, 6398.326f, 30.4626f;
		
		case 2:
			return -284.8858f, 6258.9927f, 30.297f;
		
		case 3:
			return -712.0081f, 5781.85f, 16.448f;
		
		case 4:
			return -551.7639f, 5404.5835f, 64.5437f;
		
		case 5:
			return -1573.9316f, 5149.5176f, 19.02919f;
		
		case 6:
			return -2212.5095f, 4275.9106f, 46.7804f;
		
		case 7:
			return -1301.8015f, 2507.9436f, 20.4695f;
		
		case 8:
			return -2537.3406f, 2321.831f, 32.0604f;
		
		case 9:
			return -2281.83f, 403.6109f, 173.4669f;
		
		case 10:
			return -3041.436f, 607.0844f, 6.4887f;
		
		case 11:
			return -3233.8718f, 967.8956f, 12.0138f;
		
		case 12:
			return -1122.2031f, 2673.2134f, 17.1472f;
		
		case 13:
			return -128.3674f, 1931.4562f, 195.5282f;
		
		case 14:
			return 592.2542f, 2737.414f, 41.0505f;
		
		case 15:
			return 1210.2343f, 2699.7292f, 37.0059f;
		
		case 16:
			return -224.54303f, 3898.7227f, 36.39012f;
		
		case 17:
			return 1581.5573f, 6439.3477f, 23.8881f;
		
		case 18:
			return 1727.5574f, 6396.9297f, 33.575f;
		
		case 19:
			return 1661.5673f, 4851.506f, 40.8905f;
		
		case 20:
			return 2105.951f, 4716.417f, 40.04f;
		
		case 21:
			return 2247.1633f, 5567.262f, 51.5209f;
		
		case 22:
			return 2241.3223f, 5180.9937f, 59.2585f;
		
		case 23:
			return 3260.3386f, 5145.2603f, 18.5874f;
		
		case 24:
			return 3774.741f, 4463.8574f, 5.4614f;
		
		case 25:
			return 2441.5066f, 4297.5483f, 35.64625f;
		
		case 26:
			return -163.6905f, -349.8653f, 32.9431f;
		
		case 27:
			return -1854.9825f, -360.2094f, 48.2535f;
		
		case 28:
			return -1601.6344f, -945.3931f, 12.1875f;
		
		case 29:
			return -1162.0847f, -1414.0573f, 3.8002f;
		
		case 30:
			return -240.4874f, -1859.4489f, 27.7915f;
		
		case 31:
			return 386.7202f, -2148.9648f, 15.2725f;
		
		case 32:
			return 942.1559f, -2055.0735f, 29.1246f;
		
		case 33:
			return 2596.906f, -296.528f, 91.8872f;
		
		case 34:
			return 1172.4498f, -641.2902f, 61.4465f;
		
		case 35:
			return -129.4093f, 379.0035f, 111.7795f;
		
		case 36:
			return 117.2106f, 719.4644f, 208.1559f;
		
		case 37:
			return -638.5713f, 280.6203f, 80.2992f;
		
		case 38:
			return -388.1616f, 1226.3599f, 324.6421f;
		
		case 39:
			return 1038.2102f, 700.512f, 157.9407f;
		
		case 40:
			return 2388.1655f, 2529.152f, 45.6804f;
		
		case 41:
			return 815.8218f, 4235.264f, 51.85716f;
		
		case 42:
			return 1538.1499f, 3771.1042f, 33.0502f;
		
		case 43:
			return 1892.2001f, 3704.3599f, 31.8767f;
		
		case 44:
			return 1780.2803f, 3336.7979f, 40.0848f;
		
		case 45:
			return 466.1649f, 3576.0266f, 32.2322f;
		
		case 46:
			return -489.8451f, 21.3197f, 43.9248f;
		
		case 47:
			return 167.8984f, -1012.4797f, 28.375f;
		
		case 48:
			return -1662.5278f, -226.7487f, 53.9386f;
		
		case 49:
			return -11.2343f, -140.1264f, 55.7106f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_215(var uParam0)//Position - 0x73AC
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	func_219(uParam0);
	switch (uParam0->f_10)
	{
		case 0:
			fVar5 = 1f;
			break;
		
		case 1:
			fVar5 = 1.5f;
			break;
		
		case 2:
			fVar5 = 2.25f;
			break;
	}
	iVar3 = 0;
	while (iVar3 < 50)
	{
		if (iVar4 < 6)
		{
			Var0 = { func_214(iVar3) };
			fVar6 = func_217(Var0, 1);
			if (((((fVar6 < fVar5 && fVar6 >= func_216(uParam0->f_10)) && iVar3 != Global_112889[0]) && iVar3 != Global_112889[1]) && iVar3 != Global_112889[2]) && iVar3 != Global_112889[3])
			{
				uParam0->f_2[iVar4] = iVar3;
				iVar4++;
			}
		}
		iVar3++;
	}
	if (iVar4 > 0)
	{
		iVar3 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % iVar4);
		uParam0->f_1 = uParam0->f_2[iVar3];
		uParam0->f_12 = func_217(func_214(uParam0->f_1), 1);
	}
	else
	{
		uParam0->f_1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 50);
		uParam0->f_12 = func_217(func_214(uParam0->f_1), 1);
	}
	Global_112889[3] = Global_112889[2];
	Global_112889[2] = Global_112889[1];
	Global_112889[1] = Global_112889[0];
	Global_112889[0] = uParam0->f_1;
}

float func_216(int iParam0)//Position - 0x7506
{
	switch (iParam0)
	{
		case 0:
			return 0.25f;
		
		case 1:
			return 1f;
		
		case 2:
			return 1.5f;
		
		default:
	}
	return 1000f;
}

float func_217(struct<3> Param0, bool bParam3)//Position - 0x7540
{
	int iVar0;
	
	if (bParam3)
	{
		if (PATHFIND::GET_GPS_BLIP_ROUTE_FOUND())
		{
			iVar0 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
		}
		else
		{
			iVar0 = SYSTEM::FLOOR(SYSTEM::VDIST(func_218(PLAYER::PLAYER_ID()), Param0));
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::VDIST(func_218(PLAYER::PLAYER_ID()), Param0));
	}
	return func_166(SYSTEM::TO_FLOAT(iVar0));
}

Vector3 func_218(int iParam0)//Position - 0x7596
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_219(var uParam0)//Position - 0x75A9
{
	int iVar0;
	
	iVar0 = Global_112894 + 1;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	uParam0->f_10 = iVar0;
	Global_112894 = iVar0;
}

int func_220(var uParam0)//Position - 0x75CE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_87) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_221(var uParam0, bool bParam1, float fParam2)//Position - 0x7621
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_187(uParam0, 1);
			if (func_26())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_85 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_245(uParam0);
			if (uParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_175(uParam0, 14))
			{
				func_199(uParam0);
				func_190(uParam0, 0);
			}
			if (func_175(uParam0, 9))
			{
				func_172(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_244(uParam0, uParam0->f_3) > 300f)
				{
					func_300(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || ((func_189(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && func_169(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_169(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_243(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_242(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_92)
							{
								uParam0->f_7 = func_241(uParam0->f_4, uParam0->f_3);
								iVar0 = func_240(uParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 0, false, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(uParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_176(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7) && func_244(uParam0, uParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (uParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_92)
						{
							if (func_189(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_239(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_300(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_238(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_300(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_236(uParam0);
						if (func_244(uParam0, uParam0->f_3) < fVar4 || func_26())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
							{
								if (func_223(uParam0))
								{
									func_222(uParam0);
									iLocal_87 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, true);
									func_172(uParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(uParam0->f_428, &(uParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, false);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_222(var uParam0)//Position - 0x7B33
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

int func_223(var uParam0)//Position - 0x7B57
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_235("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		func_234();
	}
	if (bLocal_92)
	{
		iLocal_84 = 10;
	}
	if ((iLocal_84 < 7 && iLocal_84 > 0) && !bLocal_92)
	{
		if (func_232(iLocal_86))
		{
			iLocal_84 = 7;
		}
	}
	switch (iLocal_84)
	{
		case 0:
			if (func_154(uParam0, 0, 1084227584) && func_168(1, 1, 1))
			{
				if (func_239(uParam0, 1))
				{
					iLocal_86 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_84 = 1;
				}
				else
				{
					func_300(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_241(uParam0->f_4, uParam0->f_3);
				iVar9 = func_240(uParam0, &iVar10);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					if (iVar10 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, iVar11);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 0, false, false))
					{
						uParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, 4096);
						}
					}
				}
				iLocal_84 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var6 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var6 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var6 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = func_231(&(uParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0), 1);
			if (iVar12 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_230(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_163();
				func_252(uParam0, 0, 0);
				Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var6) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, Var13, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, func_228(uParam0));
				func_227(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0));
				CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, Var3, true);
				CAM::SET_CAM_ACTIVE(*uParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_3, false, false);
				TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_84 = 5;
			}
			break;
		
		case 5:
			func_235("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_84 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, func_226(uParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*uParam0, false);
				CAM::DESTROY_CAM(uParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				func_163();
				func_252(uParam0, 0, 0);
				iLocal_84 = 8;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_224(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*uParam0, false);
			CAM::DESTROY_CAM(uParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_224(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, true))
				{
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_224(bool bParam0, bool bParam1, int iParam2)//Position - 0x8065
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	func_15(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_225(23, 0);
}

void func_225(int iParam0, bool bParam1)//Position - 0x80A3
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_32532, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_32532, iParam0);
	}
}

int func_226(int iParam0)//Position - 0x80C5
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_227(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x80FD
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Param1, Param4, fParam7, false, 2);
	}
}

float func_228(var uParam0)//Position - 0x8128
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_144() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_229(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), Var1);
	return fVar0;
}

float func_229(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)//Position - 0x8191
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_230(int iParam0, bool bParam1, int iParam2)//Position - 0x81AB
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(bParam1);
	func_32(0);
	func_15(1, 1, iParam2, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_225(23, 1);
}

int func_231(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)//Position - 0x8204
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_232(int iParam0)//Position - 0x827E
{
	if (func_233() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_32(0);
		func_203();
		return 1;
	}
	return 0;
}

int func_233()//Position - 0x82C1
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
	{
		return 1;
	}
	return 0;
}

void func_234()//Position - 0x82F3
{
	if (func_28())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_27())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_34(1))
	{
		func_32(0);
	}
}

void func_235(char* sParam0, var uParam1, int iParam2)//Position - 0x8326
{
	if (MISC::GET_GAME_TIMER() < (*uParam1 + iParam2))
	{
		return;
	}
	*uParam1 = MISC::GET_GAME_TIMER();
}

void func_236(var uParam0)//Position - 0x8345
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (func_188(uParam0->f_3, 1) > 30f || func_237(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					TASK::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
					func_300(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_237(var uParam0)//Position - 0x8416
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_393(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)//Position - 0x8450
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_239(var uParam0, bool bParam1)//Position - 0x850C
{
	int iVar0[3];
	int iVar4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar4]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar4], false))
				{
					if (iVar4 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar4++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_240(var uParam0, var uParam1)//Position - 0x85C6
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_241(int iParam0, int iParam1)//Position - 0x863B
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("vacca"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 2, false, false))
		{
			iVar3 = 2;
		}
		else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 1, false, false))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 1, false, false))
	{
		iVar3 = 1;
	}
	else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 2, false, false))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_242(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x86F3
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && func_188(uParam0->f_3, 1) < fParam2)
		{
			if (!func_175(uParam0, 5))
			{
				func_69(uParam0, 5, 0, 0);
			}
		}
		else if (func_175(uParam0, 5))
		{
			func_172(uParam0, 5, 0);
		}
		if (((func_393(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || func_188(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_243(var uParam0, float fParam1)//Position - 0x8791
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	
	iVar18 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar18) };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var6) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_85)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			iLocal_85 = 1;
			break;
		
		case 1:
			if ((func_189(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_85 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uParam0->f_243, true);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			if (uParam0->f_411 != 9)
			{
				if (!func_251(uParam0->f_44, 128))
				{
					func_209(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_161(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			iLocal_85 = 3;
			break;
		
		case 3:
			iLocal_85 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

float func_244(var uParam0, int iParam1)//Position - 0x8A6F
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (func_176(uParam0))
		{
			return func_189(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_245(var uParam0)//Position - 0x8A9A
{
	func_197(uParam0, uParam0->f_3);
	if (func_176(uParam0))
	{
		if (func_175(uParam0, 14))
		{
			func_199(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!func_175(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		}
		func_69(uParam0, 9, 0, 0);
		func_246("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_246(char* sParam0, int iParam1, int iParam2)//Position - 0x8B18
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_247(var uParam0, int iParam1)//Position - 0x8B31
{
	func_248(uParam0, iParam1);
}

void func_248(var uParam0, int iParam1)//Position - 0x8B41
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_249(char* sParam0, int iParam1)//Position - 0x8B52
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_250(int iParam0)//Position - 0x8B69
{
	return Global_113810.f_19100.f_39[iParam0];
}

bool func_251(var uParam0, int iParam1)//Position - 0x8B7E
{
	return (uParam0 && iParam1) != 0;
}

void func_252(var uParam0, int iParam1, bool bParam2)//Position - 0x8B8D
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_39();
		func_69(uParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_253(int iParam0, bool bParam1, bool bParam2)//Position - 0x8BB2
{
	return func_141(iParam0, !bParam1, bParam2);
}

void func_254(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x8BC5
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

void func_255(struct<3> Param0, bool bParam3)//Position - 0x8C60
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_132(Param0, func_144(), 0))
	{
		Var0 = { func_31(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_31(Param0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var3, bParam3, true);
	}
}

void func_256(var uParam0, struct<3> Param1)//Position - 0x8CC0
{
	uParam0->f_51[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param1, 20f, 5f, false);
}

void func_257(var uParam0)//Position - 0x8CDE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_14(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

int func_258()//Position - 0x8D03
{
	if (func_198(&Local_857))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_1562))
		{
			return 0;
		}
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_1646.f_0))
		{
			return 0;
		}
		if (!func_259(&uLocal_855, 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_259(var uParam0, bool bParam1)//Position - 0x8D44
{
	if (!STREAMING::HAS_MODEL_LOADED(func_12()))
	{
		func_235("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", uParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_235("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", uParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_235("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_235("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", uParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_235("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_235("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", uParam0, 1000);
		return 0;
	}
	return 1;
}

void func_260()//Position - 0x8DFC
{
	STREAMING::REQUEST_MODEL(iLocal_1562);
	Local_1646.f_0 = func_262();
	func_261(1);
}

void func_261(bool bParam0)//Position - 0x8E17
{
	STREAMING::REQUEST_MODEL(func_12());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI" /* GXT: Taxi */, 2);
	if (!func_251(Global_113810.f_19100, 128))
	{
		func_247(&(Global_113810.f_19100), 128);
	}
}

int func_262()//Position - 0x8E72
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

int func_263(var uParam0)//Position - 0x8E82
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, false);
		if (PED::IS_PED_IN_ANY_TAXI(uParam0->f_2) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == func_12())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
				{
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
					func_267(uParam0);
					func_42(2, 0);
					bLocal_92 = true;
					func_264(12);
					func_174(&iLocal_88);
					return 1;
				}
				else
				{
					func_300(uParam0, "No Taxi", 21);
					func_249("TAXI_DBG_NTAXI", -1);
				}
			}
			else
			{
				func_300(uParam0, "Taxi is not drivable", 0);
				func_249("TAXI_DBG_NTAXI", -1);
			}
		}
		else if (func_393(uParam0, 3) > 2f)
		{
			func_300(uParam0, "No Taxi", 21);
			func_249("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_264(int iParam0)//Position - 0x8F59
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_266())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_265())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

bool func_265()//Position - 0x8FB2
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_266()//Position - 0x8FC8
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_267(var uParam0)//Position - 0x8FDE
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (func_148())
		{
		}
	}
}

void func_268(var uParam0, int iParam1)//Position - 0x8FFA
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_269(var uParam0, var uParam1, int iParam2)//Position - 0x9219
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	
	iVar1 = func_273(uParam0, iParam2);
	iVar0 = iVar1;
	func_270(uParam0, iVar0, uParam1, &bVar2, &uVar7);
	if (!bVar2)
	{
		if ((((iVar1 != 0 && iVar1 != 3) && iVar1 != 8) && iVar1 != 13) && iVar1 != 18)
		{
			iVar0 = (iVar1 - 1);
			bVar3 = true;
		}
		if (bVar3)
		{
			func_270(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (!bVar2)
	{
		if ((((iVar1 != 2 && iVar1 != 7) && iVar1 != 12) && iVar1 != 17) && iVar1 != 21)
		{
			iVar0 = iVar1 + 1;
			bVar4 = true;
		}
		if (bVar4)
		{
			func_270(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (!bVar2)
	{
		if ((((iVar1 != 18 && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 13)
		{
			if ((iVar1 >= 14 && iVar1 <= 16) || (iVar1 >= 0 && iVar1 <= 2))
			{
				iVar0 = iVar1 + 4;
			}
			else
			{
				iVar0 = iVar1 + 5;
			}
			bVar5 = true;
		}
		if (bVar5)
		{
			func_270(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (!bVar2)
	{
		if ((((iVar1 != 3 && iVar1 != 0) && iVar1 != 1) && iVar1 != 2) && iVar1 != 7)
		{
			if ((iVar1 >= 18 && iVar1 <= 21) || (iVar1 >= 4 && iVar1 <= 6))
			{
				iVar0 = (iVar1 - 4);
			}
			else
			{
				iVar0 = (iVar1 - 5);
			}
			bVar6 = true;
		}
		if (bVar6)
		{
			func_270(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (bVar2)
	{
	}
	Global_112884[3] = Global_112884[2];
	Global_112884[2] = Global_112884[1];
	Global_112884[1] = Global_112884[0];
	Global_112884[0] = iVar0;
	Global_112879[3] = Global_112879[2];
	Global_112879[2] = Global_112879[1];
	Global_112879[1] = Global_112879[0];
	Global_112879[0] = uVar7;
	if (!Global_112864)
	{
		Global_112864 = 1;
	}
	return 1;
}

void func_270(var uParam0, int iParam1, var uParam2, bool bParam3, var uParam4)//Position - 0x9463
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < (uParam0[iParam1 /*11*/])->f_1)
	{
		Var1 = { func_272(uParam0, iParam1, iVar0) };
		if (func_217(Var1, 1) < func_217(*uParam2, 1))
		{
			if (Global_112864 && ((((iParam1 == Global_112884[0] && iVar0 == Global_112879[0]) || (iParam1 == Global_112884[1] && iVar0 == Global_112879[1])) || (iParam1 == Global_112884[2] && iVar0 == Global_112879[2])) || (iParam1 == Global_112884[3] && iVar0 == Global_112879[3])))
			{
			}
			else if (func_271(Var1, 1) > 40f)
			{
				*uParam2 = { Var1 };
				*uParam4 = iVar0;
				if (func_217(*uParam2, 1) <= 0.6f)
				{
					*uParam4 = iVar0;
					*bParam3 = 1;
				}
			}
		}
		iVar0++;
	}
}

float func_271(struct<3> Param0, bool bParam3)//Position - 0x956D
{
	return func_146(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, bParam3);
}

Vector3 func_272(var uParam0, int iParam1, int iParam2)//Position - 0x9587
{
	struct<3> Var0;
	
	Var0 = { func_144() };
	if (iParam2 == -1)
	{
		iParam2 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % (uParam0[iParam1 /*11*/])->f_1);
	}
	switch (iParam1)
	{
		case 0:
			Var0 = { Local_407[iParam2 /*3*/] };
			break;
		
		case 1:
			Var0 = { Local_432[iParam2 /*3*/] };
			break;
		
		case 2:
			Var0 = { Local_469[iParam2 /*3*/] };
			break;
		
		case 3:
			Var0 = { Local_488[iParam2 /*3*/] };
			break;
		
		case 4:
			Var0 = { Local_504[iParam2 /*3*/] };
			break;
		
		case 5:
			Var0 = { Local_565[iParam2 /*3*/] };
			break;
		
		case 6:
			Var0 = { Local_599[iParam2 /*3*/] };
			break;
		
		case 7:
			Var0 = { Local_609[iParam2 /*3*/] };
			break;
		
		case 8:
			Var0 = { Local_619[iParam2 /*3*/] };
			break;
		
		case 9:
			Var0 = { Local_632[iParam2 /*3*/] };
			break;
		
		case 10:
			Var0 = { Local_654[iParam2 /*3*/] };
			break;
		
		case 11:
			Var0 = { Local_664[iParam2 /*3*/] };
			break;
		
		case 12:
			Var0 = { Local_677[iParam2 /*3*/] };
			break;
		
		case 13:
			Var0 = { Local_684[iParam2 /*3*/] };
			break;
		
		case 14:
			Var0 = { Local_697[iParam2 /*3*/] };
			break;
		
		case 15:
			Var0 = { Local_719[iParam2 /*3*/] };
			break;
		
		case 16:
			Var0 = { Local_741[iParam2 /*3*/] };
			break;
		
		case 17:
			Var0 = { Local_766[iParam2 /*3*/] };
			break;
		
		case 18:
			Var0 = { Local_782[iParam2 /*3*/] };
			break;
		
		case 19:
			Var0 = { Local_798[iParam2 /*3*/] };
			break;
		
		case 20:
			Var0 = { Local_817[iParam2 /*3*/] };
			break;
		
		case 21:
			Var0 = { Local_836[iParam2 /*3*/] };
			break;
	}
	return Var0;
}

int func_273(var uParam0, int iParam1)//Position - 0x97A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_274(uParam0);
	if (iParam1 > 1)
	{
		iVar1 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
		if (iVar1 == 0)
		{
			iVar2 = SYSTEM::FLOOR((uParam0[iVar0 /*11*/])->f_8);
		}
		else if (iVar1 == 1)
		{
			iVar2 = SYSTEM::FLOOR((uParam0[iVar0 /*11*/])->f_8.f_1);
		}
		else
		{
			iVar2 = SYSTEM::FLOOR((uParam0[iVar0 /*11*/])->f_8.f_2);
		}
		return iVar2;
	}
	return iVar0;
}

int func_274(var uParam0)//Position - 0x980D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), (uParam0[iVar0 /*11*/])->f_2, (uParam0[iVar0 /*11*/])->f_5, false, false, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 22;
}

bool func_275(char* sParam0)//Position - 0x9851
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_276(var uParam0, int iParam1, bool bParam2)//Position - 0x9864
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_393(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_209(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_209(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_69(uParam0, 10, 0f, 1);
				}
			}
			else if (func_393(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_209(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_209(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_69(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_393(uParam0, 10) > 30f)
		{
			if (!func_41())
			{
				if (uParam0->f_112)
				{
					func_209(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_209(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_69(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_251(uParam0->f_100, 64))
	{
		if (!func_7(&(Local_188[5 /*10*/].f_6)))
		{
			func_174(&(Local_188[5 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[5 /*10*/].f_6)) > 6f)
		{
			if (func_299(uParam0))
			{
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[5 /*10*/].f_9, 1, 0, 0);
				}
				func_298(uParam0, 1);
				func_296(5, uParam0);
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 1))
	{
		if (!func_7(&(Local_188[0 /*10*/].f_6)))
		{
			func_174(&(Local_188[0 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[0 /*10*/].f_6)) > 5f)
		{
			if (func_294(uParam0))
			{
				func_298(uParam0, 1);
				func_296(0, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[0 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 2))
	{
		if (!func_7(&(Local_188[1 /*10*/].f_6)))
		{
			func_174(&(Local_188[1 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[1 /*10*/].f_6)) > 5f)
		{
			if (func_293(uParam0))
			{
				func_298(uParam0, 1);
				func_296(1, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[1 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 2048))
	{
		if (!func_7(&(Local_188[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				func_174(&(Local_188[8 /*10*/].f_6));
			}
		}
		else if (func_100(&(Local_188[8 /*10*/].f_6)) > 7f || Local_188[8 /*10*/].f_1 == 0)
		{
			if (func_292(uParam0))
			{
				func_298(uParam0, 1);
				func_296(8, uParam0);
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 128))
	{
		if (!func_7(&(Local_188[6 /*10*/].f_6)))
		{
			func_174(&(Local_188[6 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[6 /*10*/].f_6)) > 5f)
		{
			if (func_291(uParam0))
			{
				func_298(uParam0, 1);
				func_296(6, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[6 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 32))
	{
		if (!func_7(&(Local_188[4 /*10*/].f_6)))
		{
			func_174(&(Local_188[4 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[4 /*10*/].f_6)) > 4f)
		{
			if (func_290(uParam0))
			{
				func_298(uParam0, 1);
				func_296(4, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[4 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 256))
	{
		if (!func_7(&(Local_188[7 /*10*/].f_6)))
		{
			func_174(&(Local_188[7 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[7 /*10*/].f_6)) > 5f || Local_188[7 /*10*/].f_1 == 0)
		{
			if (func_289(uParam0))
			{
				func_296(7, uParam0);
				func_298(uParam0, 1);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[7 /*10*/].f_9, 1, 0, 1);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 8))
	{
		if (!func_7(&(Local_188[9 /*10*/].f_6)))
		{
			func_174(&(Local_188[9 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_100(&(Local_188[9 /*10*/].f_6)) > 7f || Local_188[9 /*10*/].f_1 == 0)
		{
			if (func_288(uParam0))
			{
				func_298(uParam0, 1);
				func_296(9, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[9 /*10*/].f_9, 1, 0, 1);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 16384))
	{
		if (!func_7(&(Local_188[13 /*10*/].f_6)))
		{
			func_174(&(Local_188[13 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[13 /*10*/].f_6)) > 10f)
		{
			if (func_282(uParam0))
			{
				func_298(uParam0, 1);
				func_296(13, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[13 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 32768))
	{
		if (!func_7(&(Local_188[14 /*10*/].f_6)))
		{
			func_174(&(Local_188[14 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[14 /*10*/].f_6)) > 7f)
		{
			if (func_281(uParam0))
			{
				func_298(uParam0, 1);
				func_296(14, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[14 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 4096))
	{
		if (!func_7(&(Local_188[11 /*10*/].f_6)))
		{
			func_174(&(Local_188[11 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[11 /*10*/].f_6)) > 8f)
		{
			if (func_280(uParam0))
			{
				func_298(uParam0, 1);
				func_296(11, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[11 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 8192))
	{
		if (!func_7(&(Local_188[12 /*10*/].f_6)))
		{
			func_174(&(Local_188[12 /*10*/].f_6));
		}
		else if (func_100(&(Local_188[12 /*10*/].f_6)) > 5f)
		{
			if (func_279(uParam0))
			{
				func_298(uParam0, 1);
				func_296(12, uParam0);
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[12 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_251(uParam0->f_100, 4))
	{
		if (!func_7(&(Local_188[2 /*10*/].f_6)))
		{
			func_278(&(Local_188[2 /*10*/].f_6), 0f);
		}
		else if (func_100(&(Local_188[2 /*10*/].f_6)) > 5f)
		{
			if (func_277(uParam0))
			{
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, Local_188[2 /*10*/].f_9, 1, 0, 0);
				}
				func_298(uParam0, 1);
				func_296(2, uParam0);
				func_295(uParam0);
			}
		}
	}
}

int func_277(var uParam0)//Position - 0xA05E
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !func_7(&(Local_188[0 /*10*/].f_3))) && !func_7(&(Local_188[1 /*10*/].f_3)))
		{
			if (!func_7(&(Local_188[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_174(&(Local_188[2 /*10*/].f_3));
				}
			}
			else if (func_100(&(Local_188[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_99(&(Local_188[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_99(&(Local_188[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_278(int* iParam0, float fParam1)//Position - 0xA141
{
	if (!func_7(iParam0))
	{
		func_71(iParam0, fParam1);
	}
}

int func_279(var uParam0)//Position - 0xA15B
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !func_7(&(Local_188[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_188[12 /*10*/].f_3)))
			{
				func_174(&(Local_188[12 /*10*/].f_3));
			}
			else if (func_100(&(Local_188[12 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_188[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_188[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_280(var uParam0)//Position - 0xA1EA
{
	struct<3> Var0;
	
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_7(&(Local_188[0 /*10*/].f_3))) && !func_7(&(Local_188[1 /*10*/].f_3))) && !func_7(&(Local_188[5 /*10*/].f_3))) && !func_7(&(Local_188[9 /*10*/].f_3))) && !func_7(&(Local_188[7 /*10*/].f_3))) && !func_7(&(Local_188[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 2.5f && !func_7(&(Local_188[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_188[11 /*10*/].f_3)))
			{
				func_174(&(Local_188[11 /*10*/].f_3));
				fLocal_340 = Var0.f_0;
			}
			else if (func_100(&(Local_188[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_340) - MISC::ABSF(Var0.f_0)) < 0f)
			{
				func_99(&(Local_188[11 /*10*/].f_3));
				return 1;
			}
			else if (func_100(&(Local_188[11 /*10*/].f_3)) >= 1.5f)
			{
				func_99(&(Local_188[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_281(var uParam0)//Position - 0xA31A
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_7(&(Local_188[0 /*10*/].f_3))) && !func_7(&(Local_188[8 /*10*/].f_3))) && !func_7(&(Local_188[5 /*10*/].f_3))) && !func_7(&(Local_188[9 /*10*/].f_3))) && !func_7(&(Local_188[7 /*10*/].f_3)))
	{
		if (!func_7(&(Local_188[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_189(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, false)))
				{
					func_174(&(Local_188[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_100(&(Local_188[14 /*10*/].f_3)) < 1.5f && func_189(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_99(&(Local_188[14 /*10*/].f_3));
			return 1;
		}
		else if (func_100(&(Local_188[14 /*10*/].f_3)) >= 1.5f)
		{
			func_99(&(Local_188[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_99(&(Local_188[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_282(var uParam0)//Position - 0xA49F
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !func_7(&(Local_188[9 /*10*/].f_3))) && !func_7(&(Local_188[7 /*10*/].f_3))) && !func_7(&(Local_188[4 /*10*/].f_3)))
	{
		if (!func_283(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_7(&(Local_188[13 /*10*/].f_3)))
			{
				func_174(&(Local_188[13 /*10*/].f_3));
			}
			else if (func_100(&(Local_188[13 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_188[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_188[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_283(int iParam0)//Position - 0xA556
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &Var0, 1, 3f, 0f);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &Var3, 1, 3f, 0f);
	PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, -1, &Var6);
	fVar27 = SYSTEM::VMAG(Var6 - Var0);
	Var9 = { func_287((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_286(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_284(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var15, Var18, Var21);
}

int func_284(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)//Position - 0xA63F
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	Param6.f_2 = 0f;
	Param9.f_2 = 0f;
	Var0 = { func_287(Param6 - Param3) };
	Var3 = { func_287(Param9 - Param3) };
	fVar6 = func_285(Param0, Var0);
	fVar7 = func_285(Param3, Var0);
	fVar8 = func_285(Param6, Var0);
	fVar9 = func_285(Param0, Var3);
	fVar10 = func_285(Param3, Var3);
	fVar11 = func_285(Param9, Var3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_285(struct<3> Param0, struct<3> Param3)//Position - 0xA728
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_286(struct<3> Param0, int iParam3)//Position - 0xA749
{
	struct<3> Var0;
	
	switch (iParam3)
	{
		case 0:
			Var0.f_0 = -Param0.f_1;
			Var0.f_1 = Param0.f_0;
			break;
		
		case 1:
			Var0.f_0 = -Param0.f_0;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.f_0 = Param0.f_1;
			Var0.f_1 = -Param0.f_0;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_287(struct<3> Param0)//Position - 0xA7A7
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

int func_288(var uParam0)//Position - 0xA7E6
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_289(var uParam0)//Position - 0xA81B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!iLocal_339)
				{
					if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						iLocal_339 = 1;
					}
				}
			}
			else if (iLocal_339)
			{
				if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					iLocal_339 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_290(var uParam0)//Position - 0xA8B1
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_188[4 /*10*/].f_3)))
			{
				func_174(&(Local_188[4 /*10*/].f_3));
			}
			else if (func_100(&(Local_188[4 /*10*/].f_3)) > 2f)
			{
				func_99(&(Local_188[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_188[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_291(var uParam0)//Position - 0xA923
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_188[6 /*10*/].f_3)))
			{
				func_174(&(Local_188[6 /*10*/].f_3));
			}
			else if (func_100(&(Local_188[6 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_188[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_188[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_292(var uParam0)//Position - 0xA999
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_209(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_209(uParam0, 72, 1, 0, 1);
				}
				func_99(&(Local_188[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_293(var uParam0)//Position - 0xAA1A
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 3f && !func_7(&(Local_188[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_188[1 /*10*/].f_3)))
			{
				func_174(&(Local_188[1 /*10*/].f_3));
			}
			else if (func_100(&(Local_188[1 /*10*/].f_3)) > 1.2f)
			{
				func_99(&(Local_188[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_188[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_294(var uParam0)//Position - 0xAAA6
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_7(&(Local_188[0 /*10*/].f_3)))
			{
				func_174(&(Local_188[0 /*10*/].f_3));
			}
			else if (func_100(&(Local_188[0 /*10*/].f_3)) > 0.7f)
			{
				func_99(&(Local_188[0 /*10*/].f_3));
				func_70(&(Local_188[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_188[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_295(var uParam0)//Position - 0xAB30
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_7(&(Local_188[iVar0 /*10*/].f_6)))
		{
			func_70(&(Local_188[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_69(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_296(int iParam0, var uParam1)//Position - 0xAB78
{
	Local_188[iParam0 /*10*/].f_1++;
	func_297(uParam1, iParam0);
	func_99(&(Local_188[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_297(var uParam0, int iParam1)//Position - 0xABAB
{
	uParam0->f_76 = (uParam0->f_76 + Local_188[iParam1 /*10*/]);
}

void func_298(var uParam0, int iParam1)//Position - 0xABC2
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_299(var uParam0)//Position - 0xABD5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_7(&(Local_188[5 /*10*/].f_3)))
			{
				func_174(&(Local_188[5 /*10*/].f_3));
			}
			else if (func_100(&(Local_188[5 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_188[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_188[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_300(var uParam0, char* sParam1, int iParam2)//Position - 0xAC4C
{
	struct<3> Var0;
	
	func_203();
	func_68(2);
	Var0 = { func_317() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && func_41()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!func_158(uParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_69(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_315(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_161(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_315(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_315(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_315(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_315(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_315(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_158(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					func_142(uParam0, 4096, 0);
				}
				else
				{
					func_142(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_315(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_315(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_315(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_161(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_315(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_315(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_42(8, 0);
			iLocal_55[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_315(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_161(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_142(uParam0, 0, 0);
			func_315(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_42(8, 0);
			iLocal_55[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_315(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_161(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_315(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_42(8, 0);
			iLocal_55[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_315(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_161(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_314(&Var0);
			func_301(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_315(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_315(uParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_161(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_42(3, 0);
		}
		func_69(uParam0, 3, 0f, 1);
	}
}

int func_301(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB1FB
{
	func_313(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_302(sParam2, iParam3, 0);
}

int func_302(char* sParam0, int iParam1, bool bParam2)//Position - 0xB249
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
					func_204();
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
		if (func_312(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_311();
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
				func_310();
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
				if (func_309())
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
			if (func_24())
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
			func_308();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_307();
		func_303();
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
		func_204();
	}
	return 0;
}

void func_303()//Position - 0xB517
{
	if (!func_304())
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

int func_304()//Position - 0xB54E
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_122())
	{
		return 0;
	}
	if (func_305(PLAYER::PLAYER_ID()))
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

bool func_305(int iParam0)//Position - 0xB5B1
{
	return func_306(iParam0, 20);
}

var func_306(int iParam0, int iParam1)//Position - 0xB5C1
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

void func_307()//Position - 0xB5D9
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

void func_308()//Position - 0xB60B
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

int func_309()//Position - 0xB6A0
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

void func_310()//Position - 0xB739
{
	if (func_67(14))
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
		Global_20500 = func_92();
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

void func_311()//Position - 0xB7DB
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

bool func_312(int iParam0, int iParam1)//Position - 0xB833
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

void func_313(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB86B
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	StringCopy(&Global_21915, sParam2, 24);
	Global_22834 = iParam5;
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

void func_314(char* sParam0)//Position - 0xB8C1
{
	switch (func_95(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_315(var uParam0, char* sParam1)//Position - 0xB914
{
	if (func_316(uParam0))
	{
		func_301(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_316(var uParam0)//Position - 0xB93C
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (func_189(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_317()//Position - 0xB97A
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21845 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_22855);
		if (iVar6 > -1)
		{
			return Global_20713[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_318(var uParam0)//Position - 0xB9C0
{
	return uParam0->f_118;
}

void func_319()//Position - 0xB9CC
{
	func_353(&Local_857);
	if (func_352(&Local_857, &Local_1564))
	{
		switch (Local_1564.f_27)
		{
			case 0:
				if (Local_857.f_410 == 9)
				{
					if (!func_351(&Local_857))
					{
						if (func_350("TX_OBJ_PRO_DO") || HUD::DOES_BLIP_EXIST(Local_857.f_9))
						{
							Local_1564.f_27++;
						}
						else if (func_349(&Local_857) != 10)
						{
							func_209(&Local_857, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_349(&Local_857) > 10 && func_349(&Local_857) != 15) && !func_351(&Local_857))
				{
					if (!PED::IS_PED_INJURED(Local_857.f_3))
					{
						func_161(Local_857.f_3, "PED_RANT", Local_857.f_145, 4);
					}
					Local_1564.f_27++;
					if (bLocal_1563)
					{
					}
				}
				break;
			}
	}
	func_320(&Local_857, &uLocal_1594, &Local_1564, bLocal_1563);
}

int func_320(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xBAC7
{
	func_330(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_175(uParam0, 2))
	{
		if (func_329(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_328(uParam0))
				{
					uParam2->f_7 = { func_327(uParam1) };
					func_301(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_41())
				{
					uParam2->f_13 = { func_212() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_248(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_324(uParam1);
					func_69(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_323(uParam0))
				{
					if (func_41())
					{
						func_69(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_322() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_41())
				{
					uParam2->f_19 = { func_317() };
				}
				else
				{
					func_248(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_324(uParam1);
					func_69(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_175(uParam0, 14) && !func_41()) && !func_323(uParam0)) && func_393(uParam0, 18) > 1f)
				{
					func_69(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_41())
				{
					if (func_393(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_321(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_41())
				{
					func_248(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_324(uParam1);
					func_69(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_321(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBD67
{
	func_313(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21852 = 0;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 1;
	StringCopy(&Global_22849, sParam3, 24);
	Global_2883585 = 0;
	return func_302(sParam2, iParam4, 0);
}

struct<6> func_322()//Position - 0xBDBB
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21845 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_22855);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20713[iVar7 /*6*/])))
			{
				return Global_20713[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20713[iVar8 /*6*/])))
					{
						return Global_20713[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_20713[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_323(var uParam0)//Position - 0xBE67
{
	return uParam0->f_110;
}

void func_324(var uParam0)//Position - 0xBE73
{
	int iVar0;
	
	iVar0 = func_326(uParam0);
	if (iVar0 > -1)
	{
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_247(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_325(), 24);
	}
}

var func_325()//Position - 0xBEBD
{
	var uVar0;
	
	return uVar0;
}

int func_326(var uParam0)//Position - 0xBEC7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_251((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_327(var uParam0)//Position - 0xBEF7
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_251((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_247(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_328(var uParam0)//Position - 0xBF3E
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_183("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_183("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_183("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_183("TX_OBJ_GYB_DO", 0, 0) || func_183("TAXI_OBJ_GYB", 0, 0)) || func_183("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_183("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_183("TX_OBJ_CYI_DO", 0, 0) || func_183("TAXI_OBJ_CYI_01", 0, 0)) || func_183("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_183("TX_OBJ_GYN_DO", 0, 0) || func_183("TAXI_OBJ_GYN", 0, 0)) || func_183("TAXI_OBJ_GYN_TG", 0, 0)) || func_183("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_183("TAXI_OBJ_CC1", 0, 0) || func_183("TAXI_OBJ_CC2", 0, 0)) || func_183("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_183("TAXI_OBJ_FTC1", 0, 0) || func_183("TAXI_OBJ_FTC2", 0, 0)) || func_183("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_183("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_183("TAXI_OBJ_GETRUN", 0, 0) || func_183("TAXI_OBJ_DRIVE", 0, 0)) || func_183("TAXI_OBJ_RETURN", 0, 0)) || func_183("TAXI_OBJ_POL", 0, 0)) || func_183("TAXI_OBJ_RUNOUT", 0, 0)) || func_183("TAXI_OBJ_POL", 0, 0));
}

int func_329(var uParam0)//Position - 0xC15F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_251((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_330(var uParam0, var uParam1)//Position - 0xC18E
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_328(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_175(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_349(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_348(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_346(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_41())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_345(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_342(uParam0, Var0, func_344(uParam0, 2));
				}
				if (func_251(uParam0->f_98, 4))
				{
					func_69(uParam0, 16, 0, 0);
					func_252(uParam0, 0, 0);
				}
				func_194(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_393(uParam0, 16) > 1f)
				{
					func_196(1);
					if (uParam0->f_411 == 9)
					{
						func_246("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_246("TAXI_VIP_RETURN", 7500, 1);
					}
					func_69(uParam0, 16, 0, 0);
					func_252(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_345(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_161(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_393(uParam0, 16) > func_108(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_41()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_349(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_345(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_348(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_346(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_301(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_209(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_69(uParam0, 16, 0, 0);
				func_209(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_251(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_348(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_345(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_69(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_246("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_246("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_208(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_209(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				func_211(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_161(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_208(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_209(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_341(uParam0, 33554432, Var0, "", 1, 8);
				func_69(uParam0, 16, 0, 0);
				func_209(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_41())
				{
					func_340(uParam0, 0);
					func_247(&(uParam0->f_44), 4);
					func_69(uParam0, 16, 0, 0);
					func_209(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				func_211(&Var0);
				func_338(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_393(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_211(&Var0);
					}
					func_338(Var0, uParam1);
					func_247(&(uParam0->f_81), 67108864);
					func_69(uParam0, 16, 0, 0);
					func_69(uParam0, 11, 0, 0);
					func_252(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_393(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_211(&Var0);
						}
					}
					func_338(Var0, uParam1);
					func_69(uParam0, 11, 0, 0);
					func_69(uParam0, 16, 0, 0);
					func_252(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					func_211(&Var0);
				}
				func_338(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				func_211(&Var0);
				func_338(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				func_211(&Var0);
				func_338(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_211(&Var0);
				func_338(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				func_247(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_211(&Var0);
				func_345(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_336(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_336(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_338(Var0, uParam1);
				func_346(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 6, 0f, 1);
				func_252(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_336(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_336(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_338(Var0, uParam1);
				func_346(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 6, 0f, 1);
				func_252(uParam0, 0, 0);
				break;
			
			case 12:
				func_246("TAXI_OBJ_GYB", 3500, 1);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_246("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_246("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_246("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				func_345(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_251(uParam0->f_98, 268435456))
				{
					func_246("TAXI_OBJ_CYI_01", 7500, 1);
					func_247(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_211(&Var0);
				func_338(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_211(&Var0);
				func_338(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_211(&Var0);
				func_338(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 33:
				func_246("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_251(uParam0->f_82, 8192))
				{
					if (func_393(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_211(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_338(Var0, uParam1);
						}
						else
						{
							func_345(uParam0, &Var0, 0, 0, 8);
						}
						func_247(&(uParam0->f_82), 8192);
						func_69(uParam0, 16, 0, 0);
						func_69(uParam0, 11, 0, 0);
						func_252(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_251(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_211(&Var0);
					func_345(uParam0, &Var0, 0, 0, 8);
					func_247(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_251(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_211(&Var0);
					func_345(uParam0, &Var0, 0, 0, 8);
					func_247(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				func_211(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_252(uParam0, 0, 0);
				break;
			
			case 139:
				func_246("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_209(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_251(uParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					func_247(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_251(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_247(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_246("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_252(uParam0, 0, 0);
				func_209(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_41())
				{
					func_246("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_252(uParam0, 0, 0);
					func_209(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_246("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_252(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_251(uParam0->f_81, 1))
				{
					func_335(uParam0, 1, Var0, "_sick1", 8);
					func_13(&(uParam0->f_81), 2);
				}
				else if (!func_251(uParam0->f_81, 2))
				{
					func_335(uParam0, 2, Var0, "_sick2", 8);
					func_13(&(uParam0->f_81), 1);
				}
				func_346(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_251(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_251(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_247(&(uParam0->f_81), 2097152);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_69(uParam0, 16, 0, 0);
				func_346(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_252(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_346(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_346(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_346(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_211(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_251(uParam0->f_81, 4))
				{
					func_335(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_251(uParam0->f_81, 8))
				{
					func_335(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_335(uParam0, 8, Var0, "_turns3", 8);
					func_13(&(uParam0->f_81), 4);
					func_13(&(uParam0->f_81), 8);
				}
				func_346(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_334(uParam0))
				{
					func_342(uParam0, Var0, func_344(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_161(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_348(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_301(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_348(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_348(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_346(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_251(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_247(&(uParam0->f_83), 128);
					func_13(&(uParam0->f_83), 256);
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_251(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_247(&(uParam0->f_83), 256);
					func_13(&(uParam0->f_83), 512);
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_251(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_247(&(uParam0->f_83), 512);
					func_13(&(uParam0->f_83), 128);
					func_69(uParam0, 16, 0, 0);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_251(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_211(&Var0);
					}
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_247(&(uParam0->f_83), 1);
					func_13(&(uParam0->f_83), 2);
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_251(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_211(&Var0);
					}
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_247(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_13(&(uParam0->f_83), 4);
					}
					else
					{
						func_13(&(uParam0->f_83), 1);
					}
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_251(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_211(&Var0);
					}
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_247(&(uParam0->f_83), 4);
					func_13(&(uParam0->f_83), 1);
					func_69(uParam0, 16, 0, 0);
				}
				func_346(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_251(uParam0->f_81, 4096))
				{
					func_341(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_251(uParam0->f_81, 8192))
				{
					func_341(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_346(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_251(uParam0->f_81, 16384))
				{
					func_341(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_251(uParam0->f_81, 32768))
				{
					func_341(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_346(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_251(uParam0->f_82, 8))
					{
						func_333(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_251(uParam0->f_82, 16))
					{
						func_333(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_251(uParam0->f_82, 32))
					{
						func_333(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_346(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_252(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_348(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_346(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_69(uParam0, 16, 0, 0);
					func_252(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_348(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_346(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_348(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_346(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_251(uParam0->f_81, 65536))
				{
					func_341(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_251(uParam0->f_81, 131072))
				{
					func_341(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_334(uParam0))
				{
					func_342(uParam0, Var0, func_344(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_161(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_251(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_211(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_247(&(uParam0->f_83), 8);
					func_13(&(uParam0->f_83), 16);
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_251(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_211(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_247(&(uParam0->f_83), 16);
					func_13(&(uParam0->f_83), 32);
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_251(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_211(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_247(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_13(&(uParam0->f_83), 64);
					}
					else
					{
						func_13(&(uParam0->f_83), 8);
					}
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_251(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_211(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_247(&(uParam0->f_83), 64);
					func_13(&(uParam0->f_83), 8);
					func_69(uParam0, 16, 0, 0);
				}
				func_346(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_41())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_345(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_342(uParam0, Var0, func_344(uParam0, 65));
					func_252(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_41())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					func_345(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_342(uParam0, Var0, func_344(uParam0, 66));
					func_252(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_41())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								func_346(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								func_346(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_348(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_346(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_69(uParam0, 16, 0, 0);
								func_252(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_62)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_345(uParam0, &Var0, 0, 0, 8);
									func_69(uParam0, 16, 0, 0);
									func_69(uParam0, 11, 0, 0);
									func_252(uParam0, 0, 0);
									if (!iLocal_64)
									{
										iLocal_62 = 1;
									}
								}
								else
								{
									if (!iLocal_63)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_63 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_64 = 1;
									}
									func_211(&Var0);
									func_345(uParam0, &Var0, 0, 0, 8);
									func_69(uParam0, 16, 0, 0);
									func_69(uParam0, 11, 0, 0);
									func_252(uParam0, 0, 0);
									iLocal_62 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_345(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_209(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_348(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_346(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_251(uParam0->f_82, 1))
				{
					func_333(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_251(uParam0->f_82, 2))
				{
					func_333(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_251(uParam0->f_82, 4))
				{
					func_333(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar6 = { Var0 };
				func_348(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_161(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_69(uParam0, 16, 0, 0);
				func_346(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_334(uParam0))
				{
					func_342(uParam0, Var0, func_344(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_161(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_332(uParam0, Var0, 8);
				}
				func_346(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_251(uParam0->f_83, 1024))
				{
					func_247(&(uParam0->f_83), 1024);
					func_69(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_211(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_251(uParam0->f_83, 2048))
				{
					func_247(&(uParam0->f_83), 2048);
					func_69(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_211(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_251(uParam0->f_83, 4096))
				{
					func_247(&(uParam0->f_83), 4096);
					func_69(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_211(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_251(uParam0->f_82, 1024))
				{
					func_333(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_13(&(uParam0->f_82), 2048);
				}
				else if (!func_251(uParam0->f_82, 2048))
				{
					func_333(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_348(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_346(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_161(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_334(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_345(uParam0, &Var0, 0, 0, 8);
						func_209(uParam0, 52, 1, 0, 0);
						func_69(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar6 = { Var0 };
						func_345(uParam0, &Var0, 0, 0, 8);
						func_69(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_348(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_69(uParam0, 16, 0, 0);
					func_252(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_346(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_69(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_246("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_211(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_251(uParam0->f_81, 262144))
				{
					func_341(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_251(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_341(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_341(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_346(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_251(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_331(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_251(uParam0->f_82, 134217728))
				{
					func_331(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_346(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 100:
				func_246("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_252(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_211(&Var0);
				}
				func_247(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_211(&Var0);
				}
				func_247(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_211(&Var0);
				}
				func_247(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_251(uParam0->f_82, 65536))
				{
					if (func_393(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						func_211(&Var0);
						func_338(Var0, uParam1);
						func_247(&(uParam0->f_82), 65536);
						func_69(uParam0, 16, 0, 0);
						func_69(uParam0, 11, 0, 0);
						func_252(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_251(uParam0->f_82, 131072))
				{
					if (func_393(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_211(&Var0);
						func_338(Var0, uParam1);
						func_247(&(uParam0->f_82), 131072);
						func_69(uParam0, 16, 0, 0);
						func_69(uParam0, 11, 0, 0);
						func_252(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_251(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_247(&(uParam0->f_82), 8388608);
				}
				else if (!func_251(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_247(&(uParam0->f_82), 16777216);
				}
				else if (!func_251(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_247(&(uParam0->f_82), 33554432);
				}
				func_338(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_348(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_211(&Var0);
					func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_345(uParam0, &Var0, 0, 0, 8);
				}
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_338(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_338(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_338(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_211(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_211(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_348(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_348(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_347(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_211(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_211(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_209(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_247(&(uParam0->f_81), 2097152);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_211(&Var0);
				func_338(Var0, uParam1);
				func_247(&(uParam0->f_81), 67108864);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_251(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_341(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_161(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_209(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_251(uParam0->f_81, 268435456))
				{
					func_341(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_209(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_246("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_252(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_251(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_341(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_161(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_341(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_209(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_246("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_252(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_251(uParam0->f_81, 16777216))
				{
					func_341(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_252(uParam0, 0, 0);
				break;
			
			case 88:
				func_246("TAXI_TIEFLEE", 7500, 1);
				func_252(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_251(uParam0->f_98, 536870912))
				{
					func_246("TAXI_OBJ_CYI_1B", 7500, 1);
					func_247(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_252(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_211(&Var0);
				func_345(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				func_345(uParam0, &Var0, 0, 0, 8);
				func_252(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_345(uParam0, &Var0, 0, 0, 8);
				func_252(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				func_345(uParam0, &Var0, 0, 0, 8);
				func_252(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_345(uParam0, &Var0, 1, 0, 8);
				func_209(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_246("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_209(uParam0, 0, 0, 0, 0);
				func_252(uParam0, 0, 0);
				break;
			}
	}
}

void func_331(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xF44C
{
	func_247(&(uParam0->f_82), iParam1);
	func_69(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_211(&Param2);
	}
	func_301(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_332(var uParam0, struct<6> Param1, int iParam7)//Position - 0xF48D
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_251(uParam0->f_82, 64))
	{
		func_247(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_251(uParam0->f_82, 128))
	{
		func_247(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_347(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_69(uParam0, 16, 0, 0);
}

void func_333(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)//Position - 0xF514
{
	func_247(&(uParam0->f_82), iParam1);
	func_69(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_211(&Param2);
		}
	}
	func_301(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_334(var uParam0)//Position - 0xF594
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_335(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)//Position - 0xF5FA
{
	func_247(&(uParam0->f_81), iParam1);
	func_69(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_301(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_336(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xF630
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_337(*uParam0, iVar1))
		{
			func_248(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_211(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

bool func_337(var uParam0, int iParam1)//Position - 0xF6B1
{
	return (uParam0 && iParam1) != 0;
}

void func_338(char[24] cParam0, var uParam6)//Position - 0xF6C0
{
	int iVar0;
	
	iVar0 = func_339(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_247(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_339(var uParam0)//Position - 0xF6EF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_340(var uParam0, bool bParam1)//Position - 0xF71C
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_246("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_246("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_246("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_246("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_246("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_246("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_246("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_246("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_246("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_246("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_246("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_246("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_246("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_246("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_246("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_246("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_246("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_246("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_246("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_246("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_341(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xF8D3
{
	func_247(&(uParam0->f_81), iParam1);
	func_69(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_211(&Param2);
	}
	func_301(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_342(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)//Position - 0xF914
{
	func_69(uParam0, 16, 0, 0);
	func_69(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_343(uParam0));
	}
}

char* func_343(var uParam0)//Position - 0xF952
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_344(var uParam0, int iParam1)//Position - 0xF9ED
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_345(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xFD96
{
	func_69(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_69(uParam0, 17, 0f, 1);
	}
	func_252(uParam0, iParam2, 0);
	return func_301(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_346(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)//Position - 0xFDD3
{
	if (iParam0 == 0)
	{
		if (func_251(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_251(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_251(*uParam2, 4))
		{
			if (!func_251(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_251(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_251(*uParam2, 512))
		{
			if (!func_251(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_251(*uParam2, 16))
		{
			if (!func_251(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_251(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_251(*uParam2, 64))
		{
			if (!func_251(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_251(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_251(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_251(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_251(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_251(*uParam2, 8192))
		{
			if (func_251(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_251(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_251(*uParam2, 16384))
		{
			if (func_251(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_251(*uParam2, 32768))
		{
			if (func_251(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_251(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_251(*uParam2, 65536))
		{
			if (func_251(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_251(*uParam2, 131072))
		{
			if (func_251(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_251(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_251(*uParam2, 262144))
		{
			if (func_251(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_251(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_251(*uParam2, 524288))
		{
			if (func_251(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_251(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_251(*uParam2, 1048576))
		{
			if (func_251(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_251(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_251(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_251(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_251(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_251(*uParam2, 67108864))
		{
			if (func_251(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_251(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_251(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_251(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_251(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_347(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x103DF
{
	func_313(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21852 = 0;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 1;
	Global_22838 = 0;
	Global_22842 = 0;
	StringCopy(&Global_22849, sParam3, 24);
	Global_2883585 = 0;
	return func_302(sParam2, iParam4, 0);
}

void func_348(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x10433
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_337(*uParam0, iVar1))
		{
			func_248(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_211(sParam2);
				}
				else
				{
					func_211(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_349(var uParam0)//Position - 0x104CA
{
	return uParam0->f_416;
}

int func_350(char* sParam0)//Position - 0x104D7
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_183(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_351(var uParam0)//Position - 0x104F9
{
	if (func_41())
	{
		return 1;
	}
	if (func_175(uParam0, 17))
	{
		return 1;
	}
	if (func_175(uParam0, 14))
	{
		return 1;
	}
	if (func_323(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_352(var uParam0, var uParam1)//Position - 0x10538
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_175(uParam0, 9));
}

void func_353(var uParam0)//Position - 0x1055F
{
	if (func_175(uParam0, 17))
	{
		if (!func_175(uParam0, 14))
		{
			if (!func_323(uParam0))
			{
				if (!func_41())
				{
					func_172(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_354(var uParam0)//Position - 0x10599
{
	return uParam0->f_117;
}

void func_355(var uParam0, var uParam1, bool bParam2)//Position - 0x105A5
{
	if (!func_251(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && func_41())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_41())
				{
					StringCopy(&(uParam0->f_124), func_325(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_356(var uParam0)//Position - 0x1062B
{
	if (!func_251(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (func_146(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, false, false, false, false, false, false, 0);
				func_247(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_357(var uParam0)//Position - 0x10683
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_341.f_0 > 0 && !func_337(Local_341.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_341.f_0 - 1))
				{
					if (func_337(Local_341.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_341.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_337(Local_341.f_1[iVar0 /*4*/], 4))
							{
								func_248(&(Local_341.f_1[iVar0 /*4*/]), 4);
								Local_341.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_14(&(Local_341.f_1[iVar0 /*4*/]), 12);
						}
						if (func_337(Local_341.f_1[iVar0 /*4*/], 4) && !func_337(Local_341.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_341.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_341.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_248(&(Local_341.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_300(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_358(var uParam0, var uParam1)//Position - 0x10796
{
	var uVar0;
	
	if (!func_175(uParam0, 27))
	{
		func_173(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_393(uParam0, 27) > 5f)
	{
		if (func_386(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_69(uParam0, 27, 0, 0);
			func_69(uParam0, 10, 0, 0);
			func_384(uParam0, &uVar0, uParam1);
		}
		func_380(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_359(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_41())
	{
		if (func_393(uParam0, 26) > 10f)
		{
			func_172(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (func_175(uParam0, 26))
	{
		func_172(uParam0, 26, 0);
	}
	return 0;
}

void func_359(var uParam0)//Position - 0x108C0
{
	if (!func_379(uParam0->f_429))
	{
		uParam0->f_429 = func_378();
		func_369(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_360(uParam0->f_429))
	{
		func_300(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_360(int iParam0)//Position - 0x1090D
{
	return func_361(func_378(), iParam0);
}

int func_361(int iParam0, int iParam1)//Position - 0x1091F
{
	int iVar0;
	int iVar1;
	
	if (!func_379(iParam1) || !func_379(iParam0))
	{
		return 1;
	}
	iVar0 = func_367(iParam0);
	iVar1 = func_367(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_366(iParam0);
	iVar1 = func_366(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_365(iParam0);
	iVar1 = func_365(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_364(iParam0);
	iVar1 = func_364(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_363(iParam0);
	iVar1 = func_363(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_362(iParam0);
	iVar1 = func_362(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0)//Position - 0x10A2B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_363(int iParam0)//Position - 0x10A3E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_364(int iParam0)//Position - 0x10A51
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_365(int iParam0)//Position - 0x10A64
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_366(int iParam0)//Position - 0x10A76
{
	return iParam0 & 15;
}

var func_367(int iParam0)//Position - 0x10A83
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_368(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_368(bool bParam0, int iParam1, int iParam2)//Position - 0x10AA5
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_369(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10ABC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_367(*uParam0);
	iVar1 = func_366(*uParam0);
	iVar2 = func_365(*uParam0);
	iVar3 = func_364(*uParam0);
	iVar4 = func_363(*uParam0);
	iVar5 = func_362(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_377(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_377(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_370(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_370(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10C3E
{
	func_376(uParam0, iParam1);
	func_375(uParam0, iParam2);
	func_374(uParam0, iParam3);
	func_373(uParam0, iParam5);
	func_372(uParam0, iParam4);
	func_371(uParam0, iParam6);
}

void func_371(var uParam0, int iParam1)//Position - 0x10C76
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

void func_372(var uParam0, int iParam1)//Position - 0x10CFC
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_366(*uParam0);
	iVar1 = func_367(*uParam0);
	if (iParam1 < 1 || iParam1 > func_377(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_373(var uParam0, int iParam1)//Position - 0x10D4D
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_374(var uParam0, int iParam1)//Position - 0x10D80
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_375(var uParam0, int iParam1)//Position - 0x10DBA
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_376(var uParam0, int iParam1)//Position - 0x10DF5
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_377(int iParam0, int iParam1)//Position - 0x10E31
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

int func_378()//Position - 0x10ED3
{
	var uVar0;
	
	func_376(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_375(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_374(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_372(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_373(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_371(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_379(int iParam0)//Position - 0x10F19
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_362(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_363(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_364(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_367(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_366(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_365(iParam0);
	if (iVar5 < 1 || iVar5 > func_377(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_380(var uParam0)//Position - 0x10FF5
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_383()) && !func_176(uParam0)) || ((uParam0->f_411 != 9 && func_382(uParam0, 1)) && !func_176(uParam0)))
		{
			uVar0 = func_381(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, false);
			func_199(uParam0);
			func_190(uParam0, 0);
		}
	}
}

var func_381(var uParam0)//Position - 0x1108B
{
	return uParam0;
}

int func_382(var uParam0, int iParam1)//Position - 0x11095
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = func_238(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_251(uParam0->f_44, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_249("TX_VIP_DMGD", -1);
							if (func_275("TX_VIP_DMGD"))
							{
								func_247(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_251(uParam0->f_44, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_249("TX_VIP_CAR", -1);
							if (func_275("TX_VIP_CAR"))
							{
								func_247(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_251(uParam0->f_44, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_249("TX_VIP_SMALL", -1);
							if (func_275("TX_VIP_SMALL"))
							{
								func_247(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_13(&(uParam0->f_44), 16);
			func_13(&(uParam0->f_44), 64);
			func_13(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

int func_383()//Position - 0x116AA
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_12()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_384(var uParam0, var uParam1, var uParam2)//Position - 0x11701
{
	switch (*uParam1)
	{
		case 1:
			if (func_385(uParam0, 0, 1))
			{
				func_300(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_385(uParam0, 0, 4))
			{
				func_300(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_385(uParam0, 0, 8))
			{
				func_300(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_385(uParam0, 1, 1))
			{
				func_300(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_385(uParam0, 0, 1))
			{
				func_300(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_251(*uParam2, 2) && func_158(uParam0))
			{
				func_300(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_385(var uParam0, int iParam1, int iParam2)//Position - 0x117DC
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_209(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_209(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_386(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x11859
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_251(*uParam2, 1))
		{
			if (func_392(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_251(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_251(*uParam2, 4))
		{
			if (func_390(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_251(*uParam2, 8))
		{
			if (func_389(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_251(*uParam2, 128);
		if (bParam4)
		{
			if (func_387(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_251(*uParam2, 16))
		{
			if (func_387(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_387(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x11983
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_77)
		{
			iLocal_78 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_77 = true;
		}
		iLocal_79 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_80 = (iLocal_78 - iLocal_79);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_80) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_77)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_80) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_388(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_188(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1)//Position - 0x11B4B
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_389(int iParam0, int iParam1, var uParam2)//Position - 0x11BA0
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_390(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x11BEE
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, true))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_391(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_391(int iParam0)//Position - 0x11D67
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_189(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)))
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
	return 0;
}

int func_392(int iParam0, var uParam1)//Position - 0x11E35
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_188(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
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

float func_393(var uParam0, int iParam1)//Position - 0x11EBA
{
	if (!func_7(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_174(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_100(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_394()//Position - 0x11EEA
{
	func_395(&Local_857);
	func_437();
}

void func_395(var uParam0)//Position - 0x11EFD
{
	func_2(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_68(2);
	}
}

int func_396(var uParam0, bool bParam1)//Position - 0x11F1C
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_41() && func_393(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
				{
					if (func_53(uParam0) == 0 || func_337(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_142(uParam0, 4160, 0);
						}
						else
						{
							func_142(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_142(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_142(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_142(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

void func_397(var uParam0)//Position - 0x1201B
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
}

int func_398(var uParam0)//Position - 0x1205C
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_399()//Position - 0x1207D
{
	Local_341.f_0 = 0;
	func_415(74783/*func_417*/, 74758/*func_416*/, 1);
	func_415(74519/*func_413*/, 74497/*func_412*/, 1);
	func_415(74435/*func_411*/, 74410/*func_410*/, 1);
	func_415(74338/*func_409*/, 74314/*func_408*/, 1);
	func_415(74204/*func_407*/, 74183/*func_406*/, 1);
	func_415(74145/*func_405*/, 74120/*func_404*/, 1);
	func_415(73978/*func_401*/, 73956/*func_400*/, 1);
}

int func_400(var uParam0, var uParam1)//Position - 0x120E4
{
	uParam1 = uParam1;
	func_300(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_401(var uParam0)//Position - 0x120FA
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_403(uParam0->f_4))
		{
			func_402(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_402(var uParam0, int iParam1)//Position - 0x12124
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_403(int iParam0)//Position - 0x12137
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_404(var uParam0, var uParam1)//Position - 0x12188
{
	uParam1 = uParam1;
	func_300(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_405(var uParam0)//Position - 0x121A1
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_337(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_406(var uParam0, var uParam1)//Position - 0x121C7
{
	uParam1 = uParam1;
	func_402(uParam0, 11);
	return 1;
}

int func_407(var uParam0)//Position - 0x121DC
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!func_175(uParam0, 25))
			{
				func_69(uParam0, 25, 0, 0);
			}
			else if (func_393(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_175(uParam0, 25))
		{
			func_172(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_408(var uParam0, var uParam1)//Position - 0x1224A
{
	uParam1 = uParam1;
	func_300(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_409(var uParam0)//Position - 0x12262
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_410(var uParam0, var uParam1)//Position - 0x122AA
{
	uParam1 = uParam1;
	func_300(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_411(var uParam0)//Position - 0x122C3
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_337(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_412(var uParam0, var uParam1)//Position - 0x12301
{
	uParam1 = uParam1;
	func_300(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_413(var uParam0)//Position - 0x12317
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_414(uParam0->f_4))
		{
			func_402(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_414(int iParam0)//Position - 0x12341
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
		}
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_415(int iParam0, int iParam1, bool bParam2)//Position - 0x1239C
{
	if (Local_341.f_0 >= 16)
	{
		Local_341.f_0 = 16;
		return;
	}
	Local_341.f_1[Local_341.f_0 /*4*/] = 0;
	func_248(&(Local_341.f_1[Local_341.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_248(&(Local_341.f_1[Local_341.f_0 /*4*/]), 2);
	}
	Local_341.f_1[Local_341.f_0 /*4*/].f_2 = iParam0;
	Local_341.f_1[Local_341.f_0 /*4*/].f_3 = iParam1;
	Local_341.f_0++;
}

int func_416(var uParam0, var uParam1)//Position - 0x12406
{
	uParam1 = uParam1;
	func_300(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_417(var uParam0)//Position - 0x1241F
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_418()//Position - 0x1245F
{
	Local_188[5 /*10*/] = 5;
	Local_188[5 /*10*/].f_1 = 0;
	Local_188[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_188[5 /*10*/].f_9 = 78;
	Local_188[0 /*10*/] = 5;
	Local_188[0 /*10*/].f_1 = 0;
	Local_188[0 /*10*/].f_2 = "TX_AIR_N";
	Local_188[0 /*10*/].f_9 = 76;
	Local_188[2 /*10*/] = 5;
	Local_188[2 /*10*/].f_1 = 0;
	Local_188[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_188[2 /*10*/].f_9 = 21;
	Local_188[1 /*10*/] = 10;
	Local_188[1 /*10*/].f_1 = 0;
	Local_188[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_188[1 /*10*/].f_9 = 71;
	Local_188[4 /*10*/] = 10;
	Local_188[4 /*10*/].f_1 = 0;
	Local_188[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_188[4 /*10*/].f_9 = 79;
	Local_188[6 /*10*/] = 10;
	Local_188[6 /*10*/].f_1 = 0;
	Local_188[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_188[6 /*10*/].f_9 = 80;
	Local_188[9 /*10*/] = 15;
	Local_188[9 /*10*/].f_1 = 0;
	Local_188[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_188[9 /*10*/].f_9 = 82;
	Local_188[8 /*10*/] = 15;
	Local_188[8 /*10*/].f_1 = 0;
	Local_188[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_188[8 /*10*/].f_9 = 72;
	Local_188[7 /*10*/] = 15;
	Local_188[7 /*10*/].f_1 = 0;
	Local_188[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_188[7 /*10*/].f_9 = 74;
	Local_188[11 /*10*/] = 5;
	Local_188[11 /*10*/].f_1 = 0;
	Local_188[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_188[11 /*10*/].f_9 = 70;
	Local_188[12 /*10*/] = 5;
	Local_188[12 /*10*/].f_1 = 0;
	Local_188[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_188[12 /*10*/].f_9 = 69;
	Local_188[13 /*10*/] = 10;
	Local_188[13 /*10*/].f_1 = 0;
	Local_188[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_188[13 /*10*/].f_9 = 67;
	Local_188[14 /*10*/] = 10;
	Local_188[14 /*10*/].f_1 = 0;
	Local_188[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_188[14 /*10*/].f_9 = 75;
}

void func_419(var uParam0)//Position - 0x12637
{
	func_420();
	(*uParam0)[0 /*11*/] = "Region 0 - Los Puerta";
	(uParam0[0 /*11*/])->f_2 = { -1902f, -1280f, 20f };
	(uParam0[0 /*11*/])->f_5 = { -373f, -3533f, -20f };
	(uParam0[0 /*11*/])->f_1 = 8;
	(uParam0[0 /*11*/])->f_8 = { IntToFloat(1), IntToFloat(4), IntToFloat(5) };
	(*uParam0)[1 /*11*/] = "Region 1 - South Los Santos";
	(uParam0[1 /*11*/])->f_2 = { -373f, -1280f, 20f };
	(uParam0[1 /*11*/])->f_5 = { 708f, -3533f, -20f };
	(uParam0[1 /*11*/])->f_1 = 12;
	(uParam0[1 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(1), IntToFloat(5) };
	(*uParam0)[2 /*11*/] = "Region 2 - Vinewood Hills";
	(uParam0[2 /*11*/])->f_2 = { 708f, -1280f, 20f };
	(uParam0[2 /*11*/])->f_5 = { 1952f, -3533f, -20f };
	(uParam0[2 /*11*/])->f_1 = 6;
	(uParam0[2 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(4), IntToFloat(5) };
	(*uParam0)[3 /*11*/] = "Region 3 - Del Perro";
	(uParam0[3 /*11*/])->f_2 = { -4613f, 315f, 20f };
	(uParam0[3 /*11*/])->f_5 = { -1902f, -1280f, -20f };
	(uParam0[3 /*11*/])->f_1 = 5;
	(uParam0[3 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(4), IntToFloat(5) };
	(*uParam0)[4 /*11*/] = "Region 4 - Little Seoul";
	(uParam0[4 /*11*/])->f_2 = { -1902f, 315f, 20f };
	(uParam0[4 /*11*/])->f_5 = { -373f, -1280f, 33f };
	(uParam0[4 /*11*/])->f_1 = 20;
	(uParam0[4 /*11*/])->f_8 = { IntToFloat(5), IntToFloat(0), IntToFloat(1) };
	(*uParam0)[5 /*11*/] = "Region 5 -  Downtown";
	(uParam0[5 /*11*/])->f_2 = { -373f, 315f, 20f };
	(uParam0[5 /*11*/])->f_5 = { 708f, -1280f, -17f };
	(uParam0[5 /*11*/])->f_1 = 11;
	(uParam0[5 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(4), IntToFloat(2) };
	(*uParam0)[6 /*11*/] = "Region 6 - SouthGate";
	(uParam0[6 /*11*/])->f_2 = { 708f, 315f, 20f };
	(uParam0[6 /*11*/])->f_5 = { 1952f, -1280f, -20f };
	(uParam0[6 /*11*/])->f_1 = 3;
	(uParam0[6 /*11*/])->f_8 = { IntToFloat(4), IntToFloat(5), IntToFloat(2) };
	(*uParam0)[7 /*11*/] = "Region 7 - City Hills";
	(uParam0[7 /*11*/])->f_2 = { 1952f, 315f, 35f };
	(uParam0[7 /*11*/])->f_5 = { 4603f, -1280f, -20f };
	(uParam0[7 /*11*/])->f_1 = 3;
	(uParam0[7 /*11*/])->f_8 = { IntToFloat(5), IntToFloat(2), IntToFloat(6) };
	(*uParam0)[8 /*11*/] = "Region 8 - Country Hills";
	(uParam0[8 /*11*/])->f_2 = { -4613f, 2550f, 35f };
	(uParam0[8 /*11*/])->f_5 = { -1902f, 315f, -20f };
	(uParam0[8 /*11*/])->f_1 = 4;
	(uParam0[8 /*11*/])->f_8 = { IntToFloat(9), IntToFloat(4), IntToFloat(0) };
	(*uParam0)[9 /*11*/] = "Region 9 - Bel Air";
	(uParam0[9 /*11*/])->f_2 = { -1902f, 2550f, 35f };
	(uParam0[9 /*11*/])->f_5 = { -373f, 315f, -20f };
	(uParam0[9 /*11*/])->f_1 = 7;
	(uParam0[9 /*11*/])->f_8 = { IntToFloat(4), IntToFloat(5), IntToFloat(10) };
	(*uParam0)[10 /*11*/] = "Region 10 - West Hollywood";
	(uParam0[10 /*11*/])->f_2 = { -373f, 2550f, 35f };
	(uParam0[10 /*11*/])->f_5 = { 708f, 315f, -20f };
	(uParam0[10 /*11*/])->f_1 = 3;
	(uParam0[10 /*11*/])->f_8 = { IntToFloat(4), IntToFloat(5), IntToFloat(6) };
	(*uParam0)[11 /*11*/] = "Region 11 - Echo Park";
	(uParam0[11 /*11*/])->f_2 = { 708f, 2550f, 35f };
	(uParam0[11 /*11*/])->f_5 = { 1952f, 315f, -20f };
	(uParam0[11 /*11*/])->f_1 = 4;
	(uParam0[11 /*11*/])->f_8 = { IntToFloat(10), IntToFloat(5), IntToFloat(6) };
	(*uParam0)[12 /*11*/] = "Region 12 - North City Hills";
	(uParam0[12 /*11*/])->f_2 = { 1952f, 2550f, 35f };
	(uParam0[12 /*11*/])->f_5 = { 4603f, 315f, -20f };
	(uParam0[12 /*11*/])->f_1 = 2;
	(uParam0[12 /*11*/])->f_8 = { IntToFloat(11), IntToFloat(6), IntToFloat(6) };
	(*uParam0)[13 /*11*/] = "Region 13 - Vinewood";
	(uParam0[13 /*11*/])->f_2 = { -4613f, 4435f, 35f };
	(uParam0[13 /*11*/])->f_5 = { -1902f, 2550f, -20f };
	(uParam0[13 /*11*/])->f_1 = 4;
	(uParam0[13 /*11*/])->f_8 = { IntToFloat(9), IntToFloat(8), IntToFloat(9) };
	(*uParam0)[14 /*11*/] = "Region 14 - Mountains";
	(uParam0[14 /*11*/])->f_2 = { -1902f, 4435f, 35f };
	(uParam0[14 /*11*/])->f_5 = { -373f, 2550f, -20f };
	(uParam0[14 /*11*/])->f_1 = 7;
	(uParam0[14 /*11*/])->f_8 = { IntToFloat(8), IntToFloat(9), IntToFloat(10) };
	(*uParam0)[15 /*11*/] = "Region 15 - Lakes";
	(uParam0[15 /*11*/])->f_2 = { -373f, 4435f, 35f };
	(uParam0[15 /*11*/])->f_5 = { 708f, 2550f, 1f };
	(uParam0[15 /*11*/])->f_1 = 7;
	(uParam0[15 /*11*/])->f_8 = { IntToFloat(9), IntToFloat(10), IntToFloat(11) };
	(*uParam0)[16 /*11*/] = "Region 16 - Sandy Shores";
	(uParam0[16 /*11*/])->f_2 = { 708f, 4435f, 35f };
	(uParam0[16 /*11*/])->f_5 = { 1952f, 2550f, -20f };
	(uParam0[16 /*11*/])->f_1 = 8;
	(uParam0[16 /*11*/])->f_8 = { IntToFloat(10), IntToFloat(11), IntToFloat(15) };
	(*uParam0)[17 /*11*/] = "Region 17 - SS Hills";
	(uParam0[17 /*11*/])->f_2 = { 1952f, 4435f, 35f };
	(uParam0[17 /*11*/])->f_5 = { 4603f, 2550f, -20f };
	(uParam0[17 /*11*/])->f_1 = 5;
	(uParam0[17 /*11*/])->f_8 = { IntToFloat(11), IntToFloat(15), IntToFloat(12) };
	(*uParam0)[18 /*11*/] = "Region 18 - NW Country";
	(uParam0[18 /*11*/])->f_2 = { -1902f, 7693f, 35f };
	(uParam0[18 /*11*/])->f_5 = { -373f, 4435f, -20f };
	(uParam0[18 /*11*/])->f_1 = 5;
	(uParam0[18 /*11*/])->f_8 = { IntToFloat(13), IntToFloat(14), IntToFloat(15) };
	(*uParam0)[19 /*11*/] = "Region 19 - N Country";
	(uParam0[19 /*11*/])->f_2 = { -373f, 7693f, 35f };
	(uParam0[19 /*11*/])->f_5 = { 708f, 4435f, -20f };
	(uParam0[19 /*11*/])->f_1 = 6;
	(uParam0[19 /*11*/])->f_8 = { IntToFloat(18), IntToFloat(20), IntToFloat(15) };
	(*uParam0)[20 /*11*/] = "Region 20 - E Country";
	(uParam0[20 /*11*/])->f_2 = { 708f, 7693f, 35f };
	(uParam0[20 /*11*/])->f_5 = { 1952f, 4435f, -20f };
	(uParam0[20 /*11*/])->f_1 = 6;
	(uParam0[20 /*11*/])->f_8 = { IntToFloat(19), IntToFloat(21), IntToFloat(16) };
	(*uParam0)[21 /*11*/] = "Region 21 - CountrySide";
	(uParam0[21 /*11*/])->f_2 = { 1952f, 7693f, 35f };
	(uParam0[21 /*11*/])->f_5 = { 4603f, 4435f, 1f };
	(uParam0[21 /*11*/])->f_1 = 6;
	(uParam0[21 /*11*/])->f_8 = { IntToFloat(17), IntToFloat(20), IntToFloat(16) };
	(*uParam0)[22 /*11*/] = "Region 8 - Special POIs";
	(uParam0[22 /*11*/])->f_2 = { -4613f, 7693f, 20f };
	(uParam0[22 /*11*/])->f_5 = { 4603f, -3533f, -20f };
	(uParam0[22 /*11*/])->f_1 = 10;
	(uParam0[22 /*11*/])->f_8 = { IntToFloat(1), IntToFloat(2), IntToFloat(3) };
}

void func_420()//Position - 0x12DD9
{
	Local_407[0 /*3*/] = { -939.6133f, -1523.37f, 4.1764f };
	Local_407[1 /*3*/] = { -1161.5302f, -1492.471f, 3.3139f };
	Local_407[2 /*3*/] = { -1037.1715f, -2730.9226f, 19.1697f };
	Local_407[3 /*3*/] = { -1204.5907f, -1377.7397f, 3.1844f };
	Local_407[4 /*3*/] = { -939.6133f, -1523.37f, 4.1764f };
	Local_407[5 /*3*/] = { -91.6341f, -1328.1545f, 28.3373f };
	Local_407[6 /*3*/] = { -900.3735f, -2690.0142f, 12.9447f };
	Local_407[7 /*3*/] = { -1012.7864f, -2468.6018f, 12.8384f };
	Local_432[0 /*3*/] = { 87.0014f, -1402.4484f, 28.2549f };
	Local_432[1 /*3*/] = { 146.5773f, -1426.8824f, 28.2915f };
	Local_432[2 /*3*/] = { 435.1445f, -1462.7794f, 28.2915f };
	Local_432[3 /*3*/] = { 135.1209f, -1302.6038f, 28.1936f };
	Local_432[4 /*3*/] = { 112.2743f, -1947.2144f, 19.6826f };
	Local_432[5 /*3*/] = { 65.3804f, -1568.9438f, 28.6028f };
	Local_432[6 /*3*/] = { 137.8282f, -1724.2274f, 28.2079f };
	Local_432[7 /*3*/] = { 132.9427f, -2009.9111f, 17.2055f };
	Local_432[8 /*3*/] = { -184.5559f, -1438.0306f, 30.3049f };
	Local_432[9 /*3*/] = { 153.5036f, -1451.8922f, 28.1418f };
	Local_432[10 /*3*/] = { 50.2007f, -1379.7288f, 32f };
	Local_432[11 /*3*/] = { -297.4216f, -1848.1876f, 24.7217f };
	Local_469[0 /*3*/] = { 768.2622f, -2371.7468f, 21.6783f };
	Local_469[1 /*3*/] = { 1188.8407f, -3249.5051f, 5.0276f };
	Local_469[2 /*3*/] = { 770.0794f, -2991.9758f, 5.0203f };
	Local_469[3 /*3*/] = { 946.5765f, -2453.4355f, 27.5512f };
	Local_469[4 /*3*/] = { 957.6567f, -2097.351f, 29.6646f };
	Local_469[5 /*3*/] = { 926.1091f, -1749.8364f, 29.9898f };
	Local_488[0 /*3*/] = { -2075.6023f, -330.3965f, 12.3162f };
	Local_488[1 /*3*/] = { -1994.4458f, -545.3368f, 10.7213f };
	Local_488[2 /*3*/] = { -3171.3213f, 918.0819f, 13.4239f };
	Local_488[3 /*3*/] = { -1918.1833f, -370.5667f, 48.1919f };
	Local_488[4 /*3*/] = { -1938.766f, -441.2331f, 18.7351f };
	Local_504[0 /*3*/] = { -1392.6733f, -179.0173f, 46.3472f };
	Local_504[1 /*3*/] = { -1428.5615f, -195.809f, 46.4109f };
	Local_504[2 /*3*/] = { -385.7066f, -403.3985f, 30.5014f };
	Local_504[3 /*3*/] = { -486.7284f, -389.6814f, 33.2888f };
	Local_504[4 /*3*/] = { -583.0761f, -446.2154f, 33.299f };
	Local_504[5 /*3*/] = { -496.0706f, 236.211f, 82.0245f };
	Local_504[6 /*3*/] = { -536.2413f, -679.3174f, 32.2419f };
	Local_504[7 /*3*/] = { -1156.0463f, -1418.8805f, 3.7969f };
	Local_504[8 /*3*/] = { -856.6715f, -1148.855f, 5.2178f };
	Local_504[9 /*3*/] = { -696.4865f, -823.45f, 22.8254f };
	Local_504[10 /*3*/] = { -1142.8555f, -933.465f, 1.6658f };
	Local_504[11 /*3*/] = { -1281.3527f, -882.9135f, 10.3152f };
	Local_504[12 /*3*/] = { -1099.7911f, -1702.4319f, 3.37f };
	Local_504[13 /*3*/] = { -1270.7485f, -1159.347f, 5.2547f };
	Local_504[14 /*3*/] = { -1130.5422f, -1195.1903f, 1.2757f };
	Local_504[15 /*3*/] = { -1076.0032f, -1011.8756f, 1.1503f };
	Local_504[16 /*3*/] = { -1035.1838f, -1252.2964f, 5.197f };
	Local_504[17 /*3*/] = { -1006.7727f, -1106.0552f, 1.1484f };
	Local_504[18 /*3*/] = { -1847.1997f, -602.4301f, 10.4091f };
	Local_504[19 /*3*/] = { -597.1105f, -304.0766f, 33.9632f };
	Local_565[0 /*3*/] = { -272.7684f, 248.4368f, 89.1359f };
	Local_565[1 /*3*/] = { 56.3248f, 288.189f, 109.281f };
	Local_565[2 /*3*/] = { 415.2359f, 103.9472f, 99.8247f };
	Local_565[3 /*3*/] = { 394.9993f, -200.0683f, 58.3083f };
	Local_565[4 /*3*/] = { 253.857f, -378.6688f, 43.6252f };
	Local_565[5 /*3*/] = { 223.6173f, -50.8911f, 68.2267f };
	Local_565[6 /*3*/] = { 544.0235f, 202.5245f, 100.61f };
	Local_565[7 /*3*/] = { -264.7876f, -1062.8395f, 24.8463f };
	Local_565[8 /*3*/] = { -234.3063f, -732.1405f, 32.5016f };
	Local_565[9 /*3*/] = { -84.3683f, 241.2898f, 99.4509f };
	Local_565[10 /*3*/] = { 346.413f, -960.6713f, 28.4297f };
	Local_599[0 /*3*/] = { 898.7972f, 56.0888f, 78.0298f };
	Local_599[1 /*3*/] = { 832.3909f, -191.5166f, 71.6695f };
	Local_599[2 /*3*/] = { 790.4477f, -734.7306f, 26.5794f };
	Local_609[0 /*3*/] = { 2590.3372f, -293.4442f, 92.0786f };
	Local_609[1 /*3*/] = { 2531.4043f, -600.4139f, 63.2007f };
	Local_609[2 /*3*/] = { 2604.2168f, 375.1005f, 107.472f };
	Local_619[0 /*3*/] = { -3233.2627f, 953.5733f, 12.2187f };
	Local_619[1 /*3*/] = { -3078.3464f, 675.666f, 12.9159f };
	Local_619[2 /*3*/] = { -2647.8303f, 1504.821f, 117.968f };
	Local_619[3 /*3*/] = { -2564.214f, 2318.03f, 32.2153f };
	Local_632[0 /*3*/] = { -1314.0194f, 2483.44f, 22.774f };
	Local_632[1 /*3*/] = { -409.0888f, 1172.8971f, 324.6412f };
	Local_632[2 /*3*/] = { -1506.1864f, 1473.5696f, 116.8286f };
	Local_632[3 /*3*/] = { -518.6162f, 1995.3928f, 205.0397f };
	Local_632[4 /*3*/] = { -742.0004f, 2320.376f, 70.661f };
	Local_632[5 /*3*/] = { -1851.372f, -602.5151f, 10.4741f };
	Local_632[6 /*3*/] = { -1666.4133f, -538.9609f, 34.2561f };
	Local_654[0 /*3*/] = { -139.8096f, 1872.3776f, 197.166f };
	Local_654[1 /*3*/] = { 695.1385f, 2297.1184f, 49.9406f };
	Local_654[2 /*3*/] = { 167.7863f, 782.6042f, 208.0805f };
	Local_664[0 /*3*/] = { 1498.5458f, 774.8596f, 76.4493f };
	Local_664[1 /*3*/] = { 1309.908f, 1090.1334f, 104.561f };
	Local_664[2 /*3*/] = { 1510.7048f, 1712.5287f, 109.2625f };
	Local_664[3 /*3*/] = { 1070.3932f, 2038.0148f, 52.5529f };
	Local_677[0 /*3*/] = { 2509.3093f, 1601.6224f, 30.0754f };
	Local_677[1 /*3*/] = { 2546.5505f, 1971.3053f, 19.0362f };
	Local_684[0 /*3*/] = { -2339.021f, 3424.6162f, 28.7394f };
	Local_684[1 /*3*/] = { -2494.4658f, 3644.7483f, 12.9216f };
	Local_684[2 /*3*/] = { -2223.4434f, 4335.2515f, 48.4857f };
	Local_684[3 /*3*/] = { -2369.6516f, 4033.3623f, 27.9193f };
	Local_697[0 /*3*/] = { -1578.525f, 3005.025f, 32.3629f };
	Local_697[1 /*3*/] = { -1441.7157f, 4224.607f, 49.0816f };
	Local_697[2 /*3*/] = { -637.3727f, 4014.45f, 124.2407f };
	Local_697[3 /*3*/] = { -1092.5985f, 2696.0288f, 18.9957f };
	Local_697[4 /*3*/] = { -482.845f, 2853.0522f, 32.7909f };
	Local_697[5 /*3*/] = { -1280.5435f, 2543.4397f, 17.3096f };
	Local_697[6 /*3*/] = { -435.94427f, 3039.766f, 27.85744f };
	Local_719[0 /*3*/] = { 322.4791f, 2624.6846f, 43.4903f };
	Local_719[1 /*3*/] = { -118.0555f, 2831.1055f, 49.9236f };
	Local_719[2 /*3*/] = { 8.32642f, 3036.625f, 39.93201f };
	Local_719[3 /*3*/] = { 486.82f, 3094.7231f, 39.68279f };
	Local_719[4 /*3*/] = { 355.66324f, 3465.564f, 34.46225f };
	Local_719[5 /*3*/] = { 73.93981f, 3597.8992f, 38.72102f };
	Local_719[6 /*3*/] = { -223.5336f, 3914.4094f, 36.4796f };
	Local_741[0 /*3*/] = { 914.0446f, 3641.2002f, 31.4356f };
	Local_741[1 /*3*/] = { 1713.807f, 3786.2986f, 33.6656f };
	Local_741[2 /*3*/] = { 1798.2664f, 3773.4963f, 32.6142f };
	Local_741[3 /*3*/] = { 2008.2037f, 3771.9539f, 31.1457f };
	Local_741[4 /*3*/] = { 1860.1516f, 3675.656f, 32.669f };
	Local_741[5 /*3*/] = { 1974.862f, 3855.3694f, 31.162f };
	Local_741[6 /*3*/] = { 1841.707f, 3799.654f, 32.219f };
	Local_741[7 /*3*/] = { 1775.6593f, 3335.4927f, 40.2247f };
	Local_766[0 /*3*/] = { 2506.6829f, 4104.0376f, 37.3903f };
	Local_766[1 /*3*/] = { 2902.4426f, 4428.438f, 47.2892f };
	Local_766[2 /*3*/] = { 2338.3906f, 3146.7617f, 47.1288f };
	Local_766[3 /*3*/] = { 2756.3962f, 3396.395f, 55.5796f };
	Local_766[4 /*3*/] = { 2560.3132f, 2619.5896f, 36.7532f };
	Local_782[0 /*3*/] = { -1499.3542f, 4980.8174f, 61.8513f };
	Local_782[1 /*3*/] = { -686.7758f, 5841.2407f, 15.7987f };
	Local_782[2 /*3*/] = { -547.5048f, 5405.4707f, 64.2441f };
	Local_782[3 /*3*/] = { -411.6347f, 6050.651f, 30.4916f };
	Local_782[4 /*3*/] = { -860.8704f, 5421.5054f, 33.9464f };
	Local_798[0 /*3*/] = { 331.2503f, 6586.893f, 27.8962f };
	Local_798[1 /*3*/] = { -37.7542f, 6319.7397f, 30.3761f };
	Local_798[2 /*3*/] = { -115.5213f, 6456.377f, 30.4546f };
	Local_798[3 /*3*/] = { -145.1629f, 6442.3926f, 30.4404f };
	Local_798[4 /*3*/] = { -46.1561f, 6475.15f, 30.4923f };
	Local_798[5 /*3*/] = { 533.2067f, 6537.78f, 26.6048f };
	Local_817[0 /*3*/] = { 1592.8146f, 6427.924f, 24.2329f };
	Local_817[1 /*3*/] = { 1664.3406f, 4845.467f, 41.0121f };
	Local_817[2 /*3*/] = { 1705.2246f, 4713.1606f, 41.4366f };
	Local_817[3 /*3*/] = { 1731.8092f, 6387.0054f, 33.5953f };
	Local_817[4 /*3*/] = { 1082.4832f, 6503.5376f, 20.0265f };
	Local_817[5 /*3*/] = { 1996.3209f, 5148.716f, 44.2356f };
	Local_836[0 /*3*/] = { 2172.5203f, 4759.795f, 40.0044f };
	Local_836[1 /*3*/] = { 2451.0212f, 4953.2886f, 43.9633f };
	Local_836[2 /*3*/] = { 2245.1553f, 5562.862f, 51.4367f };
	Local_836[3 /*3*/] = { 2456.1868f, 4596.7407f, 35.8278f };
	Local_836[4 /*3*/] = { 3336.8147f, 5464.448f, 18.5259f };
	Local_836[5 /*3*/] = { 3491.209f, 4707.0747f, 50.1144f };
}

void func_421()//Position - 0x13AB6
{
	iLocal_1562 = func_436();
	Local_857.f_145 = func_435(iLocal_1562);
	func_434(1);
	func_201();
	func_433(&(Local_857.f_244));
	func_432(&Local_857);
	Local_857.f_411 = 9;
	if (!func_251(Global_113810.f_19100, 4))
	{
		func_247(&(Global_113810.f_19100), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_12(), true);
	}
	func_427(&Local_857);
	func_426(9);
	func_424(&Local_857);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
	Local_857.f_428 = func_423();
	func_422(&Local_857, 3, 6);
	Local_857.f_6 = 1.45f;
}

void func_422(var uParam0, int iParam1, int iParam2)//Position - 0x13B5F
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

int func_423()//Position - 0x13B73
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_95(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("SP2_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("SP1_DIST_DRIVING_CAR");
	}
	else
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	return iVar0;
}

void func_424(var uParam0)//Position - 0x13BBE
{
	switch (func_53(uParam0))
	{
		case 0:
			func_425(uParam0, "EXC", "Txm2" /* GXT: Taxi - I Need Excitement! */, "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_425(uParam0, "TIE", "Txm1" /* GXT: Taxi - Take It Easy */, "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_425(uParam0, "DED", "Txm3" /* GXT: Taxi - Deadline */, "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_425(uParam0, "GYB", "Txm12" /* GXT: Taxi - Got Your Back */, "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_425(uParam0, "TTB", "Txm6" /* GXT: Taxi - Take Me to the Best... */, "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_425(uParam0, "CUI", "Txm8" /* GXT: Taxi - I'll Cut You In */, "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_425(uParam0, "GYN", "Txm9" /* GXT: Taxi - Got You Now */, "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_425(uParam0, "TCC", "Txm10" /* GXT: Taxi - Clown Car */, "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_425(uParam0, "TFC", "Txm4" /* GXT: Taxi - Follow That Car! */, "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_425(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_425(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x13D11
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_426(int iParam0)//Position - 0x13D2B
{
	Global_113810.f_19100.f_39[iParam0]++;
}

void func_427(var uParam0)//Position - 0x13D4F
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_431(uParam0, 3);
			func_430(uParam0, 14);
			break;
		
		case 1:
			func_431(uParam0, 14);
			func_430(uParam0, 8);
			break;
		
		case 2:
			func_431(uParam0, 8);
			func_430(uParam0, 7);
			break;
		
		case 3:
			func_431(uParam0, 15);
			func_430(uParam0, 6);
			break;
		
		case 4:
			func_431(uParam0, 0);
			func_430(uParam0, 3);
			break;
		
		case 5:
			func_431(uParam0, 6);
			func_430(uParam0, 7);
			break;
		
		case 6:
			func_431(uParam0, 8);
			func_430(uParam0, 15);
			break;
		
		case 7:
			func_431(uParam0, 8);
			func_430(uParam0, 14);
			break;
		
		case 8:
			func_431(uParam0, 7);
			func_430(uParam0, 15);
			break;
		
		case 9:
			func_431(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_429((uParam0->f_418.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_430(uParam0, iVar0);
			func_428(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_428(var uParam0)//Position - 0x13E86
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_429(int iParam0, int iParam1, int iParam2)//Position - 0x13F47
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_430(var uParam0, int iParam1)//Position - 0x13FE9
{
	uParam0->f_418.f_1 = iParam1;
}

void func_431(var uParam0, int iParam1)//Position - 0x13FFA
{
	uParam0->f_418.f_2 = iParam1;
}

void func_432(var uParam0)//Position - 0x1400C
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_144() };
	uParam0->f_17 = { func_144() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_172(uParam0, 32, 0);
}

void func_433(var uParam0)//Position - 0x1406A
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_95(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_254(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_254(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_254(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_254(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_254(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_434(bool bParam0)//Position - 0x140F8
{
	if (bParam0)
	{
		StringCopy(&Global_112866, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_112860 = 1;
	}
	else
	{
		StringCopy(&Global_112866, "NULL", 24);
		Global_112860 = 0;
	}
}

char* func_435(int iParam0)//Position - 0x14124
{
	switch (iParam0)
	{
		case joaat("A_F_Y_Vinewood_04"):
			return "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
		
		case joaat("A_M_M_SouCent_04"):
			return "A_M_M_SOUCENT_04_BLACK_MINI_01";
		
		case joaat("A_M_Y_Salton_01"):
			return "A_M_Y_SALTON_01_WHITE_MINI_02";
		
		case joaat("A_M_Y_SouCent_04"):
			return "A_M_Y_SOUCENT_04_BLACK_MINI_01";
		
		case joaat("A_M_Y_Vinewood_01"):
			return "A_M_Y_VINEWOOD_01_BLACK_MINI_01";
		
		default:
	}
	return "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
}

int func_436()//Position - 0x14178
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
	{
		case 0:
			return joaat("A_F_Y_Vinewood_04");
		
		case 1:
			return joaat("A_M_M_SouCent_04");
		
		case 2:
			return joaat("A_M_Y_Salton_01");
		
		case 3:
			return joaat("A_M_Y_SouCent_04");
		
		case 4:
			return joaat("A_M_Y_Vinewood_01");
		
		default:
	}
	return joaat("A_F_Y_Vinewood_04");
}

void func_437()//Position - 0x141D6
{
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_8(9);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

