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
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "TAS_FFA_Faction";
		editorSubcategory = "TAS_SubGroup_Men";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "FFA_soldier1_uniform";
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
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "TAS_FFA_Faction";
		editorSubcategory = "TAS_SubGroup_Men";
		model = "\A3\characters_f_beta\INDEP\ia_officer.p3d";
		uniformClass = "FFA_officer_uniform";
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
