#include "basicdefines_A3.hpp"
class CfgPatches
{
	class Test_weapon_F
	{
		units[]={};
		weapons[]={"Test_weapon_01_F", "Test_weapon_01_holo_pointer_F"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F", "Test_Sounds_F"};
	};
};
/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

/// Weapon slots
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

#include "cfgRecoils.hpp" /// specific recoil patterns for this rifle
#include "cfgMagazines.hpp" /// specific magazines for this rifle
#include "cfgAmmo.hpp" /// specific ammo for this rifle

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;

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
		/// inertia coefficient of the weapon
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

	/**** SLOTABLE WEAPONS ****/

	class Test_weapon_01_holo_pointer_F: Test_weapon_01_F /// standard issue variant with holo optics and laser pointer
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
	};

	/// include accessory from separate file to not clutter this one
	#include "accessory.hpp"
};
