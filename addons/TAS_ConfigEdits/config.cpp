//Halves the weight of mortar ammunition, allowing for greater loads to be carried (both for convience for transferring between crate and gun, and to make entirely man-portable mortars easier)
//~~Additionally, adds ACE trenches compatibility to Scottish Highlands map~~ Temp removed
//Lowers weapon sway to 50%
//Made by Guac
class CfgPatches {

	class TAS_Config_Edits
	{
		name = "TAS Config Edits";
		units[] = {};
		weapons[] = {
			"TAS_ViperHelmet_hex_NoThermals",
			"TAS_ViperHelmet_ghex_NoThermals",
			"TAS_ENVG_black_NoThermals",
			"TAS_ENVG_green_NoThermals",
			"TAS_ENVG_grey_NoThermals",
			"TAS_Nightstalker_NoThermals",
			"V_RebreatherB" //i guess also include this even tho its just an edit?
		};
		requiredAddons[] = {"ace_mk6mortar","ace_trenches",/*"cwr3_intro",*/"A3_Data_F_Sams_Loadorder","A3_Characters_F"/*"oski_corran"*/}; //TODO: find updated loadorder for old man
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};

};

/*
class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMain {
        cwr3_intro = ""; // CWR gets rid of the editor/multiplayer/campaign buttons for some reason
    };
};*/

class cfgWeapons {
	//CTRG
	class NVGogglesB_blk_F;
	class TAS_ENVG_black_NoThermals: NVGogglesB_blk_F {
		//author = "Bohemia Interactive";
		displayName = "ENVG-II (Black) [No Thermals]";
		visionMode[] = {"Normal", "NVG"};
		thermalMode[] = {};	//default is 0
	};
	class NVGogglesB_grn_F;
	class TAS_ENVG_green_NoThermals: NVGogglesB_grn_F {
		//author = "Bohemia Interactive";
		displayName = "ENVG-II (Green) [No Thermals]";
		visionMode[] = {"Normal", "NVG"};
		thermalMode[] = {};	//default is 0
	};
	class NVGogglesB_gry_F;
	class TAS_ENVG_grey_NoThermals: NVGogglesB_gry_F {
		//author = "Bohemia Interactive";
		displayName = "ENVG-II (Grey) [No Thermals]";
		visionMode[] = {"Normal", "NVG"};
		thermalMode[] = {};	//default is 0
	};

	//VIPER
	class H_HelmetO_ViperSP_hex_F;
	class TAS_ViperHelmet_hex_NoThermals: H_HelmetO_ViperSP_hex_F {
		//author = "Bohemia Interactive";
		displayName = "Special Purpose Helmet (Hex) [No Thermals]";
		//subItems[] = {"Integrated_NVG_F"};
		subItems[] = {"TAS_ENVG_black_NoThermals"};
	};
	class TAS_ViperHelmet_ghex_NoThermals: TAS_ViperHelmet_hex_NoThermals
	{
		//author = "Bohemia Interactive";
		displayName = "Special Purpose Helmet (Green Hex) [No Thermals]";
		picture = "\A3\Characters_F_Exp\OPFOR\Data\UI\icon_H_HelmetO_ViperSP_ghex_F_ca.paa";
		DLC = "Expansion";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\headgear_vipersp_tna_co.paa"};
	};

	//nightstalker
	class optic_Nightstalker;
	class InventoryOpticsItem_Base_F;
	class TAS_Nightstalker_NoThermals: optic_Nightstalker
	{
		//author = "Bohemia Interactive";

		displayName = "Nightstalker [No Thermals]";
		/*class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NCTALKEP
				{
					visionMode[] = {"Normal", "NVG"};
					thermalMode[] = {};
				};
			};
		};*/
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 12;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_f\acc\reticle_nightstalker_F";
			class OpticsModes
			{
				class NCTALKEP
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsZoomMin = 0.025;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {200};
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal", "NVG"};
					thermalMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					discreteDistanceInitIndex = 0;
				};
				class Iron: NCTALKEP
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"", ""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
		inertia = 0.2;
		ACE_ScopeHeightAboveRail = 5.54325;
		ACE_ScopeAdjust_Vertical[] = {-4, 30};
		ACE_ScopeAdjust_Horizontal[] = {-6, 6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
	};


