class CfgPatches
{
	class TAS_BananaGun
	{
		name = "TAS Banana Gun Addon";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"TAS_Revolver","A3_Weapons_F","ace_common"};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};

class cfgAmmo
{
    class TAS_ammo_12g_slug;
    class TAS_ammo_12g_00buckshot_pellet;
    class TAS_BananaSlug: TAS_ammo_12g_slug
	{
		model = "\z\ace\addons\common\data\banana.p3d";
	};
	class TAS_BananaBuckshot: TAS_ammo_12g_00buckshot_pellet
	{
		model = "\z\ace\addons\common\data\banana.p3d";
	};
};

class cfgMagazines
{
    class CA_Magazine;
    class TAS_6Rnd_BananaSlug : CA_Magazine
	{
		scope = 2;
		displayName = "6rnd Banana Slug";
		displayNameShort = "6rnd Banana Slug";
		descriptionshort = "Used in: THE Revolver.";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		ammo = "TAS_BananaSlug";
		count = 3;
		mass = 	4;
		initSpeed = 150;
		magazineGroup[]	= {"TAS_revolver_mag_group"};
	};
	class TAS_6Rnd_BananaBuckshot : CA_Magazine
	{
		scope = 2;
		displayName = "6rnd Banana Buckshot";
		displayNameShort = "6rnd Banana Buckshot";
		descriptionshort = "Used in: THE Revolver.";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		ammo = "TAS_BananaBuckshot";
		count = 3;
		mass = 	4;
		initSpeed = 150;
		magazineGroup[]	= {"TAS_revolver_mag_group"};
	};
};

class CfgMagazineWells
{
	class TAS_magWell_Revolver
	{
		TAS_Magazines[] +=
		{
			"TAS_6Rnd_BananaSlug",
			"TAS_6Rnd_BananaBuckshot"
		};
	};
};