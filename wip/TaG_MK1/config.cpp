//adds an extremely-large sniper rifle modeled by TBONE and configed by Guac
//#include "cfgMagazines.hpp" /// specific magazines for this rifle
//#include "cfgAmmo.hpp" /// specific ammo for this rifle
class CfgPatches
{
	class TaG_MK1
	{
		addonRootClass="A3_Weapons_F";
		requiredAddons[]={"A3_Weapons_F"};
		units[]={};
		weapons[]=
		{
			"TAS_TaG_MK1_F"
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
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;
class CfgWeapons
{
	//class srifle_GM6_F
	//{
	//	
	//};
	//class TAS_TaG_MK1_F: srifle_GM6_F
	//{
	//	author="TAS Mod Team";
	//	scope=2;
	//	model="TaG_MK1\NTW_20.p3d";
	//	displayname="Test Long Rifle";
	//	descriptionShort="It's a test long rifle";
	//	class Library
	//	{
	//		libTextDesc="Test Long Rifle Library Description";
	//	};
	//};
	class Rifle_Long_Base_F;
	class TAS_GM6_base_F: Rifle_Long_Base_F
		{
			scope = 0;
			magazines[] = {"5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag"};
			reloadAction = "ReloadGM6";
			recoil = "recoil_gm6";
			maxZeroing = 2200;
			cursor = "srifle";
			maxRecoilSway = 0.03;
			swayDecaySpeed = 1.25;
			handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\LongRangeRifles\GM6\Data\Anim\GM6.rtm"};
			opticsPPEffects[] = {};
			opticsFlare = 1;
			opticsDisablePeripherialVision = 1;
			class GunParticles
			{
				class FirstEffect
				{
					effectName = "SniperCloud";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			distanceZoomMin = 100;
			distanceZoomMax = 350;
			bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.794328, 1, 15};
			bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.794328, 1, 15};
			bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.794328, 1, 15};
			bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.794328, 1, 15};
			bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 15};
			bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 15};
			bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 15};
			bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 15};
			bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 15};
			bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 15};
			bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 15};
			bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 15};
			soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
			modes[] = {"Single", "far_optic1", "medium_optic2", "far_optic2"};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_dry", 0.562341, 1, 15};
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_reload", 1, 1, 10};
			soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy", 0.707946, 1, 20};
			soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold", 0.707946, 1, 20};
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
			class Single: Mode_SemiAuto
			{
				dispersion = 0.00035;
				soundContinuous = 0;
				reloadTime = 0.4;
				recoil = "recoil_single_gm6";
				recoilProne = "recoil_single_prone_gm6";
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_01", 0.398107, 1, 40};
					closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_02", 0.398107, 1, 40};
					soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_short_01", 7.94328, 1, 2200};
					begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_short_02", 7.94328, 1, 2200};
					soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
					class SoundTails
					{
						class TailForest
						{
							sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest", 1, 1, 2200};
							frequency = 1;
							volume = "(1-interior/1.4)*forest";
						};
						class TailHouses
						{
							sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses", 1, 1, 2200};
							frequency = 1;
							volume = "(1-interior/1.4)*houses";
						};
						class TailInterior
						{
							sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior", 1.99526, 1, 2200};
							frequency = 1;
							volume = "interior";
						};
						class TailMeadows
						{
							sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows", 1, 1, 2200};
							frequency = 1;
							volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
						};
						class TailTrees
						{
							sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees", 1, 1, 2200};
							frequency = 1;
							volume = "(1-interior/1.4)*trees";
						};
					};
					soundSetShot[] = {"GM6Lynx_Shot_SoundSet", "GM6Lynx_Tail_SoundSet", "GM6Lynx_InteriorTail_SoundSet"};
				};
				minRange = 2;
				minRangeProbab = 0.5;
				midRange = 150;
				midRangeProbab = 0.7;
				maxRange = 450;
				maxRangeProbab = 0.3;
				aiRateOfFire = 3;
				aiRateOfFireDistance = 500;
				class SilencedSound: BaseSoundModeType {};
			};
			class far_optic1: Single
			{
				showToPlayer = 0;
				minRange = 150;
				minRangeProbab = 0.2;
				midRange = 500;
				midRangeProbab = 0.7;
				maxRange = 1500;
				maxRangeProbab = 0.4;
				aiRateOfFire = 3;
				aiRateOfFireDistance = 500;
				requiredOpticType = 1;
			};
			class medium_optic2: Single
			{
				showToPlayer = 0;
				minRange = 250;
				minRangeProbab = 0.2;
				midRange = 750;
				midRangeProbab = 0.7;
				maxRange = 1000;
				maxRangeProbab = 0.4;
				aiRateOfFire = 5;
				aiRateOfFireDistance = 1000;
				requiredOpticType = 2;
			};
			class far_optic2: far_optic1
			{
				minRange = 500;
				minRangeProbab = 0.2;
				midRange = 1200;
				midRangeProbab = 0.7;
				maxRange = 2100;
				maxRangeProbab = 0.3;
				aiRateOfFire = 7;
				aiRateOfFireDistance = 1000;
				requiredOpticType = 2;
			};
		};
		class TAS_srifle_GM6_F: TAS_GM6_base_F
		{
			author = "TAS Mod Team";
			_generalMacro = "srifle_GM6_F";
			scope = 2;
			//model = "\A3\Weapons_F\LongRangeRifles\GM6\GM6_F.p3d";
			model="Autismo_Seals_Unit_Mod\addons\TaG_MK1\NTW_20.p3d";
			//class WeaponSlotsInfo: WeaponSlotsInfo
			//{
			//	mass = 480;
			//	class MuzzleSlot {};
			//	class CowsSlot: CowsSlot
			//	{
			//		iconPosition[] = {0.55, 0.3};
			//		iconScale = 0.2;
			//	};
			//	class PointerSlot {};
			//};
			inertia = 1.2;
			dexterity = 1;
			class ItemInfo
			{
				priority = 1;
			};
			displayName = "Test Long Rifle";
			picture = "\A3\Weapons_F\LongRangeRifles\GM6\Data\UI\gear_gm6_X_CA.paa";
			UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
			class Library
			{
				libTextDesc = "The Gepard GM6 Lynx is a semi-automatic anti-material rifle using Russian 12.7x108 mm ammo. Its purpose is to stop or disable targets such as light armored vehicles, light shelters and helicopters from 600â€“800 m range. Due to its weight and portability, it is good for parachute, airmobile and territorial troops. The barrel recoil technology brings the recoil of the GM6 below the recoil of other rifles in the same category. The weapon is highly accurate and effective up to a range of 1500 m.";
			};
			descriptionShort = "Sniper Rifle<br />Caliber: 12.7x108 mm Russian";
			deployedPivot = "bipod";
			hasBipod = 1;
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		};
};
