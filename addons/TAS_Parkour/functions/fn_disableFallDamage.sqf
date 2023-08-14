/*
 * Author: diwako, simplified by Guac under APL-SA
 * Handles fall damage from ACE
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Damage Info <ARRAY>
 * 3: Damage Type <STRING>
 *
 * Return Value:
 * Array of ACE damage info, effectively same info structure as arguments
 *
 * Example:
 * [player, [], "falling"] call diw_ace_medical_fnc_handleFallDamage
 *
 * Public: No
 */
private _debug = false;

params ["_unit", "_allDamages", "_typeOfDamage"];

if (isNil "_unit") exitWith {
	if (_debug) then {systemChat "fn_disableFallDamage disabling damage due to nil!"; diag_log "fn_disableFallDamage disabling damage due to nil!"};
	[] //disable damage
};

if (isNull _unit) exitWith {
	if (_debug) then {systemChat "fn_disableFallDamage disabling damage due to null!"; diag_log "fn_disableFallDamage disabling damage due to null!"};
	[] //disable damage
};

if (_debug) then { //only do after not nil/null
	//systemChat "fn_disableFallDamage running!";
	systemChat format ["fn_disableFallDamage handling %1!",_this];
	diag_log format ["fn_disableFallDamage handling %1!",_this];
};

//if (_unit getVariable ["TAS_disableFallDamage",false]) exitWith {
//if (true) exitWith {
if (missionNamespace getVariable ["TAS_disableFallDamage",false]) exitWith {
	if (_debug) then {systemChat "fn_disableFallDamage disabling damage!"; diag_log "fn_disableFallDamage disabling damage!"};
	[] //disable damage
};

if (_debug) then {systemChat "fn_disableFallDamage enabling damage!"; diag_log "fn_disableFallDamage enabling damage!";};
_this //do normal damage