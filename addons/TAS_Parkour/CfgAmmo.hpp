class CfgAmmo {
	class B_12Gauge_Slug;
	// 437 Grain slug
	class TAS_grappleAmmoSmall: B_12Gauge_Slug
	{
		hit = 1; //greater than 0 for hit detection
		indirectHit = 0;
		indirectHitRange = 0;
		//cartridge = "FxCartridge_slug";
		cartridge = ""; //dont discard shell
		cost = 999; //AI only
		typicalSpeed = 300; //a bit slow since sidearm. default 600
		airFriction = -0.008; //descent rate
		caliber = 0; //dont penetrate
		deflecting = 0; //dont deflect
		visibleFire = 0; //stealthy
		audibleFire = 0;
		visibleFireTime = 0;
		timeToLive = 10;
	};

	class B_408_Ball;
	class TAS_grappleAmmoBig: B_408_Ball
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 0;
		audibleFire = 0;
		visibleFireTime = 0;
		cost = 999;
		airLock = 0;
		caliber = 0;
		typicalSpeed = 600;
		timeToLive = 10;
		deflecting = 0;
		//model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		model = "";
		tracerScale = 1.2;
		//tracerStartTime = 0.075;
		//tracerEndTime = 1;
		tracerStartTime = 0;
		tracerEndTime = 0;
		airFriction = -0.00048;
		class CamShakeExplode
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakeHit
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
};