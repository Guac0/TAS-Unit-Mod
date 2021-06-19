//Adds a flaregun and ammo modeled by Tolly and configed by Guac
#include "cfgMagazines.hpp" /// specific magazines for this rifle
//#include "cfgAmmo.hpp" /// specific ammo for this rifle
class CfgPatches
{
	class TAS_FlareGun
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		}; //also ace3 grenades but since that's not set up don't worry about it, we're always going to use ace and if not it's probably not a critical error
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"hgun_TAS_FlareGun"
		};
		author = "TAS Mod Team";
		authorUrl = "https://discord.gg/invite/mcXfzqR5Kn";
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_TAS_FlareGun: Pistol_Base_F
	{
		author="TAS Mod Team";
		scope=2;
		model="Autismo_Seals_Unit_Mod\addons\TAS_FlareGun\flaregun.p3d"; //WIP model, might break
		picture="A3\Weapons_F\Data\placeholder_co.paa";
		magazines[]=
		{
			TAS_FlareGun_MagWhite //others defined via magWell, this is a fallback
		};
		magazineWell[]=
		{
			"TAS_magWell_FlareGun"
		};
		displayname="Flaregun";
		descriptionShort="It's a flaregun.";
		class Library
		{
			libTextDesc="FlareGun Library Description";
		};
		reloadAction="GestureReloadPistolHeavy02";
		recoil="recoil_pistol_zubr";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_co",
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
		};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl", 0.316228, 1, 5};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL", 0.562341, 1, 10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl", 0.562341, 1, 10};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1, 1, 10};
				soundClosure[] = {"closure1", 1};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01", 0.707946, 1, 200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02", 0.707946, 1, 200};
				soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
				soundSetShot[] = {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
			}; //doesnt have different sound based on enviroment
			class SilencedSound: BaseSoundModeType {}; //can probably get rid of this
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.5;
			dispersion=0.00145;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		bullet1[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			1
		};
		inertia=0.30000001;
		aimTransitionSpeed=1.5;
		dexterity=3;
		initSpeed = -1;
		//initSpeed=250;
		maxZeroing=100;
		/*class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale=0.85000002;
			class CowsSlot: CowsSlot_Rail_Pistol
			{
				compatibleitems[] = {};
				//iconPosition[]={0.40000001,0.30000001};
				//iconScale=0.15000001;
			};
			class MuzzleSlot
			{
			};
			class PointerSlot: PointerSlot_Pistol
			{
				iconPosition[]={0.34999999,0.60000002};
				iconScale=0.30000001;
			};
		}; */
	};
};

//magWell definition
class CfgMagazineWells
{
	class TAS_magWell_FlareGun
	{
		TAS_Magazines[] =
		{
			"TAS_FlareGun_MagGreenCluster",
			"TAS_FlareGun_MagRedCluster",
			"TAS_FlareGun_MagWhite",
			"TAS_FlareGun_MagRed",
			"TAS_FlareGun_MagGreen",
			"TAS_FlareGun_MagYellow",
			"TAS_FlareGun_MagCir"
		};
		ACE[] = 
		{
			"ACE_40mm_flare_white",
			"ACE_40mm_flare_red",
			"ACE_40mm_flare_green",
			"ACE_40mm_flare_ir"
		};
		// Magazines defined 
		/*BI_Magazines[] =
		{
			"6Rnd_45ACP_Cylinder"
		};*/
	};
};

//UGL code, used for sounds in flaregun
/*
class UGL_F: GrenadeLauncher
		{
			displayName = "EGLM";
			magazines[] = {"1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
			changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl", 0.316228, 1, 5};
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL", 0.562341, 1, 10};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl", 0.562341, 1, 10};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1, 1, 10};
					soundClosure[] = {"closure1", 1};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01", 0.707946, 1, 200};
					begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02", 0.707946, 1, 200};
					soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
					soundSetShot[] = {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
				};
				recoil = "M240Recoil";
				recoilProne = "M240Recoil";
				minRange = 30;
				minRangeProbab = 0.1;
				midRange = 200;
				midRangeProbab = 0.7;
				maxRange = 400;
				maxRangeProbab = 0.05;
			};
			recoil = "recoil_default";
			magazineReloadTime = 0;
			reloadTime = 0.1;
			optics = 1;
			modelOptics = "-";
			cameraDir = "UGL look";
			memoryPointCamera = "UGL eye";
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.25;
			opticsZoomInit = 0.75;
			weaponInfoType = "RscWeaponZeroing";
		};*/