//eden enhancements, like automatic author name
//some code inspired by Bourbon Warfare's template
class CfgPatches
{
	class TAS_3den_Enhancements
	{
		name = "TAS 3den Enhancements Addon";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class Cfg3DEN {
    class EventHandlers {
        class TAS_3den_Enhancements {
            //onMissionSave = QUOTE(call compile preprocessFileLineNumbers QUOTE(QPATHTOF(functions\fnc_onMissionSave.sqf)));
            onMissionLoad = "call compile preprocessFileLineNumbers 'Autismo_Seals_Unit_Mod\addons\TAS_3den_Enhancements\functions\onMissionLoad.sqf'";
        };
    };
};