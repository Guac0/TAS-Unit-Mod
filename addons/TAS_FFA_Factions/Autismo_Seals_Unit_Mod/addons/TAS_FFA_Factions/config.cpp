////////////////////////////////////////////////////////////////////
//DeRap: TAS_FFA_Factions (1)\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Wed May 18 21:31:14 2022 : 'file' last modified on Wed Dec 31 19:00:01 1969
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class TAS_FFA_Factions
	{
		name = "TAS FFA Faction Addon";
		units[] = {"TAS_FFA_Sol1Unit","TAS_FFA_OffUnit"};
		weapons[] = {"FFA_soldier1_uniform","FFA_officer_uniform"};
		requiredAddons[] = {"A3_Characters_F"};
		author = "Tolly";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class O_Soldier_base_F;
	class TAS_FFA_Sol1Unit: B_soldier_F
	{
		side = 1;
		author = "Tolly";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "FFA Trooper";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		editorSubcategory = "TAS_SubGroup_Men";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "TAS_FFA_Sol1Unit";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_FFA_Factions\Data\FFA_soluni1.paa"};
		canDeactivateMines = 1;
		engineer = 1;
		attendant = 1;
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"H_Cap_blu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Cap_blu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TAS_FFA_OffUnit: B_soldier_F
	{
		side = 1;
		author = "Tolly";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "FFA Officer";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		editorSubcategory = "TAS_SubGroup_Men";
		model = "\A3\characters_f_beta\INDEP\ia_officer.p3d";
		uniformClass = "TAS_FFA_OffUnit";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_FFA_Factions\Data\FFA_offuni1.paa"};
		canDeactivateMines = 1;
		engineer = 1;
		attendant = 1;
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"H_Cap_blu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Cap_blu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class FFA_soldier1_uniform: Uniform_Base
	{
		author = "Tolly";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "Troopers Uniform (CODEPAT)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_FFA_Factions\Data\FFA_soluni1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TAS_FFA_Sol1Unit";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class FFA_officer_uniform: Uniform_Base
	{
		author = "Tolly";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "Officers Uniform (CODEPAT)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_FFA_Factions\Data\FFA_offuni1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TAS_FFA_OffUnit";
			containerClass = "Supply60";
			mass = 60;
		};
	};
};
