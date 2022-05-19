//adds custom FFA faction (art and original config by Tolly, config expansion by Guac)
class CfgPatches
{
	class TAS_FFA_Factions
	{
		name = "TAS FFA Faction Addon";
		units[] = {
			"TAS_FFA_Sol1Unit",
			"TAS_FFA_OffUnit"
		};
		weapons[] = {
			"FFA_soldier1_uniform",
			"FFA_officer_uniform"
		};
		requiredAddons[] = {
			"A3_Characters_F"
		};
		author = "Tolly";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

#include "CfgVehicles.hpp"

//#include "CfgGroups.hpp"

#include "CfgWeapons.hpp"
