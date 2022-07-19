class CfgAmmo
{
	class BulletBase;
	class 200x111_Ball: BulletBase
	{
		hit = 35;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 5;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		visibleFireTime = 3;
		cost = 5;
		airLock = 1;
		caliber = 2.8;
		typicalSpeed = 820;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.5;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00086;
		class CamShakeExplode
		{
			power = "(13^0.5)";
			duration = "((round (13^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((13^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 13;
			duration = "((round (13^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class 200x111_APDS: B_127x108_Ball
	{
		hit = 60;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 3.6;
		deflecting = 10;
		typicalSpeed = 1060;
		airFriction = -0.00036;
		cost = 15;
		class CamShakeExplode
		{
			power = "(20^0.5)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
};