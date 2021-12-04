//adds custom Pizza uniforms, vehicles, and factions, primarily by CatCaptain and Ricardo with fixes by Guac
//vehicle CBA event handler compat done, do we need do add compat for units too?
class CfgPatches
{
	class TAS_Pizza_Factions
	{
		name = "TAS Faction Addon";
		units[] = 
		{
			"TAS_Dominos_BaseUnit",
			"TAS_Dominos_Employee",
			"TAS_Dominos_Manager",
			"TAS_Dominos_Operative",
			"TAS_PapaJhons_BaseUnit",
			"TAS_PapaJhons_Employee",
			"TAS_PapaJhons_EmployeeCombat",
			"TAS_PapaJhons_Manager",
			"TAS_PapaJhons_Operative",
			"TAS_Dominos_Offroad",
			"TAS_Dominos_Offroad_HMG",
			"TAS_Dominos_Offroad_AT",
			"TAS_PapaJhons_Offroad",
			"TAS_PapaJhons_Offroad_HMG",
			"TAS_PapaJhons_Offroad_AT",
			"TAS_RationPizza_Item"
		};
		weapons[] = 
		{
			"TAS_RationPizza"
		};
		requiredAddons[] = 
		{
			"A3_Characters_F",
			"ace_field_rations"
		};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class CBA_Extended_EventHandlers_base; //we'll use this for the vehicles' CBA compat later (units already have compat, perhaps through inheritance that didn't work for vics?)

//************************************************************************************************************************************************************************************************
//*****             Definitions                *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
#define MAG_1(a) a
#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_8(a) a, a, a, a, a, a, a, a
#define MAG_9(a) a, a, a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{  
	class TAS_Dominos_Zimbabwe
    { 
        displayName = "Dominos Zimbabwe Employees"; 
        priority = 1; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
	class TAS_Papa_Jhons
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
/*class cfgVehicleClasses //outdated, do not use. Corresponding config entry is vehicleClass = "MySubcategory";
{
	class TAS_SubGroup_Men
	{
		displayName="Meat Shields";
	};
	class TAS_SubGroup_Cars
	{
		displayName="Pizza Delivery Mobile";
	};
	class TAS_SubGroup_APC
	{
		displayName="Armed Pizza Pew Pew";
	};
};*/
//see https://community.bistudio.com/wiki/Eden_Editor:_Object_Categorization, we are interested in subcatagories which are normally "APC", "Men", etc
//catagory is set my "faction" config parameter below
//subcatagory is set by editorSubcategory = "MySubcategory"; in config
class CfgEditorSubcategories
{
	class TAS_SubGroup_Men // Category class, you point to it in editorSubcategory property
	{
		displayName = "Valued Employees"; // Name visible in the list
	};
	class TAS_SubGroup_Cars
	{
		displayName = "Pizza Delivery Mobiles";
	};
};

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class B_Soldier_F; 
	class O_Soldier_base_F;
	
