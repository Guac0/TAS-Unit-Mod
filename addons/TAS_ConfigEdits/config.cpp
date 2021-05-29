//Adds a new type of ammo to the official P90/ADR with a hit/caliber value of a B_762x54_Ball (Used in the Rahim)
class CfgPatches {

	class TAS_ConfigEdits
	{
		name = "TAS Config Edits Addon";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F_Mod"};
		version = "0.3";
		author[]= {"TAS Mod Team"};
		authorUrl = "https://steamcommunity.com/id/YT_YYG_Gaming";
	};

};

class CfgWeapons
{
	class Rifle_Base_F;
	class SMG_03_TR_BASE: Rifle_Base_F
	{
		magazines[] += {TAS_50Rnd_570x28_SMG_03};
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class TAS_50Rnd_570x28_SMG_03: CA_Magazine
	{
		author = "Guac";
		scope = 2;
		displayName = "50Rnd P90 EP Magazine";
		ammo = "TAS_570x28_Ball";
		count = 50;
		initSpeed = 715;
		picture = "\a3\weapons_f_mod\data\m_adr97mag_ca.paa";
		tracersEvery = 0;
		descriptionShort = "A P90 magazine containing 50 Enhanced Performance rounds.";
		mass = 12;
	};
};

class CfgAmmo
{
	class BulletBase;
	class TAS_570x28_Ball: BulletBase
	{
		//caliber = 0.559441;
		caliber = 1.6;
		//hit = 8;
		hit = 12;
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