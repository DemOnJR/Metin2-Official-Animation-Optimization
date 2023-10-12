///Add in void CPythonSystem::SetDefaultCharConfig()
#if defined(__BL_ANIMATION_OPTIMIZATION__)
	m_Config.bShowOtherCharAttacked = true;
#endif

//Find in void CPythonSystem::LoadCharConfig()
		if (sscanf(buf, " %s %s\n", command, value) == EOF)
			break;

///Add
#if defined(__BL_ANIMATION_OPTIMIZATION__)
		if (!stricmp(command, "SHOW_OTHER_CHAR_ATTACKED"))
			m_Config.bShowOtherCharAttacked = atoi(value) == 1;
#endif

//Find in void CPythonSystem::SaveCharConfig()
	fprintf(fp, "\n");

///Add Above
#if defined(__BL_ANIMATION_OPTIMIZATION__)
	fprintf(fp, "SHOW_OTHER_CHAR_ATTACKED\t%d\n", m_Config.bShowOtherCharAttacked);
#endif

///Add
#if defined(__BL_ANIMATION_OPTIMIZATION__)
void CPythonSystem::SetShowOtherCharAttacked(bool bEnable)
{
	m_Config.bShowOtherCharAttacked = bEnable;
}

bool CPythonSystem::IsShowOtherCharAttacked() const
{
	return m_Config.bShowOtherCharAttacked;
}
#endif