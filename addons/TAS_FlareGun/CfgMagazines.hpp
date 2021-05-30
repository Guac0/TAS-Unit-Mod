class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class TAS_FlareGun_MagGreenCluster : CA_Magazine
	{
		ammo = Sub_F_Signal_Green;
		scope = 2;
		displayName = "1Rnd Green Cluster Flare";
		displayNameShort = "Green Cluster Flare";
		descriptionshort = "Used in: TAS Flaregun";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		count = 1;
		mass = 	3;
		initSpeed = 300;
	};
	class TAS_FlareGun_MagRedCluster : TAS_FlareGun_MagGreenCluster
	{
		ammo = Sub_F_Signal_Red;
		displayName = "1Rnd Red Cluster Flare";
		displayNameShort = "Red Cluster Flare";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
	};
	class TAS_FlareGun_MagWhite : TAS_FlareGun_MagGreenCluster
	{
		ammo = F_40mm_White;
		displayName = "1Rnd White Flare";
		displayNameShort = "White Flare";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		mass = 	2;
	};
	class TAS_FlareGun_MagRed : TAS_FlareGun_MagWhite
	{
		ammo = F_40mm_Red;
		displayName = "1Rnd Red Flare";
		displayNameShort = "Red Flare";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
	};
	class TAS_FlareGun_MagGreen : TAS_FlareGun_MagWhite
	{
		ammo = F_40mm_Red;
		displayName = "1Rnd Green Flare";
		displayNameShort = "Green Flare";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
	};
	class TAS_FlareGun_MagYellow : TAS_FlareGun_MagWhite
	{
		ammo = F_40mm_Red;
		displayName = "1Rnd Yellow Flare";
		displayNameShort = "Yellow Flare";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
	};
	class TAS_FlareGun_MagCir : TAS_FlareGun_MagWhite
	{
		ammo = F_40mm_Cir;
		displayName = "1Rnd IR Flare";
		displayNameShort = "IR Flare";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
	};
};