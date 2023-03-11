/*
Parameters:
    _setting     - Unique setting name. Matches resulting variable name <STRING>
    _settingType - Type of setting. Can be "CHECKBOX", "EDITBOX", "LIST", "SLIDER" or "COLOR" <STRING>
    _title       - Display name or display name + tooltip (optional, default: same as setting name) <STRING, ARRAY>
    _category    - Category for the settings menu + optional sub-category <STRING, ARRAY>
    _valueInfo   - Extra properties of the setting depending of _settingType. See examples below <ANY>
    _isGlobal    - 1: all clients share the same setting, 2: setting can't be overwritten (optional, default: 0) <NUMBER>
    _script      - Script to execute when setting is changed. (optional) <CODE>
    _needRestart - Setting will be marked as needing mission restart after being changed. (optional, default false) <BOOL>
*/

[
	"KJW_mineRadioActivation", // the name of the variable which the output from the slider is assigned to
	"CHECKBOX", // interactive slider setting type
	["Activate mines by radio only?", "When checked (true), mines are only activated if a player uses their radio. If false, mines are activated by players speaking (including using radio). Requires restart."], // name and tooltip for the setting
	["KJW Voicemines"], // category the setting is in
	[false], // min 1, max 25, default 6, 0 decimals, value display
	1, // enables synchronising the variable across clients. It is better to keep this synchronized as this is a major setting
	{}, // executes nothing when the setting is changed, as it is not necessary
	true
] call cba_settings_fnc_init;

[
	"KJW_mineActivationDistance", // the name of the variable which the output from the slider is assigned to
	"SLIDER", // interactive slider setting type
	["Distance for Activation (meters)", "Only check for players within this distance of the mine when determining if it should activate or not."], // name and tooltip for the setting
	["KJW Voicemines"], // category the setting is in
	[1,50,5,0], // min 1, max 25, default 6, 0 decimals, value display (default false)
	1, // enables synchronising the variable across clients. It is better to keep this synchronized as this is a major setting
	{} // executes nothing when the setting is changed, as it is not necessary
] call cba_settings_fnc_init;

[
	"KJW_mineActivationChance", // the name of the variable which the output from the slider is assigned to
	"SLIDER", // interactive slider setting type
	["Chance for Activation (1 in X)", "Whenever a voicemine can activate, it will execute a random integer check. The value of this slider is the total numbers to check. Example: slider set to 2 - has 50% to activate. Note that it will check twice every time the criteria is true (once for start of speaking and once for finishing)."], // name and tooltip for the setting
	["KJW Voicemines"], // category the setting is in
	[1,25,6,0], // min 1, max 25, default 6, 0 decimals, value display
	1, // enables synchronising the variable across clients. It is better to keep this synchronized as this is a major setting
	{} // executes nothing when the setting is changed, as it is not necessary
] call cba_settings_fnc_init;