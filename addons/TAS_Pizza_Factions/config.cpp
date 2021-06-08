//adds custom Pizza uniforms, vehicles, and factions, primarily by CatCaptain with fixes by Guac
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
		side = 1; //blufor
        author = "Ricardo"; 
        //_generalMacro = "B_soldier_F"; //internal BIS debug
        scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Dominos Employee"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; //name list this unit draws from
        faction = "Domino_Zimbabwe"; //classname of faction this belongs to
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //Default NATO, The path to the model this character uses. 
        uniformClass = "Dominos_Uniform"; //name of uniform
        hiddenSelections[] = {"Camo","Insignia"}; //declares that model can be changed in its camo and insignia sections // List of model selections which can be changed with hiddenSelectionTextures[]
																															// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_pizza_uniform.paa"};  //sets camo of uniform model // The textures for the selections defined above.
																																						// If empty, no texture is used.
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; // Which weapons the character has.
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; // Which weapons the character respawns with.
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; // Which items the character has.
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; // Which items the character respawns with.
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; // Which items the character has.
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; // Which items the character respawns with.
    };
	class PapaJhons_Employee: O_Soldier_base_F {
        author = "Ricardo"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Papa John Employee"; 
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
        author = "CatCaptain";
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
        displayName = "Dominos Uniform"; /// how would the stuff be displayed in inventory and on ground
		//picture = "Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\UI\dominos_uniform.paa";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa"; /// preview in arsenal/inventory
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d"; /// how does the uniform look when put on ground
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[]=
		{
			"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_pizza_uniform.paa" //textures the suitpack?
		};
        class ItemInfo : UniformItem { 
			uniformModel = "-";
            uniformClass = "Dominos_Employee"; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
            containerClass = "Supply50"; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
            mass = 50; /// combined weight and volume
        }; 
    }; 
	class Papa_John_Uniform: Uniform_Base 
    { 
        author = "CatCaptain";
		scope = 2; 
		allowedSlots[] = {BACKPACK_SLOT};
        displayName = "Papa Jhon Uniform"; 
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa"; 
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[]=
		{
			"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_pizza_uniform.paa"
		};
        class ItemInfo : UniformItem { 
            uniformModel = "-";
			uniformClass = "PapaJhons_Employee"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    
}; 
