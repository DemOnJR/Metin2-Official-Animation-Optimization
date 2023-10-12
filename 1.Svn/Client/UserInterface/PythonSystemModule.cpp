///Add
#if defined(__BL_ANIMATION_OPTIMIZATION__)
PyObject* systemSetShowOtherCharAttacked(PyObject* poSelf, PyObject* poArgs)
{
	bool bEnable;
	if (!PyTuple_GetBoolean(poArgs, 0, &bEnable))
		return Py_BuildException();

	CPythonSystem::Instance().SetShowOtherCharAttacked(bEnable);
	return Py_BuildNone();
}

PyObject* systemIsShowOtherCharAttacked(PyObject* poSelf, PyObject* poArgs)
{
	return Py_BuildValue("b", CPythonSystem::Instance().IsShowOtherCharAttacked());
}
#endif

///Add in void initsystem()
#if defined(__BL_ANIMATION_OPTIMIZATION__)
		{ "SetShowOtherCharAttacked",	systemSetShowOtherCharAttacked,	METH_VARARGS },
		{ "IsShowOtherCharAttacked",	systemIsShowOtherCharAttacked,	METH_VARARGS },
#endif