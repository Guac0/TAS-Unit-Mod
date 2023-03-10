//user executes via right click on layer(s)

//script exports mission (todo: find way to only export current layer(s)?)

//script deletes layers

private _layersToExport = get3DENSelected "layer"; //array of layerIDs
if (count _layersToExport == 0) exitWith {
	systemChat "No layers selected!";
};
private _layerExportNames = [];
{
	_layerExportNames pushBack ((_x get3DENAttribute "name") select 0);
} forEach _layersToExport;

private _missionExport = [false, true, [0,0,0], false] call BIS_fnc_3DENExportSQF;
all3DENEntities params ["_objects", "_groups", "_triggers", "_systems", "_waypoints", "_markers", "_layers", "_comments"];

["Exported layer(s) to SQF"] collect3DENHistory { //make everything happen as 1 history entry
	{
		if (_x in _layersToExport) then {
			
			delete3DENEntities (get3DENLayerEntities _x);
			remove3DENLayer _x;
		};
	} forEach _layers; //array of layerIDs
};

private _message = format ["Selected layers have been deleted and mission export has been copied to clipboard! Paste the output into spawnUnits.sqf in your mission folder's root (or as otherwise directed). Exported layers: %1",_layerExportNames];
[ _message, 0, 30] call BIS_fnc_3DENNotification;
copyToClipboard _missionExport;
systemChat _message;
diag_log _message;
diag_log _missionExport;

/*
[
	[18c836c6b00# 7: hbarrier_01_line_1_green_f.p3d,18c87256b00# 8: hbarrier_01_line_1_green_f.p3d,18c83723580# 9: hbarrier_01_line_1_green_f.p3d,18c837a7580# 10: hbarrier_01_line_1_green_f.p3d,B Alpha 1-2:1,B Alpha 1-2:2,B Alpha 1-2:3,B Alpha 1-2:4,B Alpha 1-1:1,B Alpha 1-1:2,B Alpha 1-1:3,B Alpha 1-1:4,18c82aa4100# 37: hbarrier_01_line_1_green_f.p3d,18c81cb7580# 38: hbarrier_01_line_1_green_f.p3d,18c81cb4b80# 39: hbarrier_01_line_1_green_f.p3d,18c81cb5600# 40: hbarrier_01_line_1_green_f.p3d],
	[B Alpha 1-2,B Alpha 1-1],[],[],[],[],[14,19],[-999]]
*/

