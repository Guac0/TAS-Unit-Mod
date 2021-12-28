class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class TAS_6Rnd_00Buck : CA_Magazine
	{
		scope = 2;
		displayName = "6rnd Buckshot";
		displayNameShort = "6rnd Buckshot";
		descriptionshort = "Used in: THE Revolver.";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		ammo = "TAS_ammo_12g_00buckshot";
		count = 6;
		mass = 	4;
		initSpeed = 336;
		magazineGroup[]	= {"TAS_revolver_mag_group"};
	};
	class TAS_6Rnd_Slug : TAS_6Rnd_00Buck
	{
		scope = 2;
		displayName = "6rnd Slug";
		displayNameShort = "6rnd Slug";
		descriptionshort = "Used in: THE Revolver.";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		ammo = "TAS_ammo_12g_slug";
		initSpeed = 395;
	};
/*	class TAS_6Rnd_HE : TAS_6Rnd_Slug
	{
		scope = 2;
		displayName = "6Rnd HE";
		displayNameShort = "6HE";
		descriptionshort = "Used in: THE Revolver.";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		ammo = "TAS_ammo_12g_HE";
		count = 6;
		mass = 	6;
		typicalSpeed = 125;
	};*/
	class TAS_6Rnd_FRAG : TAS_6Rnd_Slug
	{
		scope = 2;
		displayName = "6rnd FRAG";
		displayNameShort = "6rnd FRAG";
		descriptionshort = "Used in: THE Revolver.";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		ammo = "TAS_ammo_12g_FRAG";
		count = 6;
		mass = 	8;
		typicalSpeed = 125;
	};
	class TAS_6Rnd_doomsday_Buck : TAS_6Rnd_00Buck
	{
		scope = 2;
		scopeArsenal = 0;
		displayName = "6rnd Doosmday Buckshot";
		displayNameShort = "6rnd DOOMSDAY";
		descriptionshort = "Used in: THE Revolver.";
		ammo = "TAS_ammo_doomsday_buckshot";
		count = 6;
		mass = 	12;
	};
};