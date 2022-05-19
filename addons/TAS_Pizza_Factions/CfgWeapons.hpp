class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class ItemCore; 
    class UniformItem; 
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 

    class TAS_Dominos_Uniform: Uniform_Base 
    { 
        author = "Ricardo";
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
        displayName = "Dominos Uniform"; /// how would the stuff be displayed in inventory and on ground
		//picture = "Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\UI\dominos_uniform.paa";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa"; /// preview in arsenal/inventory, is blufor combat fatigues
        //picture = "A3\Weapons_F\Data\placeholder_co.paa"; //throws an error about "equip\w\w_a3\weapons_F\Data\placeholder_co.paa" not being found
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d"; /// how does the uniform look when put on ground
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[]=
		{
			"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_pizza_uniform.paa" //textures the suitpack?
		};
        class ItemInfo : UniformItem { 
			uniformModel = "-";
            uniformClass = "TAS_Dominos_BaseUnit"; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
            containerClass = "Supply60"; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
            mass = 60; /// combined weight and volume
        };
    };
	class TAS_PapaJhon_Uniform: Uniform_Base 
    {
        author = "Ricardo";
		scope = 2; 
		allowedSlots[] = {BACKPACK_SLOT};
        displayName = "Papa Jhons Uniform"; 
        //picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		picture = "\A3\characters_f\data\ui\icon_U_OI_CombatUniform_ocamo_ca.paa"; //csat hex fatigues
		//picture = "A3\Weapons_F\Data\placeholder_co.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[]=
		{
			"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_pizza_uniform.paa"
		};
        class ItemInfo : UniformItem { 
            uniformModel = "-";
			uniformClass = "TAS_PapaJhons_BaseUnit"; 
            containerClass = "Supply60"; 
            mass = 60;
        }; 
    };
	//class ACE_Humanitarian_Ration;
	class Item_Base_F;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class TAS_RationPizza: ACE_ItemCore
	{
		author = "Guac";
		displayName = "Pizza";
		descriptionShort = "Pizza";
		model = "\z\ace\addons\field_rations\data\mre_human.p3d";
		//picture = "\z\ace\addons\field_rations\ui\item_mre_human_co.paa";
		picture = "\Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\UI\item_mre_pizza_co.paa";
		scope = 2;
		icon = "iconObject_circle"; //unsure what this does
		mapSize = 0.034;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 25;
		};
		acex_field_rations_consumeTime = 5;
		acex_field_rations_hungerSatiated = 20;
		acex_field_rations_consumeText = "Eww, broccoli on pizza?";
	};
}; 
