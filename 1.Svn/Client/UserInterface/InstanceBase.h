//Find
		void					AttackProcess();

///Add
#if defined(__BL_ANIMATION_OPTIMIZATION__)
		bool					IsMainInstance() const; // also in __BL_GRAPHIC_ON_OFF__
		void					AttackProcessOnlySelf();
#endif