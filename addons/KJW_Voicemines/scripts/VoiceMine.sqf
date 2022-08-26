params ["","_mine"];

if (isNil "KJW_VoiceMines") then {
  KJW_VoiceMines = [_mine];
} else {
  KJW_VoiceMines pushBack _mine;
};

if (isNil "KJW_VoiceMineEvt") then {
  KJW_VoiceMineEvt = ["VoiceMines", "OnSpeak", {
    params ["_unit", "_volume"];
    {
      if (_unit distance _x < 5) then {
        private _randomNumber = floor(random 6); //0-5.9999, rounded down to nearest int
        if (_randomNumber == 0) then {
          _x setDamage 1;
          KJW_VoiceMines = KJW_VoiceMines - [_x];
        } else {
          playSound3D ["a3\sounds_f\missions\invalidcoords.ogg", _x];
        };
      };
      /*
      _this spawn {
        while {alive _this} do {
          if (player distance _this < 5) then {
            private _randomNumber = floor(random 6);
            if (_randomNumber == 0) then {
              _this setDamage 1;
            } else {
              playSound3D ["a3\sounds_f\missions\invalidcoords.ogg", _this];
            };
          };
          sleep 1;
        };
      };
      */
    } forEach KJW_VoiceMines;
  }, player] call TFAR_fnc_addEventHandler;
};
