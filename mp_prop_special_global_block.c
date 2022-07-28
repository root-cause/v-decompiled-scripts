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
	Global_4196255 = 1;
	Global_4196256 = 1;
	Global_4282954 = -1;
	Global_4282955 = -1;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_16();
	iVar0 = 0;
	while (iVar0 < 42)
	{
		func_1(&(Global_4196263[iVar0 /*2012*/]), iVar0);
		iVar0++;
	}
}

int func_1(var uParam0, int iParam1)//Position - 0x6A
{
	func_12(uParam0, iParam1);
	func_8(uParam0, iParam1);
	uParam0->f_31 = 86;
	uParam0->f_38[0 /*27*/].f_26 = 1;
	uParam0->f_34 = 2;
	func_2(uParam0, iParam1);
	return 1;
}

void func_2(var uParam0, int iParam1)//Position - 0xA0
{
	struct<3> Var0;
	
	func_3(iParam1, 354, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_99 = { Var0 };
	func_3(iParam1, 46, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/] = { Var0 };
	uParam0->f_146.f_82[1 /*102*/].f_3 = Var0.f_3.f_2;
	func_3(iParam1, 48, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[1 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 49, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[1 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 47, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[1 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 50, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_16 = { Var0 };
	func_3(iParam1, 51, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 354, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_99 = { Var0 };
	func_3(iParam1, 355, &Var0, 0);
	uParam0->f_146.f_82[10 /*102*/].f_99 = { Var0 };
	func_3(iParam1, 342, &Var0, 0);
	uParam0->f_146.f_82[10 /*102*/] = { Var0 };
	uParam0->f_146.f_82[10 /*102*/].f_3 = Var0.f_3.f_2;
	func_3(iParam1, 344, &Var0, 0);
	uParam0->f_146.f_82[10 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[10 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 345, &Var0, 0);
	uParam0->f_146.f_82[10 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[10 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 343, &Var0, 0);
	uParam0->f_146.f_82[10 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[10 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 346, &Var0, 0);
	uParam0->f_146.f_82[10 /*102*/].f_16 = { Var0 };
	func_3(iParam1, 347, &Var0, 0);
	uParam0->f_146.f_82[10 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 356, &Var0, 0);
	uParam0->f_146.f_82[11 /*102*/].f_99 = { Var0 };
	func_3(iParam1, 348, &Var0, 0);
	uParam0->f_146.f_82[11 /*102*/] = { Var0 };
	uParam0->f_146.f_82[11 /*102*/].f_3 = Var0.f_3.f_2;
	func_3(iParam1, 350, &Var0, 0);
	uParam0->f_146.f_82[11 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[11 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 351, &Var0, 0);
	uParam0->f_146.f_82[11 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[11 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 349, &Var0, 0);
	uParam0->f_146.f_82[11 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[11 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 352, &Var0, 0);
	uParam0->f_146.f_82[11 /*102*/].f_16 = { Var0 };
	func_3(iParam1, 353, &Var0, 0);
	uParam0->f_146.f_82[11 /*102*/].f_19 = { Var0 };
}

void func_3(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x40E
{
	struct<6> Var0[2];
	struct<3> Var1;
	
	if (!bParam3)
	{
		Var0[0 /*6*/] = { func_7(-1) };
	}
	else
	{
		Var0[0 /*6*/] = { Global_4280768[iParam0 /*45*/].f_4 };
		Var0[0 /*6*/].f_3 = { 0f, 0f, Global_4280768[iParam0 /*45*/].f_7 };
	}
	if (!bParam3)
	{
		Var0[1 /*6*/] = { func_7(iParam0) };
	}
	else
	{
		Var0[1 /*6*/] = { Global_4280768[iParam0 /*45*/].f_4 };
		Var0[1 /*6*/].f_3 = { 0f, 0f, Global_4280768[iParam0 /*45*/].f_7 };
	}
	*uParam2 = { func_5(iParam1, 86) };
	Var1 = { *uParam2 - Var0[0 /*6*/] };
	Var1 = { func_4(Var1, -Var0[0 /*6*/].f_3.f_2) };
	Var1 = { func_4(Var1, Var0[1 /*6*/].f_3.f_2) };
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

Vector3 func_4(struct<3> Param0, float fParam1)//Position - 0xD8B
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

struct<6> func_5(int iParam0, int iParam1)//Position - 0xDCF
{
	struct<6> Var0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_6(iParam1, &bVar1))
	{
		iVar2 = 1;
	}
	if (iVar2 && MISC::_GET_BASE_ELEMENT_METADATA(&Var0, &(Var0.f_3), iParam0, bVar1))
	{
		return Var0;
	}
	return Var0;
}

int func_6(int iParam0, var uParam1)//Position - 0xE11
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

struct<6> func_7(int iParam0)//Position - 0xF2C
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

void func_8(var uParam0, int iParam1)//Position - 0x1622
{
	struct<3> Var0;
	
	func_3(iParam1, 6, &Var0, 0);
	uParam0->f_38[0 /*27*/].f_8 = { Var0 };
	uParam0->f_38[0 /*27*/].f_11 = Var0.f_3.f_2;
	func_3(iParam1, 1, &Var0, 0);
	uParam0->f_146[0 /*12*/] = { Var0 };
	func_3(iParam1, 2, &Var0, 0);
	uParam0->f_146[0 /*12*/].f_3 = { Var0 };
	uParam0->f_146[0 /*12*/].f_7 = Var0.f_3.f_2;
	uParam0->f_146[0 /*12*/].f_6 = 1.5f;
	func_3(iParam1, 7, &Var0, 0);
	uParam0->f_146.f_37 = { Var0 };
	func_3(iParam1, 8, &Var0, 0);
	uParam0->f_146.f_40 = { Var0 };
	uParam0->f_146.f_43 = { Var0.f_3 };
	uParam0->f_146.f_46 = 62.8385f;
	func_3(iParam1, 3, &Var0, 0);
	uParam0->f_146.f_47 = { Var0 };
	func_3(iParam1, 4, &Var0, 0);
	uParam0->f_146.f_57[0 /*8*/] = { Var0 };
	func_3(iParam1, 5, &Var0, 0);
	uParam0->f_146.f_57[0 /*8*/].f_3 = { Var0 };
	uParam0->f_146.f_57[0 /*8*/].f_6 = 11f;
	func_3(iParam1, 276, &Var0, 0);
	uParam0->f_146.f_57[1 /*8*/] = { Var0 };
	func_3(iParam1, 277, &Var0, 0);
	uParam0->f_146.f_57[1 /*8*/].f_3 = { Var0 };
	uParam0->f_146.f_57[1 /*8*/].f_6 = 15f;
	func_3(iParam1, 483, &Var0, 0);
	uParam0->f_146.f_57[2 /*8*/] = { Var0 };
	func_3(iParam1, 484, &Var0, 0);
	uParam0->f_146.f_57[2 /*8*/].f_3 = { Var0 };
	uParam0->f_146.f_57[2 /*8*/].f_6 = 11f;
	func_3(iParam1, 341, &Var0, 0);
	uParam0->f_146.f_1595 = Var0.f_3.f_2;
	uParam0->f_146.f_1592 = { Var0 };
	func_3(iParam1, 15, &Var0, 0);
	uParam0->f_146.f_50 = { Var0 };
	func_9(86, &(uParam0->f_146.f_53), &(uParam0->f_146.f_56), iParam1);
	func_3(iParam1, 46, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/] = { Var0 };
	uParam0->f_146.f_82[1 /*102*/].f_3 = Var0.f_3.f_2;
	func_3(iParam1, 48, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[1 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 49, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[1 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 47, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[1 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 50, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_16 = { Var0 };
	func_3(iParam1, 51, &Var0, 0);
	uParam0->f_146.f_82[1 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 41, &Var0, 0);
	uParam0->f_146.f_82[0 /*102*/] = { Var0 };
	uParam0->f_146.f_82[0 /*102*/].f_3 = Var0.f_3.f_2;
	uParam0->f_146.f_82[0 /*102*/].f_85 = 1;
	func_3(iParam1, 42, &Var0, 0);
	uParam0->f_146.f_82[0 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[0 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 43, &Var0, 0);
	uParam0->f_146.f_82[0 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[0 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 44, &Var0, 0);
	uParam0->f_146.f_82[0 /*102*/].f_29 = { Var0 };
	uParam0->f_146.f_82[0 /*102*/].f_32 = { Var0.f_3 };
	func_3(iParam1, 45, &Var0, 0);
	uParam0->f_146.f_82[0 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[0 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 126, &Var0, 0);
	uParam0->f_146.f_82[0 /*102*/].f_16 = { Var0 };
	func_3(iParam1, 127, &Var0, 0);
	uParam0->f_146.f_82[0 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 56, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/] = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_3 = Var0.f_3.f_2;
	uParam0->f_146.f_82[4 /*102*/].f_4 = { 1f, 1f, 1f };
	func_3(iParam1, 57, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 58, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 59, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_35 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_38 = { Var0.f_3 };
	func_3(iParam1, 60, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_41 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_44 = { Var0.f_3 };
	func_3(iParam1, 61, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_47 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_50 = { Var0.f_3 };
	func_3(iParam1, 62, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_53 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_56 = { Var0.f_3 };
	func_3(iParam1, 63, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 64, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_65 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_68 = { Var0.f_3 };
	func_3(iParam1, 65, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_71 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_74 = { Var0.f_3 };
	func_3(iParam1, 66, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_16 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_86 = Var0.f_3.f_2;
	func_3(iParam1, 67, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 110, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_77 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_80 = Var0.f_3.f_2;
	func_3(iParam1, 68, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_93 = { Var0 };
	func_3(iParam1, 109, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_87 = { Var0 };
	uParam0->f_146.f_82[4 /*102*/].f_90 = { Var0.f_3 };
	func_3(iParam1, 385, &Var0, 0);
	uParam0->f_146.f_82[4 /*102*/].f_96 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_4 = { 1f, 1f, 1f };
	func_3(iParam1, 364, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 365, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_35 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_38 = { Var0.f_3 };
	func_3(iParam1, 366, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_41 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_44 = { Var0.f_3 };
	func_3(iParam1, 367, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_47 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_50 = { Var0.f_3 };
	func_3(iParam1, 368, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 362, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_65 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_68 = { Var0.f_3 };
	func_3(iParam1, 363, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_71 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_74 = { Var0.f_3 };
	func_3(iParam1, 360, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_16 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_86 = Var0.f_3.f_2;
	func_3(iParam1, 361, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 369, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_77 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_80 = Var0.f_3.f_2;
	func_3(iParam1, 383, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_93 = { Var0 };
	func_3(iParam1, 386, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_96 = { Var0 };
	func_3(iParam1, 109, &Var0, 0);
	uParam0->f_146.f_82[12 /*102*/].f_87 = { Var0 };
	uParam0->f_146.f_82[12 /*102*/].f_90 = { Var0.f_3 };
	uParam0->f_146.f_82[13 /*102*/].f_4 = { 1f, 1f, 1f };
	func_3(iParam1, 374, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[13 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 375, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_35 = { Var0 };
	uParam0->f_146.f_82[13 /*102*/].f_38 = { Var0.f_3 };
	func_3(iParam1, 376, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_41 = { Var0 };
	uParam0->f_146.f_82[13 /*102*/].f_44 = { Var0.f_3 };
	func_3(iParam1, 377, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_47 = { Var0 };
	uParam0->f_146.f_82[13 /*102*/].f_50 = { Var0.f_3 };
	func_3(iParam1, 378, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[13 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 372, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_65 = { Var0 };
	uParam0->f_146.f_82[13 /*102*/].f_68 = { Var0.f_3 };
	func_3(iParam1, 373, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_71 = { Var0 };
	uParam0->f_146.f_82[13 /*102*/].f_74 = { Var0.f_3 };
	func_3(iParam1, 370, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_16 = { Var0 };
	uParam0->f_146.f_82[13 /*102*/].f_86 = Var0.f_3.f_2;
	func_3(iParam1, 371, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 379, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_77 = { Var0 };
	uParam0->f_146.f_82[13 /*102*/].f_80 = Var0.f_3.f_2;
	func_3(iParam1, 384, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_93 = { Var0 };
	func_3(iParam1, 387, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_96 = { Var0 };
	func_3(iParam1, 109, &Var0, 0);
	uParam0->f_146.f_82[13 /*102*/].f_87 = { Var0 };
	uParam0->f_146.f_82[13 /*102*/].f_90 = { Var0.f_3 };
	func_3(iParam1, 69, &Var0, 0);
	uParam0->f_146.f_82[5 /*102*/] = { Var0 };
	uParam0->f_146.f_82[5 /*102*/].f_3 = Var0.f_3.f_2;
	func_3(iParam1, 70, &Var0, 0);
	uParam0->f_146.f_82[5 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[5 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 71, &Var0, 0);
	uParam0->f_146.f_82[5 /*102*/].f_65 = { Var0 };
	func_3(iParam1, 72, &Var0, 0);
	uParam0->f_146.f_82[5 /*102*/].f_71 = { Var0 };
	func_3(iParam1, 73, &Var0, 0);
	uParam0->f_146.f_82[5 /*102*/].f_87 = { Var0 };
	func_3(iParam1, 74, &Var0, 0);
	uParam0->f_146.f_82[5 /*102*/].f_16 = { Var0 };
	uParam0->f_146.f_82[5 /*102*/].f_19 = { Var0.f_3 };
	func_3(iParam1, 75, &Var0, 0);
	uParam0->f_146.f_82[5 /*102*/].f_35 = { Var0 };
	uParam0->f_146.f_82[5 /*102*/].f_38 = { Var0.f_3 };
	func_3(iParam1, 76, &Var0, 0);
	uParam0->f_146.f_82[5 /*102*/].f_41 = { Var0 };
	uParam0->f_146.f_82[5 /*102*/].f_44 = { Var0.f_3 };
	func_3(iParam1, 77, &Var0, 0);
	uParam0->f_146.f_82[6 /*102*/] = { Var0 };
	uParam0->f_146.f_82[6 /*102*/].f_3 = Var0.f_3.f_2;
	func_3(iParam1, 79, &Var0, 0);
	uParam0->f_146.f_82[6 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[6 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 80, &Var0, 0);
	uParam0->f_146.f_82[6 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[6 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 78, &Var0, 0);
	uParam0->f_146.f_82[6 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[6 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 81, &Var0, 0);
	uParam0->f_146.f_82[6 /*102*/].f_16 = { Var0 };
	func_3(iParam1, 82, &Var0, 0);
	uParam0->f_146.f_82[6 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 128, &Var0, 0);
	uParam0->f_146.f_82[9 /*102*/] = { Var0 };
	uParam0->f_146.f_82[9 /*102*/].f_3 = Var0.f_3.f_2;
	func_3(iParam1, 298, &Var0, 0);
	uParam0->f_146.f_82[9 /*102*/].f_81 = { Var0 };
	func_3(iParam1, 298, &Var0, 0);
	uParam0->f_146.f_82[6 /*102*/].f_81 = { Var0 };
	func_3(iParam1, 299, &Var0, 0);
	uParam0->f_146.f_82[7 /*102*/].f_81 = { Var0 };
	func_3(iParam1, 131, &Var0, 0);
	uParam0->f_146.f_82[9 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[9 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 132, &Var0, 0);
	uParam0->f_146.f_82[9 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[9 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 130, &Var0, 0);
	uParam0->f_146.f_82[9 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[9 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 133, &Var0, 0);
	uParam0->f_146.f_82[9 /*102*/].f_16 = { Var0 };
	func_3(iParam1, 134, &Var0, 0);
	uParam0->f_146.f_82[9 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 89, &Var0, 0);
	uParam0->f_146.f_82[8 /*102*/] = { Var0 };
	uParam0->f_146.f_82[8 /*102*/].f_3 = Var0.f_3.f_2;
	func_3(iParam1, 91, &Var0, 0);
	uParam0->f_146.f_82[8 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[8 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 92, &Var0, 0);
	uParam0->f_146.f_82[8 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[8 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 90, &Var0, 0);
	uParam0->f_146.f_82[8 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[8 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 135, &Var0, 0);
	uParam0->f_146.f_82[8 /*102*/].f_16 = { Var0 };
	func_3(iParam1, 136, &Var0, 0);
	uParam0->f_146.f_82[8 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 83, &Var0, 0);
	uParam0->f_146.f_82[7 /*102*/] = { Var0 };
	uParam0->f_146.f_82[7 /*102*/].f_3 = Var0.f_3.f_2;
	func_3(iParam1, 85, &Var0, 0);
	uParam0->f_146.f_82[7 /*102*/].f_22 = { Var0 };
	uParam0->f_146.f_82[7 /*102*/].f_25 = { Var0.f_3 };
	func_3(iParam1, 88, &Var0, 0);
	uParam0->f_146.f_82[7 /*102*/].f_59 = { Var0 };
	uParam0->f_146.f_82[7 /*102*/].f_62 = { Var0.f_3 };
	func_3(iParam1, 84, &Var0, 0);
	uParam0->f_146.f_82[7 /*102*/].f_7 = { Var0 };
	uParam0->f_146.f_82[7 /*102*/].f_10 = { Var0.f_3 };
	func_3(iParam1, 86, &Var0, 0);
	uParam0->f_146.f_82[7 /*102*/].f_16 = { Var0 };
	func_3(iParam1, 87, &Var0, 0);
	uParam0->f_146.f_82[7 /*102*/].f_19 = { Var0 };
	func_3(iParam1, 94, &Var0, 0);
	uParam0->f_146.f_1517.f_8 = { Var0 };
	uParam0->f_146.f_1517.f_11 = { Var0.f_3 };
	func_3(iParam1, 95, &Var0, 0);
	uParam0->f_146.f_1517 = { Var0 };
	uParam0->f_146.f_1517.f_3 = Var0.f_3.f_2;
	if (iParam1 == 65)
	{
	}
	func_3(iParam1, 96, &Var0, 0);
	uParam0->f_146.f_1517.f_4 = { Var0 };
	uParam0->f_146.f_1517.f_7 = Var0.f_3.f_2;
	func_3(iParam1, 97, &Var0, 0);
	uParam0->f_146.f_1517.f_14 = { Var0 };
	uParam0->f_146.f_1517.f_17 = Var0.f_3.f_2;
	func_3(iParam1, 98, &Var0, 0);
	uParam0->f_146.f_1517.f_18 = { Var0 };
	uParam0->f_146.f_1517.f_21 = Var0.f_3.f_2;
	func_3(iParam1, 99, &Var0, 0);
	uParam0->f_146.f_1543.f_4 = { Var0 };
	uParam0->f_146.f_1543.f_7 = { Var0.f_3 };
	func_3(iParam1, 100, &Var0, 0);
	uParam0->f_146.f_1543 = { Var0 };
	uParam0->f_146.f_1543.f_3 = Var0.f_3.f_2;
	func_3(iParam1, 108, &Var0, 0);
	uParam0->f_146.f_1553 = { Var0 };
	uParam0->f_146.f_1556 = { Var0.f_3 };
	func_3(iParam1, 119, &Var0, 0);
	uParam0->f_146.f_1517.f_22 = { Var0 };
	uParam0->f_146.f_1517.f_25 = Var0.f_3.f_2;
	func_3(iParam1, 137, &Var0, 0);
	uParam0->f_146.f_1559 = { Var0 };
	func_3(iParam1, 142, &Var0, 0);
	uParam0->f_146.f_1562 = { Var0 };
	func_3(iParam1, 143, &Var0, 0);
	uParam0->f_146.f_1562.f_6 = { Var0 };
	func_3(iParam1, 146, &Var0, 0);
	uParam0->f_146.f_1562.f_18 = { Var0 };
	func_3(iParam1, 147, &Var0, 0);
	uParam0->f_146.f_1562.f_21 = { Var0 };
	func_3(iParam1, 158, &Var0, 0);
	uParam0->f_146.f_1562.f_15 = { Var0 };
	func_3(iParam1, 145, &Var0, 0);
	uParam0->f_146.f_1562.f_15 = { Var0 };
	func_3(iParam1, 144, &Var0, 0);
	uParam0->f_146.f_1562.f_12 = { Var0 };
	func_3(iParam1, 148, &Var0, 0);
	uParam0->f_146.f_1562.f_24 = { Var0 };
}

void func_9(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x2972
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
			func_10(iParam0, 40, &Var0, -1, 0);
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
			func_10(iParam0, 40, &Var0, 61, 0);
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
			func_10(iParam0, 40, &Var0, 73, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_10(iParam0, 40, &Var0, 77, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 83:
		case 84:
		case 85:
			func_10(iParam0, 40, &Var0, 83, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 86:
			func_3(iParam3, 40, &Var0, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_10(iParam0, 40, &Var0, 88, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			func_10(iParam0, 40, &Var0, 91, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			func_10(iParam0, 40, &Var0, 97, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
	}
}

void func_10(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x2E0D
{
	struct<6> Var0[2];
	struct<3> Var1;
	
	Var0[0 /*6*/] = { func_11(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_11(iParam0, bParam4) };
	*uParam2 = { func_5(iParam1, iParam3) };
	Var1 = { *uParam2 - Var0[0 /*6*/] };
	Var1 = { func_4(Var1, -Var0[0 /*6*/].f_3.f_2) };
	Var1 = { func_4(Var1, Var0[1 /*6*/].f_3.f_2) };
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

struct<6> func_11(int iParam0, bool bParam1)//Position - 0x447B
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

void func_12(var uParam0, int iParam1)//Position - 0x5031
{
	struct<4> Var0;
	
	Var0 = { func_7(iParam1) };
	uParam0->f_2009 = { Var0 };
	uParam0->f_38[0 /*27*/].f_26 = 1;
	func_3(iParam1, 388, &Var0, 0);
	uParam0->f_38[0 /*27*/] = { Var0 };
	func_3(iParam1, 389, &Var0, 0);
	uParam0->f_38[0 /*27*/].f_3 = { Var0 };
	uParam0->f_38[0 /*27*/].f_7 = Var0.f_3.f_2;
	uParam0->f_38[0 /*27*/].f_6 = 2f;
	func_3(iParam1, 390, &Var0, 0);
	uParam0->f_38[0 /*27*/].f_23 = { Var0 };
	func_3(iParam1, 390, &Var0, 0);
	uParam0->f_3[0 /*3*/] = { Var0 };
	func_3(iParam1, 416, &Var0, 0);
	uParam0->f_38[0 /*27*/].f_16 = { Var0 };
	uParam0->f_38[0 /*27*/].f_19 = { Var0.f_3 };
	uParam0->f_38[0 /*27*/].f_22 = 2;
	func_13(uParam0->f_38[0 /*27*/].f_16, uParam0->f_38[0 /*27*/].f_19, &Var0, uParam0->f_38[0 /*27*/].f_22);
	uParam0->f_38[0 /*27*/].f_12 = { Var0 };
	uParam0->f_38[0 /*27*/].f_15 = Var0.f_3.f_2;
	func_3(iParam1, 391, &Var0, 0);
	uParam0->f_1959 = { Var0 };
	uParam0->f_1959.f_3 = { Var0.f_3 };
	uParam0->f_1959.f_6 = 55;
	func_3(iParam1, 392, &Var0, 0);
	uParam0->f_1966 = { Var0 };
	uParam0->f_1966.f_3 = { Var0.f_3 };
	func_3(iParam1, 393, &Var0, 0);
	uParam0->f_1979 = { Var0 };
	uParam0->f_1979.f_3 = { Var0.f_3 };
	func_3(iParam1, 394, &Var0, 0);
	uParam0->f_1972 = { Var0 };
	uParam0->f_1972.f_3 = { Var0.f_3 };
	uParam0->f_1972.f_6 = 45;
	func_3(iParam1, 395, &Var0, 0);
	uParam0->f_1991 = { Var0 };
	uParam0->f_1991.f_3 = { Var0.f_3 };
	func_3(iParam1, 396, &Var0, 0);
	uParam0->f_1997 = { Var0 };
	uParam0->f_1997.f_3 = { Var0.f_3 };
	func_3(iParam1, 397, &Var0, 0);
	uParam0->f_146[0 /*12*/].f_8 = { Var0 };
	uParam0->f_146[0 /*12*/].f_11 = Var0.f_3.f_2;
	func_3(iParam1, 417, &Var0, 0);
	uParam0->f_24 = { Var0 };
	uParam0->f_24.f_3 = { Var0.f_3 };
	uParam0->f_24.f_6 = 84f;
	func_3(iParam1, 418, &Var0, 0);
	uParam0->f_1985 = { Var0 };
	uParam0->f_1985.f_3 = { Var0.f_3 };
	func_3(iParam1, 419, &Var0, 0);
	uParam0->f_2003 = { Var0 };
	uParam0->f_2003.f_3 = { Var0.f_3 };
	uParam0->f_36 = 1;
	func_3(iParam1, 561, &Var0, 0);
	uParam0->f_1922[0 /*9*/] = { Var0 };
	uParam0->f_1922[0 /*9*/].f_3 = { Var0.f_3 };
	uParam0->f_1922[0 /*9*/].f_6 = 48.9991f;
}

void func_13(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3)//Position - 0x532D
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
	func_14(Var0, Var1, Var2, uParam2);
}

void func_14(struct<4> Param0, var uParam1, var uParam2, struct<6> Param3, struct<4> Param4, var uParam5, var uParam6, var uParam7)//Position - 0x5563
{
	struct<3> Var0;
	
	*uParam7 = { Param3 };
	Var0 = { *uParam7 - Param0 };
	Var0 = { func_4(Var0, -Param0.f_3.f_2) };
	Var0 = { func_4(Var0, Param4.f_3.f_2) };
	*uParam7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param4, 0f, Var0) };
	if (!func_15(Param4.f_3, Param0.f_3, 0))
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

bool func_15(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x56BD
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_16()//Position - 0x5704
{
	int iVar0;
	struct<4> Var1;
	struct<16> Var2;
	
	iVar0 = 0;
	while (iVar0 < 42)
	{
		Var1 = { func_7(iVar0) };
		Global_4280768[iVar0 /*45*/] = { Var1 };
		Global_4280768[iVar0 /*45*/].f_3 = Var1.f_3.f_2;
		func_18(iVar0, &(Global_4280768[iVar0 /*45*/].f_8), &(Global_4280768[iVar0 /*45*/].f_11));
		iVar0++;
	}
	StringCopy(&(Global_4280768[0 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp01_1", 32);
	StringCopy(&(Global_4280768[1 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp01_2", 32);
	StringCopy(&(Global_4280768[2 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp01_3", 32);
	StringCopy(&(Global_4280768[3 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp02_1", 32);
	StringCopy(&(Global_4280768[4 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp02_2", 32);
	StringCopy(&(Global_4280768[5 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp02_3", 32);
	StringCopy(&(Global_4280768[6 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp03_1", 32);
	StringCopy(&(Global_4280768[7 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp03_2", 32);
	StringCopy(&(Global_4280768[8 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp03_3", 32);
	StringCopy(&(Global_4280768[9 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp04_1", 32);
	StringCopy(&(Global_4280768[10 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp04_2", 32);
	StringCopy(&(Global_4280768[11 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp04_3", 32);
	StringCopy(&(Global_4280768[12 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp05_1", 32);
	StringCopy(&(Global_4280768[13 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp05_2", 32);
	StringCopy(&(Global_4280768[14 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp05_3", 32);
	StringCopy(&(Global_4280768[15 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp06_1", 32);
	StringCopy(&(Global_4280768[16 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp06_2", 32);
	StringCopy(&(Global_4280768[17 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp06_3", 32);
	StringCopy(&(Global_4280768[18 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp07_1", 32);
	StringCopy(&(Global_4280768[19 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp07_2", 32);
	StringCopy(&(Global_4280768[20 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp07_3", 32);
	StringCopy(&(Global_4280768[21 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp08_1", 32);
	StringCopy(&(Global_4280768[22 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp08_2", 32);
	StringCopy(&(Global_4280768[23 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp08_3", 32);
	StringCopy(&(Global_4280768[24 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp09_1", 32);
	StringCopy(&(Global_4280768[25 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp09_2", 32);
	StringCopy(&(Global_4280768[26 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp09_3", 32);
	StringCopy(&(Global_4280768[27 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp10_1", 32);
	StringCopy(&(Global_4280768[28 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp10_2", 32);
	StringCopy(&(Global_4280768[29 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp10_3", 32);
	StringCopy(&(Global_4280768[30 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp11_1", 32);
	StringCopy(&(Global_4280768[31 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp11_2", 32);
	StringCopy(&(Global_4280768[32 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp11_3", 32);
	StringCopy(&(Global_4280768[33 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp12_1", 32);
	StringCopy(&(Global_4280768[34 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp12_2", 32);
	StringCopy(&(Global_4280768[35 /*45*/].f_15[0 /*8*/]), "apa_yacht_grp12_3", 32);
	StringCopy(&(Global_4280768[36 /*45*/].f_15[0 /*8*/]), "sum_lost_yacht", 32);
	StringCopy(&(Global_4280768[37 /*45*/].f_15[0 /*8*/]), "h4_islandx_yacht_01", 32);
	StringCopy(&(Global_4280768[38 /*45*/].f_15[0 /*8*/]), "h4_islandx_yacht_02", 32);
	StringCopy(&(Global_4280768[39 /*45*/].f_15[0 /*8*/]), "h4_islandx_yacht_03", 32);
	StringCopy(&(Global_4280768[40 /*45*/].f_15[0 /*8*/]), "sf_yacht_01", 32);
	StringCopy(&(Global_4280768[41 /*45*/].f_15[0 /*8*/]), "sf_yacht_02", 32);
	iVar0 = 0;
	while (iVar0 < 42)
	{
		MemCopy(&Var2, {Global_4280768[iVar0 /*45*/].f_15[0 /*8*/]}, 16);
		StringConCat(&Var2, "_int", 64);
		MemCopy(&(Global_4280768[iVar0 /*45*/].f_15[1 /*8*/]), {Var2}, 8);
		iVar0++;
	}
	Global_4280768[0 /*45*/].f_32[0 /*4*/] = { -3215.529f, 1337.033f, 1.2217f };
	Global_4280768[0 /*45*/].f_32[0 /*4*/].f_3 = 233.0511f;
	Global_4280768[0 /*45*/].f_32[1 /*4*/] = { -3101.011f, 1437.813f, 16.749f };
	Global_4280768[0 /*45*/].f_32[1 /*4*/].f_3 = 68.4861f;
	Global_4280768[0 /*45*/].f_32[2 /*4*/] = { -3262.416f, 1343.043f, 0f };
	Global_4280768[0 /*45*/].f_32[2 /*4*/].f_3 = 64.1521f;
	Global_4280768[1 /*45*/].f_32[0 /*4*/] = { -2907.311f, 3083.429f, 2.1057f };
	Global_4280768[1 /*45*/].f_32[0 /*4*/].f_3 = 315.0847f;
	Global_4280768[1 /*45*/].f_32[1 /*4*/] = { -2917.641f, 3057.153f, 2.3254f };
	Global_4280768[1 /*45*/].f_32[1 /*4*/].f_3 = 139.554f;
	Global_4280768[1 /*45*/].f_32[2 /*4*/] = { -2959.761f, 3069.291f, 0f };
	Global_4280768[1 /*45*/].f_32[2 /*4*/].f_3 = 140.7879f;
	Global_4280768[2 /*45*/].f_32[0 /*4*/] = { -2781.983f, 2347.446f, 1.4625f };
	Global_4280768[2 /*45*/].f_32[0 /*4*/].f_3 = 301.6382f;
	Global_4280768[2 /*45*/].f_32[1 /*4*/] = { -2817.162f, 2320.752f, 1.608f };
	Global_4280768[2 /*45*/].f_32[1 /*4*/].f_3 = 76.4715f;
	Global_4280768[2 /*45*/].f_32[2 /*4*/] = { -2846.729f, 2354.843f, 0f };
	Global_4280768[2 /*45*/].f_32[2 /*4*/].f_3 = 109.8094f;
	Global_4280768[3 /*45*/].f_32[0 /*4*/] = { -2498.844f, 3752.328f, 14.2509f };
	Global_4280768[3 /*45*/].f_32[0 /*4*/].f_3 = 217.676f;
	Global_4280768[3 /*45*/].f_32[1 /*4*/] = { -2502.912f, 3719.516f, 13.1249f };
	Global_4280768[3 /*45*/].f_32[1 /*4*/].f_3 = 55.3889f;
	Global_4280768[3 /*45*/].f_32[2 /*4*/] = { -2638.53f, 3864.123f, 0f };
	Global_4280768[3 /*45*/].f_32[2 /*4*/].f_3 = 59.3129f;
	Global_4280768[4 /*45*/].f_32[0 /*4*/] = { -3043.023f, 3440.002f, 2.8783f };
	Global_4280768[4 /*45*/].f_32[0 /*4*/].f_3 = 267.8972f;
	Global_4280768[4 /*45*/].f_32[1 /*4*/] = { -2972.322f, 3456.31f, 8.8206f };
	Global_4280768[4 /*45*/].f_32[1 /*4*/].f_3 = 40.0795f;
	Global_4280768[4 /*45*/].f_32[2 /*4*/] = { -3107.278f, 3475.423f, 0f };
	Global_4280768[4 /*45*/].f_32[2 /*4*/].f_3 = 33.9091f;
	Global_4280768[5 /*45*/].f_32[0 /*4*/] = { -2408.221f, 4243.086f, 9.0072f };
	Global_4280768[5 /*45*/].f_32[0 /*4*/].f_3 = 291.9838f;
	Global_4280768[5 /*45*/].f_32[1 /*4*/] = { -2418.341f, 4218.906f, 8.7096f };
	Global_4280768[5 /*45*/].f_32[1 /*4*/].f_3 = 345.1725f;
	Global_4280768[5 /*45*/].f_32[2 /*4*/] = { -2392.848f, 4424.469f, 0f };
	Global_4280768[5 /*45*/].f_32[2 /*4*/].f_3 = 24.173f;
	Global_4280768[6 /*45*/].f_32[0 /*4*/] = { -3093.101f, 192.3021f, 5.8948f };
	Global_4280768[6 /*45*/].f_32[0 /*4*/].f_3 = 282.932f;
	Global_4280768[6 /*45*/].f_32[1 /*4*/] = { -3078.07f, 154.1856f, 9.8672f };
	Global_4280768[6 /*45*/].f_32[1 /*4*/].f_3 = 122.1543f;
	Global_4280768[6 /*45*/].f_32[2 /*4*/] = { -3135.21f, 65.4845f, 0f };
	Global_4280768[6 /*45*/].f_32[2 /*4*/].f_3 = 109.4958f;
	Global_4280768[7 /*45*/].f_32[0 /*4*/] = { -3067.833f, 182.1174f, 10.48f };
	Global_4280768[7 /*45*/].f_32[0 /*4*/].f_3 = 316.2727f;
	Global_4280768[7 /*45*/].f_32[1 /*4*/] = { -3092.81f, 432.5182f, 1.3684f };
	Global_4280768[7 /*45*/].f_32[1 /*4*/].f_3 = 85.3024f;
	Global_4280768[7 /*45*/].f_32[2 /*4*/] = { -3211.319f, 290.425f, 0f };
	Global_4280768[7 /*45*/].f_32[2 /*4*/].f_3 = 92.1519f;
	Global_4280768[8 /*45*/].f_32[0 /*4*/] = { -2702.644f, -104.7734f, 4.2172f };
	Global_4280768[8 /*45*/].f_32[0 /*4*/].f_3 = 353.8816f;
	Global_4280768[8 /*45*/].f_32[1 /*4*/] = { -2823.573f, -29.9384f, 3.1771f };
	Global_4280768[8 /*45*/].f_32[1 /*4*/].f_3 = 178.7297f;
	Global_4280768[8 /*45*/].f_32[2 /*4*/] = { -2734.093f, -154.0857f, 0f };
	Global_4280768[8 /*45*/].f_32[2 /*4*/].f_3 = 141.6168f;
	Global_4280768[9 /*45*/].f_32[0 /*4*/] = { -1463.463f, -1393.569f, 1.5368f };
	Global_4280768[9 /*45*/].f_32[0 /*4*/].f_3 = 287.3892f;
	Global_4280768[9 /*45*/].f_32[1 /*4*/] = { -1424.592f, -1404.746f, 3.177f };
	Global_4280768[9 /*45*/].f_32[1 /*4*/].f_3 = 100.235f;
	Global_4280768[9 /*45*/].f_32[2 /*4*/] = { -1534.528f, -1438.445f, 0f };
	Global_4280768[9 /*45*/].f_32[2 /*4*/].f_3 = 121.4151f;
	Global_4280768[10 /*45*/].f_32[0 /*4*/] = { -1239.736f, -2066f, 13.2375f };
	Global_4280768[10 /*45*/].f_32[0 /*4*/].f_3 = 297.049f;
	Global_4280768[10 /*45*/].f_32[1 /*4*/] = { -1332.874f, -2123.406f, 13.1281f };
	Global_4280768[10 /*45*/].f_32[1 /*4*/].f_3 = 75.73f;
	Global_4280768[10 /*45*/].f_32[2 /*4*/] = { -1402.575f, -2094.522f, 0f };
	Global_4280768[10 /*45*/].f_32[2 /*4*/].f_3 = 70.1691f;
	Global_4280768[11 /*45*/].f_32[0 /*4*/] = { -1224.04f, -1777.919f, 2.2519f };
	Global_4280768[11 /*45*/].f_32[0 /*4*/].f_3 = 335.8759f;
	Global_4280768[11 /*45*/].f_32[1 /*4*/] = { -1217.13f, -1833.299f, 1.5737f };
	Global_4280768[11 /*45*/].f_32[1 /*4*/].f_3 = 123.5309f;
	Global_4280768[11 /*45*/].f_32[2 /*4*/] = { -1277.278f, -1875.247f, 0f };
	Global_4280768[11 /*45*/].f_32[2 /*4*/].f_3 = 118.8218f;
	Global_4280768[12 /*45*/].f_32[0 /*4*/] = { 108.4327f, -3325.779f, 5f };
	Global_4280768[12 /*45*/].f_32[0 /*4*/].f_3 = 0.552f;
	Global_4280768[12 /*45*/].f_32[1 /*4*/] = { 134.3913f, -2804.358f, 5.0002f };
	Global_4280768[12 /*45*/].f_32[1 /*4*/].f_3 = 223.52f;
	Global_4280768[12 /*45*/].f_32[2 /*4*/] = { 98.6531f, -3324.339f, 0f };
	Global_4280768[12 /*45*/].f_32[2 /*4*/].f_3 = 167.3062f;
	Global_4280768[13 /*45*/].f_32[0 /*4*/] = { 108.5783f, -3258.347f, 5f };
	Global_4280768[13 /*45*/].f_32[0 /*4*/].f_3 = 359.6605f;
	Global_4280768[13 /*45*/].f_32[1 /*4*/] = { 149.4426f, -2791.039f, 5.0002f };
	Global_4280768[13 /*45*/].f_32[1 /*4*/].f_3 = 218.7591f;
	Global_4280768[13 /*45*/].f_32[2 /*4*/] = { 94.8648f, -3249.486f, 0f };
	Global_4280768[13 /*45*/].f_32[2 /*4*/].f_3 = 164.5406f;
	Global_4280768[14 /*45*/].f_32[0 /*4*/] = { -406.993f, -2851.122f, 5.0004f };
	Global_4280768[14 /*45*/].f_32[0 /*4*/].f_3 = 315.8702f;
	Global_4280768[14 /*45*/].f_32[1 /*4*/] = { -380.5807f, -2820.387f, 5.0003f };
	Global_4280768[14 /*45*/].f_32[1 /*4*/].f_3 = 160.48f;
	Global_4280768[14 /*45*/].f_32[2 /*4*/] = { -456.5881f, -2906.157f, 0f };
	Global_4280768[14 /*45*/].f_32[2 /*4*/].f_3 = 162.6687f;
	Global_4280768[15 /*45*/].f_32[0 /*4*/] = { 1292.652f, -3088.689f, 4.9066f };
	Global_4280768[15 /*45*/].f_32[0 /*4*/].f_3 = 60.2816f;
	Global_4280768[15 /*45*/].f_32[1 /*4*/] = { 1288.942f, -3074.029f, 4.934f };
	Global_4280768[15 /*45*/].f_32[1 /*4*/].f_3 = 258.5226f;
	Global_4280768[15 /*45*/].f_32[2 /*4*/] = { 1308.678f, -3083.984f, 0f };
	Global_4280768[15 /*45*/].f_32[2 /*4*/].f_3 = 343.9506f;
	Global_4280768[16 /*45*/].f_32[0 /*4*/] = { 1206.367f, -2669.062f, 3.001f };
	Global_4280768[16 /*45*/].f_32[0 /*4*/].f_3 = 77.4622f;
	Global_4280768[16 /*45*/].f_32[1 /*4*/] = { 1377.173f, -2710.035f, 2.1007f };
	Global_4280768[16 /*45*/].f_32[1 /*4*/].f_3 = 178.4367f;
	Global_4280768[16 /*45*/].f_32[2 /*4*/] = { 1313.231f, -2800.326f, 0f };
	Global_4280768[16 /*45*/].f_32[2 /*4*/].f_3 = 250.5272f;
	Global_4280768[17 /*45*/].f_32[0 /*4*/] = { 1288.72f, -3343.127f, 4.9016f };
	Global_4280768[17 /*45*/].f_32[0 /*4*/].f_3 = 83.766f;
	Global_4280768[17 /*45*/].f_32[1 /*4*/] = { 1291.003f, -3327.35f, 4.9049f };
	Global_4280768[17 /*45*/].f_32[1 /*4*/].f_3 = 271.1578f;
	Global_4280768[17 /*45*/].f_32[2 /*4*/] = { 1301.827f, -3357.499f, 0f };
	Global_4280768[17 /*45*/].f_32[2 /*4*/].f_3 = 301.3926f;
	Global_4280768[18 /*45*/].f_32[0 /*4*/] = { 2797.366f, -698.9788f, 2.5743f };
	Global_4280768[18 /*45*/].f_32[0 /*4*/].f_3 = 119.8324f;
	Global_4280768[18 /*45*/].f_32[1 /*4*/] = { 2684.635f, -863.2911f, 24.9476f };
	Global_4280768[18 /*45*/].f_32[1 /*4*/].f_3 = 212.3963f;
	Global_4280768[18 /*45*/].f_32[2 /*4*/] = { 2871.985f, -733.9852f, 0f };
	Global_4280768[18 /*45*/].f_32[2 /*4*/].f_3 = 228.3137f;
	Global_4280768[19 /*45*/].f_32[0 /*4*/] = { 2799.071f, -713.1099f, 3.5076f };
	Global_4280768[19 /*45*/].f_32[0 /*4*/].f_3 = 92.0258f;
	Global_4280768[19 /*45*/].f_32[1 /*4*/] = { 2784.094f, -730.8027f, 5.7956f };
	Global_4280768[19 /*45*/].f_32[1 /*4*/].f_3 = 299.093f;
	Global_4280768[19 /*45*/].f_32[2 /*4*/] = { 2862.474f, -601.0669f, 0f };
	Global_4280768[19 /*45*/].f_32[2 /*4*/].f_3 = 267.4701f;
	Global_4280768[20 /*45*/].f_32[0 /*4*/] = { 2803.415f, -676.9994f, 1.6518f };
	Global_4280768[20 /*45*/].f_32[0 /*4*/].f_3 = 78.5588f;
	Global_4280768[20 /*45*/].f_32[1 /*4*/] = { 2696.749f, -828.5058f, 27.1032f };
	Global_4280768[20 /*45*/].f_32[1 /*4*/].f_3 = 193.2687f;
	Global_4280768[20 /*45*/].f_32[2 /*4*/] = { 2866.837f, -791.7337f, 0f };
	Global_4280768[20 /*45*/].f_32[2 /*4*/].f_3 = 232.5099f;
	Global_4280768[21 /*45*/].f_32[0 /*4*/] = { 2768.212f, 1263.657f, 2.8663f };
	Global_4280768[21 /*45*/].f_32[0 /*4*/].f_3 = 118.7555f;
	Global_4280768[21 /*45*/].f_32[1 /*4*/] = { 2566.175f, 1751.526f, 23.7902f };
	Global_4280768[21 /*45*/].f_32[1 /*4*/].f_3 = 273.4148f;
	Global_4280768[21 /*45*/].f_32[2 /*4*/] = { 2820.863f, 1272.885f, 0f };
	Global_4280768[21 /*45*/].f_32[2 /*4*/].f_3 = 275.3719f;
	Global_4280768[22 /*45*/].f_32[0 /*4*/] = { 2774.699f, 1207.855f, 0.7296f };
	Global_4280768[22 /*45*/].f_32[0 /*4*/].f_3 = 90.8381f;
	Global_4280768[22 /*45*/].f_32[1 /*4*/] = { 2567.04f, 931.361f, 82.2892f };
	Global_4280768[22 /*45*/].f_32[1 /*4*/].f_3 = 294.8305f;
	Global_4280768[22 /*45*/].f_32[2 /*4*/] = { 2813.253f, 1202.955f, 0f };
	Global_4280768[22 /*45*/].f_32[2 /*4*/].f_3 = 268.3473f;
	Global_4280768[23 /*45*/].f_32[0 /*4*/] = { 3866.215f, 4345.182f, 5.5636f };
	Global_4280768[23 /*45*/].f_32[0 /*4*/].f_3 = 24.0254f;
	Global_4280768[23 /*45*/].f_32[1 /*4*/] = { 2700.47f, 2979.347f, 35.5843f };
	Global_4280768[23 /*45*/].f_32[1 /*4*/].f_3 = 211.797f;
	Global_4280768[23 /*45*/].f_32[2 /*4*/] = { 3892.01f, 4291.369f, 0f };
	Global_4280768[23 /*45*/].f_32[2 /*4*/].f_3 = 228.3766f;
	Global_4280768[24 /*45*/].f_32[0 /*4*/] = { 3868.027f, 4327.946f, 5.1203f };
	Global_4280768[24 /*45*/].f_32[0 /*4*/].f_3 = 5.5954f;
	Global_4280768[24 /*45*/].f_32[1 /*4*/] = { 3928.766f, 4393.218f, 15.5509f };
	Global_4280768[24 /*45*/].f_32[1 /*4*/].f_3 = 292.8381f;
	Global_4280768[24 /*45*/].f_32[2 /*4*/] = { 3907.16f, 4311.723f, 0f };
	Global_4280768[24 /*45*/].f_32[2 /*4*/].f_3 = 256.1528f;
	Global_4280768[25 /*45*/].f_32[0 /*4*/] = { 3809.338f, 4456.854f, 3.1726f };
	Global_4280768[25 /*45*/].f_32[0 /*4*/].f_3 = 74.3336f;
	Global_4280768[25 /*45*/].f_32[1 /*4*/] = { 3788.623f, 4507.489f, 6.0836f };
	Global_4280768[25 /*45*/].f_32[1 /*4*/].f_3 = 328.0288f;
	Global_4280768[25 /*45*/].f_32[2 /*4*/] = { 3854.021f, 4504.268f, 0f };
	Global_4280768[25 /*45*/].f_32[2 /*4*/].f_3 = 285.2981f;
	Global_4280768[26 /*45*/].f_32[0 /*4*/] = { 3811.947f, 4469.669f, 2.9054f };
	Global_4280768[26 /*45*/].f_32[0 /*4*/].f_3 = 120.0346f;
	Global_4280768[26 /*45*/].f_32[1 /*4*/] = { 3847.531f, 4397.894f, 3.1748f };
	Global_4280768[26 /*45*/].f_32[1 /*4*/].f_3 = 338.2054f;
	Global_4280768[26 /*45*/].f_32[2 /*4*/] = { 3868.626f, 4442.403f, 0f };
	Global_4280768[26 /*45*/].f_32[2 /*4*/].f_3 = 281.4086f;
	Global_4280768[27 /*45*/].f_32[0 /*4*/] = { 3258.916f, 5217.696f, 18.945f };
	Global_4280768[27 /*45*/].f_32[0 /*4*/].f_3 = 181.2822f;
	Global_4280768[27 /*45*/].f_32[1 /*4*/] = { 3275.727f, 5199.218f, 17.9096f };
	Global_4280768[27 /*45*/].f_32[1 /*4*/].f_3 = 328.593f;
	Global_4280768[27 /*45*/].f_32[2 /*4*/] = { 3248.643f, 5322.504f, 0f };
	Global_4280768[27 /*45*/].f_32[2 /*4*/].f_3 = 274.5202f;
	Global_4280768[28 /*45*/].f_32[0 /*4*/] = { 3338.185f, 5573.443f, 20.3965f };
	Global_4280768[28 /*45*/].f_32[0 /*4*/].f_3 = 200.2075f;
	Global_4280768[28 /*45*/].f_32[1 /*4*/] = { 3368.654f, 5570.181f, 13.6552f };
	Global_4280768[28 /*45*/].f_32[1 /*4*/].f_3 = 359.9985f;
	Global_4280768[28 /*45*/].f_32[2 /*4*/] = { 3386.887f, 5696.864f, 0f };
	Global_4280768[28 /*45*/].f_32[2 /*4*/].f_3 = 285.1223f;
	Global_4280768[29 /*45*/].f_32[0 /*4*/] = { 3780.474f, 4477.698f, 5.2422f };
	Global_4280768[29 /*45*/].f_32[0 /*4*/].f_3 = 135.4026f;
	Global_4280768[29 /*45*/].f_32[1 /*4*/] = { 3392.134f, 4993.051f, 30.5221f };
	Global_4280768[29 /*45*/].f_32[1 /*4*/].f_3 = 300.8156f;
	Global_4280768[29 /*45*/].f_32[2 /*4*/] = { 3800.573f, 4576.032f, 0f };
	Global_4280768[29 /*45*/].f_32[2 /*4*/].f_3 = 328.0469f;
	Global_4280768[30 /*45*/].f_32[0 /*4*/] = { 265.2008f, 6992.325f, 2.9654f };
	Global_4280768[30 /*45*/].f_32[0 /*4*/].f_3 = 165.6404f;
	Global_4280768[30 /*45*/].f_32[1 /*4*/] = { 228.2158f, 6992.481f, 1.5349f };
	Global_4280768[30 /*45*/].f_32[1 /*4*/].f_3 = 338.5522f;
	Global_4280768[30 /*45*/].f_32[2 /*4*/] = { 309.4163f, 7025.832f, 0f };
	Global_4280768[30 /*45*/].f_32[2 /*4*/].f_3 = 298.1702f;
	Global_4280768[31 /*45*/].f_32[0 /*4*/] = { 1459.03f, 6570.599f, 12.3527f };
	Global_4280768[31 /*45*/].f_32[0 /*4*/].f_3 = 133.2433f;
	Global_4280768[31 /*45*/].f_32[1 /*4*/] = { 1618.721f, 6659.766f, 22.3415f };
	Global_4280768[31 /*45*/].f_32[1 /*4*/].f_3 = 342.8323f;
	Global_4280768[31 /*45*/].f_32[2 /*4*/] = { 1563.629f, 6684.272f, 0f };
	Global_4280768[31 /*45*/].f_32[2 /*4*/].f_3 = 357.4255f;
	Global_4280768[32 /*45*/].f_32[0 /*4*/] = { 1390.502f, 6592.286f, 11.5278f };
	Global_4280768[32 /*45*/].f_32[0 /*4*/].f_3 = 283.1772f;
	Global_4280768[32 /*45*/].f_32[1 /*4*/] = { 1142.376f, 6535.105f, 17.5983f };
	Global_4280768[32 /*45*/].f_32[1 /*4*/].f_3 = 342.9795f;
	Global_4280768[32 /*45*/].f_32[2 /*4*/] = { 1280.147f, 6660.721f, 0f };
	Global_4280768[32 /*45*/].f_32[2 /*4*/].f_3 = 344.6634f;
	Global_4280768[33 /*45*/].f_32[0 /*4*/] = { -817.0295f, 5881.543f, 6.2074f };
	Global_4280768[33 /*45*/].f_32[0 /*4*/].f_3 = 258.9158f;
	Global_4280768[33 /*45*/].f_32[1 /*4*/] = { -821.1178f, 5935.959f, 19.9904f };
	Global_4280768[33 /*45*/].f_32[1 /*4*/].f_3 = 129.2778f;
	Global_4280768[33 /*45*/].f_32[2 /*4*/] = { -915.4951f, 5851.08f, 0f };
	Global_4280768[33 /*45*/].f_32[2 /*4*/].f_3 = 79.7242f;
	Global_4280768[34 /*45*/].f_32[0 /*4*/] = { -635.697f, 6156.933f, 1.9706f };
	Global_4280768[34 /*45*/].f_32[0 /*4*/].f_3 = 272.4947f;
	Global_4280768[34 /*45*/].f_32[1 /*4*/] = { -560.5052f, 6254.325f, 7.6306f };
	Global_4280768[34 /*45*/].f_32[1 /*4*/].f_3 = 42.5652f;
	Global_4280768[34 /*45*/].f_32[2 /*4*/] = { -685.4041f, 6252.036f, 0f };
	Global_4280768[34 /*45*/].f_32[2 /*4*/].f_3 = 51.8815f;
	Global_4280768[35 /*45*/].f_32[0 /*4*/] = { -99.1651f, 6722.008f, 0.5012f };
	Global_4280768[35 /*45*/].f_32[0 /*4*/].f_3 = 268.104f;
	Global_4280768[35 /*45*/].f_32[1 /*4*/] = { -142.6568f, 6651.685f, 0.9997f };
	Global_4280768[35 /*45*/].f_32[1 /*4*/].f_3 = 32.9657f;
	Global_4280768[35 /*45*/].f_32[2 /*4*/] = { -185.4709f, 6733.273f, 0f };
	Global_4280768[35 /*45*/].f_32[2 /*4*/].f_3 = 14.6319f;
	Global_4282766[0 /*4*/] = { 5.8173f, -48.2285f, -5.5287f };
	Global_4282766[0 /*4*/].f_3 = 30.0067f;
	Global_4282766[1 /*4*/] = { -5.0147f, -46.5139f, -5.5286f };
	Global_4282766[1 /*4*/].f_3 = 198.2057f;
	Global_4282766[2 /*4*/] = { -0.3064f, -40.6402f, -2.431f };
	Global_4282766[2 /*4*/].f_3 = 190.904f;
	Global_4282766[3 /*4*/] = { 6.708f, -25.9916f, 0.4969f };
	Global_4282766[3 /*4*/].f_3 = 286.8118f;
	Global_4282766[4 /*4*/] = { -3.9829f, -25.182f, 0.497f };
	Global_4282766[4 /*4*/].f_3 = 187.8127f;
	Global_4282766[5 /*4*/] = { 1.187f, -14.8577f, 0.4968f };
	Global_4282766[5 /*4*/].f_3 = 223.2354f;
	Global_4282766[6 /*4*/] = { 1.9789f, -43.6601f, -5.5216f };
	Global_4282766[6 /*4*/].f_3 = 132.0817f;
	Global_4282766[7 /*4*/] = { -2.2018f, -43.2581f, -5.5209f };
	Global_4282766[7 /*4*/].f_3 = 210.6833f;
	Global_4282766[8 /*4*/] = { -3.5979f, -37.4337f, -2.4323f };
	Global_4282766[8 /*4*/].f_3 = 232.0388f;
	Global_4282766[9 /*4*/] = { 3.5456f, -36.9838f, -2.4323f };
	Global_4282766[9 /*4*/].f_3 = 141.3021f;
	Global_4282766[10 /*4*/] = { 2.0707f, -34.8316f, -2.4323f };
	Global_4282766[10 /*4*/].f_3 = 157.8206f;
	Global_4282766[11 /*4*/] = { -1.0928f, -33.9597f, -2.4323f };
	Global_4282766[11 /*4*/].f_3 = 175.8183f;
	Global_4282766[12 /*4*/] = { -5.842f, -28.0408f, 0.5039f };
	Global_4282766[12 /*4*/].f_3 = 215.1446f;
	Global_4282766[13 /*4*/] = { -1.4056f, -15.1676f, 0.5038f };
	Global_4282766[13 /*4*/].f_3 = 161.5367f;
	Global_4282766[14 /*4*/] = { -1.4056f, -15.1676f, 0.5038f };
	Global_4282766[14 /*4*/].f_3 = 161.5367f;
	Global_4282766[15 /*4*/] = { 5.7803f, -18.6142f, 0.5038f };
	Global_4282766[15 /*4*/].f_3 = 232.0092f;
	Global_4282766[16 /*4*/] = { 4.8851f, -27.8689f, 0.504f };
	Global_4282766[16 /*4*/].f_3 = 159.7201f;
	Global_4282766[17 /*4*/] = { 6.4316f, -51.9249f, -5.5218f };
	Global_4282766[17 /*4*/].f_3 = 171.7628f;
	Global_4282766[18 /*4*/] = { -6.4454f, -51.563f, -5.5221f };
	Global_4282766[18 /*4*/].f_3 = 170.0196f;
	Global_4282766[19 /*4*/] = { -6.0149f, -38.0291f, -5.5207f };
	Global_4282766[19 /*4*/].f_3 = 141.0158f;
	Global_4282766[20 /*4*/] = { 5.9235f, -38.2919f, -5.5218f };
	Global_4282766[20 /*4*/].f_3 = 251.4813f;
	Global_4282766[21 /*4*/] = { 6.8878f, -27.0348f, -5.5218f };
	Global_4282766[21 /*4*/].f_3 = 227.1692f;
	Global_4282766[22 /*4*/] = { 6.8878f, -27.0348f, -5.5218f };
	Global_4282766[22 /*4*/].f_3 = 227.1692f;
	Global_4282766[23 /*4*/] = { -6.4161f, -33.4939f, -5.5201f };
	Global_4282766[23 /*4*/].f_3 = 129.7836f;
	Global_4282766[24 /*4*/] = { -6.4161f, -33.4939f, -5.5201f };
	Global_4282766[24 /*4*/].f_3 = 129.7836f;
	Global_4282766[25 /*4*/] = { -6.8883f, -28.2909f, -5.5199f };
	Global_4282766[25 /*4*/].f_3 = 176.8486f;
	Global_4282766[26 /*4*/] = { -6.5118f, -25.1397f, -5.5203f };
	Global_4282766[26 /*4*/].f_3 = 113.7529f;
	Global_4282766[27 /*4*/] = { -6.2417f, -33.0709f, -0.6002f };
	Global_4282766[27 /*4*/].f_3 = 188.1441f;
	Global_4282766[28 /*4*/] = { 6.1422f, -32.388f, -0.2794f };
	Global_4282766[28 /*4*/].f_3 = 165.495f;
	Global_4282766[29 /*4*/] = { -0.7784f, -22.1027f, 0.5038f };
	Global_4282766[29 /*4*/].f_3 = 172.0094f;
	Global_4282887[0 /*4*/] = { -0.8319f, 12.3016f, -5.5208f };
	Global_4282887[0 /*4*/].f_3 = 270.5026f;
	Global_4282887[1 /*4*/] = { -4.673f, 24.2213f, -5.521f };
	Global_4282887[1 /*4*/].f_3 = 164.555f;
	Global_4282887[2 /*4*/] = { -2.4334f, 5.4224f, -2.4335f };
	Global_4282887[2 /*4*/].f_3 = 270.4796f;
	func_17();
	Global_4282900[0 /*3*/] = { 0f, 0f, 0f };
	Global_4282900[1 /*3*/] = { Global_4280768[3 /*45*/] + Global_4280768[4 /*45*/] + Global_4280768[5 /*45*/] };
	Global_4282900[2 /*3*/] = { Global_4280768[0 /*45*/] + Global_4280768[1 /*45*/] + Global_4280768[2 /*45*/] };
	Global_4282900[3 /*3*/] = { Global_4280768[6 /*45*/] + Global_4280768[7 /*45*/] + Global_4280768[8 /*45*/] };
	Global_4282900[4 /*3*/] = { Global_4280768[9 /*45*/] + Global_4280768[10 /*45*/] + Global_4280768[11 /*45*/] };
	Global_4282900[5 /*3*/] = { Global_4280768[12 /*45*/] + Global_4280768[13 /*45*/] + Global_4280768[14 /*45*/] };
	Global_4282900[6 /*3*/] = { Global_4280768[15 /*45*/] + Global_4280768[16 /*45*/] + Global_4280768[17 /*45*/] };
	Global_4282900[7 /*3*/] = { Global_4280768[18 /*45*/] + Global_4280768[19 /*45*/] + Global_4280768[20 /*45*/] };
	Global_4282900[8 /*3*/] = { Global_4280768[21 /*45*/] + Global_4280768[22 /*45*/] + Global_4280768[23 /*45*/] };
	Global_4282900[9 /*3*/] = { Global_4280768[24 /*45*/] + Global_4280768[25 /*45*/] + Global_4280768[26 /*45*/] };
	Global_4282900[10 /*3*/] = { Global_4280768[27 /*45*/] + Global_4280768[28 /*45*/] + Global_4280768[29 /*45*/] };
	Global_4282900[11 /*3*/] = { Global_4280768[30 /*45*/] + Global_4280768[31 /*45*/] + Global_4280768[32 /*45*/] };
	Global_4282900[12 /*3*/] = { Global_4280768[33 /*45*/] + Global_4280768[34 /*45*/] + Global_4280768[35 /*45*/] };
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Global_4282900[iVar0 /*3*/] = { Global_4282900[iVar0 /*3*/] * Vector(0.333333f, 0.333333f, 0.333333f) };
		iVar0++;
	}
	Global_4282940[0 /*3*/] = { 7.87f, -54.898f, -10.9966f };
	Global_4282940[1 /*3*/] = { 2.417f, -60.36f, -10.9442f };
	Global_4282940[2 /*3*/] = { -2.4168f, -60.36f, -10.9442f };
	Global_4282940[3 /*3*/] = { -7.87f, -54.898f, -10.9966f };
}

void func_17()//Position - 0x76A6
{
	Global_4282659[0 /*10*/] = { -0.2508f, -32.3f, 0.8727f };
	Global_4282659[0 /*10*/].f_3 = 0f;
	Global_4282659[0 /*10*/].f_5 = joaat("supervolito2");
	Global_4282659[0 /*10*/].f_4 = 3.5f;
	Global_4282659[0 /*10*/].f_7 = 300000;
	Global_4282659[0 /*10*/].f_8 = -1;
	Global_4282659[0 /*10*/].f_9 = 400f;
	Global_4282659[0 /*10*/].f_6 = 64;
	Global_4282659[1 /*10*/] = { 11.25f, -55.8404f, -11f };
	Global_4282659[1 /*10*/].f_3 = 340.8939f;
	Global_4282659[1 /*10*/].f_5 = joaat("dinghy4");
	Global_4282659[1 /*10*/].f_4 = 2.4f;
	Global_4282659[1 /*10*/].f_9 = 300f;
	Global_4282659[1 /*10*/].f_6 = 1;
	Global_4282659[2 /*10*/] = { 6.75f, -63f, -11f };
	Global_4282659[2 /*10*/].f_3 = 206.26f;
	Global_4282659[2 /*10*/].f_5 = joaat("seashark3");
	Global_4282659[2 /*10*/].f_4 = 1.4f;
	Global_4282659[2 /*10*/].f_9 = 200f;
	Global_4282659[2 /*10*/].f_6 = 1;
	Global_4282659[3 /*10*/] = { 4.5f, -63f, -11f };
	Global_4282659[3 /*10*/].f_3 = 206.26f;
	Global_4282659[3 /*10*/].f_5 = joaat("seashark3");
	Global_4282659[3 /*10*/].f_4 = 1.4f;
	Global_4282659[3 /*10*/].f_9 = 200f;
	Global_4282659[3 /*10*/].f_6 = 1;
	Global_4282659[4 /*10*/] = { -11.25f, -55.8404f, -11f };
	Global_4282659[4 /*10*/].f_3 = 20f;
	Global_4282659[4 /*10*/].f_5 = joaat("toro2");
	Global_4282659[4 /*10*/].f_4 = 2.4f;
	Global_4282659[4 /*10*/].f_9 = 300f;
	Global_4282659[4 /*10*/].f_6 = 1;
	Global_4282659[5 /*10*/] = { -4.5f, -63f, -11f };
	Global_4282659[5 /*10*/].f_3 = 153.7463f;
	Global_4282659[5 /*10*/].f_5 = joaat("seashark3");
	Global_4282659[5 /*10*/].f_4 = 1.4f;
	Global_4282659[5 /*10*/].f_9 = 200f;
	Global_4282659[5 /*10*/].f_6 = 1;
	Global_4282659[6 /*10*/] = { -6.75f, -63f, -11f };
	Global_4282659[6 /*10*/].f_3 = 153.7463f;
	Global_4282659[6 /*10*/].f_5 = joaat("seashark3");
	Global_4282659[6 /*10*/].f_4 = 1.4f;
	Global_4282659[6 /*10*/].f_9 = 200f;
	Global_4282659[6 /*10*/].f_6 = 1;
	Global_4282730[0 /*5*/] = { Global_4282659[1 /*10*/] };
	Global_4282730[0 /*5*/].f_3 = Global_4282659[1 /*10*/].f_3;
	Global_4282730[0 /*5*/].f_4 = Global_4282659[1 /*10*/].f_4;
	Global_4282730[1 /*5*/] = { Global_4282659[2 /*10*/] };
	Global_4282730[1 /*5*/].f_3 = Global_4282659[2 /*10*/].f_3;
	Global_4282730[1 /*5*/].f_4 = Global_4282659[2 /*10*/].f_4;
	Global_4282730[2 /*5*/] = { Global_4282659[3 /*10*/] };
	Global_4282730[2 /*5*/].f_3 = Global_4282659[3 /*10*/].f_3;
	Global_4282730[2 /*5*/].f_4 = Global_4282659[3 /*10*/].f_4;
	Global_4282730[3 /*5*/] = { Global_4282659[4 /*10*/] };
	Global_4282730[3 /*5*/].f_3 = Global_4282659[4 /*10*/].f_3;
	Global_4282730[3 /*5*/].f_4 = Global_4282659[4 /*10*/].f_4;
	Global_4282730[4 /*5*/] = { Global_4282659[5 /*10*/] };
	Global_4282730[4 /*5*/].f_3 = Global_4282659[5 /*10*/].f_3;
	Global_4282730[4 /*5*/].f_4 = Global_4282659[5 /*10*/].f_4;
	Global_4282730[5 /*5*/] = { Global_4282659[6 /*10*/] };
	Global_4282730[5 /*5*/].f_3 = Global_4282659[6 /*10*/].f_3;
	Global_4282730[5 /*5*/].f_4 = Global_4282659[6 /*10*/].f_4;
	Global_4282730[6 /*5*/] = { 0f, -63f, -11.9254f };
	Global_4282730[6 /*5*/].f_3 = 180.2068f;
	Global_4282730[6 /*5*/].f_4 = 2.4f;
}

void func_18(int iParam0, var uParam1, var uParam2)//Position - 0x7AAC
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -3542.82f, 1488.25f, 5.42995f };
			*uParam2 = -123.045f;
			break;
		
		case 1:
			*uParam1 = { -3148.38f, 2807.55f, 5.42995f };
			*uParam2 = 91.955f;
			break;
		
		case 2:
			*uParam1 = { -3280.5f, 2140.51f, 5.42995f };
			*uParam2 = 86.955f;
			break;
		
		case 3:
			*uParam1 = { -2814.49f, 4072.74f, 5.42995f };
			*uParam2 = -108.045f;
			break;
		
		case 4:
			*uParam1 = { -3254.55f, 3685.68f, 5.42995f };
			*uParam2 = 81.955f;
			break;
		
		case 5:
			*uParam1 = { -2368.44f, 4697.87f, 5.42995f };
			*uParam2 = -133.045f;
			break;
		
		case 6:
			*uParam1 = { -3205.34f, -219.01f, 5.42995f };
			*uParam2 = 176.955f;
			break;
		
		case 7:
			*uParam1 = { -3448.25f, 311.502f, 5.42995f };
			*uParam2 = -83.045f;
			break;
		
		case 8:
			*uParam1 = { -2697.86f, -540.612f, 5.42995f };
			*uParam2 = 146.955f;
			break;
		
		case 9:
			*uParam1 = { -1995.73f, -1523.69f, 5.42997f };
			*uParam2 = -38.045f;
			break;
		
		case 10:
			*uParam1 = { -2117.58f, -2543.35f, 5.42995f };
			*uParam2 = 36.955f;
			break;
		
		case 11:
			*uParam1 = { -1605.07f, -1872.47f, 5.42995f };
			*uParam2 = -68.045f;
			break;
		
		case 12:
			*uParam1 = { -753.082f, -3919.07f, 5.42995f };
			*uParam2 = 11.955f;
			break;
		
		case 13:
			*uParam1 = { -351.061f, -3553.32f, 5.42995f };
			*uParam2 = -123.045f;
			break;
		
		case 14:
			*uParam1 = { -1460.54f, -3761.47f, 5.42995f };
			*uParam2 = 161.955f;
			break;
		
		case 15:
			*uParam1 = { 1546.89f, -3045.63f, 5.42995f };
			*uParam2 = -118.045f;
			break;
		
		case 16:
			*uParam1 = { 2490.89f, -2428.85f, 5.42995f };
			*uParam2 = -168.045f;
			break;
		
		case 17:
			*uParam1 = { 2049.79f, -2821.62f, 5.42995f };
			*uParam2 = 31.955f;
			break;
		
		case 18:
			*uParam1 = { 3029.02f, -1495.7f, 5.42995f };
			*uParam2 = -108.045f;
			break;
		
		case 19:
			*uParam1 = { 3021.25f, -723.39f, 5.42995f };
			*uParam2 = 81.955f;
			break;
		
		case 20:
			*uParam1 = { 2976.62f, -1994.76f, 5.42995f };
			*uParam2 = -133.045f;
			break;
		
		case 21:
			*uParam1 = { 3404.51f, 1977.04f, 5.42995f };
			*uParam2 = -103.045f;
			break;
		
		case 22:
			*uParam1 = { 3411.1f, 1193.44f, 5.42995f };
			*uParam2 = 31.955f;
			break;
		
		case 23:
			*uParam1 = { 3784.8f, 2548.54f, 5.42995f };
			*uParam2 = 86.955f;
			break;
		
		case 24:
			*uParam1 = { 4225.03f, 3988f, 5.42995f };
			*uParam2 = 61.955f;
			break;
		
		case 25:
			*uParam1 = { 4250.58f, 4576.57f, 5.42995f };
			*uParam2 = 111.955f;
			break;
		
		case 26:
			*uParam1 = { 4204.36f, 3373.7f, 5.42995f };
			*uParam2 = 81.955f;
			break;
		
		case 27:
			*uParam1 = { 3751.68f, 5753.5f, 5.42995f };
			*uParam2 = 136.955f;
			break;
		
		case 28:
			*uParam1 = { 3490.11f, 6305.79f, 5.42995f };
			*uParam2 = 156.955f;
			break;
		
		case 29:
			*uParam1 = { 3684.85f, 5212.24f, 5.42995f };
			*uParam2 = -58.045f;
			break;
		
		case 30:
			*uParam1 = { 581.595f, 7124.56f, 5.42995f };
			*uParam2 = 121.955f;
			break;
		
		case 31:
			*uParam1 = { 2004.46f, 6907.16f, 5.42997f };
			*uParam2 = 6.955f;
			break;
		
		case 32:
			*uParam1 = { 1396.64f, 6860.2f, 5.42995f };
			*uParam2 = 176.955f;
			break;
		
		case 33:
			*uParam1 = { -1170.69f, 5980.68f, 5.42995f };
			*uParam2 = 91.955f;
			break;
		
		case 34:
			*uParam1 = { -777.487f, 6566.91f, 5.42995f };
			*uParam2 = 26.955f;
			break;
		
		case 35:
			*uParam1 = { -381.774f, 6946.96f, 5.42995f };
			*uParam2 = 71.955f;
			break;
		
		case 36:
			*uParam1 = { 3615.523f, -4779.021f, 5.4337f };
			*uParam2 = 0f;
			break;
		
		case 37:
			*uParam1 = { 52.6177f, -3293.087f, 5.4337f };
			*uParam2 = -90f;
			break;
		
		case 38:
			*uParam1 = { -3537.201f, 736.4623f, 5.4337f };
			*uParam2 = 180f;
			break;
		
		case 39:
			*uParam1 = { -1748.002f, 5328.746f, 5.4337f };
			*uParam2 = 170f;
			break;
		
		case 40:
			*uParam1 = { -3262.125f, -1586.972f, 5.4337f };
			*uParam2 = 167.5f;
			break;
		
		case 41:
			*uParam1 = { -850.5552f, -4818.589f, 5.4337f };
			*uParam2 = 32.5f;
			break;
	}
}

