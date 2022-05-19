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
