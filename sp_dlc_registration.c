void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
	MISC::START_SAVE_DATA(&Global_2883692, 1, true);
	MISC::REGISTER_INT_TO_SAVE(&Global_2883692, "aFakeSavedInt");
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_4542087, 0);
	iVar0 = 1;
	iVar1 = MISC::GET_SIZE_OF_SAVE_DATA(true);
	if (iVar0 != iVar1)
	{
	}
}

