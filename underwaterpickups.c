#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_24 = 0;
	struct<3> Local_25 = { 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	
	iLocal_2 = -1;
	Var0 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_26();
	}
	func_24(Var0);
	bLocal_24 = func_4();
	Local_25 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	func_1();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			func_26();
		}
	}
}

void func_1()//Position - 0x5C
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (func_3(iVar0, &iVar1, &Var2, &Var5, &iVar9))
		{
			if (func_2(Var5, 0f, 0f, 0f, 0))
			{
				iVar8 = 0;
				MISC::SET_BIT(&iVar8, 1);
				MISC::SET_BIT(&iVar8, 4);
				MISC::SET_BIT(&iVar8, 3);
				if (iVar1 == joaat("PICKUP_MONEY_CASE"))
				{
					if (bLocal_24)
					{
						iLocal_3[iVar0] = OBJECT::CREATE_PICKUP(iVar1, Var2, iVar8, iVar9, true, 0);
					}
				}
				else if (SYSTEM::VDIST2(Var2, Local_25) > 400f)
				{
					if (iVar1 == joaat("PICKUP_ARMOUR_STANDARD"))
					{
						iLocal_3[iVar0] = OBJECT::CREATE_PICKUP(iVar1, Var2, iVar8, iVar9, true, 0);
					}
					else if ((iVar1 == joaat("PICKUP_WEAPON_GRENADELAUNCHER") || iVar1 == joaat("PICKUP_WEAPON_RPG")) || iVar1 == joaat("PICKUP_WEAPON_MG"))
					{
						if (bLocal_24)
						{
							iLocal_3[iVar0] = OBJECT::CREATE_PICKUP(iVar1, Var2, iVar8, -1, true, 0);
						}
					}
					else
					{
						iLocal_3[iVar0] = OBJECT::CREATE_PICKUP(iVar1, Var2, iVar8, -1, true, 0);
					}
				}
			}
			else
			{
				iVar8 = 0;
				MISC::SET_BIT(&iVar8, 1);
				MISC::SET_BIT(&iVar8, 4);
				if (iVar1 == joaat("PICKUP_MONEY_CASE"))
				{
					if (bLocal_24)
					{
						iLocal_3[iVar0] = OBJECT::CREATE_PICKUP_ROTATE(iVar1, Var2, Var5, iVar8, 10000, 2, true, 0);
					}
				}
				else if (SYSTEM::VDIST2(Var2, Local_25) > 400f)
				{
					if (iVar1 == joaat("PICKUP_ARMOUR_STANDARD"))
					{
						iLocal_3[iVar0] = OBJECT::CREATE_PICKUP_ROTATE(iVar1, Var2, Var5, iVar8, -1, 2, true, 0);
					}
					else if ((iVar1 == joaat("PICKUP_WEAPON_GRENADELAUNCHER") || iVar1 == joaat("PICKUP_WEAPON_RPG")) || iVar1 == joaat("PICKUP_WEAPON_MG"))
					{
						if (bLocal_24)
						{
							iLocal_3[iVar0] = OBJECT::CREATE_PICKUP_ROTATE(iVar1, Var2, Var5, iVar8, -1, 2, true, 0);
						}
					}
					else
					{
						iLocal_3[iVar0] = OBJECT::CREATE_PICKUP_ROTATE(iVar1, Var2, Var5, iVar8, -1, 2, true, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_2(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x252
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_3(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x299
{
	*uParam3 = { 0f, 0f, 0f };
	*uParam4 = -1;
	switch (iLocal_2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { -998.1893f, 6538.7476f, -31.8168f };
					*uParam4 = 12000;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { -992.1827f, 6568.4663f, -25.4098f };
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { -980.2034f, 6595.5835f, -27.4281f };
					*uParam4 = -1;
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_HEALTH_STANDARD");
					*uParam2 = { -914.181f, 6644.139f, -33.8392f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { -988.004f, 6524.1733f, -37.6496f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { -975.5475f, 6604.4834f, -27.6453f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { -947.2839f, 6601.1406f, -29.9503f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { -921.403f, 6613.282f, -31.421f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_WEAPON_RPG");
					*uParam2 = { -1032.6805f, 6543.8403f, -29.68f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_WEAPON_MG");
					*uParam2 = { -942.8458f, 6547.7505f, -35.4082f };
					break;
				
				case 10:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { -985.56f, 6495.06f, -36.07f };
					break;
				
				case 11:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { -1006.82f, 6491.08f, -36.31f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { 3267.3716f, 6408.6914f, -49.36513f };
					*uParam4 = 8000;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { 3270.7068f, 6417.46f, -50.2241f };
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_WEAPON_STICKYBOMB");
					*uParam2 = { 3254.63f, 6414.13f, -47.78f };
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_PISTOL");
					*uParam2 = { 3270.39f, 6425.12f, -51.36f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_WEAPON_PISTOL");
					*uParam2 = { 3283.49f, 6418.16f, -51.91f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_STICKYBOMB");
					*uParam2 = { 3259.42f, 6404.4f, -48.03f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { 3230.95f, 6402.33f, -38.66f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 3246.36f, 6390.96f, -44.68f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 3256.19f, 6386.68f, -46.12f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { 3285.74f, 6436.81f, -53.08f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { 4241.0713f, 3600.4917f, -46.81019f };
					*uParam4 = 10000;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { 4245.255f, 3595.4717f, -48.4023f };
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_WEAPON_STICKYBOMB");
					*uParam2 = { 4234.14f, 3598.21f, -48.61f };
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_STICKYBOMB");
					*uParam2 = { 4233.57f, 3593.39f, -48.97f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 4239.69f, 3598.28f, -47.06f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 4238.71f, 3600.99f, -46.41f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 4195.88f, 3587.34f, -47.35f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { 4170.99f, 3666.27f, -40.33f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { 4159.58f, 3664.66f, -35.82f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADELAUNCHER");
					*uParam2 = { 4202.88f, 3643.18f, -44.81f };
					break;
				
				case 10:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 4213.56f, 3647.85f, -43f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { -3242.5f, 3667.4863f, -30.78001f };
					*uParam4 = 12500;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_WEAPON_MG");
					*uParam2 = { -3207.6277f, 3668.3774f, -37.712f };
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { -3263.5366f, 3673.9275f, -36.4283f };
					*uParam4 = -1;
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_PISTOL");
					*uParam2 = { -3232.39f, 3626.27f, -36.5f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADELAUNCHER");
					*uParam2 = { -3345.58f, 3707.1f, -98.22f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { -3312.91f, 3673.69f, -80.69f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { -3328.56f, 3723.76f, -106.53f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_HEALTH_STANDARD");
					*uParam2 = { -3351.79f, 3705.02f, -96.25f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { -3377.97f, 3717.68f, -91.79f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { -3205.89f, 3644.45f, -39.76f };
					break;
				
				case 10:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { -3330.38f, 3695.19f, -98.64f };
					break;
				
				case 11:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { -3285.3323f, 3677.1887f, -80.918f };
					break;
				
				case 12:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { -3208.5f, 3649.73f, -39.33f };
					break;
				
				case 13:
					*uParam1 = joaat("PICKUP_WEAPON_PISTOL");
					*uParam2 = { -3231.45f, 3645.32f, -36.42f };
					break;
				
				case 14:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { -3251.42f, 3629.54f, -37.31f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { -3178.462f, 3038.0945f, -35.22701f };
					*uParam4 = 9000;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { -3168.2446f, 3023.4277f, -38.9854f };
					*uParam4 = -1;
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_WEAPON_SNIPERRIFLE");
					*uParam2 = { -3185.3225f, 3055.6277f, -40.6014f };
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_STICKYBOMB");
					*uParam2 = { -3184.8499f, 3042.1804f, -40.23f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { -3171.451f, 3025.466f, -37.863f };
					*uParam3 = { 287.28f, 5.04f, 136.28f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { -3174.09f, 2993.02f, -40.26f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { -3198.3933f, 3015.7593f, -41.2039f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { -3184.3508f, 3021.4722f, -40.0128f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_WEAPON_STICKYBOMB");
					*uParam2 = { -3195.0173f, 3061.2754f, -41.5999f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_HEALTH_STANDARD");
					*uParam2 = { -3173.9595f, 3069.583f, -37.088f };
					break;
				
				case 10:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { -3193.34f, 3023.59f, -41.2f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { -2833.3835f, -468.0155f, -20.40657f };
					*uParam4 = 25000;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_HEALTH_STANDARD");
					*uParam2 = { -2825.33f, -475.7387f, -26.053f };
					*uParam3 = { -94f, 0f, 34f };
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_WEAPON_RPG");
					*uParam2 = { -2820.9639f, -441.4406f, -40.6061f };
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_MG");
					*uParam2 = { -2841.877f, -512.4902f, -67.7683f };
					*uParam3 = { -95.76f, 0f, 20.16f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { -2806.0251f, -404.1602f, -39.3099f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { -2822.302f, -398.0594f, -40.3273f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { -2865.8323f, -399.6541f, -40.854f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADELAUNCHER");
					*uParam2 = { -2892.7722f, -404.4103f, -41.0115f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_WEAPON_PISTOL");
					*uParam2 = { -2863.0625f, -498.6346f, -64.41f };
					*uParam3 = { 102.88f, 0f, 47.52f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { -2782.8784f, -477.8723f, -51.829f };
					break;
				
				case 10:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { -2822.5317f, -479.8832f, -61.06f };
					*uParam3 = { 87.84f, 0f, 120.96f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { 3166.3027f, -309.24265f, -13.46703f };
					*uParam4 = 20000;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { 3181.0818f, -333.605f, -30.3985f };
					*uParam4 = -1;
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { 3148.4033f, -324.3696f, -27.4506f };
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_STICKYBOMB");
					*uParam2 = { 3153.7173f, -291.6851f, -27.2959f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_WEAPON_SNIPERRIFLE");
					*uParam2 = { 3152.9617f, -251.0106f, -28.5123f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_HEALTH_STANDARD");
					*uParam2 = { 3190.7268f, -374.6689f, -33.3551f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_WEAPON_MICROSMG");
					*uParam2 = { 3188.7417f, -363.4831f, -31.9785f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_WEAPON_PISTOL");
					*uParam2 = { 3175.0176f, -368.1337f, -30.7548f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 3166.6445f, -356.843f, -29.123f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_WEAPON_STICKYBOMB");
					*uParam2 = { 3171.986f, -339.4889f, -30.0216f };
					break;
				
				case 10:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { 3184.3066f, -336.6477f, -30.7653f };
					break;
				
				case 11:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADELAUNCHER");
					*uParam2 = { 3155.87f, -314.77f, -28.94f };
					break;
				
				case 12:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { 3151.5913f, -293.2682f, -27.3977f };
					break;
				
				case 13:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { 3175.298f, -318.2845f, -27.8797f };
					break;
				
				case 14:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { 3133.6492f, -340.5377f, -24.0701f };
					break;
				
				case 15:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 3171.96f, -306.42f, -26.44f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { 2690.0488f, -1407.1602f, -23.1385f };
					*uParam4 = 12000;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_WEAPON_CROWBAR");
					*uParam2 = { 2678.1948f, -1387.252f, -12.5066f };
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { 2670.2378f, -1415.699f, -24.4404f };
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { 2692.9316f, -1390.9557f, -21.7692f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { 2660.8867f, -1391.9243f, -21.4938f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_PISTOL");
					*uParam2 = { 2694.853f, -1381.531f, -13.7913f };
					*uParam3 = { 95f, 0f, -32.36f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_WEAPON_RPG");
					*uParam2 = { 2702.013f, -1355.429f, -18.3013f };
					*uParam3 = { 94f, 0f, -61.52f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 2691.1367f, -1358.3881f, -23.3247f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_HEALTH_STANDARD");
					*uParam2 = { 2659.5532f, -1363.391f, -21.2188f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_WEAPON_SNIPERRIFLE");
					*uParam2 = { 2647.702f, -1399.869f, -18.9282f };
					*uParam3 = { 85.68f, 0f, 70.56f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { 263.03833f, -2278.8083f, -5.90399f };
					*uParam4 = 7500;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_WEAPON_CROWBAR");
					*uParam2 = { 270.1463f, -2268.9683f, -4.8704f };
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { 262.252f, -2296.5461f, -12.7082f };
					*uParam4 = -1;
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { 250.2981f, -2291.3555f, -6.0576f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 284.8206f, -2270.1646f, -9.7622f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 291.5531f, -2262.1348f, -8.454f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN");
					*uParam2 = { 282.7375f, -2299.4905f, -15.0066f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_HEALTH_STANDARD");
					*uParam2 = { 262.5209f, -2305.6453f, -14.8879f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_WEAPON_STICKYBOMB");
					*uParam2 = { 227.4087f, -2284.6018f, -3.8739f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_WEAPON_PISTOL");
					*uParam2 = { 264.1946f, -2260.7024f, -7.1215f };
					break;
				
				case 10:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { 247.1884f, -2279.852f, -6.9333f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { 1779.4543f, -2984.549f, -47.8651f };
					*uParam4 = 16500;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_HEALTH_STANDARD");
					*uParam2 = { 1791.1947f, -2962.9128f, -44.5483f };
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { 1771.2632f, -2966.9006f, -47.0437f };
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { 1853.2838f, -2939.228f, -49.1402f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { 1803.0144f, -2981.6716f, -46.2222f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 1846.3389f, -2969.901f, -54.1489f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { 1852.2867f, -2967.1116f, -54.1508f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { 1848.7842f, -2987.886f, -54.4582f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADELAUNCHER");
					*uParam2 = { 1865.372f, -2938.292f, -47.5032f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { 1829.663f, -2916.424f, -37.2224f };
					*uParam3 = { 83.76f, 0f, 32f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { -134.8904f, -2870.5483f, -21.0327f };
					*uParam4 = 11000;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_WEAPON_RPG");
					*uParam2 = { -171.6402f, -2873.3403f, -21.9516f };
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { -173.2814f, -2841.6643f, -16.9981f };
					*uParam4 = -1;
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN");
					*uParam2 = { -106.2988f, -2879.6846f, -25.3423f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_HEALTH_STANDARD");
					*uParam2 = { -276.8266f, -2896.9128f, -19.5037f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { -282.5338f, -2890.5554f, -18.2755f };
					break;
				
				case 6:
					*uParam1 = joaat("PICKUP_WEAPON_SMG");
					*uParam2 = { -261.7152f, -2878.2239f, -16.9878f };
					break;
				
				case 7:
					*uParam1 = joaat("PICKUP_WEAPON_PISTOL");
					*uParam2 = { -239.333f, -2843.8862f, -21.3757f };
					break;
				
				case 8:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { -238.3619f, -2870.6753f, -24.074f };
					break;
				
				case 9:
					*uParam1 = joaat("PICKUP_WEAPON_PISTOL");
					*uParam2 = { -169.2835f, -2834.5674f, -16.0327f };
					break;
				
				case 10:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { -184.2335f, -2828.0972f, -17.272f };
					break;
				
				case 11:
					*uParam1 = joaat("PICKUP_WEAPON_GRENADE");
					*uParam2 = { -211.7357f, -2842.168f, -19.8885f };
					break;
				
				default:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam1 = joaat("PICKUP_MONEY_CASE");
					*uParam2 = { 3881.5168f, 3042.3633f, -24.8541f };
					*uParam4 = 3000;
					break;
				
				case 1:
					*uParam1 = joaat("PICKUP_ARMOUR_STANDARD");
					*uParam2 = { 3893.89f, 3026.4863f, -30.7098f };
					break;
				
				case 2:
					*uParam1 = joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN");
					*uParam2 = { 3893.2207f, 3032.4836f, -30.1293f };
					*uParam4 = -1;
					break;
				
				case 3:
					*uParam1 = joaat("PICKUP_WEAPON_PUMPSHOTGUN");
					*uParam2 = { 3906.8992f, 3034.0024f, -33.4517f };
					break;
				
				case 4:
					*uParam1 = joaat("PICKUP_HEALTH_STANDARD");
					*uParam2 = { 3923.1182f, 3065.8325f, -26.6635f };
					break;
				
				case 5:
					*uParam1 = joaat("PICKUP_WEAPON_ASSAULTRIFLE");
					*uParam2 = { 3889.0266f, 3062.0205f, -27.3278f };
					break;
			}
			break;
	}
	return 0;
}

int func_4()//Position - 0x17D8
{
	if (Global_2696134 == -15)
	{
		Global_2696134 = func_23();
		func_15(&Global_2696134, 0, 0, 0, 1, 0, 0);
		return 1;
	}
	if (func_5(func_23(), Global_2696134))
	{
		Global_2696134 = func_23();
		func_15(&Global_2696134, 0, 0, 0, 1, 0, 0);
		return 1;
	}
	return 0;
}

int func_5(int iParam0, int iParam1)//Position - 0x182E
{
	int iVar0;
	int iVar1;
	
	if (!func_13(iParam1) || !func_13(iParam0))
	{
		return 1;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_11(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_10(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_9(iParam0);
	iVar1 = func_9(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_8(iParam0);
	iVar1 = func_8(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_7(iParam0);
	iVar1 = func_7(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_6(iParam0);
	iVar1 = func_6(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0)//Position - 0x193A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_7(int iParam0)//Position - 0x194D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_8(int iParam0)//Position - 0x1960
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_9(int iParam0)//Position - 0x1973
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_10(int iParam0)//Position - 0x1985
{
	return iParam0 & 15;
}

var func_11(int iParam0)//Position - 0x1992
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_12(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_12(bool bParam0, int iParam1, int iParam2)//Position - 0x19B4
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_13(int iParam0)//Position - 0x19CB
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
	iVar0 = func_6(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_7(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_8(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_11(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_10(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_9(iParam0);
	if (iVar5 < 1 || iVar5 > func_14(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0, int iParam1)//Position - 0x1AA7
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

void func_15(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1B49
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_11(*uParam0);
	iVar1 = func_10(*uParam0);
	iVar2 = func_9(*uParam0);
	iVar3 = func_8(*uParam0);
	iVar4 = func_7(*uParam0);
	iVar5 = func_6(*uParam0);
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
	iVar6 = func_14(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_14(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_16(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1CCB
{
	func_22(uParam0, iParam1);
	func_21(uParam0, iParam2);
	func_20(uParam0, iParam3);
	func_19(uParam0, iParam5);
	func_18(uParam0, iParam4);
	func_17(uParam0, iParam6);
}

void func_17(var uParam0, int iParam1)//Position - 0x1D03
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

void func_18(var uParam0, int iParam1)//Position - 0x1D89
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_10(*uParam0);
	iVar1 = func_11(*uParam0);
	if (iParam1 < 1 || iParam1 > func_14(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_19(var uParam0, int iParam1)//Position - 0x1DDA
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_20(var uParam0, int iParam1)//Position - 0x1E0D
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_21(var uParam0, int iParam1)//Position - 0x1E47
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_22(var uParam0, int iParam1)//Position - 0x1E82
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_23()//Position - 0x1EBE
{
	var uVar0;
	
	func_22(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_21(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_20(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_18(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_19(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_17(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_24(struct<3> Param0)//Position - 0x1F04
{
	struct<3> Var0[12];
	int iVar37;
	
	Var0[0 /*3*/] = { -1029f, 6517f, -21f };
	Var0[1 /*3*/] = { 3265f, 6407f, -47f };
	Var0[2 /*3*/] = { 4215f, 3603f, -48f };
	Var0[3 /*3*/] = { -3247f, 3669f, -28f };
	Var0[4 /*3*/] = { -3192f, 3029f, -35f };
	Var0[5 /*3*/] = { -2838f, -446f, -38f };
	Var0[6 /*3*/] = { 3156f, -307f, -17f };
	Var0[7 /*3*/] = { 2695f, -1334f, -26f };
	Var0[8 /*3*/] = { 264f, -2280f, -8f };
	Var0[9 /*3*/] = { 1804f, -2993f, -46f };
	Var0[10 /*3*/] = { -131f, -2867f, -10f };
	Var0[11 /*3*/] = { 3595f, 3041f, -15f };
	iVar37 = 0;
	while (iVar37 <= (12 - 1))
	{
		if (func_25(Param0, Var0[iVar37 /*3*/], 1056964608, 0))
		{
			iLocal_2 = iVar37;
			return;
		}
		iVar37++;
	}
}

int func_25(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x2053
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

void func_26()//Position - 0x20CE
{
	func_27();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_27()//Position - 0x20DE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_3[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_3[iVar0]);
		}
		iVar0++;
	}
}

