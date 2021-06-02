//adds a custom revolver and ammo, config by Guac and (eventually) model by TBONE
#include "cfgMagazines.hpp" /// specific magazines for this rifle
#include "cfgAmmo.hpp" /// specific ammo for this rifle
class CfgPatches
{
	class TAS_Revolver
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"//,
			//"TAS_BrightLite"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"TAS_hgun_revolver",
			"TAS_hgun_revolver_Yorris_F"//,
			//"hgun_test_pistol_brightlite"
			//"TAS_T&G_MK1_F"
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
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class TAS_hgun_revolver: Pistol_Base_F
	{
		author="TAS Mod Team";
		_generalMacro="hgun_test_pistol_F";
		baseWeapon="hgun_test_pistol_F";
		scope=2;
		model="\A3\Weapons_F_EPA\Pistols\Pistol_heavy_02\Pistol_heavy_02_F.p3d";
		//model="TAS_Revolver\Gun_go_BRRRRv1.p3d";
		picture="\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\UI\gear_Pistol_heavy_02_X_CA.paa";
		magazines[]=
		{
			6Rnd_45ACP_Cylinder,
			//TAS_6Rnd_00Buck,
			//TAS_6Rnd_Slug,
			//TAS_6Rnd_FRAG,
			//TAS_6Rnd_doomsday_Buck //remove to test magwell
		};
		magazineWell[]=
		{
			"TAS_magWell_Revolver"
		};
		displayname="Revolver";
		descriptionShort="It's THE Revolver";
		class Library
		{
			libTextDesc="Revolver Library Description";
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
		drySound[]=
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
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
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
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.25;
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
		dexterity=1.7;
		initSpeed=480;
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
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
		};
	};
	class TAS_hgun_revolver_Yorris_F: TAS_hgun_revolver
	{
		author="TAS Mod Team";
		//_generalMacro="hgun_test_pistol_Yorris_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Yorris";
			};
		};
	};
};

//magWell definition
class CfgMagazineWells
{
	class TAS_magWell_Revolver
	{
		TAS_Magazines[] =
		{
			"TAS_6Rnd_00Buck",
			"TAS_6Rnd_Slug",
			"TAS_6Rnd_FRAG",
			"TAS_6Rnd_doomsday_Buck"
		};
		// Magazines defined 
		BI_Magazines[] =
		{
			"6Rnd_45ACP_Cylinder"
		};
	};
};