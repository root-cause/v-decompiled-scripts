void __EntryFunction__()//Position - 0x0
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

