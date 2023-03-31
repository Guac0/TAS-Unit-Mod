class CfgWeapons
{
	/*class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;*/

	class Pistol_Base_F;
	class hgun_Pistol_heavy_01_F: Pistol_Base_F {
		class WeaponSlotsInfo;
	}; //.45 ACP (custom covert) from vanilla

	class TAS_TB17A: hgun_Pistol_heavy_01_F {
		author = "TBONE and Guac";
		//_generalMacro = "hgun_ACPC2_F";
		displayname = "TB17A/C";
		descriptionShort = "Integrally Suppressed Handgun<br />Caliber: .45 ACP";

		scope = 2;
		scopeArsenal = 2;
		model = "\A3\Weapons_F_EPA\Pistols\Pistol_heavy_01\Pistol_heavy_01_F.p3d";
		picture = "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_01\data\UI\gear_pistol_heavy_01_X_ca.paa";
		//reloadAction = "GestureReloadPistol";
		magazines[] = {"TAS_TB17A_17rnd_Mag"}; //fallback
		magazineWell[] = { "TAS_TB17A_magGroup" };
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\a3\weapons_f\pistols\p07\data\p07_co.paa"};
		
		//magazineReloadSwitchPhase = 0.4; /// part of reload animation when new magazine ammo count should affect "revolving" animation source
		//discreteDistanceInitIndex = 0; /// Ironsight zeroing is the lowest value by default
		/*class Library
		{
			libTextDesc = "The ACP-C2 is a custom version of the classic C-1911. A single-action self-loading pistol design remained and new materials allowed even better speed, precision and increased durability. The ACP-C2 is equipped with self-illuminating sights that provide a tactical advantage in low light conditions.";
		};*/
		//drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\dry_Acpc2", 0.398107, 1, 20};
		drySound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_TB17A\Sound\clickFunny", 0.398107, 1, 20};
		//reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\reload_ACPC2", 1, 1, 30};
		reloadMagazineSound[] = {"Autismo_Seals_Unit_Mod\addons\TAS_TB17A\Sound\reload", 1, 1, 30};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			soundBurst = false; //When set to false, the single shot sound can be used with burst mode - it will be played several times.
			soundContinuous = false; // If true, the sound for the next shot won't start before previous one ends. Thus you can prevent sound overlapping
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_01", 0.316228, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_02", 0.316228, 1.1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
			};
			class StandardSound: BaseSoundModeType //replace standard with suppressed
			{
				/*begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01", 1, 1, 600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02", 1, 1, 600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03", 1, 1, 600};*/
				begin1[] = {"Autismo_Seals_Unit_Mod\addons\TAS_TB17A\Sound\bang1", 1, 1, 600};
				begin2[] = {"Autismo_Seals_Unit_Mod\addons\TAS_TB17A\Sound\bang2", 1, 1, 600};
				begin3[] = {"Autismo_Seals_Unit_Mod\addons\TAS_TB17A\Sound\bang3", 1, 1, 600};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin2", 0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior", 1, 1, 600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees", 1, 1, 600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest", 1, 1, 600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows", 1, 1, 600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses", 1, 1, 600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"4Five_silencerShot_SoundSet", "4Five_silencerTail_SoundSet", "4Five_silencerInteriorTail_SoundSet"};
			};
			//recoil = "recoil_pistol_heavy";
			//recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.25;
			/*dispersion = 0.01015;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;

			minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 400; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
			*/
		};
		class FullAuto: Mode_FullAuto
		{
			soundBurst = false; //When set to false, the single shot sound can be used with burst mode - it will be played several times.
			soundContinuous = false; // If true, the sound for the next shot won't start before previous one ends. Thus you can prevent sound overlapping
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_01", 0.316228, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_02", 0.316228, 1.1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
			};
			class StandardSound: BaseSoundModeType //replace standard with suppressed
			{
				/*begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01", 1, 1, 600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02", 1, 1, 600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03", 1, 1, 600};*/
				begin1[] = {"Autismo_Seals_Unit_Mod\addons\TAS_TB17A\Sound\bang1", 1, 1, 600};
				begin2[] = {"Autismo_Seals_Unit_Mod\addons\TAS_TB17A\Sound\bang2", 1, 1, 600};
				begin3[] = {"Autismo_Seals_Unit_Mod\addons\TAS_TB17A\Sound\bang3", 1, 1, 600};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin2", 0.34};
			};
			class SoundTails
			{
				class TailInterior
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior", 1, 1, 600};
					frequency = 1;
					volume = "interior";
				};
				class TailTrees
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees", 1, 1, 600};
					frequency = 1;
					volume = "(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest", 1, 1, 600};
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
				};
				class TailMeadows
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows", 1, 1, 600};
					frequency = 1;
					volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses", 1, 1, 600};
					frequency = 1;
					volume = "(1-interior/1.4)*houses";
				};
			};
			SoundSetShot[] = {"4Five_silencerShot_SoundSet", "4Five_silencerTail_SoundSet", "4Five_silencerInteriorTail_SoundSet"};
		};
		//recoil = "recoil_pistol_heavy";
		//recoilProne = "recoil_prone_pistol_heavy";
		reloadTime = 0.25;
		/*dispersion = 0.01015;
		minRange = 5;
		minRangeProbab = 0.3;
		midRange = 25;
		midRangeProbab = 0.6;
		maxRange = 50;
		maxRangeProbab = 0.1;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 25;

		minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
		midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
		maxRange = 400; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		*/

		//sounds when empty casings hit the ground. note: no .45 is available
		/*bullet1[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_01", 0.501187, 1, 15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_02", 0.501187, 1, 15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_03", 0.501187, 1, 15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_04", 0.501187, 1, 15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_01", 0.398107, 1, 15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_02", 0.398107, 1, 15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_03", 0.398107, 1, 15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_04", 0.398107, 1, 15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_01", 0.223872, 1, 15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_02", 0.223872, 1, 15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_03", 0.223872, 1, 15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_04", 0.223872, 1, 15};
		soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
		*/
		
		
		inertia = 0.25; /// inertia coefficient of the weapon. common values are 0.1 for a pistol, 0.5 for a rifle, 0.7 for machinegun and around 1.0 for a launcher
		dexterity = 2; // In-game weapon handling value, lower value = takes more time to traverse a weapon.
		initSpeed = -1; //take bullet speed from cfgMagazines
		
		//maxRecoilSway=0.0125; // Size of recoil sway of the cursor
        //swayDecaySpeed=1.25; // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
		recoil = "recoil_pistol_4five";
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 40;
			holsterScale = 0.95;
			/*class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"optic_MRD"};
				iconPosition[] = {0.6, 0.27};
				iconScale = 0.15;
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_acp"};
				iconPosition[] = {0.24, 0.35};
				iconScale = 0.2;
			};*/
		};

		/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////
		/*opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;

		distanceZoomMin = 300;
		distanceZoomMax = 300;
		*/
	};

	/*
	class Test_weapon_01_Base_F: Rifle_Base_F /// Just basic values common for all testing rifle variants
	{
		magazines[] = {30Rnd_test_mag_Tracer, test_mag_group}; /// original custom made magazines and a group of several standardized mags
		reloadAction = "GestureReloadMX"; /// MX hand animation actually fits this rifle well
		magazineReloadSwitchPhase = 0.4; /// part of reload animation when new magazine ammo count should affect "revolving" animation source
		discreteDistanceInitIndex = 0; /// Ironsight zeroing is the lowest value by default

		// Size of recoil sway of the cursor
		maxRecoilSway=0.0125;
        // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
        swayDecaySpeed=1.25;
		/// inertia coefficient of the weapon. common values are 0.1 for a pistol, 0.5 for a rifle, 0.7 for machinegun and around 1.0 for a launcher
		inertia = 0.5;

		/// positive value defines speed of the muzzle independent on the magazine setting, negative value is a coefficient of magazine initSpeed
		initSpeed = -1; /// this means that initSpeed of magazine is used

		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; 	/// this can be set, but having some common helps a bit
				compatibleItems[] = {"test_suppressor"}; 				/// A custom made suppressor for this weapon
				iconPosition[] = {0.0, 0.45};							/// position of the slot icon inside of the weapon icon, relative to top-left corner in {right, down} format
				iconScale = 0.2;										/// scale of icon described in iconPicture
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa"; 	/// icon for selected slot
				iconPinpoint = "Center"; 										/// top, bottom, left, right, center alignment of the icon on snap point
			};
			class CowsSlot: CowsSlot /// default accessories for this slot
			{
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot /// default accessories for this slot
			{
				iconPosition[] = {0.20, 0.45};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
			{
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
				compatibleItems[] = {"test_bipod_01_F"};
			};
		};

/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;

		distanceZoomMin = 300;
		distanceZoomMax = 300;
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////

		descriptionShort = "Testing weapon with grenade launcher"; /// displayed on mouseOver in Inventory
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_gl.rtm"}; /// MX hand animation actually fits this rifle well
		dexterity = 1.8;

//caseless ammo//
		caseless[] = {"",1,1,1};  /// no sound of ejected brass
		soundBullet[] = {caseless,1};

		selectionFireAnim = "muzzleFlash"; /// are we able to get rid of all the zaslehs?

		modes[] = {Single, FullAuto, fullauto_medium, single_medium_optics1, single_far_optics2}; /// Includes fire modes for AI

    ////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////

		class Single: Mode_SemiAuto /// Pew
		{
			// the new parameter to distinguish muzzle accessories type
			sounds[] =
			{
				StandardSound, // default sound
				SilencedSound // silenced sound - weapon with silencer on
			};

			class StandardSound
			{
				// array of sounds (SoundSet names) to be played at the game event (shot)
				// number of SoundSets in array is not limited
				// consider that several ms lag could appear between each SoundSet is played
				// closure (bolt action) sound definition should be part of SoundSet
				soundSetShot[] =
				{
					Test_Weapon_01_Shot_SoundSet,
					Test_Weapon_01_Tail_SoundSet
				};
			};

			class SilencedSound
			{
				soundSetShot[] =
				{
					Test_Weapon_01_silencerShot_SoundSet,
					Test_Weapon_01_silencerTail_SoundSet
				};
			};

			reloadTime = 0.096; /// means some 625 rounds per minute
			dispersion = 0.00087; /// A bit less than 3 MOA

			recoil = "recoil_single_Test_rifle_01"; /// defined in cfgRecoils
			recoilProne = "recoil_single_prone_Test_rifle_01"; /// defined in cfgRecoils

			minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 400; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};

		class FullAuto: Mode_FullAuto /// Pew-pew-pew-pew-pew
		{
			sounds[] =
			{
				StandardSound,
				SilencedSound
			};

			class StandardSound
			{
				soundSetShot[] =
				{
					Test_Weapon_01_Shot_SoundSet,
					Test_Weapon_01_Tail_SoundSet
				};
			};

			class SilencedSound
			{
				soundSetShot[] =
				{
					Test_Weapon_01_silencerShot_SoundSet,
					Test_Weapon_01_silencerTail_SoundSet
				};
			};

			reloadTime = 0.096;
			dispersion = 0.00087;

			recoil = "recoil_auto_Test_rifle_01"; /// defined in cfgRecoils
			recoilProne = "recoil_auto_prone_Test_rifle_01"; /// defined in cfgRecoils

			minRange = 0; minRangeProbab = 0.9;
			midRange = 15; midRangeProbab = 0.7;
			maxRange = 30; maxRangeProbab = 0.1;

			aiRateOfFire = 0.000001;
		};

		class fullauto_medium: FullAuto /// Pew, pew, pew only for AI
		{
			showToPlayer = 0;
			burst = 3;

			minRange = 2; minRangeProbab = 0.5;
			midRange = 75; midRangeProbab = 0.7;
			maxRange = 150; maxRangeProbab = 0.05;

			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
    //////////////////////////////////////////////////// OPTICS //////////////////////////////////////////////////

		class single_medium_optics1: Single /// Pew for AI with collimator sights
		{
			requiredOpticType = 1;
			showToPlayer = 0;

			minRange = 2; minRangeProbab = 0.2;
			midRange = 450; midRangeProbab = 0.7;
			maxRange = 600; maxRangeProbab = 0.2;

			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};

		class single_far_optics2: single_medium_optics1	/// Pew for AI with better sights
		{
			requiredOpticType = 2;
			showToPlayer = 0;

			minRange = 100; minRangeProbab = 0.1;
			midRange = 500; midRangeProbab = 0.6;
			maxRange = 700; maxRangeProbab = 0.05;

			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};

		class Test_GL_F: UGL_F /// Some grenade launcher to have some more fun
		{
			displayName = "Test grenade launcher";
			descriptionShort = "TGL";
			useModelOptics = false;
			useExternalOptic = false; /// Doesn't use optics from the attachment, has it's own
			magazines[] = {1Rnd_HE_Grenade_shell};
			cameraDir = "OP_look";
			discreteDistance[] = {100, 200, 300, 400};
			discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"}; /// the angle of gun changes with zeroing
			discreteDistanceInitIndex = 1; /// 200 is the default zero
		};

		aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
		aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
		drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10}; /// custom made sounds
		reloadMagazineSound[]={"A3\sounds_f\weapons\reloads\new_MX",db-8,1, 30}; /// custom made sounds
	};

	class Test_weapon_01_F: Test_weapon_01_Base_F
	{
		scope = 2; /// should be visible and useable in game
		displayName = "Test weapon"; /// some name
		model = "\Samples_f\Test_weapon_01\test_weapon_01_F.p3d"; /// path to model

		picture = "\Samples_f\Test_weapon_01\Data\UI\gear_test_weapon_01_X_CA.paa"; /// different accessories have M, S, T instead of X
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {this, Test_GL_F}; /// to be able to switch between bullet muzzle and TGL

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100; /// some rough estimate
		};
	};
	*/

	/**** SLOTABLE WEAPONS ****/

	/*class Test_weapon_01_holo_pointer_F: Test_weapon_01_F /// standard issue variant with holo optics and laser pointer
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};*/

	/// include accessory from separate file to not clutter this one
	//#include "accessory.hpp"
};