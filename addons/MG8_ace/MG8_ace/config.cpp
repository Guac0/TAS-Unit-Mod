////////////////////////////////////////////////////////////////////
//DeRap: MG8_ace\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Fri Jul 15 17:36:18 2022 : 'file' last modified on Wed Dec 31 19:00:01 1969
////////////////////////////////////////////////////////////////////

#define _ARMA_

class cfgPatches
{
	class MG8_ace_a10c
	{
		units[] = {};
		weapons[] = {"Gatling_30mm_Plane_CAS_01_F"};
		requiredVersion = 1.7;
		requiredAddons[] = {"A3_Weapons_F","A3_Air_F","A3_Air_F_EPC","A3_Air_F_EPC_Plane_CAS_01","MG8_core","ace_aircraft"};
		author = "Zabuza";
	};
};
class CfgWeapons
{
	class CannonCore;
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		modes[] = {"MG8_autoHi","MG8_close","MG8_near","MG8_short","MG8_medium","MG8_far"};
	};
};
class cfgMods
{
	author = "Zabuza";
	timepacked = "1497628178";
};
