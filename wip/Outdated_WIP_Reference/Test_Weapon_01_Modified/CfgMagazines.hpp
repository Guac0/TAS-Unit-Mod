class CfgMagazines
{
	class Default;

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
	};
	
	class 10Rnd_test_mag: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "10rnd Test magazine";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon
		ammo = B_Test_Caseless_Slow;
		count = 10; /// 10 rounds is enough
		initSpeed = 5; /// low muzzle speed
		tracersEvery = 1; /// disable tracers by default
		lastRoundsTracer = 10; /// tracers to track low ammo
		descriptionShort = "Used to shoot slow test bullets"; /// on mouse-over in Inventory
		magazineGroup[]	= {"test_mag_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
};