	//************************************************************************************************************************************************************************************************
    //*****             Dominos Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    //helmets and carriers
	//H_Cap_blu, H_PASGT_basic_black_F, H_HelmetB_TI_arid_F, H_HelmetAggressor_F
	//V_LegStrapBag_black_F, V_TacVest_blk, V_PlateCarrier1_blk, V_PlateCarrierSpec_blk
	//B_AssaultPack_blk, B_ViperLightHarness_blk_F
	class TAS_Dominos_BaseUnit: B_soldier_F
	{
		side = 1; //blufor
        author = "CatCaptain"; 
        //_generalMacro = "B_soldier_F"; //internal BIS debug
        scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Dominos Employee (Unarmed)"; 
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; //name list this unit draws from
        faction = "TAS_Dominos_Zimbabwe"; //classname of faction this belongs to,, also sets catagory
		editorSubcategory = "TAS_SubGroup_Men";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //Default NATO, The path to the model this character uses. 
        uniformClass = "TAS_Dominos_Uniform"; //name of uniform
        hiddenSelections[] = {"Camo","Insignia"}; //declares that model can be changed in its camo and insignia sections // List of model selections which can be changed with hiddenSelectionTextures[]
																															// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_pizza_uniform.paa"};  //sets camo of uniform model // The textures for the selections defined above.
																																						// If empty, no texture is used.
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {H_Cap_blu, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {H_Cap_blu, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_Dominos_Employee: TAS_Dominos_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Dominos Employee"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_5(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_5(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green)};		// What ammunition the character respawns with.
		linkedItems[] = {H_Cap_blu, V_LegStrapBag_black_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {H_Cap_blu, V_LegStrapBag_black_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_Dominos_EmployeeCombat: TAS_Dominos_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Dominos Employee (Combat)"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_TRG20_ACO_Flash_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_TRG20_ACO_Flash_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_TacVest_blk, H_PASGT_basic_black_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_TacVest_blk, H_PASGT_basic_black_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_Dominos_Manager: TAS_Dominos_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Dominos Manager"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_TRG21_GL_MRCO_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_TRG21_GL_MRCO_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(SmokeShellRed), MAG_2(SmokeShellBlue), MAG_7(1Rnd_HE_Grenade_shell), MAG_4(1Rnd_Smoke_Grenade_shell), MAG_4(UGL_FlareWhite_F), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(SmokeShellRed), MAG_2(SmokeShellBlue), MAG_7(1Rnd_HE_Grenade_shell), MAG_4(1Rnd_Smoke_Grenade_shell), MAG_4(UGL_FlareWhite_F), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_blk, H_HelmetAggressor_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_blk, H_HelmetAggressor_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_Dominos_Operative: TAS_Dominos_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Dominos Operative"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_SPAR_02_blk_ERCO_Pointer_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_SPAR_02_blk_ERCO_Pointer_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_4(150Rnd_556x45_Drum_Mag_Tracer_F),11Rnd_45ACP_Mag, MAG_2(SmokeShell), MAG_1(SmokeShellRed), MAG_1(SmokeShellBlue), MAG_2(Chemlight_green), MAG_3(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_2(150Rnd_556x45_Drum_Mag_Tracer_F),11Rnd_45ACP_Mag, MAG_2(SmokeShell), MAG_1(SmokeShellRed), MAG_1(SmokeShellBlue), MAG_2(Chemlight_green), MAG_3(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrierSpec_blk, H_HelmetB_TI_arid_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrierSpec_blk, H_HelmetB_TI_arid_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};	
    };
	//************************************************************************************************************************************************************************************************
    //*****             Papa Jhons Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	//class TAS_PapaJhons_BaseUnit: O_Soldier_base_F { 
	class TAS_PapaJhons_BaseUnit: B_soldier_F {
		author = "CatCaptain";
        //_generalMacro = "B_soldier_F";
		side = 0;
        scope = 2; 
        displayName = "Papa Jhons Employee (Unarmed)"; 
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        genericNames = "NATOMen"; 
        faction = "TAS_Papa_Jhons";
		editorSubcategory = "TAS_SubGroup_Men";
        model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";//Default NATO 
        uniformClass = "TAS_PapaJhon_Uniform"; 
        hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Insignia"
		};
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\papaJhons_uniform.paa","Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\Winter_Black_Pads.paa"};  
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {};				// What ammunition the character has.
		respawnMagazines[] = {};		// What ammunition the character respawns with.
		linkedItems[] = {H_Cap_red, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {H_Cap_red, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_PapaJhons_Employee: TAS_PapaJhons_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Papa Jhons Employee"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_5(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_5(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green)};		// What ammunition the character respawns with.
		linkedItems[] = {H_Cap_red, V_LegStrapBag_black_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {H_Cap_red, V_LegStrapBag_black_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_PapaJhons_EmployeeCombat: TAS_PapaJhons_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Papa Jhons Employee (Combat)"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_TRG20_ACO_Flash_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_TRG20_ACO_Flash_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_TacVest_blk, H_PASGT_basic_black_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_TacVest_blk, H_PASGT_basic_black_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_PapaJhons_Manager: TAS_PapaJhons_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Papa Jhons Manager"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_TRG21_GL_MRCO_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_TRG21_GL_MRCO_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(SmokeShellRed), MAG_2(SmokeShellBlue), MAG_7(1Rnd_HE_Grenade_shell), MAG_4(1Rnd_Smoke_Grenade_shell), MAG_4(UGL_FlareWhite_F), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(SmokeShellRed), MAG_2(SmokeShellBlue), MAG_7(1Rnd_HE_Grenade_shell), MAG_4(1Rnd_Smoke_Grenade_shell), MAG_4(UGL_FlareWhite_F), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_blk, H_HelmetAggressor_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_blk, H_HelmetAggressor_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_PapaJhons_Operative: TAS_PapaJhons_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Papa Jhons Operative"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_CTARS_blk_Pointer_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_CTARS_blk_Pointer_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_5(100Rnd_580x42_Mag_Tracer_F),11Rnd_45ACP_Mag, MAG_2(SmokeShell), MAG_1(SmokeShellRed), MAG_1(SmokeShellBlue), MAG_2(Chemlight_green), MAG_3(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_5(100Rnd_580x42_Mag_Tracer_F),11Rnd_45ACP_Mag, MAG_2(SmokeShell), MAG_1(SmokeShellRed), MAG_1(SmokeShellBlue), MAG_2(Chemlight_green), MAG_3(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrierSpec_blk, H_HelmetB_TI_arid_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrierSpec_blk, H_HelmetB_TI_arid_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};	
    };
	
	//********************************************************************************************************************************************************************************************
    //*****            Vehicles              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************

	//we'll use these in a minute for inheritance
	class B_G_Offroad_01_F;
	class B_G_Offroad_01_armed_F;
	class B_G_Offroad_01_AT_F;
	class O_G_Offroad_01_F;
	class O_G_Offroad_01_armed_F;
	class O_G_Offroad_01_AT_F;

	//********************************************************************************************************************************************************************************************
    //*****            Dominos Vehicles              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
	class TAS_Dominos_Offroad: B_G_Offroad_01_F
    {
        author = "CatCaptain";
		crew = "TAS_Dominos_Employee";
        side = 1;
        scope = 2;
        faction = "TAS_Dominos_Zimbabwe";
		editorSubcategory = "TAS_SubGroup_Cars";
        displayName = "Dominos Pizza Delivery Offroad";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_offroad.paa"};
        class Eventhandlers //inherit so that CBA Extended Event Handlers works
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };  
    };
	class TAS_Dominos_Offroad_HMG: B_G_Offroad_01_armed_F
    {
        author = "Guac";
		crew = "TAS_Dominos_EmployeeCombat";
        side = 1;
        scope = 2;
        faction = "TAS_Dominos_Zimbabwe";
		editorSubcategory = "TAS_SubGroup_Cars";
        displayName = "Dominos Pizza Delivery Offroad (HMG)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_offroad.paa"};
        class Eventhandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        }; 
    };
	class TAS_Dominos_Offroad_AT: B_G_Offroad_01_AT_F
    {
        author = "Guac";
		crew = "TAS_Dominos_EmployeeCombat";
        side = 1;
        scope = 2;
        faction = "TAS_Dominos_Zimbabwe";
		editorSubcategory = "TAS_SubGroup_Cars";
        displayName = "Dominos Pizza Delivery Offroad (AT)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\dominos_offroad.paa"};
        class Eventhandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };  
    };
	//********************************************************************************************************************************************************************************************
    //*****            Papa Jhons Vehicles              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
	class TAS_PapaJhons_Offroad: O_G_Offroad_01_F
    {
        author = "CatCaptain";
		crew = "TAS_PapaJhons_Employee";
        side = 0;
        scope = 2;
        faction = "TAS_Papa_Jhons";
		editorSubcategory = "TAS_SubGroup_Cars";
        displayName = "Papa Jhons Pizza Delivery Offroad";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\papaJhons_offroad.paa"};
        class Eventhandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };  
    };
	class TAS_PapaJhons_Offroad_HMG: O_G_Offroad_01_armed_F
    {
        author = "Guac";
		crew = "TAS_PapaJhons_EmployeeCombat";
        side = 0;
        scope = 2;
        faction = "TAS_Papa_Jhons";
		editorSubcategory = "TAS_SubGroup_Cars";
        displayName = "Papa Jhons Pizza Delivery Offroad (HMG)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\papaJhons_offroad.paa"};
        class Eventhandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };  
    };
	class TAS_PapaJhons_Offroad_AT: O_G_Offroad_01_AT_F
    {
        author = "Guac";
		crew = "TAS_PapaJhons_EmployeeCombat";
        side = 0;
        scope = 2;
        faction = "TAS_Papa_Jhons";
		editorSubcategory = "TAS_SubGroup_Cars";
        displayName = "Papa Jhons Pizza Delivery Offroad (AT)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\papaJhons_offroad.paa"};
        class Eventhandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };  
    };
	class Item_Base_F;
	//class ACE_Humanitarian_Ration_Item: Item_Base_F;
	//class ACE_Humanitarian_Ration_Item;
	class TAS_RationPizza_Item: Item_Base_F
	{
		author = "Guac";
		scope = 2;
		scopeCurator = 2;
		displayName = "Pizza";
		vehicleClass = "Items";
		class TransportItems
		{
			class TAS_RationPizza
			{
				name = "TAS_RationPizza";
				count = 1;
			};
		};
	};
};

