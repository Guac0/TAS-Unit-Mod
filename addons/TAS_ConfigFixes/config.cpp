//lots of the code contained herein is from Bourbon Warfare's Potato, licensed under GPLv2
//https://github.com/BourbonWarfare/POTATO/tree/master/addons/miscFixes
//Made by Guac
class CfgPatches {

	class TAS_Config_Fixes
	{
		name = "TAS Config Edits";
		units[] = {};
		weapons[] = {
		};
		requiredAddons[] = {/*"cwr3_intro",*/"A3_Data_F_Sams_Loadorder"/*,"oski_corran"*//*,"fallujah_hou"*//*,"DSA_Spooks"*/,"ffaa_armas"}; //TODO: find updated loadorder for old man
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};

};

/*
class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMain {
        cwr3_intro = ""; // CWR gets rid of the editor/multiplayer/campaign buttons for some reason
    };
};*/

//#include "scottishHighlands.hpp"

class CBA_Extended_EventHandlers;
class CfgVehicles {
	//#include "drongosSpooks.hpp"
	//#include "fallujah.hpp"
	//#include "cupVehicleViewports.hpp"
	#include "ffaa.hpp"

	// Make vanilla Chinook and EH302 (IDAP/FIA transport heli) float on water. Matches CUP Chinook/CH-53e and other heavy lift helos. Should be extended to all helicopters from mods that could feasibly float. Direction on BIS method from Steam Workshop user "crub"
    class Helicopter_Base_H;
    class Heli_Transport_03_base_F: Helicopter_Base_H {waterLeakiness=0.1;};
    class Heli_Transport_02_base_F: Helicopter_Base_H {waterLeakiness=0.1;};

	// Fix CBA XEH Fallback Code for misc logic/objects that don't support it: 
    // x3 = [true] call CBA_fnc_supportMonitor;
    // {
    // _x params ["_vehType", "_addon"];
    // private _parent = configName inheritsFrom (configFile >> "CfgVehicles" >> _vehType);
    // diag_log text format ["class %1: %2 { SLX_XEH_DISABLED = 1; }; // %3 -> %4", _vehType, _parent, _addon, getText (configFile >> "CfgVehicles" >> _vehType >> "displayName")];
    // } forEach x3;
};

class CfgAmmo {
    
    // Fix smoke bounce (downside is gl smokes lose some sound effects)
    class SmokeShell;
    class G_40mm_Smoke: SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.2;
    };
};