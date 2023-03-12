//executed on all players

private _debug = false;
if (_debug) then {systemChat "running addSpeakEvent.sqf"};

if (isNil "KJW_VoiceMineEvt") then { //only add if it doesnt already exist
  if (KJW_mineRadioActivation) then { //radio only
    KJW_VoiceMineEvt = ["VoiceMines", "OnTangent", { //radio
      params ["_unit", "_volume"];

      //if (_debug) then {systemChat "checking for voicemine activation"};

      if (count KJW_VoiceMines == 0) exitWith {};
      private _activationDistance = KJW_mineActivationDistance;
      private _activationChance = KJW_mineActivationChance;
      {
        if (_unit distance _x < _activationDistance) then {
          private _randomNumber = floor (random _activationChance); //0-5.9999, rounded down to nearest int
          if (_randomNumber == 0) then {
            _x setDamage 1; //explode if unlucky (1 in CHANCE)
            KJW_VoiceMines = KJW_VoiceMines - [_x];
            publicVariable "KJW_VoiceMines";
          } else {
            playSound3D ["a3\sounds_f\missions\invalidcoords.ogg", _x]; //warning beep if lucky
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
      } forEach KJW_VoiceMines; //probably bad for performance
    }, player] call TFAR_fnc_addEventHandler;
  } else {
    KJW_VoiceMineEvt = ["VoiceMines", "OnSpeak", { //speaking
      params ["_unit", "_volume"];

      //if (_debug) then {systemChat "checking for voicemine activation"};

      if (count KJW_VoiceMines == 0) exitWith {};
      private _activationDistance = KJW_mineActivationDistance;
      private _activationChance = KJW_mineActivationChance;
      {
        if (_unit distance _x < _activationDistance) then {
          private _randomNumber = floor (random _activationChance); //0-5.9999, rounded down to nearest int
          if (_randomNumber == 0) then {
            _x setDamage 1; //explode if unlucky (1 in CHANCE)
            KJW_VoiceMines = KJW_VoiceMines - [_x];
            publicVariable "KJW_VoiceMines";
          } else {
            playSound3D ["a3\sounds_f\missions\invalidcoords.ogg", _x]; //warning beep if lucky
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
      } forEach KJW_VoiceMines; //probably bad for performance
    }, player] call TFAR_fnc_addEventHandler;
  };

};
