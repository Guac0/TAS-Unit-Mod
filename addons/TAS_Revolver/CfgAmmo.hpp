class CfgAmmo
{
	class BulletBase;
	class B_12Gauge_Pellets;
	class TAS_ammo_m576_buckshot: B_12Gauge_Pellets
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0.6;
		cartridge = "";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};

	// 00 Buck
	class TAS_ammo_12g_00buckshot: B_12Gauge_Pellets
	{
		hit						= 20; // for AI
		simulation				= shotSubmunitions;
		simulationStep			= 0.0001;
		triggerTime				= 0.0001;
		triggerSpeedCoef[]		= {0.84,1.0};
		//submunitionAmmo			= rhs_ammo_12g_00buckshot_pellet;
		submunitionAmmo = TAS_ammo_12g_00buckshot_pellet;
		submunitionConeType[]	= {"poissondisccenter", 9};
		submunitionConeAngle	= 0.95;
		cartridge				= "";
		model					= "\A3\weapons_f\empty";
		//rhs_cartridge			= "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_buckshot";
	};
	class TAS_ammo_12g_00buckshot_pellet: BulletBase
	{
		hit = 4.75;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.24;

		typicalSpeed = 403.86;
		airFriction = -0.00634;

		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class TAS_ammo_doomsday_buckshot: TAS_ammo_m576_buckshot
	{
		hit = 10; //originally 9 (for previous doomsday before buff)
		indirectHit = 10; //originally 9
		indirectHitRange = 0.6;
	};

	class B_12Gauge_Slug;
	// 437 Grain slug
	class TAS_ammo_12g_slug: B_12Gauge_Slug
	{
		hit = 34.51;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.3048;
		cartridge = "";
		//rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_slug";
		typicalSpeed = 475.49;
		airFriction = -0.002042;

	};

	// HE FRAG
	class TAS_ammo_12g_FRAG : B_12Gauge_Slug
	{
		hit = 7; //originally 6 before buff
		indirectHit = 1.5; //original 1.143
		indirectHitRange = 2;
		caliber = 0.2;
		cartridge = "";
		//rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_hefrag";

		typicalSpeed = 150;
		airFriction = -0.0069;

		timeToLive = 5;

		deflecting = 0;
		explosive = 1;
		
		//might not work — WORKS
		explosionEffects = "ExploAmmoExplosion";
		//explosionEffects = "RHSUSF_12gExplosion";
		CraterEffects = "";

		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 15;
		suppressionRadiusHit = 14;

		soundHit1[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_1", 1.6, 1, 1200 };
		soundHit3[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_3", 1.6, 1, 1200 };
		soundHit4[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_4", 1.6, 1, 1200 };
		soundHit6[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_6", 1.6, 1, 1200 };
		multiSoundHit[] = { "soundHit1", 0.25, "soundHit3", 0.25, "soundHit4", 0.25, "soundHit6", 0.25 };
		explosionSoundEffect = "DefaultExplosion";

		class CamShakeExplode
		{
			power = "(9*0.2)";
			duration = "((round (9^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((1 + 9^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 9;
			duration = "((round (9^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
/*
	// HE AP ~ 10mm RHA EPF
	class TAS_ammo_12g_HE : rhs_ammo_12g_FRAG
	{
		//HEAT_MACRO(rhs_ammo_12gHEAP_penetrator)

		hit = 1.575;
		indirectHit = 1.143;
		indirectHitRange = 0.986;
		caliber = 0.1;
		//rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_heer";

		typicalSpeed = 150;
		airFriction = -0.0074;

		deflecting = 0;
	};
	class TAS_ammo_12gHEAP_penetrator : BulletBase
	{
		hit = 10;
		indirectHit = 0;
		deflecting = 0;
		typicalSpeed = 1000;
		RHA(13, 1000)
		cartridge = "";

		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
	};*/
/*	class BulletBase;
	class B_Test_Caseless: BulletBase
	{
		hit = 10;indirectHit = 0;indirectHitRange = 0; /// seems like standard 6.5mm round
		cartridge = "FxCartridge_65_caseless"; /// seems like standard 6.5mm round
		visibleFire = 5; /// how big does the shooter seem to be for AI to take notice after he shoots
		audibleFire = 8; /// how big does the shooter seem to be for AI to take notice after he shoots
		cost = 1.2; /// pretty cheap to fire at anything, comes into shoot efficiency calculation mentioned in the weapon
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir; 
			/// see http://forums.bistudio.com/showthread.php?159711-Development-Branch-Captain-s-AI-Log&p=2945231&viewfull=1#post2945231 for details
			/// values are defined in basicDefines_A3.hpp
		typicalSpeed = 820;
		caliber = 1.0; /// caliber 1 equals 6.5mm round

		model = \A3\Weapons_f\Data\bullettracer\tracer_red; /// just for tracer
		tracerScale = 10.0; /// how big is the flying tracer
		tracerStartTime = 0.01; // seconds
		tracerEndTime = 10; // seconds
		airFriction = -0.00096;
		 //z:
			//air friction value was set carefully to match RL ballistic table with high fidelity
			//source: http://www.shootingtimes.com/wp-content/blogs.dir/11/files/6-5mm-grendel-the-round-the-military-ought-to-have/6-5mm-grendel_009.jpg
		
		
		dangerRadiusBulletClose 		= 8;	/// defines how far the AI gets alerted by the projectile's impact or explosion. Default value -1 makes this distance be automatically derived from the hit and indirectHit properties.
		dangerRadiusHit 				= 12;	/// defines how far the AI gets alerted by the bullet's pass. Default value -1 disables the detection. (works only for bullets, no other projectiles)
		suppressionRadiusBulletClose 	= 6;	/// defines the max. distance at which the AI becomes suppressed by the projectile's impact or explosion. Default value -1 disables the suppressive effect
		suppressionRadiusHit 			= 8;	/// defines the max. distance at which the AI becomes suppressed by the bullet's pass. Default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
		shootDistraction 				= 10;	/// -1 by default to be computed from visibleFire and audibleFire, describes how much does the shoot distract the shooter
		
		class CamShakeFire /// doesn't cause any camera shake
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire /// doesn't cause any camera shake
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		
	}; */

};
/*		class B_45ACP_Ball: BulletBase
		{
			hit = 4;
			indirectHit = 0;
			indirectHitRange = 0;
			dangerRadiusBulletClose = 4;
			dangerRadiusHit = 8;
			suppressionRadiusBulletClose = 2;
			suppressionRadiusHit = 4;
			cartridge = "FxCartridge_9mm";
			model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
			caliber = 0.4;
			deflecting = 30;
			audibleFire = 45;
			cost = 100;
			typicalSpeed = 280;
			airFriction = -0.0018;
			tracerScale = 0.6;
			tracerStartTime = 0.0075;
			tracerEndTime = 5;
		};
		class B_45ACP_Ball_Green: B_45ACP_Ball
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		};
		class B_45ACP_Ball_Yellow: B_45ACP_Ball
		{
			model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		};*/