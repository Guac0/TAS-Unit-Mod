////////////////////////////////////////////////////////////////////
//DeRap: MG8_cup\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Fri Jul 15 17:31:32 2022 : 'file' last modified on Wed Dec 31 19:00:01 1969
////////////////////////////////////////////////////////////////////

#define _ARMA_

class cfgPatches
{
	class MG8_cup_a10c2
	{
		units[] = {"CUP_B_A10_CAS_USA","CUP_B_A10_AT_USA"};
		weapons[] = {};
		requiredVersion = 1.7;
		requiredAddons[] = {"A3_Weapons_F","A3_Air_F","A3_Air_F_EPC","A3_Air_F_EPC_Plane_CAS_01","MG8_core","CUP_AirVehicles_Core","CUP_Creatures_Military_USArmy","CUP_AirVehicles_A10"};
		author = "Zabuza";
	};
};
class CfgVehicles
{
	class Air;
	class Plane;
	class CUP_A10_Base;
	class CUP_B_A10_CAS_USA: CUP_A10_Base
	{
		weapons[] = {"CUP_weapon_mastersafe","Gatling_30mm_Plane_CAS_01_F","CUP_Vblauncher_GBU12_veh","CUP_Vblauncher_Mk82_veh","CUP_Vmlauncher_FFAR_veh","CUP_Vmlauncher_AIM9L_veh_2Rnd","CUP_Laserdesignator_mounted","CMFlareLauncher"};
		magazines[] = {"CUP_1Rnd_Sidewinder_A10_Pod_M","CUP_1Rnd_ALQ131_M","CUP_2Rnd_Hydra_Pod_19_Full_M","CUP_2Rnd_MK82_Rack_M","CUP_4Rnd_GBU12_M","CUP_1Rnd_pylonblank_M","CUP_2Rnd_AIM_9L_Sidewinder_External_M","CUP_2Rnd_pylonblank_M","CUP_6Rnd_Mk82_M","CUP_6Rnd_pylonblank_M","CUP_12Rnd_pylonblank_M","MG8_1174Rnd_Gau8_30mm","CUP_38Rnd_FFAR_M","Laserbatteries","168Rnd_CMFlare_Chaff_Magazine"};
	};
	class CUP_B_A10_AT_USA: CUP_A10_Base
	{
		weapons[] = {"CUP_weapon_mastersafe","Gatling_30mm_Plane_CAS_01_F","CUP_Vblauncher_Mk82_veh","CUP_Vmlauncher_AGM65_veh","CUP_Vmlauncher_FFAR_veh","CUP_Vmlauncher_AIM9L_veh_2Rnd","CUP_Laserdesignator_mounted","CMFlareLauncher"};
		magazines[] = {"CUP_1Rnd_Sidewinder_A10_Pod_M","CUP_1Rnd_ALQ131_M","CUP_2Rnd_Hydra_Pod_19_Full_M","CUP_2Rnd_MK82_Rack_M","CUP_4Rnd_Mk82_M","CUP_1Rnd_pylonblank_M","CUP_2Rnd_AIM_9L_Sidewinder_External_M","CUP_2Rnd_pylonblank_M","CUP_6Rnd_AGM65_Maverick_M","CUP_6Rnd_pylonblank_M","CUP_12Rnd_pylonblank_M","MG8_1174Rnd_Gau8_30mm","CUP_38Rnd_FFAR_M","Laserbatteries","168Rnd_CMFlare_Chaff_Magazine"};
	};
};
class cfgMods
{
	author = "Zabuza";
	timepacked = "1497628184";
};
