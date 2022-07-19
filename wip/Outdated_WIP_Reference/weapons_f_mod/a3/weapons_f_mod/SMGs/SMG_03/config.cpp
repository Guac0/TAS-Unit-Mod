////////////////////////////////////////////////////////////////////
//DeRap: weapons_f_mod\SMGs\SMG_03\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Sun Nov 14 18:11:18 2021 : 'file' last modified on Mon Nov 09 07:37:21 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class A3_Weapons_F_Mod_SMGs_SMG_03
	{
		addonRootClass = "A3_Weapons_F_Mod";
		requiredAddons[] = {"A3_Weapons_F_Mod"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"SMG_03_black","SMG_03_camo","SMG_03_hex","SMG_03_khaki","SMG_03_TR_black","SMG_03_TR_camo","SMG_03_TR_hex","SMG_03_TR_khaki","SMG_03C_black","SMG_03C_camo","SMG_03C_hex","SMG_03C_khaki","SMG_03C_TR_black","SMG_03C_TR_camo","SMG_03C_TR_hex","SMG_03C_TR_khaki"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CowsSlot;
class PointerSlot;
class SlotInfo;
class MuzzleSlot;
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
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class SMG_03_TR_BASE: Rifle_Base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03_TR_BASE";
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_BASE0";
		model = "\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03_TR.p3d";
		modelOptics = "-";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		dlc = "OfficialMod";
		magazines[] = {"50Rnd_570x28_SMG_03"};
		muzzles[] = {"this"};
		modes[] = {"Single","FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mod\SMGs\SMG_03\data\Anim\P90.rtm"};
		reloadAction = "GestureReload_smg_03";
		recoil = "recoil_smg_03";
		magazineReloadSwitchPhase = 0.4;
		inertia = 0.3;
		aimTransitionSpeed = 1.3;
		dexterity = 1.7;
		initSpeed = -1.1;
		maxZeroing = 800;
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_ca.paa";
		UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		descriptionShort = "$STR_A3_CfgWeapons_SMG_03_TR_BASE1";
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_SMG_03_TR_BASE_Library0";
		};
		class OpticsModes
		{
			class Kolimator
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "opticView";
				opticsFlare = 0;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
			};
		};
		reloadMagazineSound[] = {"A3\Sounds_F_Mod\arsenal\weapons\SMG\ADR_97\ADR_97_Reload",1.0,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Mod\arsenal\weapons\SMG\ADR_97\ADR_97_Firemode",1.0,1,5};
		drySound[] = {"A3\Sounds_F_Mod\arsenal\weapons\SMG\ADR_97\ADR_97_Dry",1.0,1,10};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.7943282,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.7943282,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.7943282,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.7943282,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.7943282,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.7943282,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.7943282,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.7943282,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.7943282,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.7943282,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.7943282,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.7943282,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Single: Mode_SemiAuto
		{
			multiplier = 1;
			burst = 1;
			reloadTime = 0.0666667;
			dispersion = 0.001;
			soundContinuous = 0;
			autoFire = 0;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 0;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ADR_97_Shot_SoundSet","ADR_97_Tail_SoundSet","ADR_97_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet","ADR_97_silencerTail_SoundSet","ADR_97_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			multiplier = 1;
			burst = 1;
			reloadTime = 0.0666667;
			dispersion = 0.001;
			soundContinuous = 0;
			autoFire = 1;
			aiRateOfFire = 0.08;
			aiRateOfFireDistance = 0;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ADR_97_Shot_SoundSet","ADR_97_Tail_SoundSet","ADR_97_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet","ADR_97_silencerTail_SoundSet","ADR_97_silencerInteriorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.4,0.3};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[] = {0.33,0.37};
				iconScale = 0.25;
			};
			class MuzzleSlot: MuzzleSlot_57
			{
				iconPosition[] = {0.0,0.5};
				iconScale = 0.25;
			};
			mass = 50;
		};
	};
	class SMG_03C_BASE: SMG_03_TR_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03C_BASE";
		maxZeroing = 600;
		initSpeed = -1;
		inertia = 0.2;
		aimTransitionSpeed = 1.4;
		dexterity = 1.8;
		class Single: Single
		{
			dispersion = 0.0012;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.0012;
		};
	};
	class SMG_03_TR_black: SMG_03_TR_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03_TR_black";
		scope = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_black0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_black_ca.paa";
	};
	class SMG_03_TR_camo: SMG_03_TR_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03_TR_camo";
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_camo0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_camo_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
	};
	class SMG_03_TR_khaki: SMG_03_TR_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03_TR_khaki";
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_khaki0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_khaki_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
	};
	class SMG_03_TR_hex: SMG_03_TR_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03_TR_hex";
		scope = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_hex0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_hex_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
	};
	class SMG_03C_TR_black: SMG_03C_BASE
	{
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03C_TR_black";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_black0";
		model = "\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03C_TR.p3d";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_black_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0.15,0.5};
			};
			mass = 40;
		};
	};
	class SMG_03C_TR_camo: SMG_03C_TR_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03C_TR_camo";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_camo0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_camo_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
	};
	class SMG_03C_TR_khaki: SMG_03C_TR_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03C_TR_khaki";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_khaki0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_khaki_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
	};
	class SMG_03C_TR_hex: SMG_03C_TR_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03C_TR_hex";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_hex0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_hex_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
	};
	class SMG_03_black: SMG_03_TR_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03_black";
		scope = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_black0";
		model = "\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03.p3d";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_black_ca.paa";
		class WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_57
			{
				iconPosition[] = {0.0,0.5};
				iconScale = 0.25;
			};
			mass = 50;
		};
		class OpticsModes: OpticsModes
		{
			class Kolimator: Kolimator{};
			class IronSight: Kolimator
			{
				opticsID = 2;
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsPPEffects[] = {};
			};
		};
	};
	class SMG_03_camo: SMG_03_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03_camo";
		displayName = "$STR_A3_CfgWeapons_SMG_03_camo0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_camo_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
	};
	class SMG_03_khaki: SMG_03_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03_khaki";
		displayName = "$STR_A3_CfgWeapons_SMG_03_khaki0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_khaki_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
	};
	class SMG_03_hex: SMG_03_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03_hex";
		displayName = "$STR_A3_CfgWeapons_SMG_03_hex0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_hex_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
	};
	class SMG_03C_black: SMG_03C_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03C_black";
		scope = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03C_black0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_black_ca.paa";
		model = "\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03C.p3d";
		class WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_57
			{
				iconPosition[] = {0.15,0.5};
				iconScale = 0.25;
			};
			mass = 40;
		};
		class OpticsModes: OpticsModes
		{
			class Kolimator: Kolimator{};
			class IronSight: Kolimator
			{
				opticsID = 2;
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsPPEffects[] = {};
			};
		};
	};
	class SMG_03C_camo: SMG_03C_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03C_camo";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_camo0";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_camo_ca.paa";
	};
	class SMG_03C_khaki: SMG_03C_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03C_khaki";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_khaki0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_khaki_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
	};
	class SMG_03C_hex: SMG_03C_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SMG_03C_hex";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_hex0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_hex_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
	};
};