	////////////////////////////////////////////////////
	////////////////// Rebreather //////////////////////
	////////////////////////////////////////////////////
	//armor isnt edited so advised that you increase player health
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_RebreatherB: Vest_Camo_Base //NATO rebreather that other ones inherit from.
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100"; //bandalier is supply 80, carrier special rig is 100, LBV Grenadier harness is 120, carrier rig is supply 140
			class HitpointsProtectionInfo
			{
				/*class Neck //rebreather doesnt have this by default
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms //rebreather doesnt have this by default
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};*/
				class Chest //rebreather doesnt have this by default
				{
					hitpointName = "HitChest";
					armor = 30; // GA carrier rig is 78
					passThrough = 0.3; // GA carrier rig is 0.6
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30; //default 8, GA carrier rig is 78
					passThrough = 0.3; //default 0.5, GA carrier rig is 0.6
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16; //default 8, GA carrier rig is 16
					passThrough = 0.3; //default 0.5, GA carrier rig is 0.3
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16; //default 8, GA carrier rig is 16
					passThrough = 0.3; //default 0.5, GA carrier rig is 0.3
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3; //default 0.5, GA carrier rig is 0.6
				};
			};
		};
	};
	

	/* how aegis does it
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_Rangemaster_belt: Vest_NoCamo_Base
	{
		displayName = "$STR_A3_A_CfgWeapons_V_Rangemaster_belt0";
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	*/
};

class cfgMagazines {
    class 8Rnd_82mm_Mo_shells;
    class ACE_1Rnd_82mm_Mo_HE: 8Rnd_82mm_Mo_shells {
        /*count = 1;
        scope = 2;
        scopeCurator = 2;
        EGVAR(arsenal,hide) = -1;
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(magazine_HE_displayName);
        displayNameShort = "";
        descriptionShort = CSTRING(magazine_descriptionShort);
        model = QPATHTOF(data\l16_ammo_he.p3d);
        picture = QPATHTOF(UI\w_l16_ammo_he_ca.paa);*/
        mass = 25;
    };
    class 8Rnd_82mm_Mo_Smoke_white;
    class ACE_1Rnd_82mm_Mo_Smoke: 8Rnd_82mm_Mo_Smoke_white {
        /*count = 1;
        scope = 2;
        scopeCurator = 2;
        EGVAR(arsenal,hide) = -1;
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(magazine_Smoke_displayName);
        displayNameShort = "";
        descriptionShort = CSTRING(magazine_descriptionShort);
        model = QPATHTOF(data\l16_ammo_smk_white.p3d);
        picture = QPATHTOF(UI\w_l16_ammo_smk_white_ca.paa);*/
        mass = 25;
    };
    class 8Rnd_82mm_Mo_Flare_white;
    class ACE_1Rnd_82mm_Mo_Illum: 8Rnd_82mm_Mo_Flare_white {
        /*count = 1;
        scope = 2;
        scopeCurator = 2;
        EGVAR(arsenal,hide) = -1;
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(magazine_Illum_displayName);
        displayNameShort = "";
        descriptionShort = CSTRING(magazine_descriptionShort);
        model = QPATHTOF(data\l16_ammo_illum.p3d);
        picture = QPATHTOF(UI\w_l16_ammo_illum_ca.paa);*/
        mass = 25;
    };
    class 8Rnd_82mm_Mo_guided;
    class ACE_1Rnd_82mm_Mo_HE_Guided: 8Rnd_82mm_Mo_guided {
        /*count = 1;
        scope = 2;
        scopeCurator = 2;
        EGVAR(arsenal,hide) = -1;
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(magazine_HE_Guided_displayName);
        displayNameShort = "";
        descriptionShort = CSTRING(magazine_descriptionShort);
        model = QPATHTOF(data\l16_ammo_he.p3d);
        picture = QPATHTOF(UI\w_l16_ammo_he_ca.paa);*/
        mass = 25;
    };
    class 8Rnd_82mm_Mo_LG;
    class ACE_1Rnd_82mm_Mo_HE_LaserGuided: 8Rnd_82mm_Mo_LG {
        /*count = 1;
        scope = 2;
        scopeCurator = 2;
        EGVAR(arsenal,hide) = -1;
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(magazine_HE_LaserGuided_displayName);
        displayNameShort = "";
        descriptionShort = CSTRING(magazine_descriptionShort);
        model = QPATHTOF(data\l16_ammo_he.p3d);
        picture = QPATHTOF(UI\w_l16_ammo_he_ca.paa);*/
        mass = 25;
    };
};

