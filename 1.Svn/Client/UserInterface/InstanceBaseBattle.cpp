///Add
#if defined(__BL_ANIMATION_OPTIMIZATION__)
bool CInstanceBase::IsMainInstance() const // also in __BL_GRAPHIC_ON_OFF__
{
	return m_GraphicThingInstance.IsMainInstance();
}

void CInstanceBase::AttackProcessOnlySelf()
{
	if (!m_GraphicThingInstance.CanCheckAttacking())
		return;

	if (IsMainInstance())
	{
		AttackProcess();
	}
	else
	{
		CInstanceBase* mainInstance = CPythonCharacterManager::Instance().GetMainInstancePtr();
		if (mainInstance && IsAttackableInstance(*mainInstance))
			CheckAttacking(*mainInstance);
	}
}
#endif