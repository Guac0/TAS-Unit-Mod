//adds custom Pizza uniforms, vehicles, and factions, primarily by CatCaptain
class CfgPatches
{
	class TAS_Pizza_Factions
	{
		name = "TAS Faction Addon";
		units[] = 
		{
			"Dominos_Employee",
			"PapaJhons_Employee",
			"Custom_Offroad_F2",
			"Custom_Offroad_F3"
		};
		weapons[] = {};
		requiredAddons[] = 
		{
			"A3_Characters_F"
		};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{  
	class Domino_Zimbabwe
    { 
        displayName = "Dominos Zimbabwe Employees"; 
        priority = 1; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
	class Papa_John
	{
		displayName = "Papa Jhons Employees";
		priority = 1;
		side = 0;
		icon = "";
	};
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 
class cfgVehicleClasses
{
	class My_SubGroup_Men
	{
		displayName="Meat Shields";
	};
	class My_SubGroup_Cars
	{
		displayName="Pizza Delivery Mobile";
	};
	class My_SubGroup_APC
	{
		displayName="Armed Pizza Pew Pew";
	};
};

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class B_Soldier_F; 
	class O_Soldier_base_F;
	class O_G_Offroad_01_F;
	class B_G_Offroad_01_F;
	
    class Dominos_Employee: B_soldier_F {
		side = 1;
        author = "Ricardo"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Dominos Manager"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Domino_Zimbabwe";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //Default NATO 
        uniformClass = "Dominos_Uniform"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_pizza_uniform.paa"};  //hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_pizza_uniform.paa"};
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };
	class PapaJhons_Employee: O_Soldier_base_F {
        author = "Ricardo"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Papa John Manager"; 
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        genericNames = "NATOMen"; 
        faction = "Papa_John";
        model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";//Default NATO 
        uniformClass = "Papa_John_Uniform"; 
        hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Insignia"
		};
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\papa_john_uniform.paa","Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\Winter_Black_Pads.paa"};  
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };
	class Custom_Offroad_F2: O_G_Offroad_01_F
    {
        crew = "PapaJhons_Employee";
        side = 0;
        scope = 2;
        faction = "Papa_John";
        displayName = "Papa Johns Pizza Delivery Offroad";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\offroad_painted_2.paa"};
        class EventHandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
        };  
    };
	class Custom_Offroad_F3: B_G_Offroad_01_F
    {
        crew = "Dominos_Employee";
        side = 1;
        scope = 2;
        faction = "Domino_Zimbabwe";
        displayName = "Dominos Pizza Delivery Offroad";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_offroad.paa"};
        class EventHandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
        };  
    };
};

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


    class Dominos_Uniform: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Dominos Uniform"; 
		//picture = "Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\UI\dominos_uniform.paa";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d"; 
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[]=
		{
			"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_folded.paa"
		};
        class ItemInfo : UniformItem { 
            uniformClass = "Dominos_Uniform"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
	class Papa_John_Uniform: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Papa John Uniform"; 
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        class ItemInfo : UniformItem { 
            uniformClass = "Papa_John_Uniform"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    
}; 
