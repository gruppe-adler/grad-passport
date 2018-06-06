class GVAR(RscBackground) {
	idc = -1;
	type = CT_STATIC;
	style = ST_HUD_BACKGROUND;
	text = "";
	colorText[] = {1,1,1,1};
	font = "RobotoCondensed";
	sizeEx = 0.04 * TEXT_SCALE;
	shadow = 0;
	colorBackground[] = {0, 0, 0, 0.6};
};

class GVAR(RscText) {
	idc = -1;
	type = CT_STATIC;
	style = ST_LEFT;
	colorBackground[] = { 1 , 1 , 1 , 0 };
	colorText[] = { 1 , 1 , 1 , 1 };
	font = "RobotoCondensed";
	sizeEx = 0.04 * TEXT_SCALE;
	h = 0.25;
	text = "";
};

class GVAR(RscPicture) {
	access = 0;
	type = CT_STATIC;
	idc = -1;
	style = ST_PICTURE;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
};

class GVAR(RscStructuredTextLeft) {
	idc = -1;
	access = 0;
	type = CT_STRUCTURED_TEXT;
	style = 0;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	class Attributes {
		font = "RobotoCondensed";
		color = "#000000";
		align = "left";
		shadow = 0;
		size = 0.04 * TEXT_SCALE;
	};
	text = "";
	size = 1 * TEXT_SCALE;
	shadow = 0;
};

class GVAR(RscStructuredTextRight): GVAR(RscStructuredTextLeft) {
	class Attributes {
		font = "RobotoCondensed";
		color = "#000000";
		align = "right";
		shadow = 0;
		size = 0.04 * TEXT_SCALE;
	};
};

class GVAR(RscButton) {
	idc = -1;
	access = 0;
	type = CT_BUTTON;
	style = ST_CENTER;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.1};
	colorBackground[] = {0,0,0,0.8};
	colorFocused[] = {1,1,1,0.5};
	colorBackgroundActive[] = {1,1,1,0.8}; // hover
	colorBackgroundDisabled[] = {0.3,0.3,0.3,1};
	colorBackgroundFocused[] = {0,0,0,0.5};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	shadow = 0;
	font = "RobotoCondensed";
	sizeEx = 0.04;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
