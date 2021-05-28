class CfgMagazines
{
	class Default;

	class CA_Magazine;
	//.12 Guage Shotgun mags
	class TAS_6Rnd_00Buck : CA_Magazine
	{
		scope = 2;
		displayName = "6Rnd Buckshot";
		displayNameShort = "6Buckshot";
		descriptionshort = "Used in: TEST PISTOL";

		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		//model = "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_buckshot";
		//modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_buckshot_1rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "TAS_ammo_12g_00buckshot";

		count = 6;
		mass = 	6;

		initSpeed = 336;
	};
	class TAS_6Rnd_Slug : TAS_6Rnd_00Buck
	{
		scope = 2;
		displayName = "6Rnd Slug";
		displayNameShort = "6Slug";
		descriptionshort = "Used in: TEST PISTOL";

		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		//model = "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_slug";
		//modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_slug_1rnd.p3d";
		ammo = "TAS_ammo_12g_slug";

		initSpeed = 395;
	};
/*	class TAS_6Rnd_HE : TAS_6Rnd_Slug
	{
		scope = 2;
		displayName = "6Rnd HE";
		displayNameShort = "6HE";
		descriptionshort = "Used in: TEST PISTOL";

		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		//model = "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_he";
		//modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_heer_1rnd.p3d";
		ammo = "TAS_ammo_12g_HE";

		count = 6;
		mass = 	6;

		typicalSpeed = 125;
	};*/
	class TAS_6Rnd_FRAG : TAS_6Rnd_Slug
	{
		scope = 2;
		displayName = "6rnd FRAG";
		displayNameShort = "6FRAG";
		descriptionshort = "Used in: TEST PISTOL";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		//model = "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_frag";
		//modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_hefrag_1rnd.p3d";
		ammo = "TAS_ammo_12g_FRAG";
		count = 6;
		mass = 	6;

		typicalSpeed = 125;
	};
	class TAS_6Rnd_doomsday_Buck : TAS_6Rnd_00Buck
	{
		scope = 2;
		//scopeArsenal = 0;
		displayName = "6rnd Doosmday Buckshot";
		displayNameShort = "6DOOMSDAY";
		descriptionshort = "Used in: TEST PISTOL";
		ammo = "TAS_ammo_doomsday_buckshot";
		count = 6;
		mass = 	12;
	};
/*	class Default;

	class CA_Magazine;

	class 30Rnd_test_mag: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "Test magazine";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon
		ammo = B_Test_Caseless;
		count = 30; /// 30 rounds is enough
		initSpeed = 795; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 4; /// tracers to track low ammo
		descriptionShort = "Used to shoot test bullets"; /// on mouse-over in Inventory
		magazineGroup[]	= {"test_mag_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};

	class 30Rnd_test_mag_Tracer: 30Rnd_test_mag /// a magazine full of tracer rounds
	{
		tracersEvery = 1; /// moar tracers
		lastRoundsTracer = 30; /// tracers everywhere
		displayName = "Test tracer magazine";
		descriptionShort = "Used to shoot test tracer bullets";
		displaynameshort = "Tracers";
		magazineGroup[]	= {"test_mag_group"};
	};*/
};
/*		class 11Rnd_45ACP_Mag: CA_Magazine
		{
			author = "Bohemia Interactive";
			scope = 2;
			displayName = ".45 ACP 11Rnd Mag";
			picture = "\A3\weapons_f\data\UI\M_16Rnd_9x21_CA.paa";
			count = 11;
			ammo = "B_45ACP_Ball";
			initSpeed = 380;
			sound[] = {"A3\sounds_f\dummysound", 31.6228, 1, 1600};
			reloadMagazineSound[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
			descriptionShort = "Caliber: .45 ACP<br />Rounds: 11<br />Used in: 4-five";
			mass = 7;
		};
		class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag
		{
			author = "Bohemia Interactive";
			picture = "\A3\Weapons_F_EPA\Data\ui\M_6Rnd_revolver_CA.paa";
			displayName = ".45 ACP 6Rnd Cylinder";
			descriptionShort = "Caliber: .45 ACP<br />Rounds: 6<br />Used in: Zubr";
			initSpeed = 420;
			count = 6;
			mass = 4;
		};*/