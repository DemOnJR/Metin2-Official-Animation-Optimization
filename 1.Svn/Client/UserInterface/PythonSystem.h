//Find
			bool			bShowSalesText;

///Add
#if defined(__BL_ANIMATION_OPTIMIZATION__)
			bool			bShowOtherCharAttacked;
#endif

//Find
		void							SetShowSalesTextFlag(int iFlag);

///Add
#if defined(__BL_ANIMATION_OPTIMIZATION__)
		void							SetShowOtherCharAttacked(bool bEnable);
		bool							IsShowOtherCharAttacked() const;
#endif