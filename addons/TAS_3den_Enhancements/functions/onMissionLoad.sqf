private _author = "Scenario" get3DENMissionAttribute "author";
if (_author == "*** Insert Author Name Here ***") then {
   set3DENMissionAttributes [["Scenario", "author", profileName]];
   systemChat "New Mission";
   systemChat format ["Assigning %1 as author", profileName];
};