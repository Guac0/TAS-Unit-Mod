// Located in root config
class CfgMagazineWells
{
	class TAS_magWell_Revolver
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		TAS_Revolver_Grapple_Magazines[] =
		{
			"TAS_1Rnd_grappleSmall"
		};
	};
	class M320_408
	{
		TAS_M320_Grapple_Magazines[] =
		{
			"TAS_1Rnd_grappleLarge"
		};
	};
};

class CfgMagazines
{
	class TAS_6Rnd_Slug;
	class TAS_1Rnd_grappleSmall : TAS_6Rnd_Slug
	{
		scope = 2;
		displayName = "Small Grapple";
		displayNameShort = "Grapple";
		descriptionshort = "Used in: THE Revolver.";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		ammo = "TAS_grappleAmmoSmall";
		initSpeed = 300;
		count = 1;
		mass = 	2;
		magazineGroup[]	= {"TAS_revolver_mag_group"};
	};
	class 7Rnd_408_Mag;
	class TAS_1Rnd_grappleLarge: 7Rnd_408_Mag
	{
		author = "Guac";
		scope = 2;
		displayName = "Large Grapple";
		//picture = "\A3\weapons_f\data\UI\m_M24_CA.paa";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		count = 1;
		ammo = "TAS_grappleAmmoBig";
		initSpeed = 600;
		descriptionShort = "Used in: M320 LRR";
		mass = 4;
	};
};