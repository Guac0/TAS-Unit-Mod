//Made by Guac
class CfgPatches {

	class tas_parkour
	{
		name = "TAS Parkour";
		units[] = {};
		weapons[] = {
		};
		requiredAddons[] = {"ace_medical_treatment","ace_medical_damage","TAS_Revolver","A3_Data_F_Sams_Loadorder"}; //TODO: find updated loadorder for old man
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};

};

class CfgFunctions
{
	class TAS
	{
		class Main
		{
			file = "Autismo_Seals_Unit_Mod\addons\TAS_Parkour\functions";
			class disableFallDamage;
		};
	};
};

#include "cfgMagazines.hpp" /// specific magazines for this rifle
#include "cfgAmmo.hpp" /// specific ammo for this rifle
#include "CfgVehicles.hpp"

//inspired by Diwako
class ACE_Medical_Injuries
{
	class damageTypes
	{
		class woundHandlers;
		class falling
		{
			class woundHandlers: woundHandlers
			{
				//tas_parkour = "{ execVM ""Autismo_Seals_Unit_Mod\addons\TAS_Parkour\functions\fn_disableFallDamage.sqf"" }";
				tas_parkour = "{ call TAS_fnc_disableFallDamage }";
			};
		};
	};
};
