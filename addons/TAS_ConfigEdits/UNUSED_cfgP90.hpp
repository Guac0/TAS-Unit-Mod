50Rnd_570x28_SMG_03
SMG_03_TR_BASE
weapons F mod
class CfgMagazines
{
	class CA_Magazine;
	class TAS_50Rnd_570x28_SMG_03: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_50Rnd_570x28_SMG_031";
		ammo = "B_570x28_Ball";
		count = 50;
		initSpeed = 715;
		picture = "\a3\weapons_f_mod\data\m_adr97mag_ca.paa";
		tracersEvery = 0;
		descriptionShort = "$STR_A3_CfgMagazines_50Rnd_570x28_SMG_032";
		mass = 12;
	};
};
class CfgAmmo
{
	class BulletBase;
	class TAS_570x28_Ball: BulletBase
	{
		caliber = 0.559441;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 715;
		airFriction = -0.001412;
		deflecting = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		audibleFire = 25;
		visibleFire = 3;
		visibleFireTime = 5;
		dangerRadiusBulletClose = 8;
		suppressionRadiusBulletClose = 6;
		dangerRadiusHit = 12;
		suppressionRadiusHit = 8;
	};
};