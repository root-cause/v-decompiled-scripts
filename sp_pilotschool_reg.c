void __EntryFunction__()//Position - 0x0
{
	MISC::START_SAVE_DATA(&Global_3145728, 1, true);
	func_1();
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_4542087, 1);
}

void func_1()//Position - 0x23
{
	MISC::REGISTER_INT_TO_SAVE(&Global_3145728, "PILOT_SCHOOL_DUMMY_DATA");
}

