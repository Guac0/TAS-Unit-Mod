//eden enhancements, like automatic author name
//some code inspired by Bourbon Warfare's template

//https://community.bistudio.com/wiki/Eden_Editor:_Modding
class CfgPatches
{
	class TAS_3den_Enhancements
	{
		name = "TAS 3den Enhancements Addon";
		units[] = {}; // No objects must belong to the addon. CfgVehicles should ideally not be present at all.
		weapons[] = {};
		requiredAddons[] = {3DEN}; // 3DEN must be among required addons!
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
		is3DENmod = 1;	/* IMPORTANT! This will mark the missions saved with modded editor, so that when such missions are loaded into unmodded 3DEN,
						the user will get a warning of possible loss of custom attributes and prompted to install missing editor mod(s) */
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

//from BourdonWarfare Potato licensed under GPLv2 https://github.com/BourbonWarfare/POTATO/blob/master/addons/missionMaking/functions/fnc_copyMapName.sqf
class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class Tools {
                    items[] += {"TAS_copyMapName_Button"};
                };
                class TAS_copyMapName_Button {
                    text = "Copy Mapname to Clipboard";
					picture = "Autismo_Seals_Unit_Mod\addons\TAS_3den_Enhancements\media\logo256x256.paa"; // Item picture
                    action = "call compile preprocessFileLineNumbers 'Autismo_Seals_Unit_Mod\addons\TAS_3den_Enhancements\functions\getWorldName.sqf'";
            	};
        	};
    	};
	};
};