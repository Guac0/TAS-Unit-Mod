//AiO 20968
#include "cfgMagazines.hpp" /// specific magazines for this rifle
//#include "cfgAmmo.hpp" /// specific ammo for this rifle
class CfgPatches
{
	class TAS_FlareGun
	{
		addonRootClass="A3_Weapons_F";
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		version = "0.3";
		units[]={};
		weapons[]=
		{
			"hgun_TAS_FlareGun"
		};
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
		model="Autismo_Seals_Unit_Mod\addons\TAS_FlareGun\flaregun1.p3d"; //WIP model, might break
		picture="A3\Weapons_F\Data\placeholder_co.paa";
		magazines[]=
		{
			TAS_FlareGun_MagGreen,
			TAS_FlareGun_MagRed
		};
		displayname="Flaregun";
		descriptionShort="It's a flaregun.";
		/* class Library
		{
			libTextDesc="Test Pistol Library Description";
		}; */
		reloadAction="GestureReloadPistolHeavy02";
		//recoil="recoil_pistol_zubr";
		/*hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_co",
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
		};*/
		/*drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\dry_Zubr",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\reload_Zubr",
			0.56234133,
			1,
			10
		};*/
		modes[]=
		{
			"Single"
		};
		/*class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Closure_Zubr_01", 0.199526, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Closure_Zubr_02", 0.199526, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_01", 3.16228, 1, 1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_02", 3.16228, 1, 1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_03", 3.16228, 1, 1400};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_interior", 1.41254, 1, 1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_trees", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_forest", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_meadows", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_houses", 1, 1, 1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Zubr_Shot_SoundSet", "Zubr_Tail_SoundSet", "Zubr_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy"; */
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
		initSpeed=400;
		maxZeroing=100;
		/*class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale=0.85000002;
			class CowsSlot: CowsSlot_Rail_Pistol
			{
				iconPosition[]={0.40000001,0.30000001};
				iconScale=0.15000001;
			};
			class MuzzleSlot
			{
			};
			class PointerSlot: PointerSlot_Pistol
			{
				iconPosition[]={0.34999999,0.60000002};
				iconScale=0.30000001;
			};
		};*/
	};
//};
