///Add
#if defined(__BL_ANIMATION_OPTIMIZATION__)
bool CActorInstance::IsMainInstance() const // also in __BL_GRAPHIC_ON_OFF__
{
	return m_isMain;
}
#endif