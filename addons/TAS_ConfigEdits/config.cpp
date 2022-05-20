//Halves the weight of mortar ammunition, allowing for greater loads to be carried (both for convience for transferring between crate and gun, and to make entirely man-portable mortars easier)
//Additionally, adds ACE trenches compatibility to Scottish Highlands map
//Made by Guac
class CfgPatches {

	class TAS_Config_Edits
	{
		name = "TAS Config Edits";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"ace_mk6mortar","ace_trenches","oski_corran"};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};

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

class cfgSurfaces {
	class Default{};
	/*class oski_corran_thistle_stony_Surface: Default
	{
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
	};*/
	class oski_corran_wildgrass_Surface: Default
	{
		/*files = "oski_corran_wildgrass_*";
		rough = 0.08;
		maxSpeedCoef = 0.75;
		dust = 0.05;
		soundEnviron = "forest";
		surfaceFriction = 1.8;
		character = "oski_corran_wildgrass_Character";
		soundHit = "soft_ground";
		impact = "hitgroundsoft";
		lucidity = 4;
		grassCover = 0.1;*/
		ACE_canDig = 1;
	};
	class oski_corran_ground_forest_Surface: Default
	{
		/*files = "oski_corran_ground_forest_*";
		rough = 0.08;
		maxSpeedCoef = 0.6;
		dust = 0;
		soundEnviron = "forest";
		surfaceFriction = 1.8;
		character = "oski_corran_ground_forest_Character";
		soundHit = "soft_ground";
		impact = "hitgroundsoft";
		lucidity = 4;
		grassCover = 0.1;*/
		ACE_canDig = 1;
	};
	class oski_corran_leaves_Surface: Default
	{
		/*files = "oski_corran_leaves_*";
		rough = 0.08;
		maxSpeedCoef = 0.6;
		dust = 0;
		soundEnviron = "forest";
		surfaceFriction = 1.8;
		character = "oski_corran_leaves_Character";
		soundHit = "soft_ground";
		impact = "hitgroundsoft";
		lucidity = 4;
		grassCover = 0.1;*/
		ACE_canDig = 1;
	};
	class oski_corran_wornground_Surface: Default
	{
		/*files = "oski_corran_wornground_*";
		rough = 0.09;
		maxSpeedCoef = 0.9;
		dust = 0.6;
		soundEnviron = "dirt";
		surfaceFriction = 1.8;
		character = "oski_corran_wornground_Character";
		soundHit = "hard_ground";
		impact = "hitgroundsoft";
		lucidity = 0.7;
		grassCover = 0.0;*/
		ACE_canDig = 1;
	};
	class oski_corran_strdirt_Surface: Default
	{
		/*files = "oski_corran_strdirt_*";
		rough = 0.09;
		maxSpeedCoef = 0.6;
		dust = 0.6;
		soundEnviron = "dirt";
		surfaceFriction = 1.8;
		character = "oski_corran_strdirt_Character";
		soundHit = "hard_ground";
		impact = "hitgroundsoft";
		lucidity = 3;
		grassCover = 0.0;*/
		ACE_canDig = 1;
	};
	/*class oski_corran_concrete_Surface: Default
	{
		files = "oski_corran_concrete_*";
		rough = 0.09;
		maxSpeedCoef = 1;
		dust = 0.0;
		soundEnviron = "concrete";
		surfaceFriction = 2.5;
		character = "Empty";
		soundHit = "concrete";
		impact = "hitconcrete";
		lucidity = 0.3;
		grassCover = 0.05;
	};*/
	class oski_corran_beach_Surface: Default
	{
		/*files = "oski_corran_beach_*";
		rough = 0.09;
		maxSpeedCoef = 0.75;
		dust = 0.6;
		soundEnviron = "sand";
		surfaceFriction = 1.8;
		character = "oski_corran_beach_Character";
		soundHit = "soft_ground";
		impact = "hitgroundsoft";
		lucidity = 0.7;
		grassCover = 0.03;*/
		ACE_canDig = 1;
	};
	class oski_corran_grass_green_Surface: Default
	{
		/*files = "oski_corran_grass_green_*";
		rough = 0.09;
		maxSpeedCoef = 0.75;
		dust = 0.05;
		soundEnviron = "grass";
		surfaceFriction = 1.8;
		character = "oski_corran_grass_green_Character";
		soundHit = "soft_ground";
		impact = "hitgroundsoft";
		lucidity = 3.5;
		grassCover = 0.03;*/
		ACE_canDig = 1;
	};
	/*class oski_corran_asphalt_Surface: Default
	{
		files = "oski_corran_asphalt_*";
		rough = 0.09;
		maxSpeedCoef = 1;
		dust = 0.05;
		surfaceFriction = 2.5;
		soundEnviron = "tarmac";
		character = "oski_corran_asphalt_Character";
		soundHit = "concrete";
		impact = "hitconcrete";
		lucidity = 0.3;
		grassCover = 1.0;
	};*/
	class oski_corran_mud_Surface: Default
	{
		/*files = "oski_corran_mud_*";
		rough = 0.08;
		maxSpeedCoef = 0.6;
		dust = 0;
		soundEnviron = "forest";
		surfaceFriction = 1.8;
		character = "oski_corran_mud_Character";
		soundHit = "soft_ground";
		impact = "hitgroundsoft";
		lucidity = 4;
		grassCover = 0.1;*/
		ACE_canDig = 1;
	};
	/*class oski_main_road_surface: oski_corran_asphalt_Surface
	{
		character = "empty";
		files = "oski_main_road*";
	};
	class oski_roadtarmac_highway_surface: oski_corran_asphalt_Surface
	{
		character = "empty";
		files = "oski_roadtarmac_highway*";
	};*/
	class oski_roaddirt_path_surface: oski_corran_wornground_Surface
	{
		/*character = "empty";
		files = "oski_roaddirt_path*";*/
		ACE_canDig = 1;
	};
	class oski_roaddirt_road_surface: oski_corran_wornground_Surface
	{
		/*character = "empty";
		files = "oski_roaddirt_road*";*/
		ACE_canDig = 1;
	};
};