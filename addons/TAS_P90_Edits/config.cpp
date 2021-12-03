//Adds a new type of ammo to the official P90/ADR with a hit/caliber value of a B_762x54_Ball (Used in the Rahim), made by Guac. Retexture by Phantom.
class CfgPatches {

	class TAS_P90_Edits
	{
		name = "TAS P90 Edits Addon";
		units[] = {"TAS_Weapon_P90_TR_Pink"};
		weapons[] = {"TAS_P90_TR_Pink"};
		requiredAddons[] = {"A3_Weapons_F_Mod"};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};

};

class Mode_SemiAuto;

class CfgWeapons
{
	class Rifle_Base_F;
	class SMG_03_TR_BASE: Rifle_Base_F //all p90s inherit from this one
	{
		magazines[] += {"TAS_50Rnd_570x28_EP_SMG_03"};
	};
	class SMG_03C_TR_black;
	class TAS_P90_TR_Pink: SMG_03C_TR_black
	{
		scope = 2;
		scopeCurator = 2;
		author = "Phantom and Guac";
		displayName = "P90 TR (Pink)";
		//picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_ca.paa";
		//UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Autismo_Seals_Unit_Mod\addons\TAS_P90_Edits\Textures\body_pink.paa"};
	};
};

class CfgVehicles
{
	class Weapon_Base_F;
	class TAS_Weapon_P90_TR_Pink: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P90 TR (Pink)";
		author = "Phantom and Guac";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class TAS_P90_TR_Pink
			{
				weapon = "TAS_P90_TR_Pink";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class TAS_50Rnd_570x28_EP_SMG_03
			{
				magazine = "TAS_50Rnd_570x28_EP_SMG_03";
				count = 1;
			};
		};
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class 50Rnd_570x28_SMG_03;
	class TAS_50Rnd_570x28_EP_SMG_03: CA_Magazine
	{
		author = "Guac";
		scope = 2;
		displayName = "5.7mm 50Rnd EP Magazine";
		ammo = "TAS_570x28_EP_Ball";
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
	class TAS_570x28_EP_Ball: BulletBase
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