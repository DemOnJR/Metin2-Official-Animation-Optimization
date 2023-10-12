#Add to end
import app
if app.__BL_ANIMATION_OPTIMIZATION__:
	OTHER_CHAR_ATTACK_START_Y = 265
	window["height"] += 25
	window["children"][0]["height"] += 25
	window["children"][0]["children"] += (
		## 피격 모션
		{
			"name" : "other_char_attacked",
			"type" : "text",

			"x" : LINE_LABEL_X,
			"y" : OTHER_CHAR_ATTACK_START_Y + 2,

			"text" : uiScriptLocale.OPTION_ATTACKED_MOTION,
		},
		{
			"name" : "other_char_attacked_all",
			"type" : "radio_button",

			"x" : LINE_DATA_X,
			"y" : OTHER_CHAR_ATTACK_START_Y,

			"text" : uiScriptLocale.OPTION_ATTACKED_MOTION_ALL,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},
		{
			"name" : "other_char_attacked_self",
			"type" : "radio_button",

			"x" : LINE_DATA_X+MIDDLE_BUTTON_WIDTH,
			"y" : OTHER_CHAR_ATTACK_START_Y,

			"text" : uiScriptLocale.OPTION_ATTACKED_MOTION_SELF,

			"default_image" : ROOT_PATH + "middle_button_01.sub",
			"over_image" : ROOT_PATH + "middle_button_02.sub",
			"down_image" : ROOT_PATH + "middle_button_03.sub",
		},
	)