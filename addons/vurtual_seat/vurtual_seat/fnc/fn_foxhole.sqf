params [["_veh",objNull,[objNull]]];
if !(_veh isKindOf "vurtual_foxhole") exitWith {false};
_veh addAction ["Turn",{(_this select 0) animateSource ["GunnerTurnOut",abs ((_this select 0 animationSourcePhase "GunnerTurnOut")-1)];},[],0,false,true,"","vehicle _this == _target",1,false];


true
