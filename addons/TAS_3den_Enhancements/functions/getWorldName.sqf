//from BourdonWarfare Potato licensed under GPLv2 https://github.com/BourbonWarfare/POTATO/blob/master/addons/missionMaking/functions/fnc_copyMapName.sqf

copyToClipboard worldName;

private _displayName = getText (configFile >> "CfgWorlds" >> worldName >> "description");
systemChat format ["Use mission folder 'MissionName.%1' for map %2", worldName, _displayName];
systemChat format ["'%1' copied to clipboard", worldName];