/*class cfgSurfaces {
	class Default{};
	//class oski_corran_thistle_stony_Surface: Default
	//{
		files = "oski_corran_thistle_stony_*";
		rough = 0.08;
		maxSpeedCoef = 0.75;
		dust = 0.05;
		soundEnviron = "drygrass";
		surfaceFriction = 1.8;
		character = "oski_corran_thistle_stony_Character";
		soundHit = "soft_ground";
		impact = "hitgroundsoft";
		lucidity = 4;
		grassCover = 0.1;
	};
	class oski_corran_wildgrass_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_ground_forest_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_leaves_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_wornground_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_strdirt_Surface: Default
	{
		ACE_canDig = 1;
	};
	//class oski_corran_concrete_Surface: Default
	//{
	//};
	class oski_corran_beach_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_grass_green_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_corran_asphalt_Surface: Default
	{
	};
	class oski_corran_mud_Surface: Default
	{
		ACE_canDig = 1;
	};
	class oski_main_road_surface: oski_corran_asphalt_Surface
	{
		character = "empty";
		files = "oski_main_road*";
	};
	class oski_roadtarmac_highway_surface: oski_corran_asphalt_Surface
	{
		character = "empty";
		files = "oski_roadtarmac_highway*";
	};
	class oski_roaddirt_path_surface: oski_corran_wornground_Surface
	{
		character = "empty";
		files = "oski_roaddirt_path*";
		ACE_canDig = 1;
	};
	class oski_roaddirt_road_surface: oski_corran_wornground_Surface
	{
		character = "empty";
		files = "oski_roaddirt_road*";
		ACE_canDig = 1;
	};
};
*/

class CfgImprecision
{
	class Primary
	{
		verticalRadius = 0.175; //0.5
		horizontalRadius = 0.035; //0.1
	};
	class Secondary
	{
		verticalRadius = 0.035; //0.1
		horizontalRadius = 0.175; //0.5
	};

	/*
	//Vanilla
	class Primary
	{
		fatigue = 1;
		verticalRadius = 0.5;
		horizontalRadius = 0.1;
		size = 1;
		maxSize = 10;
		speed = 0.2;
		maxSpeed = 2;
		damage = 5;
		inertia = 0;
		breathing = 0.1;
	};
	class Secondary
	{
		fatigue = 1;
		verticalRadius = 0.1;
		horizontalRadius = 0.5;
		size = 1;
		maxSize = 40;
		speed = 0.4;
		maxSpeed = 0.4;
		damage = 10;
		inertia = 1;
		breathing = 1;
	};
	//50%
	class Primary
	{
		verticalRadius = 0.25; //0.25
		horizontalRadius = 0.05; //0.05
	};
	class Secondary
	{
		verticalRadius = 0.05; //0.05
		horizontalRadius = 0.25; //0.25
	};
	
	//10%
	class CfgImprecision
	{
		class Primary
		{
			verticalRadius = 0.15;
			horizontalRadius = 0.1;
		};
		class Secondary
		{
			verticalRadius = 0.15;
			horizontalRadius = 0.1;
		};
	};

	//0%
	class CfgImprecision
	{
		class Primary
		{
			verticalRadius = 0;
			horizontalRadius = 0;
		};
		class Secondary
		{
			verticalRadius = 0;
			horizontalRadius = 0;
		};
	};
	*/
};

class CfgMovesFatigue { 
	staminaDuration = 180; //total amount of stamina. default 60
	staminaCooldown = 5; //when you run out of stamina the sprinting is disabled for this duration. default 10
	staminaRestoration = 15; //time required for your current stamina pool (total stamina - inventory load) to restore. default 30
	aimPrecisionSpeedCoef = 5; //aimPrecision adjusting rate coefficient. default 5
	terrainDrainSprint = -1; //when terrain gradient disable sprint, this stamina value is added to every animation state. default -1
	terrainDrainRun = -1; //when terrain gradient enable force walk, this stamina value is added to every animation state. default -1
	terrainSpeedCoef = 0.9; //when terrain gradient disable sprint, animation speed is multiplied by this value. default 0.9

	/*
	//vanilla
	class CfgMovesFatigue
	{
		staminaDuration = 60;
		staminaCooldown = 10;
		staminaRestoration = 30;
		aimPrecisionSpeedCoef = 5;
		terrainDrainSprint = -1;
		terrainDrainRun = -1;
		terrainSpeedCoef = 0.9;
	};
	*/
};

class CfgBreathing
{
	maxHoldTime = 15; //was 12
	coefSpeed = 2; //was 2.5
	outOfBreathCoef = 3; //was 5
	/*
	//vanilla
	maxHoldTime = 8;
	inhaleDuration = 1.5;
	coefSpeed = 10;
	outOfBreathCoef = 20;
	*/
};
class CfgWeaponHandling
{
	class SwayDistortion
	{
		rate = 5; //was 6
		decay = 2.5; //was 3
		maximum = 3.5; //was 4
		//gunnerCoef = 1.2;
		/*
		//vanilla
		rate = 14;
		decay = 7;
		maximum = 10;
		gunnerCoef = 1.2;
		*/
	};
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class LadderCivilStatic;
		class LadderCivilUpLoop: LadderCivilStatic
		{
			speed = "1.05/(2/3)"; //unsure exactly, but google is my friend and it compiles
		};
	};
};
class CfgAnimation
{
	ladderSpeed = "0.5*2"; //2x speed, obviously
};
