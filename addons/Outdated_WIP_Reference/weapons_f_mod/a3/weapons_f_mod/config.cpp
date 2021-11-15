////////////////////////////////////////////////////////////////////
//DeRap: weapons_f_mod\config.bin
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
	class A3_Weapons_F_Mod
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Official Mod - Weapons and Accessories";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Mod"};
		requiredVersion = 0.1;
		units[] = {"Item_muzzle_snds_570","Weapon_SMG_03_black","Weapon_SMG_03_camo","Weapon_SMG_03_hex","Weapon_SMG_03_khaki","Weapon_SMG_03_TR_black","Weapon_SMG_03_TR_camo","Weapon_SMG_03_TR_hex","Weapon_SMG_03_TR_khaki","Weapon_SMG_03C_black","Weapon_SMG_03C_camo","Weapon_SMG_03C_hex","Weapon_SMG_03C_khaki","Weapon_SMG_03C_TR_black","Weapon_SMG_03C_TR_camo","Weapon_SMG_03C_TR_hex","Weapon_SMG_03C_TR_khaki"};
		weapons[] = {"muzzle_snds_570"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_570x28_Ball: BulletBase
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
class CfgMagazines
{
	class CA_Magazine;
	class 50Rnd_570x28_SMG_03: CA_Magazine
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
class CfgRecoils
{
	class recoil_default;
	class recoil_SMG_03: recoil_default
	{
		muzzleOuter[] = {0.2,0.6,0.2,0.2};
		kickBack[] = {0.01,0.03};
		temporary = 0.01;
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Pistol_Base_F;
	class Launcher_Base_F;
	class Item_Base_F;
	class Weapon_SMG_03_TR_black: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_black0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03_TR_black
			{
				weapon = "SMG_03_TR_black";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03_TR_camo: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_camo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03_TR_camo
			{
				weapon = "SMG_03_TR_camo";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03_TR_khaki: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_khaki0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03_TR_khaki
			{
				weapon = "SMG_03_TR_khaki";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03_TR_hex: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_hex0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03_TR_hex
			{
				weapon = "SMG_03_TR_hex";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03C_TR_black: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_black0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03C_TR_camo: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_camo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03C_TR_camo
			{
				weapon = "SMG_03C_TR_camo";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03C_TR_khaki: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_khaki0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03C_TR_hex: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_hex0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03C_TR_hex
			{
				weapon = "SMG_03C_TR_hex";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03_black: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_black0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03_black
			{
				weapon = "SMG_03_black";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03_camo: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_camo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03_camo
			{
				weapon = "SMG_03_camo";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03_khaki: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_khaki0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03_khaki
			{
				weapon = "SMG_03_khaki";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03_hex: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_hex0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03_hex
			{
				weapon = "SMG_03_hex";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03C_black: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03C_black0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03C_black
			{
				weapon = "SMG_03C_black";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03C_camo: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03C_camo0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03C_camo
			{
				weapon = "SMG_03C_camo";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03C_khaki: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03C_khaki0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03C_khaki
			{
				weapon = "SMG_03C_khaki";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Weapon_SMG_03C_hex: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03C_hex0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class SMG_03C_hex
			{
				weapon = "SMG_03C_hex";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Item_muzzle_snds_570: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_570";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_FrontSlot";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class muzzle_snds_570
			{
				name = "muzzle_snds_570";
				count = 1;
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_570: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "muzzle_snds_570";
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		dlc = "OfficialMod";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_570";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\A3\Weapons_F\acc\acca_snds_l_F.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
			class MagazineCoef
			{
				initSpeed = 1.05;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		inertia = 0.2;
	};
};
