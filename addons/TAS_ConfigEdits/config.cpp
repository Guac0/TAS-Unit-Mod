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
		};
		requiredAddons[] = {"ace_mk6mortar","ace_trenches",/*"cwr3_intro",*/"A3_Data_F_Sams_Loadorder","A3_Characters_F"/*"oski_corran"*/}; //TODO: find updated loadorder for old man
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

class cfgWeapons {
	
	#include "noApexThermals.hpp"
	
	#include "nightstalker.hpp"

	#include "rebreather.hpp"
};

class cfgMagazines {
	#include "mortarAmmoEdits.hpp"
};

/*class cfgSurfaces {
	class Default{};
	//class oski_corran_thistle_stony_Surface: Default
	//{
		files = "oski_corran_thistle_stony_*";
		rough = 0.08;
		maxSpeedCoef = 0.75;
		dust = 0.05;
		soundEnviron = "drygrass";
		surfaceFriction = 1.8;
		character = "oski_corran_thistle_stony_Character";
		soundHit = "soft_ground";
		impact = "hitgroundsoft";
		lucidity = 4;
		grassCover = 0.1;
	};
	class oski_corran_wildgrass_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_ground_forest_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_leaves_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_wornground_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_strdirt_Surface: Default
	{
		ACE_canDig = 1;
	};
	//class oski_corran_concrete_Surface: Default
	//{
	//};
	class oski_corran_beach_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_grass_green_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_asphalt_Surface: Default
	{
	};
	class oski_corran_mud_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_main_road_surface: oski_corran_asphalt_Surface
	{
		character = "empty";
		files = "oski_main_road*";
	};
	class oski_roadtarmac_highway_surface: oski_corran_asphalt_Surface
	{
		character = "empty";
		files = "oski_roadtarmac_highway*";
	};
	class oski_roaddirt_path_surface: oski_corran_wornground_Surface
	{
		character = "empty";
		files = "oski_roaddirt_path*";
		ACE_canDig = 1;
	};
	class oski_roaddirt_road_surface: oski_corran_wornground_Surface
	{
		character = "empty";
		files = "oski_roaddirt_road*";
		ACE_canDig = 1;
	};
};
*/
#include "weaponSway.hpp" 

#include "stamina.hpp" 

#include "ladderSpeedup.hpp" 
