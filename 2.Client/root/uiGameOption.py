#Find in def __init__(self):
		self.RefreshShowSalesText()

#Add
		if app.__BL_ANIMATION_OPTIMIZATION__:
			self.RefreshOtherCharAttacked()

#Find
		self.showsalesTextButtonList = []

#Add
		if app.__BL_ANIMATION_OPTIMIZATION__:
			self.other_char_attacked_button_list = []

#Find
			self.showsalesTextButtonList.append(GetObject("salestext_off_button"))

#Add
			if app.__BL_ANIMATION_OPTIMIZATION__:
				self.other_char_attacked_button_list.append(GetObject("other_char_attacked_all"))
				self.other_char_attacked_button_list.append(GetObject("other_char_attacked_self"))

#Find
		self.showsalesTextButtonList[1].SAFE_SetEvent(self.__OnClickSalesTextOffButton)

#Add
		if app.__BL_ANIMATION_OPTIMIZATION__:
			self.other_char_attacked_button_list[0].SAFE_SetEvent(self.__OnClickOtherCharAttackedAll)
			self.other_char_attacked_button_list[1].SAFE_SetEvent(self.__OnClickOtherCharAttackedSelf)

#Add
	if app.__BL_ANIMATION_OPTIMIZATION__:
		def __OnClickOtherCharAttackedAll(self):
			systemSetting.SetShowOtherCharAttacked(True)
			self.RefreshOtherCharAttacked()
		
		def __OnClickOtherCharAttackedSelf(self):
			systemSetting.SetShowOtherCharAttacked(False)
			self.RefreshOtherCharAttacked()

		def RefreshOtherCharAttacked(self):
			if systemSetting.IsShowOtherCharAttacked():
				self.other_char_attacked_button_list[0].Down()
				self.other_char_attacked_button_list[1].SetUp()
			else:
				self.other_char_attacked_button_list[0].SetUp()
				self.other_char_attacked_button_list[1].Down()
