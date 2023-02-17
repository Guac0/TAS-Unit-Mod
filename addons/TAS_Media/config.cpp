//Stores various audio and video files to reduce mission file size.
//Made by Guac
class CfgPatches {

	class TAS_Media
	{
		name = "TAS Media";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};

};

/*
Code Stash
https://community.bistudio.com/wiki/BIS_fnc_playVideo
private _path = "Autismo_Seals_Unit_Mod\addons\TAS_Media\GayFrogs_Silent.ogv";
private _pathAudio = "Autismo_Seals_Unit_Mod\addons\TAS_Media\GayFrogs.ogg";


[_path] remoteExec ["BIS_fnc_playVideo"];

{_x setObjectTexture [0, _path]; [_path, [10, 10]] call BIS_fnc_playVideo; } forEach allMissionObjects "All";

screen setObjectTexture [0, _path];
[_path, [10, 10]] call BIS_fnc_playVideo;
playSound3D [_pathAudio, screen, true, getPosASL _x, 5];

{_x setObjectTexture [0, _path]; [_path, [10, 10]] call BIS_fnc_playVideo; playSound3D [_pathAudio, _x, true, getPosASL _x, 5];} forEach allMissionObjects "All";;






["720p_Trim_GayFrogs.ogv"] spawn BIS_fnc_playVideo;

_video = "720p_Trim_GayFrogs.ogv";
screen setObjectTexture [0, _video];
[_video, [10, 10]] call BIS_fnc_playVideo;


_allMObjects = allMissionObjects "All";
_video = "720p_Trim_GayFrogs.ogv";
{_x setObjectTexture [0, _video]; [_video, [10, 10]] call BIS_fnc_playVideo;} forEach _allMObjects;

_allMObjects = allMissionObjects "All";
_video = "Lieblingsfach.ogv";
{_x setObjectTexture [0, _video]; [_video, [10, 10]] call BIS_fnc_playVideo;} forEach _allMObjects;

_allMObjects = allMissionObjects "All";
_video = "Lieblingsfach2.ogv";
{_x setObjectTexture [0, _video]; [_video, [10, 10]] call BIS_fnc_playVideo; playSound3D [getMissionPath "Lieblingsfach.ogg", _x, true, getPosASL _x, 5];} forEach _allMObjects;





*/