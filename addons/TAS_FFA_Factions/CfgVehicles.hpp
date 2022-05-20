class CfgVehicles
{
	class B_Soldier_F;
	class O_Soldier_base_F;
	class TAS_FFA_Officer: B_soldier_F
	{
		side = 2;
		author = "Tolly";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "FFA Officer [Texture Currently Broken]";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "TAS_FFA_Faction";
		editorSubcategory = "TAS_FFAA_SubGroup_Men";
		model = "\A3\characters_f_beta\INDEP\ia_officer.p3d";
		uniformClass = "TAS_FFA_uniformOfficer";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_FFA_Factions\Data\FFA_uniformOfficer.paa"};
		canDeactivateMines = 1;
		engineer = 1;
		attendant = 1;
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"TAS_FFA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"TAS_FFA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class WeaponHolder;
	class Headgear_Base_F;
	class TAS_FFA_Headgear_Helmet: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "FFA Helmet";
		author = "Tolly";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class TAS_FFA_Helmet
			{
				name = "TAS_FFA_Helmet";
				count = 1;
			};
		};
	};

	//************************************************************************************************************************************************************************************************
    //*****             FFA Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    //helmets and carriers
	//TAS_FFA_Helmet, TAS_FFA_Helmet, H_HelmetB_TI_arid_F, TAS_FFA_Helmet
	//V_LegStrapBag_black_F, V_TacVest_blk, V_PlateCarrier1_blk, V_PlateCarrierSpec_blk
	//B_AssaultPack_blk, B_ViperLightHarness_blk_F
	class TAS_FFA_BaseUnit: B_soldier_F
	{
		side = 2;
        author = "Tolly"; 
        //_generalMacro = "B_soldier_F"; //internal BIS debug
        scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "FFA Soldier (Unarmed)"; 
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; //name list this unit draws from
        faction = "TAS_FFA_Faction"; //classname of faction this belongs to,, also sets catagory
		editorSubcategory = "TAS_FFAA_SubGroup_Men";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //Default NATO, The path to the model this character uses. 
        uniformClass = "TAS_FFA_uniformSoldier"; //name of uniform
        hiddenSelections[] = {"Camo","Insignia"}; //declares that model can be changed in its camo and insignia sections // List of model selections which can be changed with hiddenSelectionTextures[]
																															// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_FFA_Factions\Data\FFA_uniformSoldier.paa"};  //sets camo of uniform model // The textures for the selections defined above.
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
		linkedItems[] = {TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_FFA_Sidearm: TAS_FFA_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "FFA Soldier (Pistol)"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_5(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_5(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green)};		// What ammunition the character respawns with.
		linkedItems[] = {TAS_FFA_Helmet, V_LegStrapBag_black_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {TAS_FFA_Helmet, V_LegStrapBag_black_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_FFA_Rifleman: TAS_FFA_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "FFA Rifleman"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_TRG20_ACO_Flash_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_TRG20_ACO_Flash_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_TacVest_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_TacVest_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_FFA_TeamLeader: TAS_FFA_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "FFA Team Leader"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_TRG21_GL_MRCO_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_TRG21_GL_MRCO_F,hgun_Pistol_heavy_01_MRD_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(SmokeShellRed), MAG_2(SmokeShellBlue), MAG_7(1Rnd_HE_Grenade_shell), MAG_4(1Rnd_Smoke_Grenade_shell), MAG_4(UGL_FlareWhite_F), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_556x45_Stanag_red),MAG_2(11Rnd_45ACP_Mag), MAG_2(SmokeShell), MAG_2(SmokeShellRed), MAG_2(SmokeShellBlue), MAG_7(1Rnd_HE_Grenade_shell), MAG_4(1Rnd_Smoke_Grenade_shell), MAG_4(UGL_FlareWhite_F), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_FFA_Operative: TAS_FFA_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "FFA Operative"; 
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
};
