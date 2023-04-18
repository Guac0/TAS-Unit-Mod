params [["_veh",objNull,[objNull]],["_arr",[],[[]]]];

if (isNull _veh) exitWith {false};
{
	_x set [0,objNull];
} forEach _arr;
_veh setVariable ["vurtual_seat_litter_slots",_arr];
//[objNull,[0,0,0],0]
_veh addAction ["Load Stretcher",{
	_veh = (_this select 0); 
	_ply = (_this select 1);
	_arr = _veh getVariable ["vurtual_seat_litter_slots",[]];
	if (count _arr == 0) exitWith {false};
	_litter = ((position _ply) nearestObject "vurtual_stretcher");
	if (!(isNull attachedTo _litter) || (_litter distance _ply)>3) exitWith {false};
	_attached = { _obj = (_x select 0);
	if (isNull _obj) exitWith {
		_x set [0,_litter];
		_pos = (_x select 1);
		if (typeName (_x select 1)!="ARRAY") then {
			_pos = _veh selectionPosition (_x select 1);
		};
		_litter AttachTo [_veh,_pos];
		_litter setDir (_x select 2);
		[_litter,_veh,_forEachIndex] spawn {
			params ["_litter","_veh","_index"];
			waitUntil {sleep 1; !(alive _litter && (attachedTo _litter == _veh))};
			if (alive _veh) then {
				_arr = _veh getVariable ["vurtual_seat_litter_slots",[]];
				if (count _arr > 0) then {
					(_arr select _index) set [0,objNull];
				};
			};
		};
		true
	}; false
	} forEach _arr;
	if !(_attached) then {
		hint "No attachment positions open.";
	};
},[],1.5,false,true,"","(alive _target) && (vehicle _this == _this) && (isNull attachedTo ((position _this) nearestObject 'vurtual_stretcher')) && (((position _this) nearestObject 'vurtual_stretcher') distance _this)<2"];

true

