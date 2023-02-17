//inspired by BourdonWarfare Potato licensed under GPLv2 https://github.com/BourbonWarfare/POTATO/blob/master/addons/missionMaking/functions/fnc_copyMapName.sqf

copyToClipboard worldName;

private _displayName = getText (configFile >> "CfgWorlds" >> worldName >> "description");
private _message = format ["Use mission folder 'MissionName.%1' for map %2. '%1' has been copied to clipboard.", worldName, _displayName];
[_message, 0, 10] call BIS_fnc_3DENNotification;
systemChat _message;