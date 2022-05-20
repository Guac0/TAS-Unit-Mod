class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class TAS_FFA_uniformSoldier: Uniform_Base
	{
		author = "Tolly";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "Troopers Uniform (CODEPAT)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_FFA_Factions\Data\FFA_uniformSoldier.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TAS_FFA_Soldier";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class TAS_FFA_uniformOfficer: Uniform_Base
	{
		author = "Tolly";
		scope = 2;
		allowedSlots[] = {"BACKPACK_SLOT"};
		displayName = "Officers Uniform (CODEPAT) [Texture Currently Broken]";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_FFA_Factions\Data\FFA_uniformOfficer.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "TAS_FFA_Officer";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class H_HelmetIA;
	class TAS_FFA_Helmet: H_HelmetIA
	{ 
		author = "Tolly";
		displayName = "FFA Helmet";
		//picture = "A3\Weapons_F\Data\placeholder_co.paa"; //doesnt work as an inventory picture
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_FFA_Factions\Data\FFA_helmet.paa"};
	};
};
