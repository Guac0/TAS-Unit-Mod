//Halves the weight of mortar ammunition, allowing for greater loads to be carried (both for convience for transferring between crate and gun, and to make entirely man-portable mortars easier)
//~~Additionally, adds ACE trenches compatibility to Scottish Highlands map~~ Temp removed
//Lowers weapon sway to 50%
//Made by Guac
class CfgPatches {

	class TAS_Config_Edits
	{
		name = "TAS Config Edits";
		units[] = {};
		weapons[] = {
			"TAS_ViperHelmet_hex_NoThermals",
			"TAS_ViperHelmet_ghex_NoThermals",
			"TAS_ENVG_black_NoThermals",
			"TAS_ENVG_green_NoThermals",
			"TAS_ENVG_grey_NoThermals",
			"TAS_Nightstalker_NoThermals",
			"V_RebreatherB" //i guess also include this even tho its just an edit?
			//include tfar packs???
		};
		requiredAddons[] = {"ace_mk6mortar","ace_trenches","A3_Data_F_Sams_Loadorder","A3_Characters_F","tfar_backpacks"/*"oski_corran"*/}; //TODO: find updated loadorder for old man
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};

};

class cfgWeapons {
	
	#include "noApexThermals.hpp"
	
	#include "nightstalker.hpp"

	#include "rebreather.hpp"
};

class cfgMagazines {
	#include "mortarAmmoEdits.hpp"
};

class cfgVehicles {
	#include "battleBelt.hpp"

	#include "tfarBackpacks.hpp"
};

#include "weaponSway.hpp" 

#include "stamina.hpp" 

#include "ladderSpeedup.hpp" 
