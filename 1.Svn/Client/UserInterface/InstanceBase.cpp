//Find
	AttackProcess();

///Change

#if defined(__BL_ANIMATION_OPTIMIZATION__)
	if (CPythonSystem::Instance().IsShowOtherCharAttacked())
		AttackProcess();
	else
		AttackProcessOnlySelf();
#else
	AttackProcess();
#endif