class CfgGroups
{
	//********************************************************************************************************************************************************************************************
    //*****            Dominos Groups              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
	class West
	{
		class TAS_Dominos_Zimbabwe
		{
			name = "Dominos Zimbabwe";
			//********************************************************************************************************************************************************************************************
			//*****            Dominos Infantry Groups              *****************************************************************************************************************************************************
			//********************************************************************************************************************************************************************************************
			class Infantry
			{
				name = "Valued Employees";
				class TAS_Dominos_EmployeeTeam
				{
					name = "Employee Team";
					side = 1;
					faction = "TAS_Dominos_Zimbabwe";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_Dominos_EmployeeCombatTeam
				{
					name = "Employee Combat Team";
					side = 1;
					faction = "TAS_Dominos_Zimbabwe";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_Dominos_ManagerTeam
				{
					name = "Manager Team";
					side = 1;
					faction = "TAS_Dominos_Zimbabwe";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "TAS_Dominos_Manager";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TAS_Dominos_Manager";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TAS_Dominos_Manager";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TAS_Dominos_Manager";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TAS_Dominos_Manager";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_Dominos_OperativeTeam
				{
					name = "Operative Team";
					side = 1;
					faction = "TAS_Dominos_Zimbabwe";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "TAS_Dominos_Operative";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TAS_Dominos_Operative";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TAS_Dominos_Operative";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TAS_Dominos_Operative";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TAS_Dominos_Operative";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_Dominos_ShiftTeam
				{
					name = "Minimum Wage Team";
					side = 1;
					faction = "TAS_Dominos_Zimbabwe";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "TAS_Dominos_Manager";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_Dominos_ShiftCombatTeam
				{
					name = "Hazard Pay Team";
					side = 1;
					faction = "TAS_Dominos_Zimbabwe";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "TAS_Dominos_Manager";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
			};
			//********************************************************************************************************************************************************************************************
			//*****            Dominos Vehicle Groups              *****************************************************************************************************************************************************
			//********************************************************************************************************************************************************************************************
			class Vehicles
			{
				name = "Pizza Delivery Teams";
				class TAS_Dominos_MotorizedOffroad
				{
					name = "Pizza Delivery Team";
					side = 1;
					faction = "TAS_Dominos_Zimbabwe";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "TAS_Dominos_Offroad";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TAS_Dominos_Manager";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "TAS_Dominos_Employee";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
				};
				class TAS_Dominos_MotorizedCombatOffroad
				{
					name = "Combat Pizza Delivery Team";
					side = 1;
					faction = "TAS_Dominos_Zimbabwe";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "TAS_Dominos_Offroad";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TAS_Dominos_Manager";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "TAS_Dominos_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
				};
				class TAS_Dominos_Technicals
				{
					name = "Pizza Delivery Technicals";
					side = 1;
					faction = "TAS_Dominos_Zimbabwe";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "TAS_Dominos_Offroad_HMG";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TAS_Dominos_Offroad_HMG";
						rank = "SERGEANT";
						position[] = {10, -10, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TAS_Dominos_Offroad_AT";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
					};
				};
			};
		};		
	};
	class East
	{
		class TAS_Papa_Jhons
		{
			name = "Papa Jhons";
			//********************************************************************************************************************************************************************************************
			//*****            Papa Jhons Infantry Groups              *****************************************************************************************************************************************************
			//********************************************************************************************************************************************************************************************
			class Infantry
			{
				name = "Valued Employees";
				class TAS_PapaJhons_EmployeeTeam
				{
					name = "Employee Team";
					side = 0;
					faction = "TAS_Papa_Jhons";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_PapaJhons_EmployeeCombatTeam
				{
					name = "Employee Combat Team";
					side = 0;
					faction = "TAS_Papa_Jhons";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_PapaJhons_ManagerTeam
				{
					name = "Manager Team";
					side = 0;
					faction = "TAS_Papa_Jhons";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Manager";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Manager";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Manager";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Manager";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Manager";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_PapaJhons_OperativeTeam
				{
					name = "Operative Team";
					side = 0;
					faction = "TAS_Papa_Jhons";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Operative";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Operative";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Operative";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Operative";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Operative";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_PapaJhons_ShiftTeam
				{
					name = "Minimum Wage Team";
					side = 0;
					faction = "TAS_Papa_Jhons";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Manager";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				class TAS_PapaJhons_ShiftCombatTeam
				{
					name = "Hazard Pay Team";
					side = 0;
					faction = "TAS_Papa_Jhons";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Manager";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
			};
			//********************************************************************************************************************************************************************************************
			//*****            Papa Jhons Vehicle Groups              *****************************************************************************************************************************************************
			//********************************************************************************************************************************************************************************************
			class Vehicles
			{
				name = "Pizza Delivery Teams";
				class TAS_PapaJhons_MotorizedOffroad
				{
					name = "Pizza Delivery Team";
					side = 0;
					faction = "TAS_Papa_Jhons";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Offroad";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Manager";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Employee";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
				};
				class TAS_PapaJhons_MotorizedCombatOffroad
				{
					name = "Combat Pizza Delivery Team";
					side = 0;
					faction = "TAS_Papa_Jhons";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Offroad";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Manager";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TAS_PapaJhons_EmployeeCombat";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
				};
				class TAS_PapaJhons_Technicals
				{
					name = "Pizza Delivery Technicals";
					side = 0;
					faction = "TAS_Papa_Jhons";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Offroad_HMG";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Offroad_HMG";
						rank = "SERGEANT";
						position[] = {10, -10, 0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TAS_PapaJhons_Offroad_AT";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
					};
				};
			};
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
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class TAS_RationPizza: ACE_ItemCore
	{
		author = "Guac";
		displayName = "Pizza";
		descriptionShort = "Pizza";
		model = "\z\ace\addons\field_rations\data\mre_human.p3d";
		picture = "Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\UI\item_mre_pizza_co.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 25;
		};
		acex_field_rations_consumeTime = 5;
		acex_field_rations_hungerSatiated = 20;
		acex_field_rations_consumeText = "Eww, broccoli on pizza?";
	};
}; 
