//ran on server whenever a mine is configured
private _debug = false;
if (_debug) then {systemChat str _this};
if (_debug) then {systemChat "running voiceMine.sqf"};

params ["","_mine"];

if (_debug) then {systemChat str _mine};

//todo: make this compatible with eden/zeus-placed explosives somehow instead of just thru ace placement
//if this is the first mine, create the array. if mines have already been placed, just add the new mine.
if (isNil "KJW_VoiceMines") then {
  KJW_VoiceMines = [_mine];
  publicVariable "KJW_VoiceMines";
} else {
  KJW_VoiceMines pushBack _mine;
  publicVariable "KJW_VoiceMines";
};
if (_debug) then {systemChat str KJW_VoiceMines;};

"Autismo_Seals_Unit_Mod\addons\KJW_Voicemines\scripts\addSpeakEvent.sqf" remoteExec ["execVM"]; //add loop to all players. players will disregard it if they already have the loop. probably a more efficient way to do this but this is good enough