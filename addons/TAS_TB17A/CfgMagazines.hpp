// Located in root config
class CfgMagazineWells
{
	class TAS_TB17A_magGroup
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		TAS_Magazines[] =
		{
			"TAS_TB17A_17rnd_Mag",
			"TAS_TB17A_17rnd_Tracer_Mag",
			"TAS_TB17A_61rnd_Tracer_Mag"
		};
	};
};

class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class TAS_TB17A_17rnd_Mag: CA_Magazine 
	{
		scope = 2; /// or 2, to be precise
		displayName = "TB17A 17rnd Mag";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon
		ammo = "B_45ACP_Ball"; //red tracer from vanilla
		count = 17;
		initSpeed = 380;
		mass = 6;
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 4; /// tracers to track low ammo
		descriptionShort = "Caliber: .45 ACP<br />Rounds: 17<br />Tracers: Last 4 Rounds<br />Used in: TB17A/C"; /// on mouse-over in Inventory
		//magazineGroup[]	= {"TAS_TB17A_magGroup"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};

	class TAS_TB17A_17rnd_Tracer_Mag: TAS_TB17A_17rnd_Mag /// a magazine full of tracer rounds
	{
		tracersEvery = 1; /// moar tracers
		lastRoundsTracer = 30; /// tracers everywhere
		displayName = "TB17A 17rnd Tracer Mag";
		descriptionShort = "Caliber: .45 ACP<br />Rounds: 17<br />Tracers: All<br />Used in: TB17A/C";
		displaynameshort = "Tracers";
		//magazineGroup[]	= {"TAS_TB17A_magGroup"};
	};

	class TAS_TB17A_61rnd_Tracer_Mag: TAS_TB17A_17rnd_Tracer_Mag /// a magazine full of tracer rounds
	{
		scope = 2;
		//scopeArsenal = 0;
		count = 61;
		mass = 30;
		displayName = "TB17A 61rnd Tracer Mag";
		descriptionShort = "Caliber: .45 ACP<br />Rounds: 61<br />Tracers: All<br />Used in: TB17A/C";
	};

	/*
	class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01
		{
			author = "Bohemia Interactive";
			displayName = ".45 ACP 9Rnd Mag";
			descriptionShort = "Caliber: .45 ACP<br />Rounds: 9<br />Used in: ACP-C2";
			count = 9;
			mass = 6;
			lastRoundsTracer = 0;
			initSpeed = 280;
			ammo = "B_45ACP_Ball_Green";
		};
	*/
};