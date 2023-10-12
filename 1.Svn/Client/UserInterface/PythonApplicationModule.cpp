///Add
#if defined(__BL_ANIMATION_OPTIMIZATION__)
	PyModule_AddIntConstant(poModule, "__BL_ANIMATION_OPTIMIZATION__", true);
#else
	PyModule_AddIntConstant(poModule, "__BL_ANIMATION_OPTIMIZATION__", false);
#endif