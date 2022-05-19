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
		scope = 2;
		scopeCurator = 2;
		displayName = "Pizza";
		author = "Guac";
		vehicleClass = "Items";
		//picture = "Autismo_Seals_Unit_Mod\addons\TAS_Pizza_Factions\Data\UI\item_mre_pizza_co.paa";
		//model = "\A3\Weapons_f\dummyweapon.p3d";
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