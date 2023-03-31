//#include "basicdefines_A3.hpp"
//hgun_Pistol_heavy_01_F
class CfgPatches
{
	class TAS_TB17A
	{
		units[]={
			"TAS_TB17A_17rnd_Mag",
			"TAS_TB17A_17rnd_Tracer_Mag",
			"TAS_TB17A_61rnd_Tracer_Mag",
			"TAS_Weapon_TB17A"
		};
		weapons[]={"TAS_TB17A"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F"};
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

//#include "cfgRecoils.hpp" /// specific recoil patterns for this rifle
#include "cfgMagazines.hpp" /// specific magazines for this rifle
//#include "cfgAmmo.hpp" /// specific ammo for this rifle
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"