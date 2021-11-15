//adds a custom revolver and ammo, config by Guac and (eventually) model by TBONE

class CfgPatches
{
	class TAS_Revolver
	{
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"TAS_BrightLite"
		};
		requiredVersion=0.1;
		units[]=
		{
			"TAS_Weapon_hgun_revolver",
			"TAS_Weapon_hgun_revolver_Yorris_F",
			"TAS_Weapon_hgun_revolver_brightlite_F",
			"TAS_Weapon_hgun_revolver_suppressor_F",
			"TAS_Weapon_hgun_revolver_y_b_s_F",
			"TAS_Item_MagInheritance",
			"TAS_Item_6Rnd_00Buck",
			"TAS_Item_6Rnd_Slug",
			"TAS_Item_6Rnd_FRAG",
			"TAS_Item_6Rnd_doomsday_Buck"
		};
		weapons[]=
		{
			"TAS_hgun_revolver",
			"TAS_hgun_revolver_Yorris_F",
			"TAS_hgun_revolver_brightlite_F",
			"TAS_hgun_revolver_suppressor_F",
			"TAS_Weapon_hgun_revolver_yorris_brightlight_F"
			//"TAS_T&G_MK1_F"
		};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;

#include "cfgMagazines.hpp" /// specific magazines for this rifle
#include "cfgAmmo.hpp" /// specific ammo for this rifle
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

//magWell definition
class CfgMagazineWells
{
	class TAS_magWell_Revolver
	{
		TAS_Magazines[] =
		{
			"TAS_6Rnd_00Buck",
			"TAS_6Rnd_Slug",
			"TAS_6Rnd_FRAG",
			"TAS_6Rnd_doomsday_Buck"
		};
		// Magazines defined 
		BI_Magazines[] =
		{
			"6Rnd_45ACP_Cylinder"
		};
	};
};