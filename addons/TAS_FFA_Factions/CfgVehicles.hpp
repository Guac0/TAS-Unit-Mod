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
		displayName = "Officer [Texture Currently Broken]";
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
		displayName = "Helmet";
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
	class B_FieldPack_blk;
	class TAS_B_FieldPack_blk_Medic: B_FieldPack_blk
	{
		author = "Guac";
		//_generalMacro = "B_FieldPack_cbr_Medic";
		scope = 1;
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 1;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
		};
	};

	//************************************************************************************************************************************************************************************************
    //*****            FFA Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    //helmets and carriers
	//TAS_FFA_Helmet, TAS_FFA_Helmet, H_HelmetB_TI_arid_F, TAS_FFA_Helmet
	//V_LegStrapBag_black_F, V_PlateCarrier1_blk, V_PlateCarrier1_blk, V_PlateCarrierSpec_blk
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
        displayName = "Soldier (Unarmed)"; 
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
        canDeactivateMines = false;				// Can this character deactivate mines?
		engineer = false;						// Can this character repair vehicles?
		attendant = 0;							// Can this character heal soldiers?
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
        displayName = "Soldier (Pistol)"; 
        //canDeactivateMines = true;				// Can this character deactivate mines?
		//engineer = true;						// Can this character repair vehicles?
		//attendant = 1;							// Can this character heal soldiers?
		weapons[] = {hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_5(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_5(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green)};		// What ammunition the character respawns with.
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
        displayName = "Rifleman"; 
        //canDeactivateMines = true;				// Can this character deactivate mines?
		//engineer = true;						// Can this character repair vehicles?
		//attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_CTAR_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_CTAR_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_580x42_Mag_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_580x42_Mag_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_FFA_TeamLeader: TAS_FFA_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Team Leader"; 
        //canDeactivateMines = true;				// Can this character deactivate mines?
		//engineer = true;						// Can this character repair vehicles?
		//attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_CTAR_GL_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_CTAR_GL_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_580x42_Mag_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(SmokeShellRed), MAG_2(SmokeShellBlue), MAG_7(1Rnd_HE_Grenade_shell), MAG_4(1Rnd_Smoke_Grenade_shell), MAG_4(UGL_FlareWhite_F), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_580x42_Mag_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(SmokeShellRed), MAG_2(SmokeShellBlue), MAG_7(1Rnd_HE_Grenade_shell), MAG_4(1Rnd_Smoke_Grenade_shell), MAG_4(UGL_FlareWhite_F), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
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
        displayName = "Operative"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_CTAR_GL_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_CTAR_GL_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_4(100Rnd_580x42_Mag_F),6Rnd_45ACP_Cylinder, MAG_2(SmokeShell), MAG_1(SmokeShellRed), MAG_1(SmokeShellBlue), MAG_2(Chemlight_green), MAG_2(HandGrenade), MAG_5(1Rnd_HE_Grenade_shell), MAG_2(1Rnd_Smoke_Grenade_shell), MAG_2(UGL_FlareWhite_F)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_2(100Rnd_580x42_Mag_F),6Rnd_45ACP_Cylinder, MAG_2(SmokeShell), MAG_1(SmokeShellRed), MAG_1(SmokeShellBlue), MAG_2(Chemlight_green), MAG_3(HandGrenade), MAG_2(HandGrenade), MAG_5(1Rnd_HE_Grenade_shell), MAG_2(1Rnd_Smoke_Grenade_shell), MAG_2(UGL_FlareWhite_F)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrierSpec_blk, H_HelmetB_TI_arid_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrierSpec_blk, H_HelmetB_TI_arid_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};	
    };

	//more normal units 
	class TAS_FFA_Medic: TAS_FFA_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Medic"; 
        //canDeactivateMines = true;				// Can this character deactivate mines?
		//engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_CTAR_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_CTAR_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_10(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_10(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_580x42_Mag_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_580x42_Mag_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
		backpack = "TAS_B_FieldPack_blk_Medic";
	};
	class TAS_FFA_Radioman: TAS_FFA_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Radioman"; 
        //canDeactivateMines = true;				// Can this character deactivate mines?
		//engineer = true;						// Can this character repair vehicles?
		//attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_CTAR_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_CTAR_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_580x42_Mag_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_580x42_Mag_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
		backpack = "B_RadioBag_01_black_F";
	};
	class TAS_FFA_Machinegunner: TAS_FFA_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Machinegunner"; 
        //canDeactivateMines = true;				// Can this character deactivate mines?
		//engineer = true;						// Can this character repair vehicles?
		//attendant = 1;							// Can this character heal soldiers?
		weapons[] = {LMG_03_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {LMG_03_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(200Rnd_556x45_Box_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(200Rnd_556x45_Box_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
		backpack = "B_AssaultPack_blk";
	};
	class TAS_FFA_Rifleman_AT: TAS_FFA_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Rifleman AT"; 
        //canDeactivateMines = true;				// Can this character deactivate mines?
		//engineer = true;						// Can this character repair vehicles?
		//attendant = 1;							// Can this character heal soldiers?
		weapons[] = {launch_MRAWS_green_rail_F,arifle_CTAR_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {launch_MRAWS_green_rail_F,arifle_CTAR_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(30Rnd_580x42_Mag_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(30Rnd_580x42_Mag_F),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
		backpack = "G_FieldPack_LAT2";
	};
	class TAS_FFA_Marksman: TAS_FFA_BaseUnit
	{
        author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Marksman"; 
        //canDeactivateMines = true;				// Can this character deactivate mines?
		//engineer = true;						// Can this character repair vehicles?
		//attendant = 1;							// Can this character heal soldiers?
		weapons[] = {srifle_DMR_03_SOS_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {srifle_DMR_03_SOS_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_6(20Rnd_762x51_Mag),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_6(20Rnd_762x51_Mag),MAG_1(6Rnd_45ACP_Cylinder), MAG_2(SmokeShell), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_blk, TAS_FFA_Helmet, ItemMap, ItemCompass, ItemWatch, ItemRadio};		// Which items the character respawns with.
    };
	class TAS_FFA_Juggernaut: TAS_FFA_BaseUnit
	{
        armor				= 100;	// total hit points (meaning global "health") of the object. //base 2
									// keep constant among various soldiers so that the hit points armor coefficients remains on the same scale
		armorStructural		= 20;	// divides all damage taken to total hit point, either directly or through hit point passThrough coefficient. //base 0.4
									// must be adjusted for each model to achieve consistent total damage results
		explosionShielding	= 2; // for consistent explosive damage after adjusting = ( armorStructural / 10 ) //base 0.04
		author = "Guac"; 
		/*cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};*/				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        displayName = "Juggernaut"; 
        canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		weapons[] = {arifle_CTAR_GL_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character has.
        respawnWeapons[] = {arifle_CTAR_GL_blk_aco_flash_F,hgun_Pistol_heavy_02_F,Throw,Put}; // Which weapons the character respawns with.
        Items[] = {MAG_3(FirstAidKit)};				// Which items the character has.
		RespawnItems[] = {MAG_3(FirstAidKit)};			// Which items the character respawns with.
		magazines[] = {MAG_4(100Rnd_580x42_Mag_F),6Rnd_45ACP_Cylinder, MAG_2(SmokeShell), MAG_1(SmokeShellRed), MAG_1(SmokeShellBlue), MAG_2(Chemlight_green), MAG_3(HandGrenade), MAG_7(1Rnd_HE_Grenade_shell), MAG_4(1Rnd_Smoke_Grenade_shell), MAG_4(UGL_FlareWhite_F), MAG_2(Chemlight_green), MAG_2(HandGrenade)};				// What ammunition the character has.
		respawnMagazines[] = {MAG_2(100Rnd_580x42_Mag_F),6Rnd_45ACP_Cylinder, MAG_2(SmokeShell), MAG_1(SmokeShellRed), MAG_1(SmokeShellBlue), MAG_2(Chemlight_green), MAG_3(HandGrenade), MAG_7(1Rnd_HE_Grenade_shell), MAG_4(1Rnd_Smoke_Grenade_shell), MAG_4(UGL_FlareWhite_F), MAG_2(Chemlight_green), MAG_2(HandGrenade)};		// What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrierSpec_blk, H_HelmetB_TI_arid_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};				// Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrierSpec_blk, H_HelmetB_TI_arid_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		backpack = "B_AssaultPack_blk";
    };
};
