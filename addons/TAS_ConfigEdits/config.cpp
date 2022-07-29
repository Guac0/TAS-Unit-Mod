//Halves the weight of mortar ammunition, allowing for greater loads to be carried (both for convience for transferring between crate and gun, and to make entirely man-portable mortars easier)
//~~Additionally, adds ACE trenches compatibility to Scottish Highlands map~~ Temp removed
//Lowers weapon sway to 50%
//Made by Guac
class CfgPatches {

	class TAS_Config_Edits
	{
		name = "TAS Config Edits";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"ace_mk6mortar","ace_trenches","A3_Data_F_Sams_Loadorder"/*"oski_corran"*/}; //TODO: find updated loadorder for old man
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


class CfgBreathing
{
	maxHoldTime = 12;
	coefSpeed = 2.5;
	outOfBreathCoef = 5;
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
		rate = 7;
		decay = 3;
		maximum = 5;
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
